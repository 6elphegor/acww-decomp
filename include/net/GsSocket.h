#ifndef NET_GSSOCKET_H
#define NET_GSSOCKET_H

#include "types.h"

// GameSpy socket helpers (GsSock_*, src/ov065/unk_ov065_022789fc.cpp namespace FB, src/ov065/unk_ov065_0227931c.cpp
// namespace Ng): sockaddr copy, the local hostent sGsLocalHostEnt with its address list and address, poll fd.

struct GsSockAddr {
    /* 0x0 */ u8 b[8];
};

// sGsLocalHostEnt (BSD hostent layout)
struct GsHostEnt {
    /* 0x0 */ u32 hostName;
    /* 0x4 */ u32 aliases;
    /* 0x8 */ s16 addrType;
    /* 0xa */ s16 addrLength;
    /* 0xc */ u32 addrList;
};

// data_ov065_022910a8 (defined in src/ov065/unk_ov065_022789fc.cpp)
struct GsHostAddrList {
    /* 0x0 */ u32 *firstAddr;
    /* 0x4 */ u32 listEnd;
    /* 0x8 */ u8 pad_08[0x10];
};

// data_ov065_02291094, the address GsHostAddrList::firstAddr points to (defined in src/ov065/unk_ov065_022789fc.cpp)
struct GsHostAddr {
    /* 0x00 */ u32 hostIp;
    /* 0x04 */ u8 pad_04[0x10];
};

struct GsPollFd {
    /* 0x0 */ s32 fd;
    /* 0x4 */ s16 events;
    /* 0x6 */ s16 revents;
};

#endif
