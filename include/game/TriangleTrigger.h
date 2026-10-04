#ifndef GAME_TRIANGLETRIGGER_H
#define GAME_TRIANGLETRIGGER_H

// Collision triangle that reports actors coming near it (list sTriangleTriggerList; 0x4c bytes). Defined in
// src/main/unk_0202fa70.cpp (TriangleTrigger_CheckAll calls onActorNear); ov009's BuildingCollider derives from it.
#include "types.h"
#include "game/CollisionTriangleX.h"

struct Unk_02031e10_Vec;
struct Unk_ov009_0225b880_Vec3;
class Actor;

struct TriangleTrigger : CollisionTriangleX {
    /* 0x38 */ TriangleTrigger *next;
    /* 0x3c */ s32 center, centerY, centerZ;
    /* 0x48 */ s32 radiusSq;

    TriangleTrigger();
    // slot 0x10; the parameter types are those of the override BuildingCollider::onActorNear (ov009)
    virtual void onActorNear(Unk_ov009_0225b880_Vec3 *a, Actor *o, s32 off) = 0;
    void setupTrigger(Unk_02031e10_Vec *a, Unk_02031e10_Vec *b, Unk_02031e10_Vec *c, s32 d);
    s32 *getCenter();
    void resetTrigger();
};

#endif
