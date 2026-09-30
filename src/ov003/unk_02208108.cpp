#include "types.h"

struct Unk_ov003_02208190_V3 {
    s32 x, y, z;
    Unk_ov003_02208190_V3() {}
    Unk_ov003_02208190_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_02208190_V3(const Unk_ov003_02208190_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

struct Unk_ov003_02208190_Pair {
    s32 a, b;
    Unk_ov003_02208190_Pair() {}
    Unk_ov003_02208190_Pair(const Unk_ov003_02208190_Pair &o) { a = o.a; b = o.b; }
};

struct Unk_ov003_02208190_RecA {
    s32 unk_00;
    s32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
};

struct Unk_ov003_02208190_RecC {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
};

struct Unk_ov003_02208190_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02208190_V3D : Unk_ov003_02208190_V3 {
    Unk_ov003_02208190_V3D(s32 a, s32 b, s32 c) : Unk_ov003_02208190_V3(a, b, c) {}
    ~Unk_ov003_02208190_V3D() {}
};

struct Unk_ov003_02208190_VV {
    volatile s32 x, y, z;
    Unk_ov003_02208190_VV(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

struct Unk_ov003_02208190_VD : Unk_ov003_02208190_V3 {
    Unk_ov003_02208190_VD() {}
    ~Unk_ov003_02208190_VD() {}
};

typedef Unk_ov003_02208190_V3 V3;
typedef Unk_ov003_02208190_VV VV;
typedef Unk_ov003_02208190_VD VD;
typedef Unk_ov003_02208190_V3D V3D;
typedef Unk_ov003_02208190_Pair Pair;
typedef Unk_ov003_02208190_RecA RecA;
typedef Unk_ov003_02208190_RecC RecC;

class Unk_ov003_02208190_Msg {
public:
    Unk_ov003_02208190_Msg();
    ~Unk_ov003_02208190_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};

struct Unk_ov003_02208190_Obj {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2cc - 0x90];
    u8 unk_2cc[8];
    Unk_ov003_02208190_Bits unk_2d4;
    u8 pad_2d8[0x2e0 - 0x2d8];
    u8 unk_2e0;
    u8 pad_2e1[0x700 - 0x2e1];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    s32 unk_7d0;
    u8 pad_7d4[0x7ec - 0x7d4];
    s32 unk_7ec;
    s32 unk_7f0;
    s32 unk_7f4;
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x814 - 0x800];
    s32 unk_814;
    u8 pad_818[0x8ec - 0x818];
    u8 unk_8ec[0x10];
    u8 pad_8fc[0xc80 - 0x8fc];
    u16 unk_c80;
};

typedef Unk_ov003_02208190_Msg Msg;
typedef Unk_ov003_02208190_Obj Obj;

extern "C" {
extern void *data_020cbb18;

s32 func_0200e248(Obj *o, Msg *m);
void *func_02007c08(Obj *o, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_020729bc(void *g, s32 a);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0200ede8(Obj *o, V3 *v);
void func_02010d98(void *a, s32 b);
void func_02010a58(Obj *o, s16 *a);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
void func_020103b4(Obj *o, s32 a, s32 b, s32 c);
void func_0200ec1c(Obj *o, s32 a);
s32 func_0200ec44(Obj *o, s32 a);
void func_0200ec30(Obj *o, s32 a);
void func_0200ecdc(Obj *o, s32 a);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_0204edd8(V3 *out, s32 a);
void func_0204ed8c(V3 *out, s32 a, s32 b);
void func_02090330(s32 a, void *b, void *c, s32 d);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020e7b98(s32 a, s32 b);

void func_ov003_0221bf88(s32 a, Pair p);
void func_ov003_0221cd34(s32 a, Pair p, s32 b);
void func_ov003_0221977c(s32 a, V3 v);
void func_ov003_02205c28(Obj *o);
void func_ov003_02208a58(void *a, Pair *p);
void func_ov003_02208a64(void *a, Pair *p);
void func_ov003_02208a70(RecA *r, u32 a, s32 ang, V3 v);
void func_ov003_02208a88(Obj *o, Pair p, s32 a, s32 b, s32 c);

void func_ov003_02208108(void *p, s16 a, s32 b, s32 c, u8 d, u8 e);
s32 func_ov003_0220812c(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d);
void func_ov003_0220817c(void *p, s32 a, s32 b, u8 c, u8 d);
void func_ov003_02208190(Obj *o);
void func_ov003_02208248(Obj *o);
void func_ov003_022082a4(Obj *o);
void func_ov003_0220832c(Obj *o);
void func_ov003_02208358(Obj *o);
void func_ov003_022083bc(Obj *o, s32 a);
void func_ov003_02208420(Obj *o, u8 *m);
void func_ov003_022084a8(u8 *p, s32 *a, s32 *b, u8 *c);
void func_ov003_022084c0(u8 *p, s32 a, s32 b, u8 c);
void func_ov003_022084d8(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c);
s32 func_ov003_022084f4(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d);
void func_ov003_02208544(void *p, s32 a, s32 b, u8 c, u8 d);
void func_ov003_02208558(Obj *o);
void func_ov003_022085bc(Obj *o);
void func_ov003_022085f8(Obj *o);
void func_ov003_0220864c(Obj *o);
void func_ov003_02208678(Obj *o);
void func_ov003_022086c4(Obj *o);
void func_ov003_022086c8(Obj *o, u8 *m);
void func_ov003_02208754(RecC *r, s32 a, V3 v);
s32 func_ov003_02208764(Obj *o, V3 *v, s32 a, s16 b);
void func_ov003_022087b8(V3 *d, V3 v);
void func_ov003_022087c8(Obj *o);
void func_ov003_02208810(Obj *o);
void func_ov003_022088d8(Obj *o);
void func_ov003_02208904(Obj *o, s32 a);
void func_ov003_02208984(Obj *o, s32 a);
void func_ov003_022089d4(Obj *o, u8 *m);
}

extern "C" void func_ov003_02208108(void *p, s16 a, s32 b, s32 c, u8 d, u8 e) {
    u8 *q = (u8 *)p;
    q[0] = 0;
    *(s16 *)(q + 2) = a;
    *(s32 *)(q + 4) = b;
    *(s32 *)(q + 8) = c;
    q[0xc] = d;
    q[0xd] = e;
}

extern "C" s32 func_ov003_0220812c(Obj *o, s32 x, s32 z, u8 a, u8 b, s32 c, s16 d) {
    Msg m;
    m.func_0200e2c0(0x69, c, d);
    func_ov003_0220817c(m.unk_0c, x, z, a, b);
    return func_0200e248(o, &m);
}

extern "C" void func_ov003_0220817c(void *p, s32 a, s32 b, u8 c, u8 d) {
    u8 *q = (u8 *)p;
    *(s32 *)q = a;
    *(s32 *)(q + 4) = b;
    q[8] = c;
    q[9] = d;
}

extern "C" void func_ov003_02208190(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    V3 v(r->unk_00, 0, r->unk_04);
    Pair p;
    p.a = 0;
    p.b = 0;
    func_0204ee10(&p.a, &p.b, &v);
    if (r->unk_0a > 5) {
        func_ov003_0221bf88(o->unk_7fc, p);
    } else {
        r->unk_0a++;
        if (r->unk_0a == 5) {
            func_ov003_0221cd34(o->unk_7fc, p, 2);
        }
    }
    func_02010914(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220832c(o);
        func_0201071c(o);
        func_ov003_022082a4(o);
    } else {
        if (func_0200ef08(o)) {
            func_ov003_0220832c(o);
        }
        func_0201071c(o);
        func_ov003_02208248(o);
    }
}

extern "C" void func_ov003_02208248(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
    if (r->unk_0c != 0) {
        if (func_02056654(o->unk_2cc)) {
            func_ov003_0220812c(o, r->unk_00, r->unk_04, r->unk_0b, 1, 6, -1);
        }
    }
}

extern "C" void func_ov003_022082a4(Obj *o) {
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    if (r->unk_0c != 0) {
        if (func_02056654(o->unk_2cc)) {
            func_ov003_0220812c(o, r->unk_00, r->unk_04, r->unk_0b, 1, 6, -1);
        }
    } else {
        s32 t = o->unk_814;
        if (t == 1) {
            r->unk_0c = 1;
            o->unk_2e0 = 1;
        } else if (t == 2) {
            o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov003_0220832c(Obj *o) {
    s16 h = o->unk_8e;
    func_02010d98(&h, *(s16 *)((u8 *)o + 0x7d8));
    func_02010a58(o, &h);
}

extern "C" void func_ov003_02208358(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        RecA *r = (RecA *)((u8 *)o + 0x7d0);
        if (r->unk_0a < 5) {
            V3 v(r->unk_00, 0, r->unk_04);
            Pair p;
            p.a = 0;
            p.b = 0;
            func_0204ee10(&p.a, &p.b, &v);
            func_ov003_0221cd34(o->unk_7fc, p, 2);
        }
    }
}

extern "C" void func_ov003_022083bc(Obj *o, s32 a) {
    if (o->unk_7ec == 0x68) {
        o->unk_c80 = a;
    } else {
        s32 x, z;
        u8 f;
        func_ov003_022084a8(o->unk_8ec, &x, &z, &f);
        bool t0 = f != 0;
        bool t1 = (f >> 4) != 0;
        func_ov003_022084f4(o, x, z, t0, t1, 6, a);
    }
}

extern "C" void func_ov003_02208420(Obj *o, u8 *m) {
    u8 *q = m + 0xc;
    u8 b0 = q[8];
    u8 b1 = q[9];
    VD d;
    V3D v(*(s32 *)(m + 0xc), o->unk_5c.y, *(s32 *)(q + 4));
    d.x = v.x - o->unk_5c.x;
    d.z = v.z - o->unk_5c.z;
    s32 ang = func_020e7b98(d.x, d.z);
    func_ov003_022084d8((RecA *)((u8 *)o + 0x7d0), ang, v.x, v.z, b0, b1);
    func_ov003_022084c0(o->unk_8ec, v.x, v.z, b0 | (b1 << 4));
    if (b1 != 0) {
        func_02010358(o, 0x66, 3, 0);
    } else {
        func_020103b4(o, 0x66, 3, 0);
    }
    func_0200ec30(o, 9);
}

extern "C" void func_ov003_022084a8(u8 *p, s32 *a, s32 *b, u8 *c) {
    func_02076a2c(p, a, b);
    *c = p[5];
}

extern "C" void func_ov003_022084c0(u8 *p, s32 a, s32 b, u8 c) {
    func_02076a6c(p, a, b);
    p[5] = c;
}

extern "C" void func_ov003_022084d8(RecA *r, s32 a, s32 x, s32 z, u8 b, u8 c) {
    r->unk_08 = a;
    r->unk_00 = x;
    r->unk_04 = z;
    r->unk_0b = b;
    r->unk_0c = c;
    r->unk_0a = 0;
}

extern "C" s32 func_ov003_022084f4(Obj *o, s32 x, s32 z, bool a, bool b, s32 c, s32 d) {
    Msg m;
    m.func_0200e2c0(0x68, c, *(s16 *)&d);
    func_ov003_02208544(m.unk_0c, x, z, a, b);
    return func_0200e248(o, &m);
}

extern "C" void func_ov003_02208544(void *p, s32 a, s32 b, u8 c, u8 d) {
    u8 *q = (u8 *)p;
    *(s32 *)q = a;
    *(s32 *)(q + 4) = b;
    q[8] = c;
    q[9] = d;
}

extern "C" void func_ov003_02208558(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    func_ov003_02208678(o);
    V3 v;
    v.x = r->unk_04;
    v.y = r->unk_08;
    v.z = *(s32 *)((u8 *)r + 0xc);
    if (func_0200ede8(o, &v)) {
        func_ov003_0220864c(o);
    }
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_022085f8(o);
    } else {
        func_ov003_022085bc(o);
    }
}

extern "C" void func_ov003_022085bc(Obj *o) {
    o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
    if (func_02056654(o->unk_2cc)) {
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" void func_ov003_022085f8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (o->unk_2d4.mid >= 0x16) {
        func_ov003_02205c28(o);
    }
}

extern "C" void func_ov003_0220864c(Obj *o) {
    s16 h = o->unk_8e;
    func_02010d98(&h, *(s16 *)((u8 *)o + 0x7d0));
    func_02010a58(o, &h);
}

extern "C" void func_ov003_02208678(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 0x65) {
        if (func_020565e8(o->unk_2cc, 3) || func_020565e8(o->unk_2cc, 0xd)) {
            func_02090330(0x23, &o->unk_5c, &o->unk_8e, 0);
        }
    }
}

extern "C" void func_ov003_022086c4(Obj *o) {
}

extern "C" void func_ov003_022086c8(Obj *o, u8 *m) {
    VD d;
    u8 *q = m + 0xc;
    V3D l(*(s32 *)(m + 0xc), *(s32 *)(q + 4), *(s32 *)(q + 8));
    d.x = l.x - o->unk_5c.x;
    d.z = l.z - o->unk_5c.z;
    s32 ang = func_020e7b98(d.x, d.z);
    func_ov003_02208754((RecC *)((u8 *)o + 0x7d0), ang, l);
    func_02010358(o, 0x65, 3, 0);
    func_ov003_0221977c(o->unk_7fc, l);
    func_0200ec1c(o, 0x1c);
    func_0200ecdc(o, 0x7da);
    func_0200ec30(o, 9);
}

extern "C" void func_ov003_02208754(RecC *r, s32 a, V3 v) {
    *(u16 *)r = a;
    *(V3 *)((u8 *)r + 4) = v;
}

extern "C" s32 func_ov003_02208764(Obj *o, V3 *v, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x67, a, b);
    V3 t;
    func_0204edd8(&t, (s32)v);
    func_ov003_022087b8((V3 *)m.unk_0c, t);
    return func_0200e248(o, &m);
}

extern "C" void func_ov003_022087b8(V3 *d, V3 v) {
    *d = v;
}

extern "C" void func_ov003_022087c8(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    func_02010914(o);
    V3 v;
    v.x = o->unk_7d0;
    v.y = r->unk_04;
    v.z = r->unk_08;
    if (func_0200ede8(o, &v)) {
        func_ov003_022088d8(o);
    }
    func_0201071c(o);
    func_ov003_02208810(o);
}

extern "C" void func_ov003_02208810(Obj *o) {
    RecC *r = (RecC *)((u8 *)o + 0x7d0);
    void *g = data_020cbb18;
    if (func_020729bc(g, o->unk_7fc) != 0) {
        if (r->unk_0f == 0) {
            if (o->unk_814 == 1) {
                r->unk_0f = 1;
            } else if (o->unk_814 == 2) {
                r->unk_0f = 2;
            }
        }
    }
    if (r->unk_0e < 2) {
        r->unk_0e++;
    } else {
        if (func_020729bc(g, o->unk_7fc) == 0) {
            o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
        }
        switch (r->unk_0f) {
        case 0:
            break;
        case 1: {
            V3 v;
            v.x = r->unk_00;
            v.y = r->unk_04;
            v.z = r->unk_08;
            func_ov003_02208764(o, &v, 6, -1);
            break;
        }
        case 2:
            o->unk_7f8 = (s32)func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        }
    }
}

extern "C" void func_ov003_022088d8(Obj *o) {
    s16 h = o->unk_8e;
    func_02010d98(&h, *(s16 *)((u8 *)o + 0x7dc));
    func_02010a58(o, &h);
}

extern "C" void func_ov003_02208904(Obj *o, s32 a) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        if (a == 2) {
            func_0200ec1c(o, 0x1c);
        } else if (a != 0x67) {
            if (func_0200ec44(o, 0x1c)) {
                V3 *p = (V3 *)((u8 *)o + 0x7d0);
                func_ov003_0221977c(o->unk_7fc, *p);
                func_0200ec1c(o, 0x1c);
            }
        } else {
            func_0200ec1c(o, 0x1c);
        }
    } else {
        func_0200ec1c(o, 0x1c);
    }
}

extern "C" void func_ov003_02208984(Obj *o, s32 a) {
    if (o->unk_7ec == 0x66) {
        o->unk_c80 = a;
    } else {
        Pair p;
        p.a = 0;
        p.b = 0;
        func_ov003_02208a58(o->unk_8ec, &p);
        func_ov003_02208a88(o, p, 0, 6, a);
    }
}

extern "C" void func_ov003_022089d4(Obj *o, u8 *m) {
    u8 *q = m + 0xc;
    RecA *r = (RecA *)((u8 *)o + 0x7d0);
    s32 a = m[0xc];
    s32 b = q[1];
    s32 c = q[2];
    Pair p;
    VD d;
    V3 pos;
    func_0204ed8c(&pos, a, b);
    d.x = pos.x - o->unk_5c.x;
    d.z = pos.z - o->unk_5c.z;
    s32 ang = func_020e7b98(d.x, d.z);
    func_ov003_02208a70(r, c, ang, pos);
    p.a = a;
    p.b = b;
    func_ov003_02208a64(o->unk_8ec, &p);
    func_020103b4(o, 0x64, 3, 0);
    if (r->unk_0f == 1) {
        func_0200ec30(o, 0x1c);
    }
}
