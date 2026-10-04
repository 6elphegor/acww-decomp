#ifndef ACTOR_UNK_02088D00_H
#define ACTOR_UNK_02088D00_H

#include "types.h"

// 0x48-byte actor follow-collider member (at 0x4cc of the NPC actors). Constructor 0x02088d00 (= ActorFollowCollider
// C1, main module); this is the view under the old constructor name used by the ov004 room NPCs and the SpNPC overlays.

struct Unk_02088d00 {
    Unk_02088d00();
    ~Unk_02088d00();

    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u32 groups;
    /* 0x20 */ u8 pad_20[0x3c - 0x20];
    /* 0x3c */ u8 isHit;
    /* 0x3d */ u8 pad_3d[3];
    /* 0x40 */ u32 pad_40;
    /* 0x44 */ u8 collisionEnabled;
    /* 0x45 */ u8 shadowEnabled;
    /* 0x46 */ u8 pad_46[2];
};

#endif // ACTOR_UNK_02088D00_H
