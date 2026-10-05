#ifndef UI_WFCTEXTRECT_H
#define UI_WFCTEXTRECT_H

#include "types.h"

// Text rectangle {x, y, width, height} of the ov001 on-screen keyboard (WfcTextKb_Create, unk_ov001_02208c2c.cpp).

struct WfcTextRect {
    /* 0x00 */ u16 x;
    /* 0x02 */ u16 y;
    /* 0x04 */ u16 width;
    /* 0x06 */ u16 height;
    WfcTextRect() { x = 0; y = 0; width = 0; height = 0; }
};

#endif
