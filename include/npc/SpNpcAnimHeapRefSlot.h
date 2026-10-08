#ifndef NPC_SPNPCANIMHEAPREFSLOT_H
#define NPC_SPNPCANIMHEAPREFSLOT_H

// Slot of the special-NPC animation heap ref pool (SpNpcAnimHeapRefPool) and its payload SpNpcAnimHeapRef.
// Slot methods defined in src/main/unk_020821c4.cpp; SpNpcAnimHeapRef ctor/dtor are labels in main (0x02077af8/afc).
#include "types.h"
#include "npc/NpcResPool.h" // NpcResSlot (also defined, identically, in npc/NpcResSlot.h)

extern "C" void SpNpcAnimHeapRef_Init(s32 *p);
extern "C" void SpNpcAnimHeapRef_Deinit();
struct SpNpcAnimHeapRef {
    /* 0x0 */ u32 slot;
    SpNpcAnimHeapRef() { SpNpcAnimHeapRef_Init((s32 *)&slot); }
    ~SpNpcAnimHeapRef() { SpNpcAnimHeapRef_Deinit(); }
};

struct SpNpcAnimHeapRefSlot : NpcResSlot {
    /* 0x4 */ SpNpcAnimHeapRef heapRef;
    void assign(u32 id);
    SpNpcAnimHeapRefSlot();
    ~SpNpcAnimHeapRefSlot();
};

#endif // NPC_SPNPCANIMHEAPREFSLOT_H
