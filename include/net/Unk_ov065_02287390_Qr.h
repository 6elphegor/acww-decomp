#ifndef NET_UNK_OV065_02287390_QR_H
#define NET_UNK_OV065_02287390_QR_H

#include "types.h"

// GameSpy query-and-report object, its packet buffer, word view and callback types (ov065_064
// 0x02287200..0x02287aa4); used by unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct Unk_ov065_02287390_Buf {
    /* 0x00 */ u8 data[0x800];
    /* 0x800 */ s32 len;
};

struct Unk_ov065_02287390_W {
    /* 0x00 */ u32 v;
};

typedef s32 (*Unk_ov065_02287390_Cb88)(u32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb8c)(u32, s32, Unk_ov065_02287390_Buf *, void *);
typedef s32 (*Unk_ov065_02287390_Cb94)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cb98)(s32, void *);
typedef s32 (*Unk_ov065_02287390_Cb9c)(s32, u8 *, void *);
typedef s32 (*Unk_ov065_02287390_Cba0)(u32, void *);
typedef s32 (*Unk_ov065_02287390_Cba4)(u8 *, s32, void *);

struct Unk_ov065_02287390_Qr {
    /* 0x00 */ s32 sock;
    /* 0x04 */ u8 gameName[0x80];
    /* 0x84 */ u8 instanceKey[4];
    /* 0x88 */ Unk_ov065_02287390_Cb88 unk_88;
    /* 0x8c */ Unk_ov065_02287390_Cb8c unk_8c;
    /* 0x90 */ Unk_ov065_02287390_Cb8c unk_90;
    /* 0x94 */ Unk_ov065_02287390_Cb94 unk_94;
    /* 0x98 */ Unk_ov065_02287390_Cb98 unk_98;
    /* 0x9c */ Unk_ov065_02287390_Cb9c unk_9c;
    /* 0xa0 */ Unk_ov065_02287390_Cba0 natNegCallback;
    /* 0xa4 */ Unk_ov065_02287390_Cba4 clientMessageCallback;
    /* 0xa8 */ s32 publicAddressCallback;
    /* 0xac */ s32 lastHeartbeatTime;
    /* 0xb0 */ s32 lastKeepAliveTime;
    /* 0xb4 */ s32 stateChangePending;
    /* 0xb8 */ s32 masterState;
    /* 0xbc */ s32 isPublic;
    /* 0xc0 */ s32 localPort;
    /* 0xc4 */ s32 ownsSocket;
    /* 0xc8 */ s32 natNegEnabled;
    /* 0xcc */ u8 masterAddr[8];
    /* 0xd4 */ s32 rawPacketCallback;
    /* 0xd8 */ u32 recentMessageKeys[10];
    /* 0x100 */ s32 messageKeyIndex;
    /* 0x104 */ s32 publicIp;
    /* 0x108 */ u16 publicPort;
    /* 0x10a */ u16 unk_10a;
    /* 0x10c */ void *userData;
};

#endif
