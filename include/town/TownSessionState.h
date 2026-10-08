#ifndef TOWN_TOWNSESSIONSTATE_H
#define TOWN_TOWNSESSIONSTATE_H

#include "types.h"
#include "town/KatieVisitState.h"
#include "town/ShopClosingTime.h"
#include "town/TownTravelState.h"
#include "town/PeteFallState.h"
#include "town/ResettiVisitFlag.h"
#include "town/VisitorSpawnFlags.h"

// The town session's state (gTownSessionState, 0x34 bytes): flag bits, the visitor's position, Katie, the shop's
// closing time, the travel state, Pete's fall, Resetti's visit and the visitor spawn flags. Defined in
// src/main/unk_020850e0.cpp with the TownSessionState_* functions.
class TownSessionState {
public:
    TownSessionState();
    ~TownSessionState();

    /* 0x00 */ u32 flags;          // TownSessionState_TestFlag / SetFlag / ClearFlag
    /* 0x04 */ u8 visitorPos[8];   // the VisitorPos_* record (src/main/unk_02085940.cpp)
    /* 0x0c */ KatieVisitState katie;
    /* 0x18 */ ShopClosingTime closingTime;
    /* 0x20 */ TownTravelState travel;
    /* 0x24 */ PeteFallState peteFall;
    /* 0x30 */ ResettiVisitFlag resetti;
    /* 0x31 */ VisitorSpawnFlags visitorFlags;
};

static_assert(sizeof(TownSessionState) == 0x34, "TownSessionState");

#endif
