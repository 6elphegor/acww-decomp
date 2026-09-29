#include "types.h"

struct Unk_ov004_0221e7a8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221e7a8_Rec {
    Unk_ov004_0221e7a8_V3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov004_0221e7a8_Pair {
    s32 a, b;
};

class Unk_ov004_0221e7a8_Msg {
public:
    Unk_ov004_0221e7a8_Msg();
    ~Unk_ov004_0221e7a8_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov004_0221e7a8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_0221e7a8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_0221e7a8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x13d - 0x9c];
    u8 unk_13d;
    u8 pad_13e[0x144 - 0x13e];
    u8 unk_144;
    u8 pad_145[0x154 - 0x145];
    s32 unk_154;
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[0x169 - 0x160];
    u8 unk_169;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 pad_170[0x2dc - 0x170];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221e7a8_Rec unk_7d0;
    u8 pad_7e8[0x7fc - 0x7e8];
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x81c - 0x804];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8e5 - 0x820];
    u8 unk_8e5;
    u8 pad_8e6[0x8ec - 0x8e6];
    u32 unk_8ec[4];
};

typedef Unk_ov004_0221e7a8_Obj Obj;
typedef Unk_ov004_0221e7a8_V3 V3;
typedef Unk_ov004_0221e7a8_Pair Pair;
typedef Unk_ov004_0221e7a8_Rec Rec;
typedef Unk_ov004_0221e7a8_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov004_02240148[];
extern u8 data_ov004_0224d4ac[];
extern u8 data_ov004_0224d4a8[];
extern s16 data_02135f44[];
extern void *data_021c47c4;

s32 func_020e9688(V3 *v);
s32 func_020e9650(void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffca8c(void *a, void *b, void *c);
void func_01ffd070(void *a, void *b, void *c);
void func_02010e68(s32 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d68(s32 a, s32 b);
void func_02010d98(void *a, s32 b);
void func_02010a58(Obj *o, s16 *a);
void func_02010a34(Obj *o, s32 *a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_020109ac(Obj *o);
void func_0201071c(Obj *o);
void func_0200ec30(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200f9d4(Obj *o, s32 a);
s32 func_02063c18(s16 a);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02072e44(void *g);
void func_020728d4(void *g);
void func_020728a4(void *g, u8 *b, u32 n);
void func_02072824(void *g, u32 a, u32 b);
s32 func_020729bc(void *g, u32 a);
void func_020954b8(u8 *p, s32 a, s32 b);
s32 func_020b52f8();
s32 func_020b0f54();
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_02098ffc();
s32 func_0204eba0(void *a, V3 *v, u32 b);
s32 func_0204b300(s32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
s32 func_0200b76c(Obj *o, Pair *p, s32 a, u32 b, s32 c);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
s32 func_0200fa2c(Obj *o, V3 *v, u32 a);
s32 func_0200f8f8(Obj *o, V3 *v, s32 a, s32 b);
s32 func_0200f6d4(Obj *o, V3 *v, s32 a);

void func_ov004_0221f2e8(Obj *o);
void func_ov004_0221f280(Obj *o);
s32 func_ov004_022354d8();
s32 func_ov004_022354a4(s32 a, s32 b);
V3 *func_ov004_022354ec(s32 a);
s32 func_ov004_022354e0(s32 a);
s32 func_ov004_02222e5c(Obj *o, s32 x, s32 z, s32 a, s32 b, s32 c);
s32 func_ov004_02234588(u32 *a, u32 *b, u16 *c, u16 *d);
s32 func_ov004_02234550(s32 a);
s32 func_ov004_022235ec(Obj *o, Pair *p, s32 a, u32 b, s32 c);

void func_ov004_0221e7a8(Obj *o, V3 *tgt, s32 *out, s32 *lim);
void func_ov004_0221ec8c(Obj *o);
void func_ov004_0221ee90(Obj *o);
void func_ov004_0221f08c(Obj *o);
void func_ov004_0221edf4(void *a, s32 *b, s32 *c);
void func_ov004_0221edfc(void *a, s32 b, s32 c);
void func_ov004_0221ee04(Rec *r, V3 v, s32 w);
s32 func_ov004_0221ee1c(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221ee5c(V3 *d, V3 v);
void func_ov004_0221ef78(void *a, s32 *b, s32 *c);
void func_ov004_0221ef80(void *a, s32 b, s32 c);
void func_ov004_0221ef88(Rec *r, V3 v, s32 a, s32 b);
s32 func_ov004_0221efa4(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221efe4(V3 *d, V3 v);
}

extern "C" void func_ov004_0221e7a8(Obj *o, V3 *tgt, s32 *out, s32 *lim) {
    V3 d;
    V3 saved;
    s32 t;
    s32 ang;
    s16 h;
    s32 v;
    V3 *pv = &o->unk_5c;
    saved = *pv;
    d.x = tgt->x - o->unk_5c.x;
    d.z = tgt->z - o->unk_5c.z;
    if (func_020e9688(&d) < 0x1000) {
        if (*out <= *lim) {
            func_02010e68(&o->unk_5c.x, tgt->x, 0x800, *lim, 0x31);
            func_02010e68(&o->unk_5c.z, tgt->z, 0x800, *lim, 0x31);
            if (tgt->x == o->unk_5c.x && tgt->z == o->unk_5c.z) {
                *out = 0;
            } else {
                *out = func_020e9650(&o->unk_5c, &saved);
                V3 *pw = &o->unk_5c;
                *pw = saved;
            }
        } else {
            *out = func_02010d50(*out, *lim);
        }
    } else {
        *out = func_02010d68(*out, *lim);
    }
    ang = func_020e7b98(d.x, d.z);
    h = o->unk_8e;
    if (*out != 0) {
        func_02010d98(&h, ang);
        func_02010a58(o, &h);
    }
    s32 vt = func_01ffcb0c(*out, data_02135f44[(((u16)(s16)(h - ang)) >> 4) * 2 + 1]);
    if (vt < 0) vt = -vt;
    v = vt;
    func_02010a34(o, &v);
}

extern "C" s32 func_ov004_0221e8c0(Obj *o) {
    if (o->unk_13d != 0) {
        s32 a = func_ov004_022354d8();
        s32 r4 = func_ov004_022354a4(a, 0);
        if (r4 == 0) return 0;
        volatile V3 loc;
        V3 *p = func_ov004_022354ec(r4);
        loc.x = p->x;
        loc.y = p->y;
        loc.z = p->z;
        return func_ov004_02222e5c(o, loc.x, loc.z, func_ov004_022354e0(r4), 5, -1);
    }
    if (o->unk_144 != 0) {
        return func_0200f9d4(o, func_0200f5b0(o));
    }
    return 0;
}

extern "C" void func_ov004_0221e938(void *unused, s32 a, s32 b) {
    u8 buf[4];
    if (func_02072e44(data_020cbb18)) {
        func_020954b8(buf, a, b);
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 1);
        func_02072824(g, 0x2c, 4);
    }
}

extern "C" s32 func_ov004_0221e980(Obj *o, s32 param) {
    s32 o1 = 0, o2 = 0;
    u32 u, v;
    Pair pa, pb, pc, pd, pe, pf;
    V3 tgt, tmp1, tmp2;
    s32 r5;
    void *r6;
    if (func_020b52f8() == 0) goto fail;
    if (o->unk_7fc != 0) goto fail;
    r5 = func_ov004_02234588(&u, &v, &o->unk_81c, &o->unk_81e);
    if (r5 >= 0) {
        if (r5 == o->unk_169 || o->unk_16c == 1) {
            if (func_ov004_02234550(r5) == 0) {
                pa.a = 0;
                pa.b = 0;
                func_0200b76c(o, &pa, r5, 6, -1);
            } else {
                pb.a = (u8)u;
                pb.b = (u8)v;
                func_ov004_022235ec(o, &pb, r5, 6, -1);
            }
            return 1;
        }
    }
    r6 = data_021c47c4;
    if (r5 == -2) {
        if (o->unk_16c == 1) {
            func_0200f3ec(&tmp1, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_02240148);
            tgt.x = tmp1.x;
            tgt.y = tmp1.y;
            tgt.z = tmp1.z;
        } else {
            tgt.x = o->unk_154;
            tgt.y = o->unk_158;
            tgt.z = o->unk_15c;
            if (func_0200fa2c(o, &tgt, 0xe) == 0) goto second;
        }
        r5 = func_0204eba0(r6, &tgt, 1);
        if (func_02098ffc() == -1) {
            if (r5 == 0) goto second;
            if (func_0204b300(r5) == 0) goto second;
            func_0204ee10(&o1, &o2, &tgt);
            pc.a = o1;
            pc.b = o2;
            func_0200b76c(o, &pc, -1, 6, -1);
            return 1;
        }
        if (r5 == 0) goto second;
        if (func_0204b300(r5) == 0) goto second;
        if ((u32)func_020b0f54() <= 1) {
            if (func_0200f8f8(o, &tgt, 0, param) == 0) goto second;
            if (func_0200f6d4(o, &tgt, 1) == 0) goto second;
            return 1;
        }
        func_0204ee10(&o1, &o2, &tgt);
        pd.a = o1;
        pd.b = o2;
        func_0200b76c(o, &pd, -3, 6, -1);
        return 1;
    }
second:
    if (o->unk_16c == 1) {
        func_0200f3ec(&tmp2, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_0224d4ac);
        tgt.x = tmp2.x;
        tgt.y = tmp2.y;
        tgt.z = tmp2.z;
    } else {
        tgt.x = o->unk_154;
        tgt.y = o->unk_158;
        tgt.z = o->unk_15c;
        if (func_0200fa2c(o, &tgt, 0xc) == 0) return 0;
    }
    {
        s32 q = func_0204eba0(r6, &tgt, 0);
        if (q == 0) goto fail;
        if (func_0204b300(q) == 0) goto fail;
    }
    if (func_02098ffc() == -1) {
        func_0204ee10(&o1, &o2, &tgt);
        pe.a = o1;
        pe.b = o2;
        func_0200b76c(o, &pe, -1, 6, -1);
        return 1;
    }
    if ((u32)func_020b0f54() <= 1) {
        if (func_0200f8f8(o, &tgt, 0, param) == 0) goto fail;
        if (func_0200f6d4(o, &tgt, 0) == 0) goto fail;
        return 1;
    }
    func_0204ee10(&o1, &o2, &tgt);
    pf.a = o1;
    pf.b = o2;
    func_0200b76c(o, &pf, -3, 6, -1);
    return 1;
fail:
    return 0;
}

extern "C" void func_ov004_0221ec34(Obj *o, u32 lim, u32 step) {
    u8 *p = &o->unk_8e5;
    u32 c = *p;
    if (c == lim) return;
    if (c < lim) {
        *p = c + step;
        if (*p > lim) *p = lim;
    } else {
        *p = c - step;
        if (*(s8 *)p < (s32)lim) *p = lim;
    }
}

extern "C" void func_ov004_0221ec64(Obj *o) {
    func_ov004_0221ec8c(o);
    func_ov004_0221f2e8(o);
    func_020109ac(o);
    func_0201071c(o);
    func_ov004_0221f280(o);
}

extern "C" void func_ov004_0221ec8c(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r->unk_0c, &lim);
}

extern "C" void func_ov004_0221ecb8(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221edf4(&o->unk_8ec, &v.x, &v.z);
    func_ov004_0221ee1c(o, &v, 6, a);
}

extern "C" void func_ov004_0221ece4(Obj *o, Obj *arg) {
    V3 cur;
    V3 w;
    V3 tmp;
    V3 *r5 = (V3 *)((u8 *)arg + 0xc);
    Rec *r6 = &o->unk_7d0;
    func_020103b4(o, 1, 0, 0);
    o->unk_2dc = 0;
    w.x = 0;
    w.y = 0;
    w.z = 0;
    void *r7 = &o->unk_8ec;
    switch (func_02063c18(o->unk_8e)) {
    case 2:
        w.z = w.z + 0x6000;
        break;
    case 0:
        w.z = w.z - 0x6000;
        break;
    case 3:
        w.x = w.x + 0x6000;
        break;
    case 1:
        w.x = w.x - 0x6000;
        break;
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        V3 *pv = &o->unk_5c;
        cur.x = pv->x;
        cur.y = pv->y;
        cur.z = pv->z;
        func_ov004_0221edfc(r7, cur.x, cur.z);
        func_01ffca8c(&o->unk_5c, &w, &o->unk_5c);
    } else {
        cur.x = r5->x;
        cur.y = r5->y;
        cur.z = r5->z;
        func_01ffd070(&tmp, &cur, &w);
        V3 *pv = &o->unk_5c;
        pv->x = tmp.x;
        pv->y = tmp.y;
        pv->z = tmp.z;
    }
    func_ov004_0221ee04(r6, cur, 0x400);
    func_02010a34(o, (s32 *)data_ov004_0224d4a8);
    func_0200ec30(o, 5);
}

extern "C" void func_ov004_0221edf4(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221edfc(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221ee04(Rec *r, V3 v, s32 w) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = w;
    r->unk_10 = w;
}

extern "C" s32 func_ov004_0221ee1c(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8e, a, b);
    func_ov004_0221ee5c(&m.unk_0c, *v);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221ee5c(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void func_ov004_0221ee70(Obj *o) {
    func_ov004_0221ee90(o);
    func_ov004_0221f2e8(o);
    func_020109ac(o);
    func_0201071c(o);
}

extern "C" void func_ov004_0221ee90(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r->unk_0c, &lim);
}

extern "C" void func_ov004_0221eebc(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221ef78(&o->unk_8ec, &v.x, &v.z);
    if ((v.x & 0x80000) != 0) v.x |= 0xfff00000;
    if ((v.z & 0x80000) != 0) v.z |= 0xfff00000;
    func_ov004_0221efa4(o, &v, 6, a);
}

extern "C" void func_ov004_0221ef14(Obj *o, Obj *arg) {
    V3 c;
    V3 *r4 = (V3 *)((u8 *)arg + 0xc);
    if (o->unk_700 != 1) func_020103b4(o, 1, 3, 0);
    c.x = r4->x;
    c.y = r4->y;
    c.z = r4->z;
    func_ov004_0221ef88(&o->unk_7d0, c, o->unk_98, 0x400);
    func_ov004_0221ef80(&o->unk_8ec, c.x, c.z);
}

extern "C" void func_ov004_0221ef78(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221ef80(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221ef88(Rec *r, V3 v, s32 a, s32 b) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = a;
    r->unk_10 = b;
}

extern "C" s32 func_ov004_0221efa4(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8d, a, b);
    func_ov004_0221efe4(&m.unk_0c, *v);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221efe4(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void func_ov004_0221eff8(Obj *o) {
    func_ov004_0221f08c(o);
    func_ov004_0221f2e8(o);
    func_020109ac(o);
    func_0201071c(o);
    Rec *q = &o->unk_7d0;
    u8 *r4 = &q->unk_14;
    u8 r6 = q->unk_15;
    void *r7 = data_020cbb18;
    if (func_020729bc(r7, o->unk_7fc) == 0 && *r4 == 0xf && r6 == 1) {
        func_0200ecdc(o, 0x4d3);
    }
    if (func_020729bc(r7, o->unk_7fc) != 0) {
        if ((u32)(r6 - 1) <= 1 && *r4 == 0xa) {
            func_020b4bbc(func_020b4934(), o->unk_800);
        }
    }
    *r4 = *r4 + 1;
}

extern "C" void func_ov004_0221f08c(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 lim = r->unk_10;
    V3 v;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r->unk_0c, &lim);
}
