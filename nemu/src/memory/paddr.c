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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif




#ifdef CONFIG_MTRACE
#define MaxSize 15  //定义ins_buffer的大小

typedef struct  {   //环形队列结构体
  uint32_t val[MaxSize];
  int front,rear;
}SqQuene;

SqQuene mem_trace;  //指令环形缓冲区

static void enQuene(SqQuene *q, uint32_t val){  //入队，满了就会覆盖旧值
  q->rear = (q->rear + 1) % MaxSize;
  q->val[q->rear] = val;
  printf("当前访问的内存地址是:0x%08x\n",val);

}
#endif



uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);

  IFDEF(CONFIG_MTRACE,(enQuene(&mem_trace, addr)));

  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);

  IFDEF(CONFIG_MTRACE,enQuene(&mem_trace, addr));

}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  else if(addr >= MROM_BASE && addr < MROM_BASE + MROM_SIZE) return pmem_read(addr - MROM_BASE + CONFIG_MBASE, len);
  else if(addr >= SRAM_BASE && addr < SRAM_BASE + SRAM_SIZE) return pmem_read(addr - SRAM_BASE + MROM_SIZE + CONFIG_MBASE, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  else if(addr >= MROM_BASE && addr < MROM_BASE + MROM_SIZE) { pmem_write(addr - MROM_BASE + CONFIG_MBASE, len, data); return; }
  else if(addr >= SRAM_BASE && addr < SRAM_BASE + SRAM_SIZE) { pmem_write(addr - SRAM_BASE + MROM_SIZE + CONFIG_MBASE, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}