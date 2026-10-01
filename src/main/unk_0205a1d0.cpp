#include "types.h"

class Unk_0205b448 {
public:
    u8 unk_00, unk_01, unk_02;
    Unk_0205b448();
    ~Unk_0205b448();
    u8 func_0205b448();
    u8 func_0205b444();
    u8 func_0205b440();
    void func_0205b460();
    void func_0205b2b4(s32 m);
};

class Unk_02059d1c {
public:
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    void func_02059d1c(void *grid);
    s32 func_02059db0(void *grid, u8 *f1, u8 *f2);
    s32 func_02059e94(void *grid, s32 *out);
    s32 func_02059f3c(void *grid, s32 *out1, s32 *out2);
    s32 func_0205a1d0(void *grid);
    s32 func_0205a31c(Unk_0205b448 *o);
    s32 func_0205a344(void *grid);
    void func_0205a3c0(void *grid);
    s32 func_0205a480(void *grid);
    s32 func_0205a580(void *grid);
    s32 func_0205a6bc(void *grid, u32 *out);
};

struct Unk_0205a930_H {
    u16 unk_00;
    Unk_0205a930_H() {}
};

class Unk_020dc0fc {
public:
    virtual void *vfunc_00(s32 i) = 0;
    virtual Unk_0205a930_H vfunc_04(s32 i) = 0;
    virtual Unk_0205a930_H vfunc_08(s32 i) = 0;
};

extern "C" {
void func_02059a30(void *p, u32 *x1, u32 *y0, u32 *y1, void *m);
s32 func_02059c14(void *p, s32 kind, s32 total, s32 sel, s32 pa);
void func_02059adc(void *p, s32 total);
s32 func_0205b130(u8 *tbl);
s32 func_0205b55c(void *p);
void func_0205b524(void *p);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_020604c4(void *p);
void func_02034038(s32 v);
void func_0203402c(u32 v);
s32 func_02063b8c(s32 n);
void func_02115ea8(u32 v, void *dst, u32 n);
extern u8 data_021c5e5c[];
extern u8 data_021ed300[];
extern u8 data_021e58a8[];
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0205329c(s32 v);
s32 func_020618b8(s32 v);
s32 func_02053018(s32 v);
s32 func_020532f0(s32 v);
s32 func_02053358(s32 v);
s32 func_02053324(s32 v);
s32 func_020532d0(u16 *p);
u32 func_02052b90(u16 *p);
u32 func_02052b50(u32 v);
s32 func_020618f0(s32 v);
s32 func_02061fe8(u16 *p);
s32 func_01ffc5a4(s32 a, s32 b);
void func_02115fb4(void *p, u32 v, u32 n);
extern u32 data_021c6064[];
extern u32 data_021c6164[];
extern u32 data_021c5f3c[];
extern u16 data_020cab80[];
extern u16 data_020cab84[];
}

s32 Unk_02059d1c::func_0205a31c(Unk_0205b448 *o)
{
    s32 a = o->func_0205b440();
    s32 b = o->func_0205b448();
    return (a + (b + o->func_0205b444())) * 100;
}

s32 Unk_02059d1c::func_0205a344(void *grid)
{
    u8 layer;
    u32 y, x;
    s32 total = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    total += func_020618b8(func_0205329c(func_0204b25c(p)));
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    return total;
}

void Unk_02059d1c::func_0205a3c0(void *grid)
{
    u8 layer;
    u32 y, x;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_0204b25c(p);
                    s32 kind = func_02053018(id);
                    s32 idx = func_020532f0(id);
                    s32 bit = 0;
                    if (kind == 1) bit = 1;
                    else if (kind == 2) bit = 2;
                    else if (kind == 3) bit = 4;
                    else if (kind == 4) bit = 8;
                    *(volatile u32 *)&data_021c6064[idx] = bit | *(volatile u32 *)&data_021c6064[idx];
                    data_021c6164[10] |= bit;
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
}

s32 Unk_02059d1c::func_0205a480(void *grid)
{
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    u32 i;
    s32 res;
    func_02115fb4(acc, 0, 0x94);
    res = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_020532d0(p);
                    if (func_020618f0(id) == 2) {
                        u32 b = func_02052b90(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    for (i = 0; i < 0x4a; i++) {
        if (func_020618f0(i) == 2) {
            u32 bits = 0;
            u32 k;
            u32 n = func_02052b50(i);
            for (k = 0; k < n; k++) {
                bits = (u16)(bits | (1 << k));
            }
            if (acc[i] >= bits) {
                res = 1;
                if ((s32)i < 0x4a) {
                    u32 v = n * 1000;
                    if (data_021c5f3c[i] < v) data_021c5f3c[i] = v;
                }
            }
        }
    }
    return res;
}

s32 Unk_02059d1c::func_0205a580(void *grid)
{
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    u32 i;
    s32 res;
    s32 lo, hi;
    volatile u32 zeroA, zeroB;
    func_02115fb4(acc, 0, 0x94);
    lo = func_02061fe8(&unk_10);
    hi = func_02061fe8(&unk_12);
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_020532d0(p);
                    if (func_020618f0(id) == 1) {
                        u32 b = func_02052b90(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    res = 0;
    i = 0;
    zeroA = 0;
    zeroB = 0;
    for (; i < 0x4a; i++) {
        if (func_020618f0(i) == 1) {
            u32 bits = zeroA;
            u32 k;
            u32 n = func_02052b50(i);
            for (k = zeroB; k < n; k++) {
                bits = (u16)(bits | (1 << k));
            }
            if (acc[i] >= bits) {
                if (i == lo && i == hi) {
                    if ((s32)i < 0x4a) {
                        u32 v = (n + 1) * 3000;
                        if (data_021c5f3c[i] < v) data_021c5f3c[i] = v;
                    }
                    res = 1;
                }
            } else {
                if (i == lo && i == hi) {
                    if ((s32)i < 0x4a) {
                        if (data_021c5f3c[i] < 3000) data_021c5f3c[i] = 3000;
                    }
                }
            }
        }
    }
    return res;
}

static inline BOOL Unk_0205a6bc_Range(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0205a6bc_Max(s32 i, u32 v)
{
    if (i < 0x4a) {
        if (data_021c5f3c[i] < v) {
            data_021c5f3c[i] = v;
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_02059d1c::func_0205a6bc(void *grid, u32 *out)
{
    u32 max;
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    s32 i;
    u32 j;
    func_02115fb4(acc, 0, 0x94);
    max = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_020532d0(p);
                    if (func_020618f0(id) == 0) {
                        u32 b = func_02052b90(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    if (Unk_0205a6bc_Range(&unk_10, 0x1100, 0x1143)) {
        s32 k = func_02061fe8(&unk_10);
        if (func_020618f0(k) == 0) acc[k] |= data_020cab80[0];
    }
    if (Unk_0205a6bc_Range(&unk_12, 0x1144, 0x1187)) {
        s32 k = func_02061fe8(&unk_12);
        if (func_020618f0(k) == 0) acc[k] |= data_020cab84[0];
    }
    for (j = 0; j < 0x4a; j++) {
        if (func_020618f0(func_02061fe8(&unk_12)) == 0) {
            u32 cnt = 0;
            u32 k = 0;
            s32 w = acc[j];
            for (; k < 12; k++) {
                if ((w >> k) & 1) cnt++;
            }
            if (cnt > max) max = cnt;
        }
    }
    if (out) *out = max;
    for (i = 0; (u32)i < 0x4a; i++) {
        if (func_020618f0(i) == 0 && acc[i] == 0xfff) {
            if (Unk_0205a6bc_Max(i, 30000)) return i;
        }
    }
    for (i = 0; (u32)i < 0x4a; i++) {
        if (func_020618f0(i) == 0) {
            u32 w = acc[i];
            if ((w & 0x3ff) == 0x3ff) {
                if ((w & 0x400) != 0 || (w & 0x800) != 0) {
                    if (Unk_0205a6bc_Max(i, 25000)) return 0x4a;
                }
            }
        }
    }
    for (i = 0; (u32)i < 0x4a; i++) {
        if (func_020618f0(i) == 0 && acc[i] == 0x3ff) {
            if (Unk_0205a6bc_Max(i, 20000)) return 0x4a;
        }
    }
    return 0x4a;
}

s32 Unk_02059d1c::func_0205a1d0(void *grid)
{
    u32 n;
    u8 layer;
    u32 y, x, k, i, j;
    u8 counts[13];
    u16 ids[24];
    s32 cnt;
    func_02115fb4(counts, 0, 13);
    for (i = 0; i < 24; i++) {
        ids[i] = 0xffff;
    }
    n = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_0204b25c(p);
                    s32 t, u;
                    for (k = 0; k < 24; k++) {
                        u16 v = ids[k];
                        if (id == v) break;
                        if (v == 0xffff) {
                            ids[k] = id;
                            break;
                        }
                    }
                    t = func_02053358(id);
                    u = func_02053324(id);
                    counts[t]++;
                    counts[u]++;
                    n++;
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    if (n >= 10) {
        cnt = 0;
        for (k = 0; k < 24; k++) {
            if (ids[k] != 0xffff) cnt++;
        }
        j = 0;
        for (; j < 13; j++) {
            if (j != 0) {
                s32 q = func_01ffc5a4(counts[j] << 12, n << 13);
                if (q >= 0xe66) return cnt * 600;
                if (q >= 0xb33) return cnt * 200;
            }
        }
    }
    return 0;
}

static inline u32 Unk_0205a930_Get(s32 i, u32 dflt)
{
    if (i < 0x4a) return data_021c5f3c[i];
    return dflt;
}

static inline void Unk_0205a930_Clear(void *dst, u32 n)
{
    volatile u32 z = 0;
    func_02115ea8(z, dst, n);
}

extern "C" s32 func_0205a930(Unk_02059d1c *p, u16 *flags, s32 *pa, s32 *pb, s32 *pc, Unk_020dc0fc *ops, s32 count, s32 base, u8 flag)
{
    s32 total;
    s32 sel;
    s32 s10, s14, s18, s1c, s20, s24, s28, s2c, s30;
    s32 j;
    s32 idxA, cntA, cntB;
    u32 i;
    s32 pick, n, pick2, n2, t, x, kind, idx;
    u32 zero, zero2;
    s32 r7;
    u8 f[2];
    u32 k;
    *flags = 0;
    *pa = 0;
    *pb = 0;
    *pc = 0;
    func_02115fb4(data_021c5f3c, 0, 0x128);
    Unk_0205a930_Clear(data_021c5e5c, 0xe0);
    for (k = 0; k < 0x4a; k++) data_021c6064[k] = 0;
    data_021c6164[10] = 0;
    total = 0;
    s10 = 0; s14 = 0; s18 = 0; s1c = 0; s20 = 0; s24 = 0; s28 = 0; s2c = 0; s30 = 0; j = 0;
    goto test0;
loop0:
    {
        idx = base + j;
        void *m = ops->vfunc_00(idx);
        p->unk_10 = ops->vfunc_04(idx).unk_00;
        p->unk_12 = ops->vfunc_08(idx).unk_00;
        func_02059a30(p, &p->unk_08, &p->unk_04, &p->unk_0c, m);
        Unk_0205b448 obj;
        obj.func_0205b2b4((s32)m);
        p->func_0205a6bc(m, 0);
        p->func_0205a580(m);
        p->func_0205a480(m);
        p->func_02059d1c(m);
        p->func_0205a3c0(m);
        s10 += p->func_0205a344(m);
        s14 += p->func_0205a31c(&obj);
        s18 += p->func_0205a1d0(m);
        s1c += p->func_02059f3c(m, pb, pc);
        s20 += p->func_02059e94(m, pa);
        f[0] = 0;
        f[1] = 0;
        s24 -= p->func_02059db0(m, &f[0], &f[1]);
        if (f[0] != 0) s2c = 1;
        if (f[1] != 0) s30 = 1;
    }
    j++;
test0:
    if (j < count) goto loop0;
    total += s10;
    total += s14;
    total += s18;
    total += s1c;
    total += s20;
    total += s24;
    sel = 0; idxA = 0; cntA = 0; cntB = 0;
    for (i = 0; i < 0x4a; i++) {
        u32 v = Unk_0205a930_Get(i, sel);
        if (v != 0) {
            switch (func_020618f0(i)) {
            case 0:
                cntA++;
                break;
            case 1:
                if (v > 0xbb8) cntB++;
                break;
            case 2:
                s28 += v;
                break;
            }
        }
        total += v;
    }
    if (cntA != 0) {
        pick = func_02063b8c(cntA);
        n = 0;
        for (i = 0; i < 0x4a; i++) {
            u32 v;
            zero = 0;
            v = Unk_0205a930_Get(i, zero);
            if (v != 0 && func_020618f0(i) == 0) {
                if (n == pick) {
                    sel = i;
                    break;
                }
                n = n + 1;
            }
        }
    }
    if (cntB != 0) {
        pick2 = func_02063b8c(cntB);
        n2 = 0;
        for (i = 0; i < 0x4a; i++) {
            u32 v;
            zero2 = 0;
            v = Unk_0205a930_Get(i, zero2);
            if (v != 0 && func_020618f0(i) == 1) {
                if (n2 == pick2) {
                    idxA = i;
                    break;
                }
                n2 = n2 + 1;
            }
        }
    }
    r7 = 0;
    if ((data_021c6164[10] & 0xf) == 0xf) {
        BOOL found = FALSE;
        for (i = 0; i < 0x4a; i++) {
            if ((data_021c6064[i] & 0xf) == 0xf) {
                found = TRUE;
                break;
            }
        }
        if (found) r7 += 0x1388;
        else r7 += 0x3e8;
        total += r7;
    }
    t = func_0205b130(data_021c5e5c);
    total += t;
    if (total < 0) total = 0;
    if (flags) {
        if (cntA != 0) {
            u32 v = Unk_0205a930_Get(sel, 0);
            if (v == 0x7530) *flags |= 1;
            else if (v == 0x61a8) *flags |= 2;
            else *flags |= 4;
        }
        if (cntB != 0) *flags |= 8;
        if (s28 >= 0xbb8) *flags |= 0x10;
        if (r7 > 0) *flags |= 0x20;
        if (s14 >= 0x1f4) *flags |= 0x40;
        if (s18 >= 0x7d0) *flags |= 0x80;
        if (s1c >= 0x7d0) *flags |= 0x100;
        if (s20 >= 0xbb8) *flags |= 0x200;
        if ((u32)t >= 0x1b58) *flags |= 0x400;
    }
    if (flag != 0) {
        if (func_0205b55c(data_021ed300) == 0) {
            if (*func_0209c37c(0, 0x22) == 0) goto end;
        }
        {
            x = func_020604c4(data_021e58a8);
            u16 b;
            s32 nb;
            u32 q;
            kind = 0;
            b = 0;
            if (cntA != 0) {
                u32 v = Unk_0205a930_Get(sel, kind);
                if (v == 0x7530) b |= 1;
                else if (v == 0x61a8) b |= 2;
                else b |= 4;
            }
            if (cntB != 0) b |= 8;
            if (s28 >= 0x1388) b |= 0x10;
            if (r7 > 0) b |= 0x20;
            if (s14 >= 0x7d0) b |= 0x40;
            if (s18 >= 0x1770) b |= 0x80;
            if (s1c >= 0x1770) b |= 0x100;
            if (s20 >= 0xc80) b |= 0x200;
            if ((u32)t >= 0x1b58) b |= 0x400;
            if (s2c != 0) b |= 0x1000;
            if (s30 != 0) b |= 0x800;
            nb = 0;
            for (q = 0; q < 13; q++) {
                if (b & (1 << q)) nb++;
            }
            func_02034038(total);
            func_0203402c(b);
            {
                BOOL ok;
                if (nb != 0) {
                    if (func_02063b8c(2) == 0) ok = TRUE;
                    else ok = FALSE;
                } else {
                    ok = TRUE;
                }
                if (ok) {
                    if (total == 0) kind = 0;
                    else if (total <= 0x4e1f) kind = x + 1;
                    else if (total <= 0x1116f) kind = 8;
                    else if (total <= 0x1869f) kind = 9;
                    else kind = 10;
                } else {
                    s32 pk = func_02063b8c(nb);
                    nb = 0;
                    for (q = 0; q < 13; q++) {
                        if (b & (1 << q)) {
                            if (pk == nb) {
                                kind = q;
                                kind = q + 0xb;
                                break;
                            }
                            nb++;
                        }
                    }
                }
            }
            if ((u32)(kind - 0xb) > 2) sel = idxA;
            if (func_02059c14(p, kind, total, sel, *pa) != 0) {
                func_02059adc(p, total);
                func_0205b524(data_021ed300);
            }
        }
    }
end:
    return total;
}
