#ifndef NET_UNK_OV065_0226AB40_GLB_H
#define NET_UNK_OV065_0226AB40_GLB_H

#include "types.h"

// WifiLink send state (sWifiLinkSendState, data; used by src/ov065/unk_ov065_02268c64.cpp and
// src/ov065/unk_ov065_0226b3c4.cpp) and its receive callback type.

typedef void (*Unk_ov065_0226ac54_Cb)(void *, void *, void *, u32);

struct Unk_ov065_0226ab40_Glb {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 unk_01[3];
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 unk_0c[0x18];
    /* 0x24 */ u32 sendResult;
    /* 0x28 */ Unk_ov065_0226ac54_Cb recvCallback;
};

#endif
