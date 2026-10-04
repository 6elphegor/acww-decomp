#ifndef PLAYER_PLAYERPICKUPWORK_H
#define PLAYER_PLAYERPICKUPWORK_H

#include "types.h"

// Action work (PlayerActor::actionWorkRaw, 0x7d0) of the pick-up, pick-up reach, pick-up fanfare and stow actions.
// 0x04 is the furniture actor index (s, setupPickUp / pickUpUpdateItem) or the pick-up reach step / unit x/z / kind
// bytes (b, pickUpReachUpdate / mainPickUpReach). Used in src/main/unk_02004558.cpp / unk_02004558_extra.cpp.

struct PlayerPickUpWork {
    /* 0x0 */ u8 commitUnit;
    /* 0x1 */ u8 fanfareStep;
    /* 0x2 */ u8 unitX;
    /* 0x3 */ u8 unitZ;
    /* 0x4 */ union { s32 s; struct { u8 unk_04, unk_05, unk_06, unk_07; } b; } unk_04;
    /* 0x8 */ u8 storeStep;
    /* 0x9 */ u8 pickUnitX;
    /* 0xa */ u8 pickUnitZ;
};

#endif
