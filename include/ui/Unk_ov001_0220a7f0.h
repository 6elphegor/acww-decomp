#ifndef UI_UNK_OV001_0220A7F0_H
#define UI_UNK_OV001_0220A7F0_H

#include "types.h"

// Small records of the ov001 on-screen keyboard (namespace N_0a758 of unk_ov001_0220aba4.cpp / unk_ov001_02208c2c.cpp).

struct Unk_ov001_0220a7f0_Reg {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u16 h4;
};

struct Unk_ov001_0220a7f0_Pos {
    /* 0x00 */ volatile u16 x, y, w, h;
    Unk_ov001_0220a7f0_Pos() { x = 0; y = 0; w = 0; h = 0; }
};

struct Unk_ov001_0220a7f0_H {
    /* 0x00 */ u16 v;
    /* 0x02 */ u16 v2;
    /* 0x04 */ u16 v3;
    /* 0x06 */ u16 v4;
    Unk_ov001_0220a7f0_H() { v = 0; v2 = 0; v3 = 0; v4 = 0; }
};

#endif
