// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov067_0225f1a0_Ent {
    u32 ggid;
    u32 doneCallback;
    u32 bufferInfo[8];
};

struct Unk_ov067_0225f1a0_Cb {
    u32 ggid;
    void (*doneCallback)(u32, void *);
};

struct Unk_ov067_0225f1a0_W {
    u8 reqSeq;
    u8 reqKind;
    u16 reqSegment;
    u8 ackSeq;
    u8 ackKind;
    u16 ackSegment;
    u32 sendData;
    u32 sendSize;
    u32 unk_10;
    u16 sendCheck;
    u16 unk_16;
    u32 recvData;
    u32 recvSize;
    u32 recvBufSize;
    u16 recvCheck;
    u16 unk_26;
    u32 recvBitmap[0x56];
    u16 sendSegSize;
    u16 recvSegSize;
    u32 numRecvSegments;
    u32 numMissingSegments;
    u16 lastReqSegments[2];
    Unk_ov067_0225f1a0_Cb *curEntry;
    Unk_ov067_0225f1a0_Ent entries[16];
};

struct Unk_ov067_0225f3fc_Hdr {
    u8 reqSeq;
    u8 reqKind;
    u16 reqSegment;
    u8 ackSeq;
    u8 ackKind;
    u16 ackSegment;
};

struct Unk_ov067_0225f3fc_Pair {
    u16 a;
    u16 b;
};

struct Unk_ov067_0225f3fc_Wrap {
    Unk_ov067_0225f3fc_Pair p;
};

struct Unk_ov067_0225f3fc_Msg {
    Unk_ov067_0225f3fc_Hdr *packet;
    u16 length;
};

struct Unk_ov067_0225facc_Msg {
    u16 apiid;
    u16 errcode;
    u16 mpState;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 aid;
};

struct Unk_ov067_0225facc_Sub {
    u32 unk_00;
    u32 unk_04;
    u32 ggid;
    u16 tgid;
    u16 entryFlag;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 csFlag;
    u16 beaconPeriod;
    u8 pad_1a[0x32 - 0x1a];
    u16 channel;
    u16 parentMaxSize;
};

typedef s32 (*Unk_ov067_022604c0_Fn)(u32, void *);
typedef Unk_ov067_022604c0_Fn Unk_ov067_0225facc_Cb;

struct Unk_ov067_0225facc_Ctx {
    u8 pad_0000[0x4ee0];
    u8 mpSendData[0x200];
    u16 dmaNo;
    u16 channel;
    u16 aid;
    u16 connectedMask;
    u16 sendBufSize;
    u16 recvBufSize;
    s32 isSending;
    s32 state;
    s32 requestedState;
    Unk_ov067_0225facc_Cb unk_50f8;
    Unk_ov067_0225facc_Sub *parentParam;
    s32 needMeasureChannel;
    s32 bestChannelBusy;
    s32 numBeacons;
    u8 pad_510c[0x516c - 0x510c];
    u16 bssParentMaxSize;
    u16 bssChildMaxSize;
    u8 pad_5170[0x55e0 - 0x5170];
    u32 scanBuf;
    u16 scanBufSize;
    u16 scanChannelList;
    u16 scanMaxChannelTime;
    u8 scanBssid[6];
    u16 scanType;
    u16 scanSsidLength;
    u8 scanSsid[0x20];
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
    u16 apiid;
    u16 errcode;
    u16 state;
    u8 pad_06[6];
    u32 data;
    u16 length;
    u16 aid;
};

struct Unk_ov067_022608c0_Cb {
    u32 a;
    u16 b;
    u16 c;
};

struct Unk_ov067_02260f58_P {
    s32 column;
    s32 row;
    s32 reseedRow;
    s32 parentDisabled;
    s32 pattern[4][4];
};

struct Unk_ov067_02261048_Ent {
    u32 ggid;
    u32 doneCallback;
    u32 bufferInfo[8];
};

struct Unk_ov067_02261484_Rec {
    u16 aid;
    u16 mac01;
    u16 mac23;
    u16 mac45;
};

struct Unk_ov067_02261484_Msg {
    u8 pad_00[0xa];
    u16 mac01;
    u16 mac23;
    u16 mac45;
    u16 aid;
};

typedef s32 (*Unk_ov067_02261484_Fn)(s32, void *);

struct Unk_ov067_02261484_G {
    u32 dmaNo;
    Unk_ov067_02261484_Fn eventCallback;
    Unk_ov067_02260f58_P role;
    Unk_ov067_02261484_Rec members[16];
    u8 idleMpCount;
    u8 pad_d9[0xe0 - 0xd9];
    u32 parentParam;
    u32 unk_e4;
    u32 parentGgid;
    u8 pad_ec[0xf0 - 0xec];
    u16 parentMaxEntry;
    u16 unk_f2;
    u16 unk_f4;
    u16 parentCsFlag;
    u8 pad_f8[0x114 - 0xf8];
    u16 parentMaxSize;
    u16 childMaxSize;
    u8 pad_118[0x120 - 0x118];
    Unk_ov067_0225facc_Ctx wm;
    Unk_ov067_0225f1a0_W block;
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
    r = (u32 *)WlxBlock_FindEntry(&sWlx->block, (void *)sWlx->block.curEntry, 0, 0);
    if (r == NULL) {
        r = (u32 *)WlxBlock_FindEntry(&sWlx->block, 0, 0, 1);
    }
    WlxBlock_SetCurrent(&sWlx->block, r);
    sWlx->parentGgid = *r;
}

extern "C" s32 Wlx_OnWmEvent(u32 cmd, void *arg) {
    s32 ret = 0;
    Unk_ov067_02261484_Msg *m = (Unk_ov067_02261484_Msg *)arg;
    switch (cmd) {
    case 5:
        if (Wlx_GetState() == 3) {
            WlxBlock_OnMpEndStub(&sWlx->block, arg);
            if (sWlx->wm.connectedMask == 0) {
                sWlx->idleMpCount++;
                if (sWlx->idleMpCount > 10) {
                    sWlx->idleMpCount = ret;
                    if (WlxRole_NextIsParent(&sWlx->role) == 0) {
                        WlxWm_RequestState(&sWlx->wm, 5);
                    }
                }
            }
        }
        break;
    case 6:
        ret = WlxBlock_SelectByBeacon(&sWlx->block, (u32 *)arg);
        if (ret != 0) {
            u32 *e = (u32 *)WlxBlock_GetCurrent(&sWlx->block);
            sWlx->parentGgid = e[0];
        }
        break;
    case 0: {
        Unk_ov067_02261484_G *g = sWlx;
        s32 ie = OS_DisableInterrupts();
        sWlxState = 0;
        Unk_ov067_02261484_Fn cb = sWlx->eventCallback;
        if (cb != NULL) {
            cb(0, g);
        }
        OS_RestoreInterrupts(ie);
        break;
    }
    case 2: {
        s32 ie = OS_DisableInterrupts();
        sWlxState = 2;
        Unk_ov067_02261484_Fn cb = sWlx->eventCallback;
        if (cb != NULL) {
            cb(2, 0);
        }
        OS_RestoreInterrupts(ie);
        break;
    }
    case 1:
        if (Wlx_GetState() != 3) {
            WlxWm_RequestState(&sWlx->wm, 0);
        } else if (WlxRole_NextIsParent(&sWlx->role) != 0) {
            Wlx_SelectNextEntry();
            WlxWm_RequestState(&sWlx->wm, 4);
        } else {
            WlxWm_RequestState(&sWlx->wm, 5);
        }
        break;
    case 3:
        if (Wlx_GetState() != 3) {
            WlxWm_RequestState(&sWlx->wm, 0);
        }
        sWlx->idleMpCount = 0;
        {
            Unk_ov067_02261484_G *g = sWlx;
            u16 i = g->wm.aid;
            Unk_ov067_02261484_Rec *r = &g->members[i];
            r->aid = i;
            OS_GetMacAddress(&r->mac01);
        }
        break;
    case 4:
        if (Wlx_GetState() != 3) {
            WlxWm_RequestState(&sWlx->wm, 0);
        }
        {
            Unk_ov067_02261484_G *g = sWlx;
            u16 i = g->wm.aid;
            Unk_ov067_02261484_Rec *r = &g->members[i];
            r->aid = i;
            OS_GetMacAddress(&r->mac01);
        }
        break;
    case 9: {
        u32 *e = (u32 *)WlxBlock_GetCurrent(&sWlx->block);
        s32 f = Wlx_IsParent();
        u32 x, y, idx;
        if (f != 0) {
            x = sWlx->parentMaxSize;
        } else {
            x = sWlx->wm.bssParentMaxSize;
        }
        if (f != 0) {
            y = sWlx->childMaxSize;
        } else {
            y = sWlx->wm.bssChildMaxSize;
        }
        idx = (u16)(f != 0 ? m->aid : 0);
        Unk_ov067_02261484_G *g = sWlx;
        Unk_ov067_02261484_Rec *tbl = g->members;
        u32 off = idx * 8;
        Unk_ov067_02261484_Rec *r = (Unk_ov067_02261484_Rec *)((u8 *)tbl + idx * 8);
        WlxBlock_Reset(&g->block, x, y);
        *(u16 *)((u8 *)tbl + off) = idx;
        if (f != 0) {
            r->mac01 = m->mac01;
            r->mac23 = m->mac23;
            r->mac45 = m->mac45;
        } else {
            u16 *q = (u16 *)((u8 *)sWlx + 0x5240);
            r->mac01 = q[2];
            r->mac23 = q[3];
            r->mac45 = q[4];
        }
        if (Wlx_GetState() == 3 && e != NULL) {
            WlxBlock_StartSend(&sWlx->block, e[2], e[3], e[6], e[7]);
        } else {
            sWlx->block.reqKind = 5;
        }
        WlxBlock_OnConnectStub(&sWlx->block, (u16)(1 << idx));
        if (sWlx->block.reqKind != 5) {
            Unk_ov067_02261484_Fn cb = sWlx->eventCallback;
            if (cb != NULL) {
                cb(4, r);
            }
        }
        break;
    }
    case 10:
        WlxBlock_OnDisconnectStub(&sWlx->block, (u16)(u32)arg);
        if (Wlx_GetConnectedMask() == 0) {
            if (Wlx_GetState() != 3) {
                if (Wlx_GetState() != 1) {
                    if (WlxBlock_GetCurrent(&sWlx->block) != NULL) {
                        break;
                    }
                }
            }
            sWlx->idleMpCount = 0;
            WlxWm_RequestState(&sWlx->wm, 3);
        }
        break;
    case 7:
        WlxBlock_BuildSend(&sWlx->block, (Unk_ov067_0225f3fc_Msg *)arg);
        break;
    case 8:
        ret = WlxBlock_Receive(&sWlx->block, (Unk_ov067_0225f3fc_Msg *)arg);
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
        sWlx->dmaNo = c;
        sWlx->eventCallback = (Unk_ov067_02261484_Fn)b;
        WlxRole_Init(&sWlx->role);
        WlxBlock_Init(&sWlx->block);
        sWlx->parentMaxEntry = 1;
        sWlx->parentMaxSize = 0x200;
        sWlx->childMaxSize = 0x200;
        sWlx->parentCsFlag = 1;
        {
            Unk_ov067_02261484_G *g = sWlx;
            WlxWm_Init(&g->wm, (Sub *)&g->parentParam, Wlx_OnWmEvent, g->dmaNo);
        }
        s32 ie2 = OS_DisableInterrupts();
        sWlxState = 2;
        Unk_ov067_02261484_Fn cb = sWlx->eventCallback;
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
            sWlx->parentMaxSize = a;
            sWlx->childMaxSize = b;
        }
    }
    return r;
}

extern "C" void Wlx_StartExchange(void) {
    s32 ie = OS_DisableInterrupts();
    if (Wlx_GetState() == 2) {
        WlxWm_RequestState(&sWlx->wm, 3);
        s32 ie2 = OS_DisableInterrupts();
        sWlxState = 3;
        Unk_ov067_02261484_Fn cb = sWlx->eventCallback;
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
        WlxWm_RequestState(&sWlx->wm, 2);
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
        Unk_ov067_02261484_Fn cb = sWlx->eventCallback;
        if (cb != NULL) {
            cb(1, 0);
        }
        OS_RestoreInterrupts(ie2);
        if (Wlx_GetConnectedMask() == 0) {
            WlxWm_RequestState(&sWlx->wm, 0);
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
    if (sWlx->wm.state == 4) {
        return 1;
    }
    return 0;
}

extern "C" u16 Wlx_GetConnectedMask(void) {
    u16 r = sWlx->wm.connectedMask;
    if (r != 0) {
        r = r | (1 << sWlx->wm.aid);
    }
    return r;
}

extern "C" void Wlx_RegisterData(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    s32 ie = OS_DisableInterrupts();
    Unk_ov067_02261048_Ent *e = (Unk_ov067_02261048_Ent *)WlxBlock_FindEntry(&sWlx->block, 0, a0, 1);
    if (e == NULL) {
        e = (Unk_ov067_02261048_Ent *)WlxBlock_FindEntry(&sWlx->block, 0, 0, 1);
        if (e == NULL) {
            Fatal_Trap();
        } else {
            e->ggid = a0;
            e->doneCallback = a1;
            e->bufferInfo[0] = a2;
            e->bufferInfo[1] = a3;
            e->bufferInfo[4] = a4;
            e->bufferInfo[5] = a5;
        }
    }
    OS_RestoreInterrupts(ie);
}

extern "C" void WlxRole_Init(Unk_ov067_02260f58_P *p) {
    p->column = (u32)OS_GetTick() & 3;
    p->row = (u32)(OS_GetTick() >> 2) & 3;
    p->reseedRow = 0;
    p->parentDisabled = 0;
    MIi_CpuCopy32(sWlxRoleTable, p->pattern, 0x40);
}

extern "C" s32 WlxRole_NextIsParent(Unk_ov067_02260f58_P *p) {
    p->column++;
    if (p->column >= 4) {
        p->column = 0;
        p->row++;
        if (p->row >= 4) {
            p->row = 0;
        }
        if (p->row == p->reseedRow) {
            p->reseedRow = (u32)OS_GetTick() & 3;
            p->row = p->reseedRow;
        }
    }
    if (p->pattern[p->row][p->column] != 0) {
        if (p->parentDisabled == 0) {
            return 1;
        }
    }
    return 0;
}

extern "C" void WlxWm_Fail(Unk_ov067_02260de4_S *s) {
    if (s->state == 1) {
        s->state = s->requestedState;
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
            s->state = 5;
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
    if (s->isSending != 0) {
        return;
    }
    u32 v;
    if (s->aid == 0) {
        v = s->parentParam->parentMaxSize;
    } else {
        v = *(u16 *)((u8 *)s + 0x516e);
    }
    u16 fl = s->connectedMask;
    l.e = v;
    l.d = (void *)((u8 *)s + 0x4ee0);
    l.f = fl;
    if (s->unk_50f8 != NULL) {
        s->unk_50f8(7, &l.d);
    }
    if (l.e > v) {
        return;
    }
    s->isSending = WlxWm_CheckApiCall(s, 0xf, WM_SetMPDataToPortEx((void *)WlxWm_OnMpDataSent, 0, l.d, l.e, l.f, 4, 2));
}

extern "C" void WlxWm_SetState(Unk_ov067_022604c0_S *s, s32 st, u32 arg) {
    s->state = st;
    s32 prev = s->requestedState;
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
            s->isSending = 0;
            if (s->unk_50f8 == NULL) {
                return;
            }
            s->unk_50f8(3, 0);
            return;
        case 5:
            s->isSending = 0;
            if (s->unk_50f8 != NULL) {
                s->unk_50f8(4, 0);
            }
            s->connectedMask |= 1;
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
            if (s->needMeasureChannel != 0) {
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
    s->isSending = 0;
    if (s->connectedMask == 0) {
        return;
    }
    WlxWm_SendMpData(s);
}

extern "C" void WlxWm_OnIndication(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (m->errcode != 8) {
        return;
    }
    WlxDebug_Printf("WM_ERRCODE_FIFO_ERROR Indication!\n");
    s->requestedState = 6;
    s->state = 6;
}

extern "C" void WlxWm_OnPortRecv(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = sWlxWm;
    if (WlxWm_CheckCallback(s, m) == 0) {
        return;
    }
    u32 t = m->state;
    Unk_ov067_022608c0_Cb c;
    switch (t) {
    case 7:
        return;
    case 0x15: {
        s32 r = 0;
        c.c = 1 << m->aid;
        c.b = m->length;
        c.a = m->data;
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
        u32 sh = 1 << m->aid;
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
        s->needMeasureChannel = 1;
        s->state = 1;
        WlxWm_CheckApiCall(s, 0, WM_Init(s, s->dmaNo));
        WlxWm_CheckApiCall(s, 3, WM_Enable((void *)WlxWm_EnableStep));
        return;
    }
    if (m->apiid != 3) {
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
        s->state = 1;
        WlxWm_CheckApiCall(s, 5, WM_PowerOn((void *)WlxWm_PowerOnStep));
        return;
    }
    if (m->apiid != 5) {
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
        s->state = 1;
        WlxWm_CheckApiCall(s, 6, WM_PowerOff((void *)WlxWm_PowerOffStep));
        return;
    }
    if (m->apiid != 6) {
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
        s->state = 1;
        WlxWm_CheckApiCall(s, 4, WM_Disable((void *)WlxWm_DisableStep));
        return;
    }
    if (m->apiid != 4) {
        return;
    }
    if (WlxWm_CheckApiCall(s, 2, func_0211f188()) == 0) {
        return;
    }
    sWlxWm = NULL;
    s->state = 0;
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
        s->state = 1;
        WlxWm_CheckApiCall(s, 1, WM_Reset((void *)WlxWm_ResetStep));
        return;
    }
    if (m->apiid != 1) {
        return;
    }
    s->aid = 0;
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
    if (m->errcode != 0) {
        return;
    }
    switch (t) {
    case 0:
        return;
    case 7: {
        BOOL first = c->connectedMask == 0 ? TRUE : FALSE;
        WlxDebug_Printf("connected(%02X+=%02X)\n", c->connectedMask, 1 << m->aid);
        c->connectedMask = c->connectedMask | (u16)(1 << m->aid);
        if (c->unk_50f8 != NULL) {
            c->unk_50f8(9, m);
        }
        if (first) {
            WlxWm_SendMpData(c);
        }
        return;
    }
    case 9:
        WlxDebug_Printf("disconnected(%02X-=%02X)\n", c->connectedMask, 1 << m->aid);
        c->connectedMask = c->connectedMask & (u16)~(1 << m->aid);
        Unk_ov067_0225facc_Cb cb = c->unk_50f8;
        u32 a = 1 << m->aid;
        if (cb != NULL) {
            cb(0xa, (void *)a);
        }
        return;
    case 2: {
        void *a = c->parentParam;
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
        c->state = 1;
        c->parentParam->channel = c->channel;
        c->parentParam->tgid = WM_GetNextTgid();
        WlxDebug_Printf("start parent. (%2dch, TGID=%02X, GGID=%04X)\n", c->channel, c->parentParam->tgid, c->parentParam->ggid);
        WlxWm_CheckApiCall(c, 7, WM_SetParentParameter(WlxWm_StartParentStep, c->parentParam));
        return;
    }
    if (m->apiid == 7) {
        WlxWm_CheckApiCall(c, 8, WM_StartParent(WlxWm_OnParentEvent));
        return;
    }
    if (m->apiid == 8) {
        BOOL b = FALSE;
        c->aid = b;
        c->connectedMask = b;
        if (c->parentParam->csFlag == 0) {
            b = TRUE;
        }
        WlxWm_CheckApiCall(c, 0xe, func_021206b4(WlxWm_StartParentStep, (u8 *)c + 0x1120, c->recvBufSize, (u8 *)c + 0xf00, c->sendBufSize, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->apiid != 0xe) {
        return;
    }
    if (m->mpState != 0xa) {
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
        if (c->state == 5) {
            return;
        }
        WlxWm_ConnectStep(m);
        return;
    case 9:
        if (c->state == 1) {
            c->requestedState = 3;
            return;
        }
        c->requestedState = 4;
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
        c->state = 1;
        WlxWm_CheckApiCall(c, 0xc, func_0211fcbc(WlxWm_OnChildEvent, (u8 *)c + 0x5120, 0, 1, 0));
        return;
    }
    if (m->apiid == 0xc) {
        c->aid = m->unk_0a;
        BOOL b = c->parentParam->csFlag == 0 ? TRUE : FALSE;
        WlxWm_CheckApiCall(c, 0xe, func_021206b4(WlxWm_ConnectStep, (u8 *)c + 0x1120, c->recvBufSize, (u8 *)c + 0xf00, c->sendBufSize, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->apiid != 0xe) {
        return;
    }
    if (m->mpState != 0xa) {
        return;
    }
    WlxWm_SetState(c, 5, (u32)m);
}

extern "C" void WlxWm_MeasureChannelStep(Msg *m) {
    Ctx *c = sWlxWm;
    u32 v = 0;
    if (m == NULL) {
        c->state = 1;
        c->channel = v;
        c->bestChannelBusy = 0x65;
    } else if (WlxWm_CheckCallback(c, m) != 0) {
        v = m->unk_08;
        if (c->bestChannelBusy > m->unk_0a) {
            c->bestChannelBusy = m->unk_0a;
            c->channel = v;
        }
        if (v == 32 - Clz(WM_GetAllowedChannel())) {
            c->needMeasureChannel = 0;
            WlxWm_SetState(c, 3, 0);
        }
    } else {
        c->needMeasureChannel = 0;
    }
    if (c->needMeasureChannel == 0) {
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
        c->state = 1;
        c->numBeacons = 0;
        c->scanBuf = (u32)c + 0x51e0;
        c->scanBufSize = 0x400;
        c->scanChannelList = WM_GetAllowedChannel();
        c->scanMaxChannelTime = 0x6e;
        MI_CpuFill8(c->scanBssid, 0xff, 6);
        c->scanType = 1;
        c->scanSsidLength = 0;
        MI_CpuFill8(c->scanSsid, 0xff, 0x20);
        WlxWm_CheckApiCall(c, 0x26, WM_StartScanEx(WlxWm_ScanStep, &c->scanBuf));
        return;
    }
    if (m->apiid == 0x26) {
        if (m->unk_08 == 5) {
            DC_InvalidateRange((u8 *)c + 0x51e0, 0x400);
            c->numBeacons = m->unk_0e;
        }
        WlxWm_CheckApiCall(c, 0xb, WM_EndScan(WlxWm_ScanStep));
        return;
    }
    if (m->apiid != 0xb) {
        return;
    }
    BOOL found = FALSE;
    if (c->requestedState == 5) {
        s32 i;
        u8 *p = (u8 *)c + 0x51e0;
        WlxDebug_Printf("found:%d beacons\n", c->numBeacons);
        i = 0;
        if (c->numBeacons > 0) {
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
            } while (i < c->numBeacons);
        }
    }
    if (found) {
        WlxWm_ConnectStep(NULL);
        return;
    }
    if (c->requestedState == 5) {
        c->requestedState = 3;
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
    c->aid = 0;
    c->isSending = 1;
    c->unk_50f8 = cb;
    c->dmaNo = v;
    c->sendBufSize = 0x220;
    c->recvBufSize = 0x3dc0;
    c->state = 0;
    c->parentParam = s;
    c->parentParam->entryFlag = 1;
    c->parentParam->beaconPeriod = 0x5a;
    c->parentParam->channel = 1;
}

extern "C" void WlxWm_RequestState(Ctx *x, u32 v) {
    x->requestedState = v;
    u32 cur = x->state;
    if (cur == 1) {
        return;
    }
    if (cur == x->requestedState) {
        return;
    }
    WlxWm_SetState(x, cur, 0);
}

extern "C" void WlxBlock_Init(Unk_ov067_0225f1a0_W *w) {
    volatile u32 tmp;
    w->curEntry = 0;
    tmp = 0;
    MIi_CpuClear32(tmp, w, 4);
}

extern "C" void WlxBlock_Reset(Unk_ov067_0225f1a0_W *w, u32 a, u32 b) {
    volatile u32 tmp;
    w->sendSegSize = a - 8;
    w->recvSegSize = b - 8;
    w->reqSeq = 0;
    w->reqKind = 0;
    w->ackSeq = 0;
    w->ackKind = 0;
    w->sendData = 0;
    w->sendSize = 0;
    w->sendCheck = 0;
    tmp = 0;
    MIi_CpuClear32(tmp, &w->recvBitmap, 0x158);
    w->recvData = 0;
    w->recvSize = 0;
    w->recvBufSize = 0;
    w->numRecvSegments = 0;
}

extern "C" void WlxBlock_StartSend(Unk_ov067_0225f1a0_W *w, u32 p, u32 q, u32 r, u32 s) {
    if (w->reqKind != 0) {
        return;
    }
    w->reqKind = 1;
    w->sendData = p;
    w->sendSize = (u16)q;
    w->sendCheck = func_021276e0(p, q);
    w->recvData = r;
    w->recvBufSize = (u16)s;
}

extern "C" void *WlxBlock_FindEntry(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag) {
    Unk_ov067_0225f1a0_Ent *s = (Unk_ov067_0225f1a0_Ent *)start;
    Unk_ov067_0225f1a0_Ent *p;

    Unk_ov067_0225f1a0_Ent *e;
    Unk_ov067_0225f1a0_Ent *b;
    if (s == 0) {
        s = &w->entries[15];
    }
    p = s;
    e = &w->entries[16];
    b = &w->entries[0];
    do {
        BOOL m;
        p++;
        if (p >= e) {
            p = b;
        }
        m = p->ggid == key ? TRUE : FALSE;
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
    return w->curEntry;
}

extern "C" void WlxBlock_SetCurrent(Unk_ov067_0225f1a0_W *w, void *p) {
    w->curEntry = (Unk_ov067_0225f1a0_Cb *)p;
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
    Unk_ov067_0225f3fc_Hdr *h = msg->packet;
    WlxDebug_Printf("--SEND:ACK=(%3d,%d,%04X),REQ=(%3d,%d,%04X)\n", w->ackSeq, w->ackKind, w->ackSegment, w->reqSeq, w->reqKind, w->reqSegment);
    *(Unk_ov067_0225f3fc_Wrap *)&h->reqSeq = *(Unk_ov067_0225f3fc_Wrap *)&w->reqSeq;
    *(Unk_ov067_0225f3fc_Wrap *)&h->ackSeq = *(Unk_ov067_0225f3fc_Wrap *)&w->ackSeq;
    if (w->ackSeq == w->reqSeq) {
        u16 *p = (u16 *)((u8 *)msg->packet + 8);
        switch (w->ackKind) {
        case 1:
            WlxDebug_Printf("       INIT(%6d)\n", w->sendSize);
            p[0] = w->sendSize;
            p[1] = w->sendCheck;
            break;
        case 2: {
            u32 seg = w->sendSegSize;
            u32 off = w->ackSegment * seg;
            u32 rem = w->sendSize - off;
            if (rem > seg) {
                rem = seg;
            }
            MI_CpuCopy8((void *)(w->sendData + off), p, rem);
            break;
        }
        }
    }
    msg->length = (w->sendSegSize + 9) & ~1;
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
    if (w->recvData == 0) {
        return;
    }
    if ((u32)idx >= w->numRecvSegments) {
        return;
    }
    bm = w->recvBitmap;
    u32 bit = 1 << (idx & 0x1f);
    slot = &bm[idx >> 5];
    u32 t = bm[idx >> 5];
    if (t & bit) {
        return;
    }
    seg = w->recvSegSize;
    off = idx * seg;
    rem = w->recvSize - off;
    if (rem > seg) {
        rem = seg;
    }
    MI_CpuCopy8(src, (void *)(w->recvData + off), rem);
    *slot |= bit;
    w->numMissingSegments = w->numMissingSegments - 1;
    if (w->numMissingSegments == 0) {
        w->reqKind = 4;
        return;
    }
    i0 = w->lastReqSegments[0];
    total = w->numRecvSegments;
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
            i0 = w->lastReqSegments[1];
            break;
        }
        if (w->recvBitmap[i0 >> 5] & (1 << (i0 & 0x1f))) {
            continue;
        }
        for (j = 0; j < 2; j++) {
            if (i0 == w->lastReqSegments[j]) {
                break;
            }
        }
        if (j < 2) {
            continue;
        }
        break;
    }
    n = 2; k = n; k = k - 1; while (k > 0) { w->lastReqSegments[k] = w->lastReqSegments[k - 1]; k = k - 1; }
    w->lastReqSegments[0] = i0;
    w->reqSegment = w->lastReqSegments[0];
}

extern "C" BOOL WlxBlock_Receive(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h;
    BOOL r6;
    h = msg->packet;
    r6 = FALSE;
    if (msg->length >= w->recvSegSize) {
        WlxDebug_Printf("--RECV:REQ=(%3d,%d,%04X),ACK=(%3d,%d,%04X)\n", h->reqSeq, h->reqKind, h->reqSegment, h->ackSeq, h->ackKind, h->ackSegment);
        if (h->reqSeq == w->reqSeq) {
            *(Unk_ov067_0225f3fc_Wrap *)&w->ackSeq = *(Unk_ov067_0225f3fc_Wrap *)&h->reqSeq;
        }
        if (h->ackSeq == w->reqSeq) {
            u16 *p2 = (u16 *)((u8 *)msg->packet + 8);
            switch (h->ackKind) {
            case 1:
                w->recvSize = p2[0];
                w->recvCheck = p2[1];
                w->numRecvSegments = (u16)_u32_div_f(w->recvSize + w->recvSegSize - 1, w->recvSegSize);
                w->numMissingSegments = w->numRecvSegments;
                w->reqSegment = 0;
                w->reqKind = 2;
                WlxDebug_Printf("       INIT(%6d)\n", w->recvSize);
                break;
            case 2:
                WlxBlock_StoreSegment(w, h->ackSegment, p2);
                break;
            case 5:
                r6 = TRUE;
                break;
            }
        }
        if (h->ackSeq == w->reqSeq) {
            if (h->ackKind == 4) {
                if (w->ackKind == 4) {
                    Unk_ov067_0225f1a0_Cb *cb = w->curEntry;
                    void (*fn)(u32, void *) = cb->doneCallback;
                    u32 *e = (u32 *)WlxBlock_GetCurrent(w);
                    struct {
                        u32 a;
                        u32 b;
                        u32 c;
                        u16 d;
                    } l;
                    volatile u32 tmp;
                    WlxBlock_SetCurrent(w, 0);
                    l.a = w->recvData;
                    l.b = w->recvSize;
                    l.c = w->recvBufSize;
                    l.d = w->recvCheck;
                    w->reqSeq = w->reqSeq + 1;
                    w->reqKind = 0;
                    w->sendData = 0;
                    w->sendSize = 0;
                    tmp = 0;
                    MIi_CpuClear32(tmp, &w->recvBitmap, 0x158);
                    w->recvData = 0;
                    w->recvSize = 0;
                    w->recvBufSize = 0;
                    w->numRecvSegments = 0;
                    if (fn != 0) {
                        fn(5, &l);
                    }
                    if (e[0] != 0) {
                        WlxBlock_SetCurrent(w, e);
                    }
                    if (w->sendData == 0) {
                        w->reqKind = 5;
                    } else {
                        w->reqKind = 1;
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
