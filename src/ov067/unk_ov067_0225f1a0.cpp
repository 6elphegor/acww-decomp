// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov067_0225f1a0_Ent {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[8];
};

struct Unk_ov067_0225f1a0_Cb {
    u32 unk_00;
    void (*unk_04)(u32, void *);
};

struct Unk_ov067_0225f1a0_W {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    u16 unk_16;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u16 unk_24;
    u16 unk_26;
    u32 unk_28[0x56];
    u16 unk_180;
    u16 unk_182;
    u32 unk_184;
    u32 unk_188;
    u16 unk_18c[2];
    Unk_ov067_0225f1a0_Cb *unk_190;
    Unk_ov067_0225f1a0_Ent unk_194[16];
};

struct Unk_ov067_0225f3fc_Hdr {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};

struct Unk_ov067_0225f3fc_Pair {
    u16 a;
    u16 b;
};

struct Unk_ov067_0225f3fc_Wrap {
    Unk_ov067_0225f3fc_Pair p;
};

struct Unk_ov067_0225f3fc_Msg {
    Unk_ov067_0225f3fc_Hdr *unk_00;
    u16 unk_04;
};

struct Unk_ov067_0225facc_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
};

struct Unk_ov067_0225facc_Sub {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u8 pad_1a[0x32 - 0x1a];
    u16 unk_32;
    u16 unk_34;
};

typedef s32 (*Unk_ov067_022604c0_Fn)(u32, void *);
typedef Unk_ov067_022604c0_Fn Unk_ov067_0225facc_Cb;

struct Unk_ov067_0225facc_Ctx {
    u8 pad_0000[0x4ee0];
    u8 unk_4ee0[0x200];
    u16 unk_50e0;
    u16 unk_50e2;
    u16 unk_50e4;
    u16 unk_50e6;
    u16 unk_50e8;
    u16 unk_50ea;
    s32 unk_50ec;
    s32 unk_50f0;
    s32 unk_50f4;
    Unk_ov067_0225facc_Cb unk_50f8;
    Unk_ov067_0225facc_Sub *unk_50fc;
    s32 unk_5100;
    s32 unk_5104;
    s32 unk_5108;
    u8 pad_510c[0x516c - 0x510c];
    u16 unk_516c;
    u16 unk_516e;
    u8 pad_5170[0x55e0 - 0x5170];
    u32 unk_55e0;
    u16 unk_55e4;
    u16 unk_55e6;
    u16 unk_55e8;
    u8 unk_55ea[6];
    u16 unk_55f0;
    u16 unk_55f2;
    u8 unk_55f4[0x20];
    u8 pad_5614[0x5640 - 0x5614];
};

typedef Unk_ov067_0225facc_Msg Msg;
typedef Unk_ov067_0225facc_Ctx Ctx;
typedef Unk_ov067_0225facc_Sub Sub;
typedef Ctx Unk_ov067_022604c0_S;
typedef Ctx Unk_ov067_02260de4_S;
typedef Ctx Unk_ov067_02261484_Ctx;
typedef Sub Unk_ov067_0226fc_Sub;
typedef Unk_ov067_0225f1a0_W Unk_ov067_02261484_W;

struct Unk_ov067_022604c0_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[6];
    u32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_ov067_022608c0_Cb {
    u32 a;
    u16 b;
    u16 c;
};

struct Unk_ov067_02260f58_P {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10[4][4];
};

struct Unk_ov067_02261048_Ent {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[8];
};

struct Unk_ov067_02261484_Rec {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov067_02261484_Msg {
    u8 pad_00[0xa];
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
};

typedef s32 (*Unk_ov067_02261484_Fn)(s32, void *);

struct Unk_ov067_02261484_G {
    u32 unk_00;
    Unk_ov067_02261484_Fn unk_04;
    Unk_ov067_02260f58_P unk_08;
    Unk_ov067_02261484_Rec unk_58[16];
    u8 unk_d8;
    u8 pad_d9[0xe0 - 0xd9];
    u32 unk_e0;
    u32 unk_e4;
    u32 unk_e8;
    u8 pad_ec[0xf0 - 0xec];
    u16 unk_f0;
    u16 unk_f2;
    u16 unk_f4;
    u16 unk_f6;
    u8 pad_f8[0x114 - 0xf8];
    u16 unk_114;
    u16 unk_116;
    u8 pad_118[0x120 - 0x118];
    Unk_ov067_02261484_Ctx unk_120;
    Unk_ov067_02261484_W unk_5760;
};

extern "C" {
s32 OS_DisableInterrupts(void);
s32 func_01ffa314(void);
void OS_RestoreInterrupts(s32);
u64 OS_GetTick(void);
s32 WM_GetNextTgid(void);
s32 WM_EndScan(void (*)(Msg *));
void MIi_CpuClear32(u32, void *, u32);
void MIi_CpuCopy32(const void *, void *, u32);
void OS_GetMacAddress(void *);
void MI_CpuFill8(void *, u32, u32);
u32 WM_GetAllowedChannel(void);
s32 WM_StartScanEx(void (*)(Msg *), void *);
s32 func_0211fcbc(void (*)(Msg *), void *, u32, u32, u32);
s32 func_021218d0(void (*)(Msg *), u32, u32, u32, u32);
s32 func_021206b4(void (*)(Msg *), void *, u32, void *, u32, u32, u32, u32, u32, u32, u32);
s32 WM_SetParentParameter(void (*)(Msg *), void *);
s32 WM_StartParent(void (*)(Msg *));
void DC_InvalidateRange(void *, u32);
void MI_CpuCopy8(void *, void *, u32);
void Fatal_Trap(void);
u32 _u32_div_f(u32, u32);
u16 func_021276e0(u32, u32);
s32 WM_Reset(void *);
s32 WM_Disable(void *);
s32 WM_PowerOff(void *);
s32 WM_PowerOn(void *);
s32 WM_Init(void *, u32);
s32 WM_Enable(void *);
s32 WM_SetIndCallback(void *);
s32 func_0211fb0c(u32, void *, u32);
s32 func_0211f188(void);
s32 WM_SetMPDataToPortEx(void *, u32, void *, ...);

// data
extern Ctx *sWlxWm;
extern s32 sWlxState;
extern Unk_ov067_02261484_G *sWlx;
extern const u32 sWlxRoleTable[16];

// functions of this overlay
u16 WlxWm_NextAllowedChannel(s32 n);
BOOL WlxDebug_CheckCallbackResult(u16 *m);
BOOL WlxDebug_CheckApiResult(s32 code, s32 x);
char *WlxDebug_GetWmErrorName(s32 n);
char *WlxDebug_GetWmApiName(s32 n);
void WlxDebug_Printf(const char *fmt, ...);
void WlxBlock_OnDisconnectStub(void *, u32);
void WlxBlock_OnConnectStub(void *, u32);
BOOL WlxBlock_Receive(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg);
void WlxBlock_StoreSegment(Unk_ov067_0225f1a0_W *w, s32 idx, void *src);
void WlxBlock_BuildSend(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg);
BOOL WlxBlock_SelectByBeacon(Unk_ov067_0225f1a0_W *w, u32 *x);
void WlxBlock_OnMpEndStub(void *, void *);
void WlxBlock_SetCurrent(Unk_ov067_0225f1a0_W *w, void *p);
void *WlxBlock_GetCurrent(Unk_ov067_0225f1a0_W *w);
void *WlxBlock_FindEntry(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag);
void WlxBlock_StartSend(Unk_ov067_0225f1a0_W *w, u32 p, u32 q, u32 r, u32 s);
void WlxBlock_Reset(Unk_ov067_0225f1a0_W *w, u32 a, u32 b);
void WlxBlock_Init(Unk_ov067_0225f1a0_W *w);
void WlxWm_RequestState(Ctx *x, u32 v);
void WlxWm_Init(Ctx *c, Sub *s, Unk_ov067_0225facc_Cb cb, u32 v);
void WlxWm_ScanStep(Msg *m);
void WlxWm_MeasureChannelStep(Msg *m);
void WlxWm_ConnectStep(Msg *m);
void WlxWm_OnChildEvent(Msg *m);
void WlxWm_StartParentStep(Msg *m);
void WlxWm_OnParentEvent(Msg *m);
void WlxWm_ResetStep(Unk_ov067_022604c0_Msg *m);
void WlxWm_DisableStep(Unk_ov067_022604c0_Msg *m);
void WlxWm_PowerOffStep(Unk_ov067_022604c0_Msg *m);
void WlxWm_PowerOnStep(Unk_ov067_022604c0_Msg *m);
void WlxWm_EnableStep(Unk_ov067_022604c0_Msg *m);
void WlxWm_OnPortRecv(Unk_ov067_022604c0_Msg *m);
void WlxWm_OnIndication(Unk_ov067_022604c0_Msg *m);
void WlxWm_OnMpDataSent(void *m);
void WlxWm_SetState(Ctx *s, s32 st, u32 arg);
void WlxWm_SendMpData(Ctx *s);
s32 WlxWm_CheckCallback(Ctx *s, void *m);
s32 WlxWm_CheckApiCall(Ctx *s, u32 id, u32 arg);
void WlxWm_HandleError(Ctx *s, s32 id, u32 arg);
void WlxWm_Fail(Ctx *s);
s32 WlxRole_NextIsParent(Unk_ov067_02260f58_P *p);
void WlxRole_Init(Unk_ov067_02260f58_P *p);
u16 Wlx_GetConnectedMask(void);
s32 Wlx_IsParent(void);
s32 Wlx_GetState(void);
s32 Wlx_OnWmEvent(u32 cmd, void *arg);
void Wlx_SelectNextEntry(void);
}

extern "C" char data_ov067_02261b3c[14];
extern "C" char data_ov067_02261b0c[13];
extern "C" char data_ov067_02261c1c[18];
extern "C" char data_ov067_02261b4c[14];
extern "C" char data_ov067_02261cd0[20];
extern "C" char data_ov067_02261bcc[17];
extern "C" char data_ov067_02261e70[27];
extern "C" char data_ov067_02261a8c[10];
extern "C" char data_ov067_02261e00[25];
extern "C" char *sWmApiNames[44];
extern "C" char data_ov067_02261a74[9];
extern "C" char data_ov067_02261ac8[12];
extern "C" char data_ov067_02261a68[9];
extern "C" char data_ov067_02261b7c[15];
extern "C" char data_ov067_02261aa4[11];
extern "C" char data_ov067_02261d10[22];
extern "C" char data_ov067_02261b9c[15];
extern "C" char data_ov067_02261d88[23];
extern "C" char data_ov067_02261da0[23];
extern "C" char data_ov067_02261d40[22];
extern "C" char data_ov067_02261b5c[14];
extern "C" char data_ov067_02261dd0[23];
extern "C" char data_ov067_02261d70[22];
extern "C" char data_ov067_02261c94[20];
extern "C" char data_ov067_02261ca8[20];
extern "C" char data_ov067_02261ea8[29];
extern "C" char data_ov067_02261e8c[28];
extern "C" char data_ov067_02261c6c[19];
extern "C" char data_ov067_02261c80[19];
extern "C" char data_ov067_02261b2c[13];
extern "C" char data_ov067_02261ae0[12];
extern "C" char data_ov067_02261b1c[13];
extern "C" char data_ov067_02261be0[18];
extern "C" char data_ov067_02261bf4[18];
extern "C" char data_ov067_02261a80[10];
extern "C" char data_ov067_02261c44[19];
extern "C" char data_ov067_02261e1c[25];
extern "C" char data_ov067_02261e54[26];
extern "C" char data_ov067_02261ad4[12];
extern "C" char data_ov067_02261b6c[15];
extern "C" char data_ov067_02261abc[11];
extern "C" char data_ov067_02261bbc[16];
extern "C" char data_ov067_02261db8[23];
extern "C" char data_ov067_02261bac[15];
extern "C" char data_ov067_02261c58[19];
extern "C" char data_ov067_02261cf8[21];
extern "C" char data_ov067_02261ab0[11];
extern "C" char data_ov067_02261afc[13];
extern "C" char data_ov067_02261cbc[20];
extern "C" char data_ov067_02261ee8[31];
extern "C" char data_ov067_02261c30[19];
extern "C" char data_ov067_02261ec8[30];
extern "C" char data_ov067_02261b8c[15];
extern "C" char data_ov067_02261d28[22];
extern "C" char data_ov067_02261de8[23];
extern "C" char data_ov067_02261f08[32];
extern "C" char data_ov067_02261a98[11];
extern "C" char data_ov067_02261ce4[20];
extern "C" char data_ov067_02261a60[7];
extern "C" char data_ov067_02261aec[13];
extern "C" char data_ov067_02261d58[22];
extern "C" char data_ov067_02261c08[18];
extern "C" char data_ov067_02261e38[25];
extern "C" char *sWmErrCodeNames[20];

extern "C" char data_ov067_02261b3c[14] = "WM_SetDCFData";

extern "C" char data_ov067_02261b0c[13] = "WM_SetMPData";

extern "C" char data_ov067_02261c1c[18] = "WM_MeasureChannel";

extern "C" char data_ov067_02261b4c[14] = "WM_Initialize";

extern "C" char data_ov067_02261cd0[20] = "WM_ERRCODE_NO_ENTRY";

extern "C" char data_ov067_02261bcc[17] = "WM_EndKeySharing";

extern "C" char data_ov067_02261e70[27] = "WM_ERRCODE_SEND_QUEUE_FULL";

extern "C" char data_ov067_02261a8c[10] = "WM_EndDCF";

extern "C" char data_ov067_02261e00[25] = "WM_ERRCODE_INVALID_PARAM";

extern "C" char *sWmApiNames[44] = {
    data_ov067_02261b4c,
    data_ov067_02261a74,
    data_ov067_02261a60,
    data_ov067_02261a80,
    data_ov067_02261a98,
    data_ov067_02261abc,
    data_ov067_02261ae0,
    data_ov067_02261d10,
    data_ov067_02261b8c,
    data_ov067_02261aec,
    data_ov067_02261afc,
    data_ov067_02261ab0,
    data_ov067_02261bbc,
    data_ov067_02261b5c,
    data_ov067_02261aa4,
    data_ov067_02261b0c,
    data_ov067_02261a68,
    data_ov067_02261ac8,
    data_ov067_02261b3c,
    data_ov067_02261a8c,
    data_ov067_02261b2c,
    data_ov067_02261c58,
    data_ov067_02261bcc,
    data_ov067_02261b1c,
    data_ov067_02261bac,
    data_ov067_02261db8,
    data_ov067_02261c80,
    data_ov067_02261c08,
    data_ov067_02261dd0,
    data_ov067_02261b9c,
    data_ov067_02261c1c,
    data_ov067_02261de8,
    data_ov067_02261d70,
    data_ov067_02261ad4,
    data_ov067_02261f08,
    data_ov067_02261be0,
    data_ov067_02261ce4,
    data_ov067_02261ea8,
    data_ov067_02261b6c,
    data_ov067_02261b7c,
    data_ov067_02261ca8,
    data_ov067_02261ee8,
    data_ov067_02261ee8,
    data_ov067_02261ee8
};

extern "C" char data_ov067_02261a74[9] = "WM_Reset";

extern "C" Ctx *sWlxWm = 0;

extern "C" char data_ov067_02261ac8[12] = "WM_StartDCF";

extern "C" Unk_ov067_02261484_G *sWlx = 0;

extern "C" char data_ov067_02261a68[9] = "WM_EndMP";

extern "C" char data_ov067_02261b7c[15] = "WM_SetWEPKeyEx";

extern "C" char data_ov067_02261aa4[11] = "WM_StartMP";

extern "C" char data_ov067_02261d10[22] = "WM_SetParentParameter";

extern "C" char data_ov067_02261b9c[15] = "WM_SetLifeTime";

extern "C" char data_ov067_02261d88[23] = "WM_ERRCODE_SEND_FAILED";

extern "C" char data_ov067_02261da0[23] = "WM_ERRCODE_FLASH_ERROR";

extern "C" char data_ov067_02261d40[22] = "WM_ERRCODE_WM_DISABLE";

extern "C" char data_ov067_02261b5c[14] = "WM_Disconnect";

extern "C" char data_ov067_02261dd0[23] = "(W-Alarm ind. in ARM7)";

extern "C" char data_ov067_02261d70[22] = "WM_GetWirelessCounter";

extern "C" char data_ov067_02261c94[20] = "WM_ERRCODE_NO_CHILD";

extern "C" char data_ov067_02261ca8[20] = "WM_SetPowerSaveMode";

extern "C" char data_ov067_02261ea8[29] = "(auto-disconnection in ARM7)";

extern "C" char data_ov067_02261e8c[28] = "WM_ERRCODE_WL_INVALID_PARAM";

extern "C" char data_ov067_02261c6c[19] = "WM_ERRCODE_SUCCESS";

extern "C" char data_ov067_02261c80[19] = "(WM_StartTestMode)";

extern "C" char data_ov067_02261b2c[13] = "WM_SetWEPKey";

extern "C" char data_ov067_02261ae0[12] = "WM_PowerOff";

extern "C" char data_ov067_02261b1c[13] = "WM_GetKeySet";

extern "C" char data_ov067_02261be0[18] = "WM_SetMPFrequency";

extern "C" char data_ov067_02261bf4[18] = "WM_ERRCODE_FAILED";

extern "C" char data_ov067_02261a80[10] = "WM_Enable";

extern "C" char data_ov067_02261c44[19] = "WM_ERRCODE_TIMEOUT";

extern "C" char data_ov067_02261e1c[25] = "WM_ERRCODE_WL_LENGTH_ERR";

extern "C" char data_ov067_02261e54[26] = "WM_ERRCODE_OVER_MAX_ENTRY";

extern "C" char data_ov067_02261ad4[12] = "WM_SetEntry";

extern "C" char data_ov067_02261b6c[15] = "WM_StartScanEx";

extern "C" char data_ov067_02261abc[11] = "WM_PowerOn";

extern "C" char data_ov067_02261bbc[16] = "WM_StartConnect";

extern "C" char data_ov067_02261db8[23] = "WM_SetBeaconIndication";

extern "C" char data_ov067_02261bac[15] = "WM_SetGameInfo";

extern "C" const u32 sWlxRoleTable[16] = {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1};

extern "C" char data_ov067_02261c58[19] = "WM_StartKeySharing";

extern "C" char data_ov067_02261cf8[21] = "WM_ERRCODE_OPERATING";

extern "C" char data_ov067_02261ab0[11] = "WM_EndScan";

extern "C" char data_ov067_02261afc[13] = "WM_StartScan";

extern "C" char data_ov067_02261cbc[20] = "WM_ERRCODE_DCF_TEST";

extern "C" char data_ov067_02261ee8[31] = "(MP-timing controller in ARM7)";

extern "C" char data_ov067_02261c30[19] = "WM_ERRCODE_NO_DATA";

extern "C" char data_ov067_02261ec8[30] = "WM_ERRCODE_INVALID_POLLBITMAP";

extern "C" char data_ov067_02261b8c[15] = "WM_StartParent";

extern "C" char data_ov067_02261d28[22] = "WM_ERRCODE_FIFO_ERROR";

extern "C" char data_ov067_02261de8[23] = "WM_InitWirelessCounter";

extern "C" char data_ov067_02261f08[32] = "(auto-deauthentication in ARM7)";

extern "C" char data_ov067_02261a98[11] = "WM_Disable";

extern "C" char data_ov067_02261ce4[20] = "WMi_SetBeaconPeriod";

extern "C" char data_ov067_02261a60[7] = "WM_End";

extern "C" char data_ov067_02261aec[13] = "WM_EndParent";

extern "C" char data_ov067_02261d58[22] = "WM_ERRCODE_NO_DATASET";

extern "C" char data_ov067_02261c08[18] = "(WM_StopTestMode)";

extern "C" char data_ov067_02261e38[25] = "WM_ERRCODE_ILLEGAL_STATE";

extern "C" char *sWmErrCodeNames[20] = {
    data_ov067_02261c6c,
    data_ov067_02261bf4,
    data_ov067_02261cf8,
    data_ov067_02261e38,
    data_ov067_02261d40,
    data_ov067_02261d58,
    data_ov067_02261e00,
    data_ov067_02261c94,
    data_ov067_02261d28,
    data_ov067_02261c44,
    data_ov067_02261e70,
    data_ov067_02261cd0,
    data_ov067_02261e54,
    data_ov067_02261ec8,
    data_ov067_02261c30,
    data_ov067_02261d88,
    data_ov067_02261cbc,
    data_ov067_02261e8c,
    data_ov067_02261e1c,
    data_ov067_02261da0
};

extern "C" s32 sWlxState = 0;

#pragma thumb off

// Count leading zeros: the NitroSDK form of MATH_CountLeadingZeros (math.h), a one-instruction inline asm in the
// SDK itself. mwcc 1.2 has no intrinsic for clz. Kept by decision (see the project's assembly policy).
static inline u32 Clz(u32 x) {
    u32 r;
    asm { clz r, x }
    return r;
}




extern "C" void Wlx_SelectNextEntry(void) {
    u32 *r;
    r = (u32 *)WlxBlock_FindEntry(&sWlx->unk_5760, (void *)sWlx->unk_5760.unk_190, 0, 0);
    if (r == NULL) {
        r = (u32 *)WlxBlock_FindEntry(&sWlx->unk_5760, 0, 0, 1);
    }
    WlxBlock_SetCurrent(&sWlx->unk_5760, r);
    sWlx->unk_e8 = *r;
}

extern "C" s32 Wlx_OnWmEvent(u32 cmd, void *arg) {
    s32 ret = 0;
    Unk_ov067_02261484_Msg *m = (Unk_ov067_02261484_Msg *)arg;
    switch (cmd) {
    case 5:
        if (Wlx_GetState() == 3) {
            WlxBlock_OnMpEndStub(&sWlx->unk_5760, arg);
            if (sWlx->unk_120.unk_50e6 == 0) {
                sWlx->unk_d8++;
                if (sWlx->unk_d8 > 10) {
                    sWlx->unk_d8 = ret;
                    if (WlxRole_NextIsParent(&sWlx->unk_08) == 0) {
                        WlxWm_RequestState(&sWlx->unk_120, 5);
                    }
                }
            }
        }
        break;
    case 6:
        ret = WlxBlock_SelectByBeacon(&sWlx->unk_5760, (u32 *)arg);
        if (ret != 0) {
            u32 *e = (u32 *)WlxBlock_GetCurrent(&sWlx->unk_5760);
            sWlx->unk_e8 = e[0];
        }
        break;
    case 0: {
        Unk_ov067_02261484_G *g = sWlx;
        s32 ie = OS_DisableInterrupts();
        sWlxState = 0;
        Unk_ov067_02261484_Fn cb = sWlx->unk_04;
        if (cb != NULL) {
            cb(0, g);
        }
        OS_RestoreInterrupts(ie);
        break;
    }
    case 2: {
        s32 ie = OS_DisableInterrupts();
        sWlxState = 2;
        Unk_ov067_02261484_Fn cb = sWlx->unk_04;
        if (cb != NULL) {
            cb(2, 0);
        }
        OS_RestoreInterrupts(ie);
        break;
    }
    case 1:
        if (Wlx_GetState() != 3) {
            WlxWm_RequestState(&sWlx->unk_120, 0);
        } else if (WlxRole_NextIsParent(&sWlx->unk_08) != 0) {
            Wlx_SelectNextEntry();
            WlxWm_RequestState(&sWlx->unk_120, 4);
        } else {
            WlxWm_RequestState(&sWlx->unk_120, 5);
        }
        break;
    case 3:
        if (Wlx_GetState() != 3) {
            WlxWm_RequestState(&sWlx->unk_120, 0);
        }
        sWlx->unk_d8 = 0;
        {
            Unk_ov067_02261484_G *g = sWlx;
            u16 i = g->unk_120.unk_50e4;
            Unk_ov067_02261484_Rec *r = &g->unk_58[i];
            r->unk_00 = i;
            OS_GetMacAddress(&r->unk_02);
        }
        break;
    case 4:
        if (Wlx_GetState() != 3) {
            WlxWm_RequestState(&sWlx->unk_120, 0);
        }
        {
            Unk_ov067_02261484_G *g = sWlx;
            u16 i = g->unk_120.unk_50e4;
            Unk_ov067_02261484_Rec *r = &g->unk_58[i];
            r->unk_00 = i;
            OS_GetMacAddress(&r->unk_02);
        }
        break;
    case 9: {
        u32 *e = (u32 *)WlxBlock_GetCurrent(&sWlx->unk_5760);
        s32 f = Wlx_IsParent();
        u32 x, y, idx;
        if (f != 0) {
            x = sWlx->unk_114;
        } else {
            x = sWlx->unk_120.unk_516c;
        }
        if (f != 0) {
            y = sWlx->unk_116;
        } else {
            y = sWlx->unk_120.unk_516e;
        }
        idx = (u16)(f != 0 ? m->unk_10 : 0);
        Unk_ov067_02261484_G *g = sWlx;
        Unk_ov067_02261484_Rec *tbl = g->unk_58;
        u32 off = idx * 8;
        Unk_ov067_02261484_Rec *r = (Unk_ov067_02261484_Rec *)((u8 *)tbl + idx * 8);
        WlxBlock_Reset(&g->unk_5760, x, y);
        *(u16 *)((u8 *)tbl + off) = idx;
        if (f != 0) {
            r->unk_02 = m->unk_0a;
            r->unk_04 = m->unk_0c;
            r->unk_06 = m->unk_0e;
        } else {
            u16 *q = (u16 *)((u8 *)sWlx + 0x5240);
            r->unk_02 = q[2];
            r->unk_04 = q[3];
            r->unk_06 = q[4];
        }
        if (Wlx_GetState() == 3 && e != NULL) {
            WlxBlock_StartSend(&sWlx->unk_5760, e[2], e[3], e[6], e[7]);
        } else {
            sWlx->unk_5760.unk_01 = 5;
        }
        WlxBlock_OnConnectStub(&sWlx->unk_5760, (u16)(1 << idx));
        if (sWlx->unk_5760.unk_01 != 5) {
            Unk_ov067_02261484_Fn cb = sWlx->unk_04;
            if (cb != NULL) {
                cb(4, r);
            }
        }
        break;
    }
    case 10:
        WlxBlock_OnDisconnectStub(&sWlx->unk_5760, (u16)(u32)arg);
        if (Wlx_GetConnectedMask() == 0) {
            if (Wlx_GetState() != 3) {
                if (Wlx_GetState() != 1) {
                    if (WlxBlock_GetCurrent(&sWlx->unk_5760) != NULL) {
                        break;
                    }
                }
            }
            sWlx->unk_d8 = 0;
            WlxWm_RequestState(&sWlx->unk_120, 3);
        }
        break;
    case 7:
        WlxBlock_BuildSend(&sWlx->unk_5760, (Unk_ov067_0225f3fc_Msg *)arg);
        break;
    case 8:
        ret = WlxBlock_Receive(&sWlx->unk_5760, (Unk_ov067_0225f3fc_Msg *)arg);
        break;
    default:
        Fatal_Trap();
        break;
    }
    return ret;
}

extern "C" void Wlx_Init(u32 a, u32 b, u32 c) {
    volatile u32 z;
    s32 ie = OS_DisableInterrupts();
    if (Wlx_GetState() == 0) {
        if ((a & 0x1f) != 0) {
            Fatal_Trap();
        }
        z = 0;
        sWlx = (Unk_ov067_02261484_G *)a;
        MIi_CpuClear32(z, (void *)a, 0x5b74);
        sWlx->unk_00 = c;
        sWlx->unk_04 = (Unk_ov067_02261484_Fn)b;
        WlxRole_Init(&sWlx->unk_08);
        WlxBlock_Init(&sWlx->unk_5760);
        sWlx->unk_f0 = 1;
        sWlx->unk_114 = 0x200;
        sWlx->unk_116 = 0x200;
        sWlx->unk_f6 = 1;
        {
            Unk_ov067_02261484_G *g = sWlx;
            WlxWm_Init(&g->unk_120, (Sub *)&g->unk_e0, Wlx_OnWmEvent, g->unk_00);
        }
        s32 ie2 = OS_DisableInterrupts();
        sWlxState = 2;
        Unk_ov067_02261484_Fn cb = sWlx->unk_04;
        if (cb != NULL) {
            cb(2, 0);
        }
        OS_RestoreInterrupts(ie2);
    }
    OS_RestoreInterrupts(ie);
}

extern "C" s32 Wlx_SetPacketSizes(u32 a, u32 b, u32 c) {
    s32 r = 0;
    if (c > 1 || a < 0x14 || a > 0x200 || b < 0x14 || b > 0x200) {
    } else {
        s32 t = 0x14a + (a + 0x26) * 4 + c * ((b + 0x20) * 4 + 0x70);
        if (t < 0x15e0) {
            r = 1;
            sWlx->unk_114 = a;
            sWlx->unk_116 = b;
        }
    }
    return r;
}

extern "C" void Wlx_StartExchange(void) {
    s32 ie = OS_DisableInterrupts();
    if (Wlx_GetState() == 2) {
        WlxWm_RequestState(&sWlx->unk_120, 3);
        s32 ie2 = OS_DisableInterrupts();
        sWlxState = 3;
        Unk_ov067_02261484_Fn cb = sWlx->unk_04;
        if (cb != NULL) {
            cb(3, 0);
        }
        OS_RestoreInterrupts(ie2);
    }
    OS_RestoreInterrupts(ie);
}

extern "C" void Wlx_StopExchange(void) {
    s32 ie = OS_DisableInterrupts();
    if (Wlx_GetState() == 3) {
        WlxWm_RequestState(&sWlx->unk_120, 2);
    }
    OS_RestoreInterrupts(ie);
}

extern "C" void Wlx_Stop(void) {
    s32 ie = OS_DisableInterrupts();
    switch (Wlx_GetState()) {
    case 0:
    case 1:
        break;
    case 2:
    case 3: {
        s32 ie2 = OS_DisableInterrupts();
        sWlxState = 1;
        Unk_ov067_02261484_Fn cb = sWlx->unk_04;
        if (cb != NULL) {
            cb(1, 0);
        }
        OS_RestoreInterrupts(ie2);
        if (Wlx_GetConnectedMask() == 0) {
            WlxWm_RequestState(&sWlx->unk_120, 0);
        }
        break;
    }
    }
    OS_RestoreInterrupts(ie);
}

extern "C" s32 Wlx_GetState(void) {
    return sWlxState;
}

extern "C" s32 Wlx_IsParent(void) {
    if (sWlx->unk_120.unk_50f0 == 4) {
        return 1;
    }
    return 0;
}

extern "C" u16 Wlx_GetConnectedMask(void) {
    u16 r = sWlx->unk_120.unk_50e6;
    if (r != 0) {
        r = r | (1 << sWlx->unk_120.unk_50e4);
    }
    return r;
}

extern "C" void Wlx_RegisterData(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    s32 ie = OS_DisableInterrupts();
    Unk_ov067_02261048_Ent *e = (Unk_ov067_02261048_Ent *)WlxBlock_FindEntry(&sWlx->unk_5760, 0, a0, 1);
    if (e == NULL) {
        e = (Unk_ov067_02261048_Ent *)WlxBlock_FindEntry(&sWlx->unk_5760, 0, 0, 1);
        if (e == NULL) {
            Fatal_Trap();
        } else {
            e->unk_00 = a0;
            e->unk_04 = a1;
            e->unk_08[0] = a2;
            e->unk_08[1] = a3;
            e->unk_08[4] = a4;
            e->unk_08[5] = a5;
        }
    }
    OS_RestoreInterrupts(ie);
}

extern "C" void WlxRole_Init(Unk_ov067_02260f58_P *p) {
    p->unk_00 = (u32)OS_GetTick() & 3;
    p->unk_04 = (u32)(OS_GetTick() >> 2) & 3;
    p->unk_08 = 0;
    p->unk_0c = 0;
    MIi_CpuCopy32(sWlxRoleTable, p->unk_10, 0x40);
}

extern "C" s32 WlxRole_NextIsParent(Unk_ov067_02260f58_P *p) {
    p->unk_00++;
    if (p->unk_00 >= 4) {
        p->unk_00 = 0;
        p->unk_04++;
        if (p->unk_04 >= 4) {
            p->unk_04 = 0;
        }
        if (p->unk_04 == p->unk_08) {
            p->unk_08 = (u32)OS_GetTick() & 3;
            p->unk_04 = p->unk_08;
        }
    }
    if (p->unk_10[p->unk_04][p->unk_00] != 0) {
        if (p->unk_0c == 0) {
            return 1;
        }
    }
    return 0;
}

extern "C" void WlxWm_Fail(Unk_ov067_02260de4_S *s) {
    if (s->unk_50f0 == 1) {
        s->unk_50f0 = s->unk_50f4;
    }
    WlxWm_RequestState(s, 0);
}

extern "C" void WlxWm_HandleError(Unk_ov067_02260de4_S *s, s32 id, u32 arg) {
    if (arg == 0) {
        return;
    }
    switch (id) {
    case 15:
        break;
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
        WlxWm_Fail(s);
        break;
    case 7:
    case 8:
    case 11:
    case 13:
    case 14:
    case 30:
    case 0x26:
        WlxWm_Fail(s);
        break;
    case 12:
        if (arg == 1 || arg - 0xb <= 1) {
            s->unk_50f0 = 5;
            WlxWm_RequestState(s, 3);
        } else {
            WlxWm_Fail(s);
        }
        break;
    case 0x80:
        WlxWm_Fail(s);
        break;
    case 0x81:
        break;
    }
}

extern "C" s32 WlxWm_CheckApiCall(Unk_ov067_022604c0_S *s, u32 id, u32 arg) {
    s32 r = WlxDebug_CheckApiResult(id, arg);
    if (r == 0) {
        WlxWm_HandleError(s, id, arg);
    }
    return r;
}

extern "C" s32 WlxWm_CheckCallback(Unk_ov067_022604c0_S *s, void *m) {
    s32 r = WlxDebug_CheckCallbackResult((u16 *)m);
    if (r == 0) {
        WlxWm_HandleError(s, ((u16 *)m)[0], ((u16 *)m)[1]);
    }
    return r;
}

extern "C" void WlxWm_SendMpData(Unk_ov067_022604c0_S *s) {
    struct {
        void *d;
        u16 e;
        u16 f;
    } l;
    if (s->unk_50ec != 0) {
        return;
    }
    u32 v;
    if (s->unk_50e4 == 0) {
        v = s->unk_50fc->unk_34;
    } else {
        v = *(u16 *)((u8 *)s + 0x516e);
    }
    u16 fl = s->unk_50e6;
    l.e = v;
    l.d = (void *)((u8 *)s + 0x4ee0);
    l.f = fl;
    if (s->unk_50f8 != NULL) {
        s->unk_50f8(7, &l.d);
    }
    if (l.e > v) {
        return;
    }
    s->unk_50ec = WlxWm_CheckApiCall(s, 0xf, WM_SetMPDataToPortEx((void *)WlxWm_OnMpDataSent, 0, l.d, l.e, l.f, 4, 2));
}

extern "C" void WlxWm_SetState(Unk_ov067_022604c0_S *s, s32 st, u32 arg) {
    s->unk_50f0 = st;
    s32 prev = s->unk_50f4;
    if (prev == st) {
        switch (st) {
        case 0:
        case 1:
            break;
        case 2:
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(2, 0);
            return;
        case 3:
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(1, 0);
            return;
        case 4:
            s->unk_50ec = 0;
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(3, 0);
            return;
        case 5:
            s->unk_50ec = 0;
            if (s->unk_50f8 != NULL) {
                s->unk_50f8(4, 0);
            }
            s->unk_50e6 |= 1;
            if (s->unk_50f8 != NULL) {
                s->unk_50f8(9, (void *)arg);
            }
            WlxWm_SendMpData(s);
            return;
        }
    } else {
    switch (st) {
    case 0:
        WlxWm_EnableStep(NULL);
        return;
    case 1:
        break;
    case 2:
        switch (prev) {
        case 0:
            WlxWm_DisableStep(NULL);
            return;
        case 1:
        case 2:
            break;
        case 3:
        case 4:
        case 5:
            WlxWm_PowerOnStep(NULL);
            return;
        }
        break;
    case 3:
        switch (prev) {
        case 0:
        case 2:
            WlxWm_PowerOffStep(NULL);
            return;
        case 1:
        case 3:
            break;
        case 4:
            if (s->unk_5100 != 0) {
                WlxWm_MeasureChannelStep(0);
                return;
            }
            WlxWm_StartParentStep(0);
            return;
        case 5:
            WlxWm_ScanStep(0);
            return;
        }
        break;
    case 4:
    case 5:
        WlxWm_ResetStep(NULL);
        return;
    }
    }
}

extern "C" void WlxWm_OnMpDataSent(void *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    WlxWm_CheckCallback(s, m);
    s->unk_50ec = 0;
    if (s->unk_50e6 == 0) {
        return;
    }
    WlxWm_SendMpData(s);
}

extern "C" void WlxWm_OnIndication(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m->unk_02 != 8) {
        return;
    }
    WlxDebug_Printf("WM_ERRCODE_FIFO_ERROR Indication!\n");
    s->unk_50f4 = 6;
    s->unk_50f0 = 6;
}

extern "C" void WlxWm_OnPortRecv(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (WlxWm_CheckCallback(s, m) == 0) {
        return;
    }
    u32 t = m->unk_04;
    Unk_ov067_022608c0_Cb c;
    switch (t) {
    case 7:
        return;
    case 0x15: {
        s32 r = 0;
        c.c = 1 << m->unk_12;
        c.b = m->unk_10;
        c.a = m->unk_0c;
        if (s->unk_50f8 != NULL) {
            r = s->unk_50f8(8, &c);
        }
        if (r == 0) {
            return;
        }
        WlxWm_RequestState(s, 3);
        return;
    }
    case 9: {
        Unk_ov067_022604c0_Fn cb = s->unk_50f8;
        u32 sh = 1 << m->unk_12;
        if (cb == NULL) {
            return;
        }
        cb(10, (void *)sh);
        return;
    }
    }
}

extern "C" void WlxWm_EnableStep(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_5100 = 1;
        s->unk_50f0 = 1;
        WlxWm_CheckApiCall(s, 0, WM_Init(s, s->unk_50e0));
        WlxWm_CheckApiCall(s, 3, WM_Enable((void *)WlxWm_EnableStep));
        return;
    }
    if (m->unk_00 != 3) {
        return;
    }
    if (WlxWm_CheckApiCall(s, 0x80, WM_SetIndCallback((void *)WlxWm_OnIndication)) == 0) {
        return;
    }
    if (WlxWm_CheckApiCall(s, 0x81, func_0211fb0c(4, (void *)WlxWm_OnPortRecv, 0)) == 0) {
        return;
    }
    WlxWm_SetState(s, 2, 0);
}

extern "C" void WlxWm_PowerOnStep(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        WlxWm_CheckApiCall(s, 5, WM_PowerOn((void *)WlxWm_PowerOnStep));
        return;
    }
    if (m->unk_00 != 5) {
        return;
    }
    WlxWm_SetState(s, 3, 0);
}

extern "C" void WlxWm_PowerOffStep(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        WlxWm_CheckApiCall(s, 6, WM_PowerOff((void *)WlxWm_PowerOffStep));
        return;
    }
    if (m->unk_00 != 6) {
        return;
    }
    WlxWm_SetState(s, 2, 0);
}

extern "C" void WlxWm_DisableStep(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        WlxWm_CheckApiCall(s, 4, WM_Disable((void *)WlxWm_DisableStep));
        return;
    }
    if (m->unk_00 != 4) {
        return;
    }
    if (WlxWm_CheckApiCall(s, 2, func_0211f188()) == 0) {
        return;
    }
    sWlxWm = NULL;
    s->unk_50f0 = 0;
    if (s->unk_50f8 == NULL) {
        return;
    }
    s->unk_50f8(0, 0);
}

extern "C" void WlxWm_ResetStep(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        WlxWm_CheckApiCall(s, 1, WM_Reset((void *)WlxWm_ResetStep));
        return;
    }
    if (m->unk_00 != 1) {
        return;
    }
    s->unk_50e4 = 0;
    WlxWm_SetState(s, 3, 0);
}

extern "C" void WlxWm_OnParentEvent(Msg *m) {
    Ctx *c;
    s32 t = m->unk_08;
    c = sWlxWm;
    if (t == 0) {
        WlxWm_StartParentStep(m);
        return;
    }
    if (m->unk_02 != 0) {
        return;
    }
    switch (t) {
    case 0:
        return;
    case 7: {
        BOOL first = c->unk_50e6 == 0 ? TRUE : FALSE;
        WlxDebug_Printf("connected(%02X+=%02X)\n", c->unk_50e6, 1 << m->unk_10);
        c->unk_50e6 = c->unk_50e6 | (u16)(1 << m->unk_10);
        if (c->unk_50f8 != NULL) {
            c->unk_50f8(9, m);
        }
        if (first) {
            WlxWm_SendMpData(c);
        }
        return;
    }
    case 9:
        WlxDebug_Printf("disconnected(%02X-=%02X)\n", c->unk_50e6, 1 << m->unk_10);
        c->unk_50e6 = c->unk_50e6 & (u16)~(1 << m->unk_10);
        Unk_ov067_0225facc_Cb cb = c->unk_50f8;
        u32 a = 1 << m->unk_10;
        if (cb != NULL) {
            cb(0xa, (void *)a);
        }
        return;
    case 2: {
        void *a = c->unk_50fc;
        if (c->unk_50f8 != NULL) {
            c->unk_50f8(5, a);
        }
        return;
    }
    }
}

extern "C" void WlxWm_StartParentStep(Msg *m) {
    Ctx *c = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_50fc->unk_32 = c->unk_50e2;
        c->unk_50fc->unk_0c = WM_GetNextTgid();
        WlxDebug_Printf("start parent. (%2dch, TGID=%02X, GGID=%04X)\n", c->unk_50e2, c->unk_50fc->unk_0c, c->unk_50fc->unk_08);
        WlxWm_CheckApiCall(c, 7, WM_SetParentParameter(WlxWm_StartParentStep, c->unk_50fc));
        return;
    }
    if (m->unk_00 == 7) {
        WlxWm_CheckApiCall(c, 8, WM_StartParent(WlxWm_OnParentEvent));
        return;
    }
    if (m->unk_00 == 8) {
        BOOL b = FALSE;
        c->unk_50e4 = b;
        c->unk_50e6 = b;
        if (c->unk_50fc->unk_16 == 0) {
            b = TRUE;
        }
        WlxWm_CheckApiCall(c, 0xe, func_021206b4(WlxWm_StartParentStep, (u8 *)c + 0x1120, c->unk_50ea, (u8 *)c + 0xf00, c->unk_50e8, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->unk_00 != 0xe) {
        return;
    }
    if (m->unk_04 != 0xa) {
        return;
    }
    WlxWm_SetState(c, 4, 0);
}

extern "C" void WlxWm_OnChildEvent(Msg *m) {
    Ctx *c = sWlxWm;
    if (WlxWm_CheckCallback(c, m) == 0) {
        return;
    }
    switch (m->unk_08) {
    case 7:
        if (c->unk_50f0 == 5) {
            return;
        }
        WlxWm_ConnectStep(m);
        return;
    case 9:
        if (c->unk_50f0 == 1) {
            c->unk_50f4 = 3;
            return;
        }
        c->unk_50f4 = 4;
        WlxWm_ResetStep(0);
        return;
    case 6:
    case 8:
        break;
    default:
        WlxWm_Fail(c);
        break;
    }
}

extern "C" void WlxWm_ConnectStep(Msg *m) {
    Ctx *c = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        WlxWm_CheckApiCall(c, 0xc, func_0211fcbc(WlxWm_OnChildEvent, (u8 *)c + 0x5120, 0, 1, 0));
        return;
    }
    if (m->unk_00 == 0xc) {
        c->unk_50e4 = m->unk_0a;
        BOOL b = c->unk_50fc->unk_16 == 0 ? TRUE : FALSE;
        WlxWm_CheckApiCall(c, 0xe, func_021206b4(WlxWm_ConnectStep, (u8 *)c + 0x1120, c->unk_50ea, (u8 *)c + 0xf00, c->unk_50e8, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->unk_00 != 0xe) {
        return;
    }
    if (m->unk_04 != 0xa) {
        return;
    }
    WlxWm_SetState(c, 5, (u32)m);
}

extern "C" void WlxWm_MeasureChannelStep(Msg *m) {
    Ctx *c = sWlxWm;
    u32 v = 0;
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_50e2 = v;
        c->unk_5104 = 0x65;
    } else if (WlxWm_CheckCallback(c, m) != 0) {
        v = m->unk_08;
        if (c->unk_5104 > m->unk_0a) {
            c->unk_5104 = m->unk_0a;
            c->unk_50e2 = v;
        }
        if (v == 32 - Clz(WM_GetAllowedChannel())) {
            c->unk_5100 = 0;
            WlxWm_SetState(c, 3, 0);
        }
    } else {
        c->unk_5100 = 0;
    }
    if (c->unk_5100 == 0) {
        return;
    }
    u32 a = WlxWm_NextAllowedChannel(v);
    WlxWm_CheckApiCall(c, 0x1e, func_021218d0(WlxWm_MeasureChannelStep, 3, 0x11, a, 0x1e));
}

extern "C" void WlxWm_ScanStep(Msg *m) {
    Ctx *c = sWlxWm;
    if (m != NULL) {
        if (WlxWm_CheckCallback(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_5108 = 0;
        c->unk_55e0 = (u32)c + 0x51e0;
        c->unk_55e4 = 0x400;
        c->unk_55e6 = WM_GetAllowedChannel();
        c->unk_55e8 = 0x6e;
        MI_CpuFill8(c->unk_55ea, 0xff, 6);
        c->unk_55f0 = 1;
        c->unk_55f2 = 0;
        MI_CpuFill8(c->unk_55f4, 0xff, 0x20);
        WlxWm_CheckApiCall(c, 0x26, WM_StartScanEx(WlxWm_ScanStep, &c->unk_55e0));
        return;
    }
    if (m->unk_00 == 0x26) {
        if (m->unk_08 == 5) {
            DC_InvalidateRange((u8 *)c + 0x51e0, 0x400);
            c->unk_5108 = m->unk_0e;
        }
        WlxWm_CheckApiCall(c, 0xb, WM_EndScan(WlxWm_ScanStep));
        return;
    }
    if (m->unk_00 != 0xb) {
        return;
    }
    BOOL found = FALSE;
    if (c->unk_50f4 == 5) {
        s32 i;
        u8 *p = (u8 *)c + 0x51e0;
        WlxDebug_Printf("found:%d beacons\n", c->unk_5108);
        i = 0;
        if (c->unk_5108 > 0) {
            do {
                s32 n = *(u16 *)p << 1;
                WlxDebug_Printf("   GGID=%08X(%2dch:%3dBYTE)\n", n >= 0x48 ? *(s32 *)(p + 0x44) : -1, *(u16 *)(p + 0x36), n);
                if (n >= 0x48) {
                    found = FALSE;
                    if (c->unk_50f8 != NULL) {
                        found = ((s32 (*)(u32, void *))c->unk_50f8)(6, p);
                    }
                    if (found) {
                        WlxDebug_Printf("     -> matched!\n");
                        MI_CpuCopy8(p, (u8 *)c + 0x5120, 0xc0);
                        break;
                    }
                }
                i++;
                p += (n + 3) & ~3;
            } while (i < c->unk_5108);
        }
    }
    if (found) {
        WlxWm_ConnectStep(NULL);
        return;
    }
    if (c->unk_50f4 == 5) {
        c->unk_50f4 = 3;
    }
    WlxWm_SetState(c, 3, 0);
}

extern "C" void WlxWm_Init(Ctx *c, Sub *s, Unk_ov067_0225facc_Cb cb, u32 v) {
    s32 r = func_01ffa314();
    WM_GetNextTgid();
    OS_RestoreInterrupts(r);
    sWlxWm = c;
    volatile u32 z = 0;
    MIi_CpuClear32(z, c, 0x5640);
    c->unk_50e4 = 0;
    c->unk_50ec = 1;
    c->unk_50f8 = cb;
    c->unk_50e0 = v;
    c->unk_50e8 = 0x220;
    c->unk_50ea = 0x3dc0;
    c->unk_50f0 = 0;
    c->unk_50fc = s;
    c->unk_50fc->unk_0e = 1;
    c->unk_50fc->unk_18 = 0x5a;
    c->unk_50fc->unk_32 = 1;
}

extern "C" void WlxWm_RequestState(Ctx *x, u32 v) {
    x->unk_50f4 = v;
    u32 cur = x->unk_50f0;
    if (cur == 1) {
        return;
    }
    if (cur == x->unk_50f4) {
        return;
    }
    WlxWm_SetState(x, cur, 0);
}

extern "C" void WlxBlock_Init(Unk_ov067_0225f1a0_W *w) {
    volatile u32 tmp;
    w->unk_190 = 0;
    tmp = 0;
    MIi_CpuClear32(tmp, w, 4);
}

extern "C" void WlxBlock_Reset(Unk_ov067_0225f1a0_W *w, u32 a, u32 b) {
    volatile u32 tmp;
    w->unk_180 = a - 8;
    w->unk_182 = b - 8;
    w->unk_00 = 0;
    w->unk_01 = 0;
    w->unk_04 = 0;
    w->unk_05 = 0;
    w->unk_08 = 0;
    w->unk_0c = 0;
    w->unk_14 = 0;
    tmp = 0;
    MIi_CpuClear32(tmp, &w->unk_28, 0x158);
    w->unk_18 = 0;
    w->unk_1c = 0;
    w->unk_20 = 0;
    w->unk_184 = 0;
}

extern "C" void WlxBlock_StartSend(Unk_ov067_0225f1a0_W *w, u32 p, u32 q, u32 r, u32 s) {
    if (w->unk_01 != 0) {
        return;
    }
    w->unk_01 = 1;
    w->unk_08 = p;
    w->unk_0c = (u16)q;
    w->unk_14 = func_021276e0(p, q);
    w->unk_18 = r;
    w->unk_20 = (u16)s;
}

extern "C" void *WlxBlock_FindEntry(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag) {
    Unk_ov067_0225f1a0_Ent *s = (Unk_ov067_0225f1a0_Ent *)start;
    Unk_ov067_0225f1a0_Ent *p;

    Unk_ov067_0225f1a0_Ent *e;
    Unk_ov067_0225f1a0_Ent *b;
    if (s == 0) {
        s = &w->unk_194[15];
    }
    p = s;
    e = &w->unk_194[16];
    b = &w->unk_194[0];
    do {
        BOOL m;
        p++;
        if (p >= e) {
            p = b;
        }
        m = p->unk_00 == key ? TRUE : FALSE;
        if (flag != 0) {
            if (m != 0) {
                goto done;
            }
        }
        if (flag == 0) {
            if (m == 0) {
                goto done;
            }
        }
    } while (p != s);
    p = 0;
done:
    return p;
}

extern "C" void *WlxBlock_GetCurrent(Unk_ov067_0225f1a0_W *w) {
    return w->unk_190;
}

extern "C" void WlxBlock_SetCurrent(Unk_ov067_0225f1a0_W *w, void *p) {
    w->unk_190 = (Unk_ov067_0225f1a0_Cb *)p;
}

extern "C" void WlxBlock_OnMpEndStub(void *, void *) {
}

extern "C" BOOL WlxBlock_SelectByBeacon(Unk_ov067_0225f1a0_W *w, u32 *x) {
    BOOL r = FALSE;
    if (x[0x44 / 4] != 0) {
        void *p = WlxBlock_FindEntry(w, 0, x[0x44 / 4], 1);
        if (p != 0) {
            WlxBlock_SetCurrent(w, p);
            r = TRUE;
        }
    }
    return r;
}

extern "C" void WlxBlock_BuildSend(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h = msg->unk_00;
    WlxDebug_Printf("--SEND:ACK=(%3d,%d,%04X),REQ=(%3d,%d,%04X)\n", w->unk_04, w->unk_05, w->unk_06, w->unk_00, w->unk_01, w->unk_02);
    *(Unk_ov067_0225f3fc_Wrap *)&h->unk_00 = *(Unk_ov067_0225f3fc_Wrap *)&w->unk_00;
    *(Unk_ov067_0225f3fc_Wrap *)&h->unk_04 = *(Unk_ov067_0225f3fc_Wrap *)&w->unk_04;
    if (w->unk_04 == w->unk_00) {
        u16 *p = (u16 *)((u8 *)msg->unk_00 + 8);
        switch (w->unk_05) {
        case 1:
            WlxDebug_Printf("       INIT(%6d)\n", w->unk_0c);
            p[0] = w->unk_0c;
            p[1] = w->unk_14;
            break;
        case 2: {
            u32 seg = w->unk_180;
            u32 off = w->unk_06 * seg;
            u32 rem = w->unk_0c - off;
            if (rem > seg) {
                rem = seg;
            }
            MI_CpuCopy8((void *)(w->unk_08 + off), p, rem);
            break;
        }
        }
    }
    msg->unk_04 = (w->unk_180 + 9) & ~1;
}

extern "C" void WlxBlock_StoreSegment(Unk_ov067_0225f1a0_W *w, s32 idx, void *src) {
    u32 *bm;
    u32 rem;
    s32 j;
    u32 off;
    u32 seg;
    u32 r5;
    s32 k;
    s32 n;
    u32 *slot;
    s32 i0;
    u32 total;
    if (w->unk_18 == 0) {
        return;
    }
    if ((u32)idx >= w->unk_184) {
        return;
    }
    bm = w->unk_28;
    u32 bit = 1 << (idx & 0x1f);
    slot = &bm[idx >> 5];
    u32 t = bm[idx >> 5];
    if (t & bit) {
        return;
    }
    seg = w->unk_182;
    off = idx * seg;
    rem = w->unk_1c - off;
    if (rem > seg) {
        rem = seg;
    }
    MI_CpuCopy8(src, (void *)(w->unk_18 + off), rem);
    *slot |= bit;
    w->unk_188 = w->unk_188 - 1;
    if (w->unk_188 == 0) {
        w->unk_01 = 4;
        return;
    }
    i0 = w->unk_18c[0];
    total = w->unk_184;
    r5 = i0;
    if (i0 >= total) {
        r5 = total - 1;
    }
    for (;;) {
        i0++;
        if (i0 >= total) {
            i0 = 0;
        }
        if (i0 == r5) {
            i0 = w->unk_18c[1];
            break;
        }
        if (w->unk_28[i0 >> 5] & (1 << (i0 & 0x1f))) {
            continue;
        }
        for (j = 0; j < 2; j++) {
            if (i0 == w->unk_18c[j]) {
                break;
            }
        }
        if (j < 2) {
            continue;
        }
        break;
    }
    n = 2; k = n; k = k - 1; while (k > 0) { w->unk_18c[k] = w->unk_18c[k - 1]; k = k - 1; }
    w->unk_18c[0] = i0;
    w->unk_02 = w->unk_18c[0];
}

extern "C" BOOL WlxBlock_Receive(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h;
    BOOL r6;
    h = msg->unk_00;
    r6 = FALSE;
    if (msg->unk_04 >= w->unk_182) {
        WlxDebug_Printf("--RECV:REQ=(%3d,%d,%04X),ACK=(%3d,%d,%04X)\n", h->unk_00, h->unk_01, h->unk_02, h->unk_04, h->unk_05, h->unk_06);
        if (h->unk_00 == w->unk_00) {
            *(Unk_ov067_0225f3fc_Wrap *)&w->unk_04 = *(Unk_ov067_0225f3fc_Wrap *)&h->unk_00;
        }
        if (h->unk_04 == w->unk_00) {
            u16 *p2 = (u16 *)((u8 *)msg->unk_00 + 8);
            switch (h->unk_05) {
            case 1:
                w->unk_1c = p2[0];
                w->unk_24 = p2[1];
                w->unk_184 = (u16)_u32_div_f(w->unk_1c + w->unk_182 - 1, w->unk_182);
                w->unk_188 = w->unk_184;
                w->unk_02 = 0;
                w->unk_01 = 2;
                WlxDebug_Printf("       INIT(%6d)\n", w->unk_1c);
                break;
            case 2:
                WlxBlock_StoreSegment(w, h->unk_06, p2);
                break;
            case 5:
                r6 = TRUE;
                break;
            }
        }
        if (h->unk_04 == w->unk_00) {
            if (h->unk_05 == 4) {
                if (w->unk_05 == 4) {
                    Unk_ov067_0225f1a0_Cb *cb = w->unk_190;
                    void (*fn)(u32, void *) = cb->unk_04;
                    u32 *e = (u32 *)WlxBlock_GetCurrent(w);
                    struct {
                        u32 a;
                        u32 b;
                        u32 c;
                        u16 d;
                    } l;
                    volatile u32 tmp;
                    WlxBlock_SetCurrent(w, 0);
                    l.a = w->unk_18;
                    l.b = w->unk_1c;
                    l.c = w->unk_20;
                    l.d = w->unk_24;
                    w->unk_00 = w->unk_00 + 1;
                    w->unk_01 = 0;
                    w->unk_08 = 0;
                    w->unk_0c = 0;
                    tmp = 0;
                    MIi_CpuClear32(tmp, &w->unk_28, 0x158);
                    w->unk_18 = 0;
                    w->unk_1c = 0;
                    w->unk_20 = 0;
                    w->unk_184 = 0;
                    if (fn != 0) {
                        fn(5, &l);
                    }
                    if (e[0] != 0) {
                        WlxBlock_SetCurrent(w, e);
                    }
                    if (w->unk_08 == 0) {
                        w->unk_01 = 5;
                    } else {
                        w->unk_01 = 1;
                    }
                }
            }
        }
    }
    return r6;
}

extern "C" void WlxBlock_OnConnectStub(void *, u32) {
}

extern "C" void WlxBlock_OnDisconnectStub(void *, u32) {
}

extern "C" void WlxDebug_Printf(const char *fmt, ...) {
}

extern "C" char *WlxDebug_GetWmApiName(s32 n) {
    if (n < 0x2c) {
        return sWmApiNames[n];
    }
    if (n == 0x80) {
        return "WM_SetIndCallback";
    }
    if (n == 0x81) {
        return "PortSendCallback";
    }
    if (n == 0x82) {
        return "PortRecvCallback";
    }
    if (n == 0x83) {
        return "WM_ReadStatus";
    }
    return "(unknown)";
}

extern "C" char *WlxDebug_GetWmErrorName(s32 n) {
    if (n < 0x14) {
        return sWmErrCodeNames[n];
    }
    return "(unknown WMErrCode)";
}

extern "C" BOOL WlxDebug_CheckApiResult(s32 code, s32 x) {
    BOOL r = TRUE;
    if (x == 0) {
        WlxDebug_Printf(">< %s succeeded.\n", WlxDebug_GetWmApiName(code));
    } else if (x == 2) {
        WlxDebug_Printf(">  %s started.\n", WlxDebug_GetWmApiName(code));
    } else {
        char *n = WlxDebug_GetWmApiName(code);
        WlxDebug_Printf(">< %s failed. %s\n", n, WlxDebug_GetWmErrorName(x));
        r = FALSE;
    }
    return r;
}

extern "C" BOOL WlxDebug_CheckCallbackResult(u16 *m) {
    u32 r5 = m[1];
    u32 c = m[0];
    BOOL r6 = r5 == 0 ? TRUE : FALSE;
    if (r6) {
        if (c == 0x80) {
            goto end;
        }
        if (c == 0xe) {
            if (m[2] != 0xa) {
                goto end;
            }
        }
        if (c == 0xc) {
            if (m[4] != 6) {
                goto end;
            }
        }
        WlxDebug_Printf(" < %s succeeded.\n", WlxDebug_GetWmApiName(c));
    } else {
        if (c == 0xe) {
            if (r5 == 9 || r5 == 0xd || r5 == 0xf) {
                r6 = TRUE;
            }
        }
        if (r6 == 0) {
            char *n = WlxDebug_GetWmApiName(c);
            char *e = WlxDebug_GetWmErrorName(r5);
            WlxDebug_Printf(" < %s failed. %s(cmd=%02X,res=%02X)\n", n, e, m[2], m[3]);
        }
    }
end:
    return r6;
}

extern "C" u16 WlxWm_NextAllowedChannel(s32 n) {
    u32 m = WM_GetAllowedChannel();
    if (m == 0) {
        Fatal_Trap();
    } else if (m == 0x8000) {
        Fatal_Trap();
    } else {
        n++;
        if (((1 << (n - 1)) & m) == 0) {
            do {
                n++;
                if (n > 16) {
                    n = 1;
                }
            } while (((1 << (n - 1)) & m) == 0);
        }
    }
    return (u16)n;
}

#pragma thumb reset
