#include "include.h"
#include<time.h>
#include<stdio.h>


#define RTC_ADDR 0xa0000048 //RTC寄存器的地址
#define SERIAL_ADDR 0xa00003f8  //串口寄存器的地址

static uint64_t initial_time = 0;
uint8_t mem[MEM_SIZE];  //开辟模拟内存空间

uint8_t* guest_to_host(uint32_t paddr){ //将物理地址(4字节对齐)转换为模拟内存地址
    return mem + paddr - MEM_START;     //paddr是实际物理地址，例如0x80000004，减去物理地址的起始地址MEM_START，得到在模拟内存中的偏移量，加上mem的起始地址，得到在模拟内存中的实际地址
};

uint32_t host_to_guest(uint8_t *haddr){ //将模拟内存地址转换为物理地址(4字节对齐)
    return haddr - mem + MEM_START;
};

uint64_t get_elapsed_time() {       //获取经过的时间
    struct timespec ts;
    uint64_t current_time, t;

    // 如果初始时间未设置，则获取并设置初始时间
    if (initial_time == 0) {
        clock_gettime(CLOCK_REALTIME, &ts);// 获取当前时间
        initial_time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;// 转换为微秒
    }

    clock_gettime(CLOCK_REALTIME, &ts);  
    current_time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
    t = current_time - initial_time; // 计算经过的时间
    return t; // 返回经过的时间
}


extern "C" void mem_write(uint32_t paddr, int len, uint32_t data){ //写入内存
//mtrace
    // printf("mem_write: paddr = 0x%08x, len = %d, data = 0x%08x\n", paddr, len, data);

    // uint32_t aligned_paddr = paddr & ~0x3; //对齐到4字节
    if(paddr == SERIAL_ADDR){ //如果是串口寄存器
        difftest_skip_ref(2);
        for (int i = 0; i < len; i++) {
            putchar((data >> (i * 8)) & 0xFF); // 输出每个字节
        }
        // putchar(data); //输出字符
        return;
    }

    uint8_t *haddr = guest_to_host(paddr); //将物理地址转换为模拟内存地址


    switch(len){
        case 1: *(uint8_t  *)haddr = data; break; //写入1字节
        case 2: *(uint16_t *)haddr = data; break; //写入2字节
        case 4: *(uint32_t *)haddr = data; break; //写入4字节
        default: assert(0); 
    }  
  
};

extern "C" uint64_t mem_read(uint32_t paddr, int len){ //读取内存
//mtrace
    // printf("mem_read: paddr = 0x%08x, len = %d\t\n", paddr, len);

    // uint32_t aligned_paddr = paddr & ~0x3; //对齐到4字节
    if(paddr == RTC_ADDR){ //如果是RTC寄存器
        difftest_skip_ref(2); 
        return get_elapsed_time(); //返回经过的时间
    }

    if(paddr < MEM_START) return MEM_START;


    uint8_t *haddr = (uint8_t *)guest_to_host(paddr); //将物理地址转换为模拟内存地址
    // printf("mem_read: data = 0x%08x\n", *(u_int32_t *)haddr);
    switch(len){
        case 1: return *(uint8_t *)haddr; //读取1字节
        case 2: return *(uint16_t *)haddr; //读取2字节
        case 4: return *(uint32_t *)haddr; //读取4字节
        default: assert(0); 
    }
};