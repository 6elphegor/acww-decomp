#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
u32 func_0201bc4c(void *p, s32 n);
s32 func_0201bcf8(void *p, void *q, s32 n);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void func_02015ab0(u32 a);
    u8 pad_04[0x40];
    u32 unk_44;
    u8 pad_48[0xac - 0x48];
};

class Unk_020e73b0;
typedef void (Unk_020e73b0::*Unk_020c2620_Fn)(void *);
typedef void (Unk_020e73b0::*Unk_020c269c_Fn)(void *);

struct Unk_020c270c_Out {
    void *vptr;
    u8 flag;
};

class Unk_020e73b0 : public Unk_020d7714 {
public:
    Unk_020e73b0();
    virtual ~Unk_020e73b0();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14(void *a);
    virtual void vfunc_18();

    void func_020c2690(void *a);
    void func_020c2694(Unk_020c270c_Out *out);
    void func_020c269c(Unk_020c270c_Out *out);
    void func_020c270c(Unk_020c270c_Out *out);
    void func_020c271c(s32 v);
    void func_020c2724(u32 v);

    s32 unk_ac;
    u32 unk_b0;
};

class Unk_0202e5a8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_0202e5a8();
};

class Unk_020e7440 : public Unk_0202e5a8 {
public:
    virtual ~Unk_020e7440();
    virtual BOOL vfunc_48(void *p);
    virtual void vfunc_4c(s32 a);
    void func_020c28b0(s32 s);

    u8 unk_04[0x654];
    Unk_020e73b0 unk_658;
};

Unk_020e7440::~Unk_020e7440() {}

BOOL Unk_020e7440::vfunc_48(void *p) {
    BOOL r = FALSE;
    if (func_0201bcf8(this, p, 0x2000) == 1) {
        r = TRUE;
    }
    return r;
}

void Unk_020e7440::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_020c28b0(1);
        break;
    case 8:
        func_020c28b0(3);
        break;
    }
}

void Unk_020e73b0::vfunc_14(void *a) {
    static Unk_020c2620_Fn tbl[1] = { &Unk_020e73b0::func_020c2690 };
    if (unk_ac >= 0 && unk_ac < 1) {
        if (tbl[unk_ac]) {
            (this->*tbl[unk_ac])(a);
        }
    }
}

void Unk_020e73b0::func_020c2690(void *a) {}

void Unk_020e73b0::func_020c2694(Unk_020c270c_Out *out) {
    func_020c269c(out);
}

void Unk_020e73b0::func_020c269c(Unk_020c270c_Out *out) {
    static Unk_020c269c_Fn tbl[1] = { (Unk_020c269c_Fn)&Unk_020e73b0::func_020c270c };
    if (unk_ac >= 0 && unk_ac < 1) {
        if (tbl[unk_ac]) {
            (this->*tbl[unk_ac])((void *)out);
        }
    }
}

extern "C" u8 data_020d1c98[];
void Unk_020e73b0::func_020c270c(Unk_020c270c_Out *out) {
    out->vptr = data_020d1c98;
    out->flag = 0;
}

void Unk_020e73b0::func_020c271c(s32 v) {
    unk_ac = v;
}

void Unk_020e73b0::func_020c2724(u32 v) {
    vfunc_08();
    unk_b0 = v;
    unk_ac = 1;
}


struct Vec3 {
    s32 x, y, z;
};

struct Unk_020b60dc_Mtx {
    s32 m[12];
};

struct Unk_020b60dc_T3 {
    Vec3 a, b, c;
};

struct Unk_020b60dc_Cfg {
    u32 unk_00;
    u8 unk_04;
};

// Triangle / plane test object (0x38 bytes), plain struct with explicit init/cleanup functions
struct Unk_020d8ccc {
    u32 pad[0x38 / 4];
};

struct Unk_020e44d4 : Unk_020d8ccc {
    /* 0x38 */ Unk_020e44d4 *unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020b6a94 {
    u8 pad[0x10];
    /* 0x10 */ u8 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ Unk_020b6a94 *unk_18;
};

struct Unk_020b6a0c {
    Vec3 unk_00;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    Unk_020b6a0c *unk_1c;
};

struct Unk_0202f660 {
    u32 pad[0x24 / 4];
};

struct Unk_0203398c {
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

struct Unk_020b60d8 {
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

struct Unk_020b6960 : Unk_020b60d8 {
    void func_020b60dc(Vec3 *from, Vec3 *to, u8 flag);
    /* 0x1c */ Unk_020e44d4 *unk_1c;
    /* 0x20 */ Unk_020b6a94 *unk_20;
    /* 0x24 */ Unk_020b6a0c *unk_24;
};

extern "C" {
void func_0202f600(Unk_020d8ccc *t, Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d);
void func_0202f62c(Unk_020d8ccc *t);
void func_0202f638(Unk_020d8ccc *t);
BOOL func_0202f364(Unk_020d8ccc *t, Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *n);
s32 func_0202f274(Unk_020d8ccc *t, Vec3 *p);
BOOL func_0202f11c(Unk_020d8ccc *t, Vec3 *out, Vec3 *a, Vec3 *b);
void func_020339bc(Unk_0203398c *x, Vec3 *v, s32 a, s32 b);
void func_0203398c(Unk_0203398c *x, s32 a, s32 b, s32 c, s32 d);
void func_02033988(Unk_0203398c *x);
s32 func_02033914(Unk_0203398c *x, s32 k);
void func_0202f7a8(Unk_0202f660 *l, Vec3 *a, Vec3 *b);
void func_0202f7a4(Unk_0202f660 *l);
BOOL func_0202e918(Unk_020b6a94 *n, Vec3 *out, Unk_0202f660 *l);
void func_020b6e38(Unk_020b60dc_T3 *out, Vec3 *a, Vec3 *b);
BOOL func_020b6f10(Vec3 *out, Vec3 *in, void *node, s32 a, s32 b);
BOOL func_020b7074(Vec3 *out, Vec3 *a, Vec3 *b, s32 c, s32 d);
BOOL func_020b705c(u8 v);
BOOL func_020b60b0(Unk_020b60d8 *obj, Vec3 *out);
void func_0203ee38(Vec3 *out, Vec3 *in);
s32 func_0203edc0(void);
void *func_0203bc90(void *cam);
void func_020e9888(Vec3 *v, s32 s);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
void func_020e8344(Unk_020b60dc_Mtx *m, void *p);
void func_020e8528(Unk_020b60dc_Mtx *m, s32 a, s32 b, s32 c);
void func_020e8434(Unk_020b60dc_Mtx *m, s32 a);
void func_01ffb898(Vec3 *v, Unk_020b60dc_Mtx *m, Vec3 *out);
void func_0202f3a8(Vec3 *out, Vec3 *a, Vec3 *b, Vec3 *c);
BOOL func_020307c4(s32 x, s32 z, s32 *a, s32 *b, s32 *c);
void func_0204ee10(s32 *a, s32 *b, Vec3 *v);
s32 func_ov003_02218bc8(s32 a, s32 b);
s32 func_ov003_02218b1c(s32 a);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);

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

void Unk_020b6960::func_020b60dc(Vec3 *from, Vec3 *to, u8 flag) {
    Vec3 t[3];
    Vec3 p0, p1, r, v;
    s32 ka, kb, kc;

    func_020b69c0(flag);
    if (flag == 0 || data_021c5384 == 1) {
        unk_20 = 0;
        unk_24 = 0;
        unk_1c = 0;
        return;
    }
    func_020b6e38((Unk_020b60dc_T3 *)t, from, to);
    p0 = t[0];
    Vec3 *pb = &t[1];
    p1 = *pb;
    if (data_021ef2f0->unk_04 == 1) {
        static s32 k1 = data_020c8cbc * 6;
        static s32 k2 = data_020c7c1c + func_0203edc0();
        s32 kk = k1;
        if (func_020b7074(&r, &p0, &p1, k2, kk)) {
            func_0203ee38(&v, &r);
            Unk_0203398c x;
            func_020339bc(&x, &v, 0, 0);
            if (x.unk_30 != 0) {
                p1 = r;
                v.y = data_020c7c1c;
                unk_00 = v.x;
                unk_04 = v.y;
                unk_08 = v.z;
            }
            func_02033988(&x);
        }
        if (!func_020b60b0(this, 0)) {
            if (func_020b7074(&r, &p0, &p1, func_0203edc0(), kk)) {
                p1 = r;
                Vec3 w;
                func_0203ee38(&w, &r);
                w.y = 0;
                unk_00 = w.x;
                unk_04 = w.y;
                unk_08 = w.z;
            }
        }
        if (!func_020b60b0(this, 0)) {
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
                Unk_020b60dc_Mtx m;
                func_020e8344(&m, func_0203bc90(cam));
                func_020e8528(&m, 0, func_0203edc0(), 0);
                func_020e8434(&m, -0x1000);
                func_020e8434(&m, 0);
                Vec3 rr[4];
                func_01ffb898(&q[0], &m, &rr[0]);
                func_01ffb898(&q[1], &m, &rr[1]);
                func_01ffb898(&q[2], &m, &rr[2]);
                func_01ffb898(&q[3], &m, &rr[3]);
                Vec3 pl;
                func_0202f3a8(&pl, &rr[0], &rr[1], &rr[2]);
                Unk_020d8ccc tri[2];
                func_0202f600(&tri[0], &rr[0], &rr[1], &rr[2], &pl);
                func_0202f600(&tri[1], &rr[0], &rr[2], &rr[3], &pl);
                Unk_020d8ccc *tp = &tri[0];
                for (u32 i = 0; i < 2; tp++, i++) {
                    if (func_0202f274(tp, &p0) >= 0) {
                        BOOL in;
                        if (func_0202f274(tp, &l.c) >= 0) {
                            in = TRUE;
                        } else {
                            in = FALSE;
                        }
                        if (!in) {
                            Vec3 ip;
                            if (func_0202f11c(tp, &ip, &p0, &l.c)) {
                                p1 = ip;
                                Vec3 j;
                                func_0203ee38(&j, &ip);
                                unk_00 = j.x;
                                unk_04 = j.y;
                                unk_08 = j.z;
                                unk_04 = 0;
                            }
                        }
                    }
                }
                func_0202f62c(&tri[1]);
                func_0202f62c(&tri[0]);
            }
        }
    } else {
        s32 x0 = p0.x >> 13;
        s32 z0 = p0.z >> 13;
        s32 x1 = p1.x >> 13;
        s32 z1 = p1.z >> 13;
        s32 xlo, xhi, zlo, zhi;
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
            s32 cx = (gx << 13) + 0x1000;
            for (s32 gz = zlo; gz <= zhi; gz++) {
                Unk_0203398c y;
                func_0203398c(&y, gx, gz, 0, 0);
                s32 h = func_02033914(&y, 0);
                if (h < 0x4000 && h != 0) {
                    s32 cz = (gz << 13) + 0x1000;
                    Vec3 s[5];
                    s[0].x = cx; s[0].y = 0; s[0].z = cz;
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
                    Unk_020d8ccc ua[2];
                    func_0202f638(&ua[0]);
                    func_0202f638(&ua[1]);
                    func_0202f364(&ua[0], &s[1], &s[2], &s[4], &n);
                    func_0202f364(&ua[1], &s[2], &s[3], &s[4], &n);
                    Unk_020d8ccc *up = &ua[0];
                    for (u32 i = 0; i < 2; up++, i++) {
                        if (func_0202f274(up, &p0) >= 0) {
                            BOOL in;
                            if (func_0202f274(up, &p1) >= 0) {
                                in = TRUE;
                            } else {
                                in = FALSE;
                            }
                            if (!in) {
                                Vec3 ip;
                                if (func_0202f11c(up, &ip, &p0, &p1)) {
                                    p1 = ip;
                                    unk_00 = p1.x;
                                    unk_04 = p1.y;
                                    unk_08 = p1.z;
                                    found = 1;
                                }
                            }
                        }
                    }
                    func_0202f62c(&ua[1]);
                    func_0202f62c(&ua[0]);
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
            Unk_0203398c z;
            func_020339bc(&z, &r, 0, 0);
            unk_00 = r.x;
            unk_04 = r.y;
            unk_08 = r.z;
            func_02033988(&z);
        }
    }

    for (Unk_020b6a0c *n = unk_24; n != 0; n = n->unk_1c) {
        if (func_020b6f10(&p1, &p0, n, n->unk_0c, n->unk_10)) {
            unk_0c = n->unk_00.x;
            unk_10 = n->unk_00.y;
            unk_14 = n->unk_00.z;
            unk_18 = n->unk_14;
            unk_19 = n->unk_18;
        }
    }
    for (Unk_020b60dc_Node *n = data_021ce638; n != 0; n = n->unk_38) {
        if (func_020b705c(n->unk_0c)) {
            if (func_020b6f10(&p1, &p0, n->vfunc_00(), n->unk_04, n->unk_08)) {
                Vec3 *vp = n->vfunc_00();
                unk_0c = vp->x;
                unk_10 = vp->y;
                unk_14 = vp->z;
                unk_18 = n->unk_0c;
                unk_19 = n->unk_0d;
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
    s32 bxl = el.lo.x >> 13;
    s32 bzl = el.lo.z >> 13;
    s32 bxh = el.hi.x >> 13;
    s32 bzh = el.hi.z >> 13;
    for (s32 gz = bzh; gz >= bzl; gz--) {
        s32 cz = (gz << 13) + 0x1000;
        for (s32 gx = bxh; gx >= bxl; gx--) {
            s32 ta, tb, tc;
            tc = 0;
            if (func_020307c4(gx, gz, &ta, &tb, &tc) && tc != 0) {
                Vec3 f;
                f.x = (gx << 13) + 0x1000;
                f.y = 0;
                f.z = cz;
                if (func_020b6f10(&p1, &p0, &f, ta, tb)) {
                    unk_0c = f.x;
                    unk_10 = f.y;
                    unk_14 = f.z;
                    unk_19 = 0;
                    if (Unk_020b60dc_IsMode0()) {
                        if (tc == 10) {
                            unk_18 = 6;
                            s32 g1, g2;
                            func_0204ee10(&g1, &g2, (Vec3 *)&unk_0c);
                            unk_19 = func_ov003_02218b1c(func_ov003_02218bc8(g1, g2));
                        } else {
                            unk_18 = 5;
                        }
                    } else {
                        unk_18 = 5;
                    }
                }
            }
        }
    }
    Vec3 ip;
    for (Unk_020e44d4 *n = unk_1c; n != 0; n = n->unk_38) {
        if (func_0202f274(n, &p0) >= 0) {
            BOOL in;
            if (func_0202f274(n, &p1) >= 0) {
                in = TRUE;
            } else {
                in = FALSE;
            }
            if (!in) {
                if (func_0202f11c(n, &ip, &p0, &p1)) {
                    p1 = ip;
                    Vec3 kk;
                    func_0203ee38(&kk, &p1);
                    unk_0c = kk.x;
                    unk_10 = kk.y;
                    unk_14 = kk.z;
                    unk_18 = n->unk_3c;
                    unk_19 = *(u8 *)((u8 *)n + 0x40);
                }
            }
        }
    }
    Unk_020b6a94 *n = unk_20;
    while (n != 0) {
        Unk_0202f660 l;
        func_0202f7a8(&l, &p0, &p1);
        if (func_0202e918(n, &ip, &l)) {
            Vec3 m2;
            func_0203ee38(&m2, (Vec3 *)n);
            unk_0c = m2.x;
            unk_10 = m2.y;
            unk_14 = m2.z;
            unk_18 = n->unk_14;
            unk_19 = n->unk_10;
        }
        n = n->unk_18;
        func_0202f7a4(&l);
    }
    unk_20 = 0;
    unk_24 = 0;
    unk_1c = 0;
}
