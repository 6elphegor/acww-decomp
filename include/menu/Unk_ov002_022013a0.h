#ifndef MENU_UNK_OV002_022013A0_H
#define MENU_UNK_OV002_022013A0_H

#include "types.h"

// Pad key-repeat sub-object at +0x50 of MenuProc, as seen from ov090/ov092/ov097 (the real class is ov002's
// KeyRepeat / KeyRepeatView, src/ov002/unk_ov002_02200840.cpp; this view is not yet unified with it).
class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();

    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();

    /* 0x00 */ u8 unk_00[0x14];
};

#endif
