#ifndef NET_UNK_OV065_0226B27C_CFG_H
#define NET_UNK_OV065_0226B27C_CFG_H

#include "types.h"

// WifiAp_Init config, the WifiAp allocator block (sWifiApAllocator) and two bitfield views of WifiAp context
// bytes 0xd0b / 0xd0c (src/ov065/unk_ov065_0226ad84.cpp).

struct Unk_ov065_0226b27c_Cfg {
    /* 0x0 */ void *(*unk_00)(u32, u32);
    /* 0x4 */ void (*unk_04)(u32, void *, u32);
    /* 0x8 */ u8 dmaNo;
    /* 0x9 */ u8 powerMode;
    /* 0xa */ u8 apFilter;
    /* 0xb */ u8 netCheckMode;
};

struct Unk_ov065_0226b27c_F8 {
    /* 0x0 */ void *(*unk_00)(u32, u32);
    /* 0x4 */ void (*unk_04)(u32, void *, u32);
    /* 0x8 */ u32 unk_08;
};

struct Unk_ov065_0226b27c_B0b {
    /* 0x0 */ u8 lo : 2;
};

struct Unk_ov065_0226b27c_B0c {
    /* 0x0 */ u8 lo : 4;
    /* 0x0 */ u8 mid : 2;
};

#endif
