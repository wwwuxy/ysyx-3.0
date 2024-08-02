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
        VL_OUT8(io_diff_test,0,0);
        VL_OUT8(io_wbu_valid,0,0);
        CData/*0:0*/ top__DOT___isu_io_isu_axi_out_bits_load_unsign;
        CData/*0:0*/ top__DOT___exu_io_out_bits_mem_wr_en;
        CData/*0:0*/ top__DOT___idu_io_out_bits_alu_b_sel;
        CData/*0:0*/ top__DOT__ifu__DOT__arvalid;
        CData/*0:0*/ top__DOT__ifu__DOT__valid;
        CData/*1:0*/ top__DOT__ifu__DOT__state;
        CData/*0:0*/ top__DOT__ifu__DOT___GEN;
        CData/*0:0*/ top__DOT__ifu__DOT___GEN_0;
        CData/*0:0*/ top__DOT__ifu__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ top__DOT__ifu__DOT__unnamedblk1__DOT___GEN_2;
        CData/*0:0*/ top__DOT__ifu__DOT__unnamedblk1__DOT___GEN_3;
        CData/*0:0*/ top__DOT__ifu__DOT__unnamedblk1__DOT___GEN_4;
        CData/*7:0*/ top__DOT__ifu__DOT__unnamedblk1__DOT___GEN_5;
        CData/*2:0*/ top__DOT__idu__DOT___Contorller_io_rf_wr_sel;
        CData/*0:0*/ top__DOT__idu__DOT___Contorller_io_is_csr;
        CData/*0:0*/ top__DOT__idu__DOT__state;
        CData/*0:0*/ top__DOT__idu__DOT____Vcellinp__RegisterFile__io_wr_en;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_1;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_2;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_4;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_5;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_6;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_7;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_8;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_9;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_10;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_11;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_12;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_13;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_14;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_15;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_16;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_17;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_18;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_19;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_20;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_21;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_23;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_24;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_25;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_27;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_28;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_29;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_30;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_31;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_32;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_33;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_34;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_35;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_36;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_37;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_38;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT___GEN_39;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4202fe99__0;
        CData/*0:0*/ top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h6db50abe__0;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT___GEN_1;
        CData/*1:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__csr_sel;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_2;
    };
    struct {
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_5;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_10;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_11;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_12;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_13;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_14;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_15;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_16;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_17;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_18;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_19;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_22;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_26;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_27;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk6__DOT___GEN_40;
        CData/*0:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk7__DOT___GEN_41;
        CData/*0:0*/ top__DOT__exu__DOT__state;
        CData/*0:0*/ top__DOT__isu__DOT__store_finish;
        CData/*0:0*/ top__DOT__isu__DOT__load_finish;
        CData/*0:0*/ top__DOT__isu__DOT__arvalid;
        CData/*0:0*/ top__DOT__isu__DOT__awvalid;
        CData/*0:0*/ top__DOT__isu__DOT__wvalid;
        CData/*0:0*/ top__DOT__isu__DOT__valid;
        CData/*2:0*/ top__DOT__isu__DOT__state;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_0;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_2;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_3;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_5;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_7;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_8;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_9;
        CData/*0:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_10;
        IData/*23:0*/ top__DOT__isu__DOT__unnamedblk1__DOT___GEN_11;
        CData/*1:0*/ top__DOT__wbu__DOT__state;
        CData/*7:0*/ top__DOT__wbu__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ top__DOT__xbar__DOT___Sram_rresp;
        CData/*0:0*/ top__DOT__xbar__DOT___Sram_rvalid;
        CData/*0:0*/ top__DOT__xbar__DOT___Sram_awready;
        CData/*0:0*/ top__DOT__xbar__DOT___Sram_wready;
    };
    struct {
        CData/*0:0*/ top__DOT__xbar__DOT___Sram_bresp;
        CData/*2:0*/ top__DOT__xbar__DOT__state;
        CData/*0:0*/ top__DOT__xbar__DOT__ifu_selected;
        CData/*0:0*/ top__DOT__xbar__DOT__isu_selected;
        CData/*0:0*/ top__DOT__xbar__DOT__uart_selected;
        CData/*0:0*/ top__DOT__xbar__DOT___Uart_io_in_bits_arvalid_T;
        CData/*0:0*/ top__DOT__xbar__DOT__io_isu_axi_out_bits_arready_0;
        CData/*0:0*/ top__DOT__xbar__DOT___GEN;
        CData/*0:0*/ top__DOT__xbar__DOT__io_isu_axi_out_bits_rresp_0;
        CData/*0:0*/ top__DOT__xbar__DOT___GEN_0;
        CData/*0:0*/ top__DOT__xbar__DOT____Vcellinp__Sram__awvalid;
        CData/*0:0*/ top__DOT__xbar__DOT____Vcellinp__Uart__io_in_bits_wvalid;
        CData/*0:0*/ top__DOT__xbar__DOT____VdfgTmp_h15661469__0;
        CData/*0:0*/ top__DOT__xbar__DOT__Sram__DOT__bvalid;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__arready;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__rresp;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__rvalid;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__awready;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__wready;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__bresp;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__bvalid;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT___GEN;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_2;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_3;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_5;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_7;
        CData/*0:0*/ top__DOT__xbar__DOT__Uart__DOT__unnamedblk1__DOT___GEN_8;
        CData/*0:0*/ __VdfgTmp_hf48c861b__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_pc,31,0);
        VL_OUT(io_alu_rsl,31,0);
        VL_OUT(io_inst,31,0);
        VL_OUT(io_imm,31,0);
        IData/*31:0*/ top__DOT__ifu__DOT__IPC;
        IData/*31:0*/ top__DOT__ifu__DOT__IR;
        IData/*31:0*/ top__DOT__idu__DOT___RegisterFile_io_rd1;
        IData/*31:0*/ top__DOT__idu__DOT___RegisterFile_io_rd2;
        IData/*31:0*/ top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4240185c__0;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23;
    };
    struct {
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3;
        VlWide<32>/*1023:0*/ top__DOT__idu__DOT__RegisterFile__DOT___GEN;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT___GEN_0;
        VlWide<4>/*127:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_3;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_T;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_T_2;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__wd;
        IData/*31:0*/ top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___GEN_38;
        IData/*31:0*/ top__DOT__exu__DOT__Alu__DOT__op1;
        IData/*31:0*/ top__DOT__exu__DOT__Alu__DOT__op2;
        IData/*31:0*/ top__DOT__pc__DOT__pc;
        IData/*31:0*/ top__DOT__xbar__DOT___Uart_io_in_bits_araddr_T;
        IData/*31:0*/ top__DOT__xbar__DOT__io_isu_axi_out_bits_rdata_0;
        IData/*31:0*/ top__DOT__xbar__DOT____Vcellinp__Sram__len;
        IData/*31:0*/ top__DOT__xbar__DOT____Vcellinp__Sram__araddr;
        IData/*31:0*/ top__DOT__xbar__DOT____Vcellinp__Uart__io_in_bits_awaddr;
        IData/*31:0*/ top__DOT__xbar__DOT____Vcellinp__Uart__io_in_bits_araddr;
        IData/*31:0*/ top__DOT__xbar__DOT__Sram__DOT__data_delay;
        IData/*31:0*/ top__DOT__xbar__DOT__Sram__DOT__unnamedblk1__DOT__temp_data;
        IData/*31:0*/ top__DOT__xbar__DOT__Uart__DOT__deviceReg;
        IData/*31:0*/ top__DOT__xbar__DOT__Uart__DOT__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__xbar__DOT__Uart__DOT__mtime;
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
