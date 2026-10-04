#ifndef NET_WFCAPSCANENTRY_H
#define NET_WFCAPSCANENTRY_H

#include "types.h"

// ov001 Wi-Fi utility AP search result entry (0x2a bytes, up to 20 per scan; WfcApScan_* in unk_ov001_0221d744.cpp),
// listed by the AP list screen (WfcApList).
struct WfcApScanEntry {
    /* 0x00 */ u8 unk_00[0x20];
    /* 0x20 */ u8 bssid[6];
    /* 0x26 */ u16 linkLevel;
    /* 0x28 */ u8 security;
    /* 0x29 */ u8 unk_29;
};

#endif
