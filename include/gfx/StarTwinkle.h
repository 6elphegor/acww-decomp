#ifndef GFX_STARTWINKLE_H
#define GFX_STARTWINKLE_H

#include "types.h"
#include "gfx/BgVramTask.h"

// 0x330-byte star-twinkle palette effect (a BgVramTask at +0); used by the observatory overlays ov128/ov129.
// Constructor/destructor in src/main/unk_020b0774.cpp.
class StarTwinkle {
public:
    StarTwinkle();
    ~StarTwinkle();
    /* 0x000 */ BgVramTask task;           // uploads the palette rows
    /* 0x024 */ u8 palette[0x80];          // the palette shown: rows 4..7 of BG palette bgPalette (32 bytes each)
    /* 0x0a4 */ u8 palettes[5][0x80];      // the five states' palettes (menu/star/*.bpl)
    /* 0x324 */ u8 timer[4];               // frames to the next switch, per row
    /* 0x328 */ u8 state[4];               // the state shown, per row
    /* 0x32c */ u8 bgPalette;
};

#endif
