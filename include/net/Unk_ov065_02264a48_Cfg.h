#ifndef NET_UNK_OV065_02264A48_CFG_H
#define NET_UNK_OV065_02264A48_CFG_H

#include "types.h"

// IP stack init config and the unsigned view of the sIpRandState LCG
// (src/ov065/unk_ov065_02261638.cpp, src/ov065/unk_ov065_02264d0c.cpp).

struct Unk_ov065_02264a48_Cfg {
    /* 0x00 */ u32 stackFlags;
    /* 0x04 */ void *(*unk_04)(u32);
    /* 0x08 */ void (*unk_08)(void *);
    /* 0x0c */ s32 (*unk_0c)(void);
    /* 0x10 */ s32 (*unk_10)(void);
    /* 0x14 */ u32 randSeed;
    /* 0x18 */ u32 randSeedHi;
    /* 0x1c */ u32 recvRingBuf;
    /* 0x20 */ u32 recvRingSize;
    /* 0x24 */ u32 mss;
    /* 0x28 */ u32 requestedIp;
    /* 0x2c */ u32 yieldMode;
};

struct Unk_ov065_02264a48_Rng {
    /* 0x00 */ u64 value;
    /* 0x08 */ u64 multiplier;
    /* 0x10 */ u64 increment;
};

#endif
