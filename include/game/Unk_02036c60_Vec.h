#ifndef GAME_UNK_02036C60_VEC_H
#define GAME_UNK_02036C60_VEC_H

// Vector returned by BgMgt_GetEntry and the packed 6-byte entry it decodes (unk_02036c58.cpp, unk_02034438.cpp).
#include "types.h"

struct Unk_02036c60_Vec {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
    /* 0x8 */ s32 z;
}; // size 0xc

struct Unk_02036c60_Ent {
    /* 0x0 */ u8 a;
    /* 0x1 */ u8 pad;
    /* 0x2 */ s16 b;
    /* 0x4 */ s16 c;
}; // size 0x6

#endif // GAME_UNK_02036C60_VEC_H
