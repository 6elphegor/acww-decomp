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

struct Unk_0202f660_V3;
struct Unk_0202e918_Vec3;

// base of Unk_020b6a0c: symbols.txt names its base-object constructor/destructor and func_0202fd8c with the class
// name Unk_0202f7b8X and these parameter types (labels at 0x0202fddc / 0x0202fda4 / 0x0202fd8c)
struct Unk_0202f7b8X {
    Unk_0202f7b8X();
    ~Unk_0202f7b8X();
    void func_0202fd8c(Unk_0202f660_V3 *a, s32 b, s32 c);
    u8 pad[0x14];
};

struct Unk_020b6a0c : Unk_0202f7b8X {
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
    void func_0202e9b4(Unk_0202e918_Vec3 *a, s32 b);
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

struct Unk_020b69a8 : Unk_020b60d8 {
    void func_020b69a8();
    Unk_020e44d4 *unk_1c;
    Unk_020b6a94 *unk_20;
    Unk_020b6a0c *unk_24;
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
void MTX_Inverse43(Mtx43 *a, Mtx43 *b);
void MTX_MultVec43(Vec3 *v, Mtx43 *m, Vec3 *out);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
void func_020e93a0(Vec3 *v, s32 angle);
void func_0203eeac(Vec3 *out, Vec3 *in);
s32 func_0202f3a8(Plane *p);
BOOL _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(Unk_020e44d4 *t, Vec3 *a, Vec3 *b, Vec3 *c, Plane *p);
}

struct Unk_020b69e0_Pad {
    s32 v[4];
    Unk_020b69e0_Pad() {}
    ~Unk_020b69e0_Pad() {}
};

BOOL Unk_020e44d4::func_020b6b04(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Vec3 va, vb, vc;
    func_0203eeac(&va, a);
    func_0203eeac(&vb, b);
    func_0203eeac(&vc, c);
    return func_020b6ac4(&va, &vb, &vc, d, e);
}

BOOL Unk_020e44d4::func_020b6ac4(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Plane p;
    if (func_0202f3a8(&p) != 0) {
        unk_3c = d;
        unk_40 = e;
        return _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(this, a, b, c, &p);
    }
    return FALSE;
}

Unk_020b6a94::Unk_020b6a94() {
    unk_14 = 0;
    unk_10 = 0;
    unk_18 = 0;
}

Unk_020b6a94::~Unk_020b6a94() {
}

BOOL Unk_020b6a94::func_020b6a48(Vec3 *a, Vec3 *b, s32 c, u8 d) {
    Vec3 v;
    func_0203eeac(&v, a);
    return func_020b6a28(&v, b, c, d);
}

BOOL Unk_020b6a94::func_020b6a28(Vec3 *a, Vec3 *b, s32 c, u8 d) {
    unk_14 = c;
    unk_10 = d;
    func_0202e9b4((Unk_0202e918_Vec3 *)a, (s32)b);
    return TRUE;
}

Unk_020b6a0c::Unk_020b6a0c() {
    unk_14 = 0;
    unk_1c = 0;
    unk_18 = 0xff;
}

Unk_020b6a0c::~Unk_020b6a0c() {
}

BOOL Unk_020b6a0c::func_020b69e0(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    Unk_020b69e0_Pad pad;
    unk_14 = d;
    unk_18 = e;
    func_0202fd8c((Unk_0202f660_V3 *)a, (s32)b, (s32)c);
    return TRUE;
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

void Unk_020b69a8::func_020b69a8() {
    func_020b69c0(0);
    unk_1c = 0;
    unk_20 = 0;
    unk_24 = 0;
}

void Unk_020b6960::func_020b6990() {
    func_020b69c0(0);
    unk_1c = 0;
    unk_20 = 0;
    unk_24 = 0;
}

Unk_020b6960::~Unk_020b6960() {
}

Unk_020b6960::Unk_020b6960() {
    func_020b69c0(0);
    unk_1c = 0;
    unk_20 = 0;
    unk_24 = 0;
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

BOOL Unk_020b6960::func_020b68ec(Unk_020b6e10 *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f) {
    box->func_020b6b84(pos, w, h, d, angle, e, f);
    return func_020b6928(box);
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

BOOL Unk_020b6960::func_020b68a8(Unk_020b6a94 *o, Vec3 *a, Vec3 *b, s32 c, u8 d) {
    o->func_020b6a48(a, b, c, d);
    return func_020b68d4(o);
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

BOOL Unk_020b6960::func_020b6860(Unk_020b6a0c *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    o->func_020b69e0(a, b, c, d, e);
    return func_020b6890(o);
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

BOOL Unk_020b6960::func_020b6818(Unk_020e44d4 *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e) {
    o->func_020b6b04(a, b, c, d, e);
    return func_020b6848(o);
}

// six file-scope 4-byte objects built by the unit's __sinit (nothing reads them)
struct Unk_021ef474 {
    u8 unk_00, unk_01, unk_02, unk_03;
    Unk_021ef474(u8 a, u8 b, u8 c, u8 d) {
        unk_00 = a;
        unk_01 = b;
        unk_02 = c;
        unk_03 = d;
    }
};

Unk_021ef474 data_021ef474(31, 20, 20, 31);
Unk_021ef474 data_021ef494(20, 20, 31, 31);
Unk_021ef474 data_021ef490(31, 31, 20, 31);
Unk_021ef474 data_021ef48c(20, 31, 20, 31);
Unk_021ef474 data_021ef488(20, 31, 31, 31);
Unk_021ef474 data_021ef484(20, 24, 24, 31);

// Data order: this unit is placed object by object (see object_order.txt).

namespace Unk_020b60dc_NS {

struct Unk_020b60dc_Cfg {
    u32 unk_00;
    u8 unk_04;
};

// Triangle / plane test object (0x38 bytes)
struct Unk_020b60dc_Tri {
    u32 pad[0x38 / 4];
};

struct Unk_020b60dc_Line {
    u32 pad[0x24 / 4];
};

struct Unk_020b60dc_Cell {
    u32 pad[0x30 / 4];
    u32 unk_30;
    u32 pad_34[0xc / 4];
};

class Unk_020b60dc_Node {
public:
    virtual Vec3 *vfunc_00();
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 pad_0e[0x38 - 0xe];
    Unk_020b60dc_Node *unk_38;
};

struct Unk_020b60dc_Rec {
    Vec3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    Unk_020b60dc_Rec *unk_1c;
};

extern "C" {
void _ZN12Unk_020d8cccC1EP15Unk_0202f660_V3S1_S1_S1_(void *t, Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d);
void _ZN12Unk_020d8cccD2Ev(void *t);
void _ZN12Unk_020d8cccC1Ev(void *t);
BOOL _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(void *t, Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *n);
s32 _ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(void *t, Vec3 *p);
BOOL _ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(void *t, Vec3 *out, Vec3 *a, Vec3 *b);
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(Unk_020b60dc_Cell *x, Vec3 *v, s32 a, s32 b);
void _ZN12Unk_0203398c13func_0203398cEiiii(Unk_020b60dc_Cell *x, s32 a, s32 b, s32 c, s32 d);
void func_02033988(Unk_020b60dc_Cell *x);
s32 _ZN12Unk_0203389c13func_02033914Ei(Unk_020b60dc_Cell *x, s32 k);
void _ZN12Unk_0202f660C1EP15Unk_0202f660_V3S1_(Unk_020b60dc_Line *l, Vec3 *a, Vec3 *b);
void _ZN12Unk_0202f660D1Ev(Unk_020b60dc_Line *l);
BOOL _ZN12Unk_0202e9c813func_0202e918EP17Unk_0202e918_Vec3P16Unk_0202e918_Cap(void *n, Vec3 *out, Unk_020b60dc_Line *l);
void func_020b6e38(Basis *out, s32 a, s32 b);
BOOL func_020b6f10(Vec3 *out, Vec3 *in, void *node, s32 a, s32 b);
BOOL func_020b7074(Vec3 *out, Vec3 *a, Vec3 *b, s32 c, s32 d);
BOOL func_020b705c(u8 v);
BOOL func_020b60b0(void *obj, Vec3 *out);
void func_0203ee38(Vec3 *out, Vec3 *in);
s32 func_0203edc0(void);
void *_ZN12Unk_020d93b813func_0203bc90Ev(void *cam);
void func_020e8344(Mtx43 *m, void *p);
void func_020e8528(Mtx43 *m, s32 a, s32 b, s32 c);
void func_020e8434(Mtx43 *m, s32 a);
void func_0202f3a8(Vec3 *out, Vec3 *a, Vec3 *b, Vec3 *c);
BOOL func_020307c4(s32 x, s32 z, s32 *a, s32 *b, s32 *c);
void func_0204ee10(s32 *a, s32 *b, Vec3 *v);
s32 func_ov003_02218bc8(s32 a, s32 b);
s32 func_ov003_02218b1c(s32 a);

extern s32 data_021c5384;
extern Unk_020b60dc_Cfg *data_021ef2f0;
extern s32 data_020c8cbc;
extern s32 data_020c8cb8;
extern s32 data_020c7c1c;
extern void *data_021c3070;
extern Vec3 data_021c309c;
extern Unk_020b60dc_Node *data_021ce638;
extern u8 data_020e416c;
}

inline BOOL Unk_020b60dc_IsMode0() {
    return data_020e416c == 0;
}

extern "C" void func_020b60dc(Unk_020b6960 *self, s32 sx, s32 sy, u8 flag) {
    Vec3 t[3];
    Vec3 p0, p1, r, v;

    self->func_020b69c0(flag);
    if (flag == 0 || data_021c5384 == 1) {
        self->unk_20 = 0;
        self->unk_24 = 0;
        self->unk_1c = 0;
        return;
    }
    func_020b6e38((Basis *)t, sx, sy);
    p0 = t[0];
    Vec3 *pb = &t[1];
    p1 = *pb;
    if (data_021ef2f0->unk_04 == 1) {
        static s32 k1 = data_020c8cbc * 6;
        static s32 k2 = data_020c7c1c + func_0203edc0();
        s32 kk = k1;
        if (func_020b7074(&r, &p0, &p1, k2, kk)) {
            func_0203ee38(&v, &r);
            Unk_020b60dc_Cell x;
            _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&x, &v, 0, 0);
            if (x.unk_30 != 0) {
                p1 = r;
                v.y = data_020c7c1c;
                self->unk_00 = v.x;
                self->unk_04 = v.y;
                self->unk_08 = v.z;
            }
            func_02033988(&x);
        }
        if (!func_020b60b0(self, 0)) {
            if (func_020b7074(&r, &p0, &p1, func_0203edc0(), kk)) {
                p1 = r;
                Vec3 w;
                func_0203ee38(&w, &r);
                w.y = 0;
                self->unk_00 = w.x;
                self->unk_04 = w.y;
                self->unk_08 = w.z;
            }
        }
        if (!func_020b60b0(self, 0)) {
            void *cam = data_021c3070;
            if (cam != 0) {
                struct { Vec3 a, b, c; } l;
                l.a = data_021c309c;
                Vec3 *pc = &t[2];
                l.b = *pc;
                s32 h = data_020c8cb8;
                func_020e9888(&l.b, h << 2);
                func_01ffd070(&l.c, &p0, &l.b);
                s32 k = data_020c8cbc;
                Vec3 q[4];
                q[0].x = l.a.x - k;
                q[0].y = h;
                q[0].z = 0;
                q[1].x = q[0].x;
                q[1].y = -0x2000;
                q[1].z = 0;
                q[2].x = l.a.x + k;
                q[2].y = -0x2000;
                q[2].z = 0;
                q[3].x = q[2].x;
                q[3].y = h;
                q[3].z = 0;
                Mtx43 m;
                func_020e8344(&m, _ZN12Unk_020d93b813func_0203bc90Ev(cam));
                func_020e8528(&m, 0, func_0203edc0(), 0);
                func_020e8434(&m, -0x1000);
                func_020e8434(&m, 0);
                Vec3 rr[4];
                MTX_MultVec43(&q[0], &m, &rr[0]);
                MTX_MultVec43(&q[1], &m, &rr[1]);
                MTX_MultVec43(&q[2], &m, &rr[2]);
                MTX_MultVec43(&q[3], &m, &rr[3]);
                Vec3 pl;
                func_0202f3a8(&pl, &rr[0], &rr[1], &rr[2]);
                Unk_020b60dc_Tri tri[2];
                _ZN12Unk_020d8cccC1EP15Unk_0202f660_V3S1_S1_S1_(&tri[0], &rr[0], &rr[1], &rr[2], &pl);
                _ZN12Unk_020d8cccC1EP15Unk_0202f660_V3S1_S1_S1_(&tri[1], &rr[0], &rr[2], &rr[3], &pl);
                Unk_020b60dc_Tri *tp = &tri[0];
                for (u32 i = 0; i < 2; tp++, i++) {
                    if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(tp, &p0) >= 0) {
                        BOOL in;
                        if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(tp, &l.c) >= 0) {
                            in = TRUE;
                        } else {
                            in = FALSE;
                        }
                        if (!in) {
                            Vec3 ip;
                            if (_ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(tp, &ip, &p0, &l.c)) {
                                p1 = ip;
                                Vec3 j;
                                func_0203ee38(&j, &ip);
                                self->unk_00 = j.x;
                                self->unk_04 = j.y;
                                self->unk_08 = j.z;
                                self->unk_04 = 0;
                            }
                        }
                    }
                }
                _ZN12Unk_020d8cccD2Ev(&tri[1]);
                _ZN12Unk_020d8cccD2Ev(&tri[0]);
            }
        }
    } else {
        s32 x0 = p0.x >> 13;
        s32 z0 = p0.z >> 13;
        s32 x1 = p1.x >> 13;
        s32 z1 = p1.z >> 13;
        s32 xlo, zhi, zlo, xhi;
        xhi = x1;
        if (x0 <= x1) {
            xlo = x0;
        } else {
            xlo = x1;
            xhi = x0;
        }
        zhi = z1;
        if (z0 <= z1) {
            zlo = z0;
        } else {
            zlo = z1;
            zhi = z0;
        }
        s32 found = 0;
        for (s32 gx = xlo; gx <= xhi; gx++) {
            for (s32 gz = zlo; gz <= zhi; gz++) {
                Unk_020b60dc_Cell y;
                _ZN12Unk_0203398c13func_0203398cEiiii(&y, gx, gz, 0, 0);
                s32 h = _ZN12Unk_0203389c13func_02033914Ei(&y, 0);
                if (h < 0x4000 && h != 0) {
                    s32 cx = (gx << 13) + 0x1000;
                    Vec3 s[5];
                    s[0].x = cx; s[0].y = 0;
                    s32 cz = (gz << 13) + 0x1000;
                    s[0].z = cz;
                    s[1].x = cx; s[1].y = 0; s[1].z = cz;
                    s[2].x = cx; s[2].y = 0; s[2].z = cz;
                    s[3].x = cx; s[3].y = 0; s[3].z = cz;
                    s[4].x = cx; s[4].y = 0; s[4].z = cz;
                    s[1].x = cx - 0x1000; s[1].y = h; s[1].z = cz - 0x1000;
                    s[2].x = cx - 0x1000; s[2].y = h; s[2].z = cz + 0x1000;
                    s[3].x = cx + 0x1000; s[3].y = h; s[3].z = cz + 0x1000;
                    s[4].x = cx + 0x1000; s[4].y = h; s[4].z = cz - 0x1000;
                    Vec3 n;
                    n.x = 0; n.y = 0x1000; n.z = 0;
                    Unk_020b60dc_Tri ua[2];
                    _ZN12Unk_020d8cccC1Ev(&ua[0]);
                    _ZN12Unk_020d8cccC1Ev(&ua[1]);
                    _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(&ua[0], &s[1], &s[2], &s[4], &n);
                    _ZN12Unk_020d8ccc13func_0202f364EP15Unk_0202f2ac_V3S1_S1_S1_(&ua[1], &s[2], &s[3], &s[4], &n);
                    Unk_020b60dc_Tri *up = &ua[0];
                    for (u32 i = 0; i < 2; up++, i++) {
                        if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(up, &p0) >= 0) {
                            BOOL in;
                            if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(up, &p1) >= 0) {
                                in = TRUE;
                            } else {
                                in = FALSE;
                            }
                            if (!in) {
                                Vec3 ip;
                                if (_ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(up, &ip, &p0, &p1)) {
                                    p1 = ip;
                                    self->unk_00 = p1.x;
                                    self->unk_04 = p1.y;
                                    self->unk_08 = p1.z;
                                    found = 1;
                                }
                            }
                        }
                    }
                    _ZN12Unk_020d8cccD2Ev(&ua[1]);
                    _ZN12Unk_020d8cccD2Ev(&ua[0]);
                }
                func_02033988(&y);
            }
        }
        if (found == 0 && p0.y > 0 && p1.y <= 0) {
            struct { Vec3 d, dd; } dl;
            func_020e9960(&dl.d, &p1, &p0);
            s32 ay = p0.y < 0 ? -p0.y : p0.y;
            s32 dy = p0.y - p1.y;
            if (dy < 0) {
                dy = -dy;
            }
            s32 ratio = func_01ffc5a4(ay, dy);
            r.x = p0.x + func_01ffcb0c(dl.d.x, ratio);
            r.y = p0.y + func_01ffcb0c(dl.d.y, ratio);
            r.z = p0.z + func_01ffcb0c(dl.d.z, ratio);
            p1.x = r.x;
            p1.y = r.y;
            p1.z = r.z;
            Unk_020b60dc_Cell z;
            _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&z, &r, 0, 0);
            self->unk_00 = r.x;
            self->unk_04 = r.y;
            self->unk_08 = r.z;
            func_02033988(&z);
        }
    }

    for (Unk_020b60dc_Rec *n = (Unk_020b60dc_Rec *)self->unk_24; n != 0; n = n->unk_1c) {
        if (func_020b6f10(&p1, &p0, n, n->unk_0c, n->unk_10)) {
            self->unk_0c = n->unk_00.x;
            self->unk_10 = n->unk_00.y;
            self->unk_14 = n->unk_00.z;
            self->unk_18 = n->unk_14;
            self->unk_19 = n->unk_18;
        }
    }
    for (Unk_020b60dc_Node *n = data_021ce638; n != 0; n = n->unk_38) {
        if (func_020b705c(n->unk_0c)) {
            if (func_020b6f10(&p1, &p0, n->vfunc_00(), n->unk_04, n->unk_08)) {
                Vec3 *vp = n->vfunc_00();
                self->unk_0c = vp->x;
                self->unk_10 = vp->y;
                self->unk_14 = vp->z;
                self->unk_18 = n->unk_0c;
                self->unk_19 = n->unk_0d;
            }
        }
    }

    struct { Vec3 e0, e1, lo, hi; } el;
    func_0203ee38(&el.e0, &p0);
    func_0203ee38(&el.e1, &p1);
    if (el.e0.x < el.e1.x) {
        el.lo.x = el.e0.x;
        el.hi.x = el.e1.x;
    } else {
        el.lo.x = el.e1.x;
        el.hi.x = el.e0.x;
    }
    el.e1.y = 0;
    el.e0.y = 0;
    if (el.e0.z < el.e1.z) {
        el.lo.z = el.e0.z;
        el.hi.z = el.e1.z;
    } else {
        el.lo.z = el.e1.z;
        el.hi.z = el.e0.z;
    }
    s32 bxl, bxh, bzl, bzh;
    bxl = el.lo.x >> 13;
    bzl = el.lo.z >> 13;
    bxh = el.hi.x >> 13;
    bzh = el.hi.z >> 13;
    s32 gx, gz;
    for (gz = bzh; gz >= bzl; gz--) {
        for (gx = bxh; gx >= bxl; gx--) {
            s32 ta, tb, tc;
            tc = 0;
            if (func_020307c4(gx, gz, &ta, &tb, &tc) && tc != 0) {
                Vec3 f;
                f.x = (gx << 13) + 0x1000;
                f.y = 0;
                f.z = (gz << 13) + 0x1000;
                if (func_020b6f10(&p1, &p0, &f, ta, tb)) {
                    self->unk_0c = f.x;
                    self->unk_10 = f.y;
                    self->unk_14 = f.z;
                    self->unk_19 = 0;
                    if (Unk_020b60dc_IsMode0()) {
                        if (tc == 10) {
                            self->unk_18 = 6;
                            s32 g1, g2;
                            func_0204ee10(&g1, &g2, (Vec3 *)&self->unk_0c);
                            self->unk_19 = func_ov003_02218b1c(func_ov003_02218bc8(g1, g2));
                        } else {
                            self->unk_18 = 5;
                        }
                    } else {
                        self->unk_18 = 5;
                    }
                }
            }
        }
    }
    Vec3 ip;
    for (Unk_020e44d4 *n = self->unk_1c; n != 0; n = n->unk_38) {
        if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(n, &p0) >= 0) {
            BOOL in;
            if (_ZN12Unk_020d8ccc13func_0202f274EP15Unk_0202f2ac_V3(n, &p1) >= 0) {
                in = TRUE;
            } else {
                in = FALSE;
            }
            if (!in) {
                if (_ZN12Unk_020d8ccc13func_0202f11cEP15Unk_0202f2ac_V3S1_S1_(n, &ip, &p0, &p1)) {
                    p1 = ip;
                    Vec3 kk;
                    func_0203ee38(&kk, &p1);
                    self->unk_0c = kk.x;
                    self->unk_10 = kk.y;
                    self->unk_14 = kk.z;
                    self->unk_18 = n->unk_3c;
                    self->unk_19 = *(u8 *)((u8 *)n + 0x40);
                }
            }
        }
    }
    Unk_020b6a94 *n = self->unk_20;
    while (n != 0) {
        Unk_020b60dc_Line l;
        _ZN12Unk_0202f660C1EP15Unk_0202f660_V3S1_(&l, &p0, &p1);
        if (_ZN12Unk_0202e9c813func_0202e918EP17Unk_0202e918_Vec3P16Unk_0202e918_Cap(n, &ip, &l)) {
            Vec3 m2;
            func_0203ee38(&m2, (Vec3 *)n);
            self->unk_0c = m2.x;
            self->unk_10 = m2.y;
            self->unk_14 = m2.z;
            self->unk_18 = n->unk_14;
            self->unk_19 = n->unk_10;
        }
        n = n->unk_18;
        _ZN12Unk_0202f660D1Ev(&l);
    }
    self->unk_20 = 0;
    self->unk_24 = 0;
    self->unk_1c = 0;
}

}

extern "C" void func_020b60d8(void) {}

extern "C" void func_020b60d4(void) {}

extern "C" BOOL func_020b60b0(Vec3 *obj, Vec3 *out) {
    if (out) {
        out->x = obj->x;
        out->y = obj->y;
        out->z = obj->z;
    }
    if (obj->x != 0xffed4000) {
        return TRUE;
    }
    return FALSE;
}
