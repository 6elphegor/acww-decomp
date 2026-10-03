// mwcc-flags: -nothumb -O4,p
// Wireless communication helper library built on WM (WH/WC style), autoload_2 0x02124830-0x02125c94. ARM code, mwcc 1.2/base, -O4,p.
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
extern void MIi_CpuClear32(u32, void *, u32);
extern void MI_CpuFill8(void *, u32, u32);
extern void MI_CpuCopy8(void *, void *, u32);
extern u32 PXI_IsCallbackReady(u32, u32);
extern u32 WM_GetNextTgid(void);
extern u32 func_0211fb0c(u32, void *, u32);
extern u32 WM_SetIndCallback(WCb);
extern u32 WM_Disconnect(WCb, u32);
extern u32 func_0211fcbc(WCb, u32, u32, u32, u32);
extern u32 WM_StartScan(WCb, void *);
extern u32 WM_End(WCb);
extern u32 WM_Reset(WCb);
extern u32 WM_Initialize(void *, WCb, u32);
extern u32 WM_SetMPDataToPortEx(u32, u32, u32, u32, u32, u32, u32);
extern u32 func_021206b4(WCb, void *, u32, void *, u32, u32, u32, u32, u32, u32, u32);
extern u32 WM_SetLifeTime(WCb, u32, u32, u32, u32);
extern void MB_CommSetParentStateCallback(void *);
extern void func_0212454c(void);
extern u32 func_021265dc(void);
extern u32 changeScanChannel(void *);
extern u32 MBi_OnInitializeDone(void);
extern void MBi_EndTaskThread(void *);
extern u32 MBi_IsTaskAvailable(void);
extern void MBi_ClearParentPieceBuffer(u32);
extern void MBi_SetParentPieceBuffer(void *);
extern void func_02126ef4(u32);
extern void func_02125d0c(void *);
extern void MBi_CommParentCallback(u32, void *);
extern void func_02125c94(void *);

void MBi_CheckWmErrcode(u32 id, u32 res);
void MBi_SetMaxScanTime(u32 t);
u32 MBi_SetMPData(WCb cb, void *a, u32 b, u32 c, u16 d);
BOOL MBi_CommEnd(void);
BOOL MBi_OnReset(void);
BOOL MBi_CallReset(void);
u32 func_02124d74(u32 a);
u32 MBi_StartCommon(void);
BOOL MBi_IsCommSizeValid(u32 a, u32 c, u32 d);
u32 func_021253a4(void);
void func_0212541c(void *arg);

// disconnect/clear one peer (aid 1..15): WM_Disconnect + clear its slot bookkeeping
void func_02124a94(u32 aid) {
    u32 i;
    s8 idx;
    u32 bit;
    WM_Disconnect(func_02125d0c, aid);
    if (aid == 0) return;
    if (aid >= 16) return;
    i = aid - 1;
    data_0220001c->f148a[i] = 0;
    MI_CpuFill8(&data_0220001c->f14a8[i], 0, 4);
    MI_CpuFill8(data_0220001c->ent[i], 0, 22);
    MBi_ClearParentPieceBuffer(aid);
    data_0220001c->st16[i] = 0;
    idx = data_0220001c->slot[i];
    if (idx != -1) {
        u32 off = (u8)idx * 0x5d4;
        bit = 1 << aid;
        *(u16 *)((u8 *)data_0220001c + off + 0x1d4e) &= ~bit;
        *(u16 *)((u8 *)data_0220001c + off + 0x1d50) |= bit;
data_0220001c->slot[(int)(aid - 1)] = -1;
        *(u16 *)((u8 *)data_0220001c + off + 0x1d4c) &= ~bit;
    }
    bit = 1 << aid;
    if (data_0220001c->mask1536 & bit) {
        data_0220001c->cnt1535--;
        data_0220001c->mask1536 &= ~bit;
    }
    data_0220001c->state[i] = 0;
}
