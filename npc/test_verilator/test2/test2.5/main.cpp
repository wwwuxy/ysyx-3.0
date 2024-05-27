#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vencode83.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vencode83* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vencode83;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();

  top->en=0b0; top->x =0b00000000; step_and_dump_wave();
               top->x =0b00010000; step_and_dump_wave();
               top->x =0b00100000; step_and_dump_wave();
               top->x =0b01000000; step_and_dump_wave();
               top->x =0b10000000; step_and_dump_wave();
  top->en=0b1; top->x =0b11000000; step_and_dump_wave();
               top->x =0b00110000; step_and_dump_wave();
               top->x =0b01100000; step_and_dump_wave();
               top->x =0b11100000; step_and_dump_wave();
               top->x =0b11110000; step_and_dump_wave();
  sim_exit();
}
