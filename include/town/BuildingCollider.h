#ifndef TOWN_BUILDINGCOLLIDER_H
#define TOWN_BUILDINGCOLLIDER_H

// ov009 trigger triangle of a building's ground collision (vtable 0x0225e280, 0x54 bytes; one per triangle, built in
// place by BuildingActor::createColliders). Defined in src/ov009/unk_ov009_0225b880.cpp.
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/TriangleTrigger.h"

class BuildingActor;
class Actor;

class BuildingCollider : public TriangleTrigger {
public:
    BuildingCollider();
    virtual void onActorNear(VecFx32 *a, Actor *o, s32 off);
    BOOL isPlayerAtDoor(VecFx32 *v, s32 off, Actor *o);
    static void *operator new(unsigned long, void *p) { return p; }

    /* 0x4c */ BuildingActor *building;
    /* 0x50 */ s32 entranceType;
};

#endif
