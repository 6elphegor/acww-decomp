#ifndef PLAYER_PLAYERINITWORK_H
#define PLAYER_PLAYERINITWORK_H

// Small player-actor work records of the 0x02004558 unit (unk_02004558.cpp / unk_02004558_extra.cpp):
// init work (PlayerInitWork::initInitWork), init args (PlayerInitArgs::setInitArgs; the payload of the init action's
// PlayerActionRequest).
#include "types.h"

struct PlayerInitWork {
    /* 0x0 */ u32 firstAction;
    /* 0x4 */ u8 modelSetupDone;
    void initInitWork(u32 v);
};

struct PlayerInitArgs {
    /* 0x0 */ u32 firstAction;
    void setInitArgs(u32 v);
};

#endif // PLAYER_PLAYERINITWORK_H
