// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

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

struct Unk_ov065_0229080c_Big {
    u8 unk_00[0x214];
    s32 unk_214;
    u8 unk_218[0x100];
    u8 unk_318[0x100];
};

struct Unk_ov065_0229080c_Sub {
    Unk_ov065_0229080c_Big *unk_00;
};

struct Unk_ov065_0229080c_Ent {
    u8 unk_00[0xc];
};

struct Unk_ov065_0229080c {
    s32 unk_00;
    Unk_ov065_0229080c_Sub *unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
    Unk_ov065_0229080c_Ent *unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    void (*unk_2c)(s32, u32, s32);
    s32 unk_30;
    void (*unk_34)(s32, s32, char *, s32);
    s32 unk_38;
    void (*unk_3c)(void);
    void (*unk_40)(void);
    void (*unk_44)(s32, s32);
    s32 unk_48;
    u32 unk_4c;
    u32 unk_50;
};

struct Unk_ov065_0227194c_Out {
    u32 profileId;
    u32 status;
    char statusString[0x100];
    char locationString[0x108];
};

struct Unk_ov065_02272428_Sub {
    u8 clientIndex;
    u8 retryCount;
    u16 peerPort;
    u32 peerIp;
    s32 cookie;
};

struct Unk_ov065_02272428_Rec {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov065_02290814_Sub {
    u32 transportSocket;
};

struct Unk_ov065_02290814 {
    u8 unk_00[4];
    Unk_ov065_02290814_Sub *unk_04;
    s32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e[6];
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16[0xde];
    u32 unk_f4[32];
    u8 unk_174;
    u8 unk_175;
    u8 unk_176[2];
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c[0xc];
    s32 unk_198;
    u8 unk_19c[0x4c];
    u32 unk_1e8;
    u8 unk_1ec[0xc];
    u32 unk_1f8[32];
    u16 unk_278[32];
};

struct Unk_ov065_022726a0_Hdr {
    u8 magic[4];
    u32 version;
    u8 command;
    u8 argsSize;
    u16 senderPort;
    u32 senderIp;
    u32 senderProfileId;
};

extern "C" {

extern Unk_ov065_0229080c *sDwcFriendControl;
extern Unk_ov065_02290814 *sDwcMatch;

u64 OS_GetTick();
s32 func_020ffc60(s32, void *);
s32 func_020ffdd8(void *);
s32 strcmp(const char *, const char *);
s32 STD_GetStringLength(const char *);
void func_02127838(char *, const char *);
s32 func_0212b854(const char *, char **, s32);
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
s32 DwcFriend_GetBuddyStatus(void *, Unk_ov065_0227194c_Out *);
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
s32 GsGp_SetStatus(Unk_ov065_0229080c_Sub *, s32, char *, char *);
s32 GsGp_DeleteBuddy(void *, s32);
s32 GsGp_IsBuddy(void *, s32);
s32 GsGp_GetBuddyStatus(void *, s32, Unk_ov065_0227194c_Out *);
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
void DwcMatch_OnNnComplete(s32 a, s32 b, Unk_ov065_02272428_Sub *c, Unk_ov065_02272428_Sub *d);
void DwcMatch_OnNnProgress();
void DwcMatch_OnQr2ClientMessage(u8 *buf, u32 n);
}

}
}

namespace F02272734 {
extern "C" {


// ov065_032: DWC connection state machine / error-code helpers (0x02272734..0x02272fe0)

struct Unk_ov065_02290814_Ctx {
    u8 unk_00[0x0d];
    u8 unk_0d;
    u8 unk_0e[6];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17[3];
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24[8];
    u8 unk_44[0x60];
    u16 unk_a4[8];
    u8 unk_b4[0x30];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[0x20];
    u8 unk_174;
    u8 unk_175[3];
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u8 unk_184[0x14];
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d[0x0d];
    u16 unk_1aa;
    u32 unk_1ac;
    u8 unk_1b0[0x38];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0xc8];
    u8 unk_2b8[8];
    u8 unk_2c0[0xf4];
    u8 unk_3b4;
    u8 unk_3b5[0xa7];
    s32 (*unk_45c)(s32, u32);
    u32 unk_460;
};

struct Unk_ov065_02290818_Sm {
    u8 isEnabled;
    u8 minPlayers;
    u8 retryCount;
    u8 unk_03;
    u32 unk_04;
    u32 answeredAidMask;
    u32 acceptedAidMask;
    u64 startTime;
    u64 lastSendTime;
};

struct Unk_ov065_02290840_Ent {
    u8 keyId;
    u8 isString;
    u8 unk_02[6];
    s32 *value;
};

extern "C" {
extern Unk_ov065_02290814_Ctx *sDwcMatch;
extern Unk_ov065_02290818_Sm *sDwcMatchSyncOption;
extern Unk_ov065_02290840_Ent sDwcMatchUserKeys[];

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

struct Unk_ov065_02273230_H {
    u8 isEnabled;
    u8 minPlayers;
    u8 retryCount;
    u8 unk_03;
    u32 timeoutMs;
    u32 answeredAidMask;
    u32 acceptedAidMask;
    u64 startTime;
    u64 lastSendTime;
};

struct Unk_ov065_02273274_G {
    u32 unk_00;
    u32 *transportSocketPtr;
    u8 unk_08[5];
    u8 numClients;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10[4];
    u8 numPlayers;
    u8 matchType;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u8 unk_24[0xd0];
    u32 memberProfileIds[0x29];
    s32 state;
    u8 unk_19c[4];
    u8 closeState;
    u8 unk_1a1[2];
    u8 syncRetryCount;
    u8 cancelSyncRetryCount;
    u8 unk_1a5;
    u16 syncWaitMs;
    u16 cancelSyncWaitMs;
    u8 unk_1aa[0x1e];
    u32 syncAckMask;
    u32 cancelSyncAckMask;
    u64 syncSendTime;
    u64 cancelSyncSendTime;
    u8 unk_1e0[0x10];
    u32 targetProfileId;
    u32 resultProfileId;
    u8 unk_1f8[0xc0];
    u8 aids[0x20];
    u32 validAidMask;
};

extern Unk_ov065_02273230_H *sDwcMatchSyncOption;
extern Unk_ov065_02273274_G *sDwcMatch;
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

typedef s32 (*Unk_ov065_02273b60_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02273b60_Ctx {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e[2];
    u32 unk_10;
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u32 unk_24[32];
    u16 unk_a4[32];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[32];
    u8 unk_174[0x20];
    u32 unk_194;
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d;
    u8 unk_19e;
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[6];
    u16 unk_1a8;
    u8 unk_1aa[6];
    u32 unk_1b0;
    u8 unk_1b4[8];
    u32 unk_1bc;
    u64 unk_1c0;
    u32 unk_1c8;
    u32 unk_1cc;
    u8 unk_1d0[0x18];
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x2c];
    u8 *unk_2e4;
    u8 unk_2e8[4];
    u8 unk_2ec[0x40];
    s32 unk_32c;
    u32 unk_330;
    u8 unk_334[0x80];
    u8 unk_3b4;
    u8 unk_3b5;
    u8 unk_3b6[0x96];
    Unk_ov065_02273b60_Fn unk_44c;
    u32 unk_450;
};

struct Unk_ov065_022743e0_Rec {
    u32 unk_00;
    u32 unk_04;
};

extern Unk_ov065_02273b60_Ctx *sDwcMatch;
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
s32 func_020ffc60(s32, u8 *);
s32 func_020ffdd8(u8 *);
s32 func_0212b854(void *, s32, s32);

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

struct Unk_ov065_022745bc_Ctx {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[5];
    u8 unk_0d;
    u8 unk_0e[2];
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[2];
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24[8];
    u8 unk_44[0x60];
    u16 unk_a4[8];
    u8 unk_b4[0x30];
    u32 unk_e4;
    u32 unk_e8;
    u64 unk_ec;
    u32 unk_f4[0x20];
    u8 unk_174[0x10];
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c;
    u8 unk_18d[0xb];
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d[2];
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[8];
    u16 unk_1aa;
    u32 unk_1ac;
    u32 unk_1b0;
    u64 unk_1b4;
    u32 unk_1bc;
    u64 unk_1c0;
    u8 unk_1c8[0x20];
    s32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x78];
    u32 unk_330;
    u32 unk_334;
    u32 unk_338[0x1f];
    u8 unk_3b4;
    u8 unk_3b5[0x9f];
    s32 (*unk_454)(s32, u32);
    u32 unk_458;
};

struct Unk_ov065_022749f8_H {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_022749f8_Sa {
    u16 unk_0;
    u16 unk_2;
    u32 unk_4;
};

extern Unk_ov065_022745bc_Ctx *sDwcMatch;
extern Unk_ov065_022749f8_H *sDwcMatchSyncOption;
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

struct Unk_ov065_02290814_Sub {
    u32 transportSocket;
};

struct Unk_ov065_02275474_Arg {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov065_02290814 {
    u32 unk_00;
    Unk_ov065_02290814_Sub *unk_04;
    u8 unk_08[4];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f[5];
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 unk_24[0x80];
    u8 unk_a4[0x40];
    u32 unk_e4;
    u32 unk_e8;
    u8 unk_ec[8];
    u32 unk_f4[32];
    u8 unk_174;
    u8 unk_175;
    u16 unk_176;
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u32 unk_184;
    u32 unk_188;
    Unk_ov065_02275474_Arg unk_18c;
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d;
    u8 unk_19e;
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2;
    u8 unk_1a3;
    u8 unk_1a4;
    u8 unk_1a5;
    u16 unk_1a6;
    u16 unk_1a8;
    u16 unk_1aa;
    u32 unk_1ac;
    u32 unk_1b0;
    u32 unk_1b4;
    u32 unk_1b8;
    u32 unk_1bc;
    u32 unk_1c0;
    u32 unk_1c4;
    u32 unk_1c8;
    u32 unk_1cc;
    u32 unk_1d0;
    u32 unk_1d4;
    u32 unk_1d8;
    u32 unk_1dc;
    u32 unk_1e0;
    u32 unk_1e4;
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u32 unk_1f8[32];
    u16 unk_278[32];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
    u8 unk_2dc[0x54];
    u8 unk_330[0x84];
    u8 unk_3b4;
    u8 unk_3b5;
    u16 unk_3b6;
    u32 unk_3b8;
    u32 unk_3bc[32];
    u32 unk_43c;
    u32 unk_440;
    u32 unk_444;
    u32 unk_448;
    u32 unk_44c;
    u32 unk_450;
    u32 unk_454;
    u32 unk_458;
};

struct Unk_ov065_02275298_Hdr {
    char unk_00[4];
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14[32];
};

struct Unk_ov065_02290840_Ent {
    u8 keyId;
    u8 unk_01[11];
};

extern Unk_ov065_02290814 *sDwcMatch;
extern u32 sDwcMatchUserFilter;
extern Unk_ov065_02290840_Ent sDwcMatchUserKeys[];

extern "C" {

char *func_0212a120(const char *, s32);
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
s32 DwcMatch_SendNnRequest(Unk_ov065_02275474_Arg *p);
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
s32 DwcMatch_SendNnRequest(Unk_ov065_02275474_Arg *p);
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

typedef s32 (*Unk_ov065_0227627c_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290814_Sub {
    u32 transportSocket;
};

struct Unk_ov065_02290814 {
    u32 unk_00;
    Unk_ov065_02290814_Sub *unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u32 unk_10;
    volatile u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u32 unk_24[32];
    u16 unk_a4[32];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[32];
    u32 unk_174[4];
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c[8];
    u32 unk_194;
    s32 unk_198;
    u8 unk_19c[4];
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[4];
    u16 unk_1a6;
    u8 unk_1a8[0x20];
    u32 unk_1c8;
    u8 unk_1cc[0x14];
    u32 unk_1e0;
    u32 unk_1e4;
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u32 unk_1f8[32];
    u16 unk_278[32];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
    u8 unk_2dc[0xd8];
    u8 unk_3b4;
    u8 unk_3b5;
    u8 unk_3b6[0x96];
    Unk_ov065_0227627c_Fn unk_44c;
    u32 unk_450;
};

struct Unk_ov065_02270344_Rec {
    u8 slotIndex;
    u8 aid;
    u16 unk_02;
    u32 unk_04;
};

extern Unk_ov065_02290814 *sDwcMatch;
extern u8 sDwcMatchServerLock[];
extern u32 sDwcMatchUserFilter;
extern u32 sDwcMatchSyncOption;
extern u8 sDwcMatchValidAids[];


extern "C" {
void OS_SNPrintf(char *, s32, const char *, ...);
void MI_CpuFill8(void *, s32, s32);
u32 func_0212b854(const char *, char **, s32);

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
Unk_ov065_02270344_Rec *DwcConn_GetConnInfo(s32);
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

typedef s32 (*Unk_ov065_02276e44_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02276e44_Obj {
    u8 unk_00[0xb4];
    s32 unk_b4;
};

struct Unk_ov065_02276f4c_Ctx {
    u32 unk_00;
    u32 *unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_ov065_02276e44_Obj *unk_10;
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 unk_24[0xc0];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec[2];
    u32 unk_f4[32];
    u8 unk_174[8];
    u32 unk_17c[2];
    u32 unk_184[2];
    u8 unk_18c[12];
    u32 unk_198;
    u8 unk_19c[6];
    u8 unk_1a2;
    u8 unk_1a3[2];
    u8 unk_1a5;
    u8 unk_1a6[10];
    u32 unk_1b0;
    u32 unk_1b4[2];
    u32 unk_1bc;
    u32 unk_1c0[2];
    u8 unk_1c8[0x18];
    u32 unk_1e0[2];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0xe8];
    u32 unk_2d8;
    u32 unk_2dc;
    u32 unk_2e0;
    u32 unk_2e4;
    u32 unk_2e8;
    u8 unk_2ec[0x40];
    u32 unk_32c;
    u8 unk_330[0x84];
    u8 unk_3b4;
    u8 unk_3b5;
    u16 unk_3b6;
    u32 unk_3b8;
    u8 unk_3bc[0x80];
    u32 unk_43c;
    u32 unk_440;
    u32 unk_444[2];
    u32 unk_44c;
    u32 unk_450;
    u32 unk_454;
    u32 unk_458;
    u32 unk_45c;
    u32 unk_460;
};

struct Unk_ov065_02276f4c_Pad {
    s32 v[1];
    Unk_ov065_02276f4c_Pad() {}
    ~Unk_ov065_02276f4c_Pad() {}
};

struct Unk_ov065_02290810 {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
};

extern Unk_ov065_02276f4c_Ctx *sDwcMatch;
extern Unk_ov065_02290810 sDwcMatchServerLock;
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
void DwcMatch_InitControl(Unk_ov065_02276f4c_Ctx *a0, u32 a1, u32 *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7);
}
#undef g
}
}

namespace F0227702c {
extern "C" {


// ov065_039: DWC-like send/receive channel table (0x0227702c..0x022778b0)

struct Unk_ov065_02277418_Rec {
    u8 *unk_00;
    u8 *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u16 unk_20;
    u16 unk_22;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02290f78 {
    Unk_ov065_02277418_Rec channels[32];
    void (*unk_600)(...);
    void (*unk_604)(...);
    void (*unk_608)(...);
    void (*unk_60c)(...);
    u16 maxChunkSize;
    u16 unk_612;
};

struct Unk_ov065_02277054_Sm {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_022778b0_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_0227762c_Hdr {
    u32 unk_00;
    u16 unk_04;
    u8 unk_06[2];
};

extern "C" {
extern u8 sDwcMatchServerLock[];
extern u8 *sDwcMatch;
extern Unk_ov065_02277054_Sm *sDwcMatchSyncOption;
extern Unk_ov065_02290f78 *sDwcNetChannels;
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
void func_0212a2ec(void *, void *, s32);
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
Unk_ov065_02277418_Rec *DwcNet_GetChannel(s32 id);
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
    u8 *g = sDwcMatch;
    if (g == NULL) {
        return 1;
    }
    if (p == NULL) {
        return 3;
    }
    switch (m) {
    case 0: {
        Unk_ov065_02277054_Sm *s;
        if (*(s32 *)(g + 0x198) == 0x13) {
            return 1;
        }
        if (p[0] != 0 && p[1] <= 1) {
            return 3;
        }
        s = sDwcMatchSyncOption;
        if (s == NULL) {
            s = (Unk_ov065_02277054_Sm *)DwcNet_Alloc(4, 0x20);
            sDwcMatchSyncOption = s;
            if (s == NULL) {
                return 4;
            }
        }
        s->unk_00 = p[0];
        sDwcMatchSyncOption->unk_01 = p[1];
        {
            s32 z = 0;
            sDwcMatchSyncOption->unk_02 = z;
            sDwcMatchSyncOption->unk_03 = z;
            sDwcMatchSyncOption->unk_04 = *(u32 *)(p + 4);
            sDwcMatchSyncOption->unk_08 = z;
            sDwcMatchSyncOption->unk_0c = z;
        }
        sDwcMatchSyncOption->unk_10 = DwcNet_GetTimeMs();
        sDwcMatchSyncOption->unk_18 = DwcNet_GetTimeMs();
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

void DwcMatch_InitControl(Unk_ov065_02276f4c_Ctx *a0, u32 a1, u32 *a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    g = a0;
    a0->unk_00 = a1;
    g->unk_04 = a2;
    g->unk_08 = a3;
    g->unk_10 = 0;
    g->unk_1c = 0;
    g->unk_1a = 0;
    g->unk_e4 = 0;
    g->unk_198 = 0;
    g->unk_0f = 0;
    g->unk_19 = 0;
    g->unk_1a5 = 0;
    g->unk_1e8 = 0;
    g->unk_2dc = a4;
    g->unk_2e0 = a5;
    g->unk_2e4 = a6;
    g->unk_2e8 = a7;
    MI_CpuFill8(g->unk_2ec, 0, 0x40);
    g->unk_32c = 0;
    g->unk_44c = 0;
    g->unk_450 = 0;
    g->unk_45c = 0;
    g->unk_460 = 0;
    DwcMatch_ClearUserKeys();
    sDwcMatchServerLock.unk_00 = 0;
    sDwcMatchServerLock.unk_01 = 0;
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
    Unk_ov065_02276f4c_Ctx *c;
    s32 i;
    s32 z;
    s32 r;
    if (g->unk_10 != 0) {
        return 0;
    }
    g->unk_1e8 = a;
    i = 0;
    z = i;
    for (; i < 5; i++) {
        c = g;
        s32 h = GsTransport_GetRemoteIp(*c->unk_04);
        s32 h2 = GsTransport_GetLocalPort(*c->unk_04);
        r = GsQr_Init(&g->unk_10, h, h2, c->unk_2dc, c->unk_2e0, 1, 1, (void *)DwcMatch_OnQr2ServerKey, (void *)DwcMatch_OnQr2PlayerKey, (void *)DwcMatch_OnQr2TeamKey, (void *)DwcMatch_OnQr2KeyList, (void *)DwcMatch_OnQr2Count, (void *)DwcMatch_OnQr2Error, z);
        if (r == 0) {
            break;
        }
        if (r != 3 || i == 4) {
            DwcMatch_HandleQr2Result(r);
            return r;
        }
    }
    g->unk_1c = 0;
    g->unk_1a = 0;
    GsQr_SetPublicAddressCallback(g->unk_10, (void *)DwcMatch_OnQr2PublicAddress);
    GsQr_SetNatNegCallback(g->unk_10, (void *)DwcMatch_OnQr2NnRequest);
    GsQr_SetClientMessageCallback(g->unk_10, (void *)DwcMatch_OnQr2ClientMessage);
    GsQr_SendStateChanged(g->unk_10);
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
    g->unk_454 = a3;
    g->unk_458 = a4;
    g->unk_f4[0] = g->unk_1e8;
    g->unk_2d8 = 1;
    g->unk_0e = 0;
    sDwcMatchServerLock.unk_01 = 0;
    g->unk_198 = 10;
    DwcMatch_UpdateServerStatus();
    if (DwcMatch_HandleGpResult() == 0) {
        if (g->unk_10 == 0) {
            DwcMatch_StartQr2(g->unk_1e8);
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
    g->unk_454 = a3;
    g->unk_458 = a4;
    g->unk_17 = 1;
    g->unk_20 = g->unk_1e8;
    g->unk_f4[0] = a0;
    g->unk_198 = 4;
    if (g->unk_e4 == 0) {
        g->unk_e4 = GsSrvBrowser_New(g->unk_2dc, g->unk_2dc, g->unk_2e0, 0, 0x14, 1, 0, (void *)DwcMatch_OnServerBrowserEvent, 0);
    }
    if (g->unk_e4 == 0) {
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
    if (g->unk_10 == 0) {
        r = DwcMatch_StartQr2(g->unk_1e8);
        if (r != 0) {
            return r;
        }
    }
    DwcMatch_SendReservation(g->unk_f4[0], 0);
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
    Unk_ov065_02276f4c_Ctx *c;
    u32 r5;
    if (g != 0) {
        if (DwcCore_HasError() == 0) {
            if (a == 0) {
                if (g->unk_10) {
                    GsQr_Think(g->unk_10);
                }
                if (g->unk_04 != 0) {
                    GsTransport_Think(*g->unk_04);
                }
                return;
            }
            c = g;
            u32 st = c->unk_198;
            if (st == 0) {
                return;
            }
            switch (st) {
            case 0:
            case 1:
                break;
            case 4:
                if (c->unk_1bc != 0) {
                    u64 el = ((OS_GetTick() - *(u64 *)c->unk_1c0) << 6) / 0x82ea;
                    if ((u64)c->unk_1bc < el) {
                        c->unk_1bc = 0;
                        c = g;
                        if (c->unk_15 == 3) {
                            c->unk_1a2++;
                            if (g->unk_1a2 > 5) {
                                DwcMatch_Fail(6, -0x13a2e);
                                return;
                            }
                            DwcMatch_SendReservation(g->unk_f4[0], 0);
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
                if (c->unk_1b0 == 0) {
                    break;
                }
                { u32 t = c->unk_0d * 3000; r5 = t + 3000; }
                if (((OS_GetTick() - *(u64 *)c->unk_1b4) << 6) / 0x82ea >= (u64)r5) {
                    DwcMatch_SendReservation(c->unk_f4[0], 0);
                    if (DwcMatch_HandleResult() != 0) {
                        return;
                    }
                }
                break;
            case 2:
            case 3:
            case 5:
                if (c->unk_e8 <= 0) {
                    break;
                }
                if (st == 3) {
                    { u32 t = c->unk_0d * 3000; r5 = t + 3000; }
                } else if (c->unk_e8 == 1) {
                    r5 = 1000;
                } else {
                    r5 = 3000;
                }
                if ((u64)r5 < ((OS_GetTick() - *(u64 *)c->unk_ec) << 6) / 0x82ea) {
                    DwcMatch_StartServerQuery(c->unk_1ec);
                    if (DwcMatch_HandleSbResult() != 0) {
                        return;
                    }
                    g->unk_e8 = 0;
                }
                break;
            case 7:
                if (*(u64 *)c->unk_184 != 0) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)c->unk_184;
                    if (d > 0x61a8) {
                        c = g;
                        *(u64 *)c->unk_184 = 0;
                        if (DwcMatch_RestartAfterNnFailure(c->unk_f4[0]) != 0) {
                            break;
                        }
                        return;
                    }
                    break;
                } else if (c->unk_3b4 == 6) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)c->unk_444;
                    if (d > 0x1770) {
                        c->unk_3b5++;
                        c = g;
                        if (c->unk_3b5 > 5) {
                            DwcMatch_ClearPendingCommand();
                            if (DwcMatch_RestartAfterNnFailure(g->unk_f4[0]) == 0) {
                                return;
                            }
                        } else {
                            DwcMatch_SendCommand(6, c->unk_43c, c->unk_3b8, c->unk_3b6, c->unk_3bc, c->unk_440);
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
                if (c->unk_3b4 != 2) {
                    break;
                }
                if (c->unk_15 == 0) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)g->unk_444;
                    if (d > 0x1770) {
                        goto do_b;
                    }
                }
                {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)g->unk_444;
                    if (d > 0x4a38) {
                    do_b:
                        DwcMatch_ClearPendingCommand();
                        c = g;
                        if (DwcMatch_CancelNewClient(c->unk_f4[c->unk_0d + 1]) != 0) {
                            break;
                        }
                        return;
                    }
                }
                break;
            case 12:
                break;
            case 13:
                if (c->unk_3b4 != 8) {
                    break;
                }
                {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)c->unk_444;
                    if (d > 0x7530) {
                        c->unk_3b5++;
                        c = g;
                        if (c->unk_3b5 != 0) {
                            DwcMatch_ClearPendingCommand();
                            c = g;
                            if (c->unk_15 == 2) {
                                if (DwcMatch_CancelNewClient(c->unk_f4[c->unk_0d]) == 0) {
                                    return;
                                }
                            } else {
                                DwcMatch_AbortAndRestart();
                            }
                        } else {
                            DwcMatch_SendCommand(8, c->unk_43c, c->unk_3b8, c->unk_3b6, c->unk_3bc, c->unk_440);
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
            if (c->unk_198 == 0xb || c->unk_198 == 6) {
                if (*(u64 *)c->unk_17c != 0) {
                    u64 d = DwcNet_GetTimeMs() - *(u64 *)c->unk_17c;
                    if (d > 0x2710) {
                        DwcMatch_OnNnComplete(1, 0, 0, c->unk_18c);
                    }
                }
            }
            if (g->unk_e4) {
                GsSrvBrowser_Think(g->unk_e4);
            }
            if (g->unk_10) {
                GsQr_Think(g->unk_10);
                c = g;
                Unk_ov065_02276e44_Obj *o = c->unk_10;
                if (o->unk_b4 == 0 && (c->unk_15 == 0 || c->unk_15 == 1)) {
                    if (c->unk_198 == 1 || c->unk_198 == 2 || c->unk_198 == 3 || c->unk_198 == 4 || c->unk_198 == 6 || c->unk_198 == 0xb) {
                        goto do_kill;
                    }
                }
                if (c->unk_15 == 2 && c->unk_198 == 0xb) {
                do_kill:
                    GsQr_SendStateChanged(o);
                }
            }
            GsNatNeg_ProcessAll();
            if (g->unk_04 != 0) {
                GsTransport_Think(*g->unk_04);
            }
            if (g->unk_198 == 0x12) {
                u64 d = DwcNet_GetTimeMs() - *(u64 *)g->unk_1e0;
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
        if (g->unk_10) {
            GsQr_HandlePacket(g->unk_10, name, arg, &addr);
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
    if (g != NULL && g->unk_198 == 7 && g->unk_1a1 == 0) {
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
    if (c != g->unk_1f8[g->unk_0d] || d != g->unk_278[g->unk_0d]) {
        if (*e != 0) {
            if (g->unk_f4[g->unk_0d] == func_0212b854((char *)e, NULL, 10)) {
                g->unk_1f8[g->unk_0d] = c;
                g->unk_278[g->unk_0d] = d;
                goto ok;
            }
        }
        GsTransport_Reject(b, (char *)"Unknown connect attempt", -1);
        return;
    }
ok:
    Unk_ov065_02290814 *gs = g;
    gs->unk_184 = 0;
    gs->unk_188 = 0;
    if (GsTransport_Accept(b, gs->unk_08) == 0) {
        DwcMatch_Fail(6, -0x13a1a);
        return;
    }
    DwcMatch_ClearPendingCommand();
    if (g->unk_0d == 0) {
        s32 t = s0 >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        g->unk_1a6 = t;
    }
    u32 *p = DwcConn_GetSlot(id);
    Unk_ov065_02270344_Rec *q = DwcConn_GetConnInfo(id);
    *p = b;
    g->unk_0d++;
    q->slotIndex = id;
    q->aid = g->unk_2b8[g->unk_0d - 1];
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
    if (g->unk_198 != 7 && g->unk_198 != 0xc) {
        return;
    }
    switch (b) {
    case 5:
        return;
    case 6: {
        g->unk_0c++;
        if (g->unk_0c > 5) {
            g->unk_0c = 0;
            DwcMatch_CancelNewClient(g->unk_f4[g->unk_14]);
            return;
        }
        OS_SNPrintf(buf, 12, (char *)"%u", g->unk_1e8);
        Unk_ov065_02290814 *c = g;
        s32 r0 = GsTransport_AddressToString(c->unk_1f8[c->unk_14], c->unk_278[c->unk_14], 0);
        s32 r = GsTransport_Connect(g->unk_04->transportSocket, 0, r0, buf, -1, 0x1388, c->unk_08, 0);
        if (r == 1) {
            DwcMatch_HandleGt2Result();
            return;
        } else if (r != 0) {
            if (DwcMatch_CancelNewClient(g->unk_f4[g->unk_14]) == 0) {
                return;
            }
        }
        break;
    }
    default:
        if (DwcMatch_CancelNewClient(g->unk_f4[g->unk_0d + 1]) == 0) {
            return;
        }
        break;
    case 0: {
        s32 id = DwcConn_FindFreeSlot();
        if (id == -1) {
            DwcMatch_Fail(6, -0x1543c);
        }
        u32 *p = DwcConn_GetSlot(id);
        Unk_ov065_02270344_Rec *q = DwcConn_GetConnInfo(id);
        *p = a;
        g->unk_0d++;
        q->slotIndex = id;
        q->unk_02 = 0;
        q->unk_04 = 0;
        q->aid = g->unk_2b8[g->unk_0d];
        GsTransport_SetUserData(a, q);
        if (g->unk_198 == 0xc) {
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
        arr[i] = func_0212b854(tmp, NULL, 10);
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
    g->unk_3b4 = 0xff;
    g->unk_3b5 = 0;
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
        Unk_ov065_02290814 *c = g;
        BOOL x;
        BOOL y;
        if (c->unk_15 == 2) {
            x = TRUE;
        } else {
            x = FALSE;
        }
        if (c->unk_1f4 == 0) {
            y = TRUE;
        } else {
            y = FALSE;
        }
        s32 t = DwcFriend_FindIndexByProfileId();
        g->unk_44c(a, 0, y, x, t, c->unk_450);
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
    if (g->unk_15 != 2) {
        g->unk_14 = 0;
        g->unk_16 = 0;
        GsQr_SendStateChanged(g->unk_10);
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
        if (g->unk_198 == 1) {
            if (c[0] == 1) {
                g->unk_1f4 = 0;
            }
            u32 x = c[1];
            u8 y = c[2];
            g->unk_2b8[x] = y;
            g->unk_f4[x] = g->unk_1e8;
            if (g->unk_15 == 0 || g->unk_15 == 1) {
                g->unk_16 = g->unk_0d;
            }
            g->unk_198 = 9;
        }
        DwcMatch_SendSyncPacket(a, 3);
        break;
    case 3:
        if (g->unk_198 == 0x10) {
            g->unk_1c8 |= 1 << a;
            s32 v = c[0] | (c[1] << 8);
            if (v > g->unk_1a6) {
                g->unk_1a6 = v;
            }
            s32 r = DwcMatch_GetClientAidMask(0);
            if (g->unk_1c8 == r) {
                s32 i;
                for (i = 1; i <= g->unk_0d; i++) {
                    DwcMatch_SendSyncPacket(g->unk_2b8[i], 4);
                }
                g->unk_198 = 0x11;
            }
        } else {
            DwcMatch_SendSyncPacket(a, 4);
        }
        break;
    case 4:
        if (g->unk_198 == 9) {
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
    if (g->unk_15 == 2) {
        return TRUE;
    }
    if (a != 0) {
        DwcMatch_Fail(a, b - 0x13880);
        return TRUE;
    }
    g->unk_2b8[0] = 0;
    if (g->unk_1a1 == 1 || (u8)(g->unk_1a0 + 0xff) <= 1) {
        return TRUE;
    }
    if (g->unk_194 != 0) {
        GsNatNeg_Cancel(g->unk_194);
        g->unk_194 = 0;
    }
    if (g->unk_0d != 0) {
        if (g->unk_1a0 == 0) {
            g->unk_1a0 = 3;
            GsTransport_CloseAll(g->unk_04->transportSocket);
        }
    } else if (g->unk_15 == 3) {
        DwcMatch_Fail(6, -0x13a2e);
    } else if (g->unk_1f0 != 0) {
        DwcMatch_RestartAfterCancel();
    } else if (g->unk_198 == 1) {
        g->unk_198 = 0x12;
        u64 t = DwcNet_GetTimeMs();
        Unk_ov065_02290814 *c = g;
        c->unk_1e0 = (u32)t;
        c->unk_1e4 = (u32)(t >> 32);
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
    if (g->unk_1a0 != 2) {
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
    saved = g->unk_f4[idx];
    g->unk_2d8 &= ~(1 << g->unk_2b8[idx]);
    DwcMatch_UpdateValidAidCount();
    if (idx < n - 1) {
        s32 i;
        for (i = 0; i < n - idx; i++) {
            s32 j = idx + i;
            s32 k = j + 1;
            g->unk_24[j] = g->unk_24[k];
            g->unk_a4[j] = g->unk_a4[k];
            g->unk_f4[j] = g->unk_f4[k];
            g->unk_1f8[j] = g->unk_1f8[k];
            g->unk_278[j] = g->unk_278[k];
            g->unk_2b8[j] = g->unk_2b8[k];
        }
    }
    if (n > 0) {
        s32 l = n - 1;
        g->unk_24[l] = 0;
        g->unk_a4[l] = 0;
        g->unk_f4[l] = 0;
        g->unk_1f8[l] = 0;
        g->unk_278[l] = 0;
        g->unk_2b8[l] = 0;
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
        return g->unk_0d;
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
        return g->unk_0e;
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
    Unk_ov065_02290814 *c = g;
    u32 v = c->unk_2d8;
    for (; i < 32; i++) {
        if ((v & (1 << i)) != 0) {
            n++;
        }
    }
    s32 z = 0;
    s32 m1 = ~z;
    if (n == m1) {
        c->unk_0e = z;
    } else {
        c->unk_0e = n;
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
    *out = (u32)&g->unk_2b8;
    return g->unk_0d + 1;
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
    for (; i <= g->unk_0e; i++) {
        b = g->unk_2b8[i];
        if ((g->unk_2d8 & (1 << b)) == 0) {
            break;
        }
        sDwcMatchValidAids[i] = b;
    }
    *out = sDwcMatchValidAids;
    return g->unk_0e + 1;
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
    if (g->unk_15 != 2) {
        return 0;
    }
    OS_SNPrintf(buf, 12, (char *)"%u", g->unk_16 + 1);
    GsUtil_FormatKeyValue((char *)"SCM", buf, buf2, 0x2f);
    OS_SNPrintf(buf, 12, (char *)"%u", g->unk_0d + 1);
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
    sDwcMatch = (Unk_ov065_02290814 *)z;
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
    G->unk_0c = 0;
    G->unk_174 = 0;
    G->unk_176 = DwcNet_Rand32(0x10000);
    G->unk_178 = 0;
    {
        Unk_ov065_02290814 *g = G;
        g->unk_17c = 0;
        g->unk_180 = 0;
        g->unk_184 = 0;
        g->unk_188 = 0;
        g->unk_19c = 0;
    }
    G->unk_1a1 = 0;
    G->unk_1a2 = 0;
    G->unk_1a3 = 0;
    G->unk_1a4 = 0;
    G->unk_19f = 0;
    G->unk_1a0 = 0;
    G->unk_1a8 = 0;
    G->unk_1aa = 0;
    G->unk_1ac = 0;
    {
        Unk_ov065_02290814 *g = G;
        g->unk_1d0 = 0;
        g->unk_1d4 = 0;
        g->unk_1e0 = 0;
        g->unk_1e4 = 0;
        Unk_ov065_02275984_Clear32(&g->unk_3b4, 0x98);
    }
    if (a == 2) {
        G->unk_14 = G->unk_0d;
        if (G->unk_15 == 3) {
            G->unk_198 = 1;
        } else if (G->unk_15 == 2) {
            G->unk_198 = 10;
        }
    } else {
        G->unk_0d = 0;
        G->unk_0e = 0;
        G->unk_14 = 0;
        G->unk_17 = 0;
        G->unk_20 = 0;
        G->unk_e8 = 0;
        G->unk_19d = 0;
        G->unk_1a6 = 0;
        G->unk_1b0 = 0;
        {
            Unk_ov065_02290814 *g = G;
            g->unk_1b4 = 0;
            g->unk_1b8 = 0;
            g->unk_1bc = 0;
        }
        {
            Unk_ov065_02290814 *g = G;
            g->unk_1c0 = 0;
            g->unk_1c4 = 0;
            g->unk_1c8 = 0;
        }
        G->unk_1ec = 0;
        G->unk_1f0 = 0;
        G->unk_2d8 = 0;
        Unk_ov065_02275984_Clear32(G->unk_24, 0x80);
        Unk_ov065_02275984_Clear16(G->unk_a4, 0x40);
        Unk_ov065_02275984_Clear32(G->unk_f4, 0x80);
        Unk_ov065_02275984_Clear32(&G->unk_18c, 0xc);
        Unk_ov065_02275984_Clear32(G->unk_1f8, 0x80);
        Unk_ov065_02275984_Clear16(G->unk_278, 0x40);
        MI_CpuFill8(G->unk_2b8, 0, 0x20);
        Unk_ov065_02275984_Clear32(G->unk_330, 0x84);
        if (a == 1) {
            if (G->unk_15 == 0) {
                G->unk_198 = 3;
            } else if (G->unk_15 == 1) {
                G->unk_198 = 4;
            }
        } else {
            G->unk_15 = 0;
            G->unk_16 = 0;
            G->unk_18 = 0;
            G->unk_1f4 = 0;
            G->unk_19e = 0;
            G->unk_454 = 0;
            G->unk_458 = 0;
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
    G->unk_15 = a;
    G->unk_16 = b;
    G->unk_44c = c;
    G->unk_450 = d;
    G->unk_175 = 0;
    G->unk_2b8[0] = 0;
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
        if (G->unk_e4 != 0) {
            GsSrvBrowser_Free(G->unk_e4);
            G->unk_e4 = 0;
        }
        GsNatNeg_FreeAll();
        G->unk_198 = 0;
        if (sDwcMatchUserFilter != 0) {
            DwcNet_Free(4, sDwcMatchUserFilter);
            sDwcMatchUserFilter = 0;
        }
        DwcMatch_ClearUserKeys();
        G->unk_18 = 1;
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
    Unk_ov065_02290840_Ent *e;
    u8 *q;
    s32 k;
    list[0] = 8;
    list[1] = 10;
    list[2] = 0x32;
    list[3] = 0x33;
    list[4] = 0x34;
    list[5] = 0x35;
    list[6] = 0x36;
    if (G->unk_15 == 0 || G->unk_15 == 1) {
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
    switch (G->unk_198) {
    case 0:
    case 1:
        break;
    case 3:
        a = G->unk_1f0;
        if (a == 0) {
            DwcMatch_BuildServerFilter(buf, G->unk_1e8, G->unk_16, G->unk_15);
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
        G->unk_1ec = a;
        break;
    }
    GsSrvBrowser_Clear(G->unk_e4);
    for (k = 0; k < 5; k++) {
        s32 r = GsSrvBrowser_UpdateList(G->unk_e4, 1, 0, list, n, buf, 0x10);
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
    u8 idx = G->unk_14;
    s32 ret = 0;
    if (a == 0) {
        b = (G->unk_1e8 & 0xffff) | (G->unk_176 << 16);
        if (GsServer_HasPrivateAddress(c) != 0) {
            s32 t = GsServer_GetPublicIp(c);
            if (t == GsSrvBrowser_GetPublicIp(G->unk_e4)) {
                G->unk_1f8[idx] = GsServer_GetPrivateIp(c);
                G->unk_278[idx] = GsServer_GetPrivatePort(c);
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
                G->unk_1f8[idx] = GsServer_GetPublicIp(c);
                G->unk_278[idx] = GsServer_GetPublicPort(c);
                flag = 0;
            }
        }
        if (flag != 0) {
            G->unk_176 = DwcNet_Rand32(0x10000);
            G->unk_18c.unk_08 = b;
        } else {
            u32 loc[2];
            s32 x;
            loc[0] = Sock_GetHostId();
            loc[1] = GsTransport_GetLocalPort(G->unk_04->transportSocket);
            x = GsServer_GetPublicIp(c);
            b = GsServer_GetPublicPort(c);
            x = DwcMatch_SendCommand(6, G->unk_f4[idx], x, b, loc, 2);
            G->unk_3b5 = 0;
            if (x != 0) {
                return 2;
            }
            G->unk_18c.unk_08 = 0;
        }
        G->unk_18c.unk_00 = 0;
        G->unk_18c.unk_01 = 0;
        G->unk_18c.unk_02 = GsServer_GetPublicPort(c);
        G->unk_18c.unk_04 = GsServer_GetPublicIp(c);
    } else {
        flag = 1;
        G->unk_18c.unk_00 = 1;
        G->unk_18c.unk_01 = ret;
        G->unk_18c.unk_02 = ret;
        G->unk_18c.unk_04 = ret;
        G->unk_18c.unk_08 = b;
    }
    if (flag != 0) {
        ret = DwcMatch_SendNnRequest(&G->unk_18c);
    } else {
        Unk_ov065_02290814 *g = G;
        DwcMatch_OnNnComplete(0, GsTransport_GetRemoteIp(g->unk_04->transportSocket), 0, &g->unk_18c);
        Unk_ov065_022754f0_Z z = Unk_ov065_022754f0_Z_0;
        g = G;
        g->unk_184 = z;
        g->unk_188 = z;
    }
    return ret;
}
#undef G
}
}

namespace F022751b0 {
extern "C" {
#define G sDwcMatch

s32 DwcMatch_SendNnRequest(Unk_ov065_02275474_Arg *p) {
    s32 i;
    s32 r;
    if (p->unk_00 == 0) {
        GsSrvBrowser_SendNatNegCookie(G->unk_e4, GsTransport_AddressToString(p->unk_04, 0, 0), p->unk_02, p->unk_08);
        if (DwcMatch_HandleSbResult() != 0) {
            return 2;
        }
    }
    for (i = 0; i < 5; i++) {
        r = GsNatNeg_Start(GsTransport_GetRemoteIp(G->unk_04->transportSocket), p->unk_08, p->unk_00, (void *)DwcMatch_OnNnProgress, (void *)DwcMatch_OnNnComplete, p);
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
    if (G->unk_15 == 0 || ((G->unk_15 == 3 || G->unk_19e != 0) && a == 6)) {
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
        r = DwcMatch_SendGpCommand(G->unk_00, a, b, buf);
    }
    if (a == 2 || a == 6 || (u8)(a + 0xf8) <= 1) {
        G->unk_3b4 = a;
        G->unk_3b6 = d;
        G->unk_3b8 = c;
        G->unk_43c = b;
        G->unk_440 = f;
        {
            Unk_ov065_02290814 *g = G;
            u64 t = DwcNet_GetTimeMs();
            g->unk_444 = (u32)t;
            g->unk_448 = (u32)(t >> 32);
            if (e != NULL && f != 0) {
                MIi_CpuCopy32(e, g->unk_3bc, f * 4);
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
    Unk_ov065_02275298_Hdr h;
    s32 i;
    s32 r;
    if (d != NULL && e != 0) {
        MIi_CpuCopy32(d, h.unk_14, e * 4);
    } else {
        e = 0;
    }
    func_02127838(h.unk_00, (char *)"SBCM");
    h.unk_04 = 3;
    h.unk_08 = a;
    h.unk_09 = e * 4;
    h.unk_0a = G->unk_1a;
    h.unk_0c = G->unk_1c;
    h.unk_10 = G->unk_1e8;
    i = 0;
    do {
        r = GsSrvBrowser_SendMessage(G->unk_e4, GsTransport_AddressToString(b, 0, 0), c, &h, h.unk_09 + 0x14);
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
    char *end = func_0212a120(s, 0);
    s32 i;
    char *p;
    s32 len;
    for (i = 0; i < n; i++) {
        p = func_0212a120(s, '/');
        if (p == NULL) {
            return -1;
        }
        s = p + 1;
    }
    p = func_0212a120(s, '/');
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
    Unk_ov065_022745bc_Ctx *g = sDwcMatch;
    s32 st;
    if (g == 0 || (st = g->unk_198) == 0) {
        return 1;
    }
    switch (ev) {
    case 1:
    case 11: {
        u32 r;
        if (g->unk_15 != 0) {
            p2 = args[1];
            p3 = (u16)args[2];
        }
        r = DwcMatch_CheckReservation(h, p2, p3, args[0], ev == 0xb ? 1 : 0);
        if (r == 2) {
            Unk_ov065_022745bc_Ctx *q;
            if (DwcMatch_HandleResult(DwcMatch_AcceptNewClient(h, p2, p3)) != 0) {
                return 0;
            }
            q = sDwcMatch;
            if (q->unk_15 == 2 && q->unk_454 != 0) {
                sDwcMatch->unk_454(DwcFriend_FindIndexByProfileId(h), q->unk_458);
            }
            buf[0] = sDwcMatch->unk_14;
            for (z = 1; z <= sDwcMatch->unk_14; z++) {
                buf[z] = sDwcMatch->unk_f4[z];
            }
            buf[z++] = sDwcMatch->unk_1c;
            buf[z++] = sDwcMatch->unk_1a;
            sDwcMatch->unk_198 = 0xb;
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
        if (h != g->unk_1ec) {
            break;
        }
        g->unk_1f0 = z;
        sDwcMatch->unk_19f = z;
        sDwcMatch->unk_1bc = z;
        sDwcMatch->unk_1b0 = z;
        sDwcMatch->unk_24[0] = (args + 1)[args[0]];
        sDwcMatch->unk_a4[0] = (args + 2)[args[0]];
        sDwcMatch->unk_1ac = (args + 1)[args[0]];
        sDwcMatch->unk_1aa = (args + 2)[args[0]];
        if (sDwcMatch->unk_15 == 1) {
            if (DwcMatch_AreAllBuddies(args + 1, args[0]) != 0) {
                if (sDwcMatch->unk_0d != 0) {
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
            Unk_ov065_022745bc_Ctx *q = sDwcMatch;
            if (q->unk_15 == 0) {
                if (q->unk_0d != 0) {
                    DwcMatch_StoreMemberList(h, args);
                    if (DwcMatch_HandleResult(DwcMatch_SendCloseOrder()) != 0) {
                        return 0;
                    }
                }
                sDwcMatch->unk_198 = 6;
                DwcMatch_StartNatNegotiation(0, 0, GsSrvBrowser_GetServer(sDwcMatch->unk_e4, 0));
                if (DwcMatch_HandleNnStartResult() == 0) {
                    break;
                }
                return 0;
            } else {
                q->unk_198 = 5;
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
        if (h != g->unk_1ec) {
            break;
        }
        return DwcMatch_BeginSearch();
    case 4: {
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        g->unk_1c0 = OS_GetTick();
        if ((g->unk_1f0 != 0 && g->unk_19f < 0x10) || g->unk_15 == 3) {
            Unk_ov065_022745bc_Ctx *q;
            g->unk_1b0 = 1;
            q = sDwcMatch;
            q->unk_1b4 = OS_GetTick();
            if (q->unk_15 != 3) {
                q->unk_19f++;
            }
        } else {
            Unk_ov065_022745bc_Ctx *q;
            g->unk_1f0 = 0;
            sDwcMatch->unk_19f = 0;
            q = sDwcMatch;
            if (q->unk_15 == 0) {
                q->unk_198 = 3;
                sDwcMatch->unk_e8 = 1;
                u64 t = OS_GetTick();
                Unk_ov065_022745bc_Ctx *q2 = sDwcMatch;
                q2->unk_ec = t;
            } else if (((volatile Unk_ov065_022745bc_Ctx *)q)->unk_15 == 1) {
                DwcMatch_TryNextFriend(1, 0);
            }
        }
        break;
    }
    case 5:
        if (g->unk_17 == 0) {
            break;
        }
        if (h != g->unk_20) {
            break;
        }
        if (g->unk_15 == 2 && g->unk_0d == 1 && g->unk_f4[1] == h) {
            GsTransport_CloseAll(*g->unk_04);
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
            g->unk_198 = 6;
        } else if (st == 6 || st == 0xb) {
            if (h != g->unk_20) {
                break;
            }
        } else {
            break;
        }
        sDwcMatch->unk_3b4 = 0xff;
        {
            Unk_ov065_022745bc_Ctx *q = sDwcMatch;
            u32 *b0 = q->unk_f4;
            s32 k = q->unk_0d + 1;
            u32 *pe = b0 + k;
            if (h != b0[k]) {
                *pe = h;
            }
        }
        sa.unk_4 = x;
        sa.unk_2 = ((y >> 8) & 0xff) | ((y << 8) & 0xff00);
        sDwcMatch->unk_18c = 1;
        {
            Unk_ov065_022745bc_Ctx *q = sDwcMatch;
            DwcMatch_OnNnComplete(0, GsTransport_GetRemoteIp(*q->unk_04), &sa, &q->unk_18c);
        }
        Unk_ov065_022749f8_Z z6 = Unk_ov065_022749f8_Z_0;
        {
            Unk_ov065_022745bc_Ctx *q = sDwcMatch;
            q->unk_184 = z6;
            q->unk_188 = z6;
        }
        break;
    }
    case 7:
        if (st != 1) {
            break;
        }
        if (h != g->unk_f4[0]) {
            break;
        }
        loc1c = args[0];
        {
            ub = (u8)args[1];
            g->unk_f4[g->unk_14 + 1] = loc1c;
            sDwcMatch->unk_2b8[sDwcMatch->unk_14 + 1] = ub;
        }
        GsQr_SendStateChanged(sDwcMatch->unk_10);
        {
            Unk_ov065_022745bc_Ctx *q = sDwcMatch;
            if (q->unk_454 != 0) {
                sDwcMatch->unk_454(DwcFriend_FindIndexByProfileId(loc1c), q->unk_458);
            }
        }
        break;
    case 8:
        if (st != 1) {
            break;
        }
        if (h != g->unk_f4[0]) {
            break;
        }
        {
        u32 v = args[0];
        loc1c = v;
        if (v == 0) {
            u32 a1 = args[1];
            u32 a2 = args[2];
            g->unk_2b8[a1] = a2;
            sDwcMatch->unk_f4[a1] = sDwcMatch->unk_1e8;
            DwcMatch_AdvanceConnect(3);
            break;
        } else {
            u32 a1 = args[1];
            ub = (u8)args[2];
            u32 *b0 = g->unk_f4;
            u32 *pp = b0 + a1;
            if (v == b0[a1] && a1 == g->unk_0d - 1) {
                if (DwcMatch_HandleResult(DwcMatch_SendCommand(9, h, g->unk_24[0], g->unk_a4[0], &loc1c, 1)) == 0) {
                    break;
                }
                return 0;
            }
            *pp = v;
            sDwcMatch->unk_2b8[a1] = ub;
            sDwcMatch->unk_24[a1] = args[3];
            sDwcMatch->unk_a4[a1] = args[4];
            sDwcMatch->unk_1ac = args[3];
            sDwcMatch->unk_1aa = args[4];
            sDwcMatch->unk_198 = 5;
            if (DwcMatch_HandleSbResult(DwcMatch_StartServerQuery(loc1c)) != 0) {
                return 0;
            }
            sDwcMatch->unk_1bc = 0;
            sDwcMatch->unk_1b0 = 0;
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
        t = g->unk_19c;
        t++;
        if (a0 != g->unk_f4[t]) {
            break;
        }
        g->unk_19c = t;
        DwcMatch_AdvanceConnect(z);
        break;
    }
    case 10:
        if (st != 1 && st != 0x12) {
            break;
        }
        if (g->unk_15 == 0 || DwcMatch_AreAllBuddies(args + 1, args[0]) != 0) {
            sDwcMatch->unk_1f0 = args[1];
            sDwcMatch->unk_19f = 0;
        } else {
            sDwcMatch->unk_1f0 = 0;
        }
        {
            Unk_ov065_022745bc_Ctx *q = sDwcMatch;
            if (q->unk_0d != 0) {
                GsTransport_CloseAll(*q->unk_04);
            } else {
                if (DwcMatch_RestartAfterCancel() != 0) {
                    return 0;
                }
            }
        }
        break;
    case 12:
        if (h != g->unk_f4[0]) {
            break;
        }
        if (g->unk_15 == 0 || ((volatile Unk_ov065_022745bc_Ctx *)g)->unk_15 == 1) {
            if (DwcMatch_RestartAfterNnFailure(h) == 0) {
                return 0;
            }
            break;
        }
        if (((volatile Unk_ov065_022745bc_Ctx *)g)->unk_15 != 3) {
            break;
        }
        if (args[0] == 0) {
            g->unk_1f4 = h;
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
        if (h != g->unk_f4[0]) {
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
        Unk_ov065_022749f8_H *m = sDwcMatchSyncOption;
        if (m != 0 && m->unk_00 != 0) {
            u64 d = DwcNet_GetTimeMs() - m->unk_10;
            if (d >= m->unk_04) {
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
        sDwcMatchSyncOption->unk_08 |= m;
        if (args[0] != 0) {
            sDwcMatchSyncOption->unk_0c |= m;
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
    Unk_ov065_022745bc_Ctx *g = sDwcMatch;
    u32 r;
    switch (g->unk_15) {
    case 1:
        if (GsGp_IsBuddy(g->unk_00, a) == 0) {
            r = 0xff;
            goto end;
        }
    case 0:
        g = sDwcMatch;
        if (d != g->unk_15 || g->unk_1a1 != 0 || g->unk_14 == g->unk_16 ||
            (g->unk_17 != 0 && g->unk_20 == g->unk_1e8)) {
            r = 3;
            if (g->unk_15 == 0) {
                u32 obj = g->unk_10;
                if (*(u32 *)(obj + 0xb4) == 0) {
                    if (g->unk_17 != 0) {
                        if (sDwcMatch->unk_20 == sDwcMatch->unk_1e8) {
                            GsQr_SendStateChanged(obj);
                        }
                    }
                }
            }
            goto end;
        }
        {
            s32 t = g->unk_198;
            u32 p;
            if (t != 3 && t != 4) {
                goto r4;
            }
            if (g->unk_1c == 0 && g->unk_1a == 0) {
                goto r4;
            }
            if (b == 0 && c == 0) {
            r4:
                r = 4;
                goto end;
            }
            p = g->unk_1ec;
            if (p == 0) {
                goto r2b;
            }
            if (p != (u32)a) {
                goto other;
            }
            if (e == 0) {
                if (g->unk_1e8 >= a) {
                    goto rff;
                }
                if (a == g->unk_1f0) {
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
                if (g->unk_1e8 >= a) {
                    goto r3;
                }
                if (g->unk_1f0 != 0) {
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
        if (GsGp_IsBuddy(g->unk_00, a) == 0) {
            r = 0xff;
            goto end;
        }
        if (d != 3 || (g = sDwcMatch, g->unk_14 == g->unk_16)) {
            r = 3;
            goto end;
        }
        if (sDwcMatchServerLock[0] == 1 && sDwcMatchServerLock[1] == 1) {
            r = 0x13;
            goto end;
        }
        if (g->unk_198 != 0xa) {
            goto r4b;
        }
        if (g->unk_1c == 0 && g->unk_1a == 0) {
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
    Unk_ov065_022745bc_Ctx *g = sDwcMatch;
    if (g->unk_17 != 0 && g->unk_20 == a) {
        return 0;
    }
    g->unk_17 = 1;
    sDwcMatch->unk_20 = a;
    sDwcMatch->unk_1b0 = 0;
    sDwcMatch->unk_1bc = 0;
    GsQr_SendStateChanged(sDwcMatch->unk_10);
    sDwcMatch->unk_1ec = 0;
    sDwcMatch->unk_f4[sDwcMatch->unk_14 + 1] = a;
    sDwcMatch->unk_24[sDwcMatch->unk_14 + 1] = b;
    sDwcMatch->unk_a4[sDwcMatch->unk_14 + 1] = c;
    sDwcMatch->unk_1ac = b;
    sDwcMatch->unk_1aa = c;
    Unk_ov065_022745bc_Ctx *h = sDwcMatch;
    h->unk_2b8[h->unk_14 + 1] = DwcMatch_AllocAid();
    args[0] = a;
    args[1] = sDwcMatch->unk_2b8[sDwcMatch->unk_14 + 1];
    for (i = 1; i <= sDwcMatch->unk_14; i++) {
        Unk_ov065_022745bc_Ctx *q = sDwcMatch;
        s32 r = DwcMatch_SendCommand(7, q->unk_f4[i], q->unk_24[i], q->unk_a4[i], args, 2);
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
        MIi_CpuCopy32(&p[1], sDwcMatch->unk_338, (n - 2) * 4);
    }
    sDwcMatch->unk_330 = n - 1;
    sDwcMatch->unk_334 = a;
}

}
}

namespace F022745bc {
extern "C" {


s32 DwcMatch_HandleResult(s32 a) {
    if (sDwcMatch->unk_15 == 0) {
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
    if (b != 0 || (sDwcMatch->unk_1c == 0 && sDwcMatch->unk_1a == 0)) {
        sDwcMatch->unk_1b0 = 1;
        Unk_ov065_022745bc_Ctx *h = sDwcMatch;
        h->unk_1b4 = OS_GetTick();
        h->unk_f4[0] = a;
        return 0;
    }
    if (sDwcMatch->unk_15 == 0) {
        u32 l = GsSrvBrowser_GetServer(sDwcMatch->unk_e4, 0);
        sDwcMatch->unk_f4[0] = GsServer_GetIntValue(l, (char *)"dwc_pid", 0);
        sDwcMatch->unk_24[0] = GsServer_GetPublicIp(l);
        sDwcMatch->unk_a4[0] = GsServer_GetPublicPort(l);
        sDwcMatch->unk_1ec = sDwcMatch->unk_f4[0];
        n = 1;
    } else {
        if (((volatile Unk_ov065_022745bc_Ctx *)sDwcMatch)->unk_15 == 1) {
            sDwcMatch->unk_f4[0] = a;
        }
        sDwcMatch->unk_1ec = a;
        args[1] = sDwcMatch->unk_1c;
        args[2] = sDwcMatch->unk_1a;
        n = 3;
    }
    sDwcMatch->unk_1bc = 0x1770;
    {
        Unk_ov065_022745bc_Ctx *h = sDwcMatch;
        h->unk_1c0 = OS_GetTick();
        h->unk_1b0 = 0;
    }
    u32 k = sDwcMatch->unk_1f0 != 0 ? 0xb : 1;
    Unk_ov065_022745bc_Ctx *j = sDwcMatch;
    args[0] = j->unk_15;
    return DwcMatch_SendCommand(k, a, j->unk_24[0], j->unk_a4[0], args, n);
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
        Unk_ov065_022743e0_Rec rec;
        char buf34[0x208];
    } l;
    if (b != 0) {
        next = g->unk_19d;
    } else {
        u8 cur = g->unk_19d;
        if (cur < g->unk_32c - 1) next = cur + 1;
        else next = 0;
    }
    started = 0;
    if (b == 0) first = 1;
    else first = 0;
    Unk_ov065_02273b60_Ctx **const gp = &g;
    for (;;) {
        Unk_ov065_02273b60_Ctx *c;
        s32 i;
        s32 n;
        s32 e0, e1;
        s32 n1, n3;
        if (first != 0 || started != 0) {
            (*gp)->unk_19d++;
            if ((*gp)->unk_19d >= (*gp)->unk_32c) (*gp)->unk_19d = 0;
        }
        if (started != 0 && (*gp)->unk_19d == next) {
            (*gp)->unk_1bc = 3000;
            c = *gp;
            u64 t = OS_GetTick();
            c->unk_1c0 = t;
            c->unk_1b0 = 0;
            return 0;
        }
        started = 1;
        c = *gp;
        x = func_020ffc60(DwcLogin_GetUserData(), c->unk_2e4 + c->unk_2ec[c->unk_19d] * 12);
        if (x == 0) continue;
        if (x == -1) continue;
        if (func_020ffdd8((*gp)->unk_2e4 + (*gp)->unk_2ec[(*gp)->unk_19d] * 12) == 0) continue;
        i = 1;
        c = *gp;
        n = c->unk_0d;
        if (n >= 1) {
            u32 *p = (u32 *)((u8 *)c + 4);
            do {
                if (x == *(u32 *)((u8 *)p + 0xf4)) break;
                p++;
                i++;
            } while (i <= *(volatile u8 *)&c->unk_0d);
        }
        if (i <= n) continue;
        e0 = GsGp_GetBuddyIndex((*gp)->unk_00, x, &l.h);
        e1 = GsGp_GetBuddyStatus((*gp)->unk_00, l.h, &l.rec);
        if ((e0 | e1) != 0) continue;
        if (l.rec.unk_04 != 4) continue;
        n1 = GsUtil_GetKeyValue((char *)"VER", l.buf20, l.buf34, 0x2f);
        l.n2 = GsUtil_GetKeyValue((char *)"FME", l.buf14 + 2, l.buf34, 0x2f);
        n3 = GsUtil_GetKeyValue((char *)"MDF", l.buf14, l.buf34, 0x2f);
        if (n1 <= 0) continue;
        if (l.n2 <= 0) continue;
        if (n3 <= 0) continue;
        if (func_0212b854(l.buf20, 0, 10) != 3) continue;
        if ((*gp)->unk_16 != func_0212b854(l.buf14 + 2, 0, 10)) continue;
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
    Unk_ov065_02273b60_Ctx *c;
    u64 t;
    g->unk_1f0 = 0;
    g->unk_1ec = 0;
    g->unk_19f = 0;
    c = g;
    t = OS_GetTick();
    c->unk_1c0 = t;
    if (c->unk_15 == 0) {
        c->unk_198 = 3;
        DwcMatch_StartServerQuery(0);
        if (DwcMatch_HandleSbResult() != 0) return FALSE;
    } else if (c->unk_15 == 1) {
        DwcMatch_TryNextFriend(0, 0);
        if (DwcMatch_HandleResult() != 0) return FALSE;
    } else if (c->unk_15 == 3) {
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
    Unk_ov065_02273b60_Ctx *c = g;
    s32 r = DwcMatch_SendCommand(5, a, c->unk_24[0], c->unk_a4[0], 0, 0);
    g->unk_1ec = 0;
    return r;
}
#undef g
}
}

namespace F02273b60 {
extern "C" {
#define g sDwcMatch

s32 DwcMatch_CancelNewClient(s32 a) {
    Unk_ov065_02273b60_Ctx *c = g;
    BOOL b;
    if (c->unk_17 != 0 && c->unk_20 == c->unk_1e8) b = FALSE;
    else b = TRUE;
    if (b) {
        c->unk_17 = 0;
        g->unk_20 = 0;
        GsQr_SendStateChanged(g->unk_10);
    }
    if (g->unk_0d < 0x1f) g->unk_f4[g->unk_0d + 1] = 0;
    g->unk_3b4 = 0xff;
    if (g->unk_194 != 0) {
        GsNatNeg_Cancel(g->unk_194);
        g->unk_194 = 0;
    }
    g->unk_14 = g->unk_0d;
    g->unk_1ec = 0;
    if (!b) {
        if (g->unk_15 != 3) DwcMatch_AbortAndRestart();
    } else if (g->unk_15 == 0) {
        g->unk_198 = 3;
        g->unk_e8 = 2;
        u64 t = OS_GetTick();
        Unk_ov065_02273b60_Ctx *d = g;
        d->unk_ec = (u32)t;
        d->unk_f0 = (u32)(t >> 32);
    } else if (g->unk_15 == 1) {
        g->unk_198 = 4;
        DwcMatch_TryNextFriend(1, 0);
    } else if (g->unk_15 == 2) {
        s32 i;
        g->unk_198 = 14;
        g->unk_1cc = 0;
        g->unk_1a8 = 0;
        DwcMatch_CloseProfileConnection(a);
        for (i = 1; i <= g->unk_0d; i++) {
            if (DwcMatch_SendCancelSyncCommand(g->unk_f4[i], 13) == 0) return FALSE;
        }
        if (g->unk_0d == 0) DwcMatch_Restart(2);
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
    Unk_ov065_02273b60_Ctx *c = g;
    if (c->unk_15 == 3) {
        if (c->unk_0d != 0) DwcMatch_CloseAllConnections();
        DwcMatch_Fail(6, -0x13a2e);
        return FALSE;
    }
    c->unk_14 = c->unk_0d;
    g->unk_1f0 = 0;
    if (g->unk_194 != 0) {
        GsNatNeg_Cancel(g->unk_194);
        g->unk_194 = 0;
    }
    c = g;
    if (c->unk_0d != 0) {
        DwcMatch_AbortAndRestart();
    } else {
        c->unk_198 = 4;
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
    for (i = 1; i <= g->unk_0d; i++) {
        Unk_ov065_02273b60_Ctx *c = g;
        r = DwcMatch_SendCommand(10, c->unk_f4[i], c->unk_24[i], c->unk_a4[i], &c->unk_330, c->unk_330 + 1);
        if (r != 0) return r;
    }
    g->unk_17 = 0;
    g->unk_20 = 0;
    g->unk_1a0 = 1;
    GsTransport_CloseAll(*(u32 *)g->unk_04);
    g->unk_1a0 = 0;
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
        if (g->unk_19c < g->unk_0d - 1) {
            g->unk_198 = 13;
            args[0] = g->unk_f4[g->unk_19c + 1];
            args[1] = g->unk_19c + 1;
            args[2] = g->unk_2b8[g->unk_19c + 1];
            args[3] = g->unk_24[g->unk_19c + 1];
            args[4] = g->unk_a4[g->unk_19c + 1];
            kind = 5;
        } else {
            g->unk_17 = 0;
            g->unk_20 = 0;
            GsQr_SendStateChanged(g->unk_10);
            if (g->unk_15 == 0) g->unk_198 = 3;
            else if (g->unk_15 == 1) g->unk_198 = 4;
            else g->unk_198 = 10;
            g->unk_19c = 0;
            if (g->unk_15 == 2 || g->unk_0d == g->unk_16) {
                if (g->unk_15 == 2) {
                    g->unk_1f4 = g->unk_f4[g->unk_0d];
                } else {
                    g->unk_1f4 = 0;
                    g->unk_f4[0] = g->unk_1e8;
                }
                g->unk_198 = 0x10;
                g->unk_1c8 = 0;
                for (i = 1; i <= g->unk_0d; i++) {
                    DwcMatch_SendSyncPacket(g->unk_2b8[i], 2);
                }
            } else {
                args[0] = 0;
                args[1] = g->unk_0d;
                args[2] = g->unk_2b8[g->unk_0d];
                if (g->unk_15 == 0) {
                    g->unk_e8 = 2;
                    u64 t = OS_GetTick();
                    Unk_ov065_02273b60_Ctx *c = g;
                    c->unk_ec = (u32)t;
                    c->unk_f0 = (u32)(t >> 32);
                } else if (g->unk_15 == 1) {
                    DwcMatch_TryNextFriend(1, 0);
                }
            }
            if (g->unk_15 != 2) done = TRUE;
        }
        if (g->unk_198 != 0x10) {
            Unk_ov065_02273b60_Ctx *c = g;
            u32 n = c->unk_0d;
            if (DwcMatch_SendCommand(8, c->unk_f4[n], c->unk_24[n], c->unk_a4[n], args, kind), DwcMatch_HandleResult() != 0) return;
            g->unk_3b5 = 0;
        }
        break;
    case 1:
        g->unk_198 = 1;
        if (g->unk_15 == 3) g->unk_1f4 = g->unk_f4[g->unk_0d];
        done = TRUE;
        break;
    case 2:
        g->unk_198 = 1;
        if (g->unk_15 == 0 || g->unk_15 == 1) {
            g->unk_17 = 1;
            g->unk_20 = g->unk_1e8;
        }
        if (g->unk_0d > 1) {
            Unk_ov065_02273b60_Ctx *c = g;
            u32 args2 = (u32)&c->unk_f4[c->unk_0d - 1];
            DwcMatch_SendCommand(9, c->unk_f4[0], c->unk_24[0], c->unk_a4[0], (void *)args2, 1);
            if (DwcMatch_HandleResult() != 0) return;
        }
        break;
    case 3:
        g->unk_198 = 1;
        g->unk_1f4 = done;
        done = TRUE;
        break;
    case 4:
        if (g->unk_15 != 2) DwcFriend_SetOwnStatus(2, (char *)"", done);
        {
            Unk_ov065_02273b60_Ctx *c = g;
            BOOL r;
            if (c->unk_1f4 == 0) r = TRUE;
            else r = FALSE;
            g->unk_44c(0, 0, r, 0, DwcFriend_FindIndexByProfileId(), c->unk_450);
        }
        if (g->unk_15 == 0 || g->unk_15 == 1) {
            DwcMatch_Cleanup();
        } else {
            if (g->unk_e4 != 0) {
                GsSrvBrowser_Free(g->unk_e4);
                g->unk_e4 = 0;
            }
            GsNatNeg_FreeAll();
            if (g->unk_15 == 2) {
                DwcMatch_UpdateServerStatus();
                if (DwcMatch_HandleGpResult() != 0) return;
                if (sDwcMatchServerLock[0] == 1) sDwcMatchServerLock[1] = 1;
                g->unk_198 = 10;
            } else {
                g->unk_198 = 1;
            }
            g->unk_1f4 = 0;
        }
        g->unk_1a1 = 0;
        break;
    }
    if (done != 0 && g->unk_15 != 3) {
        GsSrvBrowser_Clear(g->unk_e4);
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
    if (g->unk_19e != 0 && g->unk_198 == 4) return TRUE;
    for (i = 0; i < n; a++, i++) {
        if (GsGp_IsBuddy(g->unk_00, *a) == 0) return FALSE;
        if (g->unk_19e != 0 && g->unk_198 == 1) return TRUE;
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
    Unk_ov065_02273b60_Ctx *c;
    BOOL r6, r5;
    DwcFriend_SetOwnStatus(1, (char *)"", 0);
    if (DwcMatch_HandleGpResult() == 0) {
        DwcMatch_Cleanup();
        c = g;
        v = c->unk_1f4;
        if (v != 0) r5 = TRUE;
        else if (c->unk_15 == 2) r5 = TRUE;
        else r5 = FALSE;
        if (v == 0) r6 = TRUE;
        else r6 = FALSE;
        g->unk_44c(0, 1, r6, r5, DwcFriend_FindIndexByProfileId(v), c->unk_450);
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
    Unk_ov065_02273b60_Ctx *c;
    BOOL r;
    if (a == 0) {
        DwcMatch_FinishCancelled();
    } else {
        DwcMatch_ResetState();
        c = g;
        if (c->unk_15 == 2 || c->unk_15 == 3) {
            if (c->unk_1f4 == 0) r = TRUE;
            else r = FALSE;
            g->unk_44c(0, 1, r, 0, DwcFriend_FindIndexByProfileId(), c->unk_450);
        } else if (c->unk_15 == 0) {
            if (a == 1) {
                DwcMatch_StartServerQuery(0);
                if (DwcMatch_HandleSbResult() != 0) return;
            }
        } else if (c->unk_15 == 1) {
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
    if (g->unk_15 == 2) return;
    if (g->unk_15 == 3) return;
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
    G->unk_17 = r;
    G->unk_20 = r;
    G->closeState = r;
    if (G->targetProfileId != 0) {
        if (*(volatile u8 *)&G->matchType == 0) {
            G->state = 3;
            r = DwcMatch_StartServerQuery(r);
            if (DwcMatch_HandleSbResult(r)) return r;
        } else if (*(volatile u8 *)&G->matchType == 1) {
            G->state = 4;
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
    GsTransport_CloseAll(*G->transportSocketPtr);
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
    Unk_ov065_02273274_G *g;
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
        Unk_ov065_02273274_G *g;
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
    G->syncSendTime = DwcNet_GetTimeMs();
}
#undef G
}
}

namespace F02273230 {
extern "C" {
#define G sDwcMatch

u32 DwcMatch_ProcessCloseSync(void) {
    Unk_ov065_02273274_G *g = G;
    u64 d;
    s32 st = g->state;
    if (st == 9 || st == 16 || st == 17) {
        d = DwcNet_GetTimeMs() - g->syncSendTime;
    } else {
        return 1;
    }
    switch (g->state) {
    case 9:
        if (d > 0x1770) {
            DwcMatch_SendSyncPacket(g->aids[0], 3);
        }
        break;
    case 16:
        if (d > 0x1770) {
            g->syncRetryCount++;
            Unk_ov065_02273274_G *h = G;
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
                        G->syncSendTime = DwcNet_GetTimeMs();
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
    G->cancelSyncSendTime = DwcNet_GetTimeMs();
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
        if (G->state != 8) {
            G->state = 8;
            DwcMatch_CloseProfileConnection(c);
        }
        if (!DwcMatch_SendCancelSyncCommand(a, 0xe)) return 0;
        break;
    case 0xe:
        if (G->state == 0xe) {
            u64 now = DwcNet_GetTimeMs();
            Unk_ov065_02273274_G *g = G;
            u64 t0 = g->cancelSyncSendTime;
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
                    G->state = 0xf;
                }
            }
        } else {
            if (!DwcMatch_SendCancelSyncCommand(a, 0xf)) return 0;
        }
        break;
    case 0xf:
        if (G->state == 8) {
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
    Unk_ov065_02273274_G *g = G;
    u64 d;
    s32 st = g->state;
    if (st == 8 || st == 14 || st == 15) {
        d = DwcNet_GetTimeMs() - g->cancelSyncSendTime;
    } else {
        return 1;
    }
    switch (g->state) {
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
                    G->cancelSyncSendTime = DwcNet_GetTimeMs();
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
    Unk_ov065_02273274_G *g;
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
    Unk_ov065_02273274_G *g;
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
    Unk_ov065_02273230_H *h = sDwcMatchSyncOption;
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
    Unk_ov065_02290818_Sm *s = sDwcMatchSyncOption;
    Unk_ov065_02290814_Ctx *cx;
    s32 st;
    s32 j;
    if (s == 0) {
        goto end;
    }
    if (s->isEnabled == 0) {
        goto end;
    }
    cx = sDwcMatch;
    if (cx->unk_15 == 2) {
        goto end;
    }
    if (*(volatile u8 *)&cx->unk_15 == 3) {
        goto end;
    }
    st = cx->unk_198;
    if (st == 0x13) {
        s32 t = DwcMatch_GetClientAidMask(0);
        u32 five;
        s = sDwcMatchSyncOption;
        if (s->answeredAidMask == t) {
            if (s->acceptedAidMask == t) {
                sDwcMatch->unk_16 = sDwcMatch->unk_0d;
                sDwcMatch->unk_19c = sDwcMatch->unk_0d - 1;
                DwcMatch_AdvanceConnect(0);
                goto end;
            }
            s->lastSendTime = DwcNet_GetTimeMs();
            s->answeredAidMask = 0;
            if (sDwcMatch->unk_15 == 0) {
                u64 t2;
                Unk_ov065_02290814_Ctx *cw;
                sDwcMatch->unk_198 = 3;
                sDwcMatch->unk_e8 = 2;
                t2 = OS_GetTick();
                cw = sDwcMatch;
                cw->unk_ec = (u32)t2;
                cw->unk_f0 = (u32)(t2 >> 32);
                goto end;
            }
            sDwcMatch->unk_198 = 4;
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
            for (j = 1; j <= sDwcMatch->unk_0d; j++) {
                u32 bits = sDwcMatchSyncOption->answeredAidMask;
                Unk_ov065_02290814_Ctx *c2;
                if ((bits & (1 << (((u8 *)sDwcMatch) + j)[0x2b8])) == 0) {
                    c2 = sDwcMatch;
                    if (DwcMatch_HandleResult(DwcMatch_SendCommand(0x11, c2->unk_f4[j], c2->unk_24[j], c2->unk_a4[j], 0, 0)) != 0) {
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
        if ((s32)cx->unk_0d < (s32)s->minPlayers - 1) {
            goto end;
        }
        if (s->retryCount == 0) {
            if (DwcNet_GetTimeMs() - s->startTime >= (u64)s->unk_04) {
                goto proceed;
            }
        }
        if (s->retryCount == 0) {
            goto end;
        }
        s = sDwcMatchSyncOption;
        if (DwcNet_GetTimeMs() - s->lastSendTime < (u64)(s->unk_04 >> 2)) {
            goto end;
        }
    proceed:
        if (sDwcMatch->unk_1ec != 0) {
            if (DwcMatch_HandleResult(DwcMatch_SendReservationCancel(sDwcMatch->unk_1ec)) != 0) {
                goto end;
            }
        }
        sDwcMatch->unk_198 = 0x13;
        {
            for (j = 1; j <= sDwcMatch->unk_0d; j++) {
                Unk_ov065_02290814_Ctx *c2 = sDwcMatch;
                if (DwcMatch_HandleResult(DwcMatch_SendCommand(0x11, c2->unk_f4[j], c2->unk_24[j], c2->unk_a4[j], 0, 0)) != 0) {
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
        switch (sDwcMatch->unk_198) {
        case 2: {
            i = 0;
            if (GsSrvBrowser_GetServerCount(list) > 0) {
                do {
                    u32 e = GsSrvBrowser_GetServer(list, i);
                    Unk_ov065_02290814_Ctx *cx = sDwcMatch;
                    if (cx->unk_1c != 0) {
                        if (cx->unk_1c == GsServer_GetPublicIp(e)) {
                            if (cx->unk_1a != 0) {
                                if (sDwcMatch->unk_1a == GsServer_GetPublicPort(e)) {
                                    break;
                                }
                            }
                        }
                    }
                    i++;
                } while (i < GsSrvBrowser_GetServerCount(list));
            }
            if (i < GsSrvBrowser_GetServerCount(list)) {
                sDwcMatch->unk_198 = 3;
                sDwcMatch->unk_1ec = 0;
                if (DwcMatch_HandleSbResult(DwcMatch_StartServerQuery(sDwcMatch->unk_1ec)) != 0) {
                    return;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                sDwcMatch->unk_e8 = 2;
                t = OS_GetTick();
                cw = sDwcMatch;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        }
        case 3:
            DwcMatch_EvaluateServers(1);
            if (GsSrvBrowser_GetServerCount(list) != 0) {
                if (DwcMatch_HandleResult(DwcMatch_SendReservation(0, 0)) == 0) {
                    sDwcMatch->unk_198 = 4;
                    sDwcMatch->unk_e8 = 0;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                sDwcMatch->unk_e8 = 2;
                t = OS_GetTick();
                cw = sDwcMatch;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
            }
            break;
        case 5: {
            if (GsSrvBrowser_GetServerCount(list) != 0) {
                do {
                    u32 e = GsSrvBrowser_GetServer(list, 0);
                    if (sDwcMatch->unk_1ac == GsServer_GetPublicIp(e)) {
                        if (sDwcMatch->unk_1aa == GsServer_GetPublicPort(e)) {
                            break;
                        }
                    }
                    GsSrvBrowser_RemoveServer(list, e);
                } while (GsSrvBrowser_GetServerCount(list) != 0);
            }
            if (GsSrvBrowser_GetServerCount(list) != 0) {
                u32 e = GsSrvBrowser_GetServer(list, 0);
                u32 h = GsServer_GetIntValue(e, (char *)"dwc_pid", 0);
                Unk_ov065_02290814_Ctx *cx = sDwcMatch;
                if (cx->unk_15 == 1 && h == cx->unk_f4[0]) {
                    if (DwcMatch_EvaluateServers(0) != 0) {
                        if (sDwcMatch->unk_0d != 0) {
                            if (DwcMatch_HandleResult(DwcMatch_SendCloseOrder(sDwcMatch->unk_0d)) != 0) {
                                return;
                            }
                        }
                    } else {
                        if (DwcMatch_HandleResult(DwcMatch_SendReservationCancel(sDwcMatch->unk_f4[0])) != 0) {
                            return;
                        }
                        sDwcMatch->unk_198 = 4;
                        if (DwcMatch_HandleResult(DwcMatch_TryNextFriend(0, 0)) != 0) {
                            return;
                        }
                        return;
                    }
                }
                sDwcMatch->unk_198 = 6;
                if (DwcMatch_HandleNnStartResult(DwcMatch_StartNatNegotiation(0, 0, GsSrvBrowser_GetServer(list, 0))) != 0) {
                    return;
                }
            } else {
                u64 t;
                Unk_ov065_02290814_Ctx *cw;
                sDwcMatch->unk_e8 = 2;
                t = OS_GetTick();
                cw = sDwcMatch;
                cw->unk_ec = (u32)t;
                cw->unk_f0 = (u32)(t >> 32);
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
    if (GsSrvBrowser_GetServerCount(sDwcMatch->unk_e4) > 0) {
        do {
            u32 e = GsSrvBrowser_GetServer(sDwcMatch->unk_e4, i);
            BOOL found;
            if (sDwcMatch->unk_15 == 0) {
                u32 h = GsServer_GetIntValue(e, (char *)"dwc_pid", 0);
                s32 j;
                found = FALSE;
                for (j = 1; j <= sDwcMatch->unk_0d; j++) {
                    if (h == sDwcMatch->unk_f4[j]) {
                        GsSrvBrowser_RemoveServer(sDwcMatch->unk_e4, e);
                        i--;
                        found = TRUE;
                        break;
                    }
                }
                if (found) {
                    goto next;
                }
            }
            if (sDwcMatch->unk_45c != 0) {
                s32 v = sDwcMatch->unk_45c(i, sDwcMatch->unk_460);
                if (v > 0) {
                    if (v > 0x7fffff) {
                        v = 0x7fffff;
                    }
                    GsServer_SetIntValue(e, (char *)"dwc_eval", (v << 8) | DwcNet_Rand32(0x100));
                } else {
                    GsSrvBrowser_RemoveServer(sDwcMatch->unk_e4, e);
                    i--;
                    flag2 = TRUE;
                }
            } else {
                GsServer_SetIntValue(e, (char *)"dwc_eval", DwcNet_Rand32(0x80));
            }
        next:
            i++;
        } while (i < GsSrvBrowser_GetServerCount(sDwcMatch->unk_e4));
    }
    if (a != 0) {
        if (GsSrvBrowser_GetServerCount(sDwcMatch->unk_e4) != 0) {
            GsSrvBrowser_Sort(sDwcMatch->unk_e4, 0, (char *)"dwc_eval", 0);
        }
    }
    if (flag2 != 0) {
        if (GsSrvBrowser_GetServerCount(sDwcMatch->unk_e4) == 0) {
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
        GsQr_BufAppendInt(b, sDwcMatch->unk_14);
        break;
    case 10:
        GsQr_BufAppendInt(b, sDwcMatch->unk_16);
        break;
    case 0x32:
        GsQr_BufAppendInt(b, *(s32 *)((u8 *)sDwcMatch + 0x1e8));
        break;
    case 0x33:
        GsQr_BufAppendInt(b, sDwcMatch->unk_15);
        break;
    case 0x34:
        GsQr_BufAppendInt(b, sDwcMatch->unk_20);
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
        Unk_ov065_02290840_Ent *e;
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
    sDwcMatch->unk_1c = a;
    sDwcMatch->unk_1a = b;
}

}
}

namespace F02272734 {
extern "C" {


void DwcMatch_OnQr2NnRequest(u32 a)
{
    if (sDwcMatch->unk_198 == 1) {
        sDwcMatch->unk_198 = 6;
    } else if (sDwcMatch->unk_198 != 6 && sDwcMatch->unk_198 != 0xb) {
        return;
    }
    if (sDwcMatch->unk_178 == a) {
        sDwcMatch->unk_174++;
    } else {
        sDwcMatch->unk_174 = 0;
        sDwcMatch->unk_178 = a;
    }
    Unk_ov065_02272734_Z z = Unk_ov065_02272734_Z_0;
    {
        Unk_ov065_02290814_Ctx *c = sDwcMatch;
        c->unk_17c = z;
        c->unk_180 = z;
    }
    if (DwcMatch_HandleNnStartResult(DwcMatch_StartNatNegotiation(1, a, z)) == 0) {
        sDwcMatch->unk_3b4 = 0xff;
    }
}

}
}

namespace F02271da0 {
extern "C" {


void DwcMatch_OnQr2ClientMessage(u8 *buf, u32 n) {
    u32 off = 0;
    Unk_ov065_022726a0_Hdr hdr;
    u8 body[0x80];
    if (DwcCore_GetState() == 5 ||
        (DwcCore_GetState() == 6 &&
         (sDwcMatch->unk_15 == 2 || sDwcMatch->unk_15 == 3))) {
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


void DwcMatch_OnNnComplete(s32 a, s32 b, Unk_ov065_02272428_Sub *c, Unk_ov065_02272428_Sub *d) {
    Unk_ov065_02290814 *g;
    if (sDwcMatch->unk_198 != 6 && sDwcMatch->unk_198 != 0xb) {
        return;
    }
    if (d == NULL) {
        return;
    }
    if (a == 0) {
        s32 idx;
        char buf[12];
        d->cookie = 0;
        sDwcMatch->unk_14++;
        idx = sDwcMatch->unk_14;
        if (d->clientIndex != 0) {
            sDwcMatch->unk_1f8[idx] = c->peerIp;
            sDwcMatch->unk_278[idx] = ((c->peerPort >> 8) & 0xff) | ((c->peerPort << 8) & 0xff00);
            sDwcMatch->unk_174 = 0;
            sDwcMatch->unk_178 = 0;
            *(u64 *)&sDwcMatch->unk_17c = 0;
            if (sDwcMatch->unk_198 == 0xb) {
                sDwcMatch->unk_198 = 0xc;
            } else {
                sDwcMatch->unk_198 = 7;
            }
            sDwcMatch->unk_0c = 0;
            OS_SNPrintf(buf, 12, (char *)"%u", sDwcMatch->unk_1e8);
            s32 r = GsTransport_Connect(sDwcMatch->unk_04->transportSocket, 0,
                                        GsTransport_AddressToString(sDwcMatch->unk_1f8[idx], sDwcMatch->unk_278[idx], 0),
                                        buf, -1, 0x1388, sDwcMatch->unk_08, 0);
            if (r == 1) {
                DwcMatch_HandleGt2Result();
                return;
            }
            if (r == 0) {
                return;
            }
            if (DwcMatch_CancelNewClient(sDwcMatch->unk_f4[idx]) != 0) {
                return;
            }
            return;
        }
        if (c != NULL) {
            s32 i = idx - 1;
            sDwcMatch->unk_1f8[i] = c->peerIp;
            sDwcMatch->unk_278[i] = ((c->peerPort >> 8) & 0xff) | ((c->peerPort << 8) & 0xff00);
        }
        g = sDwcMatch;
        {
            u64 t = DwcNet_GetTimeMs();
            *(u64 *)&g->unk_184 = t;
        }
        g->unk_198 = 7;
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
                if (DwcMatch_RestartAfterNnFailure(sDwcMatch->unk_f4[sDwcMatch->unk_0d]) != 0) {
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
            *(u64 *)&g->unk_17c = t;
        }
        if (r4 == 1 || (r4 == 2 && g->unk_174 >= 1)) {
            d->cookie = 0;
            if (sDwcMatch->unk_15 == 3 || sDwcMatch->unk_15 == 2) {
                if (DwcMatch_CountNnRetry(1) == 0) {
                    return;
                }
            } else {
                if (DwcMatch_CountNnRetry(0) == 0) {
                    return;
                }
            }
            sDwcMatch->unk_174 = 0;
            sDwcMatch->unk_178 = 0;
            *(u64 *)&sDwcMatch->unk_17c = 0;
            if (DwcMatch_CancelNewClient(sDwcMatch->unk_f4[sDwcMatch->unk_0d + 1]) != 0) {
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
    if (sDwcMatch->unk_15 != 3) {
        sDwcMatch->unk_175++;
    }
    if (sDwcMatch->unk_15 == 3 || sDwcMatch->unk_175 >= 5) {
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
