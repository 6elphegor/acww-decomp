#ifndef NPC_UNK_0202D5E8_H
#define NPC_UNK_0202D5E8_H

#include "types.h"
#include "talk/VillagerTalk.h"

// Villager talk member (VillagerActor +0x680): a VillagerTalk (0x1a0 bytes; ctor 0x0202d5e8 = _ZN12VillagerTalkC1Ev)
// followed by one byte. VillagerActor's ctor/dtor (src/main/unk_0201c050.cpp) construct and destroy obj.
struct Unk_0202d5e8 {
    /* 0x000 */ VillagerTalk obj;
    /* 0x1a0 */ u8 habitTopicKind; // which habit topic set the villager talks about next (random 0/1, toggled)
    /* 0x1a1 */ u8 pad_1a1[3];
};

#endif
