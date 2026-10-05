#ifndef NET_WIFIAPNDWCSHAPPERMTABLE_H
#define NET_WIFIAPNDWCSHAPPERMTABLE_H

#include "types.h"

// The 24-byte NDWCSHAP permutation table as a struct, copied onto the stack by WifiAp_DecodeNdwcshapSsid
// (src/ov065/unk_ov065_0226cb18.cpp; also included by src/ov065/unk_ov065_0226b3c4.cpp).

struct WifiApNdwcshapPermTable {
    /* 0x00 */ u8 b[24];
};

#endif
