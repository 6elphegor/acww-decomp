#ifndef NPC_UNK_020135E4_H
#define NPC_UNK_020135E4_H

#include "types.h"

// 0xc-byte NpcActor member (footstepFx) named after its constructor (ctor 0x020135e4, dtor label 0x020135e0).
// The ctor is defined in src/main/unk_020119cc.cpp, which keeps its own copy deriving from Unk_02013474 (a 0x10-byte
// player footstep state that does not fit the 0xc slot in NpcActor).

struct Unk_020135e4 {
    /* 0x0 */ u8 pad_00[8];
    /* 0x8 */ u8 unk_08;
    /* 0x9 */ u8 unk_09;
    /* 0xa */ u8 unk_0a;
    /* 0xb */ u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};

#endif
