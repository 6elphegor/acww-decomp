// mwcc-flags: -nothumb -O4,p
// Wireless peer/transfer management module (WM-based), autoload_2 0x02122114-0x02122944. ARM code, mwcc 1.2/base, -O4,p.
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
static inline void wsave(u32 idx, u8 *buf, u32 aid) {
    WK2->f14a8[idx] = *(u32 *)(buf + 20);
    WK2->f148a[idx] = *(u16 *)(buf + 46);
    func_02116048(buf + 24, &WK2->ent[idx], 22);
    WK2->ent[idx].aid = (u8)aid;
}

#define PEER(x) ((u8 *)data_0220001c + (x) * 0x5d4)
// (per-aid message handler state machine; message type in buf[0], aid 1..15)
void func_0212244c(u8 *msg, u32 aid) {
    u8 buf[56];
    u8 x;
    u8 type;
    u32 state;
    u8 *p;
    u32 i;
    if (aid == 0) return;
    if (aid > 15) return;
    p = func_02126cc4(msg + 10, buf, aid);
    type = buf[0];
    i = aid - 1;
    state = WK2->state[i];
    switch (type) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 11:
        break;
    case 7:
        if (state == 2) {

            if (p == 0) return;
            func_02116048(p, buf + 20, 29);
            wsave(aid - 1, buf, aid);
            func_02122e60(aid, 10, buf + 24);
        }
        if (state != 10) return;
        x = p[28];
        {
            u8 cnt = 0;
            u8 *e;
            WObj2 *o;
            if (x >= 16 || W8((e = PEER(x)) + 0x1000, 0xd52) == 0 ||
                WK2->f14a8[i] != (o = (WObj2 *)W32(e + 0x1000, 0xd40))->f14) {
                WK2->st16[i] = 4;
            } else {
                u16 mask = W16(e + 0x1d00, 0x4e);
                u8 j;
                for (j = 0; j < 16; j++) {
                    if (((1 << j) & mask) != 0) cnt++;
                }
                if (cnt >= o->f18) {
                    WK2->st16[i] = 0;
                    func_02122e60(aid, 11, 0);
                    return;
                }
            }
        }
        {
            u8 *sp = data_0220001c + i * 2 + 0x1700;
            switch (W16(sp, 0x54)) {
            case 3: {
                u32 bit = 1 << aid;
                if ((WK2->mask1536 & bit) != 0) return;
                WK2->cnt1535++;
                WK2->mask1536 |= bit;
                WK2->slot[aid - 1] = x;
                *(u16 *)(PEER(x) + 0x1d4e) |= bit;
                *(u16 *)(PEER(x) + 0x1d50) |= bit;
                WK2->st16[aid - 1] = 0;
                func_02122e60(aid, 5, 0);
                return;
            }
            case 4:
                W16(sp, 0x54) = 0;
                func_02122e60(aid, 4, 0);
                return;
            }
            return;
        }
    case 8:
        if (state == 5) {
            func_02122e60(aid, 14, 0);
            return;
        }
        if (state != 14) return;
        if (WK2->st16[i] != 2) return;
        {
            u32 off = WK2->slot[i] * 0x5d4;
            *(u16 *)(data_0220001c + off + 0x1d4c) |= 1 << aid;
            *(u16 *)(data_0220001c + off + 0x1d48) = 0;
            WK2->st16[i] = 0;
            func_02122e60(aid, 6, 0);
        }
        return;
    case 9:
        if (state != 6) return;
        {
            u32 x = WK2->slot[i];
            u32 off;
            if (x == 0xff) return;
            off = x * 0x5d4;
            *(u16 *)(data_0220001c + off + 0x1d4a) = func_02121c50(*(u16 *)(data_0220001c + off + 0x1d4a), *(u16 *)(buf + 2));
        }
        return;
    case 10:
        if (state == 6) {
            u32 x = WK2->slot[i];
            u32 off;
            if (x == 0xff) return;
            off = x * 0x5d4;
            *(u16 *)(data_0220001c + off + 0x1d4c) &= ~(1 << aid);
            func_02122e60(aid, 7, 0);
            return;
        }
        if (state != 7) return;
        if (WK2->st16[i] != 5) return;
        WK2->st16[i] = 0;
        func_02122e60(aid, 8, 0);
        return;
    default:
        break;
    }
}
// (clear per-peer fields, then run func_0212244c for aids 1..15)
void func_021223a4(void *arg) {
    u16 i;
    u8 *w;
    for (i = 0; i < 16; i++) {
        w = data_0220001c + i * 0x5d4;
        if (W8(w + 0x1000, 0xd52) != 0) W16(w + 0x1d00, 0x4a) = 0;
    }
    for (i = 1; i <= 15; i++) {
        u16 *p = (u16 *)func_0211f82c(arg, i);
        if (p != 0 && *p != 0xffff && *p != 0) func_0212244c((u8 *)p, i);
    }
}

// (send one message byte, then notify code 6)
void func_02122360(u8 a, u32 b) {
    u8 buf = a;
    func_02126e00(&buf, data_0220001c);
    func_02123f24(6, b, data_0220001c);
}
// (pick next peer slot round-robin, build aid bitmask, request record, notify code 0xea)
u32 func_021221b0(void) {
    s8 best = -1;
    u16 mask = 0;
    WMsg msg;
    u8 cnt[16];
    u16 i;
    u8 j, k;
    void *ent;
    func_02115fb4(cnt, 0, 16);
    for (i = 1; i <= 15; i++) {
        if (W32(data_0220001c + (i - 1) * 4 + 0x1000, 0x4e8) == 5) {
            s8 idx = (s8)W8(data_0220001c + (i - 1) + 0x1500, 0x26);
            cnt[idx]++;
        }
    }
    k = data_0213c200;
    for (j = 0; j < 16; j++) {
        k = (k + 1) % 16;
        if (W8(data_0220001c + k * 0x5d4 + 0x1000, 0xd52) != 0 && cnt[k] != 0) {
            best = (s8)k;
            break;
        }
    }
    if (best == -1) return 21;
    data_0213c200 = best;
    for (i = 1; i <= 15; i++) {
        if (W32(data_0220001c + (i - 1) * 4 + 0x1000, 0x4e8) == 5) {
            if (best == (s8)W8(data_0220001c + (i - 1) + 0x1500, 0x26)) mask = mask | (1 << i);
        }
    }
    msg.id = 3;
    msg.aid = best;
    ent = func_02126e00(&msg, data_0220001c);
    if (ent != 0) func_02116048(data_0220001c + 0x1788 + best * 0x5d4, ent, 0xe4);
    return func_02123f24(0xea, mask, data_0220001c);
}
// (job completion: run transfer step, job state = 2 on success, else OS_Terminate)
void func_02122114(WArg *arg) {
    u8 buf[72];
    WJob *job;
    WObj *obj;
    u32 base;
    void *rp;
    obj = arg->obj;
    job = arg->job;
    func_02119d78(buf);
    base = job->f0;
    rp = func_021191f0((u8 *)obj + 0x10, obj->f14);
    if (func_02119af4(buf, rp, base, base + job->f4, -1) != 0) {
        if (job->f4 == func_021198b4(buf, job->f8, job->f4)) job->fc = 2;
        func_021199e0(buf);
    }
    if (job->fc == 2) return;
    func_0206d49c();
}
