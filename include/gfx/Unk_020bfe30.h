#ifndef GFX_UNK_020BFE30_H
#define GFX_UNK_020BFE30_H

#include "types.h"
#include "gfx/Unk_020bfe30_Vec.h"

// Rain-drop sky sprite (end/update/initRainDrop at 0x020bfe30..0x020bfec0, defined in src/main/unk_020b8d9c.cpp;
// also used by src/main/unk_020c00c0.cpp).

class Unk_020bfe30 {
public:
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ s32 animSeq;
    /* 0x10 */ u8 unk_10[0x24];
    /* 0x34 */ Unk_020bfe30_Vec screenPos;
    /* 0x40 */ Unk_020bfe30_Vec screenVel;
    /* 0x4c */ u8 unk_4c[4];
    /* 0x50 */ s32 scaleY;
    /* 0x54 */ s16 angle;
    /* 0x56 */ u8 unk_56[2];
    /* 0x58 */ s32 priority;
    /* 0x5c */ u8 unk_5c[4];
    /* 0x60 */ s32 work0;
    /* 0x64 */ u8 unk_64[4];
    /* 0x68 */ s32 work2;

    void endRainDrop();
    void updateRainDrop();
    void initRainDrop(BOOL flag);
};

#endif
