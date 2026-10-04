#ifndef GAME_HITSPHERE_H
#define GAME_HITSPHERE_H

// Collision sphere (center + radius). Methods at 0x0202e918..0x0202e9c8 (src/main/unk_0202e840.cpp).
#include "types.h"
#include "gfx/VecFx32.h"

class CollisionSegment;

struct HitSphere {
    /* 0x0 */ s32 centerX;
    /* 0x4 */ s32 centerY;
    /* 0x8 */ s32 centerZ;
    /* 0xc */ s32 radius;

    HitSphere();
    ~HitSphere();
    BOOL intersectSegment(VecFx32Ctor *out, CollisionSegment *cap);
    void set(VecFx32Ctor *p, s32 r);
};

#endif
