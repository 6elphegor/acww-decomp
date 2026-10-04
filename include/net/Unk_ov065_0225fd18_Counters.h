#ifndef NET_UNK_OV065_0225FD18_COUNTERS_H
#define NET_UNK_OV065_0225FD18_COUNTERS_H

#include "types.h"

// Socket-layer UDP drop counters (sSockUdpDropCount, defined in src/ov065/unk_ov065_0225f5c8.cpp).

struct Unk_ov065_0225fd18_Counters {
    /* 0x0 */ u32 noMemDrops;
    /* 0x4 */ u32 queueFullDrops;
};

#endif
