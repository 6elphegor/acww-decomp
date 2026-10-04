#ifndef PLAYER_UNK_020050E0_Q_H
#define PLAYER_UNK_020050E0_Q_H

#include "types.h"

// Render object seen by the joint callbacks; ptrUser is the owning PlayerActor. Used in src/main/unk_02004558.cpp (PlayerActor unit).

class PlayerActor;

struct Unk_020050e0_Q {
    /* 0x00 */ u8 unk_00[0x2c];
    /* 0x2c */ PlayerActor *ptrUser;
};

#endif
