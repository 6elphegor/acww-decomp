#ifndef PLAYER_PLAYERACT10ARGS_H
#define PLAYER_PLAYERACT10ARGS_H

#include "types.h"

// Action 10 request arguments; setAct10Args is defined in src/main/unk_02004558.cpp.

struct PlayerAct10Args {
    /* 0x0 */ s16 blendFrames;
    void setAct10Args(s16 v);
};

#endif
