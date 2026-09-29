#include "types.h"

struct Unk_ov004_0221fa00_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221fa00_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

struct Unk_ov004_0221fa00_Pay {
    u8 unk_00;
    u8 unk_01;
};

class Unk_ov004_0221fa00_Msg {
public:
    Unk_ov004_0221fa00_Msg();
    ~Unk_ov004_0221fa00_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov004_0221fa00_Pay unk_0c;
    u8 pad_0e[0x1c - 0xe];
};

struct Unk_ov004_0221fa00_Msgp {
    u8 pad_00[0xc];
    Unk_ov004_0221fa00_Pay unk_0c;
};

struct Unk_ov004_0221fa00_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0221fa00_Obj {
    u8 pad_00[0x2cc];
    u32 unk_2cc;
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221fa00_Rec unk_7d0;
    u8 pad_7d3[0x7ec - 0x7d3];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x8e5 - 0x804];
    u8 unk_8e5;
};

static inline BOOL Unk_ov004_0221fa00_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

typedef Unk_ov004_0221fa00_Obj Obj;
typedef Unk_ov004_0221fa00_V3 V3;
typedef Unk_ov004_0221fa00_Rec Rec;
typedef Unk_ov004_0221fa00_Msg Msg;
typedef Unk_ov004_0221fa00_Msgp Msgp;
typedef Unk_ov004_0221fa00_Bits Bits;

extern "C" {
extern void *data_020cbb18;
extern u8 data_021c3cc0;
extern u8 data_020e12cc[];

s32 func_020729bc(void *g, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_02010914(Obj *o);
s32 func_02010924(Obj *o);
void func_0201071c(Obj *o);
s32 func_020565e8(void *p, u32 a);
s32 func_02056654(void *p);
void func_0208fc88(u32 a, void *b, u32 c, void *d);
void func_02010cb0(u16 *p, Obj *o);
s32 func_0200fab8(Obj *o, u16 *p, u32 a, u32 b, s32 c);
s32 func_02010d20(Obj *o);
void func_02098824(s32 p, u32 a);
void func_020987fc(s32 p, u32 a);
s32 func_02097520(u32 a);
s32 func_02098840(s32 p);
s32 func_02098814(s32 p);
s32 func_02010c9c(Obj *o);
s32 func_02010c88(Obj *o);
void func_0200ed9c(Obj *o);
s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203d76c(void);
void func_0200f258(Obj *o);
s32 func_020b4934(void);
void func_020b4bbc(s32 a, s32 b);
void func_ov004_0221ec34(Obj *o, u32 a, u32 b);
void func_ov004_0221e938(Obj *o, s32 a, s32 b);

void func_ov004_0221fa00(Obj *o);
void func_ov004_0221fa98(Obj *o);
void func_ov004_0221fadc(Obj *o);
void func_ov004_0221fae0(Obj *o, Msgp *m);
s32 func_ov004_0221fb14(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_0221fb58(Obj *o);
void func_ov004_0221fb6c(Obj *o);
void func_ov004_0221fba4(Obj *o);
void func_ov004_0221fba8(Obj *o, Msgp *m);
s32 func_ov004_0221fbd8(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_0221fc1c(Obj *o);
void func_ov004_0221fc30(Obj *o);
void func_ov004_0221fcb8(Obj *o);
void func_ov004_0221fcbc(Obj *o, Msgp *m);
s32 func_ov004_0221fcec(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_0221fd30(Obj *o);
void func_ov004_0221fd54(Obj *o);
void func_ov004_0221fdb4(Obj *o);
s32 func_ov004_0221fe04(Obj *o, s32 a);
void func_ov004_0221fe10(Obj *o);
s32 func_ov004_0221fe30(Obj *o, s32 a, s32 b);
void func_ov004_0221fe68(Obj *o);
void func_ov004_0221fe8c(Obj *o);
void func_ov004_0221feec(Obj *o);
s32 func_ov004_0221ff3c(Obj *o, s32 a);
void func_ov004_0221ff48(Obj *o);
s32 func_ov004_0221ff68(Obj *o, s32 a, s32 b);
void func_ov004_0221ffa0(Obj *o);
void func_ov004_0221ffec(Obj *o);
void func_ov004_0222002c(Obj *o);
void func_ov004_0222005c(Obj *o, s32 a);
void func_ov004_022200d0(Obj *o);
s32 func_ov004_02220120(Obj *o, s32 a);
void func_ov004_0222012c(Obj *o);
s32 func_ov004_0222015c(Obj *o, s32 a, s32 b);
void func_ov004_02220194(Obj *o);
void func_ov004_022201e0(Obj *o);
void func_ov004_02220220(Obj *o);
void func_ov004_02220250(Obj *o, s32 a);
void func_ov004_022202c4(Obj *o);
}

extern "C" void func_ov004_0221fa00(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 10)) {
        func_0208fc88(0x60, (u8 *)o + 0x6dc, 0, data_020e12cc);
    }
    if (((Bits *)&o->unk_2d4)->mid >= 0xb) {
        Rec *r = &o->unk_7d0;
        if (r->unk_02 == 0) {
            u16 loc[2];
            func_02010cb0(&loc[1], o);
            loc[0] = loc[1];
            if (func_0200fab8(o, loc, r->unk_00, r->unk_01, 0)) {
                s32 p = func_02010d20(o);
                func_02098824(p, r->unk_00);
                func_020987fc(p, r->unk_01);
                r->unk_02 = 1;
            }
        }
    }
}

extern "C" void func_ov004_0221fa98(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 r4 = func_02097520(o->unk_7fc);
        s32 r6 = func_02098840(r4);
        s32 r2 = func_02098814(r4);
        func_ov004_0221e938(o, r6, r2);
    }
}

extern "C" void func_ov004_0221fadc(Obj *o) {
}

extern "C" void func_ov004_0221fae0(Obj *o, Msgp *m) {
    func_02010358(o, 0x6f, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->unk_7d0;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
    r->unk_02 = 0;
}

extern "C" s32 func_ov004_0221fb14(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7c, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221fb58(Obj *o) {
    func_02010914(o);
    func_ov004_0221fb6c(o);
}

extern "C" void func_ov004_0221fb6c(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        Rec *r = &o->unk_7d0;
        func_ov004_0221fb14(o, r->unk_00, r->unk_01, 6, -1);
    }
}

extern "C" void func_ov004_0221fba4(Obj *o) {
}

extern "C" void func_ov004_0221fba8(Obj *o, Msgp *m) {
    func_02010358(o, 0x6e, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->unk_7d0;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
}

extern "C" s32 func_ov004_0221fbd8(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7b, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221fc1c(Obj *o) {
    func_02010914(o);
    func_ov004_0221fc30(o);
}

extern "C" void func_ov004_0221fc30(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        Rec *r = &o->unk_7d0;
        func_ov004_0221fbd8(o, r->unk_00, r->unk_01, 6, -1);
    } else if (((Bits *)&o->unk_2d4)->mid >= 3) {
        if (func_02010c9c(o)) {
            u16 loc[2];
            func_02010cb0(&loc[1], o);
            loc[0] = loc[1];
            s32 t = func_02010c88(o);
            if (func_0200fab8(o, loc, 0, t, 0)) {
                func_02098824(func_02010d20(o), 0);
            }
        }
    }
}

extern "C" void func_ov004_0221fcb8(Obj *o) {
}

extern "C" void func_ov004_0221fcbc(Obj *o, Msgp *m) {
    func_02010358(o, 0x6d, 3, 0);
    Unk_ov004_0221fa00_Pay *p = &m->unk_0c;
    u8 b = p->unk_01;
    Rec *r = &o->unk_7d0;
    r->unk_00 = p->unk_00;
    r->unk_01 = b;
}

extern "C" s32 func_ov004_0221fcec(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x7a, c, *(s16 *)&e);
    Unk_ov004_0221fa00_Pay &q = m.unk_0c;
    q.unk_00 = a;
    q.unk_01 = b;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221fd30(Obj *o) {
    func_ov004_0221fdb4(o);
    func_ov004_0221ec34(o, 0x1f, 6);
    func_0201071c(o);
    func_ov004_0221fd54(o);
}

extern "C" void func_ov004_0221fd54(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_0200ed9c(o);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_0203d76c();
        }
    }
}

extern "C" void func_ov004_0221fdb4(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xc) || func_020565e8(&o->unk_2cc, 0x14)) {
        func_0200f258(o);
    }
}

extern "C" s32 func_ov004_0221fe04(Obj *o, s32 a) {
    return func_ov004_0221fe30(o, 9, a);
}

extern "C" void func_ov004_0221fe10(Obj *o) {
    func_02010358(o, 0x41, 0, 0);
    o->unk_8e5 = 0;
}

extern "C" s32 func_ov004_0221fe30(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x44, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221fe68(Obj *o) {
    func_ov004_0221feec(o);
    func_ov004_0221ec34(o, 0x1f, 6);
    func_0201071c(o);
    func_ov004_0221fe8c(o);
}

extern "C" void func_ov004_0221fe8c(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_0200ed9c(o);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_0203d76c();
        }
    }
}

extern "C" void func_ov004_0221feec(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xc) || func_020565e8(&o->unk_2cc, 0x14)) {
        func_0200f258(o);
    }
}

extern "C" s32 func_ov004_0221ff3c(Obj *o, s32 a) {
    return func_ov004_0221ff68(o, 9, a);
}

extern "C" void func_ov004_0221ff48(Obj *o) {
    func_02010358(o, 0x40, 0, 0);
    o->unk_8e5 = 0;
}

extern "C" s32 func_ov004_0221ff68(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x43, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221ffa0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov004_022200d0(o);
        func_ov004_0222002c(o);
        func_ov004_0221ffec(o);
    } else {
        func_ov004_0222005c(o, func_02010924(o));
        func_ov004_0222002c(o);
    }
}

extern "C" void func_ov004_0221ffec(Obj *o) {
    if (Unk_ov004_0221fa00_IsZero(data_021c3cc0)) return;
    if (((Bits *)&o->unk_2d4)->mid >= 5) {
        func_020b4bbc(func_020b4934(), o->unk_800);
    }
}

extern "C" void func_ov004_0222002c(Obj *o) {
    if (o->unk_700 == 0x3f) {
        if (((Bits *)&o->unk_2d4)->mid >= 9) {
            func_ov004_0221ec34(o, 0, 6);
        }
    }
}

extern "C" void func_ov004_0222005c(Obj *o, s32 a) {
    if (a != 0) {
        if (o->unk_700 != 0x3f) {
            func_02010358(o, 0x3f, 3, 0);
        }
    }
    func_02010914(o);
    if (o->unk_700 == 0x3e) {
        if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xb) || func_020565e8(&o->unk_2cc, 0x10)) {
            func_0200f258(o);
        }
    }
}

extern "C" void func_ov004_022200d0(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xb) || func_020565e8(&o->unk_2cc, 0x10)) {
        func_0200f258(o);
    }
}

extern "C" s32 func_ov004_02220120(Obj *o, s32 a) {
    return func_ov004_0222015c(o, 9, a);
}

extern "C" void func_ov004_0222012c(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        func_020103b4(o, 0, 3, 3);
    }
}

extern "C" s32 func_ov004_0222015c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x42, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02220194(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov004_022202c4(o);
        func_ov004_02220220(o);
        func_ov004_022201e0(o);
    } else {
        func_ov004_02220250(o, func_02010924(o));
        func_ov004_02220220(o);
    }
}

extern "C" void func_ov004_022201e0(Obj *o) {
    if (Unk_ov004_0221fa00_IsZero(data_021c3cc0)) return;
    if (((Bits *)&o->unk_2d4)->mid >= 5) {
        func_020b4bbc(func_020b4934(), o->unk_800);
    }
}

extern "C" void func_ov004_02220220(Obj *o) {
    if (o->unk_700 == 0x3e) {
        if (((Bits *)&o->unk_2d4)->mid >= 6) {
            func_ov004_0221ec34(o, 0, 6);
        }
    }
}

extern "C" void func_ov004_02220250(Obj *o, s32 a) {
    if (a != 0) {
        if (o->unk_700 != 0x3e) {
            func_02010358(o, 0x3e, 3, 0);
        }
    }
    func_02010914(o);
    if (o->unk_700 == 0x3e) {
        if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xb) || func_020565e8(&o->unk_2cc, 0x10)) {
            func_0200f258(o);
        }
    }
}

extern "C" void func_ov004_022202c4(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 1) || func_020565e8(&o->unk_2cc, 6) || func_020565e8(&o->unk_2cc, 0xb) || func_020565e8(&o->unk_2cc, 0x10)) {
        func_0200f258(o);
    }
}
