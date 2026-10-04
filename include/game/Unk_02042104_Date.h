#ifndef GAME_UNK_02042104_DATE_H
#define GAME_UNK_02042104_DATE_H

#include "types.h"

// 8-byte date view, bytes 3..5 known (src/main/unk_02041868.cpp, unk_02041e00.cpp).

struct Unk_02042104_Date {
    /* 0x00 */ u8 pad0[3];
    /* 0x03 */ u8 c3, c4, c5;
    /* 0x06 */ u8 pad6[2];
};

#endif
