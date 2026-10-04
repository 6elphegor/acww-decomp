#ifndef NPC_NPCBODYANIMPOOL_H
#define NPC_NPCBODYANIMPOOL_H

#include "types.h"
#include "npc/NpcResPool.h"
#include "npc/NpcBodyAnimSlot.h"
#include "player/Unk_0205c3a4.h"

// Pool of the five NPC body animation slots (vtable 0x020e0838, global sNpcBodyAnimPool).
// Defined in src/main/unk_020821c4.cpp (0x02082b34..0x02082c1c).
struct NpcBodyAnimPool : NpcResPool {
    /* 0x08 */ NpcBodyAnimSlot slots[5];
    NpcBodyAnimPool();
    virtual ~NpcBodyAnimPool();
    virtual NpcBodyAnimSlot *getSlot(u32 i);
    virtual void occupySlot(u32 i);
    Unk_0205c3a4 *getLayer(u32 i, u32 off);
};

#endif
