#ifndef NPC_NPCBODYANIMSLOT_H
#define NPC_NPCBODYANIMSLOT_H

#include "types.h"
#include "npc/NpcResPool.h"
#include "player/AnimSlotRef.h"

// Slot of the NPC body animation pool: three animation layer refs. Defined in src/main/unk_020821c4.cpp
// (assignLayer 0x02082c54, dtor 0x02082c60, ctor 0x02082c84).
struct NpcBodyAnimSlot : NpcResSlot {
    NpcBodyAnimSlot();
    ~NpcBodyAnimSlot();
    /* 0x04 */ AnimSlotRef layers[3];
    void assignLayer(s32 a, s32 i);
};

#endif
