// mwcc-flags: -nothumb -O4,p
// Wireless peer/transfer management module (WM-based), autoload_2 0x02122e24-0x02123444. ARM code, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

#define W8(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define W16(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define W32(p, o) (*(u32 *)((u8 *)(p) + (o)))

extern u8 *data_0220001c;
extern u8 data_0213c200;
extern u32 data_0213a3ec[];
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_02115fb4(void *, u32, u32);
extern void func_02116048(void *, void *, u32);
extern u32 func_0213335c(u32, u32);
extern void func_0206d49c(void);
extern void *func_02126e00(void *, void *);
extern u32 func_02121c34(u32);
extern u32 func_02123f24(u32, u32, void *);
extern u8 *func_0211f82c(void *, u32);
extern void func_02119d78(void *);
extern void *func_021191f0(void *, u32);
extern u32 func_02119af4(void *, void *, u32, u32, int);
extern u32 func_021198b4(void *, u32, u32);
extern void func_021199e0(void *);
extern u8 *func_02126cc4(void *, void *, u32);
extern u32 func_02121c50(u32, u32);
extern void func_02126e88(u32);
extern void func_02121cc8(void);
extern void func_021245ec(void *, void *, u32);
extern u32 func_0212491c(void);
extern u32 func_02124908(void);
extern u32 func_021248a8(void);
extern void func_02124480(u32, u32, u32);
extern void func_02121c10(u32, u32);
extern void func_02115ea8(u32, void *, u32);
typedef struct { u32 a[3]; u16 b[3]; u16 n; } WTab;
typedef struct { u32 w0, w4, w8, wc; } WSeg;
typedef struct { u8 pad[12]; WSeg seg[3]; } WSrc;
typedef struct { u32 a[3]; u16 b[4]; } WDst;
BOOL func_021230d0(u32 idx, u32 addr, u32 size);
BOOL func_021231e4(u32 idx, u32 addr, u32 size);
void func_02122e24(u32 a, u32 b, void *c);
void func_0212244c(u8 *msg, u32 aid);
typedef struct { u8 id; u16 aid; u16 pad; } WMsg;
typedef struct { u32 f0, f4, f8, fc; } WJob;
typedef struct { u8 pad[0x14]; u32 f14; } WObj;
typedef struct { u8 pad[0x10]; WJob *job; WObj *obj; } WArg;
typedef struct { u8 f0 : 4; u8 aid : 4; } WEnt;
void func_02122e60(u32 a, u32 b, void *c);
typedef struct { u8 f0 : 4; u8 aid : 4; u8 pad[21]; } WEnt22;
typedef struct { u8 _0[0x14]; u32 f14; u8 f18; } WObj2;
typedef struct {
    u8 _0[0x5b8];
    WObj2 *obj;        // 0x5b8
    u8 _5bc[4];
    u16 f5c0;
    u16 f5c2;
    u16 f5c4;
    u16 f5c6;
    u16 f5c8;
    u8 f5ca;
    u8 _5cb[9];
} WPeer;
typedef struct {
    u8 _0[0x1318];
    u32 f1318;
    u8 _131c[0x1340 - 0x131c];
    WEnt22 ent[15];            // 0x1340
    u16 f148a[15];
    u32 f14a8[15];
    void (*cb)();              // 0x14e4
    u32 state[15];             // 0x14e8
    u8 _1524[2];
    u8 slot[15];               // 0x1526
    u8 cnt1535;
    u16 mask1536;
    u8 _1538[0x1754 - 0x1538];
    u16 st16[15];              // 0x1754
    u8 buf1772[22];
    WPeer peer[16];            // 0x1788
} WWork;
#define WK2 ((WWork *)data_0220001c)
void func_021223a4(void *arg);
// (wireless data-transfer table builder: prefix sums of 3 segment sizes, per-segment sector counts, uses func_021230d0 range check)
BOOL func_02123368(WDst *dst, WSrc *src) {
    u16 *tab = dst->b;
    u8 i;
    u32 sum;
    sum = 0;
    if (src == 0) return 0;
    for (i = 0; i < 3; i++) {
        dst->a[i] = sum;
        sum += src->seg[i].w8;
    }
    tab[0] = 0;
    for (i = 0; i < 3; i++) {
        WSeg *e = &src->seg[i];
        u32 sz = W32(data_0220001c + 0x1000, 0x318);
        u32 len = e->w8;
        u16 nx = tab[i] + (u16)((len + sz - 1) / sz);
        if (func_021230d0(i, e->w4, len) == 0) return 0;
        if (i < 2) tab[i + 1] = nx;
        else W16(dst, 18) = nx;
    }
    return 1;
}
// (maps a sector index to segment/offset/length using the sector size at work+0x1318)
BOOL func_02123294(u32 *out, WTab *tbl, u32 v, u8 *t3) {
    s8 i;
    u8 *e;
    u32 d, diff;
    if (v >= tbl->n) return 0;
    i = 2;
    for (;;) {
        if (v >= tbl->b[i]) break;
        i--;
        if (i < 0) break;
    }
    if (i < 0) return 0;
    diff = v - tbl->b[i];
    d = diff * W32(data_0220001c + 0x1000, 0x318);
    e = t3 + 12 + i * 16;
    out[1] = W32(e, 8) - d;
    if (out[1] > W32(data_0220001c + 0x1000, 0x318)) out[1] = W32(data_0220001c + 0x1000, 0x318);
    out[2] = d + tbl->a[i];
    out[0] = d + W32(e, 0);
    W8(out, 12) = i;
    return 1;
}

// (address-range validity check, region type taken from data_0213a3ec[idx])
BOOL func_021231e4(u32 idx, u32 addr, u32 size) {
    switch (data_0213a3ec[idx]) {
    case 2:
        if (addr >= 0x27ffe00 && addr + size <= 0x27fff60) return 1;
        break;
    case 0:
        if (addr >= 0x2000000 && addr + size <= 0x22c0000) return 1;
        break;
    case 1:
        if (addr >= 0x22c0000) {
            if (addr + size <= 0x2300000) return 1;
        }
        if (addr >= 0x2000000 && addr + size <= 0x2300000) return 1;
        break;
    default:
        return 0;
    }
    return 0;
}

// (address-range validity check with extended ranges; types 0/2 defer to func_021231e4)
BOOL func_021230d0(u32 idx, u32 addr, u32 size) {
    switch (data_0213a3ec[idx]) {
    case 0:
    case 2:
        return func_021231e4(idx, addr, size);
    case 1:
        if (addr >= 0x2000000 && addr < 0x23fe800) {
            u32 end = addr + size;
            if (addr < 0x2300000) {
                if (end > 0x2300000) return 0;
            }
            if (end <= 0x2300000) return 1;
            if (end < 0x23fe800) {
                if (size <= 0x40000) return 1;
            }
            return 0;
        }
        if (addr >= 0x37f8000 && addr < 0x380f000) {
            return addr + size <= 0x380f000;
        }
        break;
    default:
        return 0;
    }
    return 0;
}
// (set callback at work+0x14e4 with interrupts disabled)
void func_021230a4(void (*cb)()) {
    u32 irq = func_01ffa2ec();
    W32(data_0220001c + 0x1000, 0x4e4) = (u32)cb;
    func_01ffa3d4(irq);
}
// (copy 22-byte per-aid record into the work scratch buffer, returns pointer to it)
u8 *func_02123008(u32 n) {
    u32 irq = func_01ffa2ec();
    if (data_0220001c != 0 && func_02121c34(n) != 0) {
        func_02116048(data_0220001c + 0x1340 + (n - 1) * 22, data_0220001c + 0x1772, 22);
        func_01ffa3d4(irq);
        return data_0220001c + 0x1772;
    }
    func_01ffa3d4(irq);
    return 0;
}


// (BOOL: aid valid and its state == 7)
BOOL func_02122fac(u32 n) {
    if (data_0220001c != 0 && func_02121c34(n) != 0) {
        if (W32(data_0220001c + (n - 1) * 4 + 0x1000, 0x4e8) == 7) return 1;
    }
    return 0;
}

// (aid state check, set transition code, interrupts disabled)
BOOL func_02122eb0(u32 n, u32 kind) {
    u32 b, a, irq;
    irq = func_01ffa2ec();
    switch (kind) {
    case 0: a = 10; b = 4; break;
    case 1: a = 10; b = 3; break;
    case 2: a = 14; b = 2; break;
    case 3: a = 7; b = 5; break;
    default:
        func_01ffa3d4(irq);
        return 0;
    }
    if (data_0220001c != 0 && func_02121c34(n) != 0) {
        u32 i = n - 1;
        u8 *w = data_0220001c;
        if (a == W32(w + i * 4 + 0x1000, 0x4e8)) {
            W16(w + i * 2 + 0x1700, 0x54) = b;
            func_01ffa3d4(irq);
            return 1;
        }
    }
    func_01ffa3d4(irq);
    return 0;
}

// (store aid state, then call state callback)
void func_02122e60(u32 a, u32 b, void *c) {
    if (func_02121c34(a) != 0) {
        W32(data_0220001c + (a - 1) * 4 + 0x1000, 0x4e8) = b;
    }
    func_02122e24(a, b, c);
}

// (call state callback work+0x14e4 if set)
void func_02122e24(u32 a, u32 b, void *c) {
    void (*cb)() = (void (*)())W32(data_0220001c + 0x1000, 0x4e4);
    if (cb != 0) cb(a, b, c);
}
