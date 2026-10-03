#include "types.h"

struct Unk_0202f2ac_V3 {
    s32 x, y, z;
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) : x(a), y(0), z(c) {}
};
struct Unk_0202f660_V3 { s32 x, y, z; };
struct Unk_0202f7b8_V3 : Unk_0202f660_V3 {
    Unk_0202f7b8_V3() {}
    Unk_0202f7b8_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

extern "C" {
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(...);
s32 func_01ffcb2c(s32 x, s32 y);
s32 VEC_DotProduct(void *a, void *b);
void VEC_Add(void *o, void *a, void *b);
void func_01ffd070(void *o, void *a, void *b);
void func_020e93a0(void *v, s16 a);
void func_020e9960(void *o, void *a, void *b);
void func_020e9588(void *o, void *a, void *b, void *c);
s32 func_020e94f8(void *v);
void func_020e9888(void *v, s32 s);
s32 func_020e96a4(void *a, void *b);
s32 func_020e9650(void *a, void *b);
}

static inline s32 Unk_0202f2ac_Abs(s32 v) { return v < 0 ? -v : v; }

// ---- 2D line segment with normal (vtable 0x020d8ce4) ----
class Unk_0202f048 {
public:
    s32 x, y;
    Unk_0202f048() {}
    Unk_0202f048(s32 a, s32 b);
    ~Unk_0202f048() {}
    void operator=(const Unk_0202f048 &o) { x = o.x; y = o.y; }
    Unk_0202f048(const Unk_0202f048 &o) { x = o.x; y = o.y; }
    void func_0202f048(s32 a, s32 b);
    Unk_0202f048 *func_0202f030(Unk_0202f048 *p);
    void func_0202f000(Unk_0202f048 *p);
    void func_0202f014(Unk_0202f048 *a, Unk_0202f048 *b);
    void func_0202efe4(Unk_0202f048 *a, Unk_0202f048 *b);
    Unk_0202f048 *func_0202efc0(s32 k);
    s64 func_0202ef84(Unk_0202f048 *p);
    BOOL func_0202ef40();
    void func_0202ef18(s16 a);
    void func_0202eeec(Unk_0202f048 *a, Unk_0202f048 *b);
};

Unk_0202f048 data_021bf988(0, 0);

class Unk_020d8ce4 {
public:
    Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b);
    Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);
    ~Unk_020d8ce4();
    virtual BOOL vfunc_00() { return TRUE; }

    BOOL func_0202e9d4(Unk_0202f048 *a, Unk_0202f048 *b, s32 c);
    BOOL func_0202ea40(Unk_0202f048 *a, Unk_0202f048 *b, s32 c);
    BOOL func_0202eb30(Unk_0202f048 *a, Unk_0202f048 *b, s32 c);
    BOOL func_0202ebb0(Unk_0202f048 *a);
    BOOL func_0202ec6c(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    BOOL func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    s32 func_0202edac(Unk_0202f048 *p);
    s32 func_0202edd4();
    void func_0202edf8(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);

    /* 0x04 */ Unk_0202f048 unk_04;
    /* 0x0c */ Unk_0202f048 unk_0c;
    /* 0x14 */ Unk_0202f048 unk_14;
    /* 0x1c */ s32 unk_1c;
};

// ---- triangle (vtable 0x020d8ccc) ----
class Unk_020d8ccc {
public:
    Unk_020d8ccc();
    Unk_020d8ccc(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d);
    ~Unk_020d8ccc();
    virtual BOOL vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    Unk_0202f2ac_V3 unk_04, unk_10, unk_1c, unk_28;
    s32 unk_34;
    BOOL func_0202f050(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);
    BOOL func_0202f11c(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);
    BOOL func_0202f15c(Unk_0202f2ac_V3 *p);
    BOOL func_0202f1e8(Unk_0202f2ac_V3 *p);
    s32 func_0202f274(Unk_0202f2ac_V3 *p);
    s32 func_0202f2ac();
    BOOL func_0202f2d8(Unk_0202f2ac_V3 *p);
    BOOL func_0202f364(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d);
};

class Unk_0202f660 {
public:
    Unk_0202f660_V3 unk_00;
    Unk_0202f660_V3 unk_0c;
    Unk_0202f660_V3 unk_18;

    BOOL func_0202f660(Unk_0202f660_V3 *pt);
    void func_0202f6b4(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt);
    s32 func_0202f708(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt);
    void func_0202f734(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
    s32 func_0202f758(Unk_0202f660_V3 *pt);
    s32 func_0202f778(Unk_0202f660_V3 *out);
    ~Unk_0202f660();
    Unk_0202f660(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
};

class CollisionCircle {
public:
    Unk_0202f660_V3 unk_00;
    s32 unk_0c;

    BOOL containsXZ(Unk_0202f660_V3 *pt);
    void setCircle(Unk_0202f660_V3 *pos, s32 radius);
    ~CollisionCircle();
    CollisionCircle(Unk_0202f660_V3 *pos, s32 radius);
    CollisionCircle();
};

class CollisionCylinder : public CollisionCircle {
public:
    s32 unk_10;

    BOOL func_0202f7b8(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202f968(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    ~CollisionCylinder();
    CollisionCylinder(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    CollisionCylinder();
};

BOOL CollisionCylinder::func_0202f968(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 t1, t2;
    s32 y, z, y2, z2;
    struct { Unk_0202f7b8_V3 LampLights, LightLevel, WindowLight, P1, P2; } l;
    l.LampLights = Unk_0202f7b8_V3(a->x, a->y, a->z);
    l.LightLevel = Unk_0202f7b8_V3(out->x, out->y, out->z);
    func_020e9960(&l.WindowLight, &l.LightLevel, &l.LampLights);
    if (func_020e94f8(&l.WindowLight)) {
        s32 dy = l.WindowLight.y;
        if ((dy < 0 ? -dy : dy) >= 4) {
            s32 top = unk_00.y + unk_10;
            s32 ay = l.LampLights.y;
            if (ay > top && l.LightLevel.y < top) {
                t1 = FX_Div(top - ay, l.WindowLight.y);
                z = l.LampLights.z + func_01ffcb0c(l.WindowLight.z, t1);
                y = l.LampLights.y + func_01ffcb0c(l.WindowLight.y, t1);
                l.P1.x = l.LampLights.x + func_01ffcb0c(l.WindowLight.x, t1);
                l.P1.y = y;
                l.P1.z = z;
                if (containsXZ(&l.P1)) {
                    *out = l.P1;
                    return TRUE;
                }
            } else if (ay < 0 && l.LightLevel.y > 0) {
                t2 = FX_Div(-ay, l.WindowLight.y);
                z2 = l.LampLights.z + func_01ffcb0c(l.WindowLight.z, t2);
                y2 = l.LampLights.y + func_01ffcb0c(l.WindowLight.y, t2);
                l.P2.x = l.LampLights.x + func_01ffcb0c(l.WindowLight.x, t2);
                l.P2.y = y2;
                l.P2.z = z2;
                if (containsXZ(&l.P2)) {
                    *out = l.P2;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

BOOL CollisionCylinder::func_0202f7b8(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 ymin, ymax, z;
    if (!containsXZ(a)) {
        struct { Unk_0202f7b8_V3 LampLights, LightLevel, C, WindowLight; u32 pad[6]; } l;
        l.LampLights = Unk_0202f7b8_V3(a->x, a->y, a->z);
        l.LightLevel = Unk_0202f7b8_V3(out->x, out->y, out->z);
        l.C = Unk_0202f7b8_V3(unk_00.x, unk_00.y, unk_00.z);
        s32 r = unk_0c;
        func_020e9960(&l.WindowLight, &l.LightLevel, &l.LampLights);
        s32 t = func_01ffcb0c(l.WindowLight.z, l.WindowLight.z);
        s32 q = func_01ffcb0c(l.WindowLight.x, l.WindowLight.x);
        q += t;
        s32 aq = q < 0 ? -q : q;
        if (aq < 4) {
            return FALSE;
        }
        s32 b = FX_Div(func_01ffcb0c(l.WindowLight.x, l.LampLights.x - l.C.x) + func_01ffcb0c(l.WindowLight.z, l.LampLights.z - l.C.z), q) << 1;
        s32 zz = func_01ffcb0c(l.LampLights.z - l.C.z, l.LampLights.z - l.C.z);
        s32 xx = func_01ffcb0c(l.LampLights.x - l.C.x, l.LampLights.x - l.C.x);
        s32 c = FX_Div(xx + zz - func_01ffcb0c(r, r), q);
        s32 disc = func_01ffcb0c(b, b) - (c << 2);
        if (disc < 0) {
            return FALSE;
        }
        s32 s = FX_Sqrt(disc);
        if (s < 0) {
            s = -s;
        }
        s32 t1 = -(b + s) >> 1;
        s32 t2 = (s - b) >> 1;
        ymin = unk_00.y;
        ymax = ymin + unk_10;
        s32 y, x;
        if ((t1 < 0 ? -t1 : t1) < 4 || (t1 >= 0 && t1 <= 0x1000)) {
            z = l.LampLights.z + func_01ffcb0c(t1, l.WindowLight.z);
            y = l.LampLights.y + func_01ffcb0c(t1, l.WindowLight.y);
            x = l.LampLights.x + func_01ffcb0c(t1, l.WindowLight.x);
            if (y >= ymin && y <= ymax) {
                out->x = x;
                out->y = y;
                out->z = z;
                return TRUE;
            }
        }
        if ((t2 < 0 ? -t2 : t2) < 4 || (t2 >= 0 && t2 <= 0x1000)) {
            z = l.LampLights.z + func_01ffcb0c(t2, l.WindowLight.z);
            y = l.LampLights.y + func_01ffcb0c(t2, l.WindowLight.y);
            x = l.LampLights.x + func_01ffcb0c(t2, l.WindowLight.x);
            if (y >= ymin && y <= ymax) {
                out->x = x;
                out->y = y;
                out->z = z;
                return TRUE;
            }
        }
    }
    return FALSE;
}

Unk_0202f660::Unk_0202f660(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b) { func_0202f734(a, b); }

Unk_0202f660::~Unk_0202f660() {}

s32 Unk_0202f660::func_0202f778(Unk_0202f660_V3 *out) {
    Unk_0202f660_V3 tmp;
    func_020e9960(&tmp, &unk_0c, &unk_00);
    *out = tmp;
    return func_020e94f8(out);
}

s32 Unk_0202f660::func_0202f758(Unk_0202f660_V3 *pt) {
    Unk_0202f660_V3 tmp;
    func_0202f6b4(&tmp, pt);
    return func_020e96a4(&tmp, pt);
}

void Unk_0202f660::func_0202f734(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b) {
    unk_00 = *a;
    unk_0c = *b;
    func_0202f778(&unk_18);
}

s32 Unk_0202f660::func_0202f708(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt) {
    Unk_0202f660_V3 tmp;
    func_0202f6b4(&tmp, pt);
    *out = tmp;
    return func_020e96a4(&tmp, pt);
}

void Unk_0202f660::func_0202f6b4(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt) {
    s32 a = VEC_DotProduct(&unk_18, pt);
    s32 t = -(VEC_DotProduct(&unk_18, &unk_00) - a);
    s32 y, z;
    z = func_01ffcb0c(unk_18.z, t);
    z += unk_00.z;
    y = func_01ffcb0c(unk_18.y, t);
    y += unk_00.y;
    s32 x = func_01ffcb0c(unk_18.x, t);
    out->x = x + unk_00.x;
    out->y = y;
    out->z = z;
}

BOOL Unk_0202f660::func_0202f660(Unk_0202f660_V3 *pt) {
    s32 a = VEC_DotProduct(&unk_18, &unk_00);
    s32 b = VEC_DotProduct(&unk_18, pt);
    s32 c = VEC_DotProduct(&unk_18, &unk_0c);
    s32 d = VEC_DotProduct(&unk_18, pt);
    if (func_01ffcb0c(b - a, d - c) > 0) {
        return FALSE;
    }
    return TRUE;
}




Unk_020d8ccc::Unk_020d8ccc() {
    unk_28.x = 0;
    unk_28.y = 0;
    unk_28.z = 0;
    unk_34 = 0;
}

Unk_020d8ccc::~Unk_020d8ccc() {}

Unk_020d8ccc::Unk_020d8ccc(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d) { func_0202f364((Unk_0202f2ac_V3 *)a, (Unk_0202f2ac_V3 *)b, (Unk_0202f2ac_V3 *)c, (Unk_0202f2ac_V3 *)d); }

BOOL Unk_020d8ccc::vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    BOOL r = FALSE;
    if (vfunc_04(a, b, c)) r = TRUE;
    if (vfunc_00(a, b, c)) r = TRUE;
    if (vfunc_08(a, b, c)) r = TRUE;
    return r;
}

BOOL Unk_020d8ccc::vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    Unk_0202f2ac_V3 o;
    BOOL r = FALSE;
    if (func_0202f274(a) <= 0 && func_0202f274(b) > 0 && func_0202f11c(&o, a, b)) {
        a->x = o.x + func_01ffcb0c(c, unk_28.x);
        a->y = o.y + func_01ffcb0c(c, unk_28.y);
        a->z = o.z + func_01ffcb0c(c, unk_28.z);
        r = TRUE;
    }
    return r;
}

BOOL Unk_020d8ccc::vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    BOOL result = FALSE;
    s32 d = func_0202f274(a);
    if (d >= 0 && d <= c + 0x200) {
        if (d < c) {
            Unk_0202f2ac_V3 t, o;
            func_01ffd070(&t, a, &unk_28);
            if (!func_0202f050(&o, a, &t)) {
                goto end;
            }
            if (d < c) {
                s32 e = c - d;
                a->x = a->x + func_01ffcb0c(e, unk_28.x);
                a->y = a->y + func_01ffcb0c(e, unk_28.y);
                a->z = a->z + func_01ffcb0c(e, unk_28.z);
            }
            result = TRUE;
        } else {
            result = TRUE;
        }
    }
end:
    return result;
}

BOOL Unk_020d8ccc::vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    Unk_0202f2ac_V3 w, v;
    BOOL result;
    s32 d;
    if (func_0202f274(b) < 0) {
        return FALSE;
    }
    s32 e = func_0202f274(a);
    if (e < 0) {
        return FALSE;
    }
    result = FALSE;
    if (e < c) {
        Unk_0202f660 t0((Unk_0202f660_V3 *)&unk_04, (Unk_0202f660_V3 *)&unk_10);
        Unk_0202f660 t1((Unk_0202f660_V3 *)&unk_10, (Unk_0202f660_V3 *)&unk_1c);
        Unk_0202f660 t2((Unk_0202f660_V3 *)&unk_1c, (Unk_0202f660_V3 *)&unk_04);
        Unk_0202f660 *p = &t0;
        for (; p < &t0 + 3; p++) {
            d = p->func_0202f708((Unk_0202f660_V3 *)&w, (Unk_0202f660_V3 *)a);
            if (d < c && p->func_0202f660((Unk_0202f660_V3 *)a)) {
                func_020e9960(&v, a, &w);
                if (func_020e94f8(&v) == 0) {
                    Unk_0202f2ac_V3 *q = &unk_28;
                    v = *q;
                    func_020e9888(&v, c);
                } else {
                    func_020e9888(&v, c - d);
                }
                VEC_Add(a, &v, a);
                result = TRUE;
                break;
            }
        }
    }
    return result;
}

extern "C" s32 func_0202f3a8(Unk_0202f2ac_V3 *n, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b) {
    Unk_0202f2ac_V3 u, v, t;
    func_020e9960(&u, a, p);
    func_020e9960(&v, b, p);
    func_020e9588(&t, n, &u, &v);
    return func_020e94f8(n);
}

BOOL Unk_020d8ccc::func_0202f364(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d) {
    unk_04 = *a;
    unk_10 = *b;
    unk_1c = *c;
    unk_28 = *d;
    unk_34 = func_0202f2ac();
    return TRUE;
}

BOOL Unk_020d8ccc::func_0202f2d8(Unk_0202f2ac_V3 *p) {
    Unk_0202f2ac_V3 a, b, c;
    func_020e9960(&a, &unk_04, p);
    func_020e9960(&b, &unk_10, p);
    func_020e9960(&c, &unk_1c, p);
    s32 r5 = func_01ffcb0c(a.z, b.x) - func_01ffcb0c(a.x, b.z);
    s32 r4 = func_01ffcb0c(b.z, c.x) - func_01ffcb0c(b.x, c.z);
    s32 r0 = func_01ffcb0c(c.z, a.x) - func_01ffcb0c(c.x, a.z);
    if ((r5 >= 0 && r4 >= 0 && r0 >= 0) || (r5 <= 0 && r4 <= 0 && r0 <= 0)) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_020d8ccc::func_0202f2ac() {
    s32 z = func_01ffcb0c(unk_28.z, unk_04.z);
    s32 x = func_01ffcb0c(unk_28.x, unk_04.x);
    s32 y = func_01ffcb0c(unk_28.y, unk_04.y);
    return -(z + (x + y));
}

s32 Unk_020d8ccc::func_0202f274(Unk_0202f2ac_V3 *p) {
    s32 d = unk_34;
    s32 z = func_01ffcb0c(unk_28.z, p->z);
    s32 x = func_01ffcb0c(unk_28.x, p->x);
    s32 y = func_01ffcb0c(unk_28.y, p->y);
    return d + (z + (x + y));
}

BOOL Unk_020d8ccc::func_0202f1e8(Unk_0202f2ac_V3 *p) {
    Unk_0202f2ac_V3 a, b, c;
    func_020e9960(&a, &unk_04, p);
    func_020e9960(&b, &unk_10, p);
    func_020e9960(&c, &unk_1c, p);
    s32 r5 = func_01ffcb0c(a.x, b.y) - func_01ffcb0c(a.y, b.x);
    s32 r4 = func_01ffcb0c(b.x, c.y) - func_01ffcb0c(b.y, c.x);
    s32 r0 = func_01ffcb0c(c.x, a.y) - func_01ffcb0c(c.y, a.x);
    if ((r5 >= 0 && r4 >= 0 && r0 >= 0) || (r5 <= 0 && r4 <= 0 && r0 <= 0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d8ccc::func_0202f15c(Unk_0202f2ac_V3 *p) {
    Unk_0202f2ac_V3 a, b, c;
    func_020e9960(&a, &unk_04, p);
    func_020e9960(&b, &unk_10, p);
    func_020e9960(&c, &unk_1c, p);
    s32 r5 = func_01ffcb0c(a.y, b.z) - func_01ffcb0c(a.z, b.y);
    s32 r4 = func_01ffcb0c(b.y, c.z) - func_01ffcb0c(b.z, c.y);
    s32 r0 = func_01ffcb0c(c.y, a.z) - func_01ffcb0c(c.z, a.y);
    if ((r5 >= 0 && r4 >= 0 && r0 >= 0) || (r5 <= 0 && r4 <= 0 && r0 <= 0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d8ccc::func_0202f11c(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q) {
    s32 a = func_0202f274(p);
    if (func_01ffcb0c(a, func_0202f274(q)) < 0) {
        return func_0202f050(out, p, q);
    }
    return FALSE;
}

BOOL Unk_020d8ccc::func_0202f050(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q) {
    s32 s = func_0202f274(p);
    s32 d = s - func_0202f274(q);
    if (Unk_0202f2ac_Abs(d) >= 4) {
        Unk_0202f2ac_V3 v;
        s32 t, y, z;
        func_020e9960(&v, q, p);
        t = FX_Div(s, d);
        z = p->z + func_01ffcb0c(t, v.z);
        y = p->y + func_01ffcb0c(t, v.y);
        out->x = p->x + func_01ffcb0c(t, v.x);
        out->y = y;
        out->z = z;
        if (Unk_0202f2ac_Abs(unk_28.y) >= 4) {
            if (func_0202f2d8(out)) {
                return TRUE;
            }
        }
        if (Unk_0202f2ac_Abs(unk_28.x) >= 4) {
            if (func_0202f15c(out)) {
                return TRUE;
            }
        }
        if (Unk_0202f2ac_Abs(unk_28.z) >= 4) {
            if (func_0202f1e8(out)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_0202f048::func_0202f048(s32 a, s32 b) {
    x = a;
    y = b;
}

Unk_0202f048 *Unk_0202f048::func_0202f030(Unk_0202f048 *p) {
    func_0202f048(p->x, p->y);
    return this;
}

void Unk_0202f048::func_0202f014(Unk_0202f048 *a, Unk_0202f048 *b) {
    func_0202f048(a->x + b->x, a->y + b->y);
}

void Unk_0202f048::func_0202f000(Unk_0202f048 *p) {
    x = x + p->x;
    y = y + p->y;
}

void Unk_0202f048::func_0202efe4(Unk_0202f048 *a, Unk_0202f048 *b) {
    func_0202f048(a->x - b->x, a->y - b->y);
}

Unk_0202f048 *Unk_0202f048::func_0202efc0(s32 k) {
    x = func_01ffcb0c(x, k);
    y = func_01ffcb0c(y, k);
    return this;
}

s64 Unk_0202f048::func_0202ef84(Unk_0202f048 *p) {
    Unk_0202f048 d;
    d.func_0202f048(x - p->x, y - p->y);
    s32 b = d.y;
    s32 a = func_01ffcb0c(d.x, d.x);
    s32 c = func_01ffcb0c(b, b);
    return a + c;
}

BOOL Unk_0202f048::func_0202ef40() {
    s32 r = FX_Sqrt(func_0202ef84(&data_021bf988));
    if (Unk_0202f2ac_Abs(r) < 4) {
        return FALSE;
    }
    x = FX_Div(x, r);
    y = FX_Div(y, r);
    return TRUE;
}

void Unk_0202f048::func_0202ef18(s16 a) {
    Unk_0202f2ac_V3 v(y, x);
    func_020e93a0(&v, a);
    x = v.x;
    y = v.z;
}

void Unk_0202f048::func_0202eeec(Unk_0202f048 *a, Unk_0202f048 *b) {
    Unk_0202f048 d;
    d.func_0202efe4(b, a);
    x = -d.y;
    y = d.x;
    func_0202ef40();
}

Unk_020d8ce4::Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b) {
    Unk_0202f048 n;
    unk_04.func_0202f048(0, 0);
    unk_0c.func_0202f048(0, 0);
    unk_14.func_0202f048(0, 0);
    n.func_0202f048(0, 0);
    n.func_0202eeec(a, b);
    func_0202edf8(a, b, &n);
}

Unk_020d8ce4::Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c) {
    unk_04.func_0202f048(0, 0);
    unk_0c.func_0202f048(0, 0);
    unk_14.func_0202f048(0, 0);
    func_0202edf8(a, b, c);
}


Unk_020d8ce4::~Unk_020d8ce4() {}

void Unk_020d8ce4::func_0202edf8(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c) {
    unk_04.func_0202f030(a);
    unk_0c.func_0202f030(b);
    unk_14.func_0202f030(c);
    unk_1c = func_0202edd4();
}

s32 Unk_020d8ce4::func_0202edd4() {
    s32 a = func_01ffcb0c(unk_14.x, unk_04.x);
    s32 b = func_01ffcb0c(unk_14.y, unk_04.y);
    return -(a + b);
}

s32 Unk_020d8ce4::func_0202edac(Unk_0202f048 *p) {
    s32 d = unk_1c;
    s32 a = func_01ffcb0c(unk_14.x, p->x);
    s32 b = func_01ffcb0c(unk_14.y, p->y);
    return d + (a + b);
}

BOOL Unk_020d8ce4::func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b) {
    Unk_020d8ce4 t(a, b);
    s32 det = func_01ffcb0c(unk_14.x, t.unk_14.y) - func_01ffcb0c(t.unk_14.x, unk_14.y);
    if (Unk_0202f2ac_Abs(det) >= 4) {
        s32 c = t.unk_1c;
        s32 g = unk_1c;
        out->y = FX_Div(func_01ffcb0c(t.unk_14.x, g) - func_01ffcb0c(unk_14.x, c), det);
        s32 d = unk_14.x;
        if (Unk_0202f2ac_Abs(d) >= 4) {
            s32 e = unk_1c;
            s32 m = func_01ffcb0c(unk_14.y, out->y);
            out->x = FX_Div(-(m + e), d);
            return TRUE;
        } else {
            s32 f = t.unk_14.x;
            if (Unk_0202f2ac_Abs(f) >= 4) {
                s32 e = t.unk_1c;
                s32 m = func_01ffcb0c(t.unk_14.y, out->y);
                out->x = FX_Div(-(m + e), f);
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_020d8ce4::func_0202ec6c(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b) {
    s32 x = func_0202edac(a);
    if (func_01ffcb0c(x, func_0202edac(b)) < 0) {
        Unk_020d8ce4 seg(a, b);
        s32 y = seg.func_0202edac(&unk_04);
        if (func_01ffcb0c(y, seg.func_0202edac(&unk_0c)) < 0) {
            return func_0202ece8(out, a, b);
        }
    }
    return FALSE;
}

BOOL Unk_020d8ce4::func_0202ebb0(Unk_0202f048 *p) {
    Unk_0202f048 d;
    d.func_0202efe4(&unk_04, &unk_0c);
    if (d.func_0202ef40()) {
        Unk_0202f048 n(-d.x, -d.y);
        Unk_0202f048 e;
        e.func_0202f014(&unk_04, &unk_14);
        Unk_020d8ce4 sa(&unk_04, &e, &d);
        Unk_0202f048 f;
        f.func_0202f014(&unk_0c, &unk_14);
        Unk_020d8ce4 sb(&unk_0c, &f, &n);
        s32 x = sa.func_0202edac(p);
        s32 y = sb.func_0202edac(p);
        if (x >= 0 && y >= 0) {
            return TRUE;
        }
        if (x <= 0 && y <= 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_020d8ce4::func_0202eb30(Unk_0202f048 *a, Unk_0202f048 *b, s32 c) {
    s32 d = func_0202edac(a);
    if (func_0202edac(b) >= 0) {
        s32 ad = d < 0 ? -d : d;
        if (ad <= c) {
            if (func_0202ebb0(b) || func_0202ebb0(a)) {
                Unk_0202f048 *q = &unk_14;
                Unk_0202f048 t = *q;
                t.func_0202efc0(c - d);
                a->func_0202f000(&t);
                return TRUE;
            }
        } else if (d < c + 0x200) {
            return TRUE;
        }
    }
    return FALSE;
}


BOOL Unk_020d8ce4::func_0202ea40(Unk_0202f048 *a, Unk_0202f048 *b, s32 c) {
    Unk_0202f048 *q;
    if (!vfunc_00()) {
        return FALSE;
    }
    s32 d = func_0202edac(a);
    if (d >= 0 && d < c + 0x200 && func_0202edac(b) > 0) {
        if (d < c) {
            if (func_0202edac(b) <= 0) {
                return FALSE;
            }
            Unk_0202f048 arr[2];
            q = &unk_04;
            arr[0] = *q;
            q = &unk_0c;
            Unk_0202f048 *dd = &arr[1];
            *dd = *q;
            for (Unk_0202f048 *p = arr; p < arr + 2; p++) {
                s32 dist = FX_Sqrt(p->func_0202ef84(a));
                if (dist < c) {
                    Unk_0202f048 t;
                    t.func_0202efe4(a, p);
                    if (!t.func_0202ef40()) {
                        q = &unk_14;
                        t.func_0202f048(q->x, q->y);
                    } else {
                        c -= dist;
                    }
                    t.x = func_01ffcb0c(t.x, c);
                    t.y = func_01ffcb0c(t.y, c);
                    a->x += t.x;
                    a->y += t.y;
                    return TRUE;
                }
            }
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

Unk_0202f048::Unk_0202f048(s32 a, s32 b) {
    x = a;
    y = b;
}



BOOL Unk_020d8ce4::func_0202e9d4(Unk_0202f048 *a, Unk_0202f048 *b, s32 c) {
    if (func_0202edac(b) > 0) {
        Unk_0202f048 v(0, 0);
        if (func_0202ec6c(&v, a, b)) {
            s32 d = c - func_0202edac(a);
            if (d < 0) {
                d = -d;
            }
            Unk_0202f048 *q = &unk_14;
            Unk_0202f048 t = *q;
            t.func_0202efc0(d);
            a->func_0202f000(&t);
            return TRUE;
        }
    }
    return FALSE;
}


