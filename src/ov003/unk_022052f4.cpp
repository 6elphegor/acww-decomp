#include "types.h"

struct Unk_ov003_022052f4_V3 {
    s32 x, y, z;
};

struct Unk_ov003_022052f4_V2 {
    s32 x, y;
    Unk_ov003_022052f4_V2() {}
    Unk_ov003_022052f4_V2(const Unk_ov003_022052f4_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_ov003_022052f4_Date {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_ov003_022052f4_Item {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual s32 vfunc_60(u16 *p);
};

struct Unk_ov003_022052f4_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_022052f4_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x154 - 0x9c];
    s32 unk_154;
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[4];
    Unk_ov003_022052f4_Item *unk_164;
    u8 unk_168;
    u8 pad_169[3];
    s32 unk_16c;
    u8 pad_170[0x1ce - 0x170];
    u8 unk_1ce;
    u8 unk_1cf;
    u8 pad_1d0[0x1fc - 0x1d0];
    u8 unk_1fc;
    u8 pad_1fd[0x7ec - 0x1fd];
    s32 unk_7ec;
    u8 pad_7f0[4];
    s32 unk_7f4;
    u8 pad_7f8[4];
    s32 unk_7fc;
    u8 pad_800[8];
    s32 unk_808;
    u8 pad_80c[4];
    s32 unk_810;
    s32 unk_814;
    u8 pad_818[0x8cc - 0x818];
    s32 unk_8cc;
    s32 unk_8d0;
    s32 unk_8d4;
    s32 unk_8d8;
    s32 unk_8dc;
    s32 unk_8e0;
};

typedef Unk_ov003_022052f4_Obj Obj;
typedef Unk_ov003_022052f4_V3 V3;
typedef Unk_ov003_022052f4_V2 V2;
typedef Unk_ov003_022052f4_Date Date;
typedef Unk_ov003_022052f4_Item Item;

extern "C" {
extern void *data_021c47c4;
extern u8 data_ov003_02230ae8[];
extern u8 data_ov003_02230ae4[];
extern u8 data_ov003_02230acc[];
extern u8 data_ov003_0222efb4[];

void func_02010a7c(u16 *out, Obj *o);
Item *func_020816cc(u32 a, u32 b);
Item *func_ov003_0222ebb0(u32 a);
BOOL func_0200e7c0(Obj *o);
u16 *func_020952d0();
u8 *func_020952c8();
s32 func_02010d20(Obj *o);
void func_0209d498(void *p);
s32 func_0200f23c(Obj *o);
s32 func_020b8fd8();
s32 func_02010c74(Obj *o);
void func_020987d0(u32 a, u32 b);
void func_0200f17c(Obj *o, s32 a, void *d);
void func_0200ead0(Obj *o);
BOOL func_0200ec44(Obj *o, u32 id);
s32 func_0200ec1c(Obj *o, u32 id);
void func_0200ec30(Obj *o, u32 id);
s32 func_ov003_022072b8(Obj *o, s32 *p, s32 a, s32 b);
BOOL func_0200e3c0(Obj *o, s32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
s32 func_0200f5b0(Obj *o);
s32 func_02042f44(s32 a, V2 *p, s32 k);
s32 func_0200f9bc(Obj *o);
void func_0200e208(Obj *o);
s32 func_02043f20(V2 *p);
void func_0200f3ec(V3 *out, Obj *o, V3 *pos, s16 *ang, void *arg);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void func_ov003_0221cd34(s32 a, V2 *p, s32 b);
s32 func_020e972c(V3 *a, V3 *b);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_02030d60(V3 *v);
s32 func_0200f7a0(Obj *o, V2 *p, s32 a, s32 b);
void func_0200f43c(V3 *out, Obj *o);
s32 func_0203081c(V3 *v, s32 *out, s32 a);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
s32 func_0200fa2c(Obj *o, V3 *v, u32 a);
s32 func_0200f8f8(Obj *o, V3 *v, s32 a, s32 b);
s32 func_0200f6d4(Obj *o, V3 *v, s32 a);

BOOL func_ov003_022052f4(Obj *o);
void func_ov003_022053e4(Obj *o);
void func_ov003_02205574(Obj *o);
void func_ov003_022055e4(Obj *o);
void func_ov003_022056c8(Obj *o);
void func_ov003_02205744(Obj *o);
BOOL func_ov003_02205894(Obj *o, V3 *out, V3 *tgt);
s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f);
s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out);
BOOL func_ov003_02205b68(Obj *o, s32 *pa);
}

static inline BOOL Unk_ov003_022052f4_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov003_022052f4_RngV(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

extern "C" BOOL func_ov003_022052f4(Obj *o) {
    u16 buf[2];
    s32 k;
    u32 id;
    o->unk_168 = 0;
    if (o->unk_1fc == 0) return FALSE;
    o->unk_168 = 1;
    k = o->unk_1ce;
    id = o->unk_1cf;
    func_02010a7c(buf, o);
    switch (k) {
    case 2:
    case 3: {
        Item *it = func_020816cc(k, id);
        if (it != NULL) {
            BOOL f = Unk_ov003_022052f4_Rng(buf, 0x1376, 0x1376);
            if (f || Unk_ov003_022052f4_Rng(buf, 0x1377, 0x1377)) {
                if (it->vfunc_60(buf) == 1) {
                    o->unk_168 = 4;
                    break;
                }
            } else {
                o->unk_164 = it;
            }
            o->unk_168 = 2;
        }
        break;
    }
    case 0x11:
    case 0x12: {
        Item *it = func_ov003_0222ebb0(id);
        if (it != NULL) {
            BOOL f = Unk_ov003_022052f4_Rng(buf, 0x1376, 0x1376);
            if (!f && !Unk_ov003_022052f4_Rng(buf, 0x1377, 0x1377)) o->unk_164 = it;
            o->unk_168 = 3;
        }
        break;
    }
    }
    return TRUE;
}

extern "C" void func_ov003_022053e4(Obj *o) {
    struct L {
        u16 w0;
        u16 s2;
        u16 s4;
        u16 s6;
        u32 t[2];
    } l;
    BOOL night;
    u16 *cnt;
    u8 *fl;
    s32 tm;
    u32 A, B, C;
    if (o->unk_7f4 == 0) return;
    night = FALSE;
    if (func_0200e7c0(o)) night = TRUE;
    cnt = func_020952d0();
    if (*cnt == 0) *cnt = 1;
    fl = func_020952c8();
    tm = func_02010d20(o);
    l.t[0] = 0;
    l.t[1] = 0;
    func_0209d498(l.t);
    if ((*fl & 1) != 0) {
        if (func_0200f23c(o) != 1) return;
        if (night) {
            *fl = *fl & 0xfe;
        } else {
            *fl = *fl & 0xee;
        }
    }
    u8 *tb = (u8 *)&l;
    A = tb[0xd];
    B = tb[0xc];
    C = tb[0xb];
    if (B != 8) {
        if (B == 7 && C >= 0x10) {
        } else if (B != 9 || C > 0xf) {
            return;
        }
    }
    u8 hh = ((u8 *)&l)[0xa];
    if (hh < 0xa || hh >= 0x11) return;
    if (func_020b8fd8() >= 3) return;
    func_02010a7c(&l.s2, o);
    if (Unk_ov003_022052f4_RngV(&l.s2, 0x1380, 0x139f)) return;
    func_02010a7c(&l.s4, o);
    if (Unk_ov003_022052f4_RngV(&l.s4, 0x13a0, 0x13a7)) return;
    *cnt = *cnt - 1;
    if (*cnt != 0) return;
    l.w0 = (l.w0 & ~0x7f) | (A &= 0x7f);
    l.w0 = (l.w0 & ~0x780) | ((B &= 0xf) << 7);
    l.w0 = (l.w0 & ~0xf800) | ((C &= 0x1f) << 11);
    u32 n = (u8)(func_02010c74(o) + 1);
    if (n > 7) n = 7;
    func_020987d0(tm, n);
    func_0200f17c(o, tm, &l);
    *cnt = 0x4650;
    *fl = *fl & 0xfb;
    *fl = *fl | 3;
    func_0200ead0(o);
}

extern "C" void func_ov003_02205574(Obj *o) {
    if (func_0200ec44(o, 0x16)) {
        switch (o->unk_814) {
        case 1: {
            s32 v[2];
            v[0] = o->unk_8dc;
            v[1] = o->unk_8e0;
            func_ov003_022072b8(o, v, 6, -1);
            func_0200ec1c(o, 0x16);
            func_0200ec1c(o, 0x13);
            break;
        }
        case 2:
            func_0200ec1c(o, 0x16);
            func_0200ec1c(o, 0x13);
            break;
        }
    }
}

extern "C" void func_ov003_022055e4(Obj *o) {
    if (func_0200ec44(o, 0xb)) return;
    if (func_0200ec44(o, 0x16)) return;
    if (!func_0200e3c0(o, o->unk_7ec)) return;
    if (o->unk_808 != -1) return;
    V2 p;
    p.x = 0;
    p.y = 0;
    func_0204ee10(&p.x, &p.y, &o->unk_5c);
    s32 t = func_0200f5b0(o);
    s32 k = 0;
    switch (t) {
    case 1: k = 2; break;
    case 2: k = 1; break;
    case 4: k = 3; break;
    case 5: k = 4; break;
    }
    V2 q;
    q.x = p.x;
    q.y = p.y;
    o->unk_808 = func_02042f44(o->unk_7fc, &q, k);
    if (o->unk_808 != -1) {
        if (func_0200f9bc(o) == 0x19) {
            func_0200e208(o);
            func_0200ec30(o, 0x16);
            func_0200ec30(o, 0x13);
            o->unk_8dc = p.x;
            o->unk_8e0 = p.y;
        }
    }
}

extern "C" void func_ov003_022056c8(Obj *o) {
    V2 p;
    p.x = 0;
    p.y = 0;
    if (o->unk_98 > 0x53f) {
        func_0204ee10(&p.x, &p.y, &o->unk_5c);
        BOOL same = FALSE;
        s32 x = p.x;
        if (*(volatile s32 *)&p.x == o->unk_8d4 && p.y == o->unk_8d8) same = TRUE;
        if (same) {
            o->unk_8d4 = x;
            o->unk_8d8 = p.y;
        } else {
            o->unk_8d4 = x;
            o->unk_8d8 = p.y;
            V2 q;
            q.x = p.x;
            q.y = p.y;
            func_02043f20(&q);
        }
    }
}

static inline BOOL Unk_ov003_02205744_Chk(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f0 = TRUE;
    if (!f0) { if (v < 0x5d || v > 0x61) f1 = FALSE; }
    if (!f1) { if (v < 0x2f || v > 0x56) f2 = FALSE; }
    if (!f2) { if (v < 0x57 || v > 0x5b) f3 = FALSE; }
    if (!f3) { if (v < 0x66 || v > 0x68) f4 = FALSE; }
    if (!f4) { if (v != 0x69) f5 = FALSE; }
    if (!f5) { if (v < 0x6a || v > 0x6c) f6 = FALSE; }
    if (!f6) { if (v != 0x6d) f7 = FALSE; }
    if (!f7) { if (v < 0xc8 || v > 0xcf) f8 = FALSE; }
    return f8;
}

extern "C" void func_ov003_02205744(Obj *o) {
    V2 p;
    V3 out;
    p.x = 0;
    p.y = 0;
    func_0200f3ec(&out, o, &o->unk_5c, &o->unk_8e, data_ov003_02230ae8);
    func_0204ee10(&p.x, &p.y, &out);
    BOOL same = FALSE;
    s32 x = p.x;
    if (*(volatile s32 *)&p.x == o->unk_8cc && p.y == o->unk_8d0) same = TRUE;
    if (same) {
        o->unk_8cc = x;
        o->unk_8d0 = p.y;
    } else {
        o->unk_8cc = x;
        o->unk_8d0 = p.y;
        s32 x0 = *(volatile s32 *)&p.x, y = p.y, hx = x0 >> 4, hy = y >> 4;
        u16 *c = func_0204ebd8(data_021c47c4, hx, hy, x0 - (hx << 4), y - (hy << 4), 0);
        if (c != NULL) {
            if (Unk_ov003_02205744_Chk(c)) {
                V2 q;
                q.x = p.x;
                q.y = p.y;
                func_ov003_0221cd34(o->unk_7fc, &q, 1);
            }
        }
    }
}

extern "C" BOOL func_ov003_02205894(Obj *o, V3 *out, V3 *tgt) {
    s16 ang;
    V3 t1, t0;
    if (func_020e972c(tgt, &o->unk_5c)) {
        ang = o->unk_8e;
    } else {
        ang = func_020e7b98(tgt->x - o->unk_5c.x, tgt->z - o->unk_5c.z);
    }
    func_0200f3ec(&t0, o, &o->unk_5c, &ang, data_ov003_02230ae4);
    out->x = t0.x;
    out->y = t0.y;
    out->z = t0.z;
    BOOL r4 = func_02030d60(out);
    func_0200f3ec(&t1, o, &o->unk_5c, &ang, data_ov003_02230acc);
    if (r4 && func_02030d60(&t1)) return TRUE;
    return FALSE;
}

extern "C" s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f) {
    s32 a, b;
    func_0204ee10(&a, &b, p);
    if (*f != 0) {
        if (func_ov003_022052f4(o)) return 2;
        V2 q;
        q.x = 0;
        q.y = 0;
        q.x = a;
        q.y = b;
        switch (func_0200f7a0(o, &q, 2, 3)) {
        case 0: return 7;
        case 1: return 0;
        case 2: return 2;
        }
    }
    if (o->unk_814 == 2) return 7;
    if (o->unk_814 == 0) return 0;
    switch (o->unk_810) {
    case 23: return 1;
    case 12:
    case 13: return 2;
    case 14: return 8;
    case 19:
    case 20: return 6;
    case 9:
    case 21: return 5;
    case 10:
    case 22: return 9;
    case 11: return 4;
    case 8:
    default: return 3;
    }
}

extern "C" s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out) {
    s32 r = 1;
    s32 a, b, t;
    V3 pos;
    if (*pa != 0 && func_ov003_022052f4(o)) return 4;
    func_0200f43c(&pos, o);
    func_0204ee10(&a, &b, &pos);
    if (out != NULL) {
        out[0] = a;
        out[1] = b;
    }
    s32 res = func_0203081c(&pos, &t, 0x19);
    if (t == 4) goto aac;
    if (t != 6) goto b42;
    if (data_021c47c4 != NULL) {
        u16 *p = func_0204eba0(data_021c47c4, &pos, 0);
        BOOL f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
        u32 v = *p;
        if (v >= 0x2b && v <= 0x2e) f0 = TRUE;
        if (!f0) { if (v < 0xff || v > 0x102) f1 = FALSE; }
        if (!f1) { if (v < 0x62 || v > 0x65) f2 = FALSE; }
        if (!f2) { if (v < 0xd0 || v > 0xd3) f3 = FALSE; }
        if (f3) return 1;
    }
aac:
    if (*pa != 0) {
        if (res < 0x1000) return 1;
        V2 q;
        q.x = 0;
        q.y = 0;
        q.x = a;
        q.y = b;
        switch (func_0200f7a0(o, &q, 1, *pb)) {
        case 0: return 5;
        case 1: return 0;
        case 2: return 4;
        }
    }
    if (o->unk_814 == 1) {
        switch (o->unk_810) {
        case 6: r = 2; break;
        case 7: r = 3; break;
        case 12:
        case 13: r = 4; break;
        case 14: r = 6; break;
        }
    } else if (o->unk_814 == 2) {
        r = 5;
    } else {
        r = 0;
    }
    goto done;
b42:
    if (res >= 0x1000) r = 4;
done:
    return r;
}

extern "C" BOOL func_ov003_02205b68(Obj *o, s32 *pa) {
    V3 v;
    if (o->unk_16c == 1) {
        V3 t;
        func_0200f3ec(&t, o, &o->unk_5c, &o->unk_8e, data_ov003_0222efb4);
        v.x = t.x;
        v.y = t.y;
        v.z = t.z;
        if (func_0200fa2c(o, &v, 0xd) && func_0200f8f8(o, &v, 2, *pa) && func_0200f6d4(o, &v, 0)) return TRUE;
    } else {
        v.x = o->unk_154;
        v.y = o->unk_158;
        v.z = o->unk_15c;
        if (func_0200fa2c(o, &v, 0xd) && func_0200f8f8(o, &v, 2, *pa) && func_0200f6d4(o, &v, 0)) return TRUE;
    }
    return FALSE;
}
