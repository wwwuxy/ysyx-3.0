#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "include.h"
#include "VysyxSoCFull.h"  // create `top.v`,so use `VysyxSoCFull.h`
#include "verilated.h"
#include "verilated_vcd_c.h"  //可选，如果要导出vcd则需要加上
#include <svdpi.h>            // 包含SystemVerilog DPI头文件,实现verilog与c的双向通信


                 // int SIM_TIME = 10000;
#define RET  25  //soc的ret延迟二十个周期
int ret_num = 0;

bool     nemutrap     = false;
bool     difftest     = false;
bool     accpet_fault = false;
uint32_t inst         = 0;
uint32_t alu_out      = 0;
extern uint32_t npc_pc;
  // void print_reg(VysyxSoCFull *top);
  // void scanf_mem();
  // void sdb(char *c, VysyxSoCFull *top);
void ftrace(VysyxSoCFull *top);
void init_dut_reg(VysyxSoCFull *top);
  // bool finish_sdb = true;
extern u_int8_t mem[MEM_SIZE];
extern long size;
extern uint32_t npc_reg[32];
// extern uint32_t npc_pc;

  /*DPI - C*/
extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
void initialize_mem_with_ebreak();

extern "C" void mrom_read(int32_t addr, int32_t *data) { 
  uint8_t *haddr = (uint8_t *)guest_to_host(addr);
          *data  = *(uint32_t *)haddr;
  // printf("mrom_read: addr = 0x%08x, data = 0x%08x\n", addr, *data);
  return;
  assert(0); 
  }

extern "C" void npc_trap(bool flag) {
  nemutrap = flag;
};

extern "C" void npc_difftest(bool flag) {
  difftest = flag;
};

extern "C" void npc_accept_fault(bool flag) {
  accpet_fault = flag;
}

extern "C" void npc_dpic_pc(int now_pc) {
  npc_pc = now_pc;
}

extern "C" void npc_inst(int now_inst) {
  inst = now_inst;
}

extern "C" void npc_alu_out(int now_alu_out) {
  alu_out = now_alu_out;
}
  // extern void itrace(VysyxSoCFull *top);

void step_and_dump_wave(VysyxSoCFull* top, VerilatedVcdC* tfp, VerilatedContext* context){
  top->eval();
  tfp->dump       (context->time());  //将当前时刻的信号状态写入 VCD 文件中
  context->timeInc(1);                //推动仿真时间,每次迭代中，时间增加 1 个时间单位
}


bool rst = true;
int main(int argc, char** argv, char** env) {
  Verilated::commandArgs(argc, argv);

  VerilatedContext* contextp = new VerilatedContext;  //创建了一个 VerilatedContext 对象，该对象用于管理仿真过程中的一些全局状态和设置。
  contextp->commandArgs(argc, argv);
  VysyxSoCFull* top = new VysyxSoCFull{contextp};

 
  VerilatedVcdC*        tfp = new VerilatedVcdC;  //初始化VCD对象指针
  contextp->traceEverOn(true);                    //打开追踪功能
  top->trace           (tfp, 0);                  //这一行将顶层模块 top 的信号连接到波形文件生成器 tfp 上, 0 表示要跟踪的层次深度
  tfp->open            ("wave.vcd");              //设置输出文件wave.vcd到当前文件夹
 
  //初始化npc 
  init_npc(argc, argv);
  init_dut_reg(top);  //先把NPC的寄存器数据存放到npc_reg中，再初始化npc 

   while (!contextp->gotFinish()) { 
       top->reset        = 0;
    if(rst)   top->reset = 1;  //initial pc
    top->eval();

    if(contextp->time() % 2 == 0){
      top->clock = 0;
      top->eval();
    }
    if(contextp->time() % 2 == 1){
      top->clock = 1;
      if(rst){
        if(ret_num > RET){
        rst = false;
        }
        ret_num++;
      }
      top->eval();
    }
    
  // difftest
      if(difftest && contextp->time() % 2 == 1){
        // ftrace(top);
        
        if(rst){  //跳出初始化的比较
          printf("reset\n");
          difftest_skip();
        }
        init_dut_reg(top);
        // difftest_step();
        }

  //sdb

        // if(!finish_sdb){
        //   char c = getchar();
        //   sdb(&c, top);
        // }

      // printf("\n");
    step_and_dump_wave(top, tfp, contextp);
      // printf("clock = %d\n", top->clock);
        
  //for ebreak, finish simulation
    if(nemutrap) {
      if(top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT___GEN[10]== 0){  //读取a0寄存器的值
        printf("\033[;36mHIT GOOD TRAP!\033[0m\n");  //修改字体颜色
      }else{
        printf("\033[;36mHIT BAD TRAP!\033[0m\n");
      }
      break;  
    }
  /*    for accept_fault       */
    if(accpet_fault){
      printf("\033[;36mHIT BAD TRAP! ---> Accept Fault!!!\033[0m\n");
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
  // void print_reg(VysyxSoCFull *top){
  //   for(int i=0; i<32; i++){
  //     printf("x[%d] = 0x%08x\n", i, top->rootp->top__DOT__idu__DOT__RegisterFile__DOT___GEN[i]);
  //   }
  // }

  //  void scanf_mem(){
  //     printf("mem content:\n");
  //     for (int i = 0; i < size; i++) {
  //         printf("%02X ", mem[i]);
  //         if ((i + 1) % 16 == 0) {
  //         printf("\n");
  //         }
  //     }
  //     printf("\n");
  // }

  // void sdb(char *c, VysyxSoCFull *top){
  //   if(*c == 'r'){
  //     print_reg(top);
  //     getchar();
  //     getchar();
  //   }else if(*c == 'c'){
  //     finish_sdb = true;
  //     return;
  //   }else if(*c == 'm'){
  //     scanf_mem();
  //     getchar();
  //     getchar();
  //   }else{
  //     // getchar();
  //     return;
  //   }
  // }


  //for ftrace
void ftrace(VysyxSoCFull *top){
  int opcode = 0x0000007f;
  if((inst & opcode) == 0x0000006f || (inst & opcode) == 0x00000067 && inst != 0x00008067){
    top->eval();
    printf("pc = %x, inst = %08x\t [call %08x]\n", npc_pc, inst, alu_out);
  }else if(inst == 0x00008067){
    printf("pc = %x, inst = %08x\t [ret  %08x]\n", npc_pc, inst, top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT___GEN[1]);
  }else{
    return;
  }
}

  // for difftest
void init_dut_reg(VysyxSoCFull *top){   //把NPC的寄存器数据存放到npc_reg中
    for(int i=0; i<32; i++){
        npc_reg[i] = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT___GEN[i];
    }
}