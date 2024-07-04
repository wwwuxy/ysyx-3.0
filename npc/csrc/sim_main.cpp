#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include "include.h"
#include "Vtop.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include <svdpi.h> // 包含SystemVerilog DPI头文件,实现verilog与c的双向通信

int SIM_TIME = 100;         //设置仿真时间上限

bool nemutrap = false;

// 模拟内存空间
// const u_int32_t instmem[10240] = {
// 0x00160413,                 //addi	s0,a2,1
// 0x00000297,                 //auipc rd = 5 存储的值为0x80000001
// 0x000011B7,                 //lui	rd = 3
// // 0x001283E7,                 //jalr	rd = 7 rs = 5 imm = 0，pc跳转至5号寄存器的值+imm，即0x80000001
// // 0x0040026F,                 //jal	rd = 4
// 0x00100072,                 //ebreak
// 0x00100072,                 //ebreak
// 0x00100072                 //ebreak
// };  

// uint32_t datamem[1024] = {0}; 


// uint32_t  pmem_read(uint32_t pc){
//   static uint32_t  base = 0x80000000; 
//   uint32_t inst;
//   if(pc != 0){
//     printf("pc = %x\n", pc);
//     // printf("base = %x\n", base);
//     assert(pc >= base);
//     inst = instmem[pc - base];
//     printf("inst = %08x\n", inst);
//     // base += 3;  //每次读取一个指令，地址加4
//   }
//   else inst = 0;
  
//   if(inst == 0x00100072) 
//     nemutrap = true;
//   return inst;
// }

// void  pmem_write(uint32_t addr, uint32_t data){
//   static uint32_t  base = 0x80000000;   //写入的地址变换有问题
//   if(addr != 0){
//     datamem[addr - base] = data;  
//   }
// }

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
  init_npc(argc, argv);
  // printf("init_npc done\n");
  // step_and_dump_wave(top, tfp, contextp);

   while (contextp->time() < SIM_TIME && !contextp->gotFinish()) { 

    top->reset = 0;
    if(rst)   top->reset = 1;     //initial pc
    top->eval();
    if(top->io_mem_wr == 1){
      // mem_write(top->io_addr, top->io_data);
    }

    if(contextp->time() % 2 == 0){ //seting clk
      top->clock = 0;
    }
    else{
      top->clock = 1;
      rst = false;
      top->eval();
      // top->io_inst = pmem_read(top->io_pc);
      // printf("即将要取的pc = %x\n", top->io_pc);
      top->io_inst = mem_read(top->io_pc, 4);
      // printf("pc = %x, inst = %08x\n", top->io_pc, top->io_inst);
      // top->eval();
      // printf("imm= %x\n",top->io_imm);
      // top->eval();
      if(top->io_inst == 0x00100073){  //ebreak
        nemutrap = true;
        if(top->io_a0 == 0){
          printf("\033[;36mHIT GOOD TRAP!\033[0m\n"); //修改字体颜色
        }else{
          printf("HIT BAD TRAP!\n");
        }
      }
    }
      // printf(rst ? "reset\n" : "run\n");  //打印当前状态
      // printf("top->reset = %d\n",top->reset);  //打印当前状态
    
    step_and_dump_wave(top, tfp, contextp);
        
    //for ebreak, finish simulation
    if(nemutrap) {
      SIM_TIME = contextp->time() + 1;  //for ebreak, finish simulation
      nemutrap = false;
    }
   }

//exit
  step_and_dump_wave(top, tfp, contextp);
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}

