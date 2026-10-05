#ifndef NPC_VILLAGERSTATETABLE_H
#define NPC_VILLAGERSTATETABLE_H

#include "types.h"
#include "npc/VillagerState.h"

// Runtime villager states (gVillagerStates, VillagerStates_Get): 8 VillagerState entries and the villager slots chosen
// for town events. Defined in main, src/main/unk_02077ac4.cpp; also used by unk_020742f4.cpp.

struct VillagerStateTable {
    /* 0x000 */ VillagerState entries[8];
    /* 0x160 */ s8 fleaVillager;
    /* 0x161 */ s8 greeter;
    /* 0x162 */ s8 birthdayHost;
    /* 0x163 */ s8 birthdayGuest;
    /* 0x164 */ s8 fleaMarketBuyer;
    /* 0x165 */ u8 pad_165[3];
    /* 0x168 */ u32 idleFrames;
    /* 0x16c */ s8 birthdayVisitor;
};

#endif
