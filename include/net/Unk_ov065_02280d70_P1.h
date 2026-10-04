#ifndef NET_UNK_OV065_02280D70_P1_H
#define NET_UNK_OV065_02280D70_P1_H

#include "types.h"

// sockaddr written as two words by gpiPeerStartConnect
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct Unk_ov065_02280d70_Sa {
    /* 0x0 */ s32 unk_00;
    /* 0x4 */ s32 addr;
};

#endif
