#ifndef PLAYER_PM_020063A0_H
#define PLAYER_PM_020063A0_H

// Member-function-pointer constant of Unk_02005e7c (the ptmf tables data_020d5fcc.. in .data), seen through its raw
// two-word form. Used by src/main/unk_02004558.cpp / unk_02004558_extra.cpp.
#include "types.h"
#include "player/PMRaw.h"
#include "player/Unk_02005e7c.h"

union PM_020063a0 {
    PMRaw raw;
    void (Unk_02005e7c::*fn)(s32);
};

#endif
