#ifndef PLAYER_PLAYERBODYMODELREF_H
#define PLAYER_PLAYERBODYMODELREF_H

#include "types.h"

// Slot handle for the player body model/texture (PlayerBodyModelRef_* C entries at 0x0205c66c..0x0205c780;
// constructor = PlayerBodyModelRef_Init, destructor = PlayerBodyModelRef_Destruct). Layout not known yet.
struct PlayerBodyModelRef {
    PlayerBodyModelRef();
    ~PlayerBodyModelRef();
};

#endif
