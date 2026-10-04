#ifndef NPC_UNK_020781EC_DATA_H
#define NPC_UNK_020781EC_DATA_H

#include "types.h"
#include "npc/Unk_020781ec_Elem.h"

// Villager event state block: per-villager elements and the villager slots chosen for town events
// (src/main/unk_020742f4.cpp, src/main/unk_02077ac4.cpp).

struct Unk_020781ec_Data {
    /* 0x000 */ Unk_020781ec_Elem entries[8];
    /* 0x160 */ s8 fleaVillager;
    /* 0x161 */ s8 greeter;
    /* 0x162 */ s8 birthdayHost;
    /* 0x163 */ s8 birthdayGuest;
    /* 0x164 */ s8 fleaMarketBuyer;
    /* 0x165 */ u8 pad_165[3];
    /* 0x168 */ s32 idleFrames;
    /* 0x16c */ s8 birthdayVisitor;
};

#endif
