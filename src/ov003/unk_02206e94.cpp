#include "types.h"

struct Unk_ov003_02206e94_V3 {
    s32 x, y, z;
};

class Unk_ov003_02206e94_Msg {
public:
    Unk_ov003_02206e94_Msg();
    ~Unk_ov003_02206e94_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov003_02206e94_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov003_02206e94_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02206e94_Rec {
    s32 unk_00;
    union {
        s32 unk_04;
        u8 unk_04_b;
    };
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s16 unk_14;
    s32 unk_18;
};

struct Unk_ov003_02206e94_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02206e94_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x230 - 0x9c];
    u8 unk_230[0x2cc - 0x230];
    u8 unk_2cc[8];
    Unk_ov003_02206e94_Bits unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 unk_2e0;
    u8 pad_2e1[0x59c - 0x2e1];
    u8 unk_59c[0x688 - 0x59c];
    s32 unk_688;
    s32 unk_68c;
    s32 unk_690;
    u8 pad_694[0x6dc - 0x694];
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02206e94_Rec unk_7d0;
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x8e4 - 0x800];
    u8 unk_8e4;
    u8 pad_8e5[0x8ec - 0x8e5];
    u8 unk_8ec[4];
    u8 pad_8f0[0xc80 - 0x8f0];
    u16 unk_c80;
};

typedef Unk_ov003_02206e94_Obj Obj;
typedef Unk_ov003_02206e94_V3 V3;
typedef Unk_ov003_02206e94_Msg Msg;
typedef Unk_ov003_02206e94_Rec Rec;

class Unk_ov003_02206fd8_X {
public:
    Unk_ov003_02206fd8_X(V3 *v, s32 a, s32 b);
    ~Unk_ov003_02206fd8_X();
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[0x40 - 0x38];
};

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_02230ad0[];
extern u8 data_ov003_02230ad8[];

void func_020902f8(s32 a);
s32 func_020902d4(s32 a, void *b, s32 c, s32 d);
s32 func_02090330(s32 a, void *b, s32 c, s32 d);
void func_020902b0(s32 a, V3 *b, s32 c, s32 d);
void func_020946f0(s32 a, s32 b);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0200d640(Obj *o);
s32 func_0200d634(Obj *o);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ec54(Obj *o, u32 a, void *b);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200f5b0(Obj *o);
s32 func_0200f594(Obj *o, s32 x, s32 z, s16 a);
s32 func_0200f4c0(Obj *o, u32 a);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02007c08(Obj *o, s32 a);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0205e184(void *p, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_02053f20(void *p);
s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
void func_02010a7c(u16 *a, Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_020b8df0();
void *func_0209750c();
s32 func_02098044(void *p, s32 a);
s32 func_0209801c(void *p, s32 a);
void func_0203ee38(V3 *a, V3 *b);
void func_0204ed8c(V3 *out, u32 a, u32 b);
s32 func_0200e248(Obj *o, Msg *m);

s32 func_ov003_0221950c(s32 a, V3 *v);
s32 func_ov003_02219bf0(s32 a, V3 *v);
void func_ov003_02205c28(Obj *o);

void func_ov003_02206e94(Obj *o, s32 a);
s32 func_ov003_02206edc(Obj *o, s32 a);
void func_ov003_02206f0c(Obj *o, s32 *a);
s32 func_ov003_02206f88(Obj *o, s32 a, s32 b, s32 c);
void func_ov003_02206fc4(Obj *o);
void func_ov003_02206fd8(Obj *o);
s32 func_ov003_022070fc(Obj *o);
void func_ov003_0220714c(Obj *o, s32 a);
s32 func_ov003_022071ec(Obj *o, s32 a);
s32 func_ov003_02207224(Obj *o, u8 *a);
void func_ov003_022072a4(u8 *s, u8 *a, u8 *b);
void func_ov003_022072b0(u8 *p, u8 a, u8 b);
s32 func_ov003_022072b8(Obj *o, s32 *p, s32 b, s32 c);
void func_ov003_022072fc(Obj *o);
void func_ov003_02207324(Obj *o);
void func_ov003_0220739c(Obj *o);
s32 func_ov003_022073c8(Obj *o, s32 a);
s32 func_ov003_022073d4(Obj *o);
s32 func_ov003_02207404(Obj *o, s32 a, s32 b);
void func_ov003_0220743c(Obj *o);
void func_ov003_02207464(Obj *o);
void func_ov003_02207550(Obj *o);
void func_ov003_022075a4(Obj *o);
s32 func_ov003_022076e8(Obj *o, s32 a);
void func_ov003_022076f4(Obj *o);
s32 func_ov003_02207790(Obj *o, s32 a, s32 b);
}

extern "C" void func_ov003_02206e94(Obj *o, s32 a) {
    if (o->unk_7d0.unk_18 != -1) {
        func_020902f8(o->unk_7d0.unk_18);
    }
    if (a != 0x75) {
        V3 v;
        V3 *pv = &o->unk_5c;
        v.x = o->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        func_ov003_0221950c(o->unk_7fc, &v);
    }
}

extern "C" s32 func_ov003_02206edc(Obj *o, s32 a) {
    s32 st = o->unk_7ec;
    if (st != 0x73) {
        if (st == 0x74) {
            o->unk_c80 = a;
        } else {
            func_ov003_02206f88(o, -1, 6, a);
        }
    }
}

extern "C" void func_ov003_02206f0c(Obj *o, s32 *a) {
    s32 t;
    func_020103b4(o, 0x92, 3, 0);
    o->unk_2dc = 0x800;
    t = a[3];
    Rec *r = &o->unk_7d0;
    r->unk_04 = 0x800;
    r->unk_08 = 0x800;
    r->unk_0c = 0;
    r->unk_10 = 0;
    o->unk_7d0.unk_00 = func_0200d640(o);
    r->unk_14 = func_0200d634(o);
    r->unk_18 = t;
    func_0200ec1c(o, 9);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0x11, 3, 0);
        func_0205e184(o->unk_59c, 0x800);
    }
}

extern "C" s32 func_ov003_02206f88(Obj *o, s32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x74, b, c);
    m.unk_0c.x = a;
    s32 r = func_0200e248(o, &m);
    return r;
}

namespace ns_02206fc4 {
extern "C" s32 func_ov003_02206fd8(Obj *o);
}

extern "C" void func_ov003_02206fc4(Obj *o) {
    func_ov003_022070fc(o);
    ns_02206fc4::func_ov003_02206fd8(o);
}

static inline BOOL Eq2(V3 *p, volatile V3 *v) {
    s32 z = p->z;
    s32 x = p->x;
    return x == v->x && z == v->z;
}

extern "C" void func_ov003_02206fd8(Obj *o) {
    Rec *r = &o->unk_7d0;
    if (o->unk_700 == 0x90) {
        volatile V3 v;
        s32 z = r->unk_04;
        s32 x = r->unk_00;
        v.x = x;
        v.y = 0;
        v.z = z;
        func_0200f594(o, x, z, o->unk_8e);
        V3 &pv = o->unk_5c;
        s32 pz = pv.z;
        s32 px = pv.x;
        if (px == v.x && pz == v.z) {
            o->unk_2e0 = 1;
        } else {
            goto end;
        }
    }
    if (func_02056654(o->unk_2cc) != 0) {
        if (o->unk_700 == 0x91) {
            func_ov003_02206f88(o, r->unk_08, 6, -1);
            func_0200ec30(o, 9);
        } else {
            struct { V3 pad; V3 b; } l;
            func_02010358(o, 0x91, 3, 0);
            V3 *pv = &o->unk_5c;
            l.b.x = o->unk_5c.x;
            l.b.y = pv->y;
            l.b.z = pv->z;
            Unk_ov003_02206fd8_X x(&l.b, 0, 0);
            V3 c;
            if (x.unk_34 == 0x13) {
                func_020902b0(0x8f, &l.b, 0, 0);
            } else {
                func_020902b0(0x8e, &l.b, 0, 0);
            }
            func_0200ecdc(o, 0x7e8);
            func_0200ec30(o, 9);
            c.x = l.b.x;
            c.y = l.b.y;
            c.z = l.b.z;
            func_ov003_02219bf0(o->unk_7fc, &c);
            func_0200ec1c(o, 0x12);
            if (func_0200f5b0(o) == 4) {
                func_0205e1a0(o->unk_59c, 0x10, 3, 1);
            }
        }
    }
end:;
}

extern "C" s32 func_ov003_022070fc(Obj *o) {
    func_02010914(o);
    s32 *p = (s32 *)&o->unk_7d0.unk_08;
    s32 z = 0;
    if (*p == -1) {
        *p = func_02090330(0x4c, o->unk_6dc, z, z);
    } else {
        func_020902d4(*p, o->unk_6dc, z, z);
    }
    func_0200ec54(o, 0x8a, &o->unk_5c);
}

struct Unk_ov003_0220714c_T {
    s32 x, y, z;
    Unk_ov003_0220714c_T() {}
    ~Unk_ov003_0220714c_T() {}
};

extern "C" void func_ov003_0220714c(Obj *o, s32 a) {
    Rec *r = &o->unk_7d0;
    Unk_ov003_0220714c_T v;
    s32 z = r->unk_04;
    s32 y = o->unk_5c.y;
    s32 x = r->unk_00;
    v.x = x;
    v.y = y;
    v.z = z;
    V3 *pw = &o->unk_5c;
    pw->x = v.x;
    pw->y = v.y;
    pw->z = v.z;
    if (func_0200ec44(o, 0x12) != 0) {
        if (a == 0x74 || a == 0x75) {
            V3 t;
            V3 *pv = &o->unk_5c;
            t.x = o->unk_5c.x;
            t.y = pv->y;
            t.z = pv->z;
            func_ov003_02219bf0(o->unk_7fc, &t);
        }
        func_0200ec1c(o, 0x12);
    }
    if (a != 0x74 && a != 0x75) {
        V3 t;
        V3 *pv = &o->unk_5c;
        t.x = o->unk_5c.x;
        t.y = pv->y;
        t.z = pv->z;
        func_ov003_0221950c(o->unk_7fc, &t);
    }
    if (a != 0x74) {
        s32 h = r->unk_08;
        if (h != -1) {
            func_020902f8(h);
        }
    }
}

struct Unk_ov003_022072b8_P {
    u8 a, b;
};

extern "C" s32 func_ov003_022071ec(Obj *o, s32 a) {
    u8 b[2];
    s32 p[2];
    func_ov003_022072a4(o->unk_8ec, &b[0], &b[1]);
    p[0] = b[0];
    p[1] = b[1];
    return func_ov003_022072b8(o, p, 6, a);
}

extern "C" s32 func_ov003_02207224(Obj *o, u8 *a) {
    Unk_ov003_022072b8_P *q = (Unk_ov003_022072b8_P *)(a + 0xc);
    V3 v;
    Rec *r = &o->unk_7d0;
    s32 c0 = q->a;
    s32 c1 = q->b;
    func_0204ed8c(&v, c0, c1);
    o->unk_7d0.unk_00 = v.x;
    r->unk_04 = v.z;
    r->unk_08 = -1;
    func_020103b4(o, 0x90, 3, 0);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0xf, 3, 0);
    }
    func_ov003_022072b0(o->unk_8ec, c0, c1);
    func_0200ecdc(o, 0x7ee);
}

extern "C" void func_ov003_022072a4(u8 *s, u8 *a, u8 *b) {
    *a = s[0];
    *b = s[1];
}

extern "C" void func_ov003_022072b0(u8 *p, u8 a, u8 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 func_ov003_022072b8(Obj *o, s32 *p, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x73, b, c);
    Unk_ov003_022072b8_P &q = *(Unk_ov003_022072b8_P *)&m.unk_0c;
    q.a = p[0];
    q.b = p[1];
    s32 r = func_0200e248(o, &m);
    return r;
}

namespace ns_022072fc {
extern "C" s32 func_ov003_02207324(Obj *o);
}

extern "C" void func_ov003_022072fc(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    func_ov003_0220739c(o);
    ns_022072fc::func_ov003_02207324(o);
}

extern "C" void func_ov003_02207324(Obj *o) {
    func_0200f4c0(o, 0x59a);
    if (func_02056654(o->unk_2cc) != 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
        if (o->unk_2d4.mid >= 0x1a) {
            func_ov003_02205c28(o);
        }
    }
}

extern "C" void func_ov003_0220739c(Obj *o) {
    if (o->unk_98 != 0) {
        s32 t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
    }
}

extern "C" s32 func_ov003_022073c8(Obj *o, s32 a) {
    return func_ov003_02207404(o, 6, a);
}

extern "C" s32 func_ov003_022073d4(Obj *o) {
    func_02010358(o, 0x9c, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
        func_020b8df0();
    }
}

extern "C" s32 func_ov003_02207404(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x72, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

namespace ns_0220743c {
extern "C" s32 func_ov003_02207550(Obj *o);
}

extern "C" void func_ov003_0220743c(Obj *o) {
    func_ov003_02207464(o);
    func_ov003_022075a4(o);
    func_020109c4(o);
    func_0201071c(o);
    ns_0220743c::func_ov003_02207550(o);
}

extern "C" void func_ov003_02207464(Obj *o) {
    Rec *r = &o->unk_7d0;
    if (r->unk_04_b == 0) {
        s32 t = func_02010d5c(o->unk_98, 0, 0x7b);
        func_02010a34(o, &t);
        if (o->unk_98 == 0) {
            if (func_02056654(o->unk_2cc) != 0) {
                switch (r->unk_00) {
                case 4:
                    func_0205e1a0(o->unk_59c, 8, 3, 0);
                    func_02010358(o, 0x8e, 3, 0);
                    break;
                case 3:
                    func_0205e1a0(o->unk_59c, 0x1e, 3, 0);
                    func_02010358(o, 0x8e, 3, 0);
                    break;
                case 10:
                    func_02010358(o, 0x8e, 3, 0);
                    break;
                default:
                    func_02010358(o, 0x8c, 3, 0);
                    break;
                }
                r->unk_04_b = 1;
                if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
                    void *p = func_0209750c();
                    if (p != 0) {
                        if (func_02098044(p, 0x17) != 0) {
                            func_0209801c(p, 0x1a);
                        }
                    }
                }
            }
        }
    }
}

extern "C" void func_ov003_02207550(Obj *o) {
    if (o->unk_7d0.unk_04_b == 1) {
        if (func_02056654(o->unk_2cc) != 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            o->unk_8e4 = 0x3c;
        }
    }
}

static inline BOOL Range(volatile u16 *p, u32 lo, u32 hi) {
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

extern "C" void func_ov003_022075a4(Obj *o) {
    u16 hh[2];
    V3 vb;
    V3 va;
    V3 out1;
    V3 out2;
    func_02053f20(o->unk_230);
    hh[0] = o->unk_8e;
    if (o->unk_7d0.unk_04_b == 0) {
        if (func_020565e8(o->unk_2cc, 0xa) != 0) {
            func_02010a7c(&hh[1], o);
            BOOL ok = FALSE;
            u32 ra = ((volatile u16 *)hh)[1];
            u32 rb = ((volatile u16 *)hh)[1];
            if (rb < 0x137c || ra > 0x137c) {
            } else {
                ok = TRUE;
            }
            if (ok) {
                s32 t = o->unk_688;
                if (t == 0 && o->unk_68c == 0 && o->unk_690 == 0) {
                    V3 *pv = &o->unk_5c;
                    va.x = o->unk_5c.x;
                    va.y = pv->y;
                    va.z = pv->z;
                } else {
                    va.x = t;
                    va.y = o->unk_68c;
                    va.z = o->unk_690;
                    func_0203ee38(&va, &va);
                }
                func_02090330(0x32, &va, 0, 0);
                func_020946f0(0, o->unk_7fc);
            }
        }
        if (func_020565e8(o->unk_2cc, 7) != 0) {
            func_0200f3ec(&out1, o, &o->unk_5c, &hh[0], (u32)data_ov003_02230ad0);
            vb.x = out1.x;
            vb.y = out1.y;
            vb.z = out1.z;
            func_02090330(0x39, &vb, (s32)&hh[0], 0);
        }
        if (func_020565e8(o->unk_2cc, 9) != 0) {
            func_0200f3ec(&out2, o, &o->unk_5c, &hh[0], (u32)data_ov003_02230ad8);
            vb.x = out2.x;
            vb.y = out2.y;
            vb.z = out2.z;
            func_02090330(0x37, &vb, (s32)&hh[0], 0);
        }
    }
}

extern "C" s32 func_ov003_022076e8(Obj *o, s32 a) {
    return func_ov003_02207790(o, 6, a);
}

extern "C" void func_ov003_022076f4(Obj *o) {
    Rec *r = &o->unk_7d0;
    s32 st = func_0200f5b0(o);
    o->unk_7d0.unk_00 = st;
    switch (st) {
    case 4:
        func_0205e1a0(o->unk_59c, 7, 2, 1);
        func_02010358(o, 0x8d, 2, 0);
        break;
    case 3:
        func_0205e1a0(o->unk_59c, 0x1d, 2, 1);
        func_02010358(o, 0x8d, 2, 0);
        break;
    case 10:
        func_02010358(o, 0x8d, 2, 0);
        break;
    default:
        func_02010358(o, 0x8b, 2, 0);
        break;
    }
    r->unk_04_b = 0;
    func_0200ec30(o, 9);
    func_0200ecdc(o, 0x7db);
}

extern "C" s32 func_ov003_02207790(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x71, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}
