#include <dlfcn.h>
#include "include.h"

void (*ref_difftest_init)() = NULL;
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, int n, bool direction) = NULL;
void (*ref_difftest_regcpy)(CPU_state *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

extern uint32_t npc_reg[32];
extern uint32_t npc_pc;

void init_difftest(char *ref_so_file, long img_size) {
    assert(ref_so_file != NULL);

//加载动态链接库
    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle != NULL); //加载失败

    ref_difftest_memcpy = (void(*)(uint32_t , void *, int , bool )) dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void(*)(CPU_state *, bool ))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void(*)(uint64_t ))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    // ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");   中断在后续实现
    // assert(ref_difftest_raise_intr);

    ref_difftest_init = (void(*)())dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    ref_difftest_init();

    ref_difftest_memcpy(MEM_START, guest_to_host(MEM_START), img_size, DIFFTEST_TO_REF);    //将NPC的模拟内存拷贝到nemu中

    CPU_state dut = get_cpu_state(npc_reg, MEM_START);  //获取NPC的寄存器、pc

    ref_difftest_regcpy(&dut, DIFFTEST_TO_REF);    //将NPC的寄存器拷贝到nemu中 
    printf("init_difftest done\n");
}

static void checkregs(CPU_state ref, CPU_state dut){
    if (!isa_difftest_checkregs(ref, dut)) {
        print_reg(dut);
        assert(0);
    }
}

void difftest_step( ){
    CPU_state ref_r, dut;

    // dut = get_cpu_state(npc_reg, MEM_START);
    // if (ref_r.pc == dut.pc) {
    //     checkregs(ref_r, dut);
    //     return;
    // }

    

    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);    //读出将nemu中运行后的寄存器值
    dut = get_cpu_state(npc_reg, npc_pc);
    checkregs(ref_r, dut);  //对比npc和dut(此时放的是nemu中正确的运行结果)，检查是否相同
    // printf("difftest_step done\n");
    
    ref_difftest_exec(1);

    return;
}    