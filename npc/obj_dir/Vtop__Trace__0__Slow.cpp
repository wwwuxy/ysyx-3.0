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
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+117,"io_pc", false,-1, 31,0);
    tracep->declBus(c+118,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+119,"io_inst", false,-1, 31,0);
    tracep->declBus(c+120,"io_imm", false,-1, 31,0);
    tracep->declBit(c+121,"io_diff_test", false,-1);
    tracep->declBit(c+122,"io_wbu_valid", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+117,"io_pc", false,-1, 31,0);
    tracep->declBus(c+118,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+119,"io_inst", false,-1, 31,0);
    tracep->declBus(c+120,"io_imm", false,-1, 31,0);
    tracep->declBit(c+121,"io_diff_test", false,-1);
    tracep->declBit(c+122,"io_wbu_valid", false,-1);
    tracep->pushNamePrefix("axi ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+1,"io_ifu_axi_in_ready", false,-1);
    tracep->declBit(c+2,"io_ifu_axi_in_valid", false,-1);
    tracep->declBit(c+3,"io_ifu_axi_in_bits_arvalid", false,-1);
    tracep->declBus(c+4,"io_ifu_axi_in_bits_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"io_ifu_axi_out_ready", false,-1);
    tracep->declBit(c+5,"io_ifu_axi_out_bits_arready", false,-1);
    tracep->declBit(c+6,"io_ifu_axi_out_bits_rvalid", false,-1);
    tracep->declBus(c+7,"io_ifu_axi_out_bits_rdata", false,-1, 31,0);
    tracep->declBit(c+8,"io_ifu_axi_out_bits_rresp", false,-1);
    tracep->declBit(c+9,"io_isu_axi_in_ready", false,-1);
    tracep->declBit(c+10,"io_isu_axi_in_valid", false,-1);
    tracep->declBit(c+11,"io_isu_axi_in_bits_arvalid", false,-1);
    tracep->declBit(c+12,"io_isu_axi_in_bits_load_unsign", false,-1);
    tracep->declBus(c+118,"io_isu_axi_in_bits_araddr", false,-1, 31,0);
    tracep->declBit(c+13,"io_isu_axi_in_bits_awvalid", false,-1);
    tracep->declBus(c+118,"io_isu_axi_in_bits_awaddr", false,-1, 31,0);
    tracep->declBit(c+14,"io_isu_axi_in_bits_wvalid", false,-1);
    tracep->declBus(c+15,"io_isu_axi_in_bits_wdata", false,-1, 31,0);
    tracep->declBus(c+16,"io_isu_axi_in_bits_wstrb", false,-1, 31,0);
    tracep->declBit(c+10,"io_isu_axi_out_ready", false,-1);
    tracep->declBit(c+17,"io_isu_axi_out_bits_arready", false,-1);
    tracep->declBus(c+7,"io_isu_axi_out_bits_rdata", false,-1, 31,0);
    tracep->declBit(c+18,"io_isu_axi_out_bits_rresp", false,-1);
    tracep->declBit(c+19,"io_isu_axi_out_bits_awready", false,-1);
    tracep->declBit(c+20,"io_isu_axi_out_bits_wready", false,-1);
    tracep->declBit(c+21,"io_isu_axi_out_bits_bresp", false,-1);
    tracep->declBit(c+22,"io_ifu_valid", false,-1);
    tracep->declBit(c+10,"io_isu_valid", false,-1);
    tracep->declBus(c+23,"state", false,-1, 2,0);
    tracep->declBit(c+1,"ifu_selected", false,-1);
    tracep->declBit(c+9,"isu_selected", false,-1);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+115,"clk", false,-1);
    tracep->declBit(c+24,"arvalid", false,-1);
    tracep->declBus(c+25,"araddr", false,-1, 31,0);
    tracep->declBit(c+26,"load_unsign", false,-1);
    tracep->declBit(c+124,"arready", false,-1);
    tracep->declBus(c+7,"rdata", false,-1, 31,0);
    tracep->declBit(c+27,"rresp", false,-1);
    tracep->declBit(c+28,"rvalid", false,-1);
    tracep->declBit(c+29,"rready", false,-1);
    tracep->declBit(c+30,"awvalid", false,-1);
    tracep->declBus(c+123,"awaddr", false,-1, 31,0);
    tracep->declBit(c+31,"awready", false,-1);
    tracep->declBit(c+32,"wvalid", false,-1);
    tracep->declBus(c+33,"wdata", false,-1, 31,0);
    tracep->declBus(c+34,"len", false,-1, 31,0);
    tracep->declBit(c+35,"wready", false,-1);
    tracep->declBit(c+36,"bresp", false,-1);
    tracep->declBit(c+37,"bvalid", false,-1);
    tracep->declBit(c+29,"bready", false,-1);
    tracep->declBus(c+7,"data_delay", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+38,"temp_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+39,"io_in_valid", false,-1);
    tracep->declBus(c+40,"io_in_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"io_in_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+120,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+41,"io_in_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+42,"io_in_bits_alu_a_sel", false,-1);
    tracep->declBit(c+43,"io_in_bits_alu_b_sel", false,-1);
    tracep->declBus(c+117,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+44,"io_in_bits_jump_en", false,-1);
    tracep->declBit(c+45,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+46,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBit(c+50,"io_in_bits_mem_wr_en", false,-1);
    tracep->declBus(c+16,"io_in_bits_len", false,-1, 31,0);
    tracep->declBit(c+12,"io_in_bits_load_unsign", false,-1);
    tracep->declBit(c+51,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+52,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+53,"io_out_valid", false,-1);
    tracep->declBus(c+118,"io_out_bits_alu_out", false,-1, 31,0);
    tracep->declBus(c+15,"io_out_bits_data", false,-1, 31,0);
    tracep->declBit(c+50,"io_out_bits_mem_wr_en", false,-1);
    tracep->declBus(c+16,"io_out_bits_len", false,-1, 31,0);
    tracep->declBit(c+12,"io_out_bits_load_unsign", false,-1);
    tracep->declBit(c+45,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+44,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+120,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+46,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+40,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+51,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+52,"io_out_bits_isS_type", false,-1);
    tracep->declBus(c+118,"io_alu_rsl", false,-1, 31,0);
    tracep->declBit(c+53,"state", false,-1);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+40,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+120,"io_imm", false,-1, 31,0);
    tracep->declBit(c+42,"io_alu_a_sel", false,-1);
    tracep->declBit(c+43,"io_alu_b_sel", false,-1);
    tracep->declBus(c+41,"io_alu_sel", false,-1, 12,0);
    tracep->declBus(c+117,"io_pc", false,-1, 31,0);
    tracep->declBus(c+118,"io_rsl", false,-1, 31,0);
    tracep->declBus(c+54,"op1", false,-1, 31,0);
    tracep->declBus(c+55,"op2", false,-1, 31,0);
    tracep->declQuad(c+56,"umovl", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+58,"io_in_ready", false,-1);
    tracep->declBit(c+59,"io_in_valid", false,-1);
    tracep->declBus(c+119,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+117,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+39,"io_out_valid", false,-1);
    tracep->declBus(c+40,"io_out_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"io_out_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+120,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBus(c+41,"io_out_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+42,"io_out_bits_alu_a_sel", false,-1);
    tracep->declBit(c+43,"io_out_bits_alu_b_sel", false,-1);
    tracep->declBus(c+117,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBit(c+44,"io_out_bits_jump_en", false,-1);
    tracep->declBit(c+45,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+46,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBit(c+50,"io_out_bits_mem_wr_en", false,-1);
    tracep->declBus(c+16,"io_out_bits_len", false,-1, 31,0);
    tracep->declBit(c+12,"io_out_bits_load_unsign", false,-1);
    tracep->declBit(c+51,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+52,"io_out_bits_isS_type", false,-1);
    tracep->declBus(c+118,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+7,"io_dm_out", false,-1, 31,0);
    tracep->declBit(c+122,"io_wbu_valid", false,-1);
    tracep->declBit(c+39,"state", false,-1);
    tracep->pushNamePrefix("Contorller ");
    tracep->declBus(c+119,"io_inst", false,-1, 31,0);
    tracep->declBus(c+40,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+60,"io_rf_wr_en", false,-1);
    tracep->declBus(c+61,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+42,"io_alu_a_sel", false,-1);
    tracep->declBit(c+43,"io_alu_b_sel", false,-1);
    tracep->declBit(c+50,"io_mem_wr_en", false,-1);
    tracep->declBus(c+41,"io_alu_sel", false,-1, 12,0);
    tracep->declBit(c+44,"io_jump_en", false,-1);
    tracep->declBit(c+45,"io_jump_jalr", false,-1);
    tracep->declBus(c+16,"io_len", false,-1, 31,0);
    tracep->declBus(c+120,"io_imm", false,-1, 31,0);
    tracep->declBit(c+12,"io_load_unsign", false,-1);
    tracep->declBit(c+46,"io_is_ecall", false,-1);
    tracep->declBit(c+62,"io_is_csr", false,-1);
    tracep->declBit(c+47,"io_is_mret", false,-1);
    tracep->declBit(c+51,"io_is_load", false,-1);
    tracep->declBit(c+52,"io_isS_type", false,-1);
    tracep->declBit(c+63,"isR_type", false,-1);
    tracep->declBit(c+64,"isI_type", false,-1);
    tracep->declBit(c+52,"isS_type", false,-1);
    tracep->declBit(c+65,"isB_type", false,-1);
    tracep->declBit(c+51,"is_load", false,-1);
    tracep->declBit(c+66,"is_auipc", false,-1);
    tracep->declBit(c+67,"is_lui", false,-1);
    tracep->declBit(c+68,"is_jal", false,-1);
    tracep->declBit(c+45,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+119,"io_inst", false,-1, 31,0);
    tracep->declBit(c+69,"io_wr_en", false,-1);
    tracep->declBus(c+7,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+118,"io_alu_out", false,-1, 31,0);
    tracep->declBus(c+61,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+62,"io_is_csr", false,-1);
    tracep->declBit(c+46,"io_is_ecall", false,-1);
    tracep->declBit(c+47,"io_is_mret", false,-1);
    tracep->declBus(c+117,"io_pc", false,-1, 31,0);
    tracep->declBus(c+40,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+15,"io_rd2", false,-1, 31,0);
    tracep->declBus(c+48,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_epc", false,-1, 31,0);
    tracep->declBus(c+70,"FileReg_1", false,-1, 31,0);
    tracep->declBus(c+71,"FileReg_2", false,-1, 31,0);
    tracep->declBus(c+72,"FileReg_3", false,-1, 31,0);
    tracep->declBus(c+73,"FileReg_4", false,-1, 31,0);
    tracep->declBus(c+74,"FileReg_5", false,-1, 31,0);
    tracep->declBus(c+75,"FileReg_6", false,-1, 31,0);
    tracep->declBus(c+76,"FileReg_7", false,-1, 31,0);
    tracep->declBus(c+77,"FileReg_8", false,-1, 31,0);
    tracep->declBus(c+78,"FileReg_9", false,-1, 31,0);
    tracep->declBus(c+79,"FileReg_10", false,-1, 31,0);
    tracep->declBus(c+80,"FileReg_11", false,-1, 31,0);
    tracep->declBus(c+81,"FileReg_12", false,-1, 31,0);
    tracep->declBus(c+82,"FileReg_13", false,-1, 31,0);
    tracep->declBus(c+83,"FileReg_14", false,-1, 31,0);
    tracep->declBus(c+84,"FileReg_15", false,-1, 31,0);
    tracep->declBus(c+85,"FileReg_16", false,-1, 31,0);
    tracep->declBus(c+86,"FileReg_17", false,-1, 31,0);
    tracep->declBus(c+87,"FileReg_18", false,-1, 31,0);
    tracep->declBus(c+88,"FileReg_19", false,-1, 31,0);
    tracep->declBus(c+89,"FileReg_20", false,-1, 31,0);
    tracep->declBus(c+90,"FileReg_21", false,-1, 31,0);
    tracep->declBus(c+91,"FileReg_22", false,-1, 31,0);
    tracep->declBus(c+92,"FileReg_23", false,-1, 31,0);
    tracep->declBus(c+93,"FileReg_24", false,-1, 31,0);
    tracep->declBus(c+94,"FileReg_25", false,-1, 31,0);
    tracep->declBus(c+95,"FileReg_26", false,-1, 31,0);
    tracep->declBus(c+96,"FileReg_27", false,-1, 31,0);
    tracep->declBus(c+97,"FileReg_28", false,-1, 31,0);
    tracep->declBus(c+98,"FileReg_29", false,-1, 31,0);
    tracep->declBus(c+99,"FileReg_30", false,-1, 31,0);
    tracep->declBus(c+100,"FileReg_31", false,-1, 31,0);
    tracep->declBus(c+101,"CsrReg_0", false,-1, 31,0);
    tracep->declBus(c+102,"CsrReg_1", false,-1, 31,0);
    tracep->declBus(c+103,"CsrReg_2", false,-1, 31,0);
    tracep->declBus(c+104,"CsrReg_3", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+105,"csr_sel", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+106,"wd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+4,"io_pc", false,-1, 31,0);
    tracep->declBit(c+58,"io_out_ready", false,-1);
    tracep->declBit(c+59,"io_out_valid", false,-1);
    tracep->declBus(c+119,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+117,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBit(c+1,"io_ifu_axi_out_ready", false,-1);
    tracep->declBit(c+2,"io_ifu_axi_out_valid", false,-1);
    tracep->declBit(c+3,"io_ifu_axi_out_bits_arvalid", false,-1);
    tracep->declBus(c+4,"io_ifu_axi_out_bits_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"io_ifu_axi_in_ready", false,-1);
    tracep->declBit(c+5,"io_ifu_axi_in_bits_arready", false,-1);
    tracep->declBit(c+6,"io_ifu_axi_in_bits_rvalid", false,-1);
    tracep->declBus(c+7,"io_ifu_axi_in_bits_rdata", false,-1, 31,0);
    tracep->declBit(c+8,"io_ifu_axi_in_bits_rresp", false,-1);
    tracep->declBit(c+22,"io_ifu_valid", false,-1);
    tracep->declBit(c+121,"io_diff_test", false,-1);
    tracep->declBit(c+3,"arvalid", false,-1);
    tracep->declBit(c+22,"valid", false,-1);
    tracep->declBus(c+107,"IPC", false,-1, 31,0);
    tracep->declBus(c+108,"IR", false,-1, 31,0);
    tracep->declBus(c+109,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+53,"io_in_valid", false,-1);
    tracep->declBus(c+118,"io_in_bits_alu_out", false,-1, 31,0);
    tracep->declBus(c+15,"io_in_bits_data", false,-1, 31,0);
    tracep->declBit(c+50,"io_in_bits_mem_wr_en", false,-1);
    tracep->declBus(c+16,"io_in_bits_len", false,-1, 31,0);
    tracep->declBit(c+12,"io_in_bits_load_unsign", false,-1);
    tracep->declBit(c+45,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+44,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+120,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+46,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+40,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+51,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+52,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+110,"io_out_valid", false,-1);
    tracep->declBus(c+7,"io_out_bits_dm_out", false,-1, 31,0);
    tracep->declBus(c+118,"io_out_bits_alu_out", false,-1, 31,0);
    tracep->declBit(c+45,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+44,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+120,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+46,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+40,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+111,"io_out_bits_load_finish", false,-1);
    tracep->declBit(c+112,"io_out_bits_store_finish", false,-1);
    tracep->declBit(c+51,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+52,"io_out_bits_isS_type", false,-1);
    tracep->declBit(c+9,"io_isu_axi_out_ready", false,-1);
    tracep->declBit(c+10,"io_isu_axi_out_valid", false,-1);
    tracep->declBit(c+11,"io_isu_axi_out_bits_arvalid", false,-1);
    tracep->declBit(c+12,"io_isu_axi_out_bits_load_unsign", false,-1);
    tracep->declBus(c+118,"io_isu_axi_out_bits_araddr", false,-1, 31,0);
    tracep->declBit(c+13,"io_isu_axi_out_bits_awvalid", false,-1);
    tracep->declBus(c+118,"io_isu_axi_out_bits_awaddr", false,-1, 31,0);
    tracep->declBit(c+14,"io_isu_axi_out_bits_wvalid", false,-1);
    tracep->declBus(c+15,"io_isu_axi_out_bits_wdata", false,-1, 31,0);
    tracep->declBus(c+16,"io_isu_axi_out_bits_wstrb", false,-1, 31,0);
    tracep->declBit(c+10,"io_isu_axi_in_ready", false,-1);
    tracep->declBit(c+17,"io_isu_axi_in_bits_arready", false,-1);
    tracep->declBus(c+7,"io_isu_axi_in_bits_rdata", false,-1, 31,0);
    tracep->declBit(c+18,"io_isu_axi_in_bits_rresp", false,-1);
    tracep->declBit(c+19,"io_isu_axi_in_bits_awready", false,-1);
    tracep->declBit(c+20,"io_isu_axi_in_bits_wready", false,-1);
    tracep->declBit(c+21,"io_isu_axi_in_bits_bresp", false,-1);
    tracep->declBit(c+10,"io_isu_valid", false,-1);
    tracep->declBit(c+112,"store_finish", false,-1);
    tracep->declBit(c+111,"load_finish", false,-1);
    tracep->declBit(c+11,"arvalid", false,-1);
    tracep->declBit(c+13,"awvalid", false,-1);
    tracep->declBit(c+14,"wvalid", false,-1);
    tracep->declBit(c+10,"valid", false,-1);
    tracep->declBus(c+113,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBus(c+4,"io_next_pc", false,-1, 31,0);
    tracep->declBit(c+122,"io_in_valid", false,-1);
    tracep->declBit(c+45,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+44,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+120,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+46,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+40,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBus(c+4,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+115,"clock", false,-1);
    tracep->declBit(c+116,"reset", false,-1);
    tracep->declBit(c+110,"io_in_valid", false,-1);
    tracep->declBus(c+7,"io_in_bits_dm_out", false,-1, 31,0);
    tracep->declBus(c+118,"io_in_bits_alu_out", false,-1, 31,0);
    tracep->declBit(c+45,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+44,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+120,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+46,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+40,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+111,"io_in_bits_load_finish", false,-1);
    tracep->declBit(c+112,"io_in_bits_store_finish", false,-1);
    tracep->declBit(c+51,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+52,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+122,"io_out_valid", false,-1);
    tracep->declBit(c+45,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+44,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+120,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+46,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+47,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+48,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+49,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+40,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBus(c+7,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+118,"io_alu_out", false,-1, 31,0);
    tracep->declBit(c+122,"io_wbu_valid", false,-1);
    tracep->declBus(c+114,"state", false,-1, 1,0);
    tracep->declBit(c+122,"io_wbu_valid_0", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__axi__DOT__ifu_selected));
    bufp->fullBit(oldp+2,((1U & (~ (IData)((3U == (IData)(vlSelf->top__DOT__ifu__DOT__state)))))));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__ifu__DOT__arvalid));
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pc__DOT__pc),32);
    bufp->fullBit(oldp+5,(((IData)(vlSelf->top__DOT__axi__DOT__ifu_selected) 
                           & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state)))));
    bufp->fullBit(oldp+6,(((IData)(vlSelf->top__DOT__axi__DOT__ifu_selected) 
                           & ((IData)(vlSelf->top__DOT__axi__DOT___Mem_rvalid) 
                              & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state))))));
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__axi__DOT__Mem__DOT__data_delay),32);
    bufp->fullBit(oldp+8,(((IData)(vlSelf->top__DOT__axi__DOT__ifu_selected) 
                           & (IData)(vlSelf->top__DOT__axi__DOT____VdfgTmp_h4d7b9f9a__0))));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__axi__DOT__isu_selected));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__isu__DOT__valid));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__isu__DOT__arvalid));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT___isu_io_isu_axi_out_bits_load_unsign));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__isu__DOT__awvalid));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__isu__DOT__wvalid));
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2),32);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16)
                               ? 4U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15)
                                        ? 2U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8)
                                                      ? 1U
                                                      : 4U))))))))),32);
    bufp->fullBit(oldp+17,(((IData)(vlSelf->top__DOT__axi__DOT__isu_selected) 
                            & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state)))));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT___axi_io_isu_axi_out_bits_rresp));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->top__DOT__axi__DOT__isu_selected) 
                            & ((IData)(vlSelf->top__DOT__axi__DOT___Mem_awready) 
                               & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state))))));
    bufp->fullBit(oldp+20,(((IData)(vlSelf->top__DOT__axi__DOT__isu_selected) 
                            & ((IData)(vlSelf->top__DOT__axi__DOT___Mem_wready) 
                               & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state))))));
    bufp->fullBit(oldp+21,(((IData)(vlSelf->top__DOT__axi__DOT__isu_selected) 
                            & ((IData)(vlSelf->top__DOT__axi__DOT___Mem_bresp) 
                               & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state))))));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__ifu__DOT__valid));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__axi__DOT__state),3);
    bufp->fullBit(oldp+24,(((IData)(vlSelf->top__DOT__axi__DOT__ifu_selected)
                             ? (IData)(vlSelf->top__DOT__ifu__DOT__arvalid)
                             : (IData)(vlSelf->top__DOT__isu__DOT__arvalid))));
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__axi__DOT____Vcellinp__Mem__araddr),32);
    bufp->fullBit(oldp+26,(((~ (IData)(vlSelf->top__DOT__axi__DOT__ifu_selected)) 
                            & (IData)(vlSelf->top__DOT___isu_io_isu_axi_out_bits_load_unsign))));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__axi__DOT___Mem_rresp));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__axi__DOT___Mem_rvalid));
    bufp->fullBit(oldp+29,((4U == (IData)(vlSelf->top__DOT__axi__DOT__state))));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__axi__DOT____Vcellinp__Mem__awvalid));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__axi__DOT___Mem_awready));
    bufp->fullBit(oldp+32,(((~ (IData)(vlSelf->top__DOT__axi__DOT__ifu_selected)) 
                            & ((IData)(vlSelf->top__DOT__isu__DOT__wvalid) 
                               & (4U == (IData)(vlSelf->top__DOT__axi__DOT__state))))));
    bufp->fullIData(oldp+33,(((IData)(vlSelf->top__DOT__axi__DOT__ifu_selected)
                               ? 0U : vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__axi__DOT____Vcellinp__Mem__len),32);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__axi__DOT___Mem_wready));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__axi__DOT___Mem_bresp));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__axi__DOT__Mem__DOT__bvalid));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__axi__DOT__Mem__DOT__unnamedblk1__DOT__temp_data),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__idu__DOT__state));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1),32);
    bufp->fullSData(oldp+41,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)
                               ? 0x80U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)
                                           ? 0x100U
                                           : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)
                                               ? 0x10U
                                               : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)
                                                   ? 8U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_34)
                                                    ? 0x200U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_33)
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
                                                               ((IData)(vlSelf->__VdfgTmp_hf48c861b__0)
                                                                 ? 1U
                                                                 : 
                                                                ((0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__ifu__DOT__IR)) 
                                                                 << 6U)))))))))))))))))))),13);
    bufp->fullBit(oldp+42,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
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
                                                  & vlSelf->top__DOT__ifu__DOT__IR))))))))));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT___idu_io_out_bits_alu_b_sel));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7)
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
                                                  & vlSelf->top__DOT__ifu__DOT__IR))))))))));
    bufp->fullBit(oldp+45,((0x67U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+46,((0x73U == vlSelf->top__DOT__ifu__DOT__IR)));
    bufp->fullBit(oldp+47,((0x30200073U == vlSelf->top__DOT__ifu__DOT__IR)));
    bufp->fullIData(oldp+48,(((0x73U == vlSelf->top__DOT__ifu__DOT__IR)
                               ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1
                               : 0U)),32);
    bufp->fullIData(oldp+49,((((0x30200073U != vlSelf->top__DOT__ifu__DOT__IR) 
                               | (0x73U == vlSelf->top__DOT__ifu__DOT__IR))
                               ? 0U : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2)),32);
    bufp->fullBit(oldp+50,(vlSelf->top__DOT___exu_io_out_bits_mem_wr_en));
    bufp->fullBit(oldp+51,((3U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+52,((0x23U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__exu__DOT__state));
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op2),32);
    bufp->fullQData(oldp+56,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1)) 
                                 << (0x1fU & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)))),63);
    bufp->fullBit(oldp+58,((1U & (~ (IData)(vlSelf->top__DOT__idu__DOT__state)))));
    bufp->fullBit(oldp+59,((3U == (IData)(vlSelf->top__DOT__ifu__DOT__state))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_12) 
                               | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_11) 
                                  | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_10) 
                                     | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_9) 
                                        | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_8) 
                                           | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN) 
                                              | (0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__ifu__DOT__IR)))))))))));
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel),3);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr));
    bufp->fullBit(oldp+63,((0x33U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+64,((0x13U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+65,((0x63U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+66,((0x17U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+67,((0x37U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+68,((0x6fU == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__idu__DOT____Vcellinp__RegisterFile__io_wr_en));
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3),32);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__csr_sel),2);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__wd),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__ifu__DOT__IPC),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__ifu__DOT__IR),32);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+110,((5U == (IData)(vlSelf->top__DOT__isu__DOT__state))));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__isu__DOT__load_finish));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__isu__DOT__store_finish));
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__isu__DOT__state),3);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+115,(vlSelf->clock));
    bufp->fullBit(oldp+116,(vlSelf->reset));
    bufp->fullIData(oldp+117,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+118,(vlSelf->io_alu_rsl),32);
    bufp->fullIData(oldp+119,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+120,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+121,(vlSelf->io_diff_test));
    bufp->fullBit(oldp+122,(vlSelf->io_wbu_valid));
    bufp->fullIData(oldp+123,(((IData)(vlSelf->top__DOT__axi__DOT__ifu_selected)
                                ? 0U : vlSelf->io_alu_rsl)),32);
    bufp->fullBit(oldp+124,(1U));
}
