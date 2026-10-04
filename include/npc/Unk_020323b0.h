#ifndef NPC_UNK_020323B0_H
#define NPC_UNK_020323B0_H

#include "types.h"

// 0x30-byte NPC/villager scene-object member, named after its constructor (0x020323b0); layout still unknown.

struct Unk_020323b0 {
    Unk_020323b0();
    ~Unk_020323b0();
    /* 0x00 */ u32 pad[0x30 / 4];
};

#endif
