#ifndef PLAYER_PLAYERGLASSESMODELREF_H
#define PLAYER_PLAYERGLASSESMODELREF_H

#include "types.h"

extern "C" void PlayerGlassesModelRef_Init(u8 *p);
extern "C" void PlayerGlassesModelRef_Destruct();
// Model/texture reference for the player's face item (glasses); member of the player actor. Its methods are C-named
// (PlayerGlassesModelRef_* in main, 0x0205d480..); a one-byte slot handle (PlayerGlassesModelRef_Init stores the slot).
struct PlayerGlassesModelRef {
    /* 0x00 */ u8 slot;
    PlayerGlassesModelRef() { PlayerGlassesModelRef_Init(&slot); }
    ~PlayerGlassesModelRef() { PlayerGlassesModelRef_Destruct(); }
};

#endif
