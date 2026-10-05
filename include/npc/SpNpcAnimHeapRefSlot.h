#ifndef NPC_SPNPCANIMHEAPREFSLOT_H
#define NPC_SPNPCANIMHEAPREFSLOT_H

// Slot of the special-NPC animation heap ref pool (SpNpcAnimHeapRefPool) and its payload SpNpcAnimHeapRef.
// Slot methods defined in src/main/unk_020821c4.cpp; SpNpcAnimHeapRef ctor/dtor are labels in main (0x02077af8/afc).
#include "types.h"
#include "npc/NpcResPool.h" // NpcResSlot (also defined, identically, in npc/NpcResSlot.h)

struct SpNpcAnimHeapRef {
    /* 0x0 */ u32 slot;
    SpNpcAnimHeapRef();
    ~SpNpcAnimHeapRef();
};

struct SpNpcAnimHeapRefSlot : NpcResSlot {
    /* 0x4 */ SpNpcAnimHeapRef heapRef;
    void assign();
    SpNpcAnimHeapRefSlot();
    ~SpNpcAnimHeapRefSlot();
};

#endif // NPC_SPNPCANIMHEAPREFSLOT_H
