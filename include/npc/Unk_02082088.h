#ifndef NPC_UNK_02082088_H
#define NPC_UNK_02082088_H

#include "types.h"

// 8-byte NPC/villager scene-object member, named after its constructor (0x02082088); layout still unknown.

struct Unk_02082088 {
    Unk_02082088();
    ~Unk_02082088();
    /* 0x00 */ u32 pad[8 / 4];
};

#endif
