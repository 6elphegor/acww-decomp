#ifndef GAME_BOXCOLLIDER_H
#define GAME_BOXCOLLIDER_H

#include "types.h"

struct CollisionEdge;
class Actor;

// 0x9c-byte box collider registered with BoxCollider_Register (main; main's own spelling of the class is BoxColliderX in
// unk_0202fa70.cpp: D1 0x02031bd8, onEdgeContact 0x02031b8c). This is the ov004 view: FtrCollider
// (unk_ov004_02204f24.cpp) overrides onEdgeContact with the three-argument signature.
struct BoxCollider {
    virtual void onEdgeContact(CollisionEdge *a, Actor *b, s32 c);
    /* 0x04 */ u8 pad_04[0x94];
    /* 0x98 */ u8 isActive;

    BoxCollider();
    ~BoxCollider();
};

#endif
