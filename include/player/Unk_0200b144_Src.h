#ifndef PLAYER_UNK_0200B144_SRC_H
#define PLAYER_UNK_0200B144_SRC_H

#include "types.h"

// Furniture pick-up net record, its position and the decoded arguments
// (PlayerActor_NetWritePickUp / NetReadPickUp / SetArgsPickUp in src/main/unk_02004558.cpp).

struct Unk_0200b144_Pos {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
};

struct Unk_0200b144_Src {
    /* 0x0 */ u8 unk_00;
    /* 0x1 */ u8 unk_01;
    /* 0x2 */ u8 unk_02;
    /* 0x3 */ s8 ftrActorIndex;
    /* 0x4 */ u8 unitX;
    /* 0x5 */ u8 unitZ;
};

struct Unk_0200b244_Out {
    /* 0x0 */ u16 item;
    /* 0x2 */ u16 pad_02;
    /* 0x4 */ s32 ftrActorIndex;
    /* 0x8 */ u8 unitX;
    /* 0x9 */ u8 unitZ;
    /* 0xa */ u8 unk_0a;
};

#endif
