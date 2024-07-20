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
        bufp->chgSData(oldp+0,(((IData)(vlSelf->top__DOT__Controller__DOT___GEN_39)
                                 ? 0x80U : ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_38)
                                             ? 0x100U
                                             : ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_37)
                                                 ? 0x10U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_36)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_34)
                                                   ? 0x200U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_33)
                                                    ? 0x400U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_32)
                                                     ? 0x800U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_31)
                                                      ? 4U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_30)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_29)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_27)
                                                         ? 0x10U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_25)
                                                          ? 8U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_23)
                                                           ? 4U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_21)
                                                            ? 0x80U
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_20)
                                                             ? 0x100U
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_19)
                                                              ? 0x200U
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_18)
                                                               ? 0x400U
                                                               : 
                                                              ((IData)(vlSelf->__VdfgTmp_h52b2196f__0)
                                                                ? 1U
                                                                : 
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT___Mem_inst)) 
                                                                << 6U)))))))))))))))))))),13);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT___Mem_inst),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT___RegisterFile_io_rd1),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT___Controller_io_rf_wr_en));
        bufp->chgCData(oldp+4,(((IData)(vlSelf->top__DOT___Controller_io_alu_b_sel)
                                 ? 2U : ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h531076fb__0)
                                          ? 1U : ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_13)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_h4202fe99__0)
                                                    ? 4U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT___Mem_inst)) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT___Mem_inst)))))))),3);
        bufp->chgBit(oldp+5,(((IData)(vlSelf->top__DOT__Controller__DOT____VdfgTmp_hb45a1bac__0) 
                              | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_16) 
                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_15) 
                                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_14) 
                                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_13) 
                                          | ((~ ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_7) 
                                                 | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_6) 
                                                    | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_5) 
                                                       | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_4) 
                                                          | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_2) 
                                                             | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_1))))))) 
                                             & (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT___Mem_inst))))))))));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT___Controller_io_alu_b_sel));
        bufp->chgBit(oldp+7,(((IData)(vlSelf->top__DOT__Controller__DOT___GEN_16) 
                              | ((IData)(vlSelf->top__DOT__Controller__DOT___GEN_15) 
                                 | (IData)(vlSelf->top__DOT__Controller__DOT___GEN_14)))));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__Controller__DOT___GEN_13));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT___Controller_io_jump_en));
        bufp->chgBit(oldp+10,((0x67U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgIData(oldp+11,(vlSelf->top__DOT___Controller_io_len),32);
        bufp->chgBit(oldp+12,(vlSelf->top__DOT___Controller_io_load_unsign));
        bufp->chgBit(oldp+13,((0x73U == vlSelf->top__DOT___Mem_inst)));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT___Controller_io_is_csr));
        bufp->chgBit(oldp+15,((0x33U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+16,((0x13U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+17,((0x23U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+18,((0x63U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+19,((3U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+20,((0x17U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+21,((0x37U == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgBit(oldp+22,((0x6fU == (0x7fU & vlSelf->top__DOT___Mem_inst))));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT___Mem_dm_out),32);
        bufp->chgIData(oldp+24,(((IData)(vlSelf->top__DOT__Pc__DOT___GEN)
                                  ? ((IData)(4U) + vlSelf->top__DOT__Pc__DOT__pc)
                                  : ((IData)(vlSelf->top__DOT__Pc__DOT___GEN_0)
                                      ? ((IData)(4U) 
                                         + vlSelf->top__DOT__Pc__DOT__pc)
                                      : vlSelf->top__DOT__Pc__DOT__pc))),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT___InputReg_io_wd),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__Mem__DOT__unnamedblk1__DOT__temp_data),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__Pc__DOT__pc),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_0),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_1),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_2),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_3),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_4),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_5),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_6),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_7),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_8),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_9),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_10),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_11),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_12),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_13),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_14),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_15),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_16),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_17),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_18),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_19),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_20),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_21),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_22),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_23),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_24),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_25),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_26),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_27),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_28),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_29),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_30),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__RegisterFile__DOT__FileReg_31),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__RegisterFile__DOT__CsrReg_0),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__RegisterFile__DOT__CsrReg_1),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__RegisterFile__DOT__CsrReg_2),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__RegisterFile__DOT__CsrReg_3),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__RegisterFile__DOT__t),32);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__RegisterFile__DOT__unnamedblk1__DOT__csr_sel),2);
    }
    bufp->chgBit(oldp+66,(vlSelf->clock));
    bufp->chgBit(oldp+67,(vlSelf->reset));
    bufp->chgIData(oldp+68,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+69,(vlSelf->io_pc),32);
    bufp->chgIData(oldp+70,(vlSelf->io_addr),32);
    bufp->chgIData(oldp+71,(vlSelf->io_data),32);
    bufp->chgIData(oldp+72,(vlSelf->io_nextpc),32);
    bufp->chgIData(oldp+73,(vlSelf->io_alu_out),32);
    bufp->chgIData(oldp+74,(vlSelf->io_alu_op1),32);
    bufp->chgIData(oldp+75,(vlSelf->io_alu_op2),32);
    bufp->chgIData(oldp+76,(vlSelf->io_imm),32);
    bufp->chgQData(oldp+77,((0x7fffffffffffffffULL 
                             & ((QData)((IData)(vlSelf->io_alu_op1)) 
                                << (0x1fU & vlSelf->io_alu_op2)))),63);
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
}
