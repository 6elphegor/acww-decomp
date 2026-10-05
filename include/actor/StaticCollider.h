#ifndef ACTOR_STATICCOLLIDER_H
#define ACTOR_STATICCOLLIDER_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "actor/ActorCollider.h"

// Collider at a fixed position (0x4c bytes). Defined in src/main/unk_02088b98.cpp, which keeps its own declaration
// on the declaration-only twin base ActorColliderView (vtable order).
class StaticCollider : public ActorCollider {
public:
    StaticCollider();
    ~StaticCollider();
    virtual VecFx32 *getPos();
    virtual u32 getOwnerId();
    void setupAtPos(VecFx32 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);

    /* 0x40 */ VecFx32 position;
};

#endif
