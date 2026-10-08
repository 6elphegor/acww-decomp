#ifndef ROOM_FTRCOLLIDER_H
#define ROOM_FTRCOLLIDER_H

#include "types.h"
#include "game/BoxCollider.h"

// 0xa0-byte furniture box collider (BoxCollider plus the owning furniture object). Defined in ov004,
// unk_ov004_02204f24.cpp (0x02206570..0x022069ec; D1 0x022069b4, C1 0x022069cc).
class FtrActor;

struct FtrCollider : BoxCollider {
    /* 0x9c */ FtrActor *owner;
    FtrCollider();
    ~FtrCollider();
    void onEdgeContact(CollisionEdge *a, Actor *b, s32 c);    // 0x02206744
    void slideOwnerForWideFtr(Actor *b);                       // 0x02206570
    void clearOwner();                                                          // 0x022069a4
    void setOwner(FtrActor *p);                                                   // 0x022069ac
};

#endif
