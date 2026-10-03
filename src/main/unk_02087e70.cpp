#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

struct Unk_02087e70_Ent {
    u32 w0;
    u32 w1lo : 10;
    u32 w1pri : 2;
    u32 w1pal : 4;
    u32 w1id : 16;
};

struct Unk_02087e70_Oam {
    u32 a01;
    u16 a2;
    u16 pad;
};

// The original constructor calls the base's C1 and its destructor the base's D2; mwcc would call C2/D2
// for a base subobject, so the base is a plain struct and the two calls are written out.
struct Unk_020b6a94 {
    u8 pad[0x1c];
};

extern "C" void _ZN12Unk_020b6a94C2Ev(Unk_020b6a94 *p);
extern "C" void _ZN12Unk_020b6a94D2Ev(Unk_020b6a94 *p);

class Unk_020b6960 {
public:
    BOOL func_020b68a8(Unk_020b6a94 *o, Vec3 *a, Vec3 *b, s32 c, u8 d);
};

class Unk_02088b20 : public Unk_020b6a94 {
public:
    Unk_02088b20();
    ~Unk_02088b20();
    void func_02088b20(Vec3 *a, s32 b, Vec3 *c, u8 d);
    /* 0x1c */ Unk_02088b20 *unk_1c;
    /* 0x20 */ u8 unk_20;
    /* 0x24 */ s32 unk_24;
};

extern "C" {
extern s32 data_020cf558[];
extern s32 data_020cf588[];
extern s16 data_02135f44[];
extern Unk_02088b20 *data_021ce63c;

BOOL func_02087c8c(u32 mode);
s32 func_02087cd8(void *base, s32 *cnt, s32 *m);
s32 func_01ffc5a4(s32 v, s32 s);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02087e30(u32 *p);
s32 func_02087e50(u32 *p);
s32 func_0203eeac(Vec3 *out, void *in);
void func_020e9960(Vec3 *out, Vec3 *a, Vec3 *b);
s64 func_01ffd028(void *v, void *p);
void MIi_CpuCopy32(void *a, void *b, u32 c);
void MIi_CpuCopyFast(void *a, void *b, u32 c);
void DC_FlushRange(void *a, u32 b);
void GX_LoadOAM(void *a, u32 b, u32 c);
void GXS_LoadOAM(void *a, u32 b, u32 c);
Unk_020b6960 *func_020b50b4();
}

extern s32 data_021cde28;
extern s32 data_021cde2c;
extern s32 data_021cde30;
extern s32 data_021cde34;
extern Unk_02087e70_Oam data_021cde38[0x80];
extern Unk_02087e70_Oam data_021ce238[0x80];

enum Unk_02087e70_Mode_ { Unk_02087e70_Mode_0 = 0, Unk_02087e70_Mode_1 = 1, Unk_02087e70_Mode_2 = 2, Unk_02087e70_Mode_3 = 3 };

static inline void Unk_02087e70_SetAttr(Unk_02087e70_Oam *oam, s32 x, s32 y, s32 priority, Unk_02087e70_Mode_ mode, u32 mosaic, s32 effect, u32 shape, u32 color, u32 charName, s32 cParam, s32 rsParam)
{
    if (effect == 0x100 || effect == 0x300) {
        if (mode == 3) {
            oam->a01 = effect | (((x & 0x1ff) << 16) | (shape | ((mosaic << 12) | ((mode << 10) | ((rsParam << 25) | (y & 0xff))))));
        } else {
            oam->a01 = effect | (((x & 0x1ff) << 16) | (shape | ((mosaic << 12) | ((mode << 10) | ((y & 0xff) | ((rsParam << 25) | (color << 13)))))));
        }
    } else {
        if (mode == 3) {
            oam->a01 = effect | (((x & 0x1ff) << 16) | (shape | ((mosaic << 12) | ((y & 0xff) | (mode << 10)))));
        } else {
            oam->a01 = effect | (((x & 0x1ff) << 16) | (shape | ((mosaic << 12) | ((mode << 10) | ((color << 13) | (y & 0xff))))));
        }
    }
    oam->a2 = (cParam << 12) | (charName | (priority << 10));
}

Unk_02088b20::Unk_02088b20() {
    _ZN12Unk_020b6a94C2Ev(this);
    unk_1c = 0;
    unk_20 = 0;
}

Unk_02088b20::~Unk_02088b20() {
    _ZN12Unk_020b6a94D2Ev(this);
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

extern "C" void func_020889f4() {
    GX_LoadOAM(data_021cde38, 0, 0x400);
    GXS_LoadOAM(data_021ce238, 0, 0x400);
}

extern "C" void func_020889cc() {
    DC_FlushRange(data_021cde38, 0x400);
    DC_FlushRange(data_021ce238, 0x400);
}

extern "C" void func_02088960() {
    data_021cde38[0].a01 = 0xc0;
    data_021cde38[0].a2 = 0;
    MIi_CpuCopy32(data_021cde38, &data_021cde38[1], 0x18);
    MIi_CpuCopyFast(data_021cde38, &data_021cde38[4], 0x3e0);
    MIi_CpuCopyFast(data_021cde38, data_021ce238, 0x400);
    data_021cde2c = 0;
    data_021cde28 = 0;
    data_021cde34 = 0;
    data_021cde30 = 0;
}

extern "C" s32 func_02088730(s32 mode, u32 *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect) {
    Unk_02087e70_Oam *ent;
    s32 *cntp;
    s32 *othp;
    s32 idx, c;
    u32 bit13, base;
    s32 x0, y0, w, h;
    s32 mode2;
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
        if (idx == -1) {
            return -4;
        }
        if (((info[0] << 22) >> 30) == 1) {
            mode2 = 0x100;
        } else {
            mode2 = 0x300;
        }
    } else {
        idx = 0;
        mode2 = *(volatile u32 *)&info[0] & 0x30000000;
    }
    base = (u32)(info[1] << 22) >> 22;
    bit13 = (info[0] << 18) >> 31;
    Unk_02087e70_SetAttr(ent, x0, y0, pri, (Unk_02087e70_Mode_)((info[0] << 20) >> 30), (info[0] << 19) >> 31, mode2, info[0] & 0xc000c000, bit13, base, pal, idx);
    *cntp = *cntp + 1;
    return 1;
}

extern "C" Unk_02087e70_Oam *func_02088378(u32 mode, Unk_02087e70_Ent *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 scale, s32 rot, s32 sz)
{
    Unk_02087e70_Oam *oam;
    s32 *cnt;
    s32 *aux;
    s32 x, y, w, h;
    s32 idx;
    s32 flags;
    s32 n;
    u32 b13;
    u32 w1lo;
    if (func_02087c8c(mode)) {
        cnt = &data_021cde2c;
        n = *cnt;
        if (n >= 0x80) {
            return 0;
        }
        oam = &data_021cde38[n];
        aux = &data_021cde28;
    } else {
        cnt = &data_021cde34;
        n = *cnt;
        if (n >= 0x80) {
            return 0;
        }
        oam = &data_021ce238[n];
        aux = &data_021cde30;
    }
    x = (e->w0 << 7) >> 23;
    if (x >= 0x100) {
        x -= 0x200;
    }
    y = *(s8 *)e;
    w = func_02087e50(&e->w0);
    h = func_02087e30(&e->w0);
    if (rot != 0) {
        if (sz != 0) {
            s32 s, ty, c, hw, hh, t;
            s32 i2 = ((s32)(u16)(s16)rot >> 4) * 2;
            s32 nx, ny;
            hw = w >> 1;
            hh = h >> 1;
            ty = y + hh;
            s = data_02135f44[i2];
            x += hw;
            c = data_02135f44[i2 + 1];
            nx = func_01ffcb0c(c, x);
            nx -= func_01ffcb0c(s, ty);
            t = func_01ffcb0c(c, ty);
            ny = t + func_01ffcb0c(s, x);
            x = ((nx + (nx > 0 ? 0x800 : -0x800)) >> 12) - hw;
            y = ((ny + (ny > 0 ? 0x800 : -0x800)) >> 12) - hh;
        } else {
            s32 hw = w >> 1;
            s32 hh = h >> 1;
            s32 i2 = ((s32)(u16)(s16)rot >> 4) * 2;
            s32 s = data_02135f44[i2];
            s32 c = data_02135f44[i2 + 1];
            s32 ty = y + hh;
            s32 tx = x + hw;
            s32 a = tx * c;
            s32 b = ty * s;
            x = ((a - b) >> 12) - hw;
            y = ((ty * c + tx * s) >> 12) - hh;
        }
    }
    if ((scale != 0x1000 || rot != 0) && ((e->w0 << 22) >> 30) != 1) {
        x -= w >> 1;
        y -= h >> 1;
        w <<= 1;
        h <<= 1;
    }
    x += dx;
    y += dy;
    if (rot != 0) {
        if (w < h) {
            w = h;
        }
        if (x + w < 0 || x > 0x100) {
            return 0;
        }
        if (y + w < 0 || y > 0xc0) {
            return 0;
        }
    } else {
        if (x + w < 0 || x > 0x100) {
            return 0;
        }
        if (y + h < 0 || y > 0xc0) {
            return 0;
        }
    }
    if (pal == -1) {
        pal = e->w1pal;
    }
    if (pri == -1) {
        pri = e->w1pri;
    }
    if (scale != 0x1000 || rot != 0) {
        s32 m[4];
        s32 i = (rot >> 4) * 2;
        s32 cc = data_02135f44[i + 1];
        s32 c = (cc * scale + 0x800) >> 12;
        m[0] = c;
        s32 ss = data_02135f44[i];
        s32 s = (ss * scale + 0x800) >> 12;
        m[1] = s;
        m[2] = -s;
        m[3] = c;
        if (e->w0 & 0x10000000) {
            m[0] = -c;
            m[1] = -s;
        }
        if (e->w0 & 0x20000000) {
            m[2] = -m[2];
            m[3] = -m[3];
        }
        idx = func_02087cd8(oam - *cnt, aux, m);
        if (idx == -1) {
            return 0;
        }
        if (((e->w0 << 22) >> 30) == 1) {
            flags = 0x100;
        } else {
            flags = 0x300;
        }
    } else {
        idx = 0;
        flags = ((volatile Unk_02087e70_Ent *)e)->w0 & 0x30000000;
    }
    w1lo = e->w1lo;
    b13 = (e->w0 << 18) >> 31;
    Unk_02087e70_SetAttr(oam, x, y, pri, (Unk_02087e70_Mode_)((e->w0 << 20) >> 30), (e->w0 << 19) >> 31, flags, e->w0 & 0xc000c000, b13, w1lo, pal, idx);
    *cnt = *cnt + 1;
    return oam;
}

extern "C" void func_02087e70(u32 mode, Unk_02087e70_Ent *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 sx, s32 sy, s32 rot, s32 sz, s32 fx, s32 fy)
{
    Unk_02087e70_Oam *oam;
    s32 priv;
    s32 palv;
    s32 w;
    BOOL use;
    s32 *cnt;
    s32 y;
    s32 *aux;
    s32 h;
    s32 hw;
    s32 x;
    s32 hh;
    s32 d;
    Unk_02087e70_Mode_ size;
    s32 idx;
    s32 flags;
    u32 b13;
    u32 w1lo;
    BOOL k3;
    BOOL k0;
    BOOL k1;
    if (func_02087c8c(mode)) {
        oam = data_021cde38;
        cnt = &data_021cde2c;
        oam += *cnt;
        aux = &data_021cde28;
    } else {
        oam = data_021ce238;
        cnt = &data_021cde34;
        oam += *cnt;
        aux = &data_021cde30;
    }
    if (sx != 0x1000 || sy != 0x1000 || rot != 0) {
        use = TRUE;
    } else {
        use = FALSE;
    }
top:
    {
        if (*cnt >= 0x80) {
            goto end;
        }
        k3 = FALSE;
        if (use && ((e->w0 << 22) >> 30) == 3) {
            k3 = TRUE;
        }
        k0 = FALSE;
        if (use && ((e->w0 << 22) >> 30) == 0) {
            k0 = TRUE;
        }
        k1 = FALSE;
        if (use && ((e->w0 << 22) >> 30) == 1) {
            k1 = TRUE;
        }
        x = (e->w0 << 7) >> 23;
        if (x >= 0x100) {
            x -= 0x200;
        }
        y = *(s8 *)e;
        w = func_02087e50(&e->w0);
        h = func_02087e30(&e->w0);
        if (use) {
            if (k3) {
                w <<= 1;
                h <<= 1;
            }
            hw = w >> 1;
            hh = h >> 1;
            x = (x + hw) << 12;
            y = (y + hh) << 12;
            if (sx != 0x1000) {
                x = func_01ffc5a4(x, sx);
            }
            if (sy != 0x1000) {
                y = func_01ffc5a4(y, sy);
            }
            if (rot != 0) {
                s16 *sinp = &data_02135f44[((s32)(u16)(s16)rot >> 4) * 2];
                s16 *cosp = &data_02135f44[((s32)(u16)(s16)rot >> 4) * 2 + 1];
                s16 a = *sinp;
                s16 b = *cosp;
                s32 f;
                d = func_01ffcb0c(b, x) - func_01ffcb0c(a, y);
                f = func_01ffcb0c(b, y) + func_01ffcb0c(a, x);
                x = ((d + (d > 0 ? 0x800 : -0x800)) >> 12) - hw;
                y = ((f + (f > 0 ? 0x800 : -0x800)) >> 12) - hh;
            } else {
                x = ((x + 0x800) >> 12) - hw;
                y = ((y + 0x800) >> 12) - hh;
            }
            if (k0) {
                x -= hw;
                y -= hh;
                w <<= 1;
                h <<= 1;
            }
        }
        x += dx;
        y += dy;
        if (rot != 0) {
            if (w < h) {
                w = h;
            }
            if (x + w < 0 || x > 0x100) {
                if (e->w1id == 0xffff) {
                    goto end;
                }
                e++;
                goto top;
            }
            if (y + w < 0 || y > 0xc0) {
                if (e->w1id == 0xffff) {
                    goto end;
                }
                e++;
                goto top;
            }
        } else {
            if (x + w < 0 || x > 0x100) {
                if (e->w1id == 0xffff) {
                    goto end;
                }
                e++;
                goto top;
            }
            if (y + h < 0 || y > 0xc0) {
                if (e->w1id == 0xffff) {
                    goto end;
                }
                e++;
                goto top;
            }
        }
        if (pal == -1) {
            palv = e->w1pal;
        } else {
            palv = pal;
        }
        if (pri == -1) {
            priv = e->w1pri;
        } else {
            priv = pri;
        }
        if (sz > 0) {
            size = (Unk_02087e70_Mode_)sz;
        } else {
            size = (Unk_02087e70_Mode_)((e->w0 << 20) >> 30);
        }
        if (use) {
            s32 P, Q;
            s32 m[4];
            s32 cc, ss;
            s32 ri = (rot >> 4) * 2;
            cc = data_02135f44[ri + 1];
            P = (cc * sx + 0x800) >> 12;
            m[0] = P;
            ss = data_02135f44[ri];
            Q = (ss * sx + 0x800) >> 12;
            m[1] = Q;
            m[2] = -((ss * sy + 0x800) >> 12);
            m[3] = (cc * sy + 0x800) >> 12;
            if (e->w0 & 0x10000000) {
                m[0] = -P;
                m[1] = -Q;
            }
            if (e->w0 & 0x20000000) {
                m[2] = -m[2];
                m[3] = -m[3];
            }
            idx = func_02087cd8(oam - *cnt, aux, m);
            if (idx == -1) {
                if (e->w1id == 0xffff) {
                    goto end;
                }
                e++;
                goto top;
            }
            if (k1) {
                flags = 0x100;
            } else {
                flags = 0x300;
            }
        } else {
            idx = 0;
            flags = e->w0 & 0x30000000;
        }
        if (fx) {
            flags |= 0x10000000;
        }
        if (fy) {
            flags |= 0x20000000;
        }
        w1lo = e->w1lo;
        b13 = (e->w0 << 18) >> 31;
        Unk_02087e70_SetAttr(oam, x, y, priv, size, (e->w0 << 19) >> 31, flags, e->w0 & 0xc000c000, b13, w1lo, palv, idx);
        oam++;
        *cnt = *cnt + 1;
        if (e->w1id == 0xffff) {
            goto end;
        }
        e++;
        goto top;
    }
end:;
}

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_02087e70_Oam data_021cde38[0x80];
extern s32 data_021cde34;
extern Unk_02087e70_Oam data_021ce238[0x80];
extern s32 data_021cde2c;
extern s32 data_021cde30;
extern s32 data_021cde28;

Unk_02087e70_Oam data_021cde38[0x80];

s32 data_021cde34;

Unk_02087e70_Oam data_021ce238[0x80];

s32 data_021cde2c;

s32 data_021cde30;

s32 data_021cde28;
