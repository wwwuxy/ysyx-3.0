// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/wuxy/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/wuxy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4695:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/ysyx_23060192.v:1962:34
    extern void npc_accept_fault(svBit flag);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/ysyx_23060192.v:1939:34
    extern void npc_alu_out(int now_alu_out);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/ysyx_23060192.v:1951:34
    extern void npc_difftest(svBit flag);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/ysyx_23060192.v:1903:34
    extern void npc_dpic_pc(int now_pc);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/ysyx_23060192.v:1915:34
    extern void npc_inst(int now_inst);
    // DPI import at /home/wuxy/ysyx-workbench/npc/vsrc/ysyx_23060192.v:1927:34
    extern void npc_trap(svBit flag);

#ifdef __cplusplus
}
#endif

#endif  // guard
