// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODE24T__SYMS_H_
#define VERILATED_VDECODE24T__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecode24t.h"

// INCLUDE MODULE CLASSES
#include "Vdecode24t___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdecode24t__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecode24t* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecode24t___024root           TOP;

    // CONSTRUCTORS
    Vdecode24t__Syms(VerilatedContext* contextp, const char* namep, Vdecode24t* modelp);
    ~Vdecode24t__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
