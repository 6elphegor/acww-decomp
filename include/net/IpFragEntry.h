#ifndef NET_IPFRAGENTRY_H
#define NET_IPFRAGENTRY_H

#include "types.h"

// IPv4 reassembly slot: sIpFragTable[8] (Ip_Reassemble in src/ov065/unk_ov065_02261638.cpp; freed by
// IpStack_ResetAddress and expired by IpStack_TimerThreadMain). key = source address, id = IP id, up to 8
// received [start, fin) ranges, tick = OS_GetTick() >> 16 of the first fragment, buf = header copy + data.

struct IpFragEntry {
    /* 0x00 */ u32 key;
    /* 0x04 */ u16 cnt;
    /* 0x06 */ u16 id;
    /* 0x08 */ u16 total;
    /* 0x0a */ u16 end;
    /* 0x0c */ u16 start[8];
    /* 0x1c */ u16 fin[8];
    /* 0x2c */ u32 tick;
    /* 0x30 */ u8 *data;
    /* 0x34 */ u8 *buf;
};

#endif
