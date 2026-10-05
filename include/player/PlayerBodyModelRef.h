#ifndef PLAYER_PLAYERBODYMODELREF_H
#define PLAYER_PLAYERBODYMODELREF_H

#include "types.h"

// Slot handle for the player body model/texture (PlayerBodyModelRef_* C entries at 0x0205c66c..0x0205c780;
// constructor = PlayerBodyModelRef_Init, destructor = PlayerBodyModelRef_Destruct). One-byte slot handle.
struct PlayerBodyModelRef {
    /* 0x00 */ u8 slot;
    PlayerBodyModelRef();
    ~PlayerBodyModelRef();
};

#endif
