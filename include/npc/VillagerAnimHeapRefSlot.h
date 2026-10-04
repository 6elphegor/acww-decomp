#ifndef NPC_VILLAGERANIMHEAPREFSLOT_H
#define NPC_VILLAGERANIMHEAPREFSLOT_H

#include "types.h"
#include "npc/NpcResPool.h"   // defines NpcResSlot (as does npc/NpcResSlot.h)

// Villager animation heap reference and the NPC resource-pool slot holding one (VillagerAnimHeapRefPool has 8).
// VillagerAnimHeapRef ctor/dtor at 0x02077b3c/0x02077b38; the slot's methods are in src/main/unk_020821c4.cpp.
struct VillagerAnimHeapRef {
    /* 0x0 */ u32 slot;
    VillagerAnimHeapRef();
    ~VillagerAnimHeapRef();
};
typedef VillagerAnimHeapRef Unk_02082af0_X;

struct VillagerAnimHeapRefSlot : NpcResSlot {
    VillagerAnimHeapRefSlot();
    ~VillagerAnimHeapRefSlot();
    /* 0x4 */ VillagerAnimHeapRef heapRef;
    void assign(u32 x);
};

#endif
