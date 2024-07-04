// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_mem_wr,0,0);
    CData/*0:0*/ top__DOT___Controller_io_rf_wr_en;
    CData/*0:0*/ top__DOT___Controller_io_alu_a_sel;
    CData/*0:0*/ top__DOT___Controller_io_jump_en;
    CData/*0:0*/ top__DOT__Controller__DOT___GEN;
    CData/*0:0*/ top__DOT__Controller__DOT___GEN_0;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_inst,31,0);
    VL_OUT(io_pc,31,0);
    VL_OUT(io_addr,31,0);
    VL_OUT(io_data,31,0);
    VL_OUT(io_imm,31,0);
    IData/*31:0*/ top__DOT___InputReg_io_wd;
    IData/*31:0*/ top__DOT___InputAlu_io_op1;
    IData/*31:0*/ top__DOT__Pc__DOT__pc;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_0;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_1;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_2;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_3;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_4;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_5;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_6;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_7;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_8;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_9;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_10;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_11;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_12;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_13;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_14;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_15;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_16;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_17;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_18;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_19;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_20;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_21;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_22;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_23;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_24;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_25;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_26;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_27;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_28;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_29;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_30;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__FileReg_31;
    VlWide<32>/*1023:0*/ top__DOT__RegisterFile__DOT___GEN;
    IData/*31:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
