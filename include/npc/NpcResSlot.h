#ifndef NPC_NPCRESSLOT_H
#define NPC_NPCRESSLOT_H

#include "types.h"

// NPC resource slot (in-use flag). Constructor/destructor in src/main/unk_02082d2c.cpp.
struct NpcResSlot {
    /* 0x00 */ u8 inUse;
    NpcResSlot();
    ~NpcResSlot();
};

#endif
