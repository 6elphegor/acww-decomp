#ifndef GAME_UNK_021C47C4_H
#define GAME_UNK_021C47C4_H

#include "types.h"

// Scene block map header (gSceneBlockMap): block data and the map size in blocks.
// Used by src/main/unk_020af258.cpp, unk_020ac750.cpp and unk_0203a0cc.cpp.
struct Unk_021c47c4 {
    /* 0x0 */ u32 blocks;
    /* 0x4 */ u32 width;
    /* 0x8 */ u32 height;
};

#endif
