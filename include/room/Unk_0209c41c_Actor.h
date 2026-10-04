#ifndef ROOM_UNK_0209C41C_ACTOR_H
#define ROOM_UNK_0209C41C_ACTOR_H

#include "types.h"
#include "game/NibblePair.h"

// Room entry / room object sync helpers: scene exit result (src/main/unk_0209c08c.cpp, unk_0209c390.cpp,
// unk_0209c3e0.cpp, unk_0209c4a8.cpp); the synced room objects are RoomObjActor (room/RoomObjActor.h).

struct SceneExitResult {
    /* 0x00 */ u8 scene, fadeIn, fadeOut, d;
    /* 0x04 */ u16 e;
    /* 0x06 */ s16 f;
};


#endif // ROOM_UNK_0209C41C_ACTOR_H
