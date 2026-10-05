#ifndef NET_GSINADDR_H
#define NET_GSINADDR_H

#include "types.h"

// IPv4 address passed by value to Sock_InetNtoA (in_addr) by the GameSpy code of ov065 (gt2AddressToString,
// qr2_parse_queryA); used by unk_ov065_02285778.cpp, unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct GsInAddr {
    /* 0x00 */ u32 addr;
};

#endif
