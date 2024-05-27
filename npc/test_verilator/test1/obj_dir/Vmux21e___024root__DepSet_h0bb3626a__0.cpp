// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux21e.h for the primary calling header

#include "verilated.h"

#include "Vmux21e__Syms.h"
#include "Vmux21e___024root.h"

VL_INLINE_OPT void Vmux21e___024root___ico_sequent__TOP__0(Vmux21e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->s) 
                                                  == 
                                                  vlSelf->mux21e__DOT__i0__DOT__i0__DOT__key_list
                                                  [0U]);
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__hit) 
                                                  | ((IData)(vlSelf->s) 
                                                     == 
                                                     vlSelf->mux21e__DOT__i0__DOT__i0__DOT__key_list
                                                     [1U]));
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (2U | (IData)(vlSelf->b));
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = vlSelf->a;
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelf->lut));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->b;
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = vlSelf->a;
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (1U & ((IData)(vlSelf->lut) >> 1U));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (1U & ((IData)(vlSelf->lut) >> 3U));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (1U & (IData)(vlSelf->lut));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (1U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->s) == vlSelf->mux21e__DOT__i0__DOT__i0__DOT__key_list
            [0U]) & vlSelf->mux21e__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->mux21e__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->s) == vlSelf->mux21e__DOT__i0__DOT__i0__DOT__key_list
               [1U]) & vlSelf->mux21e__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->y = vlSelf->mux21e__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
            [0U]) & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
         [0U]);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
               [1U]) & vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = 
        ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit) 
         | ((IData)(vlSelf->key) == vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list
            [1U]));
    vlSelf->out = ((IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit)
                    ? (IData)(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out)
                    : (IData)(vlSelf->default_out));
}

void Vmux21e___024root___eval_ico(Vmux21e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmux21e___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmux21e___024root___eval_act(Vmux21e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root___eval_act\n"); );
}

void Vmux21e___024root___eval_nba(Vmux21e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root___eval_nba\n"); );
}

void Vmux21e___024root___eval_triggers__ico(Vmux21e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21e___024root___dump_triggers__ico(Vmux21e___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux21e___024root___eval_triggers__act(Vmux21e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21e___024root___dump_triggers__act(Vmux21e___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux21e___024root___dump_triggers__nba(Vmux21e___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux21e___024root___eval(Vmux21e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmux21e___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmux21e___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("mux21e.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmux21e___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmux21e___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmux21e___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mux21e.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmux21e___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmux21e___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mux21e.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmux21e___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmux21e___024root___eval_debug_assertions(Vmux21e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->s & 0xfeU))) {
        Verilated::overWidthError("s");}
    if (VL_UNLIKELY((vlSelf->key & 0xfeU))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->default_out & 0xfeU))) {
        Verilated::overWidthError("default_out");}
    if (VL_UNLIKELY((vlSelf->lut & 0xf0U))) {
        Verilated::overWidthError("lut");}
}
#endif  // VL_DEBUG
