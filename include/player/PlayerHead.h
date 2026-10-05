#ifndef PLAYER_PLAYERHEAD_H
#define PLAYER_PLAYERHEAD_H

#include "types.h"

// One-byte slot handle into the player head model bank (PlayerHead_* C entries in main, 0x0205d7d8..0x0205dba8;
// constructor/destructor at 0x0205dbb0/0x0205dbac). Member PlayerActor::headRef.

struct PlayerHead {
    /* 0x00 */ u8 slot;
    PlayerHead();
    ~PlayerHead();
};

#endif
