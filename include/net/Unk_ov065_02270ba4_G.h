#ifndef NET_UNK_OV065_02270BA4_G_H
#define NET_UNK_OV065_02270BA4_G_H

#include "types.h"
#include "net/Unk_ov065_02270ba4_Sub.h"
#include "net/Unk_ov065_02270eb0_X.h"

// DWC core state (transport, GP connection, callbacks, login/friend/match controls) and the DWC login control
// (src/ov065/unk_ov065_0226fc18.cpp and src/ov065/unk_ov065_02270e34.cpp, namespace F02270b74 in both).

struct Unk_ov065_02270ba4_G {
    /* 0x000 */ void *transportSocket;
    /* 0x004 */ void *gt2ConnectedCallback;
    /* 0x008 */ void *gt2ReceivedCallback;
    /* 0x00c */ void *gt2ClosedCallback;
    /* 0x010 */ void *gt2PingCallback;
    /* 0x014 */ void *gt2SendBufferSize;
    /* 0x018 */ void *gt2RecvBufferSize;
    /* 0x01c */ Unk_ov065_02270ba4_Sub gpConnection;
    /* 0x020 */ void *userData;
    /* 0x024 */ u32 state;
    /* 0x028 */ u32 prevState;
    /* 0x02c */ u8 myAid;
    /* 0x02d */ u8 isClosingAll;
    /* 0x02e */ u16 unk_2e;
    /* 0x030 */ u32 ownProfileId;
    /* 0x034 */ u8 buddyRequestText[0x20];
    /* 0x054 */ void *gameName;
    /* 0x058 */ void *secretKey;
    /* 0x05c */ u32 loginCallback;
    /* 0x060 */ u32 loginCallbackArg;
    /* 0x064 */ u32 updateCallback;
    /* 0x068 */ u32 updateCallbackArg;
    /* 0x06c */ u32 matchCallback;
    /* 0x070 */ u32 matchCallbackArg;
    /* 0x074 */ u32 serverMatchCallback;
    /* 0x078 */ u32 serverMatchCallbackArg;
    /* 0x07c */ u32 closedCallback;
    /* 0x080 */ u32 closedCallbackArg;
    /* 0x084 */ u8 loginControl[0x2e8 - 0x84];
    /* 0x2e8 */ u8 friendControl[0x33c - 0x2e8];
    /* 0x33c */ u8 matchControl[0x34c - 0x33c];
    /* 0x34c */ void *qr2Object;
    /* 0x350 */ u8 unk_350[4];
    /* 0x354 */ u8 qr2ShutdownPending;
    /* 0x355 */ u8 unk_355[0x420 - 0x355];
    /* 0x420 */ void *serverBrowser;
    /* 0x424 */ u8 unk_424[0x7a0 - 0x424];
    /* 0x7a0 */ u8 netChannelTable[4];
};

struct Unk_ov065_02270eb0_H {
    /* 0x00 */ void *gpConnection;
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ u32 gameCode;
    /* 0x10 */ u8 unk_10[8];
    /* 0x18 */ void (*unk_18)(s32, s32, u32); // Unk_ov065_02270c94_Cb in the TUs
    /* 0x1c */ u32 resultCallbackArg;
    /* 0x20 */ Unk_ov065_02270eb0_P *userData;
    /* 0x24 */ u8 unk_24[4];
    /* 0x28 */ void *nasAuthWork;
    u64 nasAuthStartTick;
    s32 gpConnectPending;
    u64 gpConnectStartTick;
    Unk_ov065_02270eb0_Tri loginId;
    char authToken[0x100];
    char authChallenge[0x100];
    u8 loginIdText[9];
    char gsbrcd[0x100];
};

#endif
