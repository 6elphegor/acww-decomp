#ifndef TOWN_VISITORPOS_H
#define TOWN_VISITORPOS_H

// Visiting special NPC's acre position (TownSessionState_GetVisitorPos). Methods at 0x020868cc..
// (src/main/unk_02085940.cpp).
#include "types.h"
#include "gfx/VecFx32.h"


struct VisitorPos {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 z;

    void getPos(VecFx32 *out) const;
    void setPos(s32 a, s32 b);
    BOOL pickRandomPos();
    BOOL pickFreeInAcre(VecFx32 *out, s32 *pos, void *ctx);
    s32 countFreeInAcre(s32 *pos, void *ctx);
};

#endif
