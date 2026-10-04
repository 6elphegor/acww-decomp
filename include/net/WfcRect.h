#ifndef NET_WFCRECT_H
#define NET_WFCRECT_H

#include "types.h"

// ov001 Wi-Fi setup u16 rectangle (edges: right = left + width, see WfcUtil_RectFromPosSize) and point: WfcUtil_SetRect /
// SetPoint (unk_ov001_02225924.cpp), touch input (unk_ov001_02225f40.cpp), header and dialog position tables
// (unk_ov001_0221eb38.cpp, unk_ov001_0221feac.cpp) and the other ov001 screens' touch rectangles.
struct WfcRect {
    /* 0x0 */ u16 left;
    /* 0x2 */ u16 top;
    /* 0x4 */ u16 right;
    /* 0x6 */ u16 bottom;
};

struct WfcPoint {
    /* 0x0 */ u16 x;
    /* 0x2 */ u16 y;
};

#endif
