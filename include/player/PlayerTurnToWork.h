#ifndef PLAYER_PLAYERTURNTOWORK_H
#define PLAYER_PLAYERTURNTOWORK_H

#include "types.h"

// Turn-to action work and request arguments; methods are defined in src/main/unk_02004558.cpp.

struct PlayerTurnToWork {
    /* 0x0 */ s16 targetAngle;
    void initTurnTo(s16 v);
};

struct PlayerTurnToArgs {
    /* 0x0 */ s16 targetAngle;
    void setTurnToArgs(s16 v);
};

#endif
