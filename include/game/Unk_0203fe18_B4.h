#ifndef GAME_UNK_0203FE18_B4_H
#define GAME_UNK_0203FE18_B4_H

#include "types.h"

// 4-byte date view (word or bytes) used by the week-event code (src/main/unk_02040050.cpp, unk_02040234.cpp).
// unk_0203f104.cpp has its own Unk_0203fe18_B4 (a typedef of Unk_0203f554_Cal with an extra .s view).

struct Unk_0203fe18_B4Bytes {
    /* 0x00 */ u8 b0, b1, b2, b3;
};

union Unk_0203fe18_B4 {
    /* 0x00 */ u32 w;
    /* 0x00 */ Unk_0203fe18_B4Bytes b;
};

#endif
