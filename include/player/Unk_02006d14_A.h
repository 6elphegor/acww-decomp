#ifndef PLAYER_UNK_02006D14_A_H
#define PLAYER_UNK_02006D14_A_H

#include "types.h"
#include "player/Unk_02006d14_V3.h"
#include "player/Unk_02006d14_Blk.h"

// The two polymorphic bases of the PlayerActor view Unk_02006d14 used by the unk_0200abc8 section of
// src/main/unk_02004558.cpp / unk_02004558_extra.cpp. Unk_02006d14_B sits at +0xec of the actor; its member names
// carry the actor offsets (relative offset = name - 0xec).
struct Unk_0203d820_Ptr;

struct Unk_02006d14_A {
    virtual void vfunc_00();
    /* 0x04 */ u8 pad_04[0xc4 - 4];
    /* 0xc4 */ Unk_02006d14_V3 unk_c4;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u8 pad_d2[0xec - 0xd2];
};

struct Unk_02006d14_B {
    virtual void vfunc_00();
    /* 0x004 */ u8 pad_f0[0x10a - 0xf0];
    /* 0x01e */ u8 msgIndex;
    /* 0x01f */ u8 pad_10b[0x128 - 0x10b];
    /* 0x03c */ Unk_0203d820_Ptr* unk_128;
    /* 0x040 */ u8 pad_12c[0x294 - 0x12c];
    /* 0x1a8 */ Unk_02006d14_Blk bodyBaseMtx;
    /* 0x1d8 */ u8 pad_2c4[0x2cc - 0x2c4];
    /* 0x1e0 */ u8 bodyAnimCtrl[8];
    /* 0x1e8 */ u32 bodyAnimFrame;
    /* 0x1ec */ u8 pad_2d8[0x694 - 0x2d8];
    /* 0x5a8 */ Unk_02006d14_Blk unk_694;
    /* 0x5d8 */ u8 pad_6c4[0x700 - 0x6c4];
};

#endif
