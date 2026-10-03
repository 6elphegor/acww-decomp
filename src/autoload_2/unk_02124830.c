// mwcc-flags: -nothumb -O4,p
// Wireless helper library built on WM (WC/WH style), autoload_2 0x02124830-0x02124a94. ARM code, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef void (*WCb)(void *);

typedef struct { u32 w[32]; } W128;

typedef struct {
    u8 scan[0xc0];
    u8 _c0[10];
    u8 mac[6];
    u8 _d0[0x26];
    u16 f0f6;
    W128 f0f8;
    u8 _178[8];
} WScan;

typedef struct {
    u8 _00[8];
    u32 f08;
    u16 f0c;
    u16 f0e;
    u16 f10;
    u16 f12;
    u16 f14;
    u16 f16;
    u16 f18;
    u8 _1a[0x32 - 0x1a];
    u16 f32;
    u16 f34;
    u16 f36;
    u8 _38[0x440 - 0x38];
    u8 scanbuf[0x500 - 0x440];
    u16 f500;
    u16 f502;
    void *f504;
    WCb cb508;
    u8 f50c;
    u8 f50d;
    u8 _50e[0x518 - 0x50e];
    u16 f518;
    u16 f51a;
    void (*cb51c)(u32, void *);
    u32 f520;
    u16 f524;
    u16 f526;
    u16 f528;
    u16 f52a;
    u16 f52c;
    u8 _52e[0x530 - 0x52e];
    u16 f530[4];
    u16 f538[16];
    u8 _558[0x5e0 - 0x558];
    u16 f5e0;
    u16 f5e2;
    u32 f5e4;
    u32 f5e8;
    u32 f5ec;
    u8 _5f0[0x600 - 0x5f0];
    WScan scan[16];
} WCtl;

typedef struct {
    u16 f0;
    u16 f2;
    u16 f4;
    u16 f6;
    u16 f8;
    u8 mac[6];
    u8 _10[0x26];
    u16 f36;
    W128 f38;
} WMsg;

typedef struct {
    u8 _0;
    u8 n;
} WChList;

typedef struct {
    void *buf;
    u16 f4;
    u16 f6;
    u8 bssid[6];
} WScanParam;

typedef struct {
    u8 _0[0x1300];
    u8 f1300[22];
    u16 f1316;
    u32 f1318;
    u32 f131c;
    u32 f1320;
    u8 _1324[0x1340 - 0x1324];
    u8 ent[15][22];
    u16 f148a[15];
    u32 f14a8[15];
    void (*cb)();
    u32 state[15];
    u8 f1524;
    u8 _1525;
    s8 slot[15];
    u8 cnt1535;
    u16 mask1536;
    u8 _1538[0x1754 - 0x1538];
    u16 st16[15];
    u8 _1772[0x1788 - 0x1772];
    u8 peers[16][0x5d4];
} WWork;

extern WCtl *data_02200018;
extern WWork *data_0220001c;
extern u16 data_02200010;
extern u8 *data_02200014;
extern WScanParam data_02200020;
extern u16 data_0213c20c;
extern u16 data_0213c210;
extern u16 data_0213c214;
extern u16 data_0213c218;
extern u16 *data_0213c21c;

extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void func_0206d49c(void);
extern void DC_InvalidateRange(void *, u32);
extern void OS_GetMacAddress(u8 *);
extern void MI_DmaCopy16(u32, void *, void *, u32);
extern void MIi_CpuClear16(u32, void *, u32);
extern void MIi_CpuCopy16(void *, void *, u32);
extern void func_02115e64(u32, void *, u32);
extern void MI_CpuFill8(void *, u32, u32);
extern void MI_CpuCopy8(void *, void *, u32);
extern u32 PXI_IsCallbackReady(u32, u32);
extern u32 func_0211f410(void);
extern u32 func_0211fb0c(u32, void *, u32);
extern u32 func_0211fb68(WCb);
extern u32 func_0211fbb4(WCb, u32);
extern u32 func_0211fcbc(WCb, u32, u32, u32, u32);
extern u32 func_0211ff5c(WCb, void *);
extern u32 WM_End(WCb);
extern u32 WM_Reset(WCb);
extern u32 WM_Initialize(void *, WCb, u32);
extern u32 func_0212052c(u32, u32, u32, u32, u32, u32, u32);
extern u32 func_021206b4(WCb, void *, u32, void *, u32, u32, u32, u32, u32, u32, u32);
extern u32 WM_SetLifeTime(WCb, u32, u32, u32, u32);
extern void func_021230a4(void *);
extern void func_0212454c(void);
extern u32 func_021265dc(void);
extern u32 func_02126644(void *);
extern u32 func_02126568(void);
extern void func_021267e8(void *);
extern u32 func_021269f8(void);
extern void func_02126e88(u32);
extern void func_02126ed4(void *);
extern void func_02126ef4(u32);
extern void func_02125d0c(void *);
extern void func_02122944(u32, void *);
extern void func_02125c94(void *);

void func_02124830(u32 id, u32 res);
void func_02124a84(u32 t);
u32 func_02124a34(WCb cb, void *a, u32 b, u32 c, u16 d);
BOOL func_02124c80(void);
BOOL func_02124d08(void);
BOOL func_02124d14(void);
u32 func_02124d74(u32 a);
u32 func_02124f98(void);
BOOL func_0212513c(u32 a, u32 c, u32 d);
u32 func_021253a4(void);
void func_0212541c(void *arg);

// set WMScanParam.maxChannelTime of data_02200020
void func_02124a84(u32 t) {
    data_02200020.f6 = t;
}

// WM send helper: func_0212052c(cb, 0, data, size, bitmap, 1, 3) then report the result via func_02124830(15, ret)
u32 func_02124a34(WCb cb, void *a, u32 b, u32 c, u16 d) {
    u32 r = func_0212052c((u32)cb, 0, (u32)a, b, d, 1, 3);
    func_02124830(15, r);
    return r;
}

// send step (probably WC_SetMPData-like): wraps func_02124a34 in the MP state of the control block
u32 func_02124930(void *a, u32 b0, u32 c0) {
    WCtl *g = data_02200018;
    u16 b = b0;
    u16 c = c0;
    u32 r;
    if (g->f528 == 0 || g->f526 == 1) return 1;
    switch (g->f524) {
    case 1:
        r = func_02124a34(g->cb508, a, b, (u16)(g->f52c == 0 ? 1000 : 0), c);
        if (r == 2) data_02200018->f50c = 1;
        if (r == 2) r = 0;
        return r;
    case 2:
        r = func_02124a34(func_0212541c, a, b, 0, c);
        if (r == 2) data_02200018->f50c = 1;
        if (r == 2) r = 0;
        return r;
    default:
        return 1;
    }
}

// getter: control block u32 at +0x08
u32 func_0212491c(void) {
    return data_02200018->f08;
}

// getter: control block u16 at +0x0c
u32 func_02124908(void) {
    return data_02200018->f0c;
}

// bitmask of the four mode flags (0e=1, 12=2, 14=4, 16=8)
u8 func_021248a8(void) {
    WCtl *g = data_02200018;
    return (u8)(((g->f0e != 0) ? 1 : 0) | ((g->f12 != 0) ? 2 : 0) | ((g->f14 != 0) ? 4 : 0) | ((g->f16 != 0) ? 8 : 0));
}

// is the wireless layer initialised (flag 0x50d == 1)
BOOL func_02124888(void) {
    return data_02200018->f50d == 1;
}

// notify the user callback (cb51c) of a failed WM call: (apiId, errcode); 0 and WM_ERRCODE_OPERATING(2) are silent
void func_02124830(u32 id, u32 res) {
    u16 buf[2];
    if (res == 2) return;
    if (res == 0) return;
    buf[0] = id;
    buf[1] = res;
    data_02200018->cb51c(0xff, buf);
}

