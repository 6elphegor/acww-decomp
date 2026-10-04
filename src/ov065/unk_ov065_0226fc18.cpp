// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

extern "C" {
void *sDwcControl;
u32 data_ov065_02290674;
u32 sDwcConnTable[32];
u8 sDwcConnInfo[0x100];
}

namespace F0226f7c8 {
struct Unk_ov065_0226f924_Blob {
    s32 v[3];
};

struct Unk_ov065_0226f924_Cfg {
    void *(*unk_00)(void *, u32);
    void (*unk_04)(void *, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226f7c8_Ctx {
    u8 state[4];
    s32 errorCode;
    u8 responseFields[0x100];
    Unk_ov065_0226f924_Cfg allocator;
    u32 body302;
    u32 bodyWayport;
    u8 thread[0x6c];
    u32 threadId;
    u8 unk_18c[0x50];
    u8 unk_1dc[0x1024];
};

struct Unk_ov065_0226fc54_Ctx {
    u8 unk_00[0x24];
    s32 state;
    u8 unk_28[4];
    u8 myAid;
    u8 isClosingAll;
    u8 unk_2e[2];
    u32 ownProfileId;
    u8 unk_34[0x38];
    u32 (*unk_6c)(s32, s32, s32);
    s32 matchCallbackArg;
    u32 (*unk_74)(s32, s32, s32, s32, s32, s32);
    s32 serverMatchCallbackArg;
    u32 (*unk_7c)(s32, s32, s32, s32, s32, s32);
    s32 closedCallbackArg;
    u8 unk_84[0x2c5];
    u8 numClients;
    u8 unk_34a[2];
    u32 qr2Object;
    u8 numPlayers;
    u8 matchType;
    u8 maxPlayers;
    u8 unk_353[0xdd];
    u32 memberProfileIds[0x29];
    u32 matchState;
    u8 unk_4d8[0x11c];
    u8 aids[0x20];
    u32 validAidMask;
};

struct Unk_ov065_0226fc54_Ent {
    u8 slotIndex;
    u8 aid;
};
extern "C" {
extern Unk_ov065_0226f7c8_Ctx *sNetCheck;
extern void *sNetCheckHttp;
extern u8 data_ov065_0228bbac[];
extern u8 data_ov065_0228bbb4[];
extern u8 data_ov065_0228bae4[];
extern u8 data_ov065_0228bb10[];
extern s8 *sNasBase64AlphabetPtr;
extern u32 data_ov065_02290674;
extern Unk_ov065_0226fc54_Ctx *sDwcControl;
extern u32 sDwcConnTable[];
void NetCheck_StartThread();
void DwcHttp_Abort();
void NasAuth_Abort();
void DwcHttp_Destroy();
void NasAuth_Destroy();
void NetCheck_ThreadMain();
s32 GsTransport_GetRemoteIp();
u32 GsSock_GetLastError();
void DwcCore_SetError(s32, s32);
void DwcNet_OnPing(s32, s32);
void DwcNet_OnReceive(s32, s32, s32, s32);
s32 DwcMatch_IsInactive();
Unk_ov065_0226fc54_Ent *GsTransport_GetUserData(s32);
void DwcNet_ResetChannel(u32);
u32 DwcConn_RemoveAid(u32);
void DwcMatch_UpdateServerStatus();
void DwcMatch_UpdateValidAidCount();
void DwcMatch_OnClientDisconnected(u32);
s32 DwcMatch_OnConnectionClosed(s32, s32, u32);
void DwcMatch_RemoveMemberAt(s32, s32);
void DwcFriend_SetOwnStatus(s32, void *, s32);
void GsQr_SendStateChanged(u32);
u32 DwcFriend_FindIndexByProfileId(u32);
void GsNatNeg_FreeAll();
void DwcMatch_ResetPlayerCounts();
s32 DwcCore_SetState(s32);
s32 DwcFriend_HandleAuthorizedMessage(void *, u32 *, u32);
void DwcMatch_OnGpMatchCommand(void *, u32, void *);
s32 DwcCore_HandleGpResult(s32);
u32 DwcConn_AidListToBitmap(u8 *, s32);
void OS_JoinThread(void *);
s32 OS_IsThreadTerminated(void *);
void OS_CreateThread(void *, void (*)(), void *, void *, u32, u32);
void OS_WakeupThreadDirect(void *);
void OS_InitMutex(void *);
void MI_CpuFill8(void *, u32, u32);
void MI_CpuCopy8(void *, void *, u32);
s32 func_02133150(s32, s32);
u32 func_0213335c(u32, u32);
u32 STD_GetStringLength(void *);
s32 memcmp(void *, void *, u32);
char *func_0212a120(void *, s32);
void func_0212a2ec(void *, void *, u32);
s32 func_0212b854(void *, u32, u32);
void DwcConn_OnGt2SocketError();
void DwcConn_OnGt2Ping(s32 a, s32 b);
void DwcConn_OnGt2Closed(s32 a0, s32 a1);
void DwcConn_OnGt2Receive(s32 a, s32 b, s32 c, s32 d);
void DwcMatch_OnGpBuddyMessage(void *a, u32 *b, u32 c);
void DwcCore_OnGpError(s32 a, u32 *b);
void DwcMatch_OnMatchDone(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);
}
}

namespace F022700e4 {
typedef void (*Unk_ov065_022700e4_Cb)(s32, s32, s32);
typedef void (*Unk_ov065_02270710_Cb)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290670 {
    u32 transportSocket;
    u8 pad_04[0x14];
    u32 unk_18_pad;
    u8 unk_1c[0x8];
    s32 state;
    s32 prevState;
    u8 myAid;
    u8 isClosingAll;
    u8 pad_2e[2];
    u32 ownProfileId;
    u8 unk_34[0x20];
    u8 pad_54[0x8];
    Unk_ov065_022700e4_Cb unk_5c;
    s32 unk_60;
    Unk_ov065_022700e4_Cb unk_64;
    s32 unk_68;
    u8 pad_6c[8];
    Unk_ov065_02270710_Cb unk_74;
    s32 unk_78;
    s32 unk_7c;
    s32 unk_80;
    u8 pad_84[8];
    s32 unk_8c;
    u8 pad_90[4];
    s32 unk_94;
    s32 unk_98;
    u8 pad_9c[0x34];
    u8 unk_d0[0x100];
    u8 unk_1d0[0x179];
};

struct Unk_ov065_02270710_Buf {
    u32 unk_00;
    u32 status;
    u8 pad_08[0x208];
};

struct Unk_ov065_022906f8 {
    u32 unk_00;
    u32 unk_04;
};
extern "C" {
extern Unk_ov065_02290670 *sDwcControl;
extern u32 sDwcConnTable[32];
extern Unk_ov065_022906f8 sDwcConnInfo[32];
void DwcConn_OnGt2SocketError();
void DwcMatch_OnMatchDone();
void DwcCore_OnGpError();
void DwcMatch_OnGpBuddyMessage();
void DwcFriend_OnBuddyRequest();
void DwcFriend_OnBuddyStatus();
void DwcMatch_OnGt2ConnectAttempt();
void DwcMatch_OnUnrecognizedPacket();
void DwcFriend_OnUpdateDone(s32 a, s32 b);
u8 *GsTransport_GetUserData(u32 v);
void DwcLogin_Fail(s32 a, s32 b);
void DwcFriend_ResetTimer();
void DwcFriend_SetOwnStatus(s32 a, void *b, s32 c);
void GsNatNeg_FreeAll();
void GsTransport_CloseAll(u32 a);
void DwcFriend_Fail(s32 a, s32 b);
void DwcMatch_Fail(s32 a, s32 b);
u32 DwcFriend_GetProfileId(s32 a);
s32 GsGp_IsBuddy(void *a, u32 b);
void GsGp_GetBuddyIndex(void *a, u32 b, s32 *c);
void GsGp_GetBuddyStatus(void *a, s32 b, void *c);
void DwcMatch_StartClient(u32 a, void (*b)(), s32 c, s32 d, s32 e);
void DwcMatch_StartGameServer(u32 a, void (*b)(), s32 c, s32 d, s32 e);
void DwcFriend_StartUpdate(void *a, void *b, void (*c)(s32, s32), s32 d, s32 e, s32 f, s32 g, s32 h);
s32 DwcInet_UpdateStatus();
void GsAvail_Start(u32 a);
s32 GsAvail_Poll();
u32 GsGp_Initialize(void *a, u32 b, s32 c);
s32 GsGp_SetCallback(void *a, s32 b, void (*c)(), s32 d);
void DwcLogin_Begin();
void DwcLogin_Process();
void DwcFriend_Process();
void DwcMatch_Process(s32 a);
void DwcNet_ProcessSend();
void GsQr_Shutdown();
void GsTransport_CloseHard(u32 a);
u32 DwcNet_Rand32(u32 a);
u32 GsTransport_AddressToString(s32 a, u32 b, s32 c);
s32 GsTransport_CreateSocket(void *a, u32 b, u32 c, u32 d, void (*e)());
void GsTransport_Listen(u32 a, void (*b)());
void GsTransport_SetUnknownSenderCallback(u32 a, void (*b)());
s32 DwcMatch_GetAidList(u8 **out);
s32 DwcMatch_GetValidAidList(u8 **out);
s32 DwcMatch_RemoveMemberAt(s32 a, s32 b);
s32 DwcMatch_GetValidAidCount();
s32 DwcMatch_GetClientCount();
s32 DwcCore_HasError();
void DwcCore_SetError(s32 a, s32 b);
s32 DwcCore_CheckFatalError();
void DwcCore_Nop();
void MIi_CpuClear32(u32 v, void *dst, u32 size);
s32 STD_GetStringLength(char *s);
void MI_CpuCopy8(char *src, void *dst, s32 n);
void DwcCore_SetState(s32 s);
s32 DwcConn_HandleGt2Result(s32 x);
s32 DwcCore_HandleGpResult(s32 x);
u32 DwcConn_AidListToBitmap(u8 *p, s32 n);
u32 DwcConn_IsAidConnected(u32 v);
u32 DwcConn_GetSlotIndex(u32 v);
u32 DwcConn_FindConnectionByAid(u32 v);
u32 *DwcConn_GetSlot(u32 idx);
s32 DwcConn_GetAidList(u8 **out);
void DwcConn_ClearTables();
void DwcLogin_OnLoginDone(s32 a, s32 b);
u32 DwcConn_RemoveAid(u32 c);
Unk_ov065_022906f8 *DwcConn_GetConnInfo(u32 idx);
u32 *DwcConn_FindSlotByProfileId(u32 key, s32 n);
s32 DwcConn_FindFreeSlot();
u32 DwcConn_GetAid(u32 v);
s32 DwcConn_CreateGt2Socket();
s32 DwcCore_GetState();
u32 DwcConn_IsAidValid(u32 bit);
u32 DwcConn_GetAidBitmap();
u32 DwcConn_GetMyAid();
s32 DwcConn_GetConnectionCount();
s32 DwcConn_CloseConnection(u32 a);
s32 DwcConn_CloseAllConnections();
void DwcConn_SetClosedCallback(s32 a, s32 b);
void DwcMatch_ConnectToFriendServer(s32 a, Unk_ov065_02270710_Cb cb, s32 arg, s32 d, s32 e);
void DwcMatch_SetupGameServer(s32 a, Unk_ov065_02270710_Cb b, s32 c, s32 d, s32 e);
s32 DwcFriend_UpdateServersAsync(char *s, Unk_ov065_022700e4_Cb f1, s32 f2, s32 f3, s32 p5, s32 p6, s32 p7);
void DwcLogin_Start(s32 a, s32 b, Unk_ov065_022700e4_Cb c, s32 d);
void DwcCore_Process();
}
}

namespace F02270b74 {
typedef void (*Unk_ov065_02270c94_Cb)(s32, s32, u32);
typedef void (*Unk_ov065_02271440_Cb)(void *, void *, u32);

struct Unk_ov065_02270ba4_Sub {
    void *instance;
};

struct Unk_ov065_02270ba4_G {
    void *transportSocket;
    void *gt2ConnectedCallback;
    void *gt2ReceivedCallback;
    void *gt2ClosedCallback;
    void *gt2PingCallback;
    void *gt2SendBufferSize;
    void *gt2RecvBufferSize;
    Unk_ov065_02270ba4_Sub gpConnection;
    void *userData;
    u32 state;
    u32 prevState;
    u8 myAid;
    u8 isClosingAll;
    u16 unk_2e;
    u32 ownProfileId;
    u8 buddyRequestText[0x20];
    void *gameName;
    void *secretKey;
    u32 loginCallback;
    u32 loginCallbackArg;
    u32 updateCallback;
    u32 updateCallbackArg;
    u32 matchCallback;
    u32 matchCallbackArg;
    u32 serverMatchCallback;
    u32 serverMatchCallbackArg;
    u32 closedCallback;
    u32 closedCallbackArg;
    u8 loginControl[0x2e8 - 0x84];
    u8 friendControl[0x33c - 0x2e8];
    u8 matchControl[0x34c - 0x33c];
    void *qr2Object;
    u8 unk_350[4];
    u8 qr2ShutdownPending;
    u8 unk_355[0x420 - 0x355];
    void *serverBrowser;
    u8 unk_424[0x7a0 - 0x424];
    u8 netChannelTable[4];
};

struct Unk_ov065_02270eb0_Tri {
    u32 v[3];
};

struct Unk_ov065_02270eb0_P {
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08[0xc];
    u32 unk_14;
    u8 unk_18[4];
    u32 profileId;
    u8 unk_20[4];
    u32 gameCode;
};

struct Unk_ov065_02270eb0_H {
    void *gpConnection;
    s32 state;
    u8 unk_08[4];
    u32 gameCode;
    u8 unk_10[8];
    Unk_ov065_02270c94_Cb unk_18;
    u32 resultCallbackArg;
    Unk_ov065_02270eb0_P *userData;
    u8 unk_24[4];
    void *nasAuthWork;
    u64 nasAuthStartTick;
    s32 gpConnectPending;
    u64 gpConnectStartTick;
    Unk_ov065_02270eb0_Tri loginId;
    char authToken[0x100];
    char authChallenge[0x100];
    u8 loginIdText[9];
    char gsbrcd[0x100];
};

struct Unk_ov065_02270eb0_X {
    s32 result;
    u32 profileId;
    u8 unk_08[0x86];
    s8 uniqueNick[1];
};

struct Unk_ov065_0227112c_Pair {
    u32 hi;
    u32 lo;
};

struct Unk_ov065_02270fd4_S {
    s32 result;
    u8 unk_04[0x46];
    char token[0x100];
    u8 unk_14a[0x2d];
    char challenge[0x4d];
};

struct Unk_ov065_0227112c_Cfg {
    u8 inGameName[0x16];
    char gsbrcd[14];
    void *allocFunc;
    void *freeFunc;
};

namespace Unk_ov065_0227138c_Ns {
extern "C" s32 DwcLogin_HandleGpResult(s32 r);
}
extern "C" {
extern Unk_ov065_02270ba4_G *sDwcControl;
extern s32 sDwcErrorClass;
extern s32 sDwcErrorCode;
extern u32 sDwcLoginDoneArg;
extern Unk_ov065_02270eb0_H *sDwcLoginControl;
extern Unk_ov065_02271440_Cb sDwcLoginDoneCallback;
extern u8 data_ov065_02291104[];
extern u8 data_ov065_02291204[];
extern u8 data_ov065_0228c818[];
void DwcInet_Process(void);
s32 DwcInet_IsLinkLost(void);
void DwcInet_WaitDisconnect(void);
void GsQr_Shutdown(void *);
void GsSrvBrowser_Free(void *);
void GsNatNeg_FreeAll(void);
void GsPersist_Disconnect(void);
void GsGp_SetCallback(void *, s32, s32, s32);
void GsGp_Process(void *);
void GsGp_Destroy(void *);
void DwcFriend_ClearControl(void);
void DwcMatch_Shutdown(void);
void DwcNet_ClearChannelTable(void);
void GsTransport_CloseSocket(void *);
void DwcMatch_OnGt2Connected(void);
void DwcConn_OnGt2Receive(void);
void DwcConn_OnGt2Closed(void);
void DwcConn_OnGt2Ping(void);
void DwcConn_ClearTables(void);
void DwcLogin_InitControl(void *, void *, void *, void *, u32, void *, s32);
void DwcLogin_OnLoginDone(void);
void DwcFriend_InitControl(void *, void *, void *, void *, void *);
void DwcMatch_InitControl(void *, void *, void *, void *, void *, void *, void *, void *);
void DwcNet_InitChannelTable(void *);
u32 STD_GetStringLength(const char *);
void MI_CpuCopy8(const void *, void *, u32);
void func_020fff48(void *, u32, void *);
s32 GsGp_SetInfo(void *, s32, void *);
s32 GsGp_GetInfo(void *, u32, s32, s32, void *, s32);
s32 GsGp_Disconnect(void *);
s32 GsGp_ConnectPreAuth(void *, void *, void *, s32, s32, void *, s32);
s32 strcmp(const char *, const char *);
void func_020ffd30(void *, void *, u32);
s32 NasAuth_GetState(void);
void NasAuth_GetResult(s32 *);
void NasAuth_Destroy(void);
void NasAuth_Abort(void);
s32 NasAuth_Start(void *, void *);
void func_02127838(char *, const char *);
void MI_CpuFill8(void *, s32, u32);
u64 OS_GetTick(void);
u64 func_02132ef8(u64, u32);
u64 func_02133100(u64, u32, u32);
s32 func_020ffdfc(void *);
s32 func_020ffe08(void *);
s32 func_020ffe24(void *);
void func_020ffe84(void *);
void func_02100160(void *, u32);
void DwcNet_Free(s32, void *, s32);
void DwcNet_Alloc(void);
void *DwcNet_AllocAligned(s32, s32, s32);
s32 DwcFriend_SetOwnStatus(s32, void *);
s32 DwcConn_CreateGt2Socket(void);
s32 DwcMatch_StartQr2(u32);
void DwcCore_Nop(void);
s32 DwcCore_CheckFatalError(void);
void DwcCore_Shutdown(void);
void DwcCore_Init(Unk_ov065_02270ba4_G *g, Unk_ov065_02270eb0_P *a1, void *a2, const char *a3, const char *a4, void *a5, void *a6, void *a7, void *a8);
void DwcCore_SetError(s32 a, s32 b);
BOOL DwcCore_HasError(void);
void DwcCore_ClearError(void);
s32 DwcCore_GetLastError(s32 *out);
BOOL DwcLogin_IsLoggedIn(void);
void DwcLogin_OnGpProfileInfo(void *a0, Unk_ov065_02270eb0_X *x);
void DwcLogin_PollNasAuth(void);
void DwcLogin_StartNasAuth(Unk_ov065_02271440_Cb cb, u32 arg);
void DwcLogin_GpConnect(const char *a, const char *b, void *c, s32 d);
void DwcLogin_OnNasAuthDone(const char *a, const char *b);
void DwcLogin_OnGpConnected(void *a0, Unk_ov065_02270eb0_X *x);
void DwcLogin_ResetState(void);
void DwcLogin_Shutdown(void);
void DwcLogin_Fail(s32 a, s32 b);
void *DwcLogin_GetUserData(void);
}
}

#define G sDwcControl

#define FAIL710()                                                              \
    {                                                                          \
        DwcCore_SetError(10, 0);                                            \
        Unk_ov065_02290670 *s = G;                                             \
        s->unk_74(10, 0, 1, 0, 0, s->unk_78);                                  \
        if (G != 0 && G->state == 5) {                                        \
            DwcCore_SetState(3);                                            \
            DwcFriend_SetOwnStatus(1, (void *)"", 0);                             \
            return;                                                            \
        }                                                                      \
    }

namespace F02270b74 {
extern "C" {
void DwcCore_Init(Unk_ov065_02270ba4_G *g, Unk_ov065_02270eb0_P *a1, void *a2, const char *a3, const char *a4,
                         void *a5, void *a6, void *a7, void *a8) {
    sDwcControl = g;
    DwcCore_ClearError();
    sDwcControl->transportSocket = NULL;
    sDwcControl->gt2ConnectedCallback = (void *)DwcMatch_OnGt2Connected;
    sDwcControl->gt2ReceivedCallback = (void *)DwcConn_OnGt2Receive;
    sDwcControl->gt2ClosedCallback = (void *)DwcConn_OnGt2Closed;
    sDwcControl->gt2PingCallback = (void *)DwcConn_OnGt2Ping;
    sDwcControl->gt2SendBufferSize = a5 != NULL ? a5 : (void *)0x2000;
    sDwcControl->gt2RecvBufferSize = a6 != NULL ? a6 : (void *)0x2000;
    sDwcControl->gpConnection.instance = NULL;
    sDwcControl->userData = a1;
    sDwcControl->state = 0;
    sDwcControl->prevState = 0;
    sDwcControl->myAid = 0;
    sDwcControl->isClosingAll = 0;
    sDwcControl->unk_2e = 0;
    sDwcControl->ownProfileId = 0;
    sDwcControl->gameName = data_ov065_02291104;
    sDwcControl->secretKey = data_ov065_02291204;
    sDwcControl->loginCallback = 0;
    sDwcControl->loginCallbackArg = 0;
    sDwcControl->updateCallback = 0;
    sDwcControl->updateCallbackArg = 0;
    sDwcControl->matchCallback = 0;
    sDwcControl->matchCallbackArg = 0;
    sDwcControl->serverMatchCallback = 0;
    sDwcControl->serverMatchCallbackArg = 0;
    sDwcControl->closedCallback = 0;
    sDwcControl->closedCallbackArg = 0;
    DwcConn_ClearTables();
    DwcLogin_InitControl(&sDwcControl->loginControl, a1, &sDwcControl->gpConnection, a2, a1->gameCode,
                        (void *)DwcLogin_OnLoginDone, 0);
    DwcFriend_InitControl(&sDwcControl->friendControl, &sDwcControl->gpConnection, &sDwcControl->buddyRequestText, a7,
                        a8);
    DwcMatch_InitControl(&sDwcControl->matchControl, &sDwcControl->gpConnection, sDwcControl,
                        &sDwcControl->gt2ConnectedCallback, data_ov065_02291104, data_ov065_02291204, a7, a8);
    DwcNet_InitChannelTable(&sDwcControl->netChannelTable);
    u32 n;
    if (STD_GetStringLength(a3) < 0x100) {
        n = STD_GetStringLength(a3);
    } else {
        n = 0xff;
    }
    MI_CpuCopy8(a3, data_ov065_02291104, n);
    data_ov065_02291104[n] = 0;
    u32 m;
    if (STD_GetStringLength(a4) < 0x100) {
        m = STD_GetStringLength(a4);
    } else {
        m = 0xff;
    }
    MI_CpuCopy8(a4, data_ov065_02291204, m);
    data_ov065_02291204[m] = 0;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcCore_Shutdown(void) {
    if (sDwcControl == NULL) {
        return;
    }
    if (sDwcControl->qr2Object != NULL) {
        GsQr_Shutdown(sDwcControl->qr2Object);
        sDwcControl->qr2Object = NULL;
    }
    sDwcControl->qr2ShutdownPending = 0;
    if (sDwcControl->serverBrowser != NULL) {
        GsSrvBrowser_Free(sDwcControl->serverBrowser);
        sDwcControl->serverBrowser = NULL;
    }
    GsNatNeg_FreeAll();
    GsPersist_Disconnect();
    if (sDwcControl->gpConnection.instance != NULL) {
        GsGp_SetCallback(&sDwcControl->gpConnection, 0, 0, 0);
        GsGp_SetCallback(&sDwcControl->gpConnection, 3, 0, 0);
        GsGp_SetCallback(&sDwcControl->gpConnection, 1, 0, 0);
        GsGp_SetCallback(&sDwcControl->gpConnection, 2, 0, 0);
        GsGp_Process(&sDwcControl->gpConnection);
        GsGp_Destroy(&sDwcControl->gpConnection);
        sDwcControl->gpConnection.instance = NULL;
    }
    DwcLogin_Shutdown();
    DwcFriend_ClearControl();
    DwcMatch_Shutdown();
    DwcNet_ClearChannelTable();
    if (sDwcControl->transportSocket != NULL) {
        GsTransport_CloseSocket(sDwcControl->transportSocket);
        sDwcControl->transportSocket = NULL;
    }
    sDwcControl = NULL;
}
}
}

namespace F02270b74 {
extern "C" {
s32 DwcCore_CheckFatalError(void) {
    DwcInet_Process();
    if (DwcInet_IsLinkLost()) {
        DwcCore_SetError(7, 0);
        DwcInet_WaitDisconnect();
        return 1;
    }
    return 0;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcCore_Nop(void) {}
}
}

namespace F022700e4 {
extern "C" {
void DwcCore_Process() {
    if (DwcCore_CheckFatalError() != 0) {
        DwcCore_Nop();
    }
    if (G == 0 || G->state == 0 || DwcCore_HasError() != 0) {
        return;
    }
    switch (G->state) {
    case 0:
        break;
    case 1:
        switch (GsAvail_Poll()) {
        case 1:
            if (DwcCore_HandleGpResult(GsGp_Initialize(G->unk_1c, G->unk_8c, 0)) != 0) {
                return;
            }
            if (DwcCore_HandleGpResult(GsGp_SetCallback(G->unk_1c, 0, DwcCore_OnGpError, 0)) != 0) {
                return;
            }
            if (DwcCore_HandleGpResult(GsGp_SetCallback(G->unk_1c, 3, DwcMatch_OnGpBuddyMessage, 0)) != 0) {
                return;
            }
            if (DwcCore_HandleGpResult(GsGp_SetCallback(G->unk_1c, 1, DwcFriend_OnBuddyRequest, 0)) != 0) {
                return;
            }
            if (DwcCore_HandleGpResult(GsGp_SetCallback(G->unk_1c, 2, DwcFriend_OnBuddyStatus, 0)) != 0) {
                return;
            }
            DwcCore_SetState(2);
            DwcLogin_Begin();
            break;
        case 2:
            DwcLogin_Fail(3, -0x4e8e);
            return;
        case 3:
            DwcLogin_Fail(4, -0x4e85);
            return;
        }
        break;
    case 2:
        DwcLogin_Process();
        break;
    case 3:
    case 4:
        DwcFriend_Process();
        DwcMatch_Process(0);
        break;
    case 5:
        DwcMatch_Process(1);
        DwcFriend_Process();
        break;
    case 6: {
        Unk_ov065_02290670 *s;
        DwcNet_ProcessSend();
        DwcFriend_Process();
        s = G;
        if (*(volatile u8 *)((u8 *)s + 0x351) == 2 || *(volatile u8 *)((u8 *)s + 0x351) == 3) {
            DwcMatch_Process(1);
        } else if (s->transportSocket != 0) {
            DwcMatch_Process(0);
        }
        break;
    }
    }
    if (*((u8 *)G + 0x354) == 1) {
        if (*(u32 *)((u8 *)G + 0x34c) != 0) {
            GsQr_Shutdown();
            *(u32 *)((u8 *)G + 0x34c) = 0;
        }
        *((u8 *)G + 0x354) = 0;
    }
}
}
}

namespace F022700e4 {
extern "C" {
void DwcLogin_Start(s32 a, s32 b, Unk_ov065_022700e4_Cb c, s32 d) {
    if (DwcCore_HasError() == 0 && G->state == 0) {
        G->unk_5c = c;
        G->unk_60 = d;
        G->unk_94 = a;
        G->unk_98 = b;
        if (DwcInet_UpdateStatus() != 4) {
            DwcLogin_Fail(2, -0xea6a);
            return;
        }
        DwcCore_SetState(1);
        GsAvail_Start(*(u32 *)((u8 *)G + 0x54));
    }
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcFriend_UpdateServersAsync(char *s, Unk_ov065_022700e4_Cb f1, s32 f2, s32 f3, s32 p5, s32 p6, s32 p7) {
    s32 n;
    if (G == 0 || DwcCore_HasError() != 0 || G->state < 3 || G->state == 4) {
        return 0;
    }
    if (s == 0 || *s == 0) {
        n = 0;
    } else {
        if (STD_GetStringLength(s) < 0x20) {
            n = STD_GetStringLength(s);
        } else {
            n = 0x1f;
        }
        MI_CpuCopy8(s, G->unk_34, n);
    }
    G->unk_34[n] = 0;
    G->unk_64 = f1;
    G->unk_68 = f2;
    DwcCore_SetState(4);
    DwcFriend_StartUpdate(G->unk_d0, G->unk_d0 + 0x100, DwcFriend_OnUpdateDone, 0, f3, p5, p6, p7);
    return 1;
}
}
}

namespace F022700e4 {
extern "C" {
void DwcMatch_SetupGameServer(s32 a, Unk_ov065_02270710_Cb b, s32 c, s32 d, s32 e) {
    if (DwcCore_HasError() == 0 && G->state == 3) {
        DwcConn_ClearTables();
        G->unk_74 = b;
        G->unk_78 = c;
        G->myAid = 0;
        DwcCore_SetState(5);
        DwcMatch_StartGameServer((u8)(a - 1), DwcMatch_OnMatchDone, 0, d, e);
    }
}
}
}

namespace F022700e4 {
extern "C" {
void DwcMatch_ConnectToFriendServer(s32 a, Unk_ov065_02270710_Cb cb, s32 arg, s32 d, s32 e) {
    s32 v = -1;
    Unk_ov065_02270710_Buf buf;
    if (DwcCore_HasError() == 0 && G->state == 3) {
        u32 t;
        DwcConn_ClearTables();
        G->unk_74 = cb;
        G->unk_78 = arg;
        DwcCore_SetState(5);
        t = DwcFriend_GetProfileId(a);
        if (t == 0 || GsGp_IsBuddy(G->unk_1c, t) == 0) {
            FAIL710()
        } else {
            GsGp_GetBuddyIndex(G->unk_1c, t, &v);
            GsGp_GetBuddyStatus(G->unk_1c, v, &buf);
            if (buf.status != 6) {
                FAIL710()
            } else {
                DwcMatch_StartClient(t, DwcMatch_OnMatchDone, 0, d, e);
            }
        }
    }
}
}
}

namespace F022700e4 {
extern "C" {
void DwcConn_SetClosedCallback(s32 a, s32 b) {
    if (G != 0) {
        G->unk_7c = a;
        G->unk_80 = b;
    }
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_CloseAllConnections() {
    Unk_ov065_02290670 *s;
    if (G == 0 || DwcCore_HasError() != 0 || (s = G, s->state != 5 && s->state != 6)) {
        return -1;
    }
    if (*((u8 *)s + 0x349) == 0) {
        DwcFriend_SetOwnStatus(1, (void *)"", 0);
        GsNatNeg_FreeAll();
        DwcCore_SetState(3);
        return 1;
    }
    s->isClosingAll = 1;
    GsTransport_CloseAll(G->transportSocket);
    G->isClosingAll = 0;
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_CloseConnection(u32 a) {
    u32 r;
    if (G == 0 || DwcCore_HasError() != 0 || (G->state != 5 && G->state != 6)) {
        return -1;
    }
    r = DwcConn_FindConnectionByAid(a);
    if (r == 0) {
        return -2;
    }
    GsTransport_CloseHard(r);
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_GetConnectionCount() {
    if (G == 0) {
        return 0;
    }
    if (*(volatile u8 *)((u8 *)G + 0x351) == 2 || *(volatile u8 *)((u8 *)G + 0x351) == 3) {
        return DwcMatch_GetValidAidCount() + 1;
    }
    return DwcMatch_GetClientCount() + 1;
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_GetMyAid() {
    if (G != 0) {
        return G->myAid;
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_GetAidList(u8 **out) {
    if (G == 0) {
        return 0;
    }
    *out = (u8 *)G + 0x5f4;
    if (*(volatile u8 *)((u8 *)G + 0x351) == 2 || *(volatile u8 *)((u8 *)G + 0x351) == 3) {
        return DwcMatch_GetValidAidList(out);
    }
    return DwcMatch_GetAidList(out);
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_GetAidBitmap() {
    u8 *p;
    if (G == 0) {
        return 0;
    }
    s32 n = DwcConn_GetAidList(&p);
    return DwcConn_AidListToBitmap(p, n);
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_IsAidValid(u32 bit) {
    if (G == 0) {
        return 0;
    }
    if (*(u32 *)((u8 *)G + 0x614) & (1 << bit)) {
        return DwcConn_IsAidConnected(bit);
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcCore_GetState() {
    if (G != 0) {
        return G->state;
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_CreateGt2Socket() {
    Unk_ov065_02290670 *s;
    u32 h;
    s32 r;
    if (G->transportSocket != 0) {
        return 0;
    }
    h = (u16)(DwcNet_Rand32(0x4000) + 0xc000);
    s = G;
    r = GsTransport_CreateSocket(G, GsTransport_AddressToString(0, h, 0), *(u32 *)((u8 *)s + 0x14), *(u32 *)((u8 *)s + 0x18), DwcConn_OnGt2SocketError);
    if (DwcConn_HandleGt2Result(r) != 0) {
        return r;
    }
    GsTransport_Listen(G->transportSocket, DwcMatch_OnGt2ConnectAttempt);
    GsTransport_SetUnknownSenderCallback(G->transportSocket, DwcMatch_OnUnrecognizedPacket);
    return r;
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_FindConnectionByAid(u32 v) {
    s32 i;
    u32 *p;
    if (G == 0) {
        return 0;
    }
    for (i = 0, p = sDwcConnTable; i < 0x20; p++, i++) {
        if (*p != 0) {
            u8 *r = GsTransport_GetUserData(*p);
            if (v == r[1]) {
                return sDwcConnTable[i];
            }
        }
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_GetAid(u32 v) {
    return GsTransport_GetUserData(v)[1];
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_GetSlotIndex(u32 v) {
    return GsTransport_GetUserData(v)[0];
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_FindFreeSlot() {
    s32 i;
    u32 *p;
    for (i = 0, p = sDwcConnTable; i < 0x20; p++, i++) {
        if (*p == 0) {
            return i;
        }
    }
    return -1;
}
}
}

namespace F022700e4 {
extern "C" {
void DwcConn_ClearTables() {
    volatile u32 a = 0;
    MIi_CpuClear32(a, sDwcConnTable, 0x80);
    volatile u32 b = 0;
    MIi_CpuClear32(b, sDwcConnInfo, 0x100);
}
}
}

namespace F022700e4 {
extern "C" {
u32 *DwcConn_GetSlot(u32 idx) {
    return &sDwcConnTable[idx];
}
}
}

namespace F022700e4 {
extern "C" {
u32 *DwcConn_FindSlotByProfileId(u32 key, s32 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        if (key == *(u32 *)((u8 *)G + i * 4 + 0x430)) {
            break;
        }
    }
    if (i >= n) {
        return 0;
    }
    return DwcConn_GetSlot(DwcConn_GetSlotIndex(DwcConn_FindConnectionByAid(*((u8 *)G + i + 0x5f4))));
}
}
}

namespace F022700e4 {
extern "C" {
Unk_ov065_022906f8 *DwcConn_GetConnInfo(u32 idx) {
    return &sDwcConnInfo[idx];
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_IsAidConnected(u32 v) {
    s32 i;
    u32 *p;
    for (i = 0, p = sDwcConnTable; i < 0x20; p++, i++) {
        if (*p != 0) {
            u8 *r = GsTransport_GetUserData(*p);
            if (v == r[1]) {
                return 1;
            }
        }
    }
    return 0;
}
}
}

namespace F022700e4 {
extern "C" {
void DwcCore_SetState(s32 s) {
    G->prevState = G->state;
    G->state = s;
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_RemoveAid(u32 c) {
    u8 *p;
    s32 i;
    s32 n;
    u8 *q;
    n = DwcMatch_GetAidList(&p);
    i = 0;
    if (n > 0) {
        q = p;
        do {
            if (c == *q) {
                break;
            }
            q++;
            i++;
        } while (i < n);
    }
    if (i == n) {
        return 0;
    }
    return DwcMatch_RemoveMemberAt(i, n);
}
}
}

namespace F022700e4 {
extern "C" {
u32 DwcConn_AidListToBitmap(u8 *p, s32 n) {
    u32 r = 0;
    s32 i = 0;
    for (; i < n; i++) {
        r |= 1 << p[i];
    }
    return r;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcCore_HandleGpResult(s32 x) {
    s32 a, b;
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
        a = 8;
        b = -2;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -20;
        break;
    }
    switch (G->state) {
    case 1:
        b = b - 0xee48;
        DwcLogin_Fail(a, b);
        break;
    case 2:
        b = b - 0xee48;
        DwcLogin_Fail(a, b);
        break;
    case 5:
        b = b - 0x13c68;
        DwcMatch_Fail(a, b);
        break;
    case 4:
        b = b - 0x11558;
        break;
    default:
        b = b - 0x16378;
        break;
    }
    DwcFriend_Fail(a, b);
    return x;
}
}
}

namespace F022700e4 {
extern "C" {
s32 DwcConn_HandleGt2Result(s32 x) {
    s32 a, b;
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
    case 5:
        a = 0;
        b = 0;
        x = 0;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -30;
        break;
    case 6:
        a = 6;
        b = -70;
        break;
    case 7:
        a = 6;
        b = -80;
        break;
    }
    if (a != 0) {
        DwcLogin_Fail(a, b - 0x105b8);
    }
    return x;
}
}
}

namespace F022700e4 {
extern "C" {
void DwcLogin_OnLoginDone(s32 a, s32 b) {
    if (a == 0) {
        G->ownProfileId = b;
        DwcCore_SetState(3);
        DwcFriend_ResetTimer();
    } else {
        DwcCore_SetState(0);
    }
    if (G->unk_5c != 0) {
        G->unk_5c(a, b, G->unk_60);
    }
}
}
}

namespace F022700e4 {
extern "C" {
void DwcFriend_OnUpdateDone(s32 a, s32 b) {
    s32 t = G->prevState;
    if (t != 4) {
        DwcCore_SetState(t);
    }
    G->unk_64(a, b, G->unk_68);
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcMatch_OnMatchDone(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 i;
    Unk_ov065_0226fc54_Ctx *g;
    Unk_ov065_0226fc54_Ctx *h;

    if (a0 == 0 && a1 != 0) {
        if (sDwcControl->matchState == 0) {
            DwcMatch_ResetPlayerCounts();
            DwcCore_SetState(3);
        }
    } else if (a0 == 0) {
        DwcCore_SetState(6);
        i = 0;
        g = sDwcControl;
        if (i <= *(volatile u8 *)&g->numClients) {
            h = g;
            do {
                if (h->ownProfileId == g->memberProfileIds[0]) {
                sDwcControl->myAid = sDwcControl->aids[i];
                break;
                }
                g = (Unk_ov065_0226fc54_Ctx *)((u8 *)g + 4);
                i++;
            } while (i <= *(volatile u8 *)&h->numClients);
        }
    }
    sDwcControl->validAidMask = DwcConn_AidListToBitmap(sDwcControl->aids, sDwcControl->numClients + 1);
    DwcMatch_UpdateValidAidCount();
    g = sDwcControl;
    if (*(volatile u8 *)&g->matchType == 2 || *(volatile u8 *)&g->matchType == 3) {
        sDwcControl->unk_74(a0, a1, a2, a3, a4, sDwcControl->serverMatchCallbackArg);
    } else {
        g->unk_6c(a0, a1, g->matchCallbackArg);
    }
    if (a0 != 0 && sDwcControl != 0 && sDwcControl->state == 5) {
        DwcCore_SetState(3);
    }
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcCore_OnGpError(s32 a, u32 *b) {
    u32 t = b[1];
    if (t != 0x603 && t != 0x901 && t != 0xb01) {
        DwcCore_HandleGpResult(3);
    }
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcMatch_OnGpBuddyMessage(void *a, u32 *b, u32 c) {
    u8 buf[12] = {0};
    char *s;
    char *e;
    u32 n;
    Unk_ov065_0226fc54_Ctx *g;

    s = (char *)b[2];
    if (DwcFriend_HandleAuthorizedMessage(a, b, c) == 0) {
        if (memcmp(s, (void *)"GPCM", STD_GetStringLength((void *)"GPCM")) == 0) {
            s += STD_GetStringLength((void *)"GPCM");
            e = func_0212a120(s, 0x76);
            n = e - s;
            func_0212a2ec(buf, s, n);
            if (n <= 10) {
                if (func_0212b854(buf, 0, 10) == 3) {
                    s += n + 1;
                    if (memcmp(s, (void *)"MAT", STD_GetStringLength((void *)"MAT")) == 0) {
                        g = sDwcControl;
                        if (g->state != 5) {
                            if (g->state != 6) {
                                goto fin;
                            }
                            if (*(volatile u8 *)&g->matchType != 2 && *(volatile u8 *)&g->matchType != 3) {
                                goto fin;
                            }
                        }
                        char *t = s + STD_GetStringLength((void *)"MAT");
                        DwcMatch_OnGpMatchCommand(a, b[0], t);
                    }
                }
            }
        }
    }
fin:;
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcConn_OnGt2Receive(s32 a, s32 b, s32 c, s32 d) {
    DwcNet_OnReceive(a, b, c, d);
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcConn_OnGt2Closed(s32 a0, s32 a1) {
    u32 r5;
    s32 r4;
    s32 r7;
    Unk_ov065_0226fc54_Ctx *g;
    u32 v0c = 0;
    u32 v10 = 0;
    volatile BOOL k;
    Unk_ov065_0226fc54_Ent *volatile ent;
    Unk_ov065_0226fc54_Ent *et;

    if (DwcMatch_IsInactive() != 0) {
        return;
    }
    switch (a1) {
    case 0:
    case 1:
        r4 = 0;
        break;
    case 2:
    case 3:
        r4 = 6;
        r7 = -0x1db0;
        break;
    case 4:
        r4 = 8;
        r7 = -0x1db1;
        break;
    }
    if (r4 == 0) {
        et = GsTransport_GetUserData(a0);
        ent = et;
        if (et == 0) {
            return;
        }
        r5 = et->aid;
        u32 m = *(volatile u32 *)&sDwcControl->validAidMask;
        k = TRUE;
        if ((m & (1 << r5)) == 0) {
            k = FALSE;
        }
        DwcNet_ResetChannel(r5);
        g = sDwcControl;
        if ((g->matchType == 2 && a1 == 0) || (g->matchType == 3 && r5 == 0)) {
            v10 = 1;
        }
        v0c = DwcConn_RemoveAid(r5);
        sDwcConnTable[ent->slotIndex] = 0;
        sDwcControl->numClients--;
        sDwcControl->numPlayers--;
    }
    g = sDwcControl;
    if (g->isClosingAll == 0 && g->state == 6 && k == 0) {
        if (g->matchType == 2 && r4 == 0) {
            DwcMatch_UpdateServerStatus();
            DwcMatch_OnClientDisconnected(v0c);
            return;
        }
        return;
    }
    if (DwcMatch_OnConnectionClosed(r4, r7, v0c) != 0) {
        return;
    }
    if (r4 != 0) {
        DwcCore_SetError(r4, r7);
        return;
    }
    g = sDwcControl;
    if (g->isClosingAll == 0) {
        if (*(volatile u8 *)&g->matchType != 2 && *(volatile u8 *)&g->matchType != 3) {
            goto skip1;
        }
        Unk_ov065_0226fc54_Ctx *h = sDwcControl;
        u32 n = h->numClients;
        u32 i = n + 2;
        if (h->memberProfileIds[i] != 0) {
            h->aids[n + 1] = h->aids[i];
            DwcMatch_RemoveMemberAt(sDwcControl->numClients + 1, sDwcControl->numClients + 3);
        }
    }
skip1:
    g = sDwcControl;
    if (g->matchType == 2) {
        if (g->isClosingAll == 0) {
            DwcMatch_UpdateServerStatus();
        } else if (g->numClients == 0) {
            DwcFriend_SetOwnStatus(1, (void *)"", 0);
        }
    } else if (g->numClients == 0) {
        DwcFriend_SetOwnStatus(1, (void *)"", 0);
    }
    g = sDwcControl;
    if (*(volatile u8 *)&g->matchType != 0 && *(volatile u8 *)&g->matchType != 1) {
    } else {
        sDwcControl->maxPlayers = sDwcControl->numPlayers;
        GsQr_SendStateChanged(sDwcControl->qr2Object);
    }
    g = sDwcControl;
    if (g->unk_7c != 0 && k != 0) {
        if (a1 == 0) {
            a1 = 1;
        } else {
            a1 = 0;
        }
        sDwcControl->unk_7c(r4, a1, v10, r5, DwcFriend_FindIndexByProfileId(v0c), g->closedCallbackArg);
    }
    g = sDwcControl;
    if (g->isClosingAll == 0 && g->matchType == 2) {
        return;
    }
    if (g->numClients == 0) {
        GsNatNeg_FreeAll();
        DwcMatch_ResetPlayerCounts();
        DwcCore_SetState(3);
    }
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcConn_OnGt2Ping(s32 a, s32 b) {
    DwcNet_OnPing(a, b);
}
}
}

namespace F0226f7c8 {
extern "C" {
void DwcConn_OnGt2SocketError() {
    GsTransport_GetRemoteIp();
    data_ov065_02290674 = GsSock_GetLastError();
    DwcCore_SetError(8, -0x17aeb);
    *(u32 *)sDwcControl = 0;
}
}
}
