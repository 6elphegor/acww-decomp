// mwcc-flags: -nothumb -O4,p
// G003a: network file (WFC / GameSpy stats glue, overlays 65/66/67), autoload_2 0x020ea960-0x020ec848 (64 functions).
// mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined, no vtable, everything extern.
// Continues G002c (0x020ea34c-0x020ea960); the file ends at 0x020ec848 (tail-call stubs from there on are another file).
#include "types.h"
#include "net/HexTable.h"
#include "net/WifiPingState.h"

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
s32 func_020eaee4(void);
s32 func_020eaec8(void);
u32 Net_GetError(void);
void Net_WaitFrame(void);
void Net_Free(void *p);
u32 func_020eb164(void);
u32 func_020eb12c(void);
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
void func_020ebd04(void);
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
extern u8 sDwcGameName[];
extern u8 sDwcSecretKey[];
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
BOOL func_020ffde0(void *p);
char *func_02127838(char *dst, const char *src);
char *func_021277a4(char *dst, const char *src);
u32 STD_GetStringLength(const char *s);
void *MATH_CalcSHA1(void *dst, const void *src, u32 n);
void OS_SNPrintf(char *dst, u32 len, const char *fmt, ...);
s64 func_020ea3c4(void *p);
void Net_OnHttpDownloadDone(void *a, void *b, u32 c, void *d);
void Net_OnGameStatsDownloadDone(void *a, void *b, u32 c, u32 d);
void Net_OnWifiFriendDeleted(u32 a);
void Net_OnWifiFriendStatus(u32 a);
void Net_OnWifiServersUpdated(u32 a);
void Net_OnWifiPingReply(u32 a, u32 i);
void Net_OnWifiLogin(u32 a, u32 b, u32 c);
extern u8 data_0213b058;
extern u8 sGameStatsSecret[];
extern HexTable data_0213b070;
extern u8 data_0213b100[];
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

extern "C" void func_020ec3c4(u32 a) {
    if (a == 0) data_0213b06c = 0;
}

extern "C" void func_020ec3c0(void) {
}

extern "C" void Net_OnWifiSendDone(u32 a, u32 b) {
    sWifiPingState[b].b = 0;
    Net_OnSendDone(a);
}

extern "C" void Net_OnWifiRecv(u32 a, u32 b, u32 c) {
    sWifiPingState[a].b = 0;
    sRecvCallback(a, b, c);
}

extern "C" void func_020ec310(u32 a, u32 b) {
    if (a != 0) return;
    if (b != 0) return;
    data_021f48cc = (u32)((OS_GetTick() << 6) / 33514);
}

extern "C" void func_020ec30c(void) {
}

extern "C" void Net_OnWifiServersUpdated(u32 a) {
    u32 local;
    u32 i; u32 u; u32 t; 
    if (a != 0) return;
    data_0213b06c = 0;
    t = u = i = 0;
    for (; i < 32; i++) {
        if (func_020ffde0(sWifiFriendList + u) != 0) {
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
        func_02127838(d, (const char *)sGameStatsSecret);
        func_021277a4(d, a);
        MATH_CalcSHA1(data_021f48a4 + 20, d, b + STD_GetStringLength((const char *)sGameStatsSecret));
        HexTable hex = data_0213b070;
        u8 *src = data_021f48a4 + 20;
        for (i = 0; i < 20; i++) {
            ((HexPair *)data_021f48a4)[i].hi = hex.c[src[i] >> 4];
            ((HexPair *)data_021f48a4)[i].lo = hex.c[src[i] & 15];
        }
        data_021f48a4[40] = 0;
        OS_SNPrintf(data_021f48dc, 0x100, (const char *)data_0213b100, data_021f48e4, func_020ea3c4(sWifiUserData + 16), data_021f48a4, data_021f48a8);
        DwcGsHttp_Get(data_021f48dc, (void *)Net_OnGameStatsDownloadDone, d);
    } else {
        data_0213b068 = 1;
    }
}

extern "C" void func_020ebe94(u32 a) {
    if (a == 0) data_021f48e0 = 1;
}

extern "C" void func_020ebe80(void) {
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

extern "C" void func_020ebd04(void) {
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

extern "C" void func_020ebc38(void) {
}

extern "C" void func_020ebc34(void) {
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
        DwcGsHttp_Startup(sDwcGameName);
        data_0213b064 = 1;
        data_0213b06c = 1;
        DwcCore_Init(data_021f4bc0, sWifiUserData + 16, 0x299e, sDwcGameName, sDwcSecretKey, 0, 0, sWifiFriendList, 32);
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
            func_020ebd04();
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

extern "C" u32 func_020eb164(void) {
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

extern "C" u32 func_020eb12c(void) {
    if (sWifiConnectStep <= 1) return 0;
    return DwcInet_GetLinkLevel();
}

extern "C" BOOL Net_GetLinkLevel(void) {
    u32 st = sNetMode;
    if ((u8)(st + 255) <= 1) return func_020eb164();
    if ((u8)(st + 253) > 1) return FALSE;
    return func_020eb12c();
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

extern "C" s32 func_020eaee4(void) {
    if (LocalWl_GetState() != 7) return -1;
    return LocalWl_GetBeaconCount(0);
}

extern "C" s32 func_020eaec8(void) {
    return DwcFriend_CountValid(sWifiFriendList, 32);
}

extern "C" s32 func_020eae78(void) {
    u32 st = sNetMode;
    if (st == 2) return func_020eaee4();
    if (st != 4) return -1;
    return func_020eaec8();
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

