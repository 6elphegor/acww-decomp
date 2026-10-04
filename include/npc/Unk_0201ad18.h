#ifndef NPC_UNK_0201AD18_H
#define NPC_UNK_0201AD18_H

#include "types.h"
#include "game/Unk_0201acf8.h"

// 6-byte NpcActor member (unk_3aa) named after its constructor (0x0201ad18, src/main/unk_020119cc.cpp); the first
// 4 bytes are Unk_0201acf8.

struct Unk_0201ad18 : Unk_0201acf8 {
    /* 0x4 */ u8 pad_04[2];
    Unk_0201ad18();
};

#endif
