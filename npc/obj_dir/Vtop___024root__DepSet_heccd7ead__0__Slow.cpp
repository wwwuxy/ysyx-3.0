// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 690, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ len, IData/*31:0*/ &mem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->io_pc = vlSelf->top__DOT__Pc__DOT__pc;
    Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_pc, 4U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__0__Vfuncout);
    vlSelf->top__DOT___Mem_inst = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__0__Vfuncout;
    vlSelf->io_inst = vlSelf->top__DOT___Mem_inst;
    vlSelf->__VdfgTmp_h67d67586__0 = ((0x67U == (0x7fU 
                                                 & vlSelf->top__DOT___Mem_inst)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h86e6c972__0 
        = ((0x17U == (0x7fU & vlSelf->top__DOT___Mem_inst)) 
           | (0x37U == (0x7fU & vlSelf->top__DOT___Mem_inst)));
    vlSelf->__VdfgTmp_h64c303f7__0 = ((0x67U == (0x7fU 
                                                 & vlSelf->top__DOT___Mem_inst)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0 
        = (((- (IData)((vlSelf->top__DOT___Mem_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT___Mem_inst 
                                                >> 0x14U));
    vlSelf->io_data = vlSelf->top__DOT__RegisterFile__DOT___GEN[
        (0x1fU & (vlSelf->top__DOT___Mem_inst >> 0x14U))];
    vlSelf->top__DOT__Controller__DOT___GEN_10 = (IData)(
                                                         (0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_9 = (IData)(
                                                        (0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_7 = (IData)(
                                                        (0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_6 = (IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_3 = (IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_2 = (IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_20 = (IData)(
                                                         (0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_43 = (IData)(
                                                         (0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_42 = (IData)(
                                                         (0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_38 = (IData)(
                                                         (0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_37 = (IData)(
                                                         (0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_36 = (IData)(
                                                         (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_25 = (IData)(
                                                         (0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_24 = (IData)(
                                                         (0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_23 = (IData)(
                                                         (0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_19 = (IData)(
                                                         (0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_18 = (IData)(
                                                         (0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_17 = (IData)(
                                                         (0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_13 = (IData)(
                                                         (0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_11 = (IData)(
                                                         (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_15 = (IData)(
                                                         (0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_14 = (IData)(
                                                         (0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h6db50abe__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_28 = (IData)(
                                                         (0x5013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_32 = (IData)(
                                                         (0x33U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->top__DOT__Controller__DOT___GEN_39 = (IData)(
                                                         (0x5033U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT___Mem_inst)));
    vlSelf->io_imm = ((0x63U == (0x7fU & vlSelf->top__DOT___Mem_inst))
                       ? (((- (IData)((vlSelf->top__DOT___Mem_inst 
                                       >> 0x1fU))) 
                           << 0xcU) | ((0x800U & (vlSelf->top__DOT___Mem_inst 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->top__DOT___Mem_inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->top__DOT___Mem_inst 
                                                >> 7U)))))
                       : ((0x23U == (0x7fU & vlSelf->top__DOT___Mem_inst))
                           ? (((- (IData)((vlSelf->top__DOT___Mem_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->top__DOT___Mem_inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->top__DOT___Mem_inst 
                                                 >> 7U))))
                           : ((3U == (0x7fU & vlSelf->top__DOT___Mem_inst))
                               ? vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0
                               : ((0x67U == (0x7fU 
                                             & vlSelf->top__DOT___Mem_inst))
                                   ? vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0
                                   : ((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT___Mem_inst))
                                       ? (((- (IData)(
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
                                       : ((0x37U == 
                                           (0x7fU & vlSelf->top__DOT___Mem_inst))
                                           ? (0xfffff000U 
                                              & vlSelf->top__DOT___Mem_inst)
                                           : ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst))
                                               ? (0xfffff000U 
                                                  & vlSelf->top__DOT___Mem_inst)
                                               : ((
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT___Mem_inst)) 
                                                   & ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT___Mem_inst 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT___Mem_inst 
                                                             >> 0xcU)))))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x14U))
                                                   : 
                                                  (((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT___Mem_inst)) 
                                                    & ((5U 
                                                        != 
                                                        (7U 
                                                         & (vlSelf->top__DOT___Mem_inst 
                                                            >> 0xcU))) 
                                                       & (1U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->top__DOT___Mem_inst 
                                                              >> 0xcU)))))
                                                    ? vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0
                                                    : 0U)))))))));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0 
        = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_10) 
           | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_9));
    vlSelf->__VdfgTmp_h20792fd6__0 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_7) 
                                      | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_6));
    vlSelf->top__DOT__Controller__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_3) 
                                                 | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_2));
    vlSelf->top__DOT___Controller_io_len = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_19)
                                             ? 4U : 
                                            ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_18)
                                              ? 2U : 
                                             ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_17)
                                               ? 1U
                                               : ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_15)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_14)
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_11)) 
                                                        | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_13)))
                                                     ? 4U
                                                     : 2U))))));
    vlSelf->top__DOT___Controller_io_load_unsign = 
        ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_15) 
         | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_14));
    vlSelf->top__DOT__Controller__DOT___GEN_35 = ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT___Mem_inst)) 
                                                  & (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h6db50abe__0));
    vlSelf->top__DOT__Controller__DOT___GEN_27 = ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT___Mem_inst)) 
                                                  & (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h6db50abe__0));
    vlSelf->top__DOT__Controller__DOT___GEN_31 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_28) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x19U)));
    vlSelf->top__DOT__Controller__DOT___GEN_29 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_28) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x19U)));
    vlSelf->top__DOT__Controller__DOT___GEN_34 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_32) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x19U)));
    vlSelf->top__DOT__Controller__DOT___GEN_33 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_32) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x19U)));
    vlSelf->top__DOT__Controller__DOT___GEN_41 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_39) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x19U)));
    vlSelf->top__DOT__Controller__DOT___GEN_40 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_39) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->top__DOT___Mem_inst 
                                                      >> 0x19U)));
    vlSelf->top__DOT__Controller__DOT___GEN_16 = ((IData)(vlSelf->top__DOT___Controller_io_load_unsign) 
                                                  | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_13) 
                                                     | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_11)));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h9bd9a5a8__0 
        = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_31) 
           | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_29) 
              | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_27) 
                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_25) 
                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_24) 
                       | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_23))))));
    vlSelf->top__DOT__Controller__DOT___GEN_44 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_43) 
                                                  | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_42) 
                                                     | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_41) 
                                                        | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_40) 
                                                           | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_38) 
                                                              | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_37) 
                                                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_36) 
                                                                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_35) 
                                                                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_34) 
                                                                          | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33))))))))));
    vlSelf->top__DOT__Controller__DOT___GEN_21 = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_20) 
                                                  | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_19) 
                                                     | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_18) 
                                                        | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_17) 
                                                           | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_16)))));
    vlSelf->__VdfgTmp_h2bda3b8d__0 = ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h9bd9a5a8__0) 
                                      | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_20));
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_hb80f5b52__0 
        = ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_44) 
           | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_31) 
              | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_29) 
                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_27) 
                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_25) 
                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_24) 
                          | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_23) 
                             | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_20))))))));
    vlSelf->io_alu_op2 = (((IData)(vlSelf->top__DOT__Controller__DOT___GEN_44) 
                           | ((~ ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h9bd9a5a8__0) 
                                  | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_21))) 
                              & ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0) 
                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_7) 
                                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_6) 
                                       | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4))))))
                           ? vlSelf->io_data : vlSelf->io_imm);
    vlSelf->top__DOT___Controller_io_rf_wr_en = ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_hb80f5b52__0) 
                                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_15) 
                                                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_14) 
                                                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_13) 
                                                          | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_11) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT___Mem_inst)) 
                                                                | ((0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT___Mem_inst)) 
                                                                   | (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h86e6c972__0))))))));
    vlSelf->io_alu_op1 = (((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_hb80f5b52__0) 
                           | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_19) 
                              | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_18) 
                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_17) 
                                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_15) 
                                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_14) 
                                          | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_13) 
                                             | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_11) 
                                                | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_10) 
                                                   | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_9) 
                                                      | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_7) 
                                                         | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_6) 
                                                            | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_4) 
                                                               | (0x67U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT___Mem_inst)))))))))))))))
                           ? vlSelf->top__DOT__RegisterFile__DOT___GEN[
                          (0x1fU & (vlSelf->top__DOT___Mem_inst 
                                    >> 0xfU))] : vlSelf->top__DOT__Pc__DOT__pc);
    vlSelf->io_addr = ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                         & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                            & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                               & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                  & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                     & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                        & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                           & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                 & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_33) 
                                                    | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)) 
                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_24)) 
                                                                   & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_23)) 
                                                                      & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_21) 
                                                                         | ((~ (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0)) 
                                                                            & ((~ (IData)(vlSelf->__VdfgTmp_h20792fd6__0)) 
                                                                               & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h64c303f7__0)))))))))))))))))))))
                         ? (vlSelf->io_alu_op1 + vlSelf->io_alu_op2)
                         : 0U) | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                   & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                      & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                         & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)))))))))
                                    ? (vlSelf->io_alu_op1 
                                       - vlSelf->io_alu_op2)
                                    : 0U) | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                               & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                  & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                     & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                        & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                           & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                 & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_35) 
                                                                    | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)))))))))))))
                                               ? (vlSelf->io_alu_op1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->io_alu_op2))
                                               : 0U) 
                                             | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                  & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                     & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                        & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_40) 
                                                           | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29))))))))))))
                                                  ? 
                                                 (vlSelf->io_alu_op1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->io_alu_op2))
                                                  : 0U) 
                                                | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                     & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                        & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_41) 
                                                           | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)))))))))))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->io_alu_op1, 
                                                                   (0x1fU 
                                                                    & vlSelf->io_alu_op2))
                                                     : 0U) 
                                                   | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                        & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                           & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_24)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_21)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h20792fd6__0)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h64c303f7__0)) 
                                                                                & (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT___Mem_inst)))))))))))))))))))))))
                                                        ? vlSelf->io_alu_op2
                                                        : 0U) 
                                                      | ((((IData)(vlSelf->top__DOT__Controller__DOT___GEN_43) 
                                                           | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25))))))))))))))
                                                           ? 
                                                          (vlSelf->io_alu_op1 
                                                           & vlSelf->io_alu_op2)
                                                           : 0U) 
                                                         | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                              & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42))
                                                              ? 
                                                             (vlSelf->io_alu_op1 
                                                              | vlSelf->io_alu_op2)
                                                              : 0U) 
                                                            | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                                 & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                                          & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_38) 
                                                                             | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_24)))))))))))))))
                                                                 ? 
                                                                (vlSelf->io_alu_op1 
                                                                 ^ vlSelf->io_alu_op2)
                                                                 : 0U) 
                                                               | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                                    & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                                                & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_37) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_24)) 
                                                                                & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_23) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_21)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0))))))))))))))))))
                                                                    ? 
                                                                   (vlSelf->io_alu_op1 
                                                                    < vlSelf->io_alu_op2)
                                                                    : 0U) 
                                                                  | ((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                                       & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                                          & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                                             & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                                & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_36) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_24)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_21)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h20792fd6__0)))))))))))))))))))
                                                                       ? 
                                                                      VL_LTS_III(32, vlSelf->io_alu_op1, vlSelf->io_alu_op2)
                                                                       : 0U) 
                                                                     | (((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_43)) 
                                                                         & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_42)) 
                                                                            & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_41)) 
                                                                               & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_40)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_35)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_24)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_23)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_21)) 
                                                                                & ((~ (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0)) 
                                                                                & ((~ (IData)(vlSelf->__VdfgTmp_h20792fd6__0)) 
                                                                                & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_4))))))))))))))))))))
                                                                         ? 
                                                                        (vlSelf->io_alu_op1 
                                                                         == vlSelf->io_alu_op2)
                                                                         : 0U))))))))))));
    vlSelf->io_nextpc = vlSelf->io_addr;
    vlSelf->io_alu_out = vlSelf->io_addr;
    vlSelf->top__DOT___Controller_io_jump_no_jalr = 
        (1U & ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_10)
                ? (~ (IData)((0U != vlSelf->io_addr)))
                : ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_9)
                    ? (1U == vlSelf->io_addr) : ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_7)
                                                  ? 
                                                 (~ (IData)(
                                                            (0U 
                                                             != vlSelf->io_addr)))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_6)
                                                   ? 
                                                  (1U 
                                                   == vlSelf->io_addr)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_3)
                                                    ? 
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelf->io_addr)))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_2)
                                                     ? 
                                                    (1U 
                                                     == vlSelf->io_addr)
                                                     : 
                                                    (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT___Mem_inst)))))))));
    if (vlSelf->top__DOT__Controller__DOT___GEN_16) {
        if (vlSelf->top__DOT___Controller_io_load_unsign) {
            if ((1U == vlSelf->top__DOT___Controller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_addr, 1U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__1__Vfuncout);
                vlSelf->top__DOT___Mem_dm_out = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__1__Vfuncout;
            } else if ((2U == vlSelf->top__DOT___Controller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_addr, 2U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__2__Vfuncout);
                vlSelf->top__DOT___Mem_dm_out = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__2__Vfuncout;
            } else if ((4U == vlSelf->top__DOT___Controller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_addr, 4U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__3__Vfuncout);
                vlSelf->top__DOT___Mem_dm_out = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__3__Vfuncout;
            }
        } else {
            Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_addr, vlSelf->top__DOT___Controller_io_len, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__4__Vfuncout);
            vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data 
                = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__4__Vfuncout;
            if ((1U == vlSelf->top__DOT___Controller_io_len)) {
                vlSelf->top__DOT___Mem_dm_out = (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data));
            } else if ((2U == vlSelf->top__DOT___Controller_io_len)) {
                vlSelf->top__DOT___Mem_dm_out = (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data));
            } else if ((4U == vlSelf->top__DOT___Controller_io_len)) {
                Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_read_TOP(vlSelf->io_addr, 4U, vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__5__Vfuncout);
                vlSelf->top__DOT___Mem_dm_out = vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__5__Vfuncout;
            }
        }
    } else {
        vlSelf->top__DOT___Mem_dm_out = vlSelf->io_addr;
    }
    if (((IData)(vlSelf->top__DOT__Controller__DOT___GEN_19) 
         | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_18) 
            | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_17)))) {
        if ((1U == vlSelf->top__DOT___Controller_io_len)) {
            Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_write_TOP(vlSelf->io_addr, 1U, vlSelf->io_data);
        } else if ((2U == vlSelf->top__DOT___Controller_io_len)) {
            Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_write_TOP(vlSelf->io_addr, 2U, vlSelf->io_data);
        } else if ((4U == vlSelf->top__DOT___Controller_io_len)) {
            Vtop___024root____Vdpiimwrap_top__DOT__Mem__DOT__mem_write_TOP(vlSelf->io_addr, 4U, vlSelf->io_data);
        }
    }
    vlSelf->top__DOT___InputReg_io_wd = (((((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_44)) 
                                            & ((IData)(vlSelf->__VdfgTmp_h2bda3b8d__0) 
                                               | ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_16)) 
                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h67d67586__0)) 
                                                     & (IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h86e6c972__0))))) 
                                           | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_44) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h2bda3b8d__0)) 
                                                 & (IData)(vlSelf->top__DOT__Controller__DOT___GEN_16))))
                                           ? vlSelf->top__DOT___Mem_dm_out
                                           : 0U) | 
                                         (((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_44)) 
                                           & ((~ (IData)(vlSelf->__VdfgTmp_h2bda3b8d__0)) 
                                              & ((~ (IData)(vlSelf->top__DOT__Controller__DOT___GEN_16)) 
                                                 & (IData)(vlSelf->__VdfgTmp_h67d67586__0))))
                                           ? ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT___Mem_inst))
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__Pc__DOT__pc)
                                               : ((IData)(vlSelf->top__DOT___Controller_io_jump_no_jalr)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__Pc__DOT__pc)
                                                   : vlSelf->top__DOT__Pc__DOT__pc))
                                           : 0U));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_addr = VL_RAND_RESET_I(32);
    vlSelf->io_data = VL_RAND_RESET_I(32);
    vlSelf->io_nextpc = VL_RAND_RESET_I(32);
    vlSelf->io_alu_out = VL_RAND_RESET_I(32);
    vlSelf->io_alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->io_alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->io_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___InputReg_io_wd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___Mem_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___Mem_dm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___Controller_io_rf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___Controller_io_jump_no_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___Controller_io_len = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___Controller_io_load_unsign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Pc__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegisterFile__DOT__FileReg_31 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__RegisterFile__DOT___GEN);
    vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Controller__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_40 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_hb80f5b52__0 = 0;
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h86e6c972__0 = 0;
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h9bd9a5a8__0 = 0;
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h0af8c767__0 = 0;
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4240185c__0 = 0;
    vlSelf->top__DOT__Controller__DOT____VdfgTmp_h6db50abe__0 = 0;
    vlSelf->top__DOT__Mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h64c303f7__0 = 0;
    vlSelf->__VdfgTmp_h20792fd6__0 = 0;
    vlSelf->__VdfgTmp_h2bda3b8d__0 = 0;
    vlSelf->__VdfgTmp_h67d67586__0 = 0;
    vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__3__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__4__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__Mem__DOT__mem_read__5__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
