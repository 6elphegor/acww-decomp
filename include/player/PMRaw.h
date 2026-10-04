#ifndef PLAYER_PMRAW_H
#define PLAYER_PMRAW_H

// Raw two-word view of a member-function-pointer constant (function + adjust), used by the PM_* unions of
// src/main/unk_02004558.cpp / unk_02004558_extra.cpp to name the ptmf tables in .data.
#include "types.h"

struct PMRaw {
    /* 0x0 */ void (*f)();
    /* 0x4 */ s32 d;
};

#endif // PLAYER_PMRAW_H
