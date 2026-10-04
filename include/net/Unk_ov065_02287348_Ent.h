#ifndef NET_UNK_OV065_02287348_ENT_H
#define NET_UNK_OV065_02287348_ENT_H

#include "types.h"

// NAT negotiation entry view (ov065_064); used by unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct Unk_ov065_02287348_Ent {
    /* 0x00 */ s32 negSock;
    /* 0x04 */ s32 gameSock;
    /* 0x08 */ s32 cookie;
    /* 0x0c */ s32 clientIndex;
    /* 0x10 */ s32 state;
    /* 0x14 */ u8 unk_14[0x2c];
};

#endif
