#ifndef PLAYER_PLAYERBODYWORKREF_H
#define PLAYER_PLAYERBODYWORKREF_H

#include "types.h"

// One-byte slot handle into the player body-animation work heaps (PlayerBodyWorkPool). Constructor in
// src/main/unk_0205edfc.cpp; the destructor is the C entry PlayerBodyWorkRef_Destruct (0x0205ee30).
struct PlayerBodyWorkRef {
    /* 0x00 */ u8 slot;
    PlayerBodyWorkRef();
    ~PlayerBodyWorkRef();
};

#endif
