#ifndef NET_UNK_OV065_0225F1CC_CFG_H
#define NET_UNK_OV065_0225F1CC_CFG_H

#include "types.h"

// Socket library init config (IP settings, allocator callbacks, pool/thread parameters), filled in
// src/ov065/unk_ov065_0225f1a0.cpp and read by unk_ov065_0225f378.cpp.
struct Unk_ov065_0225f1cc_Cfg {
    /* 0x00 */ u32 useDhcp;
    /* 0x04 */ u32 ownIp;
    /* 0x08 */ u32 netmask;
    /* 0x0c */ u32 gateway;
    /* 0x10 */ u32 dns1;
    /* 0x14 */ u32 dns2;
    /* 0x18 */ void *(*unk_18)(u32);
    /* 0x1c */ void (*unk_1c)(void *);
    /* 0x20 */ s32 msgPoolSize;
    /* 0x24 */ u32 recvRingSize;
    /* 0x28 */ u32 recvRingBuf;
    /* 0x2c */ s32 threadPriority;
    /* 0x30 */ s32 mtu;
    /* 0x34 */ s32 recvWindow;
};

#endif
