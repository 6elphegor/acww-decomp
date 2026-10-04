#ifndef NPC_UNK_0202D7F4_H
#define NPC_UNK_0202D7F4_H

#include "types.h"

// 0x34-byte NPC/villager scene-object member, named after its constructor (0x0202d7f4); layout still unknown.

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    /* 0x00 */ u32 pad[0x34 / 4];
};

#endif
