#ifndef NET_UNK_OV065_02280D70_P1_H
#define NET_UNK_OV065_02280D70_P1_H

#include "types.h"

// GP buddy views (buddy status ip/port) and the address pair used to connect to a peer
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct Unk_ov065_02280d70_P2 {
    /* 0x00 */ u8 pad_00[0x10];
    /* 0x10 */ s32 ip;
    /* 0x14 */ s32 port;
};

struct Unk_ov065_02280d70_P1 {
    /* 0x0 */ u8 pad_00[8];
    /* 0x8 */ Unk_ov065_02280d70_P2 *buddyStatus;
};

struct Unk_ov065_02280d70_Sa {
    /* 0x0 */ s32 unk_00;
    /* 0x4 */ s32 addr;
};

#endif
