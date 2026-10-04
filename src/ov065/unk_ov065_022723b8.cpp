// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/GsGpBuddyStatus.h"
#include "net/DwcMatchCommandHeader.h"
#include "net/DwcNetChannel.h"
#include "net/DwcFriendControl.h"
#include "net/DwcMatchControl.h"
#include "net/DwcConnInfo.h"
#include "net/DwcMatchUserKey.h"
#include "net/DwcNetChannelTable.h"

typedef long long s64;

// sockaddr as the NAT negotiation complete callback and DwcMatch_HandleCommand cmd 6 pass it
struct Unk_ov065_022749f8_Sa {
    u16 unk_0;
    u16 port;
    u32 addr;
};

extern "C" {
u8 sDwcMatchServerLock[4];
u32 sDwcMatchUserFilter;
void *sDwcMatchSyncOption;
void *sDwcMatch;
u8 sDwcMatchValidAids[0x20];
u8 sDwcMatchUserKeys[0x738];
}

namespace F02271da0 {
extern "C" {


// ov065_031: DWC-like connection/http glue (0x02271da0..0x022726a0)











extern "C" {

extern DwcFriendControl *sDwcFriendControl;
extern DwcMatchControl *sDwcMatch;

u64 OS_GetTick();
s32 DWC_GetGsProfileId(s32, void *);
s32 DWCi_Acc_IsValidFriendData(void *);
s32 strcmp(const char *, const char *);
s32 STD_GetStringLength(const char *);
void func_02127838(char *, const char *);
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
s32 GsTransport_Connect(u32, s32, s32, char *, s32, s32, s32, s32);
s32 GsTransport_AddressToString(u32, u32, s32);
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

s32 DwcFriend_GetStatusString(void *a, char *b);
s32 DwcMatch_CountNnRetry(s32 a);
void DwcMatch_OnNnComplete(s32 a, s32 b, Unk_ov065_022749f8_Sa *c, DwcNnRequest *d);
void DwcMatch_OnNnProgress();
void DwcMatch_OnQr2ClientMessage(u8 *buf, u32 n);
}

}
}

namespace F02272734 {
extern "C" {


// ov065_032: DWC connection state machine / error-code helpers (0x02272734..0x02272fe0)


extern "C" {
extern DwcMatchControl *sDwcMatch;
extern DwcMatchSyncOption *sDwcMatchSyncOption;
extern DwcMatchUserKey sDwcMatchUserKeys[];

// callees outside this group
s32 DwcMatch_StartNatNegotiation(s32 a, u32 b, u32 c);
void GsQr_KeyBufferAdd(u32 a, u32 b);
void GsQr_BufAppendInt(u32 a, s32 b);
void GsQr_BufAppendString(u32 a, s32 *b);
s32 GsSrvBrowser_GetServerCount(u32 list);
u32 GsSrvBrowser_GetServer(u32 list, s32 i);
u32 GsServer_GetIntValue(u32 e, void *a, u32 b);
void GsSrvBrowser_RemoveServer(u32 list, u32 e);
void GsServer_SetIntValue(u32 e, void *a, u32 b);
void GsSrvBrowser_Sort(u32 list, u32 a, void *b, u32 c);
u32 DwcNet_Rand32(u32 a);
s32 DwcMatch_GetServerProfileId(u32 e);
s32 DwcMatch_StartServerQuery(u32 a);
s32 DwcMatch_SendReservation(u32 a, u32 b);
s32 DwcMatch_HandleResult(s32 a);
u32 GsServer_GetPublicIp(u32 e);
u32 GsServer_GetPublicPort(u32 e);
s32 DwcMatch_SendCloseOrder(u32 a);
s32 DwcMatch_SendReservationCancel(u32 a);
s32 DwcMatch_TryNextFriend(u32 a, u32 b);
s32 DwcCore_GetState(void);
void DwcLogin_Fail(s32 a, s32 b);
void DwcFriend_Fail(s32 a, s32 b);
void DwcCore_SetError(s32 a, s32 b);
void DwcMatch_Fail(s32 a, s32 b);
u64 DwcNet_GetTimeMs(void);
u64 OS_GetTick(void);
s32 DwcMatch_GetClientAidMask(u32 a);
s32 DwcMatch_AdvanceConnect(u32 a);
void DwcMatch_ResetSyncTimer(u32 a);
void DwcMatch_CloseAllConnections(void);
s32 DwcMatch_Restart(u32 a);
s32 DwcMatch_SendCommand(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

// in this group
s32 DwcMatch_HandleNnStartResult(s32 a);
s32 DwcMatch_HandleQr2Result(s32 a);
s32 DwcMatch_HandleSbResult(s32 a);
BOOL DwcMatch_EvaluateServers(u32 a);
void DwcMatch_Nop(u32 a);

enum Unk_ov065_02272734_Z { Unk_ov065_02272734_Z_0 = 0 };

void DwcMatch_OnQr2NnRequest(u32 a);
void DwcMatch_OnQr2PublicAddress(u32 a, u32 b);
s32 DwcMatch_OnQr2Error(s32 a);
s32 DwcMatch_OnQr2Count(void);
void DwcMatch_OnQr2KeyList(s32 a, u32 b);
void DwcMatch_OnQr2TeamKey(void);
void DwcMatch_OnQr2PlayerKey(void);
void DwcMatch_OnQr2ServerKey(s32 a, u32 b);
BOOL DwcMatch_EvaluateServers(u32 a);
void DwcMatch_Nop(u32 a);
void DwcMatch_OnServerBrowserEvent(u32 list, s32 mode, u32 c);
s32 DwcMatch_HandleGt2Result(s32 a);
s32 DwcMatch_HandleNnResult(s32 a);
s32 DwcMatch_HandleNnStartResult(s32 a);
s32 DwcMatch_HandleQr2Result(s32 a);
s32 DwcMatch_HandleSbResult(s32 a);
s32 DwcMatch_HandleGpResult(s32 a);
void DwcMatch_ProcessServerSync(void);
}

}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

// ov065_033: DWC-like connection state machine (0x02273230..0x02273ad0)

extern DwcMatchSyncOption *sDwcMatchSyncOption;
extern DwcMatchControl *sDwcMatch;
extern u8 sDwcMatchUserKeys[];

extern "C" {
u64 DwcNet_GetTimeMs(void);
s32 GsServer_GetIntValue(...);
void DwcNet_Free(u32, u32, u32);
void MIi_CpuClear32(u32, void *, u32);
s32 DwcCore_GetState(u32);
s32 DwcMatch_Restart(u32);
s32 DwcMatch_AdvanceConnect(u32);
s32 DwcMatch_SendCommand(u32, u32, u32, u32, void *, u32);
s32 DwcMatch_HandleResult(s32);
s32 DwcMatch_CancelNewClient(u32);
s32 DwcNet_SendData(u32, u32, void *, u32);
s32 DwcConn_CloseConnection(u32);
s32 GsTransport_CloseAll(u32);
s32 GsTransport_CloseHard(u32);
u32 *DwcConn_FindSlotByProfileId(u32, u32);
s32 DwcMatch_RemoveProfile(u32, u32);
u32 DwcMatch_StartServerQuery(u32);
s32 DwcMatch_HandleSbResult(u32);
u32 DwcMatch_SendReservation(u32, u32);

u32 DwcMatch_SendCancelSyncCommand(u32 a, u32 b);
u32 DwcMatch_DropUnresponsiveClients(u32 mask);
void DwcMatch_SendSyncPacket(u32 a, u32 b);
void DwcMatch_CloseAllConnections(void);
s32 DwcMatch_CloseProfileConnection(u32 a);


void DwcMatch_ResetSyncTimer(u32 a);
u32 DwcMatch_GetClientAidMask(u32 a);
u32 DwcMatch_GetAidByProfileId(u32 v, s32 k);
u32 DwcMatch_GetServerProfileId(char *s);
u32 DwcMatch_AllocAid(void);
void DwcMatch_ClearUserKeys(void);
u32 DwcMatch_ProcessCancelSync(void);
u32 DwcMatch_OnCancelSyncCommand(u32 a, u32 b, u32 c);
u32 DwcMatch_SendCancelSyncCommand(u32 a, u32 b);
u32 DwcMatch_ProcessCloseSync(void);
void DwcMatch_SendSyncPacket(u32 a, u32 b);
u32 DwcMatch_DropUnresponsiveClients(u32 mask);
void DwcMatch_CloseAllConnections(void);
s32 DwcMatch_CloseProfileConnection(u32 a);
u32 DwcMatch_RestartAfterCancel(void);
}
#undef G
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

// ov065_034: DWC connection state machine (0x02273b60..0x022745bc)


extern DwcMatchControl *sDwcMatch;
extern u8 sDwcMatchServerLock[];


extern "C" {
s32 DwcMatch_CloseAllConnections(void);
s32 DwcMatch_CloseProfileConnection(s32);
s32 DwcMatch_SendCancelSyncCommand(s32, s32);
s32 DwcMatch_SendSyncPacket(s32, s32);
s32 DwcMatch_ResetState(void);
s32 DwcFriend_FindIndexByProfileId(...);
s32 DwcMatch_StartServerQuery(s32);
s32 DwcMatch_HandleSbResult(void);
s32 DwcMatch_HandleGpResult(void);
s32 DwcMatch_Cleanup(void);
s32 DwcMatch_UpdateServerStatus(void);
s32 DwcFriend_SetOwnStatus(s32, void *, s32);
s32 GsGp_IsBuddy(u32, u32);
s32 DwcMatch_SendCommand(s32, u32, u32, u32, void *, s32);
s32 DwcMatch_HandleResult(void);
s32 DwcMatch_Fail(s32, s32);
s32 GsQr_SendStateChanged(u32);
s32 GsSrvBrowser_Free(u32);
s32 GsSrvBrowser_Clear(u32);
s32 GsNatNeg_FreeAll(void);
s32 GsTransport_CloseAll(u32);
s32 GsNatNeg_Cancel(u32);
s32 DwcLogin_GetUserData(void);
s32 GsGp_GetBuddyIndex(u32, s32, void *);
s32 GsGp_GetBuddyStatus(u32, u32, void *);
s32 GsUtil_GetKeyValue(const char *, void *, void *, s32);
s32 DwcMatch_SendReservation(s32, s32);
u64 OS_GetTick(void);
s32 DWC_GetGsProfileId(s32, u8 *);
s32 DWCi_Acc_IsValidFriendData(u8 *);
s32 strtoul(void *, s32, s32);

void DwcMatch_AbortAndRestart(void);
void DwcMatch_Restart(s32 a);
void DwcMatch_FinishCancelled(void);
s32 DwcMatch_AreAllBuddies(u32 *a, u32 n);
void DwcMatch_AdvanceConnect(s32 a);
s32 DwcMatch_SendCloseOrder(void);
s32 DwcMatch_RestartAfterNnFailure(void);
s32 DwcMatch_CancelNewClient(s32 a);
s32 DwcMatch_SendReservationCancel(s32 a);
s32 DwcMatch_BeginSearch(void);
s32 DwcMatch_TryNextFriend(s32 a, s32 b);

void DwcMatch_AbortAndRestart(void);
void DwcMatch_Restart(s32 a);
void DwcMatch_FinishCancelled(void);
s32 DwcMatch_AreAllBuddies(u32 *a, u32 n);
void DwcMatch_AdvanceConnect(s32 a);
s32 DwcMatch_SendCloseOrder(void);
s32 DwcMatch_RestartAfterNnFailure(void);
s32 DwcMatch_CancelNewClient(s32 a);
s32 DwcMatch_SendReservationCancel(s32 a);
s32 DwcMatch_BeginSearch(void);
s32 DwcMatch_TryNextFriend(s32 a, s32 b);
}
#undef g
}
}

namespace F022745bc {
extern "C" {


// ov065_035: DWC-like connection message handling (0x022745bc..0x022749f8)

extern DwcMatchControl *sDwcMatch;
extern DwcMatchSyncOption *sDwcMatchSyncOption;
extern u8 sDwcMatchServerLock[];

extern "C" {
u64 OS_GetTick(void);
void MIi_CpuCopy32(void *, void *, u32);
u32 GsSrvBrowser_GetServer(u32, s32);
s32 GsServer_GetIntValue(...);
u32 GsServer_GetPublicIp(u32);
u32 GsServer_GetPublicPort(u32);
s32 DwcMatch_SendCommand(u32, s32, u32, u32, void *, u32);
s32 DwcMatch_HandleSbResult(s32);
s32 DwcMatch_HandleGpResult(s32);
void GsQr_SendStateChanged(u32);
u32 DwcMatch_AllocAid(void);
void DwcMatch_ResetSyncTimer(u32);
s32 GsGp_IsBuddy(u32, s32);
s32 DwcMatch_SendReservationCancel(u32);
s32 DwcFriend_FindIndexByProfileId(s32);
s32 DwcMatch_TryNextFriend(...);
s32 DwcMatch_AreAllBuddies(void *, u32);
s32 DwcMatch_StartNatNegotiation(s32, u32, u32);
s32 DwcMatch_HandleNnStartResult(void);
s32 DwcMatch_StartServerQuery(u32);
s32 DwcMatch_BeginSearch(void);
s32 GsTransport_CloseAll(u32);
s32 DwcMatch_CancelNewClient(u32);
s32 GsTransport_GetRemoteIp(u32);
void DwcMatch_OnNnComplete(u32, u32, void *, void *);
s32 DwcMatch_AdvanceConnect(u32);
s32 DwcMatch_RestartAfterCancel(void);
s32 DwcMatch_RestartAfterNnFailure(u32);
s32 DwcMatch_CloseAllConnections(void);
s32 DwcMatch_CloseProfileConnection(u32);
s32 DwcMatch_Restart(u32);
s32 DwcMatch_OnCancelSyncCommand(u32, u32, u32);
u32 DwcMatch_GetAidByProfileId(u32, s32);
s32 DwcConn_CloseConnection(u32);
u64 DwcNet_GetTimeMs(void);
s32 DwcMatch_Fail(u32, s32);
s32 DwcMatch_SendCloseOrder(void);
s32 DwcMatch_HandleResult(s32);
u32 DwcMatch_CheckReservation(s32, u32, u32, u32, u32);
void DwcMatch_StoreMemberList(u32, u32 *);
s32 DwcMatch_AcceptNewClient(u32, u32, u16);

s32 DwcMatch_SendReservation(u32 a, s32 b);
s32 DwcMatch_HandleCommand(u32 ev, s32 h, u32 p2, u16 p3, u32 *args, s32 n);
u32 DwcMatch_CheckReservation(s32 a, u32 b, u32 c, u32 d, u32 e);
s32 DwcMatch_AcceptNewClient(u32 a, u32 b, u16 c);
void DwcMatch_StoreMemberList(u32 a, u32 *p);
s32 DwcMatch_HandleResult(s32 a);
}

}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

// ov065_036: DWC matchmaking / SB (server browser) request code (0x022751b0..0x02275c60)




struct DwcMatchCommandPacket {
    char magic[4];
    s32 version;
    u8 command;
    u8 argsSize;
    u16 senderPort;
    u32 senderIp;
    u32 senderProfileId;
    u32 cmdArgs[32];
};


extern DwcMatchControl *sDwcMatch;
extern u32 sDwcMatchUserFilter;
extern DwcMatchUserKey sDwcMatchUserKeys[];

extern "C" {

char *strchr(const char *, s32);
s32 STD_GetStringLength(const char *);
void func_02127838(char *, const char *);
void MI_CpuCopy8(const void *, void *, u32);
void MIi_CpuCopy32(const void *, void *, u32);
void MIi_CpuClear32(u32, void *, u32);
void MIi_CpuClear16(u32, void *, u32);
void MI_CpuFill8(void *, s32, u32);
s32 OS_SNPrintf(char *, s32, const char *, ...);

s32 GsGp_SendBuddyMessage(u32, u32, char *);
s32 GsTransport_AddressToString(u32, u32, s32);
s32 GsSrvBrowser_SendMessage(u32, s32, u32, void *, s32);
s32 GsSrvBrowser_SendNatNegCookie(u32, s32, u32, u32);
s32 DwcMatch_HandleSbResult(void);
s32 GsTransport_GetRemoteIp(u32);
s32 GsTransport_GetLocalPort(u32);
s32 GsNatNeg_Start(s32, u32, u32, void *, void *, void *);
void DwcMatch_OnNnComplete(u32, u32, u32, void *);
s32 DwcMatch_OnNnProgress(void);
u64 DwcNet_GetTimeMs(void);
s32 GsServer_HasPrivateAddress(u32);
u32 GsServer_GetPublicIp(u32);
u32 GsServer_GetPublicPort(u32);
u32 GsServer_GetPrivateIp(u32);
u32 GsServer_GetPrivatePort(u32);
s32 GsSrvBrowser_GetPublicIp(u32);
s32 Sock_GetHostId(void);
u32 DwcNet_Rand32(u32);
s32 GsSrvBrowser_Clear(u32);
s32 GsSrvBrowser_UpdateList(u32, u32, u32, void *, u32, void *, u32);
s32 GsSrvBrowser_Free(u32);
s32 GsNatNeg_FreeAll(void);
void DwcNet_Free(u32, u32);
void DwcMatch_ClearUserKeys(void);
void GsQr_RegisterKeyName(u32, char *);


s32 DwcMatch_GetArgField(char *out, const char *s, s32 n);
s32 DwcMatch_SendGpCommand(u32 a, u32 b, u32 c, char *d);
s32 DwcMatch_SendSbCommand(u32 a, u32 b, u32 c, u32 *d, s32 e);
s32 DwcMatch_SendCommand(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f);
s32 DwcMatch_SendNnRequest(DwcNnRequest *p);
s32 DwcMatch_StartNatNegotiation(u32 a, u32 b, u32 c);
void DwcMatch_BuildServerFilter(char *buf, u32 x, u32 y, u32 z);
void DwcMatch_StartServerQuery(u32 a);
void DwcMatch_Cleanup(void);
void DwcMatch_Init(u32 a, u32 b, u32 c, u32 d);
void DwcMatch_ResetState(u32 a);

static inline void Unk_ov065_02275984_Clear32(void *d, u32 n) {
    volatile u32 t = 0;
    MIi_CpuClear32(t, d, n);
}

static inline void Unk_ov065_02275984_Clear16(void *d, u32 n) {
    volatile u16 t = 0;
    MIi_CpuClear16(t, d, n);
}

s32 DwcMatch_GetArgField(char *out, const char *s, s32 n);
s32 DwcMatch_SendGpCommand(u32 a, u32 b, u32 c, char *d);
s32 DwcMatch_SendSbCommand(u32 a, u32 b, u32 c, u32 *d, s32 e);
s32 DwcMatch_SendCommand(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f);
s32 DwcMatch_SendNnRequest(DwcNnRequest *p);
s32 DwcMatch_StartNatNegotiation(u32 a, u32 b, u32 c);
void DwcMatch_BuildServerFilter(char *buf, u32 x, u32 y, u32 z);
void DwcMatch_StartServerQuery(u32 a);
void DwcMatch_Cleanup(void);
void DwcMatch_Init(u32 a, u32 b, u32 c, u32 d);
void DwcMatch_ResetState(u32 a);
}
#undef G
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

// ov065_037: DWC connection helpers (0x02275c60..0x02276500)




extern DwcMatchControl *sDwcMatch;
extern u8 sDwcMatchServerLock[];
extern u32 sDwcMatchUserFilter;
extern u32 sDwcMatchSyncOption;
extern u8 sDwcMatchValidAids[];


extern "C" {
void OS_SNPrintf(char *, s32, const char *, ...);
void MI_CpuFill8(void *, s32, s32);
u32 strtoul(const char *, char **, s32);

void DwcNet_Free(s32, u32, s32);
void DwcMatch_ClearUserKeys(void);
s32 GsUtil_FormatKeyValue(const char *, char *, char *, s32);
s32 GsUtil_AppendKeyValue(const char *, char *, char *, s32);
s32 DwcFriend_SetOwnStatus(s32, void *, s32);
s32 DwcFriend_FindIndexByProfileId(void);
s32 DwcMatch_CancelNewClient(...);
s32 DwcCore_GetState(void);
s32 GsNatNeg_Cancel(u32);
s32 GsTransport_CloseAll(u32);
s32 DwcMatch_RestartAfterCancel(void);
s32 DwcMatch_Restart(u32);
u64 DwcNet_GetTimeMs(void);
s32 DwcMatch_SendSyncPacket(u32, s32);
s32 DwcMatch_GetClientAidMask(u32);
s32 DwcMatch_AdvanceConnect(u32);
s32 GsQr_SendStateChanged(u32);
s32 DwcMatch_CloseAllConnections(void);
s32 DwcCore_SetError(s32, s32);
s32 DwcMatch_Cleanup(void);
s32 DwcMatch_GetArgField(char *, const char *, s32);
s32 DwcMatch_HandleCommand(u32, u32, u32, u32, void *, s32);
s32 GsTransport_AddressToString(u32, u32, s32);
s32 GsTransport_Connect(u32, s32, s32, char *, s32, s32, s32, s32);
s32 DwcMatch_HandleGt2Result(void);
s32 DwcConn_FindFreeSlot(void);
u32 *DwcConn_GetSlot(s32);
DwcConnInfo *DwcConn_GetConnInfo(s32);
s32 GsTransport_SetUserData(u32, void *);
s32 GsTransport_Reject(u32, const char *, s32);
s32 GsTransport_Accept(u32, u32);

void DwcMatch_UpdateValidAidCount(void);
u32 DwcMatch_RemoveMemberAt(s32, s32);
void DwcMatch_Fail(s32, s32);
void DwcMatch_ClearPendingCommand(void);

BOOL DwcMatch_IsInactive(void);
void DwcMatch_Shutdown(void);
s32 DwcMatch_UpdateServerStatus(void);
s32 DwcMatch_GetValidAidList(u8 **out);
s32 DwcMatch_GetAidList(u32 *out);
void DwcMatch_UpdateValidAidCount(void);
u32 DwcMatch_GetValidAidCount(void);
u32 DwcMatch_GetClientCount(void);
u32 DwcMatch_RemoveMemberAt(s32 idx, s32 n);
BOOL DwcMatch_RemoveProfile(u32 v, s32 n);
void DwcMatch_OnClientDisconnected(u32 a);
BOOL DwcMatch_OnConnectionClosed(s32 a, u32 b);
void DwcMatch_OnSyncPacket(u32 a, s32 b, u8 *c);
void DwcMatch_ResetPlayerCounts(void);
void DwcMatch_Fail(s32 a, s32 b);
void DwcMatch_ClearPendingCommand(void);
void DwcMatch_OnGpMatchCommand(u32 a, u32 b, const char *s);
void DwcMatch_OnGt2Connected(u32 a, u32 b);
void DwcMatch_OnGt2ConnectAttempt(u32 a0, u32 b, u32 c, u32 d, s32 s0, u8 *e);
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

// ov065_038: DWC connection state machine (0x02276698..0x02276f4c)


struct Unk_ov065_02276e44_Obj {
    u8 unk_00[0xb4];
    s32 stateChangePending;
};

struct Unk_ov065_02276f4c_Pad {
    s32 v[1];
    Unk_ov065_02276f4c_Pad() {}
    ~Unk_ov065_02276f4c_Pad() {}
};

struct DwcMatchServerLock {
    u8 lockEnabled;
    u8 isLocked;
    u16 unk_02;
};

extern DwcMatchControl *sDwcMatch;
extern DwcMatchServerLock sDwcMatchServerLock;
extern char data_ov065_0228e16c[];


extern "C" {
u64 OS_GetTick(void);
u64 func_02132ef8(u64 a, u64 b);
void MIi_CpuClear32(u32 v, void *dst, u32 n);
void MI_CpuFill8(void *dst, s32 v, u32 n);
s32 memcmp(void *, void *, u32);
u64 DwcNet_GetTimeMs(void);

s32 GsQr_HandlePacket(void *, char *, void *, void *);
s32 GsNatNeg_HandlePacket(char *, void *, void *);
s32 DwcCore_HasError(void);
s32 GsQr_Think(void *);
s32 GsTransport_Think(u32);
s32 DwcMatch_BeginSearch(void);
s32 DwcMatch_SendReservation(u32, u32);
s32 DwcMatch_HandleResult(void);
s32 DwcMatch_Fail(s32, s32);
s32 DwcMatch_StartServerQuery(u32);
s32 DwcMatch_HandleSbResult(...);
s32 DwcMatch_RestartAfterNnFailure(u32);
s32 DwcMatch_SendCommand(s32, u32, u32, u32, void *, u32);
s32 DwcMatch_ClearPendingCommand(void);
s32 DwcMatch_CancelNewClient(u32);
s32 DwcMatch_AbortAndRestart(void);
s32 DwcMatch_OnNnComplete(u32, u32, u32, void *);
s32 GsSrvBrowser_Think(u32);
s32 GsQr_SendStateChanged(void *);
s32 GsNatNeg_ProcessAll(void);
s32 DwcMatch_RestartAfterCancel(void);
s32 DwcMatch_ProcessCloseSync(void);
s32 DwcMatch_ProcessCancelSync(void);
s32 DwcMatch_ProcessServerSync(void);
s32 DwcMatch_Init(s32, u32, u32, u32);
s32 GsSrvBrowser_New(u32, u32, u32, u32, u32, u32, u32, void *, u32);
s32 DwcFriend_SetOwnStatus(s32, void *, s32);
s32 DwcMatch_HandleGpResult(void);
s32 DwcMatch_UpdateServerStatus(void);
s32 DwcMatch_OnServerBrowserEvent(void);
s32 GsTransport_GetRemoteIp(u32);
s32 GsTransport_GetLocalPort(u32);
s32 GsQr_Init(void *, s32, s32, u32, u32, u32, u32, void *, void *, void *, void *, void *, void *, u32);
s32 DwcMatch_HandleQr2Result(s32);
s32 GsQr_SetPublicAddressCallback(void *, void *);
s32 GsQr_SetNatNegCallback(void *, void *);
s32 GsQr_SetClientMessageCallback(void *, void *);
s32 DwcMatch_OnQr2ServerKey(void);
s32 DwcMatch_OnQr2PlayerKey(void);
s32 DwcMatch_OnQr2TeamKey(void);
s32 DwcMatch_OnQr2KeyList(void);
s32 DwcMatch_OnQr2Count(void);
s32 DwcMatch_OnQr2Error(void);
s32 DwcMatch_OnQr2PublicAddress(void);
s32 DwcMatch_OnQr2NnRequest(void);
s32 DwcMatch_OnQr2ClientMessage(void);
s32 DwcMatch_ClearUserKeys(void);
s32 DwcMatch_ResetState(u32);
s32 DwcMatch_StartQr2(u32 a);

s32 DwcMatch_OnUnrecognizedPacket(s32 a0, u32 ip, s32 port, char *name, void *arg);
void DwcMatch_Process(u32 a);
s32 DwcMatch_StartClient(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
void DwcMatch_StartGameServer(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);
s32 DwcMatch_StartQr2(u32 a);
void DwcMatch_InitControl(DwcMatchControl *a0, u32 a1, Unk_ov065_02290814_Sub *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);
}
#undef g
}
}

namespace F0227702c {
extern "C" {


// ov065_039: DWC-like send/receive channel table (0x0227702c..0x022778b0)





extern "C" {
extern u8 sDwcMatchServerLock[];
extern DwcMatchControl *sDwcMatch;
extern DwcMatchSyncOption *sDwcMatchSyncOption;
extern DwcNetChannelTable *sDwcNetChannels;
extern Unk_ov065_022778b0_Rng sDwcNetRandState;

void *DwcNet_Alloc(s32, s32);
u64 DwcNet_GetTimeMs(void);
s32 DwcConn_GetAid(s32);
s32 DwcConn_FindConnectionByAid(s32);
void DwcCore_SetError(s32, s32);
s32 DwcCore_HasError(void);
s32 DwcConn_GetAidList(u8 **);
s32 DwcConn_GetMyAid(void);
s32 DwcConn_IsAidValid(s32);
s32 DwcConn_IsAidConnected(s32);
s32 GsTransport_GetSendFreeSpace(s32);
s32 GsTransport_GetState(s32);
s32 GsTransport_Ping(s32);
void GsTransport_Send(s32, void *, s32, s32);
void DwcMatch_OnSyncPacket(s32, s32, s32);
u64 OS_GetTick(void);
void MI_CpuCopy8(void *, void *, s32);
void MI_CpuFill8(void *, s32, s32);
s32 memcmp(void *, void *, s32);
void strncpy(void *, void *, s32);
void OS_GetMacAddress(void *);
u64 func_02132ef8(u64, u64);

void DwcMatch_ClearServerLock(void);
BOOL DwcMatch_IsServerLocked(void);
s32 DwcMatch_SetOption(s32 m, u8 *p);
s32 DwcNet_GetSendSpace(s32 id);
void DwcNet_RecvControlBody(s32 a, void *b, s32 c);
void DwcNet_RecvBodyChunk(s32 id, void *buf, s32 n);
void DwcNet_RecvHeader(s32 id, void *buf, s32 n);
void DwcNet_RecvUnreliable(s32 a, void *buf, s32 n);
void DwcNet_RecvReliable(s32 a, void *buf, s32 n);
void DwcNet_SendToAid(s32 id, void *buf, s32 n, s32 f);
u32 DwcNet_GetRecvState(s32 id);
u32 DwcNet_IsSending(s32 id);
DwcNetChannel *DwcNet_GetChannel(s32 id);
void DwcNet_ClearChannelTable(void);
void DwcNet_ResetChannel(s32 id);
void DwcNet_ProcessSend(void);
void DwcNet_OnPing(s32 a, s32 b);
void DwcNet_OnReceive(s32 a, void *b, s32 c, s32 d);
void DwcNet_InitChannelTable(void *p);
s32 DwcNet_GetHeaderSize(s32 m);
u32 DwcNet_ParseHeader(void *src);
void DwcNet_BuildHeader(void *p, u32 a, u32 b);
void DwcNet_SetMaxChunkSize(u32 v);
void DwcNet_SetPingCallback(void *cb);
void DwcNet_SetRecvCallback(void *cb);
void DwcNet_SetSendDoneCallback(void *cb);
void DwcNet_PingAid(s32 id);
BOOL DwcNet_SetRecvBuffer(s32 id, u8 *buf, s32 n);
BOOL DwcNet_SendData(s32 m, s32 id, u8 *buf, s32 n);
BOOL DwcNet_SendReliable(s32 id, u8 *buf, s32 n);
BOOL DwcNet_CanSend(s32 id, s32 m);
BOOL DwcNet_CanSendReliable(s32 id);
u32 DwcNet_Rand32(u32 n);

void DwcMatch_ClearServerLock(void);
BOOL DwcMatch_IsServerLocked(void);
s32 DwcMatch_SetOption(s32 m, u8 *p);
}

}
}

namespace F0227702c {
extern "C" {


s32 DwcMatch_SetOption(s32 m, u8 *p) {
    DwcMatchControl *g = sDwcMatch;
    if (g == NULL) {
        return 1;
    }
    if (p == NULL) {
        return 3;
    }
    switch (m) {
    case 0: {
        DwcMatchSyncOption *s;
        if (g->matchState == 0x13) {
            return 1;
        }
        if (p[0] != 0 && p[1] <= 1) {
            return 3;
        }
        s = sDwcMatchSyncOption;
        if (s == NULL) {
            s = (DwcMatchSyncOption *)DwcNet_Alloc(4, 0x20);
            sDwcMatchSyncOption = s;
            if (s == NULL) {
                return 4;
            }
        }
        s->isEnabled = p[0];
        sDwcMatchSyncOption->minPlayers = p[1];
        {
            s32 z = 0;
            sDwcMatchSyncOption->retryCount = z;
            sDwcMatchSyncOption->unk_03 = z;
            sDwcMatchSyncOption->timeoutMs = *(u32 *)(p + 4);
            sDwcMatchSyncOption->answeredAidMask = z;
            sDwcMatchSyncOption->acceptedAidMask = z;
        }
        sDwcMatchSyncOption->startTime = DwcNet_GetTimeMs();
        sDwcMatchSyncOption->lastSendTime = DwcNet_GetTimeMs();
        return 0;
    }
    case 1:
        if (*(u32 *)p != 0) {
            sDwcMatchServerLock[0] = 1;
        } else {
            sDwcMatchServerLock[0] = 0;
        }
        sDwcMatchServerLock[1] = 0;
        return 0;
    }
    return 2;
}

}
}

namespace F0227702c {
extern "C" {


BOOL DwcMatch_IsServerLocked(void) {
    if (sDwcMatchServerLock[0] == 0 || sDwcMatchServerLock[1] == 0) {
        return FALSE;
    }
    return TRUE;
}

}
}

namespace F0227702c {
extern "C" {


void DwcMatch_ClearServerLock(void) {
    sDwcMatchServerLock[1] = 0;
}

}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

void DwcMatch_InitControl(DwcMatchControl *a0, u32 a1, Unk_ov065_02290814_Sub *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    g = a0;
    a0->gpConnection = a1;
    g->transportSocketPtr = a2;
    g->transportCallbacks = a3;
    g->qr2Object = 0;
    g->publicIp = 0;
    g->publicPort = 0;
    g->serverBrowser = 0;
    g->matchState = 0;
    g->unk_0f = 0;
    g->unk_19 = 0;
    g->unk_1a5 = 0;
    g->profileId = 0;
    g->gameName = a4;
    g->secretKey = a5;
    g->friendList = (u8 *)a6;
    g->friendCount = a7;
    MI_CpuFill8(g->friendIndices, 0, 0x40);
    g->friendIndexCount = 0;
    g->matchCallback = 0;
    g->matchCallbackParam = 0;
    g->evalCallback = 0;
    g->evalCallbackParam = 0;
    DwcMatch_ClearUserKeys();
    sDwcMatchServerLock.lockEnabled = 0;
    sDwcMatchServerLock.isLocked = 0;
    sDwcMatchServerLock.unk_02 = 0;
    DwcMatch_ResetState(0);
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_StartQr2(u32 a) {
    DwcMatchControl *c;
    s32 i;
    s32 z;
    s32 r;
    if (g->qr2Object != 0) {
        return 0;
    }
    g->profileId = a;
    i = 0;
    z = i;
    for (; i < 5; i++) {
        c = g;
        s32 h = GsTransport_GetRemoteIp(c->transportSocketPtr->transportSocket);
        s32 h2 = GsTransport_GetLocalPort(c->transportSocketPtr->transportSocket);
        r = GsQr_Init(&g->qr2Object, h, h2, c->gameName, c->secretKey, 1, 1, (void *)DwcMatch_OnQr2ServerKey, (void *)DwcMatch_OnQr2PlayerKey, (void *)DwcMatch_OnQr2TeamKey, (void *)DwcMatch_OnQr2KeyList, (void *)DwcMatch_OnQr2Count, (void *)DwcMatch_OnQr2Error, z);
        if (r == 0) {
            break;
        }
        if (r != 3 || i == 4) {
            DwcMatch_HandleQr2Result(r);
            return r;
        }
    }
    g->publicIp = 0;
    g->publicPort = 0;
    GsQr_SetPublicAddressCallback((void *)g->qr2Object, (void *)DwcMatch_OnQr2PublicAddress);
    GsQr_SetNatNegCallback((void *)g->qr2Object, (void *)DwcMatch_OnQr2NnRequest);
    GsQr_SetClientMessageCallback((void *)g->qr2Object, (void *)DwcMatch_OnQr2ClientMessage);
    GsQr_SendStateChanged((void *)g->qr2Object);
    return r;
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

void DwcMatch_StartGameServer(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    DwcMatch_Init(2, a0, a1, a2);
    g->newClientCallback = (DwcNewClientCallback)a3;
    g->newClientCallbackParam = a4;
    g->memberProfileIds[0] = g->profileId;
    g->validAidMask = 1;
    g->numValidClients = 0;
    sDwcMatchServerLock.isLocked = 0;
    g->matchState = 10;
    DwcMatch_UpdateServerStatus();
    if (DwcMatch_HandleGpResult() == 0) {
        if (g->qr2Object == 0) {
            DwcMatch_StartQr2(g->profileId);
        }
    }
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_StartClient(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    s32 r;
    DwcMatch_Init(3, 0, a1, a2);
    g->newClientCallback = (DwcNewClientCallback)a3;
    g->newClientCallbackParam = a4;
    g->hasReservation = 1;
    g->reservation = g->profileId;
    g->memberProfileIds[0] = a0;
    g->matchState = 4;
    if (g->serverBrowser == 0) {
        g->serverBrowser = GsSrvBrowser_New(g->gameName, g->gameName, g->secretKey, 0, 0x14, 1, 0, (void *)DwcMatch_OnServerBrowserEvent, 0);
    }
    if (g->serverBrowser == 0) {
        r = DwcMatch_HandleSbResult(5);
        if (r != 0) {
            return r;
        }
    }
    DwcFriend_SetOwnStatus(5, (char *)"", 0);
    r = DwcMatch_HandleGpResult();
    if (r != 0) {
        return r;
    }
    if (g->qr2Object == 0) {
        r = DwcMatch_StartQr2(g->profileId);
        if (r != 0) {
            return r;
        }
    }
    DwcMatch_SendReservation(g->memberProfileIds[0], 0);
    r = DwcMatch_HandleResult();
    if (r != 0) {
        return r;
    }
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

void DwcMatch_Process(u32 a) {
    Unk_ov065_02276f4c_Pad pad;
    DwcMatchControl *c;
    u32 r5;
    if (g != 0) {
        if (DwcCore_HasError() == 0) {
            if (a == 0) {
                if (g->qr2Object) {
                    GsQr_Think((void *)g->qr2Object);
                }
                if (g->transportSocketPtr != 0) {
                    GsTransport_Think(g->transportSocketPtr->transportSocket);
                }
                return;
            }
            c = g;
            u32 st = c->matchState;
            if (st == 0) {
                return;
            }
            switch (st) {
            case 0:
            case 1:
                break;
            case 4:
                if (c->reservationTimeoutMs != 0) {
                    u64 el = ((OS_GetTick() - *(u64 *)&c->reservationTick) << 6) / 0x82ea;
                    if ((u64)c->reservationTimeoutMs < el) {
                        c->reservationTimeoutMs = 0;
                        c = g;
                        if (c->matchType == 3) {
                            c->reservationRetries++;
                            if (g->reservationRetries > 5) {
                                DwcMatch_Fail(6, -0x13a2e);
                                return;
                            }
                            DwcMatch_SendReservation(g->memberProfileIds[0], 0);
                            if (DwcMatch_HandleResult() != 0) {
                                return;
                            }
                        } else {
                            if (DwcMatch_BeginSearch() == 0) {
                                return;
                            }
                        }
                    }
                }
                c = g;
                if (c->reservationRetryPending == 0) {
                    break;
                }
                { u32 t = c->numClients * 3000; r5 = t + 3000; }
                if (((OS_GetTick() - *(u64 *)&c->reservationRetryTick) << 6) / 0x82ea >= (u64)r5) {
                    DwcMatch_SendReservation(c->memberProfileIds[0], 0);
                    if (DwcMatch_HandleResult() != 0) {
                        return;
                    }
                }
                break;
            case 2:
            case 3:
            case 5:
                if (c->queryRetryMode <= 0) {
                    break;
                }
                if (st == 3) {
                    { u32 t = c->numClients * 3000; r5 = t + 3000; }
                } else if (c->queryRetryMode == 1) {
                    r5 = 1000;
                } else {
                    r5 = 3000;
                }
                if ((u64)r5 < ((OS_GetTick() - *(u64 *)&c->queryRetryTick) << 6) / 0x82ea) {
                    DwcMatch_StartServerQuery(c->serverProfileId);
                    if (DwcMatch_HandleSbResult() != 0) {
                        return;
                    }
                    g->queryRetryMode = 0;
                }
                break;
            case 7:
                if (*(u64 *)&c->connectWaitTime != 0) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)&c->connectWaitTime;
                    if (d > 0x61a8) {
                        c = g;
                        *(u64 *)&c->connectWaitTime = 0;
                        if (DwcMatch_RestartAfterNnFailure(c->memberProfileIds[0]) != 0) {
                            break;
                        }
                        return;
                    }
                    break;
                } else if (c->cmdType == 6) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)&c->cmdTime;
                    if (d > 0x1770) {
                        c->cmdRetryCount++;
                        c = g;
                        if (c->cmdRetryCount > 5) {
                            DwcMatch_ClearPendingCommand();
                            if (DwcMatch_RestartAfterNnFailure(g->memberProfileIds[0]) == 0) {
                                return;
                            }
                        } else {
                            DwcMatch_SendCommand(6, c->cmdProfileId, c->cmdIp, c->cmdPort, c->cmdArgs, c->cmdArgCount);
                            if (DwcMatch_HandleResult() != 0) {
                                return;
                            }
                        }
                    }
                }
                break;
            case 8:
            case 9:
            case 10:
                break;
            case 11:
                if (c->cmdType != 2) {
                    break;
                }
                if (c->matchType == 0) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)&g->cmdTime;
                    if (d > 0x1770) {
                        goto do_b;
                    }
                }
                {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)&g->cmdTime;
                    if (d > 0x4a38) {
                    do_b:
                        DwcMatch_ClearPendingCommand();
                        c = g;
                        if (DwcMatch_CancelNewClient(c->memberProfileIds[c->numClients + 1]) != 0) {
                            break;
                        }
                        return;
                    }
                }
                break;
            case 12:
                break;
            case 13:
                if (c->cmdType != 8) {
                    break;
                }
                {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)&c->cmdTime;
                    if (d > 0x7530) {
                        c->cmdRetryCount++;
                        c = g;
                        if (c->cmdRetryCount != 0) {
                            DwcMatch_ClearPendingCommand();
                            c = g;
                            if (c->matchType == 2) {
                                if (DwcMatch_CancelNewClient(c->memberProfileIds[c->numClients]) == 0) {
                                    return;
                                }
                            } else {
                                DwcMatch_AbortAndRestart();
                            }
                        } else {
                            DwcMatch_SendCommand(8, c->cmdProfileId, c->cmdIp, c->cmdPort, c->cmdArgs, c->cmdArgCount);
                            if (DwcMatch_HandleResult() == 0) {
                                break;
                            }
                            return;
                        }
                    }
                }
                break;
            }
            c = g;
            if (c->matchState == 0xb || c->matchState == 6) {
                if (*(u64 *)&c->nnRetryTime != 0) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)&c->nnRetryTime;
                    if (d > 0x2710) {
                        DwcMatch_OnNnComplete(1, 0, 0, &c->nnRequest);
                    }
                }
            }
            if (g->serverBrowser) {
                GsSrvBrowser_Think(g->serverBrowser);
            }
            if (g->qr2Object) {
                GsQr_Think((void *)g->qr2Object);
                c = g;
                Unk_ov065_02276e44_Obj *o = (Unk_ov065_02276e44_Obj *)c->qr2Object;
                if (o->stateChangePending == 0 && (c->matchType == 0 || c->matchType == 1)) {
                    if (c->matchState == 1 || c->matchState == 2 || c->matchState == 3 || c->matchState == 4 || c->matchState == 6 || c->matchState == 0xb) {
                        goto do_kill;
                    }
                }
                if (c->matchType == 2 && c->matchState == 0xb) {
                do_kill:
                    GsQr_SendStateChanged(o);
                }
            }
            GsNatNeg_ProcessAll();
            if (g->transportSocketPtr != 0) {
                GsTransport_Think(g->transportSocketPtr->transportSocket);
            }
            if (g->matchState == 0x12) {
                u64 d = DwcNet_GetTimeMs() - *(u64 *)&g->waitStartTime;
                if (d > 0xbb8) {
                    if (DwcMatch_RestartAfterCancel() != 0) {
                        return;
                    }
                }
            }
            if (DwcMatch_ProcessCloseSync() != 0) {
                if (DwcMatch_ProcessCancelSync() != 0) {
                    DwcMatch_ProcessServerSync();
                }
            }
        }
    }
}
#undef g
}
}

namespace F02276698 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_OnUnrecognizedPacket(s32 a0, u32 ip, s32 port, char *name, void *arg) {
    struct {
        u8 len;
        u8 family;
        u16 port;
        u32 ip;
    } addr;
    volatile s32 z;
    if (arg == 0 || name == 0) {
        return 0;
    }
    z = 0;
    MIi_CpuClear32(z, &addr, 8);
    addr.family = 2;
    addr.ip = ip;
    addr.port = ((port >> 8) & 0xff) | ((port << 8) & 0xff00);
    u32 c = (u8)name[0];
    if ((c == 0xfe && (u8)name[1] == 0xfd) || c == 0x5c) {
        if (g->qr2Object) {
            GsQr_HandlePacket((void *)g->qr2Object, name, arg, &addr);
        }
    } else if (memcmp(name, data_ov065_0228e16c, 6) == 0) {
        GsNatNeg_HandlePacket(name, arg, &addr);
    } else {
        if (c == 0xfe) {
            return 0;
        } else if (c != 0) {
            c = c;
        }
        return 0;
    }
    return 1;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_OnGt2ConnectAttempt(u32 a0, u32 b, u32 c, u32 d, s32 s0, u8 *e) {
    s32 id;
    if (g != NULL && g->matchState == 7 && g->unk_1a1 == 0) {
    } else {
        GsTransport_Reject(b, (char *)"Init state", -1);
        return;
    }
    id = DwcConn_FindFreeSlot();
    if (id == -1) {
        GsTransport_Reject(b, (char *)"Server full", -1);
        DwcMatch_Fail(6, -0x1543c);
        return;
    }
    if (c != g->memberConnectIps[g->numClients] || d != g->memberConnectPorts[g->numClients]) {
        if (*e != 0) {
            if (g->memberProfileIds[g->numClients] == strtoul((char *)e, NULL, 10)) {
                g->memberConnectIps[g->numClients] = c;
                g->memberConnectPorts[g->numClients] = d;
                goto ok;
            }
        }
        GsTransport_Reject(b, (char *)"Unknown connect attempt", -1);
        return;
    }
ok:
    DwcMatchControl *gs = g;
    gs->connectWaitTime = 0;
    gs->connectWaitTimeHi = 0;
    if (GsTransport_Accept(b, gs->transportCallbacks) == 0) {
        DwcMatch_Fail(6, -0x13a1a);
        return;
    }
    DwcMatch_ClearPendingCommand();
    if (g->numClients == 0) {
        s32 t = s0 >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        g->syncWaitMs = t;
    }
    u32 *p = DwcConn_GetSlot(id);
    DwcConnInfo *q = DwcConn_GetConnInfo(id);
    *p = b;
    g->numClients++;
    q->slotIndex = id;
    q->aid = g->aids[g->numClients - 1];
    q->unk_02 = 0;
    q->unk_04 = 0;
    GsTransport_SetUserData(b, q);
    DwcMatch_AdvanceConnect(2);
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_OnGt2Connected(u32 a, u32 b) {
    char buf[12];
    if (g == NULL) {
        return;
    }
    if (g->matchState != 7 && g->matchState != 0xc) {
        return;
    }
    switch (b) {
    case 5:
        return;
    case 6: {
        g->connectRetryCount++;
        if (g->connectRetryCount > 5) {
            g->connectRetryCount = 0;
            DwcMatch_CancelNewClient(g->memberProfileIds[g->numPlayers]);
            return;
        }
        OS_SNPrintf(buf, 12, (char *)"%u", g->profileId);
        DwcMatchControl *c = g;
        s32 r0 = GsTransport_AddressToString(c->memberConnectIps[c->numPlayers], c->memberConnectPorts[c->numPlayers], 0);
        s32 r = GsTransport_Connect(g->transportSocketPtr->transportSocket, 0, r0, buf, -1, 0x1388, c->transportCallbacks, 0);
        if (r == 1) {
            DwcMatch_HandleGt2Result();
            return;
        } else if (r != 0) {
            if (DwcMatch_CancelNewClient(g->memberProfileIds[g->numPlayers]) == 0) {
                return;
            }
        }
        break;
    }
    default:
        if (DwcMatch_CancelNewClient(g->memberProfileIds[g->numClients + 1]) == 0) {
            return;
        }
        break;
    case 0: {
        s32 id = DwcConn_FindFreeSlot();
        if (id == -1) {
            DwcMatch_Fail(6, -0x1543c);
        }
        u32 *p = DwcConn_GetSlot(id);
        DwcConnInfo *q = DwcConn_GetConnInfo(id);
        *p = a;
        g->numClients++;
        q->slotIndex = id;
        q->unk_02 = 0;
        q->unk_04 = 0;
        q->aid = g->aids[g->numClients];
        GsTransport_SetUserData(a, q);
        if (g->matchState == 0xc) {
            DwcMatch_AdvanceConnect(0);
            return;
        }
        DwcMatch_AdvanceConnect(1);
        break;
    }
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_OnGpMatchCommand(u32 a, u32 b, const char *s) {
    char tmp[16];
    u32 arr[128];
    s32 i = 0;
    s32 z = 0;
    for (; i < 0x80; i++) {
        s32 r = DwcMatch_GetArgField(tmp, s + 1, i);
        if (r == ~z) {
            break;
        }
        arr[i] = strtoul(tmp, NULL, 10);
    }
    DwcMatch_HandleCommand(*(u8 *)s, b, 0, 0, arr, i);
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_ClearPendingCommand(void) {
    g->cmdType = 0xff;
    g->cmdRetryCount = 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_Fail(s32 a, s32 b) {
    if (g != NULL && a != 0) {
        DwcMatch_CloseAllConnections();
        DwcCore_SetError(a, b);
        DwcFriend_SetOwnStatus(1, (char *)"", 0);
        DwcMatchControl *c = g;
        BOOL x;
        BOOL y;
        if (c->matchType == 2) {
            x = TRUE;
        } else {
            x = FALSE;
        }
        if (c->resultProfileId == 0) {
            y = TRUE;
        } else {
            y = FALSE;
        }
        s32 t = DwcFriend_FindIndexByProfileId();
        g->matchCallback(a, 0, y, x, t, c->matchCallbackParam);
        DwcMatch_Cleanup();
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_ResetPlayerCounts(void) {
    if (g->matchType != 2) {
        g->numPlayers = 0;
        g->maxPlayers = 0;
        GsQr_SendStateChanged(g->qr2Object);
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_OnSyncPacket(u32 a, s32 b, u8 *c) {
    switch (b) {
    case 2:
        if (g->matchState == 1) {
            if (c[0] == 1) {
                g->resultProfileId = 0;
            }
            u32 x = c[1];
            u8 y = c[2];
            g->aids[x] = y;
            g->memberProfileIds[x] = g->profileId;
            if (g->matchType == 0 || g->matchType == 1) {
                g->maxPlayers = g->numClients;
            }
            g->matchState = 9;
        }
        DwcMatch_SendSyncPacket(a, 3);
        break;
    case 3:
        if (g->matchState == 0x10) {
            g->syncAckMask |= 1 << a;
            s32 v = c[0] | (c[1] << 8);
            if (v > g->syncWaitMs) {
                g->syncWaitMs = v;
            }
            s32 r = DwcMatch_GetClientAidMask(0);
            if (g->syncAckMask == r) {
                s32 i;
                for (i = 1; i <= g->numClients; i++) {
                    DwcMatch_SendSyncPacket(g->aids[i], 4);
                }
                g->matchState = 0x11;
            }
        } else {
            DwcMatch_SendSyncPacket(a, 4);
        }
        break;
    case 4:
        if (g->matchState == 9) {
            DwcMatch_AdvanceConnect(4);
        }
        break;
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

BOOL DwcMatch_OnConnectionClosed(s32 a, u32 b) {
    if (DwcCore_GetState() != 5) {
        return FALSE;
    }
    if (g->matchType == 2) {
        return TRUE;
    }
    if (a != 0) {
        DwcMatch_Fail(a, b - 0x13880);
        return TRUE;
    }
    g->aids[0] = 0;
    if (g->unk_1a1 == 1 || (u8)(g->closeState + 0xff) <= 1) {
        return TRUE;
    }
    if (g->nnRequest.cookie != 0) {
        GsNatNeg_Cancel(g->nnRequest.cookie);
        g->nnRequest.cookie = 0;
    }
    if (g->numClients != 0) {
        if (g->closeState == 0) {
            g->closeState = 3;
            GsTransport_CloseAll(g->transportSocketPtr->transportSocket);
        }
    } else if (g->matchType == 3) {
        DwcMatch_Fail(6, -0x13a2e);
    } else if (g->targetProfileId != 0) {
        DwcMatch_RestartAfterCancel();
    } else if (g->matchState == 1) {
        g->matchState = 0x12;
        u64 t = DwcNet_GetTimeMs();
        DwcMatchControl *c = g;
        c->waitStartTime = (u32)t;
        c->waitStartTimeHi = (u32)(t >> 32);
    } else {
        DwcMatch_Restart(1);
    }
    return TRUE;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_OnClientDisconnected(u32 a) {
    if (g->closeState != 2) {
        DwcMatch_CancelNewClient(a);
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

BOOL DwcMatch_RemoveProfile(u32 v, s32 n) {
    s32 i;
    u8 *q;
    if (g == NULL) {
        return FALSE;
    }
    q = (u8 *)g;
    for (i = 0; i < n; i++) {
        if (v == *(u32 *)(q + 0xf4)) {
            DwcMatch_RemoveMemberAt(i, n);
            return TRUE;
        }
        q += 4;
    }
    return FALSE;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

u32 DwcMatch_RemoveMemberAt(s32 idx, s32 n) {
    u32 saved;
    if (g == NULL) {
        return 0;
    }
    saved = g->memberProfileIds[idx];
    g->validAidMask &= ~(1 << g->aids[idx]);
    DwcMatch_UpdateValidAidCount();
    if (idx < n - 1) {
        s32 i;
        for (i = 0; i < n - idx; i++) {
            s32 j = idx + i;
            s32 k = j + 1;
            g->memberIps[j] = g->memberIps[k];
            g->memberPorts[j] = g->memberPorts[k];
            g->memberProfileIds[j] = g->memberProfileIds[k];
            g->memberConnectIps[j] = g->memberConnectIps[k];
            g->memberConnectPorts[j] = g->memberConnectPorts[k];
            g->aids[j] = g->aids[k];
        }
    }
    if (n > 0) {
        s32 l = n - 1;
        g->memberIps[l] = 0;
        g->memberPorts[l] = 0;
        g->memberProfileIds[l] = 0;
        g->memberConnectIps[l] = 0;
        g->memberConnectPorts[l] = 0;
        g->aids[l] = 0;
    }
    return saved;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

u32 DwcMatch_GetClientCount(void) {
    if (g != NULL) {
        return g->numClients;
    }
    return 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

u32 DwcMatch_GetValidAidCount(void) {
    if (g != NULL) {
        return g->numValidClients;
    }
    return 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_UpdateValidAidCount(void) {
    s32 n, i;
    n = -1;
    i = 0;
    DwcMatchControl *c = g;
    u32 v = c->validAidMask;
    for (; i < 32; i++) {
        if ((v & (1 << i)) != 0) {
            n++;
        }
    }
    s32 z = 0;
    s32 m1 = ~z;
    if (n == m1) {
        c->numValidClients = z;
    } else {
        c->numValidClients = n;
    }
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_GetAidList(u32 *out) {
    if (g == NULL) {
        return 0;
    }
    *out = (u32)&g->aids;
    return g->numClients + 1;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_GetValidAidList(u8 **out) {
    s32 i;
    u32 b;
    if (g == NULL) {
        return 0;
    }
    MI_CpuFill8(sDwcMatchValidAids, 0, 0x20);
    i = 0;
    for (; i <= g->numValidClients; i++) {
        b = g->aids[i];
        if ((g->validAidMask & (1 << b)) == 0) {
            break;
        }
        sDwcMatchValidAids[i] = b;
    }
    *out = sDwcMatchValidAids;
    return g->numValidClients + 1;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_UpdateServerStatus(void) {
    char buf[12];
    char buf2[32];
    if (g->matchType != 2) {
        return 0;
    }
    OS_SNPrintf(buf, 12, (char *)"%u", g->maxPlayers + 1);
    GsUtil_FormatKeyValue((char *)"SCM", buf, buf2, 0x2f);
    OS_SNPrintf(buf, 12, (char *)"%u", g->numClients + 1);
    GsUtil_AppendKeyValue((char *)"SCN", buf, buf2, 0x2f);
    OS_SNPrintf(buf, 12, (char *)"%u", 3);
    GsUtil_AppendKeyValue((char *)"VER", buf, buf2, 0x2f);
    return DwcFriend_SetOwnStatus(6, buf2, 0);
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_Shutdown(void) {
    s32 z = 0;
    sDwcMatch = (DwcMatchControl *)z;
    if (sDwcMatchUserFilter != 0) {
        DwcNet_Free(4, sDwcMatchUserFilter, z);
        sDwcMatchUserFilter = 0;
    }
    DwcMatch_ClearUserKeys();
    if (sDwcMatchSyncOption != 0) {
        DwcNet_Free(4, sDwcMatchSyncOption, 0);
        sDwcMatchSyncOption = 0;
    }
    sDwcMatchServerLock[0] = 0;
    sDwcMatchServerLock[1] = 0;
}
#undef g
}
}

namespace F02275c60 {
extern "C" {
#define g sDwcMatch

BOOL DwcMatch_IsInactive(void) {
    if (g == NULL) {
        return TRUE;
    }
    return FALSE;
}
#undef g
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

void DwcMatch_ResetState(u32 a) {
    G->connectRetryCount = 0;
    G->nnRetryCount = 0;
    G->nnCookieHigh = DwcNet_Rand32(0x10000);
    G->nnLastCookie = 0;
    {
        DwcMatchControl *g = G;
        g->nnRetryTime = 0;
        g->nnRetryTimeHi = 0;
        g->connectWaitTime = 0;
        g->connectWaitTimeHi = 0;
        g->connectOrderIndex = 0;
    }
    G->unk_1a1 = 0;
    G->reservationRetries = 0;
    G->syncRetryCount = 0;
    G->cancelSyncRetryCount = 0;
    G->rejoinRetries = 0;
    G->closeState = 0;
    G->cancelSyncWaitMs = 0;
    G->targetServerPort = 0;
    G->targetServerIp = 0;
    {
        DwcMatchControl *g = G;
        g->syncSendTime = 0;
        g->syncSendTimeHi = 0;
        g->waitStartTime = 0;
        g->waitStartTimeHi = 0;
        Unk_ov065_02275984_Clear32(&g->cmdType, 0x98);
    }
    if (a == 2) {
        G->numPlayers = G->numClients;
        if (G->matchType == 3) {
            G->matchState = 1;
        } else if (G->matchType == 2) {
            G->matchState = 10;
        }
    } else {
        G->numClients = 0;
        G->numValidClients = 0;
        G->numPlayers = 0;
        G->hasReservation = 0;
        G->reservation = 0;
        G->queryRetryMode = 0;
        G->friendCursor = 0;
        G->syncWaitMs = 0;
        G->reservationRetryPending = 0;
        {
            DwcMatchControl *g = G;
            g->reservationRetryTick = 0;
            g->reservationRetryTickHi = 0;
            g->reservationTimeoutMs = 0;
        }
        {
            DwcMatchControl *g = G;
            g->reservationTick = 0;
            g->reservationTickHi = 0;
            g->syncAckMask = 0;
        }
        G->serverProfileId = 0;
        G->targetProfileId = 0;
        G->validAidMask = 0;
        Unk_ov065_02275984_Clear32(G->memberIps, 0x80);
        Unk_ov065_02275984_Clear16(G->memberPorts, 0x40);
        Unk_ov065_02275984_Clear32(G->memberProfileIds, 0x80);
        Unk_ov065_02275984_Clear32(&G->nnRequest, 0xc);
        Unk_ov065_02275984_Clear32(G->memberConnectIps, 0x80);
        Unk_ov065_02275984_Clear16(G->memberConnectPorts, 0x40);
        MI_CpuFill8(G->aids, 0, 0x20);
        Unk_ov065_02275984_Clear32(&G->memberListCount, 0x84);
        if (a == 1) {
            if (G->matchType == 0) {
                G->matchState = 3;
            } else if (G->matchType == 1) {
                G->matchState = 4;
            }
        } else {
            G->matchType = 0;
            G->maxPlayers = 0;
            G->qr2ShutdownPending = 0;
            G->resultProfileId = 0;
            G->unk_19e = 0;
            G->newClientCallback = 0;
            G->newClientCallbackParam = 0;
        }
    }
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

void DwcMatch_Init(u32 a, u32 b, u32 c, u32 d) {
    DwcMatch_ResetState(0);
    G->matchType = a;
    G->maxPlayers = b;
    G->matchCallback = (DwcMatchedScCallback)c;
    G->matchCallbackParam = d;
    G->nnFailCount = 0;
    G->aids[0] = 0;
    GsQr_RegisterKeyName(0x32, (char *)"dwc_pid");
    GsQr_RegisterKeyName(0x33, (char *)"dwc_mtype");
    GsQr_RegisterKeyName(0x34, (char *)"dwc_mresv");
    GsQr_RegisterKeyName(0x35, (char *)"dwc_mver");
    GsQr_RegisterKeyName(0x36, (char *)"dwc_eval");
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

void DwcMatch_Cleanup(void) {
    if (G != NULL) {
        if (G->serverBrowser != 0) {
            GsSrvBrowser_Free(G->serverBrowser);
            G->serverBrowser = 0;
        }
        GsNatNeg_FreeAll();
        G->matchState = 0;
        if (sDwcMatchUserFilter != 0) {
            DwcNet_Free(4, sDwcMatchUserFilter);
            sDwcMatchUserFilter = 0;
        }
        DwcMatch_ClearUserKeys();
        G->qr2ShutdownPending = 1;
    }
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

void DwcMatch_StartServerQuery(u32 a) {
    char buf[0x100];
    u8 list[0xa8];
    s32 n = 7;
    s32 i;
    DwcMatchUserKey *e;
    u8 *q;
    s32 k;
    list[0] = 8;
    list[1] = 10;
    list[2] = 0x32;
    list[3] = 0x33;
    list[4] = 0x34;
    list[5] = 0x35;
    list[6] = 0x36;
    if (G->matchType == 0 || G->matchType == 1) {
        i = 0;
        e = sDwcMatchUserKeys;
        q = &list[7];
        for (; i < 0x9a; e++, i++) {
            if (e->keyId != 0) {
                *q = e->keyId;
                q++;
                n++;
            }
        }
    }
    switch (G->matchState) {
    case 0:
    case 1:
        break;
    case 3:
        a = G->targetProfileId;
        if (a == 0) {
            DwcMatch_BuildServerFilter(buf, G->profileId, G->maxPlayers, G->matchType);
            if (sDwcMatchUserFilter != 0) {
                OS_SNPrintf(buf, 0x100, (char *)"%s and (%s)", buf, sDwcMatchUserFilter);
            }
            break;
        }
        // fallthrough
    case 2:
    case 4:
    case 5:
        OS_SNPrintf(buf, 0x100, (char *)"%s = %u", (char *)"dwc_pid", a);
        G->serverProfileId = a;
        break;
    }
    GsSrvBrowser_Clear(G->serverBrowser);
    for (k = 0; k < 5; k++) {
        s32 r = GsSrvBrowser_UpdateList(G->serverBrowser, 1, 0, list, n, buf, 0x10);
        if (r == 0) break;
        if (r != 2) break;
    }
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

void DwcMatch_BuildServerFilter(char *buf, u32 x, u32 y, u32 z) {
    OS_SNPrintf(buf, 0x100, (char *)"%s = %d and %s != %u and maxplayers = %d and numplayers < %d and %s = %d and %s != %s", (char *)"dwc_mver", 3, (char *)"dwc_pid", x, y, y, (char *)"dwc_mtype", z, (char *)"dwc_mresv", (char *)"dwc_pid");
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch
enum Unk_ov065_022754f0_Z { Unk_ov065_022754f0_Z_0 = 0 };
s32 DwcMatch_StartNatNegotiation(u32 a, u32 b, u32 c) {
    s32 flag;
    u8 idx = G->numPlayers;
    s32 ret = 0;
    if (a == 0) {
        b = (G->profileId & 0xffff) | (G->nnCookieHigh << 16);
        if (GsServer_HasPrivateAddress(c) != 0) {
            s32 t = GsServer_GetPublicIp(c);
            if (t == GsSrvBrowser_GetPublicIp(G->serverBrowser)) {
                G->memberConnectIps[idx] = GsServer_GetPrivateIp(c);
                G->memberConnectPorts[idx] = GsServer_GetPrivatePort(c);
                flag = 0;
            } else {
                flag = 1;
            }
        } else {
            u16 t = Sock_GetHostId();
            u32 lo;
            u32 m;
            if ((t & 0xffff) == 0xa8c0) goto yes;
            lo = t & 0xff;
            if (lo == 0xac) {
                m = t & 0xff00;
                if (m >= 0x1000 && m <= 0x1f00) goto yes;
            }
            if (lo == 0x10) {
            yes:
                flag = 1;
            } else {
                G->memberConnectIps[idx] = GsServer_GetPublicIp(c);
                G->memberConnectPorts[idx] = GsServer_GetPublicPort(c);
                flag = 0;
            }
        }
        if (flag != 0) {
            G->nnCookieHigh = DwcNet_Rand32(0x10000);
            G->nnRequest.cookie = b;
        } else {
            u32 loc[2];
            s32 x;
            loc[0] = Sock_GetHostId();
            loc[1] = GsTransport_GetLocalPort(G->transportSocketPtr->transportSocket);
            x = GsServer_GetPublicIp(c);
            b = GsServer_GetPublicPort(c);
            x = DwcMatch_SendCommand(6, G->memberProfileIds[idx], x, b, loc, 2);
            G->cmdRetryCount = 0;
            if (x != 0) {
                return 2;
            }
            G->nnRequest.cookie = 0;
        }
        G->nnRequest.clientIndex = 0;
        G->nnRequest.retryCount = 0;
        G->nnRequest.peerPort = GsServer_GetPublicPort(c);
        G->nnRequest.peerIp = GsServer_GetPublicIp(c);
    } else {
        flag = 1;
        G->nnRequest.clientIndex = 1;
        G->nnRequest.retryCount = ret;
        G->nnRequest.peerPort = ret;
        G->nnRequest.peerIp = ret;
        G->nnRequest.cookie = b;
    }
    if (flag != 0) {
        ret = DwcMatch_SendNnRequest(&G->nnRequest);
    } else {
        DwcMatchControl *g = G;
        DwcMatch_OnNnComplete(0, GsTransport_GetRemoteIp(g->transportSocketPtr->transportSocket), 0, &g->nnRequest);
        Unk_ov065_022754f0_Z z = Unk_ov065_022754f0_Z_0;
        g = G;
        g->connectWaitTime = z;
        g->connectWaitTimeHi = z;
    }
    return ret;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_SendNnRequest(DwcNnRequest *p) {
    s32 i;
    s32 r;
    if (p->clientIndex == 0) {
        GsSrvBrowser_SendNatNegCookie(G->serverBrowser, GsTransport_AddressToString(p->peerIp, 0, 0), p->peerPort, p->cookie);
        if (DwcMatch_HandleSbResult() != 0) {
            return 2;
        }
    }
    for (i = 0; i < 5; i++) {
        r = GsNatNeg_Start(GsTransport_GetRemoteIp(G->transportSocketPtr->transportSocket), p->cookie, p->clientIndex, (void *)DwcMatch_OnNnProgress, (void *)DwcMatch_OnNnComplete, p);
        if (r == 0) break;
        if (r != 3) break;
    }
    return r;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_SendCommand(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f) {
    s32 r;
    char buf[0x200];
    char tmp[0x10];
    s32 i;
    u32 *p;
    r = 0;
    if (G->matchType == 0 || ((G->matchType == 3 || G->unk_19e != 0) && a == 6)) {
        r = DwcMatch_SendSbCommand(a, c, d, e, f);
    } else {
        if (e != NULL && f != 0) {
            r = OS_SNPrintf(buf, 0x200, (char *)"%u", e[0]);
            i = 1;
            if (i < f) {
                p = e + 1;
                do {
                    s32 m = OS_SNPrintf(tmp, 0x10, (char *)"/%u", *p);
                    MI_CpuCopy8(tmp, buf + r, m);
                    r += m;
                    p++;
                    i++;
                } while (i < f);
            }
        }
        buf[r] = 0;
        r = DwcMatch_SendGpCommand(G->gpConnection, a, b, buf);
    }
    if (a == 2 || a == 6 || (u8)(a + 0xf8) <= 1) {
        G->cmdType = a;
        G->cmdPort = d;
        G->cmdIp = c;
        G->cmdProfileId = b;
        G->cmdArgCount = f;
        {
            DwcMatchControl *g = G;
            u64 t = DwcNet_GetTimeMs();
            g->cmdTime = (u32)t;
            g->cmdTimeHi = (u32)(t >> 32);
            if (e != NULL && f != 0) {
                MIi_CpuCopy32(e, g->cmdArgs, f * 4);
            }
        }
    }
    return r;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_SendSbCommand(u32 a, u32 b, u32 c, u32 *d, s32 e) {
    DwcMatchCommandPacket h;
    s32 i;
    s32 r;
    if (d != NULL && e != 0) {
        MIi_CpuCopy32(d, h.cmdArgs, e * 4);
    } else {
        e = 0;
    }
    func_02127838(h.magic, (char *)"SBCM");
    h.version = 3;
    h.command = a;
    h.argsSize = e * 4;
    h.senderPort = G->publicPort;
    h.senderIp = G->publicIp;
    h.senderProfileId = G->profileId;
    i = 0;
    do {
        r = GsSrvBrowser_SendMessage(G->serverBrowser, GsTransport_AddressToString(b, 0, 0), c, &h, h.argsSize + 0x14);
        if (r == 0) break;
        if (r != 2) break;
        i++;
    } while (i < 5);
    return r;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_SendGpCommand(u32 a, u32 b, u32 c, char *d) {
    char buf[0x200];
    s32 n = OS_SNPrintf(buf, 0x200, (char *)"%s%dv%s", (char *)"GPCM", 3, (char *)"MAT");
    char *q = &buf[1];
    char *p;
    buf[n] = b;
    p = q + n;
    q[n] = 0;
    if (d != NULL) {
        s32 len = STD_GetStringLength(d);
        MI_CpuCopy8(d, p, len);
        p[len] = 0;
    }
    return GsGp_SendBuddyMessage(a, c, buf);
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_GetArgField(char *out, const char *s, s32 n) {
    char *end = strchr(s, 0);
    s32 i;
    char *p;
    s32 len;
    for (i = 0; i < n; i++) {
        p = strchr(s, '/');
        if (p == NULL) {
            return -1;
        }
        s = p + 1;
    }
    p = strchr(s, '/');
    if (p == NULL) {
        p = end;
    }
    if (s == p) {
        return -1;
    }
    len = p - s;
    MI_CpuCopy8(s, out, len);
    out[len] = 0;
    return len;
}
#undef G
}
}

namespace F022745bc {
extern "C" {

enum Unk_ov065_022749f8_Z { Unk_ov065_022749f8_Z_0 = 0 };
s32 DwcMatch_HandleCommand(u32 ev, s32 h, u32 p2, u16 p3, u32 *args, s32 n) {
    u8 ub;
    u32 buf[0x41];
    u32 loc1c;
    Unk_ov065_022749f8_Sa sa;
    s32 z = 0;
    s32 i;
    DwcMatchControl *g = sDwcMatch;
    s32 st;
    if (g == 0 || (st = g->matchState) == 0) {
        return 1;
    }
    switch (ev) {
    case 1:
    case 11: {
        u32 r;
        if (g->matchType != 0) {
            p2 = args[1];
            p3 = (u16)args[2];
        }
        r = DwcMatch_CheckReservation(h, p2, p3, args[0], ev == 0xb ? 1 : 0);
        if (r == 2) {
            DwcMatchControl *q;
            if (DwcMatch_HandleResult(DwcMatch_AcceptNewClient(h, p2, p3)) != 0) {
                return 0;
            }
            q = sDwcMatch;
            if (q->matchType == 2 && q->newClientCallback != 0) {
                sDwcMatch->newClientCallback(DwcFriend_FindIndexByProfileId(h), q->newClientCallbackParam);
            }
            buf[0] = sDwcMatch->numPlayers;
            for (z = 1; z <= sDwcMatch->numPlayers; z++) {
                buf[z] = sDwcMatch->memberProfileIds[z];
            }
            buf[z++] = sDwcMatch->publicIp;
            buf[z++] = sDwcMatch->publicPort;
            sDwcMatch->matchState = 0xb;
        }
        if (r == 0xff) {
            break;
        }
        if (DwcMatch_HandleResult(DwcMatch_SendCommand(r, h, p2, p3, buf, z)) != 0) {
            return 0;
        }
        break;
    }
    case 2:
        if (st != 4) {
            break;
        }
        if (h != g->serverProfileId) {
            break;
        }
        g->targetProfileId = z;
        sDwcMatch->rejoinRetries = z;
        sDwcMatch->reservationTimeoutMs = z;
        sDwcMatch->reservationRetryPending = z;
        sDwcMatch->memberIps[0] = (args + 1)[args[0]];
        sDwcMatch->memberPorts[0] = (args + 2)[args[0]];
        sDwcMatch->targetServerIp = (args + 1)[args[0]];
        sDwcMatch->targetServerPort = (args + 2)[args[0]];
        if (sDwcMatch->matchType == 1) {
            if (DwcMatch_AreAllBuddies(args + 1, args[0]) != 0) {
                if (sDwcMatch->numClients != 0) {
                    DwcMatch_StoreMemberList(h, args);
                }
            } else {
                if (DwcMatch_HandleResult(DwcMatch_SendReservationCancel(h)) != 0) {
                    return z;
                }
                if (DwcMatch_HandleResult(DwcMatch_TryNextFriend(z, z)) == 0) {
                    break;
                }
                return z;
            }
        }
        {
            DwcMatchControl *q = sDwcMatch;
            if (q->matchType == 0) {
                if (q->numClients != 0) {
                    DwcMatch_StoreMemberList(h, args);
                    if (DwcMatch_HandleResult(DwcMatch_SendCloseOrder()) != 0) {
                        return 0;
                    }
                }
                sDwcMatch->matchState = 6;
                DwcMatch_StartNatNegotiation(0, 0, GsSrvBrowser_GetServer(sDwcMatch->serverBrowser, 0));
                if (DwcMatch_HandleNnStartResult() == 0) {
                    break;
                }
                return 0;
            } else {
                q->matchState = 5;
                if (DwcMatch_HandleSbResult(DwcMatch_StartServerQuery(h)) == 0) {
                    break;
                }
                return 0;
            }
        }
    case 3:
        if (st != 4) {
            break;
        }
        if (h != g->serverProfileId) {
            break;
        }
        return DwcMatch_BeginSearch();
    case 4: {
        if (st != 4) {
            break;
        }
        if (h != g->serverProfileId) {
            break;
        }
        *(u64 *)&g->reservationTick = OS_GetTick();
        if ((g->targetProfileId != 0 && g->rejoinRetries < 0x10) || g->matchType == 3) {
            DwcMatchControl *q;
            g->reservationRetryPending = 1;
            q = sDwcMatch;
            *(u64 *)&q->reservationRetryTick = OS_GetTick();
            if (q->matchType != 3) {
                q->rejoinRetries++;
            }
        } else {
            DwcMatchControl *q;
            g->targetProfileId = 0;
            sDwcMatch->rejoinRetries = 0;
            q = sDwcMatch;
            if (q->matchType == 0) {
                q->matchState = 3;
                sDwcMatch->queryRetryMode = 1;
                u64 t = OS_GetTick();
                DwcMatchControl *q2 = sDwcMatch;
                *(u64 *)&q2->queryRetryTick = t;
            } else if (((volatile DwcMatchControl *)q)->matchType == 1) {
                DwcMatch_TryNextFriend(1, 0);
            }
        }
        break;
    }
    case 5:
        if (g->hasReservation == 0) {
            break;
        }
        if (h != g->reservation) {
            break;
        }
        if (g->matchType == 2 && g->numClients == 1 && g->memberProfileIds[1] == h) {
            GsTransport_CloseAll(g->transportSocketPtr->transportSocket);
        }
        if (DwcMatch_CancelNewClient(h) == 0) {
            return 0;
        }
        break;
    case 6: {
        s32 y, x;
        x = args[0];
        y = (u16)args[1];
        if (st == 1) {
            g->matchState = 6;
        } else if (st == 6 || st == 0xb) {
            if (h != g->reservation) {
                break;
            }
        } else {
            break;
        }
        sDwcMatch->cmdType = 0xff;
        {
            DwcMatchControl *q = sDwcMatch;
            u32 *b0 = q->memberProfileIds;
            s32 k = q->numClients + 1;
            u32 *pe = b0 + k;
            if (h != b0[k]) {
                *pe = h;
            }
        }
        sa.addr = x;
        sa.port = ((y >> 8) & 0xff) | ((y << 8) & 0xff00);
        sDwcMatch->nnRequest.clientIndex = 1;
        {
            DwcMatchControl *q = sDwcMatch;
            DwcMatch_OnNnComplete(0, GsTransport_GetRemoteIp(q->transportSocketPtr->transportSocket), &sa, &q->nnRequest);
        }
        Unk_ov065_022749f8_Z z6 = Unk_ov065_022749f8_Z_0;
        {
            DwcMatchControl *q = sDwcMatch;
            q->connectWaitTime = z6;
            q->connectWaitTimeHi = z6;
        }
        break;
    }
    case 7:
        if (st != 1) {
            break;
        }
        if (h != g->memberProfileIds[0]) {
            break;
        }
        loc1c = args[0];
        {
            ub = (u8)args[1];
            g->memberProfileIds[g->numPlayers + 1] = loc1c;
            sDwcMatch->aids[sDwcMatch->numPlayers + 1] = ub;
        }
        GsQr_SendStateChanged(sDwcMatch->qr2Object);
        {
            DwcMatchControl *q = sDwcMatch;
            if (q->newClientCallback != 0) {
                sDwcMatch->newClientCallback(DwcFriend_FindIndexByProfileId(loc1c), q->newClientCallbackParam);
            }
        }
        break;
    case 8:
        if (st != 1) {
            break;
        }
        if (h != g->memberProfileIds[0]) {
            break;
        }
        {
        u32 v = args[0];
        loc1c = v;
        if (v == 0) {
            u32 a1 = args[1];
            u32 a2 = args[2];
            g->aids[a1] = a2;
            sDwcMatch->memberProfileIds[a1] = sDwcMatch->profileId;
            DwcMatch_AdvanceConnect(3);
            break;
        } else {
            u32 a1 = args[1];
            ub = (u8)args[2];
            u32 *b0 = g->memberProfileIds;
            u32 *pp = b0 + a1;
            if (v == b0[a1] && a1 == g->numClients - 1) {
                if (DwcMatch_HandleResult(DwcMatch_SendCommand(9, h, g->memberIps[0], g->memberPorts[0], &loc1c, 1)) == 0) {
                    break;
                }
                return 0;
            }
            *pp = v;
            sDwcMatch->aids[a1] = ub;
            sDwcMatch->memberIps[a1] = args[3];
            sDwcMatch->memberPorts[a1] = args[4];
            sDwcMatch->targetServerIp = args[3];
            sDwcMatch->targetServerPort = args[4];
            sDwcMatch->matchState = 5;
            if (DwcMatch_HandleSbResult(DwcMatch_StartServerQuery(loc1c)) != 0) {
                return 0;
            }
            sDwcMatch->reservationTimeoutMs = 0;
            sDwcMatch->reservationRetryPending = 0;
            break;
        }
        }
    case 9: {
        s32 t;
        u32 a0;
        if (st != 0xd) {
            break;
        }
        a0 = *(volatile u32 *)args;
        t = g->connectOrderIndex;
        t++;
        if (a0 != g->memberProfileIds[t]) {
            break;
        }
        g->connectOrderIndex = t;
        DwcMatch_AdvanceConnect(z);
        break;
    }
    case 10:
        if (st != 1 && st != 0x12) {
            break;
        }
        if (g->matchType == 0 || DwcMatch_AreAllBuddies(args + 1, args[0]) != 0) {
            sDwcMatch->targetProfileId = args[1];
            sDwcMatch->rejoinRetries = 0;
        } else {
            sDwcMatch->targetProfileId = 0;
        }
        {
            DwcMatchControl *q = sDwcMatch;
            if (q->numClients != 0) {
                GsTransport_CloseAll(q->transportSocketPtr->transportSocket);
            } else {
                if (DwcMatch_RestartAfterCancel() != 0) {
                    return 0;
                }
            }
        }
        break;
    case 12:
        if (h != g->memberProfileIds[0]) {
            break;
        }
        if (g->matchType == 0 || ((volatile DwcMatchControl *)g)->matchType == 1) {
            if (DwcMatch_RestartAfterNnFailure(h) == 0) {
                return 0;
            }
            break;
        }
        if (((volatile DwcMatchControl *)g)->matchType != 3) {
            break;
        }
        if (args[0] == 0) {
            g->resultProfileId = h;
            DwcMatch_CloseAllConnections();
            DwcMatch_Restart(z);
        } else {
            DwcMatch_CloseProfileConnection(args[0]);
        }
        break;
    case 13:
    case 14:
    case 15:
        if (DwcMatch_OnCancelSyncCommand(h, ev, args[0]) == 0) {
            return z;
        }
        break;
    case 16:
        if (h != g->memberProfileIds[0]) {
            return 1;
        }
        if (n > 0) {
            do {
                u32 t = DwcMatch_GetAidByProfileId(args[0], 0);
                if (t != 0xff) {
                    DwcConn_CloseConnection(t);
                }
                args++;
                z++;
            } while (z < n);
        }
        break;
    case 17: {
        DwcMatchSyncOption *m = sDwcMatchSyncOption;
        if (m != 0 && m->isEnabled != 0) {
            u64 d = DwcNet_GetTimeMs() - m->startTime;
            if (d >= m->timeoutMs) {
                buf[0] = 1;
                goto sent;
            }
        }
        buf[0] = 0;
    sent:
        if (DwcMatch_HandleResult(DwcMatch_SendCommand(0x12, h, p2, p3, buf, 1)) != 0) {
            return 0;
        }
        break;
    }
    case 18: {
        u32 t;
        u32 m;
        if (st != 0x13) {
            break;
        }
        t = DwcMatch_GetAidByProfileId(h, z);
        if (t == 0xff) {
            break;
        }
        m = 1 << t;
        sDwcMatchSyncOption->answeredAidMask |= m;
        if (args[0] != 0) {
            sDwcMatchSyncOption->acceptedAidMask |= m;
        }
        break;
    }
    case 19:
        DwcMatch_Fail(0xb, z);
        return z;
    }
    return 1;
}

}
}

namespace F022745bc {
extern "C" {


u32 DwcMatch_CheckReservation(s32 a, u32 b, u32 c, u32 d, u32 e) {
    DwcMatchControl *g = sDwcMatch;
    u32 r;
    switch (g->matchType) {
    case 1:
        if (GsGp_IsBuddy(g->gpConnection, a) == 0) {
            r = 0xff;
            goto end;
        }
    case 0:
        g = sDwcMatch;
        if (d != g->matchType || g->unk_1a1 != 0 || g->numPlayers == g->maxPlayers ||
            (g->hasReservation != 0 && g->reservation == g->profileId)) {
            r = 3;
            if (g->matchType == 0) {
                u32 obj = g->qr2Object;
                if (*(u32 *)(obj + 0xb4) == 0) {
                    if (g->hasReservation != 0) {
                        if (sDwcMatch->reservation == sDwcMatch->profileId) {
                            GsQr_SendStateChanged(obj);
                        }
                    }
                }
            }
            goto end;
        }
        {
            s32 t = g->matchState;
            u32 p;
            if (t != 3 && t != 4) {
                goto r4;
            }
            if (g->publicIp == 0 && g->publicPort == 0) {
                goto r4;
            }
            if (b == 0 && c == 0) {
            r4:
                r = 4;
                goto end;
            }
            p = g->serverProfileId;
            if (p == 0) {
                goto r2b;
            }
            if (p != (u32)a) {
                goto other;
            }
            if (e == 0) {
                if ((s32)g->profileId >= a) {
                    goto rff;
                }
                if (a == g->targetProfileId) {
                    goto rff;
                }
            }
            r = 2;
            goto end;
        rff:
            r = 0xff;
            goto end;
        other:
            if (e == 0) {
                if ((s32)g->profileId >= a) {
                    goto r3;
                }
                if (g->targetProfileId != 0) {
                    goto r3;
                }
            }
            if (DwcMatch_HandleResult(DwcMatch_SendReservationCancel(p)) != 0) {
                return 0xff;
            }
            r = 2;
            goto end;
        r3:
            r = 3;
            goto end;
        r2b:
            r = 2;
            goto end;
        }
    case 2:
        if (GsGp_IsBuddy(g->gpConnection, a) == 0) {
            r = 0xff;
            goto end;
        }
        if (d != 3 || (g = sDwcMatch, g->numPlayers == g->maxPlayers)) {
            r = 3;
            goto end;
        }
        if (sDwcMatchServerLock[0] == 1 && sDwcMatchServerLock[1] == 1) {
            r = 0x13;
            goto end;
        }
        if (g->matchState != 0xa) {
            goto r4b;
        }
        if (g->publicIp == 0 && g->publicPort == 0) {
            goto r4b;
        }
        if (b != 0 || c != 0) {
            goto r2c;
        }
    r4b:
        r = 4;
        goto end;
    r2c:
        r = 2;
        break;
    }
end:
    return r;
}

}
}

namespace F022745bc {
extern "C" {


s32 DwcMatch_AcceptNewClient(u32 a, u32 b, u16 c) {
    u32 args[2];
    s32 i;
    DwcMatchControl *g = sDwcMatch;
    if (g->hasReservation != 0 && g->reservation == a) {
        return 0;
    }
    g->hasReservation = 1;
    sDwcMatch->reservation = a;
    sDwcMatch->reservationRetryPending = 0;
    sDwcMatch->reservationTimeoutMs = 0;
    GsQr_SendStateChanged(sDwcMatch->qr2Object);
    sDwcMatch->serverProfileId = 0;
    sDwcMatch->memberProfileIds[sDwcMatch->numPlayers + 1] = a;
    sDwcMatch->memberIps[sDwcMatch->numPlayers + 1] = b;
    sDwcMatch->memberPorts[sDwcMatch->numPlayers + 1] = c;
    sDwcMatch->targetServerIp = b;
    sDwcMatch->targetServerPort = c;
    DwcMatchControl *h = sDwcMatch;
    h->aids[h->numPlayers + 1] = DwcMatch_AllocAid();
    args[0] = a;
    args[1] = sDwcMatch->aids[sDwcMatch->numPlayers + 1];
    for (i = 1; i <= sDwcMatch->numPlayers; i++) {
        DwcMatchControl *q = sDwcMatch;
        s32 r = DwcMatch_SendCommand(7, q->memberProfileIds[i], q->memberIps[i], q->memberPorts[i], args, 2);
        if (r != 0) {
            return r;
        }
    }
    DwcMatch_ResetSyncTimer(1);
    return 0;
}

}
}

namespace F022745bc {
extern "C" {


void DwcMatch_StoreMemberList(u32 a, u32 *p) {
    u32 n = p[0] + 2;
    if (n > 2) {
        MIi_CpuCopy32(&p[1], sDwcMatch->memberListPids, (n - 2) * 4);
    }
    sDwcMatch->memberListCount = n - 1;
    sDwcMatch->memberListSender = a;
}

}
}

namespace F022745bc {
extern "C" {


s32 DwcMatch_HandleResult(s32 a) {
    if (sDwcMatch->matchType == 0) {
        return DwcMatch_HandleSbResult(a);
    }
    return DwcMatch_HandleGpResult(a);
}

}
}

namespace F022745bc {
extern "C" {


s32 DwcMatch_SendReservation(u32 a, s32 b) {
    u32 args[3];
    s32 n;
    if (b != 0 || (sDwcMatch->publicIp == 0 && sDwcMatch->publicPort == 0)) {
        sDwcMatch->reservationRetryPending = 1;
        DwcMatchControl *h = sDwcMatch;
        *(u64 *)&h->reservationRetryTick = OS_GetTick();
        h->memberProfileIds[0] = a;
        return 0;
    }
    if (sDwcMatch->matchType == 0) {
        u32 l = GsSrvBrowser_GetServer(sDwcMatch->serverBrowser, 0);
        sDwcMatch->memberProfileIds[0] = GsServer_GetIntValue(l, (char *)"dwc_pid", 0);
        sDwcMatch->memberIps[0] = GsServer_GetPublicIp(l);
        sDwcMatch->memberPorts[0] = GsServer_GetPublicPort(l);
        sDwcMatch->serverProfileId = sDwcMatch->memberProfileIds[0];
        n = 1;
    } else {
        if (((volatile DwcMatchControl *)sDwcMatch)->matchType == 1) {
            sDwcMatch->memberProfileIds[0] = a;
        }
        sDwcMatch->serverProfileId = a;
        args[1] = sDwcMatch->publicIp;
        args[2] = sDwcMatch->publicPort;
        n = 3;
    }
    sDwcMatch->reservationTimeoutMs = 0x1770;
    {
        DwcMatchControl *h = sDwcMatch;
        *(u64 *)&h->reservationTick = OS_GetTick();
        h->reservationRetryPending = 0;
    }
    u32 k = sDwcMatch->targetProfileId != 0 ? 0xb : 1;
    DwcMatchControl *j = sDwcMatch;
    args[0] = j->matchType;
    return DwcMatch_SendCommand(k, a, j->memberIps[0], j->memberPorts[0], args, n);
}

}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_TryNextFriend(s32 a, s32 b) {
    s32 x;
    volatile s32 av = a;
    volatile s32 first;
    volatile s32 next;
    volatile s32 started;
    struct {
        volatile s32 n2;
        u8 buf14[8];
        u32 h;
        char buf20[12];
        GsGpBuddyStatus status;
    } l;
    if (b != 0) {
        next = g->friendCursor;
    } else {
        u8 cur = g->friendCursor;
        if (cur < g->friendIndexCount - 1) next = cur + 1;
        else next = 0;
    }
    started = 0;
    if (b == 0) first = 1;
    else first = 0;
    DwcMatchControl **const gp = &g;
    for (;;) {
        DwcMatchControl *c;
        s32 i;
        s32 n;
        s32 e0, e1;
        s32 n1, n3;
        if (first != 0 || started != 0) {
            (*gp)->friendCursor++;
            if ((*gp)->friendCursor >= (*gp)->friendIndexCount) (*gp)->friendCursor = 0;
        }
        if (started != 0 && (*gp)->friendCursor == next) {
            (*gp)->reservationTimeoutMs = 3000;
            c = *gp;
            u64 t = OS_GetTick();
            *(u64 *)&c->reservationTick = t;
            c->reservationRetryPending = 0;
            return 0;
        }
        started = 1;
        c = *gp;
        x = DWC_GetGsProfileId(DwcLogin_GetUserData(), c->friendList + c->friendIndices[c->friendCursor] * 12);
        if (x == 0) continue;
        if (x == -1) continue;
        if (DWCi_Acc_IsValidFriendData((*gp)->friendList + (*gp)->friendIndices[(*gp)->friendCursor] * 12) == 0) continue;
        i = 1;
        c = *gp;
        n = c->numClients;
        if (n >= 1) {
            u32 *p = (u32 *)((u8 *)c + 4);
            do {
                if (x == *(u32 *)((u8 *)p + 0xf4)) break;
                p++;
                i++;
            } while (i <= *(volatile u8 *)&c->numClients);
        }
        if (i <= n) continue;
        e0 = GsGp_GetBuddyIndex((*gp)->gpConnection, x, &l.h);
        e1 = GsGp_GetBuddyStatus((*gp)->gpConnection, l.h, &l.status);
        if ((e0 | e1) != 0) continue;
        if (l.status.status != 4) continue;
        n1 = GsUtil_GetKeyValue((char *)"VER", l.buf20, l.status.statusString, 0x2f);
        l.n2 = GsUtil_GetKeyValue((char *)"FME", l.buf14 + 2, l.status.statusString, 0x2f);
        n3 = GsUtil_GetKeyValue((char *)"MDF", l.buf14, l.status.statusString, 0x2f);
        if (n1 <= 0) continue;
        if (l.n2 <= 0) continue;
        if (n3 <= 0) continue;
        if (strtoul(l.buf20, 0, 10) != 3) continue;
        if ((*gp)->maxPlayers != strtoul(l.buf14 + 2, 0, 10)) continue;
        return DwcMatch_SendReservation(x, av);
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_BeginSearch(void) {
    DwcMatchControl *c;
    u64 t;
    g->targetProfileId = 0;
    g->serverProfileId = 0;
    g->rejoinRetries = 0;
    c = g;
    t = OS_GetTick();
    *(u64 *)&c->reservationTick = t;
    if (c->matchType == 0) {
        c->matchState = 3;
        DwcMatch_StartServerQuery(0);
        if (DwcMatch_HandleSbResult() != 0) return FALSE;
    } else if (c->matchType == 1) {
        DwcMatch_TryNextFriend(0, 0);
        if (DwcMatch_HandleResult() != 0) return FALSE;
    } else if (c->matchType == 3) {
        DwcMatch_Fail(6, -0x13a1a);
        return FALSE;
    }
    return TRUE;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_SendReservationCancel(s32 a) {
    DwcMatchControl *c = g;
    s32 r = DwcMatch_SendCommand(5, a, c->memberIps[0], c->memberPorts[0], 0, 0);
    g->serverProfileId = 0;
    return r;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_CancelNewClient(s32 a) {
    DwcMatchControl *c = g;
    BOOL b;
    if (c->hasReservation != 0 && c->reservation == c->profileId) b = FALSE;
    else b = TRUE;
    if (b) {
        c->hasReservation = 0;
        g->reservation = 0;
        GsQr_SendStateChanged(g->qr2Object);
    }
    if (g->numClients < 0x1f) g->memberProfileIds[g->numClients + 1] = 0;
    g->cmdType = 0xff;
    if (g->nnRequest.cookie != 0) {
        GsNatNeg_Cancel(g->nnRequest.cookie);
        g->nnRequest.cookie = 0;
    }
    g->numPlayers = g->numClients;
    g->serverProfileId = 0;
    if (!b) {
        if (g->matchType != 3) DwcMatch_AbortAndRestart();
    } else if (g->matchType == 0) {
        g->matchState = 3;
        g->queryRetryMode = 2;
        u64 t = OS_GetTick();
        DwcMatchControl *d = g;
        d->queryRetryTick = (u32)t;
        d->queryRetryTickHi = (u32)(t >> 32);
    } else if (g->matchType == 1) {
        g->matchState = 4;
        DwcMatch_TryNextFriend(1, 0);
    } else if (g->matchType == 2) {
        s32 i;
        g->matchState = 14;
        g->cancelSyncAckMask = 0;
        g->cancelSyncWaitMs = 0;
        DwcMatch_CloseProfileConnection(a);
        for (i = 1; i <= g->numClients; i++) {
            if (DwcMatch_SendCancelSyncCommand(g->memberProfileIds[i], 13) == 0) return FALSE;
        }
        if (g->numClients == 0) DwcMatch_Restart(2);
    }
    return TRUE;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_RestartAfterNnFailure(void) {
    BOOL r = TRUE;
    DwcMatchControl *c = g;
    if (c->matchType == 3) {
        if (c->numClients != 0) DwcMatch_CloseAllConnections();
        DwcMatch_Fail(6, -0x13a2e);
        return FALSE;
    }
    c->numPlayers = c->numClients;
    g->targetProfileId = 0;
    if (g->nnRequest.cookie != 0) {
        GsNatNeg_Cancel(g->nnRequest.cookie);
        g->nnRequest.cookie = 0;
    }
    c = g;
    if (c->numClients != 0) {
        DwcMatch_AbortAndRestart();
    } else {
        c->matchState = 4;
        r = DwcMatch_BeginSearch();
    }
    return r;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_SendCloseOrder(void) {
    s32 i, r;
    for (i = 1; i <= g->numClients; i++) {
        DwcMatchControl *c = g;
        r = DwcMatch_SendCommand(10, c->memberProfileIds[i], c->memberIps[i], c->memberPorts[i], &c->memberListCount, c->memberListCount + 1);
        if (r != 0) return r;
    }
    g->hasReservation = 0;
    g->reservation = 0;
    g->closeState = 1;
    GsTransport_CloseAll(g->transportSocketPtr->transportSocket);
    g->closeState = 0;
    return 0;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_AdvanceConnect(s32 a) {
    s32 kind = 3;
    u32 args[6];
    BOOL done = FALSE;
    s32 i;
    switch (a) {
    case 0:
        if (g->connectOrderIndex < g->numClients - 1) {
            g->matchState = 13;
            args[0] = g->memberProfileIds[g->connectOrderIndex + 1];
            args[1] = g->connectOrderIndex + 1;
            args[2] = g->aids[g->connectOrderIndex + 1];
            args[3] = g->memberIps[g->connectOrderIndex + 1];
            args[4] = g->memberPorts[g->connectOrderIndex + 1];
            kind = 5;
        } else {
            g->hasReservation = 0;
            g->reservation = 0;
            GsQr_SendStateChanged(g->qr2Object);
            if (g->matchType == 0) g->matchState = 3;
            else if (g->matchType == 1) g->matchState = 4;
            else g->matchState = 10;
            g->connectOrderIndex = 0;
            if (g->matchType == 2 || g->numClients == g->maxPlayers) {
                if (g->matchType == 2) {
                    g->resultProfileId = g->memberProfileIds[g->numClients];
                } else {
                    g->resultProfileId = 0;
                    g->memberProfileIds[0] = g->profileId;
                }
                g->matchState = 0x10;
                g->syncAckMask = 0;
                for (i = 1; i <= g->numClients; i++) {
                    DwcMatch_SendSyncPacket(g->aids[i], 2);
                }
            } else {
                args[0] = 0;
                args[1] = g->numClients;
                args[2] = g->aids[g->numClients];
                if (g->matchType == 0) {
                    g->queryRetryMode = 2;
                    u64 t = OS_GetTick();
                    DwcMatchControl *c = g;
                    c->queryRetryTick = (u32)t;
                    c->queryRetryTickHi = (u32)(t >> 32);
                } else if (g->matchType == 1) {
                    DwcMatch_TryNextFriend(1, 0);
                }
            }
            if (g->matchType != 2) done = TRUE;
        }
        if (g->matchState != 0x10) {
            DwcMatchControl *c = g;
            u32 n = c->numClients;
            if (DwcMatch_SendCommand(8, c->memberProfileIds[n], c->memberIps[n], c->memberPorts[n], args, kind), DwcMatch_HandleResult() != 0) return;
            g->cmdRetryCount = 0;
        }
        break;
    case 1:
        g->matchState = 1;
        if (g->matchType == 3) g->resultProfileId = g->memberProfileIds[g->numClients];
        done = TRUE;
        break;
    case 2:
        g->matchState = 1;
        if (g->matchType == 0 || g->matchType == 1) {
            g->hasReservation = 1;
            g->reservation = g->profileId;
        }
        if (g->numClients > 1) {
            DwcMatchControl *c = g;
            u32 args2 = (u32)&c->memberProfileIds[c->numClients - 1];
            DwcMatch_SendCommand(9, c->memberProfileIds[0], c->memberIps[0], c->memberPorts[0], (void *)args2, 1);
            if (DwcMatch_HandleResult() != 0) return;
        }
        break;
    case 3:
        g->matchState = 1;
        g->resultProfileId = done;
        done = TRUE;
        break;
    case 4:
        if (g->matchType != 2) DwcFriend_SetOwnStatus(2, (char *)"", done);
        {
            DwcMatchControl *c = g;
            BOOL r;
            if (c->resultProfileId == 0) r = TRUE;
            else r = FALSE;
            g->matchCallback(0, 0, r, 0, DwcFriend_FindIndexByProfileId(), c->matchCallbackParam);
        }
        if (g->matchType == 0 || g->matchType == 1) {
            DwcMatch_Cleanup();
        } else {
            if (g->serverBrowser != 0) {
                GsSrvBrowser_Free(g->serverBrowser);
                g->serverBrowser = 0;
            }
            GsNatNeg_FreeAll();
            if (g->matchType == 2) {
                DwcMatch_UpdateServerStatus();
                if (DwcMatch_HandleGpResult() != 0) return;
                if (sDwcMatchServerLock[0] == 1) sDwcMatchServerLock[1] = 1;
                g->matchState = 10;
            } else {
                g->matchState = 1;
            }
            g->resultProfileId = 0;
        }
        g->unk_1a1 = 0;
        break;
    }
    if (done != 0 && g->matchType != 3) {
        GsSrvBrowser_Clear(g->serverBrowser);
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_AreAllBuddies(u32 *a, u32 n) {
    u32 i;
    if (g->unk_19e != 0 && g->matchState == 4) return TRUE;
    for (i = 0; i < n; a++, i++) {
        if (GsGp_IsBuddy(g->gpConnection, *a) == 0) return FALSE;
        if (g->unk_19e != 0 && g->matchState == 1) return TRUE;
    }
    return TRUE;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_FinishCancelled(void) {
    s32 v;
    DwcMatchControl *c;
    BOOL r6, r5;
    DwcFriend_SetOwnStatus(1, (char *)"", 0);
    if (DwcMatch_HandleGpResult() == 0) {
        DwcMatch_Cleanup();
        c = g;
        v = c->resultProfileId;
        if (v != 0) r5 = TRUE;
        else if (c->matchType == 2) r5 = TRUE;
        else r5 = FALSE;
        if (v == 0) r6 = TRUE;
        else r6 = FALSE;
        g->matchCallback(0, 1, r6, r5, DwcFriend_FindIndexByProfileId(v), c->matchCallbackParam);
        g->unk_1a1 = 0;
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_Restart(s32 a) {
    DwcMatchControl *c;
    BOOL r;
    if (a == 0) {
        DwcMatch_FinishCancelled();
    } else {
        DwcMatch_ResetState();
        c = g;
        if (c->matchType == 2 || c->matchType == 3) {
            if (c->resultProfileId == 0) r = TRUE;
            else r = FALSE;
            g->matchCallback(0, 1, r, 0, DwcFriend_FindIndexByProfileId(), c->matchCallbackParam);
        } else if (c->matchType == 0) {
            if (a == 1) {
                DwcMatch_StartServerQuery(0);
                if (DwcMatch_HandleSbResult() != 0) return;
            }
        } else if (c->matchType == 1) {
            if (a == 1) {
                DwcMatch_TryNextFriend(0, 0);
            }
        }
    }
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

void DwcMatch_AbortAndRestart(void) {
    if (g->matchType == 2) return;
    if (g->matchType == 3) return;
    DwcMatch_CloseAllConnections();
    DwcMatch_Restart(1);
}
#undef g
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_RestartAfterCancel(void) {
    u32 r = 0;
    G->hasReservation = r;
    G->reservation = r;
    G->closeState = r;
    if (G->targetProfileId != 0) {
        if (*(volatile u8 *)&G->matchType == 0) {
            G->matchState = 3;
            r = DwcMatch_StartServerQuery(r);
            if (DwcMatch_HandleSbResult(r)) return r;
        } else if (*(volatile u8 *)&G->matchType == 1) {
            G->matchState = 4;
            r = DwcMatch_SendReservation(G->targetProfileId, 0);
            if (DwcMatch_HandleResult(r)) return r;
        }
    } else {
        DwcMatch_Restart(1);
    }
    return 0;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_CloseProfileConnection(u32 a) {
    u32 *r;
    G->resultProfileId = a;
    r = DwcConn_FindSlotByProfileId(a, G->numClients + 1);
    if (r != NULL) {
        G->closeState = 2;
        GsTransport_CloseHard(*r);
        G->closeState = 0;
        return 1;
    }
    DwcMatch_RemoveProfile(a, G->numClients + 1);
    return 0;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

void DwcMatch_CloseAllConnections(void) {
    G->closeState = 2;
    GsTransport_CloseAll(G->transportSocketPtr->transportSocket);
    *(volatile u8 *)&G->closeState = 0;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_DropUnresponsiveClients(u32 mask) {
    u32 a[32];
    u32 b[32];
    DwcMatchControl *g;
    s32 i, j, n1, n2;
    u8 *q;
    u8 *r;
    n2 = 0;
    n1 = 0;
    i = 1;
    g = G;
    if (i <= g->numClients) {
        q = (u8 *)g + 1;
        r = (u8 *)g + 4;
        do {
            if (mask & (1 << q[0x2b8])) {
                b[n1] = *(u32 *)(r + 0xf4);
                n1++;
            } else {
                a[n2] = *(u32 *)(r + 0xf4);
                n2++;
            }
            q++;
            r += 4;
            i++;
        } while (i <= g->numClients);
    }
    for (j = 0; j < n1; j++) {
        if (DwcMatch_HandleResult(DwcMatch_SendCommand(0x10, b[j], 0, 0, a, n2))) return 0;
    }
    G->closeState = 2;
    for (j = 0; j < n2; j++) {
        u32 idx = DwcMatch_GetAidByProfileId(a[j], 0);
        if (idx != 0xff) {
            DwcConn_CloseConnection(idx);
        }
    }
    G->closeState = 0;
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

void DwcMatch_SendSyncPacket(u32 a, u32 b) {
    u8 buf[4];
    switch (b) {
    case 2: {
        u8 i;
        DwcMatchControl *g;
        g = G;
        if (a == g->aids[g->numClients]) {
            buf[0] = 1;
        } else {
            buf[0] = 0;
        }
        for (i = 1; i <= *(volatile u8 *)&g->numClients; i++) {
            if (a == g->aids[i]) {
                buf[1] = i;
                buf[2] = a;
                break;
            }
        }
        break;
    }
    case 3:
        buf[0] = G->syncWaitMs;
        buf[1] = G->syncWaitMs >> 8;
        break;
    }
    DwcNet_SendData(b, a, buf, 4);
    *(u64 *)&G->syncSendTime = DwcNet_GetTimeMs();
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_ProcessCloseSync(void) {
    DwcMatchControl *g = G;
    u64 d;
    s32 st = g->matchState;
    if (st == 9 || st == 16 || st == 17) {
        d = DwcNet_GetTimeMs() - *(u64 *)&g->syncSendTime;
    } else {
        return 1;
    }
    switch (g->matchState) {
    case 9:
        if (d > 0x1770) {
            DwcMatch_SendSyncPacket(g->aids[0], 3);
        }
        break;
    case 16:
        if (d > 0x1770) {
            g->syncRetryCount++;
            DwcMatchControl *h = G;
            if (h->syncRetryCount > 5) {
                if (*(volatile u8 *)&h->matchType == 0) goto yes;
                if (*(volatile u8 *)&h->matchType == 1) {
                yes:
                    DwcMatch_CloseAllConnections();
                    DwcMatch_Restart(1);
                } else {
                    if (!DwcMatch_DropUnresponsiveClients(h->syncAckMask)) return 0;
                    if (G->numClients != 0) {
                        G->syncRetryCount = 0;
                        *(u64 *)&G->syncSendTime = DwcNet_GetTimeMs();
                    } else {
                        if (!DwcMatch_CancelNewClient(G->resultProfileId)) return 0;
                    }
                }
            } else {
                s32 i;
                for (i = 1; i <= G->numClients; i++) {
                    if ((G->syncAckMask & (1 << G->aids[i])) == 0) {
                        DwcMatch_SendSyncPacket(G->aids[i], 2);
                    }
                }
            }
        }
        break;
    case 17:
        if (g->syncWaitMs < d) {
            DwcMatch_AdvanceConnect(4);
        }
        break;
    }
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_SendCancelSyncCommand(u32 a, u32 b) {
    u32 tmp;
    u32 flag;
    if (b == 0xd) {
        tmp = G->resultProfileId;
        flag = 1;
    } else {
        flag = 0;
    }
    if (DwcMatch_HandleResult(DwcMatch_SendCommand(b, a, 0, 0, &tmp, flag))) return 0;
    *(u64 *)&G->cancelSyncSendTime = DwcNet_GetTimeMs();
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_OnCancelSyncCommand(u32 a, u32 b, u32 c) {
    if (DwcCore_GetState(a) != 6) return 1;
    switch (b) {
    case 0xd:
        if (G->matchState != 8) {
            G->matchState = 8;
            DwcMatch_CloseProfileConnection(c);
        }
        if (!DwcMatch_SendCancelSyncCommand(a, 0xe)) return 0;
        break;
    case 0xe:
        if (G->matchState == 0xe) {
            u64 now = DwcNet_GetTimeMs();
            DwcMatchControl *g = G;
            u64 t0 = *(u64 *)&g->cancelSyncSendTime;
            u64 lim = t0 + 0x258;
            if (lim < now) {
                u64 x = ((now - t0) >> 1) + (u64)-300;
                if (g->cancelSyncWaitMs < x) {
                    g->cancelSyncWaitMs = (u16)x;
                }
            }
            {
                u32 idx = DwcMatch_GetAidByProfileId(a, 0);
                if (idx != 0xff) {
                    G->cancelSyncAckMask |= 1 << idx;
                }
            }
            {
                u32 m = DwcMatch_GetClientAidMask(1);
                if (G->cancelSyncAckMask == m) {
                    s32 i;
                    for (i = 1; i <= G->numClients; i++) {
                        if (!DwcMatch_SendCancelSyncCommand(G->memberProfileIds[i], 0xf)) return 0;
                    }
                    G->matchState = 0xf;
                }
            }
        } else {
            if (!DwcMatch_SendCancelSyncCommand(a, 0xf)) return 0;
        }
        break;
    case 0xf:
        if (G->matchState == 8) {
            DwcMatch_Restart(2);
        }
        break;
    }
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_ProcessCancelSync(void) {
    DwcMatchControl *g = G;
    u64 d;
    s32 st = g->matchState;
    if (st == 8 || st == 14 || st == 15) {
        d = DwcNet_GetTimeMs() - *(u64 *)&g->cancelSyncSendTime;
    } else {
        return 1;
    }
    switch (g->matchState) {
    case 8:
        if (d > 0x1770) {
            if (!DwcMatch_SendCancelSyncCommand(g->memberProfileIds[0], 0xe)) return 0;
        }
        break;
    case 14:
        if (d > 0x1770) {
            g->cancelSyncRetryCount++;
            if (G->cancelSyncRetryCount > 5) {
                if (!DwcMatch_DropUnresponsiveClients(G->cancelSyncAckMask)) return 0;
                if (G->numClients != 0) {
                    G->cancelSyncRetryCount = 0;
                    *(u64 *)&G->cancelSyncSendTime = DwcNet_GetTimeMs();
                } else {
                    DwcMatch_Restart(2);
                }
            } else {
                s32 i;
                for (i = 1; i <= G->numClients; i++) {
                    if ((G->cancelSyncAckMask & (1 << G->aids[i])) == 0) {
                        if (!DwcMatch_SendCancelSyncCommand(G->memberProfileIds[i], 0xd)) return 0;
                    }
                }
            }
        }
        break;
    case 15:
        if (g->cancelSyncWaitMs < d) {
            DwcMatch_Restart(2);
        }
        break;
    }
    return 1;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

void DwcMatch_ClearUserKeys(void) {
    s32 i = 0;
    u32 *p;
    p = (u32 *)sDwcMatchUserKeys;
    for (; i < 0x9a; i++) {
        if (p[1] != 0) {
            DwcNet_Free(4, p[1], 0);
        }
        p += 3;
    }
    {
        volatile u32 z = 0;
        MIi_CpuClear32(z, sDwcMatchUserKeys, 0x738);
    }
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_AllocAid(void) {
    s32 j;
    DwcMatchControl *g;
    u8 i = 0;
    g = G;
    for (; i < 0x20; i++) {
        for (j = 0; j <= *(volatile u8 *)&g->numPlayers; j++) {
            if (i == g->aids[j]) break;
        }
        if (j > *(volatile u8 *)&g->numPlayers) break;
    }
    return i;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_GetServerProfileId(char *s) {
    if (GsServer_GetIntValue(s, (char *)"numplayers", -1) == -1) return 0;
    if (GsServer_GetIntValue(s, (char *)"maxplayers", -1) == -1) return 0;
    if (GsServer_GetIntValue(s, (char *)"dwc_mtype", -1) == -1) return 0;
    if (GsServer_GetIntValue(s, (char *)"dwc_mresv", -1) == -1 && GsServer_GetIntValue(s, (char *)"dwc_mresv", 0) == 0) return 0;
    if (GsServer_GetIntValue(s, (char *)"dwc_mver", -1) == -1) return 0;
    return GsServer_GetIntValue(s, (char *)"dwc_pid", 0);
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_GetAidByProfileId(u32 v, s32 k) {
    DwcMatchControl *g;
    s32 i;
    if (k == 0) {
        k = 1;
    } else {
        k = 0;
    }
    for (; k <= *(volatile u8 *)&G->numClients; k++) {
        g = G;
        if (v == g->memberProfileIds[k]) {
            return g->aids[k];
        }
    }
    return 0xff;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_GetClientAidMask(u32 a) {
    u32 r = 0;
    if (a != 0) {
        return G->validAidMask & ~1;
    }
    {
        u32 i = 1;
        u32 n = G->numClients;
        for (; (s32)i <= (s32)n; i++) {
            r |= 1 << G->aids[i];
        }
    }
    return r;
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

void DwcMatch_ResetSyncTimer(u32 a) {
    DwcMatchSyncOption *h = sDwcMatchSyncOption;
    if (h != NULL && h->isEnabled != 0) {
        h->answeredAidMask = 0;
        sDwcMatchSyncOption->acceptedAidMask = 0;
        sDwcMatchSyncOption->retryCount = 0;
        sDwcMatchSyncOption->lastSendTime = DwcNet_GetTimeMs();
        if (a == 0) {
            sDwcMatchSyncOption->startTime = DwcNet_GetTimeMs();
        }
    }
}
#undef G
}
}

namespace F02272734 {
extern "C" {


void DwcMatch_ProcessServerSync(void)
{
    DwcMatchSyncOption *s = sDwcMatchSyncOption;
    DwcMatchControl *cx;
    s32 st;
    s32 j;
    if (s == 0) {
        goto end;
    }
    if (s->isEnabled == 0) {
        goto end;
    }
    cx = sDwcMatch;
    if (cx->matchType == 2) {
        goto end;
    }
    if (*(volatile u8 *)&cx->matchType == 3) {
        goto end;
    }
    st = cx->matchState;
    if (st == 0x13) {
        s32 t = DwcMatch_GetClientAidMask(0);
        u32 five;
        s = sDwcMatchSyncOption;
        if (s->answeredAidMask == t) {
            if (s->acceptedAidMask == t) {
                sDwcMatch->maxPlayers = sDwcMatch->numClients;
                sDwcMatch->connectOrderIndex = sDwcMatch->numClients - 1;
                DwcMatch_AdvanceConnect(0);
                goto end;
            }
            s->lastSendTime = DwcNet_GetTimeMs();
            s->answeredAidMask = 0;
            if (sDwcMatch->matchType == 0) {
                u64 t2;
                DwcMatchControl *cw;
                sDwcMatch->matchState = 3;
                sDwcMatch->queryRetryMode = 2;
                t2 = OS_GetTick();
                cw = sDwcMatch;
                cw->queryRetryTick = (u32)t2;
                cw->queryRetryTickHi = (u32)(t2 >> 32);
                goto end;
            }
            sDwcMatch->matchState = 4;
            DwcMatch_TryNextFriend(1, 0);
            goto end;
        }
        five = s->retryCount;
        if ((u64)(DwcNet_GetTimeMs() - s->lastSendTime) < (u64)(s64)(s32)(five * 0x1770)) {
            goto end;
        }
        if (five > 5) {
            DwcMatch_ResetSyncTimer(1);
            DwcMatch_CloseAllConnections();
            DwcMatch_Restart(1);
            goto end;
        }
        {
            for (j = 1; j <= sDwcMatch->numClients; j++) {
                u32 bits = sDwcMatchSyncOption->answeredAidMask;
                DwcMatchControl *c2;
                if ((bits & (1 << (((u8 *)sDwcMatch) + j)[0x2b8])) == 0) {
                    c2 = sDwcMatch;
                    if (DwcMatch_HandleResult(DwcMatch_SendCommand(0x11, c2->memberProfileIds[j], c2->memberIps[j], c2->memberPorts[j], 0, 0)) != 0) {
                        goto end;
                    }
                }
            }
            sDwcMatchSyncOption->retryCount++;
        }
    } else {
        if ((u32)(st - 3) > 1) {
            goto end;
        }
        if ((s32)cx->numClients < (s32)s->minPlayers - 1) {
            goto end;
        }
        if (s->retryCount == 0) {
            if (DwcNet_GetTimeMs() - s->startTime >= (u64)s->timeoutMs) {
                goto proceed;
            }
        }
        if (s->retryCount == 0) {
            goto end;
        }
        s = sDwcMatchSyncOption;
        if (DwcNet_GetTimeMs() - s->lastSendTime < (u64)(s->timeoutMs >> 2)) {
            goto end;
        }
    proceed:
        if (sDwcMatch->serverProfileId != 0) {
            if (DwcMatch_HandleResult(DwcMatch_SendReservationCancel(sDwcMatch->serverProfileId)) != 0) {
                goto end;
            }
        }
        sDwcMatch->matchState = 0x13;
        {
            for (j = 1; j <= sDwcMatch->numClients; j++) {
                DwcMatchControl *c2 = sDwcMatch;
                if (DwcMatch_HandleResult(DwcMatch_SendCommand(0x11, c2->memberProfileIds[j], c2->memberIps[j], c2->memberPorts[j], 0, 0)) != 0) {
                    goto end;
                }
            }
        }
        s = sDwcMatchSyncOption;
        s->lastSendTime = DwcNet_GetTimeMs();
        s->retryCount = 1;
    }
end:;
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_HandleGpResult(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
        t = 8;
        c = ~1;
        break;
    case 3:
        t = 6;
        c = ~9;
        break;
    case 4:
        t = 6;
        c = ~0x13;
        break;
    }
    DwcMatch_Fail(t, c - 0x13c68);
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_HandleSbResult(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 6;
        c = ~0x31;
        break;
    case 2:
        t = 6;
        c = ~0x1d;
        break;
    case 3:
        t = 6;
        c = ~0x13;
        break;
    case 4:
        t = 6;
        c = ~0x27;
        break;
    case 5:
        t = 8;
        c = -1;
        break;
    case 6:
        t = 8;
        c = ~1;
        break;
    }
    DwcMatch_Fail(t, c - 0x14c08);
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_HandleQr2Result(s32 a)
{
    s32 c, t;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 6;
        c = ~0x31;
        break;
    case 2:
        t = 6;
        c = ~0x3b;
        break;
    case 3:
        t = 6;
        c = ~0x1d;
        break;
    case 4:
        t = 6;
        c = ~0x4f;
        break;
    case 5:
        t = 6;
        c = ~0x13;
        break;
    }
    switch (DwcCore_GetState()) {
    case 2:
        DwcLogin_Fail(t, c - 0xfa00);
        break;
    case 4:
        DwcFriend_Fail(t, c - 0x12110);
        break;
    case 5:
        DwcMatch_Fail(t, c - 0x14820);
        break;
    default:
        DwcCore_SetError(t, c - 0x16f30);
        break;
    }
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_HandleNnStartResult(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
        t = 6;
        c = ~0x31;
        break;
    case 3:
        t = 6;
        c = ~0x1d;
        break;
    }
    DwcMatch_Fail(t, c - 0x14ff0);
    return a;
}

}
}

namespace F02272734 {
extern "C" {

enum Unk_ov065_02272dd4_E { Unk_ov065_02272dd4_E_6 = 6 };
s32 DwcMatch_HandleNnResult(s32 a)
{
    Unk_ov065_02272dd4_E t;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        t = Unk_ov065_02272dd4_E_6;
        break;
    }
    if (t != 0) {
        DwcMatch_Fail(t, -0x14ff9);
    }
    return a;
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_HandleGt2Result(s32 a)
{
    s32 t, c;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        t = 8;
        c = -1;
        break;
    case 2:
    case 5:
        t = 0;
        c = 0;
        a = 0;
        break;
    case 3:
        t = 6;
        c = ~9;
        break;
    case 4:
        t = 6;
        c = ~0x1d;
        break;
    case 6:
        t = 6;
        c = ~0x45;
        break;
    case 7:
        t = 6;
        c = ~0x4f;
        break;
    }
    if (t != 0) {
        DwcMatch_Fail(t, c - 0x153d8);
    }
    return a;
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnServerBrowserEvent(u32 list, s32 mode, u32 c)
{
    switch (mode) {
    case 0:
        DwcMatch_Nop(c);
        break;
    case 4: {
        s32 i = 0;
        if (GsSrvBrowser_GetServerCount(list) > 0) {
            do {
                u32 e = GsSrvBrowser_GetServer(list, i);
                if (DwcMatch_GetServerProfileId(e) == 0) {
                    GsSrvBrowser_RemoveServer(list, e);
                    i--;
                }
                i++;
            } while (i < GsSrvBrowser_GetServerCount(list));
        }
        switch (sDwcMatch->matchState) {
        case 2: {
            i = 0;
            if (GsSrvBrowser_GetServerCount(list) > 0) {
                do {
                    u32 e = GsSrvBrowser_GetServer(list, i);
                    DwcMatchControl *cx = sDwcMatch;
                    if (cx->publicIp != 0) {
                        if (cx->publicIp == GsServer_GetPublicIp(e)) {
                            if (cx->publicPort != 0) {
                                if (sDwcMatch->publicPort == GsServer_GetPublicPort(e)) {
                                    break;
                                }
                            }
                        }
                    }
                    i++;
                } while (i < GsSrvBrowser_GetServerCount(list));
            }
            if (i < GsSrvBrowser_GetServerCount(list)) {
                sDwcMatch->matchState = 3;
                sDwcMatch->serverProfileId = 0;
                if (DwcMatch_HandleSbResult(DwcMatch_StartServerQuery(sDwcMatch->serverProfileId)) != 0) {
                    return;
                }
            } else {
                u64 t;
                DwcMatchControl *cw;
                sDwcMatch->queryRetryMode = 2;
                t = OS_GetTick();
                cw = sDwcMatch;
                cw->queryRetryTick = (u32)t;
                cw->queryRetryTickHi = (u32)(t >> 32);
            }
            break;
        }
        case 3:
            DwcMatch_EvaluateServers(1);
            if (GsSrvBrowser_GetServerCount(list) != 0) {
                if (DwcMatch_HandleResult(DwcMatch_SendReservation(0, 0)) == 0) {
                    sDwcMatch->matchState = 4;
                    sDwcMatch->queryRetryMode = 0;
                }
            } else {
                u64 t;
                DwcMatchControl *cw;
                sDwcMatch->queryRetryMode = 2;
                t = OS_GetTick();
                cw = sDwcMatch;
                cw->queryRetryTick = (u32)t;
                cw->queryRetryTickHi = (u32)(t >> 32);
            }
            break;
        case 5: {
            if (GsSrvBrowser_GetServerCount(list) != 0) {
                do {
                    u32 e = GsSrvBrowser_GetServer(list, 0);
                    if (sDwcMatch->targetServerIp == GsServer_GetPublicIp(e)) {
                        if (sDwcMatch->targetServerPort == GsServer_GetPublicPort(e)) {
                            break;
                        }
                    }
                    GsSrvBrowser_RemoveServer(list, e);
                } while (GsSrvBrowser_GetServerCount(list) != 0);
            }
            if (GsSrvBrowser_GetServerCount(list) != 0) {
                u32 e = GsSrvBrowser_GetServer(list, 0);
                u32 h = GsServer_GetIntValue(e, (char *)"dwc_pid", 0);
                DwcMatchControl *cx = sDwcMatch;
                if (cx->matchType == 1 && h == cx->memberProfileIds[0]) {
                    if (DwcMatch_EvaluateServers(0) != 0) {
                        if (sDwcMatch->numClients != 0) {
                            if (DwcMatch_HandleResult(DwcMatch_SendCloseOrder(sDwcMatch->numClients)) != 0) {
                                return;
                            }
                        }
                    } else {
                        if (DwcMatch_HandleResult(DwcMatch_SendReservationCancel(sDwcMatch->memberProfileIds[0])) != 0) {
                            return;
                        }
                        sDwcMatch->matchState = 4;
                        if (DwcMatch_HandleResult(DwcMatch_TryNextFriend(0, 0)) != 0) {
                            return;
                        }
                        return;
                    }
                }
                sDwcMatch->matchState = 6;
                if (DwcMatch_HandleNnStartResult(DwcMatch_StartNatNegotiation(0, 0, GsSrvBrowser_GetServer(list, 0))) != 0) {
                    return;
                }
            } else {
                u64 t;
                DwcMatchControl *cw;
                sDwcMatch->queryRetryMode = 2;
                t = OS_GetTick();
                cw = sDwcMatch;
                cw->queryRetryTick = (u32)t;
                cw->queryRetryTickHi = (u32)(t >> 32);
            }
            break;
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

namespace F02272734 {
extern "C" {


void DwcMatch_Nop(u32 a)
{
}

}
}

namespace F02272734 {
extern "C" {


BOOL DwcMatch_EvaluateServers(u32 a)
{
    BOOL flag2 = FALSE;
    s32 i = 0;
    if (GsSrvBrowser_GetServerCount(sDwcMatch->serverBrowser) > 0) {
        do {
            u32 e = GsSrvBrowser_GetServer(sDwcMatch->serverBrowser, i);
            BOOL found;
            if (sDwcMatch->matchType == 0) {
                u32 h = GsServer_GetIntValue(e, (char *)"dwc_pid", 0);
                s32 j;
                found = FALSE;
                for (j = 1; j <= sDwcMatch->numClients; j++) {
                    if (h == sDwcMatch->memberProfileIds[j]) {
                        GsSrvBrowser_RemoveServer(sDwcMatch->serverBrowser, e);
                        i--;
                        found = TRUE;
                        break;
                    }
                }
                if (found) {
                    goto next;
                }
            }
            if (sDwcMatch->evalCallback != 0) {
                s32 v = sDwcMatch->evalCallback(i, sDwcMatch->evalCallbackParam);
                if (v > 0) {
                    if (v > 0x7fffff) {
                        v = 0x7fffff;
                    }
                    GsServer_SetIntValue(e, (char *)"dwc_eval", (v << 8) | DwcNet_Rand32(0x100));
                } else {
                    GsSrvBrowser_RemoveServer(sDwcMatch->serverBrowser, e);
                    i--;
                    flag2 = TRUE;
                }
            } else {
                GsServer_SetIntValue(e, (char *)"dwc_eval", DwcNet_Rand32(0x80));
            }
        next:
            i++;
        } while (i < GsSrvBrowser_GetServerCount(sDwcMatch->serverBrowser));
    }
    if (a != 0) {
        if (GsSrvBrowser_GetServerCount(sDwcMatch->serverBrowser) != 0) {
            GsSrvBrowser_Sort(sDwcMatch->serverBrowser, 0, (char *)"dwc_eval", 0);
        }
    }
    if (flag2 != 0) {
        if (GsSrvBrowser_GetServerCount(sDwcMatch->serverBrowser) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2ServerKey(s32 a, u32 b)
{
    switch (a) {
    case 8:
        GsQr_BufAppendInt(b, sDwcMatch->numPlayers);
        break;
    case 10:
        GsQr_BufAppendInt(b, sDwcMatch->maxPlayers);
        break;
    case 0x32:
        GsQr_BufAppendInt(b, sDwcMatch->profileId);
        break;
    case 0x33:
        GsQr_BufAppendInt(b, sDwcMatch->matchType);
        break;
    case 0x34:
        GsQr_BufAppendInt(b, sDwcMatch->reservation);
        break;
    case 0x35:
        GsQr_BufAppendInt(b, 3);
        break;
    case 0x36:
        GsQr_BufAppendInt(b, 1);
        break;
    default: {
        s32 i = a - 0x64;
        if (sDwcMatchUserKeys[i].keyId != 0) {
            if (sDwcMatchUserKeys[i].isString != 0) {
                GsQr_BufAppendString(b, sDwcMatchUserKeys[i].value);
            } else {
                GsQr_BufAppendInt(b, *sDwcMatchUserKeys[i].value);
            }
        }
        break;
    }
    }
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2PlayerKey(void)
{
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2TeamKey(void)
{
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2KeyList(s32 a, u32 b)
{
    switch (a) {
    case 0: {
        s32 i;
        DwcMatchUserKey *e;
        GsQr_KeyBufferAdd(b, 8);
        GsQr_KeyBufferAdd(b, 10);
        GsQr_KeyBufferAdd(b, 0x32);
        GsQr_KeyBufferAdd(b, 0x33);
        GsQr_KeyBufferAdd(b, 0x34);
        GsQr_KeyBufferAdd(b, 0x35);
        GsQr_KeyBufferAdd(b, 0x36);
        for (i = 0, e = sDwcMatchUserKeys; i < 0x9a; e++, i++) {
            if (e->keyId != 0) {
                GsQr_KeyBufferAdd(b, e->keyId);
            }
        }
        break;
    }
    case 1:
        break;
    case 2:
        break;
    }
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_OnQr2Count(void)
{
    return 0;
}

}
}

namespace F02272734 {
extern "C" {


s32 DwcMatch_OnQr2Error(s32 a)
{
    return DwcMatch_HandleQr2Result(a);
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2PublicAddress(u32 a, u32 b)
{
    sDwcMatch->publicIp = a;
    sDwcMatch->publicPort = b;
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2NnRequest(u32 a)
{
    if (sDwcMatch->matchState == 1) {
        sDwcMatch->matchState = 6;
    } else if (sDwcMatch->matchState != 6 && sDwcMatch->matchState != 0xb) {
        return;
    }
    if (sDwcMatch->nnLastCookie == a) {
        sDwcMatch->nnRetryCount++;
    } else {
        sDwcMatch->nnRetryCount = 0;
        sDwcMatch->nnLastCookie = a;
    }
    Unk_ov065_02272734_Z z = Unk_ov065_02272734_Z_0;
    {
        DwcMatchControl *c = sDwcMatch;
        c->nnRetryTime = z;
        c->nnRetryTimeHi = z;
    }
    if (DwcMatch_HandleNnStartResult(DwcMatch_StartNatNegotiation(1, a, z)) == 0) {
        sDwcMatch->cmdType = 0xff;
    }
}

}
}

namespace F02271da0 {
extern "C" {


void DwcMatch_OnQr2ClientMessage(u8 *buf, u32 n) {
    u32 off = 0;
    DwcMatchCommandHeader hdr;
    u8 body[0x80];
    if (DwcCore_GetState() == 5 ||
        (DwcCore_GetState() == 6 &&
         (sDwcMatch->matchType == 2 || sDwcMatch->matchType == 3))) {
        while (off + 0x14 <= n) {
            MI_CpuCopy8(buf, &hdr, 0x14);
            if (strncmp(&hdr, (char *)"SBCM", 4) != 0) {
                break;
            }
            if (hdr.version != 3) {
                break;
            }
            MI_CpuCopy8(buf + 0x14, body, hdr.argsSize);
            if (DwcMatch_HandleCommand(hdr.command, hdr.senderProfileId, hdr.senderIp, hdr.senderPort, body, hdr.argsSize >> 2) == 0) {
                break;
            }
            off += hdr.argsSize + 0x14;
        }
    }
}

}
}

namespace F02271da0 {
extern "C" {


void DwcMatch_OnNnProgress() {
}

}
}

namespace F02271da0 {
extern "C" {


void DwcMatch_OnNnComplete(s32 a, s32 b, Unk_ov065_022749f8_Sa *c, DwcNnRequest *d) {
    DwcMatchControl *g;
    if (sDwcMatch->matchState != 6 && sDwcMatch->matchState != 0xb) {
        return;
    }
    if (d == NULL) {
        return;
    }
    if (a == 0) {
        s32 idx;
        char buf[12];
        d->cookie = 0;
        sDwcMatch->numPlayers++;
        idx = sDwcMatch->numPlayers;
        if (d->clientIndex != 0) {
            sDwcMatch->memberConnectIps[idx] = c->addr;
            sDwcMatch->memberConnectPorts[idx] = ((c->port >> 8) & 0xff) | ((c->port << 8) & 0xff00);
            sDwcMatch->nnRetryCount = 0;
            sDwcMatch->nnLastCookie = 0;
            *(u64 *)&sDwcMatch->nnRetryTime = 0;
            if (sDwcMatch->matchState == 0xb) {
                sDwcMatch->matchState = 0xc;
            } else {
                sDwcMatch->matchState = 7;
            }
            sDwcMatch->connectRetryCount = 0;
            OS_SNPrintf(buf, 12, (char *)"%u", sDwcMatch->profileId);
            s32 r = GsTransport_Connect(sDwcMatch->transportSocketPtr->transportSocket, 0,
                                        GsTransport_AddressToString(sDwcMatch->memberConnectIps[idx], sDwcMatch->memberConnectPorts[idx], 0),
                                        buf, -1, 0x1388, sDwcMatch->transportCallbacks, 0);
            if (r == 1) {
                DwcMatch_HandleGt2Result();
                return;
            }
            if (r == 0) {
                return;
            }
            if (DwcMatch_CancelNewClient(sDwcMatch->memberProfileIds[idx]) != 0) {
                return;
            }
            return;
        }
        if (c != NULL) {
            s32 i = idx - 1;
            sDwcMatch->memberConnectIps[i] = c->addr;
            sDwcMatch->memberConnectPorts[i] = ((c->port >> 8) & 0xff) | ((c->port << 8) & 0xff00);
        }
        g = sDwcMatch;
        {
            u64 t = DwcNet_GetTimeMs();
            *(u64 *)&g->connectWaitTime = t;
        }
        g->matchState = 7;
        return;
    }
    if (d->cookie == 0) {
        return;
    }
    {
        s32 r4 = DwcMatch_HandleNnResult(a, d->cookie);
        if (r4 != 2 && r4 != 1) {
            return;
        }
        if (d->clientIndex == 0) {
            if (r4 == 1 || (r4 == 2 && d->retryCount >= 1)) {
                d->cookie = 0;
                if (DwcMatch_CountNnRetry(0) == 0) {
                    return;
                }
                if (DwcMatch_RestartAfterNnFailure(sDwcMatch->memberProfileIds[sDwcMatch->numClients]) != 0) {
                    return;
                }
                return;
            }
            d->retryCount++;
            DwcMatch_SendNnRequest(d);
            if (DwcMatch_HandleNnStartResult() != 0) {
                return;
            }
            return;
        }
        g = sDwcMatch;
        {
            u64 t = DwcNet_GetTimeMs();
            *(u64 *)&g->nnRetryTime = t;
        }
        if (r4 == 1 || (r4 == 2 && g->nnRetryCount >= 1)) {
            d->cookie = 0;
            if (sDwcMatch->matchType == 3 || sDwcMatch->matchType == 2) {
                if (DwcMatch_CountNnRetry(1) == 0) {
                    return;
                }
            } else {
                if (DwcMatch_CountNnRetry(0) == 0) {
                    return;
                }
            }
            sDwcMatch->nnRetryCount = 0;
            sDwcMatch->nnLastCookie = 0;
            *(u64 *)&sDwcMatch->nnRetryTime = 0;
            if (DwcMatch_CancelNewClient(sDwcMatch->memberProfileIds[sDwcMatch->numClients + 1]) != 0) {
                return;
            }
        }
    }
}

}
}

namespace F02271da0 {
extern "C" {


s32 DwcMatch_CountNnRetry(s32 a) {
    if (a != 0) {
        return 1;
    }
    if (sDwcMatch->matchType != 3) {
        sDwcMatch->nnFailCount++;
    }
    if (sDwcMatch->matchType == 3 || sDwcMatch->nnFailCount >= 5) {
        DwcMatch_Fail(6, -0x15194);
        return 0;
    }
    return 1;
}

}
}

namespace F02271da0 {
extern "C" {


s32 DwcFriend_GetStatusString(void *a, char *b) {
    return DwcFriend_GetStatus(a, NULL, NULL, b);
}

}
}
