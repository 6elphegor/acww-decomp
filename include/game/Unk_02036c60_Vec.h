#ifndef GAME_UNK_02036C60_VEC_H
#define GAME_UNK_02036C60_VEC_H

// Vector returned by BgMgt_GetEntry and the packed 6-byte entry it decodes (unk_02036c58.cpp, unk_02034438.cpp).
#include "types.h"

struct BgMgtEntry {
    /* 0x0 */ u8 a;
    /* 0x1 */ u8 pad;
    /* 0x2 */ s16 b;
    /* 0x4 */ s16 c;
}; // size 0x6

#endif // GAME_UNK_02036C60_VEC_H
