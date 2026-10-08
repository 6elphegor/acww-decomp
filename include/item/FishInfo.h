#ifndef ITEM_FISHINFO_H
#define ITEM_FISHINFO_H

#include "types.h"

// Per-fish constants, by fish id (0x00-0x37 the fish, 0x38-0x3a the static display models, 0x3b the shadow):
// 6 bytes each on the DS (0x020ca314).
struct FishInfo {
    u8 sizeClass;    // the shadow's size class (index into the fish shadow parameters, 0 = smallest)
    u8 rodClass;     // index into the rod parameter tables (bite reach, the scare radius of a lost fish)
    u8 timingClass;  // index into the per-state frame limits of the hooked fish
    u16 baseSize;    // length (Fish_GetBaseSize)
};

#define FISH_INFO_COUNT 0x3b

extern "C" const FishInfo gFishInfo[FISH_INFO_COUNT];

#endif
