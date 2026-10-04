#ifndef NET_UNK_OV065_02281974_PAIR_H
#define NET_UNK_OV065_02281974_PAIR_H

#include "types.h"

// Two-word GP callback record and its wrapper
// (src/ov065/unk_ov065_0228176c.cpp, src/ov065/unk_ov065_02281a5c.cpp).

struct Unk_ov065_02281974_Pair {
    /* 0x0 */ s32 a;
    /* 0x4 */ s32 b;
};

struct Unk_ov065_02281974_Nest {
    /* 0x0 */ Unk_ov065_02281974_Pair p;
};

#endif
