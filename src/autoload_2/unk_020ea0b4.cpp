// mwcc-flags: -nothumb -O4,p
#include "types.h"
#include "net/HexTable.h"

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
void func_020fff48(void *a, u32 b, void *c);
void Net_OnWlxStopped(void);
void Net_OnWlxExchangeDone(void);
void Net_OnGameStatsChallenge(void);
void Net_OnWifiFriendDeleted(void);
void Net_OnWifiServersUpdated(void);
void Net_OnWifiFriendStatus(void);
void Net_OnHttpDownloadDone(void);
void Net_OnGameStatsUploadDone(void);
s64 Net_GetOwnFriendKey(void *p);
s32 func_021000fc(void *p);
s32 func_021000f4(void *p);
s32 func_020ffad0(void *p, void *q);
s32 func_020ffd78(void *p);
s64 func_020ffc40(void *p);
s32 func_020ffbd0(void *p, void *q);
s32 func_020ffdfc(void *p);
u64 func_020ffcc4(u32 a);
s32 func_02100050(u32 ctx, u32 lo, u32 hi);
void func_020ffc18(void *out, u32 lo, u32 hi);
s32 func_020ffc60(u32 ctx, void *out);
BOOL func_020ffd20(void *p);
void func_020ffce8(void *p);
void func_020ffdd0(void *p, u32 v);
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
extern char sGameStatsSecret[];
extern const HexTable data_0213b084;
extern char data_0213b0c8[];
extern char data_0213b0d0[];
extern char data_0213b0d4[];
extern char data_0213b0dc[];
extern char data_0213b0e4[];

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
extern char data_0213b098[];
}

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
        sz = STD_GetStringLength(sGameStatsSecret);
        data_021f48b4 = (u32)Net_Alloc(sz + enc, 4);
        if (data_021f48b4 == 0) return FALSE;
        data_021f48c4 = (char *)Net_Alloc(0x29, 4);
        if (data_021f48c4 == NULL) {
            Net_Free((void *)data_021f48b4);
            data_021f48b4 = 0;
            return FALSE;
        }
        func_02127838((char *)data_021f48b4, sGameStatsSecret);
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
        OS_SNPrintf(buf, 16, data_0213b0c8, Net_GetOwnFriendKey(sWifiUserData + 0x10));
        DwcGsHttp_PostCreate(&builder);
        DwcGsHttp_PostAddString(&builder, data_0213b0d0, buf);
        DwcGsHttp_PostAddString(&builder, data_0213b0d4, data_021f48c4);
        DwcGsHttp_PostAddString(&builder, data_0213b0dc, (char *)data_021f48b4 + 0x14);
        DwcGsHttp_PostAddString(&builder, data_0213b0e4, (void *)d);
        DwcGsHttp_Post(a, &builder, (void *)Net_OnGameStatsUploadDone, 0);
        return TRUE;
    }
    return FALSE;
}
