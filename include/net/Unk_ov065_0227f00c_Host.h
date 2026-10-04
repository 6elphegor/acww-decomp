#ifndef NET_UNK_OV065_0227F00C_HOST_H
#define NET_UNK_OV065_0227F00C_HOST_H

#include "types.h"

// sockaddr and hostent views used by the GP connect helpers
// (src/ov065/unk_ov065_0227e160.cpp, src/ov065/unk_ov065_0227f2a4.cpp).

struct Unk_ov065_0227f00c_Sa {
    /* 0x0 */ u8 len;
    /* 0x1 */ u8 family;
    /* 0x2 */ u16 port;
    /* 0x4 */ u32 addr;
};

struct Unk_ov065_0227f00c_Host {
    /* 0x0 */ u8 pad_00[0xc];
    /* 0xc */ u32 **addrList;
};

#endif
