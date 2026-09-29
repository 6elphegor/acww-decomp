#pragma opt_loop_invariants off
#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov004_0224f284;

extern "C" {
extern void *data_021c47c4;
extern u8 data_021ed104[];
extern u8 data_021ed2d4[];
extern u8 data_021ed2c0[];
extern u8 data_ov004_0224502c[];
extern u8 data_ov004_0224482c[];
extern u8 data_ov004_02244c2c[];
extern u8 data_ov004_02258910;
extern void *data_ov004_02258914;
extern u32 data_021c6210;
extern u32 OVERLAY_93_ID[];

BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_0204b288(u16 *p);
BOOL func_0204b300(u16 *p);
BOOL func_0204bae0(u16 *p);
s32 func_0204bb18(u16 *p);
s32 func_0204b248(s32 a, s32 b);
u32 func_020b50e8();
BOOL func_020b5254();
BOOL func_020b5268(u32 id);
s32 func_020b5284();
void func_02061478(u16 *out, u16 *in);
u16 *func_020ad8e8(void *tbl, s32 idx, u16 *out);
u16 *func_020ae844(void *tbl, s32 idx, u16 *out);
s32 func_020ae82c(void *tbl, u16 *p);
s32 func_020ad8d0(void *tbl, u16 *p);
s32 func_020acf90(void *tbl, u16 *p);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_0204eb30(void *g, u16 *v, s32 x, s32 y, u32 z);
void *func_ov004_02235718();
void *func_ov004_022355d8(void *self, s32 x, s32 y, s32 z);
s32 func_ov004_022087a4(void *o);
s32 func_ov093_02291dd8(void *p);
void func_ov093_02291de4(void *p);
void func_ov093_02291e6c(void *p, s32 a);
void func_ov093_02291f5c(void *p);
void func_ov093_02292174(void *p);
void func_020e85fc(u32 heap, void *p);
void func_0204eee4(u32 id);

u8 *func_ov004_0223f278();
s32 func_ov004_0223f210(u16 *p);
u16 *func_ov004_0223ed40(s32 x, s32 y);
BOOL func_ov004_0223eeb8(u16 *p);
}

class Unk_ov004_0224f284 : public Unk_020d8c7c {
public:
    typedef BOOL (Unk_ov004_0224f284::*Fn)();

    Unk_ov004_0224f284();
    virtual ~Unk_ov004_0224f284() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    BOOL func_ov004_0223ea98();
    BOOL func_ov004_0223e9bc();
    BOOL func_ov004_0223e9c8();
    BOOL func_ov004_0223ef44();
    void func_ov004_0223eb8c();
    void func_ov004_0223ef60();
    BOOL func_ov004_0223f018(u16 *item, s32 code);

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
};

static inline BOOL Unk_ov004_0223eb8c_Chk(u16 *p) {
    u16 c = 0xfff1;
    if (func_0204b2d4(p)) {
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(&c)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

struct Unk_ov004_0223ed40_Pt {
    u16 v;
    Unk_ov004_0223ed40_Pt(u16 x) { v = x; }
    ~Unk_ov004_0223ed40_Pt() {}
};

static inline BOOL Unk_ov004_0223ed40_Chk(u16 *p, u16 *c, u16 k) {
    if (func_0204b2d4(p)) {
        *c = k;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(c)) return TRUE;
        return FALSE;
    }
    if (*p == k) return TRUE;
    return FALSE;
}

BOOL Unk_ov004_0224f284::vfunc_00() {
    unk_50 = func_020b5284();
    if (func_020b5254()) {
        unk_54 = 0;
    } else if (func_020b50e8() == 0xa) {
        unk_54 = 1;
    } else if (func_020b50e8() == 0xf) {
        unk_54 = 2;
    } else {
        unk_54 = 3;
    }
    static Fn tbl[4] = {&Unk_ov004_0224f284::func_ov004_0223ef44, &Unk_ov004_0224f284::func_ov004_0223ea98,
                        &Unk_ov004_0224f284::func_ov004_0223e9c8, &Unk_ov004_0224f284::func_ov004_0223e9bc};
    (this->*tbl[unk_54])();
    return TRUE;
}

BOOL Unk_ov004_0224f284::vfunc_0c() { return TRUE; }
BOOL Unk_ov004_0224f284::vfunc_24() { return TRUE; }
BOOL Unk_ov004_0224f284::vfunc_18() { return TRUE; }

extern "C" u16 *func_ov004_0223ea90(s32 x, s32 y) { return func_ov004_0223ed40(x, y); }

BOOL Unk_ov004_0224f284::func_ov004_0223ea98() {
    func_ov004_0223eb8c();
    void *g = data_021c47c4;
    u16 v;
    v = 0xfff1;
    v = 0x3e04;
    func_0204eb30(g, &v, 6, 10, 0);
    v = 0x3e08;
    func_0204eb30(g, &v, 7, 10, 0);
    v = 0x3e0c;
    func_0204eb30(g, &v, 8, 10, 0);
    v = 0x3e10;
    func_0204eb30(g, &v, 9, 10, 0);
    v = 0x3e14;
    func_0204eb30(g, &v, 6, 11, 0);
    v = 0x3e18;
    func_0204eb30(g, &v, 7, 11, 0);
    v = 0x3e1c;
    func_0204eb30(g, &v, 8, 11, 0);
    v = 0x3e20;
    func_0204eb30(g, &v, 9, 11, 0);
    return TRUE;
}

void Unk_ov004_0224f284::func_ov004_0223eb8c() {
    u32 i;
    s32 f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u16 v[3];
    for (i = 0; i < 6; i++) {
        BOOL a, b;
        v[0] = 0xfff1;
        u16 *r = func_020ad8e8(data_021ed2d4, i, &v[0]);
        if (func_0204b2d4(r)) {
            v[1] = 0xfff1;
            s32 x = func_0204b25c(r);
            a = (x == func_0204b25c(&v[1])) ? 1 : f1;
        } else {
            a = (*r == 0xfff1) ? 1 : f2;
        }
        if (!a) {
            if (func_0204b2d4(&v[0])) {
                v[2] = 0xfff1;
                s32 x = func_0204b25c(&v[0]);
                b = (x == func_0204b25c(&v[2])) ? 1 : f3;
            } else {
                b = (v[0] == 0xfff1) ? 1 : f4;
            }
            if (!b) {
                func_ov004_0223f018(r, func_ov004_0223f210(&v[0]));
            }
        }
    }
}

extern "C" BOOL func_ov004_0223ec44(s32 *px, s32 *py, s32 code) {
    u8 *tbl = func_ov004_0223f278();
    u16 c = 0xfff1;
    func_020ae844(data_021ed104, code, &c);
    s32 key = func_ov004_0223f210(&c);
    s32 n = 0;
    s32 i = n;
    goto test0;
loop0:
    {
        u16 c2 = 0xfff1;
        func_020ae844(data_021ed104, i, &c2);
        if (code == i) goto done0;
        if (key == func_ov004_0223f210(&c2)) n++;
        i++;
    }
test0:
    if ((u32)i < 0x25) goto loop0;
done0:
    {
        s32 cnt = 0;
        s32 y = cnt;
        s32 x0 = 0;
        goto testy;
    loopy:
        {
            s32 x = x0;
            u32 *row = (u32 *)(tbl + y * 0x40);
            goto testx;
        loopx:
            if (key == row[x]) {
                if (cnt == n) {
                    *px = x;
                    *py = y;
                    return TRUE;
                }
                cnt++;
            }
            x++;
        testx:
            if (x < 16) goto loopx;
            y++;
        }
    testy:
        if (y < 16) goto loopy;
    }
    *py = -1;
    *px = *py;
    return FALSE;
}

extern "C" s32 func_ov004_0223ecf4(s32 x, s32 y) {
    u8 *tbl = func_ov004_0223f278();
    s32 n = 0;
    s32 j = n;
    s32 i0 = 0;
    goto testj;
loopj:
    {
        s32 i = i0;
        u32 *row = (u32 *)(tbl + j * 0x40);
        goto testi;
    loopi:
        if (row[i] == 0x22) {
            if (i == x && j == y) return n;
            n++;
        }
        i++;
    testi:
        if (i < 16) goto loopi;
        j++;
    }
testj:
    if (j < 16) goto loopj;
    return -1;
}

extern "C" u16 *func_ov004_0223ed40(s32 x, s32 y) {
    static Unk_ov004_0223ed40_Pt dflt(0xfff1);
    u16 cv[3];
    void *g = data_021c47c4;
    if (g) {
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *r4 = func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (r4) {
            if (!Unk_ov004_0223ed40_Chk(r4, &cv[1], 0xfff1)) {
                if (func_0204b288(r4)) {
                    void *o = func_ov004_022355d8(func_ov004_02235718(), x, y, 0);
                    if (!o) return &dflt.v;
                    static Unk_ov004_0223ed40_Pt v2(0xfff1);
                    v2.v = func_0204b248(func_ov004_022087a4(o), 0);
                    if (func_ov004_0223eeb8(&v2.v)) return &v2.v;
                } else if (func_0204b300(r4)) {
                    if (!Unk_ov004_0223ed40_Chk(r4, &cv[2], 0x1547)) {
                        if (func_ov004_0223eeb8(r4)) return r4;
                    }
                }
            }
        }
    }
    return &dflt.v;
}

extern "C" BOOL func_ov004_0223eeb8(u16 *p) {
    s32 t = func_020b50e8();
    if (func_020b5268(t)) {
        s32 r = func_020ae82c(data_021ed104, p);
        BOOL k = FALSE;
        if (r != -1) k = TRUE;
        return k;
    }
    if (t == 10) {
        BOOL k = TRUE;
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x3e04 && v <= 0x3e23) r = TRUE;
        if (!r) {
            if (func_020ad8d0(data_021ed2d4, p) == -1) k = FALSE;
        }
        return k;
    }
    s32 r = func_020acf90(data_021ed2c0, p);
    BOOL k = FALSE;
    if (r != -1) k = TRUE;
    return k;
}

BOOL Unk_ov004_0224f284::func_ov004_0223ef44() {
    if (func_020b50e8() != 0x1f) func_ov004_0223ef60();
    return TRUE;
}

void Unk_ov004_0224f284::func_ov004_0223ef60() {
    u32 i;
    s32 f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u16 v[3];
    for (i = 0; i < 0x25; i++) {
        BOOL a, b;
        v[0] = 0xfff1;
        u16 *r = func_020ae844(data_021ed104, i, &v[0]);
        if (func_0204b2d4(r)) {
            v[1] = 0xfff1;
            s32 x = func_0204b25c(r);
            a = (x == func_0204b25c(&v[1])) ? 1 : f1;
        } else {
            a = (*r == 0xfff1) ? 1 : f2;
        }
        if (!a) {
            if (func_0204b2d4(&v[0])) {
                v[2] = 0xfff1;
                s32 x = func_0204b25c(&v[0]);
                b = (x == func_0204b25c(&v[2])) ? 1 : f3;
            } else {
                b = (v[0] == 0xfff1) ? 1 : f4;
            }
            if (!b) {
                func_ov004_0223f018(r, func_ov004_0223f210(&v[0]));
            }
        }
    }
}

BOOL Unk_ov004_0224f284::func_ov004_0223f018(u16 *item, s32 code) {
    u8 *tbl = func_ov004_0223f278();
    void *g = data_021c47c4;
    s32 y;
    s32 x;
    s32 hx;
    s32 hy;
    u16 *t;
    u32 *row;
    if (g) {
        s32 x0 = 0;
        for (y = 0; y < 16; y++) {
            x = x0;
            row = (u32 *)(tbl + y * 0x40);
            if (x < 16) {
                goto testx;
            loopx:
                hx = x >> 4;
                hy = y >> 4;
                t = func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (t) {
                    BOOL r;
                    s32 f1 = 0, f2 = 0;
                    if (func_0204b2d4(t)) {
                        u16 c = 0xfff1;
                        s32 a = func_0204b25c(t);
                        r = (a == func_0204b25c(&c)) ? 1 : f1;
                    } else {
                        r = (*t == 0xfff1) ? 1 : f2;
                    }
                    if (r) {
                        if (code == row[x]) {
                            if (func_0204eb30(g, item, x, y, 0)) return TRUE;
                        }
                    }
                }
                x++;
            testx:
                if (x < 16) goto loopx;
            }
        }
    }
    return FALSE;
}

static inline BOOL Unk_ov004_0223f210_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" s32 func_ov004_0223f210(u16 *p) {
    u16 c;
    func_02061478(&c, p);
    if (func_0204b2d4(&c)) return 0x19;
    if (func_0204bae0(&c)) goto e;
    if (!Unk_ov004_0223f210_R(&c, 0x156c, 0x156c)) goto rest;
e:
    return 0x42;
rest:
    if (c >= 0x13a8 && c <= 0x13c7) return 9;
    return func_0204bb18(&c);
}

extern "C" u8 *func_ov004_0223f278() {
    if (func_020b5254()) {
        return data_ov004_0224502c + (func_020b5284() << 10);
    }
    if (func_020b50e8() == 10) return data_ov004_0224482c;
    return data_ov004_02244c2c;
}

extern "C" Unk_ov004_0224f284 *func_ov004_0223f2b0() { return new Unk_ov004_0224f284; }

extern "C" s32 func_ov004_0223f2c8() {
    if (data_ov004_02258910 & 1) return func_ov093_02291dd8(data_ov004_02258914);
    return 0;
}

extern "C" void func_ov004_0223f2f4() {
    if (data_ov004_02258910 & 1) func_ov093_02291de4(data_ov004_02258914);
}

extern "C" void func_ov004_0223f31c(s32 a) {
    if (data_ov004_02258910 & 1) {
        if (a <= 0) a = 0x1400;
        func_ov093_02291e6c(data_ov004_02258914, a);
    }
}

extern "C" void func_ov004_0223f350() {
    if (data_ov004_02258910 & 1) {
        func_ov093_02291f5c(data_ov004_02258914);
        u32 heap = data_021c6210;
        func_ov093_02292174(data_ov004_02258914);
        func_020e85fc(heap, data_ov004_02258914);
        data_ov004_02258914 = 0;
        func_0204eee4((u32)OVERLAY_93_ID);
    }
    data_ov004_02258910 = 0;
}

Unk_ov004_0224f284::Unk_ov004_0224f284() {}
