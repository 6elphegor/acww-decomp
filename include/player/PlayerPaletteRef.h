#ifndef PLAYER_PLAYERPALETTEREF_H
#define PLAYER_PLAYERPALETTEREF_H

#include "types.h"

// One-byte slot handle of the player skin/hair palette (PlayerPaletteRef_* C entries; constructor PlayerPaletteRef_Init
// 0x0205ef98, destructor PlayerPaletteRef_Destruct); PlayerActor::skinHairPalette.

struct PlayerPaletteRef {
    /* 0x00 */ u8 slot;
    PlayerPaletteRef();
    ~PlayerPaletteRef();
};

#endif
