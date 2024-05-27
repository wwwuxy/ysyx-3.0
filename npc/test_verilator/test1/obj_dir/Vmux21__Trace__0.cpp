// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux21__Syms.h"


void Vmux21___024root__trace_chg_sub_0(Vmux21___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux21___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_chg_top_0\n"); );
    // Init
    Vmux21___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux21___024root*>(voidSelf);
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux21___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux21___024root__trace_chg_sub_0(Vmux21___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+2,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+3,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+4,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+6,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+7,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+8,(vlSelf->a));
    bufp->chgBit(oldp+9,(vlSelf->b));
    bufp->chgBit(oldp+10,(vlSelf->s));
    bufp->chgBit(oldp+11,(vlSelf->y));
    bufp->chgCData(oldp+12,((2U | (((IData)(vlSelf->a) 
                                    << 2U) | (IData)(vlSelf->b)))),4);
}

void Vmux21___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_cleanup\n"); );
    // Init
    Vmux21___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux21___024root*>(voidSelf);
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
