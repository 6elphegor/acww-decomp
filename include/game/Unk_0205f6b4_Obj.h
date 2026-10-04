#ifndef GAME_UNK_0205F6B4_OBJ_H
#define GAME_UNK_0205F6B4_OBJ_H

#include "types.h"

// Local GroundInfo view (water/flow info at a position) used by the fishing code
// (src/main/unk_0205f284.cpp, unk_0205ef08.cpp).

class Unk_0205f6b4_Obj {
public:
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ s32 flowDir, unk_28, unk_2c;
    /* 0x30 */ s32 waterKind;
    /* 0x34 */ u8 pad_34[8];
    /* 0x3c */ s32 waterSurfaceY;
    Unk_0205f6b4_Obj() {}
};

#endif
