#include "include.h"
#include <stdio.h>


uint32_t npc_reg[32] = {0};   //用来存放NPC的寄存器数据
uint32_t npc_pc = 0;          //用来存放NPC的pc

CPU_state get_cpu_state(uint32_t *npc_reg, uint32_t pc){
    CPU_state dut;
    for(int i = 0; i < 32; i++){
        dut.gpr[i] = npc_reg[i];
    }
    dut.pc = pc;
    return dut;
}


bool isa_difftest_checkregs(CPU_state ref, CPU_state dut){
    for(int i = 0; i < 32; i++){
        if(ref.gpr[i] != dut.gpr[i]){
            printf("reg[%d] is different, ref: 0x%08x, dut: 0x%08x\n", i, ref.gpr[i], dut.gpr[i]);
            printf("dut.pc is 0x%08x\t ref.pc is 0x%08x\n", dut.pc, ref.pc);
            return false;
        }
    }
    if(ref.pc != dut.pc){
        printf("pc is different, ref: 0x%08x, dut: 0x%08x\n", ref.pc, dut.pc);
        return false;
    }
    return true; 
}

void print_reg(CPU_state dut){
    printf("now regs:\n");
    for(int i = 0; i < 32; i++){
        printf("x[%d] = 0x%08x\n", i, dut.gpr[i]);
    }
}
