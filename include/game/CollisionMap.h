#ifndef GAME_COLLISIONMAP_H
#define GAME_COLLISIONMAP_H

#include "types.h"

struct UnitShapeQueryX;

// One map block of the collision map: the block's unit attributes and walk links (16x16 units each).
class CollisionBlockRef {
public:
    CollisionBlockRef()
    {
        attrs = 0;
        walkLinks = 0;
    }
    ~CollisionBlockRef() {}

    u8 *attrs;
    u8 *walkLinks;
};

// One collision map slot (sCollisionWorld.maps, the current one: gCurCollisionMap). Defined in
// src/main/unk_0202fa70.cpp; CollisionMap_GetBlockRef (src/itcm/unk_01ffcb2c.cpp) looks blocks up in it.
class CollisionMap {
public:
    CollisionMap() { reset(); }
    ~CollisionMap() {}
    void reset();

    CollisionBlockRef blocks[6][6];
    UnitShapeQueryX *shapeQuery;
    u32 numBlocksX;
    u32 numBlocksZ;
    s32 lockedExit;
    u8 allBlocksSet;
    u8 pad_131;
    s16 prevWaveLevel;
    s16 waveLevel;
};

extern "C" CollisionMap *gCurCollisionMap;

#endif // GAME_COLLISIONMAP_H
