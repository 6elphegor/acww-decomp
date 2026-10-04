#ifndef PLAYER_UNK_02006D14_PTR_H
#define PLAYER_UNK_02006D14_PTR_H

#include "types.h"

// Window state record reached through Unk_02006d14::window. Used in src/main/unk_02004558.cpp (PlayerActor unit).

struct Unk_02006d14_Ptr {
    /* 0x0 */ u32 index;
    /* 0x4 */ u32 state;
    /* 0x8 */ u32 nextState;
};

#endif
