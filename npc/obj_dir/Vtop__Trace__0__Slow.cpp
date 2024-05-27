// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->declBus(c+33,"imm", false,-1, 31,0);
    tracep->declBus(c+34,"inst", false,-1, 31,0);
    tracep->declBus(c+41,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+35,"rs1", false,-1, 4,0);
    tracep->declBus(c+36,"rs2", false,-1, 4,0);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"reset", false,-1);
    tracep->declBus(c+41,"pc", false,-1, 31,0);
    tracep->declBus(c+42,"snpc", false,-1, 31,0);
    tracep->declBus(c+41,"ipc", false,-1, 31,0);
    tracep->pushNamePrefix("addpc ");
    tracep->declBus(c+41,"data1", false,-1, 31,0);
    tracep->declBus(c+45,"data2", false,-1, 31,0);
    tracep->declBus(c+42,"res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resetpc ");
    tracep->declBus(c+46,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBus(c+42,"din", false,-1, 31,0);
    tracep->declBus(c+41,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->declBus(c+35,"rs1", false,-1, 4,0);
    tracep->declBus(c+33,"imm", false,-1, 31,0);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+44,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("addi ");
    tracep->declBus(c+44,"data1", false,-1, 31,0);
    tracep->declBus(c+33,"data2", false,-1, 31,0);
    tracep->declBus(c+43,"res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+48,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+37,"waddr", false,-1, 4,0);
    tracep->declBus(c+35,"raddr", false,-1, 4,0);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->declBus(c+44,"rdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_i ");
    tracep->declBus(c+34,"ins", false,-1, 31,0);
    tracep->declBus(c+35,"rs1", false,-1, 4,0);
    tracep->declBus(c+36,"rs2", false,-1, 4,0);
    tracep->declBus(c+33,"imm", false,-1, 31,0);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->declBus(c+34,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBus(c+41,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"ins", false,-1, 31,0);
    tracep->declBus(c+34,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf[31]),32);
    bufp->fullIData(oldp+33,((((- (IData)((vlSelf->top__DOT__ifu__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->top__DOT__ifu__DOT__inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ifu__DOT__inst),32);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+38,(vlSelf->clk));
    bufp->fullBit(oldp+39,(vlSelf->reset));
    bufp->fullBit(oldp+40,(vlSelf->wen));
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__PC__DOT__ipc),32);
    bufp->fullIData(oldp+42,(((IData)(4U) + vlSelf->top__DOT__PC__DOT__ipc)),32);
    bufp->fullIData(oldp+43,((vlSelf->top__DOT__exu__DOT__regs__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                                         >> 0xfU))] 
                              + (((- (IData)((vlSelf->top__DOT__ifu__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->top__DOT__ifu__DOT__inst 
                                              >> 0x14U)))),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__exu__DOT__regs__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+45,(4U),32);
    bufp->fullIData(oldp+46,(0x20U),32);
    bufp->fullIData(oldp+47,(0x80000000U),32);
    bufp->fullIData(oldp+48,(5U),32);
}
