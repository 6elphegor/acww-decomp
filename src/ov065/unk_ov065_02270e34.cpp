// mwcc-flags: -O4,p -str reuse
#include "types.h"

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
typedef void (*Unk_ov065_02270c94_Cb)(s32, s32, u32);
typedef void (*Unk_ov065_02271440_Cb)(void *, void *, u32);

struct Unk_ov065_02270ba4_Sub {
    void *unk_00;
};

struct Unk_ov065_02270ba4_G {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    Unk_ov065_02270ba4_Sub unk_1c;
    void *unk_20;
    u32 unk_24;
    u32 unk_28;
    u8 unk_2c;
    u8 unk_2d;
    u16 unk_2e;
    u32 unk_30;
    u8 unk_34[0x20];
    void *unk_54;
    void *unk_58;
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 unk_68;
    u32 unk_6c;
    u32 unk_70;
    u32 unk_74;
    u32 unk_78;
    u32 unk_7c;
    u32 unk_80;
    u8 unk_84[0x2e8 - 0x84];
    u8 unk_2e8[0x33c - 0x2e8];
    u8 unk_33c[0x34c - 0x33c];
    void *unk_34c;
    u8 unk_350[4];
    u8 unk_354;
    u8 unk_355[0x420 - 0x355];
    void *unk_420;
    u8 unk_424[0x7a0 - 0x424];
    u8 unk_7a0[4];
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
    u32 unk_1c;
    u8 unk_20[4];
    u32 unk_24;
};

struct Unk_ov065_02270eb0_H {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[4];
    u32 unk_0c;
    u8 unk_10[8];
    Unk_ov065_02270c94_Cb unk_18;
    u32 unk_1c;
    Unk_ov065_02270eb0_P *unk_20;
    u8 unk_24[4];
    void *unk_28;
    u64 unk_2c;
    s32 unk_34;
    u64 unk_38;
    Unk_ov065_02270eb0_Tri unk_40;
    char unk_4c[0x100];
    char unk_14c[0x100];
    u8 unk_24c[9];
    char unk_255[0x100];
};

struct Unk_ov065_02270eb0_X {
    s32 unk_00;
    u32 unk_04;
    u8 unk_08[0x86];
    s8 unk_8e[1];
};

struct Unk_ov065_0227112c_Pair {
    u32 hi;
    u32 lo;
};

struct Unk_ov065_02270fd4_S {
    s32 unk_00;
    u8 unk_04[0x46];
    char unk_4a[0x100];
    u8 unk_14a[0x2d];
    char unk_177[0x4d];
};

struct Unk_ov065_0227112c_Cfg {
    u8 unk_00[0x16];
    char unk_16[14];
    void *unk_24;
    void *unk_28;
};

namespace Unk_ov065_0227138c_Ns {
extern "C" s32 DwcLogin_HandleGpResult(s32 r);
}
extern "C" {
extern s32 sDwcErrorClass;
extern s32 sDwcErrorCode;
extern u32 sDwcLoginDoneArg;
extern Unk_ov065_02270eb0_H *sDwcLoginControl;
extern Unk_ov065_02271440_Cb sDwcLoginDoneCallback;
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
s32 DwcLogin_HandleGpResult(s32 r, s32 unused);
}
}

namespace F02271488 {
struct Unk_ov065_02271488_Inner {
    void *unk_00;
};

struct Unk_ov065_02271488_A {
    Unk_ov065_02271488_Inner *unk_00;
    s32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 unk_10;
    u32 unk_14;
    void (*unk_18)(s32, s32, void *);
    void *unk_1c;
    void *unk_20;
    u8 unk_24[0x10];
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u8 unk_40[0x224];
};

struct Unk_ov065_02271774_Ent {
    u8 unk_00[12];
};

struct Unk_ov065_02271774_B {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
    Unk_ov065_02271774_Ent *unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    void *unk_20;
    u32 unk_24;
    s32 unk_28;
    void (*unk_2c)(s32, s32, void *);
    void *unk_30;
    void *unk_34;
    void *unk_38;
    void (*unk_3c)(s32, s32, void *);
    void *unk_40;
    void (*unk_44)(s32, void *);
    void *unk_48;
};

struct Unk_ov065_02271774_Item {
    s32 unk_00;
    u8 unk_04[0xa8];
};

struct Unk_ov065_02271774_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_ov065_02271774_Item *unk_0c;
};

struct Unk_ov065_02271ba0_Out {
    s32 unk_00;
    u8 unk_04[0x210];
};
extern "C" {
extern Unk_ov065_02271488_A *sDwcLoginControl;
extern Unk_ov065_02271774_B *sDwcFriendControl;
u64 OS_GetTick(void);
u64 func_02132ef8(u64, u64);
void *MI_CpuFill8(void *, s32, u32);
s32 strcmp(void *, void *);
s32 func_021000f4(void *);
s32 func_021000fc(void *);
void func_02100094(void *);
void func_020ffb98(void *, void *, void *);
void func_020ffba8(void *, s32);
s32 func_020ffc60(void *, void *);
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
s32 DwcFriend_MergeDuplicate(Unk_ov065_02271774_Ent *, s32, s32);
s32 DwcFriend_SendBuddyRequest(s32);
void DwcFriend_DeleteEntry(Unk_ov065_02271774_Ent *, s32, s32);
s32 DwcFriend_RemoveDuplicates(Unk_ov065_02271774_Ent *, s32, s32);
void DwcLogin_Process(void);
void DwcLogin_Begin(void);
void DwcLogin_InitControl(void *mem, void *a, void *b, void *c, void *d, void *e, void *f);
void *DwcFriend_GetControlField20(void);
void DwcFriend_OnAuthorizedInfo(void *x, Unk_ov065_02271774_Rec *p);
void DwcFriend_OnBuddyRequestInfo(void *x, Unk_ov065_02271774_Rec *p);
void DwcFriend_OnProfileSearch(void *x, Unk_ov065_02271774_Rec *p, s32 idx);
s32 DwcFriend_GetBuddyStatus(void *a, void *b);
void DwcFriend_FinishUpdate(void);
void DwcFriend_SyncList(Unk_ov065_02271774_Ent *arr, s32 n);
void DwcFriend_Abort(void);
s32 DwcFriend_Tick(void);
}
}

namespace F02271da0 {
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
    u32 unk_00;
    u32 unk_04;
    char unk_08[0x100];
    char unk_108[0x108];
};

struct Unk_ov065_02272428_Sub {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    s32 unk_08;
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
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
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
void DwcFriend_ClearControl();
void DwcFriend_NotifyAdded(s32 idx);
void DwcFriend_ResetTimer();
void DwcFriend_OnBuddyStatus(void *a, u32 *b);
s32 DwcFriend_HandleAuthorizedMessage(void *a, u32 *b);
void DwcFriend_OnBuddyRequest(void *a, u32 *b);
void DwcFriend_StartUpdate(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f, void (*g)(void), void (*h)(void));
void DwcFriend_Process();
void DwcFriend_InitControl(Unk_ov065_0229080c *a, Unk_ov065_0229080c_Sub *b, s32 c, Unk_ov065_0229080c_Ent *d, s32 e);
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
    Unk_ov065_0227194c_Out o;
    if (DwcFriend_GetBuddyStatus(a, &o) != 0) {
        if (o.unk_04 == 6) {
            if (p1 != NULL) {
                if (GsUtil_GetKeyValue((char *)"SCM", tmp, o.unk_08, 0x2f) > 0) {
                    *p1 = func_0212b854(tmp, NULL, 10);
                } else {
                    *p1 = 0;
                }
            }
            if (p2 != NULL) {
                if (GsUtil_GetKeyValue((char *)"SCN", tmp, o.unk_08, 0x2f) > 0) {
                    *p2 = func_0212b854(tmp, NULL, 10);
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
            func_02127838(dst, o.unk_108);
        }
        return (u8)o.unk_04;
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
        if (func_020ffdd8(p) != 0) {
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
        if ((u8)(sDwcFriendControl->unk_1e + 0xff) <= 1) {
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
        s32 t = func_020ffc60(DwcLogin_GetUserData(), p);
        if (t != 0 && t != -1 && GsGp_IsBuddy(sDwcFriendControl->unk_04, t) != 0) {
            GsGp_DeleteBuddy(sDwcFriendControl->unk_04, t);
        }
    }
    MI_CpuFill8(p, 0, 12);
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_InitControl(Unk_ov065_0229080c *a, Unk_ov065_0229080c_Sub *b, s32 c, Unk_ov065_0229080c_Ent *d, s32 e) {
    sDwcFriendControl = a;
    a->unk_00 = 0;
    sDwcFriendControl->unk_04 = b;
    sDwcFriendControl->unk_08 = 0;
    {
        Unk_ov065_0229080c *g = sDwcFriendControl;
        g->unk_0c = 0;
        g->unk_10 = 0;
        g->unk_14 = e;
    }
    sDwcFriendControl->unk_18 = d;
    sDwcFriendControl->unk_1c = 0;
    sDwcFriendControl->unk_1d = 0;
    sDwcFriendControl->unk_1e = 0;
    sDwcFriendControl->unk_1f = 0;
    sDwcFriendControl->unk_20 = 0;
    sDwcFriendControl->unk_24 = 0;
    sDwcFriendControl->unk_28 = c;
    sDwcFriendControl->unk_2c = NULL;
    sDwcFriendControl->unk_30 = 0;
    sDwcFriendControl->unk_34 = NULL;
    sDwcFriendControl->unk_38 = 0;
    sDwcFriendControl->unk_3c = NULL;
    sDwcFriendControl->unk_40 = NULL;
    sDwcFriendControl->unk_44 = NULL;
    sDwcFriendControl->unk_48 = 0;
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
    if (sDwcFriendControl->unk_18 == NULL) {
        return;
    }
    if (DwcCore_HasError() != 0) {
        return;
    }
    if (DwcFriend_GetControlField20() != 0 && GsPersist_Process() == 0) {
        DwcFriend_Fail(6, -0x1194a);
        return;
    }
    if (sDwcFriendControl->unk_04 != NULL && sDwcFriendControl->unk_04->unk_00 != NULL) {
        DwcFriend_Tick();
        if (DwcFriend_HandleGpResult() != 0) {
            return;
        }
        if (sDwcFriendControl->unk_18 != NULL && sDwcFriendControl->unk_1e != 3 && sDwcFriendControl->unk_08 > 7) {
            if (sDwcFriendControl->unk_1e <= 1) {
                DwcFriend_SyncList(sDwcFriendControl->unk_18, sDwcFriendControl->unk_14);
            }
            if (sDwcFriendControl->unk_1c >= sDwcFriendControl->unk_14) {
                sDwcFriendControl->unk_1e = 3;
                sDwcFriendControl->unk_1f++;
            }
        }
    }
    if (sDwcFriendControl->unk_1f >= 2) {
        sDwcFriendControl->unk_1f = 0;
        DwcFriend_FinishUpdate();
    }
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_StartUpdate(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f,
                         void (*g)(void), void (*h)(void)) {
    sDwcFriendControl->unk_2c = c;
    sDwcFriendControl->unk_30 = d;
    sDwcFriendControl->unk_34 = e;
    sDwcFriendControl->unk_38 = f;
    sDwcFriendControl->unk_3c = g;
    sDwcFriendControl->unk_40 = h;
    sDwcFriendControl->unk_1d = 0;
    sDwcFriendControl->unk_1e = 0;
    sDwcFriendControl->unk_1f = 0;
    sDwcFriendControl->unk_1c = 0;
    sDwcFriendControl->unk_00 = 1;
    sDwcFriendControl->unk_1f++;
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_Fail(s32 a, s32 b) {
    if (sDwcFriendControl != NULL && a != 0) {
        DwcCore_SetError(a, b);
        if (sDwcFriendControl->unk_00 != 0 && sDwcFriendControl->unk_00 != 2) {
            sDwcFriendControl->unk_2c(a, sDwcFriendControl->unk_1d, sDwcFriendControl->unk_30);
        }
        DwcFriend_Abort();
    }
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_OnBuddyRequest(void *a, u32 *b) {
    if (sDwcFriendControl->unk_18 != NULL) {
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
    Unk_ov065_0227194c_Out o;
    if (sDwcFriendControl->unk_34 != NULL) {
        s32 i = DwcFriend_FindIndexByProfileId(b[0]);
        if (i != -1) {
            GsGp_GetBuddyStatus(a, b[2], &o);
            sDwcFriendControl->unk_34(i, (u8)o.unk_04, o.unk_108, sDwcFriendControl->unk_38);
        }
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_GetProfileId(s32 i) {
    s32 r = func_020ffc60(DwcLogin_GetUserData(), &sDwcFriendControl->unk_18[i]);
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
    for (i = 0; i < sDwcFriendControl->unk_14; i++) {
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
        sDwcFriendControl->unk_08 = 0;
        u64 t = OS_GetTick();
        Unk_ov065_0229080c *g = sDwcFriendControl;
        g->unk_0c = (u32)t;
        g->unk_10 = (u32)(t >> 32);
    }
}
}
}

namespace F02271da0 {
extern "C" {
s32 DwcFriend_SetOwnStatus(s32 a, char *b, char *c) {
    Unk_ov065_0229080c_Sub *s;
    if (sDwcFriendControl == NULL || sDwcFriendControl->unk_04 == NULL) {
        return 0;
    }
    s = sDwcFriendControl->unk_04;
    if (a == -1) {
        a = s->unk_00->unk_214;
    }
    if (b == NULL) {
        b = (char *)s->unk_00->unk_218;
    }
    if (c == NULL) {
        c = (char *)s->unk_00->unk_318;
    }
    return GsGp_SetStatus(s, a, b, c);
}
}
}

namespace F02271da0 {
extern "C" {
void DwcFriend_NotifyAdded(s32 idx) {
    Unk_ov065_0227194c_Out o;
    if (sDwcFriendControl->unk_44 != NULL && sDwcFriendControl->unk_00 != 1) {
        sDwcFriendControl->unk_44(idx, sDwcFriendControl->unk_48);
    }
    if (sDwcFriendControl->unk_34 != NULL) {
        s32 r = DwcFriend_GetStatusString(&sDwcFriendControl->unk_18[idx], o.unk_108);
        sDwcFriendControl->unk_34(idx, r, o.unk_108, sDwcFriendControl->unk_38);
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
    Unk_ov065_02271774_B *b = sDwcFriendControl;
    u64 d = (OS_GetTick() - *(u64 *)&b->unk_0c) << 6;
    d = d / 0x82ea;
    if (d >= 0x12c) {
        b->unk_08++;
        GsGp_Process(sDwcFriendControl->unk_04);
        *(u64 *)&sDwcFriendControl->unk_0c = OS_GetTick();
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
        sDwcFriendControl->unk_00 = 0;
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_SyncList(Unk_ov065_02271774_Ent *arr, s32 n)
{
    s32 cnt;
    s32 idx;
    u8 buf[0x18];
    Unk_ov065_02271ba0_Out out;
    s32 j;
    s32 id;
    if (sDwcFriendControl->unk_1e == 0) {
        DwcFriend_HandleGpResult(GsGp_GetNumBuddies(sDwcFriendControl->unk_04, &cnt));
        idx = 0;
        if (cnt > 0) {
            do {
                DwcFriend_HandleGpResult(GsGp_GetBuddyStatus(sDwcFriendControl->unk_04, idx, &out));
                for (j = 0; j < n; j++) {
                    if (out.unk_00 == DwcFriend_GetProfileId(j)) {
                        s32 off = j * 12;
                        if (func_021000fc((void *)((u32)arr + off)) == 0) {
                            Unk_ov065_02271774_Ent *e = (Unk_ov065_02271774_Ent *)((u8 *)arr + off);
                            func_020ffba8(e, out.unk_00);
                            func_02100094(e);
                            sDwcFriendControl->unk_1d = 1;
                        }
                        break;
                    }
                }
                if (j == n) {
                    DwcFriend_HandleGpResult(GsGp_DeleteBuddy(sDwcFriendControl->unk_04, out.unk_00));
                    cnt--;
                    idx--;
                }
                idx++;
            } while (idx < cnt);
        }
        sDwcFriendControl->unk_1e = 1;
    }
    while (sDwcFriendControl->unk_1c < n) {
        id = DwcFriend_GetProfileId(sDwcFriendControl->unk_1c);
        if (id != 0) {
            if (DwcFriend_MergeDuplicate(arr, sDwcFriendControl->unk_1c, id) == 0) {
                DwcFriend_HandleGpResult(GsGp_GetBuddyIndex(sDwcFriendControl->unk_04, id, &idx));
                if (idx == -1) {
                    DwcFriend_SendBuddyRequest(id);
                }
            }
        } else {
            if (func_020ffc60((void *)DwcLogin_GetUserData(), &arr[sDwcFriendControl->unk_1c]) == -1) {
                func_020ffb98((void *)DwcLogin_GetUserData(), &arr[sDwcFriendControl->unk_1c], buf);
                GsGp_ProfileSearch(sDwcFriendControl->unk_04, 0, 0, 0, 0, buf, 0, 0, (void *)DwcFriend_OnProfileSearch, sDwcFriendControl->unk_1c);
                sDwcFriendControl->unk_1e = 2;
                return;
            }
        }
        sDwcFriendControl->unk_1c++;
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_FinishUpdate(void)
{
    sDwcFriendControl->unk_2c(0, sDwcFriendControl->unk_1d, sDwcFriendControl->unk_30);
    sDwcFriendControl->unk_00 = 2;
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_DeleteEntry(Unk_ov065_02271774_Ent *arr, s32 i, s32 j)
{
    if (sDwcFriendControl != NULL) {
        MI_CpuFill8(&arr[i], 0, 12);
        if (sDwcFriendControl->unk_3c != NULL) {
            sDwcFriendControl->unk_3c(i, j, sDwcFriendControl->unk_40);
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_MergeDuplicate(Unk_ov065_02271774_Ent *arr, s32 n, s32 id)
{
    s32 i;
    for (i = 0; i < n; i++) {
        s32 t = DwcFriend_GetProfileId(i);
        if (t != 0 && t == id) {
            if (func_021000fc(&arr[n]) != 0 && func_021000fc(&arr[i]) == 0) {
                DwcFriend_DeleteEntry(arr, i, n);
            } else {
                DwcFriend_DeleteEntry(arr, n, i);
            }
            sDwcFriendControl->unk_1d = 1;
            return TRUE;
        }
    }
    return FALSE;
}
}
}

namespace F02271488 {
extern "C" {
s32 DwcFriend_RemoveDuplicates(Unk_ov065_02271774_Ent *arr, s32 n, s32 id)
{
    s32 res, i, j, t;
    Unk_ov065_02271774_Ent *q, *p;
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
                        if (func_021000f4(q) == 2 && func_021000f4(&arr[j]) == 3) {
                            func_020ffba8(p, t);
                        }
                        if (func_021000fc(&arr[j]) != 0) {
                            func_02100094(p);
                        }
                        DwcFriend_DeleteEntry(arr, j, i);
                        sDwcFriendControl->unk_1d = 1;
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
    s32 r = GsGp_SendBuddyRequest(sDwcFriendControl->unk_04, a, sDwcFriendControl->unk_28);
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
    t = func_020ffc60((void *)DwcLogin_GetUserData(), a);
    if (t > 0) {
        if (GsGp_GetBuddyIndex(sDwcFriendControl->unk_04, t, &out) != 0) {
            return FALSE;
        }
    }
    if (t <= 0 || out == -1) {
        return FALSE;
    }
    if (GsGp_GetBuddyStatus(sDwcFriendControl->unk_04, out, b) == 0) {
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
void DwcFriend_OnProfileSearch(void *x, Unk_ov065_02271774_Rec *p, s32 idx)
{
    s32 off;
    s32 i;
    s32 out;
    if (p->unk_00 == 0 && p->unk_04 != 0) {
        off = idx * 12;
        if (func_021000f4((u8 *)sDwcFriendControl->unk_18 + off) != 0) {
            if (sDwcFriendControl->unk_00 == 1) {
                sDwcFriendControl->unk_1d = 1;
                for (i = 0; i < p->unk_04; i++) {
                    if (DwcFriend_MergeDuplicate(sDwcFriendControl->unk_18, idx, p->unk_0c[i].unk_00) != 0) {
                        sDwcFriendControl->unk_1c++;
                        sDwcFriendControl->unk_1e = 1;
                        p->unk_08 = 0x601;
                        return;
                    }
                }
                for (i = 0; i < p->unk_04; i++) {
                    DwcFriend_HandleGpResult(GsGp_GetBuddyIndex(x, p->unk_0c[i].unk_00, &out));
                    if (out == -1) {
                        DwcFriend_SendBuddyRequest(p->unk_0c[i].unk_00);
                    } else {
                        func_020ffba8((u8 *)sDwcFriendControl->unk_18 + off, p->unk_0c[0].unk_00);
                        func_02100094((u8 *)sDwcFriendControl->unk_18 + off);
                        DwcFriend_NotifyAdded(idx);
                        sDwcFriendControl->unk_1c++;
                        sDwcFriendControl->unk_1e = 1;
                        p->unk_08 = 0x601;
                        return;
                    }
                }
                if (p->unk_08 != 0x600) {
                    sDwcFriendControl->unk_1c++;
                    sDwcFriendControl->unk_1e = 1;
                    return;
                }
            }
            return;
        }
    }
    if (p->unk_00 != 0) {
        s32 e = DwcFriend_HandleGpResult(p->unk_00);
        if (e > 0) {
            e = 1;
        } else if (e != 0) {
            e = e;
        }
    } else {
        if (sDwcFriendControl->unk_00 == 1 || func_021000f4((u8 *)sDwcFriendControl->unk_18 + idx * 12) == 0) {
            sDwcFriendControl->unk_1c++;
            sDwcFriendControl->unk_1e = 1;
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_OnBuddyRequestInfo(void *x, Unk_ov065_02271774_Rec *p)
{
    s32 i;
    s32 found;
    found = 0;
    if (p->unk_00 == 0) {
        i = found;
        for (; i < sDwcFriendControl->unk_14; i++) {
            if (func_021000f4(&sDwcFriendControl->unk_18[i]) == 1) {
                u8 buf[24];
                func_020ffb98((void *)DwcLogin_GetUserData(), &sDwcFriendControl->unk_18[i], buf);
                if (strcmp(buf, (u8 *)p + 0x8e) == 0) {
                    GsGp_AuthorizeBuddyRequest(x, p->unk_04);
                    func_020ffba8(&sDwcFriendControl->unk_18[i], p->unk_04);
                    found = 1;
                }
            } else if (func_021000f4(&sDwcFriendControl->unk_18[i]) == 3
                       || func_021000f4(&sDwcFriendControl->unk_18[i]) == 2) {
                s32 v = p->unk_04;
                if (v == func_020ffc60((void *)DwcLogin_GetUserData(), &sDwcFriendControl->unk_18[i])) {
                    GsGp_AuthorizeBuddyRequest(x, v);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            DwcFriend_SendBuddyRequest(p->unk_04);
        } else {
            GsGp_DenyBuddyRequest(x, p->unk_04);
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void DwcFriend_OnAuthorizedInfo(void *x, Unk_ov065_02271774_Rec *p)
{
    s32 i;
    s32 found;
    u8 buf[28];
    found = 0;
    if (p->unk_00 == 0) {
        i = found;
        for (; i < sDwcFriendControl->unk_14; i++) {
            if (func_021000f4(&sDwcFriendControl->unk_18[i]) == 1) {
                func_020ffb98((void *)DwcLogin_GetUserData(), &sDwcFriendControl->unk_18[i], buf);
                if (strcmp(buf, (u8 *)p + 0x8e) == 0) {
                    func_020ffba8(&sDwcFriendControl->unk_18[i], p->unk_04);
                    func_02100094(&sDwcFriendControl->unk_18[i]);
                    found = 1;
                }
            } else if (func_021000f4(&sDwcFriendControl->unk_18[i]) == 3
                       || func_021000f4(&sDwcFriendControl->unk_18[i]) == 2) {
                s32 v = p->unk_04;
                if (v == func_020ffc60((void *)DwcLogin_GetUserData(), &sDwcFriendControl->unk_18[i])) {
                    func_020ffba8(&sDwcFriendControl->unk_18[i], v);
                    func_02100094(&sDwcFriendControl->unk_18[i]);
                    found = 1;
                }
            }
        }
        if (found != 0) {
            DwcFriend_NotifyAdded(DwcFriend_RemoveDuplicates(sDwcFriendControl->unk_18, sDwcFriendControl->unk_14, p->unk_04));
            sDwcFriendControl->unk_1d = 1;
        }
    }
}
}
}

namespace F02271488 {
extern "C" {
void *DwcFriend_GetControlField20(void)
{
    return sDwcFriendControl->unk_20;
}
}
}

namespace F02271488 {
extern "C" {
void DwcLogin_InitControl(void *mem, void *a, void *b, void *c, void *d, void *e, void *f)
{
    sDwcLoginControl = (Unk_ov065_02271488_A *)mem;
    MI_CpuFill8(sDwcLoginControl, 0, 0x264);
    sDwcLoginControl->unk_00 = (Unk_ov065_02271488_Inner *)b;
    sDwcLoginControl->unk_04 = 0;
    sDwcLoginControl->unk_08 = c;
    sDwcLoginControl->unk_0c = d;
    sDwcLoginControl->unk_18 = (void (*)(s32, s32, void *))e;
    sDwcLoginControl->unk_1c = f;
    sDwcLoginControl->unk_20 = a;
}
}
}

namespace F02271488 {
extern "C" {
void DwcLogin_Begin(void)
{
    DwcLogin_StartNasAuth((void *)DwcLogin_OnNasAuthDone, 0);
    sDwcLoginControl->unk_04 = 1;
    sDwcLoginControl->unk_34 = 0;
}
}
}

namespace F02271488 {
extern "C" {
void DwcLogin_Process(void)
{
    if (sDwcLoginControl != NULL) {
        if (DwcCore_HasError() == 0) {
            switch (sDwcLoginControl->unk_04) {
            case 0:
                break;
            case 1:
                DwcLogin_PollNasAuth();
                break;
            case 2:
            case 3:
            case 4: {
                Unk_ov065_02271488_Inner *in = sDwcLoginControl->unk_00;
                if (in != NULL) {
                    if (in->unk_00 != NULL) {
                        GsGp_Process(in);
                    }
                }
                if (sDwcLoginControl->unk_34 != 0) {
                    u64 d = (OS_GetTick() - *(u64 *)&sDwcLoginControl->unk_38) << 6;
                    d = d / 0x82ea;
                    if (d > 0xea60) {
                        DwcLogin_Fail(6, -0xee8e);
                        sDwcLoginControl->unk_34 = 0;
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
        return sDwcLoginControl->unk_20;
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
        if (sDwcLoginControl->unk_18 != NULL) {
            sDwcLoginControl->unk_18(a, 0, sDwcLoginControl->unk_1c);
        }
        DwcLogin_ResetState();
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_Shutdown(void) {
    if (sDwcLoginControl->unk_28 != NULL) {
        NasAuth_Abort();
        NasAuth_Destroy();
        DwcNet_Free(0, sDwcLoginControl->unk_28, 0);
        sDwcLoginControl->unk_28 = NULL;
    }
    sDwcLoginControl = NULL;
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_ResetState(void) {
    if (sDwcLoginControl != NULL) {
        sDwcLoginControl->unk_04 = 0;
        sDwcLoginControl->unk_34 = 0;
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
void DwcLogin_OnGpConnected(void *a0, Unk_ov065_02270eb0_X *x) {
    sDwcLoginControl->unk_34 = 0;
    if (x->unk_00 == 0) {
        if (sDwcLoginControl->unk_04 == 2) {
            if (Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(DwcFriend_SetOwnStatus(1, (void *)"")) == 0) {
                if (sDwcLoginControl->unk_20->unk_1c == x->unk_04) {
                    if (DwcConn_CreateGt2Socket() == 0) {
                        if (DwcMatch_StartQr2(x->unk_04) == 0) {
                            sDwcLoginControl->unk_04 = 5;
                            sDwcLoginControl->unk_18(0, x->unk_04, sDwcLoginControl->unk_1c);
                        }
                    }
                } else {
                    DwcLogin_Fail(6, -60000);
                }
            }
        } else if (sDwcLoginControl->unk_04 == 3) {
            s32 r = Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_GetInfo(a0, x->unk_04, 0, 0, (void *)DwcLogin_OnGpProfileInfo, 0));
            if (r == 0) {
            } else if (r != 0) {
                r = r;
            }
        }
    } else {
        Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(x->unk_00);
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
    func_02127838(sDwcLoginControl->unk_4c, a);
    func_02127838(sDwcLoginControl->unk_14c, b);
    Unk_ov065_02270eb0_H *g = sDwcLoginControl;
    u64 t = OS_GetTick();
    g->unk_38 = t;
    g->unk_34 = 1;
    Unk_ov065_02270eb0_H *h = sDwcLoginControl;
    if (Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_ConnectPreAuth(h->unk_00, h->unk_4c, h->unk_14c, 1, 0, c, 0)) == 0) {
        sDwcLoginControl->unk_04 = d;
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_StartNasAuth(Unk_ov065_02271440_Cb cb, u32 arg) {
    Unk_ov065_0227112c_Cfg cfg;
    MI_CpuFill8(&cfg, 0, 0x2c);
    sDwcLoginDoneCallback = cb;
    sDwcLoginDoneArg = arg;
    if (func_020ffdfc(sDwcLoginControl->unk_20)) {
        func_020fff48((u8 *)sDwcLoginControl->unk_20 + 0x10, sDwcLoginControl->unk_20->unk_24,
                      sDwcLoginControl->unk_24c);
    } else {
        if (func_020ffe08(&sDwcLoginControl->unk_40) == 0) {
            if (func_020ffe24((u8 *)sDwcLoginControl->unk_20 + 4)) {
                sDwcLoginControl->unk_40 = *(Unk_ov065_02270eb0_Tri *)((u8 *)sDwcLoginControl->unk_20 + 4);
            } else {
                func_020ffe84(&sDwcLoginControl->unk_40);
            }
        } else {
            func_02100160(&sDwcLoginControl->unk_40, (u32)(((u64)((s64)OS_GetTick() * 0x5d588b656c078965LL) + 0x269ec3) >> 32));
        }
        func_020fff48(&sDwcLoginControl->unk_40, sDwcLoginControl->unk_0c, sDwcLoginControl->unk_24c);
    }
    func_02127838(cfg.unk_16, sDwcLoginControl->unk_255);
    cfg.unk_24 = (void *)DwcNet_Alloc;
    cfg.unk_28 = (void *)DwcNet_Free;
    void *p = DwcNet_AllocAligned(0, 0x1a60, 4);
    sDwcLoginControl->unk_28 = p;
    u64 t2 = OS_GetTick();
    sDwcLoginControl->unk_2c = t2;
    NasAuth_Start(&cfg, p);
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_PollNasAuth(void) {
    Unk_ov065_0227112c_Cfg cfg;
    Unk_ov065_02270fd4_S s1;
    Unk_ov065_02270fd4_S s2;
    if (NasAuth_GetState() == 0x14) {
        NasAuth_GetResult(&s1.unk_00);
        func_02127838(sDwcLoginControl->unk_4c, s1.unk_4a);
        func_02127838(sDwcLoginControl->unk_14c, s1.unk_177);
        NasAuth_Destroy();
        DwcNet_Free(0, sDwcLoginControl->unk_28, 0);
        sDwcLoginControl->unk_28 = NULL;
        if (func_020ffdfc(sDwcLoginControl->unk_20)) {
            sDwcLoginDoneCallback(sDwcLoginControl->unk_4c, sDwcLoginControl->unk_14c, sDwcLoginDoneArg);
        } else {
            DwcLogin_GpConnect(sDwcLoginControl->unk_4c, sDwcLoginControl->unk_14c,
                                (void *)DwcLogin_OnGpConnected, 3);
        }
    } else if (NasAuth_GetState() != 0) {
        u64 now = OS_GetTick();
        u64 d = now - sDwcLoginControl->unk_2c;
        if ((d * 64) / 0x82ea > 0x2710) {
            NasAuth_GetResult(&s2.unk_00);
            NasAuth_Destroy();
            DwcNet_Free(0, sDwcLoginControl->unk_28, 0);
            sDwcLoginControl->unk_28 = NULL;
            DwcLogin_Fail(2, s2.unk_00);
        } else {
            NasAuth_Destroy();
            MI_CpuFill8(&cfg, 0, 0x2c);
            func_02127838(cfg.unk_16, sDwcLoginControl->unk_255);
            cfg.unk_24 = (void *)DwcNet_Alloc;
            cfg.unk_28 = (void *)DwcNet_Free;
            NasAuth_Start(&cfg, sDwcLoginControl->unk_28);
        }
    }
}
}
}

namespace F02270b74 {
extern "C" {
void DwcLogin_OnGpProfileInfo(void *a0, Unk_ov065_02270eb0_X *x) {
    u8 a[0x14];
    u8 b[0x14];
    u8 c[0x1c];
    if (x->unk_00 == 0) {
        if (sDwcLoginControl->unk_04 == 3) {
            if (x->unk_8e[0] == 0) {
                func_020fff48((u8 *)sDwcLoginControl->unk_20 + 4, sDwcLoginControl->unk_0c, a);
                if (Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_SetInfo(a0, 0x705, a)) == 0) {
                    sDwcLoginControl->unk_04 = 4;
                    s32 r = Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_GetInfo(a0, x->unk_04, 0, 0, (void *)DwcLogin_OnGpProfileInfo, 0));
                    if (r == 0) {
                    } else if (r != 0) {
                        r = r;
                    }
                }
            } else {
                GsGp_Disconnect(a0);
                DwcLogin_StartNasAuth((Unk_ov065_02271440_Cb)DwcLogin_OnNasAuthDone, 0);
                sDwcLoginControl->unk_04 = 1;
            }
        } else if (sDwcLoginControl->unk_04 == 4) {
            func_020fff48((u8 *)sDwcLoginControl->unk_20 + 4, sDwcLoginControl->unk_0c, &b[1]);
            if (strcmp((const char *)&x->unk_8e[0], (const char *)&b[1]) == 0) {
                func_020fff48(&sDwcLoginControl->unk_40, sDwcLoginControl->unk_0c, &c[2]);
                func_020ffd30(sDwcLoginControl->unk_20, &sDwcLoginControl->unk_40, x->unk_04);
                GsGp_Disconnect(a0);
                sDwcLoginDoneCallback(sDwcLoginControl->unk_4c, sDwcLoginControl->unk_14c, sDwcLoginDoneArg);
            } else {
                s32 r = Unk_ov065_0227138c_Ns::DwcLogin_HandleGpResult(GsGp_GetInfo(a0, x->unk_04, 0, 0, (void *)DwcLogin_OnGpProfileInfo, 0));
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
    if (sDwcLoginControl != NULL && sDwcLoginControl->unk_04 == 5) {
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
