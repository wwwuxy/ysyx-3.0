/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// 把DUT的内存拷贝到REF，从而有相同的输入   buf-->mem[addr]
__EXPORT void difftest_memcpy(uint32_t addr, void *buf, int n, bool direction) {
  if(direction == DIFFTEST_TO_REF) {
    for (int i = 0; i < n; i++) {
      paddr_write(addr+i,1,*((uint8_t*)buf+i));
    }
  }
  else {
    assert(0);
  }
}

// 拷贝寄存器
__EXPORT void difftest_regcpy(CPU_state *dut, bool direction) {
  if(direction == DIFFTEST_TO_REF) {
    for(int i = 0; i < 32; i ++) {
      cpu.gpr[i] = dut->gpr[i];  // 把dut的寄存器拷贝到nemu
    }
    cpu.pc = dut->pc;
  }
  else { 
    for(int i = 0; i < 32; i ++) {
      dut->gpr[i] = cpu.gpr[i];  // 把nemu的寄存器拷贝到dut
    }
    dut->pc = cpu.pc;
  }
}

// 让REF执行n次
__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
  // assert(0);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init() {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
