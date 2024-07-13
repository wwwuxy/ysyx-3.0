#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "include.h"
#include "Vtop.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include <svdpi.h> // 包含SystemVerilog DPI头文件,实现verilog与c的双向通信



// int SIM_TIME = 10000;         //设置仿真时间上限

bool nemutrap = false;
void print_reg(Vtop *top);
void scanf_mem();
void sdb(char *c, Vtop *top);
void ftrace(Vtop *top);
void init_dut_reg(Vtop *top);
bool finish_sdb = true;
extern u_int8_t mem[MEM_SIZE];
extern long size;
extern uint32_t npc_reg[32];
extern uint32_t npc_pc;

// extern void itrace(Vtop *top);

void step_and_dump_wave(Vtop* top, VerilatedVcdC* tfp, VerilatedContext* context){
  top->eval();
  tfp->dump(context->time()); //将当前时刻的信号状态写入 VCD 文件中
  context->timeInc(1);  //推动仿真时间,每次迭代中，时间增加 1 个时间单位
}


bool rst = true;
int main(int argc, char** argv, char** env) {


  VerilatedContext* contextp = new VerilatedContext;//创建了一个 VerilatedContext 对象，该对象用于管理仿真过程中的一些全局状态和设置。
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

 
  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //这一行将顶层模块 top 的信号连接到波形文件生成器 tfp 上, 0 表示要跟踪的层次深度
  tfp->open("wave.vcd"); //设置输出文件wave.vcd到当前文件夹
 
//初始化npc
  
  init_dut_reg(top);  //先把NPC的寄存器数据存放到npc_reg中，再初始化npc
  init_npc(argc, argv);

   while (!contextp->gotFinish()) { 
    top->reset = 0;
    if(rst)   top->reset = 1;     //initial pc
    top->eval();

    if(contextp->time() % 2 == 0){
      top->clock = 0;
    }
    if(contextp->time() % 2 == 1){
      top->clock = 1;
      rst = false;
      top->eval();

      npc_pc = top->io_pc;
      top->eval();
      // printf("inst = %08x\n", top->io_inst);
      // printf("alu_out = %08x\n", top->io_alu_out);
      // printf("alu_op1 = %08x\n", top->io_alu_op1);
      // printf("alu_op2 = %08x\n", top->io_alu_op2);
      // printf("imm = %08x\n", top->io_imm);

//difftest
      // init_dut_reg(top);
      // difftest_step();


//sdb

      if(!finish_sdb){
        char c = getchar();
        sdb(&c, top);
      }
      // ftrace(top);
      
      if(top->io_inst == 0x00100073){  //ebreak
        nemutrap = true;
        if(top->rootp->top__DOT__RegisterFile__DOT___GEN[10] == 0){  //读取a0寄存器的值
          printf("\033[;36mHIT GOOD TRAP!\033[0m\n"); //修改字体颜色
        }
      }
    }
    // printf("\n");
    step_and_dump_wave(top, tfp, contextp);
        
//for ebreak, finish simulation
    if(nemutrap) {
      // SIM_TIME = contextp->time() + 1;  //for ebreak, finish simulation
      break;
    }
   }

//while循环结束，nemutrap还未被置true，说明没有触发ebreak
  if(!nemutrap){
    printf("\033[;36mHIT BAD TRAP!\033[0m\n");
}

//exit
  step_and_dump_wave(top, tfp, contextp);
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}


// for sdb 
void print_reg(Vtop *top){
  for(int i=0; i<32; i++){
    printf("x[%d] = 0x%08x\n", i, top->rootp->top__DOT__RegisterFile__DOT___GEN[i]);
  }
}

 void scanf_mem(){
    printf("mem content:\n");
    for (int i = 0; i < size; i++) {
        printf("%02X ", mem[i]);
        if ((i + 1) % 16 == 0) {
        printf("\n");
        }
    }
    printf("\n");
}

void sdb(char *c, Vtop *top){
  if(*c == 'r'){
    print_reg(top);
    getchar();
    getchar();
  }else if(*c == 'c'){
    finish_sdb = true;
    return;
  }else if(*c == 'm'){
    scanf_mem();
    getchar();
    getchar();
  }else{
    // getchar();
    return;
  }
}


//for ftrace
void ftrace(Vtop *top){
  int opcode = 0x0000007f;
  if((top->io_inst & opcode) == 0x0000006f || (top->io_inst & opcode) == 0x00000067 && top->io_inst != 0x00008067){
    top->eval();
    printf("pc = %x, inst = %08x\t [call %08x]\n", top->io_pc, top->io_inst, top->io_nextpc);
  }else if(top->io_inst == 0x00008067){
    printf("pc = %x, inst = %08x\t [ret  %08x]\n", top->io_pc, top->io_inst, top->rootp->top__DOT__RegisterFile__DOT___GEN[1]);
  }else{
    return;
  }
}

// for difftest
void init_dut_reg(Vtop *top){   //把NPC的寄存器数据存放到npc_reg中
    for(int i=0; i<32; i++){
        npc_reg[i] = top->rootp->top__DOT__RegisterFile__DOT___GEN[i];
    }
}