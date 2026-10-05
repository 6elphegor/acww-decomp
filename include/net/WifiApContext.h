#ifndef NET_WIFIAPCONTEXT_H
#define NET_WIFIAPCONTEXT_H

#include "types.h"
#include "nitro/wm.h"

// WifiAp auto-connect work area (WifiAp_GetBlock(0x10), 0xd18 bytes) with its search list and found-AP records
// (src/ov065/unk_ov065_0226b3c4.cpp namespaces N_c750 / N_be44 / N_b488 / N_ab40, src/ov065/unk_ov065_0226cb18.cpp).

// One SSID to scan for: a user setting (apType 0-5), NWCUSBAP 6, NDWCSHAP 7, FREESPOT 8, Wayport2 9, NINTENDOWFC 10.
struct WifiApSearchEntry {
    /* 0x00 */ u8 lo : 4; // found during the current per-SSID scan
    /* 0x00 */ u8 hi : 4; // alternative apType still to try (WifiAp_SelectApType)
    /* 0x01 */ u8 apType;
    /* 0x02 */ u8 channelIndex;
    /* 0x03 */ u8 ssidLength;
    /* 0x04 */ u8 ssid[0x20];
};

// Per found AP: status (0 untried, 1 failed, 2 net setup failed, 3 auth mismatch, 4 rejected), apType, link level,
// channel + 1.
struct WifiApFoundInfo {
    /* 0x0 */ u8 info[4];
};

struct WifiApContext {
    /* 0x000 */ u8 pad000[0x300]; // the three user AP settings, 0x100 each (WifiAp_SetApEntry)
    /* 0x300 */ WifiApSearchEntry searchEntries[9];
    /* 0x444 */ u8 foundApInfo[0x2c]; // WifiApFoundInfo[11]
    /* 0x470 */ WMBssDesc foundApBss[11];
    /* 0xcb0 */ u32 stepStartTick;
    /* 0xcb4 */ u32 stepStartTickHi;
    /* 0xcb8 */ u8 wepSetting[0x52];
    /* 0xd0a */ u8 dmaNo;
    /* 0xd0b */ u8 powerMode : 2;
    /* 0xd0b */ u8 useSharedKey : 2;
    /* 0xd0b */ u8 searchRestarts : 4;
    /* 0xd0c */ u8 apFilter : 4;
    /* 0xd0c */ u8 netCheckMode : 2;
    /* 0xd0c */ u8 altApTypePending : 2;
    /* 0xd0d */ u8 apType;
    /* 0xd0e */ u8 resumeState;
    /* 0xd0f */ u8 searchIndex;
    /* 0xd10 */ u8 numSearchEntries;
    /* 0xd11 */ s8 scanChannel;
    /* 0xd12 */ u8 numFoundAps;
    /* 0xd13 */ u8 selectedAp;
    /* 0xd14 */ u8 connectFailKind;
    /* 0xd15 */ u8 stepCount;
    /* 0xd16 */ u16 foundChannelMask;
};

#endif
