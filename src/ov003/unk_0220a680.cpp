#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_0220a684_V3 {
    s32 x, y, z;
    Unk_ov003_0220a684_V3() {}
    Unk_ov003_0220a684_V3(const Unk_ov003_0220a684_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_0220a684_V3() {}
};

struct Unk_ov003_0220a684_Pair {
    s32 a, b;
    Unk_ov003_0220a684_Pair() {}
    Unk_ov003_0220a684_Pair(s32 x, s32 y) { a = x; b = y; }
    Unk_ov003_0220a684_Pair(const Unk_ov003_0220a684_Pair &o) { a = o.a; b = o.b; }
};

struct Unk_ov003_0220a684_Rec {
    u8 a, b, c, pad_03;
    Unk_ov003_0220a684_V3 pos;
    u8 pad_10[0x1c - 0x10];
};

struct Unk_ov003_0220a684_P3 {
    u8 id;
    u8 pad_01[3];
    Unk_ov003_0220a684_V3 pos;
    Unk_ov003_0220a684_V3 GetPos() { return pos; }
};

struct Unk_ov003_0220a684_B3 {
    u8 a, b, c;
};

class Unk_ov003_0220a684_Item {
public:
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

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_0220a684_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[8];
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u8 pad_9c[0xd4 - 0x9c];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_0220a684_Shared {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov003_0220a684_Shared *unk_3c;
    /* 0x40 */ u8 pad_40[4];
};

class Unk_ov003_0220a684_Msg {
public:
    Unk_ov003_0220a684_Msg();
    ~Unk_ov003_0220a684_Msg();
    void func_0200e2c0(u32 a, u32 b, s16 c);
    u8 pad_00[0xc];
    u32 unk_0c[4];
    u8 pad_1c[0x1c - 0x1c];
};

class Unk_ov003_0220a684_Obj : public Unk_020d9670, public Unk_020ddcf0 {
public:
    /* 0x130 */ u8 pad_130[0x164 - 0x130];
    /* 0x164 */ Unk_ov003_0220a684_Item *unk_164;
    /* 0x168 */ u8 unk_168;
    /* 0x169 */ u8 pad_169[0x2cc - 0x169];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ u8 pad_2d4[0x700 - 0x2d4];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_ov003_0220a684_Rec unk_7d0;
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[8];
    /* 0x808 */ s32 unk_808;
    /* 0x80c */ u8 pad_80c[0x8ec - 0x80c];
    /* 0x8ec */ u8 unk_8ec[4];
};

typedef Unk_ov003_0220a684_Obj Obj;
typedef Unk_ov003_0220a684_V3 V3;
typedef Unk_ov003_0220a684_Pair Pair;
typedef Unk_ov003_0220a684_Rec Rec;
typedef Unk_ov003_0220a684_P3 P3;
typedef Unk_ov003_0220a684_B3 B3;
typedef Unk_ov003_0220a684_Item Item;
typedef Unk_ov003_0220a684_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;
extern s16 data_02135f44[];

s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_02010914(Obj *o);
s32 func_02010a34(Obj *o, s32 *a);
void func_02010a7c(u16 *out, Obj *o);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_020729bc(void *g, s32 a);
s32 func_0200ef08(Obj *o);
void func_0200f45c(V3 *out, Obj *o);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_0204ed8c(V3 *out, u32 a, u32 b);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02090330(s32 a, V3 *v, s16 *ang, ...);

s32 func_ov003_0221cb54(Pair *p);
void func_ov003_0221cd34(s32 a, Pair p, s32 b);
s32 func_ov003_022135c4(void *p, s32 a);
s32 func_ov003_02205928(Obj *o, V3 *p, u8 *f);
s32 func_ov003_0220a344(Obj *o, V3 v, s32 a, s32 b, s32 c);
s32 func_ov003_022093bc(Obj *o, s32 a, Pair p, s32 b, s32 c, s32 d);

void func_ov003_0220a680(Obj *o);
s32 func_ov003_0220a684(Obj *o, Msg *m);
void func_ov003_0220a700(Rec *r, u32 id, V3 v);
s32 func_ov003_0220a710(Obj *o, u32 id, V3 v, s32 b, s16 c);
void func_ov003_0220a764(P3 *p, u32 id, V3 v);
void func_ov003_0220a774(Obj *o);
void func_ov003_0220a7bc(Obj *o);
void func_ov003_0220a7fc(Obj *o);
void func_ov003_0220ab20(Obj *o);
void func_ov003_0220ab80(Obj *o, s32 x);
void func_ov003_0220abd4(Obj *o, Msg *m);
void func_ov003_0220ac38(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d);
void func_ov003_0220ac54(u8 *d, u8 a, u8 b, u8 c, u8 e);
void func_ov003_0220ac68(Rec *r, Pair p, u8 c);
s32 func_ov003_0220ac74(Obj *o, u32 id, Pair p, s32 b, s32 c);
void func_ov003_0220acc4(B3 *d, Pair p, u32 c);
void func_ov003_0220acd0(Obj *o);
void func_ov003_0220ad10(Obj *o);
s32 func_ov003_0220ad50(Obj *o, s16 x);
void func_ov003_0220ad5c(Obj *o);
s32 func_ov003_0220ad70(Obj *o, u32 a, s16 b);
void func_ov003_0220ada8(Obj *o);
void func_ov003_0220adc4(Obj *o);
void func_ov003_0220ae04(Obj *o);
s32 func_ov003_0220ae34(Obj *o, s16 x);
void func_ov003_0220ae40(Obj *o);
s32 func_ov003_0220ae54(Obj *o, u32 a, s16 b);
void func_ov003_0220ae8c(Obj *o);
s32 func_ov003_0220af3c(Obj *o, V3 *v, u8 f);
void func_ov003_0220b0f0(Obj *o);
}

extern "C" void func_ov003_0220a680(Obj *o) {
}

extern "C" s32 func_ov003_0220a684(Obj *o, Msg *m) {
    P3 *p = (P3 *)&m->unk_0c;
    u32 id = p->id;
    V3 t = p->pos;
    Rec *r = &o->unk_7d0;
    func_ov003_0220a700(r, id, t);
    if ((u32)(o->unk_700 - 0x49) <= 1) {
        if (r->a != 0) {
            func_02010358(o, 0x4e, 3, 0);
        } else {
            func_02010358(o, 0x4b, 3, 0);
        }
    } else {
        func_02010358(o, 0x49, 3, 0);
    }
    func_0200ec30(o, 0x1c);
}

extern "C" void func_ov003_0220a700(Rec *r, u32 id, V3 v) {
    r->a = id;
    r->pos.x = v.x;
    r->pos.y = v.y;
    r->pos.z = v.z;
}

extern "C" s32 func_ov003_0220a710(Obj *o, u32 id, V3 v, s32 b, s16 c) {
    Msg m;
    m.func_0200e2c0(0x5e, b, c);
    func_ov003_0220a764((P3 *)&m.unk_0c, id, v);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220a764(P3 *p, u32 id, V3 v) {
    p->id = id;
    p->pos.x = v.x;
    p->pos.y = v.y;
    p->pos.z = v.z;
}

extern "C" void func_ov003_0220a774(Obj *o) {
    func_ov003_0220a7fc(o);
    func_020109c4(o);
    func_0201071c(o);
    s32 v = o->unk_98;
    if (v < 0) v = -v;
    s32 t = func_02010d50(v, 0) * -1;
    func_02010a34(o, &t);
    func_ov003_0220a7bc(o);
}

extern "C" void func_ov003_0220a7bc(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

static inline BOOL Unk_ov003_0220a7fc_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (!f3) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (!f4) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

extern "C" void func_ov003_0220a7fc(Obj *o) {
    s16 h[2];
    s32 xy[2];
    V3 pos;
    u16 *p;
    s32 k;
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 5)) {
        Rec *rc = &o->unk_7d0;
        if (rc->c != 0) {
            Pair pa;
            u32 b = rc->b;
            u32 a = rc->a;
            pa.a = a;
            pa.b = b;
            func_ov003_0221cb54(&pa);
            func_0200ec1c(o, 0x12);
            func_0200ec1c(o, 0x1c);
        }
        s32 t = -0x333;
        func_02010a34(o, &t);
        func_0200f45c(&pos, o);
        xy[0] = 0;
        xy[1] = 0;
        func_0204ee10(&xy[0], &xy[1], &pos);
        s32 x, y, hx, hy;
        x = xy[0];
        y = xy[1];
        hx = x >> 4;
        hy = y >> 4;
        p = func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (p != NULL) {
            if (Unk_ov003_0220a7fc_Chk(p)) {
                func_ov003_0221cd34(o->unk_7fc, Pair(xy[0], xy[1]), 1);
            }
        }
        func_0200ec30(o, 9);
        k = 0xf;
        if (p != NULL) k = (s32)(*p & 0xf000) >> 12;
        switch (o->unk_168) {
        case 0:
            if (p != NULL) {
                if (k <= 4) {
                    BOOL r3 = TRUE;
                    BOOL r2 = FALSE;
                    u32 v = *p;
                    if (v >= 0xe3 && v <= 0xe7) r2 = r3;
                    if (!r2) {
                        if (!(v >= 0xe8 && v <= 0xfb)) r3 = FALSE;
                    }
                    if (!r3) {
                        if (v >= 0x26 && v <= 0x2a) goto l_a9dc;
                        if (v >= 0x5d && v <= 0x61) goto l_a9dc;
                        if (v >= 0x2f && v <= 0x56) goto l_a9dc;
                        if (v >= 0x57 && v <= 0x5b) goto l_a9dc;
                        if (v >= 0x66 && v <= 0x68) goto l_a9dc;
                        if (v == 0x69) goto l_a9dc;
                        if (v >= 0x6a && v <= 0x6c) goto l_a9dc;
                        if (v == 0x6d) goto l_a9dc;
                        if (!(v >= 0xc8 && v <= 0xcf)) goto l_a9e6;
                    }
                }
            l_a9dc:
                if (k == 0xa) goto l_a9e6;
                if ((u32)(k - 0xd) > 1) goto l_a9f0;
            l_a9e6:
                func_0200ecdc(o, 0x7df);
                break;
            }
        l_a9f0:
            func_0200ecdc(o, 0x844);
            {
                V3 *pv = &o->unk_5c;
                pos.x = pv->x;
                pos.y = pv->y;
                pos.z = pv->z;
                *(s16 *)&h[0] = o->unk_8e;
                s32 r5, r6, r7, dz, dx;
                s32 idx = ((u16)h[0] >> 4) * 2;
                s32 sn = data_02135f44[idx];
                s32 cs = data_02135f44[idx + 1];
                r5 = func_01ffcb0c(cs, 0xccd);
                r5 -= func_01ffcb0c(sn, 0x800);
                r6 = func_01ffcb0c(sn, 0xccd);
                dx = r6 + func_01ffcb0c(cs, 0x800);
                pos.x = pos.x + dx;
                pos.z += r5;
                h[0] = (s16)(h[0] - 0x2000);
                func_02090330(5, &pos, &h[0]);
            }
            break;
        case 1:
            func_0200ecdc(o, 0x7df);
            break;
        case 2:
            func_0200ecdc(o, 0x7df);
            if (o->unk_164 != NULL) {
                func_02010a7c((u16 *)&h[1], o);
                o->unk_164->vfunc_60((u16 *)&h[1]);
            }
            break;
        case 3:
            if (func_020729bc(data_020cbb18, o->unk_7fc)) {
                if (func_ov003_022135c4(o->unk_164, 1) == 0) {
                    func_0200ecdc(o, 0x7df);
                }
            } else {
                func_0200ecdc(o, 0x7df);
            }
            break;
        }
        o->unk_164 = NULL;
        o->unk_168 = 0;
    }
}

extern "C" void func_ov003_0220ab20(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        if (func_0200ec44(o, 0x1c)) {
            Rec *r = &o->unk_7d0;
            if (r->c != 0) {
                Pair p;
                u32 b = r->b;
                u32 a = r->a;
                p.a = a;
                p.b = b;
                func_ov003_0221cb54(&p);
                func_0200ec1c(o, 0x12);
                func_0200ec1c(o, 0x1c);
            }
        }
    }
}

extern "C" void func_ov003_0220ab80(Obj *o, s32 x) {
    u8 b[4];
    func_ov003_0220ac38(o->unk_8ec, &b[0], &b[1], &b[2], &b[3]);
    o->unk_168 = b[3];
    if (b[0] == 0) {
        Pair p;
        p.a = b[1];
        p.b = b[2];
        func_ov003_0220ac74(o, 0, p, 6, x);
    }
}

extern "C" void func_ov003_0220abd4(Obj *o, Msg *m) {
    B3 *q = (B3 *)&m->unk_0c;
    u8 c = q->c;
    s32 a = q->a;
    s32 b = q->b;
    Pair p;
    p.a = a;
    p.b = b;
    func_ov003_0220ac68(&o->unk_7d0, p, c);
    func_ov003_0220ac54(o->unk_8ec, c, a, b, o->unk_168);
    func_02010358(o, 0x4c, 3, 0);
    if (c != 0) {
        func_0200ec30(o, 0x1c);
    }
}

extern "C" void func_ov003_0220ac38(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d) {
    *a = s[0];
    *b = s[1];
    *c = s[2];
    *d = s[3];
}

extern "C" void func_ov003_0220ac54(u8 *d, u8 a, u8 b, u8 c, u8 e) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}

extern "C" void func_ov003_0220ac68(Rec *r, Pair p, u8 c) {
    r->a = p.a;
    r->b = p.b;
    r->c = c;
}

extern "C" s32 func_ov003_0220ac74(Obj *o, u32 id, Pair p, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x5d, b, *(s16 *)&c);
    func_ov003_0220acc4((B3 *)&m.unk_0c, p, id);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220acc4(B3 *d, Pair p, u32 c) {
    d->a = p.a;
    d->b = p.b;
    d->c = c;
}

extern "C" void func_ov003_0220acd0(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    s32 t = func_02010d5c(o->unk_98, 0, 0x171);
    func_02010a34(o, &t);
    func_ov003_0220ad10(o);
}

extern "C" void func_ov003_0220ad10(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" s32 func_ov003_0220ad50(Obj *o, s16 x) {
    return func_ov003_0220ad70(o, 6, x);
}

extern "C" void func_ov003_0220ad5c(Obj *o) {
    func_02010358(o, 0x5e, 3, 0);
}

extern "C" s32 func_ov003_0220ad70(Obj *o, u32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x5c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220ada8(Obj *o) {
    func_ov003_0220ae04(o);
    func_0201071c(o);
    func_ov003_0220adc4(o);
}

extern "C" void func_ov003_0220adc4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" void func_ov003_0220ae04(Obj *o) {
    if (func_020565e8(o->unk_2cc, 5)) {
        func_0200ecdc(o, 0x842);
    }
    func_02010914(o);
}

extern "C" s32 func_ov003_0220ae34(Obj *o, s16 x) {
    return func_ov003_0220ae54(o, 6, x);
}

extern "C" void func_ov003_0220ae40(Obj *o) {
    func_02010358(o, 0x4d, 3, 0);
}

extern "C" s32 func_ov003_0220ae54(Obj *o, u32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x5b, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220ae8c(Obj *o) {
    s32 r4 = o->unk_98;
    s32 t = func_02010d50(r4, 0);
    func_02010a34(o, &t);
    func_02010914(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        V3 v;
        func_020109c4(o);
        func_0201071c(o);
        v.x = 0;
        v.y = 0;
        v.z = 0;
        func_ov003_0220af3c(o, &v, 0);
    } else {
        if (func_0200ef08(o)) func_020109c4(o);
        func_0201071c(o);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
    func_ov003_0220b0f0(o);
    if (r4 != 0) {
        if (o->unk_98 == 0) {
            func_02090330(0x2a, &o->unk_5c, &o->unk_8e, 0);
        }
    }
}

extern "C" s32 func_ov003_0220af3c(Obj *o, V3 *v, u8 f) {
    Pair xy;
    V3 pos;
    s32 r6;
    u32 r7;
    Rec *r5;
    if (o->unk_98 != 0) return -1;
    r7 = 0;
    r5 = &o->unk_7d0;
    if (f != 0) {
        pos.x = v->x;
        pos.y = v->y;
        pos.z = v->z;
    } else {
        func_0204ed8c(&pos, r5->a, r5->b);
        if (r5->c == 0) {
            r7 = 1;
            f = 1;
        }
    }
    r6 = func_ov003_02205928(o, &pos, &f);
    xy.a = 0;
    xy.b = 0;
    func_0204ee10(&xy.a, &xy.b, &pos);
    if (r7 != 0) {
        if (o->unk_808 != -1) r5->c = 1;
    }
    switch (r6) {
    case 0:
        break;
    case 1:
        func_ov003_0220ae54(o, 6, -1);
        break;
    case 2:
        func_ov003_0220ac74(o, 0, xy, 6, -1);
        break;
    case 3:
        func_ov003_0220a710(o, 0, pos, 6, -1);
        break;
    case 4:
        func_ov003_0220a710(o, 1, pos, 6, -1);
        break;
    case 5:
        func_ov003_0220a344(o, pos, 0, 6, -1);
        break;
    case 6: {
        Pair xy2;
        xy2.a = 0;
        xy2.b = 0;
        func_0204ee10(&xy2.a, &xy2.b, &pos);
        func_ov003_022093bc(o, 0, xy2, 0xfff1, 6, -1);
        break;
    }
    case 7:
        func_ov003_0220ad70(o, 6, -1);
        break;
    case 8:
        func_ov003_0220ac74(o, 1, xy, 6, -1);
        break;
    case 9:
        func_ov003_0220a344(o, pos, 1, 6, -1);
        break;
    }
    return r6;
}
