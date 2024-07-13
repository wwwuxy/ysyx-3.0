#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include "../obj_dir/Vtop___024root.h"  //存放模块的各种输入输出信号和内部状态变量

#define MEM_START  0x80000000
#define MEM_END 0x87ffffff
#define MEM_SIZE  MEM_END + 1 - MEM_START

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void init_npc(int argc, char *argv[]);
uint8_t* guest_to_host(uint32_t );
uint32_t host_to_guest(uint8_t *);
extern "C"{ 
void mem_write(uint32_t , int , uint32_t );
uint64_t mem_read(uint32_t , int );
}

typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
} CPU_state;

CPU_state get_cpu_state(uint32_t *, uint32_t );
bool isa_difftest_checkregs(CPU_state , CPU_state );
void print_reg(CPU_state );
void init_difftest(char *ref_so_file, long img_size);
void difftest_step( );