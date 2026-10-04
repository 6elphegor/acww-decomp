#ifndef GAME_COLLISIONSEGMENT_H
#define GAME_COLLISIONSEGMENT_H

// Collision line segment (start, end, unit direction; 0x24 bytes, no vtable). Members defined in
// src/main/unk_0202e9d4.cpp; HitSphere::intersectSegment (src/main/unk_0202e840.cpp) takes one.
#include "types.h"
#include "game/Unk_0202f2ac_V3.h"

class CollisionSegment {
public:
    /* 0x00 */ Unk_0202f660_V3 start;
    /* 0x0c */ Unk_0202f660_V3 end;
    /* 0x18 */ Unk_0202f660_V3 dir;

    BOOL isBetweenEnds(Unk_0202f660_V3 *pt);
    void projectPoint(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt);
    s32 closestPoint(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt);
    void set(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
    s32 distanceTo(Unk_0202f660_V3 *pt);
    s32 calcDir(Unk_0202f660_V3 *out);
    ~CollisionSegment();
    CollisionSegment(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
};

#endif // GAME_COLLISIONSEGMENT_H
