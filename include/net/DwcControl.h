#ifndef NET_DWCCONTROL_H
#define NET_DWCCONTROL_H

#include "types.h"
#include "net/GsGpConnection.h"
#include "net/DwcFriendControl.h"
#include "net/DwcUserData.h"

// DWC friend-match core state sDwcControl (DwcCore_Init: GT2 socket and callbacks, GP connection, state, aid, own
// profile id, user callbacks, login / friend / match controls) and the DWC login control.
// src/ov065/unk_ov065_0226fc18.cpp and src/ov065/unk_ov065_02270e34.cpp.

typedef void (*DwcDoneCallback)(s32, s32, s32);                       // login / update-servers done (error, value, arg)
typedef void (*DwcMatchedCallback)(s32, s32, s32);                    // peer match done
typedef void (*DwcMatchedScCallback)(s32, s32, s32, s32, s32, s32);   // server-client match done
typedef void (*DwcConnectionClosedCallback)(s32, s32, s32, s32, s32, s32);
typedef void (*DwcLoginResultCallback)(s32, s32, u32);                // DwcLoginControl result (DwcLogin_OnLoginDone)
typedef void (*DwcNasLoginCallback)(void *, void *, u32);             // after NAS login (token, challenge, arg)

// sDwcLoginControl = &DwcControl::loginControl (0x264 bytes, cleared by DwcLogin_InitControl).
struct DwcLoginControl {
    /* 0x000 */ GsGpConnection *gpConnection;
    /* 0x004 */ s32 state;
    /* 0x008 */ u32 productId; // GsGp_Initialize argument
    /* 0x00c */ u32 gameCode;
    /* 0x010 */ u32 unk_10; // DwcLogin_Start arguments 1 and 2
    /* 0x014 */ u32 unk_14;
    /* 0x018 */ DwcLoginResultCallback resultCallback;
    /* 0x01c */ u32 resultCallbackArg;
    /* 0x020 */ DwcUserData *userData;
    /* 0x024 */ u8 unk_24[4];
    /* 0x028 */ void *nasAuthWork;
    /* 0x02c */ u64 nasAuthStartTick;
    /* 0x034 */ s32 gpConnectPending;
    /* 0x038 */ u64 gpConnectStartTick;
    /* 0x040 */ DwcLoginId loginId;
    /* 0x04c */ char authToken[0x100];
    /* 0x14c */ char authChallenge[0x100];
    /* 0x24c */ u8 loginIdText[9];
    /* 0x255 */ char gsbrcd[0x264 - 0x255];
};

struct DwcControl {
    /* 0x000 */ void *transportSocket;
    /* 0x004 */ void *gt2ConnectedCallback;
    /* 0x008 */ void *gt2ReceivedCallback;
    /* 0x00c */ void *gt2ClosedCallback;
    /* 0x010 */ void *gt2PingCallback;
    /* 0x014 */ void *gt2SendBufferSize;
    /* 0x018 */ void *gt2RecvBufferSize;
    /* 0x01c */ GsGpConnection gpConnection;
    /* 0x020 */ void *userData;
    /* 0x024 */ s32 state;
    /* 0x028 */ s32 prevState;
    /* 0x02c */ u8 myAid;
    /* 0x02d */ u8 isClosingAll;
    /* 0x02e */ u16 unk_2e;
    /* 0x030 */ u32 ownProfileId;
    /* 0x034 */ u8 buddyRequestText[0x20];
    /* 0x054 */ void *gameName;
    /* 0x058 */ void *secretKey;
    /* 0x05c */ DwcDoneCallback loginCallback;
    /* 0x060 */ s32 loginCallbackArg;
    /* 0x064 */ DwcDoneCallback updateCallback;
    /* 0x068 */ s32 updateCallbackArg;
    /* 0x06c */ DwcMatchedCallback matchCallback;
    /* 0x070 */ s32 matchCallbackArg;
    /* 0x074 */ DwcMatchedScCallback serverMatchCallback;
    /* 0x078 */ s32 serverMatchCallbackArg;
    /* 0x07c */ DwcConnectionClosedCallback closedCallback;
    /* 0x080 */ s32 closedCallbackArg;
    /* 0x084 */ DwcLoginControl loginControl;
    /* 0x2e8 */ DwcFriendControl friendControl;
    // 0x33c..0x798 is the DWC match control (sDwcMatch, Unk_ov065_02290814: numClients +0xd, qrHandle +0x10,
    // numPlayers +0x14, matchType +0x15, maxPlayers +0x16, serverBrowser +0xe4, memberProfileIds +0xf4, state +0x198);
    // kept flat here until that class is final.
    /* 0x33c */ u8 matchControl[0x349 - 0x33c];
    /* 0x349 */ u8 numClients;
    /* 0x34a */ u8 pad_34a[2];
    /* 0x34c */ void *qr2Object;
    /* 0x350 */ u8 numPlayers;
    /* 0x351 */ u8 matchType;
    /* 0x352 */ u8 maxPlayers;
    /* 0x353 */ u8 pad_353;
    /* 0x354 */ u8 qr2ShutdownPending;
    /* 0x355 */ u8 pad_355[0x420 - 0x355];
    /* 0x420 */ void *serverBrowser;
    /* 0x424 */ u8 pad_424[0x430 - 0x424];
    /* 0x430 */ u32 memberProfileIds[0x29];
    /* 0x4d4 */ u32 matchState;
    /* 0x4d8 */ u8 pad_4d8[0x5f4 - 0x4d8];
    /* 0x5f4 */ u8 aids[0x20];
    /* 0x614 */ u32 validAidMask;
    /* 0x618 */ u8 pad_618[0x7a0 - 0x618];
    /* 0x7a0 */ u8 netChannelTable[4];
};

#endif
