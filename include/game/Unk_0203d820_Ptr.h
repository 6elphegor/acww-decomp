#ifndef GAME_UNK_0203D820_PTR_H
#define GAME_UNK_0203D820_PTR_H

#include "types.h"

// Index/state/next-state triple (src/main/unk_02004558.cpp, namespace nJ copy).

struct Unk_0203d820_Ptr {
    /* 0x00 */ u32 index;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 nextState;
};

#endif
