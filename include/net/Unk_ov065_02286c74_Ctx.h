#ifndef NET_UNK_OV065_02286C74_CTX_H
#define NET_UNK_OV065_02286C74_CTX_H

#include "types.h"

// GameSpy NAT negotiation context, its sockaddr and callback types (ov065_063); used by unk_ov065_02285778.cpp
// and unk_ov065_02286934.cpp.

struct Unk_ov065_02286c74_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

typedef void (*Unk_ov065_02286c74_Cb34)(s32 state, void *user);
typedef void (*Unk_ov065_02286c74_Cb38)(s32 code, s32 fd, void *arg, void *user);

struct Unk_ov065_02286c74_Ctx {
    /* 0x00 */ s32 negSock;
    /* 0x04 */ s32 gameSock;
    /* 0x08 */ u32 cookie;
    /* 0x0c */ s32 clientIndex;
    /* 0x10 */ s32 state;
    /* 0x14 */ s32 initAcked[3];
    /* 0x20 */ s32 retryCount;
    /* 0x24 */ s32 maxRetries;
    /* 0x28 */ u32 retryTime;
    /* 0x2c */ u32 peerIp;
    /* 0x30 */ u16 peerPort;
    /* 0x32 */ u8 gotPeerPing;
    /* 0x33 */ u8 sentGotPeerPing;
    /* 0x34 */ Unk_ov065_02286c74_Cb34 unk_34;
    /* 0x38 */ Unk_ov065_02286c74_Cb38 unk_38;
    /* 0x3c */ void *userData;
};

#endif
