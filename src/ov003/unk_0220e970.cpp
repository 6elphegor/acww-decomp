#include "types.h"

struct Unk_ov003_0220e970_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0220e970_P2 {
    s32 x, z;
};

struct Unk_ov003_0220e970_Pv {
    s32 x, z;
    Unk_ov003_0220e970_Pv() {}
    Unk_ov003_0220e970_Pv(s32 a, s32 b) {
        x = a;
        z = b;
    }
    Unk_ov003_0220e970_Pv(const Unk_ov003_0220e970_Pv &o) {
        x = o.x;
        z = o.z;
    }
};

struct Unk_ov003_0220e970_Rec {
    u8 b0, b1, b2, b3;
};

struct Unk_ov003_0220e970_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220e970_Rec unk_0c;
};

struct Unk_ov003_0220e970_Mtx {
    s32 m[9];
    Unk_ov003_0220e970_V3 v;
};

struct Unk_ov003_0220e970_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220e970_Sec {
    virtual void vfunc_00();
};

class Unk_ov003_0220e970_Q {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60(u16 *p);
};

struct Unk_ov003_0220e970_S128 {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov003_0220e970_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov003_0220e970_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220e970_Obj : Unk_ov003_0220e970_P0, Unk_ov003_0220e970_Sec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov003_0220e970_S128 *unk_128;
    u8 pad_12c[0x164 - 0x12c];
    Unk_ov003_0220e970_Q *unk_164;
    u8 unk_168;
    u8 pad_169[0x2cc - 0x169];
    u8 unk_2cc[8];
    Unk_ov003_0220e970_Bits unk_2d4;
    u8 pad_2d8[0x664 - 0x2d8];
    Unk_ov003_0220e970_Mtx unk_664;
    u8 pad_694[0x7d0 - 0x694];
    Unk_ov003_0220e970_Rec unk_7d0;
    u8 pad_7d4[0x7ec - 0x7d4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u8 pad_81c[0x8ec - 0x81c];
    u8 unk_8ec[4];
};

class Unk_ov003_0220e970_Msg {
public:
    Unk_ov003_0220e970_Msg();
    ~Unk_ov003_0220e970_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    Unk_ov003_0220e970_Rec unk_0c;
    u8 pad_10[0xc];
};

typedef Unk_ov003_0220e970_Obj Obj;
typedef Unk_ov003_0220e970_V3 V3;
typedef Unk_ov003_0220e970_Msg Msg;
typedef Unk_ov003_0220e970_P2 P2;
typedef Unk_ov003_0220e970_Pv Pv;
typedef Unk_ov003_0220e970_Rec Rec;
typedef Unk_ov003_0220e970_Arg Arg;
typedef Unk_ov003_0220e970_Mtx Mtx;
typedef Unk_ov003_0220e970_Sec Sec;
typedef Unk_ov003_0220e970_Q Q;

extern "C" {
extern void *data_020cbb18;
extern s16 data_02135f44[];
extern u8 data_ov003_02230af4[];

s32 func_020729bc(void *g, u32 a);
s32 func_020946f0(s32 a, u32 b);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200eb58(Obj *o, u32 a, u32 b);
s32 func_0203e47c(Obj *o, Sec *s);
s32 func_0203e488(Obj *o, Sec *s);
s32 func_020a710c(Sec *s, void *d);
s32 func_0203d7f8();
s32 func_0203d820();
s32 func_02007c08(Obj *o, s32 a);
s32 func_02008770(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203a844();
s32 func_0203a598();
s32 func_02034d70(u32 a);
s32 func_02034dd0(u32 a, u32 b, u32 c);
s32 func_02034e10(u32 a, u32 b, u32 c, u32 d);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_02045570(P2 *p, s32 a);
s32 func_0203ee38(V3 *a, V3 *b);
s32 func_020902b0(s32 a, V3 *b, s32 c, s32 d);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_01ffb898(V3 *a, Mtx *m, V3 *out);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0200f4c0(Obj *o, s32 a);
s32 func_0200f660(Obj *o);
s32 func_02097520(u32 a);
u16 *func_02098744(s32 a);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010a34(Obj *o, s32 *a);
s32 func_02010a7c(u16 *out, Obj *o);
s32 func_0204ed8c(V3 *v, s32 a, s32 b);
s32 func_ov003_0221cbe4(u32 a, P2 *p, s32 b);
s32 func_ov003_0221cb54(P2 *p);
s32 func_ov003_022135c4(Q *q, s32 a);
s32 func_ov003_02205c28(Obj *o);
s32 func_ov003_0220f314(Obj *o);
s32 func_0200e248(Obj *o, Msg *m);

s32 func_ov003_0220e970(Obj *o);
void func_ov003_0220e9a4(Obj *o);
s32 func_ov003_0220ea4c(Obj *o, s16 a);
s32 func_ov003_0220ea58(Obj *o);
void func_ov003_0220eae8(Rec *r);
s32 func_ov003_0220eaf0(Obj *o, s32 a, s16 b);
s32 func_ov003_0220eb28(Obj *o);
void func_ov003_0220eb48(Obj *o);
void func_ov003_0220eb98(Obj *o);
void func_ov003_0220ecb8(Obj *o);
void func_ov003_0220ed24(Obj *o, s16 a);
s32 func_ov003_0220ed5c(Obj *o, Arg *a);
void func_ov003_0220edc4(u8 *src, u8 *dst);
void func_ov003_0220edcc(u8 *p, u32 v);
void func_ov003_0220edd0(Rec *r, u32 c, Pv p);
s32 func_ov003_0220eddc(Obj *o, u32 a, Pv p, s32 c, s16 e);
void func_ov003_0220ee2c(Rec *r, u32 c, Pv p);
s32 func_ov003_0220ee38(Obj *o);
void func_ov003_0220ee58(Obj *o);
s32 func_ov003_0220eeec(Obj *o);
s32 func_ov003_0220efb0(Obj *o);
s32 func_ov003_0220efd8(Obj *o);
void func_ov003_0220f00c(Obj *o);
s32 func_ov003_0220f010(Obj *o, Arg *a);
void func_ov003_0220f054(Rec *r, u32 a, u32 b, Pv p);
s32 func_ov003_0220f064(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d);
void func_ov003_0220f0b4(Rec *r, u32 a, u32 b, Pv p);
s32 func_ov003_0220f0c4(Obj *o);
s32 func_ov003_0220f10c(Obj *o);
void func_ov003_0220f14c(Obj *o);
}

extern "C" s32 func_ov003_0220e970(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020946f0(0, o->unk_7fc);
        func_0200ec30(o, 0);
    }
}

extern "C" void func_ov003_0220e9a4(Obj *o) {
    Rec *p = &o->unk_7d0;
    switch (p->b0) {
    case 0:
        if (o->unk_128) {
            if (o->unk_128->unk_04) {
                p->b0 = 1;
                o->unk_818 = 12;
            }
        }
        break;
    case 1:
        if (o->unk_128) {
            if (!o->unk_128->unk_04) {
                func_0203e47c(o, o);
                func_0200ec1c(o, 0x11);
                func_0203d7f8();
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_020946f0(0, o->unk_7fc);
                func_0200ec30(o, 0);
                func_0200ce98(o, 3, 1, -1);
                func_0203a844();
            }
        }
        break;
    }
}

extern "C" s32 func_ov003_0220ea4c(Obj *o, s16 a) {
    return func_ov003_0220eaf0(o, 6, a);
}

extern "C" s32 func_ov003_0220ea58(Obj *o) {
    struct Pad { s32 v[2]; Pad() {} ~Pad() {} } pad;
    func_020103b4(o, 0x48, 3, 0);
    func_ov003_0220eae8(&o->unk_7d0);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0203e488(o, o);
        Sec &s = *o;
        func_020a710c(&s, data_ov003_02230af4);
        o->unk_10a = 10;
        o->unk_128->unk_08 = 1;
        func_0203a598();
        func_02034d70(0x12);
        func_02034dd0(0xc, 0, 1);
        func_02034e10(0xd, 0x42, 0x7f, 1);
    }
}

extern "C" s32 func_ov003_0220eaf0(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x4c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220eb28(Obj *o) {
    func_ov003_0220eb98(o);
    func_020109c4(o);
    func_0201071c(o);
    func_ov003_0220eb48(o);
}

extern "C" void func_ov003_0220eb48(Obj *o) {
    if (o->unk_8e == 0) {
        if (func_02056654(o->unk_2cc)) {
            if (!func_020729bc(data_020cbb18, o->unk_7fc) || func_0203d820()) {
                func_ov003_0220eaf0(o, 6, -1);
            }
        }
    }
}

extern "C" void func_ov003_0220eb98(Obj *o) {
    func_02010914(o);
    if (o->unk_2d4.mid >= 8) {
        if (func_020565e8(o->unk_2cc, 8)) {
            Rec *r = &o->unk_7d0;
            if (r->b2) {
                P2 q;
                s32 y = r->b1;
                s32 x = r->b0;
                q.x = x;
                q.z = y;
                func_02045570(&q, 0);
                func_0200ec1c(o, 0x12);
                r->b2 = 0;
            }
            func_0200ecdc(o, 0x840);
            func_0200ec1c(o, 0);
            func_0200ec30(o, 9);
            Mtx t = o->unk_664;
            V3 pos;
            pos.x = t.v.x;
            pos.y = t.v.y;
            pos.z = t.v.z;
            func_0203ee38(&pos, &pos);
            func_020902b0(0x8c, &pos, 0, 0);
            pos.x = t.v.x;
            pos.y = t.v.y;
            pos.z = t.v.z;
            t.v.x = t.v.y = t.v.z = 0;
            Mtx t2 = t;
            V3 v;
            V3 out;
            v.x = v.y = 0;
            v.z = 0xab8;
            func_01ffb898(&v, &t2, &out);
            pos.x = pos.x + out.x;
            pos.y = pos.y + out.y;
            pos.z = pos.z + out.z;
            func_0203ee38(&pos, &pos);
            func_020902b0(0x8b, &pos, 0, 0);
        }
        func_0200f4c0(o, 0x200);
    }
}

extern "C" void func_ov003_0220ecb8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
    } else {
        Rec *r = &o->unk_7d0;
        if (r->b2) {
            P2 q;
            s32 y = r->b1;
            s32 x = r->b0;
            q.x = x;
            q.z = y;
            func_02045570(&q, 0);
            func_0200ec1c(o, 0x12);
        }
    }
}

extern "C" void func_ov003_0220ed24(Obj *o, s16 a) {
    u8 t;
    func_ov003_0220edc4(o->unk_8ec, &t);
    if (t == 0) {
        func_ov003_0220eddc(o, 0, Pv(0, 0), 6, a);
    }
}

extern "C" s32 func_ov003_0220ed5c(Obj *o, Arg *a) {
    Rec *r = &a->unk_0c;
    u32 c = r->b2;
    func_ov003_0220edd0(&o->unk_7d0, c, Pv(r->b0, r->b1));
    func_ov003_0220edcc(o->unk_8ec, c);
    func_02010358(o, 0x47, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02034dd0(0x12, 0xf, 0);
    }
}

extern "C" s32 func_ov003_0220eddc(Obj *o, u32 a, Pv p, s32 c, s16 e) {
    Msg m;
    m.func_0200e2c0(0x4b, c, e);
    func_ov003_0220ee2c(&m.unk_0c, a, p);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220ee38(Obj *o) {
    func_ov003_0220efb0(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov003_0220ee58(o);
}

extern "C" void func_ov003_0220ee58(Obj *o) {
    u32 b3 = o->unk_7d0.b3;
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (b3) {
            func_02008770(o, o->unk_8e, 6, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
    if (b3 == 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (o->unk_2d4.mid > 8) {
                func_ov003_02205c28(o);
            }
        }
    }
}

extern "C" s32 func_ov003_0220eeec(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 n = func_0200f660(o);
    if (r->b2) {
        n++;
        if (n == 7) {
            func_0200ecdc(o, 0x83e);
        } else if (n == 9) {
            func_0200ecdc(o, 0x83f);
        }
    }
    func_020946f0(n, o->unk_7fc);
    func_0200ec30(o, 9);
    func_0200ecdc(o, 0x83b);
    u32 x = r->b0;
    u32 y = r->b1;
    u16 v;
    V3 pos;
    func_0204ed8c(&pos, r->b0, r->b1);
    v = o->unk_8e + 0x2000;
    func_02090330(2, &pos, &v, 0);
    if (pos.x >= o->unk_5c.x) {
        P2 a;
        a.x = x;
        a.z = y;
        func_ov003_0221cbe4(o->unk_7fc, &a, 5);
    } else {
        P2 b;
        b.x = x;
        b.z = y;
        func_ov003_0221cbe4(o->unk_7fc, &b, 4);
    }
    func_0200ec1c(o, 0x1c);
}

extern "C" s32 func_ov003_0220efb0(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 8)) {
        func_ov003_0220eeec(o);
    }
}

extern "C" s32 func_ov003_0220efd8(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            func_ov003_0220eeec(o);
        }
    }
}

extern "C" s32 func_ov003_0220f010(Obj *o, Arg *a) {
    Rec &r = a->unk_0c;
    u32 c = r.b2;
    u32 d = r.b3;
    func_ov003_0220f054(&o->unk_7d0, c, d, Pv(r.b0, r.b1));
    func_02010358(o, 0x44, 3, 0);
    func_0200ec30(o, 0x1c);
}

extern "C" s32 func_ov003_0220f064(Obj *o, u32 a, u32 b, Pv p, s32 c, s16 d) {
    Msg m;
    m.func_0200e2c0(0x4a, c, d);
    func_ov003_0220f0b4(&m.unk_0c, a, b, p);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220f0c4(Obj *o) {
    func_ov003_0220f314(o);
    func_020109c4(o);
    func_0201071c(o);
    s32 *p = &o->unk_98;
    s32 v = *p;
    if (v < 0) v = -v;
    s32 t = func_02010d50(v, 0) * -1;
    func_02010a34(o, &t);
    func_ov003_0220f10c(o);
}

extern "C" s32 func_ov003_0220f10c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" void func_ov003_0220f14c(Obj *o) {
    s16 ang;
    u16 buf;
    s32 t = -0x333;
    func_02010a34(o, &t);
    Rec *r = &o->unk_7d0;
    s32 n = func_0200f660(o);
    if (r->b2) {
        n++;
        if (n == 7) {
            func_0200ecdc(o, 0x83e);
        } else if (n == 9) {
            func_0200ecdc(o, 0x83f);
        }
    }
    func_020946f0(n, o->unk_7fc);
    func_0200ec30(o, 9);
    if (r->b3) {
        P2 q;
        s32 y = r->b1;
        s32 x = r->b0;
        q.x = x;
        q.z = y;
        func_ov003_0221cb54(&q);
        func_0200ec1c(o, 0x12);
        func_0200ec1c(o, 0x1c);
    }
    switch (o->unk_168) {
    case 0: {
        V3 v;
        V3 *pv = &o->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        ang = o->unk_8e;
        s32 idx = ((u16)ang >> 4) * 2;
        s32 s, dz, c, dx;
        c = data_02135f44[idx];
        s = data_02135f44[idx + 1];
        dz = func_01ffcb0c(s, 0xccd) - func_01ffcb0c(c, -0x800);
        dx = func_01ffcb0c(c, 0xccd) + func_01ffcb0c(s, -0x800);
        v.x += dx;
        v.z += dz;
        v.y += 0xccd;
        ang += 0x2000;
        func_02090330(4, &v, &ang, 0);
        func_0200ecdc(o, 0x83c);
        break;
    }
    case 1:
        func_0200ecdc(o, 0x7df);
        break;
    case 2:
        func_0200ecdc(o, 0x7df);
        if (o->unk_164) {
            func_02010a7c(&buf, o);
            o->unk_164->vfunc_60(&buf);
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
    o->unk_164 = 0;
    o->unk_168 = 0;
}

extern "C" void func_ov003_0220eae8(Rec *r) {
    r->b0 = 0;
}

extern "C" void func_ov003_0220edc4(u8 *src, u8 *dst) {
    *dst = *src;
}

extern "C" void func_ov003_0220edcc(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov003_0220edd0(Rec *r, u32 c, Pv p) {
    r->b2 = c;
    r->b0 = p.x;
    r->b1 = p.z;
}

extern "C" void func_ov003_0220ee2c(Rec *r, u32 c, Pv p) {
    r->b2 = c;
    r->b0 = p.x;
    r->b1 = p.z;
}

extern "C" void func_ov003_0220f00c(Obj *o) {
}

extern "C" void func_ov003_0220f054(Rec *r, u32 a, u32 b, Pv p) {
    r->b2 = a;
    r->b3 = b;
    r->b0 = p.x;
    r->b1 = p.z;
}

extern "C" void func_ov003_0220f0b4(Rec *r, u32 a, u32 b, Pv p) {
    r->b2 = a;
    r->b3 = b;
    r->b0 = p.x;
    r->b1 = p.z;
}
