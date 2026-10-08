#ifndef NPC_VILLAGERANIMHEAPREFSLOT_H
#define NPC_VILLAGERANIMHEAPREFSLOT_H

#include "types.h"
#include "npc/NpcResPool.h"   // defines NpcResSlot (as does npc/NpcResSlot.h)

extern "C" void VillagerAnimHeapRef_Init(s32 *p);
extern "C" void VillagerAnimHeapRef_Deinit();
// Villager animation heap reference and the NPC resource-pool slot holding one (VillagerAnimHeapRefPool has 8).
// VillagerAnimHeapRef ctor/dtor at 0x02077b3c/0x02077b38; the slot's methods are in src/main/unk_020821c4.cpp.
struct VillagerAnimHeapRef {
    /* 0x0 */ u32 slot;
    VillagerAnimHeapRef() { VillagerAnimHeapRef_Init((s32 *)&slot); }
    ~VillagerAnimHeapRef() { VillagerAnimHeapRef_Deinit(); }
};

struct VillagerAnimHeapRefSlot : NpcResSlot {
    VillagerAnimHeapRefSlot();
    ~VillagerAnimHeapRefSlot();
    /* 0x4 */ VillagerAnimHeapRef heapRef;
    void assign(u32 x);
};

#endif
