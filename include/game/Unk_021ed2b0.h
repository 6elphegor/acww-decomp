#ifndef GAME_UNK_021ED2B0_H
#define GAME_UNK_021ED2B0_H

#include "types.h"

// Today's weather state (data_021ed2b0), used by the sky code in src/main/unk_020b8d9c.cpp.
struct Unk_021ed2b0 {
    /* 0x0 */ u8 pad_00[0xa];
    /* 0xa */ u8 todayPattern;
    /* 0xb */ u8 pad_0b;
    /* 0xc */ s8 hourBase;
    /* 0xd */ u8 rained;
};

#endif
