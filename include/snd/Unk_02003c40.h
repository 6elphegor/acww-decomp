#ifndef SND_UNK_02003C40_H
#define SND_UNK_02003C40_H

#include "types.h"

// Sound emitter interface whose non-virtual wrappers call its vtable slots (request / update / positioned update).
// Wrappers defined in src/main/unk_020039ec.cpp.

struct Unk_02003a6c_Vec;

struct Unk_02003c40 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08(void *a);
    virtual void vfunc_0c(void *a);
    virtual void vfunc_10(void *a);
    void callRequest(void *a);
    void callRequestSustained(void *a);
    void callUpdate(void *a);
    void callUpdateRelative(Unk_02003a6c_Vec *v);
    void func_02003df4(Unk_02003a6c_Vec *v);
    void func_02003e80(Unk_02003a6c_Vec *v);
};

#endif
