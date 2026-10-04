#ifndef NET_UNK_OV065_022833B4_SRC_H
#define NET_UNK_OV065_022833B4_SRC_H

#include "types.h"
#include "net/Unk_ov065_022833b4_Pair.h"

// Callback source view (callback/param pair at 0xc) of ov065_057 (src/ov065/unk_ov065_02283304.cpp,
// unk_ov065_02281a5c.cpp, unk_ov065_02283720.cpp).

struct Unk_ov065_022833b4_Src {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ Unk_ov065_022833b4_Pair callback;
};

#endif
