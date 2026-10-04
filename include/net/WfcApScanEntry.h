#ifndef NET_WFCAPSCANENTRY_H
#define NET_WFCAPSCANENTRY_H

#include "types.h"

// ov001 Wi-Fi utility AP search result entry (0x2a bytes, up to 20 per scan; WfcApScan_* in unk_ov001_0221d744.cpp),
// listed by the AP list screen (WfcApList) and filtered by security in WfcApSearch_CheckResults (unk_ov001_0221962c.cpp).
struct WfcApScanEntry {
    /* 0x00 */ u8 ssid[0x20];
    /* 0x20 */ u8 bssid[6];
    /* 0x26 */ u16 linkLevel;
    /* 0x28 */ u8 security; // 0 open, 1 WEP, 2 WPA (RSN element or WPA OUI found)
    /* 0x29 */ u8 unk_29;
};

#endif
