#ifndef NPC_NPCRESPOOL_H
#define NPC_NPCRESPOOL_H

#include "types.h"
#include "npc/NpcResSlot.h"

// Fixed-size pools of NPC resource slots (vtable _ZTV10NpcResPool). Constructor/destructor defined in
// src/main/unk_02082d2c.cpp, the other methods and the derived pools in src/main/unk_020821c4.cpp.

class NpcResPool {
public:
    NpcResPool(s32 n);
    virtual ~NpcResPool();
    virtual void occupySlot(u32 i) = 0;
    virtual void releaseSlot(u32 i);
    virtual NpcResSlot *getSlot(u32 i) = 0;
    s32 findFreeSlot();
    void clearAllSlots();

    /* 0x04 */ s32 numSlots;
};

#endif
