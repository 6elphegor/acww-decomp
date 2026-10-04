#ifndef GFX_PT_H
#define GFX_PT_H

#include "types.h"
#include "gfx/SplEmitterViews.h"

// SPL particle record as seen by the emitter update / draw units src/autoload_2/unk_020f92d4.cpp, unk_020fa0f4.cpp
// and unk_020fa39c.cpp (singly linked through next). Not the same type as the ov001 Pt (net/Unk_ov001_02225924_Rect.h).
struct Pt {
    /* 0x00 */ Pt *next;
    /* 0x04 */ u8 p4[4];
    /* 0x08 */ s32 w8;
    /* 0x0c */ s32 w12;
    /* 0x10 */ s32 w16;
    /* 0x14 */ s32 w20;
    /* 0x18 */ s32 w24;
    /* 0x1c */ s32 w28;
    /* 0x20 */ u16 h32;
    /* 0x22 */ s16 s34;
    /* 0x24 */ u16 h36;
    /* 0x26 */ u16 h38;
    /* 0x28 */ u16 h40;
    /* 0x2a */ u16 h42;
    /* 0x2c */ u8 p44;
    /* 0x2d */ u8 c45;
    /* 0x2e */ u16 pad46 : 10;
    /* 0x2e */ u16 id46 : 6;
    /* 0x30 */ u8 p48[8];
    /* 0x38 */ A3 v56;
};

#endif
