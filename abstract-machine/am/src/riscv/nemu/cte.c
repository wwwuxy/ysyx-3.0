#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  // printf("mcause = %d\n", c->mcause);
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case EVENT_YIELD: ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);  //调用用户提供的事件处理函数
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

/*进行CTE相关的初始化操作. 其中它还接受一个来自操作系统的事件处理回调函数的指针, 
当发生事件时, CTE将会把事件和相关的上下文作为参数, 来调用这个回调函数, 交由操作系统进行后续处理.*/

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry 设置异常入口， 将mtvec寄存器的值设置为__am_asm_trap
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));  

  // register event handler
  user_handler = handler;

  return true;
}


//创建内核线程的上下文
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c = kstack.end - sizeof(Context);
  c->gpr[10] = (uintptr_t)arg;
  c->mcause = EVENT_YIELD;
  c->mstatus = 0x1800;
  c->mepc = (uintptr_t)entry;
  c->pdir = NULL;
  return c;
}

//用于进行自陷操作, 会触发一个编号为EVENT_YIELD事件
void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, 11; ecall"); //原来为：asm volatile("li a7, -1; ecall")，通过a7传递系统调用号，故放11进去
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
