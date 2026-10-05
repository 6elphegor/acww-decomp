#ifndef GAME_TOUCHPICKSPHERE_H
#define GAME_TOUCHPICKSPHERE_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "game/HitSphere.h"

// Pickable sphere of the TouchPicker (linked through next). Methods defined in src/main/unk_020b60b0.cpp.
// Several owners hold it as raw storage (u32[7]) because the original builds the member with explicit C1/D1 calls.

struct TouchPickSphere : HitSphere {
    TouchPickSphere();
    ~TouchPickSphere();
    BOOL setupCurved(VecFx32 *a, VecFx32 *b, s32 c, u8 d);
    BOOL setup(VecFx32 *a, VecFx32 *b, s32 c, u8 d);
    /* 0x10 */ u8 index;
    /* 0x14 */ s32 kind;
    /* 0x18 */ TouchPickSphere *next;
};

#endif
