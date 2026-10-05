#ifndef PLAYER_PLAYERCHANGEHELDITEMWORK_H
#define PLAYER_PLAYERCHANGEHELDITEMWORK_H

#include "types.h"

// Item pair passed between player actions (action 10 hand-off)
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct PlayerChangeHeldItemWork {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u16 item;
    /* 0x6 */ u8 fromAct10;
};

#endif
