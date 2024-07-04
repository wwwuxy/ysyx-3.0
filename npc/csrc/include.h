#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

#define MEM_START  0x80000000
#define MEM_END 0x87ffffff
#define MEM_SIZE  MEM_END + 1 - MEM_START

void init_npc(int argc, char *argv[]);
uint8_t* guest_to_host(uint32_t paddr);
uint32_t host_to_guest(uint8_t *haddr);
void mem_write(uint32_t paddr, int len, uint32_t data);
uint32_t mem_read(uint32_t paddr, int len);