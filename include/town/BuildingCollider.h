#ifndef TOWN_BUILDINGCOLLIDER_H
#define TOWN_BUILDINGCOLLIDER_H

// ov009 trigger triangle of a building's ground collision (vtable 0x0225e280, 0x54 bytes; one per triangle, built in
// place by BuildingActor::createColliders). Defined in src/ov009/unk_ov009_0225b880.cpp.
#include "types.h"
#include "game/TriangleTrigger.h"

class BuildingActor;
struct Unk_ov009_0225b880_Vec3;
struct Unk_ov009_0225cc24_Obj;

class BuildingCollider : public TriangleTrigger {
public:
    BuildingCollider();
    virtual void onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    BOOL isPlayerAtDoor(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o);
    static void *operator new(unsigned long, void *p) { return p; }

    /* 0x4c */ BuildingActor *building;
    /* 0x50 */ s32 entranceType;
};

#endif
