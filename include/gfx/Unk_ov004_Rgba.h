#ifndef GFX_UNK_OV004_RGBA_H
#define GFX_UNK_OV004_RGBA_H

#include "types.h"

// Four-byte colour value (RGB5 + alpha) built by constructor in ov004 static data (recycle box, check-in gate, ...).
struct Unk_ov004_Rgba {
    /* 0x0 */ u8 red;
    /* 0x1 */ u8 green;
    /* 0x2 */ u8 blue;
    /* 0x3 */ u8 alpha;
    Unk_ov004_Rgba(u8 a, u8 b, u8 c, u8 d) {
        red = a;
        green = b;
        blue = c;
        alpha = d;
    }
};

#endif
