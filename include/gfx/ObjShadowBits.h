#ifndef GFX_OBJSHADOWBITS_H
#define GFX_OBJSHADOWBITS_H

// Bitfield views used by the object shadow strip (ObjShadowStrip, src/main/unk_020abea8.cpp / unk_020ac750.cpp):
// a GX 5:5:5:1 colour and a packed 6/19/1/6 geometry word.
#include "types.h"

struct RGB {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};

struct Pack {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

#endif // GFX_OBJSHADOWBITS_H
