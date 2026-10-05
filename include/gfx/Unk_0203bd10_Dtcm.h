#ifndef GFX_UNK_0203BD10_DTCM_H
#define GFX_UNK_0203BD10_DTCM_H

// DTCM block data_027e02c8 (G3D state, also seen as Unk_02037ea0_G): Camera::onDraw writes the look-at eye, up and
// target vectors to 0x40..0x63 before G3i_LookAt_. Used by unk_0203a0cc.cpp and unk_0203c23c.cpp.
#include "types.h"

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

#endif // GFX_UNK_0203BD10_DTCM_H
