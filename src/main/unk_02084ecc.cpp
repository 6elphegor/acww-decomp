#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_02084ecc_Vec {
    s32 x, y, z;
};

struct Unk_02084f84_Sub {
    u8 pad_00[0x28];
    Unk_02084f84_Sub();
};

class Unk_020e09ac : public Unk_020d8c7c {
public:
    Unk_020e09ac() {}
    virtual ~Unk_020e09ac();

    Unk_02084f84_Sub unk_50;
};

// Scratch object of the grid probe (func_0203398c constructs, func_02033988 destroys).
class Unk_0203398c {
public:
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[8];
    Unk_0203398c() {}
    Unk_0203398c *func_0203398c(s32 x, s32 z, s32 a, s32 b);
    ~Unk_0203398c();
};

struct Unk_020cbb18_Data {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_02084ffc_Grid {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
};

extern u8 data_021cd640;
extern u8 data_021cd654[];
extern u8 data_021cd844[];
extern u8 data_020e0994[];
extern u8 data_021dfd8c[];
extern u8 data_020e416c;
extern u8 data_021c47c4[];
extern u8 data_021d735c[];
extern u8 data_021d7350[];
extern u8 data_021cdcc4[];
extern Unk_020cbb18_Data *data_020cbb18;
extern s32 data_021cdcf8[];
extern s32 data_021cdd38[];

extern "C" {
void func_02115fb4(void *p, u32 v, u32 n);
s32 func_02116048(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *func_020805c4(void *);
s32 func_020030b4(void *);
u8 *func_0207f170(...);
void func_0204ed8c(Unk_02084ecc_Vec *out, s32 x, s32 z);
void func_02076a6c(void *, s32, s32);
void func_02076b08(void *, s32, s32);
s32 func_02083e60(void *);
void func_0208403c(void *);
BOOL func_02072e88(void *, u32);
s32 func_020b50e8();
s32 func_020b4910();
void *func_0204da0c();
void *func_02037558(void *, s32, s32, s32);
void func_02037590(void *, u16 *, s32, s32, s32);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
void *func_0209750c();
void *func_0209888c(void *);
s32 func_02094218(void *);
s32 func_02098044(void *, s32);
s32 func_0203c338();
s32 func_0203c31c();
void func_0209d498(void *);
s32 func_0203f2e0(s32, void *, s32);
void func_02086f84(void *);
void func_02086bf0(void *);
void func_02086adc(void *);
void func_02086bfc(void *);
void func_02086f30(void *);
void func_02086ee8(void *);
void func_02086f0c(void *);
void func_02086f8c(void *);
void func_0208721c(void *);
void func_02086ae8(void *);
void func_02086aec(void *);
void func_02087220(void *);
void func_02086f90(void *);
void func_02086f10(void *);
void func_02086eec(void *);
void func_02086f34(void *);
void func_02086c00(void *);
void func_0208586c(void *);
void func_020030e8();
void func_020858ac(void *);
void func_02094294();
s32 func_02063b8c(s32);
void func_020858b0(void *, void *);
s32 func_0207bcfc(u32, s32, s32);
void func_02085870(void *, void *);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204edf8(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
void *func_0204ebd8(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
s32 func_02133150(s32, s32);
s32 func_02085580(u32 v);
s32 func_020855a8(u32 *out, u16 *p);
s32 func_02085490(s32 *pos);
s32 func_020854e0(void *obj, void *grid);
s32 func_020853a0(void *self, void *grid);
s32 func_02063b74(s32);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_0204b978(u16 *);
s32 func_0204b900(u16 *);
void func_0209cf88(void *);
s32 func_0209cd00(void *, void *);
s32 func_0203f42c(s32);
void func_0209e120(void *, s32);
void *func_02097868(void *, s32);
s32 func_02098a48(void *);
void *func_0209868c(void *);
void func_02087b38(void *);
void func_02087b18(void *);
void func_02097ff4(void *, s32);
void func_02085908(void *);
void func_02087bb0(void *, s32);
void func_02087b94(void *, s32);
void func_020851a4(void *self, u32 bit);
}

extern "C" void func_02084ecc()
{
    u8 *p = data_021cd654;
    s32 i;
    s32 z = 0;
    func_02115fb4(p, 0, 0xf0);
    for (i = 0; i < 8; p += 0x1e, i++) {
        void *o = func_0207bf60(data_021dfd8c, i);
        if (o != NULL && func_020030b4(func_020805c4(o)) != 0) {
            Unk_02084ecc_Vec v;
            v.x = 0;
            v.y = 0;
            v.z = 0;
            u8 *q = func_0207f170(o);
            func_0204ed8c(&v, q[0] + 1, q[1] + 2);
            func_02076a6c(p + 4, v.x, v.z);
            func_02076b08(p + 3, z, z);
            p[0] = 1;
        }
    }
}

extern "C" void func_02084f48()
{
    data_021cd640 = 0;
    func_02115fb4(data_021cd654, 0, 0xf0);
    func_02115fb4(data_021cd844, 0, 0x474);
    func_02083e60(data_020e0994);
}

extern "C" Unk_020e09ac *func_02084f84()
{
    return new Unk_020e09ac();
}

extern "C" void func_02084fb8()
{
}

extern "C" s32 func_02084fbc()
{
    BOOL b = (data_020e416c == 0);
    if (b) {
        Unk_020cbb18_Data *d = data_020cbb18;
        if (func_02072e88(d, d->unk_64)) {
            return 0;
        }
    }
    func_020b50e8();
    return func_020b4910();
}

extern "C" void func_02084ffc()
{
    Unk_02084ffc_Grid *g = (Unk_02084ffc_Grid *)func_0204da0c();
    s32 x, y;
    if (g != NULL) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                u8 *cell;
                u16 *p;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    cell = g->unk_00 + (y * g->unk_04 + x) * 0x28;
                } else {
                    cell = NULL;
                }
                if (cell != NULL) {
                    p = (u16 *)func_02037558(cell, 0, 0, 0);
                    if (p != NULL) {
                        s32 i, j;
                        for (j = 0; j < 16; j++) {
                            for (i = 0; i < 16; i++) {
                                u16 v[2];
                                BOOL ok;
                                if (func_0204b2d4(p)) {
                                    v[1] = 0x1568;
                                    s32 t = func_0204b25c(p);
                                    ok = (t == func_0204b25c(&v[1])) ? TRUE : FALSE;
                                } else {
                                    if (*p == 0x1568) ok = TRUE; else ok = FALSE;
                                }
                                if (ok) {
                                    v[0] = 0xfff1;
                                    func_02037590(cell, v, i, j, 0);
                                }
                                p++;
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" void *func_020850e0()
{
    return data_021cdcc4;
}

extern "C" void func_020850e8(void *self)
{
    void *r5 = func_0209750c();
    if (r5 != NULL) {
        if (func_02094218(func_0209888c(r5)) != 0) {
            if (func_02098044(r5, 1) == 0) {
                if ((func_02098044(r5, 0x21) == 0 && func_0203c338() != 0) ||
                    (func_02098044(r5, 0x22) == 0 && func_0203c31c() != 0)) {
                    s32 a[2];
                    s32 b[2];
                    a[0] = 0;
                    a[1] = 0;
                    func_0209d498(a);
                    func_02116048(a, b, 8);
                    if (func_0203f2e0(8, b, 0) == 0) {
                        func_020851a4(self, 8);
                    }
                }
            }
        }
    }
}

extern "C" void *func_0208516c(u8 *p) { return p + 4; }
extern "C" void *func_02085170(u8 *p) { return p + 0x31; }
extern "C" void *func_02085174(u8 *p) { return p + 0x24; }
extern "C" void *func_02085178(u8 *p) { return p + 0xc; }
extern "C" void *func_0208517c(u8 *p) { return p + 0x30; }
extern "C" void *func_02085180(u8 *p) { return p + 0x20; }
extern "C" void *func_02085184(u8 *p) { return p + 0x18; }

extern "C" void func_02085188(u32 *w, u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        u32 m = 1 << b;
        m = ~m;
        w[idx] = m & w[idx];
    }
}

extern "C" void func_020851a4(void *self, u32 bit)
{
    u32 *w = (u32 *)self;
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        u32 m = 1 << b;
        w[idx] = m | w[idx];
    }
}

extern "C" BOOL func_020851bc(u32 *w, u32 bit)
{
    BOOL r;
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        r = TRUE;
        if (((r << b) & w[idx]) != 0) {
            goto done;
        }
    }
    r = FALSE;
done:
    return r;
}

extern "C" void *func_020851e4(u8 *self)
{
    func_02086f84(self + 0x18);
    func_02115fb4(self, 0, 4);
    func_02086bf0(self + 0x31);
    func_02086adc(self + 4);
}

extern "C" void *func_0208520c(u8 *self)
{
    func_02086bfc(self + 0x31);
    func_02086f30(self + 0x30);
    func_02086ee8(self + 0x24);
    func_02086f0c(self + 0x20);
    func_02086f8c(self + 0x18);
    func_0208721c(self + 0xc);
    func_02086ae8(self + 4);
    return self;
}

extern "C" void *func_0208524c(u8 *self)
{
    func_02086aec(self + 4);
    func_02087220(self + 0xc);
    func_02086f90(self + 0x18);
    func_02086f10(self + 0x20);
    func_02086eec(self + 0x24);
    func_02086f34(self + 0x30);
    func_02086c00(self + 0x31);
    return self;
}

extern "C" void func_02085290(void *self)
{
    u32 mask;
    void *grid;
    s32 best, cnt, i;
    BOOL b = (data_020e416c == 0);
    if (b) {
        grid = *(void **)data_021c47c4;
        func_0208586c(self);
        func_020030e8();
        func_020858ac(self);
        func_02094294();
        if (grid != NULL) {
            mask = 0;
            best = -1;
            cnt = 0;
            for (i = 0; i < 8; i++) {
                void *o = func_0207bf60(data_021dfd8c, i);
                if (o != NULL && func_020030b4(func_020805c4(o)) != 0) {
                    s32 v = func_020854e0(o, grid);
                    if (v > best) {
                        mask = (u8)(1 << i);
                        cnt = 1;
                        best = v;
                    } else if (v == best) {
                        mask = (u8)(mask | (1 << i));
                        cnt++;
                    }
                }
            }
            s32 w = func_020853a0(self, grid);
            if (cnt == 0 || w > best || (w > 0 && w == best && func_02063b8c(2) == 0)) {
                func_020858b0(self, func_0209888c(func_0209750c()));
            } else {
                void *o = func_0207bf60(data_021dfd8c, func_0207bcfc(mask, cnt, 8));
                if (o != NULL && func_020030b4(func_020805c4(o)) != 0) {
                    func_02085870(self, func_020805c4(o));
                }
            }
        }
    }
}

extern "C" s32 func_020853a0(void *self, void *grid)
{
    s32 r = 0;
    s32 a, b, c, d;
    u16 lo, hi;
    s32 x, y, hy, hx, sx, sy;
    s32 cnt, sel;
    u32 mask;
    s32 pos[2];
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    lo = 0x5014;
    hi = 0x501a;
    if (func_0204ea88(grid, &a, &b, &c, &d, &lo, &hi, 1, 0)) {
        mask = 0;
        sx = 0;
        sy = 0;
        cnt = 0;
        sel = 0;
        func_0204edf8(&sx, &sy, a, b, c, d);
        y = sy - 1;
        goto test1;
    loop1:
        x = sx - 5;
        if (x < sx + 5) {
            goto test0;
        loop0:
            hx = x >> 4;
            hy = y >> 4;
            {
                void *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (cell != NULL) {
                    if (func_020855a8((u32 *)&sel, (u16 *)cell)) {
                        pos[0] = x;
                        pos[1] = y;
                        if (func_02085490(pos)) {
                            if ((u32)sel < 0x20) {
                                mask |= 1 << sel;
                            }
                            cnt++;
                        }
                    }
                }
            }
            x++;
        test0:
            if (x < sx + 5) goto loop0;
        }
        y++;
    test1:
        if (y < sy + 9) goto loop1;
        s32 pc = func_02085580(mask);
        r = func_02133150(pc * cnt + 2, 3);
    }
    return r;
}

extern "C" s32 func_02085490(s32 *pos)
{
    s32 *p = data_021cdcf8;
    s32 i;
    for (i = 0; i < 8; i++) {
        Unk_0203398c o;
        o.func_0203398c(pos[0] + p[0], pos[1] + p[1], 0, 0);
        if (o.unk_34 == 4) {
            return TRUE;
        }
        p += 2;
    }
    return FALSE;
}

extern "C" s32 func_020854e0(void *obj, void *grid)
{
    void *k = func_020805c4(obj);
    s32 r = 0;
    s32 i, sx, sy, z1, z2, v;
    if (func_020030b4(k) != 0) {
        u32 mask = 0;
        u8 *q = func_0207f170(obj);
        sx = q[0];
        sy = q[1];
        s32 *d = data_021cdd38;
        s32 cnt = 0;
        v = 0;
        i = 0;
        z1 = 0;
        z2 = 0;
        for (i = 0; i < 14; i++) {
            s32 x = sx + d[0];
            s32 y = sy + d[1];
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            void *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), z1);
            v = z2;
            if (cell != NULL && func_020855a8((u32 *)&v, (u16 *)cell)) {
                if ((u32)v < 0x20) {
                    mask |= 1 << v;
                }
                cnt++;
            }
            d += 2;
        }
        r = func_02085580(mask) * cnt;
    }
    return r;
}

extern "C" s32 func_02085580(u32 v)
{
    s32 n = 0;
    if (v != 0) {
        s32 i;
        for (i = 0; i < 32; i++) {
            if ((v >> i) & 1) {
                n++;
            }
        }
    }
    return n;
}

extern "C" s32 func_020855a8(u32 *out, u16 *p)
{
    BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 11) f2 = FALSE;
    }
    if (!f2) {
        if (v < 12 || v > 17) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 18 || v > 25) && v != 28) f4 = FALSE;
    }
    if (f4 || v == 26 || (u16)(v + 0xffe3) <= 1) {
        if (v > 27) {
            *out = v - 1;
        } else {
            *out = v;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_02085618(u16 *p)
{
    s32 r = 0;
    s32 base = func_02063b74(0x666) + 0xccd;
    BOOL in = r;
    u32 v = *p;
    if (v >= 0x12e8 && v <= 0x131f) {
        in = TRUE;
    }
    if (in) {
        r = func_01ffc5a4(func_01ffcb0c(func_0204b978(p) << 12, base), 0x28a4);
        if (r < 0x119a) {
            r = 0x119a;
        }
    } else if (v >= 0x12b0 && v <= 0x12e7) {
        r = func_01ffcb0c(func_0204b900(p) << 12, base);
    }
    return r;
}

struct Unk_020856a4_Rec {
    u8 b[4];
};

extern "C" void func_020856a4(u8 *self, u32 mode)
{
    Unk_020856a4_Rec t;
    s32 v;
    s32 i;
    func_0209cf88(&t);
    v = 0;
    switch (mode) {
    case 0:
        v = func_0203f42c(0xe);
        break;
    case 1:
        v = func_0203f42c(0x11);
        break;
    case 2:
        v = func_0203f42c(0x10);
        break;
    }
    s32 r = func_0209cd00(&t, self + 0x34);
    if (t.b[2] == self[0x36] && v != -1 && r <= 7 && r >= 0 && t.b[0] - v <= self[0x34]) {
        return;
    }
    switch (mode) {
    case 1:
        func_0209e120(data_021d7350, 0x11);
        break;
    case 0:
    case 2:
        for (i = 0; i < 4; i++) {
            void *o = func_02097868(data_021d735c, i);
            if (o != NULL && func_02098a48(o) != 0) {
                if (mode == 2) {
                    func_02087b38(func_0209868c(o));
                    func_02097ff4(o, 0xf);
                } else {
                    func_02087b18(func_0209868c(o));
                }
            }
        }
        break;
    }
    func_02085908(self);
}

extern "C" void func_02085784(u8 *self, u32 mode)
{
    Unk_020856a4_Rec t;
    s32 i;
    s32 z1 = 0;
    s32 z0 = 0;
    func_0209cf88(&t);
    if (self[0x36] == t.b[2] && self[0x35] == t.b[1] && self[0x34] == t.b[0]) {
        return;
    }
    func_02085908(self);
    for (i = 0; i < 4; i++) {
        void *o = func_02097868(data_021d735c, i);
        if (o != NULL && func_02098a48(o) != 0) {
            switch (mode) {
            case 1:
                func_02087bb0(func_0209868c(o), z0);
                break;
            case 2:
                func_02087b94(func_0209868c(o), z1);
                break;
            }
        }
    }
}
