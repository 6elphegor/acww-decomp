#ifndef NPC_UNK_02053D3C_H
#define NPC_UNK_02053D3C_H

#include "types.h"

// 0x1b4-byte NPC/villager scene-object member, named after its constructor (0x02053d3c); layout still unknown.
// symbols.txt names the function at 0x02053d3c _ZN19ThreeLayerAnimModelC1Ev.

struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
    /* 0x00 */ u32 pad[0x1b4 / 4];
};

#endif
