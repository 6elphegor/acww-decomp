// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/NasAuthParams.h"
#include "net/NasAuthResult.h"
#include "net/GsGpBuddyStatus.h"
#include "net/DwcMatchCommandHeader.h"
#include "net/DwcFriendControl.h"
#include "net/DwcMatchControl.h"
#include "net/DwcControl.h"
#include "net/GsGpCallbackArgs.h"
#include "net/GsGpInfoCache.h"

typedef long long s64;

extern "C" {
void (*sDwcLoginDoneCallback)(void *, void *, u32);
void *sDwcLoginControl;
u32 sDwcLoginDoneArg;
s32 sDwcErrorCode;
s32 sDwcErrorClass;
void *sDwcFriendControl;
}

namespace F02270b74 {










namespace Unk_ov065_0227138c_Ns {
extern "C" s32 DwcLogin_HandleGpResult(s32 r);
}
extern "C" {
extern s32 sDwcErrorClass;
extern s32 sDwcErrorCode;
extern u32 sDwcLoginDoneArg;
extern DwcLoginControl *sDwcLoginControl;
extern DwcNasLoginCallback sDwcLoginDoneCallback;
void DwcInet_Process(void);
s32 DwcInet_IsLinkLost(void);
void DwcInet_WaitDisconnect(void);
void qr2_shutdown(void *);
void ServerBrowserFree(void *);
void NNFreeNegotiateList(void);
void GsPersist_Disconnect(void);
void GsGp_SetCallback(void *, s32, s32, s32);
void GsGp_Process(void *);
void GsGp_Destroy(void *);
void DwcFriend_ClearControl(void);
void DwcMatch_Shutdown(void);
void DwcNet_ClearChannelTable(void);
void gt2CloseSocket(void *);
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
void DWCi_Acc_LoginIdToUserName(void *, u32, void *);
s32 GsGp_SetInfo(void *, s32, void *);
s32 GsGp_GetInfo(void *, u32, s32, s32, void *, s32);
s32 GsGp_Disconnect(void *);
s32 GsGp_ConnectPreAuth(void *, void *, void *, s32, s32, void *, s32);
s32 strcmp(const char *, const char *);
void DWCi_Acc_SetLoginIdToUserData(void *, void *, u32);
s32 NasAuth_GetState(void);
void NasAuth_GetResult(s32 *);
void NasAuth_Destroy(void);
void NasAuth_Abort(void);
s32 NasAuth_Start(void *, void *);
void STD_CopyString(char *, const char *);
void MI_CpuFill8(void *, s32, u32);
u64 OS_GetTick(void);
u64 func_02132ef8(u64, u32);
u64 func_02133100(u64, u32, u32);
s32 DWCi_Acc_IsAuthentic(void *);
s32 DWCi_Acc_IsValidLoginId(void *);
s32 DWCi_Acc_CheckConsoleUserId(void *);
void DWCi_Acc_CreateTempLoginId(void *);
void DWCi_Acc_SetPlayerId(void *, u32);
void DwcNet_Free(s32, void *, s32);
void DwcNet_Alloc(void);
void *DwcNet_AllocAligned(s32, s32, s32);
s32 DwcFriend_SetOwnStatus(s32, void *);
s32 DwcConn_CreateGt2Socket(void);
s32 DwcMatch_StartQr2(u32);
void DwcCore_Nop(void);
s32 DwcCore_CheckFatalError(void);
void DwcCore_Shutdown(void);
void DwcCore_Init(DwcControl *g, DwcUserData *a1, void *a2, const char *a3, const char *a4, void *a5, void *a6, void *a7, void *a8);
void DwcCore_SetError(s32 a, s32 b);
BOOL DwcCore_HasError(void);
void DwcCore_ClearError(void);
s32 DwcCore_GetLastError(s32 *out);
BOOL DwcLogin_IsLoggedIn(void);
void DwcLogin_OnGpProfileInfo(void *a0, GsGpGetInfoResponse *x);
void DwcLogin_PollNasAuth(void);
void DwcLogin_StartNasAuth(DwcNasLoginCallback cb, u32 arg);
void DwcLogin_GpConnect(const char *a, const char *b, void *c, s32 d);
void DwcLogin_OnNasAuthDone(const char *a, const char *b);
void DwcLogin_OnGpConnected(void *a0, GsGpConnectResponse *x);
void DwcLogin_ResetState(void);
void DwcLogin_Shutdown(void);
void DwcLogin_Fail(s32 a, s32 b);
void *DwcLogin_GetUserData(void);
s32 DwcLogin_HandleGpResult(s32 r, s32 unused);
}
}

namespace F02271488 {




struct Unk_ov065_02271ba0_Out {
    s32 profileId;
    u8 unk_04[0x210];
};
extern "C" {
extern DwcLoginControl *sDwcLoginControl;
extern DwcFriendControl *sDwcFriendControl;
u64 OS_GetTick(void);
u64 func_02132ef8(u64, u64);
void *MI_CpuFill8(void *, s32, u32);
s32 strcmp(void *, void *);
s32 DWC_GetFriendDataType(void *);
s32 DWC_IsBuddyFriendData(void *);
void DWCi_SetBuddyFriendData(void *);
void DWC_LoginIdToUserName(void *, void *, void *);
void DWC_SetGsProfileId(void *, s32);
s32 DWC_GetGsProfileId(void *, void *);
void DwcLogin_Fail(s32, s32);
u32 DwcLogin_GetUserData(void);
s32 DwcCore_HasError(void);
s32 DwcLogin_IsLoggedIn(void);
s32 DwcLogin_PollNasAuth(void);
void DwcLogin_OnNasAuthDone(void);
void DwcLogin_StartNasAuth(void *, s32);
s32 GsGp_Process(void *);
s32 GsGp_AuthorizeBuddyRequest(void *, s32);
s32 GsGp_DenyBuddyRequest(void *, s32);
s32 GsGp_SendBuddyRequest(void *, s32, s32);
s32 GsGp_GetBuddyIndex(void *, s32, s32 *);
s32 GsGp_GetBuddyStatus(void *, s32, void *);
s32 GsGp_GetNumBuddies(void *, s32 *);
s32 GsGp_DeleteBuddy(void *, s32);
s32 GsGp_ProfileSearch(void *, s32, s32, s32, s32, void *, s32, s32, void *, s32);
s32 DwcFriend_NotifyAdded(s32);
s32 DwcFriend_GetProfileId(s32);
s32 DwcFriend_Fail(s32, s32);
s32 GsPersist_Disconnect(void);
s32 DwcFriend_HandleGpResult(s32);
s32 DwcFriend_MergeDuplicate(DwcFriendData *, s32, s32);
s32 DwcFriend_SendBuddyRequest(s32);
void DwcFriend_DeleteEntry(DwcFriendData *, s32, s32);
s32 DwcFriend_RemoveDuplicates(DwcFriendData *, s32, s32);
void DwcLogin_Process(void);
void DwcLogin_Begin(void);
void DwcLogin_InitControl(void *mem, void *a, void *b, void *c, void *d, void *e, void *f);
void *DwcFriend_GetControlField20(void);
void DwcFriend_OnAuthorizedInfo(void *x, GsGpGetInfoResponse *p);
void DwcFriend_OnBuddyRequestInfo(void *x, GsGpGetInfoResponse *p);
void DwcFriend_OnProfileSearch(void *x, GsGpProfileSearchResponse *p, s32 idx);
s32 DwcFriend_GetBuddyStatus(void *a, void *b);
void DwcFriend_FinishUpdate(void);
void DwcFriend_SyncList(DwcFriendData *arr, s32 n);
void DwcFriend_Abort(void);
s32 DwcFriend_Tick(void);
}
}

namespace F02271da0 {









extern "C" {
extern DwcFriendControl *sDwcFriendControl;
extern DwcMatchControl *sDwcMatch;
u64 OS_GetTick();
s32 DWC_GetGsProfileId(s32, void *);
s32 DWCi_Acc_IsValidFriendData(void *);
s32 strcmp(const char *, const char *);
s32 STD_GetStringLength(const char *);
void STD_CopyString(char *, const char *);
s32 strtoul(const char *, char **, s32);
void MI_CpuFill8(void *, s32, u32);
void MI_CpuCopy8(const void *, void *, u32);
s32 strncmp(const void *, const void *, u32);
void OS_SNPrintf(char *, s32, const char *, u32);
s32 DwcCore_SetError(s32, s32);
s32 DwcCore_HasError();
s32 DwcLogin_IsLoggedIn();
s32 DwcCore_GetState();
s32 DwcLogin_GetUserData();
void DwcFriend_FinishUpdate();
void DwcFriend_SyncList(void *, s32);
s32 DwcFriend_GetControlField20();
void DwcFriend_OnAuthorizedInfo();
void DwcFriend_OnBuddyRequestInfo();
void DwcFriend_Abort();
void DwcFriend_Tick();
s32 DwcFriend_HandleGpResult();
s32 DwcFriend_GetBuddyStatus(void *, GsGpBuddyStatus *);
s32 NasBase64_Decode(const char *, s32, char *, u32);
s32 NasBase64_Encode(void *, s32, void *, u32);
s32 DwcMatch_HandleGt2Result();
s32 DwcMatch_HandleNnResult(s32, s32);
s32 DwcMatch_HandleNnStartResult();
s32 DwcMatch_SendNnRequest(void *);
s32 DwcMatch_Fail(s32, s32);
u64 DwcNet_GetTimeMs();
s32 GsUtil_GetKeyValue(const char *, char *, char *, s32);
s32 GsPersist_Process();
s32 gt2Connect(u32, s32, s32, char *, s32, s32, s32, s32);
s32 gt2AddressToString(u32, u32, s32);
s32 DwcMatch_CancelNewClient(u32);
s32 DwcMatch_RestartAfterNnFailure(u32);
s32 DwcMatch_HandleCommand(u32, u32, u32, u32, void *, s32);
s32 GsGp_SetStatus(GsGpConnection *, s32, char *, char *);
s32 GsGp_DeleteBuddy(void *, s32);
s32 GsGp_IsBuddy(void *, s32);
s32 GsGp_GetBuddyStatus(void *, s32, GsGpBuddyStatus *);
s32 GsGp_GetInfo(void *, s32, s32, s32, void (*)(), s32);
s32 DwcFriend_GetStatus(void *, u8 *, u8 *, char *);
s32 DwcFriend_GetStatusString(void *, char *);
s32 DwcFriend_GetProfileId(s32);
s32 DwcFriend_FindIndexByProfileId(s32);
s32 DwcFriend_SetOwnStatus(s32, char *, char *);
void DwcFriend_Fail(s32, s32);
s32 DwcMatch_CountNnRetry(s32);
void DwcFriend_ClearControl();
void DwcFriend_NotifyAdded(s32 idx);
void DwcFriend_ResetTimer();
void DwcFriend_OnBuddyStatus(void *a, u32 *b);
s32 DwcFriend_HandleAuthorizedMessage(void *a, u32 *b);
void DwcFriend_OnBuddyRequest(void *a, u32 *b);
void DwcFriend_StartUpdate(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f, void (*g)(void), void (*h)(void));
void DwcFriend_Process();
void DwcFriend_InitControl(DwcFriendControl *a, GsGpConnection *b, s32 c, DwcFriendData *d, s32 e);
void DwcFriend_DeleteFriend(void *p);
BOOL DwcFriend_IsIdle();
BOOL DwcFriend_SetStatusData(void *a, s32 b);
s32 DwcFriend_CountValid(u8 *p, s32 n);
s32 DwcFriend_GetStatusData(void *a, u8 *b, u8 *c, char *d, s32 *out);
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_GetStatus(void *a, u8 *p1, u8 *p2, char *dst) {
    char tmp[4];
    GsGpBuddyStatus o;
    if (DwcFriend_GetBuddyStatus(a, &o) != 0) {
        if (o.status == 6) {
            if (p1 != NULL) {
                if (GsUtil_GetKeyValue((char *)"SCM", tmp, o.statusString, 0x2f) > 0) {
                    *p1 = strtoul(tmp, NULL, 10);
                } else {
                    *p1 = 0;
                }
            }
            if (p2 != NULL) {
                if (GsUtil_GetKeyValue((char *)"SCN", tmp, o.statusString, 0x2f) > 0) {
                    *p2 = strtoul(tmp, NULL, 10);
                } else {
                    *p2 = 0;
                }
            }
        } else {
            if (p1 != NULL) {
                *p1 = 0;
            }
            if (p2 != NULL) {
                *p2 = 0;
            }
        }
        if (dst != NULL) {
            STD_CopyString(dst, o.locationString);
        }
        return (u8)o.status;
    }
    if (p1 != NULL) {
        *p1 = 0;
    }
    if (p2 != NULL) {
        *p2 = 0;
    }
    return 0;
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_GetStatusData(void *a, u8 *b, u8 *c, char *d, s32 *out) {
    char buf[0x100];
    s32 r = DwcFriend_GetStatus(a, b, c, buf);
    s32 t;
    if (r == 0) {
        *out = -1;
        return r;
    }
    *out = NasBase64_Decode(buf, STD_GetStringLength(buf), NULL, 0);
    if (d == NULL || (t = *out) == -1) {
        return r;
    }
    NasBase64_Decode(buf, STD_GetStringLength(buf), d, t);
    return r;
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_CountValid(u8 *p, s32 n) {
    s32 cnt = 0;
    s32 i;
    if (p == NULL) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (DWCi_Acc_IsValidFriendData(p) != 0) {
            cnt++;
        }
        p += 12;
    }
    return cnt;
}
}
}

namespace F02271da0 {
extern "C" {
BOOL DwcFriend_SetStatusData(void *a, s32 b) {
    char buf[0x100];
    s32 n;
    if (sDwcFriendControl == NULL || DwcLogin_IsLoggedIn() == 0) {
        return FALSE;
    }
    n = NasBase64_Encode(a, b, buf, 0xff);
    if (n == -1) {
        return FALSE;
    }
    buf[n] = 0;
    if (DwcFriend_SetOwnStatus(-1, NULL, buf) == 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02271da0 {
extern "C" {
BOOL DwcFriend_IsIdle() {
    if (sDwcFriendControl != NULL) {
        if ((u8)(sDwcFriendControl->syncPhase + 0xff) <= 1) {
            return FALSE;
        }
    }
    return TRUE;
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_DeleteFriend(void *p) {
    if (sDwcFriendControl != NULL && DwcLogin_IsLoggedIn() != 0 && DwcLogin_GetUserData() != 0) {
        s32 t = DWC_GetGsProfileId(DwcLogin_GetUserData(), p);
        if (t != 0 && t != -1 && GsGp_IsBuddy(sDwcFriendControl->gpConnection, t) != 0) {
            GsGp_DeleteBuddy(sDwcFriendControl->gpConnection, t);
        }
    }
    MI_CpuFill8(p, 0, 12);
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_InitControl(DwcFriendControl *a, GsGpConnection *b, s32 c, DwcFriendData *d, s32 e) {
    sDwcFriendControl = a;
    a->updateState = 0;
    sDwcFriendControl->gpConnection = b;
    sDwcFriendControl->tickCount = 0;
    {
        DwcFriendControl *g = sDwcFriendControl;
        g->lastTick = 0;
        g->lastProcessTickHi = 0;
        g->numFriends = e;
    }
    sDwcFriendControl->friendList = d;
    sDwcFriendControl->syncIndex = 0;
    sDwcFriendControl->isListChanged = 0;
    sDwcFriendControl->syncPhase = 0;
    sDwcFriendControl->updateStep = 0;
    sDwcFriendControl->usePersist = 0;
    sDwcFriendControl->unk_24 = 0;
    sDwcFriendControl->buddyRequestText = c;
    sDwcFriendControl->updateCallback = NULL;
    sDwcFriendControl->updateCallbackArg = 0;
    sDwcFriendControl->statusCallback = NULL;
    sDwcFriendControl->statusCallbackArg = 0;
    sDwcFriendControl->deleteCallback = NULL;
    sDwcFriendControl->deleteCallbackArg = NULL;
    sDwcFriendControl->addedCallback = NULL;
    sDwcFriendControl->addedCallbackArg = 0;
    sDwcFriendControl->unk_4c = 0;
    sDwcFriendControl->unk_50 = 0;
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_Process() {
    if (sDwcFriendControl == NULL) {
        return;
    }
    if (sDwcFriendControl->friendList == NULL) {
        return;
    }
    if (DwcCore_HasError() != 0) {
        return;
    }
    if (DwcFriend_GetControlField20() != 0 && GsPersist_Process() == 0) {
        DwcFriend_Fail(6, -0x1194a);
        return;
    }
    if (sDwcFriendControl->gpConnection != NULL && sDwcFriendControl->gpConnection->connection != NULL) {
        DwcFriend_Tick();
        if (DwcFriend_HandleGpResult() != 0) {
            return;
        }
        if (sDwcFriendControl->friendList != NULL && sDwcFriendControl->syncPhase != 3 && sDwcFriendControl->tickCount > 7) {
            if (sDwcFriendControl->syncPhase <= 1) {
                DwcFriend_SyncList(sDwcFriendControl->friendList, sDwcFriendControl->numFriends);
            }
            if (sDwcFriendControl->syncIndex >= sDwcFriendControl->numFriends) {
                sDwcFriendControl->syncPhase = 3;
                sDwcFriendControl->updateStep++;
            }
        }
    }
    if (sDwcFriendControl->updateStep >= 2) {
        sDwcFriendControl->updateStep = 0;
        DwcFriend_FinishUpdate();
    }
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_StartUpdate(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f,
                         void (*g)(void), void (*h)(void)) {
    sDwcFriendControl->updateCallback = c;
    sDwcFriendControl->updateCallbackArg = d;
    sDwcFriendControl->statusCallback = e;
    sDwcFriendControl->statusCallbackArg = f;
    sDwcFriendControl->deleteCallback = (DwcFriendDeleteCallback)g;
    sDwcFriendControl->deleteCallbackArg = (s32)h;
    sDwcFriendControl->isListChanged = 0;
    sDwcFriendControl->syncPhase = 0;
    sDwcFriendControl->updateStep = 0;
    sDwcFriendControl->syncIndex = 0;
    sDwcFriendControl->updateState = 1;
    sDwcFriendControl->updateStep++;
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_Fail(s32 a, s32 b) {
    if (sDwcFriendControl != NULL && a != 0) {
        DwcCore_SetError(a, b);
        if (sDwcFriendControl->updateState != 0 && sDwcFriendControl->updateState != 2) {
            sDwcFriendControl->updateCallback(a, sDwcFriendControl->isListChanged, sDwcFriendControl->updateCallbackArg);
        }
        DwcFriend_Abort();
    }
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_OnBuddyRequest(void *a, u32 *b) {
    if (sDwcFriendControl->friendList != NULL) {
        GsGp_GetInfo(a, b[0], 0, 0, DwcFriend_OnBuddyRequestInfo, 0);
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_HandleAuthorizedMessage(void *a, u32 *b) {
    if (strcmp((const char *)b[2], "I have authorized your request to add me to your list") == 0) {
        GsGp_GetInfo(a, b[0], 0, 0, DwcFriend_OnAuthorizedInfo, 0);
        return 1;
    }
    return 0;
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_OnBuddyStatus(void *a, u32 *b) {
    GsGpBuddyStatus o;
    if (sDwcFriendControl->statusCallback != NULL) {
        s32 i = DwcFriend_FindIndexByProfileId(b[0]);
        if (i != -1) {
            GsGp_GetBuddyStatus(a, b[2], &o);
            sDwcFriendControl->statusCallback(i, (u8)o.status, o.locationString, sDwcFriendControl->statusCallbackArg);
        }
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_GetProfileId(s32 i) {
    s32 r = DWC_GetGsProfileId(DwcLogin_GetUserData(), &sDwcFriendControl->friendList[i]);
    s32 m = -1;
    if (r == 0 || r == m) {
        r = 0;
    }
    return r;
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_FindIndexByProfileId(s32 v) {
    s32 i;
    if (sDwcFriendControl == NULL || v == 0) {
        return -1;
    }
    for (i = 0; i < sDwcFriendControl->numFriends; i++) {
        if (v == DwcFriend_GetProfileId(i)) {
            return i;
        }
    }
    return -1;
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_ResetTimer() {
    if (sDwcFriendControl != NULL) {
        sDwcFriendControl->tickCount = 0;
        u64 t = OS_GetTick();
        DwcFriendControl *g = sDwcFriendControl;
        g->lastTick = (u32)t;
        g->lastProcessTickHi = (u32)(t >> 32);
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_SetOwnStatus(s32 a, char *b, char *c) {
    GsGpConnection *s;
    if (sDwcFriendControl == NULL || sDwcFriendControl->gpConnection == NULL) {
        return 0;
    }
    s = sDwcFriendControl->gpConnection;
    if (a == -1) {
        a = s->connection->lastStatus;
    }
    if (b == NULL) {
        b = (char *)s->connection->lastStatusString;
    }
    if (c == NULL) {
        c = (char *)s->connection->lastLocationString;
    }
    return GsGp_SetStatus(s, a, b, c);
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_NotifyAdded(s32 idx) {
    GsGpBuddyStatus o;
    if (sDwcFriendControl->addedCallback != NULL && sDwcFriendControl->updateState != 1) {
        sDwcFriendControl->addedCallback(idx, sDwcFriendControl->addedCallbackArg);
    }
    if (sDwcFriendControl->statusCallback != NULL) {
        s32 r = DwcFriend_GetStatusString(&sDwcFriendControl->friendList[idx], o.locationString);
        sDwcFriendControl->statusCallback(idx, r, o.locationString, sDwcFriendControl->statusCallbackArg);
    }
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_ClearControl() {
    sDwcFriendControl = NULL;
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_Tick(void)
{
    DwcFriendControl *b = sDwcFriendControl;
    u64 d = (OS_GetTick() - *(u64 *)&b->lastTick) << 6;
    d = d / 0x82ea;
    if (d >= 0x12c) {
        b->tickCount++;
        GsGp_Process(sDwcFriendControl->gpConnection);
        *(u64 *)&sDwcFriendControl->lastTick = OS_GetTick();
    }
    return 0;
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_Abort(void)
{
    if (sDwcFriendControl != NULL) {
        GsPersist_Disconnect();
        sDwcFriendControl->updateState = 0;
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_SyncList(DwcFriendData *arr, s32 n)
{
    s32 cnt;
    s32 idx;
    u8 buf[0x18];
    Unk_ov065_02271ba0_Out out;
    s32 j;
    s32 id;
    if (sDwcFriendControl->syncPhase == 0) {
        DwcFriend_HandleGpResult(GsGp_GetNumBuddies(sDwcFriendControl->gpConnection, &cnt));
        idx = 0;
        if (cnt > 0) {
            do {
                DwcFriend_HandleGpResult(GsGp_GetBuddyStatus(sDwcFriendControl->gpConnection, idx, &out));
                for (j = 0; j < n; j++) {
                    if (out.profileId == DwcFriend_GetProfileId(j)) {
                        s32 off = j * 12;
                        if (DWC_IsBuddyFriendData((void *)((u32)arr + off)) == 0) {
                            DwcFriendData *e = (DwcFriendData *)((u8 *)arr + off);
                            DWC_SetGsProfileId(e, out.profileId);
                            DWCi_SetBuddyFriendData(e);
                            sDwcFriendControl->isListChanged = 1;
                        }
                        break;
                    }
                }
                if (j == n) {
                    DwcFriend_HandleGpResult(GsGp_DeleteBuddy(sDwcFriendControl->gpConnection, out.profileId));
                    cnt--;
                    idx--;
                }
                idx++;
            } while (idx < cnt);
        }
        sDwcFriendControl->syncPhase = 1;
    }
    while (sDwcFriendControl->syncIndex < n) {
        id = DwcFriend_GetProfileId(sDwcFriendControl->syncIndex);
        if (id != 0) {
            if (DwcFriend_MergeDuplicate(arr, sDwcFriendControl->syncIndex, id) == 0) {
                DwcFriend_HandleGpResult(GsGp_GetBuddyIndex(sDwcFriendControl->gpConnection, id, &idx));
                if (idx == -1) {
                    DwcFriend_SendBuddyRequest(id);
                }
            }
        } else {
            if (DWC_GetGsProfileId((void *)DwcLogin_GetUserData(), &arr[sDwcFriendControl->syncIndex]) == -1) {
                DWC_LoginIdToUserName((void *)DwcLogin_GetUserData(), &arr[sDwcFriendControl->syncIndex], buf);
                GsGp_ProfileSearch(sDwcFriendControl->gpConnection, 0, 0, 0, 0, buf, 0, 0, (void *)DwcFriend_OnProfileSearch, sDwcFriendControl->syncIndex);
                sDwcFriendControl->syncPhase = 2;
                return;
            }
        }
        sDwcFriendControl->syncIndex++;
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_FinishUpdate(void)
{
    sDwcFriendControl->updateCallback(0, sDwcFriendControl->isListChanged, sDwcFriendControl->updateCallbackArg);
    sDwcFriendControl->updateState = 2;
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_DeleteEntry(DwcFriendData *arr, s32 i, s32 j)
{
    if (sDwcFriendControl != NULL) {
        MI_CpuFill8(&arr[i], 0, 12);
        if (sDwcFriendControl->deleteCallback != NULL) {
            sDwcFriendControl->deleteCallback(i, j, sDwcFriendControl->deleteCallbackArg);
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_MergeDuplicate(DwcFriendData *arr, s32 n, s32 id)
{
    s32 i;
    for (i = 0; i < n; i++) {
        s32 t = DwcFriend_GetProfileId(i);
        if (t != 0 && t == id) {
            if (DWC_IsBuddyFriendData(&arr[n]) != 0 && DWC_IsBuddyFriendData(&arr[i]) == 0) {
                DwcFriend_DeleteEntry(arr, i, n);
            } else {
                DwcFriend_DeleteEntry(arr, n, i);
            }
            sDwcFriendControl->isListChanged = 1;
            return TRUE;
        }
    }
    return FALSE;
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_RemoveDuplicates(DwcFriendData *arr, s32 n, s32 id)
{
    s32 res, i, j, t;
    DwcFriendData *q, *p;
    res = -1;
    i = 0;
    if (n - 1 > 0) {
        q = arr;
        p = arr;
        do {
            t = DwcFriend_GetProfileId(i);
            if (t != 0) {
                if (t == id) {
                    res = i;
                }
                j = i + 1;
                for (; j < n; j++) {
                    if (t == DwcFriend_GetProfileId(j)) {
                        if (DWC_GetFriendDataType(q) == 2 && DWC_GetFriendDataType(&arr[j]) == 3) {
                            DWC_SetGsProfileId(p, t);
                        }
                        if (DWC_IsBuddyFriendData(&arr[j]) != 0) {
                            DWCi_SetBuddyFriendData(p);
                        }
                        DwcFriend_DeleteEntry(arr, j, i);
                        sDwcFriendControl->isListChanged = 1;
                    }
                }
            }
            q++;
            p++;
            i++;
        } while (i < n - 1);
    }
    return res;
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_SendBuddyRequest(s32 a)
{
    s32 r = GsGp_SendBuddyRequest(sDwcFriendControl->gpConnection, a, sDwcFriendControl->buddyRequestText);
    DwcFriend_HandleGpResult(r);
    return r;
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_GetBuddyStatus(void *a, void *b)
{
    s32 out;
    s32 t;
    out = 0;
    if (sDwcFriendControl == NULL || DwcLogin_IsLoggedIn() == 0) {
        return FALSE;
    }
    t = DWC_GetGsProfileId((void *)DwcLogin_GetUserData(), a);
    if (t > 0) {
        if (GsGp_GetBuddyIndex(sDwcFriendControl->gpConnection, t, &out) != 0) {
            return FALSE;
        }
    }
    if (t <= 0 || out == -1) {
        return FALSE;
    }
    if (GsGp_GetBuddyStatus(sDwcFriendControl->gpConnection, out, b) == 0) {
        goto ok;
    }
    return FALSE;
ok:
    return TRUE;
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_HandleGpResult(s32 r)
{
    s32 a;
    s32 b;
    if (r == 0) {
        return 0;
    }
    switch (r) {
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
    DwcFriend_Fail(a, b - 0x11558);
    return r;
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_OnProfileSearch(void *x, GsGpProfileSearchResponse *p, s32 idx)
{
    s32 off;
    s32 i;
    s32 out;
    if (p->result == 0 && p->numMatches != 0) {
        off = idx * 12;
        if (DWC_GetFriendDataType((u8 *)sDwcFriendControl->friendList + off) != 0) {
            if (sDwcFriendControl->updateState == 1) {
                sDwcFriendControl->isListChanged = 1;
                for (i = 0; i < p->numMatches; i++) {
                    if (DwcFriend_MergeDuplicate(sDwcFriendControl->friendList, idx, p->matches[i].profileId) != 0) {
                        sDwcFriendControl->syncIndex++;
                        sDwcFriendControl->syncPhase = 1;
                        p->moreStatus = 0x601;
                        return;
                    }
                }
                for (i = 0; i < p->numMatches; i++) {
                    DwcFriend_HandleGpResult(GsGp_GetBuddyIndex(x, p->matches[i].profileId, &out));
                    if (out == -1) {
                        DwcFriend_SendBuddyRequest(p->matches[i].profileId);
                    } else {
                        DWC_SetGsProfileId((u8 *)sDwcFriendControl->friendList + off, p->matches[0].profileId);
                        DWCi_SetBuddyFriendData((u8 *)sDwcFriendControl->friendList + off);
                        DwcFriend_NotifyAdded(idx);
                        sDwcFriendControl->syncIndex++;
                        sDwcFriendControl->syncPhase = 1;
                        p->moreStatus = 0x601;
                        return;
                    }
                }
                if (p->moreStatus != 0x600) {
                    sDwcFriendControl->syncIndex++;
                    sDwcFriendControl->syncPhase = 1;
                    return;
                }
            }
            return;
        }
    }
    if (p->result != 0) {
        s32 e = DwcFriend_HandleGpResult(p->result);
        if (e > 0) {
            e = 1;
        } else if (e != 0) {
            e = e;
        }
    } else {
        if (sDwcFriendControl->updateState == 1 || DWC_GetFriendDataType((u8 *)sDwcFriendControl->friendList + idx * 12) == 0) {
            sDwcFriendControl->syncIndex++;
            sDwcFriendControl->syncPhase = 1;
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_OnBuddyRequestInfo(void *x, GsGpGetInfoResponse *p)
{
    s32 i;
    s32 found;
    found = 0;
    if (p->result == 0) {
        i = found;
        for (; i < sDwcFriendControl->numFriends; i++) {
            if (DWC_GetFriendDataType(&sDwcFriendControl->friendList[i]) == 1) {
                u8 buf[24];
                DWC_LoginIdToUserName((void *)DwcLogin_GetUserData(), &sDwcFriendControl->friendList[i], buf);
                if (strcmp(buf, (u8 *)p + 0x8e) == 0) {
                    GsGp_AuthorizeBuddyRequest(x, p->profileId);
                    DWC_SetGsProfileId(&sDwcFriendControl->friendList[i], p->profileId);
                    found = 1;
                }
            } else if (DWC_GetFriendDataType(&sDwcFriendControl->friendList[i]) == 3
                       || DWC_GetFriendDataType(&sDwcFriendControl->friendList[i]) == 2) {
                s32 v = p->profileId;
                if (v == DWC_GetGsProfileId((void *)DwcLogin_GetUserData(), &sDwcFriendControl->friendList[i])) {
                    GsGp_AuthorizeBuddyRequest(x, v);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            DwcFriend_SendBuddyRequest(p->profileId);
        } else {
            GsGp_DenyBuddyRequest(x, p->profileId);
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_OnAuthorizedInfo(void *x, GsGpGetInfoResponse *p)
{
    s32 i;
    s32 found;
    u8 buf[28];
    found = 0;
    if (p->result == 0) {
        i = found;
        for (; i < sDwcFriendControl->numFriends; i++) {
            if (DWC_GetFriendDataType(&sDwcFriendControl->friendList[i]) == 1) {
                DWC_LoginIdToUserName((void *)DwcLogin_GetUserData(), &sDwcFriendControl->friendList[i], buf);
                if (strcmp(buf, (u8 *)p + 0x8e) == 0) {
                    DWC_SetGsProfileId(&sDwcFriendControl->friendList[i], p->profileId);
                    DWCi_SetBuddyFriendData(&sDwcFriendControl->friendList[i]);
                    found = 1;
                }
            } else if (DWC_GetFriendDataType(&sDwcFriendControl->friendList[i]) == 3
                       || DWC_GetFriendDataType(&sDwcFriendControl->friendList[i]) == 2) {
                s32 v = p->profileId;
                if (v == DWC_GetGsProfileId((void *)DwcLogin_GetUserData(), &sDwcFriendControl->friendList[i])) {
                    DWC_SetGsProfileId(&sDwcFriendControl->friendList[i], v);
                    DWCi_SetBuddyFriendData(&sDwcFriendControl->friendList[i]);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            DwcFriend_NotifyAdded(DwcFriend_RemoveDuplicates(sDwcFriendControl->friendList, sDwcFriendControl->numFriends, p->profileId));
            sDwcFriendControl->isListChanged = 1;
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void *DwcFriend_GetControlField20(void)
{
    return (void *)sDwcFriendControl->usePersist;
}
}
}

namespace F02271488 {
extern "C" {
void DwcLogin_InitControl(void *mem, void *a, void *b, void *c, void *d, void *e, void *f)
{
    sDwcLoginControl = (DwcLoginControl *)mem;
    MI_CpuFill8(sDwcLoginControl, 0, 0x264);
    sDwcLoginControl->gpConnection = (GsGpConnection *)b;
    sDwcLoginControl->state = 0;
    sDwcLoginControl->productId = (u32)c;
    sDwcLoginControl->gameCode = (u32)d;
    sDwcLoginControl->resultCallback = (DwcLoginResultCallback)e;
    sDwcLoginControl->resultCallbackArg = (u32)f;
    sDwcLoginControl->userData = (DwcUserData *)a;
}
}
}

namespace F02271488 {
extern "C" {
void DwcLogin_Begin(void)
{
    DwcLogin_StartNasAuth((void *)DwcLogin_OnNasAuthDone, 0);
    sDwcLoginControl->state = 1;
    sDwcLoginControl->gpConnectPending = 0;
}
}
}

namespace F02271488 {
extern "C" {
void DwcLogin_Process(void)
{
    if (sDwcLoginControl != NULL) {
        if (DwcCore_HasError() == 0) {
            switch (sDwcLoginControl->state) {
            case 0:
                break;
            case 1:
                DwcLogin_PollNasAuth();
                break;
            case 2:
            case 3:
            case 4: {
                GsGpConnection *in = sDwcLoginControl->gpConnection;
                if (in != NULL) {
                    if (in->connection != NULL) {
                        GsGp_Process(in);
                    }
                }
                if (sDwcLoginControl->gpConnectPending != 0) {
                    u64 d = (OS_GetTick() - *(u64 *)&sDwcLoginControl->gpConnectStartTick) << 6;
                    d = d / 0x82ea;
                    if (d > 0xea60) {
                        DwcLogin_Fail(6, -0xee8e);
                        sDwcLoginControl->gpConnectPending = 0;
                    }
                }
                break;
            }
            case 5:
                break;
            }
        }
    }
}
}
}

namespace F02270b74 {
extern "C" {
void *DwcLogin_GetUserData(void) {
    if (sDwcLoginControl != NULL) {
        return sDwcLoginControl->userData;
    }
    return NULL;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_Fail(s32 a, s32 b) {
    if (sDwcLoginControl != NULL && a != 0) {
        DwcCore_SetError(a, b);
        if (sDwcLoginControl->resultCallback != NULL) {
            sDwcLoginControl->resultCallback(a, 0, sDwcLoginControl->resultCallbackArg);
        }
        DwcLogin_ResetState();
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_Shutdown(void) {
    if (sDwcLoginControl->nasAuthWork != NULL) {
        NasAuth_Abort();
        NasAuth_Destroy();
        DwcNet_Free(0, sDwcLoginControl->nasAuthWork, 0);
        sDwcLoginControl->nasAuthWork = NULL;
    }
    sDwcLoginControl = NULL;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_ResetState(void) {
    if (sDwcLoginControl != NULL) {
        sDwcLoginControl->state = 0;
        sDwcLoginControl->gpConnectPending = 0;
    }
}
}
}

namespace F02270b74 {
extern "C" {
s32 DwcLogin_HandleGpResult(s32 r, s32 unused) {
    s32 a = r;
    s32 b = unused;
    if (r == 0) {
        return 0;
    }
    switch (r) {
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
    DwcLogin_Fail(a, b - 0xee48);
    return r;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_OnGpConnected(void *a0, GsGpConnectResponse *x) {
    sDwcLoginControl->gpConnectPending = 0;
    if (x->result == 0) {
        if (sDwcLoginControl->state == 2) {
            if (Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(DwcFriend_SetOwnStatus(1, (void *)"")) == 0) {
                if (sDwcLoginControl->userData->profileId == x->profileId) {
                    if (DwcConn_CreateGt2Socket() == 0) {
                        if (DwcMatch_StartQr2(x->profileId) == 0) {
                            sDwcLoginControl->state = 5;
                            sDwcLoginControl->resultCallback(0, x->profileId, sDwcLoginControl->resultCallbackArg);
                        }
                    }
                } else {
                    DwcLogin_Fail(6, -60000);
                }
            }
        } else if (sDwcLoginControl->state == 3) {
            s32 r = Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_GetInfo(a0, x->profileId, 0, 0, (void *)DwcLogin_OnGpProfileInfo, 0));
            if (r == 0) {
            } else if (r != 0) {
                r = r;
            }
        }
    } else {
        Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(x->result);
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_OnNasAuthDone(const char *a, const char *b) {
    DwcLogin_GpConnect(a, b, (void *)DwcLogin_OnGpConnected, 2);
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_GpConnect(const char *a, const char *b, void *c, s32 d) {
    STD_CopyString(sDwcLoginControl->authToken, a);
    STD_CopyString(sDwcLoginControl->authChallenge, b);
    DwcLoginControl *g = sDwcLoginControl;
    u64 t = OS_GetTick();
    g->gpConnectStartTick = t;
    g->gpConnectPending = 1;
    DwcLoginControl *h = sDwcLoginControl;
    if (Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_ConnectPreAuth(h->gpConnection, h->authToken, h->authChallenge, 1, 0, c, 0)) == 0) {
        sDwcLoginControl->state = d;
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_StartNasAuth(DwcNasLoginCallback cb, u32 arg) {
    NasAuthParams cfg;
    MI_CpuFill8(&cfg, 0, 0x2c);
    sDwcLoginDoneCallback = cb;
    sDwcLoginDoneArg = arg;
    if (DWCi_Acc_IsAuthentic(sDwcLoginControl->userData)) {
        DWCi_Acc_LoginIdToUserName((u8 *)sDwcLoginControl->userData + 0x10, sDwcLoginControl->userData->gameCode,
                      sDwcLoginControl->loginIdText);
    } else {
        if (DWCi_Acc_IsValidLoginId(&sDwcLoginControl->loginId) == 0) {
            if (DWCi_Acc_CheckConsoleUserId((u8 *)sDwcLoginControl->userData + 4)) {
                sDwcLoginControl->loginId = *(DwcLoginId *)((u8 *)sDwcLoginControl->userData + 4);
            } else {
                DWCi_Acc_CreateTempLoginId(&sDwcLoginControl->loginId);
            }
        } else {
            DWCi_Acc_SetPlayerId(&sDwcLoginControl->loginId, (u32)(((u64)((s64)OS_GetTick() * 0x5d588b656c078965LL) + 0x269ec3) >> 32));
        }
        DWCi_Acc_LoginIdToUserName(&sDwcLoginControl->loginId, sDwcLoginControl->gameCode, sDwcLoginControl->loginIdText);
    }
    STD_CopyString(cfg.gsbrcd, sDwcLoginControl->gsbrcd);
    cfg.allocFunc = (DwcAllocFunc)DwcNet_Alloc;
    cfg.freeFunc = (DwcFreeFunc)DwcNet_Free;
    void *p = DwcNet_AllocAligned(0, 0x1a60, 4);
    sDwcLoginControl->nasAuthWork = p;
    u64 t2 = OS_GetTick();
    sDwcLoginControl->nasAuthStartTick = t2;
    NasAuth_Start(&cfg, p);
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_PollNasAuth(void) {
    NasAuthParams cfg;
    NasAuthResult s1;
    NasAuthResult s2;
    if (NasAuth_GetState() == 0x14) {
        NasAuth_GetResult(&s1.result);
        STD_CopyString(sDwcLoginControl->authToken, s1.token);
        STD_CopyString(sDwcLoginControl->authChallenge, s1.challenge);
        NasAuth_Destroy();
        DwcNet_Free(0, sDwcLoginControl->nasAuthWork, 0);
        sDwcLoginControl->nasAuthWork = NULL;
        if (DWCi_Acc_IsAuthentic(sDwcLoginControl->userData)) {
            sDwcLoginDoneCallback(sDwcLoginControl->authToken, sDwcLoginControl->authChallenge, sDwcLoginDoneArg);
        } else {
            DwcLogin_GpConnect(sDwcLoginControl->authToken, sDwcLoginControl->authChallenge,
                                (void *)DwcLogin_OnGpConnected, 3);
        }
    } else if (NasAuth_GetState() != 0) {
        u64 now = OS_GetTick();
        u64 d = now - sDwcLoginControl->nasAuthStartTick;
        if ((d * 64) / 0x82ea > 0x2710) {
            NasAuth_GetResult(&s2.result);
            NasAuth_Destroy();
            DwcNet_Free(0, sDwcLoginControl->nasAuthWork, 0);
            sDwcLoginControl->nasAuthWork = NULL;
            DwcLogin_Fail(2, s2.result);
        } else {
            NasAuth_Destroy();
            MI_CpuFill8(&cfg, 0, 0x2c);
            STD_CopyString(cfg.gsbrcd, sDwcLoginControl->gsbrcd);
            cfg.allocFunc = (DwcAllocFunc)DwcNet_Alloc;
            cfg.freeFunc = (DwcFreeFunc)DwcNet_Free;
            NasAuth_Start(&cfg, sDwcLoginControl->nasAuthWork);
        }
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_OnGpProfileInfo(void *a0, GsGpGetInfoResponse *x) {
    u8 a[0x14];
    u8 b[0x14];
    u8 c[0x1c];
    if (x->result == 0) {
        if (sDwcLoginControl->state == 3) {
            if (x->lastName[0] == 0) {
                DWCi_Acc_LoginIdToUserName((u8 *)sDwcLoginControl->userData + 4, sDwcLoginControl->gameCode, a);
                if (Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_SetInfo(a0, 0x705, a)) == 0) {
                    sDwcLoginControl->state = 4;
                    s32 r = Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_GetInfo(a0, x->profileId, 0, 0, (void *)DwcLogin_OnGpProfileInfo, 0));
                    if (r == 0) {
                    } else if (r != 0) {
                        r = r;
                    }
                }
            } else {
                GsGp_Disconnect(a0);
                DwcLogin_StartNasAuth((DwcNasLoginCallback)DwcLogin_OnNasAuthDone, 0);
                sDwcLoginControl->state = 1;
            }
        } else if (sDwcLoginControl->state == 4) {
            DWCi_Acc_LoginIdToUserName((u8 *)sDwcLoginControl->userData + 4, sDwcLoginControl->gameCode, &b[1]);
            if (strcmp((const char *)&x->lastName[0], (const char *)&b[1]) == 0) {
                DWCi_Acc_LoginIdToUserName(&sDwcLoginControl->loginId, sDwcLoginControl->gameCode, &c[2]);
                DWCi_Acc_SetLoginIdToUserData(sDwcLoginControl->userData, &sDwcLoginControl->loginId, x->profileId);
                GsGp_Disconnect(a0);
                sDwcLoginDoneCallback(sDwcLoginControl->authToken, sDwcLoginControl->authChallenge, sDwcLoginDoneArg);
            } else {
                s32 r = Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_GetInfo(a0, x->profileId, 0, 0, (void *)DwcLogin_OnGpProfileInfo, 0));
                if (r == 0) { return; }
            }
        }
    }
}
}
}

namespace F02270b74 {
extern "C" {
BOOL DwcLogin_IsLoggedIn(void) {
    if (sDwcLoginControl != NULL && sDwcLoginControl->state == 5) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02270b74 {
extern "C" {
s32 DwcCore_GetLastError(s32 *out) {
    if (out != NULL) {
        *out = sDwcErrorCode;
    }
    return sDwcErrorClass;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcCore_ClearError(void) {
    if (sDwcErrorClass != 8) {
        sDwcErrorClass = 0;
        sDwcErrorCode = 0;
    }
}
}
}

namespace F02270b74 {
extern "C" {
BOOL DwcCore_HasError(void) {
    if (sDwcErrorClass != 0) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcCore_SetError(s32 a, s32 b) {
    if (sDwcErrorClass != 8) {
        sDwcErrorClass = a;
        sDwcErrorCode = b;
    }
}
}
}
