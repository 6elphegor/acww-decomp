#ifndef GAME_BOXCOLLIDER_H
#define GAME_BOXCOLLIDER_H

#include "types.h"
#include "gfx/VecFx32.h"

class CollisionEdge;
class Actor;

// 0x9c-byte box collider registered with BoxCollider_Register (main; main's own spelling of the class is BoxColliderX in
// unk_0202fa70.cpp: D1 0x02031bd8, onEdgeContact 0x02031b8c). This is the ov004 view: FtrCollider
// (unk_ov004_02204f24.cpp) overrides onEdgeContact with the three-argument signature.
struct BoxCollider {
    virtual void onEdgeContact(CollisionEdge *a, Actor *b, s32 c);
    // the members of BoxColliderX (offsets on the DS)
    /* 0x04 */ VecFx32 boxPos;
    /* 0x10 */ VecFx32 size;
    /* 0x1c */ VecFx32 scale;
    /* 0x28 */ s16 angle;
    /* 0x2a */ s16 numCorners;
    /* 0x2c */ BoxCollider *next;
    /* 0x30 */ VecFx32 worldCorners[4];
    /* 0x60 */ s32 edgeNormals[4][2];  // CollisionVec2s (x, z)
    /* 0x80 */ VecFx32 boundsCenter;
    /* 0x8c */ VecFx32 boundsHalfSize;
    /* 0x98 */ u8 isActive;

    BoxCollider();
    ~BoxCollider();
};

#endif
