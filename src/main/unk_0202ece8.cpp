#include "types.h"

struct Unk_0202f2ac_V3 {
    s32 x, y, z;
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) : x(a), y(0), z(c) {}
};

extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc538(s64 a);
void func_01ffca8c(Unk_0202f2ac_V3 *o, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b);
void func_01ffd070(Unk_0202f2ac_V3 *o, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b);
void func_020e93a0(Unk_0202f2ac_V3 *v, s16 a);
void func_020e9960(Unk_0202f2ac_V3 *o, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b);
void func_020e9588(Unk_0202f2ac_V3 *o, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c);
s32 func_020e94f8(Unk_0202f2ac_V3 *v);
void func_020e9888(Unk_0202f2ac_V3 *v, s32 s);
extern s32 data_021bf988[];
}

static inline s32 Unk_0202f2ac_Abs(s32 v) { return v < 0 ? -v : v; }

class Unk_0202f048 {
public:
    s32 x, y;
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

class Unk_020d8ce4 {
public:
    virtual ~Unk_020d8ce4();
    Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);
    Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b);
    Unk_0202f048 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    BOOL func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    s32 func_0202edac(Unk_0202f048 *p);
    s32 func_0202edd4();
    void func_0202edf8(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);
};

Unk_020d8ce4::~Unk_020d8ce4() {}

BOOL Unk_020d8ce4::func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b) {
    Unk_020d8ce4 t(a, b);
    s32 det = func_01ffcb0c(unk_14.x, t.unk_14.y) - func_01ffcb0c(t.unk_14.x, unk_14.y);
    if (Unk_0202f2ac_Abs(det) >= 4) {
        s32 c = t.unk_1c;
        s32 g = unk_1c;
        out->y = func_01ffc5a4(func_01ffcb0c(t.unk_14.x, g) - func_01ffcb0c(unk_14.x, c), det);
        s32 d = unk_14.x;
        if (Unk_0202f2ac_Abs(d) >= 4) {
            s32 e = unk_1c;
            s32 m = func_01ffcb0c(unk_14.y, out->y);
            out->x = func_01ffc5a4(-(m + e), d);
            return TRUE;
        } else {
            s32 f = t.unk_14.x;
            if (Unk_0202f2ac_Abs(f) >= 4) {
                s32 e = t.unk_1c;
                s32 m = func_01ffcb0c(t.unk_14.y, out->y);
                out->x = func_01ffc5a4(-(m + e), f);
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 Unk_020d8ce4::func_0202edac(Unk_0202f048 *p) {
    s32 d = unk_1c;
    s32 a = func_01ffcb0c(unk_14.x, p->x);
    s32 b = func_01ffcb0c(unk_14.y, p->y);
    return d + (a + b);
}

s32 Unk_020d8ce4::func_0202edd4() {
    s32 a = func_01ffcb0c(unk_14.x, unk_04.x);
    s32 b = func_01ffcb0c(unk_14.y, unk_04.y);
    return -(a + b);
}

void Unk_020d8ce4::func_0202edf8(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c) {
    unk_04.func_0202f030(a);
    unk_0c.func_0202f030(b);
    unk_14.func_0202f030(c);
    unk_1c = func_0202edd4();
}

Unk_020d8ce4::Unk_020d8ce4(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c) {
    unk_04.func_0202f048(0, 0);
    unk_0c.func_0202f048(0, 0);
    unk_14.func_0202f048(0, 0);
    func_0202edf8(a, b, c);
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

void Unk_0202f048::func_0202eeec(Unk_0202f048 *a, Unk_0202f048 *b) {
    Unk_0202f048 d;
    d.func_0202efe4(b, a);
    x = -d.y;
    y = d.x;
    func_0202ef40();
}

void Unk_0202f048::func_0202ef18(s16 a) {
    Unk_0202f2ac_V3 v(y, x);
    func_020e93a0(&v, a);
    x = v.x;
    y = v.z;
}

BOOL Unk_0202f048::func_0202ef40() {
    s32 r = func_01ffc538(func_0202ef84((Unk_0202f048 *)data_021bf988));
    if (Unk_0202f2ac_Abs(r) < 4) {
        return FALSE;
    }
    x = func_01ffc5a4(x, r);
    y = func_01ffc5a4(y, r);
    return TRUE;
}

s64 Unk_0202f048::func_0202ef84(Unk_0202f048 *p) {
    Unk_0202f048 d;
    d.func_0202f048(x - p->x, y - p->y);
    s32 b = d.y;
    s32 a = func_01ffcb0c(d.x, d.x);
    s32 c = func_01ffcb0c(b, b);
    return a + c;
}

Unk_0202f048 *Unk_0202f048::func_0202efc0(s32 k) {
    x = func_01ffcb0c(x, k);
    y = func_01ffcb0c(y, k);
    return this;
}

void Unk_0202f048::func_0202efe4(Unk_0202f048 *a, Unk_0202f048 *b) {
    func_0202f048(a->x - b->x, a->y - b->y);
}

void Unk_0202f048::func_0202f000(Unk_0202f048 *p) {
    x = x + p->x;
    y = y + p->y;
}

void Unk_0202f048::func_0202f014(Unk_0202f048 *a, Unk_0202f048 *b) {
    func_0202f048(a->x + b->x, a->y + b->y);
}

Unk_0202f048 *Unk_0202f048::func_0202f030(Unk_0202f048 *p) {
    func_0202f048(p->x, p->y);
    return this;
}

void Unk_0202f048::func_0202f048(s32 a, s32 b) {
    x = a;
    y = b;
}

class Unk_0202f7a8 {
public:
    s32 unk_00[9];
    Unk_0202f7a8(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b);
    ~Unk_0202f7a8();
    s32 func_0202f708(Unk_0202f2ac_V3 *o, Unk_0202f2ac_V3 *p);
    BOOL func_0202f660(Unk_0202f2ac_V3 *p);
};

class Unk_020d8ccc {
public:
    Unk_020d8ccc();
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

BOOL Unk_020d8ccc::func_0202f050(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q) {
    s32 s = func_0202f274(p);
    s32 d = s - func_0202f274(q);
    if (Unk_0202f2ac_Abs(d) >= 4) {
        Unk_0202f2ac_V3 v;
        s32 t, y, z;
        func_020e9960(&v, q, p);
        t = func_01ffc5a4(s, d);
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

BOOL Unk_020d8ccc::func_0202f11c(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q) {
    s32 a = func_0202f274(p);
    if (func_01ffcb0c(a, func_0202f274(q)) < 0) {
        return func_0202f050(out, p, q);
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

s32 Unk_020d8ccc::func_0202f274(Unk_0202f2ac_V3 *p) {
    s32 d = unk_34;
    s32 z = func_01ffcb0c(unk_28.z, p->z);
    s32 x = func_01ffcb0c(unk_28.x, p->x);
    s32 y = func_01ffcb0c(unk_28.y, p->y);
    return d + (z + (x + y));
}

s32 Unk_020d8ccc::func_0202f2ac() {
    s32 z = func_01ffcb0c(unk_28.z, unk_04.z);
    s32 x = func_01ffcb0c(unk_28.x, unk_04.x);
    s32 y = func_01ffcb0c(unk_28.y, unk_04.y);
    return -(z + (x + y));
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

BOOL Unk_020d8ccc::func_0202f364(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d) {
    unk_04 = *a;
    unk_10 = *b;
    unk_1c = *c;
    unk_28 = *d;
    unk_34 = func_0202f2ac();
    return TRUE;
}

extern "C" s32 func_0202f3a8(Unk_0202f2ac_V3 *n, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b) {
    Unk_0202f2ac_V3 u, v, t;
    func_020e9960(&u, a, p);
    func_020e9960(&v, b, p);
    func_020e9588(&t, n, &u, &v);
    return func_020e94f8(n);
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
        Unk_0202f7a8 t0(&unk_04, &unk_10);
        Unk_0202f7a8 t1(&unk_10, &unk_1c);
        Unk_0202f7a8 t2(&unk_1c, &unk_04);
        Unk_0202f7a8 *p = &t0;
        for (; p < &t0 + 3; p++) {
            d = p->func_0202f708(&w, a);
            if (d < c && p->func_0202f660(a)) {
                func_020e9960(&v, a, &w);
                if (func_020e94f8(&v) == 0) {
                    Unk_0202f2ac_V3 *q = &unk_28;
                    v = *q;
                    func_020e9888(&v, c);
                } else {
                    func_020e9888(&v, c - d);
                }
                func_01ffca8c(a, &v, a);
                result = TRUE;
                break;
            }
        }
    }
    return result;
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

BOOL Unk_020d8ccc::vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c) {
    BOOL r = FALSE;
    if (vfunc_04(a, b, c)) r = TRUE;
    if (vfunc_00(a, b, c)) r = TRUE;
    if (vfunc_08(a, b, c)) r = TRUE;
    return r;
}
