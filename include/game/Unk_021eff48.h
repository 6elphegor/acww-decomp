#ifndef GAME_UNK_021EFF48_H
#define GAME_UNK_021EFF48_H

#include "types.h"

// Weather manager (gWeatherManager, 0x021eff48) and its precipitation/sky state block at 0x1500 (0x021f1448).
// Used by the sky code in src/main/unk_020b8d9c.cpp.

struct Unk_021eff48 {
    /* 0x0000 */ s32 engine;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ u8 pad_0008[0x1544 - 0x8];
    /* 0x1544 */ u32 unk_1544[2][2];
};

struct Unk_021f1448 {
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u32 bufferIndex;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 level;
    /* 0x28 */ s32 targetLevel;
    /* 0x2c */ u32 requestedLevel;
    /* 0x30 */ s32 direction;
    /* 0x34 */ s32 precipKind;
    /* 0x38 */ u32 rainSlant;
    /* 0x3c */ u16 starScrollX;
    /* 0x3e */ u16 starScrollY;
    /* 0x40 */ u8 pad_40[0x24];
    /* 0x64 */ u32 curPalette;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 transitionPalette;
    /* 0x70 */ u8 pad_70[8];
    /* 0x78 */ s32 unk_78;
};

#endif
