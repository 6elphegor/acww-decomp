#ifndef PLAYER_FISHBOBBERSTATES_H
#define PLAYER_FISHBOBBERSTATES_H

// State handlers of the fishing bobber, filed under FishBobberStates in symbols.txt (same object as FishBobber; they
// sit in a member-pointer table). Defined in src/main/unk_0205f284.cpp.
#include "types.h"
#include "player/FishBobber.h"

class FishBobberStates : public FishBobber {
public:
    void updateCastSwing();
    void updateAct09();
    void updateEscape();
    void updateReelIn();
    void updateHooked();
    void updateBite();
    void updateFloat();
    void updateCast();
    void updateCastFail();
    void updateHeld();
    void updateIdle();
};

#endif // PLAYER_FISHBOBBERSTATES_H
