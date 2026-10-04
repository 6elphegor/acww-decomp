#ifndef PLAYER_UNK_0200FF08_OBJ_H
#define PLAYER_UNK_0200FF08_OBJ_H

// Polymorphic object called through vtable slot 0x54 (vfunc_54) and a vector, from the unk_0200f9bc section of
// unk_02004558.cpp / unk_02004558_extra.cpp. Declarations only; the vtable is emitted elsewhere.
#include "types.h"

struct Unk_0200ff08_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual BOOL vfunc_54(void *p);
};

#endif // PLAYER_UNK_0200FF08_OBJ_H
