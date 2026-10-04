#ifndef NET_UNK_OV065_022831C0_HOST_H
#define NET_UNK_OV065_022831C0_HOST_H

#include "types.h"
#include "net/gpiSearch.h"
#include "net/gpiOperation.h"

// hostent and sockaddr views of gpiStartProfileSearch (shared SOC types are named by N01); used by
// unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and unk_ov065_02283720.cpp.

struct Unk_ov065_022831c0_Host {
    /* 0x00 */ s32 hostName;
    /* 0x04 */ s32 aliases;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 **addrList;
};

struct Unk_ov065_022831c0_Addr {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

#endif
