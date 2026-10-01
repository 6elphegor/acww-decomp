#include "types.h"

struct Unk_0202f660_V3 { s32 x, y, z; };
struct Unk_0202f7b8_V3 : Unk_0202f660_V3 {
    Unk_0202f7b8_V3() {}
    Unk_0202f7b8_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

extern "C" s32 func_01ffca14(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
extern "C" s32 func_01ffcb0c(s32 a, s32 b);
extern "C" void func_020e9960(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
extern "C" s32 func_020e96a4(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);
extern "C" s32 func_020e94f8(Unk_0202f660_V3 *a);

class Unk_020d8ccc {
public:
    u32 unk_04[9];
    u32 unk_28, unk_2c, unk_30, unk_34;
    Unk_020d8ccc();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual ~Unk_020d8ccc();
    s32 func_0202f364(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d);
    Unk_020d8ccc(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d);
};

Unk_020d8ccc::Unk_020d8ccc() : unk_28(0), unk_2c(0), unk_30(0), unk_34(0) {}
Unk_020d8ccc::Unk_020d8ccc(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d) { func_0202f364(a, b, c, d); }
Unk_020d8ccc::~Unk_020d8ccc() {}

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

BOOL Unk_0202f660::func_0202f660(Unk_0202f660_V3 *pt) {
    s32 a = func_01ffca14(&unk_18, &unk_00);
    s32 b = func_01ffca14(&unk_18, pt);
    s32 c = func_01ffca14(&unk_18, &unk_0c);
    s32 d = func_01ffca14(&unk_18, pt);
    if (func_01ffcb0c(b - a, d - c) > 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_0202f660::func_0202f6b4(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt) {
    s32 a = func_01ffca14(&unk_18, pt);
    s32 t = -(func_01ffca14(&unk_18, &unk_00) - a);
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

s32 Unk_0202f660::func_0202f708(Unk_0202f660_V3 *out, Unk_0202f660_V3 *pt) {
    Unk_0202f660_V3 tmp;
    func_0202f6b4(&tmp, pt);
    *out = tmp;
    return func_020e96a4(&tmp, pt);
}

void Unk_0202f660::func_0202f734(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b) {
    unk_00 = *a;
    unk_0c = *b;
    func_0202f778(&unk_18);
}

s32 Unk_0202f660::func_0202f758(Unk_0202f660_V3 *pt) {
    Unk_0202f660_V3 tmp;
    func_0202f6b4(&tmp, pt);
    return func_020e96a4(&tmp, pt);
}

s32 Unk_0202f660::func_0202f778(Unk_0202f660_V3 *out) {
    Unk_0202f660_V3 tmp;
    func_020e9960(&tmp, &unk_0c, &unk_00);
    *out = tmp;
    return func_020e94f8(out);
}

Unk_0202f660::Unk_0202f660(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b) { func_0202f734(a, b); }
Unk_0202f660::~Unk_0202f660() {}

extern "C" s32 func_01ffc5a4(s32 a, s32 b);
extern "C" s32 func_01ffc538(s32 a);
extern "C" s32 func_020e9650(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b);

class Unk_0202fdf0 {
public:
    Unk_0202f660_V3 unk_00;
    s32 unk_0c;

    BOOL func_0202fdf0(Unk_0202f660_V3 *pt);
    void func_0202fe54(Unk_0202f660_V3 *pos, s32 radius);
    ~Unk_0202fdf0();
    Unk_0202fdf0(Unk_0202f660_V3 *pos, s32 radius);
    Unk_0202fdf0();
};

class Unk_0202f7b8 : public Unk_0202fdf0 {
public:
    s32 unk_10;

    BOOL func_0202f7b8(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202f968(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fa70(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fc20(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fccc(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL func_0202fcfc(Unk_0202f660_V3 *pos, s32 r);
    void func_0202fd8c(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    ~Unk_0202f7b8();
    Unk_0202f7b8(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    Unk_0202f7b8();
};

BOOL Unk_0202f7b8::func_0202f7b8(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 ymin, ymax, z;
    if (!func_0202fdf0(a)) {
        struct { Unk_0202f7b8_V3 A, B, C, D; u32 pad[6]; } l;
        l.A = Unk_0202f7b8_V3(a->x, a->y, a->z);
        l.B = Unk_0202f7b8_V3(out->x, out->y, out->z);
        l.C = Unk_0202f7b8_V3(unk_00.x, unk_00.y, unk_00.z);
        s32 r = unk_0c;
        func_020e9960(&l.D, &l.B, &l.A);
        s32 t = func_01ffcb0c(l.D.z, l.D.z);
        s32 q = func_01ffcb0c(l.D.x, l.D.x);
        q += t;
        s32 aq = q < 0 ? -q : q;
        if (aq < 4) {
            return FALSE;
        }
        s32 b = func_01ffc5a4(func_01ffcb0c(l.D.x, l.A.x - l.C.x) + func_01ffcb0c(l.D.z, l.A.z - l.C.z), q) << 1;
        s32 zz = func_01ffcb0c(l.A.z - l.C.z, l.A.z - l.C.z);
        s32 xx = func_01ffcb0c(l.A.x - l.C.x, l.A.x - l.C.x);
        s32 c = func_01ffc5a4(xx + zz - func_01ffcb0c(r, r), q);
        s32 disc = func_01ffcb0c(b, b) - (c << 2);
        if (disc < 0) {
            return FALSE;
        }
        s32 s = func_01ffc538(disc);
        if (s < 0) {
            s = -s;
        }
        s32 t1 = -(b + s) >> 1;
        s32 t2 = (s - b) >> 1;
        ymin = unk_00.y;
        ymax = ymin + unk_10;
        s32 y, x;
        if ((t1 < 0 ? -t1 : t1) < 4 || (t1 >= 0 && t1 <= 0x1000)) {
            z = l.A.z + func_01ffcb0c(t1, l.D.z);
            y = l.A.y + func_01ffcb0c(t1, l.D.y);
            x = l.A.x + func_01ffcb0c(t1, l.D.x);
            if (y >= ymin && y <= ymax) {
                out->x = x;
                out->y = y;
                out->z = z;
                return TRUE;
            }
        }
        if ((t2 < 0 ? -t2 : t2) < 4 || (t2 >= 0 && t2 <= 0x1000)) {
            z = l.A.z + func_01ffcb0c(t2, l.D.z);
            y = l.A.y + func_01ffcb0c(t2, l.D.y);
            x = l.A.x + func_01ffcb0c(t2, l.D.x);
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

BOOL Unk_0202f7b8::func_0202fa70(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 ymax, y1, z1, z2;
    if (!func_0202fdf0(a)) {
        struct { Unk_0202f7b8_V3 A, B, C, D; u32 pad[6]; } l;
        l.A = Unk_0202f7b8_V3(a->x, a->y, a->z);
        l.B = Unk_0202f7b8_V3(out->x, out->y, out->z);
        l.C = Unk_0202f7b8_V3(unk_00.x, unk_00.y, unk_00.z);
        s32 r = unk_0c;
        s32 h = unk_10;
        func_020e9960(&l.D, &l.B, &l.A);
        s32 t = func_01ffcb0c(l.D.z, l.D.z);
        s32 q = func_01ffcb0c(l.D.x, l.D.x);
        q += t;
        s32 aq = q < 0 ? -q : q;
        if (aq < 4) {
            return FALSE;
        }
        s32 b = func_01ffc5a4(func_01ffcb0c(l.D.x, l.A.x - l.C.x) + func_01ffcb0c(l.D.z, l.A.z - l.C.z), q) << 1;
        s32 zz = func_01ffcb0c(l.A.z - l.C.z, l.A.z - l.C.z);
        s32 xx = func_01ffcb0c(l.A.x - l.C.x, l.A.x - l.C.x);
        s32 c = func_01ffc5a4(xx + zz - func_01ffcb0c(r, r), q);
        s32 disc = func_01ffcb0c(b, b) - (c << 2);
        if (disc < 0) {
            return FALSE;
        }
        s32 s = func_01ffc538(disc);
        if (s < 0) {
            s = -s;
        }
        s32 t1 = -(b + s) >> 1;
        s32 t2 = (s - b) >> 1;
        ymax = l.C.y + h;
        if ((t1 < 0 ? -t1 : t1) < 4 || (t1 >= 0 && t1 <= 0x1000)) {
            z1 = l.A.z + func_01ffcb0c(t1, l.D.z);
            y1 = l.A.y + func_01ffcb0c(t1, l.D.y);
            s32 x1 = l.A.x + func_01ffcb0c(t1, l.D.x);
            if (y1 <= ymax) {
                out->x = x1;
                out->y = y1;
                out->z = z1;
                return TRUE;
            }
        }
        if ((t2 < 0 ? -t2 : t2) < 4 || (t2 >= 0 && t2 <= 0x1000)) {
            z2 = a->z + func_01ffcb0c(t2, l.D.z);
            s32 y2 = a->y + func_01ffcb0c(t2, l.D.y);
            s32 x2 = a->x + func_01ffcb0c(t2, l.D.x);
            if (y2 <= ymax) {
                out->x = x2;
                out->y = y2;
                out->z = z2;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0202f7b8::func_0202f968(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 t1, t2;
    s32 y, z, y2, z2;
    struct { Unk_0202f7b8_V3 A, B, D, P1, P2; } l;
    l.A = Unk_0202f7b8_V3(a->x, a->y, a->z);
    l.B = Unk_0202f7b8_V3(out->x, out->y, out->z);
    func_020e9960(&l.D, &l.B, &l.A);
    if (func_020e94f8(&l.D)) {
        s32 dy = l.D.y;
        if ((dy < 0 ? -dy : dy) >= 4) {
            s32 top = unk_00.y + unk_10;
            s32 ay = l.A.y;
            if (ay > top && l.B.y < top) {
                t1 = func_01ffc5a4(top - ay, l.D.y);
                z = l.A.z + func_01ffcb0c(l.D.z, t1);
                y = l.A.y + func_01ffcb0c(l.D.y, t1);
                l.P1.x = l.A.x + func_01ffcb0c(l.D.x, t1);
                l.P1.y = y;
                l.P1.z = z;
                if (func_0202fdf0(&l.P1)) {
                    *out = l.P1;
                    return TRUE;
                }
            } else if (ay < 0 && l.B.y > 0) {
                t2 = func_01ffc5a4(-ay, l.D.y);
                z2 = l.A.z + func_01ffcb0c(l.D.z, t2);
                y2 = l.A.y + func_01ffcb0c(l.D.y, t2);
                l.P2.x = l.A.x + func_01ffcb0c(l.D.x, t2);
                l.P2.y = y2;
                l.P2.z = z2;
                if (func_0202fdf0(&l.P2)) {
                    *out = l.P2;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_0202f7b8::func_0202fc20(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 top = unk_00.y + unk_10;
    s32 t;
    s32 y, z;
    struct { Unk_0202f7b8_V3 A, B, D, P; } l;
    l.A = Unk_0202f7b8_V3(a->x, a->y, a->z);
    if (l.A.y > top) {
        l.B = Unk_0202f7b8_V3(out->x, out->y, out->z);
        if (l.B.y < top) {
            func_020e9960(&l.D, &l.B, &l.A);
            if (func_020e94f8(&l.D)) {
                s32 dy = l.D.y;
                if ((dy < 0 ? -dy : dy) >= 4) {
                    t = func_01ffc5a4(top - l.A.y, l.D.y);
                    z = l.A.z + func_01ffcb0c(l.D.z, t);
                    y = l.A.y + func_01ffcb0c(l.D.y, t);
                    l.P.x = l.A.x + func_01ffcb0c(l.D.x, t);
                    l.P.y = y;
                    l.P.z = z;
                    if (func_0202fdf0(&l.P)) {
                        *out = l.P;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_0202f7b8::func_0202fccc(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a) {
    s32 top = unk_00.y + unk_10;
    if (a->y >= top && out->y < top && func_0202fdf0(out)) {
        out->y = top;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0202f7b8::func_0202fcfc(Unk_0202f660_V3 *pos, s32 r) {
    s32 d = func_020e9650(&unk_00, pos);
    s32 lim = r + unk_0c;
    if (d < lim) {
        if (pos->y < unk_00.y + unk_10) {
            Unk_0202f7b8_V3 v(pos->x - unk_00.x, 0, pos->z - unk_00.z);
            if (func_020e94f8(&v)) {
                s32 s = r + unk_0c - d;
                pos->x = pos->x + func_01ffcb0c(v.x, s);
                pos->z = pos->z + func_01ffcb0c(v.z, s);
                return TRUE;
            }
        }
    } else if (d <= lim + 0x200 && pos->y < unk_00.y + unk_10) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0202f7b8::func_0202fd8c(Unk_0202f660_V3 *pos, s32 radius, s32 height) {
    func_0202fe54(pos, radius);
    unk_10 = height;
}

Unk_0202f7b8::~Unk_0202f7b8() {}

Unk_0202f7b8::Unk_0202f7b8(Unk_0202f660_V3 *pos, s32 radius, s32 height) : Unk_0202fdf0(pos, radius) {
    unk_10 = height;
}

Unk_0202f7b8::Unk_0202f7b8() {
    unk_10 = 0;
}

BOOL Unk_0202fdf0::func_0202fdf0(Unk_0202f660_V3 *pt) {
    s32 dx = pt->x - unk_00.x;
    s32 dz = pt->z - unk_00.z;
    if ((dx < 0 ? -dx : dx) > unk_0c) {
        return FALSE;
    }
    if ((dz < 0 ? -dz : dz) > unk_0c) {
        return FALSE;
    }
    s32 a = func_01ffcb0c(dz, dz);
    s32 b = func_01ffcb0c(dx, dx);
    if (b + a > func_01ffcb0c(unk_0c, unk_0c)) {
        return FALSE;
    }
    return TRUE;
}

void Unk_0202fdf0::func_0202fe54(Unk_0202f660_V3 *pos, s32 radius) {
    unk_00 = *pos;
    unk_0c = radius;
}

Unk_0202fdf0::~Unk_0202fdf0() {}

Unk_0202fdf0::Unk_0202fdf0(Unk_0202f660_V3 *pos, s32 radius) {
    func_0202fe54(pos, radius);
}

Unk_0202fdf0::Unk_0202fdf0() {
    unk_00.x = 0;
    unk_00.y = 0;
    unk_00.z = 0;
    unk_0c = 0;
}

extern "C" s32 func_02030d58(s32 a);
extern "C" s32 func_01ffcb2c(s32 x, s32 y);

struct Unk_0202fe84_Range { s32 lo, hi; };
struct Unk_0202fe84_Pad { s32 v[6]; Unk_0202fe84_Pad() {} ~Unk_0202fe84_Pad() {} };

extern "C" BOOL func_0202fe84(s32 *a, s32 *b, s32 *c, s32 *d) {
    if (func_02030d58(0)) {
        struct { Unk_0202fe84_Range xr, yr; } l;
        Unk_0202fe84_Pad pad;
        s32 y, x;
        l.xr.lo = 0x10;
        l.xr.hi = 0;
        l.yr = l.xr;
        for (y = 0; y < 0x20; y++) {
            for (x = 0; x < 0x20; x++) {
                if (func_01ffcb2c(x, y) != 0x15) {
                    if (x < l.xr.lo) {
                        l.xr.lo = x;
                    } else if (x > l.xr.hi) {
                        l.xr.hi = x;
                    }
                    if (y < l.yr.lo) {
                        l.yr.lo = y;
                    } else if (y > l.yr.hi) {
                        l.yr.hi = y;
                    }
                }
            }
        }
        s32 e = (l.yr.hi << 13) + 0x1000;
        *a = l.xr.lo << 13;
        *b = (l.xr.hi << 13) + 0x2000;
        *c = l.yr.lo << 13;
        if (d) {
            *d = e + 0x1000;
        }
        return TRUE;
    }
    *a = *b = *c = 0;
    if (d) {
        *d = 0;
    }
    return FALSE;
}
