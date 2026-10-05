#ifndef NET_SOCKUDPDROPCOUNTERS_H
#define NET_SOCKUDPDROPCOUNTERS_H

#include "types.h"

// Socket-layer UDP drop counters (sSockUdpDropCount, defined in src/ov065/unk_ov065_0225f5c8.cpp).

struct SockUdpDropCounters {
    /* 0x0 */ u32 noMemDrops;
    /* 0x4 */ u32 queueFullDrops;
};

#endif
