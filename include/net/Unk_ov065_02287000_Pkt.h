#ifndef NET_UNK_OV065_02287000_PKT_H
#define NET_UNK_OV065_02287000_PKT_H

#include "types.h"

// NAT negotiation report packet (ov065_063); used by unk_ov065_02285778.cpp and unk_ov065_02286934.cpp.

struct Unk_ov065_02287000_Pkt {
    /* 0x00 */ u8 magic[6];
    /* 0x06 */ u8 version;
    /* 0x07 */ u8 type;
    /* 0x08 */ u32 cookie;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 localIp0;
    /* 0x10 */ u8 localIp1;
    /* 0x11 */ u8 localIp2;
    /* 0x12 */ u8 localIp3;
    /* 0x13 */ u8 localPortHi;
    /* 0x14 */ u8 localPortLo;
    /* 0x15 */ char name[0x43];
};

#endif
