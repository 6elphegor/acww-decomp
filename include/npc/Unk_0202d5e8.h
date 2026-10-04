#ifndef NPC_UNK_0202D5E8_H
#define NPC_UNK_0202D5E8_H

#include "types.h"

// Villager talk member (VillagerActor +0x680): a VillagerTalk (0x1a0 bytes; ctor 0x0202d5e8 = _ZN12VillagerTalkC1Ev)
// followed by one byte. This is the ov004/ov068 view (3 virtuals + padding); src/main/unk_0201c050.cpp keeps its
// own copy built on VillagerTalk.

class Unk_0202d5e8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    /* 0x004 */ u32 pad[(0x1a0 - 4) / 4];
    /* 0x1a0 */ u8 unk_1a0;
    /* 0x1a1 */ u8 pad_1a1[3];
};

#endif
