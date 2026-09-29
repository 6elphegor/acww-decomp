#include "types.h"

struct Unk_02088730_Ent {
    u32 a;
    u16 b;
};

struct Vec3 {
    s32 x, y, z;
};

class Unk_020b6a94x {
public:
    Unk_020b6a94x();
    ~Unk_020b6a94x();
    u8 pad[0x1c];
};

class Unk_020b6960x {
public:
    BOOL func_020b68a8(void *o, void *a, void *b, s32 c, u8 d);
};

class Unk_02088b20 : public Unk_020b6a94x {
public:
    Unk_02088b20();
    ~Unk_02088b20();
    void func_02088b20(Vec3 *a, s32 b, Vec3 *c, u8 d);
    /* 0x1c */ Unk_02088b20 *unk_1c;
    /* 0x20 */ u8 unk_20;
    /* 0x24 */ s32 unk_24;
};

class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual Vec3 *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    BOOL func_02088d38(u32 mask);
    BOOL func_02088fe8(Unk_020e0d08 *o);
    void func_02089078(s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020e0d08 *unk_38;
    /* 0x3c */ u8 unk_3c;
};

class Unk_020e0cf4 : public Unk_020e0d08 {
public:
    Unk_020e0cf4();
    ~Unk_020e0cf4();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088c98(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ u8 *unk_40;
};

class Unk_020e0d30 : public Unk_020e0cf4 {
public:
    Unk_020e0d30();
    ~Unk_020e0d30();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088bf8(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x44 */ Vec3 unk_44;
};

class Unk_020e0d1c : public Unk_020e0d08 {
public:
    Unk_020e0d1c();
    ~Unk_020e0d1c();
    virtual Vec3 *vfunc_00();
    virtual u32 vfunc_04();
    void func_02088c64(Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g);
    /* 0x40 */ Vec3 unk_40;
};

extern "C" {
s32 func_0203eeac(Vec3 *out, void *in);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s64 func_01ffd028(void *v, void *p);
s32 func_020e9688(Vec3 *v);
BOOL func_02087c8c(s32 mode);
s32 func_02087cd8(void *tbl, s32 *cnt, s32 *rect);
s32 func_02087e30(u32 *info);
s32 func_02087e50(u32 *info);
extern Unk_02088730_Ent data_021cde38[];
extern Unk_02088730_Ent data_021ce238[];
extern s32 data_021cde2c, data_021cde28, data_021cde34, data_021cde30;
void func_02115e78(void *a, void *b, u32 c);
void func_02115ef4(void *a, void *b, u32 c);
void func_021145cc(void *a, u32 b);
void func_02111d34(void *a, u32 b, u32 c);
void func_02111ccc(void *a, u32 b, u32 c);
Unk_020b6960x *func_020b50b4();
extern Unk_02088b20 *data_021ce63c;
extern Unk_020e0d08 *data_021ce638;
}

extern "C" void func_02088960() {
    data_021cde38[0].a = 0xc0;
    data_021cde38[0].b = 0;
    func_02115e78(data_021cde38, (void *)0x021cde40, 0x18);
    func_02115ef4(data_021cde38, (void *)0x021cde58, 0x3e0);
    func_02115ef4(data_021cde38, data_021ce238, 0x400);
    data_021cde2c = 0;
    data_021cde28 = 0;
    data_021cde34 = 0;
    data_021cde30 = 0;
}

extern "C" void func_020889cc() {
    func_021145cc(data_021cde38, 0x400);
    func_021145cc(data_021ce238, 0x400);
}

extern "C" void func_020889f4() {
    func_02111d34(data_021cde38, 0, 0x400);
    func_02111ccc(data_021ce238, 0, 0x400);
}

void Unk_02088b20::func_02088b20(Vec3 *a, s32 b, Vec3 *c, u8 d) {
    unk_1c = 0;
    Unk_02088b20 *h = data_021ce63c;
    if (h == 0) {
        data_021ce63c = this;
    } else {
        unk_1c = h;
        data_021ce63c = this;
    }
    unk_20 = 0;
    unk_24 = b;
    func_020b50b4()->func_020b68a8(this, a, c, 4, d);
}

Unk_02088b20::~Unk_02088b20() {
}

Unk_02088b20::Unk_02088b20() {
    unk_1c = 0;
    unk_20 = 0;
}

Unk_020e0d1c::~Unk_020e0d1c() {
}

Unk_020e0d1c::Unk_020e0d1c() {
}

Unk_020e0cf4::~Unk_020e0cf4() {
}

Unk_020e0cf4::Unk_020e0cf4() {
    unk_40 = 0;
}

Unk_020e0d30::~Unk_020e0d30() {
}

Unk_020e0d30::Unk_020e0d30() {
}

void Unk_020e0d30::func_02088bf8(void *p, Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    func_02088c98(p, a, b, c, d, e, f, g);
    unk_44 = *v;
}

void Unk_020e0d1c::func_02088c64(Vec3 *v, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    unk_40 = *v;
    func_02089078(a, b, c, d, e, f, g);
}

void Unk_020e0cf4::func_02088c98(void *p, s32 a, s32 b, u32 c, u32 d, u32 e, u8 f, s32 g) {
    unk_40 = (u8 *)p;
    func_02089078(a, b, c, d, e, f, g);
}

Vec3 *Unk_020e0cf4::vfunc_00() { return (Vec3 *)(unk_40 + 0x5c); }
u32 Unk_020e0cf4::vfunc_04() { return *(u32 *)(unk_40 + 4); }

BOOL Unk_020e0d08::func_02088d38(u32 mask) {
    if (unk_3c) {
        if (unk_28 & mask) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_020e0d08::func_02088fe8(Unk_020e0d08 *o) {
    BOOL r;
    if ((unk_1c & o->unk_20) && (unk_20 & o->unk_1c)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        u32 a = vfunc_04();
        if (a != 0) {
            if (a == o->vfunc_04()) {
                return FALSE;
            }
        }
        if (this != o) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02088a20(void *a, void *b, s32 rad, u8 *out) {
    BOOL result = FALSE;
    Unk_02088b20 *p = data_021ce63c;
    Vec3 v1, v2, v3;
    Vec3 pts[6];
    u32 i;
    func_0203eeac(&v1, a);
    func_0203eeac(&v2, b);
    func_020e9960(&v3, &v2, &v1);
    v3.x = func_01ffc5a4(v3.x, 0x6000);
    v3.y = func_01ffc5a4(v3.y, 0x6000);
    v3.z = func_01ffc5a4(v3.z, 0x6000);
    for (i = 0; i < 6; i++) {
        pts[i].x = v1.x + i * v3.x;
        pts[i].y = v1.y + i * v3.y;
        pts[i].z = v1.z + i * v3.z;
    }
    while (p) {
        p->unk_20 = 0;
        s32 len = func_01ffcb0c(rad + p->unk_24, rad + p->unk_24);
        for (i = 0; i < 6; i++) {
            if ((s64)len >= func_01ffd028(&pts[i], p)) {
                p->unk_20 = 1;
                result = TRUE;
                if (out) {
                    *out = ((u8 *)p)[0x10];
                }
                break;
            }
        }
        p = p->unk_1c;
    }
    return result;
}

extern "C" void func_02088d58() {
    Unk_020e0d08 *o;
    Vec3 *cv;
    Vec3 d;
    s32 len;
    s32 pen;
    s32 t;
    s32 sumM, w1, k, w0;
    for (o = data_021ce638; o; o = o->unk_38) {
        if (o->unk_1c & 1) {
            o->unk_30 = -0x1000;
        }
    }
    while (data_021ce638) {
        cv = data_021ce638->vfunc_00();
        for (o = data_021ce638->unk_38; o; o = o->unk_38) {
            if (!data_021ce638->func_02088fe8(o)) {
                continue;
            }
            func_020e9960(&d, o->vfunc_00(), cv);
            if (d.y < 0) {
                t = o->unk_08 + d.y;
            } else {
                t = data_021ce638->unk_08 - d.y;
            }
            if (t <= 0) {
                continue;
            }
            len = func_020e9688(&d);
            if (len == 0) {
                d.x = 0x1000;
                len = 0x1000;
            }
            pen = data_021ce638->unk_04 + o->unk_04 - len;
            if (pen <= 0) {
                continue;
            }
            o->unk_3c = 1;
            data_021ce638->unk_3c = o->unk_3c;
            if (data_021ce638->unk_1c & 1) {
                if (pen >= data_021ce638->unk_30) {
                    data_021ce638->unk_30 = pen;
                    data_021ce638->unk_28 = o->unk_1c;
                    data_021ce638->unk_2c = o->vfunc_04();
                    data_021ce638->unk_0e = o->unk_0c;
                    data_021ce638->unk_0f = o->unk_0d;
                }
            } else {
                data_021ce638->unk_28 = o->unk_1c;
                data_021ce638->unk_2c = o->vfunc_04();
                data_021ce638->unk_0e = o->unk_0c;
                data_021ce638->unk_0f = o->unk_0d;
            }
            if (o->unk_1c & 1) {
                if (pen >= o->unk_30) {
                    o->unk_28 = data_021ce638->unk_1c;
                    o->unk_2c = data_021ce638->vfunc_04();
                    o->unk_0e = data_021ce638->unk_0c;
                    o->unk_0f = data_021ce638->unk_0d;
                }
            } else {
                o->unk_28 = data_021ce638->unk_1c;
                o->unk_2c = data_021ce638->vfunc_04();
                o->unk_0e = data_021ce638->unk_0c;
                o->unk_0f = data_021ce638->unk_0d;
            }
            data_021ce638->vfunc_08(o->unk_0c, o->unk_0d, o->unk_1c);
            o->vfunc_08(data_021ce638->unk_0c, data_021ce638->unk_0d, data_021ce638->unk_1c);
            if (data_021ce638->unk_1c & 1) {
                continue;
            }
            if (o->unk_1c & 1) {
                continue;
            }
            if (data_021ce638->unk_1c & 2) {
                if (o->unk_1c & 2) {
                    continue;
                }
            }
            if (data_021ce638->unk_1c & 2) {
                o->unk_14 = 0;
                pen = func_01ffc5a4(pen, len);
                o->unk_10 += func_01ffcb0c(d.x, pen);
                o->unk_18 += func_01ffcb0c(d.z, pen);
            } else if (o->unk_1c & 2) {
                data_021ce638->unk_14 = 0;
                pen = func_01ffc5a4(pen, len);
                data_021ce638->unk_10 -= func_01ffcb0c(d.x, pen);
                data_021ce638->unk_18 -= func_01ffcb0c(d.z, pen);
            } else {
                w0 = data_021ce638->unk_34;
                w1 = o->unk_34;
                k = func_01ffc5a4(pen, len) >> 1;
                sumM = w0 + w1;
                s32 f1 = func_01ffcb0c(k, func_01ffc5a4(w1, sumM));
                pen = func_01ffcb0c(k, func_01ffc5a4(w0, sumM));
                o->unk_14 = 0;
                data_021ce638->unk_14 = 0;
                data_021ce638->unk_10 -= func_01ffcb0c(d.x, f1);
                data_021ce638->unk_18 -= func_01ffcb0c(d.z, f1);
                o->unk_10 += func_01ffcb0c(d.x, pen);
                o->unk_18 += func_01ffcb0c(d.z, pen);
            }
        }
        data_021ce638 = data_021ce638->unk_38;
    }
}

extern "C" s32 func_02088730(s32 mode, u32 *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect) {
    Unk_02088730_Ent *ent;
    s32 *cntp;
    s32 *othp;
    s32 idx, c;
    u32 bit13, base;
    s32 x0, y0, w, h;
    u32 w0, m, bit12, sz, attr, mode2;
    if (func_02087c8c(mode)) {
        cntp = &data_021cde2c;
        c = *cntp;
        if (c >= 0x80) {
            return -1;
        }
        ent = data_021cde38 + c;
        othp = &data_021cde28;
    } else {
        cntp = &data_021cde34;
        c = *cntp;
        if (c >= 0x80) {
            return -1;
        }
        ent = data_021ce238 + c;
        othp = &data_021cde30;
    }
    x0 = (info[0] << 7) >> 23;
    if (x0 >= 0x100) {
        x0 -= 0x200;
    }
    x0 += x;
    y0 = *(s8 *)info + y;
    w = func_02087e50(info);
    h = func_02087e30(info);
    if (rect && ((info[0] << 22) >> 30) != 1) {
        x0 -= w >> 1;
        y0 -= h >> 1;
        w <<= 1;
        h <<= 1;
    }
    if (x0 + w < 0 || x0 > 0x100) {
        return -2;
    }
    if (y0 + h < 0 || y0 > 0xc0) {
        return -3;
    }
    if (pal == -1) {
        pal = (info[1] << 16) >> 28;
    }
    if (pri == -1) {
        pri = (info[1] << 20) >> 30;
    }
    if (rect) {
        idx = func_02087cd8(ent - *cntp, othp, rect);
        s32 neg1 = -1;
        if (idx == neg1) {
            return -4;
        }
        if (((info[0] << 22) >> 30) == 1) {
            mode2 = 0x100;
        } else {
            mode2 = 0x300;
        }
    } else {
        idx = 0;
        mode2 = info[0] & 0x30000000;
    }
    base = (u32)(info[1] << 22) >> 22;
    bit13 = (info[0] << 18) >> 31;
    w0 = info[0];
    m = w0 & 0xc000c000;
    bit12 = (w0 << 19) >> 31;
    sz = (w0 << 20) >> 30;
    if (mode2 == 0x100 || mode2 == 0x300) {
        if (sz == 3) {
            attr = mode2 | (((x0 & 0x1ff) << 16) | (m | ((bit12 << 12) | ((sz << 10) | (((u32)idx << 25) | (y0 & 0xff))))));
        } else {
            attr = mode2 | (((x0 & 0x1ff) << 16) | (m | ((bit12 << 12) | ((sz << 10) | (((u32)idx << 25) | ((bit13 << 13) | (y0 & 0xff)))))));
        }
    } else {
        if (sz == 3) {
            attr = mode2 | (((x0 & 0x1ff) << 16) | (m | ((bit12 << 12) | ((sz << 10) | (y0 & 0xff)))));
        } else {
            attr = mode2 | (((x0 & 0x1ff) << 16) | (m | ((bit12 << 12) | ((sz << 10) | ((bit13 << 13) | (y0 & 0xff))))));
        }
    }
    ent->a = attr;
    base |= pri << 10;
    ent->b = (pal << 12) | base;
    *cntp = *cntp + 1;
    return 1;
}
