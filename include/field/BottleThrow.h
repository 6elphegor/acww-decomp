#ifndef FIELD_BOTTLETHROW_H
#define FIELD_BOTTLETHROW_H

#include "types.h"
#include "field/Unk_ov003_02224ba4_V3.h"

// Message-bottle throw state (ov003): array sBottleThrows[4]. Constructor/destructor defined in
// src/ov003/unk_ov003_0221ffb8.cpp; used by unk_ov003_02224e68/02225108/02225238.cpp.

struct BottleThrow {
    BottleThrow();
    ~BottleThrow();
    /* 0x00 */ u32 collisionState[0x30 / 4];
    /* 0x30 */ u8 state;
    /* 0x31 */ u8 pad_31[3];
    /* 0x34 */ Unk_ov003_02224ba4_V3 position;
    /* 0x40 */ Unk_ov003_02224ba4_V3 startPos;
    /* 0x4c */ Unk_ov003_02224ba4_V3 targetPos;
    /* 0x58 */ s32 stateTimer;
    /* 0x5c */ u8 isLocal;
    /* 0x5d */ u8 pad_5d[3];
};

#endif
