#include "types.h"

struct Unk_ov003_022077c8_V3 {
    s32 x, y, z;
};

struct Unk_ov003_022077c8_Pair {
    s32 a, b;
};

struct Unk_ov003_022077c8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    Unk_ov003_022077c8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov003_022077c8_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_022077c8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u32 unk_2cc;
    Unk_ov003_022077c8_Bits unk_2d0;
    Unk_ov003_022077c8_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x6dc - 0x59c];
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    s32 unk_7d0;
    s32 unk_7d4;
    s32 unk_7d8;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[0x10];
};

struct Unk_ov003_022077c8_Rec {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
    s32 unk_08;
};

typedef Unk_ov003_022077c8_Obj Obj;
typedef Unk_ov003_022077c8_V3 V3;
typedef Unk_ov003_022077c8_Pair Pair;
typedef Unk_0200e2c0 Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 *data_021c1b3c;
extern u8 data_021c3cc0;

void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_02010a58(Obj *o, s16 *a);
void func_02010a7c(u16 *out, Obj *o);
void func_02010d98(void *out, s32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200f4c0(Obj *o, s32 a);
void func_0200ed9c(Obj *o);
void func_0200f258(Obj *o);
void func_0200f32c(Obj *o);
s32 func_0200eee4(Obj *o, Pair *p);
s32 func_0200e248(Obj *o, Msg *m);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
s32 func_02008770(Obj *o, s16 v, u32 a, u32 b);
s32 func_020565e8(void *a, s32 b);
s32 func_02056654(void *a);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_0205e1a0(void *a, u32 b, u32 c, u32 d);
void func_020351bc(void *a);
void func_02035214(void *a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_0200402c(s32 a);
s32 func_0203d76c();
void func_0203da7c();
s32 func_020729bc(void *g, u32 a);
s32 func_0204b25c(u16 *p);
s32 func_0204b2d4(u16 *p);
void func_0204ee10(s32 *x, s32 *y, V3 *v);
s32 func_0204da0c();
s32 func_0204d700(s32 o, V3 *v, s32 *a, s32 *b);
s32 func_0204d684(s32 o, V3 *v, s32 *a, s32 *b);
s32 func_020b4934();
void func_020b4f18(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
s32 func_020902d4(s32 h, void *a, void *b, s32 c);
void func_020769dc(void *p, s32 *out, s32 *x, s32 *y, s32 *z);
void func_02076a04(void *p, s32 a, s32 x, s32 y, s32 z);
s32 func_020e7b98(s32 a, s32 b);
void func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov003_0221cd34(u32 a, Pair *p, s32 b);
void func_ov003_02208108(void *r, s32 a, s32 b, s32 c, u32 d, u32 e);

void func_ov003_022077e4(Obj *o);
void func_ov003_022078e0(Obj *o);
s32 func_ov003_0220798c(Obj *o, s32 a, s16 b);
void func_ov003_022079e0(Obj *o);
void func_ov003_02207aec(Obj *o);
s32 func_ov003_02207c08(Obj *o, u32 a, s32 b, s16 c);
void func_ov003_02207c58(Obj *o);
s32 func_ov003_02207d08(Obj *o, s32 a, s16 b);
s32 func_ov003_02207d9c(Obj *o, s32 a, s16 b);
void func_ov003_02207e1c(Obj *o);
s32 func_ov003_02207df4(Obj *o);
void func_ov003_02207eb4(void *a, V3 *v);
void func_ov003_02207ecc(void *a, V3 *v);
void func_ov003_02207ee8(V3 *d, V3 v);
s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s16 b);
void func_ov003_02207f40(V3 *d, V3 v);
void func_ov003_02207fbc(Obj *o);
void func_ov003_0220801c(Obj *o);
void func_ov003_02208048(Obj *o);
}

namespace Unk_ov003_022077c8_Impl {
extern "C" s32 func_ov003_022077e4(Obj *o);
}

extern "C" void func_ov003_022077c8(Obj *o) {
    func_ov003_022078e0(o);
    func_0201071c(o);
    Unk_ov003_022077c8_Impl::func_ov003_022077e4(o);
}

extern "C" void func_ov003_022077e4(Obj *o) {
    u8 *r4 = (u8 *)o + 0x7d0;
    u16 v[2];
    s32 r;
    if (func_02056654(&o->unk_2cc)) {
        *r4 = 1;
        func_020103b4(o, 1, 3, 0);
    }
    if (*r4 != 0) {
        if (func_0200f4c0(o, 0x59a)) {
            func_020351bc(data_021c1b3c + 0x2e4);
            func_0200ed9c(o);
            func_0203d76c();
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_02010a7c(v, o);
            if (func_0204b2d4(v)) {
                v[1] = 0xfff1;
                s32 a = func_0204b25c(v);
                if (a == func_0204b25c(&v[1])) {
                    r = 1;
                } else {
                    r = 0;
                }
            } else {
                if (v[0] == 0xfff1) {
                    r = 1;
                } else {
                    r = 0;
                }
            }
            if (r == 0) {
                func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
                func_0200ec30(o, 0);
            }
        }
    }
}

static inline BOOL Unk_ov003_022078e0_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

extern "C" void func_ov003_022078e0(Obj *o) {
    if (Unk_ov003_022078e0_IsTwo(data_021c3cc0)) {
        func_02010914(o);
        if (o->unk_700 == 0x6a) {
            u32 m = o->unk_2d4.mid;
            if (m == 0x13 || m == 0x19 || m == 0x1e) {
                func_0200f258(o);
            }
        } else {
            func_0200f32c(o);
        }
    }
}

extern "C" s32 func_ov003_02207938(Obj *o, s16 a) {
    return func_ov003_0220798c(o, 7, a);
}

extern "C" void func_ov003_02207944(Obj *o) {
    s16 v;
    *(u8 *)&o->unk_7d0 = 0;
    v = -0x8000;
    func_02010a58(o, &v);
    func_0200ec1c(o, 0);
    func_02010358(o, 0x6a, 0, 0);
    func_0200ecdc(o, 0x818);
}

extern "C" s32 func_ov003_0220798c(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x6e, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

namespace Unk_ov003_022079c4_Impl {
extern "C" s32 func_ov003_022079e0(Obj *o);
}

extern "C" void func_ov003_022079c4(Obj *o) {
    func_ov003_02207aec(o);
    func_0201071c(o);
    Unk_ov003_022079c4_Impl::func_ov003_022079e0(o);
}

extern "C" void func_ov003_022079e0(Obj *o) {
    Unk_ov003_022077c8_Rec *r4 = (Unk_ov003_022077c8_Rec *)((u8 *)o + 0x7d0);
    V3 v;
    s32 r6;
    if (func_020565e8(&o->unk_2cc, 0x2e)) {
        if (r4->unk_04 >= 2) {
            func_02034d70(0xc);
            func_02035214(data_021c1b3c + 0x2e4);
        }
    } else if (func_020565e8(&o->unk_2cc, 0x2f)) {
        r6 = func_0204da0c();
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (r4->unk_04 == 0) {
                if (func_0204d700(r6, &v, 0, 0)) {
                    func_020b4f18(func_020b4934(), 0, &o->unk_5c, 0x1b800000, 0, 2, 2);
                }
            } else if (o->unk_7fc == 0) {
                if (func_0204d700(r6, &v, 0, 0)) {
                    v.z += 0x2000;
                    func_020b4f18(func_020b4934(), 0, &v, 0x1b800000, 0, 2, 2);
                }
            } else {
                if (func_0204d684(r6, &v, 0, 0)) {
                    func_020b4f18(func_020b4934(), 0, &v, 0x1b800000, 0, 2, 2);
                }
            }
        }
    }
}

extern "C" void func_ov003_02207aec(Obj *o) {
    s32 *r4;
    func_02010914(o);
    r4 = &o->unk_7d0;
    if (*r4 == -1) {
        *r4 = func_02090330(0x34, o->unk_6dc, 0, 0);
    } else {
        func_020902d4(*r4, o->unk_6dc, 0, 0);
    }
}

extern "C" s32 func_ov003_02207b30(Obj *o, s16 a) {
    return func_ov003_02207c08(o, 0, 7, a);
}

extern "C" void func_ov003_02207b44(Obj *o, Msg *m) {
    u8 b = *(u8 *)&m->unk_0c;
    s32 t = func_0200f5b0(o);
    if (t == 3 || t == 4 || t == 10) {
        func_02010358(o, 0x69, 3, 6);
        if (t == 3) {
            func_0205e1a0(o->unk_59c, 0x14, 3, 1);
        } else if (t == 4) {
            func_0205e1a0(o->unk_59c, 2, 9, 1);
        }
    } else {
        func_02010358(o, 0x68, 3, 6);
    }
    func_0203da7c();
    s32 *r4 = &o->unk_7d0;
    *r4 = func_02090330(0x34, o->unk_6dc, 0, 0);
    ((u8 *)r4)[4] = b;
    if (b >= 2) {
        func_0200402c(0x51);
        if (b == 2) {
            func_0200ecdc(o, 0x839);
        } else {
            func_0200ecdc(o, 0x838);
        }
        func_02034dd0(0xc, 0, 0);
    }
    func_0200ecdc(o, 0x816);
}

extern "C" s32 func_ov003_02207c08(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    m.func_0200e2c0(0x6d, b, c);
    *(u8 *)&m.unk_0c = a;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_02207c44(Obj *o) {
    func_ov003_02207c58(o);
    func_0201071c(o);
}

extern "C" void func_ov003_02207c58(Obj *o) {
    func_02010914(o);
    if (func_02056654(&o->unk_2cc)) {
        func_020103b4(o, 0, 3, 3);
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}

extern "C" s32 func_ov003_02207cb0(Obj *o, s16 a) {
    return func_ov003_02207d08(o, 6, a);
}

extern "C" void func_ov003_02207cbc(Obj *o) {
    if (o->unk_700 != 0x7a) {
        func_02010358(o, 0x7a, 3, 0);
    }
    u32 v = o->unk_2d0.mid;
    func_0205668c(&o->unk_2cc, v, 3, 0x1000, (u16)(v - 1));
}

extern "C" s32 func_ov003_02207d08(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x6c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02207d40(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
}

extern "C" s32 func_ov003_02207d54(Obj *o, s16 a) {
    return func_ov003_02207d9c(o, 6, a);
}

extern "C" void func_ov003_02207d60(Obj *o) {
    if (o->unk_700 != 0x7a) {
        func_02010358(o, 0x38, 3, 0);
    }
    u32 t = o->unk_2d0.mid - 1;
    *(u32 *)&o->unk_2d4 = (t << 16) >> 4;
}

extern "C" s32 func_ov003_02207d9c(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x6b, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_02207dd4(Obj *o) {
    func_ov003_02207e1c(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02207df4(o);
}

extern "C" s32 func_ov003_02207df4(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov003_02207d9c(o, 6, -1);
    }
}

extern "C" void func_ov003_02207e1c(Obj *o) {
    s32 *r2 = &o->unk_7d0;
    func_0200f594(o, r2[0], r2[2], -0x8000);
}

extern "C" void func_ov003_02207e3c(Obj *o, s16 a) {
    V3 v;
    func_ov003_02207eb4(o->unk_8ec, &v);
    func_ov003_02207efc(o, v, 6, a);
}

extern "C" void func_ov003_02207e6c(Obj *o, Msg *m) {
    V3 v;
    func_02010358(o, 0x7a, 3, 0);
    V3 *pv = &m->unk_0c;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    func_ov003_02207ee8((V3 *)&o->unk_7d0, v);
    func_ov003_02207ecc(o->unk_8ec, &v);
}

extern "C" void func_ov003_02207eb4(void *a, V3 *v) {
    s32 t;
    func_020769dc(a, &v->x, &v->y, &v->z, &t);
}

extern "C" void func_ov003_02207ecc(void *a, V3 *v) {
    func_02076a04(a, v->x, v->y, v->z, 0);
}

extern "C" void func_ov003_02207ee8(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 func_ov003_02207efc(Obj *o, V3 v, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x6a, a, b);
    func_ov003_02207f40(&m.unk_0c, v);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02207f40(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void func_ov003_02207f54(Obj *o) {
    Pair p;
    s32 *r4 = &o->unk_7d0;
    func_ov003_02208048(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220801c(o);
        func_0201071c(o);
    } else {
        s32 y = r4[2];
        s32 x = r4[1];
        p.a = x;
        p.b = y;
        if (func_0200eee4(o, &p)) {
            func_ov003_0220801c(o);
        }
        func_0201071c(o);
    }
    func_ov003_02207fbc(o);
}

extern "C" void func_ov003_02207fbc(Obj *o) {
    u8 r4 = *((u8 *)o + 0x7dc);
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (r4 != 0) {
            func_02008770(o, o->unk_8e, 6, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov003_0220801c(Obj *o) {
    s16 v = o->unk_8e;
    func_02010d98(&v, *(s16 *)((u8 *)o + 0x7d2));
    func_02010a58(o, &v);
}

extern "C" void func_ov003_02208048(Obj *o) {
    Pair p;
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 5)) {
        s32 *r0 = &o->unk_7d0;
        s32 y = r0[2];
        s32 x = r0[1];
        p.a = x;
        p.b = y;
        func_ov003_0221cd34(o->unk_7fc, &p, 3);
        func_0200ec1c(o, 0x12);
        func_0200ec30(o, 9);
    }
}

extern "C" void func_ov003_0220809c() {
}

struct Unk_ov003_022080a0_V3 {
    s32 x, y, z;
    Unk_ov003_022080a0_V3() {}
    ~Unk_ov003_022080a0_V3() {}
};

extern "C" void func_ov003_022080a0(Obj *o, Msg *m) {
    s32 o1, o2;
    Unk_ov003_022080a0_V3 d;
    V3 t;
    V3 *r0 = &m->unk_0c;
    u8 r4 = *((u8 *)r0 + 8);
    u8 r6 = *((u8 *)r0 + 9);
    s32 r2 = *(s32 *)((u8 *)r0 + 4);
    s32 y = o->unk_5c.y;
    t.x = m->unk_0c.x;
    t.y = y;
    t.z = r2;
    d.x = t.x - o->unk_5c.x;
    d.z = r2 - o->unk_5c.z;
    s32 r7 = func_020e7b98(d.x, d.z);
    o1 = 0;
    o2 = 0;
    func_0204ee10(&o1, &o2, &t);
    func_ov003_02208108((u8 *)o + 0x7d0, r7, o1, o2, r4, r6);
    func_02010358(o, 0x67, 3, 0);
}
