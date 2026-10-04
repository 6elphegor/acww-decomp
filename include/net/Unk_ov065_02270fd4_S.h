#ifndef NET_UNK_OV065_02270FD4_S_H
#define NET_UNK_OV065_02270FD4_S_H

#include "types.h"

// GameSpy login challenge/token response (src/ov065/unk_ov065_0226fc18.cpp, src/ov065/unk_ov065_02270e34.cpp).

struct Unk_ov065_02270fd4_S {
    /* 0x000 */ s32 result;
    /* 0x004 */ u8 unk_04[0x46];
    /* 0x04a */ char token[0x100];
    /* 0x14a */ u8 unk_14a[0x2d];
    /* 0x177 */ char challenge[0x4d];
};

#endif
