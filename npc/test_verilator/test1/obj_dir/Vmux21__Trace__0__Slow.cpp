// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux21__Syms.h"


VL_ATTR_COLD void Vmux21___024root__trace_init_sub__TOP__0(Vmux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"a", false,-1);
    tracep->declBit(c+10,"b", false,-1);
    tracep->declBit(c+11,"s", false,-1);
    tracep->declBit(c+12,"y", false,-1);
    tracep->pushNamePrefix("mux21 ");
    tracep->declBit(c+9,"a", false,-1);
    tracep->declBit(c+10,"b", false,-1);
    tracep->declBit(c+11,"s", false,-1);
    tracep->declBit(c+12,"y", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+14,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+15,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+15,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 0,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declBus(c+13,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+14,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+15,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+15,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+16,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 0,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declBus(c+17,"default_out", false,-1, 0,0);
    tracep->declBus(c+13,"lut", false,-1, 3,0);
    tracep->declBus(c+14,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+7,"lut_out", false,-1, 0,0);
    tracep->declBit(c+8,"hit", false,-1);
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vmux21___024root__trace_init_top(Vmux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_init_top\n"); );
    // Body
    Vmux21___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux21___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux21___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux21___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux21___024root__trace_register(Vmux21___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux21___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux21___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux21___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux21___024root__trace_full_sub_0(Vmux21___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux21___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_full_top_0\n"); );
    // Init
    Vmux21___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux21___024root*>(voidSelf);
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux21___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux21___024root__trace_full_sub_0(Vmux21___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+3,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+4,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+5,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+8,(vlSelf->mux21__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+9,(vlSelf->a));
    bufp->fullBit(oldp+10,(vlSelf->b));
    bufp->fullBit(oldp+11,(vlSelf->s));
    bufp->fullBit(oldp+12,(vlSelf->y));
    bufp->fullCData(oldp+13,((2U | (((IData)(vlSelf->a) 
                                     << 2U) | (IData)(vlSelf->b)))),4);
    bufp->fullIData(oldp+14,(2U),32);
    bufp->fullIData(oldp+15,(1U),32);
    bufp->fullIData(oldp+16,(0U),32);
    bufp->fullBit(oldp+17,(0U));
    bufp->fullIData(oldp+18,(2U),32);
}
