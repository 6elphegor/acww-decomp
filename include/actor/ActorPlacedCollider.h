#ifndef ACTOR_ACTORPLACEDCOLLIDER_H
#define ACTOR_ACTORPLACEDCOLLIDER_H

#include "types.h"
#include "game/Vec3.h"
#include "actor/ActorFollowCollider.h"

// ActorFollowCollider with its own position (0x50 bytes; PlayerActor::bodyCollider/subCollider). Defined in
// src/main/unk_02088b98.cpp, which keeps its declaration-only twin chain for the vtable order.
class ActorPlacedCollider : public ActorFollowCollider {
public:
    ActorPlacedCollider();
    ~ActorPlacedCollider();
    virtual Vec3 *getPos();
    virtual u32 getOwnerId();
    void setupForActorAt(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x44 */ Vec3 position;
};

#endif
