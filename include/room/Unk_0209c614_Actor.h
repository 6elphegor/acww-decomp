#ifndef ROOM_UNK_0209C614_ACTOR_H
#define ROOM_UNK_0209C614_ACTOR_H

#include "types.h"

// s32 vector of the room-entry code (src/main/unk_0209c4a8.cpp, src/main/unk_0209c08c.cpp). Unk_0209c614_Vec is the
// same vector as Unk_0209c82c_V (0209c4a8 used a typedef, 0209c08c a struct of the same layout). The player actor
// (PlayerActor_GetActor) is Actor (actor/Actor.h).

struct Unk_0209c82c_V {
    /* 0x0 */ s32 x, y, z;
};
typedef Unk_0209c82c_V Unk_0209c614_Vec;


#endif
