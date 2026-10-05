#ifndef NET_WIFIAPCONFIG_H
#define NET_WIFIAPCONFIG_H

#include "types.h"

// WifiAp_Init config (src/ov065/unk_ov065_0226ad84.cpp; passed by DwcInet_StartConnect, src/ov065/unk_ov065_02277974.cpp,
// and the ov001 connection test) and the WifiAp allocator block (sWifiApAllocator). dmaNo / powerMode / apFilter /
// netCheckMode go to WifiApContext 0xd0a..0xd0c.

typedef void *(*WifiApAllocFunc)(u32, u32);
typedef void (*WifiApFreeFunc)(u32, void *, u32);

struct WifiApConfig {
    /* 0x0 */ WifiApAllocFunc allocFunc;
    /* 0x4 */ WifiApFreeFunc freeFunc;
    /* 0x8 */ u8 dmaNo;
    /* 0x9 */ u8 powerMode;
    /* 0xa */ u8 apFilter;
    /* 0xb */ u8 netCheckMode;
};

struct WifiApAllocator {
    /* 0x0 */ WifiApAllocFunc allocFunc;
    /* 0x4 */ WifiApFreeFunc freeFunc;
    /* 0x8 */ u32 unk_08;
};

#endif
