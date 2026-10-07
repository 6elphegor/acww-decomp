#ifndef GFX_SPLVIEWS_H
#define GFX_SPLVIEWS_H

#include "types.h"

// Partial views of the SPL-style particle manager shared by the particle drawing units of autoload_2
// (unk_020f92d4, 020fa0f4, 020fa39c, 020fa488). No defining TU (data views).
struct TexEnt;
struct Em;
struct EmI;

// 4x3 fixed-point matrix (s32[12])
struct Mt {
    /* 0x00 */ s32 m[12];
};

struct Mc {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealManager)
    u8 p0[0x40];  // DS +0x0 [0x20]
    TexEnt * tex;  // DS +0x20
    u8 p24[0x10];  // DS +0x24 [0x10]
    Em * cur;  // DS +0x34
#else
    /* 0x00 */ u8 p0[0x20];
    /* 0x20 */ TexEnt *tex;
    /* 0x24 */ u8 p24[0x10];
    /* 0x34 */ Em *cur;
#endif
};

struct Mg2 {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealManager)
    u8 p0[0x54];  // DS +0x0 [0x30]
    u32 w48;  // DS +0x30
    EmI * cur;  // DS +0x34
    Mt * mt;  // DS +0x38
#else
    /* 0x00 */ u8 p0[0x30];
    /* 0x30 */ u32 w48;
    /* 0x34 */ EmI *cur;
    /* 0x38 */ Mt *mt;
#endif
};

struct ItemU {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealField)
    void * fn;  // DS +0x0
    void * p4;  // DS +0x4
#else
    /* 0x0 */ void *fn;
    /* 0x4 */ void *p4;
#endif
};

struct MU {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealManager)
    u8 p0[0x28];  // DS +0x0 [0x14]
    void * freelist;  // DS +0x14
    u8 p18[0x20];  // DS +0x18 [0x14]
    u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 pad : 8;
#else
    /* 0x00 */ u8 p0[20];
    /* 0x14 */ void *freelist;
    /* 0x18 */ u8 p18[0x14];
    /* 0x2c */ u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 pad : 8;
#endif
};

#endif
