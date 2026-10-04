#ifndef PLAYER_UNK_0205C3A4_H
#define PLAYER_UNK_0205C3A4_H

#include "types.h"

// One-byte animation slot handle (AnimSlotRef_* C entries at 0x0205c254..0x0205c3a8: constructor AnimSlotRef_Init,
// destructor AnimSlotRef_Destruct); PlayerActor::bodyAnimSlot/holdAnimSlot, NpcBodyAnimSlot::layers.

struct Unk_0205c3a4 {
    /* 0x00 */ u8 slot;
    Unk_0205c3a4();
    ~Unk_0205c3a4();
};

#endif
