#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct Mtx43 {
    s32 m[12];
};

struct Basis {
    Vec3 a, b, c;
};

struct Plane {
    s32 v[4];
};

// object of size 0x44 (vtable data_020e44d4)
struct Unk_0202f64c {
    Unk_0202f64c();
    ~Unk_0202f64c();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u8 pad[0x34];
};

struct Unk_020e44d4 : Unk_0202f64c {
    Unk_020e44d4();
    ~Unk_020e44d4();
    BOOL func_020b6ac4(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL func_020b6b04(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    /* 0x38 */ Unk_020e44d4 *unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_0202fddc {
    Unk_0202fddc();
    ~Unk_0202fddc();
    void func_0202fd8c(Vec3 *a, Vec3 *b, Vec3 *c);
    u8 pad[0x14];
};

struct Unk_020b6a0c : Unk_0202fddc {
    Unk_020b6a0c();
    ~Unk_020b6a0c();
    BOOL func_020b69e0(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
    /* 0x1c */ Unk_020b6a0c *unk_1c;
};

struct Unk_0202e9c8 {
    Unk_0202e9c8();
    ~Unk_0202e9c8();
    void func_0202e9b4(Vec3 *a, Vec3 *b);
    u8 pad[0x10];
};

struct Unk_020b6a94 : Unk_0202e9c8 {
    Unk_020b6a94();
    ~Unk_020b6a94();
    BOOL func_020b6a28(Vec3 *a, Vec3 *b, s32 c, u8 d);
    BOOL func_020b6a48(Vec3 *a, Vec3 *b, s32 c, u8 d);
    /* 0x10 */ u8 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ Unk_020b6a94 *unk_18;
};

struct Unk_020b60d8 {
    Unk_020b60d8();
    ~Unk_020b60d8();
    void func_020b69c0(u8 a);
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 unk_1a;
};

struct Unk_020b6e10 {
    Unk_020b6e10();
    ~Unk_020b6e10();
    BOOL func_020b6b84(Vec3 *pos, s32 w, s32 h, s32 d, s32 angle, s32 e, u8 f);
    /* 0x00 */ Unk_020e44d4 unk_00[10];
};

struct Unk_020b6960 : Unk_020b60d8 {
    Unk_020b6960();
    ~Unk_020b6960();
    void func_020b6990();
    BOOL func_020b6818(Unk_020e44d4 *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL func_020b6848(Unk_020e44d4 *o);
    BOOL func_020b6860(Unk_020b6a0c *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL func_020b6890(Unk_020b6a0c *o);
    BOOL func_020b68a8(Unk_020b6a94 *o, Vec3 *a, Vec3 *b, s32 c, u8 d);
    BOOL func_020b68d4(Unk_020b6a94 *o);
    BOOL func_020b68ec(Unk_020b6e10 *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
    BOOL func_020b6928(Unk_020b6e10 *box);
    /* 0x1c */ Unk_020e44d4 *unk_1c;
    /* 0x20 */ Unk_020b6a94 *unk_20;
    /* 0x24 */ Unk_020b6a0c *unk_24;
};

struct Unk_020b69a8 {
    void func_020b69a8();
    u8 pad[0x1c];
    Unk_020e44d4 *unk_1c;
    Unk_020b6a94 *unk_20;
    Unk_020b6a0c *unk_24;
    void func_020b69c0(u8 a);
};

extern "C" {
s32 func_0203ef38(Vec3 *out, Vec3 *in);
s32 func_01ffcb0c(s32 a, s32 b);
extern s16 data_02135f44[];
extern s16 data_02136f44[];
extern s16 data_02138f44[];
void func_020e944c(Vec3 *v, s32 angle);
extern s32 data_021c3070;
extern s32 data_020c8cb8;
extern Mtx43 data_0213c7e0;
s32 func_0203bc3c(s32 a);
s32 func_01ffc5a4(s32 a, s32 b);
void func_020e94f8(Vec3 *v);
void func_020e9888(Vec3 *v, s32 s);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
void func_01ffbb6c(Mtx43 *a, Mtx43 *b);
void func_01ffb898(Vec3 *v, Mtx43 *m, Vec3 *out);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
void func_020e93a0(Vec3 *v, s32 angle);
void func_0203eeac(Vec3 *out, Vec3 *in);
s32 func_0202f3a8(Plane *p);
BOOL func_0202f364(Unk_020e44d4 *t, Vec3 *a, Vec3 *b, Vec3 *c, Plane *p);
}

Unk_020b6960::Unk_020b6960() {
    func_020b69c0(0);
    unk_1c = 0;
    unk_20 = 0;
    unk_24 = 0;
}

Unk_020b6960::~Unk_020b6960() {
}

void Unk_020b6960::func_020b6990() {
    func_020b69c0(0);
    unk_1c = 0;
    unk_20 = 0;
    unk_24 = 0;
}

void Unk_020b69a8::func_020b69a8() {
    func_020b69c0(0);
    unk_1c = 0;
    unk_20 = 0;
    unk_24 = 0;
}

void Unk_020b60d8::func_020b69c0(u8 a) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_00 = (s32)0xffed4000;
    unk_18 = 0;
    unk_19 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_1a = a;
}

BOOL Unk_020b6a0c::func_020b69e0(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    unk_14 = d;
    unk_18 = e;
    func_0202fd8c(a, b, c);
    return TRUE;
}

Unk_020b6a0c::~Unk_020b6a0c() {
}

Unk_020b6a0c::Unk_020b6a0c() {
    unk_14 = 0;
    unk_1c = 0;
    unk_18 = 0xff;
}

BOOL Unk_020b6a94::func_020b6a28(Vec3 *a, Vec3 *b, s32 c, u8 d) {
    unk_14 = c;
    unk_10 = d;
    func_0202e9b4(a, b);
    return TRUE;
}

BOOL Unk_020b6a94::func_020b6a48(Vec3 *a, Vec3 *b, s32 c, u8 d) {
    Vec3 v;
    func_0203eeac(&v, a);
    return func_020b6a28(&v, b, c, d);
}

Unk_020b6a94::Unk_020b6a94() {
    unk_14 = 0;
    unk_10 = 0;
    unk_18 = 0;
}

Unk_020b6a94::~Unk_020b6a94() {
}

Unk_020e44d4::~Unk_020e44d4() {
}

Unk_020e44d4::Unk_020e44d4() {
    unk_3c = 0;
    unk_38 = 0;
    unk_40 = 0xff;
}

BOOL Unk_020b6960::func_020b6848(Unk_020e44d4 *o) {
    o->unk_38 = 0;
    if (unk_1c == 0) {
        unk_1c = o;
        return TRUE;
    }
    o->unk_38 = unk_1c;
    unk_1c = o;
    return TRUE;
}

BOOL Unk_020b6960::func_020b6890(Unk_020b6a0c *o) {
    o->unk_1c = 0;
    if (unk_24 == 0) {
        unk_24 = o;
        return TRUE;
    }
    o->unk_1c = unk_24;
    unk_24 = o;
    return TRUE;
}

BOOL Unk_020b6960::func_020b68d4(Unk_020b6a94 *o) {
    o->unk_18 = 0;
    if (unk_20 == 0) {
        unk_20 = o;
        return TRUE;
    }
    o->unk_18 = unk_20;
    unk_20 = o;
    return TRUE;
}

BOOL Unk_020b6960::func_020b6818(Unk_020e44d4 *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    o->func_020b6b04(a, b, c, d, e);
    return func_020b6848(o);
}

BOOL Unk_020b6960::func_020b6860(Unk_020b6a0c *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    o->func_020b69e0(a, b, c, d, e);
    return func_020b6890(o);
}

BOOL Unk_020b6960::func_020b68a8(Unk_020b6a94 *o, Vec3 *a, Vec3 *b, s32 c, u8 d) {
    o->func_020b6a48(a, b, c, d);
    return func_020b68d4(o);
}

extern "C" s32 func_020b705c(s32 i) {
    extern u8 data_020d0d90[];
    if (i >= 0 && i < 0x17) {
        return data_020d0d90[i];
    }
    return 0;
}

BOOL Unk_020e44d4::func_020b6ac4(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Plane p;
    if (func_0202f3a8(&p) != 0) {
        unk_3c = d;
        unk_40 = e;
        return func_0202f364(this, a, b, c, &p);
    }
    return FALSE;
}

BOOL Unk_020e44d4::func_020b6b04(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Vec3 va, vb, vc;
    func_0203eeac(&va, a);
    func_0203eeac(&vb, b);
    func_0203eeac(&vc, c);
    return func_020b6ac4(&va, &vb, &vc, d, e);
}

BOOL Unk_020b6960::func_020b68ec(Unk_020b6e10 *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f) {
    box->func_020b6b84(pos, w, h, d, angle, e, f);
    return func_020b6928(box);
}

BOOL Unk_020b6960::func_020b6928(Unk_020b6e10 *box) {
    BOOL ok = TRUE;
    Unk_020e44d4 *p = box->unk_00;
    for (u32 i = 0; i < 10; i++) {
        BOOL r = func_020b6848(p);
        p++;
        ok = (ok | r) ? TRUE : FALSE;
    }
    return ok;
}

Unk_020b6e10::~Unk_020b6e10() {
}

Unk_020b6e10::Unk_020b6e10() {
}

BOOL Unk_020b6e10::func_020b6b84(Vec3 *pos, s32 w, s32 h, s32 d, s32 angle, s32 e, u8 f) {
    Vec3 c[8];
    s32 hw = w >> 1;
    c[0].x = c[4].x = c[1].x = c[5].x = -hw;
    c[2].x = c[6].x = c[3].x = c[7].x = hw;
    s32 hd = h >> 1;
    c[0].z = c[4].z = c[3].z = c[7].z = -hd;
    c[1].z = c[5].z = c[2].z = c[6].z = hd;
    if (angle != 0) {
        func_020e93a0(&c[0], angle);
        func_020e93a0(&c[1], angle);
        func_020e93a0(&c[2], angle);
        func_020e93a0(&c[3], angle);
        c[4] = c[0];
        c[5] = c[1];
        c[6] = c[2];
        c[7] = c[3];
    }
    c[0].x += pos->x;
    c[1].x += pos->x;
    c[2].x += pos->x;
    c[3].x += pos->x;
    c[4].x += pos->x;
    c[5].x += pos->x;
    c[6].x += pos->x;
    c[7].x += pos->x;
    c[0].z += pos->z;
    c[1].z += pos->z;
    c[2].z += pos->z;
    c[3].z += pos->z;
    c[4].z += pos->z;
    c[5].z += pos->z;
    c[6].z += pos->z;
    c[7].z += pos->z;
    c[0].y = c[1].y = c[2].y = c[3].y = pos->y;
    c[4].y = c[5].y = c[6].y = c[7].y = pos->y + d;
    BOOL ok = TRUE;
    ok = (ok | unk_00[0].func_020b6b04(&c[4], &c[5], &c[6], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[1].func_020b6b04(&c[4], &c[6], &c[7], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[2].func_020b6b04(&c[5], &c[1], &c[2], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[3].func_020b6b04(&c[5], &c[2], &c[6], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[4].func_020b6b04(&c[6], &c[2], &c[3], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[5].func_020b6b04(&c[6], &c[3], &c[7], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[6].func_020b6b04(&c[4], &c[0], &c[1], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[7].func_020b6b04(&c[4], &c[1], &c[5], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[8].func_020b6b04(&c[7], &c[3], &c[0], e, f)) ? TRUE : FALSE;
    ok = (ok | unk_00[9].func_020b6b04(&c[7], &c[0], &c[4], e, f)) ? TRUE : FALSE;
    return ok;
}

struct Unk_0202fdc4 {
    Unk_0202fdc4(Vec3 *c, s32 a, s32 b);
    ~Unk_0202fdc4();
    BOOL func_0202f968(Vec3 *a, Vec3 *b);
    BOOL func_0202f7b8(Vec3 *a, Vec3 *b);
    u8 pad[0x14];
};

struct Pair {
    Vec3 p, q;
};

extern "C" void func_020b6e38(Basis *out, s32 x, s32 z) {
    Vec3 zero;
    Pair t;
    Vec3 c, d, e;
    Mtx43 m;
    Vec3 f;
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    s32 k = -func_01ffc5a4(0x60000, func_0203bc3c(data_021c3070));
    t.p.x = (x << 12) - 0x80000;
    t.p.y = -((z << 12) - 0x60000);
    t.p.z = k;
    t.q = t.p;
    func_020e94f8(&t.q);
    func_020e9888(&t.q, data_020c8cb8);
    func_01ffd070(&c, &zero, &t.q);
    m = data_0213c7e0;
    func_01ffbb6c(&m, &m);
    func_01ffb898(&zero, &m, &d);
    func_01ffb898(&c, &m, &e);
    out->a = d;
    out->b = e;
    func_020e9960(&f, &out->b, &out->a);
    out->c = f;
    func_020e94f8(&out->c);
}

extern "C" BOOL func_020b6f10(Vec3 *p, Vec3 *q, Vec3 *r, s32 a, s32 b) {
    Vec3 v28;
    s32 ang = func_0203ef38(&v28, r);
    s32 y, z;
    Vec3 v34, v40, v4c;
    z = q->z;
    y = q->y;
    v34.x = q->x;
    v34.y = y;
    v34.z = z;
    s32 pz = p->z, py = p->y, px = p->x;
    v40.x = px;
    v40.y = py;
    v40.z = pz;
    v4c = v28;
    s16 *tab = data_02135f44;
    u32 idx = ((u16)(s16)-ang) >> 4;
    s32 i2 = idx * 2;
    s16 sn = tab[i2];
    s16 cs = tab[i2 + 1];
    y = v34.y;
    z = v34.z;
    v34.y = func_01ffcb0c(cs, y) - func_01ffcb0c(sn, z);
    v34.z = func_01ffcb0c(sn, y) + func_01ffcb0c(cs, z);
    z = v40.z;
    y = v40.y;
    v40.y = func_01ffcb0c(cs, y) - func_01ffcb0c(sn, z);
    v40.z = func_01ffcb0c(sn, y) + func_01ffcb0c(cs, z);
    z = v4c.z;
    y = v4c.y;
    v4c.y = func_01ffcb0c(cs, y) - func_01ffcb0c(sn, z);
    v4c.z = func_01ffcb0c(sn, y) + func_01ffcb0c(cs, z);
    Unk_0202fdc4 o(&v4c, a, b);
    if (o.func_0202f968(&v40, &v34) || o.func_0202f7b8(&v40, &v34)) {
        func_020e944c(&v40, ang);
        s32 rz = v40.z, ry = v40.y, rx = v40.x;
        p->x = rx;
        p->y = ry;
        p->z = rz;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020b7074(Vec3 *out, Vec3 *a, Vec3 *b, s32 c, s32 d) {
    Vec3 zero, v24, v30;
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    Unk_0202fdc4 o(&zero, c, d);
    s32 az = a->z, ay = a->y, ax = a->x;
    v24.x = ax;
    v24.y = ay;
    v24.z = az;
    s32 bz = b->z, by = b->y, bx = b->x;
    v30.x = bx;
    v30.y = by;
    v30.z = bz;
    s16 sn = data_02136f44[0];
    s16 cs = data_02136f44[1];
    v24.x = func_01ffcb0c(cs, ax) - func_01ffcb0c(sn, ay);
    v24.y = func_01ffcb0c(sn, ax) + func_01ffcb0c(cs, ay);
    s32 y = v30.y;
    s32 x = v30.x;
    v30.x = func_01ffcb0c(cs, x) - func_01ffcb0c(sn, y);
    v30.y = func_01ffcb0c(sn, x) + func_01ffcb0c(cs, y);
    if (o.func_0202f7b8(&v30, &v24)) {
        sn = data_02138f44[0];
        cs = data_02138f44[1];
        y = v30.y;
        x = v30.x;
        v30.x = func_01ffcb0c(cs, x) - func_01ffcb0c(sn, y);
        v30.y = func_01ffcb0c(sn, x) + func_01ffcb0c(cs, y);
        *out = v30;
        return TRUE;
    }
    return FALSE;
}
