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
    tracep->declBit(c+73,"clock", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBus(c+75,"io_pc", false,-1, 31,0);
    tracep->declBus(c+76,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+77,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+73,"clock", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBus(c+75,"io_pc", false,-1, 31,0);
    tracep->declBus(c+76,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+77,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+1,"io_in_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+2,"io_in_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+3,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+4,"io_in_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+5,"io_in_bits_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_in_bits_alu_b_sel", false,-1);
    tracep->declBus(c+75,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+76,"io_alu_rsl", false,-1, 31,0);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+1,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+2,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+3,"io_imm", false,-1, 31,0);
    tracep->declBit(c+5,"io_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_alu_b_sel", false,-1);
    tracep->declBus(c+4,"io_alu_sel", false,-1, 12,0);
    tracep->declBus(c+75,"io_pc", false,-1, 31,0);
    tracep->declBus(c+76,"io_rsl", false,-1, 31,0);
    tracep->declBus(c+7,"op1", false,-1, 31,0);
    tracep->declBus(c+8,"op2", false,-1, 31,0);
    tracep->declQuad(c+9,"umovl", false,-1, 62,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+73,"clock", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBus(c+11,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+75,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1,"io_out_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+2,"io_out_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+3,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBus(c+4,"io_out_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+5,"io_out_bits_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_out_bits_alu_b_sel", false,-1);
    tracep->declBus(c+75,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+76,"io_alu_rsl", false,-1, 31,0);
    tracep->declBit(c+12,"io_jump_jalr", false,-1);
    tracep->declBit(c+13,"io_jump_en", false,-1);
    tracep->declBus(c+3,"io_imm", false,-1, 31,0);
    tracep->declBit(c+14,"io_is_ecall", false,-1);
    tracep->declBit(c+15,"io_is_mret", false,-1);
    tracep->declBus(c+16,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+17,"io_epc", false,-1, 31,0);
    tracep->declBus(c+1,"io_rd1", false,-1, 31,0);
    tracep->pushNamePrefix("Contorller ");
    tracep->declBus(c+11,"io_inst", false,-1, 31,0);
    tracep->declBus(c+1,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+2,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+18,"io_rf_wr_en", false,-1);
    tracep->declBus(c+19,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+5,"io_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_alu_b_sel", false,-1);
    tracep->declBit(c+20,"io_mem_wr_en", false,-1);
    tracep->declBit(c+21,"io_mem_rd_en", false,-1);
    tracep->declBus(c+4,"io_alu_sel", false,-1, 12,0);
    tracep->declBit(c+13,"io_jump_en", false,-1);
    tracep->declBit(c+12,"io_jump_jalr", false,-1);
    tracep->declBus(c+22,"io_len", false,-1, 31,0);
    tracep->declBus(c+3,"io_imm", false,-1, 31,0);
    tracep->declBit(c+23,"io_load_unsign", false,-1);
    tracep->declBit(c+14,"io_is_ecall", false,-1);
    tracep->declBit(c+24,"io_is_csr", false,-1);
    tracep->declBit(c+15,"io_is_mret", false,-1);
    tracep->declBit(c+25,"isR_type", false,-1);
    tracep->declBit(c+26,"isI_type", false,-1);
    tracep->declBit(c+27,"isS_type", false,-1);
    tracep->declBit(c+28,"isB_type", false,-1);
    tracep->declBit(c+29,"is_load", false,-1);
    tracep->declBit(c+30,"is_auipc", false,-1);
    tracep->declBit(c+31,"is_lui", false,-1);
    tracep->declBit(c+32,"is_jal", false,-1);
    tracep->declBit(c+12,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Dmem ");
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBus(c+76,"alu_out", false,-1, 31,0);
    tracep->declBus(c+2,"data", false,-1, 31,0);
    tracep->declBit(c+20,"wr_en", false,-1);
    tracep->declBit(c+21,"rd_en", false,-1);
    tracep->declBus(c+22,"len", false,-1, 31,0);
    tracep->declBit(c+23,"load_unsign", false,-1);
    tracep->declBus(c+33,"dm_out", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+34,"temp_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+73,"clock", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBus(c+11,"io_inst", false,-1, 31,0);
    tracep->declBit(c+18,"io_wr_en", false,-1);
    tracep->declBus(c+33,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+76,"io_alu_out", false,-1, 31,0);
    tracep->declBus(c+19,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+24,"io_is_csr", false,-1);
    tracep->declBit(c+14,"io_is_ecall", false,-1);
    tracep->declBit(c+15,"io_is_mret", false,-1);
    tracep->declBus(c+75,"io_pc", false,-1, 31,0);
    tracep->declBus(c+1,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+2,"io_rd2", false,-1, 31,0);
    tracep->declBus(c+16,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+17,"io_epc", false,-1, 31,0);
    tracep->declBus(c+35,"FileReg_1", false,-1, 31,0);
    tracep->declBus(c+36,"FileReg_2", false,-1, 31,0);
    tracep->declBus(c+37,"FileReg_3", false,-1, 31,0);
    tracep->declBus(c+38,"FileReg_4", false,-1, 31,0);
    tracep->declBus(c+39,"FileReg_5", false,-1, 31,0);
    tracep->declBus(c+40,"FileReg_6", false,-1, 31,0);
    tracep->declBus(c+41,"FileReg_7", false,-1, 31,0);
    tracep->declBus(c+42,"FileReg_8", false,-1, 31,0);
    tracep->declBus(c+43,"FileReg_9", false,-1, 31,0);
    tracep->declBus(c+44,"FileReg_10", false,-1, 31,0);
    tracep->declBus(c+45,"FileReg_11", false,-1, 31,0);
    tracep->declBus(c+46,"FileReg_12", false,-1, 31,0);
    tracep->declBus(c+47,"FileReg_13", false,-1, 31,0);
    tracep->declBus(c+48,"FileReg_14", false,-1, 31,0);
    tracep->declBus(c+49,"FileReg_15", false,-1, 31,0);
    tracep->declBus(c+50,"FileReg_16", false,-1, 31,0);
    tracep->declBus(c+51,"FileReg_17", false,-1, 31,0);
    tracep->declBus(c+52,"FileReg_18", false,-1, 31,0);
    tracep->declBus(c+53,"FileReg_19", false,-1, 31,0);
    tracep->declBus(c+54,"FileReg_20", false,-1, 31,0);
    tracep->declBus(c+55,"FileReg_21", false,-1, 31,0);
    tracep->declBus(c+56,"FileReg_22", false,-1, 31,0);
    tracep->declBus(c+57,"FileReg_23", false,-1, 31,0);
    tracep->declBus(c+58,"FileReg_24", false,-1, 31,0);
    tracep->declBus(c+59,"FileReg_25", false,-1, 31,0);
    tracep->declBus(c+60,"FileReg_26", false,-1, 31,0);
    tracep->declBus(c+61,"FileReg_27", false,-1, 31,0);
    tracep->declBus(c+62,"FileReg_28", false,-1, 31,0);
    tracep->declBus(c+63,"FileReg_29", false,-1, 31,0);
    tracep->declBus(c+64,"FileReg_30", false,-1, 31,0);
    tracep->declBus(c+65,"FileReg_31", false,-1, 31,0);
    tracep->declBus(c+66,"CsrReg_0", false,-1, 31,0);
    tracep->declBus(c+67,"CsrReg_1", false,-1, 31,0);
    tracep->declBus(c+68,"CsrReg_2", false,-1, 31,0);
    tracep->declBus(c+69,"CsrReg_3", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+70,"csr_sel", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+71,"wd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBus(c+75,"io_pc", false,-1, 31,0);
    tracep->declBus(c+11,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+75,"io_out_bits_pc", false,-1, 31,0);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+73,"clock", false,-1);
    tracep->declBit(c+74,"reset", false,-1);
    tracep->declBit(c+12,"io_jump_jalr", false,-1);
    tracep->declBit(c+13,"io_jump_en", false,-1);
    tracep->declBus(c+3,"io_imm", false,-1, 31,0);
    tracep->declBit(c+14,"io_is_ecall", false,-1);
    tracep->declBit(c+15,"io_is_mret", false,-1);
    tracep->declBus(c+16,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+17,"io_epc", false,-1, 31,0);
    tracep->declBus(c+1,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+75,"io_next_pc", false,-1, 31,0);
    tracep->declBus(c+72,"pc", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__idu__DOT___Contorller_io_imm),32);
    bufp->fullSData(oldp+4,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)
                              ? 0x80U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)
                                          ? 0x100U : 
                                         ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)
                                           ? 0x10U : 
                                          ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)
                                            ? 8U : 
                                           ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)
                                             ? 0x200U
                                             : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)
                                                 ? 0x400U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_32)
                                                  ? 0x800U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_31)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_30)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_29)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_27)
                                                      ? 0x10U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_25)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_23)
                                                        ? 4U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_21)
                                                         ? 0x80U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_20)
                                                          ? 0x100U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_19)
                                                           ? 0x200U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_18)
                                                            ? 0x400U
                                                            : 
                                                           ((IData)(vlSelf->__VdfgTmp_h32cf3982__0)
                                                             ? 1U
                                                             : 
                                                            ((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
                                                             << 6U)))))))))))))))))))),13);
    bufp->fullBit(oldp+5,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
                           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                                 | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14) 
                                    | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13) 
                                       | ((~ ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7) 
                                              | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_6) 
                                                 | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_5) 
                                                    | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_4) 
                                                       | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_2) 
                                                          | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_1))))))) 
                                          & (0x67U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT___ifu_io_out_bits_inst))))))))));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT___idu_io_out_bits_alu_b_sel));
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op2),32);
    bufp->fullQData(oldp+9,((0x7fffffffffffffffULL 
                             & ((QData)((IData)(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1)) 
                                << (0x1fU & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)))),63);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT___ifu_io_out_bits_inst),32);
    bufp->fullBit(oldp+12,((0x67U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7)
                             ? (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                >= vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                             : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_6)
                                 ? (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                    < vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                 : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_5)
                                     ? VL_GTES_III(32, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                     : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_4)
                                         ? VL_LTS_III(32, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1, vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                         : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_2)
                                             ? (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                != vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                             : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_1)
                                                 ? 
                                                (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                 == vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                 : 
                                                (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT___ifu_io_out_bits_inst))))))))));
    bufp->fullBit(oldp+14,((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)));
    bufp->fullBit(oldp+15,((0x30200073U == vlSelf->top__DOT___ifu_io_out_bits_inst)));
    bufp->fullIData(oldp+16,(((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                               ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1
                               : 0U)),32);
    bufp->fullIData(oldp+17,((((0x30200073U != vlSelf->top__DOT___ifu_io_out_bits_inst) 
                               | (0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst))
                               ? 0U : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2)),32);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en));
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel),3);
    bufp->fullBit(oldp+20,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                               | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14)))));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13));
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__idu__DOT___Contorller_io_len),32);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__idu__DOT___Contorller_io_load_unsign));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr));
    bufp->fullBit(oldp+25,((0x33U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+26,((0x13U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+27,((0x23U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+28,((0x63U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+29,((3U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+30,((0x17U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+31,((0x37U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullBit(oldp+32,((0x6fU == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__idu__DOT___Dmem_dm_out),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel),2);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__pc__DOT__pc),32);
    bufp->fullBit(oldp+73,(vlSelf->clock));
    bufp->fullBit(oldp+74,(vlSelf->reset));
    bufp->fullIData(oldp+75,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+76,(vlSelf->io_alu_rsl),32);
    bufp->fullIData(oldp+77,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__idu__DOT__Dmem__DOT__clk));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__ifu__DOT__imem__DOT__clk));
}
