#ifndef GAME_TOUCHPICKCYLINDER_H
#define GAME_TOUCHPICKCYLINDER_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "game/CollisionCylinder.h"

// Touch-pick target cylinder (0x20 bytes) linked into TouchPicker::cylinders. Defined in src/main/unk_020b60b0.cpp.
struct TouchPickCylinder : CollisionCylinderX {
    TouchPickCylinder();
    ~TouchPickCylinder();
    BOOL setup(VecFx32 *a, VecFx32 *b, VecFx32 *c, s32 d, u8 e);
    /* 0x14 */ s32 kind;
    /* 0x18 */ u8 index;
    /* 0x1c */ TouchPickCylinder *next;
};

#endif
