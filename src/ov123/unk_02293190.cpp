#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_ov123_022954cc[];
extern u8 data_ov123_0229554c[];
void func_0206f994(void *p, void *s, s32 n);
void func_0200402c(u32 id);
void func_0206ecf8(u32 v);
s32 func_0206ed50();
s32 func_02133150(s32 a, s32 b);
}

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};




class Unk_ov002_02202fac {
public:
    BOOL func_ov002_0220314c(s32 idx, s32 x, s32 y);
};

class Unk_020e0488 {
public:
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
};

// Vtable 0x022959c4, size 0x5168
class Unk_ov123_022959c4 : public Unk_ov002_022044e4 {
public:
    u32 *func_ov123_0229275c();
    u32 func_ov123_02292ff8(u32 a, u32 b, u32 c);
    void func_ov123_02293b20();
    void func_ov123_02293b0c(u8 a);
    void func_ov123_02292c34();
    void func_ov123_02292c04();
    void func_ov123_02292784();
    void func_ov123_02292340();
    BOOL func_ov123_02292010(s32 a);
    void func_ov123_02293f10(s32 a, s32 b);
    void func_ov123_02293dc0();
    void func_ov123_02293d28();
    void func_ov123_02293f70();
    void func_ov123_02293f3c();
    void func_ov123_02292b04();

    // this group
    s32 func_ov123_02293190(s32 x, s32 y, s32 v);
    s32 func_ov123_022931e8(s32 x, s32 y, s32 v);
    s32 func_ov123_02293240(s32 x0, s32 x1, s32 y, s32 v);
    u32 func_ov123_02293298(u32 x, u32 y);
    void func_ov123_022932d4(u32 c);
    void func_ov123_02293344(s32 v);
    void func_ov123_0229336c(s32 x0, s32 y0, s32 x1, u8 y1, u32 c, u32 fill);
    void func_ov123_022934d4(u8 x0, u8 y0, u8 x1, u8 y1, u32 c);
    u32 func_ov123_0229353c(u32 x0, u32 y0, u32 x1, u8 y1, u32 c, s32 t);
    u32 func_ov123_0229363c(u8 x, u8 y, u32 c, s32 t, s32 z);
    u32 func_ov123_02293784(u8 x, u8 y, u32 c);
    void func_ov123_022937e0();
    s32 func_ov123_02293830(s32 i);
    s32 func_ov123_02293838(s32 i);
    void func_ov123_02293840();
    u8 func_ov123_02293964();
    u8 func_ov123_0229397c(s32 x, s32 y);
    void func_ov123_02293a98(u8 a);

    /* 0x0091 */ u8 unk_91[0x10];
    /* 0x00a1 */ u8 unk_a1;
    /* 0x00a2 */ u8 unk_a2[2];
    /* 0x00a4 */ u8 unk_a4;
    /* 0x00a5 */ u8 unk_a5;
    /* 0x00a6 */ u8 unk_a6[2];
    /* 0x00a8 */ u8 unk_a8;
    /* 0x00a9 */ u8 unk_a9;
    /* 0x00aa */ u8 unk_aa;
    /* 0x00ab */ u8 unk_ab[0xd];
    /* 0x00b8 */ u8 unk_b8[0x40];
    /* 0x00f8 */ u8 unk_f8[0x5004 - 0xf8];
    /* 0x5004 */ Unk_ov002_02202fac unk_5004;
    /* 0x5168 */
};

s32 Unk_ov123_022959c4::func_ov123_02293190(s32 x, s32 y, s32 v) {
    if (x >= 31) {
        return 31;
    }
    s32 i = x + 1;
    u32 *p = (u32 *)((u8 *)func_ov123_0229275c() + (y << 4)) + (i >> 3);
    s32 sh = (i & 7) << 2;
    for (; i <= 31; i++) {
        if (v != (u8)((*p >> sh) & 0xf)) {
            return i - 1;
        }
        sh += 4;
        if (sh > 28) {
            sh = 0;
            p++;
        }
    }
    return 31;
}

s32 Unk_ov123_022959c4::func_ov123_022931e8(s32 x, s32 y, s32 v) {
    if (x <= 0) {
        return 0;
    }
    s32 i = x - 1;
    u32 *p = (u32 *)((u8 *)func_ov123_0229275c() + (y << 4)) + (i >> 3);
    s32 sh = (i & 7) << 2;
    for (; i >= 0; i--) {
        if (v != (u8)((*p >> sh) & 0xf)) {
            return i + 1;
        }
        sh -= 4;
        if (sh < 0) {
            sh = 28;
            p--;
        }
    }
    return 0;
}

s32 Unk_ov123_022959c4::func_ov123_02293240(s32 x0, s32 x1, s32 y, s32 v) {
    s32 x = x0;
    u32 *p = (u32 *)((u8 *)func_ov123_0229275c() + (y << 4)) + (x >> 3);
    s32 sh = (x & 7) << 2;
    for (; x <= x1; x++) {
        if (v == (u8)((*p >> sh) & 0xf)) {
            return x;
        }
        sh += 4;
        if (sh >= 32) {
            sh = 0;
            p++;
        }
    }
    return -1;
}

u32 Unk_ov123_022959c4::func_ov123_02293298(u32 x, u32 y) {
    if (x >= 32 || y >= 32) {
        return 1;
    }
    u8 *row = (u8 *)func_ov123_0229275c() + (y << 4);
    return (u8)((*(u32 *)(row + (((s32)x >> 3) << 2)) >> ((x & 7) << 2)) & 0xf);
}

void Unk_ov123_022959c4::func_ov123_022932d4(u32 c) {
    u32 *p = func_ov123_0229275c();
    s32 j, i;
    for (j = 0; j < 2; j++) {
        u32 *t = (u32 *)data_ov123_022954cc;
        for (i = 0; i < 16; i++) {
            p[0] = func_ov123_02292ff8(p[0], t[0], c);
            p[1] = func_ov123_02292ff8(p[1], t[1], c);
            p[2] = func_ov123_02292ff8(p[2], t[0], c);
            p[3] = func_ov123_02292ff8(p[3], t[1], c);
            p += 4;
            t += 2;
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02293344(s32 v) {
    u32 *p = func_ov123_0229275c();
    u32 t = v * 0x11111111;
    s32 i;
    for (i = 0; i < 32; i++) {
        p[0] = t;
        p[1] = t;
        p[2] = t;
        p[3] = t;
        p += 4;
    }
}

void Unk_ov123_022959c4::func_ov123_022934d4(u8 x0, u8 y0, u8 x1, u8 y1, u32 c) {
    u8 x;
    for (x = x0; x <= x1; x++) {
        func_ov123_02293784(x, y0, c);
        func_ov123_02293784(x, y1, c);
    }
    u8 y;
    for (y = y0; y <= y1; y++) {
        func_ov123_02293784(x0, y, c);
        func_ov123_02293784(x1, y, c);
    }
}

u32 Unk_ov123_022959c4::func_ov123_02293784(u8 x, u8 y, u32 c) {
    if (x >= 32 || y >= 32) {
        return 0;
    }
    u32 *g = func_ov123_0229275c();
    u32 sh = (x & 7) << 2;
    u32 *row = g;
    row += y * 4;
    u32 *p = &row[x >> 3];
    u32 mask = 0xf << sh;
    u32 w = row[x >> 3];
    u32 cur = (u8)(((w & mask) >> sh) & 0xf);
    if (cur == c) {
        return 0;
    }
    *p = w & ~mask;
    *p = *p | (c << sh);
    return 1;
}

void Unk_ov123_022959c4::func_ov123_022937e0() {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec + 16;
    if (unk_a4 == 1) {
        x += 2;
        y += 2;
    }
    x -= 0x40;
    if (x < 0) {
        x = 0;
    } else if (x > 0x7f) {
        x = 0x7f;
    }
    y -= 0x18;
    if (y < 0) {
        y = 0;
    } else if (y > 0x7f) {
        y = 0x7f;
    }
    unk_a8 = x >> 2;
    unk_a9 = y >> 2;
}

s32 Unk_ov123_022959c4::func_ov123_02293830(s32 i) { return i * 4 + 10; }

s32 Unk_ov123_022959c4::func_ov123_02293838(s32 i) { return i * 4 + 0x42; }

void Unk_ov123_022959c4::func_ov123_02293840() {
    u32 s = unk_a5;
    if (s == 0x1d) {
        func_ov123_02293f70();
    } else if (s == 0x1e) {
        func_ov123_02293f3c();
    } else if (s <= 0xb && s != 5) {
        func_ov123_02292c34();
    } else if (s == 0xc) {
        func_ov123_02292c04();
        func_ov123_02293a98((unk_a1 + 1) & 0xf);
        func_0200402c(0x868);
    } else if (s == 5) {
        func_ov123_02292c04();
        func_ov123_02292784();
    } else if (s >= 0xe && s <= 0x1c) {
        func_ov123_02293b0c(s - 0xd);
        func_0200402c(0x86a);
    } else {
        if (s == 0xd) {
            func_ov123_02292340();
        }
        u32 t = unk_a5;
        if (t == 0x1f) {
            func_ov123_02293f10(2, 3);
            if (func_ov123_02292010(8)) {
                func_0206ecf8(0);
                func_0200402c(0x28);
            } else {
                switch (func_0206ed50()) {
                case 2:
                    func_ov123_02293dc0();
                    break;
                case 3:
                    func_ov123_02293d28();
                    break;
                }
                func_0206ecf8(1);
                func_0200402c(0x27);
            }
        } else if (t == 0x20) {
            func_ov123_02293f10(9, 4);
            if (func_ov123_02292010(8)) {
                unk_aa = 0x1e;
                func_0200402c(0x29);
            } else {
                unk_aa = 0x1d;
                func_0200402c(0x2a);
            }
        }
    }
}

u8 Unk_ov123_022959c4::func_ov123_02293964() { return func_ov123_0229397c(data_021ef5f0, data_021ef5ec); }

u8 Unk_ov123_022959c4::func_ov123_0229397c(s32 x, s32 y) {
    if (unk_5004.func_ov002_0220314c(9, x, y)) {
        return 0x1d;
    }
    if (unk_5004.func_ov002_0220314c(8, x, y)) {
        return 0x1e;
    }
    if (x >= 0x8 && x <= 0x28 && y >= 0x18 && y <= 0x38) {
        return 0xd;
    }
    if (x >= 0x40 && x < 0xc0 && y >= 0x8 && y < 0x88) {
        return 0x21;
    }
    if (x >= 0xca && y >= 0x8) {
        if (x < 0xe1) {
            if (y < 0x50) {
                if (y < 0x20) {
                    return 0;
                }
                if (y < 0x38) {
                    return 1;
                }
                return 2;
            }
            if (y >= 0x58 && y < 0x88) {
                if (y < 0x70) {
                    return 3;
                }
                return 4;
            }
            if (y >= 0x90 && y < 0xa8) {
                return 5;
            }
        } else if (x < 0xf9) {
            if (y < 0x50) {
                if (y < 0x20) {
                    return 6;
                }
                if (y < 0x38) {
                    return 7;
                }
                return 8;
            }
            if (y >= 0x58 && y < 0xa0) {
                if (y < 0x70) {
                    return 9;
                }
                if (y < 0x88) {
                    return 10;
                }
                return 11;
            }
        }
    }
    if (x >= 0x8 && x <= 0x28 && y >= 0x80 && y <= 0x94) {
        return 12;
    }
    if (x >= 0x8 && x < 0xbc && y >= 0x94 && y <= 0xa4) {
        return (u8)((x - 8) / 12 + 14);
    }
    return 0x22;
}

void Unk_ov123_022959c4::func_ov123_02293a98(u8 a) {
    u8 buf[5];
    unk_a1 = a;
    func_ov123_02293b20();
    if (a < 9) {
        buf[0] = 0x85;
    } else {
        buf[0] = 0x36;
    }
    buf[1] = (a + 1) % 10 + 0x35;
    buf[2] = 0;
    func_0206f994(unk_b8, buf, 5);
    ((Unk_020e0488 *)unk_b8)->func_0206fb48(8, 0x128, 2, 6, 0, 1);
    ((Unk_020e0488 *)unk_b8)->func_0206fab4(0, 0);
}

u32 Unk_ov123_022959c4::func_ov123_0229363c(u8 x, u8 y, u32 c, s32 t, s32 z) {
    u32 r = 0;
    if (t < 0 || t > 3) {
        return 0;
    }
    switch (t) {
    case 0:
        r |= func_ov123_02293784(x, y, c);
        break;
    case 1: {
        r |= func_ov123_02293784(x, y, c);
        s32 xm = x - 1;
        r |= func_ov123_02293784(xm, y, c);
        s32 ym = y - 1;
        r |= func_ov123_02293784(x, ym, c);
        r |= func_ov123_02293784(xm, ym, c);
        break;
    }
    case 2: {
        s32 ym = y - 1;
        s32 xm = x - 1;
        r |= func_ov123_02293784(xm, ym, c);
        r |= func_ov123_02293784(x, ym, c);
        s32 xp = x + 1;
        r |= func_ov123_02293784(xp, ym, c);
        r |= func_ov123_02293784(xm, y, c);
        r |= func_ov123_02293784(x, y, c);
        r |= func_ov123_02293784(xp, y, c);
        s32 yp = y + 1;
        r |= func_ov123_02293784(xm, yp, c);
        r |= func_ov123_02293784(x, yp, c);
        r |= func_ov123_02293784(xp, yp, c);
        break;
    }
    case 3:
        func_ov123_02292b04();
        break;
    }
    return r;
}

u32 Unk_ov123_022959c4::func_ov123_0229353c(u32 x0, u32 y0, u32 x1, u8 y1, u32 c, s32 t) {
    u32 dx, dy;
    s32 err1;
    s32 sx, sy;
    s32 i1;
    u32 r;
    s32 dx2b;
    s32 dy2b;
    s32 dy2;
    s32 dx2;
    s32 err2;
    s32 i2;
    s32 z1, z2;
    r = 0;
    if (x1 > x0) {
        sx = 1;
        dx = x1 - x0;
    } else {
        sx = -1;
        dx = x0 - x1;
    }
    if (y1 > y0) {
        sy = 1;
        dy = y1 - y0;
    } else {
        sy = -1;
        dy = y0 - y1;
    }
    if ((s32)dx >= (s32)dy) {
        err1 = -(s32)dx;
        i1 = 0;
        z1 = i1;
        dy2 = dy << 1;
        dx2 = dx << 1;
        for (; i1 <= (s32)dx; i1++) {
            r |= func_ov123_0229363c(x0, y0, c, t, z1);
            x0 += sx;
            err1 += dy2;
            if (err1 >= 0) {
                y0 += sy;
                err1 -= dx2;
            }
        }
    } else {
        err2 = -(s32)dy;
        i2 = 0;
        z2 = i2;
        dx2b = dx << 1;
        dy2b = dy << 1;
        for (; i2 <= (s32)dy; i2++) {
            r |= func_ov123_0229363c(x0, y0, c, t, z2);
            y0 += sy;
            err2 += dx2b;
            if (err2 >= 0) {
                x0 += sx;
                err2 -= dy2b;
            }
        }
    }
    return r;
}

void Unk_ov123_022959c4::func_ov123_0229336c(s32 x0, s32 y0, s32 x1, u8 y1, u32 c, u32 fill) {
    s32 w;
    s32 cx;
    s16 i;
    s32 cy;
    s32 hw;
    s32 hh;
    s32 d;
    s32 a;
    s32 b;
    s32 step;
    s32 df;
    s32 sum;
    w = x1 - x0;
    d = y1 - y0;
    hw = w >> 1;
    hh = d >> 1;
    cx = x0 + hw;
    cy = y0 + hh;
    df = hw - hh;
    if (df < 0) {
        df = -df;
    }
    sum = hw + hh;
    step = 0x40 / (s16)(sum - ((sum >> 1) - (sum >> 3) - (df >> 1) - 5) | 1);
    d &= 1;
    w &= 1;
    for (i = 0; i < 0x40; i = i + step) {
        a = (((u16 *)data_ov123_0229554c)[i + 0x40] * hw + 0x2d) >> 8;
        b = (((u16 *)data_ov123_0229554c)[i] * hh + 0x2d) >> 8;
        if (fill) {
            s32 x = cx - a;
            s32 ya = cy - b;
            s32 yb = cy + b + d;
            s32 xe = cx + a + w;
            for (; x <= xe; x++) {
                func_ov123_02293784(x, ya, c);
                func_ov123_02293784(x, yb, c);
            }
        } else {
            s32 yb, xl, xr, yt;
            xr = cx + a + w;
            yb = cy + b + d;
            func_ov123_02293784(xr, yb, c);
            yt = cy - b;
            func_ov123_02293784(xr, yt, c);
            xl = cx - a;
            func_ov123_02293784(xl, yb, c);
            func_ov123_02293784(xl, yt, c);
        }
    }
}
