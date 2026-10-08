#ifndef NET_WIFILINKCONFIG_H
#define NET_WIFILINKCONFIG_H

#include "types.h"

// WifiLink_StartupAsync's configuration (the SDK's WCMConfig): DMA channel and the buffer the scan keeps the found
// access points' BSS descriptors in (src/ov065/unk_ov065_02268c64.cpp WifiLink_ApplyConfig; filled by ov001's
// SimpleStart / AOSS set-up and ov065 WifiAp_ProcessStartup).
struct WifiLinkConfig {
    /* 0x0 */ s32 dmaNo;
    /* 0x4 */ void *bssDescBuffer;
    /* 0x8 */ s32 bssDescBufferSize;
    /* 0xc */ s32 bssDescMode;  // 1: replace the oldest entry when the buffer is full
};
#ifndef __cplusplus
typedef struct WifiLinkConfig WifiLinkConfig;
#endif

#endif
