#include "types.h"

struct Unk_ov004_02221ed0_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02221ed0_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 d;
};

struct Unk_ov004_02221ed0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_02221ed0_Msg {
public:
    Unk_ov004_02221ed0_Msg();
    ~Unk_ov004_02221ed0_Msg();
    void func_0200e2c0(s32 a, s32 b, s32 c);
    u8 pad_00[0xc];
    Unk_ov004_02221ed0_Rec unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_02221ed0_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02221ed0_V3 unk_5c;
    Unk_ov004_02221ed0_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x13d - 0x90];
    u8 unk_13d;
    u8 pad_13e[0x2cc - 0x13e];
    u8 unk_2cc[4];
    Unk_ov004_02221ed0_Bits unk_2d0;
    u8 pad_2d4[0x2e0 - 0x2d4];
    u8 unk_2e0;
    u8 pad_2e1[0x6f0 - 0x2e1];
    s32 unk_6f0;
    u8 pad_6f4[0x6f8 - 0x6f4];
    s32 unk_6f8;
    u8 pad_6fc[0x7d0 - 0x6fc];
    Unk_ov004_02221ed0_Rec unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[0x10];
};

typedef Unk_ov004_02221ed0_Obj Obj;
typedef Unk_ov004_02221ed0_V3 V3;
typedef Unk_ov004_02221ed0_Rec Rec;
typedef Unk_ov004_02221ed0_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov004_02240148[];
extern u8 data_ov004_0224d4b8[];
extern u8 data_ov004_0224d4bc[];
extern s16 data_ov004_02240134[];

s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0201065c(Obj *o);
void func_020109c4(Obj *o);
void func_0200ef08(Obj *o);
s32 func_02051518(void);
void func_02051524(V3 *v);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200ecdc(Obj *o, u32 a);
s32 func_0200d5c4(Obj *o);
s32 func_0200d640(Obj *o);
void func_0200f594(Obj *o, s32 a, s32 b, s32 c);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010a58(Obj *o, s16 *a);
s32 func_02056654(void *p);
s32 func_0205668c(void *p, s32 a, s32 b, s32 c, u32 d);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
u16 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);

s32 func_ov004_02222c04(Obj *o, s32 a, s32 b, s32 c, s32 d);
s32 func_ov004_02222870(u8 *p, s32 a);
s32 func_ov004_022354d8(void);
s32 func_ov004_02235224(void);
s32 func_ov004_02235270(void);
s32 func_ov004_022351e8(void);
s32 func_ov004_02235234(void);
s32 func_020b52f8(void);

s32 func_ov004_02221e68(Obj *o, u32 a, u32 b);
s32 func_ov004_022219d8(Obj *o, u32 a, u32 b);
s32 func_ov004_02221c20(Obj *o, u32 a, u32 b);

void func_ov004_02221ed0(Rec *t, s32 x, s32 z, s16 h);
void func_ov004_02221ed8(Obj *o);
void func_ov004_02221ef8(Obj *o);
void func_ov004_02221fc0(Obj *o);
void func_ov004_02221fdc(Obj *o);
void func_ov004_02221ffc(Obj *o, s32 a);
void func_ov004_02222040(Obj *o, Msg *m);
void func_ov004_022220e0(u8 *self, s32 *x, s32 *z, s16 *h, u8 *d);
void func_ov004_02222104(u8 *self, s32 x, s32 z, s16 h, u8 d);
void func_ov004_02222128(Rec *r, s32 x, s32 z, s16 h, u8 d);
s32 func_ov004_0222213c(Obj *o, s32 x, s32 z, s16 h, u8 d, s32 a, s32 b);
void func_ov004_0222218c(Rec *r, s32 x, s32 z, s16 h, u8 d);
void func_ov004_022221a0(Obj *o);
void func_ov004_022221c8(Obj *o);
void func_ov004_02222228(Obj *o);
void func_ov004_02222280(Obj *o);
void func_ov004_022222a4(void);
void func_ov004_022222a8(Obj *o);
void func_ov004_022222e8(Rec *r, s32 x, s32 z);
s32 func_ov004_022222f0(Obj *o, s32 a, s32 b);
void func_ov004_02222328(Obj *o);
void func_ov004_02222348(Obj *o);
void func_ov004_022223a8(Obj *o);
void func_ov004_022223c0(void);
void func_ov004_022223c4(Obj *o);
void func_ov004_02222404(Rec *r, s32 x, s32 z);
s32 func_ov004_0222240c(Obj *o, s32 a, s32 b);
void func_ov004_02222444(Obj *o);
void func_ov004_0222246c(Obj *o);
void func_ov004_02222550(Obj *o, s32 a);
void func_ov004_0222255c(Obj *o);
s32 func_ov004_0222257c(Obj *o, s32 a, s32 b);
void func_ov004_022225b4(Obj *o);
void func_ov004_022225dc(Obj *o);
void func_ov004_022226c0(Obj *o, s32 a);
void func_ov004_022226cc(Obj *o);
s32 func_ov004_022226ec(Obj *o, s32 a, s32 b);
void func_ov004_02222724(Obj *o);
void func_ov004_02222744(Obj *o);
}

extern "C" void func_ov004_02221ed0(Rec *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02221ed8(Obj *o) {
    func_ov004_02221fc0(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov004_02221ef8(o);
}

extern "C" void func_ov004_02221ef8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return;
    }
    switch (func_02051518()) {
    case 0:
        return;
    case 1:
        break;
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        return;
    }
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    if (p->x == r->x) {
        if (p->z == r->z) {
            if (r->h == o->unk_8e) {
                switch (r->d) {
                case 0:
                    func_ov004_02221e68(o, 6, -1);
                    break;
                case 1:
                    func_ov004_022219d8(o, 6, -1);
                    break;
                case 2:
                    func_ov004_02221c20(o, 6, -1);
                    break;
                }
            }
        }
    }
}

extern "C" void func_ov004_02221fc0(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->x, r->z, r->h);
}

extern "C" void func_ov004_02221fdc(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    func_02010a58(o, &r->h);
}

extern "C" void func_ov004_02221ffc(Obj *o, s32 a) {
    struct {
        u8 d;
        u8 pad;
        s16 h;
    } l;
    s32 x, z;
    func_ov004_022220e0(o->unk_8ec, &x, &z, &l.h, &l.d);
    func_ov004_0222213c(o, x, z, l.h, l.d, 6, a);
}

extern "C" void func_ov004_02222040(Obj *o, Msg *m) {
    Rec *p = &m->unk_0c;
    s16 h = p->h;
    u8 d = p->d;
    s32 z = p->z;
    s32 y = o->unk_5c.y;
    s32 x = p->x;
    V3 tmp;
    V3 v;
    s16 t;
    tmp.x = x;
    tmp.y = y;
    tmp.z = z;
    t = h + data_ov004_02240134[d];
    func_0200f3ec(&v, o, &tmp, &t, (u32)data_ov004_0224d4b8);
    func_ov004_02222128(&o->unk_7d0, v.x, v.z, t, d);
    func_ov004_02222104(o->unk_8ec, tmp.x, tmp.z, h, d);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02051524(&tmp);
    }
    func_020103b4(o, 0x1a, 3, 0);
}

extern "C" void func_ov004_022220e0(u8 *self, s32 *x, s32 *z, s16 *h, u8 *d) {
    func_02076a2c(self, x, z);
    *h = func_020769ac(self + 5);
    *d = self[7];
}

extern "C" void func_ov004_02222104(u8 *self, s32 x, s32 z, s16 h, u8 d) {
    func_02076a6c(self, x, z);
    func_020769c4(self + 5, h);
    self[7] = d;
}

extern "C" void func_ov004_02222128(Rec *r, s32 x, s32 z, s16 h, u8 d) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->d = d;
}

extern "C" s32 func_ov004_0222213c(Obj *o, s32 x, s32 z, s16 h, u8 d, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x24, a, *(s16 *)&b);
    func_ov004_0222218c(&m.unk_0c, x, z, h, d);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0222218c(Rec *r, s32 x, s32 z, s16 h, u8 d) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->d = d;
}

extern "C" void func_ov004_022221a0(Obj *o) {
    func_02010914(o);
    func_ov004_02222228(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov004_022221c8(o);
}

extern "C" void func_ov004_022221c8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (o->unk_13d) {
            func_ov004_02222c04(o, 1, 0, 5, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov004_02222228(Obj *o) {
    volatile V3 old;
    V3 *pv = &o->unk_5c;
    s32 y;
    old.x = o->unk_5c.x;
    y = pv->y;
    old.y = y;
    old.z = pv->z;
    s32 nz = o->unk_6f8;
    s32 nx = o->unk_6f0;
    o->unk_5c.x = nx;
    o->unk_5c.y = y;
    o->unk_5c.z = nz;
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
    func_020109c4(o);
    s32 ox = old.x;
    if (ox == o->unk_6f0) {
        o->unk_5c.z = old.z;
    } else {
        o->unk_5c.x = ox;
    }
}

extern "C" void func_ov004_02222280(Obj *o) {
    V3 *p = &o->unk_5c;
    Rec *r = &o->unk_7d0;
    p->x = r->x;
    p->z = r->z;
    o->unk_68.x = p->x;
    o->unk_68.y = p->y;
    o->unk_68.z = p->z;
}

extern "C" void func_ov004_022222a4(void) {
}

extern "C" void func_ov004_022222a8(Obj *o) {
    V3 v;
    func_02010358(o, 0x20, 3, 0);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_0224d4bc);
    func_ov004_022222e8(&o->unk_7d0, v.x, v.z);
}

extern "C" void func_ov004_022222e8(Rec *r, s32 x, s32 z) {
    r->x = x;
    r->z = z;
}

extern "C" s32 func_ov004_022222f0(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x23, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02222328(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov004_02222348(o);
}

extern "C" void func_ov004_02222348(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (o->unk_13d) {
            func_ov004_02222c04(o, 1, 0, 5, -1);
        } else {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov004_022223a8(Obj *o) {
    V3 *p = &o->unk_5c;
    Rec *r = &o->unk_7d0;
    p->x = r->x;
    p->z = r->z;
}

extern "C" void func_ov004_022223c0(void) {
}

extern "C" void func_ov004_022223c4(Obj *o) {
    V3 v;
    func_02010358(o, 0x1f, 3, 0);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_02240148);
    func_ov004_02222404(&o->unk_7d0, v.x, v.z);
}

extern "C" void func_ov004_02222404(Rec *r, s32 x, s32 z) {
    r->x = x;
    r->z = z;
}

extern "C" s32 func_ov004_0222240c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x22, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02222444(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov004_0222246c(o);
}

extern "C" void func_ov004_0222246c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            u8 r4 = 0;
            func_ov004_022354d8();
            if (func_ov004_02235224() == 0) {
                r4 = 1;
            }
            if (func_020b52f8() == 0 || o->unk_7fc != 0) {
                r4 |= 2;
            }
            if (r4 != 0) {
                u8 *f = (u8 *)&o->unk_7d0;
                if (*f == 0) {
                    *f = 1;
                    if (r4 == 1) {
                        func_0200ecdc(o, 0x6d);
                    }
                }
                s32 t = func_0200d5c4(o);
                if (func_0200d640(o) > 0) {
                    if (t == 2) {
                        return;
                    }
                }
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_ov004_02222c04(o, 0, 1, 5, -1);
            } else {
                func_ov004_022222f0(o, 6, -1);
                func_ov004_022354d8();
                func_ov004_022351e8();
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov004_02222550(Obj *o, s32 a) {
    func_ov004_0222257c(o, 6, a);
}

extern "C" void func_ov004_0222255c(Obj *o) {
    func_02010358(o, 0x1e, 3, 0);
    *(u8 *)&o->unk_7d0 = 0;
}

extern "C" s32 func_ov004_0222257c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x21, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022225b4(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov004_022225dc(o);
}

extern "C" void func_ov004_022225dc(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            u8 r4 = 0;
            func_ov004_022354d8();
            if (func_ov004_02235270() == 0) {
                r4 = 1;
            }
            if (func_020b52f8() == 0 || o->unk_7fc != 0) {
                r4 |= 2;
            }
            if (r4 != 0) {
                u8 *f = (u8 *)&o->unk_7d0;
                if (*f == 0) {
                    *f = 1;
                    if (r4 == 1) {
                        func_0200ecdc(o, 0x6d);
                    }
                }
                s32 t = func_0200d5c4(o);
                if (func_0200d640(o) > 0) {
                    if (t == 0) {
                        return;
                    }
                }
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_ov004_02222c04(o, 0, 1, 5, -1);
            } else {
                func_ov004_0222240c(o, 6, -1);
                func_ov004_022354d8();
                func_ov004_02235234();
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov004_022226c0(Obj *o, s32 a) {
    func_ov004_022226ec(o, 6, a);
}

extern "C" void func_ov004_022226cc(Obj *o) {
    func_02010358(o, 0x1d, 3, 0);
    *(u8 *)&o->unk_7d0 = 0;
}

extern "C" s32 func_ov004_022226ec(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x20, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02222724(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_0201065c(o);
    func_ov004_02222744(o);
}

extern "C" void func_ov004_02222744(Obj *o) {
    if (o->unk_2e0 == 3) {
        u8 *f = (u8 *)&o->unk_7d0;
        s32 t;
        if (*f == 0) {
            if (func_0200d640(o) < 0x19a) {
                func_ov004_02222870(f, 1);
            }
        }
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        t = func_0200d5c4(o);
        if (*f != 0 && func_0200d640(o) > 0x19a) {
            if (t == 3 || t == 1) {
                func_ov004_02222c04(o, 1, 1, 5, -1);
                return;
            }
        }
        if (func_02056654(o->unk_2cc)) {
            if (o->unk_13d) {
                func_ov004_02222c04(o, 0, 1, 5, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
            }
        }
    } else {
        if (func_02056654(o->unk_2cc)) {
            func_0205668c(o->unk_2cc, 0, 3, 0x1000, o->unk_2d0.mid);
        }
    }
}
