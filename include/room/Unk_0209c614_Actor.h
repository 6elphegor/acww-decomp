#ifndef ROOM_UNK_0209C614_ACTOR_H
#define ROOM_UNK_0209C614_ACTOR_H

#include "types.h"

// Player actor view used by the room-entry code (PlayerActor_GetActor: position at 0x5c, rotY at 0x8e) and its s32
// vector (src/main/unk_0209c4a8.cpp, src/main/unk_0209c08c.cpp). Unk_0209c614_Vec is the same vector as
// Unk_0209c82c_V (0209c4a8 used a typedef, 0209c08c a struct of the same layout).

struct Unk_0209c82c_V {
    /* 0x0 */ s32 x, y, z;
};
typedef Unk_0209c82c_V Unk_0209c614_Vec;

struct Unk_0209c614_Actor {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ Unk_0209c614_Vec position;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
};

#endif
