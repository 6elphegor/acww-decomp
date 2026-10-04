#ifndef GFX_UNK_0208D154_SUB_H
#define GFX_UNK_0208D154_SUB_H

#include "types.h"

// Polymorphic sub-object with an x offset at 0x30; methods not defined in the decomp yet
// (used by src/main/unk_0208d154.cpp, unk_0208d33c.cpp).

class Unk_0208d154_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();

    /* 0x04 */ u8 unk_04[0x2c];
    /* 0x30 */ s32 xOffset;
};

#endif // GFX_UNK_0208D154_SUB_H
