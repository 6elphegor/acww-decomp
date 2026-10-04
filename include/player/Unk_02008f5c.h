#ifndef PLAYER_UNK_02008F5C_H
#define PLAYER_UNK_02008F5C_H

#include "types.h"

// Turn-to action work and request arguments; methods are defined in src/main/unk_02004558.cpp.

struct Unk_02008f5c {
    /* 0x0 */ s16 targetAngle;
    void initTurnTo(s16 v);
};

struct Unk_02008fa0 {
    /* 0x0 */ s16 targetAngle;
    void setTurnToArgs(s16 v);
};

#endif
