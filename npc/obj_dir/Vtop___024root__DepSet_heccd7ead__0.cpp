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

void Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ len, IData/*31:0*/ &mem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->top__DOT__Pc__DOT__pc = 0x80000000U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_1 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_2 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_3 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_4 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_5 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_6 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_7 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_8 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_9 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_10 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_11 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_12 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_13 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_14 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_15 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_16 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_17 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_18 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_19 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_20 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_21 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_22 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_23 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_24 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_25 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_26 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_27 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_28 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_29 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_30 = 0U;
        vlSelf->top__DOT__RegisterFile__DOT__FileReg_31 = 0U;
    } else {
        vlSelf->top__DOT__Pc__DOT__pc = ((IData)(vlSelf->top__DOT___Controller_io_jump_en)
                                          ? vlSelf->io_addr
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__Pc__DOT__pc));
        vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0 
            = vlSelf->top__DOT__RegisterFile__DOT___GEN[
            (0x1fU & (vlSelf->top__DOT___Mem_inst >> 7U))];
        if ((1U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_1 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((2U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_2 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((3U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_3 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((4U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_4 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((5U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_5 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((6U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_6 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((7U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_7 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((8U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_8 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((9U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                             >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_9 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0xaU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                               >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_10 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0xbU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                               >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_11 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0xcU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                               >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_12 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0xdU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                               >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_13 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0xeU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                               >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_14 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0xfU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                               >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_15 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x10U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_16 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x11U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_17 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x12U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_18 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x13U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_19 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x14U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_20 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x15U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_21 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x16U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_22 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x17U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_23 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x18U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_24 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x19U == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_25 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x1aU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_26 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x1bU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_27 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x1cU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_28 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x1dU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_29 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x1eU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_30 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
        if ((0x1fU == (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                >> 7U)))) {
            vlSelf->top__DOT__RegisterFile__DOT__FileReg_31 
                = ((IData)(vlSelf->top__DOT___Controller_io_rf_wr_en)
                    ? vlSelf->top__DOT___InputReg_io_wd
                    : vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0);
        }
    }
    vlSelf->top__DOT__Controller__DOT__alu_out = vlSelf->io_addr;
    vlSelf->io_pc = vlSelf->top__DOT__Pc__DOT__pc;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0U] = 0U;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[1U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_1;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[2U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_2;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[3U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_3;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[4U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_4;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[5U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_5;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[6U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_6;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[7U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_7;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[8U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_8;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[9U] = vlSelf->top__DOT__RegisterFile__DOT__FileReg_9;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0xaU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_10;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0xbU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_11;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0xcU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_12;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0xdU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_13;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0xeU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_14;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0xfU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_15;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x10U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_16;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x11U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_17;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x12U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_18;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x13U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_19;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x14U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_20;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x15U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_21;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x16U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_22;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x17U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_23;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x18U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_24;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x19U] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_25;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x1aU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_26;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x1bU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_27;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x1cU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_28;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x1dU] 
        = vlSelf->top__DOT__RegisterFile__DOT__FileReg_29;
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__RegisterFile__DOT__FileReg_31)) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RegisterFile__DOT__FileReg_30))));
    vlSelf->top__DOT__RegisterFile__DOT___GEN[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->top__DOT__RegisterFile__DOT__FileReg_31)) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__RegisterFile__DOT__FileReg_30))) 
                   >> 0x20U));
    Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_pc, 4U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__0__Vfuncout);
    vlSelf->top__DOT___Mem_inst = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__0__Vfuncout;
    vlSelf->io_inst = vlSelf->top__DOT___Mem_inst;
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0 
        = ((0x67U == (0x7fU & vlSelf->top__DOT___Mem_inst)) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN = ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT___Mem_inst)) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0 
        = (((- (IData)((vlSelf->top__DOT___Mem_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT___Mem_inst 
                                                >> 0x14U));
    vlSelf->io_data = vlSelf->top__DOT__RegisterFile__DOT___GEN[
        (0x1fU & (vlSelf->top__DOT___Mem_inst >> 0x14U))];
    vlSelf->top__DOT__Controller__DOT___GEN_1 = (IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_2 = (IData)(
                                                        (0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT__io_mem_wr_en_0 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT___Controller_io_imm = ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT___Mem_inst))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT___Mem_inst 
                                                                >> 0xbU)))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelf->top__DOT___Mem_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->top__DOT___Mem_inst 
                                                         >> 7U))))
                                             : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT___Mem_inst))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___Mem_inst 
                                                                 >> 0xbU)))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT___Mem_inst 
                                                    >> 0x14U))
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst))
                                                  ? vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT___Mem_inst))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT___Mem_inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->top__DOT___Mem_inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->top__DOT___Mem_inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->top__DOT___Mem_inst 
                                                               >> 0x14U)))))
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT___Mem_inst))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->top__DOT___Mem_inst)
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT___Mem_inst))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT___Mem_inst)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT___Mem_inst))
                                                      ? vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0
                                                      : 0U)))))));
    vlSelf->top__DOT___Controller_io_jump_en = (1U 
                                                & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_1)
                                                    ? 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != vlSelf->top__DOT__Controller__DOT__alu_out))) 
                                                    | (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0))
                                                    : (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0)));
    vlSelf->top__DOT___Controller_io_rf_wr_en = ((IData)(vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0) 
                                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_2) 
                                                    | ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT___Mem_inst)) 
                                                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN) 
                                                          | (0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT___Mem_inst))))));
    vlSelf->top__DOT__Controller__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__Controller__DOT__io_mem_wr_en_0) 
                                                 | ((IData)(vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0) 
                                                    | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_2)));
    vlSelf->top__DOT___InputAlu_io_op2 = (((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4)) 
                                           & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_1) 
                                              & (0U 
                                                 != vlSelf->top__DOT__Controller__DOT__alu_out)))
                                           ? vlSelf->io_data
                                           : vlSelf->top__DOT___Controller_io_imm);
    vlSelf->top__DOT___InputAlu_io_op1 = (((IData)(vlSelf->top__DOT__Controller__DOT___GEN_4) 
                                           | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_1)
                                               ? (0U 
                                                  != vlSelf->top__DOT__Controller__DOT__alu_out)
                                               : (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst))))
                                           ? vlSelf->top__DOT__RegisterFile__DOT___GEN[
                                          (0x1fU & 
                                           (vlSelf->top__DOT___Mem_inst 
                                            >> 0xfU))]
                                           : vlSelf->top__DOT__Pc__DOT__pc);
    vlSelf->io_addr = ((((IData)(vlSelf->top__DOT__Controller__DOT___GEN_4) 
                         | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_1)) 
                            & ((0x67U != (0x7fU & vlSelf->top__DOT___Mem_inst)) 
                               & (IData)(vlSelf->top__DOT__Controller__DOT___GEN))))
                         ? (vlSelf->top__DOT___InputAlu_io_op1 
                            + vlSelf->top__DOT___InputAlu_io_op2)
                         : 0U) | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4)) 
                                    & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_1))
                                    ? (vlSelf->top__DOT___InputAlu_io_op1 
                                       - vlSelf->top__DOT___InputAlu_io_op2)
                                    : 0U) | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4)) 
                                               & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_1)) 
                                                  & ((0x67U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT___Mem_inst)) 
                                                     & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN)) 
                                                        & (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT___Mem_inst))))))
                                               ? vlSelf->top__DOT___InputAlu_io_op2
                                               : 0U) 
                                             | (((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4)) 
                                                 & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_1)) 
                                                    & (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT___Mem_inst))))
                                                 ? 
                                                (vlSelf->top__DOT___InputAlu_io_op1 
                                                 | vlSelf->top__DOT___InputAlu_io_op2)
                                                 : 0U))));
    vlSelf->io_nextpc = vlSelf->io_addr;
    if (VL_UNLIKELY(vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0)) {
        VL_WRITEF("rd_en is %1#\n",1,vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0);
        Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_addr, 4U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__1__Vfuncout);
        vlSelf->top__DOT___Mem_dm_out = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__1__Vfuncout;
    } else {
        vlSelf->top__DOT___Mem_dm_out = vlSelf->io_addr;
    }
    if (vlSelf->top__DOT__Controller__DOT__io_mem_wr_en_0) {
        Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_write_TOP(vlSelf->io_addr, 4U, vlSelf->io_data);
    }
    vlSelf->top__DOT___InputReg_io_wd = (((((IData)(vlSelf->top__DOT__Controller__DOT___GEN_2) 
                                            | ((~ (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0)) 
                                               & (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst)))) 
                                           | (IData)(vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0))
                                           ? vlSelf->top__DOT___Mem_dm_out
                                           : 0U) | 
                                         (((~ (IData)(vlSelf->top__DOT__Controller__DOT__io_mem_rd_en_0)) 
                                           & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_2)) 
                                              & ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0) 
                                                 | ((0x17U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT___Mem_inst)) 
                                                    & (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT___Mem_inst))))))
                                           ? ((IData)(vlSelf->top__DOT___Controller_io_jump_en)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__Pc__DOT__pc)
                                               : vlSelf->top__DOT__Pc__DOT__pc)
                                           : 0U));
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
                    VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 576, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 576, "", "NBA region did not converge.");
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
