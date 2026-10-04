#ifndef PLAYER_PM_020076F0_H
#define PLAYER_PM_020076F0_H

// Member-function-pointer constant of Unk_02007694 (the ptmf tables data_020d6d84.. in .data), seen through its raw
// two-word form. Used by src/main/unk_02004558.cpp / unk_02004558_extra.cpp.
#include "types.h"
#include "player/PMRaw.h"
#include "player/Unk_02007694.h"

union PM_020076f0 {
    PMRaw raw;
    void (Unk_02007694::*fn)(u32);
};

#endif
