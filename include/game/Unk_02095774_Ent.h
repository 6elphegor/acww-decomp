#ifndef GAME_UNK_02095774_ENT_H
#define GAME_UNK_02095774_ENT_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"

// Scene/comm sync helpers shared by src/main/unk_02095794.cpp, unk_02095b1c.cpp and unk_02095cdc.cpp (the player
// actors they sync are Actor, actor/Actor.h).


struct Unk_02095dcc_Grid {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ s32 unitsX;
    /* 0x10 */ s32 unitsZ;
};

struct Unk_0209579c_L {
    /* 0x00 */ u8 a, b;
    /* 0x02 */ s16 c;
    /* 0x04 */ s16 r1[3];
    /* 0x0a */ s16 pad;
    /* 0x0c */ s32 v1, x1, y1;
    /* 0x18 */ s16 r2[3];
    /* 0x1e */ s16 r3[3];
    /* 0x24 */ s32 v2, x2, y2;
};

// gSaveData view at data_021ed150 (0x54 bytes before gSaveTownState): its +0x58 is TownState::nativeFruit. The code
// addresses it from data_021ed150, so gSaveTownState cannot be used directly.
struct SaveTownStateView {
    /* 0x00 */ u8 pad_00[0x58];
    /* 0x58 */ u32 nativeFruit; // TownState::nativeFruit
};

#endif // GAME_UNK_02095774_ENT_H
