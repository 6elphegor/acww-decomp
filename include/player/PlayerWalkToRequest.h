#ifndef PLAYER_PLAYERWALKTOREQUEST_H
#define PLAYER_PLAYERWALKTOREQUEST_H

#include "types.h"
#include "player/PlayerWalkToArgs.h"

// Player action request message (action, priority, net sequence, walk-to arguments), 0x20 bytes; built in
// src/main/unk_02004558.cpp (0x02008cc0 section; also declared by src/main/unk_02004558_extra.cpp).
struct PlayerWalkToRequest {
    /* 0x00 */ u32 action;
    /* 0x04 */ u32 priority;
    /* 0x08 */ u32 netSeq;
    /* 0x0c */ PlayerWalkToArgs args;
    /* 0x1c */ u8 pad_1c[4];
};

#endif
