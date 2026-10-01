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
s32 func_01ffa2ec(void);
s32 func_01ffa314(void);
void func_01ffa3d4(s32);
u64 func_01ffa6b4(void);
s32 func_0211f410(void);
s32 func_0211fd8c(void (*)(Msg *));
void func_02115e64(u32, void *, u32);
void func_02115e78(const void *, void *, u32);
void func_02115640(void *);
void func_02115fb4(void *, u32, u32);
u32 func_0211f800(void);
s32 func_0211fdd4(void (*)(Msg *), void *);
s32 func_0211fcbc(void (*)(Msg *), void *, u32, u32, u32);
s32 func_021218d0(void (*)(Msg *), u32, u32, u32, u32);
s32 func_021206b4(void (*)(Msg *), void *, u32, void *, u32, u32, u32, u32, u32, u32, u32);
s32 func_02120164(void (*)(Msg *), void *);
s32 func_021200a8(void (*)(Msg *));
void func_02114594(void *, u32);
void func_02116048(void *, void *, u32);
void func_0206d49c(void);
u32 _u32_div_f(u32, u32);
u16 func_021276e0(u32, u32);
s32 func_021202b4(void *);
s32 func_021203ec(void *);
s32 func_0212035c(void *);
s32 func_021203a4(void *);
s32 func_0211f3dc(void *, u32);
s32 func_02120434(void *);
s32 func_0211fb68(void *);
s32 func_0211fb0c(u32, void *, u32);
s32 func_0211f188(void);
s32 func_0212052c(void *, u32, void *, ...);

// data
extern Ctx *data_ov067_02262260;
extern s32 data_ov067_02262264;
extern Unk_ov067_02261484_G *data_ov067_02262268;
extern const u32 data_ov067_02261a18[16];

// functions of this overlay
u16 func_ov067_0225f1a0(s32 n);
BOOL func_ov067_0225f210(u16 *m);
BOOL func_ov067_0225f2ec(s32 code, s32 x);
char *func_ov067_0225f370(s32 n);
char *func_ov067_0225f38c(s32 n);
void func_ov067_0225f3e8(const char *fmt, ...);
void func_ov067_0225f3f4(void *, u32);
void func_ov067_0225f3f8(void *, u32);
BOOL func_ov067_0225f3fc(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg);
void func_ov067_0225f618(Unk_ov067_0225f1a0_W *w, s32 idx, void *src);
void func_ov067_0225f78c(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg);
BOOL func_ov067_0225f894(Unk_ov067_0225f1a0_W *w, u32 *x);
void func_ov067_0225f8e0(void *, void *);
void func_ov067_0225f8e4(Unk_ov067_0225f1a0_W *w, void *p);
void *func_ov067_0225f8ec(Unk_ov067_0225f1a0_W *w);
void *func_ov067_0225f8f4(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag);
void func_ov067_0225f970(Unk_ov067_0225f1a0_W *w, u32 p, u32 q, u32 r, u32 s);
void func_ov067_0225f9dc(Unk_ov067_0225f1a0_W *w, u32 a, u32 b);
void func_ov067_0225fa50(Unk_ov067_0225f1a0_W *w);
void func_ov067_0225fa80(Ctx *x, u32 v);
void func_ov067_0225facc(Ctx *c, Sub *s, Unk_ov067_0225facc_Cb cb, u32 v);
void func_ov067_0225fb7c(Msg *m);
void func_ov067_0225fe1c(Msg *m);
void func_ov067_0225ff20(Msg *m);
void func_ov067_02260080(Msg *m);
void func_ov067_02260168(Msg *m);
void func_ov067_02260320(Msg *m);
void func_ov067_022604c0(Unk_ov067_022604c0_Msg *m);
void func_ov067_0226056c(Unk_ov067_022604c0_Msg *m);
void func_ov067_02260654(Unk_ov067_022604c0_Msg *m);
void func_ov067_022606f8(Unk_ov067_022604c0_Msg *m);
void func_ov067_0226079c(Unk_ov067_022604c0_Msg *m);
void func_ov067_022608c0(Unk_ov067_022604c0_Msg *m);
void func_ov067_022609c0(Unk_ov067_022604c0_Msg *m);
void func_ov067_02260a04(void *m);
void func_ov067_02260a4c(Ctx *s, s32 st, u32 arg);
void func_ov067_02260c8c(Ctx *s);
s32 func_ov067_02260d64(Ctx *s, void *m);
s32 func_ov067_02260d9c(Ctx *s, u32 id, u32 arg);
void func_ov067_02260de4(Ctx *s, s32 id, u32 arg);
void func_ov067_02260f34(Ctx *s);
s32 func_ov067_02260f58(Unk_ov067_02260f58_P *p);
void func_ov067_02260ff8(Unk_ov067_02260f58_P *p);
u16 func_ov067_022610f4(void);
s32 func_ov067_02261124(void);
s32 func_ov067_02261148(void);
s32 func_ov067_02261484(u32 cmd, void *arg);
void func_ov067_0226198c(void);
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
extern "C" char *data_ov067_02261f78[44];
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
extern "C" char *data_ov067_02261f28[20];

extern "C" char data_ov067_02261b3c[14] = "WM_SetDCFData";

extern "C" char data_ov067_02261b0c[13] = "WM_SetMPData";

extern "C" char data_ov067_02261c1c[18] = "WM_MeasureChannel";

extern "C" char data_ov067_02261b4c[14] = "WM_Initialize";

extern "C" char data_ov067_02261cd0[20] = "WM_ERRCODE_NO_ENTRY";

extern "C" char data_ov067_02261bcc[17] = "WM_EndKeySharing";

extern "C" char data_ov067_02261e70[27] = "WM_ERRCODE_SEND_QUEUE_FULL";

extern "C" char data_ov067_02261a8c[10] = "WM_EndDCF";

extern "C" char data_ov067_02261e00[25] = "WM_ERRCODE_INVALID_PARAM";

extern "C" char *data_ov067_02261f78[44] = {
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

extern "C" Ctx *data_ov067_02262260 = 0;

extern "C" char data_ov067_02261ac8[12] = "WM_StartDCF";

extern "C" Unk_ov067_02261484_G *data_ov067_02262268 = 0;

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

extern "C" const u32 data_ov067_02261a18[16] = {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1};

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

extern "C" char *data_ov067_02261f28[20] = {
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

extern "C" s32 data_ov067_02262264 = 0;

#pragma thumb off

static inline u32 Clz(u32 x) {
    u32 r;
    asm { clz r, x }
    return r;
}




extern "C" void func_ov067_0226198c(void) {
    u32 *r;
    r = (u32 *)func_ov067_0225f8f4(&data_ov067_02262268->unk_5760, (void *)data_ov067_02262268->unk_5760.unk_190, 0, 0);
    if (r == NULL) {
        r = (u32 *)func_ov067_0225f8f4(&data_ov067_02262268->unk_5760, 0, 0, 1);
    }
    func_ov067_0225f8e4(&data_ov067_02262268->unk_5760, r);
    data_ov067_02262268->unk_e8 = *r;
}

extern "C" s32 func_ov067_02261484(u32 cmd, void *arg) {
    s32 ret = 0;
    Unk_ov067_02261484_Msg *m = (Unk_ov067_02261484_Msg *)arg;
    switch (cmd) {
    case 5:
        if (func_ov067_02261148() == 3) {
            func_ov067_0225f8e0(&data_ov067_02262268->unk_5760, arg);
            if (data_ov067_02262268->unk_120.unk_50e6 == 0) {
                data_ov067_02262268->unk_d8++;
                if (data_ov067_02262268->unk_d8 > 10) {
                    data_ov067_02262268->unk_d8 = ret;
                    if (func_ov067_02260f58(&data_ov067_02262268->unk_08) == 0) {
                        func_ov067_0225fa80(&data_ov067_02262268->unk_120, 5);
                    }
                }
            }
        }
        break;
    case 6:
        ret = func_ov067_0225f894(&data_ov067_02262268->unk_5760, (u32 *)arg);
        if (ret != 0) {
            u32 *e = (u32 *)func_ov067_0225f8ec(&data_ov067_02262268->unk_5760);
            data_ov067_02262268->unk_e8 = e[0];
        }
        break;
    case 0: {
        Unk_ov067_02261484_G *g = data_ov067_02262268;
        s32 ie = func_01ffa2ec();
        data_ov067_02262264 = 0;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(0, g);
        }
        func_01ffa3d4(ie);
        break;
    }
    case 2: {
        s32 ie = func_01ffa2ec();
        data_ov067_02262264 = 2;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(2, 0);
        }
        func_01ffa3d4(ie);
        break;
    }
    case 1:
        if (func_ov067_02261148() != 3) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        } else if (func_ov067_02260f58(&data_ov067_02262268->unk_08) != 0) {
            func_ov067_0226198c();
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 4);
        } else {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 5);
        }
        break;
    case 3:
        if (func_ov067_02261148() != 3) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        }
        data_ov067_02262268->unk_d8 = 0;
        {
            Unk_ov067_02261484_G *g = data_ov067_02262268;
            u16 i = g->unk_120.unk_50e4;
            Unk_ov067_02261484_Rec *r = &g->unk_58[i];
            r->unk_00 = i;
            func_02115640(&r->unk_02);
        }
        break;
    case 4:
        if (func_ov067_02261148() != 3) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        }
        {
            Unk_ov067_02261484_G *g = data_ov067_02262268;
            u16 i = g->unk_120.unk_50e4;
            Unk_ov067_02261484_Rec *r = &g->unk_58[i];
            r->unk_00 = i;
            func_02115640(&r->unk_02);
        }
        break;
    case 9: {
        u32 *e = (u32 *)func_ov067_0225f8ec(&data_ov067_02262268->unk_5760);
        s32 f = func_ov067_02261124();
        u32 x, y, idx;
        if (f != 0) {
            x = data_ov067_02262268->unk_114;
        } else {
            x = data_ov067_02262268->unk_120.unk_516c;
        }
        if (f != 0) {
            y = data_ov067_02262268->unk_116;
        } else {
            y = data_ov067_02262268->unk_120.unk_516e;
        }
        idx = (u16)(f != 0 ? m->unk_10 : 0);
        Unk_ov067_02261484_G *g = data_ov067_02262268;
        Unk_ov067_02261484_Rec *tbl = g->unk_58;
        u32 off = idx * 8;
        Unk_ov067_02261484_Rec *r = (Unk_ov067_02261484_Rec *)((u8 *)tbl + idx * 8);
        func_ov067_0225f9dc(&g->unk_5760, x, y);
        *(u16 *)((u8 *)tbl + off) = idx;
        if (f != 0) {
            r->unk_02 = m->unk_0a;
            r->unk_04 = m->unk_0c;
            r->unk_06 = m->unk_0e;
        } else {
            u16 *q = (u16 *)((u8 *)data_ov067_02262268 + 0x5240);
            r->unk_02 = q[2];
            r->unk_04 = q[3];
            r->unk_06 = q[4];
        }
        if (func_ov067_02261148() == 3 && e != NULL) {
            func_ov067_0225f970(&data_ov067_02262268->unk_5760, e[2], e[3], e[6], e[7]);
        } else {
            data_ov067_02262268->unk_5760.unk_01 = 5;
        }
        func_ov067_0225f3f8(&data_ov067_02262268->unk_5760, (u16)(1 << idx));
        if (data_ov067_02262268->unk_5760.unk_01 != 5) {
            Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
            if (cb != NULL) {
                cb(4, r);
            }
        }
        break;
    }
    case 10:
        func_ov067_0225f3f4(&data_ov067_02262268->unk_5760, (u16)(u32)arg);
        if (func_ov067_022610f4() == 0) {
            if (func_ov067_02261148() != 3) {
                if (func_ov067_02261148() != 1) {
                    if (func_ov067_0225f8ec(&data_ov067_02262268->unk_5760) != NULL) {
                        break;
                    }
                }
            }
            data_ov067_02262268->unk_d8 = 0;
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 3);
        }
        break;
    case 7:
        func_ov067_0225f78c(&data_ov067_02262268->unk_5760, (Unk_ov067_0225f3fc_Msg *)arg);
        break;
    case 8:
        ret = func_ov067_0225f3fc(&data_ov067_02262268->unk_5760, (Unk_ov067_0225f3fc_Msg *)arg);
        break;
    default:
        func_0206d49c();
        break;
    }
    return ret;
}

extern "C" void func_ov067_02261350(u32 a, u32 b, u32 c) {
    volatile u32 z;
    s32 ie = func_01ffa2ec();
    if (func_ov067_02261148() == 0) {
        if ((a & 0x1f) != 0) {
            func_0206d49c();
        }
        z = 0;
        data_ov067_02262268 = (Unk_ov067_02261484_G *)a;
        func_02115e64(z, (void *)a, 0x5b74);
        data_ov067_02262268->unk_00 = c;
        data_ov067_02262268->unk_04 = (Unk_ov067_02261484_Fn)b;
        func_ov067_02260ff8(&data_ov067_02262268->unk_08);
        func_ov067_0225fa50(&data_ov067_02262268->unk_5760);
        data_ov067_02262268->unk_f0 = 1;
        data_ov067_02262268->unk_114 = 0x200;
        data_ov067_02262268->unk_116 = 0x200;
        data_ov067_02262268->unk_f6 = 1;
        {
            Unk_ov067_02261484_G *g = data_ov067_02262268;
            func_ov067_0225facc(&g->unk_120, (Sub *)&g->unk_e0, func_ov067_02261484, g->unk_00);
        }
        s32 ie2 = func_01ffa2ec();
        data_ov067_02262264 = 2;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(2, 0);
        }
        func_01ffa3d4(ie2);
    }
    func_01ffa3d4(ie);
}

extern "C" s32 func_ov067_022612c0(u32 a, u32 b, u32 c) {
    s32 r = 0;
    if (c > 1 || a < 0x14 || a > 0x200 || b < 0x14 || b > 0x200) {
    } else {
        s32 t = 0x14a + (a + 0x26) * 4 + c * ((b + 0x20) * 4 + 0x70);
        if (t < 0x15e0) {
            r = 1;
            data_ov067_02262268->unk_114 = a;
            data_ov067_02262268->unk_116 = b;
        }
    }
    return r;
}

extern "C" void func_ov067_0226123c(void) {
    s32 ie = func_01ffa2ec();
    if (func_ov067_02261148() == 2) {
        func_ov067_0225fa80(&data_ov067_02262268->unk_120, 3);
        s32 ie2 = func_01ffa2ec();
        data_ov067_02262264 = 3;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(3, 0);
        }
        func_01ffa3d4(ie2);
    }
    func_01ffa3d4(ie);
}

extern "C" void func_ov067_022611fc(void) {
    s32 ie = func_01ffa2ec();
    if (func_ov067_02261148() == 3) {
        func_ov067_0225fa80(&data_ov067_02262268->unk_120, 2);
    }
    func_01ffa3d4(ie);
}

extern "C" void func_ov067_02261158(void) {
    s32 ie = func_01ffa2ec();
    switch (func_ov067_02261148()) {
    case 0:
    case 1:
        break;
    case 2:
    case 3: {
        s32 ie2 = func_01ffa2ec();
        data_ov067_02262264 = 1;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(1, 0);
        }
        func_01ffa3d4(ie2);
        if (func_ov067_022610f4() == 0) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        }
        break;
    }
    }
    func_01ffa3d4(ie);
}

extern "C" s32 func_ov067_02261148(void) {
    return data_ov067_02262264;
}

extern "C" s32 func_ov067_02261124(void) {
    if (data_ov067_02262268->unk_120.unk_50f0 == 4) {
        return 1;
    }
    return 0;
}

extern "C" u16 func_ov067_022610f4(void) {
    u16 r = data_ov067_02262268->unk_120.unk_50e6;
    if (r != 0) {
        r = r | (1 << data_ov067_02262268->unk_120.unk_50e4);
    }
    return r;
}

extern "C" void func_ov067_02261048(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    s32 ie = func_01ffa2ec();
    Unk_ov067_02261048_Ent *e = (Unk_ov067_02261048_Ent *)func_ov067_0225f8f4(&data_ov067_02262268->unk_5760, 0, a0, 1);
    if (e == NULL) {
        e = (Unk_ov067_02261048_Ent *)func_ov067_0225f8f4(&data_ov067_02262268->unk_5760, 0, 0, 1);
        if (e == NULL) {
            func_0206d49c();
        } else {
            e->unk_00 = a0;
            e->unk_04 = a1;
            e->unk_08[0] = a2;
            e->unk_08[1] = a3;
            e->unk_08[4] = a4;
            e->unk_08[5] = a5;
        }
    }
    func_01ffa3d4(ie);
}

extern "C" void func_ov067_02260ff8(Unk_ov067_02260f58_P *p) {
    p->unk_00 = (u32)func_01ffa6b4() & 3;
    p->unk_04 = (u32)(func_01ffa6b4() >> 2) & 3;
    p->unk_08 = 0;
    p->unk_0c = 0;
    func_02115e78(data_ov067_02261a18, p->unk_10, 0x40);
}

extern "C" s32 func_ov067_02260f58(Unk_ov067_02260f58_P *p) {
    p->unk_00++;
    if (p->unk_00 >= 4) {
        p->unk_00 = 0;
        p->unk_04++;
        if (p->unk_04 >= 4) {
            p->unk_04 = 0;
        }
        if (p->unk_04 == p->unk_08) {
            p->unk_08 = (u32)func_01ffa6b4() & 3;
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

extern "C" void func_ov067_02260f34(Unk_ov067_02260de4_S *s) {
    if (s->unk_50f0 == 1) {
        s->unk_50f0 = s->unk_50f4;
    }
    func_ov067_0225fa80(s, 0);
}

extern "C" void func_ov067_02260de4(Unk_ov067_02260de4_S *s, s32 id, u32 arg) {
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
        func_ov067_02260f34(s);
        break;
    case 7:
    case 8:
    case 11:
    case 13:
    case 14:
    case 30:
    case 0x26:
        func_ov067_02260f34(s);
        break;
    case 12:
        if (arg == 1 || arg - 0xb <= 1) {
            s->unk_50f0 = 5;
            func_ov067_0225fa80(s, 3);
        } else {
            func_ov067_02260f34(s);
        }
        break;
    case 0x80:
        func_ov067_02260f34(s);
        break;
    case 0x81:
        break;
    }
}

extern "C" s32 func_ov067_02260d9c(Unk_ov067_022604c0_S *s, u32 id, u32 arg) {
    s32 r = func_ov067_0225f2ec(id, arg);
    if (r == 0) {
        func_ov067_02260de4(s, id, arg);
    }
    return r;
}

extern "C" s32 func_ov067_02260d64(Unk_ov067_022604c0_S *s, void *m) {
    s32 r = func_ov067_0225f210((u16 *)m);
    if (r == 0) {
        func_ov067_02260de4(s, ((u16 *)m)[0], ((u16 *)m)[1]);
    }
    return r;
}

extern "C" void func_ov067_02260c8c(Unk_ov067_022604c0_S *s) {
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
    s->unk_50ec = func_ov067_02260d9c(s, 0xf, func_0212052c((void *)func_ov067_02260a04, 0, l.d, l.e, l.f, 4, 2));
}

extern "C" void func_ov067_02260a4c(Unk_ov067_022604c0_S *s, s32 st, u32 arg) {
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
            func_ov067_02260c8c(s);
            return;
        }
    } else {
    switch (st) {
    case 0:
        func_ov067_0226079c(NULL);
        return;
    case 1:
        break;
    case 2:
        switch (prev) {
        case 0:
            func_ov067_0226056c(NULL);
            return;
        case 1:
        case 2:
            break;
        case 3:
        case 4:
        case 5:
            func_ov067_022606f8(NULL);
            return;
        }
        break;
    case 3:
        switch (prev) {
        case 0:
        case 2:
            func_ov067_02260654(NULL);
            return;
        case 1:
        case 3:
            break;
        case 4:
            if (s->unk_5100 != 0) {
                func_ov067_0225fe1c(0);
                return;
            }
            func_ov067_02260168(0);
            return;
        case 5:
            func_ov067_0225fb7c(0);
            return;
        }
        break;
    case 4:
    case 5:
        func_ov067_022604c0(NULL);
        return;
    }
    }
}

extern "C" void func_ov067_02260a04(void *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    func_ov067_02260d64(s, m);
    s->unk_50ec = 0;
    if (s->unk_50e6 == 0) {
        return;
    }
    func_ov067_02260c8c(s);
}

extern "C" void func_ov067_022609c0(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m->unk_02 != 8) {
        return;
    }
    func_ov067_0225f3e8("WM_ERRCODE_FIFO_ERROR Indication!\n");
    s->unk_50f4 = 6;
    s->unk_50f0 = 6;
}

extern "C" void func_ov067_022608c0(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (func_ov067_02260d64(s, m) == 0) {
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
        func_ov067_0225fa80(s, 3);
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

extern "C" void func_ov067_0226079c(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_5100 = 1;
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 0, func_0211f3dc(s, s->unk_50e0));
        func_ov067_02260d9c(s, 3, func_02120434((void *)func_ov067_0226079c));
        return;
    }
    if (m->unk_00 != 3) {
        return;
    }
    if (func_ov067_02260d9c(s, 0x80, func_0211fb68((void *)func_ov067_022609c0)) == 0) {
        return;
    }
    if (func_ov067_02260d9c(s, 0x81, func_0211fb0c(4, (void *)func_ov067_022608c0, 0)) == 0) {
        return;
    }
    func_ov067_02260a4c(s, 2, 0);
}

extern "C" void func_ov067_022606f8(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 5, func_021203a4((void *)func_ov067_022606f8));
        return;
    }
    if (m->unk_00 != 5) {
        return;
    }
    func_ov067_02260a4c(s, 3, 0);
}

extern "C" void func_ov067_02260654(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 6, func_0212035c((void *)func_ov067_02260654));
        return;
    }
    if (m->unk_00 != 6) {
        return;
    }
    func_ov067_02260a4c(s, 2, 0);
}

extern "C" void func_ov067_0226056c(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 4, func_021203ec((void *)func_ov067_0226056c));
        return;
    }
    if (m->unk_00 != 4) {
        return;
    }
    if (func_ov067_02260d9c(s, 2, func_0211f188()) == 0) {
        return;
    }
    data_ov067_02262260 = NULL;
    s->unk_50f0 = 0;
    if (s->unk_50f8 == NULL) {
        return;
    }
    s->unk_50f8(0, 0);
}

extern "C" void func_ov067_022604c0(Unk_ov067_022604c0_Msg *m) {
    Unk_ov067_022604c0_S *s = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(s, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        s->unk_50f0 = 1;
        func_ov067_02260d9c(s, 1, func_021202b4((void *)func_ov067_022604c0));
        return;
    }
    if (m->unk_00 != 1) {
        return;
    }
    s->unk_50e4 = 0;
    func_ov067_02260a4c(s, 3, 0);
}

extern "C" void func_ov067_02260320(Msg *m) {
    Ctx *c;
    s32 t = m->unk_08;
    c = data_ov067_02262260;
    if (t == 0) {
        func_ov067_02260168(m);
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
        func_ov067_0225f3e8("connected(%02X+=%02X)\n", c->unk_50e6, 1 << m->unk_10);
        c->unk_50e6 = c->unk_50e6 | (u16)(1 << m->unk_10);
        if (c->unk_50f8 != NULL) {
            c->unk_50f8(9, m);
        }
        if (first) {
            func_ov067_02260c8c(c);
        }
        return;
    }
    case 9:
        func_ov067_0225f3e8("disconnected(%02X-=%02X)\n", c->unk_50e6, 1 << m->unk_10);
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

extern "C" void func_ov067_02260168(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_50fc->unk_32 = c->unk_50e2;
        c->unk_50fc->unk_0c = func_0211f410();
        func_ov067_0225f3e8("start parent. (%2dch, TGID=%02X, GGID=%04X)\n", c->unk_50e2, c->unk_50fc->unk_0c, c->unk_50fc->unk_08);
        func_ov067_02260d9c(c, 7, func_02120164(func_ov067_02260168, c->unk_50fc));
        return;
    }
    if (m->unk_00 == 7) {
        func_ov067_02260d9c(c, 8, func_021200a8(func_ov067_02260320));
        return;
    }
    if (m->unk_00 == 8) {
        BOOL b = FALSE;
        c->unk_50e4 = b;
        c->unk_50e6 = b;
        if (c->unk_50fc->unk_16 == 0) {
            b = TRUE;
        }
        func_ov067_02260d9c(c, 0xe, func_021206b4(func_ov067_02260168, (u8 *)c + 0x1120, c->unk_50ea, (u8 *)c + 0xf00, c->unk_50e8, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->unk_00 != 0xe) {
        return;
    }
    if (m->unk_04 != 0xa) {
        return;
    }
    func_ov067_02260a4c(c, 4, 0);
}

extern "C" void func_ov067_02260080(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (func_ov067_02260d64(c, m) == 0) {
        return;
    }
    switch (m->unk_08) {
    case 7:
        if (c->unk_50f0 == 5) {
            return;
        }
        func_ov067_0225ff20(m);
        return;
    case 9:
        if (c->unk_50f0 == 1) {
            c->unk_50f4 = 3;
            return;
        }
        c->unk_50f4 = 4;
        func_ov067_022604c0(0);
        return;
    case 6:
    case 8:
        break;
    default:
        func_ov067_02260f34(c);
        break;
    }
}

extern "C" void func_ov067_0225ff20(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        func_ov067_02260d9c(c, 0xc, func_0211fcbc(func_ov067_02260080, (u8 *)c + 0x5120, 0, 1, 0));
        return;
    }
    if (m->unk_00 == 0xc) {
        c->unk_50e4 = m->unk_0a;
        BOOL b = c->unk_50fc->unk_16 == 0 ? TRUE : FALSE;
        func_ov067_02260d9c(c, 0xe, func_021206b4(func_ov067_0225ff20, (u8 *)c + 0x1120, c->unk_50ea, (u8 *)c + 0xf00, c->unk_50e8, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->unk_00 != 0xe) {
        return;
    }
    if (m->unk_04 != 0xa) {
        return;
    }
    func_ov067_02260a4c(c, 5, (u32)m);
}

extern "C" void func_ov067_0225fe1c(Msg *m) {
    Ctx *c = data_ov067_02262260;
    u32 v = 0;
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_50e2 = v;
        c->unk_5104 = 0x65;
    } else if (func_ov067_02260d64(c, m) != 0) {
        v = m->unk_08;
        if (c->unk_5104 > m->unk_0a) {
            c->unk_5104 = m->unk_0a;
            c->unk_50e2 = v;
        }
        if (v == 32 - Clz(func_0211f800())) {
            c->unk_5100 = 0;
            func_ov067_02260a4c(c, 3, 0);
        }
    } else {
        c->unk_5100 = 0;
    }
    if (c->unk_5100 == 0) {
        return;
    }
    u32 a = func_ov067_0225f1a0(v);
    func_ov067_02260d9c(c, 0x1e, func_021218d0(func_ov067_0225fe1c, 3, 0x11, a, 0x1e));
}

extern "C" void func_ov067_0225fb7c(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_5108 = 0;
        c->unk_55e0 = (u32)c + 0x51e0;
        c->unk_55e4 = 0x400;
        c->unk_55e6 = func_0211f800();
        c->unk_55e8 = 0x6e;
        func_02115fb4(c->unk_55ea, 0xff, 6);
        c->unk_55f0 = 1;
        c->unk_55f2 = 0;
        func_02115fb4(c->unk_55f4, 0xff, 0x20);
        func_ov067_02260d9c(c, 0x26, func_0211fdd4(func_ov067_0225fb7c, &c->unk_55e0));
        return;
    }
    if (m->unk_00 == 0x26) {
        if (m->unk_08 == 5) {
            func_02114594((u8 *)c + 0x51e0, 0x400);
            c->unk_5108 = m->unk_0e;
        }
        func_ov067_02260d9c(c, 0xb, func_0211fd8c(func_ov067_0225fb7c));
        return;
    }
    if (m->unk_00 != 0xb) {
        return;
    }
    BOOL found = FALSE;
    if (c->unk_50f4 == 5) {
        s32 i;
        u8 *p = (u8 *)c + 0x51e0;
        func_ov067_0225f3e8("found:%d beacons\n", c->unk_5108);
        i = 0;
        if (c->unk_5108 > 0) {
            do {
                s32 n = *(u16 *)p << 1;
                func_ov067_0225f3e8("   GGID=%08X(%2dch:%3dBYTE)\n", n >= 0x48 ? *(s32 *)(p + 0x44) : -1, *(u16 *)(p + 0x36), n);
                if (n >= 0x48) {
                    found = FALSE;
                    if (c->unk_50f8 != NULL) {
                        found = ((s32 (*)(u32, void *))c->unk_50f8)(6, p);
                    }
                    if (found) {
                        func_ov067_0225f3e8("     -> matched!\n");
                        func_02116048(p, (u8 *)c + 0x5120, 0xc0);
                        break;
                    }
                }
                i++;
                p += (n + 3) & ~3;
            } while (i < c->unk_5108);
        }
    }
    if (found) {
        func_ov067_0225ff20(NULL);
        return;
    }
    if (c->unk_50f4 == 5) {
        c->unk_50f4 = 3;
    }
    func_ov067_02260a4c(c, 3, 0);
}

extern "C" void func_ov067_0225facc(Ctx *c, Sub *s, Unk_ov067_0225facc_Cb cb, u32 v) {
    s32 r = func_01ffa314();
    func_0211f410();
    func_01ffa3d4(r);
    data_ov067_02262260 = c;
    volatile u32 z = 0;
    func_02115e64(z, c, 0x5640);
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

extern "C" void func_ov067_0225fa80(Ctx *x, u32 v) {
    x->unk_50f4 = v;
    u32 cur = x->unk_50f0;
    if (cur == 1) {
        return;
    }
    if (cur == x->unk_50f4) {
        return;
    }
    func_ov067_02260a4c(x, cur, 0);
}

extern "C" void func_ov067_0225fa50(Unk_ov067_0225f1a0_W *w) {
    volatile u32 tmp;
    w->unk_190 = 0;
    tmp = 0;
    func_02115e64(tmp, w, 4);
}

extern "C" void func_ov067_0225f9dc(Unk_ov067_0225f1a0_W *w, u32 a, u32 b) {
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
    func_02115e64(tmp, &w->unk_28, 0x158);
    w->unk_18 = 0;
    w->unk_1c = 0;
    w->unk_20 = 0;
    w->unk_184 = 0;
}

extern "C" void func_ov067_0225f970(Unk_ov067_0225f1a0_W *w, u32 p, u32 q, u32 r, u32 s) {
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

extern "C" void *func_ov067_0225f8f4(Unk_ov067_0225f1a0_W *w, void *start, u32 key, u32 flag) {
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

extern "C" void *func_ov067_0225f8ec(Unk_ov067_0225f1a0_W *w) {
    return w->unk_190;
}

extern "C" void func_ov067_0225f8e4(Unk_ov067_0225f1a0_W *w, void *p) {
    w->unk_190 = (Unk_ov067_0225f1a0_Cb *)p;
}

extern "C" void func_ov067_0225f8e0(void *, void *) {
}

extern "C" BOOL func_ov067_0225f894(Unk_ov067_0225f1a0_W *w, u32 *x) {
    BOOL r = FALSE;
    if (x[0x44 / 4] != 0) {
        void *p = func_ov067_0225f8f4(w, 0, x[0x44 / 4], 1);
        if (p != 0) {
            func_ov067_0225f8e4(w, p);
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_ov067_0225f78c(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h = msg->unk_00;
    func_ov067_0225f3e8("--SEND:ACK=(%3d,%d,%04X),REQ=(%3d,%d,%04X)\n", w->unk_04, w->unk_05, w->unk_06, w->unk_00, w->unk_01, w->unk_02);
    *(Unk_ov067_0225f3fc_Wrap *)&h->unk_00 = *(Unk_ov067_0225f3fc_Wrap *)&w->unk_00;
    *(Unk_ov067_0225f3fc_Wrap *)&h->unk_04 = *(Unk_ov067_0225f3fc_Wrap *)&w->unk_04;
    if (w->unk_04 == w->unk_00) {
        u16 *p = (u16 *)((u8 *)msg->unk_00 + 8);
        switch (w->unk_05) {
        case 1:
            func_ov067_0225f3e8("       INIT(%6d)\n", w->unk_0c);
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
            func_02116048((void *)(w->unk_08 + off), p, rem);
            break;
        }
        }
    }
    msg->unk_04 = (w->unk_180 + 9) & ~1;
}

extern "C" void func_ov067_0225f618(Unk_ov067_0225f1a0_W *w, s32 idx, void *src) {
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
    func_02116048(src, (void *)(w->unk_18 + off), rem);
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

extern "C" BOOL func_ov067_0225f3fc(Unk_ov067_0225f1a0_W *w, Unk_ov067_0225f3fc_Msg *msg) {
    Unk_ov067_0225f3fc_Hdr *h;
    BOOL r6;
    h = msg->unk_00;
    r6 = FALSE;
    if (msg->unk_04 >= w->unk_182) {
        func_ov067_0225f3e8("--RECV:REQ=(%3d,%d,%04X),ACK=(%3d,%d,%04X)\n", h->unk_00, h->unk_01, h->unk_02, h->unk_04, h->unk_05, h->unk_06);
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
                func_ov067_0225f3e8("       INIT(%6d)\n", w->unk_1c);
                break;
            case 2:
                func_ov067_0225f618(w, h->unk_06, p2);
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
                    u32 *e = (u32 *)func_ov067_0225f8ec(w);
                    struct {
                        u32 a;
                        u32 b;
                        u32 c;
                        u16 d;
                    } l;
                    volatile u32 tmp;
                    func_ov067_0225f8e4(w, 0);
                    l.a = w->unk_18;
                    l.b = w->unk_1c;
                    l.c = w->unk_20;
                    l.d = w->unk_24;
                    w->unk_00 = w->unk_00 + 1;
                    w->unk_01 = 0;
                    w->unk_08 = 0;
                    w->unk_0c = 0;
                    tmp = 0;
                    func_02115e64(tmp, &w->unk_28, 0x158);
                    w->unk_18 = 0;
                    w->unk_1c = 0;
                    w->unk_20 = 0;
                    w->unk_184 = 0;
                    if (fn != 0) {
                        fn(5, &l);
                    }
                    if (e[0] != 0) {
                        func_ov067_0225f8e4(w, e);
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

extern "C" void func_ov067_0225f3f8(void *, u32) {
}

extern "C" void func_ov067_0225f3f4(void *, u32) {
}

extern "C" void func_ov067_0225f3e8(const char *fmt, ...) {
}

extern "C" char *func_ov067_0225f38c(s32 n) {
    if (n < 0x2c) {
        return data_ov067_02261f78[n];
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

extern "C" char *func_ov067_0225f370(s32 n) {
    if (n < 0x14) {
        return data_ov067_02261f28[n];
    }
    return "(unknown WMErrCode)";
}

extern "C" BOOL func_ov067_0225f2ec(s32 code, s32 x) {
    BOOL r = TRUE;
    if (x == 0) {
        func_ov067_0225f3e8(">< %s succeeded.\n", func_ov067_0225f38c(code));
    } else if (x == 2) {
        func_ov067_0225f3e8(">  %s started.\n", func_ov067_0225f38c(code));
    } else {
        char *n = func_ov067_0225f38c(code);
        func_ov067_0225f3e8(">< %s failed. %s\n", n, func_ov067_0225f370(x));
        r = FALSE;
    }
    return r;
}

extern "C" BOOL func_ov067_0225f210(u16 *m) {
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
        func_ov067_0225f3e8(" < %s succeeded.\n", func_ov067_0225f38c(c));
    } else {
        if (c == 0xe) {
            if (r5 == 9 || r5 == 0xd || r5 == 0xf) {
                r6 = TRUE;
            }
        }
        if (r6 == 0) {
            char *n = func_ov067_0225f38c(c);
            char *e = func_ov067_0225f370(r5);
            func_ov067_0225f3e8(" < %s failed. %s(cmd=%02X,res=%02X)\n", n, e, m[2], m[3]);
        }
    }
end:
    return r6;
}

extern "C" u16 func_ov067_0225f1a0(s32 n) {
    u32 m = func_0211f800();
    if (m == 0) {
        func_0206d49c();
    } else if (m == 0x8000) {
        func_0206d49c();
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
