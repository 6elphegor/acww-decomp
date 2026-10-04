#ifndef PLAYER_UNK_020107C8_BLK_H
#define PLAYER_UNK_020107C8_BLK_H

// Small records of the PlayerActor animation / collider / movement methods (0x020102ec.., src/main/unk_02004558.cpp).
#include "types.h"

struct Unk_020107c8_Blk {
    /* 0x0 */ u32 x;
    /* 0x4 */ u32 y;
    /* 0x8 */ u32 z;
}; // size 0xc

struct Unk_02010924_Msg {
    /* 0x0 */ u8 scene;
    /* 0x2 */ s16 netAngle;
    /* 0x4 */ s16 curAngle;
}; // size 0x6

struct Unk_02010a58_Blk {
    /* 0x0 */ u16 rotX;
    /* 0x2 */ s16 rotY;
}; // size 0x4

struct Unk_02010b08_Time {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u32 unk_04;
}; // size 0x8

// packed date (same layout as PlayerData::setLastPlayDate's Unk_0209865c_Bits / Unk_0200f17c_Date)
struct Unk_02010b08_Bits {
    /* 0x0 */ u16 year : 7;
    u16 month : 4;
    u16 day : 5;
}; // size 0x2

struct Unk_0201065c_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
}; // size 0xc


#endif // PLAYER_UNK_020107C8_BLK_H
