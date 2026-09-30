#include "types.h"

struct Unk_ov003_02210ef0_V3 {
    s32 x, y, z;
    Unk_ov003_02210ef0_V3() {}
    Unk_ov003_02210ef0_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_02210ef0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02210ef0_Pair {
    s32 a, b;
    Unk_ov003_02210ef0_Pair() {}
    Unk_ov003_02210ef0_Pair(s32 x, s32 y) {
        a = x;
        b = y;
    }
};

struct Unk_ov003_02210ef0_Rec {
    s32 a, b;
    s16 c;
    u8 d, e;
};

struct Unk_ov003_02210ef0_Rec2 {
    u8 a, b;
};

class Unk_ov003_02210ef0_Msg {
public:
    Unk_ov003_02210ef0_Msg();
    ~Unk_ov003_02210ef0_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov003_02210ef0_Rec unk_0c;
    u8 pad_18[0x1c - 0x18];
};

struct Unk_ov003_02210ef0_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02210ef0_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u8 unk_2cc[8];
    Unk_ov003_02210ef0_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x7d0 - 0x59c];
    Unk_ov003_02210ef0_Rec unk_7d0;
    u8 unk_7dc;
    u8 pad_7dd[0x7ec - 0x7dd];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x814 - 0x800];
    s32 unk_814;
    u8 pad_818[0x81c - 0x818];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x8ec - 0x820];
    u8 unk_8ec[0xc];
    u8 pad_8f8[0xc80 - 0x8f8];
    u16 unk_c80;
};

namespace Unk_ov003_02210f7c_Ns {
extern "C" void func_ov003_0221107c(struct Unk_ov003_02210ef0_Rec *p, u32 a, s32 b, s32 c, s16 d, u32 e);
}

typedef Unk_ov003_02210ef0_Obj Obj;
typedef Unk_ov003_02210ef0_V3 V3;
typedef Unk_ov003_02210ef0_Msg Msg;
typedef Unk_ov003_02210ef0_Rec Rec;
typedef Unk_ov003_02210ef0_Pair Pair;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;

s32 func_02095670(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
void func_02076a2c(void *p, s32 *a, s32 *b);
void func_02076a6c(void *p, s32 a, s32 b);
u32 func_020769ac(void *p);
void func_020769c4(void *p, s32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_02010358(Obj *o, u32 a, u32 b, u32 c);
s32 func_020103b4(Obj *o, u32 a, u32 b);
s32 func_020729bc(void *g, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
s32 func_0200f594(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200f5b0(Obj *o);
s32 func_0200ede8(Obj *o, V3 *v);
s32 func_0200eee4(Obj *o, Pair *p);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0204ee10(s32 *a, s32 *b, V3 *c);
s32 func_02090330(s32 a, V3 *b, s16 *c, s32 d);
s32 func_0209028c(s32 a, V3 *b, s32 c, s32 d);
void func_01ffca8c(V3 *a, V3 *b, V3 *c);
s32 func_0204407c(u16 *a, Pair *b, s32 c, s32 d);
void func_02045570(Pair *a, s32 b);
void func_0204ed8c(V3 *a, u32 b, u32 c);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
s32 func_ov003_02218d50(void *p, s32 a);
s32 func_ov003_02205c28(Obj *o);
void func_ov003_02211878(void *p, Pair *q);
s32 func_ov003_02211890(Obj *o, Pair *q, s32 a, s32 b);

void func_ov003_02211030(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e);
void func_ov003_02211054(u8 *p, u32 a, s32 b, s32 c, s16 e);
void func_ov003_0221107c(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e);
s32 func_ov003_02211098(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f);
void func_ov003_022110e8(Rec *p, u32 a, s32 b, s32 c, s16 d);
void func_ov003_022111a0(Obj *o);
void func_ov003_02211164(Obj *o);
void func_ov003_02211120(Obj *o);
void func_ov003_0221125c(u8 *p, s32 *a, s32 *b, s16 *c);
void func_ov003_02211278(u8 *p, s32 a, s32 b, s16 c);
void func_ov003_02211294(Rec *p, s32 a, s32 b, s16 c);
s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e);
void func_ov003_022112e4(Rec *p, s32 a, s32 b, s16 c);
void func_ov003_02211594(Obj *o);
void func_ov003_0221132c(Obj *o);
s32 func_ov003_022113a4(Obj *o);
s32 func_ov003_02211674(Obj *o, s32 *p, s32 a, s32 b);
void func_ov003_02211798(Obj *o);
void func_ov003_02211710(Obj *o);
}

extern "C" void func_ov003_02210ef0(Obj *o, s32 x) {
    if ((u32)(o->unk_7ec - 0x38) <= 2) {
        o->unk_c80 = x;
    } else {
        u8 a;
        u8 f;
        s16 ang;
        s32 o1, o2;
        V3 pos;
        func_ov003_02211030(o->unk_8ec, &a, &pos.x, &pos.z, (u16 *)&ang);
        pos.y = o->unk_5c.y;
        if (func_02095670(&f, &o1, &o2, -1, o->unk_7fc)) {
            o->unk_5c.x = o1;
            o->unk_5c.z = o2;
        }
        o->unk_8e = ang;
        func_ov003_02211098(o, a, pos.x, pos.z, ang, 6, x);
    }
}

extern "C" void func_ov003_02210f7c(Obj *o, Msg *m) {
    func_0200ec30(o, 4);
    u8 *p = (u8 *)m + 0xc;
    Rec *r = &o->unk_7d0;
    s32 z = 0;
    s32 k = z;
    switch (p[0xa]) {
    case 0:
        func_02010358(o, 0x33, 3, 0);
        break;
    case 1:
        func_02010358(o, 0x32, 3, 0);
        break;
    case 2:
        k = 0xc;
        func_020103b4(o, z, 3);
        break;
    }
    u32 id = p[0xa];
    Pair t = *(Pair *)p;
    s16 ang = *(s16 *)(p + 8);
    Unk_ov003_02210f7c_Ns::func_ov003_0221107c(r, id, t.a, t.b, ang, k);
    func_ov003_02211054(o->unk_8ec, id, t.a, t.b, ang);
    s32 b = func_020729bc(data_020cbb18, o->unk_7fc) ? 1 : 0;
    func_ov003_02218d50(&o->unk_5c, b);
}

extern "C" void func_ov003_02211030(u8 *p, u8 *a, s32 *b, s32 *c, u16 *e) {
    *a = p[7];
    func_02076a2c(p, b, c);
    *e = func_020769ac(p + 5);
}

extern "C" void func_ov003_02211054(u8 *p, u32 a, s32 b, s32 c, s16 e) {
    p[7] = a;
    func_02076a6c(p, b, c);
    func_020769c4(p + 5, e);
}

extern "C" void func_ov003_0221107c(Rec *p, u32 a, s32 b, s32 c, s16 d, u8 e) {
    p->d = a;
    p->a = b;
    p->b = c;
    p->c = d;
    p->e = e;
}

extern "C" s32 func_ov003_02211098(Obj *o, u8 a, s32 b, s32 c, s16 d, s32 e, s32 f) {
    Msg m;
    m.func_0200e2c0(0x39, e, *(s16 *)&f);
    func_ov003_022110e8(&m.unk_0c, a, b, c, d);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022110e8(Rec *p, u32 a, s32 b, s32 c, s16 d) {
    p->d = a;
    p->a = b;
    p->b = c;
    p->c = d;
}

extern "C" void func_ov003_02211100(Obj *o) {
    func_ov003_022111a0(o);
    func_ov003_02211164(o);
    func_0201071c(o);
    func_ov003_02211120(o);
}

extern "C" void func_ov003_02211120(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        Rec *r = &o->unk_7d0;
        func_ov003_02211098(o, 1, r->a, r->b, r->c, 6, -1);
    }
}

extern "C" void func_ov003_02211164(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 8) || func_020565e8(o->unk_2cc, 0xd)) {
        func_0200ecdc(o, 0x7d5);
    }
}

extern "C" void func_ov003_022111a0(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->a, r->b, r->c);
}

extern "C" void func_ov003_022111bc(Obj *o, s32 x) {
    s16 ang;
    V3 pos;
    func_ov003_0221125c(o->unk_8ec, &pos.x, &pos.z, &ang);
    pos.y = o->unk_5c.y;
    V3 *pv = &o->unk_5c;
    *pv = pos;
    o->unk_8e = ang;
    func_ov003_0221129c(o, pos.x, pos.z, ang, 6, x);
}

extern "C" void func_ov003_02211210(Obj *o, Msg *m) {
    u8 *p = (u8 *)m + 0xc;
    func_02010358(o, 0x37, 3, 0);
    s32 a = *(s32 *)p;
    s32 b = *(s32 *)(p + 4);
    s16 c = *(s16 *)(p + 8);
    func_ov003_02211294(&o->unk_7d0, a, b, c);
    func_ov003_02211278(o->unk_8ec, a, b, c);
}

extern "C" void func_ov003_0221125c(u8 *p, s32 *a, s32 *b, s16 *c) {
    func_02076a2c(p, a, b);
    *c = func_020769ac(p + 5);
}

extern "C" void func_ov003_02211278(u8 *p, s32 a, s32 b, s16 c) {
    func_02076a6c(p, a, b);
    func_020769c4(p + 5, c);
}

extern "C" void func_ov003_02211294(Rec *p, s32 a, s32 b, s16 c) {
    p->a = a;
    p->b = b;
    p->c = c;
}

extern "C" s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s16 c, s32 d, s32 e) {
    Msg m;
    m.func_0200e2c0(0x38, d, *(s16 *)&e);
    func_ov003_022112e4(&m.unk_0c, a, b, c);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022112e4(Rec *p, s32 a, s32 b, s16 c) {
    p->a = a;
    p->b = b;
    p->c = c;
}

extern "C" void func_ov003_022112ec(Obj *o) {
    func_ov003_02211594(o);
    V3 *pv = (V3 *)&o->unk_7d0;
    V3 v = *pv;
    func_0200ede8(o, &v);
    func_0201071c(o);
    func_0201065c(o);
    func_ov003_0221132c(o);
}

extern "C" void func_ov003_0221132c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (o->unk_2d4.mid >= 0xe) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_ov003_02205c28(o);
        } else {
            func_0200ec1c(o, 0x12);
        }
    }
}

extern "C" s32 func_ov003_022113a4(Obj *o) {
    s16 ang;
    u16 t2;
    Pair ab;
    V3 *pv = (V3 *)&o->unk_7d0;
    V3 v = *pv;
    ab.a = 0;
    ab.b = 0;
    func_0204ee10(&ab.a, &ab.b, &v);
    ang = o->unk_8e;
    switch (o->unk_81c) {
    case 0x1f:
        func_02090330(0x2e, &v, &ang, 0);
        break;
    case 0x20:
        func_02090330(0x2f, &v, &ang, 0);
        break;
    case 0x21: {
        V3 t(0, 0, -0x800);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    case 0x22: {
        V3 t(-0x800, 0, 0);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    case 0x23: {
        V3 t(0x800, 0, 0xc00);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    case 0x24: {
        V3 t(-0x800, 0, 0);
        func_01ffca8c(&v, &t, &v);
        func_02090330(0x2d, &v, &ang, 0);
        break;
    }
    default: {
        u32 w = o->unk_81c;
        if ((w >= 0x6e && w <= 0x73) || (w >= 0x74 && w <= 0x79) || (w >= 0x7a && w <= 0x7f) ||
            (w >= 0x80 && w <= 0x87) || w == 0x88 || w == 0x89 || (w >= 0x8a && w <= 0x8f) ||
            (w >= 0x90 && w <= 0x95) || (w >= 0x96 && w <= 0x9b) || (w >= 0x9c && w <= 0xa3)) {
            goto hit;
        }
        if (w != 0xa5 && w != 0xa4) {
            break;
        }
    hit:
        func_0209028c(0x54, &v, 0, 0);
        t2 = o->unk_81c;
        Pair c(ab.a, ab.b);
        func_0204407c(&t2, &c, o->unk_8e, 2);
        func_0200ecdc(o, 0x7d8);
        break;
    }
    }
    switch (o->unk_81c) {
    case 0x1f:
    case 0x20:
        func_0200ecdc(o, 0x7d8);
        break;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
        func_0200ecdc(o, 0x7ec);
        break;
    }
    Pair d(ab.a, ab.b);
    func_02045570(&d, 0);
    func_0200ec1c(o, 0x1c);
}

extern "C" void func_ov003_02211594(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0xa)) {
        func_ov003_022113a4(o);
    }
}

extern "C" void func_ov003_022115bc(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        if (func_0200ec44(o, 0x1c)) {
            func_ov003_022113a4(o);
        }
    }
}

extern "C" void func_ov003_022115f0() {
}

extern "C" void func_ov003_022115f4(Obj *o, Msg *m) {
    u8 *p = (u8 *)m + 0xc;
    V3 v;
    func_0204ed8c(&v, p[0], p[1]);
    V3 *pv = (V3 *)&o->unk_7d0;
    *pv = v;
    ((u8 *)pv)[12] = 0;
    func_02010358(o, 0x14, 3, 0);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0xe, 3, 0);
    }
    u16 *g = func_0204eba0(data_021c47c4, &v, 0);
    o->unk_81e = *g;
    o->unk_81c = o->unk_81e;
}

extern "C" s32 func_ov003_02211674(Obj *o, s32 *p, s32 a, s32 b) {
    Msg m;
    Unk_ov003_02210ef0_Rec2 &q = *(Unk_ov003_02210ef0_Rec2 *)&m.unk_0c;
    m.func_0200e2c0(0x17, a, b);
    q.a = p[0];
    q.b = p[1];
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022116b8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_02211798(o);
    } else {
        func_02010914(o);
        u8 *r = (u8 *)&o->unk_7d0;
        s32 y = r[1];
        s32 x = r[0];
        Pair q(x, y);
        func_0200eee4(o, &q);
    }
    func_0201071c(o);
    func_ov003_02211710(o);
}

extern "C" void func_ov003_02211710(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
    u8 *r = (u8 *)&o->unk_7d0;
    switch (r[2]) {
    case 0:
        break;
    case 1: {
        s32 y = r[1];
        s32 x = r[0];
        Pair q(x, y);
        func_ov003_02211674(o, (s32 *)&q, 6, -1);
        break;
    }
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        break;
    }
}

extern "C" void func_ov003_02211798(Obj *o) {
    u8 *r = (u8 *)&o->unk_7d0;
    if (r[2] == 0) {
        s32 t = o->unk_814;
        if (t == 2) {
            r[2] = 2;
        } else if (t == 1) {
            r[2] = 1;
        }
    }
    func_02010914(o);
}

extern "C" void func_ov003_022117c8(Obj *o, s32 x) {
    if (o->unk_7ec == 0x16) {
        o->unk_c80 = x;
    } else {
        Pair p(0, 0);
        func_ov003_02211878(o->unk_8ec, &p);
        Pair q = p;
        func_ov003_02211890(o, &q, 6, x);
    }
}
