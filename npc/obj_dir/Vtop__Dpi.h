// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/top.v:1724:33
    extern int mem_read(int pc, int len);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/top.v:1781:34
    extern void mem_write(int addr, int len, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
