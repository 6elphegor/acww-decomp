#ifndef GAME_UNK_0204DA0C_MAP_H
#define GAME_UNK_0204DA0C_MAP_H

#include "types.h"
#include "game/Unk_0204da0c_Size.h"

// Block map header: block data pointer and width/height (src/main/unk_0204cc1c.cpp, unk_0204c318.cpp,
// unk_0204c50c.cpp, unk_02041e00.cpp).

struct Unk_0204da0c_Map {
    /* 0x00 */ u32 blocks;
    /* 0x04 */ Unk_0204da0c_Size size;
};

#endif
