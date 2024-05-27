// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu__DOT__regs__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__exu__DOT__regs__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__exu__DOT__regs__DOT__rf__v0;
    __Vdlyvval__top__DOT__exu__DOT__regs__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__exu__DOT__regs__DOT__rf__v0;
    __Vdlyvset__top__DOT__exu__DOT__regs__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__exu__DOT__regs__DOT__rf__v0 = 0U;
    if (vlSelf->wen) {
        __Vdlyvval__top__DOT__exu__DOT__regs__DOT__rf__v0 
            = (vlSelf->top__DOT__exu__DOT__rdata + 
               (((- (IData)((vlSelf->top__DOT__ifu__DOT__inst 
                             >> 0x1fU))) << 0xcU) | 
                (vlSelf->top__DOT__ifu__DOT__inst >> 0x14U)));
        __Vdlyvset__top__DOT__exu__DOT__regs__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__exu__DOT__regs__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                        >> 7U));
    }
    if (__Vdlyvset__top__DOT__exu__DOT__regs__DOT__rf__v0) {
        vlSelf->top__DOT__exu__DOT__regs__DOT__rf[__Vdlyvdim0__top__DOT__exu__DOT__regs__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__exu__DOT__regs__DOT__rf__v0;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__ifu__DOT__pmem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__ifu__DOT__pmem_read__0__Vfuncout;
    __Vfunc_top__DOT__ifu__DOT__pmem_read__0__Vfuncout = 0;
    // Body
    VL_WRITEF("Calling pmem_read with pc = %x\n",32,
              vlSelf->top__DOT__PC__DOT__ipc);
    Vtop___024root____Vdpiimwrap_top__DOT__ifu__DOT__pmem_read_TOP(vlSelf->top__DOT__PC__DOT__ipc, __Vfunc_top__DOT__ifu__DOT__pmem_read__0__Vfuncout);
    vlSelf->top__DOT__ifu__DOT__inst = __Vfunc_top__DOT__ifu__DOT__pmem_read__0__Vfuncout;
    VL_WRITEF("Returned instruction = %x\n",32,vlSelf->top__DOT__ifu__DOT__inst);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__rdata = vlSelf->top__DOT__exu__DOT__regs__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__ifu__DOT__inst 
                   >> 0xfU))];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__PC__DOT__ipc = ((IData)(vlSelf->reset)
                                       ? 0x80000000U
                                       : vlSelf->top__DOT__PC__DOT__snpc);
    vlSelf->top__DOT__PC__DOT__snpc = ((IData)(4U) 
                                       + vlSelf->top__DOT__PC__DOT__ipc);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 113, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/ysyx-workbench/npc/vsrc/top.v", 113, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
}
#endif  // VL_DEBUG
