#ifndef ACTOR_ACTORFOLLOWCOLLIDER_H
#define ACTOR_ACTORFOLLOWCOLLIDER_H

// ActorCollider that follows its owner actor (position at owner+0x5c, id at owner+4; 0x44 bytes). Defined in
// src/main/unk_02088b98.cpp, which keeps a declaration-only twin for the vtable order.
#include "types.h"
#include "game/Vec3.h"
#include "actor/ActorCollider.h"

class ActorFollowCollider : public ActorCollider {
public:
    ActorFollowCollider();
    ~ActorFollowCollider();
    virtual Vec3 *getPos();
    virtual u32 getOwnerId();
    void setupForActor(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);

    /* 0x40 */ u8 *ownerActor;
};

#endif
