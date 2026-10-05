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
    /* 0x00 */ u8 p0[0x20];
    /* 0x20 */ TexEnt *tex;
    /* 0x24 */ u8 p24[0x10];
    /* 0x34 */ Em *cur;
};

struct Mg2 {
    /* 0x00 */ u8 p0[0x30];
    /* 0x30 */ u32 w48;
    /* 0x34 */ EmI *cur;
    /* 0x38 */ Mt *mt;
};

struct ItemU {
    /* 0x0 */ void *fn;
    /* 0x4 */ void *p4;
};

struct MU {
    /* 0x00 */ u8 p0[20];
    /* 0x14 */ void *freelist;
    /* 0x18 */ u8 p18[0x14];
    /* 0x2c */ u32 b0 : 6;
    u32 b6 : 6;
    u32 b12 : 6;
    u32 b18 : 6;
    u32 pad : 8;
};

#endif
