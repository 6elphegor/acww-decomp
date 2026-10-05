#ifndef PLAYER_UNK_0200D64C_XYZ_H
#define PLAYER_UNK_0200D64C_XYZ_H

// Touch/field position vector and the pad-state view (gPad) used by the player touch input code
// (unk_0200d2b4 section of unk_02004558.cpp / unk_02004558_extra.cpp).
#include "types.h"
#include "gfx/VecFx32.h"

struct Unk_0200d64c_Keys {
    /* 0x0 */ u16 a;
    /* 0x2 */ u16 b;
    /* 0x4 */ s16 c;
}; // size 0x6

#endif // PLAYER_UNK_0200D64C_XYZ_H
