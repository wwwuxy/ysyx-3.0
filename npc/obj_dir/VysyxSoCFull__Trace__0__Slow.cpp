// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+914,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+915,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+916,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+917,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+918,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+919,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+920,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+921,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+922,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+923,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+924,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+925,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+926,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+927,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+928,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+929,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+930,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+931,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+932,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+933,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+914,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+915,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+916,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+917,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+918,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+919,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+920,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+921,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+922,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+923,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+924,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+925,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+926,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+927,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+928,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+929,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+930,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+931,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+932,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+933,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+515,"spi_sck", false,-1);
    tracep->declBus(c+516,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+934,"spi_mosi", false,-1);
    tracep->declBit(c+935,"spi_miso", false,-1);
    tracep->declBit(c+932,"uart_rx", false,-1);
    tracep->declBit(c+933,"uart_tx", false,-1);
    tracep->declBit(c+936,"psram_sck", false,-1);
    tracep->declBit(c+937,"psram_ce_n", false,-1);
    tracep->declBus(c+811,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+938,"sdram_clk", false,-1);
    tracep->declBit(c+517,"sdram_cke", false,-1);
    tracep->declBit(c+518,"sdram_cs", false,-1);
    tracep->declBit(c+519,"sdram_ras", false,-1);
    tracep->declBit(c+520,"sdram_cas", false,-1);
    tracep->declBit(c+521,"sdram_we", false,-1);
    tracep->declBus(c+522,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+523,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+524,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+525,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+914,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+915,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+916,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+917,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+918,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+919,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+920,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+921,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+922,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+923,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+924,"ps2_clk", false,-1);
    tracep->declBit(c+925,"ps2_data", false,-1);
    tracep->declBus(c+926,"vga_r", false,-1, 7,0);
    tracep->declBus(c+927,"vga_g", false,-1, 7,0);
    tracep->declBus(c+928,"vga_b", false,-1, 7,0);
    tracep->declBit(c+929,"vga_hsync", false,-1);
    tracep->declBit(c+930,"vga_vsync", false,-1);
    tracep->declBit(c+931,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+760,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+7,"in_psel", false,-1);
    tracep->declBit(c+8,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+812,"in_pready", false,-1);
    tracep->declBus(c+813,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+764,"in_pslverr", false,-1);
    tracep->declBus(c+760,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+7,"out_psel", false,-1);
    tracep->declBit(c+8,"out_penable", false,-1);
    tracep->declBus(c+952,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"out_pwrite", false,-1);
    tracep->declBus(c+762,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+812,"out_pready", false,-1);
    tracep->declBus(c+813,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+764,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+7,"auto_in_psel", false,-1);
    tracep->declBit(c+8,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+760,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+812,"auto_in_pready", false,-1);
    tracep->declBit(c+764,"auto_in_pslverr", false,-1);
    tracep->declBus(c+813,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+469,"auto_out_6_psel", false,-1);
    tracep->declBit(c+470,"auto_out_6_penable", false,-1);
    tracep->declBit(c+761,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+760,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+526,"auto_out_6_pready", false,-1);
    tracep->declBit(c+953,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+527,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+471,"auto_out_5_psel", false,-1);
    tracep->declBit(c+472,"auto_out_5_penable", false,-1);
    tracep->declBit(c+761,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+765,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+952,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+954,"auto_out_5_pready", false,-1);
    tracep->declBit(c+955,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+956,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+473,"auto_out_4_psel", false,-1);
    tracep->declBit(c+474,"auto_out_4_penable", false,-1);
    tracep->declBit(c+761,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+766,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+952,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+957,"auto_out_4_pready", false,-1);
    tracep->declBit(c+958,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+959,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+475,"auto_out_3_psel", false,-1);
    tracep->declBit(c+476,"auto_out_3_penable", false,-1);
    tracep->declBit(c+761,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+766,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+952,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+960,"auto_out_3_pready", false,-1);
    tracep->declBit(c+961,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+962,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+767,"auto_out_2_psel", false,-1);
    tracep->declBit(c+477,"auto_out_2_penable", false,-1);
    tracep->declBit(c+761,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+760,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+939,"auto_out_2_pready", false,-1);
    tracep->declBit(c+953,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+9,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+768,"auto_out_1_psel", false,-1);
    tracep->declBit(c+769,"auto_out_1_penable", false,-1);
    tracep->declBit(c+761,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+766,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+952,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+770,"auto_out_1_pready", false,-1);
    tracep->declBit(c+953,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+940,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+771,"auto_out_0_psel", false,-1);
    tracep->declBit(c+772,"auto_out_0_penable", false,-1);
    tracep->declBit(c+761,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+765,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+952,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+528,"auto_out_0_pready", false,-1);
    tracep->declBit(c+953,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+529,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+773,"sel_0", false,-1);
    tracep->declBit(c+774,"sel_1", false,-1);
    tracep->declBit(c+775,"sel_2", false,-1);
    tracep->declBit(c+776,"sel_3", false,-1);
    tracep->declBit(c+777,"sel_4", false,-1);
    tracep->declBit(c+778,"sel_5", false,-1);
    tracep->declBit(c+779,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+10,"auto_in_awready", false,-1);
    tracep->declBit(c+11,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+13,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+10,"auto_in_wready", false,-1);
    tracep->declBit(c+15,"auto_in_wvalid", false,-1);
    tracep->declBus(c+16,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"auto_in_bready", false,-1);
    tracep->declBit(c+815,"auto_in_bvalid", false,-1);
    tracep->declBus(c+18,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+780,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"auto_in_arready", false,-1);
    tracep->declBit(c+20,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+816,"auto_in_rready", false,-1);
    tracep->declBit(c+817,"auto_in_rvalid", false,-1);
    tracep->declBus(c+24,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+478,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+780,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+7,"auto_out_psel", false,-1);
    tracep->declBit(c+8,"auto_out_penable", false,-1);
    tracep->declBit(c+761,"auto_out_pwrite", false,-1);
    tracep->declBus(c+760,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+762,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+812,"auto_out_pready", false,-1);
    tracep->declBit(c+764,"auto_out_pslverr", false,-1);
    tracep->declBus(c+813,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+8,"nodeOut_penable", false,-1);
    tracep->declBus(c+25,"state", false,-1, 1,0);
    tracep->declBit(c+19,"accept_read", false,-1);
    tracep->declBit(c+10,"accept_write", false,-1);
    tracep->declBit(c+26,"is_write_r", false,-1);
    tracep->declBit(c+761,"is_write", false,-1);
    tracep->declBus(c+24,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+18,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+27,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+28,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+29,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+30,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+781,"resp", false,-1, 1,0);
    tracep->declBus(c+31,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+780,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+817,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+32,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+815,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+33,"auto_in_awready", false,-1);
    tracep->declBit(c+34,"auto_in_awvalid", false,-1);
    tracep->declBus(c+963,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+35,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+965,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_in_wready", false,-1);
    tracep->declBit(c+37,"auto_in_wvalid", false,-1);
    tracep->declBus(c+38,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+953,"auto_in_wlast", false,-1);
    tracep->declBit(c+967,"auto_in_bready", false,-1);
    tracep->declBit(c+818,"auto_in_bvalid", false,-1);
    tracep->declBus(c+819,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+820,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_in_arready", false,-1);
    tracep->declBit(c+41,"auto_in_arvalid", false,-1);
    tracep->declBus(c+963,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+967,"auto_in_rready", false,-1);
    tracep->declBit(c+821,"auto_in_rvalid", false,-1);
    tracep->declBus(c+822,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_in_rlast", false,-1);
    tracep->declBit(c+825,"auto_out_awready", false,-1);
    tracep->declBit(c+44,"auto_out_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+13,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+14,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+45,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+826,"auto_out_wready", false,-1);
    tracep->declBit(c+46,"auto_out_wvalid", false,-1);
    tracep->declBus(c+16,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_out_wlast", false,-1);
    tracep->declBit(c+967,"auto_out_bready", false,-1);
    tracep->declBit(c+827,"auto_out_bvalid", false,-1);
    tracep->declBus(c+819,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+829,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+830,"auto_out_arready", false,-1);
    tracep->declBit(c+48,"auto_out_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+49,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+967,"auto_out_rready", false,-1);
    tracep->declBit(c+821,"auto_out_rvalid", false,-1);
    tracep->declBus(c+822,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+480,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+831,"auto_out_rlast", false,-1);
    tracep->declBit(c+46,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+50,"w_idle", false,-1);
    tracep->declBit(c+832,"in_awready", false,-1);
    tracep->declBit(c+51,"busy", false,-1);
    tracep->declBus(c+52,"r_addr", false,-1, 31,0);
    tracep->declBus(c+53,"r_len", false,-1, 7,0);
    tracep->declBus(c+54,"len", false,-1, 7,0);
    tracep->declBus(c+55,"addr", false,-1, 31,0);
    tracep->declBit(c+56,"busy_1", false,-1);
    tracep->declBus(c+57,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+58,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+59,"len_1", false,-1, 7,0);
    tracep->declBus(c+60,"addr_1", false,-1, 31,0);
    tracep->declBit(c+61,"wbeats_latched", false,-1);
    tracep->declBit(c+44,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+62,"wbeats_valid", false,-1);
    tracep->declBus(c+63,"w_counter", false,-1, 8,0);
    tracep->declBus(c+64,"w_todo", false,-1, 8,0);
    tracep->declBit(c+47,"w_last", false,-1);
    tracep->declBit(c+967,"nodeOut_bready", false,-1);
    tracep->declBus(c+65,"error_0", false,-1, 1,0);
    tracep->declBus(c+66,"error_1", false,-1, 1,0);
    tracep->declBus(c+67,"error_2", false,-1, 1,0);
    tracep->declBus(c+68,"error_3", false,-1, 1,0);
    tracep->declBus(c+69,"error_4", false,-1, 1,0);
    tracep->declBus(c+70,"error_5", false,-1, 1,0);
    tracep->declBus(c+71,"error_6", false,-1, 1,0);
    tracep->declBus(c+72,"error_7", false,-1, 1,0);
    tracep->declBus(c+73,"error_8", false,-1, 1,0);
    tracep->declBus(c+74,"error_9", false,-1, 1,0);
    tracep->declBus(c+75,"error_10", false,-1, 1,0);
    tracep->declBus(c+76,"error_11", false,-1, 1,0);
    tracep->declBus(c+77,"error_12", false,-1, 1,0);
    tracep->declBus(c+78,"error_13", false,-1, 1,0);
    tracep->declBus(c+79,"error_14", false,-1, 1,0);
    tracep->declBus(c+80,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+40,"io_enq_ready", false,-1);
    tracep->declBit(c+41,"io_enq_valid", false,-1);
    tracep->declBus(c+963,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+42,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+964,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+43,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+966,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+833,"io_deq_ready", false,-1);
    tracep->declBit(c+48,"io_deq_valid", false,-1);
    tracep->declBus(c+21,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+81,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+82,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+23,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+83,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+84,"ram", false,-1, 48,0);
    tracep->declBit(c+86,"full", false,-1);
    tracep->declBit(c+48,"io_deq_valid_0", false,-1);
    tracep->declBit(c+834,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+33,"io_enq_ready", false,-1);
    tracep->declBit(c+34,"io_enq_valid", false,-1);
    tracep->declBus(c+963,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+35,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+964,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+965,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+966,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+835,"io_deq_ready", false,-1);
    tracep->declBit(c+87,"io_deq_valid", false,-1);
    tracep->declBus(c+12,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+88,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+89,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+14,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+90,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+91,"ram", false,-1, 48,0);
    tracep->declBit(c+93,"full", false,-1);
    tracep->declBit(c+87,"io_deq_valid_0", false,-1);
    tracep->declBit(c+836,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+36,"io_enq_ready", false,-1);
    tracep->declBit(c+37,"io_enq_valid", false,-1);
    tracep->declBus(c+38,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+39,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+953,"io_enq_bits_last", false,-1);
    tracep->declBit(c+837,"io_deq_ready", false,-1);
    tracep->declBit(c+94,"io_deq_valid", false,-1);
    tracep->declBus(c+16,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+17,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+95,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+96,"ram", false,-1, 36,0);
    tracep->declBit(c+98,"full", false,-1);
    tracep->declBit(c+94,"io_deq_valid_0", false,-1);
    tracep->declBit(c+838,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+839,"auto_in_awready", false,-1);
    tracep->declBit(c+99,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+100,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+481,"auto_in_wready", false,-1);
    tracep->declBit(c+101,"auto_in_wvalid", false,-1);
    tracep->declBus(c+16,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+840,"auto_in_bready", false,-1);
    tracep->declBit(c+102,"auto_in_bvalid", false,-1);
    tracep->declBus(c+103,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+104,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+841,"auto_in_arready", false,-1);
    tracep->declBit(c+105,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+842,"auto_in_rready", false,-1);
    tracep->declBit(c+107,"auto_in_rvalid", false,-1);
    tracep->declBus(c+108,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+841,"nodeIn_arready", false,-1);
    tracep->declBit(c+839,"nodeIn_awready", false,-1);
    tracep->declBit(c+111,"w_sel0", false,-1);
    tracep->declBit(c+102,"w_full", false,-1);
    tracep->declBus(c+103,"w_id", false,-1, 3,0);
    tracep->declBit(c+112,"r_sel1", false,-1);
    tracep->declBit(c+113,"w_sel1", false,-1);
    tracep->declBit(c+107,"r_full", false,-1);
    tracep->declBus(c+108,"r_id", false,-1, 3,0);
    tracep->declBit(c+843,"ren", false,-1);
    tracep->declBit(c+114,"rdata_REG", false,-1);
    tracep->declBus(c+115,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+116,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+117,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+118,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+119,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+843,"R0_en", false,-1);
    tracep->declBit(c+912,"R0_clk", false,-1);
    tracep->declBus(c+120,"R0_data", false,-1, 31,0);
    tracep->declBus(c+121,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+844,"W0_en", false,-1);
    tracep->declBit(c+912,"W0_clk", false,-1);
    tracep->declBus(c+16,"W0_data", false,-1, 31,0);
    tracep->declBus(c+17,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+33,"auto_in_awready", false,-1);
    tracep->declBit(c+34,"auto_in_awvalid", false,-1);
    tracep->declBus(c+963,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+35,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+965,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_in_wready", false,-1);
    tracep->declBit(c+37,"auto_in_wvalid", false,-1);
    tracep->declBus(c+38,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+953,"auto_in_wlast", false,-1);
    tracep->declBit(c+967,"auto_in_bready", false,-1);
    tracep->declBit(c+818,"auto_in_bvalid", false,-1);
    tracep->declBus(c+819,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+820,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_in_arready", false,-1);
    tracep->declBit(c+41,"auto_in_arvalid", false,-1);
    tracep->declBus(c+963,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+967,"auto_in_rready", false,-1);
    tracep->declBit(c+821,"auto_in_rvalid", false,-1);
    tracep->declBus(c+822,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_in_rlast", false,-1);
    tracep->declBit(c+33,"auto_out_awready", false,-1);
    tracep->declBit(c+34,"auto_out_awvalid", false,-1);
    tracep->declBus(c+963,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+35,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+965,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_out_wready", false,-1);
    tracep->declBit(c+37,"auto_out_wvalid", false,-1);
    tracep->declBus(c+38,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+953,"auto_out_wlast", false,-1);
    tracep->declBit(c+967,"auto_out_bready", false,-1);
    tracep->declBit(c+818,"auto_out_bvalid", false,-1);
    tracep->declBus(c+819,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+820,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_out_arready", false,-1);
    tracep->declBit(c+41,"auto_out_arvalid", false,-1);
    tracep->declBus(c+963,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+967,"auto_out_rready", false,-1);
    tracep->declBit(c+821,"auto_out_rvalid", false,-1);
    tracep->declBus(c+822,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+845,"auto_in_awready", false,-1);
    tracep->declBit(c+122,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+13,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+826,"auto_in_wready", false,-1);
    tracep->declBit(c+46,"auto_in_wvalid", false,-1);
    tracep->declBus(c+16,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_in_wlast", false,-1);
    tracep->declBit(c+967,"auto_in_bready", false,-1);
    tracep->declBit(c+827,"auto_in_bvalid", false,-1);
    tracep->declBus(c+819,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+846,"auto_in_arready", false,-1);
    tracep->declBit(c+123,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+967,"auto_in_rready", false,-1);
    tracep->declBit(c+821,"auto_in_rvalid", false,-1);
    tracep->declBus(c+822,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+831,"auto_in_rlast", false,-1);
    tracep->declBit(c+839,"auto_out_2_awready", false,-1);
    tracep->declBit(c+99,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+100,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+481,"auto_out_2_wready", false,-1);
    tracep->declBit(c+101,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+16,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+840,"auto_out_2_bready", false,-1);
    tracep->declBit(c+102,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+103,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+104,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+841,"auto_out_2_arready", false,-1);
    tracep->declBit(c+105,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+842,"auto_out_2_rready", false,-1);
    tracep->declBit(c+107,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+108,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+124,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+125,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+126,"auto_out_1_arready", false,-1);
    tracep->declBit(c+127,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+128,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+482,"auto_out_1_rready", false,-1);
    tracep->declBit(c+129,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+130,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+10,"auto_out_0_awready", false,-1);
    tracep->declBit(c+11,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+13,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+14,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+10,"auto_out_0_wready", false,-1);
    tracep->declBit(c+15,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+16,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+814,"auto_out_0_bready", false,-1);
    tracep->declBit(c+815,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+18,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+780,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+19,"auto_out_0_arready", false,-1);
    tracep->declBit(c+20,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+816,"auto_out_0_rready", false,-1);
    tracep->declBit(c+817,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+24,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+478,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+780,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+827,"in_0_bvalid", false,-1);
    tracep->declBit(c+821,"in_0_rvalid", false,-1);
    tracep->declBit(c+845,"nodeIn_awready", false,-1);
    tracep->declBit(c+132,"requestARIO_0_0", false,-1);
    tracep->declBit(c+133,"requestARIO_0_1", false,-1);
    tracep->declBit(c+134,"requestARIO_0_2", false,-1);
    tracep->declBit(c+135,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+136,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+137,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+138,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+139,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+140,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+141,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+142,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+143,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+144,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+145,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+146,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+147,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+148,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+149,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+150,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+151,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+152,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+153,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+154,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+155,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+156,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+157,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+158,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+159,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+160,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+161,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+162,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+163,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+164,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+165,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+166,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+167,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+168,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+169,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+170,"latched", false,-1);
    tracep->declBit(c+171,"in_0_awvalid", false,-1);
    tracep->declBit(c+172,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+173,"in_0_wvalid", false,-1);
    tracep->declBit(c+174,"idle_3", false,-1);
    tracep->declBit(c+847,"anyValid", false,-1);
    tracep->declBus(c+848,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+175,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+849,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+850,"prefixOR_1", false,-1);
    tracep->declBit(c+851,"winner_3_1", false,-1);
    tracep->declBit(c+852,"winner_3_2", false,-1);
    tracep->declBit(c+176,"state_3_0", false,-1);
    tracep->declBit(c+177,"state_3_1", false,-1);
    tracep->declBit(c+178,"state_3_2", false,-1);
    tracep->declBit(c+853,"muxState_3_0", false,-1);
    tracep->declBit(c+854,"muxState_3_1", false,-1);
    tracep->declBit(c+855,"muxState_3_2", false,-1);
    tracep->declBit(c+179,"idle_4", false,-1);
    tracep->declBit(c+856,"anyValid_1", false,-1);
    tracep->declBus(c+857,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+180,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+858,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+859,"winner_4_0", false,-1);
    tracep->declBit(c+860,"winner_4_2", false,-1);
    tracep->declBit(c+181,"state_4_0", false,-1);
    tracep->declBit(c+182,"state_4_2", false,-1);
    tracep->declBit(c+861,"muxState_4_0", false,-1);
    tracep->declBit(c+862,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+172,"io_enq_valid", false,-1);
    tracep->declBus(c+184,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+863,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBus(c+186,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+187,"wrap", false,-1);
    tracep->declBit(c+188,"wrap_1", false,-1);
    tracep->declBit(c+189,"maybe_full", false,-1);
    tracep->declBit(c+190,"ptr_match", false,-1);
    tracep->declBit(c+191,"empty", false,-1);
    tracep->declBit(c+192,"full", false,-1);
    tracep->declBit(c+185,"io_deq_valid_0", false,-1);
    tracep->declBit(c+864,"do_deq", false,-1);
    tracep->declBit(c+865,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+188,"R0_addr", false,-1);
    tracep->declBit(c+967,"R0_en", false,-1);
    tracep->declBit(c+912,"R0_clk", false,-1);
    tracep->declBus(c+193,"R0_data", false,-1, 2,0);
    tracep->declBit(c+187,"W0_addr", false,-1);
    tracep->declBit(c+865,"W0_en", false,-1);
    tracep->declBit(c+912,"W0_clk", false,-1);
    tracep->declBus(c+184,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+194+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+825,"auto_in_awready", false,-1);
    tracep->declBit(c+44,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+13,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+14,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+45,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+826,"auto_in_wready", false,-1);
    tracep->declBit(c+46,"auto_in_wvalid", false,-1);
    tracep->declBus(c+16,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_in_wlast", false,-1);
    tracep->declBit(c+967,"auto_in_bready", false,-1);
    tracep->declBit(c+827,"auto_in_bvalid", false,-1);
    tracep->declBus(c+819,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+829,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+830,"auto_in_arready", false,-1);
    tracep->declBit(c+48,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+49,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+967,"auto_in_rready", false,-1);
    tracep->declBit(c+821,"auto_in_rvalid", false,-1);
    tracep->declBus(c+822,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+480,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+831,"auto_in_rlast", false,-1);
    tracep->declBit(c+845,"auto_out_awready", false,-1);
    tracep->declBit(c+122,"auto_out_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+13,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+14,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+826,"auto_out_wready", false,-1);
    tracep->declBit(c+46,"auto_out_wvalid", false,-1);
    tracep->declBus(c+16,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+47,"auto_out_wlast", false,-1);
    tracep->declBit(c+967,"auto_out_bready", false,-1);
    tracep->declBit(c+827,"auto_out_bvalid", false,-1);
    tracep->declBus(c+819,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+828,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+846,"auto_out_arready", false,-1);
    tracep->declBit(c+123,"auto_out_arvalid", false,-1);
    tracep->declBus(c+21,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+22,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+967,"auto_out_rready", false,-1);
    tracep->declBit(c+821,"auto_out_rvalid", false,-1);
    tracep->declBus(c+822,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+831,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+483,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+866,"io_deq_ready", false,-1);
    tracep->declBit(c+197,"io_deq_valid", false,-1);
    tracep->declBit(c+198,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+198,"ram_real_last", false,-1);
    tracep->declBit(c+197,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+199,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+484,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+867,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBit(c+202,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+202,"ram_real_last", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+485,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+868,"io_deq_ready", false,-1);
    tracep->declBit(c+205,"io_deq_valid", false,-1);
    tracep->declBit(c+206,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+206,"ram_real_last", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+207,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+486,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+869,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBit(c+210,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+210,"ram_real_last", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+211,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+487,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+870,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+488,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+871,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+489,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+872,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+490,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+873,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+491,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+874,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+492,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+875,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+493,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+876,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+494,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+877,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+495,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+878,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+496,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+879,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+497,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+880,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+498,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+881,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+499,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+882,"io_deq_ready", false,-1);
    tracep->declBit(c+261,"io_deq_valid", false,-1);
    tracep->declBit(c+262,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"ram_real_last", false,-1);
    tracep->declBit(c+261,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+263,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+500,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+883,"io_deq_ready", false,-1);
    tracep->declBit(c+265,"io_deq_valid", false,-1);
    tracep->declBit(c+266,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"ram_real_last", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+267,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBit(c+501,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+884,"io_deq_ready", false,-1);
    tracep->declBit(c+269,"io_deq_valid", false,-1);
    tracep->declBit(c+270,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"ram_real_last", false,-1);
    tracep->declBit(c+269,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+502,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+885,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+503,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+886,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+504,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+887,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+505,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+888,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+506,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+889,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+507,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+890,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+508,"io_enq_valid", false,-1);
    tracep->declBit(c+45,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+891,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+509,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+892,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+510,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+893,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+511,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+894,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+512,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+895,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+513,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+896,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+514,"io_enq_valid", false,-1);
    tracep->declBit(c+49,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+897,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+33,"auto_master_out_awready", false,-1);
    tracep->declBit(c+34,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+963,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+35,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+965,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+36,"auto_master_out_wready", false,-1);
    tracep->declBit(c+37,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+38,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+953,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+967,"auto_master_out_bready", false,-1);
    tracep->declBit(c+818,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+819,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+820,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+40,"auto_master_out_arready", false,-1);
    tracep->declBit(c+41,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+963,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+42,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+964,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+43,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+966,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+967,"auto_master_out_rready", false,-1);
    tracep->declBit(c+821,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+822,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+823,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+479,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+953,"io_interrupt", false,-1);
    tracep->declBit(c+41,"io_master_arvalid", false,-1);
    tracep->declBus(c+42,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+964,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+43,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+966,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+967,"io_master_rready", false,-1);
    tracep->declBit(c+34,"io_master_awvalid", false,-1);
    tracep->declBus(c+35,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+964,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+965,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+966,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+37,"io_master_wvalid", false,-1);
    tracep->declBus(c+38,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+39,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+953,"io_master_wlast", false,-1);
    tracep->declBit(c+967,"io_master_bready", false,-1);
    tracep->declBit(c+40,"io_master_arready", false,-1);
    tracep->declBit(c+821,"io_master_rvalid", false,-1);
    tracep->declBus(c+823,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+479,"io_master_rlast", false,-1);
    tracep->declBus(c+824,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+822,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+33,"io_master_awready", false,-1);
    tracep->declBit(c+36,"io_master_wready", false,-1);
    tracep->declBit(c+818,"io_master_bvalid", false,-1);
    tracep->declBus(c+820,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+819,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+953,"io_slave_arvalid", false,-1);
    tracep->declBus(c+968,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+963,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+969,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+970,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+966,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+953,"io_slave_rready", false,-1);
    tracep->declBit(c+953,"io_slave_awvalid", false,-1);
    tracep->declBus(c+968,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+963,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+969,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+970,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+966,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+953,"io_slave_wvalid", false,-1);
    tracep->declBus(c+968,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+963,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+953,"io_slave_wlast", false,-1);
    tracep->declBit(c+953,"io_slave_bready", false,-1);
    tracep->declBit(c+953,"io_slave_arready", false,-1);
    tracep->declBit(c+953,"io_slave_rvalid", false,-1);
    tracep->declBus(c+968,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+953,"io_slave_rlast", false,-1);
    tracep->declBus(c+966,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+963,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+953,"io_slave_awready", false,-1);
    tracep->declBit(c+953,"io_slave_wready", false,-1);
    tracep->declBit(c+953,"io_slave_bvalid", false,-1);
    tracep->declBus(c+966,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+963,"io_slave_bid", false,-1, 3,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+324,"io_in_valid", false,-1);
    tracep->declBus(c+325,"io_in_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+326,"io_in_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+327,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+328,"io_in_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+329,"io_in_bits_alu_a_sel", false,-1);
    tracep->declBit(c+330,"io_in_bits_alu_b_sel", false,-1);
    tracep->declBus(c+331,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+332,"io_in_bits_jump_en", false,-1);
    tracep->declBit(c+333,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+334,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBit(c+338,"io_in_bits_mem_wr_en", false,-1);
    tracep->declBus(c+339,"io_in_bits_len", false,-1, 31,0);
    tracep->declBit(c+340,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+341,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+342,"io_out_valid", false,-1);
    tracep->declBus(c+343,"io_out_bits_alu_out", false,-1, 31,0);
    tracep->declBus(c+326,"io_out_bits_data", false,-1, 31,0);
    tracep->declBit(c+338,"io_out_bits_mem_wr_en", false,-1);
    tracep->declBus(c+339,"io_out_bits_len", false,-1, 31,0);
    tracep->declBit(c+333,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+332,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+327,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+325,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+340,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+341,"io_out_bits_isS_type", false,-1);
    tracep->declBit(c+342,"state", false,-1);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+325,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+326,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+327,"io_imm", false,-1, 31,0);
    tracep->declBit(c+329,"io_alu_a_sel", false,-1);
    tracep->declBit(c+330,"io_alu_b_sel", false,-1);
    tracep->declBus(c+328,"io_alu_sel", false,-1, 12,0);
    tracep->declBus(c+331,"io_pc", false,-1, 31,0);
    tracep->declBus(c+343,"io_rsl", false,-1, 31,0);
    tracep->declBus(c+344,"op1", false,-1, 31,0);
    tracep->declBus(c+345,"op2", false,-1, 31,0);
    tracep->declQuad(c+346,"umovl", false,-1, 62,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+348,"io_in_ready", false,-1);
    tracep->declBit(c+349,"io_in_valid", false,-1);
    tracep->declBus(c+350,"io_in_bits_inst", false,-1, 31,0);
    tracep->declBus(c+331,"io_in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+324,"io_out_valid", false,-1);
    tracep->declBus(c+325,"io_out_bits_rs1", false,-1, 31,0);
    tracep->declBus(c+326,"io_out_bits_rs2", false,-1, 31,0);
    tracep->declBus(c+327,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBus(c+328,"io_out_bits_alu_sel", false,-1, 12,0);
    tracep->declBit(c+329,"io_out_bits_alu_a_sel", false,-1);
    tracep->declBit(c+330,"io_out_bits_alu_b_sel", false,-1);
    tracep->declBus(c+331,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBit(c+332,"io_out_bits_jump_en", false,-1);
    tracep->declBit(c+333,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+334,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBit(c+338,"io_out_bits_mem_wr_en", false,-1);
    tracep->declBus(c+339,"io_out_bits_len", false,-1, 31,0);
    tracep->declBit(c+340,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+341,"io_out_bits_isS_type", false,-1);
    tracep->declBus(c+343,"io_alu_rsl", false,-1, 31,0);
    tracep->declBus(c+823,"io_dm_out", false,-1, 31,0);
    tracep->declBit(c+351,"io_wbu_valid", false,-1);
    tracep->declBit(c+324,"state", false,-1);
    tracep->pushNamePrefix("Contorller ");
    tracep->declBus(c+350,"io_inst", false,-1, 31,0);
    tracep->declBus(c+325,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+326,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+352,"io_rf_wr_en", false,-1);
    tracep->declBus(c+353,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+329,"io_alu_a_sel", false,-1);
    tracep->declBit(c+330,"io_alu_b_sel", false,-1);
    tracep->declBit(c+338,"io_mem_wr_en", false,-1);
    tracep->declBus(c+328,"io_alu_sel", false,-1, 12,0);
    tracep->declBit(c+332,"io_jump_en", false,-1);
    tracep->declBit(c+333,"io_jump_jalr", false,-1);
    tracep->declBus(c+339,"io_len", false,-1, 31,0);
    tracep->declBus(c+327,"io_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_is_ecall", false,-1);
    tracep->declBit(c+354,"io_is_csr", false,-1);
    tracep->declBit(c+335,"io_is_mret", false,-1);
    tracep->declBit(c+340,"io_is_load", false,-1);
    tracep->declBit(c+341,"io_isS_type", false,-1);
    tracep->declBit(c+355,"io_is_ebreak", false,-1);
    tracep->declBit(c+356,"isR_type", false,-1);
    tracep->declBit(c+357,"isI_type", false,-1);
    tracep->declBit(c+341,"isS_type", false,-1);
    tracep->declBit(c+358,"isB_type", false,-1);
    tracep->declBit(c+340,"is_load", false,-1);
    tracep->declBit(c+359,"is_auipc", false,-1);
    tracep->declBit(c+360,"is_lui", false,-1);
    tracep->declBit(c+361,"is_jal", false,-1);
    tracep->declBit(c+333,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBus(c+350,"io_inst", false,-1, 31,0);
    tracep->declBit(c+362,"io_wr_en", false,-1);
    tracep->declBus(c+823,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+343,"io_alu_out", false,-1, 31,0);
    tracep->declBus(c+353,"io_rf_wr_sel", false,-1, 2,0);
    tracep->declBit(c+354,"io_is_csr", false,-1);
    tracep->declBit(c+334,"io_is_ecall", false,-1);
    tracep->declBit(c+335,"io_is_mret", false,-1);
    tracep->declBus(c+331,"io_pc", false,-1, 31,0);
    tracep->declBus(c+325,"io_rd1", false,-1, 31,0);
    tracep->declBus(c+326,"io_rd2", false,-1, 31,0);
    tracep->declBus(c+336,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_epc", false,-1, 31,0);
    tracep->declBus(c+363,"FileReg_1", false,-1, 31,0);
    tracep->declBus(c+364,"FileReg_2", false,-1, 31,0);
    tracep->declBus(c+365,"FileReg_3", false,-1, 31,0);
    tracep->declBus(c+366,"FileReg_4", false,-1, 31,0);
    tracep->declBus(c+367,"FileReg_5", false,-1, 31,0);
    tracep->declBus(c+368,"FileReg_6", false,-1, 31,0);
    tracep->declBus(c+369,"FileReg_7", false,-1, 31,0);
    tracep->declBus(c+370,"FileReg_8", false,-1, 31,0);
    tracep->declBus(c+371,"FileReg_9", false,-1, 31,0);
    tracep->declBus(c+372,"FileReg_10", false,-1, 31,0);
    tracep->declBus(c+373,"FileReg_11", false,-1, 31,0);
    tracep->declBus(c+374,"FileReg_12", false,-1, 31,0);
    tracep->declBus(c+375,"FileReg_13", false,-1, 31,0);
    tracep->declBus(c+376,"FileReg_14", false,-1, 31,0);
    tracep->declBus(c+377,"FileReg_15", false,-1, 31,0);
    tracep->declBus(c+378,"FileReg_16", false,-1, 31,0);
    tracep->declBus(c+379,"FileReg_17", false,-1, 31,0);
    tracep->declBus(c+380,"FileReg_18", false,-1, 31,0);
    tracep->declBus(c+381,"FileReg_19", false,-1, 31,0);
    tracep->declBus(c+382,"FileReg_20", false,-1, 31,0);
    tracep->declBus(c+383,"FileReg_21", false,-1, 31,0);
    tracep->declBus(c+384,"FileReg_22", false,-1, 31,0);
    tracep->declBus(c+385,"FileReg_23", false,-1, 31,0);
    tracep->declBus(c+386,"FileReg_24", false,-1, 31,0);
    tracep->declBus(c+387,"FileReg_25", false,-1, 31,0);
    tracep->declBus(c+388,"FileReg_26", false,-1, 31,0);
    tracep->declBus(c+389,"FileReg_27", false,-1, 31,0);
    tracep->declBus(c+390,"FileReg_28", false,-1, 31,0);
    tracep->declBus(c+391,"FileReg_29", false,-1, 31,0);
    tracep->declBus(c+392,"FileReg_30", false,-1, 31,0);
    tracep->declBus(c+393,"FileReg_31", false,-1, 31,0);
    tracep->declBus(c+394,"CsrReg_0", false,-1, 31,0);
    tracep->declBus(c+395,"CsrReg_1", false,-1, 31,0);
    tracep->declBus(c+396,"CsrReg_2", false,-1, 31,0);
    tracep->declBus(c+397,"CsrReg_3", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+398,"csr_sel", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+399,"wd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+355,"is_ebreak", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBus(c+400,"io_pc", false,-1, 31,0);
    tracep->declBit(c+348,"io_out_ready", false,-1);
    tracep->declBit(c+349,"io_out_valid", false,-1);
    tracep->declBus(c+350,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+331,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBit(c+401,"io_ifu_axi_out_ready", false,-1);
    tracep->declBit(c+402,"io_ifu_axi_out_valid", false,-1);
    tracep->declBit(c+403,"io_ifu_axi_out_bits_arvalid", false,-1);
    tracep->declBus(c+400,"io_ifu_axi_out_bits_araddr", false,-1, 31,0);
    tracep->declBit(c+402,"io_ifu_axi_in_ready", false,-1);
    tracep->declBit(c+40,"io_ifu_axi_in_bits_arready", false,-1);
    tracep->declBit(c+821,"io_ifu_axi_in_bits_rvalid", false,-1);
    tracep->declBus(c+823,"io_ifu_axi_in_bits_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"io_ifu_axi_in_bits_rresp", false,-1, 1,0);
    tracep->declBit(c+402,"io_ifu_valid", false,-1);
    tracep->declBit(c+403,"arvalid", false,-1);
    tracep->declBit(c+402,"valid", false,-1);
    tracep->declBus(c+331,"IPC", false,-1, 31,0);
    tracep->declBus(c+350,"IR", false,-1, 31,0);
    tracep->declBus(c+404,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+342,"io_in_valid", false,-1);
    tracep->declBus(c+343,"io_in_bits_alu_out", false,-1, 31,0);
    tracep->declBus(c+326,"io_in_bits_data", false,-1, 31,0);
    tracep->declBit(c+338,"io_in_bits_mem_wr_en", false,-1);
    tracep->declBus(c+339,"io_in_bits_len", false,-1, 31,0);
    tracep->declBit(c+333,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+332,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+327,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+325,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+340,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+341,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+405,"io_out_valid", false,-1);
    tracep->declBus(c+823,"io_out_bits_dm_out", false,-1, 31,0);
    tracep->declBus(c+343,"io_out_bits_alu_out", false,-1, 31,0);
    tracep->declBit(c+333,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+332,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+327,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+325,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+406,"io_out_bits_load_finish", false,-1);
    tracep->declBit(c+407,"io_out_bits_store_finish", false,-1);
    tracep->declBit(c+340,"io_out_bits_is_load", false,-1);
    tracep->declBit(c+341,"io_out_bits_isS_type", false,-1);
    tracep->declBit(c+408,"io_isu_axi_out_ready", false,-1);
    tracep->declBit(c+409,"io_isu_axi_out_valid", false,-1);
    tracep->declBit(c+410,"io_isu_axi_out_bits_arvalid", false,-1);
    tracep->declBus(c+343,"io_isu_axi_out_bits_araddr", false,-1, 31,0);
    tracep->declBus(c+411,"io_isu_axi_out_bits_arsize", false,-1, 2,0);
    tracep->declBit(c+412,"io_isu_axi_out_bits_awvalid", false,-1);
    tracep->declBus(c+343,"io_isu_axi_out_bits_awaddr", false,-1, 31,0);
    tracep->declBit(c+413,"io_isu_axi_out_bits_wvalid", false,-1);
    tracep->declBus(c+326,"io_isu_axi_out_bits_wdata", false,-1, 31,0);
    tracep->declBus(c+339,"io_isu_axi_out_bits_wstrb", false,-1, 31,0);
    tracep->declBit(c+409,"io_isu_axi_in_ready", false,-1);
    tracep->declBit(c+40,"io_isu_axi_in_bits_arready", false,-1);
    tracep->declBus(c+823,"io_isu_axi_in_bits_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"io_isu_axi_in_bits_rresp", false,-1, 1,0);
    tracep->declBit(c+33,"io_isu_axi_in_bits_awready", false,-1);
    tracep->declBit(c+36,"io_isu_axi_in_bits_wready", false,-1);
    tracep->declBus(c+820,"io_isu_axi_in_bits_bresp", false,-1, 1,0);
    tracep->declBit(c+409,"io_isu_valid", false,-1);
    tracep->declBit(c+407,"store_finish", false,-1);
    tracep->declBit(c+406,"load_finish", false,-1);
    tracep->declBit(c+410,"arvalid", false,-1);
    tracep->declBit(c+412,"awvalid", false,-1);
    tracep->declBit(c+413,"wvalid", false,-1);
    tracep->declBit(c+409,"valid", false,-1);
    tracep->declBus(c+414,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBus(c+400,"io_next_pc", false,-1, 31,0);
    tracep->declBit(c+351,"io_in_valid", false,-1);
    tracep->declBit(c+333,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+332,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+327,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+325,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBus(c+400,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+405,"io_in_valid", false,-1);
    tracep->declBus(c+823,"io_in_bits_dm_out", false,-1, 31,0);
    tracep->declBus(c+343,"io_in_bits_alu_out", false,-1, 31,0);
    tracep->declBit(c+333,"io_in_bits_jump_jalr", false,-1);
    tracep->declBit(c+332,"io_in_bits_jump_en", false,-1);
    tracep->declBus(c+327,"io_in_bits_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_in_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_in_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_in_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_in_bits_epc", false,-1, 31,0);
    tracep->declBus(c+325,"io_in_bits_rd1", false,-1, 31,0);
    tracep->declBit(c+406,"io_in_bits_load_finish", false,-1);
    tracep->declBit(c+407,"io_in_bits_store_finish", false,-1);
    tracep->declBit(c+340,"io_in_bits_is_load", false,-1);
    tracep->declBit(c+341,"io_in_bits_isS_type", false,-1);
    tracep->declBit(c+351,"io_out_valid", false,-1);
    tracep->declBit(c+333,"io_out_bits_jump_jalr", false,-1);
    tracep->declBit(c+332,"io_out_bits_jump_en", false,-1);
    tracep->declBus(c+327,"io_out_bits_imm", false,-1, 31,0);
    tracep->declBit(c+334,"io_out_bits_is_ecall", false,-1);
    tracep->declBit(c+335,"io_out_bits_is_mret", false,-1);
    tracep->declBus(c+336,"io_out_bits_mtvec", false,-1, 31,0);
    tracep->declBus(c+337,"io_out_bits_epc", false,-1, 31,0);
    tracep->declBus(c+325,"io_out_bits_rd1", false,-1, 31,0);
    tracep->declBus(c+823,"io_dm_out", false,-1, 31,0);
    tracep->declBus(c+343,"io_alu_out", false,-1, 31,0);
    tracep->declBit(c+351,"io_wbu_valid", false,-1);
    tracep->declBus(c+415,"state", false,-1, 1,0);
    tracep->declBit(c+351,"io_wbu_valid_0", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xbar ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+941,"reset", false,-1);
    tracep->declBit(c+401,"io_ifu_axi_in_ready", false,-1);
    tracep->declBit(c+402,"io_ifu_axi_in_valid", false,-1);
    tracep->declBit(c+403,"io_ifu_axi_in_bits_arvalid", false,-1);
    tracep->declBus(c+400,"io_ifu_axi_in_bits_araddr", false,-1, 31,0);
    tracep->declBit(c+402,"io_ifu_axi_out_ready", false,-1);
    tracep->declBit(c+40,"io_ifu_axi_out_bits_arready", false,-1);
    tracep->declBit(c+821,"io_ifu_axi_out_bits_rvalid", false,-1);
    tracep->declBus(c+823,"io_ifu_axi_out_bits_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"io_ifu_axi_out_bits_rresp", false,-1, 1,0);
    tracep->declBit(c+408,"io_isu_axi_in_ready", false,-1);
    tracep->declBit(c+409,"io_isu_axi_in_valid", false,-1);
    tracep->declBit(c+410,"io_isu_axi_in_bits_arvalid", false,-1);
    tracep->declBus(c+343,"io_isu_axi_in_bits_araddr", false,-1, 31,0);
    tracep->declBus(c+411,"io_isu_axi_in_bits_arsize", false,-1, 2,0);
    tracep->declBit(c+412,"io_isu_axi_in_bits_awvalid", false,-1);
    tracep->declBus(c+343,"io_isu_axi_in_bits_awaddr", false,-1, 31,0);
    tracep->declBit(c+413,"io_isu_axi_in_bits_wvalid", false,-1);
    tracep->declBus(c+326,"io_isu_axi_in_bits_wdata", false,-1, 31,0);
    tracep->declBus(c+339,"io_isu_axi_in_bits_wstrb", false,-1, 31,0);
    tracep->declBit(c+409,"io_isu_axi_out_ready", false,-1);
    tracep->declBit(c+40,"io_isu_axi_out_bits_arready", false,-1);
    tracep->declBus(c+823,"io_isu_axi_out_bits_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"io_isu_axi_out_bits_rresp", false,-1, 1,0);
    tracep->declBit(c+33,"io_isu_axi_out_bits_awready", false,-1);
    tracep->declBit(c+36,"io_isu_axi_out_bits_wready", false,-1);
    tracep->declBus(c+820,"io_isu_axi_out_bits_bresp", false,-1, 1,0);
    tracep->declBit(c+40,"io_xbar_in_bits_arready", false,-1);
    tracep->declBit(c+821,"io_xbar_in_bits_rvalid", false,-1);
    tracep->declBus(c+823,"io_xbar_in_bits_rdata", false,-1, 31,0);
    tracep->declBus(c+824,"io_xbar_in_bits_rresp", false,-1, 1,0);
    tracep->declBit(c+33,"io_xbar_in_bits_awready", false,-1);
    tracep->declBit(c+36,"io_xbar_in_bits_wready", false,-1);
    tracep->declBus(c+820,"io_xbar_in_bits_bresp", false,-1, 1,0);
    tracep->declBit(c+41,"io_xbar_out_bits_arvalid", false,-1);
    tracep->declBus(c+42,"io_xbar_out_bits_araddr", false,-1, 31,0);
    tracep->declBus(c+43,"io_xbar_out_bits_arsize", false,-1, 2,0);
    tracep->declBit(c+34,"io_xbar_out_bits_awvalid", false,-1);
    tracep->declBus(c+35,"io_xbar_out_bits_awaddr", false,-1, 31,0);
    tracep->declBit(c+37,"io_xbar_out_bits_wvalid", false,-1);
    tracep->declBus(c+38,"io_xbar_out_bits_wdata", false,-1, 31,0);
    tracep->declBus(c+416,"io_xbar_out_bits_wstrb", false,-1, 31,0);
    tracep->declBit(c+402,"io_ifu_valid", false,-1);
    tracep->declBit(c+409,"io_isu_valid", false,-1);
    tracep->declBus(c+417,"state", false,-1, 2,0);
    tracep->declBit(c+401,"ifu_selected", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"io_d", false,-1);
    tracep->declBit(c+418,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"io_d", false,-1);
    tracep->declBit(c+418,"io_q", false,-1);
    tracep->declBit(c+418,"sync_0", false,-1);
    tracep->declBit(c+419,"sync_1", false,-1);
    tracep->declBit(c+420,"sync_2", false,-1);
    tracep->declBit(c+421,"sync_3", false,-1);
    tracep->declBit(c+422,"sync_4", false,-1);
    tracep->declBit(c+423,"sync_5", false,-1);
    tracep->declBit(c+424,"sync_6", false,-1);
    tracep->declBit(c+425,"sync_7", false,-1);
    tracep->declBit(c+426,"sync_8", false,-1);
    tracep->declBit(c+427,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+475,"auto_in_psel", false,-1);
    tracep->declBit(c+476,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+766,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+960,"auto_in_pready", false,-1);
    tracep->declBit(c+961,"auto_in_pslverr", false,-1);
    tracep->declBus(c+962,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+914,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+915,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+916,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+917,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+918,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+919,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+920,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+921,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+922,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+923,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+782,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+475,"in_psel", false,-1);
    tracep->declBit(c+476,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+960,"in_pready", false,-1);
    tracep->declBus(c+962,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+961,"in_pslverr", false,-1);
    tracep->declBus(c+914,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+915,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+916,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+917,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+918,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+919,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+920,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+921,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+922,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+923,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+473,"auto_in_psel", false,-1);
    tracep->declBit(c+474,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+766,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+957,"auto_in_pready", false,-1);
    tracep->declBit(c+958,"auto_in_pslverr", false,-1);
    tracep->declBus(c+959,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+924,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+925,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+782,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+473,"in_psel", false,-1);
    tracep->declBit(c+474,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+957,"in_pready", false,-1);
    tracep->declBus(c+959,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+958,"in_pslverr", false,-1);
    tracep->declBit(c+924,"ps2_clk", false,-1);
    tracep->declBit(c+925,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+124,"auto_in_awvalid", false,-1);
    tracep->declBit(c+125,"auto_in_wvalid", false,-1);
    tracep->declBit(c+126,"auto_in_arready", false,-1);
    tracep->declBit(c+127,"auto_in_arvalid", false,-1);
    tracep->declBus(c+21,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+128,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+482,"auto_in_rready", false,-1);
    tracep->declBit(c+129,"auto_in_rvalid", false,-1);
    tracep->declBus(c+130,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+129,"state", false,-1);
    tracep->declBus(c+131,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+130,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+428,"raddr", false,-1, 31,0);
    tracep->declBit(c+429,"ren", false,-1);
    tracep->declBus(c+430,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+767,"auto_in_psel", false,-1);
    tracep->declBit(c+477,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+760,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+939,"auto_in_pready", false,-1);
    tracep->declBit(c+953,"auto_in_pslverr", false,-1);
    tracep->declBus(c+9,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+936,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+937,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+811,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+760,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+767,"in_psel", false,-1);
    tracep->declBit(c+477,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+939,"in_pready", false,-1);
    tracep->declBus(c+9,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+953,"in_pslverr", false,-1);
    tracep->declBit(c+936,"qspi_sck", false,-1);
    tracep->declBit(c+937,"qspi_ce_n", false,-1);
    tracep->declBus(c+811,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+811,"din", false,-1, 3,0);
    tracep->declBus(c+898,"dout", false,-1, 3,0);
    tracep->declBus(c+899,"douten", false,-1, 3,0);
    tracep->declBit(c+942,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+912,"clk_i", false,-1);
    tracep->declBit(c+913,"rst_i", false,-1);
    tracep->declBus(c+760,"adr_i", false,-1, 31,0);
    tracep->declBus(c+762,"dat_i", false,-1, 31,0);
    tracep->declBus(c+9,"dat_o", false,-1, 31,0);
    tracep->declBus(c+763,"sel_i", false,-1, 3,0);
    tracep->declBit(c+767,"cyc_i", false,-1);
    tracep->declBit(c+767,"stb_i", false,-1);
    tracep->declBit(c+942,"ack_o", false,-1);
    tracep->declBit(c+761,"we_i", false,-1);
    tracep->declBit(c+936,"sck", false,-1);
    tracep->declBit(c+937,"ce_n", false,-1);
    tracep->declBus(c+811,"din", false,-1, 3,0);
    tracep->declBus(c+898,"dout", false,-1, 3,0);
    tracep->declBus(c+899,"douten", false,-1, 3,0);
    tracep->declBus(c+971,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+972,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+530,"mr_sck", false,-1);
    tracep->declBit(c+531,"mr_ce_n", false,-1);
    tracep->declBus(c+811,"mr_din", false,-1, 3,0);
    tracep->declBus(c+532,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+533,"mr_doe", false,-1);
    tracep->declBit(c+534,"mw_sck", false,-1);
    tracep->declBit(c+535,"mw_ce_n", false,-1);
    tracep->declBus(c+811,"mw_din", false,-1, 3,0);
    tracep->declBus(c+900,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+536,"mw_doe", false,-1);
    tracep->declBit(c+901,"mr_rd", false,-1);
    tracep->declBit(c+537,"mr_done", false,-1);
    tracep->declBit(c+902,"mw_wr", false,-1);
    tracep->declBit(c+903,"mw_done", false,-1);
    tracep->declBit(c+767,"wb_valid", false,-1);
    tracep->declBit(c+783,"wb_we", false,-1);
    tracep->declBit(c+784,"wb_re", false,-1);
    tracep->declBit(c+538,"state", false,-1);
    tracep->declBit(c+904,"nstate", false,-1);
    tracep->declBus(c+785,"size", false,-1, 2,0);
    tracep->declBus(c+786,"byte0", false,-1, 7,0);
    tracep->declBus(c+787,"byte1", false,-1, 7,0);
    tracep->declBus(c+788,"byte2", false,-1, 7,0);
    tracep->declBus(c+789,"byte3", false,-1, 7,0);
    tracep->declBus(c+790,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+943,"rst_n", false,-1);
    tracep->declBus(c+791,"addr", false,-1, 23,0);
    tracep->declBit(c+901,"rd", false,-1);
    tracep->declBus(c+965,"size", false,-1, 2,0);
    tracep->declBit(c+537,"done", false,-1);
    tracep->declBus(c+9,"line", false,-1, 31,0);
    tracep->declBit(c+530,"sck", false,-1);
    tracep->declBit(c+531,"ce_n", false,-1);
    tracep->declBus(c+811,"din", false,-1, 3,0);
    tracep->declBus(c+532,"dout", false,-1, 3,0);
    tracep->declBit(c+533,"douten", false,-1);
    tracep->declBus(c+971,"IDLE", false,-1, 0,0);
    tracep->declBus(c+972,"READ", false,-1, 0,0);
    tracep->declBus(c+973,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+539,"state", false,-1);
    tracep->declBit(c+905,"nstate", false,-1);
    tracep->declBus(c+540,"counter", false,-1, 7,0);
    tracep->declBus(c+541,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+431+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+974,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+542,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+943,"rst_n", false,-1);
    tracep->declBus(c+792,"addr", false,-1, 23,0);
    tracep->declBus(c+790,"line", false,-1, 31,0);
    tracep->declBus(c+785,"size", false,-1, 2,0);
    tracep->declBit(c+902,"wr", false,-1);
    tracep->declBit(c+903,"done", false,-1);
    tracep->declBit(c+534,"sck", false,-1);
    tracep->declBit(c+535,"ce_n", false,-1);
    tracep->declBus(c+811,"din", false,-1, 3,0);
    tracep->declBus(c+900,"dout", false,-1, 3,0);
    tracep->declBit(c+536,"douten", false,-1);
    tracep->declBus(c+971,"IDLE", false,-1, 0,0);
    tracep->declBus(c+972,"WRITE", false,-1, 0,0);
    tracep->declBus(c+793,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+543,"state", false,-1);
    tracep->declBit(c+906,"nstate", false,-1);
    tracep->declBus(c+544,"counter", false,-1, 7,0);
    tracep->declBus(c+545,"saddr", false,-1, 23,0);
    tracep->declBus(c+975,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+469,"auto_in_psel", false,-1);
    tracep->declBit(c+470,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+760,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+526,"auto_in_pready", false,-1);
    tracep->declBit(c+953,"auto_in_pslverr", false,-1);
    tracep->declBus(c+527,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+938,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+517,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+518,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+519,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+520,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+521,"sdram_bundle_we", false,-1);
    tracep->declBus(c+522,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+523,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+524,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+525,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+760,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+469,"in_psel", false,-1);
    tracep->declBit(c+470,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+526,"in_pready", false,-1);
    tracep->declBus(c+527,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+953,"in_pslverr", false,-1);
    tracep->declBit(c+938,"sdram_clk", false,-1);
    tracep->declBit(c+517,"sdram_cke", false,-1);
    tracep->declBit(c+518,"sdram_cs", false,-1);
    tracep->declBit(c+519,"sdram_ras", false,-1);
    tracep->declBit(c+520,"sdram_cas", false,-1);
    tracep->declBit(c+521,"sdram_we", false,-1);
    tracep->declBus(c+522,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+523,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+524,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+525,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+546,"sdram_dout_en", false,-1);
    tracep->declBus(c+547,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+435,"state", false,-1, 1,0);
    tracep->declBit(c+548,"req_accept", false,-1);
    tracep->declBit(c+794,"is_read", false,-1);
    tracep->declBit(c+795,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+912,"clk_i", false,-1);
    tracep->declBit(c+913,"rst_i", false,-1);
    tracep->declBus(c+796,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+794,"inport_rd_i", false,-1);
    tracep->declBus(c+969,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+760,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+762,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+525,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+548,"inport_accept_o", false,-1);
    tracep->declBit(c+526,"inport_ack_o", false,-1);
    tracep->declBit(c+953,"inport_error_o", false,-1);
    tracep->declBus(c+527,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+938,"sdram_clk_o", false,-1);
    tracep->declBit(c+517,"sdram_cke_o", false,-1);
    tracep->declBit(c+518,"sdram_cs_o", false,-1);
    tracep->declBit(c+519,"sdram_ras_o", false,-1);
    tracep->declBit(c+520,"sdram_cas_o", false,-1);
    tracep->declBit(c+521,"sdram_we_o", false,-1);
    tracep->declBus(c+524,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+522,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+523,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+547,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+546,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+976,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+977,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+978,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+979,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+979,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+979,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+980,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+981,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+982,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+983,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+984,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+980,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+985,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+986,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+987,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+988,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+989,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+990,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+991,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+963,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+992,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+980,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+963,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+991,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+990,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+986,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+988,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+987,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+989,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+985,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+993,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+994,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+995,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+995,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+996,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+995,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+979,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+979,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+997,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+760,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+796,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+794,"ram_rd_w", false,-1);
    tracep->declBit(c+548,"ram_accept_w", false,-1);
    tracep->declBus(c+762,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+527,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+526,"ram_ack_w", false,-1);
    tracep->declBit(c+797,"ram_req_w", false,-1);
    tracep->declBus(c+549,"command_q", false,-1, 3,0);
    tracep->declBus(c+522,"addr_q", false,-1, 12,0);
    tracep->declBus(c+547,"data_q", false,-1, 15,0);
    tracep->declBit(c+550,"data_rd_en_q", false,-1);
    tracep->declBus(c+524,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+517,"cke_q", false,-1);
    tracep->declBus(c+523,"bank_q", false,-1, 1,0);
    tracep->declBus(c+551,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+552,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+525,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+553,"refresh_q", false,-1);
    tracep->declBus(c+554,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+555+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+559,"state_q", false,-1, 3,0);
    tracep->declBus(c+907,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+908,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+560,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+561,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+798,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+799,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+800,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+980,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+562,"delay_q", false,-1, 3,0);
    tracep->declBus(c+909,"delay_r", false,-1, 3,0);
    tracep->declBus(c+998,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+563,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+564,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+565,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+566,"idx", false,-1, 31,0);
    tracep->declBus(c+567,"rd_q", false,-1, 3,0);
    tracep->declBit(c+526,"ack_q", false,-1);
    tracep->declArray(c+568,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+771,"auto_in_psel", false,-1);
    tracep->declBit(c+772,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+765,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+528,"auto_in_pready", false,-1);
    tracep->declBit(c+953,"auto_in_pslverr", false,-1);
    tracep->declBus(c+529,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+515,"spi_bundle_sck", false,-1);
    tracep->declBus(c+516,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+934,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+935,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+999,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1000,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1001,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+801,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+771,"in_psel", false,-1);
    tracep->declBit(c+772,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+528,"in_pready", false,-1);
    tracep->declBus(c+529,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+953,"in_pslverr", false,-1);
    tracep->declBit(c+515,"spi_sck", false,-1);
    tracep->declBus(c+516,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+934,"spi_mosi", false,-1);
    tracep->declBit(c+935,"spi_miso", false,-1);
    tracep->declBit(c+571,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1002,"Tp", false,-1, 31,0);
    tracep->declBit(c+912,"wb_clk_i", false,-1);
    tracep->declBit(c+913,"wb_rst_i", false,-1);
    tracep->declBus(c+802,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+762,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+529,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+763,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+761,"wb_we_i", false,-1);
    tracep->declBit(c+771,"wb_stb_i", false,-1);
    tracep->declBit(c+772,"wb_cyc_i", false,-1);
    tracep->declBit(c+528,"wb_ack_o", false,-1);
    tracep->declBit(c+953,"wb_err_o", false,-1);
    tracep->declBit(c+571,"wb_int_o", false,-1);
    tracep->declBus(c+516,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+515,"sclk_pad_o", false,-1);
    tracep->declBit(c+934,"mosi_pad_o", false,-1);
    tracep->declBit(c+935,"miso_pad_i", false,-1);
    tracep->declBus(c+572,"divider", false,-1, 15,0);
    tracep->declBus(c+573,"ctrl", false,-1, 13,0);
    tracep->declBus(c+574,"ss", false,-1, 7,0);
    tracep->declBus(c+910,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+575,"rx", false,-1, 127,0);
    tracep->declBit(c+579,"rx_negedge", false,-1);
    tracep->declBit(c+580,"tx_negedge", false,-1);
    tracep->declBus(c+581,"char_len", false,-1, 6,0);
    tracep->declBit(c+582,"go", false,-1);
    tracep->declBit(c+583,"lsb", false,-1);
    tracep->declBit(c+584,"ie", false,-1);
    tracep->declBit(c+585,"ass", false,-1);
    tracep->declBit(c+803,"spi_divider_sel", false,-1);
    tracep->declBit(c+804,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+805,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+806,"spi_ss_sel", false,-1);
    tracep->declBit(c+586,"tip", false,-1);
    tracep->declBit(c+587,"pos_edge", false,-1);
    tracep->declBit(c+588,"neg_edge", false,-1);
    tracep->declBit(c+589,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1002,"Tp", false,-1, 31,0);
    tracep->declBit(c+912,"clk_in", false,-1);
    tracep->declBit(c+913,"rst", false,-1);
    tracep->declBit(c+586,"enable", false,-1);
    tracep->declBit(c+582,"go", false,-1);
    tracep->declBit(c+589,"last_clk", false,-1);
    tracep->declBus(c+572,"divider", false,-1, 15,0);
    tracep->declBit(c+515,"clk_out", false,-1);
    tracep->declBit(c+587,"pos_edge", false,-1);
    tracep->declBit(c+588,"neg_edge", false,-1);
    tracep->declBus(c+590,"cnt", false,-1, 15,0);
    tracep->declBit(c+591,"cnt_zero", false,-1);
    tracep->declBit(c+592,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1002,"Tp", false,-1, 31,0);
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+913,"rst", false,-1);
    tracep->declBus(c+807,"latch", false,-1, 3,0);
    tracep->declBus(c+763,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+581,"len", false,-1, 6,0);
    tracep->declBit(c+583,"lsb", false,-1);
    tracep->declBit(c+582,"go", false,-1);
    tracep->declBit(c+587,"pos_edge", false,-1);
    tracep->declBit(c+588,"neg_edge", false,-1);
    tracep->declBit(c+579,"rx_negedge", false,-1);
    tracep->declBit(c+580,"tx_negedge", false,-1);
    tracep->declBit(c+586,"tip", false,-1);
    tracep->declBit(c+589,"last", false,-1);
    tracep->declBus(c+762,"p_in", false,-1, 31,0);
    tracep->declArray(c+575,"p_out", false,-1, 127,0);
    tracep->declBit(c+515,"s_clk", false,-1);
    tracep->declBit(c+935,"s_in", false,-1);
    tracep->declBit(c+934,"s_out", false,-1);
    tracep->declBus(c+593,"cnt", false,-1, 7,0);
    tracep->declArray(c+575,"data", false,-1, 127,0);
    tracep->declBus(c+594,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+595,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+596,"rx_clk", false,-1);
    tracep->declBit(c+597,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+768,"auto_in_psel", false,-1);
    tracep->declBit(c+769,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+766,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+770,"auto_in_pready", false,-1);
    tracep->declBit(c+953,"auto_in_pslverr", false,-1);
    tracep->declBus(c+940,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+932,"uart_rx", false,-1);
    tracep->declBit(c+933,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+768,"in_psel", false,-1);
    tracep->declBit(c+769,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+770,"in_pready", false,-1);
    tracep->declBit(c+953,"in_pslverr", false,-1);
    tracep->declBus(c+782,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+940,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+932,"uart_rx", false,-1);
    tracep->declBit(c+933,"uart_tx", false,-1);
    tracep->declBit(c+598,"rtsn", false,-1);
    tracep->declBit(c+953,"ctsn", false,-1);
    tracep->declBit(c+599,"dtr_pad_o", false,-1);
    tracep->declBit(c+953,"dsr_pad_i", false,-1);
    tracep->declBit(c+953,"ri_pad_i", false,-1);
    tracep->declBit(c+953,"dcd_pad_i", false,-1);
    tracep->declBit(c+600,"interrupt", false,-1);
    tracep->declBit(c+944,"reg_we", false,-1);
    tracep->declBit(c+945,"reg_re", false,-1);
    tracep->declBus(c+808,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+809,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+436,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+911,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+601,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+913,"wb_rst_i", false,-1);
    tracep->declBus(c+808,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+810,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+911,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+944,"wb_we_i", false,-1);
    tracep->declBit(c+945,"wb_re_i", false,-1);
    tracep->declBit(c+933,"stx_pad_o", false,-1);
    tracep->declBit(c+932,"srx_pad_i", false,-1);
    tracep->declBus(c+993,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+601,"rts_pad_o", false,-1);
    tracep->declBit(c+599,"dtr_pad_o", false,-1);
    tracep->declBit(c+600,"int_o", false,-1);
    tracep->declBit(c+602,"enable", false,-1);
    tracep->declBit(c+603,"srx_pad", false,-1);
    tracep->declBus(c+604,"ier", false,-1, 3,0);
    tracep->declBus(c+605,"iir", false,-1, 3,0);
    tracep->declBus(c+606,"fcr", false,-1, 1,0);
    tracep->declBus(c+607,"mcr", false,-1, 4,0);
    tracep->declBus(c+608,"lcr", false,-1, 7,0);
    tracep->declBus(c+609,"msr", false,-1, 7,0);
    tracep->declBus(c+610,"dl", false,-1, 15,0);
    tracep->declBus(c+611,"scratch", false,-1, 7,0);
    tracep->declBit(c+612,"start_dlc", false,-1);
    tracep->declBit(c+613,"lsr_mask_d", false,-1);
    tracep->declBit(c+614,"msi_reset", false,-1);
    tracep->declBus(c+615,"dlc", false,-1, 15,0);
    tracep->declBus(c+616,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+617,"rx_reset", false,-1);
    tracep->declBit(c+618,"tx_reset", false,-1);
    tracep->declBit(c+619,"dlab", false,-1);
    tracep->declBit(c+967,"cts_pad_i", false,-1);
    tracep->declBit(c+953,"dsr_pad_i", false,-1);
    tracep->declBit(c+953,"ri_pad_i", false,-1);
    tracep->declBit(c+953,"dcd_pad_i", false,-1);
    tracep->declBit(c+620,"loopback", false,-1);
    tracep->declBit(c+953,"cts", false,-1);
    tracep->declBit(c+967,"dsr", false,-1);
    tracep->declBit(c+967,"ri", false,-1);
    tracep->declBit(c+967,"dcd", false,-1);
    tracep->declBit(c+621,"cts_c", false,-1);
    tracep->declBit(c+622,"dsr_c", false,-1);
    tracep->declBit(c+623,"ri_c", false,-1);
    tracep->declBit(c+624,"dcd_c", false,-1);
    tracep->declBus(c+625,"lsr", false,-1, 7,0);
    tracep->declBit(c+626,"lsr0", false,-1);
    tracep->declBit(c+627,"lsr1", false,-1);
    tracep->declBit(c+628,"lsr2", false,-1);
    tracep->declBit(c+629,"lsr3", false,-1);
    tracep->declBit(c+630,"lsr4", false,-1);
    tracep->declBit(c+631,"lsr5", false,-1);
    tracep->declBit(c+632,"lsr6", false,-1);
    tracep->declBit(c+633,"lsr7", false,-1);
    tracep->declBit(c+634,"lsr0r", false,-1);
    tracep->declBit(c+635,"lsr1r", false,-1);
    tracep->declBit(c+636,"lsr2r", false,-1);
    tracep->declBit(c+637,"lsr3r", false,-1);
    tracep->declBit(c+638,"lsr4r", false,-1);
    tracep->declBit(c+639,"lsr5r", false,-1);
    tracep->declBit(c+640,"lsr6r", false,-1);
    tracep->declBit(c+641,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+642,"rls_int", false,-1);
    tracep->declBit(c+643,"rda_int", false,-1);
    tracep->declBit(c+644,"ti_int", false,-1);
    tracep->declBit(c+645,"thre_int", false,-1);
    tracep->declBit(c+646,"ms_int", false,-1);
    tracep->declBit(c+647,"tf_push", false,-1);
    tracep->declBit(c+648,"rf_pop", false,-1);
    tracep->declBus(c+946,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+649,"rf_error_bit", false,-1);
    tracep->declBit(c+627,"rf_overrun", false,-1);
    tracep->declBit(c+650,"rf_push_pulse", false,-1);
    tracep->declBus(c+651,"rf_count", false,-1, 4,0);
    tracep->declBus(c+652,"tf_count", false,-1, 4,0);
    tracep->declBus(c+653,"tstate", false,-1, 2,0);
    tracep->declBus(c+654,"rstate", false,-1, 3,0);
    tracep->declBus(c+655,"counter_t", false,-1, 9,0);
    tracep->declBit(c+656,"thre_set_en", false,-1);
    tracep->declBus(c+657,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+658,"block_value", false,-1, 7,0);
    tracep->declBit(c+659,"serial_out", false,-1);
    tracep->declBit(c+660,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+661,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+662,"lsr0_d", false,-1);
    tracep->declBit(c+663,"lsr1_d", false,-1);
    tracep->declBit(c+664,"lsr2_d", false,-1);
    tracep->declBit(c+665,"lsr3_d", false,-1);
    tracep->declBit(c+666,"lsr4_d", false,-1);
    tracep->declBit(c+667,"lsr5_d", false,-1);
    tracep->declBit(c+668,"lsr6_d", false,-1);
    tracep->declBit(c+669,"lsr7_d", false,-1);
    tracep->declBit(c+670,"rls_int_d", false,-1);
    tracep->declBit(c+671,"thre_int_d", false,-1);
    tracep->declBit(c+672,"ms_int_d", false,-1);
    tracep->declBit(c+673,"ti_int_d", false,-1);
    tracep->declBit(c+674,"rda_int_d", false,-1);
    tracep->declBit(c+675,"rls_int_rise", false,-1);
    tracep->declBit(c+676,"thre_int_rise", false,-1);
    tracep->declBit(c+677,"ms_int_rise", false,-1);
    tracep->declBit(c+678,"ti_int_rise", false,-1);
    tracep->declBit(c+679,"rda_int_rise", false,-1);
    tracep->declBit(c+680,"rls_int_pnd", false,-1);
    tracep->declBit(c+681,"rda_int_pnd", false,-1);
    tracep->declBit(c+682,"thre_int_pnd", false,-1);
    tracep->declBit(c+683,"ms_int_pnd", false,-1);
    tracep->declBit(c+684,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1002,"Tp", false,-1, 31,0);
    tracep->declBus(c+1002,"width", false,-1, 31,0);
    tracep->declBus(c+972,"init_value", false,-1, 0,0);
    tracep->declBit(c+913,"rst_i", false,-1);
    tracep->declBit(c+912,"clk_i", false,-1);
    tracep->declBit(c+953,"stage1_rst_i", false,-1);
    tracep->declBit(c+967,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+932,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+603,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+685,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+913,"wb_rst_i", false,-1);
    tracep->declBus(c+608,"lcr", false,-1, 7,0);
    tracep->declBit(c+648,"rf_pop", false,-1);
    tracep->declBit(c+660,"srx_pad_i", false,-1);
    tracep->declBit(c+602,"enable", false,-1);
    tracep->declBit(c+617,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+655,"counter_t", false,-1, 9,0);
    tracep->declBus(c+651,"rf_count", false,-1, 4,0);
    tracep->declBus(c+946,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+627,"rf_overrun", false,-1);
    tracep->declBit(c+649,"rf_error_bit", false,-1);
    tracep->declBus(c+654,"rstate", false,-1, 3,0);
    tracep->declBit(c+650,"rf_push_pulse", false,-1);
    tracep->declBus(c+686,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+687,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+688,"rshift", false,-1, 7,0);
    tracep->declBit(c+689,"rparity", false,-1);
    tracep->declBit(c+690,"rparity_error", false,-1);
    tracep->declBit(c+691,"rframing_error", false,-1);
    tracep->declBit(c+692,"rbit_in", false,-1);
    tracep->declBit(c+693,"rparity_xor", false,-1);
    tracep->declBus(c+694,"counter_b", false,-1, 7,0);
    tracep->declBit(c+695,"rf_push_q", false,-1);
    tracep->declBus(c+696,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+697,"rf_push", false,-1);
    tracep->declBit(c+698,"break_error", false,-1);
    tracep->declBit(c+699,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+700,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+701,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+702,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+963,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+991,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+990,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+986,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+988,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+987,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+989,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+985,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+993,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+994,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1003,"sr_push", false,-1, 3,0);
    tracep->declBus(c+703,"toc_value", false,-1, 9,0);
    tracep->declBus(c+704,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1004,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+996,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+980,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1005,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+913,"wb_rst_i", false,-1);
    tracep->declBit(c+650,"push", false,-1);
    tracep->declBit(c+648,"pop", false,-1);
    tracep->declBus(c+696,"data_in", false,-1, 10,0);
    tracep->declBit(c+617,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+946,"data_out", false,-1, 10,0);
    tracep->declBit(c+627,"overrun", false,-1);
    tracep->declBus(c+651,"count", false,-1, 4,0);
    tracep->declBit(c+649,"error_bit", false,-1);
    tracep->declBus(c+947,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+705+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+721,"top", false,-1, 3,0);
    tracep->declBus(c+722,"bottom", false,-1, 3,0);
    tracep->declBus(c+723,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+724,"word0", false,-1, 2,0);
    tracep->declBus(c+725,"word1", false,-1, 2,0);
    tracep->declBus(c+726,"word2", false,-1, 2,0);
    tracep->declBus(c+727,"word3", false,-1, 2,0);
    tracep->declBus(c+728,"word4", false,-1, 2,0);
    tracep->declBus(c+729,"word5", false,-1, 2,0);
    tracep->declBus(c+730,"word6", false,-1, 2,0);
    tracep->declBus(c+731,"word7", false,-1, 2,0);
    tracep->declBus(c+732,"word8", false,-1, 2,0);
    tracep->declBus(c+733,"word9", false,-1, 2,0);
    tracep->declBus(c+734,"word10", false,-1, 2,0);
    tracep->declBus(c+735,"word11", false,-1, 2,0);
    tracep->declBus(c+736,"word12", false,-1, 2,0);
    tracep->declBus(c+737,"word13", false,-1, 2,0);
    tracep->declBus(c+738,"word14", false,-1, 2,0);
    tracep->declBus(c+739,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+980,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1001,"data_width", false,-1, 31,0);
    tracep->declBus(c+996,"depth", false,-1, 31,0);
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+650,"we", false,-1);
    tracep->declBus(c+721,"a", false,-1, 3,0);
    tracep->declBus(c+722,"dpra", false,-1, 3,0);
    tracep->declBus(c+740,"di", false,-1, 7,0);
    tracep->declBus(c+947,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+437+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+913,"wb_rst_i", false,-1);
    tracep->declBus(c+608,"lcr", false,-1, 7,0);
    tracep->declBit(c+647,"tf_push", false,-1);
    tracep->declBus(c+810,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+602,"enable", false,-1);
    tracep->declBit(c+618,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+659,"stx_pad_o", false,-1);
    tracep->declBus(c+653,"tstate", false,-1, 2,0);
    tracep->declBus(c+652,"tf_count", false,-1, 4,0);
    tracep->declBus(c+741,"counter", false,-1, 4,0);
    tracep->declBus(c+742,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+743,"shift_out", false,-1, 6,0);
    tracep->declBit(c+744,"stx_o_tmp", false,-1);
    tracep->declBit(c+745,"parity_xor", false,-1);
    tracep->declBit(c+746,"tf_pop", false,-1);
    tracep->declBit(c+747,"bit_out", false,-1);
    tracep->declBus(c+810,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+948,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+748,"tf_overrun", false,-1);
    tracep->declBus(c+970,"s_idle", false,-1, 2,0);
    tracep->declBus(c+952,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1006,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1007,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+965,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1008,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1001,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+996,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+980,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1005,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+913,"wb_rst_i", false,-1);
    tracep->declBit(c+647,"push", false,-1);
    tracep->declBit(c+746,"pop", false,-1);
    tracep->declBus(c+810,"data_in", false,-1, 7,0);
    tracep->declBit(c+618,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+948,"data_out", false,-1, 7,0);
    tracep->declBit(c+748,"overrun", false,-1);
    tracep->declBus(c+652,"count", false,-1, 4,0);
    tracep->declBus(c+749,"top", false,-1, 3,0);
    tracep->declBus(c+750,"bottom", false,-1, 3,0);
    tracep->declBus(c+751,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+980,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1001,"data_width", false,-1, 31,0);
    tracep->declBus(c+996,"depth", false,-1, 31,0);
    tracep->declBit(c+912,"clk", false,-1);
    tracep->declBit(c+647,"we", false,-1);
    tracep->declBus(c+749,"a", false,-1, 3,0);
    tracep->declBus(c+750,"dpra", false,-1, 3,0);
    tracep->declBus(c+810,"di", false,-1, 7,0);
    tracep->declBus(c+948,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+453+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBit(c+471,"auto_in_psel", false,-1);
    tracep->declBit(c+472,"auto_in_penable", false,-1);
    tracep->declBit(c+761,"auto_in_pwrite", false,-1);
    tracep->declBus(c+765,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+952,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+762,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+954,"auto_in_pready", false,-1);
    tracep->declBit(c+955,"auto_in_pslverr", false,-1);
    tracep->declBus(c+956,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+926,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+927,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+928,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+929,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+930,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+931,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+912,"clock", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+801,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+471,"in_psel", false,-1);
    tracep->declBit(c+472,"in_penable", false,-1);
    tracep->declBus(c+952,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+761,"in_pwrite", false,-1);
    tracep->declBus(c+762,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+763,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+954,"in_pready", false,-1);
    tracep->declBus(c+956,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+955,"in_pslverr", false,-1);
    tracep->declBus(c+926,"vga_r", false,-1, 7,0);
    tracep->declBus(c+927,"vga_g", false,-1, 7,0);
    tracep->declBus(c+928,"vga_b", false,-1, 7,0);
    tracep->declBit(c+929,"vga_hsync", false,-1);
    tracep->declBit(c+930,"vga_vsync", false,-1);
    tracep->declBit(c+931,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+515,"sck", false,-1);
    tracep->declBit(c+752,"ss", false,-1);
    tracep->declBit(c+934,"mosi", false,-1);
    tracep->declBit(c+967,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+515,"sck", false,-1);
    tracep->declBit(c+753,"ss", false,-1);
    tracep->declBit(c+934,"mosi", false,-1);
    tracep->declBit(c+935,"miso", false,-1);
    tracep->declBit(c+753,"reset", false,-1);
    tracep->declBus(c+754,"state", false,-1, 2,0);
    tracep->declBus(c+755,"counter", false,-1, 7,0);
    tracep->declBus(c+756,"cmd", false,-1, 7,0);
    tracep->declBus(c+757,"addr", false,-1, 23,0);
    tracep->declBus(c+758,"data", false,-1, 31,0);
    tracep->declBit(c+759,"ren", false,-1);
    tracep->declBus(c+949,"rdata", false,-1, 31,0);
    tracep->declBus(c+950,"raddr", false,-1, 31,0);
    tracep->declBus(c+951,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+515,"clock", false,-1);
    tracep->declBit(c+759,"valid", false,-1);
    tracep->declBus(c+756,"cmd", false,-1, 7,0);
    tracep->declBus(c+950,"addr", false,-1, 31,0);
    tracep->declBus(c+949,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+936,"sck", false,-1);
    tracep->declBit(c+937,"ce_n", false,-1);
    tracep->declBus(c+811,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+938,"clk", false,-1);
    tracep->declBit(c+517,"cke", false,-1);
    tracep->declBit(c+518,"cs", false,-1);
    tracep->declBit(c+519,"ras", false,-1);
    tracep->declBit(c+520,"cas", false,-1);
    tracep->declBit(c+521,"we", false,-1);
    tracep->declBus(c+522,"a", false,-1, 12,0);
    tracep->declBus(c+523,"ba", false,-1, 1,0);
    tracep->declBus(c+524,"dqm", false,-1, 1,0);
    tracep->declBus(c+525,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+8,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+9,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                              [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U])))),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+33,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+45,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+47,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+49,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+50,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+95,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                            & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                       >> 0x24U)))));
    bufp->fullQData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+100,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+106,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+109,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+111,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+119,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+121,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+126,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+128,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+136,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state));
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_out_bits_imm),32);
    bufp->fullSData(oldp+328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_39)
                                ? 0x80U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_38)
                                            ? 0x100U
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_37)
                                                ? 0x10U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_36)
                                                    ? 8U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_34)
                                                     ? 0x200U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_33)
                                                      ? 0x400U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_32)
                                                       ? 0x800U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_31)
                                                        ? 4U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_30)
                                                         ? 2U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_29)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_27)
                                                           ? 0x10U
                                                           : 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_25)
                                                            ? 8U
                                                            : 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_23)
                                                             ? 4U
                                                             : 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_21)
                                                              ? 0x80U
                                                              : 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_20)
                                                               ? 0x100U
                                                               : 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_19)
                                                                ? 0x200U
                                                                : 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_18)
                                                                 ? 0x400U
                                                                 : 
                                                                ((IData)(vlSelf->__VdfgTmp_h29939e44__0)
                                                                  ? 1U
                                                                  : 
                                                                 ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR)) 
                                                                  << 6U)))))))))))))))))))),13);
    bufp->fullBit(oldp+329,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_14) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_13) 
                                         | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_7) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_6) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_5) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_4) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_2) 
                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_1))))))) 
                                            & (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))))))))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_bits_alu_b_sel));
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IPC),32);
    bufp->fullBit(oldp+332,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_7)
                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1 
                                 >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2)
                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_6)
                                  ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2)
                                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_5)
                                      ? VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_4)
                                          ? VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_2)
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1 
                                                 != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_1)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd1 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___RegisterFile_io_rd2)
                                                  : 
                                                 (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))))))))));
    bufp->fullBit(oldp+333,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+334,((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR)));
    bufp->fullBit(oldp+335,((0x30200073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR)));
    bufp->fullIData(oldp+336,(((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1
                                : 0U)),32);
    bufp->fullIData(oldp+337,((((0x30200073U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR) 
                                | (0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2)),32);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_bits_mem_wr_en));
    bufp->fullIData(oldp+339,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_16)
                                ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_15)
                                         ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_14)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_12)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_11)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_10)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_9)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_8)
                                                       ? 1U
                                                       : 4U))))))))),32);
    bufp->fullBit(oldp+340,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+341,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___wbu_io_alu_out),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu__DOT__op1),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu__DOT__op2),32);
    bufp->fullQData(oldp+346,((0x7fffffffffffffffULL 
                               & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu__DOT__op1)) 
                                  << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__Alu__DOT__op2)))),63);
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)))));
    bufp->fullBit(oldp+349,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))));
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR),32);
    bufp->fullBit(oldp+351,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    bufp->fullBit(oldp+352,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_12) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_11) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_10) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_9) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_8) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN) 
                                               | (0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR)))))))))));
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___Contorller_io_rf_wr_sel),3);
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___Contorller_io_is_csr));
    bufp->fullBit(oldp+355,((0x100073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR)));
    bufp->fullBit(oldp+356,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+357,((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+358,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+359,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+360,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+361,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__IR))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT____Vcellinp__RegisterFile__io_wr_en));
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_1),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_2),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_3),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_4),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_5),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_6),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_7),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_8),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_9),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_10),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_11),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_12),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_13),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_14),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_15),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_16),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_17),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_18),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_19),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_20),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_21),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_22),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_23),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_24),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_25),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_26),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_27),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_28),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_29),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_30),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__FileReg_31),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3),32);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__csr_sel),2);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__wd),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc__DOT__pc),32);
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__ifu_selected));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__arvalid));
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullBit(oldp+405,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__state))));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__load_finish));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__store_finish));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_isu_axi_in_ready));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__valid));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__arvalid));
    bufp->fullCData(oldp+411,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_16)
                                ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_15)
                                         ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_14)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_12)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_11)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_10)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_9)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_8)
                                                       ? 1U
                                                       : 4U))))))))),3);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__awvalid));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__wvalid));
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__isu__DOT__state),3);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state),2);
    bufp->fullIData(oldp+416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__ifu_selected)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_16)
                                         ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_15)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_14)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_12)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_11)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_10)
                                                      ? 4U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_9)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__Contorller__DOT___GEN_8)
                                                        ? 1U
                                                        : 4U)))))))))),32);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__state),3);
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+428,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+469,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+470,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+471,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+478,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+479,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+480,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+481,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+482,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+485,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+489,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+490,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+501,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+502,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+509,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+520,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+521,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+525,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+527,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+532,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+533,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+537,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+542,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+546,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+548,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+579,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+580,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+581,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+582,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+583,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+584,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+585,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+589,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+591,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+592,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+594,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+598,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+599,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+601,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+621,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+622,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+623,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+624,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+625,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+628,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+629,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+649,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+656,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+675,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+676,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+677,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+678,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+679,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+698,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+699,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+700,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+701,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+702,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+704,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+723,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+740,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+751,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+752,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+759,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+765,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+766,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+770,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+781,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+782,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+788,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+789,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+790,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+791,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+792,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+793,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+798,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+799,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+800,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+801,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+802,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+805,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+808,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+811,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+818,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_isu_axi_out_bits_bresp),2);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid));
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rdata),32);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rresp),2);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+866,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+867,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+868,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+869,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+870,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+871,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+872,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+873,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+874,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+875,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+876,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+877,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+878,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+879,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+880,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+881,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+882,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+883,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+884,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+885,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+886,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+887,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+893,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+894,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+895,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+896,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+897,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_ifu_axi_out_bits_rvalid) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+912,(vlSelf->clock));
    bufp->fullBit(oldp+913,(vlSelf->reset));
    bufp->fullSData(oldp+914,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+915,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+916,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+917,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+918,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+919,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+920,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+921,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+922,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+923,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+924,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+925,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+926,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+927,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+928,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+929,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+930,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+931,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+932,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+933,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+935,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+938,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+939,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+943,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+946,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+949,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+950,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+951,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+952,(1U),3);
    bufp->fullBit(oldp+953,(0U));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+963,(0U),4);
    bufp->fullCData(oldp+964,(1U),8);
    bufp->fullCData(oldp+965,(4U),3);
    bufp->fullCData(oldp+966,(0U),2);
    bufp->fullBit(oldp+967,(1U));
    bufp->fullIData(oldp+968,(0U),32);
    bufp->fullCData(oldp+969,(0U),8);
    bufp->fullCData(oldp+970,(0U),3);
    bufp->fullBit(oldp+971,(0U));
    bufp->fullBit(oldp+972,(1U));
    bufp->fullCData(oldp+973,(0x1bU),8);
    bufp->fullCData(oldp+974,(0xebU),8);
    bufp->fullCData(oldp+975,(0x38U),8);
    bufp->fullIData(oldp+976,(0x64U),32);
    bufp->fullIData(oldp+977,(0x18U),32);
    bufp->fullIData(oldp+978,(9U),32);
    bufp->fullIData(oldp+979,(2U),32);
    bufp->fullIData(oldp+980,(4U),32);
    bufp->fullIData(oldp+981,(0xdU),32);
    bufp->fullIData(oldp+982,(0x2000U),32);
    bufp->fullIData(oldp+983,(0x2710U),32);
    bufp->fullIData(oldp+984,(0x30cU),32);
    bufp->fullCData(oldp+985,(7U),4);
    bufp->fullCData(oldp+986,(3U),4);
    bufp->fullCData(oldp+987,(5U),4);
    bufp->fullCData(oldp+988,(4U),4);
    bufp->fullCData(oldp+989,(6U),4);
    bufp->fullCData(oldp+990,(2U),4);
    bufp->fullCData(oldp+991,(1U),4);
    bufp->fullSData(oldp+992,(0x21U),13);
    bufp->fullCData(oldp+993,(8U),4);
    bufp->fullCData(oldp+994,(9U),4);
    bufp->fullIData(oldp+995,(0xaU),32);
    bufp->fullIData(oldp+996,(0x10U),32);
    bufp->fullIData(oldp+997,(6U),32);
    bufp->fullIData(oldp+998,(0x11U),32);
    bufp->fullIData(oldp+999,(0x30000000U),32);
    bufp->fullIData(oldp+1000,(0x3fffffffU),32);
    bufp->fullIData(oldp+1001,(8U),32);
    bufp->fullIData(oldp+1002,(1U),32);
    bufp->fullCData(oldp+1003,(0xaU),4);
    bufp->fullIData(oldp+1004,(0xbU),32);
    bufp->fullIData(oldp+1005,(5U),32);
    bufp->fullCData(oldp+1006,(2U),3);
    bufp->fullCData(oldp+1007,(3U),3);
    bufp->fullCData(oldp+1008,(5U),3);
}
