#ifndef NPC_VILLAGERANIMHEAPREFPOOL_H
#define NPC_VILLAGERANIMHEAPREFPOOL_H

#include "types.h"
#include "npc/NpcResPool.h"
#include "npc/VillagerAnimHeapRefSlot.h"

// Pool of 8 villager animation heap reference slots (sVillagerAnimHeapRefPool, vtable 0x020e0790); members defined
// in src/main/unk_020821c4.cpp.
struct VillagerAnimHeapRefPool : NpcResPool {
    /* 0x08 */ VillagerAnimHeapRefSlot slots[8];
    VillagerAnimHeapRefPool();
    virtual ~VillagerAnimHeapRefPool();
    virtual void occupySlot(u32 i);
    virtual VillagerAnimHeapRefSlot *getSlot(u32 i);
    VillagerAnimHeapRef *getHeapRef(u32 i);
};

#endif
