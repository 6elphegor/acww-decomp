#ifndef SND_UNK_02003C30_H
#define SND_UNK_02003C30_H

#include "types.h"

// Sound handle interface whose non-virtual wrappers call its vtable slots.
// Wrappers defined in src/main/unk_020039ec.cpp.

struct Unk_02003c30 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    void callRelease();
    void callReset();
    void func_02003dcc();
    void func_02003e40();
    void func_02003e50();
    void func_02003ecc();
};

#endif
