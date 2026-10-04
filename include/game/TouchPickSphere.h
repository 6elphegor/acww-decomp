#ifndef GAME_TOUCHPICKSPHERE_H
#define GAME_TOUCHPICKSPHERE_H

#include "types.h"
#include "game/HitSphere.h"

// Pickable sphere of the TouchPicker (linked through next). Methods defined in src/main/unk_020b60b0.cpp.
// Several owners keep it as raw storage (u8[0x1c]) because the original builds the member with C1/C2 explicitly.
struct Vec3;

struct TouchPickSphere : HitSphere {
    TouchPickSphere();
    ~TouchPickSphere();
    BOOL setupCurved(Vec3 *a, Vec3 *b, s32 c, u8 d);
    BOOL setup(Vec3 *a, Vec3 *b, s32 c, u8 d);
    /* 0x10 */ u8 index;
    /* 0x14 */ s32 kind;
    /* 0x18 */ TouchPickSphere *next;
};

#endif
