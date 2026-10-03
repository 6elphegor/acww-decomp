#include "types.h"

struct Unk_02085810_Rec {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

struct Unk_02085810_Base {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 unk_15;
};

class Unk_02085810 {
public:
    u32 func_02085810();
    void func_02085814(s32 v);
    void func_0208582c(Unk_02085810_Rec *src);
    Unk_02085810_Rec *func_02085828();
    void func_02085860();
    Unk_02085810_Rec *func_0208586c();
    void func_02085870(Unk_02085810_Rec *src);
    void func_020858b0(Unk_02085810_Base *src);
    void func_02085900(u32 v);
    void func_02085908();
    void func_02085940();
    void func_020858ac();

    /* 0x00 */ Unk_02085810_Base unk_00;
    /* 0x16 */ Unk_02085810_Rec unk_16;
    /* 0x22 */ Unk_02085810_Rec unk_22;
    /* 0x2e */ u16 unk_2e;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u8 unk_34;
    /* 0x35 */ u8 unk_35;
    /* 0x36 */ u8 unk_36;
    /* 0x37 */ u8 unk_37;
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

extern u8 data_021dfd8c[];
extern u8 data_020e416c;
extern u8 data_021c47c4[];
extern u8 data_021d735c[];
extern u8 data_021d7350[];

// Neighbour offsets of the grid probes.
struct Unk_02085490_Pt {
    s32 x, y;
    Unk_02085490_Pt(s32 px, s32 py) { x = px; y = py; }
};

class Unk_0208524c {
public:
    u8 unk_00[0x34];
    Unk_0208524c();
    ~Unk_0208524c();
};

Unk_02085490_Pt data_021cdd38[14] = {
    Unk_02085490_Pt(-3, -2), Unk_02085490_Pt(2, -2), Unk_02085490_Pt(-3, -1), Unk_02085490_Pt(2, -1),
    Unk_02085490_Pt(-3, 0), Unk_02085490_Pt(2, 0), Unk_02085490_Pt(-3, 1), Unk_02085490_Pt(2, 1),
    Unk_02085490_Pt(-3, 2), Unk_02085490_Pt(-2, 2), Unk_02085490_Pt(-1, 2), Unk_02085490_Pt(0, 2),
    Unk_02085490_Pt(1, 2), Unk_02085490_Pt(2, 2)
};
Unk_02085490_Pt data_021cdcf8[8] = {
    Unk_02085490_Pt(0, 1), Unk_02085490_Pt(0, -1), Unk_02085490_Pt(-1, 0), Unk_02085490_Pt(1, 0),
    Unk_02085490_Pt(-1, -1), Unk_02085490_Pt(1, -1), Unk_02085490_Pt(-1, 1), Unk_02085490_Pt(1, 1)
};
Unk_0208524c data_021cdcc4;

extern "C" {
void *_ZN12Unk_0208581013func_0208586cEv(void *self);
void _ZN12Unk_0208581013func_020858acEv(void *self);
void _ZN12Unk_0208581013func_020858b0EP17Unk_02085810_Base(void *self, void *src);
void _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(void *self, void *src);
void _ZN12Unk_0208581013func_02085908Ev(void *self);
void MI_CpuFill8(void *p, u32 v, u32 n);
s32 MI_CpuCopy8(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *_ZN12Unk_0208086013func_020805c4Ev(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
u8 *_ZN12Unk_0207e94013func_0207f170Ev(...);
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
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
s32 _ZN12Unk_020940a013func_02094218Ev(void *);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
s32 func_0203c338();
s32 func_0203c31c();
void func_0209d498(void *);
s32 func_0203f2e0(s32, void *, s32);
void _ZN12Unk_02086f8413func_02086f84Ev(void *);
void _ZN12Unk_02086b7c13func_02086bf0Ev(void *);
void func_02086adc(void *);
void _ZN12Unk_02086b7c13func_02086bfcEv(void *);
void _ZN12Unk_02086f1413func_02086f30Ev(void *);
void _ZN12Unk_02086c0413func_02086ee8Ev(void *);
void _ZN12Unk_02086ef013func_02086f0cEv(void *);
void _ZN12Unk_02086f8413func_02086f8cEv(void *);
void _ZN12Unk_0208721013func_0208721cEv(void *);
void func_02086ae8(void *);
void func_02086aec(void *);
void _ZN12Unk_0208721013func_02087220Ev(void *);
void _ZN12Unk_02086f8413func_02086f90Ev(void *);
void _ZN12Unk_02086ef013func_02086f10Ev(void *);
void _ZN12Unk_02086c0413func_02086eecEv(void *);
void _ZN12Unk_02086f1413func_02086f34Ev(void *);
void _ZN12Unk_02086b7c13func_02086c00Ev(void *);
void func_020030e8(...);
void _ZN12Unk_020940a013func_02094294Ev(...);
s32 func_02063b8c(s32);
s32 func_0207bcfc(u32, s32, s32);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204edf8(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
void *func_0204ebd8(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
s32 _s32_div_f(s32, s32);
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
void _ZN12Unk_0209da4413func_0209e120Ej(void *, s32);
void *func_02097868(void *, s32);
s32 _ZN12Unk_0209865c13func_02098a48Ev(void *);
void *_ZN12Unk_0209865c13func_0209868cEv(void *);
void _ZN12Unk_02087ad813func_02087b38Ev(void *);
void _ZN12Unk_02087ad813func_02087b18Ev(void *);
void _ZN12Unk_02097ff413func_02097ff4Ej(void *, s32);
void _ZN12Unk_02087ad813func_02087bb0Ei(void *, s32);
void _ZN12Unk_02087ad813func_02087b94Ei(void *, s32);
void func_020851a4(void *self, u32 bit);
}

struct Unk_020856a4_Rec {
    u8 b[4];
};

void Unk_02085810::func_02085908() {
    u8 d[8];
    func_02085940();
    func_0209cf88(d);
    unk_36 = d[2];
    unk_35 = d[1];
    unk_34 = d[0];
    unk_37 = 0;
}

void Unk_02085810::func_02085900(u32 v) { unk_37 = v; }

void Unk_02085810::func_020858b0(Unk_02085810_Base *src) { unk_00 = *src; func_020030e8(&unk_16); }

void Unk_02085810::func_020858ac() {}

void Unk_02085810::func_02085870(Unk_02085810_Rec *src) { unk_16 = *src; _ZN12Unk_020940a013func_02094294Ev(this); }

Unk_02085810_Rec *Unk_02085810::func_0208586c() { return &unk_16; }

void Unk_02085810::func_02085860() { func_020030e8(&unk_22); }

void Unk_02085810::func_0208582c(Unk_02085810_Rec *src) { unk_22 = *src; }

Unk_02085810_Rec *Unk_02085810::func_02085828() { return &unk_22; }

extern "C" void func_02085820(Unk_02085810 *o, u16 *in) { o->unk_2e = *in; }

extern "C" void func_02085818(u16 *out, Unk_02085810 *o) { *out = o->unk_2e; }

void Unk_02085810::func_02085814(s32 v) { unk_30 = v; }

u32 Unk_02085810::func_02085810() { return unk_30; }

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
    _ZN12Unk_0208581013func_02085908Ev(self);
    for (i = 0; i < 4; i++) {
        void *o = func_02097868(data_021d735c, i);
        if (o != NULL && _ZN12Unk_0209865c13func_02098a48Ev(o) != 0) {
            switch (mode) {
            case 1:
                _ZN12Unk_02087ad813func_02087bb0Ei(_ZN12Unk_0209865c13func_0209868cEv(o), z0);
                break;
            case 2:
                _ZN12Unk_02087ad813func_02087b94Ei(_ZN12Unk_0209865c13func_0209868cEv(o), z1);
                break;
            }
        }
    }
}

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
        _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 0x11);
        break;
    case 0:
    case 2:
        for (i = 0; i < 4; i++) {
            void *o = func_02097868(data_021d735c, i);
            if (o != NULL && _ZN12Unk_0209865c13func_02098a48Ev(o) != 0) {
                if (mode == 2) {
                    _ZN12Unk_02087ad813func_02087b38Ev(_ZN12Unk_0209865c13func_0209868cEv(o));
                    _ZN12Unk_02097ff413func_02097ff4Ej(o, 0xf);
                } else {
                    _ZN12Unk_02087ad813func_02087b18Ev(_ZN12Unk_0209865c13func_0209868cEv(o));
                }
            }
        }
        break;
    }
    _ZN12Unk_0208581013func_02085908Ev(self);
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

extern "C" s32 func_020854e0(void *obj, void *grid)
{
    void *k = _ZN12Unk_0208086013func_020805c4Ev(obj);
    s32 r = 0;
    s32 i, sx, sy, z1, z2, v;
    if (_ZN12Unk_02002fc813func_020030b4Ev(k) != 0) {
        u32 mask = r;
        u8 *q = _ZN12Unk_0207e94013func_0207f170Ev(obj);
        sx = q[0];
        sy = q[1];
        s32 *d = (s32 *)data_021cdd38;
        s32 cnt = mask;
        v = cnt;
        i = cnt;
        z1 = cnt;
        z2 = cnt;
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
        r = func_02085580(mask);
        r *= cnt;
    }
    return r;
}

extern "C" s32 func_02085490(s32 *pos)
{
    s32 *p = (s32 *)data_021cdcf8;
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
        r = _s32_div_f(pc * cnt + 2, 3);
    }
    return r;
}

extern "C" void func_02085290(void *self)
{
    u32 mask;
    void *grid;
    s32 best, cnt, i;
    BOOL b = (data_020e416c == 0);
    if (b) {
        grid = *(void **)data_021c47c4;
        _ZN12Unk_0208581013func_0208586cEv(self);
        func_020030e8();
        _ZN12Unk_0208581013func_020858acEv(self);
        _ZN12Unk_020940a013func_02094294Ev();
        if (grid != NULL) {
            mask = 0;
            best = -1;
            cnt = 0;
            for (i = 0; i < 8; i++) {
                void *o = func_0207bf60(data_021dfd8c, i);
                if (o != NULL && _ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(o)) != 0) {
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
                _ZN12Unk_0208581013func_020858b0EP17Unk_02085810_Base(self, _ZN12Unk_0209865c13func_0209888cEv(func_0209750c()));
            } else {
                void *o = func_0207bf60(data_021dfd8c, func_0207bcfc(mask, cnt, 8));
                if (o != NULL && _ZN12Unk_02002fc813func_020030b4Ev(_ZN12Unk_0208086013func_020805c4Ev(o)) != 0) {
                    _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(self, _ZN12Unk_0208086013func_020805c4Ev(o));
                }
            }
        }
    }
}

Unk_0208524c::Unk_0208524c()
{
    u8 *self = (u8 *)this;
    func_02086aec(self + 4);
    _ZN12Unk_0208721013func_02087220Ev(self + 0xc);
    _ZN12Unk_02086f8413func_02086f90Ev(self + 0x18);
    _ZN12Unk_02086ef013func_02086f10Ev(self + 0x20);
    _ZN12Unk_02086c0413func_02086eecEv(self + 0x24);
    _ZN12Unk_02086f1413func_02086f34Ev(self + 0x30);
    _ZN12Unk_02086b7c13func_02086c00Ev(self + 0x31);
}

Unk_0208524c::~Unk_0208524c()
{
    u8 *self = (u8 *)this;
    _ZN12Unk_02086b7c13func_02086bfcEv(self + 0x31);
    _ZN12Unk_02086f1413func_02086f30Ev(self + 0x30);
    _ZN12Unk_02086c0413func_02086ee8Ev(self + 0x24);
    _ZN12Unk_02086ef013func_02086f0cEv(self + 0x20);
    _ZN12Unk_02086f8413func_02086f8cEv(self + 0x18);
    _ZN12Unk_0208721013func_0208721cEv(self + 0xc);
    func_02086ae8(self + 4);
}

extern "C" void *func_020851e4(u8 *self)
{
    _ZN12Unk_02086f8413func_02086f84Ev(self + 0x18);
    MI_CpuFill8(self, 0, 4);
    _ZN12Unk_02086b7c13func_02086bf0Ev(self + 0x31);
    func_02086adc(self + 4);
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

extern "C" void func_020851a4(void *self, u32 bit)
{
    u32 *w = (u32 *)self;
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        w[idx] = *(volatile u32 *)&w[idx] | (1 << b);
    }
}

extern "C" void func_02085188(u32 *w, u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        w[idx] = ~(1 << b) & *(volatile u32 *)&w[idx];
    }
}

extern "C" void *func_02085184(u8 *p) { return p + 0x18; }

extern "C" void *func_02085180(u8 *p) { return p + 0x20; }

extern "C" void *func_0208517c(u8 *p) { return p + 0x30; }

extern "C" void *func_02085178(u8 *p) { return p + 0xc; }

extern "C" void *func_02085174(u8 *p) { return p + 0x24; }

extern "C" void *func_02085170(u8 *p) { return p + 0x31; }

extern "C" void *func_0208516c(u8 *p) { return p + 4; }

extern "C" void func_020850e8(void *self)
{
    void *r5 = func_0209750c();
    if (r5 != NULL) {
        if (_ZN12Unk_020940a013func_02094218Ev(_ZN12Unk_0209865c13func_0209888cEv(r5)) != 0) {
            if (_ZN12Unk_02097ff413func_02098044Ej(r5, 1) == 0) {
                if ((_ZN12Unk_02097ff413func_02098044Ej(r5, 0x21) == 0 && func_0203c338() != 0) ||
                    (_ZN12Unk_02097ff413func_02098044Ej(r5, 0x22) == 0 && func_0203c31c() != 0)) {
                    s32 a[2];
                    s32 b[2];
                    a[0] = 0;
                    a[1] = 0;
                    func_0209d498(a);
                    MI_CpuCopy8(a, b, 8);
                    if (func_0203f2e0(8, b, 0) == 0) {
                        func_020851a4(self, 8);
                    }
                }
            }
        }
    }
}

extern "C" void *func_020850e0()
{
    return &data_021cdcc4;
}

