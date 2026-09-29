#include "types.h"

struct Unk_02042104_Date {
    u8 pad0[3];
    u8 c3, c4, c5;
    u8 pad6[2];
};

struct Unk_020419b4 {
    u8 pad00[0x64];
    s32 unk_64;
    u8 pad68[0xc0 - 0x68];
    u32 unk_c0;
    u32 unk_c4;
    u8 unk_c8[8];
    u8 unk_d0[8];
    u32 unk_d8;
    u8 unk_dc;
    u8 paddd[3];
    u32 unk_e0;
    u8 pade4[0x10e4 - 0xe4];
    u32 unk_10e4;
    u8 unk_10e8;
    u8 unk_10e9;
    u8 unk_10ea;
};

struct Unk_02041ac0_Glob {
    u32 pad[8];
    Unk_020419b4 *unk_20;
};

extern Unk_02041ac0_Glob data_021c3ea4;
extern u32 data_021f482c;
extern u32 data_021fcc2c[];

extern "C" {
s32 func_02041908();
s32 func_020419b4(Unk_020419b4 *p);
void func_02041a80(Unk_020419b4 *p, u8 *a, u8 *b, u32 c, u8 d);
void func_02041aec(Unk_020419b4 *p);
void *func_020e8608(u32 heap, u32 size);
void func_02113a70(void *th, void *fn, void *arg, void *stack, u32 size, u32 prio);
void func_020e9244(u32 a, u32 b);
void func_0211366c(void *th);
u32 func_02114560();

void func_02113a44();
void func_02115fb4(void *p, u32 v, u32 n);
void func_02041b1c(u8 *arg);

s32 func_0204198c() {
    s32 r = 0;
    if (data_021c3ea4.unk_20 != 0) {
        r = func_020419b4(data_021c3ea4.unk_20);
        if (r == 0) {
            func_02041908();
        }
    }
    return r;
}

s32 func_020419b4(Unk_020419b4 *p) {
    if (p->unk_10e8 == 0) {
        return 0;
    }
    p->unk_e0 = 0x3039;
    p->unk_10e4 = 0x3039;
    p->unk_10e9 = 0;
    p->unk_10ea = 1;
    func_02113a70(p, (void *)func_02041b1c, p->unk_c8, &p->unk_10e4, 0x1000, 0x1e);
    p->unk_c0 = data_021fcc2c[1];
    p->unk_c4 = data_021f482c;
    func_020e9244(p->unk_c0, 0);
    func_020e9244((u32)p, p->unk_c4);
    func_0211366c(p);
    return 1;
}

void func_02041a54(u8 *a, u8 *b, u32 c, u8 d) {
    if (data_021c3ea4.unk_20 != 0) {
        func_02041a80(data_021c3ea4.unk_20, a, b, c, d);
    }
}

void func_02116048(void *src, void *dst, u32 n);

void func_02041a80(Unk_020419b4 *p, u8 *a, u8 *b, u32 c, u8 d) {
    func_02116048(a, p->unk_c8, 8);
    func_02116048(b, p->unk_d0, 8);
    p->unk_d8 = c;
    p->unk_dc = d;
    p->unk_10e8 = 1;
}

void func_02041ac0() {
    data_021c3ea4.unk_20 = (Unk_020419b4 *)func_020e8608(data_021f482c, 0x10ec);
    if (data_021c3ea4.unk_20 != 0) {
        func_02041aec(data_021c3ea4.unk_20);
    }
}

void func_02041aec(Unk_020419b4 *p) {
    p->unk_10e8 = 0;
    p->unk_10e9 = 0;
    p->unk_10ea = 0;
    func_02115fb4(p, 0, 0xc0);
    p->unk_64 = 2;
}

extern u8 data_021d7350[];
extern u8 data_021ed20c[];
extern u8 data_021c3e70[];

void func_0204674c(void *r, u8 *a, u8 *b, u32 c, u32 d, u32 e);
void func_0209d498(Unk_02042104_Date *d);
void func_0209d124(Unk_02042104_Date *d, u32 n);
void func_0209d164(Unk_02042104_Date *d, s32 n);
u32 func_0209ceac(u32 a, u32 b, u32 c);
s32 func_02041d98(void *o, u8 *a, Unk_02042104_Date *d);
void func_02041d40(void *o, u8 *base, Unk_02042104_Date *d);
void func_02041c10(void *o, u8 *base, s32 cnt, Unk_02042104_Date *d, s32 flag);
void func_02041cec(void *o, u8 *base, Unk_02042104_Date *d);
s32 func_020978a4(void *p);
s32 func_0203f14c();
s32 func_0209d3a4(Unk_02042104_Date *a, Unk_02042104_Date *b);
void func_0209d2c0(Unk_02042104_Date *a, s32 n);
void func_0204c22c(void *a, u8 *b);
void func_02041ee4(void *o, u8 *base, Unk_02042104_Date *d);
void func_02041f50(void *o, u8 *base, Unk_02042104_Date *d);

void func_02041b1c(u8 *arg) {
    func_02114560();
    Unk_020419b4 *g = data_021c3ea4.unk_20;
    func_0204674c(&data_021c3ea4, arg, arg + 8, *(u32 *)(arg + 0x10), arg[0x14], 1);
    func_020e9244(g->unk_c0, g->unk_c4);
    g->unk_10e9 = 1;
    func_02113a44();
}

void func_02041b68() {
    u8 *base = data_021d7350;
    Unk_02042104_Date d;
    *(u32 *)&d = 0;
    *((u32 *)&d + 1) = 0;
    func_0209d498(&d);
    func_0209d124(&d, 6);
    u8 *p = data_021ed20c;
    s32 r = func_02041d98(data_021c3e70, p, &d);
    if (r != 0) {
        p[2] = d.c5;
        p[1] = d.c4;
        p[0] = d.c3;
        func_0209d164(&d, r - 1);
        u32 x = func_0209ceac(d.c5, d.c4, d.c3);
        func_02041d40(data_021c3e70, base, &d);
        func_02041c10(data_021c3e70, base, r, &d, x);
    } else if (base[0x15e76] == 0) {
        if (func_020978a4(base + 0xc) > 1 || func_0203f14c() == 0) {
            func_02041cec(data_021c3e70, base, &d);
        }
    }
}

struct Unk_02041e00_Ent {
    u16 h0;
    u16 h2;
    u32 w4;
    u32 w8;
};

s32 func_0203f508(Unk_02041e00_Ent *z, Unk_02042104_Date *d);
void func_02041e00(void *o, Unk_02041e00_Ent *z, Unk_02042104_Date *d);

void func_02041c10(void *o, u8 *base, s32 cnt, Unk_02042104_Date *d, s32 flag0) {
    s32 f4 = 0;
    Unk_02042104_Date a, b, c, e;
    *(u32 *)&a = 0;
    *((u32 *)&a + 1) = 0;
    *(u32 *)&b = 0;
    *((u32 *)&b + 1) = 0;
    u8 *p = base + 0x15e5c;
    func_02116048(d, &b, 8);
    s32 flag = flag0;
    if (base[0x15e76] != 0 || func_020978a4(base + 0xc) > 1 || func_0203f14c() == 0) {
        f4 = 1;
    }
    while (cnt > 0) {
        *(u32 *)&a = 0;
        *((u32 *)&a + 1) = 0;
        a.c5 = p[2];
        a.c4 = p[1];
        a.c3 = p[0];
        if (func_0209d3a4(&b, &a) == 0) {
            func_02116048(&a, &c, 8);
            func_02041ee4(o, base, &c);
            func_0204c22c(base + 0x15e54, p);
        }
        if (flag == 1) {
            func_02116048(&b, &e, 8);
            func_02041f50(o, base, &e);
        }
        if (f4 != 0) {
            func_02041cec(o, base, &b);
        }
        cnt--;
        flag = (flag + 1) % 7;
        func_0209d2c0(&b, 1);
    }
}

void func_02041cec(void *o, u8 *base, Unk_02042104_Date *d) {
    Unk_02042104_Date x, y, w;
    Unk_02041e00_Ent z[7];
    *(u32 *)&x = 0;
    *((u32 *)&x + 1) = 0;
    func_02116048(d, &x, 8);
    func_02116048(&x, &y, 8);
    if (func_0203f508(z, &y) > 0) {
        func_02116048(&x, &w, 8);
        func_02041e00(o, z, &w);
    }
    base[0x15e76] = 1;
}

void func_02041d40(void *o, u8 *base, Unk_02042104_Date *d) {
    Unk_02042104_Date a;
    *(u32 *)&a = 0;
    *((u32 *)&a + 1) = 0;
    u8 *p = base + 0x15e5c;
    *(u32 *)&a = 0;
    *((u32 *)&a + 1) = 0;
    a.c5 = p[2];
    a.c4 = p[1];
    a.c3 = p[0];
    u8 *q = base + 0x15e54;
    while (func_0209d3a4(d, &a) < 0) {
        func_0204c22c(q, p);
        a.c5 = p[2];
        a.c4 = p[1];
        a.c3 = p[0];
    }
}

s32 func_02041d98(void *o, u8 *a, Unk_02042104_Date *d) {
    s32 r = 0;
    u8 v2 = a[2];
    if (v2 == 0xff && a[1] == 0xff && a[0] == 0xff) {
        r = 1;
        goto end;
    }
    if (v2 == d->c5 && a[1] == d->c4 && a[0] == d->c3) {
        goto end;
    }
    {
        Unk_02042104_Date t;
        *(u32 *)&t = 0;
        *((u32 *)&t + 1) = 0;
        *(u32 *)&t = 0;
        *((u32 *)&t + 1) = 0;
        t.c5 = a[2];
        t.c4 = a[1];
        t.c3 = a[0];
        r = func_0209d3a4(&t, d);
        if (r > 0x1f) {
            r = 0x1f;
        } else if (r < 0) {
            r = 1;
        }
    }
end:
    return r;
}

struct Unk_02041e00_Obj {
    u8 pad[0x1c];
};

extern u8 data_021dfd8c[];
extern u32 data_020ca150[];
extern char data_020da3a0[];
extern char data_020da3ac[];
extern char data_020da3b8[];

void func_02094030(Unk_02041e00_Obj *o);
void func_02094018(Unk_02041e00_Obj *o);
s32 func_0207bf60(void *p, u32 v);
s32 func_020805c4();
u32 func_02002ff8();
void func_02081550(Unk_02041e00_Obj *o, u32 v);
void func_0203ce4c(s32 a, Unk_02041e00_Obj *o);
s32 func_02063b8c(s32 v);
s32 func_0203f31c(u32 ty, Unk_02042104_Date *d, s32 v);
void func_02076ff0(s32 a, const char *fmt, u32 b, u32 c, u32 d);
s32 func_02042070(void *o, u8 *dst, u8 *src, s32 n);
void func_02041fbc(void *o, s32 n, const char *fmt, u8 *p, s32 len, Unk_02042104_Date *d);
void func_02042008(void *o, u8 *dst, u8 *src, s32 n);

void func_02041e00(void *o, Unk_02041e00_Ent *z, Unk_02042104_Date *d) {
    volatile s32 i, v8, v0c, v10, v14;
    Unk_02042104_Date tmp;
    Unk_02041e00_Obj obj;
    s32 t, n;
    func_02094030(&obj);
    i = 0;
    v10 = 0;
    v0c = 0;
    v8 = -1;
    v14 = i;
    do {
        t = v8;
        u32 ty = z->h0;
        switch (ty) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            if (func_0207bf60(data_021dfd8c, ty) != 0 && func_020805c4() != 0) {
                func_02081550(&obj, func_02002ff8());
                func_0203ce4c(v0c, &obj);
                t = func_02063b8c(3) + 0x1e;
            }
            break;
        default:
            if ((s32)ty >= 0x1c && (s32)ty < 0x3a) {
                func_02116048(d, &tmp, 8);
                s32 r = func_0203f31c(ty, &tmp, v10);
                switch (r) {
                case 2:
                case 3:
                    t = data_020ca150[ty - 0x1c];
                    break;
                }
            }
            break;
        }
        if (t != ~v14) {
            func_02076ff0(t, data_020da3a0, d->c5, d->c4, d->c3);
        }
        z++;
        n = i + 1;
        i = n;
    } while (n < 7);
    func_02094018(&obj);
}

void func_02041ee4(void *o, u8 *base, Unk_02042104_Date *d) {
    u8 buf[0x4c];
    Unk_02042104_Date tmp;
    s32 n = func_02042070(o, buf, base + 0x15e60, 0x4c);
    if (n == 0) {
        n = 0x4c;
        func_02115fb4(buf, 0, n);
    }
    n = func_02063b8c(n);
    func_02116048(d, &tmp, 8);
    func_02041fbc(o, n, data_020da3ac, buf, 0x4c, &tmp);
    func_02042008(o, base + 0x15e60, buf, 10);
}

void func_02041f50(void *o, u8 *base, Unk_02042104_Date *d) {
    u8 buf[0x54];
    Unk_02042104_Date tmp;
    s32 n = func_02042070(o, buf, base + 0x15e6a, 0x54);
    if (n == 0) {
        n = 0x54;
        func_02115fb4(buf, 0, n);
    }
    n = func_02063b8c(n);
    func_02116048(d, &tmp, 8);
    func_02041fbc(o, n, data_020da3b8, buf, 0x54, &tmp);
    func_02042008(o, base + 0x15e6a, buf, 11);
}

void func_02041fbc(void *o, s32 n, const char *fmt, u8 *p, s32 len, Unk_02042104_Date *d) {
    s32 idx = 0;
    if (p != 0) {
        s32 i;
        for (i = 0; i < len; p++, idx++, i++) {
            if (*p == 0) {
                n--;
                if (n < 0) {
                    break;
                }
            }
        }
        *p = 1;
    }
    func_02076ff0(idx, fmt, d->c5, d->c4, d->c3);
}

void func_02042008(void *o, u8 *dst, u8 *src, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        *dst = (src[7] << 7) | ((src[6] << 6) | ((src[5] << 5) | ((src[4] << 4) | ((src[3] << 3) | ((src[2] << 2) | (src[0] | (src[1] << 1)))))));
        src += 8;
        dst++;
    }
}

s32 func_02042070(void *o, u8 *dst, u8 *src, s32 n) {
    s32 c = 0;
    s32 cur = *src;
    s32 i;
    for (i = 0; i < n; i++) {
        *dst = (cur >> (i & 7)) & 1;
        if (*dst == 0) {
            c++;
        }
        if ((i + 1) % 8 == 0) {
            src++;
            cur = *src;
        }
        dst++;
    }
    return c;
}

struct Unk_02042104_Ent {
    u8 a;
    u8 b;
    u16 c;
};

extern Unk_02042104_Ent data_021c3e90[];
s32 func_02043ec0(u32 v);

s32 func_020420c4(Unk_02042104_Ent *out, u32 v) {
    s32 r = 0;
    s32 idx = func_02043ec0(v);
    Unk_02042104_Ent *e = &data_021c3e90[idx];
    if (e->a != 0) {
        out->a = e->a;
        volatile u16 t = e->c;
        out->c = t;
        out->b = e->b;
        e->a = r;
        r = 1;
    }
    return r;
}

void func_02042290(Unk_02042104_Ent *p) {
    s32 i;
    for (i = 0; i < 5; i++) {
        p->a = 0;
        p->c = 0xffff;
        p++;
    }
}

struct Unk_02042104_Pair {
    s32 hi, lo;
};

struct Unk_02042104_Vec {
    s32 x, y, z;
};

struct Unk_02042104_Bits {
    u8 f0 : 1;
    u8 idx : 2;
    u8 type : 5;
    u8 b1pad : 5;
    u8 g : 2;
    u8 b1pad2 : 1;
    u16 h2;
    u16 h4;
    u16 h6[3];
};

extern u8 data_020e416c;
u32 func_02095204(u32 v);
void func_0204548c(Unk_02042104_Pair *p, s32 k);
void func_02042660(u32 v, Unk_02042104_Pair *p);
void func_ov003_02219ccc(u32 a, u32 b, Unk_02042104_Pair *c, Unk_02042104_Vec *d);
void func_ov004_0222bf80(u32 a, u32 b, Unk_02042104_Pair *c, Unk_02042104_Vec *d, u32 e);
void func_ov003_022197e8(u32 a, u32 b, Unk_02042104_Pair *c, Unk_02042104_Vec *d);

inline BOOL Unk_02042104_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

void func_02042104(Unk_02042104_Bits *p) {
    struct {
        volatile u16 v[7];
    } W;
    s32 k;
    struct {
        Unk_02042104_Pair p[6];
        Unk_02042104_Vec v[3];
    } m;
    Unk_02042104_Ent *e = &data_021c3e90[p->idx];
    if (e->a != 0) {
        W.v[5] = e->c;
        u16 t = W.v[5];
        W.v[1] = t;
        W.v[0] = t;
        m.p[0].hi = W.v[0] >> 8;
        m.p[0].lo = W.v[1] & 0xff;
        func_0204548c(&m.p[0], 0);
        if (p->f0 == 1) {
            volatile u16 *hp = p->h6;
            s32 i;
            k = 0;
            for (i = 0; i < 3; hp++, i++) {
                if (*hp != 0xffff) {
                    u16 v = *hp;
                    m.p[1].hi = v >> 8;
                    m.p[1].lo = v & 0xff;
                    func_0204548c(&m.p[1], k);
                }
            }
        }
    }
    e->a = p->type;
    W.v[4] = p->h2;
    u16 t2 = W.v[4];
    e->c = t2;
    e->b = p->g;
    W.v[6] = p->h2;
    u16 t3 = W.v[6];
    W.v[3] = t3;
    W.v[2] = t3;
    s32 hi = W.v[2] >> 8;
    s32 lo = W.v[3] & 0xff;
    switch (p->type) {
    case 16:
    case 17:
    case 18: {
        u32 o = func_02095204(p->idx);
        if (o != 0) {
            Unk_02042104_Vec *q = (Unk_02042104_Vec *)(o + 0x5c);
            if (Unk_02042104_IsZero(data_020e416c)) {
                m.v[0] = *q;
                m.p[2].hi = hi;
                m.p[2].lo = lo;
                func_ov003_02219ccc(p->idx, p->h4, &m.p[2], &m.v[0]);
            } else {
                m.v[1] = *q;
                m.p[3].hi = hi;
                m.p[3].lo = lo;
                func_ov004_0222bf80(p->idx, p->h4, &m.p[3], &m.v[1], 0);
            }
        }
        break;
    }
    case 15:
        m.p[4].hi = hi;
        m.p[4].lo = lo;
        func_02042660(p->idx, &m.p[4]);
        break;
    case 19:
        if (p->h4 != 0xfff1) {
            u32 o = func_02095204(p->idx);
            if (o != 0) {
                Unk_02042104_Vec *q = (Unk_02042104_Vec *)(o + 0x5c);
                m.v[2] = *q;
                m.p[5].hi = hi;
                m.p[5].lo = lo;
                func_ov003_022197e8(p->idx, p->h4, &m.p[5], &m.v[2]);
            }
        }
        break;
    }
}
}
