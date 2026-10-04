#ifndef PLAYER_UNK_0200E2E0_H
#define PLAYER_UNK_0200E2E0_H

#include "types.h"
#include "player/Unk_02009d5c_Sub.h"

// Local view of a PlayerActionRequest (ctor/assign/dtor called through their mangled names) with its argument
// block at 0xc. Used in src/main/unk_02004558.cpp and src/main/unk_02004558_extra.cpp.

struct Unk_0200e2e0 {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ Unk_02009d5c_Sub args;
};

#endif
