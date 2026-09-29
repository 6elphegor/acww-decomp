#include "types.h"

struct Unk_ov004_02220c78_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02220c78_Rec {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
};

class Unk_ov004_02220c78_Msg {
public:
    Unk_ov004_02220c78_Msg();
    ~Unk_ov004_02220c78_Msg();
    void func_0200e2c0(s32 a, s32 b, s32 c);
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_02220c78_Sub2cc {
    u32 unk_00;
};

struct Unk_ov004_02220c78_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02220c78_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02220c78_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x170 - 0x90];
    u8 unk_170[0x50];
    u8 unk_1c0[0x3c];
    u8 unk_1fc;
    u8 pad_1fd[0x2cc - 0x1fd];
    Unk_ov004_02220c78_Sub2cc unk_2cc;
    u8 pad_2d0[0x2d4 - 0x2d0];
    Unk_ov004_02220c78_Bits unk_2d4;
    u8 pad_2d8[0x2e0 - 0x2d8];
    u8 unk_2e0;
    u8 pad_2e1[0x700 - 0x2e1];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_02220c78_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[8];
    u8 pad_8f4[0xc80 - 0x8f4];
    u16 unk_c80;
};

typedef Unk_ov004_02220c78_Obj Obj;
typedef Unk_ov004_02220c78_V3 V3;
typedef Unk_ov004_02220c78_Rec Rec;
typedef Unk_ov004_02220c78_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_020e416c[];
extern u8 data_ov004_02240148[];
extern s16 data_ov004_02240134[];

void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200f594(Obj *o, u32 a, u32 b, s32 c);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, u32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02007c08(Obj *o, u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02010810(Obj *o, V3 *v, void *p);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
void func_02089040(void *p);
void func_020514a4(s32 a);
s32 func_02051508();
void func_02051510(V3 *v);
void func_02010a58(Obj *o, s16 *a);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
u16 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);

void func_ov004_02233d00(V3 *p, s32 a);
void func_ov004_02233d04(V3 *p, s32 a);
void func_ov004_02233074(V3 *p);
void func_ov004_022330a0(V3 *p);
s32 func_ov004_022217c4(Obj *o, s32 a, s32 b, s32 c);
s32 func_ov004_022215a8(Obj *o, s32 a, s32 b);

s32 func_ov004_02220c88(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02220cc8(u32 *p, u32 v);
void func_ov004_02220d84(u8 *p, u8 *out);
void func_ov004_02220d8c(u8 *p, u32 v);
void func_ov004_02220d90(u32 *p, u32 v);
s32 func_ov004_02220d94(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02220dd4(u8 *p, u32 v);
void func_ov004_02220e00(Obj *o);
void func_ov004_02220e48(Obj *o);
void func_ov004_02220ed8(Obj *o);
void func_ov004_02220f8c(u8 *self, u8 *o1, s32 *o2, s32 *o3, u16 *o4);
void func_ov004_02220fb0(u8 *self, u8 b, s32 x, s32 y, s16 h);
void func_ov004_02220fd8(Rec *r, u8 d, u32 a, u32 b, s16 c);
s32 func_ov004_02220ff0(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e);
void func_ov004_02221040(void *r, u8 d, u32 a, u32 b, s16 c);
void func_ov004_02221074(Obj *o);
void func_ov004_022210b0(Obj *o);
void func_ov004_02221110(Obj *o);
void func_ov004_02221208(V3 *d, V3 *s);
s32 func_ov004_02221218(Obj *o, s32 a, s32 b);
void func_ov004_02221290(Obj *o);
void func_ov004_02221340(Obj *o);
void func_ov004_022213f4(V3 *d, V3 *s, u8 b);
s32 func_ov004_02221404(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02221444(u8 *p, u32 v);
void func_ov004_02221464(Obj *o);
s32 func_ov004_022214dc(Obj *o, s32 a, s32 b);
void func_ov004_02221530(Obj *o);
}

extern "C" void func_ov004_02220c78(u8 *a, u8 *b) {
    *b = *a;
}

extern "C" void func_ov004_02220c80(u8 *a, u32 v) {
    *a = v;
}

extern "C" void func_ov004_02220c84(u32 *a, u32 v) {
    *a = v;
}

extern "C" s32 func_ov004_02220c88(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2f, b, c);
    func_ov004_02220cc8((u32 *)&m.unk_0c, a);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02220cc8(u32 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02220ccc(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
}

extern "C" void func_ov004_02220ce0(Obj *o, s32 a) {
    u8 b;
    func_ov004_02220d84(o->unk_8ec, &b);
    func_ov004_02220d94(o, b, 6, a);
}

extern "C" void func_ov004_02220d0c(Obj *o, Msg *m) {
    u32 t = m->unk_0c;
    s32 k;
    func_ov004_02220d90((u32 *)&o->unk_7d0, t);
    func_ov004_02220d8c(o->unk_8ec, t);
    switch (m->unk_0c) {
    case 0:
        k = 0x3b;
        break;
    case 1:
        k = 0x3c;
        break;
    case 2:
        k = 0x3d;
        break;
    }
    func_020103b4(o, k, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        func_ov004_02233d00(&o->unk_5c, o->unk_8e);
    }
}

extern "C" void func_ov004_02220d84(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02220d8c(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02220d90(u32 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02220d94(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2e, b, c);
    func_ov004_02220dd4(&m.unk_0c, a);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02220dd4(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02220dd8(Obj *o) {
    func_ov004_02220ed8(o);
    func_ov004_02220e48(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov004_02220e00(o);
}

extern "C" void func_ov004_02220e00(Obj *o) {
    if (o->unk_700 == 0x1a) return;
    if (o->unk_700 == 0) return;
    if (func_02056654(&o->unk_2cc)) {
        func_0200ec1c(o, 2);
        func_ov004_02220d94(o, o->unk_7d0.unk_0a, 6, -1);
    }
}

static inline BOOL Unk_ov004_02220e48_IsZero(u32 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" void func_ov004_02220e48(Obj *o) {
    s32 k;
    if (o->unk_700 == 0x1a || o->unk_700 == 0) {
        if (Unk_ov004_02220e48_IsZero(o->unk_2d4.mid) < 6) {
            func_0200ec30(o, 2);
            switch (o->unk_7d0.unk_0a) {
            case 0:
                k = 0x3b;
                break;
            case 1:
                k = 0x3c;
                break;
            case 2:
                k = 0x3d;
                break;
            }
            func_02010358(o, k, 3, 0);
            if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
                func_ov004_02233d04(&o->unk_5c, o->unk_8e);
            }
        }
    }
}

extern "C" void func_ov004_02220ed8(Obj *o) {
    Rec *r = &o->unk_7d0;
    func_0200f594(o, r->unk_00, r->unk_04, r->unk_08);
}

extern "C" void func_ov004_02220ef4(Obj *o, s32 a) {
    u8 b;
    u16 h;
    s32 x, y;
    func_ov004_02220f8c(o->unk_8ec, &b, &x, &y, &h);
    func_ov004_02220ff0(o, b, x, y, (s16)h, 6, a);
}

extern "C" void func_ov004_02220f38(Obj *o, Msg *m) {
    Rec *p = (Rec *)&m->unk_0c;
    u8 d = p->unk_0a;
    u32 a = *(u32 *)&m->unk_0c;
    u32 b = p->unk_04;
    s16 c = p->unk_08;
    func_ov004_02220fd8(&o->unk_7d0, d, a, b, c);
    func_ov004_02220fb0(o->unk_8ec, d, a, b, c);
    o->unk_2e0 = 1;
}

extern "C" void func_ov004_02220f8c(u8 *self, u8 *o1, s32 *o2, s32 *o3, u16 *o4) {
    u8 b = self[7];
    *o1 = b;
    func_02076a2c(self, o2, o3);
    *o4 = func_020769ac(self + 5);
}

extern "C" void func_ov004_02220fb0(u8 *self, u8 b, s32 x, s32 y, s16 h) {
    self[7] = b;
    func_02076a6c(self, x, y);
    func_020769c4(self + 5, h);
}

extern "C" void func_ov004_02220fd8(Rec *r, u8 d, u32 a, u32 b, s16 c) {
    r->unk_0a = d;
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
}

extern "C" s32 func_ov004_02220ff0(Obj *o, u8 b, u32 x, u32 y, s16 c, s32 d, s32 e) {
    Msg m;
    m.func_0200e2c0(0x2d, d, *(s16 *)&e);
    func_ov004_02221040(&m.unk_0c, b, x, y, c);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02221040(void *r, u8 d, u32 a, u32 b, s16 c) {
    Rec *p = (Rec *)r;
    p->unk_0a = d;
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
}

extern "C" void func_ov004_02221058(Obj *o) {
    func_ov004_02221110(o);
    func_ov004_022210b0(o);
    func_ov004_02221074(o);
}

extern "C" void func_ov004_02221074(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 0, 1, -1);
    }
}

extern "C" void func_ov004_022210b0(Obj *o) {
    V3 v;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0201071c(o);
    } else {
        V3 *s = (V3 *)&o->unk_7d0;
        v.x = s->x;
        v.y = s->y;
        v.z = s->z;
        func_02010810(o, &v, &o->unk_7ec);
        func_02089040(o->unk_170);
    }
}

extern "C" void func_ov004_02221110(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 0xd)) {
        func_0200ecdc(o, 0x4c6);
    }
}

extern "C" void func_ov004_0222113c(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020514a4(0);
    }
    V3 *s = (V3 *)&o->unk_7d0;
    V3 *d = &o->unk_5c;
    o->unk_5c.x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern "C" void func_ov004_0222117c(Obj *o, s32 a) {
    s32 t = o->unk_7ec;
    if ((u32)(t - 0x29) <= 1) return;
    if (t == 0x2c) {
        o->unk_c80 = a;
    } else {
        func_ov004_02221218(o, 6, a);
    }
}

static inline BOOL Unk_ov004_022211ac_Flag() {
    if (data_020e416c[0] == 1) return TRUE;
    return FALSE;
}

extern "C" void func_ov004_022211ac(Obj *o) {
    V3 v;
    func_02010358(o, 0x27, 0, 0);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_02240148);
    func_ov004_02221208((V3 *)&o->unk_7d0, &v);
    if (Unk_ov004_022211ac_Flag()) {
        func_ov004_02233074(&o->unk_5c);
    }
}

extern "C" void func_ov004_02221208(V3 *d, V3 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

extern "C" s32 func_ov004_02221218(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x2c, a, b);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02221250(Obj *o) {
    if (Unk_ov004_022211ac_Flag()) {
        func_ov004_022330a0(&o->unk_5c);
    }
    func_02010914(o);
    func_0201071c(o);
    func_ov004_02221290(o);
    func_ov004_02221340(o);
}

extern "C" void func_ov004_02221290(Obj *o) {
    Rec *r;
    switch (func_02051508()) {
    case 0:
        return;
    case 1:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        break;
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_ov004_022217c4(o, 3, 6, -1);
        return;
    }
    r = &o->unk_7d0;
    if (o->unk_1fc != 0) {
        func_ov004_022217c4(o, 3, 6, -1);
        return;
    }
    switch (r->unk_0c) {
    case 0:
        func_ov004_02221218(o, 6, -1);
        break;
    case 1:
        func_ov004_022214dc(o, 6, -1);
        break;
    case 2:
        func_ov004_022215a8(o, 6, -1);
        break;
    }
}

extern "C" void func_ov004_02221340(Obj *o) {
    V3 v;
    V3 *s = (V3 *)&o->unk_7d0;
    v.x = s->x;
    v.y = s->y;
    v.z = s->z;
    func_02010740(o, &v, 0x1000, 0x1000);
    func_02089040(o->unk_1c0);
}

extern "C" void func_ov004_0222137c() {
}

extern "C" void func_ov004_02221380(Obj *o, Msg *m) {
    V3 pos;
    V3 tmp;
    s16 t;
    u8 idx = m->unk_0c;
    t = o->unk_8e - data_ov004_02240134[idx];
    func_0200f3ec(&pos, o, &o->unk_5c, &t, (u32)data_ov004_02240148);
    tmp.x = pos.x;
    tmp.y = pos.y;
    tmp.z = pos.z;
    func_ov004_022213f4((V3 *)&o->unk_7d0, &tmp, idx);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02051510(&pos);
    }
}

extern "C" void func_ov004_022213f4(V3 *d, V3 *s, u8 b) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    ((u8 *)d)[0xc] = b;
}

extern "C" s32 func_ov004_02221404(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0x2b, b, c);
    func_ov004_02221444(&m.unk_0c, a);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02221444(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02221448(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov004_02221464(o);
}

extern "C" void func_ov004_02221464(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov004_02221218(o, 6, -1);
    }
}

extern "C" void func_ov004_0222148c(Obj *o) {
    func_02010a58(o, (s16 *)&o->unk_7d0);
}

extern "C" s32 func_ov004_0222149c(Obj *o, s32 a) {
    return func_ov004_022214dc(o, 6, a);
}

extern "C" void func_ov004_022214a8(Obj *o) {
    s32 t = o->unk_8e;
    t += 0x4000;
    *(u16 *)&o->unk_7d0 = t;
    func_02010358(o, 0x25, 0, 0);
    func_0200ecdc(o, 0x4c9);
}

extern "C" s32 func_ov004_022214dc(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x2a, a, b);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02221514(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov004_02221530(o);
}

extern "C" void func_ov004_02221530(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov004_02221218(o, 6, -1);
    }
}

extern "C" void func_ov004_02221558(Obj *o) {
    func_02010a58(o, (s16 *)&o->unk_7d0);
}

extern "C" s32 func_ov004_02221568(Obj *o, s32 a) {
    return func_ov004_022215a8(o, 6, a);
}

extern "C" void func_ov004_02221574(Obj *o) {
    s32 t = o->unk_8e;
    t -= 0x4000;
    *(u16 *)&o->unk_7d0 = t;
    func_02010358(o, 0x26, 0, 0);
    func_0200ecdc(o, 0x4c9);
}
