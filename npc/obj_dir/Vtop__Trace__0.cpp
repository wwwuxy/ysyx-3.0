// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT___InputAlu_io_op2),32);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT__Controller__DOT__io_alu_a_sel_0),12);
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__Controller__DOT__io_alu_a_sel_0));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__Pc__DOT__pc),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_0),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_1),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_2),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_3),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_4),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_5),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_6),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_7),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_8),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_9),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_10),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_11),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_12),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_13),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_14),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_15),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_16),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_17),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_18),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_19),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_20),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_21),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_22),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_23),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_24),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_25),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_26),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_27),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_28),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_29),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_30),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_31),32);
    }
    bufp->chgBit(oldp+36,(vlSelf->clock));
    bufp->chgBit(oldp+37,(vlSelf->reset));
    bufp->chgIData(oldp+38,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+39,(vlSelf->io_pc),32);
    bufp->chgIData(oldp+40,(vlSelf->io_addr),32);
    bufp->chgIData(oldp+41,(vlSelf->io_data),32);
    bufp->chgBit(oldp+42,(vlSelf->io_mem_wr));
    bufp->chgIData(oldp+43,(vlSelf->top__DOT___InputAlu_io_op1),32);
    bufp->chgQData(oldp+44,((0x7fffffffffffffffULL 
                             & ((QData)((IData)(vlSelf->top__DOT___InputAlu_io_op1)) 
                                << ((0x13U == (0x7fU 
                                               & vlSelf->io_inst))
                                     ? (0x1fU & (vlSelf->io_inst 
                                                 >> 0x14U))
                                     : 0U)))),63);
    bufp->chgBit(oldp+46,((0x13U == (0x7fU & vlSelf->io_inst))));
    bufp->chgIData(oldp+47,(vlSelf->top__DOT__RegisterFile__DOT___GEN[
                            (0x1fU & (vlSelf->io_inst 
                                      >> 0xfU))]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
