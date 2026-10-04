#ifndef PLAYER_UNK_0200BC78_OBJ_H
#define PLAYER_UNK_0200BC78_OBJ_H

#include "types.h"

// Talk target views (TalkRequest_GetTalkTarget): the actor's virtual interface (slot 0x50 returns
// its position) and a plain data view. (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02006d14_Vec;

class Unk_0200bc78_Obj {
public:
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
    virtual Unk_02006d14_Vec *vfunc_50();
};

struct Unk_0200bc08_Obj {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u32 unk_04;
    /* 0x8 */ u32 param;
};

#endif
