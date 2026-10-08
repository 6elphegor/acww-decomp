#ifndef NET_WIFIAPCONTEXT_H
#define NET_WIFIAPCONTEXT_H

#include "types.h"
#include "nitro/wm.h"

// WifiAp auto-connect work area (WifiAp_GetBlock(0x10), 0xd18 bytes) with its search list and found-AP records
// (src/ov065/unk_ov065_0226b3c4.cpp namespaces N_c750 / N_be44 / N_b488 / N_ab40, src/ov065/unk_ov065_0226cb18.cpp).

// One SSID to scan for: a user setting (apType 0-5), NWCUSBAP 6, NDWCSHAP 7, FREESPOT 8, Wayport2 9, NINTENDOWFC 10.
typedef struct WifiApSearchEntry {
    /* 0x00 */ u8 lo : 4; // found during the current per-SSID scan
    /* 0x00 */ u8 hi : 4; // alternative apType still to try (WifiAp_SelectApType)
    /* 0x01 */ u8 apType;
    /* 0x02 */ u8 channelIndex;
    /* 0x03 */ u8 ssidLength;
    /* 0x04 */ u8 ssid[0x20];
} WifiApSearchEntry;

// Per found AP.
typedef struct WifiApFoundInfo {
    /* 0x0 */ u8 status;     // 0 untried, 1 failed, 2 net setup failed, 3 auth mismatch, 4 rejected
    /* 0x1 */ u8 apType;
    /* 0x2 */ u8 linkLevel;
    /* 0x3 */ u8 channel;    // channel + 1
} WifiApFoundInfo;

// A user AP setting (0x100 bytes; WifiAp_SetApEntry copies 0xf0 of them in).
typedef struct WifiApUserSetting {
    /* 0x00 */ u8 unk_00[0x40];
    /* 0x40 */ u8 ssid[2][0x20];  // the second one is used when setType is 1
    /* 0x80 */ u8 wepKey[4][0x10]; // (WifiAp_GetWepSetting copies 0x50 bytes from here: the keys and the addresses)
    /* 0xc0 */ u8 ip[4];          // 0.x.x.x: DHCP
    /* 0xc4 */ u8 gateway[4];
    /* 0xc8 */ u8 dns[2][4];
    /* 0xd0 */ u8 prefixLength;   // of the netmask
    /* 0xd1 */ u8 key2[0x14];     // (the settings 3-5 of WifiAp_GetWepSetting)
    /* 0xe5 */ u8 unk_e5;
    /* 0xe6 */ u8 wepMode : 2;
    /* 0xe6 */ u8 unk_e6 : 6;
    /* 0xe7 */ u8 setType;        // 0xff: not set
    /* 0xe8 */ u8 unk_e8[0x18];
} WifiApUserSetting;

typedef struct WifiApContext {
    /* 0x000 */ WifiApUserSetting userSettings[3];
    /* 0x300 */ WifiApSearchEntry searchEntries[9];
    /* 0x444 */ WifiApFoundInfo foundApInfo[11]; // (the 11th: the AP just found, before WifiAp_SortFoundAp)
    /* 0x470 */ WMBssDesc foundApBss[11];
    /* 0xcb0 */ u64 stepStartTick;
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
} WifiApContext;
#ifdef __cplusplus
static_assert(sizeof(WifiApContext) == 0xd18, "WifiApContext");
#endif

#endif
