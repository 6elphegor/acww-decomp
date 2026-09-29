#include "types.h"

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

extern "C" {
extern s32 data_020cf558[];
extern s32 data_020cf588[];
extern s16 data_02135f44[];
extern s32 data_021cde2c;
extern s32 data_021cde34;
extern s32 data_021cde28;
extern s32 data_021cde30;
extern Unk_02087e70_Oam data_021cde38[];
extern Unk_02087e70_Oam data_021ce238[];

BOOL func_02087c8c(u32 mode);
s32 func_02087cd8(Unk_02087e70_Oam *base, s32 *cnt, s32 *m);
s32 func_01ffc5a4(s32 v, s32 s);
s32 func_01ffcb0c(s32 a, s32 b);

s32 func_02087e0c(s8 *p);
s32 func_02087e14(u32 *p);
s32 func_02087e30(u32 *p);
s32 func_02087e40(s32 a, s32 b);
s32 func_02087e50(u32 *p);
s32 func_02087e60(s32 a, s32 b);
void func_02087e70(u32 mode, Unk_02087e70_Ent *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 sx, s32 sy, s32 rot, s32 sz, s32 fx, s32 fy);
Unk_02087e70_Oam *func_02088378(u32 mode, Unk_02087e70_Ent *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 scale, s32 rot, s32 sz);

s32 func_02087e0c(s8 *p)
{
    return *p;
}

s32 func_02087e14(u32 *p)
{
    s32 v = (*p << 7) >> 23;
    if (v >= 0x100) {
        v -= 0x200;
    }
    return v;
}

s32 func_02087e30(u32 *p)
{
    u32 v = *p;
    return func_02087e40((v << 16) >> 30, v >> 30);
}

s32 func_02087e40(s32 a, s32 b)
{
    return data_020cf558[b + (a << 2)];
}

s32 func_02087e50(u32 *p)
{
    u32 v = *p;
    return func_02087e60((v << 16) >> 30, v >> 30);
}

s32 func_02087e60(s32 a, s32 b)
{
    return data_020cf588[b + (a << 2)];
}

void func_02087e70(u32 mode, Unk_02087e70_Ent *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 sx, s32 sy, s32 rot, s32 sz, s32 fx, s32 fy)
{
    Unk_02087e70_Oam *oam;
    s32 priv;
    s32 palv;
    BOOL use;
    s32 *cnt;
    s32 y;
    s32 *aux;
    s32 h;
    s32 size;
    s32 hw;
    s32 x;
    s32 w;
    s32 d;
    s32 hh;
    s32 idx;
    s32 flags;
    u32 b13;
    u32 w1lo;
    BOOL k3;
    BOOL k0;
    BOOL k1;
    s16 *sinp;
    s16 *cosp;
    volatile s32 ri;
    u32 m0;
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
    sinp = &data_02135f44[((s32)(u16)(s16)rot >> 4) * 2];
    cosp = &data_02135f44[((s32)(u16)(s16)rot >> 4) * 2 + 1];
    ri = (rot >> 4) * 2;
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
                s32 a = *sinp;
                s32 b = *cosp;
                s32 t, f;
                t = func_01ffcb0c(b, x);
                d = t - func_01ffcb0c(a, y);
                f = func_01ffcb0c(b, y);
                f += func_01ffcb0c(a, x);
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
            size = sz;
        } else {
            size = (e->w0 << 20) >> 30;
        }
        if (use) {
            s32 P, Q;
            s32 m[4];
            s32 cc, ss;
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
        m0 = e->w0;
        m0 &= 0xc000c000;
        {
            u32 b12 = (e->w0 << 19) >> 31;
            if (flags == 0x100 || flags == 0x300) {
                if (size == 3) {
                    u32 xs = (x & 0x1ff) << 16;
                    m0 |= (b12 << 12) | ((size << 10) | ((idx << 25) | (y & 0xff)));
                    xs |= m0;
                    oam->a01 = flags | xs;
                } else {
                    u32 xs = (x & 0x1ff) << 16;
                    u32 bt = b12 << 12;
                    bt |= (size << 10) | ((y & 0xff) | ((idx << 25) | (b13 << 13)));
                    m0 |= bt;
                    xs |= m0;
                    oam->a01 = flags | xs;
                }
            } else {
                if (size == 3) {
                    u32 xs = (x & 0x1ff) << 16;
                    u32 bt = (b12 << 12) | ((y & 0xff) | (size << 10));
                    m0 |= bt;
                    xs |= m0;
                    oam->a01 = flags | xs;
                } else {
                    u32 xs = (x & 0x1ff) << 16;
                    u32 bt = (b12 << 12) | ((size << 10) | ((b13 << 13) | (y & 0xff)));
                    m0 |= bt;
                    xs |= m0;
                    oam->a01 = flags | xs;
                }
            }
        }
        {
            u32 pl = palv << 12;
            w1lo = w1lo | (priv << 10);
            oam->a2 = pl | w1lo;
        }
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

Unk_02087e70_Oam *func_02088378(u32 mode, Unk_02087e70_Ent *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 scale, s32 rot, s32 sz)
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
        s32 c = (data_02135f44[i + 1] * scale + 0x800) >> 12;
        m[0] = c;
        s32 s = (data_02135f44[i] * scale + 0x800) >> 12;
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
    {
        w1lo = e->w1lo;
        b13 = (e->w0 << 18) >> 31;
        u32 m0 = e->w0 & 0xc000c000;
        u32 b12 = (e->w0 << 19) >> 31;
        u32 size = (e->w0 << 20) >> 30;
        if (flags == 0x100 || flags == 0x300) {
            if (size == 3) {
                oam->a01 = flags | (((x & 0x1ff) << 16) | (m0 | ((b12 << 12) | ((size << 10) | ((idx << 25) | (y & 0xff))))));
            } else {
                oam->a01 = flags | (((x & 0x1ff) << 16) | (m0 | ((b12 << 12) | ((size << 10) | ((y & 0xff) | ((idx << 25) | (b13 << 13)))))));
            }
        } else {
            if (size == 3) {
                oam->a01 = flags | (((x & 0x1ff) << 16) | (m0 | ((b12 << 12) | ((y & 0xff) | (size << 10)))));
            } else {
                oam->a01 = flags | (((x & 0x1ff) << 16) | (m0 | ((b12 << 12) | ((size << 10) | ((b13 << 13) | (y & 0xff))))));
            }
        }
        u32 pl = pal << 12;
        w1lo = w1lo | (pri << 10);
        oam->a2 = pl | w1lo;
    }
    *cnt = *cnt + 1;
    return oam;
}
}
