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
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBus(c+97,"io_pc", false,-1, 31,0);
    tracep->declBus(c+98,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+99,"io_inst", false,-1, 31,0);
    tracep->declBus(c+100,"io_imm", false,-1, 31,0);
    tracep->declBit(c+101,"io_diff_test", false,-1);
    tracep->declBit(c+102,"io_wbu_valid", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBus(c+97,"io_pc", false,-1, 31,0);
    tracep->declBus(c+98,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+99,"io_inst", false,-1, 31,0);
    tracep->declBus(c+100,"io_imm", false,-1, 31,0);
    tracep->declBit(c+101,"io_diff_test", false,-1);
    tracep->declBit(c+102,"io_wbu_valid", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBit(c+1,"io_in_valid", false,-1);
    tracep->declBus(c+2,"io_in_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+3,"io_in_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+100,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+4,"io_in_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+5,"io_in_bits_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_in_bits_alu_b_sel", false,-1);
    tracep->declBus(c+97,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+7,"io_in_bits_jump_en", false,-1);
    tracep->declBit(c+8,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+9,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBit(c+13,"io_in_bits_mem_wr_en", false,-1);
    tracep->declBus(c+14,"io_in_bits_len", false,-1, 31,0);
    tracep->declBit(c+15,"io_in_bits_load_unsign", false,-1);
    tracep->declBit(c+16,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+17,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+18,"io_out_valid", false,-1);
    tracep->declBus(c+98,"io_out_bits_alu_out", false,-1, 31,0);
    tracep->declBus(c+3,"io_out_bits_data", false,-1, 31,0);
    tracep->declBit(c+13,"io_out_bits_mem_wr_en", false,-1);
    tracep->declBus(c+14,"io_out_bits_len", false,-1, 31,0);
    tracep->declBit(c+15,"io_out_bits_load_unsign", false,-1);
    tracep->declBit(c+8,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+7,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+100,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+9,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+2,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+16,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+17,"io_out_bits_isS_type", false,-1);
    tracep->declBus(c+98,"io_alu_rsl", false,-1, 31,0);
    tracep->declBit(c+18,"state", false,-1);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+2,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+3,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+100,"io_imm", false,-1, 31,0);
    tracep->declBit(c+5,"io_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_alu_b_sel", false,-1);
    tracep->declBus(c+4,"io_alu_sel", false,-1, 12,0);
    tracep->declBus(c+97,"io_pc", false,-1, 31,0);
    tracep->declBus(c+98,"io_rsl", false,-1, 31,0);
    tracep->declBus(c+19,"op1", false,-1, 31,0);
    tracep->declBus(c+20,"op2", false,-1, 31,0);
    tracep->declQuad(c+21,"umovl", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBit(c+23,"io_in_ready", false,-1);
    tracep->declBit(c+24,"io_in_valid", false,-1);
    tracep->declBus(c+99,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+97,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+1,"io_out_valid", false,-1);
    tracep->declBus(c+2,"io_out_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+3,"io_out_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+100,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBus(c+4,"io_out_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+5,"io_out_bits_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_out_bits_alu_b_sel", false,-1);
    tracep->declBus(c+97,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBit(c+7,"io_out_bits_jump_en", false,-1);
    tracep->declBit(c+8,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+9,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBit(c+13,"io_out_bits_mem_wr_en", false,-1);
    tracep->declBus(c+14,"io_out_bits_len", false,-1, 31,0);
    tracep->declBit(c+15,"io_out_bits_load_unsign", false,-1);
    tracep->declBit(c+16,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+17,"io_out_bits_isS_type", false,-1);
    tracep->declBus(c+98,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+25,"io_dm_out", false,-1, 31,0);
    tracep->declBit(c+102,"io_wbu_valid", false,-1);
    tracep->declBit(c+1,"state", false,-1);
    tracep->pushNamePrefix("Contorller ");
    tracep->declBus(c+99,"io_inst", false,-1, 31,0);
    tracep->declBus(c+2,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+3,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+26,"io_rf_wr_en", false,-1);
    tracep->declBus(c+27,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+5,"io_alu_a_sel", false,-1);
    tracep->declBit(c+6,"io_alu_b_sel", false,-1);
    tracep->declBit(c+13,"io_mem_wr_en", false,-1);
    tracep->declBus(c+4,"io_alu_sel", false,-1, 12,0);
    tracep->declBit(c+7,"io_jump_en", false,-1);
    tracep->declBit(c+8,"io_jump_jalr", false,-1);
    tracep->declBus(c+14,"io_len", false,-1, 31,0);
    tracep->declBus(c+100,"io_imm", false,-1, 31,0);
    tracep->declBit(c+15,"io_load_unsign", false,-1);
    tracep->declBit(c+9,"io_is_ecall", false,-1);
    tracep->declBit(c+28,"io_is_csr", false,-1);
    tracep->declBit(c+10,"io_is_mret", false,-1);
    tracep->declBit(c+16,"io_is_load", false,-1);
    tracep->declBit(c+17,"io_isS_type", false,-1);
    tracep->declBit(c+29,"isR_type", false,-1);
    tracep->declBit(c+30,"isI_type", false,-1);
    tracep->declBit(c+17,"isS_type", false,-1);
    tracep->declBit(c+31,"isB_type", false,-1);
    tracep->declBit(c+16,"is_load", false,-1);
    tracep->declBit(c+32,"is_auipc", false,-1);
    tracep->declBit(c+33,"is_lui", false,-1);
    tracep->declBit(c+34,"is_jal", false,-1);
    tracep->declBit(c+8,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBus(c+99,"io_inst", false,-1, 31,0);
    tracep->declBit(c+35,"io_wr_en", false,-1);
    tracep->declBus(c+25,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+98,"io_alu_out", false,-1, 31,0);
    tracep->declBus(c+27,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+28,"io_is_csr", false,-1);
    tracep->declBit(c+9,"io_is_ecall", false,-1);
    tracep->declBit(c+10,"io_is_mret", false,-1);
    tracep->declBus(c+97,"io_pc", false,-1, 31,0);
    tracep->declBus(c+2,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+3,"io_rd2", false,-1, 31,0);
    tracep->declBus(c+11,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_epc", false,-1, 31,0);
    tracep->declBus(c+36,"FileReg_1", false,-1, 31,0);
    tracep->declBus(c+37,"FileReg_2", false,-1, 31,0);
    tracep->declBus(c+38,"FileReg_3", false,-1, 31,0);
    tracep->declBus(c+39,"FileReg_4", false,-1, 31,0);
    tracep->declBus(c+40,"FileReg_5", false,-1, 31,0);
    tracep->declBus(c+41,"FileReg_6", false,-1, 31,0);
    tracep->declBus(c+42,"FileReg_7", false,-1, 31,0);
    tracep->declBus(c+43,"FileReg_8", false,-1, 31,0);
    tracep->declBus(c+44,"FileReg_9", false,-1, 31,0);
    tracep->declBus(c+45,"FileReg_10", false,-1, 31,0);
    tracep->declBus(c+46,"FileReg_11", false,-1, 31,0);
    tracep->declBus(c+47,"FileReg_12", false,-1, 31,0);
    tracep->declBus(c+48,"FileReg_13", false,-1, 31,0);
    tracep->declBus(c+49,"FileReg_14", false,-1, 31,0);
    tracep->declBus(c+50,"FileReg_15", false,-1, 31,0);
    tracep->declBus(c+51,"FileReg_16", false,-1, 31,0);
    tracep->declBus(c+52,"FileReg_17", false,-1, 31,0);
    tracep->declBus(c+53,"FileReg_18", false,-1, 31,0);
    tracep->declBus(c+54,"FileReg_19", false,-1, 31,0);
    tracep->declBus(c+55,"FileReg_20", false,-1, 31,0);
    tracep->declBus(c+56,"FileReg_21", false,-1, 31,0);
    tracep->declBus(c+57,"FileReg_22", false,-1, 31,0);
    tracep->declBus(c+58,"FileReg_23", false,-1, 31,0);
    tracep->declBus(c+59,"FileReg_24", false,-1, 31,0);
    tracep->declBus(c+60,"FileReg_25", false,-1, 31,0);
    tracep->declBus(c+61,"FileReg_26", false,-1, 31,0);
    tracep->declBus(c+62,"FileReg_27", false,-1, 31,0);
    tracep->declBus(c+63,"FileReg_28", false,-1, 31,0);
    tracep->declBus(c+64,"FileReg_29", false,-1, 31,0);
    tracep->declBus(c+65,"FileReg_30", false,-1, 31,0);
    tracep->declBus(c+66,"FileReg_31", false,-1, 31,0);
    tracep->declBus(c+67,"CsrReg_0", false,-1, 31,0);
    tracep->declBus(c+68,"CsrReg_1", false,-1, 31,0);
    tracep->declBus(c+69,"CsrReg_2", false,-1, 31,0);
    tracep->declBus(c+70,"CsrReg_3", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+71,"csr_sel", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+72,"wd", false,-1, 31,0);
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
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBus(c+73,"io_pc", false,-1, 31,0);
    tracep->declBit(c+23,"io_out_ready", false,-1);
    tracep->declBit(c+24,"io_out_valid", false,-1);
    tracep->declBus(c+99,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+97,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBit(c+101,"io_diff_test", false,-1);
    tracep->declBit(c+74,"arvalid", false,-1);
    tracep->declBus(c+75,"IPC", false,-1, 31,0);
    tracep->declBus(c+76,"IR", false,-1, 31,0);
    tracep->declBus(c+77,"state", false,-1, 1,0);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBus(c+73,"pc", false,-1, 31,0);
    tracep->declBus(c+78,"inst", false,-1, 31,0);
    tracep->declBit(c+74,"arvalid", false,-1);
    tracep->declBit(c+103,"arready", false,-1);
    tracep->declBit(c+79,"rresp", false,-1);
    tracep->declBit(c+80,"rvalid", false,-1);
    tracep->declBit(c+103,"rready", false,-1);
    tracep->declBus(c+104,"awaddr", false,-1, 31,0);
    tracep->declBit(c+105,"awvalid", false,-1);
    tracep->declBit(c+105,"awready", false,-1);
    tracep->declBus(c+104,"wdata", false,-1, 31,0);
    tracep->declBus(c+104,"wstrb", false,-1, 31,0);
    tracep->declBit(c+105,"wvalid", false,-1);
    tracep->declBit(c+106,"wready", false,-1);
    tracep->declBit(c+105,"bresp", false,-1);
    tracep->declBit(c+105,"bvalid", false,-1);
    tracep->declBit(c+105,"bready", false,-1);
    tracep->declBus(c+78,"inst_delay", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBit(c+18,"io_in_valid", false,-1);
    tracep->declBus(c+98,"io_in_bits_alu_out", false,-1, 31,0);
    tracep->declBus(c+3,"io_in_bits_data", false,-1, 31,0);
    tracep->declBit(c+13,"io_in_bits_mem_wr_en", false,-1);
    tracep->declBus(c+14,"io_in_bits_len", false,-1, 31,0);
    tracep->declBit(c+15,"io_in_bits_load_unsign", false,-1);
    tracep->declBit(c+8,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+7,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+100,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+9,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+2,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+16,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+17,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+81,"io_out_valid", false,-1);
    tracep->declBus(c+25,"io_out_bits_dm_out", false,-1, 31,0);
    tracep->declBus(c+98,"io_out_bits_alu_out", false,-1, 31,0);
    tracep->declBit(c+8,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+7,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+100,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+9,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+2,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+82,"io_out_bits_load_finish", false,-1);
    tracep->declBit(c+83,"io_out_bits_store_finish", false,-1);
    tracep->declBit(c+16,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+17,"io_out_bits_isS_type", false,-1);
    tracep->declBit(c+84,"arvalid", false,-1);
    tracep->declBit(c+82,"load_finish", false,-1);
    tracep->declBit(c+85,"awvalid", false,-1);
    tracep->declBit(c+83,"store_finish", false,-1);
    tracep->declBit(c+86,"wvalid", false,-1);
    tracep->declBit(c+81,"state", false,-1);
    tracep->pushNamePrefix("Dmem ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+84,"arvalid", false,-1);
    tracep->declBus(c+98,"araddr", false,-1, 31,0);
    tracep->declBit(c+15,"load_unsign", false,-1);
    tracep->declBit(c+103,"arready", false,-1);
    tracep->declBus(c+25,"rdata", false,-1, 31,0);
    tracep->declBit(c+87,"rresp", false,-1);
    tracep->declBit(c+88,"rvalid", false,-1);
    tracep->declBit(c+103,"rready", false,-1);
    tracep->declBit(c+85,"awvalid", false,-1);
    tracep->declBus(c+98,"awaddr", false,-1, 31,0);
    tracep->declBit(c+89,"awready", false,-1);
    tracep->declBit(c+86,"wvalid", false,-1);
    tracep->declBus(c+3,"wdata", false,-1, 31,0);
    tracep->declBus(c+14,"len", false,-1, 31,0);
    tracep->declBit(c+90,"wready", false,-1);
    tracep->declBit(c+91,"bresp", false,-1);
    tracep->declBit(c+92,"bvalid", false,-1);
    tracep->declBit(c+103,"bready", false,-1);
    tracep->declBus(c+25,"data_delay", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+93,"temp_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBus(c+73,"io_next_pc", false,-1, 31,0);
    tracep->declBit(c+102,"io_in_valid", false,-1);
    tracep->declBit(c+8,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+7,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+100,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+9,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+2,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBus(c+73,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+95,"clock", false,-1);
    tracep->declBit(c+96,"reset", false,-1);
    tracep->declBit(c+81,"io_in_valid", false,-1);
    tracep->declBus(c+25,"io_in_bits_dm_out", false,-1, 31,0);
    tracep->declBus(c+98,"io_in_bits_alu_out", false,-1, 31,0);
    tracep->declBit(c+8,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+7,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+100,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+9,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+2,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+82,"io_in_bits_load_finish", false,-1);
    tracep->declBit(c+83,"io_in_bits_store_finish", false,-1);
    tracep->declBit(c+16,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+17,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+102,"io_out_valid", false,-1);
    tracep->declBit(c+8,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+7,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+100,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+9,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+10,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+11,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+2,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBus(c+25,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+98,"io_alu_out", false,-1, 31,0);
    tracep->declBit(c+102,"io_wbu_valid", false,-1);
    tracep->declBus(c+94,"state", false,-1, 1,0);
    tracep->declBit(c+102,"io_wbu_valid_0", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__idu__DOT__state));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2),32);
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
                                                           ((IData)(vlSelf->__VdfgTmp_hf48c861b__0)
                                                             ? 1U
                                                             : 
                                                            ((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__ifu__DOT__IR)) 
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
                                                 & vlSelf->top__DOT__ifu__DOT__IR))))))))));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT___idu_io_out_bits_alu_b_sel));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7)
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
                                                ? (vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1 
                                                   == vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2)
                                                : (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__ifu__DOT__IR))))))))));
    bufp->fullBit(oldp+8,((0x67U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+9,((0x73U == vlSelf->top__DOT__ifu__DOT__IR)));
    bufp->fullBit(oldp+10,((0x30200073U == vlSelf->top__DOT__ifu__DOT__IR)));
    bufp->fullIData(oldp+11,(((0x73U == vlSelf->top__DOT__ifu__DOT__IR)
                               ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1
                               : 0U)),32);
    bufp->fullIData(oldp+12,((((0x30200073U != vlSelf->top__DOT__ifu__DOT__IR) 
                               | (0x73U == vlSelf->top__DOT__ifu__DOT__IR))
                               ? 0U : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2)),32);
    bufp->fullBit(oldp+13,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                            | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                               | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14)))));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT___exu_io_out_bits_len),32);
    bufp->fullBit(oldp+15,(vlSelf->top__DOT___exu_io_out_bits_load_unsign));
    bufp->fullBit(oldp+16,((3U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+17,((0x23U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__exu__DOT__state));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op2),32);
    bufp->fullQData(oldp+21,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1)) 
                                 << (0x1fU & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)))),63);
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->top__DOT__idu__DOT__state)))));
    bufp->fullBit(oldp+24,((2U == (IData)(vlSelf->top__DOT__ifu__DOT__state))));
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__isu__DOT__Dmem__DOT__data_delay),32);
    bufp->fullBit(oldp+26,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
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
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel),3);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr));
    bufp->fullBit(oldp+29,((0x33U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+30,((0x13U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+31,((0x63U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+32,((0x17U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+33,((0x37U == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+34,((0x6fU == (0x7fU & vlSelf->top__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__idu__DOT____Vcellinp__RegisterFile__io_wr_en));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3),32);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__csr_sel),2);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__wd),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__pc__DOT__pc),32);
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__ifu__DOT__arvalid));
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__ifu__DOT__IPC),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__ifu__DOT__IR),32);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__ifu__DOT__imem__DOT__inst_delay),32);
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__ifu__DOT___imem_rresp));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__ifu__DOT___imem_rvalid));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__isu__DOT__state));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__isu__DOT__load_finish));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__isu__DOT__store_finish));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__isu__DOT__arvalid));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__isu__DOT__awvalid));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__isu__DOT__wvalid));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__isu__DOT__Dmem__DOT__rresp));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__isu__DOT___Dmem_rvalid));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__isu__DOT___Dmem_awready));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__isu__DOT___Dmem_wready));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__isu__DOT___Dmem_bresp));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__isu__DOT__Dmem__DOT__bvalid));
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__isu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data),32);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__wbu__DOT__state),2);
    bufp->fullBit(oldp+95,(vlSelf->clock));
    bufp->fullBit(oldp+96,(vlSelf->reset));
    bufp->fullIData(oldp+97,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+98,(vlSelf->io_alu_rsl),32);
    bufp->fullIData(oldp+99,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+100,(vlSelf->io_imm),32);
    bufp->fullBit(oldp+101,(vlSelf->io_diff_test));
    bufp->fullBit(oldp+102,(vlSelf->io_wbu_valid));
    bufp->fullBit(oldp+103,(1U));
    bufp->fullIData(oldp+104,(0U),32);
    bufp->fullBit(oldp+105,(0U));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__ifu__DOT__imem__DOT__wready));
}
