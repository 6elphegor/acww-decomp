#ifndef NET_UNK_OV065_02290814_H
#define NET_UNK_OV065_02290814_H

#include "types.h"

// DWC matchmaking control (sDwcMatch, 0x45c bytes; src/ov065/unk_ov065_022723b8.cpp DwcMatch_*, and
// src/ov065/unk_ov065_02270e34.cpp). Merged from the F02271da0, F022751b0 and F02275c60 views.

typedef s32 (*Unk_ov065_0227627c_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290814_Sub {
    /* 0x00 */ u32 transportSocket;
};

// NAT negotiation request (sDwcMatch->nnRequest; DwcMatch_SendNnRequest)
struct Unk_ov065_02275474_Arg {
    /* 0x00 */ u8 clientIndex;
    /* 0x01 */ u8 retryCount;
    /* 0x02 */ u16 peerPort;
    /* 0x04 */ u32 peerIp;
    /* 0x08 */ u32 cookie;
};

struct Unk_ov065_02290814 {
    /* 0x000 */ u32 gpConnection;
    /* 0x004 */ Unk_ov065_02290814_Sub *transportSocketPtr;
    /* 0x008 */ u32 transportCallbacks;
    /* 0x00c */ u8 connectRetryCount;
    /* 0x00d */ u8 numClients;
    /* 0x00e */ u8 numValidClients;
    /* 0x00f */ u8 unk_0f;
    /* 0x010 */ u32 qrHandle;
    /* 0x014 */ volatile u8 numPlayers;
    /* 0x015 */ volatile u8 matchType;
    /* 0x016 */ u8 maxPlayers;
    /* 0x017 */ u8 unk_17;
    /* 0x018 */ u8 unk_18;
    /* 0x019 */ u8 unk_19;
    /* 0x01a */ u16 publicPort;
    /* 0x01c */ u32 publicIp;
    /* 0x020 */ u32 reservation;
    /* 0x024 */ u32 memberIps[32];
    /* 0x0a4 */ u16 memberPorts[32];
    /* 0x0e4 */ u32 serverBrowser;
    /* 0x0e8 */ s32 queryRetryMode;
    /* 0x0ec */ u32 queryRetryTick;
    /* 0x0f0 */ u32 queryRetryTickHi;
    /* 0x0f4 */ u32 memberProfileIds[32];
    /* 0x174 */ u8 nnRetryCount;
    /* 0x175 */ u8 nnFailCount;
    /* 0x176 */ u16 nnCookieHigh;
    /* 0x178 */ u32 nnLastCookie;
    /* 0x17c */ u32 nnRetryTime;
    /* 0x180 */ u32 nnRetryTimeHi;
    /* 0x184 */ u32 connectWaitTime;
    /* 0x188 */ u32 connectWaitTimeHi;
    /* 0x18c */ Unk_ov065_02275474_Arg nnRequest;
    /* 0x198 */ s32 state;
    /* 0x19c */ u8 unk_19c;
    /* 0x19d */ u8 unk_19d;
    /* 0x19e */ u8 unk_19e;
    /* 0x19f */ u8 unk_19f;
    /* 0x1a0 */ u8 closeState;
    /* 0x1a1 */ u8 unk_1a1;
    /* 0x1a2 */ u8 unk_1a2;
    /* 0x1a3 */ u8 unk_1a3;
    /* 0x1a4 */ u8 unk_1a4;
    /* 0x1a5 */ u8 unk_1a5;
    /* 0x1a6 */ u16 syncWaitMs;
    /* 0x1a8 */ u16 unk_1a8;
    /* 0x1aa */ u16 targetServerPort;
    /* 0x1ac */ u32 targetServerIp;
    /* 0x1b0 */ u32 unk_1b0;
    /* 0x1b4 */ u32 unk_1b4;
    /* 0x1b8 */ u32 unk_1b8;
    /* 0x1bc */ u32 unk_1bc;
    /* 0x1c0 */ u32 unk_1c0;
    /* 0x1c4 */ u32 unk_1c4;
    /* 0x1c8 */ u32 syncAckMask;
    /* 0x1cc */ u32 unk_1cc;
    /* 0x1d0 */ u32 unk_1d0;
    /* 0x1d4 */ u32 unk_1d4;
    /* 0x1d8 */ u32 unk_1d8;
    /* 0x1dc */ u32 unk_1dc;
    /* 0x1e0 */ u32 waitStartTime;
    /* 0x1e4 */ u32 waitStartTimeHi;
    /* 0x1e8 */ u32 profileId;
    /* 0x1ec */ u32 serverProfileId;
    /* 0x1f0 */ u32 targetProfileId;
    /* 0x1f4 */ u32 unk_1f4;
    /* 0x1f8 */ u32 memberConnectIps[32];
    /* 0x278 */ u16 memberConnectPorts[32];
    /* 0x2b8 */ u8 aids[0x20];
    /* 0x2d8 */ u32 validAidMask;
    /* 0x2dc */ u8 unk_2dc[0x54];
    /* 0x330 */ u8 unk_330[0x84];
    /* 0x3b4 */ u8 cmdType;
    /* 0x3b5 */ u8 unk_3b5;
    /* 0x3b6 */ u16 cmdPort;
    /* 0x3b8 */ u32 cmdIp;
    /* 0x3bc */ u32 cmdArgs[32];
    /* 0x43c */ u32 cmdProfileId;
    /* 0x440 */ u32 cmdArgCount;
    /* 0x444 */ u32 cmdTime;
    /* 0x448 */ u32 cmdTimeHi;
    /* 0x44c */ Unk_ov065_0227627c_Fn unk_44c;
    /* 0x450 */ u32 matchCallbackParam;
    /* 0x454 */ u32 unk_454;
    /* 0x458 */ u32 unk_458;
};

#endif
