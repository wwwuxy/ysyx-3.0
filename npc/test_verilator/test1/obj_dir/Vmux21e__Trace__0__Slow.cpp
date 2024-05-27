// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux21e__Syms.h"


VL_ATTR_COLD void Vmux21e___024root__trace_init_sub__TOP__0(Vmux21e___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+18,"b", false,-1);
    tracep->declBit(c+19,"s", false,-1);
    tracep->declBit(c+20,"y", false,-1);
    tracep->declBus(c+21,"out", false,-1, 0,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declBus(c+23,"default_out", false,-1, 0,0);
    tracep->declBus(c+24,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("MuxKeyWithDefault ");
    tracep->declBus(c+26,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+27,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 0,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declBus(c+23,"default_out", false,-1, 0,0);
    tracep->declBus(c+24,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+26,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+27,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 0,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declBus(c+23,"default_out", false,-1, 0,0);
    tracep->declBus(c+24,"lut", false,-1, 3,0);
    tracep->declBus(c+26,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+9,"lut_out", false,-1, 0,0);
    tracep->declBit(c+10,"hit", false,-1);
    tracep->declBus(c+28,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux21e ");
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+18,"b", false,-1);
    tracep->declBit(c+19,"s", false,-1);
    tracep->declBit(c+20,"y", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+26,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+27,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 0,0);
    tracep->declBus(c+19,"key", false,-1, 0,0);
    tracep->declBus(c+25,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+26,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+27,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+29,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 0,0);
    tracep->declBus(c+19,"key", false,-1, 0,0);
    tracep->declBus(c+30,"default_out", false,-1, 0,0);
    tracep->declBus(c+25,"lut", false,-1, 3,0);
    tracep->declBus(c+26,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+13+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+15,"lut_out", false,-1, 0,0);
    tracep->declBit(c+16,"hit", false,-1);
    tracep->declBus(c+28,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vmux21e___024root__trace_init_top(Vmux21e___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root__trace_init_top\n"); );
    // Body
    Vmux21e___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux21e___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux21e___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux21e___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux21e___024root__trace_register(Vmux21e___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux21e___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux21e___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux21e___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux21e___024root__trace_full_sub_0(Vmux21e___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux21e___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root__trace_full_top_0\n"); );
    // Init
    Vmux21e___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux21e___024root*>(voidSelf);
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux21e___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux21e___024root__trace_full_sub_0(Vmux21e___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21e___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+3,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+4,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+5,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+8,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+9,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+10,(vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+11,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+12,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+13,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+14,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+15,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+16,(vlSelf->mux21e__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+17,(vlSelf->a));
    bufp->fullBit(oldp+18,(vlSelf->b));
    bufp->fullBit(oldp+19,(vlSelf->s));
    bufp->fullBit(oldp+20,(vlSelf->y));
    bufp->fullBit(oldp+21,(vlSelf->out));
    bufp->fullBit(oldp+22,(vlSelf->key));
    bufp->fullBit(oldp+23,(vlSelf->default_out));
    bufp->fullCData(oldp+24,(vlSelf->lut),4);
    bufp->fullCData(oldp+25,((2U | (((IData)(vlSelf->a) 
                                     << 2U) | (IData)(vlSelf->b)))),4);
    bufp->fullIData(oldp+26,(2U),32);
    bufp->fullIData(oldp+27,(1U),32);
    bufp->fullIData(oldp+28,(2U),32);
    bufp->fullIData(oldp+29,(0U),32);
    bufp->fullBit(oldp+30,(0U));
}
