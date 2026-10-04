#ifndef GAME_UNK_0202F7B8_V3_H
#define GAME_UNK_0202F7B8_V3_H

#include "types.h"
#include "game/Unk_0202f2ac_V3.h"

// Constructible collision vector (inline ctors), used by src/main/unk_0202fa70.cpp (unk_0202f600 part) and
// src/main/unk_0202e9d4.cpp.

struct Unk_0202f7b8_V3 : Unk_0202f660_V3 {
    Unk_0202f7b8_V3() {}
    Unk_0202f7b8_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

#endif
