#ifndef GFX_SPLNODE_H
#define GFX_SPLNODE_H

#include "types.h"
#include "gfx/SplEmitterViews.h"

// Partial views of the SPL-style particle list node (Node) and particle record (Nd) shared by the particle drawing
// units of autoload_2 (unk_020f92d4, 020fa0f4, 020fa39c, 020fa488). No defining TU (data views).

struct Node {
    /* 0x00 */ Node *next;
    /* 0x04 */ u8 p4[0x28];
    /* 0x2c */ u8 c2c;
};

struct Nd {
    /* 0x00 */ u8 p0[8];
    /* 0x08 */ s32 w8;
    /* 0x0c */ s32 w12;
    /* 0x10 */ s32 w16;
    /* 0x14 */ u8 p14[12];
    /* 0x20 */ u16 h32;
    /* 0x22 */ u8 p22[12];
    /* 0x2e */ Cbits c46;
    /* 0x30 */ s32 w48;
    /* 0x34 */ s16 s52;
    /* 0x36 */ u16 h54;
    /* 0x38 */ s32 w56;
    /* 0x3c */ s32 w60;
    /* 0x40 */ s32 w64;
};

#endif
