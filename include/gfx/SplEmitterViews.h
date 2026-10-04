#ifndef GFX_SPLEMITTERVIEWS_H
#define GFX_SPLEMITTERVIEWS_H

// Small per-file views of the SPL particle library (emitter/particle/resource bitfields and helper vectors) shared by
// the emitter update/draw units src/autoload_2/unk_020f92d4.cpp, unk_020fa0f4.cpp, unk_020fa39c.cpp, unk_020fa488.cpp.
#include "types.h"

struct Blk14 {
    u16 pad0 : 7;
    u16 k7 : 2;
    u16 pad9 : 7;
    u8 p2[13];
    u8 c15;
};

struct Cbits {
    u16 a : 5;
    u16 b : 5;
    u16 id : 6;
};

struct A3 {
    s32 a[3];
};

struct B4 {
    u8 p0[8];
    u16 b0 : 1;
    u16 pad : 15;
};

struct B8 {
    u8 p0[8];
    u16 b0 : 1;
    u16 b1 : 1;
    u16 pad : 14;
};

struct B12 {
    u8 p0[2];
    u16 pad : 8;
    u16 b8 : 1;
    u16 pad2 : 7;
};

struct B10 {
    u8 p0[8];
    u32 pad : 16;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 pad2 : 14;
};

struct B14 {
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 pad : 10;
    u8 p2[11];
    u8 c13;
    u8 c14;
};

#endif
