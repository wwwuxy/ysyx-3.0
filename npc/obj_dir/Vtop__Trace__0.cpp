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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd1),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__idu__DOT___RegisterFile_io_rd2),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__idu__DOT___Contorller_io_imm),32);
        bufp->chgSData(oldp+3,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_39)
                                 ? 0x80U : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_38)
                                             ? 0x100U
                                             : ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_37)
                                                 ? 0x10U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_36)
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
                                                              ((IData)(vlSelf->__VdfgTmp_h32cf3982__0)
                                                                ? 1U
                                                                : 
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT___ifu_io_out_bits_inst)) 
                                                                << 6U)))))))))))))))))))),13);
        bufp->chgBit(oldp+4,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT____VdfgTmp_hb45a1bac__0) 
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
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT___ifu_io_out_bits_inst))))))))));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT___idu_io_out_bits_alu_b_sel));
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__exu__DOT__Alu__DOT__op2),32);
        bufp->chgQData(oldp+8,((0x7fffffffffffffffULL 
                                & ((QData)((IData)(vlSelf->top__DOT__exu__DOT__Alu__DOT__op1)) 
                                   << (0x1fU & vlSelf->top__DOT__exu__DOT__Alu__DOT__op2)))),63);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT___ifu_io_out_bits_inst),32);
        bufp->chgBit(oldp+11,((0x67U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_7)
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
        bufp->chgBit(oldp+13,((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)));
        bufp->chgBit(oldp+14,((0x30200073U == vlSelf->top__DOT___ifu_io_out_bits_inst)));
        bufp->chgIData(oldp+15,(((0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst)
                                  ? vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1
                                  : 0U)),32);
        bufp->chgIData(oldp+16,((((0x30200073U != vlSelf->top__DOT___ifu_io_out_bits_inst) 
                                  | (0x73U == vlSelf->top__DOT___ifu_io_out_bits_inst))
                                  ? 0U : vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2)),32);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_en));
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__idu__DOT___Contorller_io_rf_wr_sel),3);
        bufp->chgBit(oldp+19,(((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_16) 
                               | ((IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_15) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_14)))));
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__idu__DOT__Contorller__DOT___GEN_13));
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__idu__DOT___Contorller_io_len),32);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__idu__DOT___Contorller_io_load_unsign));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__idu__DOT___Contorller_io_is_csr));
        bufp->chgBit(oldp+24,((0x33U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+25,((0x13U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+26,((0x23U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+27,((0x63U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+28,((3U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+29,((0x17U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+30,((0x37U == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgBit(oldp+31,((0x6fU == (0x7fU & vlSelf->top__DOT___ifu_io_out_bits_inst))));
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__idu__DOT___Dmem_dm_out),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__idu__DOT__Dmem__DOT__unnamedblk1__DOT__temp_data),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_1),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_2),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_3),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_4),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_5),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_6),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_7),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_8),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_9),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_10),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_11),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_12),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_13),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_14),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_15),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_16),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_17),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_18),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_19),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_20),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_21),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_22),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_23),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_24),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_25),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_26),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_27),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_28),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_29),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_30),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__FileReg_31),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_0),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_1),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_2),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__CsrReg_3),32);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk2__DOT__csr_sel),2);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__idu__DOT__RegisterFile__DOT__unnamedblk1__DOT__unnamedblk5__DOT__wd),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__pc__DOT__pc),32);
    }
    bufp->chgBit(oldp+72,(vlSelf->clock));
    bufp->chgBit(oldp+73,(vlSelf->reset));
    bufp->chgIData(oldp+74,(vlSelf->io_pc),32);
    bufp->chgIData(oldp+75,(vlSelf->io_alu_rsl),32);
    bufp->chgIData(oldp+76,(vlSelf->io_inst),32);
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
