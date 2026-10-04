// mwcc-flags: -nothumb -O4,p
// G002c: network file (WFC / GameSpy stats glue calling overlays 65, 66, 67), autoload_2 0x020ea34c-0x020ea960
// (21 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL unit: no data defined, everything extern. Continues at 0x020ea960.
#include "types.h"
#include "net/HexTable.h"
#include "net/WifiPingState.h"

extern "C" {
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8

s64 Net_GetOwnFriendKey(void *p);
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
    func_020ffdd0(p, v);
    func_020ffce8(p);
}

extern "C" BOOL Net_CheckUserDataChanged(void *p) {
    if (func_020ffd20(p) == 0) return FALSE;
    func_020ffce8(p);
    return TRUE;
}

extern "C" s32 Net_HasWifiUserId(void *p) {
    return func_020ffdfc(p);
}

extern "C" s32 Net_MakeOwnFriendData(void *p, void *q) {
    return func_020ffbd0(p, q);
}

extern "C" s64 Net_GetOwnFriendKey(void *p) {
    return func_020ffc40(p);
}

extern "C" BOOL Net_FriendKeyToFriendData(u32 ctx, void *out, u64 key) {
    if (func_02100050(ctx, (u32)key, (u32)(key >> 32)) != 0) {
        func_020ffc18(out, (u32)key, (u32)(key >> 32));
        if (func_020ffc60(ctx, out) > 0) return TRUE;
    }
    return FALSE;
}

extern "C" u64 Net_GetFriendKey(u32 a) {
    return func_020ffcc4(a);
}

