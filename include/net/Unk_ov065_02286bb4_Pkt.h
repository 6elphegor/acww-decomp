#ifndef NET_UNK_OV065_02286BB4_PKT_H
#define NET_UNK_OV065_02286BB4_PKT_H

#include "types.h"

// NAT negotiation packet magic and init/connect packet (ov065_063); used by unk_ov065_02285778.cpp and
// unk_ov065_02286934.cpp.

struct Unk_ov065_02286bb4_Magic {
    /* 0x00 */ u8 b[6];
};

struct Unk_ov065_02286bb4_Pkt {
    /* 0x00 */ u8 magic[6];
    /* 0x06 */ u8 version;
    /* 0x07 */ u8 type;
    /* 0x08 */ u32 cookie;
    /* 0x0c */ u8 peerIp;
    /* 0x0d */ u8 clientIndex;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ u8 peerPort;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 gotPeerPing;
    /* 0x13 */ u8 finished;
    /* 0x14 */ u8 unk_14;
};

#endif
