#ifndef NET_UNK_OV065_0226AB5C_CONN_H
#define NET_UNK_OV065_0226AB5C_CONN_H

#include "types.h"

// WifiLink work area (WifiLink_GetWork, src/ov065/unk_ov065_02268c64.cpp).

struct Unk_ov065_0226ab5c_Conn {
    /* 0x0000 */ u8 unk_0000[0xf00];
    /* 0x0f00 */ u8 sendBuf[0x1244];
    /* 0x2144 */ u8 targetBssid[6];
    /* 0x214a */ u16 targetSsidLength;
    /* 0x214c */ u8 targetSsid[0x114];
    /* 0x2260 */ s32 phase;
    /* 0x2264 */ u8 unk_2264[7];
    /* 0x226b */ u8 isResetting;
};

#endif
