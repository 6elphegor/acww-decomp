#ifndef GFX_STARTWINKLE_H
#define GFX_STARTWINKLE_H

#include "types.h"

// 0x330-byte star-twinkle palette effect (a BgVramTask at +0); used by the observatory overlays ov128/ov129.
// Constructor/destructor in src/main/unk_020b0774.cpp.
class StarTwinkle {
public:
    StarTwinkle();
    ~StarTwinkle();
    /* 0x000 */ u32 unk_00[0x330 / 4];
};

#endif
