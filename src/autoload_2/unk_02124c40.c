// mwcc-flags: -nothumb -O4,p
// Wireless helper library built on WM (WC/WH style), autoload_2 0x02124c40-0x02125c94. ARM code, mwcc 1.2/base, -O4,p.
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

extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_0206d49c(void);
extern void func_02114594(void *, u32);
extern void func_02115640(u8 *);
extern void func_02115bac(u32, void *, void *, u32);
extern void func_02115e30(u32, void *, u32);
extern void func_02115e48(void *, void *, u32);
extern void func_02115e64(u32, void *, u32);
extern void func_02115fb4(void *, u32, u32);
extern void func_02116048(void *, void *, u32);
extern u32 func_02117e8c(u32, u32);
extern u32 func_0211f410(void);
extern u32 func_0211fb0c(u32, void *, u32);
extern u32 func_0211fb68(WCb);
extern u32 func_0211fbb4(WCb, u32);
extern u32 func_0211fcbc(WCb, u32, u32, u32, u32);
extern u32 func_0211ff5c(WCb, void *);
extern u32 func_0212026c(WCb);
extern u32 func_021202b4(WCb);
extern u32 func_021202f4(void *, WCb, u32);
extern u32 func_0212052c(u32, u32, u32, u32, u32, u32, u32);
extern u32 func_021206b4(WCb, void *, u32, void *, u32, u32, u32, u32, u32, u32, u32);
extern u32 func_02121948(WCb, u32, u32, u32, u32);
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

// WM completion callback: switch on the API id, forwards to cb51c(code, msg)
void func_0212541c(void *arg) {
    WMsg *msg = arg;
    WCtl *g = data_02200018;
    int i;
    switch (msg->f0) {
    case 0:
        if (msg->f2 != 0) {
            g->cb51c(0x100, msg);
            return;
        }
        g->cb51c(21, msg);
        func_02124830(29, func_02121948(func_0212541c, data_0213c218, data_0213c210, data_0213c20c, data_0213c214));
        return;
    case 29:
        if (msg->f2 != 0) {
            g->cb51c(0x100, msg);
            return;
        }
        data_02200020.buf = g->scanbuf;
        if (data_02200020.f4 == 0) data_02200020.f4 = 1;
        if (data_02200020.f6 == 0) data_02200020.f6 = 200;
        data_02200020.bssid[0] = 0xff;
        data_02200020.bssid[1] = 0xff;
        data_02200020.bssid[2] = 0xff;
        data_02200020.bssid[3] = 0xff;
        data_02200020.bssid[4] = 0xff;
        data_02200020.bssid[5] = 0xff;
        g->f5e4 = 1;
        g->f5e8 = 1;
        func_02124830(10, func_0211ff5c(func_0212541c, &data_02200020));
        return;
    case 10:
        if (msg->f2 != 0) {
            g->cb51c(0x100, msg);
            return;
        }
        switch (msg->f8) {
        case 3:
            return;
        case 5: {
            WScan *base = g->scan;
            i = 0;
            if ((s32)g->f5e0 > 0) {
                WScan *s = base;
                do {
                    if (msg->mac[0] == s->mac[0] && msg->mac[1] == s->mac[1] && msg->mac[2] == s->mac[2] &&
                        msg->mac[3] == s->mac[3] && msg->mac[4] == s->mac[4] && msg->mac[5] == s->mac[5]) {
                        base[i].f0f6 = msg->f36;
                        base[i].f0f8 = msg->f38;
                        func_02114594(&g->scan[i], 0xc0);
                        func_02115bac(data_02200010, g->scanbuf, &g->scan[i], 0xc0);
                        g->f5ec = i;
                        goto done;
                    }
                    i++;
                    s++;
                } while (i < g->f5e0);
            }
            if (i < 16) {
                g->f5e0 = i + 1;
                func_02115e48(msg, (u8 *)&base[i] + 0xc0, 0xb8);
                func_02114594(&g->scan[i], 0xc0);
                func_02115bac(data_02200010, g->scanbuf, &g->scan[i], 0xc0);
                g->f5ec = i;
            }
        done:
            g->cb51c(4, msg);
            if (g->f5e4 == 0) return;
            if (g->f5e8 != 0) {
                if (func_02126644(&data_02200020) == 0) func_02124c80();
            }
            func_02124830(10, func_0211ff5c(func_0212541c, &data_02200020));
            return;
        }
        case 4:
            g->cb51c(5, msg);
            if (g->f5e4 == 0) return;
            if (g->f5e8 != 0) {
                if (func_02126644(&data_02200020) == 0) func_02124c80();
            }
            func_02124830(10, func_0211ff5c(func_0212541c, &data_02200020));
            return;
        default:
            g->cb51c(0x100, msg);
            return;
        }
    case 11:
        if (msg->f2 != 0) {
            g->cb51c(0x100, msg);
            return;
        }
        func_02124830(12, func_0211fcbc(func_0212541c, g->f520, 0, 1, 0));
        return;
    case 12:
        if (msg->f2 != 0) {
            g->f5e0 = 0;
            g->cb51c(11, msg);
            return;
        }
        switch (msg->f8) {
        case 6:
            g->f52a = 0;
            g->f528 = 1;
            return;
        case 7:
            g->f5e2 = ((u16 *)msg)[5];
            g->cb51c(6, msg);
            g->f52a = 1;
            if (func_0211fb0c(1, func_02125c94, 0) != 0) return;
            func_02124830(14, func_021206b4(func_0212541c, g->f504, g->f51a, (u8 *)g + 0x40, g->f518, (u16)(g->f52c == 0), 0, 0, 0, 1, 1));
            return;
        case 9:
            g->cb51c(10, msg);
            g->f52a = 0;
            g->f528 = 0;
            return;
        default:
            g->cb51c(0x100, msg);
            return;
        }
    case 14:
        switch (msg->f4) {
        case 10:
            g->f528 = 1;
            if (func_021265dc() == 0) return;
            g->cb51c(25, 0);
            return;
        case 12:
            return;
        case 13:
            return;
        default:
            g->cb51c(0x100, msg);
            return;
        }
    case 15:
        g->f50c = 0;
        if (msg->f2 == 0) {
            g->cb51c(8, msg);
        } else if (msg->f2 == 9) {
            g->cb51c(41, msg);
        } else {
            g->cb51c(18, msg);
        }
        g->cb51c(25, 0);
        return;
    case 1:
        if (msg->f2 != 0) {
            g->f526 = 0;
            g->cb51c(0x100, msg);
            return;
        }
        g->f52a = 0;
        data_02200018->f528 = 0;
        func_02124830(2, func_0212026c(func_0212541c));
        return;
    case 2:
        if (msg->f2 != 0) {
            g->f526 = 0;
            g->cb51c(0x100, msg);
            return;
        }
        g->f50d = 0;
        data_0220001c->f1316 = 0;
        g->cb51c(17, msg);
        return;
    case 21:
        if (func_021265dc() == 0) return;
        g->cb51c(25, 0);
        return;
    case 128:
        switch (msg->f4) {
        case 22:
            func_0206d49c();
            break;
        case 23:
            break;
        }
        return;
    case 3:

    default:
        g->cb51c(0x100, msg);
        return;
    }
}

// pseudo-random seed from the MAC address and the tick (0x027ffc3c): (sum(mac) + tick) * 7 % 20
u32 func_021253a4(void) {
    u8 mac[6];
    u32 sum;
    int i;
    func_02115640(mac);
    sum = i = 0;
    for (; i < 6; i++) sum += mac[i];
    return (sum + *(u32 *)0x027ffc3c) * 7 % 20;
}

// library setup (probably WC_Initialize front half): aligns the work buffer, clears G and W, copies the channel list
u32 func_021251ac(u8 *buf, WChList *list, u32 a, u32 b, u32 dma) {
    WCtl *g;
    WWork *w;
    u32 e;
    volatile u32 zero32;
    volatile u16 zero;
    int i;
    u16 *dst;
    u16 *dst2;
    int j;
    if (data_0220001c != 0) {
        if (data_0220001c->f1316 != 0) return 2;
    }
    g = (WCtl *)(((u32)buf + 31) & ~31);
    w = (WWork *)(((u32)g + 0x1e1f) & ~31);
    if (b == 0x10000) b = func_0211f410();
    e = func_01ffa2ec();
    zero32 = 0;
    data_02200018 = g;
    data_0220001c = w;
    data_02200010 = dma;
    func_02115e64(zero32, g, 0x1e00);
    zero = 0;
    func_02115e30(zero, w, 0x1340);
    dst = g->f530;
    for (i = 0; i < list->n; i++) {
        *dst++ = ((u16 *)((u8 *)list + 2))[i];
    }
    dst2 = g->f538;
    for (j = 0; j < 16; j++) {
        if (*data_0213c21c == 0) break;
        *dst2++ = *data_0213c21c++;
    }
    func_02116048(list, w->f1300, 22);
    if (list->n < 10) *(u16 *)((u8 *)w + 0x1302 + list->n * 2) = 0;
    g->f500 = 0x100;
    g->f502 = 8;
    g->f518 = 0;
    g->f51a = 0;
    g->f52c = 1;
    g->f504 = (u8 *)w + 0x400;
    g->f0e = 1;
    g->f12 = 0;
    g->f16 = 1;
    g->f14 = 0;
    g->f08 = a;
    g->f0c = b;
    g->f18 = func_021253a4() + 200;
    g->f10 = 15;
    g->f50c = 0;
    g->f50d = 0;
    w->f1316 = 1;
    w->f131c = 0;
    func_01ffa3d4(e);
    return 0;
}

// parameter range check (a in 228..510, c in 8..16, size formula < 0x15e0)
BOOL func_0212513c(u32 a, u32 c, u32 d) {
    s32 v;
    if (a > 0x1fe || a < 228) return 0;
    if (c > 16 || c < 8) return 0;
    v = 0x14a + (a + 38) * 4 + d * ((c + 32) * 4 + 112);
    return v < 0x15e0;
}

// set channel/buffer parameters if not initialised yet; validates with func_0212513c
BOOL func_02125098(u32 a, u32 b) {
    u32 e = func_01ffa2ec();
    if (data_02200018->f50d != 0) {
        func_01ffa3d4(e);
        return 0;
    }
    if (func_0212513c(a, 8, b) == 0) {
        func_01ffa3d4(e);
        return 0;
    }
    data_02200018->f10 = b;
    data_02200018->f500 = a;
    data_02200018->f502 = 8;
    func_01ffa3d4(e);
    return 1;
}

// WM_Initialize retry loop (func_021202f4 = WM_Initialize(buf, cb, dmaNo)) then WM_SetIndCallback-like func_0211fb68
u32 func_02124f98(void) {
    data_02200018->f528 = 0;
    data_02200018->f52a = 0;
    data_02200018->f526 = 0;
    data_02200018->f538[8] = 0;
    func_02124a84(10);
    if (data_0220001c->f1320 == 0) {
        u32 r;
        do {
            r = func_021202f4(data_02200014, data_02200018->cb508, data_02200010);
        } while (r == 4);
        if (r != 2) return 8;
        func_0211fb68(data_02200018->cb508);
        data_02200018->f50d = 1;
        return 0;
    } else {
        func_0211fb68(data_02200018->cb508);
        data_02200018->f50d = 1;
        func_02126568();
        return 0;
    }
}

// library initialiser (probably WC_Initialize): sets up G (data_02200018) and W (data_0220001c) fields, starts WM
u32 func_02124d74(u32 a) {
    u32 e;
    u32 r;
    void (*cb)();
    volatile u16 zero1;
    volatile u16 zero2;
    int i;
    e = func_01ffa2ec();
    data_02200018->f32 = a;
    data_02200014 = (u8 *)(((u32)data_0220001c + 0x7d1f) & ~31);
    cb = data_0220001c->cb;
    zero1 = 0;
    func_02115e30(zero1, data_0220001c->ent, 0x69c0);
    func_021230a4((void *)cb);
    data_0220001c->f1318 = data_02200018->f500 - 6;
    func_02126ef4(data_02200018->f502);
    func_02126ed4((u8 *)data_0220001c + 0x1538);
    for (i = 0; i < 15; i++) {
        data_0220001c->state[i] = 0;
        data_0220001c->slot[i] = -1;
    }
    data_0220001c->f1524 = 0;
    zero2 = 0;
    func_02115e30(zero2, data_0220001c->peers, 0x5d40);
    func_02115fb4((u8 *)data_0220001c + 0x1754, 0, 30);
    data_02200018->f524 = 1;
    data_02200018->cb51c = func_02122944;
    data_02200018->cb508 = func_02125d0c;
    data_02200018->f34 = data_02200018->f500;
    data_02200018->f518 = (data_02200018->f34 + 35) & ~31;
    data_02200018->f36 = data_02200018->f502;
    data_02200018->f51a = (((data_02200018->f36 + 14) * 15 + 41) & ~31) << 1;
    func_0212454c();
    r = func_02124f98();
    func_01ffa3d4(e);
    *(u32 *)((u8 *)data_0220001c + 0x74c8) = func_02117e8c(15, 1);
    return r;
}

// set flag 0x1320 then tail-call the initialiser func_02124d74
u32 func_02124d50(u32 a) {
    data_0220001c->f1320 = 1;
    return func_02124d74(a);
}

// WM_End-like step: func_021202b4 (WM_End), report result
BOOL func_02124d14(void) {
    u32 r = func_021202b4(data_02200018->cb508);
    func_02124830(1, r);
    if (r == 2) r = 0;
    return r;
}

// tail-call thunk used as a WM callback
BOOL func_02124d08(void) {
    return func_02124d14();
}

// begin shutdown/reset of the wireless layer (state 0x526)
BOOL func_02124c80(void) {
    BOOL r = 1;
    u32 e = func_01ffa2ec();
    if (data_02200018->f526 == 0) {
        data_02200018->f5e4 = 0;
        data_02200018->f526 = r;
        if (func_021269f8() != 0) {
            func_021267e8((void *)func_02124d08);
            r = 0;
        } else {
            r = func_02124d14();
        }
    }
    func_01ffa3d4(e);
    return r;
}

// OS_DisableInterrupts / terminate-if-not-set check / func_02124c80 / OS_RestoreInterrupts
void func_02124c40(void) {
    u32 e = func_01ffa2ec();
    if (data_0220001c->f1320 == 0) func_0206d49c();
    func_02124c80();
    func_01ffa3d4(e);
}

