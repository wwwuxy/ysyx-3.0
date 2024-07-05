#include "include.h"

uint8_t mem[MEM_SIZE];  //开辟模拟内存空间

uint8_t* guest_to_host(uint32_t paddr){ //将物理地址(4字节对齐)转换为模拟内存地址
    return mem + paddr - MEM_START;     //paddr是实际物理地址，例如0x80000004，减去物理地址的起始地址MEM_START，得到在模拟内存中的偏移量，加上mem的起始地址，得到在模拟内存中的实际地址
};

uint32_t host_to_guest(uint8_t *haddr){ //将模拟内存地址转换为物理地址(4字节对齐)
    return haddr - mem + MEM_START;
};

void mem_write(uint32_t paddr, int len, uint32_t data){ //写入内存
    uint8_t *haddr = guest_to_host(paddr); //将物理地址转换为模拟内存地址
    switch(len){
        case 1: *(uint8_t  *)haddr = data & 0xff; break; //写入1字节
        case 2: *(uint16_t *)haddr = data; break; //写入2字节
        case 4: *(uint32_t *)haddr = data; break; //写入4字节
        default: assert(0); 
    }
};

uint32_t mem_read(uint32_t paddr, int len){ //读取内存
    uint8_t *haddr = guest_to_host(paddr); //将物理地址转换为模拟内存地址
    switch(len){
        case 1: return *(u_int8_t *)haddr; //读取1字节
        case 2: return *(uint16_t *)haddr; //读取2字节
        case 4: return *(uint32_t *)haddr; //读取4字节
        default: assert(0); 
    }
};