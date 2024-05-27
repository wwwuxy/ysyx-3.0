#include "Vkeyboard.h"
#include "verilated.h"
#include <nvboard.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vkeyboard* top);

static void single_cycle() {	
	dut.clk = 0; dut.eval();
	dut.clk = 1; dut.eval();
}

static void reset(int n ){
	dut.rst = 0;
	while(n-->0) single_cycle();
	dut.rst = 1;
}

int main( ) {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  while (1) {
	  nvboard_update();
	  single_cycle();
  }
   return 0;
}

