#ifndef TOWN_PETEFALLSTATE_H
#define TOWN_PETEFALLSTATE_H

// Where Pete fell after a slingshot hit, and whether he is visiting (TownSessionState_GetPeteFall; 12 bytes). Methods
// at 0x02086c04.. (src/main/unk_02085940.cpp, which still has its own copy of this class).
#include "types.h"
#include "gfx/VecFx32.h"

class PeteFallState {
public:
    // (px: the player's position, a VecFx32 * - the definition still takes it as an integer)
    BOOL pickFallPos(s32 px, s32 flip);
    s16 getFacing();
    void setVisitorActive();
    void clearVisitorActive();
    BOOL isVisitorActive();
    void unmarkFallPos();
    void markFallPos();
    BOOL hasFallPos();
    void getPos(VecFx32 *out);
    void setPos(VecFx32 *v);
    void clear();
    void destruct();
    void construct();

    s32 fallPosX;
    s32 fallPosZ;
    u8 fallPosValid : 1;
    u8 visitorActive : 1;
    u8 facing : 2;
};

#endif
