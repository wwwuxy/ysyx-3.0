#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include<iostream>
#include "Vtop.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include <svdpi.h> // 包含SystemVerilog DPI头文件,实现verilog与c的双向通信

int SIM_TIME = 10;         //设置仿真时间上限

bool nemutrap = false;

const u_int32_t mem[1024] = {
0x00160413,                 //addi	s0,a2,1
0x00100072,                 //ebreak
0x00100072,                 //ebreak
0x00100072                 //ebreak
};  //表示内存空间


extern "C" uint32_t  pmem_read(uint32_t pc){  //DPI导出函数 read memery
  static uint32_t  base = 0x80000000; 
  uint32_t inst;
  // assert(pc >= base);
  if(pc != 0){
    inst = mem[pc - base];
    base += 3;
  }
  else inst = 0;
  
  if(inst == 0x00100072) 
    nemutrap = true;
  return inst;
}

// static void single_cycle()
// {
//   extern top;
//   top->clk = 0;
//   top->eval();
//   top->clk = 1;
//   top->eval();
// }


int main(int argc, char** argv, char** env) {
  bool rst = true;


  VerilatedContext* contextp = new VerilatedContext;//创建了一个 VerilatedContext 对象，该对象用于管理仿真过程中的一些全局状态和设置。
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

 
  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //这一行将顶层模块 top 的信号连接到波形文件生成器 tfp 上, 0 表示要跟踪的层次深度
  tfp->open("wave.vcd"); //设置输出文件wave.vcd到当前文件夹
 
 

   while (contextp->time() < SIM_TIME && !contextp->gotFinish()) {  //input
    // top->inst = pmem_read(top->pc);
    top->reset = 0;
    if(rst)   top->reset = 1;     //initial pc
    top->wen = 1;
    top->eval();

    if(contextp->time() %2 == 0){ //seting clk
      top->clk = 0;
    }
    else{
      top->clk = 1;
      // top->reset = 0;
      rst = false;
    }
    top->eval();

    // rst = false;
    // top->eval();
    tfp->dump(contextp->time()); //将当前时刻的信号状态写入 VCD 文件中
    contextp->timeInc(1); //推动仿真时间,每次迭代中，时间增加 1 个时间单位
    
    if(nemutrap) {
      SIM_TIME = contextp->time() + 1;  //for ebreak, finish simulation
      nemutrap = false;
    }
   }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}

