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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ top__DOT___Controller_io_rf_wr_en;
        CData/*0:0*/ top__DOT___Controller_io_alu_b_sel;
        CData/*0:0*/ top__DOT___Controller_io_jump_en;
        CData/*0:0*/ top__DOT___Controller_io_load_unsign;
        CData/*0:0*/ top__DOT___Controller_io_is_csr;
        CData/*0:0*/ top__DOT__Pc__DOT___GEN;
        CData/*0:0*/ top__DOT__Pc__DOT___GEN_0;
        CData/*1:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT__csr_sel;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_2;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_3;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_5;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_7;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_8;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_9;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_10;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_11;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_12;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_13;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_14;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_15;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_16;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_17;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_18;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_19;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_20;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_21;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_22;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_23;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_24;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_25;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_26;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_27;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_28;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_29;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_30;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_31;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_32;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_33;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_34;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_35;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36;
        CData/*0:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_1;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_2;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_4;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_5;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_6;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_7;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_8;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_9;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_10;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_11;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_12;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_13;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_14;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_15;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_16;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_17;
    };
    struct {
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_18;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_19;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_20;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_21;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_23;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_24;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_25;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_27;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_28;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_29;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_30;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_31;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_32;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_33;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_34;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_35;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_36;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_37;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_38;
        CData/*0:0*/ top__DOT__Controller__DOT___GEN_39;
        CData/*0:0*/ top__DOT__Controller__DOT____VdfgTmp_hb45a1bac__0;
        CData/*0:0*/ top__DOT__Controller__DOT____VdfgTmp_h531076fb__0;
        CData/*0:0*/ top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0;
        CData/*0:0*/ top__DOT__Controller__DOT____VdfgTmp_h6db50abe__0;
        CData/*0:0*/ top__DOT__Mem__DOT__clk;
        CData/*0:0*/ __VdfgTmp_h52b2196f__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_inst,31,0);
        VL_OUT(io_pc,31,0);
        VL_OUT(io_addr,31,0);
        VL_OUT(io_data,31,0);
        VL_OUT(io_nextpc,31,0);
        VL_OUT(io_alu_out,31,0);
        VL_OUT(io_alu_op1,31,0);
        VL_OUT(io_alu_op2,31,0);
        VL_OUT(io_imm,31,0);
        IData/*31:0*/ top__DOT___InputReg_io_wd;
        IData/*31:0*/ top__DOT___Mem_inst;
        IData/*31:0*/ top__DOT___Mem_dm_out;
        IData/*31:0*/ top__DOT___Controller_io_len;
        IData/*31:0*/ top__DOT___RegisterFile_io_rd1;
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
    };
    struct {
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
        IData/*31:0*/ top__DOT__RegisterFile__DOT__CsrReg_0;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__CsrReg_1;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__CsrReg_2;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__CsrReg_3;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__t;
        VlWide<32>/*1023:0*/ top__DOT__RegisterFile__DOT___GEN;
        IData/*31:0*/ top__DOT__RegisterFile__DOT___GEN_0;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_T;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_T_2;
        IData/*31:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_38;
        VlWide<4>/*127:0*/ top__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk4__DOT___GEN_39;
        IData/*31:0*/ top__DOT__Controller__DOT____VdfgTmp_h4240185c__0;
        IData/*31:0*/ top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data;
        IData/*31:0*/ __Vfunc_top__DOT__Mem__DOT__mem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__Mem__DOT__mem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__Mem__DOT__mem_read__2__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__Mem__DOT__mem_read__3__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__Mem__DOT__mem_read__4__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__Mem__DOT__mem_read__5__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
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
