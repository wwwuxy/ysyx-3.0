// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode24t.h for the primary calling header

#ifndef VERILATED_VDECODE24T___024ROOT_H_
#define VERILATED_VDECODE24T___024ROOT_H_  // guard

#include "verilated.h"


class Vdecode24t__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecode24t___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,1,0);
    VL_OUT8(y,3,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ decode24t__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecode24t__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecode24t___024root(Vdecode24t__Syms* symsp, const char* v__name);
    ~Vdecode24t___024root();
    VL_UNCOPYABLE(Vdecode24t___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
