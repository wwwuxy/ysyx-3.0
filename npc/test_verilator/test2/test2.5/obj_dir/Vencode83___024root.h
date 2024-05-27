// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencode83.h for the primary calling header

#ifndef VERILATED_VENCODE83___024ROOT_H_
#define VERILATED_VENCODE83___024ROOT_H_  // guard

#include "verilated.h"


class Vencode83__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencode83___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,7,0);
    VL_OUT8(led_out,2,0);
    VL_OUT8(a,0,0);
    VL_OUT8(light,6,0);
    CData/*2:0*/ top__DOT__w;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__encrd__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencode83__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencode83___024root(Vencode83__Syms* symsp, const char* v__name);
    ~Vencode83___024root();
    VL_UNCOPYABLE(Vencode83___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
