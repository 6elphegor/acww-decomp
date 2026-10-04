#ifndef GFX_SPLEMITTERE_H
#define GFX_SPLEMITTERE_H

// SPL emitter as seen by the particle generator / field handlers (src/autoload_2/unk_020fc984.cpp and
// unk_020fe5c0.cpp). Res is the per-file SPL resource view (only a pointer here).
#include "types.h"
#include "gfx/SplPtclTypes.h"
#include "gfx/VecFx32.h"

struct Res;

struct E {
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
};

#endif
