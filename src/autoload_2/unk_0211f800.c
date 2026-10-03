// mwcc-flags: -nothumb -O4,p
// NitroSDK WM (wireless manager) API, autoload_2 0x0211f800-0x02120c98. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct {
    u16 state;          // 0x00
    u8 _02[0x0a];
    u32 f0c;
    u32 f10;
    u8 _14[0x3c];
    u32 f50;
    u8 _54[0x32];
    u16 f86;
    u8 _88[0x3a];
    u16 fc2;
    u8 _c4[0x30];
    u16 ff4;
    u8 _f6[0x88];
    u16 f17e;
    u8 _180[4];
    u16 f184;
    u8 _186[8];
    u16 f18e;
    u16 f190;
} WMStatus;

typedef struct WMMsg WMMsg;
typedef void (*WMCallback)(WMMsg *);

typedef struct {
    void *w0;
    WMStatus *status;   // 0x04
    u32 f8;
    u8 *req;            // 0x0c
    u8 *f10;
    u16 dmaNo;
    u16 f16;
    WMCallback cb18[42];
    WMCallback cbC0;
    WMCallback reqCb[16];
    u32 reqArg[16];
} WMArm9Buf;

typedef struct {
    u8 _0[4];
    u16 num;
    u16 size;
    u16 _8;
    u8 data[1];
} WMSet;

typedef struct {
    u16 hdr;
    u8 data[510];
} WMPacket;

typedef struct {
    WMPacket pkt[4];    // 0x000
    u16 slot[4];        // 0x800
    u16 cur;            // 0x808
    u16 f80a;
    u16 f80c;
    u16 f80e;
    u16 f810;
    u16 f812;
    u16 f814;
    u16 f816;
    u16 f818;
    u16 f81a;
    u16 f81c;
} WMPool;

#define W8(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define W16(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define W32(p, o) (*(u32 *)((u8 *)(p) + (o)))

extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern u32 WMi_CheckInitialized(void);
extern u32 WMi_CheckIdle(void);
extern u32 WMi_CheckStateEx(int n, ...);
extern WMArm9Buf *func_0211f00c(void);
extern u32 func_0211f01c(u32 id, u16 paramNum, ...);
extern void WMi_SetCallbackTable(u32 idx, WMCallback cb);
extern u32 WM_Init(void *buf, u16 dmaNo);
extern void DC_InvalidateRange(void *, u32);
extern void DC_StoreRange(void *, u32);
extern void MIi_CpuCopyFast(void *, void *, u32);
extern void MI_CpuCopy8(void *, void *, u32);
extern void MI_CpuFill8(void *, u32, u32);
extern void MIi_CpuClear16(u32, void *, u32);
extern u32 MATH_CountPopulation(u32);
extern u32 func_021200b8(WMCallback cb, u32 arg);
extern void func_02120fe8(WMMsg *);

int func_0211f930(void);
int func_0211fa1c(void);
u32 func_0212052c(WMCallback cb, u32 arg, void *sendData, u16 size, u16 destBitmap, u16 port, u16 prio);
u32 WmGetSharedDataAddress(u8 *base, u32 x, u32 y, u32 n);
BOOL WmCheckParentParameter(u8 *p);
// (WM key-sharing MP send step, uses WM_SetMPDataToPortEx; callback func_02120fe8)
void func_02120b0c(WMPool *buf, BOOL flag) {
    WMStatus *st = func_0211f00c()->status;
    u32 irq = OS_DisableInterrupts();
    if (buf->pkt[buf->cur].hdr == 0) {
        u32 nextNext, cur, ack, next;
        volatile u16 zero; // SDK MI_CpuClear16 idiom (vu16 tmp = 0)
        int ret;
        DC_InvalidateRange(&st->f86, 2);
        cur = buf->cur;
        ack = st->f86;
        next = (u16)((cur + 1) & 3);
        if (buf->f818 == 1) {
            nextNext = (u16)((next + 1) & 3);
        } else {
            nextNext = next;
        }
        zero = 0;
        MIi_CpuClear16(zero, &buf->pkt[nextNext], 512);
        buf->pkt[nextNext].hdr = buf->f80e & (ack | 1);
        buf->cur = next;
        buf->pkt[cur].hdr = buf->f80e;
        if (flag == 1) buf->pkt[cur].hdr &= ~1;
        OS_RestoreInterrupts(irq);
        ret = func_0212052c(func_02120fe8, (u32)buf, &buf->pkt[cur], buf->f814, buf->f80e & ack, buf->f816, 1);
        if (ret == 7) {
            buf->slot[cur] = 0xffff;
            buf->f80a = (buf->f80a + 1) & 3;
        } else if (ret != 0) {
            if (ret != 2) buf->f81c = 5;
        }
    } else {
        OS_RestoreInterrupts(irq);
    }
}

// (WM key-sharing helper)
u32 WM_GetSharedDataAddress(u8 *base, u16 *p, u32 n) {
    u32 b = p[1];
    u32 m = 1 << n;
    u32 a = p[0];
    if (base == 0) return 0;
    if (p == 0) return 0;
    if ((a & m) == 0) return 0;
    if ((b & m) == 0) return 0;
// (WM key-sharing helper: popcount-indexed lookup)
    return WmGetSharedDataAddress(base, a, (u32)(p + 2), n);
}

u32 WmGetSharedDataAddress(u8 *base, u32 x, u32 y, u32 n) {
    return W16(base, 0x810) * MATH_CountPopulation(x & ((1 << n) - 1)) + y;
}

// WM_StartDCF (request 17)
u32 WM_StartDCF(WMCallback cb, void *ptr, u32 len) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(1, 8);
    if (r != 0) return r;
    DC_InvalidateRange(&w->status->f10, 4);
    if (w->status->f10 == 1) return 3;
    if (len < 16) return 6;
    if (ptr == 0) return 6;
    DC_StoreRange(ptr, len);
    WMi_SetCallbackTable(17, cb);
    r = func_0211f01c(17, 2, ptr, len);
    if (r == 0) r = 2;
    return r;
}

// WM_SetDCFData (request 18)
u32 WM_SetDCFData(WMCallback cb, void *mac, void *buf, u32 len) {
    WMArm9Buf *w = func_0211f00c();
    u32 m[2];
    u32 r = WMi_CheckStateEx(1, 11);
    if (r != 0) return r;
    DC_InvalidateRange(&w->status->f10, 4);
    if (w->status->f10 == 0) return 3;
    if (len > 0x5e4) return 6;
    DC_StoreRange(buf, len);
    WMi_SetCallbackTable(18, cb);
    MI_CpuCopy8(mac, m, 6);
    r = func_0211f01c(18, 4, m[0], m[1], buf, len);
    if (r == 0) r = 2;
    return r;
}

// WM_EndDCF (request 19)
u32 WM_EndDCF(WMCallback cb) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(1, 11);
    if (r != 0) return r;
    DC_InvalidateRange(&w->status->f10, 4);
    if (w->status->f10 == 0) return 3;
    WMi_SetCallbackTable(19, cb);
    r = func_0211f01c(19, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_StartMPEx (request 14)
u32 func_021206b4(WMCallback cb, u32 a, u16 len, u32 c, u16 s1, u16 s2, u16 s3, u32 s4, u32 s5, u32 s6, u32 s7) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(2, 7, 8);
    if (r != 0) return r;
    DC_InvalidateRange(&w->status->f184, 2);
    DC_InvalidateRange(&w->status->fc2, 2);
    if (w->status->f184 != 0) {
        if (w->status->fc2 != 1) return 3;
    }
    DC_InvalidateRange(&w->status->f0c, 4);
    if (w->status->f0c == 1) return 3;
    if (len < func_0211f930()) return 6;
    if ((len & 0x3f) != 0) return 6;
    {
        int t = s1;
        if (t < func_0211fa1c()) return 6;
        if ((t & 0x1f) != 0) return 6;
    }
    WMi_SetCallbackTable(14, cb);
    r = func_0211f01c(14, 10, a, (u32)len >> 1, c, s1, s2, s3, s4, s5, s6, s7);
    if (r == 0) r = 2;
    return r;
}

// WM_SetMPDataToPortEx (request 15)
u32 func_0212052c(WMCallback cb, u32 arg, void *sendData, u16 size, u16 destBitmap, u16 port, u16 prio) {
    int maxSize;
    u16 mask = 1;
    WMStatus *st = func_0211f00c()->status;
    BOOL parent;
    u32 r = WMi_CheckStateEx(2, 9, 10);
    if (r != 0) return r;
    DC_InvalidateRange(&st->f18e, 2);
    maxSize = st->f18e;
    DC_InvalidateRange(&st->f184, 2);
    parent = st->f184 == 0 ? 1 : 0;
    if (parent == 1) {
        DC_InvalidateRange(&st->f17e, 2);
        mask = st->f17e;
        DC_InvalidateRange(&st->f86, 2);
    }
    if (sendData == 0) return 6;
    if (mask == 0) return 7;
    DC_InvalidateRange(&st->f50, 2);
    if (sendData == (void *)st->f50) return 6;
    if (size + (parent != 0 ? 4 : 2) > maxSize) return 6;
    if (size == 0) return 6;
    DC_StoreRange(sendData, size);
    r = func_0211f01c(15, 7, sendData, size, destBitmap, port, prio, cb, arg);
    if (r == 0) r = 2;
    return r;
}

// WM_EndMP (request 16)
u32 WM_EndMP(WMCallback cb) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(2, 9, 10);
    if (r != 0) return r;
    DC_InvalidateRange(&w->status->f0c, 4);
    if (w->status->f0c == 0) return 3;
    WMi_SetCallbackTable(16, cb);
    r = func_0211f01c(16, 0);
    if (r == 0) r = 2;
    return r;
}

// WM request 3 (WM_Enable-style)
u32 WM_Enable(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 0);
    if (r != 0) return r;
    WMi_SetCallbackTable(3, cb);
    {
        WMArm9Buf *w = func_0211f00c();
        r = func_0211f01c(3, 3, w->w0, w->status, w->f10);
    }
    if (r == 0) r = 2;
    return r;
}

// WM request 4 (WM_Disable-style)
u32 WM_Disable(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 1);
    if (r != 0) return r;
    WMi_SetCallbackTable(4, cb);
    r = func_0211f01c(4, 0);
    if (r == 0) r = 2;
    return r;
}

// WM request 5 (WM_PowerOn-style)
u32 WM_PowerOn(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 1);
    if (r != 0) return r;
    WMi_SetCallbackTable(5, cb);
    r = func_0211f01c(5, 0);
    if (r == 0) r = 2;
    return r;
}

// WM request 6 (WM_PowerOff-style)
u32 WM_PowerOff(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 2);
    if (r != 0) return r;
    WMi_SetCallbackTable(6, cb);
    r = func_0211f01c(6, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_Init-style (request 0): WMi init buffer + initialize
u32 WM_Initialize(void *buf, WMCallback cb, u16 dmaNo) {
    WMArm9Buf *w;
    u32 r = WM_Init(buf, dmaNo);
    if (r != 0) return r;
    WMi_SetCallbackTable(0, cb);
    w = func_0211f00c();
    r = func_0211f01c(0, 3, w->w0, w->status, w->f10);
    if (r == 0) r = 2;
    return r;
}

// WM request 1 (WM_Reset-style)
u32 WM_Reset(WMCallback cb) {
    u32 r = WMi_CheckIdle();
    if (r != 0) return r;
    WMi_SetCallbackTable(1, cb);
    r = func_0211f01c(1, 0);
    if (r == 0) r = 2;
    return r;
}

// WM request 2
u32 WM_End(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 2);
    if (r != 0) return r;
    WMi_SetCallbackTable(2, cb);
    r = func_0211f01c(2, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_SetParentParameter (request 7)
u32 WM_SetParentParameter(WMCallback cb, u8 *p) {
    u32 r = WMi_CheckStateEx(1, 2);
    u32 n;
    if (r != 0) return r;
    if (p == 0) return 6;
    if (W16(p, 4) != 0) {
        if (W32(p, 0) == 0) return 6;
    }
    n = W16(p, 0x14);
    if (W16(p, 0x34) + (n != 0 ? 42 : 0) > 512 || W16(p, 0x36) + (n != 0 ? 6 : 0) > 512) return 6;
// WM_SetParentParameter argument check
    WmCheckParentParameter(p);
    WMi_SetCallbackTable(7, cb);
    DC_StoreRange(p, 0x40);
    if (W16(p, 4) != 0) DC_StoreRange((void *)W32(p, 0), W16(p, 4));
    r = func_0211f01c(7, 1, p);
    if (r == 0) r = 2;
    return r;
}

BOOL WmCheckParentParameter(u8 *p) {
    u32 v = W16(p, 4);
    if (v > 0x70) return 0;
    v = W16(p, 0x18);
    if (v < 10 || v > 1000) return 0;
    v = W16(p, 0x32);
    if (v < 1 || v > 14) return 0;
    return 1;
}

// WM_StartParent-style (request 8)
u32 func_021200b8(WMCallback cb, u32 arg) {
    u32 r = WMi_CheckStateEx(1, 2);
    if (r != 0) return r;
    WMi_SetCallbackTable(8, cb);
    r = func_0211f01c(8, 1, arg);
    if (r == 0) r = 2;
    return r;
}

// WM_StartParent-style wrapper -> func_021200b8(cb, 1)
u32 func_021200a8(WMCallback cb) {
    return func_021200b8(cb, 1);
}

// WM_EndParent (request 9)
u32 WM_EndParent(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 7);
    if (r != 0) return r;
    WMi_SetCallbackTable(9, cb);
    r = func_0211f01c(9, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_StartScan (request 10)
u32 func_0211ff5c(WMCallback cb, u8 *p) {
    u32 r = WMi_CheckStateEx(3, 2, 3, 5);
    u8 *m;
    if (r != 0) return r;
    if (p == 0) return 6;
    if (W32(p, 0) == 0) return 6;
    if (W16(p, 4) < 1 || W16(p, 4) > 14) return 6;
    WMi_SetCallbackTable(10, cb);
    m = func_0211f00c()->req;
    W16(m, 0) = 10;
    W16(m, 2) = W16(p, 4);
    W32(m, 4) = W32(p, 0);
    W16(m, 8) = W16(p, 6);
    W8(m, 10) = W8(p, 8);
    W8(m, 11) = W8(p, 9);
    W8(m, 12) = W8(p, 10);
    W8(m, 13) = W8(p, 11);
    W8(m, 14) = W8(p, 12);
    W8(m, 15) = W8(p, 13);
    r = func_0211f01c(10, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_StartScanEx (request 38)
u32 func_0211fdd4(WMCallback cb, u8 *p) {
    u32 r = WMi_CheckStateEx(3, 2, 3, 5);
    u8 *m;
    u32 v;
    if (r != 0) return r;
    if (p == 0) return 6;
    if (W32(p, 0) == 0) return 6;
    if (W16(p, 4) > 0x400) return 6;
    if (W16(p, 0x12) > 32) return 6;
    v = W16(p, 0x10);
    if (v != 0 && v != 1 && v != 2 && v != 3) return 6;
    if ((u16)(v + 0xfffe) <= 1) {
        if (W16(p, 0x34) > 32) return 6;
    }
    WMi_SetCallbackTable(38, cb);
    m = func_0211f00c()->req;
    W16(m, 0) = 38;
    W16(m, 2) = W16(p, 6);
    W32(m, 4) = W32(p, 0);
    W16(m, 8) = W16(p, 4);
    W16(m, 10) = W16(p, 8);
    MI_CpuCopy8(p + 10, m + 12, 6);
    W16(m, 18) = W16(p, 0x10);
    W16(m, 0x36) = W16(p, 0x34);
    W16(m, 20) = W16(p, 0x12);
    MI_CpuCopy8(p + 20, m + 22, 32);
    r = func_0211f01c(38, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_EndScan (request 11)
u32 WM_EndScan(WMCallback cb) {
    u32 r = WMi_CheckStateEx(1, 5);
    if (r != 0) return r;
    WMi_SetCallbackTable(11, cb);
    r = func_0211f01c(11, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_StartConnect-style (request 12)
u32 func_0211fcbc(WMCallback cb, u8 *bss, u8 *ssid, u32 arg, u16 extra) {
    u32 r = WMi_CheckStateEx(1, 2);
    u8 *m;
    if (r != 0) return r;
    if (bss == 0) return 6;
    DC_StoreRange(bss, W16(bss, 0) << 1);
    WMi_SetCallbackTable(12, cb);
    m = func_0211f00c()->req;
    W16(m, 0) = 12;
    W32(m, 4) = (u32)bss;
    if (ssid != 0) {
        MI_CpuCopy8(ssid, m + 8, 24);
    } else {
        MI_CpuFill8(m + 8, 0, 24);
    }
    W32(m, 32) = arg;
    W16(m, 38) = extra;
    r = func_0211f01c(12, 0);
    if (r == 0) r = 2;
    return r;
}

// WM_Disconnect (request 13)
u32 func_0211fbb4(WMCallback cb, u32 aid) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckStateEx(5, 7, 9, 8, 10, 11);
    if (r != 0) return r;
    if (w->status->state == 7 || w->status->state == 9) {
        if (aid < 1 || aid > 15) return 6;
        DC_InvalidateRange(&w->status->f17e, 2);
        if ((w->status->f17e & (1 << aid)) == 0) return 7;
    } else {
        if (aid != 0) return 6;
    }
    WMi_SetCallbackTable(13, cb);
    r = func_0211f01c(13, 1, 1 << aid);
    if (r == 0) r = 2;
    return r;
}

// WM_SetIndCallback
u32 func_0211fb68(WMCallback cb) {
    u32 irq = OS_DisableInterrupts();
    u32 r = WMi_CheckInitialized();
    if (r != 0) {
        OS_RestoreInterrupts(irq);
        return r;
    }
    func_0211f00c()->cbC0 = cb;
    OS_RestoreInterrupts(irq);
    return 0;
}

// WM_SetPortCallback
u32 func_0211fb0c(u16 port, WMCallback cb, u32 arg) {
    u32 irq = OS_DisableInterrupts();
    u32 r = WMi_CheckInitialized();
    if (r != 0) {
        OS_RestoreInterrupts(irq);
        return r;
    }
    {
        WMArm9Buf *w = func_0211f00c();
        w->reqCb[port] = cb;
        w->reqArg[port] = arg;
    }
    OS_RestoreInterrupts(irq);
    return 0;
}

// WM_ReadStatus
u32 func_0211faa0(void *dst) {
    WMArm9Buf *w = func_0211f00c();
    u32 r = WMi_CheckInitialized();
    if (r != 0) return r;
    if (dst == 0) return 6;
    DC_InvalidateRange(w->status, 0x7bc);
    MIi_CpuCopyFast(w->status, dst, 0x7bc);
    return 0;
}

// WM_GetMPSendBufferSize
int func_0211fa1c(void) {
    WMArm9Buf *w = func_0211f00c();
    if (WMi_CheckStateEx(2, 7, 8) != 0) return 0;
    DC_InvalidateRange(&w->status->f0c, 4);
    if (w->status->f0c == 1) return 0;
    DC_InvalidateRange(&w->status->f18e, 4);
    return (w->status->f18e + 31) & ~31;
}

// WM_GetMPReceiveBufferSize
int func_0211f930(void) {
    WMArm9Buf *w = func_0211f00c();
    u32 a;
    BOOL idle;
    if (WMi_CheckStateEx(2, 7, 8) != 0) return 0;
    DC_InvalidateRange(&w->status->f0c, 4);
    if (w->status->f0c == 1) return 0;
    DC_InvalidateRange(&w->status->f184, 2);
    idle = w->status->f184 == 0 ? 1 : 0;
    DC_InvalidateRange(&w->status->f190, 2);
    a = w->status->f190;
    if (idle != 1) return ((a + 81) & ~31) << 1;
    DC_InvalidateRange(&w->status->ff4, 2);
    return (((a + 12) * w->status->ff4 + 41) & ~31) << 1;
}

u8 *func_0211f82c(WMSet *p, u32 ch) {
    WMArm9Buf *w = func_0211f00c();
    u32 a[16];
    int i;
    if (WMi_CheckInitialized() != 0) return 0;
    if (ch < 1 || ch > 15) return 0;
    DC_InvalidateRange(&w->status->f17e, 2);
    if ((w->status->f17e & (1 << ch)) == 0) return 0;
    if (p->num == 0) return 0;
    a[0] = (u32)p->data;
    i = 0;
    do {
        if (ch == W16(((u32 *)a)[i], 4)) return (u8 *)((u32 *)a)[i];
        i++;
        ((u32 *)a)[i] = ((u32 *)a)[i - 1] + p->size;
    } while (i < p->num);
    return 0;
}

// WM_GetAllowedChannel
u32 WM_GetAllowedChannel(void) {
    if (WMi_CheckInitialized() != 0) return 0x8000;
    return *(u16 *)0x027ffcfa;
}
