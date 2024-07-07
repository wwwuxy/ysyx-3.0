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
    tracep->declBit(c+37,"clock", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBus(c+39,"io_inst", false,-1, 31,0);
    tracep->declBus(c+40,"io_pc", false,-1, 31,0);
    tracep->declBus(c+41,"io_addr", false,-1, 31,0);
    tracep->declBus(c+42,"io_data", false,-1, 31,0);
    tracep->declBit(c+43,"io_mem_wr", false,-1);
    tracep->declBus(c+44,"io_nextpc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+37,"clock", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBus(c+39,"io_inst", false,-1, 31,0);
    tracep->declBus(c+40,"io_pc", false,-1, 31,0);
    tracep->declBus(c+41,"io_addr", false,-1, 31,0);
    tracep->declBus(c+42,"io_data", false,-1, 31,0);
    tracep->declBit(c+43,"io_mem_wr", false,-1);
    tracep->declBus(c+41,"io_nextpc", false,-1, 31,0);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+45,"io_op1", false,-1, 31,0);
    tracep->declBus(c+1,"io_op2", false,-1, 31,0);
    tracep->declBus(c+46,"io_alu_sel", false,-1, 12,0);
    tracep->declBus(c+41,"io_rsl", false,-1, 31,0);
    tracep->declQuad(c+47,"umovl", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Controller ");
    tracep->declBus(c+39,"io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"io_rf_wr_en", false,-1);
    tracep->declBus(c+49,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+3,"io_alu_a_sel", false,-1);
    tracep->declBus(c+46,"io_alu_sel", false,-1, 12,0);
    tracep->declBit(c+4,"io_jump_en", false,-1);
    tracep->declBus(c+1,"io_imm", false,-1, 31,0);
    tracep->declBit(c+50,"isI_type", false,-1);
    tracep->declBit(c+51,"is_auipc", false,-1);
    tracep->declBit(c+52,"is_lui", false,-1);
    tracep->declBit(c+53,"is_jal", false,-1);
    tracep->declBit(c+54,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InputAlu ");
    tracep->declBus(c+55,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+1,"io_imm", false,-1, 31,0);
    tracep->declBus(c+40,"io_pc", false,-1, 31,0);
    tracep->declBit(c+3,"io_alu_a_sel", false,-1);
    tracep->declBus(c+45,"io_op1", false,-1, 31,0);
    tracep->declBus(c+1,"io_op2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InputReg ");
    tracep->declBus(c+41,"io_alu_out", false,-1, 31,0);
    tracep->declBus(c+39,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+49,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBus(c+56,"io_storepc", false,-1, 31,0);
    tracep->declBus(c+57,"io_wd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Pc ");
    tracep->declBit(c+37,"clock", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+4,"io_jump_en", false,-1);
    tracep->declBus(c+41,"io_jump_pc", false,-1, 31,0);
    tracep->declBus(c+56,"io_dnpc", false,-1, 31,0);
    tracep->declBus(c+40,"io_next_pc", false,-1, 31,0);
    tracep->declBus(c+5,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+37,"clock", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBus(c+39,"io_inst", false,-1, 31,0);
    tracep->declBit(c+2,"io_wr_en", false,-1);
    tracep->declBus(c+57,"io_wd", false,-1, 31,0);
    tracep->declBus(c+55,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+42,"io_rd2", false,-1, 31,0);
    tracep->declBus(c+6,"FileReg_1", false,-1, 31,0);
    tracep->declBus(c+7,"FileReg_2", false,-1, 31,0);
    tracep->declBus(c+8,"FileReg_3", false,-1, 31,0);
    tracep->declBus(c+9,"FileReg_4", false,-1, 31,0);
    tracep->declBus(c+10,"FileReg_5", false,-1, 31,0);
    tracep->declBus(c+11,"FileReg_6", false,-1, 31,0);
    tracep->declBus(c+12,"FileReg_7", false,-1, 31,0);
    tracep->declBus(c+13,"FileReg_8", false,-1, 31,0);
    tracep->declBus(c+14,"FileReg_9", false,-1, 31,0);
    tracep->declBus(c+15,"FileReg_10", false,-1, 31,0);
    tracep->declBus(c+16,"FileReg_11", false,-1, 31,0);
    tracep->declBus(c+17,"FileReg_12", false,-1, 31,0);
    tracep->declBus(c+18,"FileReg_13", false,-1, 31,0);
    tracep->declBus(c+19,"FileReg_14", false,-1, 31,0);
    tracep->declBus(c+20,"FileReg_15", false,-1, 31,0);
    tracep->declBus(c+21,"FileReg_16", false,-1, 31,0);
    tracep->declBus(c+22,"FileReg_17", false,-1, 31,0);
    tracep->declBus(c+23,"FileReg_18", false,-1, 31,0);
    tracep->declBus(c+24,"FileReg_19", false,-1, 31,0);
    tracep->declBus(c+25,"FileReg_20", false,-1, 31,0);
    tracep->declBus(c+26,"FileReg_21", false,-1, 31,0);
    tracep->declBus(c+27,"FileReg_22", false,-1, 31,0);
    tracep->declBus(c+28,"FileReg_23", false,-1, 31,0);
    tracep->declBus(c+29,"FileReg_24", false,-1, 31,0);
    tracep->declBus(c+30,"FileReg_25", false,-1, 31,0);
    tracep->declBus(c+31,"FileReg_26", false,-1, 31,0);
    tracep->declBus(c+32,"FileReg_27", false,-1, 31,0);
    tracep->declBus(c+33,"FileReg_28", false,-1, 31,0);
    tracep->declBus(c+34,"FileReg_29", false,-1, 31,0);
    tracep->declBus(c+35,"FileReg_30", false,-1, 31,0);
    tracep->declBus(c+36,"FileReg_31", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT___InputAlu_io_op2),32);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT___Controller_io_rf_wr_en));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT___Controller_io_alu_a_sel));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT___Controller_io_jump_en));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__Pc__DOT__pc),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_1),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_2),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_3),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_4),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_5),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_6),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_7),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_8),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_9),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_10),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_11),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_12),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_13),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_14),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_15),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_16),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_17),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_18),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_19),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_20),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_21),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_22),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_23),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_24),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_25),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_26),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_27),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_28),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_29),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_30),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_31),32);
    bufp->fullBit(oldp+37,(vlSelf->clock));
    bufp->fullBit(oldp+38,(vlSelf->reset));
    bufp->fullIData(oldp+39,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+40,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+41,(vlSelf->io_addr),32);
    bufp->fullIData(oldp+42,(vlSelf->io_data),32);
    bufp->fullBit(oldp+43,(vlSelf->io_mem_wr));
    bufp->fullIData(oldp+44,(vlSelf->io_nextpc),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT___InputAlu_io_op1),32);
    bufp->fullSData(oldp+46,(((IData)(vlSelf->top__DOT__Controller__DOT___GEN_0)
                               ? 1U : ((0x67U == (0x7fU 
                                                  & vlSelf->io_inst))
                                        ? 0x100U : 
                                       ((IData)(vlSelf->top__DOT__Controller__DOT___GEN)
                                         ? 1U : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst)) 
                                                 << 6U))))),13);
    bufp->fullQData(oldp+47,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->top__DOT___InputAlu_io_op1)) 
                                 << (0x1fU & vlSelf->top__DOT___InputAlu_io_op2)))),63);
    bufp->fullCData(oldp+49,(((IData)(vlSelf->top__DOT__Controller__DOT___GEN_0)
                               ? 1U : ((IData)(vlSelf->top__DOT___Controller_io_jump_en)
                                        ? 4U : ((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->io_inst))
                                                 ? 1U
                                                 : 
                                                ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->io_inst)) 
                                                 << 2U))))),3);
    bufp->fullBit(oldp+50,((0x13U == (0x7fU & vlSelf->io_inst))));
    bufp->fullBit(oldp+51,((0x17U == (0x7fU & vlSelf->io_inst))));
    bufp->fullBit(oldp+52,((0x37U == (0x7fU & vlSelf->io_inst))));
    bufp->fullBit(oldp+53,((0x6fU == (0x7fU & vlSelf->io_inst))));
    bufp->fullBit(oldp+54,((0x67U == (0x7fU & vlSelf->io_inst))));
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__RegisterFile__DOT___GEN[
                             (0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))]),32);
    bufp->fullIData(oldp+56,(((IData)(vlSelf->top__DOT___Controller_io_jump_en)
                               ? ((IData)(4U) + vlSelf->top__DOT__Pc__DOT__pc)
                               : vlSelf->top__DOT__Pc__DOT__pc)),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT___InputReg_io_wd),32);
}
