#ifndef NET_UNK_OV065_0227C538_NODE_H
#define NET_UNK_OV065_0227C538_NODE_H

#include "types.h"

// GameSpy Presence profile list node, its buddy-status record, callback pair and point
// (src/ov065/unk_ov065_0227cd34.cpp namespaces Nc/Nd, unk_ov065_0227c6f0.cpp, unk_ov065_0227bd20.cpp,
// unk_ov065_0227f2a4.cpp, unk_ov065_0227e160.cpp).

struct Unk_ov065_0227c538_Pair {
    /* 0x0 */ s32 func;
    /* 0x4 */ s32 param;
};

struct Unk_ov065_0227c538_Sub {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ char *unk_08;
    /* 0x0c */ char *locationString;
    /* 0x10 */ s32 ip;
    /* 0x14 */ s32 port;
};

struct Unk_ov065_0227c538_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ Unk_ov065_0227c538_Sub *unk_08;
    /* 0x0c */ s32 infoCache;
    /* 0x10 */ char *authSig;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 result;
    /* 0x20 */ Unk_ov065_0227c538_Node *next;
};

struct Unk_ov065_0227c564_Z {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
};

#endif
