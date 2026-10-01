#include "types.h"

struct Unk_ov004_02220314_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02220314_Sec {
    u8 pad_00[4];
};

struct Unk_ov004_02220314_V3c {
    s32 x, y, z;
    Unk_ov004_02220314_V3c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov004_02220314_Rec {
    s32 unk_00;
    s16 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
};

struct Unk_ov004_02220314_Pay {
    s32 unk_00;
    s16 unk_04;
};

struct Unk_ov004_02220314_Pay2 {
    s32 unk_00;
    u8 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov004_02220314_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02220314_Ptr {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov004_02220314_Msgp {
    u8 pad_00[0xc];
    Unk_ov004_02220314_Pay unk_0c;
};

struct Unk_ov004_02220314_Msgp2 {
    u8 pad_00[0xc];
    Unk_ov004_02220314_Pay2 unk_0c;
};

class Unk_ov004_02220314_Msg {
public:
    Unk_ov004_02220314_Msg();
    ~Unk_ov004_02220314_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov004_02220314_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02220314_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02220314_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x10a - 0x90];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_ov004_02220314_Ptr *unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u32 unk_2cc;
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[4];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02220314_Rec unk_7d0;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x81c - 0x804];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8e7 - 0x820];
    u8 unk_8e7;
    u8 pad_8e8[4];
    u8 unk_8ec[4];
};

static inline BOOL Unk_ov004_02220314_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

typedef Unk_ov004_02220314_Obj Obj;
typedef Unk_ov004_02220314_V3 V3;
typedef Unk_ov004_02220314_Rec Rec;
typedef Unk_ov004_02220314_Msg Msg;
typedef Unk_ov004_02220314_Sec Sec;
typedef Unk_ov004_02220314_Bits Bits;

extern "C" {
extern void *data_020cbb18;
extern u8 data_021c3cc0;
extern u8 data_ov004_0224d4c0[];

s32 func_020729bc(void *g, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0203e488(Obj *o, Sec *s);
void func_0203e47c(Obj *o, Sec *s);
void func_020a710c(Sec *s, void *n);
s32 func_02007c08(Obj *o, s32 a);
s32 func_02007c50(Obj *o, s32 a);
void func_020093f4(Obj *o, V3 *v, u32 a, u32 b, s32 c);
s32 func_0209c60c(void);
s32 func_0209c614(s32 a);
s32 func_0209c874(s32 p);
s32 func_0209c86c(s32 p);
V3 *func_0209c864(s32 p);
s32 func_0209c7a4(s32 a);
s32 func_020b4934(void);
void func_020b4bbc(s32 a, s32 b);
void func_020b4aec(s32 a, s32 b, V3 *v, V3 *w);
s32 func_020b4b68(s32 a, s32 b, s32 *c, s16 *d);
s32 func_020b50e8(void);
s32 func_02063c18(s32 a);
s32 func_020565e8(void *p, u32 a);
s32 func_02056654(void *p);
void func_0200bd60(Obj *o, u32 a, u32 b, s32 c);
void func_02057278(u16 *p);
void func_02057378(Obj *o);
void func_0205668c(void *p, u32 a, u32 b, u32 c, u32 d);
s32 func_020573b4(void);
void func_020573cc(s32 a, Obj *o);
void func_02057418(void *p, s32 a, u32 b, s32 c, Obj *o, s32 d);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
void func_0200f32c(Obj *o);
void func_0200f258(Obj *o);
void func_020e9960(V3 *o, V3 *a, V3 *b);
s32 func_020e9688(V3 *v);
s32 func_020e9650(V3 *a, V3 *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a);
void func_020323b0(void *p);
void func_0203239c(void *p);
void func_020309d4(void *a, V3 *b, V3 *c, s32 d, u32 e, Obj *f, u32 g);
s32 func_02030814(u32 a);
void func_ov004_02233cfc(V3 *p, s32 a);
void func_ov004_0221ec34(Obj *o, u32 a, u32 b);
void func_ov004_0222015c(Obj *o, s32 a, s32 b);
void func_ov004_02220c78(void *p, u8 *o);
void func_ov004_02220c80(void *p, u32 a);
void func_ov004_02220c84(void *p, u32 a);
void func_ov004_02220c88(Obj *o, u32 a, u32 b, s32 c);

s32 func_ov004_02220314(Obj *o, s32 a);
void func_ov004_02220320(Obj *o);
s32 func_ov004_02220368(Obj *o, s32 a, s32 b);
void func_ov004_022203a0(Obj *o);
void func_ov004_022203c8(Obj *o);
void func_ov004_022205bc(Obj *o);
void func_ov004_02220678(Obj *o);
void func_ov004_02220728(Obj *o);
void func_ov004_02220744(Obj *o);
void func_ov004_02220748(Obj *o, Unk_ov004_02220314_Msgp *m);
void func_ov004_02220844(Rec *r, s32 a, s32 b, s32 c, s32 d, bool e);
s32 func_ov004_0222085c(Obj *o, s32 a, s32 b);
void func_ov004_022208c8(void *p, s32 a, s16 b);
void func_ov004_022208d0(Obj *o);
void func_ov004_022208ec(Obj *o);
void func_ov004_02220954(Obj *o);
void func_ov004_02220958(Obj *o);
s32 func_ov004_022209ac(Obj *o, s32 a, s32 b);
void func_ov004_022209e4(Obj *o);
void func_ov004_02220a00(Obj *o);
void func_ov004_02220a40(Obj *o);
void func_ov004_02220a74(Obj *o);
void func_ov004_02220a78(Obj *o, Unk_ov004_02220314_Msgp2 *m);
s32 func_ov004_02220ac8(Obj *o, u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s16 g);
void func_ov004_02220b2c(void *p, s32 a, u32 b, s32 c, s32 d);
void func_ov004_02220b38(Obj *o);
void func_ov004_02220b54(Obj *o);
void func_ov004_02220ba8(Obj *o, s32 a);
void func_ov004_02220bd4(Obj *o, Unk_ov004_02220314_Msgp *m);
}

extern "C" s32 func_ov004_02220314(Obj *o, s32 a) {
    return func_ov004_02220368(o, 9, a);
}

extern "C" void func_ov004_02220320(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (o->unk_700 != 0x3e) {
            func_020103b4(o, 0x3e, 3, 0);
        }
    } else {
        func_020103b4(o, 0, 3, 3);
    }
}

extern "C" s32 func_ov004_02220368(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x41, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022203a0(Obj *o) {
    func_ov004_02220728(o);
    func_ov004_02220678(o);
    func_ov004_022205bc(o);
    func_0201071c(o);
    func_ov004_022203c8(o);
}

extern "C" void func_ov004_022203c8(Obj *o) {
    Rec *r = &o->unk_7d0;
    u8 *st = &r->unk_10;
    if (*st == 0) {
        V3 *p = &o->unk_5c;
        if (p->x == r->unk_08 && p->z == r->unk_0c && r->unk_04 == o->unk_8e) {
            if (r->unk_00 == 1) {
                func_ov004_02220368(o, 6, -1);
            } else {
                func_ov004_0222015c(o, 6, -1);
            }
        }
        s32 t = o->unk_700;
        if (t == 1) return;
        if (t == 0x3e) {
            if (((Bits *)&o->unk_2d4)->mid >= 6) {
                func_ov004_0221ec34(o, 0, 6);
            }
        }
        if (Unk_ov004_02220314_IsZero(data_021c3cc0)) return;
        if (((Bits *)&o->unk_2d4)->mid >= 5) {
            func_020b4bbc(func_020b4934(), o->unk_800);
        }
    } else {
        s32 p = func_0209c60c();
        switch (*st) {
        case 1:
            if (!func_0209c614(o->unk_800)) break;
            *st = *st + 1;
        case 2: {
            s32 c = func_0209c874(p);
            switch (c) {
            case 0:
                break;
            case 2:
                if (func_0209c86c(p) == 0) {
                    func_020b4bbc(func_020b4934(), o->unk_800);
                } else {
                    *st = 0;
                    func_02010358(o, 0x3e, 3, 0);
                }
                break;
            case 1: {
                Sec *s = (Sec *)o;
                if (o) s = (Sec *)((u8 *)o + 0xec);
                func_0203e488(o, s);
                func_0200ec30(o, 0x11);
                func_020a710c((Sec *)((u8 *)o + 0xec), data_ov004_0224d4c0);
                o->unk_10a = 0x15;
                o->unk_128->unk_08 = 1;
                *st = *st + 1;
                break;
            }
            }
            break;
        }
        case 3: {
            Unk_ov004_02220314_Ptr *q = o->unk_128;
            if (q != 0) {
                if (q->unk_04 != 0) {
                    *st = *st + 1;
                }
            }
            break;
        }
        case 4: {
            Unk_ov004_02220314_Ptr *q = o->unk_128;
            if (q != 0) {
                if (q->unk_04 == 0) {
                    struct { u32 pad; V3 a; V3 b; } l;
                    V3 *v = func_0209c864(p);
                    l.a.x = v->x;
                    l.a.y = v->y;
                    l.a.z = v->z;
                    Sec *s = (Sec *)o;
                    if (o) s = (Sec *)((u8 *)o + 0xec);
                    func_0203e47c(o, s);
                    func_0200ec1c(o, 0x11);
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    l.b.x = l.a.x;
                    l.b.y = l.a.y;
                    l.b.z = l.a.z;
                    func_020093f4(o, &l.b, 0x333, 5, -1);
                }
            }
            break;
        }
        }
    }
}

extern "C" void func_ov004_022205bc(Obj *o) {
    V3 *p = &o->unk_5c;
    u8 loc[0x30];
    func_020323b0(loc);
    s32 ang = o->unk_8e;
    void *sel;
    if (func_02007c50(o, o->unk_7ec) == 0) {
        sel = loc;
    } else {
        sel = (u8 *)o + 0x7a0;
    }
    func_020309d4(sel, p, (V3 *)((u8 *)o + 0x68), ang, 0xfd7, o, 0xf);
    func_0203239c(loc);
    p->y = func_02030814(0);
    Rec *r = &o->unk_7d0;
    s32 m = r->unk_00;
    if ((u32)(m - 1) <= 1) {
        Unk_ov004_02220314_V3c v(r->unk_08, p->y, r->unk_0c);
        if (func_020e9650((V3 *)&v, p) < 0x1000) {
            s32 d = func_01ffc5a4(0x1000 - func_020e9650((V3 *)&v, p)) * 6;
            if (m == 1) {
                p->y = p->y + (d >> 5);
            } else {
                p->y = p->y - (d >> 5);
            }
        }
    }
}

extern "C" void func_ov004_02220678(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 1) {
        V3 v;
        func_020e9960(&v, &o->unk_5c, (V3 *)((u8 *)o + 0x68));
        s32 t = func_01ffcb0c(func_020e9688(&v), 0x3ae1) << 2;
        if (t <= (s32)o->unk_2d0) {
            o->unk_2dc = t;
        }
        func_0200f32c(o);
        if (t == 0) {
            func_020103b4(o, 0, 3, 0);
        }
    } else if (o->unk_700 != 0) {
        if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xb) || func_020565e8(&o->unk_2cc, 0x10)) {
            func_0200f258(o);
        }
    }
}

extern "C" void func_ov004_02220728(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->unk_08, r->unk_0c, r->unk_04);
}

extern "C" void func_ov004_02220744(Obj *o) {
}

extern "C" void func_ov004_02220748(Obj *o, Unk_ov004_02220314_Msgp *m) {
    func_0200ec30(o, 3);
    Unk_ov004_02220314_Pay *pay = &m->unk_0c;
    Rec *r = &o->unk_7d0;
    V3 v;
    func_020b4aec(func_020b4934(), o->unk_800, &v, &o->unk_5c);
    s32 mode = pay->unk_00;
    s32 ang = pay->unk_04;
    if (mode == 2) {
        switch (func_02063c18(ang)) {
        case 2:
            v.z += 0x1000;
            break;
        case 0:
            v.z -= 0x1000;
            break;
        case 3:
            v.x += 0x1000;
            break;
        case 1:
            v.x -= 0x1000;
            break;
        }
    } else if (mode == 0) {
        ang = -0x8000;
        v.x = o->unk_5c.x;
        v.z = o->unk_5c.z;
    }
    bool flag = 0;
    if (func_0209c7a4(o->unk_800)) {
        flag = 1;
    }
    func_ov004_02220844(r, mode, ang, v.x, v.z, flag);
    if (flag == 0) {
        if (mode == 1) {
            func_02010358(o, 0x3e, 3, 0);
        } else {
            func_02010358(o, 0x3f, 3, 0);
        }
    } else {
        func_0200ec30(o, 0x18);
        func_02010358(o, 1, 3, 0);
    }
}

extern "C" void func_ov004_02220844(Rec *r, s32 a, s32 b, s32 c, s32 d, bool e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0c = d;
    r->unk_10 = e;
}

extern "C" s32 func_ov004_0222085c(Obj *o, s32 a, s32 b) {
    s32 h = o->unk_800;
    if (h != -1) {
        s16 x;
        s32 y;
        if (func_020b4b68(func_020b4934(), h, &y, &x) == 0) {
            return 0;
        }
        Msg m;
        m.func_0200e2c0(0x40, a, b);
        func_ov004_022208c8(&m.unk_0c, y, x);
        s32 r = func_0200e248(o, &m);
        return r;
    }
    return 0;
}

extern "C" void func_ov004_022208c8(void *p, s32 a, s16 b) {
    *(s32 *)p = a;
    *(s16 *)((u8 *)p + 4) = b;
}

extern "C" void func_ov004_022208d0(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov004_022208ec(o);
}

extern "C" void func_ov004_022208ec(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200bd60(o, 3, 5, -1);
        u16 v;
        func_02057278(&v);
        if (v == 0x1379) {
            o->unk_8e7 = 4;
        }
        func_02057378(o);
    }
}

extern "C" void func_ov004_02220954(Obj *o) {
}

extern "C" void func_ov004_02220958(Obj *o) {
    func_02010358(o, 0x2e, 3, 0);
    u32 mid = ((Bits *)&o->unk_2d0)->mid;
    func_0205668c(&o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    func_020573cc(func_020573b4(), o);
    func_0200ecdc(o, 0x52);
}

extern "C" s32 func_ov004_022209ac(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x37, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022209e4(Obj *o) {
    func_ov004_02220a40(o);
    func_0201071c(o);
    func_ov004_02220a00(o);
}

extern "C" void func_ov004_02220a00(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200bd60(o, 3, 5, -1);
    }
}

extern "C" void func_ov004_02220a40(Obj *o) {
    if (func_020565e8(&o->unk_2cc, 8)) {
        if (func_020b50e8() == 9) {
            func_0200ecdc(o, 0x63);
        }
    }
    func_02010914(o);
}

extern "C" void func_ov004_02220a74(Obj *o) {
}

extern "C" void func_ov004_02220a78(Obj *o, Unk_ov004_02220314_Msgp2 *m) {
    Unk_ov004_02220314_Pay2 *p = &m->unk_0c;
    func_02057418(&o->unk_81c, m->unk_0c.unk_00, p->unk_04, p->unk_08, o, p->unk_0c);
    func_02010358(o, 0x2e, 3, 0);
    func_020573cc(1, o);
    if (func_020b50e8() == 9) {
        func_0200ecdc(o, 0x4f);
    }
}

extern "C" s32 func_ov004_02220ac8(Obj *o, u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s16 g) {
    Msg m;
    m.func_0200e2c0(0x36, f, g);
    u16 *p = &o->unk_81e;
    *p = *a;
    o->unk_81c = *p;
    func_ov004_02220b2c(&m.unk_0c, b, c, d, e);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02220b2c(void *p, s32 a, u32 b, s32 c, s32 d) {
    *(s32 *)p = a;
    *((u8 *)p + 4) = b;
    *(s32 *)((u8 *)p + 8) = c;
    *(s32 *)((u8 *)p + 0xc) = d;
}

extern "C" void func_ov004_02220b38(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov004_02220b54(o);
}

extern "C" void func_ov004_02220b54(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_020103b4(o, 0, 3, 3);
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov004_02220ba8(Obj *o, s32 a) {
    u8 b;
    func_ov004_02220c78(&o->unk_8ec, &b);
    func_ov004_02220c88(o, b, 6, a);
}

extern "C" void func_ov004_02220bd4(Obj *o, Unk_ov004_02220314_Msgp *m) {
    s32 t = m->unk_0c.unk_00;
    s32 k;
    func_ov004_02220c84(&o->unk_7d0, t);
    func_ov004_02220c80(&o->unk_8ec, (u8)t);
    switch (m->unk_0c.unk_00) {
    case 0:
        k = 0x38;
        break;
    case 1:
        k = 0x39;
        break;
    case 2:
        k = 0x3a;
        break;
    }
    func_02010358(o, k, 3, 0);
    u32 mid = ((Bits *)&o->unk_2d0)->mid;
    func_0205668c(&o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        func_ov004_02233cfc(&o->unk_5c, o->unk_8e);
    }
}
