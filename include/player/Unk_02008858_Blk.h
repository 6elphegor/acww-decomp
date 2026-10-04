#ifndef PLAYER_UNK_02008858_BLK_H
#define PLAYER_UNK_02008858_BLK_H

#include "types.h"

// Player actor matrix block (bodyBaseMtx, itemHandMtx) and small s16 tuples
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02008858_Blk {
    /* 0x00 */ u32 w[12];
};

struct Unk_02008858_S16x2 {
    /* 0x0 */ s16 unk_00;
    /* 0x2 */ s16 unk_02;
};

struct Unk_02008858_S16x3 {
    /* 0x0 */ s16 unk_00;
    /* 0x2 */ s16 unk_02;
    /* 0x4 */ s16 unk_04;
};

#endif
