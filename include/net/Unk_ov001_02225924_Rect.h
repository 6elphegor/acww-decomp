#ifndef NET_UNK_OV001_02225924_RECT_H
#define NET_UNK_OV001_02225924_RECT_H

#include "types.h"

// ov001 Wi-Fi setup screen rectangle and point (touch hit tests in unk_ov001_02225924.cpp, unk_ov001_02225f40.cpp).
struct Unk_ov001_02225924_Rect {
    /* 0x0 */ u16 x;
    /* 0x2 */ u16 y;
    /* 0x4 */ u16 w;
    /* 0x6 */ u16 h;
};

struct Unk_ov001_02225924_Pt {
    /* 0x0 */ u16 x;
    /* 0x2 */ u16 y;
};

#endif
