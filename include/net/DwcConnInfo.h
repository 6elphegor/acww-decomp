#ifndef NET_DWCCONNINFO_H
#define NET_DWCCONNINFO_H

#include "types.h"

// GT2 connection user data (sDwcConnInfo[32], DwcConn_GetConnInfo / gt2GetConnectionData;
// src/ov065/unk_ov065_0226fc18.cpp, src/ov065/unk_ov065_022723b8.cpp).
struct DwcConnInfo {
    /* 0x0 */ u8 slotIndex;
    /* 0x1 */ u8 aid;
    /* 0x2 */ u16 unk_02;
    /* 0x4 */ u32 unk_04;
};

#endif
