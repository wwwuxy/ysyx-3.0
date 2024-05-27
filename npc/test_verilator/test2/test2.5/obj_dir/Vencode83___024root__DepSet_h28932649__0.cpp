// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode83.h for the primary calling header

#include "verilated.h"

#include "Vencode83__Syms.h"
#include "Vencode83___024root.h"

extern const VlUnpacked<CData/*2:0*/, 512> Vencode83__ConstPool__TABLE_h94dec4f3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vencode83__ConstPool__TABLE_h6e62a9ff_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vencode83__ConstPool__TABLE_hbd09e71f_0;
extern const VlUnpacked<IData/*31:0*/, 512> Vencode83__ConstPool__TABLE_h3d91633c_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vencode83__ConstPool__TABLE_hcdb3acf3_0;

VL_INLINE_OPT void Vencode83___024root___ico_sequent__TOP__0(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    vlSelf->top__DOT__w = Vencode83__ConstPool__TABLE_h94dec4f3_0
        [__Vtableidx1];
    vlSelf->a = Vencode83__ConstPool__TABLE_h6e62a9ff_0
        [__Vtableidx1];
    if ((4U & Vencode83__ConstPool__TABLE_hbd09e71f_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__encrd__DOT__i = Vencode83__ConstPool__TABLE_h3d91633c_0
            [__Vtableidx1];
    }
    vlSelf->led_out = vlSelf->top__DOT__w;
    __Vtableidx2 = vlSelf->top__DOT__w;
    vlSelf->light = Vencode83__ConstPool__TABLE_hcdb3acf3_0
        [__Vtableidx2];
}

void Vencode83___024root___eval_ico(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vencode83___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vencode83___024root___eval_act(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_act\n"); );
}

void Vencode83___024root___eval_nba(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_nba\n"); );
}

void Vencode83___024root___eval_triggers__ico(Vencode83___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__ico(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode83___024root___eval_triggers__act(Vencode83___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__act(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencode83___024root___dump_triggers__nba(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG

void Vencode83___024root___eval(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval\n"); );
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
        Vencode83___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vencode83___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("encode83.v", 51, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vencode83___024root___eval_ico(vlSelf);
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
            Vencode83___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vencode83___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("encode83.v", 51, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vencode83___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vencode83___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("encode83.v", 51, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vencode83___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vencode83___024root___eval_debug_assertions(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
