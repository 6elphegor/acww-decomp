#ifndef PLAYER_UNK_0200B908_OBJ_H
#define PLAYER_UNK_0200B908_OBJ_H

#include "types.h"

// Emotion table entry (Emotion_GetEntry)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_0200b908_Obj {
    /* 0x00 */ u32 animId;
    /* 0x04 */ u8 pad_04[8];
    /* 0x0c */ volatile u32 nextAnimId;
    /* 0x10 */ u8 pad_10[8];
    /* 0x18 */ u8 animPlayMode;
};

#endif
