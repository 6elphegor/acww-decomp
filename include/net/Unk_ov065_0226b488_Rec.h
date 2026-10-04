#ifndef NET_UNK_OV065_0226B488_REC_H
#define NET_UNK_OV065_0226B488_REC_H

#include "types.h"

// Scanned access-point record (bss description) and the saved AP entry
// (src/ov065/unk_ov065_0226b3c4.cpp, src/ov065/unk_ov065_0226cb18.cpp).

struct Unk_ov065_0226b488_Rec {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u16 rssi;
    /* 0x04 */ u8 bssid[6];
    /* 0x0a */ u16 ssidLength;
    /* 0x0c */ u8 ssid[0x2c - 0xc];
    /* 0x2c */ u16 capaInfo;
    /* 0x2e */ u8 pad2e[0x36 - 0x2e];
    /* 0x36 */ u16 channel;
    /* 0x38 */ u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226b488_Entry {
    /* 0x00 */ u8 lo : 4;
    /* 0x00 */ u8 hi : 4;
    /* 0x01 */ u8 apType;
    /* 0x02 */ u8 channelIndex;
    /* 0x03 */ u8 ssidLength;
    /* 0x04 */ u8 ssid[0x20];
};

#endif
