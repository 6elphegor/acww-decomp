// mwcc-flags: -nothumb -O4,p -str reuse
// The network file (WFC / GameSpy stats glue, local wireless; calls into overlays 65/66/67), autoload_2
// 0x020e9a08-0x020ec848, mwcc 1.2/base, C++, ARM, -O4,p, built with -str reuse (the original has one copy of each string
// literal that several functions use: the stats secret, the game name). The four former units unk_020e9a08.cpp (the
// tail of RC_020e92f4), unk_020ea0b4.cpp, unk_020ea34c.cpp (G002c) and unk_020ea960.cpp (G003a) are merged unchanged:
// each keeps its own declarations in a namespace (NetA..NetD; everything is extern "C", so no symbol name changes) because
// the parts declare the same objects and functions with different types. Its .data (0x0213b058-0x0213b120) and bss
// (autoload_3 0x021f488c-0x021f5974) are defined at the end of the file.
#include "types.h"
#include "gfx/VecFx32.h"
#include "net/HexTable.h"
#include "net/WifiPingState.h"

namespace NetA { // declarations as seen by the code of the former unit unk_020e9a08.cpp
// RC_020e92f4 (companion of RC_020e8558): G002b without its first four functions (those belong to the heap file, now RC_020e8558).
// The (probable) vector helper file (0x020e92f4-0x020e9a08) and the start of the network file (0x020e9a08-0x020ea0b4).
// autoload_2 0x020e92f4-0x020ea0b4, 39 functions. mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL, code unchanged from G002b, all data extern.

typedef volatile u64 vu64;

extern "C" {
void VEC_Normalize(VecFx32 *v); // VEC_Normalize
void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *out); // VEC_CrossProduct
s32 FX_Div(s32 a, s32 b); // FX_Div
s32 Math_Sqrt64(u64 x);
void Math_InitSqrt64(void);
void Vec_NormalizeCopy(VecFx32 *out, VecFx32 *in);
extern const s16 data_02135f44[]; // FX_SinCosTable_
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

#define FX_SinIdx(a) data_02135f44[((a) >> 4) * 2]
#define FX_CosIdx(a) data_02135f44[((a) >> 4) * 2 + 1]

extern "C" {
void *Net_Alloc(u32 size, u32 align); // alloc via hook data_021f48f4
void Net_Free(void *p); // free via hook sFreeHook
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8
void OS_SNPrintf(char *dst, u32 len, const char *fmt, ...); // OS_SPrintf

s32 Wlx_GetState(void);
s32 Wlx_StopExchange(void *p);
s32 Wlx_StartExchange(void *p);
void Wlx_Init(void *p, void *cb, u32 n);
void Wlx_SetPacketSizes(u32 a, u32 b, u32 c);
void Wlx_RegisterData(void *h, void *cb, void *a, u32 b, u32 c, u32 d);
void DwcMatch_ClearServerLock(void);
s32 DwcFriend_IsIdle(void);
void DwcFriend_DeleteFriend(void *p);
s32 DwcFriend_UpdateServersAsync(u32 a, void *b, u32 c, void *d, u32 e, void *f, u32 g);
void DwcGsHttp_Get(void *a, void *b, void *c);
void DWCi_Acc_LoginIdToUserName(void *a, u32 b, void *c);
void Net_OnWlxStopped(void);
void Net_OnWlxExchangeDone(void);
void Net_OnGameStatsChallenge(void);
void Net_OnWifiFriendDeleted(void);
void Net_OnWifiServersUpdated(void);
void Net_OnWifiFriendStatus(void);
void Net_OnHttpDownloadDone(void);
s64 Net_GetOwnFriendKey(void *p);
s32 DWC_IsBuddyFriendData(void *p);
s32 DWC_GetFriendDataType(void *p);
s32 DWC_IsEqualFriendData(void *p, void *q);
s32 DWC_CheckValidConsole(void *p);

extern u16 sWifiConnectStep;
extern u8 sNetMode;
extern u8 *sWifiFriendList;
extern u8 *sWifiUserData;
extern u32 data_021f48e8;
extern u32 data_021f48e0;
extern void *data_021f48c0;
extern void *data_021f48b8;
extern u32 data_021f489c;
extern u32 data_021f48cc;
extern s32 data_0213b06c;
extern s32 data_0213b068;
extern s32 data_0213b064;
extern u32 data_021f48dc;
extern u32 data_021f48a4;
extern u32 data_021f48b4;
extern u32 data_021f48c4;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
extern u32 data_021f48e4;
}
} // namespace NetA

namespace NetB { // declarations as seen by the code of the former unit unk_020ea0b4.cpp
extern "C" {
void *Net_Alloc(u32 size, u32 align); // alloc via hook data_021f48f4
void Net_Free(void *p); // free via hook sFreeHook
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8
void OS_SNPrintf(char *dst, u32 len, const char *fmt, ...); // OS_SPrintf
u32 STD_GetStringLength(const char *s); // strlen
void func_02127838(char *dst, const char *src); // strcpy
void MATH_CalcSHA1(void *dst, const void *src, u32 n); // memcpy

s32 Wlx_GetState(void);
s32 Wlx_StopExchange(void *p);
s32 Wlx_StartExchange(void *p);
void Wlx_Init(void *p, void *cb, u32 n);
void Wlx_SetPacketSizes(u32 a, u32 b, u32 c);
void Wlx_RegisterData(void *h, void *cb, void *a, u32 b, u32 c, u32 d);
void DwcMatch_ClearServerLock(void);
s32 DwcFriend_IsIdle(void);
void DwcFriend_DeleteFriend(void *p);
s32 DwcFriend_UpdateServersAsync(u32 a, void *b, u32 c, void *d, u32 e, void *f, u32 g);
void DwcGsHttp_Get(void *a, void *b, void *c);
s32 NasBase64_Encode(void *a, u32 b, void *c, u32 d);
void DwcGsHttp_PostCreate(void *p);
void DwcGsHttp_PostAddString(void *p, const char *fmt, const void *arg);
void DwcGsHttp_Post(void *a, void *b, void *c, u32 d);
void DWCi_Acc_LoginIdToUserName(void *a, u32 b, void *c);
void Net_OnWlxStopped(void);
void Net_OnWlxExchangeDone(void);
void Net_OnGameStatsChallenge(void);
void Net_OnWifiFriendDeleted(void);
void Net_OnWifiServersUpdated(void);
void Net_OnWifiFriendStatus(void);
void Net_OnHttpDownloadDone(void);
void Net_OnGameStatsUploadDone(void);
s64 Net_GetOwnFriendKey(void *p);
s32 DWC_IsBuddyFriendData(void *p);
s32 DWC_GetFriendDataType(void *p);
s32 DWC_IsEqualFriendData(void *p, void *q);
s32 DWC_CheckValidConsole(void *p);
s64 DWC_CreateFriendKey(void *p);
s32 DWC_CreateExchangeToken(void *p, void *q);
s32 DWCi_Acc_IsAuthentic(void *p);
u64 DWC_GetFriendKey(u32 a);
s32 DWC_CheckFriendKey(u32 ctx, u32 lo, u32 hi);
void DWC_CreateFriendKeyToken(void *out, u32 lo, u32 hi);
s32 DWC_GetGsProfileId(u32 ctx, void *out);
BOOL DWC_CheckDirtyFlag(void *p);
void DWC_ClearDirtyFlag(void *p);
void DWC_CreateUserData(void *p, u32 v);
void DwcMatch_ConnectToFriendServer(u32 a, void *b, u32 c, void *d, u32 e);
void DwcNet_SetSendDoneCallback(void *p);
void DwcNet_SetRecvCallback(void *p);
void DwcConn_SetClosedCallback(void *p, u32 v);
void DwcMatch_SetupGameServer(u32 a, void *b, u32 c, void *d, u32 e);
s32 DwcFriend_GetProfileId(void);
s32 DwcFriend_FindIndexByProfileId(void);
s32 LocalWl_GetState(void);
s32 LocalWl_ConnectToParent(void *p, u32 a, u32 b);
void *LocalWl_GetBeacon(u32 a, u32 b);
s32 LocalWl_IsBeaconValid(void *p);
s32 LocalWl_GetBeaconGameInfoSize(void *p);
s32 LocalWl_GetBeaconGameInfo(void *p);
s32 LocalWl_SetGameInfo(void);
s32 DwcCore_ClearError(void);
s32 DwcCore_GetLastError(void);
u32 Net_WifiFindFriend(void);
u32 Net_GetLocalError(void);
u32 Net_GetWifiError(void);
void Net_OnWifiClientMatched(void);
void Net_WifiCallbackNop(void);
void Net_OnWifiSendDone(void);
void Net_OnWifiRecv(void);
void Net_OnWifiClosedNop(void);
void Net_OnWifiHostMatched(void);
extern u8 data_021f488c;
extern u8 data_021f49e0[];
extern u32 data_021f4910[];
extern u32 sLastErrorCode;
extern u32 sWifiPingState[];
extern const HexTable data_0213b084;

extern u16 sWifiConnectStep;
extern u8 sNetMode;
extern u8 *sWifiFriendList;
extern u8 *sWifiUserData;
extern u32 data_021f48e8;
extern u32 data_021f48e0;
extern void *data_021f48c0;
extern void *data_021f48b8;
extern u32 data_021f489c;
extern u32 data_021f48cc;
extern s32 data_0213b06c;
extern s32 data_0213b068;
extern s32 data_0213b064;
extern u32 data_021f48dc;
extern u32 data_021f48a4;
extern u32 data_021f48b4;
extern char *data_021f48c4;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
extern u32 data_021f48e4;
}
} // namespace NetB

namespace NetC { // declarations as seen by the code of the former unit unk_020ea34c.cpp
// G002c: network file (WFC / GameSpy stats glue calling overlays 65, 66, 67), autoload_2 0x020ea34c-0x020ea960
// (21 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined, everything extern. Continues at 0x020ea960.

extern "C" {
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8

s64 Net_GetOwnFriendKey(void *p);
s64 DWC_CreateFriendKey(void *p);
s32 DWC_CreateExchangeToken(void *p, void *q);
s32 DWCi_Acc_IsAuthentic(void *p);
u64 DWC_GetFriendKey(u32 a);
s32 DWC_CheckFriendKey(u32 ctx, u32 lo, u32 hi);
void DWC_CreateFriendKeyToken(void *out, u32 lo, u32 hi);
s32 DWC_GetGsProfileId(u32 ctx, void *out);
BOOL DWC_CheckDirtyFlag(void *p);
void DWC_ClearDirtyFlag(void *p);
void DWC_CreateUserData(void *p, u32 v);
void DwcMatch_ConnectToFriendServer(u32 a, void *b, u32 c, void *d, u32 e);
void DwcNet_SetSendDoneCallback(void *p);
void DwcNet_SetRecvCallback(void *p);
void DwcConn_SetClosedCallback(void *p, u32 v);
void DwcMatch_SetupGameServer(u32 a, void *b, u32 c, void *d, u32 e);
s32 DwcFriend_GetProfileId(u32 a);
s32 DwcFriend_FindIndexByProfileId(u32 a);
s32 LocalWl_GetState(void);
s32 LocalWl_ConnectToParent(void *p, u32 a, u32 b);
void *LocalWl_GetBeacon(u32 a, u32 b);
s32 LocalWl_IsBeaconValid(void *p);
s32 LocalWl_GetBeaconGameInfoSize(void *p);
s32 LocalWl_GetBeaconGameInfo(void *p);
s32 LocalWl_SetGameInfo(void);
s32 DwcCore_ClearError(void);
s32 DwcCore_GetLastError(u32 *p);
s32 Net_WifiFindFriend(u32 a);
u32 Net_GetLocalError(void);
u32 Net_GetWifiError(void);
void Net_OnWifiClientMatched(void);
void Net_WifiCallbackNop(void);
void Net_OnWifiSendDone(void);
void Net_OnWifiRecv(void);
void Net_OnWifiClosedNop(void);
void Net_OnWifiHostMatched(void);
extern u8 data_021f488c;
extern u8 data_021f49e0[];
extern u32 data_021f4910[];
extern u32 sLastErrorCode;
extern Ent sWifiPingState[];

extern u16 sWifiConnectStep;
extern u8 sNetMode;
extern u8 *sWifiFriendList;
}
} // namespace NetC

namespace NetD { // declarations as seen by the code of the former unit unk_020ea960.cpp
// G003a: network file (WFC / GameSpy stats glue, overlays 65/66/67), autoload_2 0x020ea960-0x020ec848 (64 functions).
// mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined, no vtable, everything extern.
// Continues G002c (0x020ea34c-0x020ea960); the file ends at 0x020ec848 (tail-call stubs from there on are another file).

extern "C" {
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8
u64 OS_GetTick(void); // OS_GetTick
BOOL OS_ReadMessage(void *p, void *q, u32 v);

s32 LocalWl_GetState(void);
u32 LocalWl_IsReadyToSend(void);
s32 LocalWl_GetBeaconCount(u32 a);
s32 LocalWl_GetConnectedMask(void);
s32 LocalWl_GetMyAid(void);
u32 DwcConn_GetAidList(u8 **p);
u32 DwcConn_GetMyAid(void);
BOOL DwcNet_CanSendReliable(u32 a);
u32 DwcConn_GetAidBitmap(void);
s32 DwcFriend_CountValid(u8 *a, u32 b);
u32 LocalWl_GetMemberCount(void);
BOOL LocalWlMp_SetRecvBuffer(u32 a, u32 b, u32 c);
s32 DwcConn_GetConnectionCount(void);
BOOL DwcNet_SetRecvBuffer(u32 a, u32 b, u32 c);
u32 DwcInet_GetLinkLevel(void);
u32 LocalWl_GetLinkLevel(void);
void Wlx_Stop(void);
s32 DwcConn_CloseAllConnections(void);
void DwcGsHttp_Cleanup(void);
void DwcCore_Shutdown(void);
BOOL DwcInet_Disconnect(void);
void LocalWl_RequestMode(u32 a, u32 b, u32 c);
void LocalWlMp_Shutdown(void);
BOOL LocalWl_Finish(void);

BOOL Net_IsReadyToSend(void);
BOOL Net_WifiAllPeersSendable(void);
BOOL Net_IsSendIdle(u32 a);
BOOL Net_PollConnected(void);
BOOL Net_SendNextQueued(void);
void Net_ClearSendQueue(void);
BOOL Net_QueueSendToMask(u32 a, u32 b, u16 c, u32 d);
s32 Net_LocalCountBeacons(void);
s32 Net_WifiCountFriends(void);
u32 Net_GetError(void);
void Net_WaitFrame(void);
void Net_Free(void *p);
u32 Net_LocalGetLinkLevel(void);
u32 Net_WifiGetLinkLevel(void);
BOOL Net_WifiShutdownStep(void);
BOOL Net_LocalShutdown(void);
BOOL Net_ShutdownOv067(void);

extern u8 sNetMode;
extern u8 sLocalPeerState[];
extern u8 sSendQueue[];
extern u32 data_021f48b0;
extern u32 data_0213b060;
extern u8 *sWifiFriendList;
extern u16 sWifiConnectStep;
extern u16 sWifiShutdownStep;
extern u32 data_021f48ec;
extern u32 data_0213b06c;
extern u32 data_021f48e0;
extern void *data_021f48c0;
extern void *data_021f48b4;
extern void *data_021f48c4;
extern char *data_021f48dc;
extern u8 *data_021f48a4;
}

static inline BOOL timedout48ec(void) {
    s64 ms = (OS_GetTick() << 6) / 33514;
    u64 diff = ms - (s64)data_021f48ec;
    BOOL over = diff > (u64)data_0213b060;
    return over;
}

typedef void (*NetCb)(u32);
typedef void (*NetCb3)(u32, u32, u32);
typedef void *(*AllocFn)(u32, u32);
typedef void (*FreeFn)(void *);
struct NetInit {
    u32 w;
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
};
extern "C" {
void DwcInet_Init(void *p);
void DwcInet_SelectAuthServer(u32 a);
void DwcInet_StartConnect(void);
BOOL DwcInet_IsConnectDone(void);
s32 DwcInet_UpdateStatus(void);
void DwcGsHttp_Startup(void *p);
void DwcCore_Init(void *a, void *b, u32 c, void *d, void *e, u32 f, u32 g, void *h, u32 i);
void DwcLogin_Start(u32 a, u32 b, void *c, u32 d);
void DwcNet_SetMaxChunkSize(u32 a);
void DwcNet_SetPingCallback(void *p);
void DwcNet_SetAllocator(void *a, void *b);
void DwcInet_Process(void);
void DwcCore_Process(void);
void DwcGsHttp_Process(void);
void LocalWl_Init(u32 a, void *b, void *c, u32 d);
void LocalWl_SetEventCallback(void *p);
void LocalWlMp_Start(void *p);
void LocalWl_SetRecvCallback(void *p);
void OS_InitMessageQueue(void *a, void *b, u32 n);
void Net_WifiLockServer(void);
void Net_WifiPingNextPeer(void);
void Net_WifiCheckHostIdle(void);
void *Net_DwcAllocHook(u32 a, u32 b, u32 c);
void Net_DwcFreeHook(u32 a, void *b);
void *Net_Alloc(u32 a, u32 b);
void Net_OnLocalPeerEvent(u8 *p);
void Net_OnLocalRecv(u32 a, u32 b, u32 c);
u32 Net_GetConnectedMask(void);
BOOL Net_IsLocalConnected(void);
BOOL Net_WifiConnectStep(void);
extern u8 data_021f48f4[];
extern u8 data_021f4bc0[];
extern u8 *sWifiUserData;
extern u32 data_0213b064;
extern u32 data_0213b068;
extern NetCb3 sRecvCallback;
extern NetCb data_021f48c8;
extern Ent sWifiPingState[];

extern u32 data_021f48e4;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
extern u32 data_021f48cc;
extern u32 data_021f48b8;
extern u8 data_021f488c;
extern u8 data_0213b05c;
extern u32 data_021f489c;
extern AllocFn sAllocHook;
extern FreeFn sFreeHook;
extern u8 data_021f4950[];
}
extern "C" {
BOOL DwcMatch_IsServerLocked(void);
void DwcMatch_ClearServerLock(void);
void DwcMatch_SetOption(u32 a, u32 *b);
BOOL DwcConn_IsAidValid(u32 a);
void DwcNet_PingAid(u32 a);
void DwcGsHttp_Get(void *a, void *b, void *c);
void NasBase64_Decode(u32 a, u32 b, u32 c, u32 d);
void DwcFriend_SetStatusData(void *p, u32 n);
void DwcFriend_UpdateServersAsync(u32 a, void *b, u32 c, void *d, u32 e, void *f, u32 g);
u32 DwcFriend_GetStatusData(u8 *a, u8 *b, u8 *c, u8 *d, u32 *e);
BOOL DWC_IsValidFriendData(void *p);
char *func_02127838(char *dst, const char *src);
char *func_021277a4(char *dst, const char *src);
u32 STD_GetStringLength(const char *s);
void *MATH_CalcSHA1(void *dst, const void *src, u32 n);
void OS_SNPrintf(char *dst, u32 len, const char *fmt, ...);
s64 Net_GetOwnFriendKey(void *p);
void Net_OnHttpDownloadDone(void *a, void *b, u32 c, void *d);
void Net_OnGameStatsDownloadDone(void *a, void *b, u32 c, u32 d);
void Net_OnWifiFriendDeleted(u32 a);
void Net_OnWifiFriendStatus(u32 a);
void Net_OnWifiServersUpdated(u32 a);
void Net_OnWifiPingReply(u32 a, u32 i);
void Net_OnWifiLogin(u32 a, u32 b, u32 c);
extern u8 data_0213b058;
extern HexTable data_0213b070;
extern u32 data_021f48e8;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
}
struct NetSlot {
    u32 a;
    u32 b;
    u16 c;
    NetCb d;
};
extern "C" {
BOOL OS_ReceiveMessage(void *q, void *msg, u32 flags);
BOOL OS_SendMessage(void *q, u32 msg, u32 flags);
s32 LocalWl_Send(u32 a, u32 b, u32 c, void *d);
BOOL DwcNet_SendReliable(u32 a, u32 b, u32 c);
void Main_WaitVBlank(void);
void Net_Update(void);
void Net_OnSendDone(u32 a);
BOOL Net_QueueSendChecked(u32 a, u32 b, u32 c, u32 d);
BOOL Net_QueueSendPerAid(u32 a, u32 b, u32 c, u32 d);
BOOL Net_QueueSend(u32 a, u32 b, u32 c, u32 d);
extern NetSlot sSendSlots[];
}
} // namespace NetD

namespace NetD { // functions of the former unit unk_020ea960.cpp
extern "C" void Net_WaitFrame(void) {
    Net_Update();
    Main_WaitVBlank();
}

extern "C" void *Net_Alloc(u32 a, u32 b) {
    return sAllocHook(a, b);
}

extern "C" void Net_Free(void *p) {
    sFreeHook(p);
}

extern "C" void *Net_DwcAllocHook(u32 a, u32 b, u32 c) {
    return Net_Alloc(b, c);
}

extern "C" void Net_DwcFreeHook(u32 a, void *b) {
    Net_Free(b);
}

extern "C" BOOL Net_SendNextQueued(void) {
    u32 msg;
    NetSlot *s;
    u32 st;
    if (OS_ReadMessage(sSendQueue, &msg, 0) != 0) {
        s = &sSendSlots[msg];
        st = sNetMode;
        if ((u8)(st + 255) <= 1) return LocalWl_Send(s->a, s->b, s->c, (void *)Net_OnSendDone);
        if ((u8)(st + 253) <= 1) return DwcNet_SendReliable((u8)s->c, s->a, s->b);
    }
    return FALSE;
}

extern "C" void Net_OnSendDone(u32 a) {
    u32 msg[2];
    NetSlot *s;
    if (OS_ReceiveMessage(sSendQueue, msg, 0) == 0) return;
    s = &sSendSlots[msg[0]];
    if (s->d != NULL) s->d(a);
    s->a = 0;
    while (OS_ReadMessage(sSendQueue, msg, 0) != 0 && Net_SendNextQueued() == 0) {
        Net_WaitFrame();
    }
}

extern "C" void Net_ClearSendQueue(void) {
    u32 msg[2];
    u32 i;
    while (OS_ReceiveMessage(sSendQueue, msg, 0) != 0) {
    }
    for (i = 0; i < 16; i++) {
        sSendSlots[i].a = 0;
    }
}

extern "C" BOOL Net_QueueSend(u32 a, u32 b, u32 c, u32 d) {
    u32 i; BOOL r;
    i = r = 0;
    for (; i < 16; i++) {
        if (sSendSlots[i].a == 0) {
            sSendSlots[i].a = a;
            sSendSlots[i].b = b;
            sSendSlots[i].c = c;
            sSendSlots[i].d = (NetCb)d;
            OS_SendMessage(sSendQueue, i, 0);
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" BOOL Net_QueueSendChecked(u32 a, u32 b, u32 c, u32 d) {
    if (a != 0 && b != 0 && c != 0) return Net_QueueSend(a, b, c, d);
    return FALSE;
}

extern "C" BOOL Net_QueueSendPerAid(u32 a, u32 b, u32 c, u32 d) {
    u32 i;
    if (a != 0 && b != 0 && c != 0) {
        for (i = 0; i < 16; i++) {
            if ((c & (1 << i)) != 0) {
                if (Net_QueueSend(a, b, (u16)i, d) == 0) return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_QueueSendToMask(u32 a, u32 b, u16 c, u32 d) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return Net_QueueSendChecked(a, b, c, d);
    if ((u8)(st + 253) > 1) return FALSE;
    return Net_QueueSendPerAid(a, b, c, d);
}

extern "C" void Net_OnLocalPeerEvent(u8 *p) {
    switch (p[0]) {
    case 0:
        sLocalPeerState[p[1]] = 1;
        break;
    case 1:
        sLocalPeerState[p[1]] = 0;
        break;
    case 2:
        sLocalPeerState[0] = 0xff;
        break;
    }
}

extern "C" void Net_OnLocalRecv(u32 a, u32 b, u32 c) {
    sRecvCallback(a, b, c);
}

extern "C" void Net_OnWifiClientMatched(u32 a) {
    if (a == 0) data_0213b06c = 0;
}

extern "C" void Net_OnWifiClosedNop(void) {
}

extern "C" void Net_OnWifiSendDone(u32 a, u32 b) {
    sWifiPingState[b].b = 0;
    Net_OnSendDone(a);
}

extern "C" void Net_OnWifiRecv(u32 a, u32 b, u32 c) {
    sWifiPingState[a].b = 0;
    sRecvCallback(a, b, c);
}

extern "C" void Net_OnWifiHostMatched(u32 a, u32 b) {
    if (a != 0) return;
    if (b != 0) return;
    data_021f48cc = (u32)((OS_GetTick() << 6) / 33514);
}

extern "C" void Net_WifiCallbackNop(void) {
}

extern "C" void Net_OnWifiServersUpdated(u32 a) {
    u32 local;
    u32 i; u32 u; u32 t; 
    if (a != 0) return;
    data_0213b06c = 0;
    t = u = i = 0;
    for (; i < 32; i++) {
        if (DWC_IsValidFriendData(sWifiFriendList + u) != 0) {
            u8 *p = sWifiFriendList;
            u32 r = DwcFriend_GetStatusData(p + u, p + 0x191 + t, p + 0x192 + t, p + 0x180 + t, &local);
            (sWifiFriendList + t)[0x190] = r;
        }
        u += 12;
        t += 19;
    }
}

extern "C" void Net_OnWifiFriendStatus(u32 a) {
    u32 local;
    u8 *base = sWifiFriendList;
    u32 t = a * 19;
    u32 r = DwcFriend_GetStatusData(base + a * 12, base + 0x191 + t, base + 0x192 + t, base + 0x180 + t, &local);
    (sWifiFriendList + t)[0x190] = r;
}

extern "C" void Net_OnWifiFriendDeleted(u32 a) {
    u32 t;
    MI_CpuFill8(sWifiFriendList + a * 12, 0, 12);
    t = a * 19;
    MI_CpuFill8(sWifiFriendList + 0x180 + t, 0, 19);
    (sWifiFriendList + t)[0x190] = 0;
    if (data_021f48c8 != NULL) data_021f48c8(a);
}

extern "C" void Net_OnWifiLogin(u32 a, u32 b, u32 c) {
    if (a != 0) return;
    DwcFriend_SetStatusData(sWifiUserData, 16);
    DwcFriend_UpdateServersAsync(0, (void *)Net_OnWifiServersUpdated, c, (void *)Net_OnWifiFriendStatus, c, (void *)Net_OnWifiFriendDeleted, c);
}

extern "C" void Net_OnGameStatsUploadDone(void) {
    data_0213b064 = 1;
}

extern "C" void Net_OnGameStatsDownloadDone(void *a, void *b, u32 c, u32 d) {
    if (a != NULL && b != NULL && c == 0) {
        NasBase64_Decode((u32)a, (u32)b, d, data_021f48ac);
    }
    data_0213b068 = 1;
}

extern "C" void Net_OnHttpDownloadDone(void *a, void *b, u32 c, void *d) {
    if (a != NULL && b != NULL && c == 0) {
        MI_CpuCopy8(a, d, data_021f48ac);
    }
    data_0213b068 = 1;
}

extern "C" void Net_OnGameStatsChallenge(const char *a, u32 b, u32 c, char *d) {
    u32 i;
    if (a != NULL && b != 0 && c == 0) {
        func_02127838(d, "gOAkBaBav5XHlGyUKOOD");
        func_021277a4(d, a);
        MATH_CalcSHA1(data_021f48a4 + 20, d, b + STD_GetStringLength("gOAkBaBav5XHlGyUKOOD"));
        HexTable hex = data_0213b070;
        u8 *src = data_021f48a4 + 20;
        for (i = 0; i < 20; i++) {
            ((HexPair *)data_021f48a4)[i].hi = hex.c[src[i] >> 4];
            ((HexPair *)data_021f48a4)[i].lo = hex.c[src[i] & 15];
        }
        data_021f48a4[40] = 0;
        OS_SNPrintf(data_021f48dc, 0x100, "%s?pid=%llu&hash=%s&region=%s", data_021f48e4, Net_GetOwnFriendKey(sWifiUserData + 16), data_021f48a4, data_021f48a8);
        DwcGsHttp_Get(data_021f48dc, (void *)Net_OnGameStatsDownloadDone, d);
    } else {
        data_0213b068 = 1;
    }
}

extern "C" void Net_OnWlxStopped(u32 a) {
    if (a == 0) data_021f48e0 = 1;
}

extern "C" void Net_OnWlxExchangeDone(void) {
    data_021f48e8 = 1;
}

extern "C" void Net_OnWifiPingReply(u32 a, u32 i) {
    sWifiPingState[i].a = a;
    sWifiPingState[i].b = 0;
}

extern "C" void Net_WifiPingNextPeer(void) {
    u64 ms;
    u8 v;
    if (sWifiConnectStep < 5) return;
    ms = (OS_GetTick() << 6) / 33514;
    ms = ms / 250;
    v = (u8)(ms % data_021f488c);
    if (data_0213b058 == v) return;
    data_0213b058 = v;
    if (v != DwcConn_GetMyAid()) {
        if (DwcConn_IsAidValid(v) != 0) {
            sWifiPingState[v].b++;
            DwcNet_PingAid(v);
        } else {
            sWifiPingState[v].a = 0xffff;
            sWifiPingState[v].b = 0;
        }
    } else {
        sWifiPingState[v].a = 0;
        sWifiPingState[v].b = 0;
    }
}

extern "C" void Net_WifiLockServer(void) {
    u32 v;
    data_021f48cc = 0;
    if (sNetMode != 3) return;
    v = 1;
    DwcMatch_SetOption(1, &v);
}

extern "C" void Net_WifiCheckHostIdle(void) {
    if (sNetMode != 3) return;
    if (DwcMatch_IsServerLocked() == 0) return;
    if (data_021f48cc == 0) return;
    {
        s64 ms = (OS_GetTick() << 6) / 33514;
        u64 diff = ms - (s64)data_021f48cc;
        BOOL over = diff > (u64)120000;
        if (!over) return;
    }
    data_021f48cc = 0;
    DwcMatch_ClearServerLock();
}

extern "C" void Net_OnHeapCreatedNop(void) {
}

extern "C" void Net_OnHeapDestroyNop(void) {
}

extern "C" void Net_Init(u32 a, u32 b, u32 c, u64 d, u8 e, AllocFn f, FreeFn g) {
    sNetMode = 0;
    data_021f489c = a;
    data_021f48b8 = b;
    data_0213b05c = c;
    data_0213b060 = (u32)((d << 6) / 33514);
    data_021f488c = e;
    sAllocHook = f;
    sFreeHook = g;
    OS_InitMessageQueue(sSendQueue, data_021f4950, 16);
    MI_CpuFill8(sSendSlots, 0, 256);
}

extern "C" void Net_Update(void) {
    if ((u8)(sNetMode + 253) > 1) return;
    if (sWifiConnectStep == 1) {
        DwcInet_Process();
        return;
    }
    DwcCore_Process();
    DwcGsHttp_Process();
    Net_WifiPingNextPeer();
    Net_WifiCheckHostIdle();
}

extern "C" void Net_StartLocal(u32 a, NetCb3 b) {
    NetInit init;
    sRecvCallback = b;
    sNetMode = a;
    MI_CpuFill8(sLocalPeerState, 0, 16);
    init.w = data_021f48b8;
    init.b4 = data_021f488c;
    init.b6 = 60;
    init.b7 = 2;
    init.b5 = 8;
    LocalWl_Init(data_0213b05c, (void *)Net_Alloc, (void *)Net_Free, 0);
    LocalWl_SetEventCallback((void *)Net_OnLocalPeerEvent);
    LocalWlMp_Start(&init);
    LocalWl_SetRecvCallback((void *)Net_OnLocalRecv);
    if (a == 1) {
        LocalWl_RequestMode(3, 0, 0);
    } else if (a == 2) {
        LocalWl_RequestMode(4, 0, 0);
    }
}

extern "C" void Net_StartWifi(u32 a, NetCb3 b, NetCb c, u8 *d, u8 *e) {
    u32 i;
    u32 t;
    sNetMode = a;
    sRecvCallback = b;
    sWifiUserData = d;
    data_021f48c8 = c;
    sWifiFriendList = e;
    sWifiConnectStep = 0;
    sWifiShutdownStep = 0;
    data_0213b064 = 0;
    data_0213b068 = 1;
    data_021f48b4 = NULL;
    data_021f48c4 = NULL;
    data_021f48dc = NULL;
    data_021f48e4 = 0;
    data_021f48ac = 0;
    data_021f48a8 = 0;
    data_021f48a4 = NULL;
    data_021f48cc = 0;
    MI_CpuFill8(sWifiPingState, 0, 64);
    t = i = 0;
    for (; i < 32; i++) {
        (sWifiFriendList + t)[0x190] = 0;
        t += 19;
    }
    DwcNet_SetAllocator((void *)Net_DwcAllocHook, (void *)Net_DwcFreeHook);
}

extern "C" BOOL Net_IsLocalConnected(void) {
    return (u32)(LocalWl_GetState() - 10) <= 1;
}

extern "C" BOOL Net_WifiConnectStep(void) {
    switch (sWifiConnectStep) {
    case 0:
        DwcInet_Init(data_021f48f4);
        DwcInet_SelectAuthServer(2);
        DwcInet_StartConnect();
        sWifiConnectStep = 1;
        break;
    case 1:
        if (DwcInet_IsConnectDone() != 0) {
            if (DwcInet_UpdateStatus() == 4) sWifiConnectStep = 2;
        }
        break;
    case 2:
        DwcGsHttp_Startup((void *)"acrossingds");
        data_0213b064 = 1;
        data_0213b06c = 1;
        DwcCore_Init(data_021f4bc0, sWifiUserData + 16, 0x299e, (u8 *)"acrossingds", (u8 *)"h2P9x6", 0, 0, sWifiFriendList, 32);
        DwcLogin_Start(0, 0, (void *)Net_OnWifiLogin, 0);
        sWifiConnectStep = 3;
        break;
    case 3:
        if (data_0213b06c == 0) {
            data_0213b06c = 1;
            sWifiConnectStep = 4;
        }
        break;
    case 4:
        if (sNetMode == 3) data_0213b06c = 0;
        if (data_0213b06c == 0) {
            DwcNet_SetMaxChunkSize(0x100);
            DwcNet_SetPingCallback((void *)Net_OnWifiPingReply);
            Net_WifiLockServer();
            sWifiConnectStep = 5;
        }
        break;
    case 5:
        if (sNetMode == 4) {
            if ((Net_GetConnectedMask() & 1) == 0) return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_PollConnected(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return Net_IsLocalConnected();
    if ((u8)(st + 253) > 1) return FALSE;
    return Net_WifiConnectStep();
}

extern "C" BOOL Net_LocalShutdown(void) {
    u32 start;
    LocalWl_RequestMode(0, 0, 0);
    start = (u32)((OS_GetTick() << 6) / 33514);
    while (LocalWl_GetState() != 2) {
        s64 ms = (OS_GetTick() << 6) / 33514;
        u64 diff = ms - (s64)start;
        BOOL over = diff > (u64)data_0213b060;
        if (over != 0) return FALSE;
    }
    LocalWlMp_Shutdown();
    if (LocalWl_Finish() == 0) return FALSE;
    sNetMode = 6;
    return TRUE;
}

extern "C" BOOL Net_WifiShutdownStep(void) {
    switch (sWifiShutdownStep) {
    case 0:
        data_021f48ec = (u32)((OS_GetTick() << 6) / 33514);
        sWifiShutdownStep = 1;
        break;
    case 1:
        if (data_0213b06c == 0 || sWifiConnectStep == 4 || timedout48ec()) {
            Net_GetError();
            if (DwcConn_CloseAllConnections() < 0) {
                data_021f48ec = 0;
            } else {
                data_021f48ec = (u32)((OS_GetTick() << 6) / 33514);
            }
            sWifiShutdownStep = 2;
        }
        break;
    case 2:
        if (DwcConn_GetConnectionCount() < 2) {
            sWifiShutdownStep = 3;
        } else if (timedout48ec()) {
            sWifiShutdownStep = 3;
        }
        break;
    case 3:
        DwcGsHttp_Cleanup();
        sWifiShutdownStep = 4;
        break;
    case 4:
        DwcCore_Shutdown();
        sWifiShutdownStep = 5;
        break;
    case 5:
        if (DwcInet_Disconnect() != 0) sWifiShutdownStep = 6;
        break;
    case 6:
        if (data_021f48b4 != NULL) {
            Net_Free(data_021f48b4);
            Net_Free(data_021f48c4);
            data_021f48b4 = NULL;
            data_021f48c4 = NULL;
        }
        if (data_021f48dc != NULL) {
            Net_Free(data_021f48dc);
            Net_Free(data_021f48a4);
            data_021f48dc = NULL;
            data_021f48a4 = NULL;
        }
        sWifiShutdownStep = 7;
        break;
    case 7:
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_ShutdownOv067(void) {
    Wlx_Stop();
    while (data_021f48e0 == 0) {
        Net_WaitFrame();
    }
    Net_Free(data_021f48c0);
    data_021f48c0 = NULL;
    sNetMode = 6;
    return TRUE;
}

extern "C" BOOL Net_Shutdown(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return Net_LocalShutdown();
    if (st == 3 || st == 4) {
        while (Net_WifiShutdownStep() == 0) {
            Net_WaitFrame();
        }
        sNetMode = 6;
        return TRUE;
    }
    if (st != 5) return FALSE;
    return Net_ShutdownOv067();
}

extern "C" BOOL Net_WifiShutdownStepExt(void) {
    return Net_WifiShutdownStep();
}

extern "C" u32 Net_LocalGetLinkLevel(void) {
    switch (LocalWl_GetLinkLevel()) {
    case 0:
        break;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    }
    return 0;
}

extern "C" u32 Net_WifiGetLinkLevel(void) {
    if (sWifiConnectStep <= 1) return 0;
    return DwcInet_GetLinkLevel();
}

extern "C" BOOL Net_GetLinkLevel(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return Net_LocalGetLinkLevel();
    if ((u8)(st + 253) > 1) return FALSE;
    return Net_WifiGetLinkLevel();
}

extern "C" BOOL Net_SetRecvBuffer(u32 a, u32 b, u32 c) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return LocalWlMp_SetRecvBuffer(a, b, c);
    if ((u8)(st + 253) > 1) return FALSE;
    return DwcNet_SetRecvBuffer((u8)a, b, c);
}

extern "C" u32 Net_GetMemberCount(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return LocalWl_GetMemberCount();
    if ((u8)(st + 253) > 1) return TRUE;
    return (u8)DwcConn_GetConnectionCount();
}

extern "C" u32 Net_GetMyAid(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) {
        if (st == 1) return FALSE;
        return LocalWl_GetMyAid();
    }
    if ((u8)(st + 253) > 1) return FALSE;
    return DwcConn_GetMyAid();
}

extern "C" u32 Net_GetConnectedMask(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return LocalWl_GetConnectedMask();
    if ((u8)(st + 253) > 1) return TRUE;
    return (u16)DwcConn_GetAidBitmap();
}

extern "C" u32 Net_GetMode(void) {
    return sNetMode;
}

extern "C" s32 Net_LocalCountBeacons(void) {
    if (LocalWl_GetState() != 7) return -1;
    return LocalWl_GetBeaconCount(0);
}

extern "C" s32 Net_WifiCountFriends(void) {
    return DwcFriend_CountValid(sWifiFriendList, 32);
}

extern "C" s32 Net_CountHostCandidates(void) {
    u32 st = sNetMode;
    if (st == 2) return Net_LocalCountBeacons();
    if (st != 4) return -1;
    return Net_WifiCountFriends();
}

extern "C" BOOL Net_IsSendIdle(u32 a) {
    u32 tmp;
    if (a != 0) {
        if (OS_ReadMessage(sSendQueue, &tmp, 0) != 0) {
            if (data_021f48b0 != 0) {
                s64 ms = (OS_GetTick() << 6) / 33514;
                u64 diff = ms - (s64)data_021f48b0;
                BOOL over = diff > (u64)data_0213b060;
                if (over) {
                    data_021f48b0 = 0;
                    Net_SendNextQueued();
                }
            } else {
                data_021f48b0 = (u32)((OS_GetTick() << 6) / 33514);
            }
        } else {
            data_021f48b0 = 0;
            return TRUE;
        }
    } else {
        data_021f48b0 = 0;
    }
    return FALSE;
}

extern "C" BOOL Net_WifiAllPeersSendable(void) {
    u8 *buf;
    u32 i;
    u32 n;
    n = DwcConn_GetAidList(&buf);
    i = 0;
    for (; i < n; i++) {
        u32 c = buf[i];
        if (c != DwcConn_GetMyAid()) {
            if (DwcNet_CanSendReliable(c) == 0) return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL Net_IsReadyToSend(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) {
        return Net_IsSendIdle(LocalWl_IsReadyToSend());
    }
    if ((u8)(st + 253) > 1) return FALSE;
    return Net_IsSendIdle(Net_WifiAllPeersSendable());
}

extern "C" BOOL Net_SendPackets3(u32 a0, u32 b0, u16 c0, u32 d0, u32 a1, u32 b1, u16 c1, u32 d1, u32 a2, u32 b2, u16 c2, u32 d2) {
    if (Net_PollConnected() != 0) {
        if (Net_IsReadyToSend() != 0) {
            BOOL r5 = Net_QueueSendToMask(a0, b0, c0, d0);
            BOOL r4 = Net_QueueSendToMask(a1, b1, c1, d1);
            BOOL r = Net_QueueSendToMask(a2, b2, c2, d2);
            if (r5 != 0 || r4 != 0 || r != 0) {
                if (Net_SendNextQueued() != 0) return TRUE;
                Net_ClearSendQueue();
            }
        }
    }
    return FALSE;
}

extern "C" u32 Net_GetLocalError(void) {
    s32 st = LocalWl_GetState();
    if ((st & 0x80) != 0) {
        switch (st & ~0x80) {
        case 0:
            return 0;
        case 12:
            return 0x800c;
        case 1:
            return 0x8001;
        case 2:
            return 0x8002;
        case 3:
            return 0x8003;
        case 4:
            return 0x8004;
        case 5:
            return 0x8005;
        case 6:
            return 0x8006;
        case 7:
            return 0x8007;
        case 8:
            return 0x8008;
        case 9:
            return 0x8009;
        case 10:
            return 0x800a;
        case 11:
            return 0x800b;
        case 13:
            return 0x800d;
        case 14:
            return 0x800e;
        case 15:
            return 0x800f;
        case 16:
            return 0x8010;
        case 65:
            return 0x8041;
        case 66:
            return 0x8042;
        case 67:
            return 0x8043;
        case 68:
            return 0x8044;
        default:
            return 0xffff;
        }
    }
    if (sLocalPeerState[0] == 0xff) return 0x80ff;
    return 0;
}
} // namespace NetD

namespace NetC { // functions of the former unit unk_020ea34c.cpp
extern "C" u32 Net_GetWifiError(void) {
    u32 err = DwcCore_GetLastError(&sLastErrorCode);
    u32 i;
    if (err != 0) {
        switch (err) {
        case 1:
            return 0x4001;
        case 2:
            return 0x4002;
        case 3:
            return 0x4003;
        case 4:
            return 0x4004;
        case 5:
            return 0x4005;
        case 6:
            return 0x4006;
        case 9:
            return 0x4009;
        case 10:
            return 0x400a;
        case 7:
            return 0x4007;
        case 11:
            return 0x400b;
        case 8:
            return 0x4008;
        default:
            return 0xffff;
        }
    }
    for (i = 0; i < 16; i++) {
        if (sWifiPingState[i].b > 30) {
            sLastErrorCode = 1000000;
            return 0x4007;
        }
    }
    return 0;
}

extern "C" u32 Net_GetError(void) {
    u32 st = sNetMode;
    sLastErrorCode = 0;
    if ((u8)(st + 255) <= 1) return Net_GetLocalError();
    if ((u8)(st + 253) <= 1) return Net_GetWifiError();
    if (st != 5) return 0xffff;
    return 0;
}

extern "C" u32 Net_GetLastErrorCode(void) {
    return sLastErrorCode;
}

extern "C" s32 Net_ClearWifiError(void) {
    return DwcCore_ClearError();
}

extern "C" s32 Net_SetLocalGameInfo(void) {
    return LocalWl_SetGameInfo();
}

extern "C" s32 Net_GetBeaconGameInfo(void *p) {
    if (p == NULL) return 0;
    return LocalWl_GetBeaconGameInfo(p);
}

extern "C" s32 Net_GetBeaconGameInfoSize(void *p) {
    if (p == NULL) return 0;
    return LocalWl_GetBeaconGameInfoSize(p);
}

extern "C" u32 *Net_GetScanResults(void) {
    u32 i;
    u32 n;
    MI_CpuFill8(data_021f4910, 0, 32);
    if (LocalWl_GetState() == 7) {
        n = i = 0;
        for (; i < 8; i++) {
            void *r = LocalWl_GetBeacon(0, i & 0xff);
            if (LocalWl_IsBeaconValid(r) != 0) data_021f4910[n++] = (u32)r;
        }
    }
    return data_021f4910;
}

extern "C" s32 Net_ConnectToParent(void *p) {
    if (LocalWl_GetState() == 7 && p != NULL) {
        MI_CpuCopy8(p, data_021f49e0, 0xe0);
        return LocalWl_ConnectToParent(data_021f49e0, 0, 0);
    }
    return 0;
}

extern "C" s32 Net_WifiFindFriend(u32 a) {
    if (sWifiConnectStep < 4) return -1;
    return DwcFriend_FindIndexByProfileId(a);
}

extern "C" s32 Net_WifiGetFriendProfileId(u32 a) {
    if (sWifiConnectStep < 4) return -1;
    return DwcFriend_GetProfileId(a);
}

extern "C" u8 *Net_GetWifiFriendList(void) {
    if (sWifiConnectStep < 4) return NULL;
    return sWifiFriendList;
}

extern "C" BOOL Net_WifiStartHost(void) {
    if (sWifiConnectStep < 4) return FALSE;
    sNetMode = 3;
    DwcMatch_SetupGameServer(data_021f488c, (void *)Net_OnWifiHostMatched, 0, (void *)Net_WifiCallbackNop, 0);
    DwcNet_SetSendDoneCallback((void *)Net_OnWifiSendDone);
    DwcNet_SetRecvCallback((void *)Net_OnWifiRecv);
    DwcConn_SetClosedCallback((void *)Net_OnWifiClosedNop, 0);
    return TRUE;
}

extern "C" BOOL Net_WifiConnectToHost(u32 a) {
    u32 r;
    if (sWifiConnectStep != 4) return FALSE;
    sNetMode = 4;
    r = Net_WifiFindFriend(a);
    if (r == (u32)-1) return FALSE;
    DwcMatch_ConnectToFriendServer(r, (void *)Net_OnWifiClientMatched, 0, (void *)Net_WifiCallbackNop, 0);
    DwcNet_SetSendDoneCallback((void *)Net_OnWifiSendDone);
    DwcNet_SetRecvCallback((void *)Net_OnWifiRecv);
    DwcConn_SetClosedCallback((void *)Net_OnWifiClosedNop, 0);
    return TRUE;
}

extern "C" void Net_CreateUserData(void *p, u32 v) {
    DWC_CreateUserData(p, v);
    DWC_ClearDirtyFlag(p);
}

extern "C" BOOL Net_CheckUserDataChanged(void *p) {
    if (DWC_CheckDirtyFlag(p) == 0) return FALSE;
    DWC_ClearDirtyFlag(p);
    return TRUE;
}

extern "C" s32 Net_HasWifiUserId(void *p) {
    return DWCi_Acc_IsAuthentic(p);
}

extern "C" s32 Net_MakeOwnFriendData(void *p, void *q) {
    return DWC_CreateExchangeToken(p, q);
}

extern "C" s64 Net_GetOwnFriendKey(void *p) {
    return DWC_CreateFriendKey(p);
}

extern "C" BOOL Net_FriendKeyToFriendData(u32 ctx, void *out, u64 key) {
    if (DWC_CheckFriendKey(ctx, (u32)key, (u32)(key >> 32)) != 0) {
        DWC_CreateFriendKeyToken(out, (u32)key, (u32)(key >> 32));
        if (DWC_GetGsProfileId(ctx, out) > 0) return TRUE;
    }
    return FALSE;
}

extern "C" u64 Net_GetFriendKey(u32 a) {
    return DWC_GetFriendKey(a);
}
} // namespace NetC

namespace NetB { // functions of the former unit unk_020ea0b4.cpp
extern "C" BOOL Net_GameStatsUpload(char *a, void *b, u32 c, u32 d) {
    u32 builder;
    HexTable hex;
    char buf[16];
    u32 sz;
    u32 enc;
    u32 len;
    u8 *dg;
    u32 i;
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b064 != 0) {
        enc = ((c + 2) / 3) * 4 + 1;
        sz = STD_GetStringLength("gOAkBaBav5XHlGyUKOOD");
        data_021f48b4 = (u32)Net_Alloc(sz + enc, 4);
        if (data_021f48b4 == 0) return FALSE;
        data_021f48c4 = (char *)Net_Alloc(0x29, 4);
        if (data_021f48c4 == NULL) {
            Net_Free((void *)data_021f48b4);
            data_021f48b4 = 0;
            return FALSE;
        }
        func_02127838((char *)data_021f48b4, "gOAkBaBav5XHlGyUKOOD");
        len = NasBase64_Encode(b, c, (char *)data_021f48b4 + sz, enc);
        MATH_CalcSHA1(data_021f48c4 + 0x14, (void *)data_021f48b4, sz + len);
        hex = data_0213b084;
        dg = (u8 *)data_021f48c4 + 0x14;
        for (i = 0; i < 20; i++) {
            ((HexPair *)data_021f48c4)[i].hi = hex.c[dg[i] >> 4];
            ((HexPair *)data_021f48c4)[i].lo = hex.c[dg[i] & 15];
        }
        data_021f48c4[0x28] = 0;
        data_0213b064 = 0;
        MI_CpuFill8(buf, 0, 16);
        OS_SNPrintf(buf, 16, "%llu", Net_GetOwnFriendKey(sWifiUserData + 0x10));
        DwcGsHttp_PostCreate(&builder);
        DwcGsHttp_PostAddString(&builder, "pid", buf);
        DwcGsHttp_PostAddString(&builder, "hash", data_021f48c4);
        DwcGsHttp_PostAddString(&builder, "data", (char *)data_021f48b4 + 0x14);
        DwcGsHttp_PostAddString(&builder, "region", (void *)d);
        DwcGsHttp_Post(a, &builder, (void *)Net_OnGameStatsUploadDone, 0);
        return TRUE;
    }
    return FALSE;
}
} // namespace NetB

namespace NetA { // functions of the former unit unk_020e9a08.cpp
extern "C" BOOL Net_IsUploadDone(s32 a) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b064 != 0) {
        if (data_021f48b4 != 0) {
            Net_Free((void *)data_021f48b4);
            Net_Free((void *)data_021f48c4);
            data_021f48b4 = 0;
            data_021f48c4 = 0;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_GameStatsDownload(u32 a, void *b, u32 c, u32 d) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b068 != 0) {
        data_021f48dc = (u32)Net_Alloc(0x100, 4);
        if (data_021f48dc == 0) return FALSE;
        data_021f48a4 = (u32)Net_Alloc(0x29, 4);
        if (data_021f48a4 == 0) {
            Net_Free((void *)data_021f48dc);
            data_021f48dc = 0;
            return FALSE;
        }
        data_0213b068 = 0;
        data_021f48e4 = a;
        data_021f48ac = c;
        data_021f48a8 = d;
        OS_SNPrintf((char *)data_021f48dc, 0x100, "%s?pid=%llu&region=%s", data_021f48e4, Net_GetOwnFriendKey(sWifiUserData + 0x10), d);
        DwcGsHttp_Get((void *)data_021f48dc, (void *)Net_OnGameStatsChallenge, b);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_HttpDownload(void *a, void *b, u32 c, u32 d) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b068 == 0) return FALSE;
    data_021f48ac = c;
    data_0213b068 = 0;
    DwcGsHttp_Get(a, (void *)Net_OnHttpDownloadDone, b);
    return TRUE;
}

extern "C" BOOL Net_IsDownloadDone(s32 a) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b068 != 0) {
        if (data_021f48dc != 0) {
            Net_Free((void *)data_021f48dc);
            Net_Free((void *)data_021f48a4);
            data_021f48dc = 0;
            data_021f48a4 = 0;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 Net_IsWifiConfigValid(void *p) {
    return DWC_CheckValidConsole(p);
}

extern "C" s32 Net_IsSameFriendData(void *p, void *q) {
    return DWC_IsEqualFriendData(p, q);
}

extern "C" BOOL Net_GetFriendDataType(void *p) {
    return DWC_GetFriendDataType(p);
}

extern "C" s32 func_020e9d70(void *p) {
    return DWC_IsBuddyFriendData(p);
}

extern "C" s32 Net_WifiAddFriend(u32 a, void *b) {
    s32 r;
    u32 t;
    if (DwcFriend_IsIdle() == 0 || sWifiConnectStep < 5 || data_0213b06c != 0) return 0;
    MI_CpuCopy8(b, sWifiFriendList + a * 12, 12);
    t = a * 19;
    MI_CpuFill8(sWifiFriendList + 0x180 + t, 0, 19);
    (sWifiFriendList + t)[0x190] = 0;
    data_0213b06c = 1;
    r = DwcFriend_UpdateServersAsync(0, (void *)Net_OnWifiServersUpdated, 0, (void *)Net_OnWifiFriendStatus, 0, (void *)Net_OnWifiFriendDeleted, 0);
    if (r == 0) data_0213b06c = 0;
    return r;
}

extern "C" BOOL Net_WifiDeleteFriend(u32 a) {
    u32 t;
    u32 u;
    if (DwcFriend_IsIdle() == 0 || sWifiConnectStep < 5 || data_0213b06c != 0) return FALSE;
    u = a * 12;
    DwcFriend_DeleteFriend(sWifiFriendList + u);
    MI_CpuFill8(sWifiFriendList + u, 0, 12);
    t = a * 19;
    MI_CpuFill8(sWifiFriendList + 0x180 + t, 0, 19);
    (sWifiFriendList + t)[0x190] = 0;
    return TRUE;
}

extern "C" BOOL Net_WifiHostKeepAlive(void) {
    if (sNetMode == 3) {
        data_021f48cc = 0;
        DwcMatch_ClearServerLock();
    }
    return TRUE;
}

extern "C" BOOL Net_GetBrid(u8 *out) {
    u8 buf[24];
    if (sWifiConnectStep < 4) return FALSE;
    DWCi_Acc_LoginIdToUserName(sWifiUserData + 0x20, data_021f489c, buf);
    MI_CpuCopy8(buf + 9, out, 12);
    return TRUE;
}

extern "C" void Net_StartOv067(void *a, void *b, u32 n) {
    sNetMode = 5;
    data_021f48e0 = 0;
    data_021f48e8 = 0;
    data_021f48c0 = Net_Alloc(0xa000, 32);
    Wlx_Init(data_021f48c0, (void *)Net_OnWlxStopped, 2);
    Wlx_SetPacketSizes(60, 60, 1);
    Wlx_RegisterData(data_021f48b8, (void *)Net_OnWlxExchangeDone, a, n, (u32)b, n);
}

extern "C" s32 Net_WlxStartExchange(void *p) {
    return Wlx_StartExchange(p);
}

extern "C" s32 Net_WlxStopExchange(void *p) {
    return Wlx_StopExchange(p);
}

extern "C" BOOL Net_WlxIsReady(void *p) {
    return Wlx_GetState() == 2;
}

extern "C" u32 Net_WlxIsExchangeDone(void *p) {
    return data_021f48e8;
}
} // namespace NetA

// ---- the file's data (.data 0x0213b058-0x0213b120: the named objects, then the string literals of the code, which this
// file pools: it is built with -str reuse, see the first line) and bss (autoload_3 0x021f488c-0x021f5974), defined once
// with plain types: the four parts above keep the declarations their code was matched with (they differ: u32 / pointer
// views of the same words), so the definitions are in a namespace of their own. This definition order gives the
// original order after mwcc's size sort.
namespace NetDefs {
extern "C" {
u8 data_021f4bc0[0xdb4];
u8 sSendSlots[0x100]; // send slots (data_021f4ac4 / 4ac8 / 4acc: interior labels)
u8 data_021f49e0[0xe0];
u8 sWifiPingState[0x50]; // ping state records (data_021f4992: interior label)
u8 data_021f4950[0x40];
u32 data_021f4910[8];
u8 sSendQueue[0x20];
HexTable data_0213b070 = {"0123456789abcdef"};
HexTable data_0213b084 = {"0123456789abcdef"};
u8 sLocalPeerState[0x10];
u8 data_021f48f4[0xc];
u32 sRecvCallback;
u32 data_021f48e8;
u32 data_021f48e4;
u32 data_021f48e0;
u32 data_021f48dc;
u32 sWifiUserData;
u32 sWifiFriendList;
u32 data_021f489c;
s32 data_0213b064 = 1;
u32 data_021f48c8;
u32 data_021f48c4;
u32 data_021f48b0;
u32 data_021f48ac;
u32 sLastErrorCode;
u32 data_021f48b8;
u32 data_021f48ec;
u32 data_021f48cc;
u32 data_021f48a8;
u32 data_021f48a4;
u32 sAllocHook;
s32 data_0213b068 = 1;
s32 data_0213b06c = 1;
u32 data_021f48c0;
u32 data_021f48b4;
u32 sFreeHook;
u32 data_0213b060 = 10000;
u16 sWifiShutdownStep;
u16 sWifiConnectStep;
u8 sNetMode;
u8 data_0213b05c = 0xff;
u8 data_021f488c;
u8 data_0213b058 = 0xff;
}
} // namespace NetDefs
