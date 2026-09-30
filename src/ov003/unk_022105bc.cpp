#include "types.h"

struct Unk_ov003_022105bc_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02210628_Pay {
    s32 a;
    s32 c;
    s32 d;
    s16 e;
    u8 b;
};

struct Unk_ov003_02210608_Rec {
    s32 a;
    s32 c;
    s32 d;
    s32 f;
    s16 e;
    u8 b;
};

struct Unk_ov003_02210bdc_Rec {
    u8 a;
    u8 b;
};

struct Unk_ov003_02210eb4_Rec {
    s32 a;
    s32 b;
    s16 c;
    u8 pad_0a;
    u8 cnt;
};

class Unk_ov003_02210628_Msg {
public:
    Unk_ov003_02210628_Msg();
    ~Unk_ov003_02210628_Msg();
    void func_0200e2c0(s32 a, s32 b, s32 c);
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};

struct Unk_ov003_022105bc_Obj {
    u8 pad_00[0x5c];
    u8 unk_5c[0x2cc - 0x5c];
    u8 unk_2cc[8];
    Unk_ov003_022105bc_Bits unk_2d4;
    u8 pad_2d8[0x700 - 0x2d8];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    u8 unk_7d0;
    u8 unk_7d1;
    u8 pad_7d2[0x7ec - 0x7d2];
    s32 unk_7ec;
    u8 pad_7f0[4];
    s32 unk_7f4;
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[2];
    u8 pad_8ee[0xc80 - 0x8ee];
    u16 unk_c80;
};

typedef Unk_ov003_022105bc_Obj Obj;
typedef Unk_ov003_022105bc_Bits Bits;
typedef Unk_ov003_02210628_Msg Msg;
typedef Unk_ov003_02210628_Pay Pay;
typedef Unk_ov003_02210608_Rec Rec;
typedef Unk_ov003_02210bdc_Rec Rec2;
typedef Unk_ov003_02210eb4_Rec Rec3;

extern "C" {
extern void *data_020cbb18;

s32 func_02076a2c(void *p, u32 a, u32 b);
s32 func_02076a6c(void *p, u32 a, u32 b);
u32 func_020769ac(void *p);
void func_020769c4(void *p, s32 a);
void func_02010a7c(u16 *out, Obj *o);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02010358(Obj *o, s32 a, s32 b, s32 c);
s32 func_020103b4(Obj *o, s32 a, s32 b, s32 c);
s32 func_020729bc(void *g, s32 a);
s32 func_02056654(void *p);
s32 func_0200ed9c(Obj *o);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0204b25c(u16 *p);
s32 func_0204b2d4(u16 *p);
s32 func_020b0f30();
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02008e50(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0203d76c();
void *func_020850e0();
s32 func_020851bc(void *p, s32 a);
s32 func_02085188(void *p, s32 a);
void *func_0209750c();
s32 func_02097ff4(void *p, s32 a);
s32 func_02041b68();
s32 func_02034dd0(s32 a, s32 b, s32 c);
s32 func_020b50e8();
s32 func_02098044(void *p, s32 a);
s32 func_020b50dc();
s32 func_020b530c(s32 a);
u32 func_020b1614(void *p);
s32 func_02010914(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0200f258(Obj *o);
s32 func_0200f594(Obj *o, s32 a, s32 b, s32 c);

void func_ov003_022106e8(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e);
s32 func_ov003_02210204(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g);
s32 func_ov003_02218d78();
s32 func_ov003_02218d34(void *p);
void func_ov003_02210cfc(u8 *p, u8 *a, u8 *b);
void func_ov003_02210d08(u8 *p, u32 a, u32 b);
s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s16 d);
s32 func_ov003_02210dc0(Obj *o, s32 a, s32 b);
s32 func_ov003_022107a8(Obj *o, s32 a, s32 b);
void func_ov003_02210ad4(Obj *o);
void func_ov003_022107fc(Obj *o);
s32 func_ov003_02210eb4(Obj *o);
void func_ov003_02210e40(Obj *o);
s32 func_ov003_02210e18(Obj *o);
}

namespace Unk_ov003_022107e0_Ns {
extern "C" s32 func_ov003_022107fc(Obj *o);
}

namespace Unk_ov003_02210b94_Ns {
extern "C" s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s32 d);
}

static inline BOOL Unk_ov003_022107fc_Eq(u16 *p, u16 *k) {
    if (func_0204b2d4(p)) {
        *k = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

extern "C" void func_ov003_022105bc(u8 *p, u8 *a, u32 b, u32 c, u16 *d) {
    *a = p[7];
    func_02076a2c(p, b, c);
    *d = func_020769ac(p + 5);
}

extern "C" void func_ov003_022105e0(u8 *p, u32 a, u32 b, u32 c, s16 d) {
    p[7] = a;
    func_02076a6c(p, b, c);
    func_020769c4(p + 5, d);
}

extern "C" void func_ov003_02210608(Rec *p, s32 a, u32 b, s32 c, s32 d, s16 e, s32 f) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    p->e = e;
    p->f = f;
}

extern "C" s32 func_ov003_02210628(Obj *o, s32 a, s32 b, s32 c, s32 d, s16 e, s32 f, s16 g) {
    u16 v[2];
    func_02010a7c(v, o);
    {
        BOOL r = FALSE;
        volatile u16 *pv = &v[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x1380 || x > 0x139f) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x13a0 && x <= 0x13a7)) {
            return func_ov003_02210204(o, a, b, c, d, e, f, g);
        }
    }
    Msg m;
    m.func_0200e2c0(0x3d, f, g);
    func_ov003_022106e8((Pay *)&m.unk_0c, a, b, c, d, e);
    func_0200ec1c(o, 1);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022106e8(Pay *p, s32 a, u32 b, s32 c, s32 d, s16 e) {
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    p->e = e;
}

extern "C" void func_ov003_02210704() {}

extern "C" s32 func_ov003_02210708(Obj *o, s32 a) {
    if (a != 0x3b && a != 0x3d) {
        func_0200ec30(o, 0);
    }
}

extern "C" s32 func_ov003_02210720(Obj *o, s32 a) {
    return func_ov003_022107a8(o, 1, a);
}

extern "C" void func_ov003_0221072c(Obj *o) {
    func_0200ec1c(o, 0);
    if (func_ov003_02218d78()) {
        func_02010358(o, 0x34, 0, 0);
    } else {
        func_02010358(o, 0x35, 0, 0);
    }
    o->unk_7f4 = 0;
    if (func_020851bc(func_020850e0(), 0) != 0 || func_020851bc(func_020850e0(), 5) != 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02034dd0(0x12, 0xf, 0);
        }
    }
}

extern "C" s32 func_ov003_022107a8(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x3c, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022107e0(Obj *o) {
    func_ov003_02210ad4(o);
    func_0201071c(o);
    Unk_ov003_022107e0_Ns::func_ov003_022107fc(o);
}

extern "C" void func_ov003_022107fc(Obj *o) {
    u16 v[8];
    if (!func_02056654(o->unk_2cc)) return;
    func_0200ed9c(o);
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    u8 *pst = &o->unk_7d0;
    u8 st = *pst;
    func_02010a7c(v, o);
    if (st <= 1) {
        BOOL r = FALSE;
        volatile u16 *pv = &v[0];
        u32 x = *pv;
        u32 y = *pv;
        if (y < 0x1380 || x > 0x139f) {
        } else {
            r = TRUE;
        }
        if (r != 0 || (x >= 0x13a0 && x <= 0x13a7)) {
            func_0200ec1c(o, 0x1d);
        }
    }
    switch (*pst) {
    case 0: {
        BOOL r = Unk_ov003_022107fc_Eq(v, &v[5]);
        if (r == 0 && func_020b0f30() == 0 && func_0200ec44(o, 0x1d) == 0) {
            func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
            return;
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            if (Unk_ov003_022107fc_Eq(v, &v[2])) {
                func_0200ec30(o, 0);
            }
        }
    }
    case 1:
        if (Unk_ov003_022107fc_Eq(v, &v[3])) {
            func_0200ec30(o, 0);
        }
        func_0203d76c();
        func_0200ec1c(o, 0x1d);
        func_0200ce98(o, 3, 1, -1);
        break;
    case 2: {
        void *g = data_020cbb18;
        if (func_020729bc(g, o->unk_7fc)) {
            func_02085188(func_020850e0(), 0);
        }
        if (func_020b0f30() == 0) {
            func_02008e50(o, 2, 0, 0, 6, -1);
            return;
        }
        func_0203d76c();
        if (func_020729bc(g, o->unk_7fc)) {
            goto x;
        } else {
            func_02010a7c(&v[1], o);
            if (Unk_ov003_022107fc_Eq(&v[1], &v[4])) {
            x:
                func_0200ec30(o, 0);
            }
        }
        func_0200ec1c(o, 0x1d);
        func_0200ce98(o, 3, 1, -1);
        break;
    }
    case 3:
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02085188(func_020850e0(), 5);
            func_02097ff4(func_0209750c(), 1);
            func_02041b68();
        }
        func_02008e50(o, 3, 0, 0, 6, -1);
        break;
    }
}

extern "C" void func_ov003_02210ad4(Obj *o) {
    u8 *p = &o->unk_7d1;
    func_02010914(o);
    u32 c = o->unk_7d1;
    if (c) {
        *p = c - 1;
        if (*p == 0) {
            if (o->unk_700 == 0x36) {
                func_02010358(o, 0x35, 5, 0);
            }
        }
    } else {
        if (o->unk_700 == 0x34) {
            s32 m = o->unk_2d4.mid;
            switch (m) {
            case 0xd:
            case 0x11:
            case 0x17:
            case 0x1c:
            case 0x25:
            case 0x28:
                func_0200f258(o);
                break;
            }
        } else if (o->unk_700 == 0x35) {
            switch ((s32)o->unk_2d4.mid) {
            case 4:
            case 9:
            case 0xe:
            case 0x14:
                func_0200f258(o);
                break;
            }
        }
    }
}

extern "C" void func_ov003_02210b94(Obj *o, s32 a) {
    if (o->unk_7ec == 0x3b) {
        o->unk_c80 = a;
    } else {
        Rec2 r;
        func_ov003_02210cfc(o->unk_8ec, &r.a, &r.b);
        Unk_ov003_02210b94_Ns::func_ov003_02210d10(o, r.a, r.b, 6, a);
    }
}

extern "C" s32 func_ov003_02210bdc(Obj *o, Msg *m) {
    func_0200ec1c(o, 0);
    u8 *p = (u8 *)m + 0xc;
    Rec2 *rec = (Rec2 *)&o->unk_7d0;
    s32 t = 0;
    void *g = data_020cbb18;
    s32 n;
    if (func_020729bc(g, o->unk_7fc)) {
        n = func_ov003_02218d78();
    } else {
        n = p[0];
    }
    if (func_020729bc(g, o->unk_7fc)) {
        void *q = func_0209750c();
        if (func_020b50e8() == 0 && q != 0 && func_02098044(q, 0x23) != 0 &&
            (func_020b530c(func_020b50dc()) != 0 || func_020b50dc() == 6)) {
            t = 1;
        } else if (func_020851bc(func_020850e0(), 0) != 0) {
            t = 2;
        } else if (func_020851bc(func_020850e0(), 5) != 0) {
            t = 3;
        }
    } else {
        t = p[1];
    }
    u32 u;
    if (n != 0) {
        func_02010358(o, 0x34, 0, 0);
        u = 0;
        o->unk_7f4 = 1;
    } else {
        u = (u8)func_020b1614(o->unk_5c);
        if (u <= 1) {
            func_02010358(o, 0x35, 0, 0);
        } else {
            func_020103b4(o, 0x36, 0, 0);
        }
        o->unk_7f4 = 1;
    }
    rec->b = u;
    rec->a = t;
    func_ov003_02210d08(o->unk_8ec, n, t);
    func_ov003_02218d34(o->unk_5c);
}

extern "C" void func_ov003_02210cfc(u8 *p, u8 *a, u8 *b) {
    *a = p[0];
    *b = p[1];
}

extern "C" void func_ov003_02210d08(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 func_ov003_02210d10(Obj *o, u32 a, u32 b, s32 c, s16 d) {
    Msg m;
    m.func_0200e2c0(0x3b, c, d);
    Rec2 &q = *(Rec2 *)m.unk_0c;
    q.a = a;
    q.b = b;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_02210d54(Obj *o, s32 a, s32 b) {
    Msg m;
    Rec2 &q = *(Rec2 *)m.unk_0c;
    m.func_0200e2c0(0x3b, a, b);
    q.a = 0;
    q.b = 0;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02210d94() {}

extern "C" s32 func_ov003_02210d98(Obj *o, s32 a) {
    return func_ov003_02210dc0(o, 6, a);
}

extern "C" void func_ov003_02210da4(Obj *o) {
    func_0200ec1c(o, 0);
    o->unk_7f4 = 0;
}

extern "C" s32 func_ov003_02210dc0(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x3a, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_02210df8(Obj *o) {
    func_ov003_02210eb4(o);
    func_ov003_02210e40(o);
    func_0201071c(o);
    func_ov003_02210e18(o);
}

extern "C" s32 func_ov003_02210e18(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_ov003_02210dc0(o, 6, -1);
    }
}

extern "C" void func_ov003_02210e40(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 0x32) {
        switch ((s32)o->unk_2d4.mid) {
        case 8:
        case 0xc:
        case 0x16:
        case 0x1b:
        case 0x22:
            func_0200f258(o);
            break;
        }
    } else if (o->unk_700 == 0x33) {
        switch ((s32)o->unk_2d4.mid) {
        case 9:
        case 0x11:
        case 0x1a:
            func_0200f258(o);
            break;
        }
    }
}

extern "C" s32 func_ov003_02210eb4(Obj *o) {
    Rec3 *r = (Rec3 *)&o->unk_7d0;
    u8 *p = &r->cnt;
    if (r->cnt) {
        *p = r->cnt - 1;
        if (*p == 0) {
            func_02010358(o, 0x33, 3, 0);
        }
    } else {
        func_0200f594(o, r->a, r->b, r->c);
    }
}
