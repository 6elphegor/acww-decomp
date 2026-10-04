#ifndef GAME_UNK_020AEBBC_H
#define GAME_UNK_020AEBBC_H

#include "types.h"

// Nook shop state record and its packed bitfield at 0x5a, plus the date/time output record of the shop clock
// helpers. Used by src/main/unk_020af258.cpp and unk_020ac750.cpp.

struct Bits5a {
    u16 saleHour : 5;
    u16 paintCounter : 4;
    u16 level : 2;
    u16 unk_0b : 5;
};

struct Unk_020aebbc {
    /* 0x00 */ u32 sales;
    /* 0x04 */ u8 pad[0x51 - 4];
    /* 0x51 */ u8 stockStale;
    /* 0x52 */ u8 pad2[7];
    /* 0x59 */ u8 renovationScheduled;
    /* 0x5a */ Bits5a packedState;
};

struct Unk_020aec74_Out {
    /* 0x0 */ u8 second, minute, hour, day, month, year;
    /* 0x6 */ u16 unk_06;
};

#endif
