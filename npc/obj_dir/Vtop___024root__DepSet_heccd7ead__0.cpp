// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__ifu__DOT__imem__DOT__mem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ len, IData/*31:0*/ &mem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &mem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 = 0;
    IData/*31:0*/ __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 = 0;
    IData/*31:0*/ __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 = 0;
    IData/*31:0*/ __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 = 0;
    IData/*31:0*/ __Vdly__top__DOT__pc__DOT__pc;
    __Vdly__top__DOT__pc__DOT__pc = 0;
    // Body
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1;
    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0;
    __Vdly__top__DOT__pc__DOT__pc = vlSelf->top__DOT__pc__DOT__pc;
    if (vlSelf->reset) {
        __Vdly__top__DOT__pc__DOT__pc = 0x80000000U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30 = 0U;
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31 = 0U;
        __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 = 0U;
        __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 = 0U;
        __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 = 0U;
        __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 = 0U;
    } else {
        if ((0x67U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))) {
            vlSelf->top__DOT__pc__DOT__unnamedblk1__DOT___jalr_pc_T 
                = (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                   + vlSelf->top__DOT__idu__DOT___Contorller_io_imm);
            __Vdly__top__DOT__pc__DOT__pc = (0xfffffffeU 
                                             & vlSelf->top__DOT__pc__DOT__unnamedblk1__DOT___jalr_pc_T);
        } else {
            __Vdly__top__DOT__pc__DOT__pc = (((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7)
                                               ? (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                  >= vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                               : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_6)
                                                   ? 
                                                  (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                   < vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_5)
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_4)
                                                     ? 
                                                    VL_LTS_III(32, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_2)
                                                      ? 
                                                     (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                      != vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_1)
                                                       ? 
                                                      (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                       == vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                       : 
                                                      (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT___ifu_io_out_bits_inst))))))))
                                              ? (vlSelf->top__DOT__pc__DOT__pc 
                                                 + vlSelf->top__DOT__idu__DOT___Contorller_io_imm)
                                              : ((0x73U 
                                                  == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                                  ? 
                                                 ((0x73U 
                                                   == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                                   ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1
                                                   : 0U)
                                                  : 
                                                 ((0x30200073U 
                                                   == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                                   ? 
                                                  (((0x30200073U 
                                                     != vlSelf->top__DOT___ifu_io_out_bits_inst) 
                                                    | (0x73U 
                                                       == vlSelf->top__DOT___ifu_io_out_bits_inst))
                                                    ? 0U
                                                    : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__pc__DOT__pc))));
        }
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_3 
            = (0xfffffffeU & vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0);
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_7 
            = ((0xffffff00U & vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0) 
               | (0xffU & (0x80U | vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_1 
            = (1U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_2 
            = (2U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_3 
            = (3U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_4 
            = (4U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_5 
            = (5U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_6 
            = (6U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_7 
            = (7U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_8 
            = (8U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_9 
            = (9U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_10 
            = (0xaU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_11 
            = (0xbU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_12 
            = (0xcU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_13 
            = (0xdU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_14 
            = (0xeU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_15 
            = (0xfU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_16 
            = (0x10U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_17 
            = (0x11U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_18 
            = (0x12U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_19 
            = (0x13U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_20 
            = (0x14U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_21 
            = (0x15U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_22 
            = (0x16U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_23 
            = (0x17U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_24 
            = (0x18U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_25 
            = (0x19U == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_26 
            = (0x1aU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_27 
            = (0x1bU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_28 
            = (0x1cU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_29 
            = (0x1dU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_30 
            = (0x1eU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                  >> 7U)));
        if (vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr) {
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31 
                = (1U == (7U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                >> 0xcU)));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel 
                = ((0x300U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                               >> 0x14U)) ? 0U : ((0x305U 
                                                   == 
                                                   (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                    >> 0x14U))
                                                   ? 1U
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                     >> 0x14U))
                                                    ? 2U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x342U 
                                                                  == 
                                                                  (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                                   >> 0x14U))))))));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[0U] 
                = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0;
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[1U] 
                = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1;
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[2U] 
                = (IData)((((QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3)) 
                            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2))));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[3U] 
                = (IData)(((((QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3)) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2))) 
                           >> 0x20U));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33 
                = (0U == (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34 
                = (1U == (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35 
                = (2U == (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36 
                = (2U == (7U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                >> 0xcU)));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37 
                = (3U == (7U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                >> 0xcU)));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38 
                = (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31) 
                    | (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36)) 
                   | (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37));
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_1))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_2))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_3))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_4))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_5))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_6))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_7))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_8))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_9))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_10))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_11))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_12))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_13))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_14))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_15))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_16))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_17))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_18))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_19))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_20))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_21))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_22))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_23))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_24))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_25))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_26))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_27))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_28))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_29))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_30))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_38) 
                 & (0xf80U == (0xf80U & vlSelf->top__DOT___ifu_io_out_bits_inst)))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31 
                    = (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                         << 5U))) ? 0U
                         : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                            (((IData)(0x1fU) + (0x7fU 
                                                & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                   << 5U))) 
                             >> 5U)] << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                             << 5U))))) 
                       | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                          (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                          >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                       << 5U))));
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31) {
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
                    = ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0
                        : ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                            ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_3
                            : ((0x30200073U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_7
                                : 0x1800U)));
                if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0;
                }
                if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0;
                } else if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                        = vlSelf->io_pc;
                }
                if ((3U == (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0;
                } else if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 = 0xbU;
                }
            } else if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_36) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___CsrReg_T 
                    = ((((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                          << 5U))) ? 0U
                          : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                    << 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                << 5U))))) 
                        | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                           (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                           >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                        << 5U)))) | vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0);
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
                    = ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___CsrReg_T
                        : ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                            ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_3
                            : ((0x30200073U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_7
                                : 0x1800U)));
                if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___CsrReg_T;
                }
                if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___CsrReg_T;
                } else if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                        = vlSelf->io_pc;
                }
                if ((3U == (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___CsrReg_T;
                } else if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 = 0xbU;
                }
            } else {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___CsrReg_T_2 
                    = ((((0U == (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                          << 5U))) ? 0U
                          : (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                    << 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                                << 5U))))) 
                        | (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                           (3U & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel))] 
                           >> (0x1fU & ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel) 
                                        << 5U)))) & 
                       (~ vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0));
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
                    = ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37)
                        ? ((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_33)
                            ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___CsrReg_T_2
                            : ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_3
                                : ((0x30200073U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                    ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_7
                                    : 0x1800U))) : 0x1800U);
                if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37) 
                     & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_34))) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___CsrReg_T_2;
                }
                if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37) 
                     & (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_35))) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___CsrReg_T_2;
                } else if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                        = vlSelf->io_pc;
                }
                if (((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_37) 
                     & (3U == (IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel)))) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 
                        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___CsrReg_T_2;
                } else if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                    __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 = 0xbU;
                }
            }
        } else {
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd 
                = ((((1U & (IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel))
                      ? vlSelf->io_alu_rsl : 0U) | 
                    ((2U & (IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel))
                      ? vlSelf->top__DOT__idu__DOT___Dmem_dm_out
                      : 0U)) | ((4U & (IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel))
                                 ? ((IData)(4U) + vlSelf->io_pc)
                                 : 0U));
            vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39 
                = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[
                (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                          >> 7U))];
            if ((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)) {
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
                    = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_3;
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
                    = vlSelf->io_pc;
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 = 0xbU;
            } else {
                __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
                    = ((0x30200073U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___CsrReg_0_T_7
                        : 0x1800U);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_1) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_2) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_3) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_4) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_5) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_6) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_7) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_8) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_9) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_10) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_11) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_12) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_13) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_14) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_15) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_16) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_17) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_18) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_19) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_20) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_21) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_22) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_23) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_24) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_25) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_26) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_27) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_28) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_29) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if (vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_30) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
            if ((0x1fU == (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                    >> 7U)))) {
                vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31 
                    = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en)
                        ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd
                        : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_39);
            }
        }
    }
    vlSelf->top__DOT__pc__DOT__pc = __Vdly__top__DOT__pc__DOT__pc;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0 
        = __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3 
        = __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2 
        = __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1 
        = __Vdly__top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1;
    vlSelf->io_pc = vlSelf->top__DOT__pc__DOT__pc;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0U] = 0U;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[1U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[2U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[3U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[4U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[5U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[6U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[7U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[8U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[9U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0xaU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0xbU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0xcU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0xdU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0xeU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0xfU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x10U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x11U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x12U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x13U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x14U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x15U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x16U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x17U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x18U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x19U] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x1aU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x1bU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x1cU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x1dU] 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29;
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31)) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30))));
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31)) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30))) 
                   >> 0x20U));
    Vtop___024root____Vdpiimwrap_top__DOT__ifu__DOT__imem__DOT__mem_read_TOP(vlSelf->io_pc, 4U, vlSelf->__Vfunc_top__DOT__ifu__DOT__imem__DOT__mem_read__0__Vfuncout);
    vlSelf->top__DOT___ifu_io_out_bits_inst = vlSelf->__Vfunc_top__DOT__ifu__DOT__imem__DOT__mem_read__0__Vfuncout;
    vlSelf->io_inst = vlSelf->top__DOT___ifu_io_out_bits_inst;
    vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4240185c__0 
        = (((- (IData)((vlSelf->top__DOT___ifu_io_out_bits_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                >> 0x14U));
    vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0 
        = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[
        (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                  >> 0xfU))];
    vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4202fe99__0 
        = ((0x67U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7 
        = (IData)((0x7063U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_6 
        = (IData)((0x6063U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_5 
        = (IData)((0x5063U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_4 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_2 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_1 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21 
        = (IData)((0x7013U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20 
        = (IData)((0x6013U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19 
        = (IData)((0x4013U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_18 
        = (IData)((0x3013U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr 
        = ((0x73U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
           & ((1U == (7U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                            >> 0xcU))) | ((2U == (7U 
                                                  & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                     >> 0xcU))) 
                                          | ((3U == 
                                              (7U & 
                                               (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                >> 0xcU))) 
                                             | ((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                     >> 0xcU))) 
                                                | ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                        >> 0xcU))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                          >> 0xcU)))))))));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_17 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15 
        = (IData)((0x1023U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14 
        = (IData)((0x23U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_24 
        = (IData)((0x5013U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h6db50abe__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_28 
        = (IData)((0x33U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_35 
        = (IData)((0x5033U == (0x707fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    vlSelf->top__DOT__idu__DOT___Contorller_io_imm 
        = ((0x63U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))
            ? (((- (IData)((vlSelf->top__DOT___ifu_io_out_bits_inst 
                            >> 0x1fU))) << 0xcU) | 
               ((0x800U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                           << 4U)) | ((0x7e0U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                  >> 7U)))))
            : ((0x23U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))
                ? (((- (IData)((vlSelf->top__DOT___ifu_io_out_bits_inst 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                  >> 7U))))
                : ((3U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))
                    ? vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4240185c__0
                    : ((0x67U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))
                        ? vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4240185c__0
                        : ((0x6fU == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))
                            ? (((- (IData)((vlSelf->top__DOT___ifu_io_out_bits_inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->top__DOT___ifu_io_out_bits_inst) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                      >> 0x14U)))))
                            : ((0x37U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))
                                ? (0xfffff000U & vlSelf->top__DOT___ifu_io_out_bits_inst)
                                : ((0x17U == (0x7fU 
                                              & vlSelf->top__DOT___ifu_io_out_bits_inst))
                                    ? (0xfffff000U 
                                       & vlSelf->top__DOT___ifu_io_out_bits_inst)
                                    : (((0x13U == (0x7fU 
                                                   & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
                                        & ((5U == (7U 
                                                   & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                      >> 0xcU))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                >> 0xcU)))))
                                        ? (0x1fU & 
                                           (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                            >> 0x14U))
                                        : (((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
                                            & ((5U 
                                                != 
                                                (7U 
                                                 & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                    >> 0xcU))) 
                                               & (1U 
                                                  != 
                                                  (7U 
                                                   & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                                                      >> 0xcU)))))
                                            ? vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4240185c__0
                                            : 0U)))))))));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4202fe99__0) 
           | (0x17U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)));
    if (vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr) {
        vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 = 0U;
        vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2 = 0U;
    } else {
        vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
            = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN_0;
        vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2 
            = vlSelf->top__DOT__idu__DOT__RegisterFile__DOT___GEN[
            (0x1fU & (vlSelf->top__DOT___ifu_io_out_bits_inst 
                      >> 0x14U))];
    }
    vlSelf->top__DOT__idu__DOT___Contorller_io_len 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16)
            ? 4U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15)
                     ? 2U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14)
                              ? 1U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12)
                                       ? 2U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11)
                                                ? 1U
                                                : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8)
                                                      ? 1U
                                                      : 4U))))))));
    vlSelf->top__DOT__idu__DOT___Contorller_io_load_unsign 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12) 
           | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_24) 
           & (0x20U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                        >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_24) 
           & (0U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                     >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23 
        = ((0x13U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
           & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h6db50abe__0));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31 
        = ((0x33U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
           & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h6db50abe__0));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_28) 
           & (0x20U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                        >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_28) 
           & (0U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                     >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_35) 
           & (0x20U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                        >> 0x19U)));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_35) 
           & (0U == (vlSelf->top__DOT___ifu_io_out_bits_inst 
                     >> 0x19U)));
    vlSelf->__VdfgTmp_h32cf3982__0 = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_17) 
                                      | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                                         | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                                            | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14) 
                                               | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12) 
                                                  | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11) 
                                                     | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10) 
                                                        | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9) 
                                                           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8) 
                                                              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7) 
                                                                 | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_6) 
                                                                    | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_5) 
                                                                       | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_4) 
                                                                          | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_2) 
                                                                             | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_1) 
                                                                                | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN))))))))))))))));
    vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13 
        = ((IData)(vlSelf->top__DOT__idu__DOT___Contorller_io_load_unsign) 
           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10) 
              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9) 
                 | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8))));
    vlSelf->top__DOT___idu_io_out_bits_alu_b_sel = 
        ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39) 
         | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38) 
            | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37) 
               | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36) 
                  | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34) 
                     | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33) 
                        | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32) 
                           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31) 
                              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29))))))))));
    vlSelf->top__DOT__exu__DOT__Alu__DOT__op2 = ((IData)(vlSelf->top__DOT___idu_io_out_bits_alu_b_sel)
                                                  ? vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2
                                                  : vlSelf->top__DOT__idu__DOT___Contorller_io_imm);
    vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0 
        = ((IData)(vlSelf->top__DOT___idu_io_out_bits_alu_b_sel) 
           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27) 
              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25) 
                 | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23) 
                    | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21) 
                       | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20) 
                          | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19) 
                             | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_18) 
                                | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_17)))))))));
    vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0)
            ? 1U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13)
                     ? 2U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_h4202fe99__0)
                              ? 4U : ((0x17U == (0x7fU 
                                                 & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
                                      | (0x37U == (0x7fU 
                                                   & vlSelf->top__DOT___ifu_io_out_bits_inst))))));
    vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en 
        = ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12) 
              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11) 
                 | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10) 
                    | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9) 
                       | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8) 
                          | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN) 
                             | (0x37U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst)))))))));
    vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 = (((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
                                                  | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                                                     | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                                                        | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14) 
                                                           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13) 
                                                              | ((~ 
                                                                  ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7) 
                                                                   | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_6) 
                                                                      | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_5) 
                                                                         | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_4) 
                                                                            | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_2) 
                                                                               | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_1))))))) 
                                                                 & (0x67U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT___ifu_io_out_bits_inst))))))))
                                                  ? vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1
                                                  : vlSelf->top__DOT__pc__DOT__pc);
    vlSelf->io_alu_rsl = ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                            & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                               & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                  & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                     & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                        & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                           & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                              & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                 & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                    & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29) 
                                                       | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)) 
                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21)) 
                                                                   & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20)) 
                                                                      & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19)) 
                                                                         & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_18)) 
                                                                            & (IData)(vlSelf->__VdfgTmp_h32cf3982__0))))))))))))))))))
                            ? (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                               + vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                            : 0U) | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                   & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                      & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                         & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                            & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)))))))))
                                       ? (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                          - vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                                       : 0U) | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                  & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                     & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                        & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                           & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                    & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31) 
                                                                       | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)))))))))))))
                                                  ? 
                                                 (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2))
                                                  : 0U) 
                                                | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                     & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                        & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                           & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36) 
                                                              | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25))))))))))))
                                                     ? 
                                                    (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2))
                                                     : 0U) 
                                                   | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                        & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                           & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37) 
                                                              | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)))))))))))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__exu__DOT__Alu__DOT__op1, 
                                                                      (0x1fU 
                                                                       & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2))
                                                        : 0U) 
                                                      | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                           & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_18)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h32cf3982__0)) 
                                                                                & (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT___ifu_io_out_bits_inst))))))))))))))))))))
                                                           ? vlSelf->top__DOT__exu__DOT__Alu__DOT__op2
                                                           : 0U) 
                                                         | ((((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39) 
                                                              | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21))))))))))))))
                                                              ? 
                                                             (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                                              & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                                                              : 0U) 
                                                            | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                                 & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38) 
                                                                    | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20)))))))))))))))
                                                                 ? 
                                                                (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                                                 | vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                                                                 : 0U) 
                                                               | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                             & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19))))))))))))))))
                                                                    ? 
                                                                   (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                                                    ^ vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                                                                    : 0U) 
                                                                  | ((((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                                & ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_18)))))))))))))))))
                                                                       ? 
                                                                      (vlSelf->top__DOT__exu__DOT__Alu__DOT__op1 
                                                                       < vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                                                                       : 0U) 
                                                                     | (((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)) 
                                                                         & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)) 
                                                                            & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)) 
                                                                               & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)) 
                                                                                & (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)))))))
                                                                         ? 
                                                                        VL_LTS_III(32, vlSelf->top__DOT__exu__DOT__Alu__DOT__op1, vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)
                                                                         : 0U)))))))))));
    if (vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13) {
        if (vlSelf->top__DOT__idu__DOT___Contorller_io_load_unsign) {
            if ((1U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_read_TOP(vlSelf->io_alu_rsl, 1U, vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__1__Vfuncout);
                vlSelf->top__DOT__idu__DOT___Dmem_dm_out 
                    = vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__1__Vfuncout;
            } else if ((2U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_read_TOP(vlSelf->io_alu_rsl, 2U, vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__2__Vfuncout);
                vlSelf->top__DOT__idu__DOT___Dmem_dm_out 
                    = vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__2__Vfuncout;
            } else if ((4U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_read_TOP(vlSelf->io_alu_rsl, 4U, vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__3__Vfuncout);
                vlSelf->top__DOT__idu__DOT___Dmem_dm_out 
                    = vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__3__Vfuncout;
            }
        } else {
            Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_read_TOP(vlSelf->io_alu_rsl, vlSelf->top__DOT__idu__DOT___Contorller_io_len, vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__4__Vfuncout);
            vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data 
                = vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__4__Vfuncout;
            if ((1U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
                vlSelf->top__DOT__idu__DOT___Dmem_dm_out 
                    = (((- (IData)((1U & (vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data));
            } else if ((2U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
                vlSelf->top__DOT__idu__DOT___Dmem_dm_out 
                    = (((- (IData)((1U & (vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data));
            } else if ((4U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_read_TOP(vlSelf->io_alu_rsl, 4U, vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__5__Vfuncout);
                vlSelf->top__DOT__idu__DOT___Dmem_dm_out 
                    = vlSelf->__Vfunc_top__DOT__idu__DOT__Dmem__DOT__mem_read__5__Vfuncout;
            }
        }
    } else {
        vlSelf->top__DOT__idu__DOT___Dmem_dm_out = vlSelf->io_alu_rsl;
    }
    if (((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
         | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
            | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14)))) {
        if ((1U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
            Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_write_TOP(vlSelf->io_alu_rsl, 1U, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2);
        } else if ((2U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
            Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_write_TOP(vlSelf->io_alu_rsl, 2U, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2);
        } else if ((4U == vlSelf->top__DOT__idu__DOT___Contorller_io_len)) {
            Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__Dmem__DOT__mem_write_TOP(vlSelf->io_alu_rsl, 4U, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2);
        }
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 1072, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 1072, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
