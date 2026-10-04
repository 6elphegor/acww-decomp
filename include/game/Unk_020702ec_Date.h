#ifndef GAME_UNK_020702EC_DATE_H
#define GAME_UNK_020702EC_DATE_H

#include "types.h"

// Packed date bytes and a bitfield date view (src/main/unk_0206fe80.cpp, unk_02070560.cpp).

struct Unk_020702ec_Date {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

struct Unk_0206fe80_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
};

#endif // GAME_UNK_020702EC_DATE_H
