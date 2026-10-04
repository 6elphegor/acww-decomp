#ifndef GFX_UNK_OV068_022708FC_COLOR_H
#define GFX_UNK_OV068_022708FC_COLOR_H

#include "types.h"

// 4-byte colour record of the ov068 room objects (constructor-initialised static data).
struct Unk_ov068_022708fc_Color {
    /* 0x00 */ u8 a, b, c, d;
    Unk_ov068_022708fc_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

#endif
