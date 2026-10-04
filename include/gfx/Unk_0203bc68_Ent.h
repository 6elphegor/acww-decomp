#ifndef GFX_UNK_0203BC68_ENT_H
#define GFX_UNK_0203BC68_ENT_H

// Camera code records (unk_0203a0cc.cpp, unk_0203c23c.cpp): camera pose table entry (sCameraPoseTable) and the
// DTCM camera look block (data_027e02c8).
#include "types.h"

struct Unk_0203bc68_Ent {
    /* 0x00 */ s16 h0;
    /* 0x02 */ s16 h1;
    /* 0x04 */ s32 w0;
    /* 0x08 */ s32 x;
    /* 0x0c */ s32 y;
    /* 0x10 */ s32 z;
}; // size 0x14

struct Unk_0203bd10_Dtcm {
    /* 0x00 */ u32 pad[16];
    /* 0x40 */ u32 a;
    /* 0x44 */ u32 b;
    /* 0x48 */ u32 c;
    /* 0x4c */ u32 d;
    /* 0x50 */ u32 e;
    /* 0x54 */ u32 f;
    /* 0x58 */ u32 g;
    /* 0x5c */ u32 h;
    /* 0x60 */ u32 i;
}; // size 0x64

#endif // GFX_UNK_0203BC68_ENT_H
