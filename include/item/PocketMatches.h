#ifndef ITEM_POCKETMATCHES_H
#define ITEM_POCKETMATCHES_H

#include "types.h"

// Pockets matching a predicate: bit mask of pocket slots and their count (PocketMatches_Init, Pocket_CountMatching;
// src/main/unk_02098e90.cpp, also used by src/ov070/unk_022713c0.cpp).

struct PocketMatches {
    /* 0x00 */ u16 pocketMask;
    /* 0x02 */ u8 count;
};

#endif // ITEM_POCKETMATCHES_H
