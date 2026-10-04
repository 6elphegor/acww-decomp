#ifndef GFX_UNK_OV004_QUAD_H
#define GFX_UNK_OV004_QUAD_H

#include "types.h"

// Four-byte colour value (RGB5 + alpha) built by constructor in ov004 static data (room boards, museum, villagers).
struct Unk_ov004_Quad {
    /* 0x0 */ u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

#endif
