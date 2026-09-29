#include "types.h"

struct Unk_ov004_02222874_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02222874_Tgt {
    s32 x, z;
    s16 h;
};

struct Unk_ov004_02222874_Rt {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_ov004_02222874_Msg {
public:
    Unk_ov004_02222874_Msg();
    ~Unk_ov004_02222874_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    union {
        Unk_ov004_02222874_Tgt t;
        u8 b[2];
    } unk_0c;
    u8 pad_18[4];
};

class Unk_ov004_02222874_Prim {
public:
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov004_02222874_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

class Unk_ov004_02222874_Sec {
public:
    virtual void vfunc_s00();
    u8 pad_04[0x1e - 4];
    u8 unk_10a;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov004_02222874_Rt *unk_128;
    u8 pad_40[0x51 - 0x40];
    u8 unk_13d;
    u8 pad_52[0x60 - 0x52];
};

struct Unk_ov004_02222874_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 flag;
    u8 pad_b;
};

struct Unk_ov004_02222874_Obj : public Unk_ov004_02222874_Prim, public Unk_ov004_02222874_Sec {
    u8 pad_14c[0x2cc - 0x14c];
    u8 unk_2cc[0x10];
    s32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[4];
    u8 pad_5a0[0x7d0 - 0x5a0];
    union {
        Unk_ov004_02222874_Rec r;
        u8 b[2];
    } unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[0x818 - 0x810];
    s32 unk_818;
    u16 unk_81c;
    u8 pad_81e[0x8ec - 0x81e];
    u8 unk_8ec[0x10];
};

typedef Unk_ov004_02222874_Obj Obj;
typedef Unk_ov004_02222874_Sec Sec;
typedef Unk_ov004_02222874_V3 V3;
typedef Unk_ov004_02222874_Tgt Tgt;
typedef Unk_ov004_02222874_Msg Msg;
typedef Unk_ov004_02222874_Rec Rec;

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern u8 data_ov004_0224d4c0[];
extern u8 data_ov004_0224d4d0[];

s32 func_0200e248(Obj *o, Msg *m);
void func_0200ecdc(Obj *o, u32 a);
s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
void func_020103b4(Obj *o, s32 a, s32 b, s32 c);
void func_02010a58(Obj *o, s16 *a);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200d640(Obj *o);
s32 func_0200d5c4(Obj *o);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_020b0f54(void);
s32 func_020b52f8(void);
s32 func_0203d820(void);
void func_0203d7f8(void);
void func_0203e47c(void *o, Sec *s);
void func_0203e488(void *o, Sec *s);
void func_0200ec1c(Obj *o, s32 a);
void func_0200ec30(Obj *o, s32 a);
void func_020a710c(Sec *s, void *d);
s32 func_02056654(void *p);
s32 func_0200f594(Obj *o, s32 x, s32 z, s32 h);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);
s32 func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
s32 func_02098ffc(void);
void func_02099124(void *p);
s32 func_0200f5b0(Obj *o);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
s32 func_02042ba8(u32 a, u32 b);
s32 func_0206e780(u32 a);
s32 func_0206ec6c(void);
s32 func_0206ed18(void);

void *func_ov004_022354d8(void);
s32 func_ov004_0223532c(void *p);
s32 func_ov004_0223534c(void *p);
s32 func_ov004_0223531c(void *p);
s32 func_ov004_0223533c(void *p);
s32 func_ov004_0223539c(void *p);
s32 func_ov004_022226ec(Obj *o, s32 a, s32 b);
s32 func_ov004_0222257c(Obj *o, s32 a, s32 b);
s32 func_ov004_022233bc(Obj *o);
s32 func_ov004_02223314(Obj *o);

void func_ov004_02222838(void);
void func_ov004_0222283c(Obj *o, Obj *arg);
void func_ov004_02222870(u8 *p, u32 v);
s32 func_ov004_02222874(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02222924(u8 *p, u32 v);
void func_ov004_02222928(Obj *o);
void func_ov004_02222980(Obj *o);
void func_ov004_02222b40(Obj *o, s32 c);
void func_ov004_02222b74(Obj *o, Obj *arg);
void func_ov004_02222bd4(u8 *src, u8 *a, u8 *b);
void func_ov004_02222be0(u8 *p, u32 a, u32 b);
void func_ov004_02222be8(u8 *p, s32 v);
s32 func_ov004_02222c04(Obj *o, u32 a, u32 b, u32 c, s32 e);
void func_ov004_02222c4c(u8 *p, u32 a, u32 b);
void func_ov004_02222c54(Obj *o);
void func_ov004_02222cb0(Obj *o);
void func_ov004_02222d58(Obj *o);
void func_ov004_02222d74(Obj *o);
s32 func_ov004_02222d94(Obj *o, s32 c);
void func_ov004_02222dcc(Obj *o, Obj *arg);
void func_ov004_02222e18(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02222e34(void *p, s32 x, s32 z, s16 h);
void func_ov004_02222e50(Rec *r, s32 x, s32 z, s16 h);
s32 func_ov004_02222e5c(Obj *o, s32 x, s32 z, s16 h, u32 a, s32 b);
void func_ov004_02222ea4(Tgt *t, s32 x, s32 z, s16 h);
void func_ov004_02222eac(Obj *o);
void func_ov004_02222ecc(Obj *o);
}

struct Unk_ov004_02222980_Pad {
    s32 v[2];
    Unk_ov004_02222980_Pad() {}
    ~Unk_ov004_02222980_Pad() {}
};

static inline BOOL Unk_ov004_02222874_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void func_ov004_02222838(void) {
}

extern "C" void func_ov004_0222283c(Obj *o, Obj *arg) {
    u8 *p = &o->unk_7d0.b[0];
    if (*((u8 *)arg + 0xc) != 0) {
        func_02010358(o, 0x1b, 3, 0);
    } else {
        func_02010358(o, 0x1c, 3, 0);
    }
    func_ov004_02222870(p, 0);
}

extern "C" s32 func_ov004_02222874(Obj *o, u32 a, s32 b, s32 c) {
    if (!Unk_ov004_02222874_IsOne(data_020e416c)) {
        return 0;
    }
    if ((a != 0 && func_ov004_0223532c(func_ov004_022354d8()) != 0) || (a == 0 && func_ov004_0223534c(func_ov004_022354d8()) != 0)) {
        Msg m;
        m.func_0200e2c0(0x1f, b, c);
        func_ov004_02222924(m.unk_0c.b, a);
        if (a != 0) {
            func_ov004_0223531c(func_ov004_022354d8());
        } else {
            func_ov004_0223533c(func_ov004_022354d8());
        }
        s32 r = func_0200e248(o, &m);
        return r;
    }
    if (func_020b52f8() != 0 && o->unk_7fc == 0) {
        func_0200ecdc(o, 0x6d);
    }
    return 0;
}

extern "C" void func_ov004_02222928(Obj *o) {
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    func_0201065c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov004_02222980(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}

extern "C" void func_ov004_02222980(Obj *o) {
    Unk_ov004_02222980_Pad pad;
    u8 *p = &o->unk_7d0.b[0];
    u8 *q = p + 1;
    switch (*q) {
    case 0:
        if (*p == 0) {
            if (func_0200d640(o) < 0x333) {
                *p = 1;
            }
        }
        if (o->unk_13d == 0) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        } else if (func_0200d640(o) > 0x333) {
            if ((u32)func_020b0f54() <= 1) {
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                switch (func_0200d5c4(o)) {
                case 2:
                    func_ov004_0222257c(o, 6, -1);
                    break;
                case 0:
                    func_ov004_022226ec(o, 6, -1);
                    break;
                case 3:
                    if (*p != 0) {
                        if (func_ov004_02222874(o, 1, 6, -1) == 0) {
                            *p = 0;
                        }
                    }
                    break;
                case 1:
                    if (*p != 0) {
                        if (func_ov004_02222874(o, 0, 6, -1) == 0) {
                            *p = 0;
                        }
                    }
                    break;
                }
            } else {
                if (func_020b52f8() != 0 && o->unk_7fc == 0) {
                    (*q)++;
                }
            }
        }
        break;
    case 1:
        if (func_0203d820() != 0) {
            (*q)++;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            {
                Sec &s = *o;
                func_020a710c(&s, data_ov004_0224d4c0);
            }
            o->unk_10a = 1;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 2:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *q = *q + 1;
            }
        }
        break;
    case 3:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                func_0203e47c(o, o);
                func_0200ec1c(o, 0x11);
                func_0203d7f8();
                *q = 0;
            }
        }
        break;
    }
}

extern "C" void func_ov004_02222b40(Obj *o, s32 c) {
    u8 l[2];
    func_ov004_02222bd4(o->unk_8ec, &l[0], &l[1]);
    func_ov004_02222c04(o, l[0], l[1], 5, c);
}

extern "C" void func_ov004_02222b74(Obj *o, Obj *arg) {
    u8 *a = (u8 *)arg + 0xc;
    u8 *r = &o->unk_7d0.b[0];
    u32 x = a[0];
    u32 y = a[1];
    s32 t = func_0200d640(o);
    if (x != 0) {
        t = 0;
    }
    func_ov004_02222be8(r, t);
    if (y != 0) {
        func_020103b4(o, 0x1a, 3, 0);
    } else {
        func_020103b4(o, 0x1a, 0, 0);
    }
    func_ov004_02222be0(o->unk_8ec, x, y);
}

extern "C" void func_ov004_02222bd4(u8 *src, u8 *a, u8 *b) {
    *a = src[0];
    *b = src[1];
}

extern "C" void func_ov004_02222be0(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" void func_ov004_02222be8(u8 *p, s32 v) {
    if (v > 0x333) {
        p[0] = 0;
    } else {
        p[0] = 1;
    }
    p[1] = 0;
}

extern "C" s32 func_ov004_02222c04(Obj *o, u32 a, u32 b, u32 c, s32 e) {
    Msg m;
    m.func_0200e2c0(0x1e, c, *(s16 *)&e);
    func_ov004_02222c4c(m.unk_0c.b, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02222c4c(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" void func_ov004_02222c54(Obj *o) {
    func_ov004_02222d58(o);
    func_02010914(o);
    func_020109c4(o);
    func_0201071c(o);
    func_0201065c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov004_02222cb0(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}

extern "C" void func_ov004_02222cb0(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    V3 *v = &o->unk_5c;
    if (func_02056654(o->unk_2cc) && v->x == r->x && v->z == r->z && r->h == o->unk_8e) {
        func_ov004_02222c04(o, 1, 0, 5, -1);
    } else if (o->unk_13d == 0) {
        if (r->flag == 0) {
            r->flag = 1;
            if (func_02056654(o->unk_2cc) == 0) {
                func_ov004_0223539c(func_ov004_022354d8());
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov004_02222d58(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    func_0200f594(o, r->x, r->z, r->h);
}

extern "C" void func_ov004_02222d74(Obj *o) {
    Rec *r = &o->unk_7d0.r;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    func_02010a58(o, &r->h);
}

extern "C" s32 func_ov004_02222d94(Obj *o, s32 c) {
    s32 x, z;
    s16 h;
    func_ov004_02222e18(o->unk_8ec, &x, &z, &h);
    func_ov004_02222e5c(o, x, z, h, 5, c);
}

extern "C" void func_ov004_02222dcc(Obj *o, Obj *arg) {
    func_02010358(o, 0x1a, 3, 0);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    s32 x = p->x;
    s32 z = p->y;
    s16 h = *(s16 *)((u8 *)p + 8);
    func_ov004_02222e50(&o->unk_7d0.r, x, z, h);
    func_ov004_02222e34(o->unk_8ec, x, z, h);
}

extern "C" void func_ov004_02222e18(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02222e34(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" void func_ov004_02222e50(Rec *r, s32 x, s32 z, s16 h) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->flag = 0;
}

extern "C" s32 func_ov004_02222e5c(Obj *o, s32 x, s32 z, s16 h, u32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x1d, a, *(s16 *)&b);
    func_ov004_02222ea4(&m.unk_0c.t, x, z, h);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02222ea4(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02222eac(Obj *o) {
    func_ov004_022233bc(o);
    func_0201071c(o);
    func_ov004_02223314(o);
    func_ov004_02222ecc(o);
}

#define ECC_START_FAIL(c) \
    { \
        *p = 4; \
        func_020103b4(o, 0, 6, 6); \
        o->unk_80c = func_02042ba8(o->unk_7fc, o->unk_81c); \
    }

extern "C" void func_ov004_02222ecc(Obj *o) {
    u8 *p = (u8 *)o + 0x7d5;
    struct {
        u32 pad;
        u16 a;
        u16 b;
    } w;
    s32 t;
    switch (*p) {
    case 0:
        if (func_02056654(o->unk_2cc) == 0) {
            break;
        }
        {
            BOOL ok;
            if (func_02098ffc() == -1) {
                if (func_0204b2d4(&o->unk_81c) != 0) {
                    w.b = 0xfff1;
                    u32 r6 = func_0204b25c(&o->unk_81c);
                    if (r6 == func_0204b25c(&w.b)) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (o->unk_81c == 0xfff1) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok == FALSE) {
                    if (func_0203d820() == 0) {
                        break;
                    }
                    func_020103b4(o, 0x6c, 3, 0);
                    s32 r = func_0200f5b0(o);
                    if (r == 4) {
                        func_0205e1a0(o->unk_59c, 0, 9, 0);
                    } else if (r == 3) {
                        func_0205e1a0(o->unk_59c, 0x13, 3, 0);
                    }
                    *p = 1;
                    func_0203e488(o, o);
                    func_0200ec30(o, 0x11);
                    {
                        Sec &s = *o;
                        func_020a710c(&s, data_ov004_0224d4d0);
                    }
                    o->unk_10a = 2;
                    o->unk_128->unk_08 = 1;
                    break;
                }
            }
        }
        w.a = o->unk_81c;
        func_02099124(&w.a);
        *p = 5;
        break;
    case 1:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 2;
                o->unk_818 = 3;
            }
        }
        break;
    case 2:
        t = o->unk_818;
        if (t >= 0xf) {
            *p = 3;
            if (o->unk_80c == -1) {
                ECC_START_FAIL(0)
            }
        } else if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                if (t == 5) {
                    if (func_0206e780(o->unk_81c) != 0) {
                        o->unk_818 = 6;
                    }
                } else if (t == 6) {
                    if (func_0206ec6c() != 0) {
                        o->unk_818 = 0xf;
                        o->unk_2dc = 0x1000;
                        if (func_0206ed18() != 0) {
                            *p = 5;
                            func_0203e47c(o, o);
                            func_0200ec1c(o, 0x11);
                            func_0203d7f8();
                        } else {
                            *p = 3;
                            if (o->unk_80c == -1) {
                                ECC_START_FAIL(0)
                            }
                        }
                    }
                }
            }
        }
        break;
    case 3:
        if (o->unk_80c == -1) {
            ECC_START_FAIL(0)
        }
        break;
    case 4:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                func_0203e47c(o, o);
                func_0200ec1c(o, 0x11);
                func_0203d7f8();
                *p = 5;
                func_020103b4(o, 0, 6, 6);
            }
        }
        break;
    case 5:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        func_0200ec1c(o, 0xd);
        o->unk_818 = 0xf;
        break;
    case 6:
        if (func_0203d820() != 0) {
            *p = 7;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            {
                Sec &s = *o;
                func_020a710c(&s, data_ov004_0224d4d0);
            }
            o->unk_10a = 0;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 7:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 8;
            }
        }
        break;
    case 8:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                func_0203e47c(o, o);
                func_0200ec1c(o, 0x11);
                func_0203d7f8();
                *p = 9;
            }
        }
        break;
    case 9:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        func_0200ec1c(o, 0xd);
        break;
    case 10:
        if (func_0203d820() != 0) {
            *p = 0xb;
            func_0203e488(o, o);
            func_0200ec30(o, 0x11);
            {
                Sec &s = *o;
                func_020a710c(&s, data_ov004_0224d4c0);
            }
            o->unk_10a = 1;
            o->unk_128->unk_08 = 1;
        }
        break;
    case 11:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) {
                *p = 0xc;
            }
        }
        break;
    case 12:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 == 0) {
                func_0203e47c(o, o);
                func_0200ec1c(o, 0x11);
                func_0203d7f8();
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 3, 1, -1);
            }
        }
        break;
    }
}

extern "C" void func_ov004_02222870(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02222924(u8 *p, u32 v) {
    *p = v;
}
