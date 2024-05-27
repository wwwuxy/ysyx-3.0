#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vmux21.h"

VerilatedContext* contextp = NULL;//实例化上下文
VerilatedVcdC* tfp = NULL;//实例化波形文件

static Vmux21* top;//实例化mux21,用于后续追踪

void step_and_dump_wave(){  //更新电路+推动时钟
  top->eval();  //更新电路状态，每次循环必做
  contextp->timeInc(1);  //时钟前进
  tfp->dump(contextp->time()); //同上
}
void sim_init(){  //初始化
  contextp = new VerilatedContext;  //上下文初始化
  tfp = new VerilatedVcdC;  //波形文件初始化
  top = new Vmux21;  //mux21初始化
  contextp->traceEverOn(true);  //启动追踪
  top->trace(tfp, 0);  //将top与tfp进行关联
  tfp->open("dump.vcd"); //设置输出波形文件
}

void sim_exit(){  //退出
  step_and_dump_wave(); //退出前，时钟还要前进
  tfp->close();  //关闭退出
}

int main() {  //主函数
  sim_init();  //初始化

  top->s=0; top->a=0; top->b=0;  step_and_dump_wave();   // 将s，a和b均初始化为“0”
                      top->b=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，继续保持“0”，
            top->a=1; top->b=0;  step_and_dump_wave();   // 将a，b分别改为“1”和“0”，s的值不变，
                      top->b=1;  step_and_dump_wave();   // 将b改为“1”，s和a的值不变，维持10个时间单位
  top->s=1; top->a=0; top->b=0;  step_and_dump_wave();   // 将s，a，b分别变为“1,0,0”，维持10个时间单位
                      top->b=1;  step_and_dump_wave();
            top->a=1; top->b=0;  step_and_dump_wave();
                      top->b=1;  step_and_dump_wave();

  sim_exit();  //完成后退出
}
