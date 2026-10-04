#ifndef PLAYER_PLAYERPICKUPFANFAREARGS_H
#define PLAYER_PLAYERPICKUPFANFAREARGS_H

#include "types.h"

// Pick-up / unit-position argument and work views of the player actor
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct PlayerNetPickUpFanfareStowArgs {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 unitX;
    /* 0x2 */ u8 unitZ;
};

struct PlayerActionRequestHead {
    /* 0x0 */ u8 pad[12];
};

struct PlayerPickUpFanfareStowArgs {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 unitX;
    /* 0x2 */ u8 unitZ;
    /* 0x3 */ u8 pad_3[13];
};

struct PlayerNetPickUpFanfareArgs {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 item[2];
    /* 0x3 */ u8 unitX;
    /* 0x4 */ u8 unitZ;
};

struct Unk_0200a6d4_St {
    /* 0x0 */ u8 pad[16];
};

struct PlayerPickUpFanfareArgs {
    /* 0x0 */ u16 item;
    /* 0x2 */ u8 unitX;
    /* 0x3 */ u8 unitZ;
    /* 0x4 */ u8 commitUnit;
    /* 0x5 */ u8 pad_5[15];
};

#endif
