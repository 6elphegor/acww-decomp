#ifndef GFX_RGB555_H
#define GFX_RGB555_H

#include "types.h"

// 15-bit GX colour as bitfields (5-bit red, green, blue; bit 15 unused). Room light colours are interpolated
// component-wise through it (src/main/unk_020643dc.cpp), palettes edited in unk_0208f268 / unk_02090268 / ov004.
struct Rgb555 {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

#endif
