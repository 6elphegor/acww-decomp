#ifndef PLAYER_UNK_02008040_BASE_H
#define PLAYER_UNK_02008040_BASE_H

#include "types.h"
#include "player/Unk_02008074_Vec.h"

// Polymorphic first base (0x00-0xec) of a PlayerActor view (rotation and draw position); used by
// src/main/unk_02004558.cpp / unk_02004558_extra.cpp.
class Unk_02008040_Base {
public:
    virtual void vfunc_00();
    /* 0x04 */ u8 unk_04[0x8a];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 unk_090[0x34];
    /* 0xc4 */ Unk_02008074_Vec drawPos;
    /* 0xd0 */ s16 drawTilt;
    /* 0xd2 */ u8 unk_d2[0x1a];
};

#endif
