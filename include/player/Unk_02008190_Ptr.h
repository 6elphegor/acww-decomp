#ifndef PLAYER_UNK_02008190_PTR_H
#define PLAYER_UNK_02008190_PTR_H

#include "types.h"

// Player actor window state (Unk_02008040::window)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02008190_Ptr {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ s32 state;
    /* 0x8 */ s32 nextState;
};

#endif
