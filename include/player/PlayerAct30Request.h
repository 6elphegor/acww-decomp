#ifndef PLAYER_PLAYERACT30REQUEST_H
#define PLAYER_PLAYERACT30REQUEST_H

#include "types.h"
#include "player/PlayerAct30Args.h"

// Local view of a PlayerActionRequest (ctor/assign/dtor called through their mangled names) with its argument
// block at 0xc. Used in src/main/unk_02004558.cpp and src/main/unk_02004558_extra.cpp.

struct PlayerAct30Request {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ PlayerAct30Args args;
};

#endif
