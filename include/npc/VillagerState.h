#ifndef NPC_VILLAGERSTATE_H
#define NPC_VILLAGERSTATE_H

#include "types.h"

// 0x2c-byte runtime state of one villager (entries of VillagerStateTable gVillagerStates). Ctor/dtor in main,
// src/main/unk_02077ac4.cpp; used by unk_020742f4.cpp.

struct VillagerState {
    VillagerState();
    ~VillagerState();

    /* 0x00 */ u8 pad_00[0x1d];
    /* 0x1d */ u8 flags;
    /* 0x1e */ u8 pad_1e[0x2c - 0x1e];
};

#endif // NPC_VILLAGERSTATE_H
