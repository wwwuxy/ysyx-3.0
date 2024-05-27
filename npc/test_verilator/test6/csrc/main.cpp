#include "Vtop.h"
#include "verilated.h"
#include <nvboard.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {	
	 dut.eval();
}

int main( ) {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  while (1) {
	  nvboard_update();
	  single_cycle();
  }
   return 0;
}

