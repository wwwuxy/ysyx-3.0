// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode24t.h for the primary calling header

#include "verilated.h"

#include "Vdecode24t__Syms.h"
#include "Vdecode24t__Syms.h"
#include "Vdecode24t___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode24t___024root___dump_triggers__stl(Vdecode24t___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecode24t___024root___eval_triggers__stl(Vdecode24t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode24t___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode24t___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
