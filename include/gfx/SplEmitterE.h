#ifndef GFX_SPLEMITTERE_H
#define GFX_SPLEMITTERE_H

// SPL emitter as seen by the particle generator / field handlers (src/autoload_2/unk_020fc984.cpp and
// unk_020fe5c0.cpp). Res is the per-file SPL resource view (only a pointer here).
#include "types.h"
#include "gfx/SplPtclTypes.h"
#include "gfx/VecFx32.h"

struct Res;

struct E {
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealEmitter)
    u8 p0[0x10];  // DS +0x0 [0x8]
    PList list;  // DS +0x8
    u8 p10[0x10];  // DS +0x10 [0x8]
    Res * res;  // DS +0x18
    u8 p1c[0x4];  // DS +0x1c [0x4]
    VecFx32 pos;  // DS +0x20
    u8 p2c[0xe];  // DS +0x2c [0xe]
    s16 phase;  // DS +0x3a
    VecFx16 dir;  // DS +0x3c
    u8 p42[0x2];  // DS +0x42 [0x2]
    s32 radius;  // DS +0x44
    s32 len;  // DS +0x48
    s32 w4c;  // DS +0x4c
    s32 w50;  // DS +0x50
    s32 w54;  // DS +0x54
    u16 h58;  // DS +0x58
    u8 p5a[0x2];  // DS +0x5a [0x2]
    s32 w5c;  // DS +0x5c
    u8 p60[0x8];  // DS +0x60 [0x8]
    u8 b68;  // DS +0x68
    u8 b69;  // DS +0x69
    u8 p6a[0x2];  // DS +0x6a [0x2]
    VecFx16 ax1;  // DS +0x6c
    VecFx16 ax2;  // DS +0x72
    u8 hpad_0[0x4];
#else
    u8 p0[8];
    PList list;
    u8 p10[8];
    Res *res;
    u8 p1c[4];
    VecFx32 pos;
    u8 p2c[14];
    s16 phase;
    VecFx16 dir;
    u8 p42[2];
    s32 radius;
    s32 len;
    s32 w4c;
    s32 w50;
    s32 w54;
    u16 h58;
    u8 p5a[2];
    s32 w5c;
    u8 p60[8];
    u8 b68;
    u8 b69;
    u8 p6a[2];
    VecFx16 ax1;
    VecFx16 ax2;
#endif
};

#endif
