#ifndef PLAYER_PLAYERGLASSESMODELREF_H
#define PLAYER_PLAYERGLASSESMODELREF_H

#include "types.h"

// Model/texture reference for the player's face item (glasses); member of the player actor. Its methods are C-named
// (PlayerGlassesModelRef_* in main, 0x0205d480..); the object layout is not known yet (the owner reserves 4 bytes).
struct PlayerGlassesModelRef {
    PlayerGlassesModelRef();
    ~PlayerGlassesModelRef();
};

#endif
