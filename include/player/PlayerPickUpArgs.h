#ifndef PLAYER_PLAYERPICKUPARGS_H
#define PLAYER_PLAYERPICKUPARGS_H

#include "types.h"

// Arguments of the player pick-up action 0x19: PlayerNetPickUpArgs is their layout in PlayerActor::netData
// (PlayerActor_NetWritePickUp / NetReadPickUp), PlayerPickUpArgs the payload of the PlayerActionRequest
// (PlayerActor_SetArgsPickUp, read by setupPickUp); all in src/main/unk_02004558.cpp. Plus the unit position pair.

struct Unk_0200b144_Pos {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
};

struct PlayerNetPickUpArgs {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 item;      // u16 item number, written bytewise over 0x01..0x02 (NetBuf_WriteU16)
    /* 0x2 */ u8 unk_02;
    /* 0x3 */ s8 ftrActorIndex;
    /* 0x4 */ u8 unitX;
    /* 0x5 */ u8 unitZ;
};

struct PlayerPickUpArgs {
    /* 0x0 */ u16 item;
    /* 0x2 */ u16 pad_02;
    /* 0x4 */ s32 ftrActorIndex;
    /* 0x8 */ u8 unitX;
    /* 0x9 */ u8 unitZ;
    /* 0xa */ u8 commitUnit;
};

#endif
