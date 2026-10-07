#ifndef GFX_SPLNODE_H
#define GFX_SPLNODE_H

#include "types.h"
#include "gfx/SplEmitterViews.h"

// Partial views of the SPL-style particle list node (Node) and particle record (Nd) shared by the particle drawing
// units of autoload_2 (unk_020f92d4, 020fa0f4, 020fa39c, 020fa488). No defining TU (data views).

struct Node {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealParticle)
    Node * next;  // DS +0x0
    u8 p4[0x2c];  // DS +0x4 [0x28]
    u8 c2c;  // DS +0x2c
    u8 hpad_0[0x3];
#else
    /* 0x00 */ Node *next;
    /* 0x04 */ u8 p4[0x28];
    /* 0x2c */ u8 c2c;
#endif
};

struct Nd {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealParticle)
    u8 p0[0x10];  // DS +0x0 [0x8]
    s32 w8;  // DS +0x8
    s32 w12;  // DS +0xc
    s32 w16;  // DS +0x10
    u8 p14[0xc];  // DS +0x14 [0xc]
    u16 h32;  // DS +0x20
    u8 p22[0xc];  // DS +0x22 [0xc]
    Cbits c46;  // DS +0x2e
    s32 w48;  // DS +0x30
    s16 s52;  // DS +0x34
    u16 h54;  // DS +0x36
    s32 w56;  // DS +0x38
    s32 w60;  // DS +0x3c
    s32 w64;  // DS +0x40
    u8 hpad_0[0x4];
#else
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
#endif
};

#endif
