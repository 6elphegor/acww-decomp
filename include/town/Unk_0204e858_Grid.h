#ifndef TOWN_UNK_0204E858_GRID_H
#define TOWN_UNK_0204E858_GRID_H

#include "types.h"

// Scene block map (gSceneBlockMap, BlockMap_GetItemPtr): grid of block cells, plus the position vector it is
// queried with (src/main/unk_0204cc1c.cpp, unk_0204eeb4.cpp).

struct Unk_0204e858_Vec {
    /* 0x00 */ s32 x, y, z;
};

struct Unk_0204e858_Cell {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ u16 *buried;
};

struct Unk_0204e858_Grid {
    /* 0x00 */ Unk_0204e858_Cell *blocks;
    /* 0x04 */ u32 width;
    /* 0x08 */ u32 height;
};

#endif
