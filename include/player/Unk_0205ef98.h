#ifndef PLAYER_UNK_0205EF98_H
#define PLAYER_UNK_0205EF98_H

#include "types.h"

// One-byte slot handle of the player skin/hair palette (PlayerPaletteRef_* C entries; constructor PlayerPaletteRef_Init
// 0x0205ef98, destructor PlayerPaletteRef_Destruct); PlayerActor::skinHairPalette.

struct Unk_0205ef98 {
    /* 0x00 */ u8 slot;
    Unk_0205ef98();
    ~Unk_0205ef98();
};

#endif
