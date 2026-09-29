#include "types.h"

struct Unk_ov004_0221f0b8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0221f0b8_Rec {
    Unk_ov004_0221f0b8_V3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
};

class Unk_ov004_0221f0b8_Msg {
public:
    Unk_ov004_0221f0b8_Msg();
    ~Unk_ov004_0221f0b8_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov004_0221f0b8_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_0221f0b8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_0221f0b8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0x2cc - 0x9c];
    s32 unk_2cc;
    s32 unk_2d0;
    u8 pad_2d4[0x2dc - 0x2d4];
    s32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_0221f0b8_Rec unk_7d0;
    u8 pad_7e8[0x7ec - 0x7e8];
    s32 unk_7ec;
    u8 pad_7f0[0x7f4 - 0x7f0];
    s32 unk_7f4;
    s32 unk_7f8;
    u32 unk_7fc;
    s32 unk_800;
    u8 pad_804[0x8ec - 0x804];
    u32 unk_8ec[4];
};

typedef Unk_ov004_0221f0b8_Obj Obj;
typedef Unk_ov004_0221f0b8_V3 V3;
typedef Unk_ov004_0221f0b8_Rec Rec;
typedef Unk_ov004_0221f0b8_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov004_0224d4a4[];
extern u8 data_ov004_0224d4b0[];
extern u8 data_ov004_0224d4b4[];

s32 func_01ffcb0c(s32 a, s32 b);
void func_02010380(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_02010a34(Obj *o, u8 *a);
s32 func_02010914(Obj *o);
void func_020109ac(Obj *o);
void func_0201071c(Obj *o);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_020729bc(void *g, u32 a);
s32 func_0203d76c();
s32 func_020b0ef4();
void func_020b0e60();
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
s32 func_020b52f8();
s32 func_020b51a4();
s32 func_0200e7c0(Obj *o);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02053f20(void *p);
s32 func_0200f32c(Obj *o);
s32 func_02056654(void *p);
s32 func_0205668c(void *p, u32 a, u32 b, u32 c, u32 d);
s32 func_0200ef08(Obj *o);
s32 func_0200f594(Obj *o, s32 a, s32 b, s32 c);
void func_0200f45c(V3 *out, Obj *o);
s32 func_0200d640(Obj *o);
s32 func_0200d5fc(Obj *o);
s32 func_02063c18(s16 a);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);

s32 func_ov004_0221e7a8(Obj *o, V3 *tgt, s32 *out, s32 *lim);
s32 func_ov004_022217c4(Obj *o, s32 a, s32 b, s32 c);
s32 func_ov004_02221218(Obj *o, s32 a, s32 b);
s32 func_ov004_0222a2c0();
s32 func_ov004_022296ac();
s32 func_ov004_02229660();
s32 func_ov004_022296f8();
void func_ov004_0221fa00(Obj *o);

void func_ov004_0221f1d0(void *a, s32 *b, s32 *c);
void func_ov004_0221f1d8(void *a, s32 b, s32 c);
void func_ov004_0221f1e0(Rec *r, V3 v, s32 a, s32 b, u8 c);
s32 func_ov004_0221f204(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221f244(V3 *d, V3 v);
void func_ov004_0221f280(Obj *o);
void func_ov004_0221f2e8(Obj *o);
void func_ov004_0221f370(Obj *o);
void func_ov004_0221f5c0(void *a, s32 *b, s32 *c);
void func_ov004_0221f5c8(void *a, s32 b, s32 c);
void func_ov004_0221f5d0(Rec *r, V3 v, s32 a, u32 b, u8 c);
s32 func_ov004_0221f5f4(Obj *o, V3 *v, u32 a, u32 b);
void func_ov004_0221f634(V3 *d, V3 v);
void func_ov004_0221f65c(Obj *o);
s32 func_ov004_0221f730(Obj *o);
s32 func_ov004_0221f7c4(Obj *o, u32 a, u32 b);
s32 func_ov004_0221f840(Obj *o, u32 a, u32 b);
void func_ov004_0221f898(Obj *o);
void func_ov004_0221f8c0(Obj *o);
s32 func_ov004_0221f96c(Obj *o, u32 a, u32 b);
void func_ov004_0221f958(V3 *d, V3 v);
void func_ov004_0221f9b8(Obj *o);
}

extern "C" void func_ov004_0221f0b8(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221f1d0(&o->unk_8ec, &v.x, &v.z);
    func_ov004_0221f204(o, &v, 6, a);
}

extern "C" void func_ov004_0221f0e4(Obj *o, Obj *arg) {
    V3 c;
    V3 *r6 = (V3 *)((u8 *)arg + 0xc);
    if (o->unk_700 != 1) func_020103b4(o, 1, 3, 0);
    u32 r5 = 0;
    s32 r7 = func_020b0ef4();
    switch (r7) {
    case 2:
        r5 = 0x4cb;
        break;
    case 1:
        r5 = 0x4d2;
        break;
    case 0:
    case 3:
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_020b4bbc(func_020b4934(), o->unk_800);
        }
        break;
    }
    if (r5 != 0) {
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            func_0200ecdc(o, r5);
            if (r5 == 0x4cb) func_020b0e60();
        }
    }
    c.x = r6->x;
    c.y = r6->y;
    c.z = r6->z;
    func_ov004_0221f1e0(&o->unk_7d0, c, o->unk_98, 0x400, (u8)r7);
    func_ov004_0221f1d8(&o->unk_8ec, c.x, c.z);
}

extern "C" void func_ov004_0221f1d0(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221f1d8(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221f1e0(Rec *r, V3 v, s32 a, s32 b, u8 c) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = a;
    r->unk_10 = b;
    r->unk_14 = 0;
    r->unk_15 = c;
}

extern "C" s32 func_ov004_0221f204(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8c, a, b);
    func_ov004_0221f244(&m.unk_0c, *v);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221f244(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void func_ov004_0221f258(Obj *o) {
    func_ov004_0221f370(o);
    func_ov004_0221f2e8(o);
    func_020109ac(o);
    func_0201071c(o);
    func_ov004_0221f280(o);
}

extern "C" void func_ov004_0221f280(Obj *o) {
    if (o->unk_98 == 0 && o->unk_7f4 == 1) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 5, -1);
        func_0200ec1c(o, 5);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_0203d76c();
        }
    }
}

extern "C" void func_ov004_0221f2e8(Obj *o) {
    s32 r4 = o->unk_98;
    s32 t = func_01ffcb0c(r4, 0x3ae1);
    if (t < 0x800) t = 0x800;
    if (t <= o->unk_2d0) o->unk_2dc = t;
    if (r4 > 0x53f) {
        if (o->unk_700 != 2) func_02010380(o, 2, 3, 0);
    } else {
        if (o->unk_700 != 1) func_02010380(o, 1, 3, 0);
    }
    func_02053f20((u8 *)o + 0x230);
    func_0200f32c(o);
}

extern "C" void func_ov004_0221f370(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    V3 v;
    s32 lim;
    u8 *p = &r4->unk_14;
    if (r4->unk_14 != 0) {
        *p = r4->unk_14 - 1;
        if (r4->unk_15 == 2) {
            if (*p != 0) return;
            if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
                func_020b0e60();
                func_0200ecdc(o, 0x4cb);
            }
            o->unk_7f4 = 1;
            func_02010a34(o, data_ov004_0224d4b0);
            r4->unk_0c = 0x400;
        } else {
            u32 c = *p;
            if (c > 0xa) return;
            if (c == 0xa) {
                o->unk_7f4 = 1;
                func_02010a34(o, data_ov004_0224d4a4);
                r4->unk_0c = 0x400;
            } else if (c == 0) {
                if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
                    func_0200ecdc(o, 0x4d3);
                }
            }
        }
    }
    lim = r4->unk_10;
    v.x = r4->unk_00.x;
    v.y = r4->unk_00.y;
    v.z = r4->unk_00.z;
    func_ov004_0221e7a8(o, &v, &r4->unk_0c, &lim);
}

extern "C" void func_ov004_0221f448(Obj *o, u32 a) {
    V3 v;
    func_ov004_0221f5c0(&o->unk_8ec, &v.x, &v.z);
    func_ov004_0221f5f4(o, &v, 6, a);
}

extern "C" void func_ov004_0221f474(Obj *o, Obj *arg) {
    V3 c;
    V3 *r6 = (V3 *)((u8 *)arg + 0xc);
    Rec *r0c = &o->unk_7d0;
    func_020103b4(o, 1, 0, 0);
    s32 r7 = 0;
    o->unk_2dc = r7;
    u32 r5 = r7;
    s32 mode = func_020b0ef4();
    o->unk_7f4 = 1;
    switch (mode) {
    case 2:
        if ((func_0200e7c0(o) && func_020b52f8()) || func_020b51a4()) {
            r7 = 0x14;
            r5 = 0x4ca;
            o->unk_7f4 = 0;
        } else {
            r5 = 0x4cb;
        }
        break;
    case 1:
        r5 = 0x4d2;
        r7 = 0x14;
        o->unk_7f4 = 0;
        break;
    case 0:
    case 3:
        break;
    }
    void *r14 = &o->unk_8ec;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        V3 *pv = &o->unk_5c;
        c.x = pv->x;
        c.y = pv->y;
        c.z = pv->z;
        func_ov004_0221f5c8(r14, c.x, c.z);
        o->unk_5c.z = o->unk_5c.z + 0x6000;
    } else {
        if (r5 != 0) {
            func_0200ecdc(o, r5);
            if (r5 == 0x4cb) func_020b0e60();
        }
        c.x = r6->x;
        c.y = r6->y;
        c.z = r6->z;
        o->unk_5c.z = c.z + 0x6000;
    }
    func_ov004_0221f5d0(r0c, c, 0x400, r7, (u8)mode);
    if (o->unk_7f4 == 1) {
        func_02010a34(o, data_ov004_0224d4b4);
        r0c->unk_0c = 0x400;
    }
    func_0200ec30(o, 5);
}

extern "C" void func_ov004_0221f5c0(void *a, s32 *b, s32 *c) {
    func_02076a2c(a, b, c);
}

extern "C" void func_ov004_0221f5c8(void *a, s32 b, s32 c) {
    func_02076a6c(a, b, c);
}

extern "C" void func_ov004_0221f5d0(Rec *r, V3 v, s32 a, u32 b, u8 c) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = 0;
    r->unk_10 = a;
    r->unk_14 = *(u8 *)&b;
    r->unk_15 = c;
}

extern "C" s32 func_ov004_0221f5f4(Obj *o, V3 *v, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8b, a, b);
    func_ov004_0221f634(&m.unk_0c, *v);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221f634(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" void func_ov004_0221f648(Obj *o) {
    func_02010914(o);
    func_ov004_0221f65c(o);
}

extern "C" void func_ov004_0221f65c(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        switch (o->unk_700) {
        case 0x95:
            func_02010358(o, 0x96, 0, 0);
            break;
        case 0x96:
            func_02010358(o, 0x97, 0, 0);
            break;
        case 0x97:
            break;
        case 0x98:
            func_ov004_022217c4(o, 0, 6, -1);
            break;
        }
    }
}

extern "C" void func_ov004_0221f6c4() {
}

extern "C" void func_ov004_0221f6c8(Obj *o) {
    func_02010358(o, 0x95, 3, 0);
}

extern "C" s32 func_ov004_0221f6dc(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x8a, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221f714(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov004_0221f730(o);
}

extern "C" s32 func_ov004_0221f730(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" void func_ov004_0221f770(Obj *o, u32 a) {
    func_ov004_0221f7c4(o, 6, a);
}

extern "C" void func_ov004_0221f77c(Obj *o) {
    func_02010358(o, 0x78, 3, 0);
    u32 t = (u32)(o->unk_2d0 << 4) >> 16;
    func_0205668c(&o->unk_2cc, t, 3, 0x1000, (u16)(t - 1));
    func_ov004_0222a2c0();
    func_ov004_022296ac();
}

extern "C" s32 func_ov004_0221f7c4(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7f, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221f7fc(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_0200ef08(o);
}

extern "C" void func_ov004_0221f818(Obj *o, u32 a) {
    func_ov004_0221f840(o, 6, a);
}

extern "C" void func_ov004_0221f824(Obj *o) {
    func_020103b4(o, 0x79, 3, 0);
    func_ov004_0222a2c0();
    func_ov004_02229660();
}

extern "C" s32 func_ov004_0221f840(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7e, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221f878(Obj *o) {
    func_ov004_0221f8c0(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov004_0221f898(o);
}

extern "C" void func_ov004_0221f898(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov004_0221f840(o, 6, -1);
    }
}

extern "C" void func_ov004_0221f8c0(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0200f594(o, r4->unk_00.x, r4->unk_00.z, -0x8000);
    } else {
        func_0200ef08(o);
    }
}

extern "C" void func_ov004_0221f908(Obj *o, u32 a) {
    func_ov004_0221f96c(o, 6, a);
}

extern "C" void func_ov004_0221f914(Obj *o) {
    V3 v;
    func_02010358(o, 0x78, 3, 0);
    func_0200f45c(&v, o);
    v.z = v.z + 0x2000;
    func_ov004_0221f958((V3 *)&o->unk_7d0, v);
    func_ov004_0222a2c0();
    func_ov004_022296f8();
}

extern "C" void func_ov004_0221f958(V3 *d, V3 v) {
    d->x = v.x;
    d->y = v.y;
    d->z = v.z;
}

extern "C" s32 func_ov004_0221f96c(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x7d, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_0221f9a4(Obj *o) {
    func_ov004_0221fa00(o);
    func_ov004_0221f9b8(o);
}

extern "C" void func_ov004_0221f9b8(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        if (func_0200d640(o) > 0) {
            s32 t = func_0200d5fc(o) - o->unk_8e;
            if (func_02063c18((s16)t) == 0) {
                func_ov004_02221218(o, 6, -1);
            }
        }
    }
}
