#ifndef GFX_SPLTEX_H
#define GFX_SPLTEX_H

#include "types.h"

// Texture records of the particle (SPL-style) manager in autoload_2: resource texture / animation-table views
// (src/autoload_2/unk_020fc984.cpp, unk_020fe5c0.cpp), the 20-byte texture table entry and the TEXIMAGE_PARAM
// bitfield view (unk_020f92d4.cpp, unk_020fa0f4.cpp, unk_020fa39c.cpp, unk_020fa488.cpp).
struct Tex {
    /* 0x0 */ u16 c0;
    /* 0x2 */ u16 c1;
    /* 0x4 */ u8 p4[4];
    /* 0x8 */ u16 b0 : 1;
    /* 0x8 */ u16 rest : 15;
};

struct TabBF {
    /* 0x0 */ u32 n : 8;
    /* 0x0 */ u32 step : 8;
    /* 0x0 */ u32 f16 : 1;
    /* 0x0 */ u32 rest : 15;
};
struct TabB {
    /* 0x0 */ u8 n;
    /* 0x1 */ u8 step;
};
union TabU {
    TabBF bf;
    TabB b;
};
struct Tab {
    /* 0x0 */ u8 v[8];
    /* 0x8 */ TabU x;
};

// texture table entry (20 bytes)
struct TexEnt {
    /* 0x00 */ void *e;
    /* 0x04 */ u32 w4;
    /* 0x08 */ u32 w8;
    /* 0x0c */ u32 w12;
    /* 0x10 */ u16 h16;
    /* 0x12 */ u16 h18;
};

struct TexBits {
    /* 0x0 */ u32 fmt : 4;
    /* 0x0 */ u32 sizeS : 4;
    /* 0x0 */ u32 sizeT : 4;
    /* 0x0 */ u32 rep : 2;
    /* 0x0 */ u32 flip : 2;
    /* 0x0 */ u32 c0 : 1;
    /* 0x0 */ u32 pad : 15;
};

#endif
