#ifndef GAME_COLLISIONCIRCLE_H
#define GAME_COLLISIONCIRCLE_H

// x/z circle of the collision code (base of CollisionCylinder). Defined in src/main/unk_0202fa70.cpp.
#include "types.h"
#include "game/Unk_0202f2ac_V3.h"

class CollisionCircle {
public:
    /* 0x0 */ Unk_0202f660_V3 center;
    /* 0xc */ s32 circleRadius;

    BOOL containsXZ(Unk_0202f660_V3 *pt);
    void setCircle(Unk_0202f660_V3 *pos, s32 radius);
    ~CollisionCircle();
    CollisionCircle(Unk_0202f660_V3 *pos, s32 radius);
    CollisionCircle();
};

#endif
