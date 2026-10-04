#ifndef PLAYER_ANIMSLOTREF_H
#define PLAYER_ANIMSLOTREF_H

#include "types.h"

// One-byte animation slot handle (AnimSlotRef_* C entries at 0x0205c254..0x0205c3a8: constructor AnimSlotRef_Init,
// destructor AnimSlotRef_Destruct); PlayerActor::bodyAnimSlot/holdAnimSlot, NpcBodyAnimSlot::layers.

struct AnimSlotRef {
    /* 0x00 */ u8 slot;
    AnimSlotRef();
    ~AnimSlotRef();
};

#endif
