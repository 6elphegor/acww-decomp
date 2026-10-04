#ifndef GAME_UNK_0203FE18_DATE_H
#define GAME_UNK_0203FE18_DATE_H

#include "types.h"

// Date-time byte views used by the event/week code (src/main/unk_0203f104.cpp, unk_02040050.cpp,
// unk_02040234.cpp). The 4-byte view is in game/Unk_0203fe18_B4.h.

struct Unk_0203fe18_Date {
    /* 0x00 */ u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

struct Unk_0203fe18_B3 {
    /* 0x00 */ u8 b0, b1, b2;
};

#endif
