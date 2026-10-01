#include "types.h"

struct NibblePair {
    u8 lo : 4;
    u8 hi : 4;
};

struct Info {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    s8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
};

extern NibblePair data_021ee330[];
extern u8 data_021ee290;
extern u8 data_021ee352[];

struct Flags1 {
    u8 mode : 2;
    u8 idx : 6;
};

struct Flags2 {
    u16 a : 6;
    u16 b : 6;
    u16 c : 4;
};

class Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual u16 *vfunc_64();
    virtual void vfunc_68();
    virtual BOOL vfunc_6c(u32 a);
};

struct Grid {
    u8 *data;
    u32 w;
    u32 h;
};

extern Info data_020d0a7c[];
extern u8 data_020e416c;
extern u32 data_021ee2b4;
extern u32 data_021ee2b8;
extern u32 data_021ee2c0;
extern void *data_021c47c4;
extern u8 data_021ef360;
extern u8 data_021e58a6;
extern void *data_020cbb18;

extern u8 data_021dfd8c;

struct Marker1 {
    u16 v;
    Marker1(u16 x) : v(x) {}
    ~Marker1();
};
typedef Marker1 Marker2;

static inline u8 *GetCell(Grid *g, s32 x, s32 y) {
    if (x < g->w && y < g->h && g->data) {
        return g->data + (x + y * g->w) * 0x28;
    }
    return NULL;
}

static inline BOOL IsEnabled() {
    if (data_020e416c == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
BOOL func_020b19ec(u8 *cell, u32 v);
u32 func_020b2c14(u32 v);
u32 func_0204b1cc(u32 v);
BOOL func_020b1d3c(u32 a, u32 b);
Obj *func_ov003_02218b40(u32 a);
Obj *func_ov003_02218c60(u32 a);
BOOL func_ov009_0225d650(void);
u16 *func_ov009_0225b98c(Obj *o);
void func_020728d4(void *o);
void func_020728a4(void *o, void *buf, u32 n);
void func_02072824(void *o, u32 a, u32 b);
BOOL func_02072e44(void *o);
BOOL func_0207bf60(void *a, u32 b);
u32 func_0207e278(void);
BOOL func_020b5184(void);
BOOL func_020b0f0c(void);
void func_020b4934(void);
s32 func_020b4ff8(void *a);
s32 func_020b4ff0(void *a);
u16 *func_0204ebd8(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
u32 func_020b13e0(u32 v);
u8 func_020b1690(Info *i);
void func_020b16b8(Info *i);
u32 func_020b1674(Info *i, u32 b, u32 c);
void func_020b16bc(Info *dst, Info *src);
u32 func_020b1428(s32 v);
u32 func_020b14f0(void);
Grid *func_0204da0c(void);
BOOL func_020374f4(u8 *cell, u32 *a, u32 *b, Marker1 *m, Marker1 *c, u32 d);
BOOL func_0204d9b4(Grid *g, u32 x, u32 y, u32 a, u32 b, Marker2 *m);
void func_02084ffc(void);
u32 func_020b1aa8(u8 *cell);
u32 func_020b1a18(u8 *cell, u32 a, u32 b);
u32 func_02063b8c(void);
u32 func_020374b0(u8 *cell, u32 mask);
u16 *func_02037558(u8 *cell, u32 x, u32 y, u32 z);
BOOL func_02037590(u8 *cell, u16 *t, u32 x, u32 y, u32 z);
void func_0208627c(void *a);
void func_02045ca8(u32 a);

void func_020b11fc(void) {
    u8 *p;
    for (p = (u8 *)data_021ee330; p < data_021ee352; p++) {
        *p &= ~0xf;
        *p &= ~0xf0;
    }
    data_021ee290 = 0;
}

void func_020b1234(u8 *p, s32 bit) {
    data_021ee330[*p].lo = data_021ee330[*p].lo & ~(1 << bit);
}

u16 func_020b16b4(Info *i) { return i->unk_00; }
u8 func_020b1690(Info *i) { return i->unk_09; }
u8 func_020b1694(Info *i) { return i->unk_08; }
u8 func_020b1698(Info *i) { return i->unk_07; }
u8 func_020b169c(Info *i) { return i->unk_06; }
u8 func_020b16a0(Info *i) { return i->unk_05; }
s8 func_020b16a4(Info *i) { return i->unk_04; }
u8 func_020b16ac(Info *i) { return i->unk_03; }
u8 func_020b16b0(Info *i) { return i->unk_02; }
void func_020b16b8(Info *i) {}
void func_020b16bc(Info *dst, Info *src) {
    dst->unk_00 = src->unk_00;
    dst->unk_02 = src->unk_02;
    dst->unk_03 = src->unk_03;
    dst->unk_04 = src->unk_04;
    dst->unk_05 = src->unk_05;
    dst->unk_06 = src->unk_06;
    dst->unk_07 = src->unk_07;
    dst->unk_08 = src->unk_08;
    dst->unk_09 = src->unk_09;
}
u32 func_020b1664(u32 a, u32 b, u32 c) { return (a << 16) | (((c & 0xff) << 8) | (b & 0xff)); }
u32 func_020b1674(Info *i, u32 b, u32 c) { return func_020b1664(func_020b16b4(i), b, c); }

u32 func_020b1428(s32 v) {
    if (func_0207bf60(&data_021dfd8c, v)) {
        if (func_0207e278() == 2) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

u32 func_020b13e0(u32 v) {
    volatile u16 x = v;
    BOOL in = FALSE;
    u16 y = x;
    if (y >= 0x5001 && y <= 0x5008) {
        in = TRUE;
    }
    if (in) {
        s32 i;
        if (y >= 0x5001 && y <= 0x5008) {
            i = y - 0x5001;
        } else {
            i = -1;
        }
        return func_020b1428(i);
    }
    return 0;
}

BOOL func_020b1388(u16 *p) {
    Flags2 *f = (Flags2 *)p;
    u32 a = func_0204b1cc(f->a);
    u8 b = f->b;
    if (IsEnabled()) {
        Obj *o = func_ov003_02218b40(a);
        if (o) {
            return o->vfunc_6c(b);
        }
    }
    return func_020b1d3c(a, b);
}

BOOL func_020b1454(Obj *o, s32 v) {
    if (IsEnabled()) {
        if (o->vfunc_6c(v)) {
            if (func_02072e44(data_020cbb18)) {
                u16 f;
                void *d;
                f = (f & ~0x3f) | (func_ov009_0225b98c(o)[0] & 0x3f);
                f = (f & ~0xfc0) | ((v & 0x3f) << 6);
                f &= ~0xf000;
                d = data_020cbb18;
                func_020728d4(d);
                func_020728a4(d, &f, 2);
                func_02072824(d, 0x22, 4);
            }
            return TRUE;
        }
    }
    return FALSE;
}

u32 func_020b15d4(void) {
    data_021ee2b4 = func_020b14f0();
}

BOOL func_020b15ec(void) {
    if (!func_020b5184()) {
        return TRUE;
    }
    if (data_021ee2b4 != 0) {
        return TRUE;
    }
    return FALSE;
}

u32 func_020b1614(u32 a) {
    Obj *o;
    if (!IsEnabled()) {
        return 1;
    }
    o = func_ov003_02218c60(a);
    if (o) {
        if (func_ov009_0225d650() == 1) {
            u16 *i = o->vfunc_64();
            if (i) {
                return i[2];
            }
            return 1;
        }
        return 1;
    }
    return 1;
}

void func_020b1260(Flags1 *p, s32 bit) {
    u32 mode = p->mode;
    u32 idx = p->idx;
    switch (mode) {
    case 1:
    case 2:
    case 3:
        data_021ee330[idx].hi = mode;
        break;
    default: {
        NibblePair *e = &data_021ee330[idx];
        u8 lo = e->lo;
        u32 before = func_020b2c14(lo);
        u32 after;
        void *d;
        Flags1 pk;
        Info info;
        Info *src;
        lo = lo | (1 << bit);
        after = func_020b2c14(lo);
        if (idx < 0x22) {
            src = &data_020d0a7c[idx];
        } else {
            src = &data_020d0a7c[0];
        }
        func_020b16bc(&info, src);
        if (after > func_020b1690(&info)) {
            e->hi = 2;
        } else {
            idx = func_0204b1cc(idx);
            if (func_020b13e0(idx) && before == 0) {
                e->hi = 3;
            } else {
                e->lo = lo;
                e->hi = 1;
                func_020b13e0(idx);
            }
        }
        pk = *p;
        pk.mode = e->hi;
        d = data_020cbb18;
        func_020728d4(d);
        func_020728a4(d, &pk, 1);
        func_02072824(d, 0x23, bit);
        func_020b16b8(&info);
    }
    }
}

u32 func_020b14f0(void) {
    s32 x, y;
    u16 *p;
    if (!func_020b5184() || func_020b0f0c()) {
        return 0;
    }
    if (IsEnabled()) {
        func_020b4934();
        x = func_020b4ff8(&data_021ef360);
        func_020b4934();
        y = func_020b4ff0(&data_021ef360);
        if (data_021c47c4) {
            s32 xh = x >> 4;
            s32 yh = y >> 4;
            p = func_0204ebd8(data_021c47c4, xh, yh, x - (xh << 4), y - (yh << 4), 0);
            if (p) {
                BOOL in = FALSE;
                u16 v = *p;
                if (v >= 0x5000 && v <= 0x5021) {
                    in = TRUE;
                }
                if (in) {
                    u32 i;
                    Info *src;
                    Info info;
                    u32 result;
                    if (v >= 0x5000 && v <= 0x5021) {
                        i = v & 0xfff;
                    } else {
                        i = -1;
                    }
                    if (i < 0x22) {
                        src = &data_020d0a7c[i];
                    } else {
                        src = &data_020d0a7c[0];
                    }
                    func_020b16bc(&info, src);
                    result = func_020b1674(&info, x, y);
                    func_020b16b8(&info);
                    return result;
                }
            }
        }
    }
    return 0;
}

BOOL func_020b16e4(void) {
    Grid *g = func_0204da0c();
    s32 y, x;
    if (g == NULL) {
        return FALSE;
    }
    static Marker1 m1(0x5020);
    for (y = 1; y <= 4; y++) {
        for (x = 1; x <= 4; x++) {
            u8 *cell = GetCell(g, x, y);
            if (cell) {
                u32 a, b;
                if (func_020374f4(cell, &a, &b, &m1, &m1, 0)) {
                    static Marker2 m2(0x500a);
                    if (func_0204d9b4(g, x, y, a, b, &m2)) {
                        func_02084ffc();
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL func_020b17e0(s32 *pos, BOOL flag) {
    Grid *g = func_0204da0c();
    s32 x, y, i, j;
    if (g == NULL) {
        return FALSE;
    }
    x = pos[0] >> 17;
    y = pos[2] >> 17;
    if (flag) {
        for (i = x - 1; i >= 1; i--) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    func_0208627c(&data_021e58a6);
                    func_02045ca8(0x44);
                    return TRUE;
                }
            }
        }
    } else {
        for (i = x + 1; i <= 4; i++) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    func_0208627c(&data_021e58a6);
                    func_02045ca8(0x44);
                    return TRUE;
                }
            }
        }
    }
    for (i = 1; i <= 4; i++) {
        if (i != y) {
            if (func_020b19ec(GetCell(g, x, i), 0x5020)) {
                func_0208627c(&data_021e58a6);
                func_02045ca8(0x44);
                return TRUE;
            }
        }
    }
    if (flag) {
        for (i = x + 1; i <= 4; i++) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    func_0208627c(&data_021e58a6);
                    func_02045ca8(0x44);
                    return TRUE;
                }
            }
        }
    } else {
        for (i = x - 1; i >= 1; i--) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    func_0208627c(&data_021e58a6);
                    func_02045ca8(0x44);
                    return TRUE;
                }
            }
        }
    }
    if (func_020b19ec(GetCell(g, x, y), 0x5020)) {
        func_0208627c(&data_021e58a6);
        func_02045ca8(0x44);
        return TRUE;
    }
    return FALSE;
}

u32 func_020b1aa8(u8 *cell) {
    u32 count = 0;
    u32 x, y;
    if (cell) {
        if (func_020374b0(cell, 0xe0) || func_020374b0(cell, 0x10)) {
            return 0;
        }
        for (y = 0; y < 16; y++) {
            for (x = 0; x < 16; x++) {
                u16 *p = func_02037558(cell, x, y, 0);
                if (p && *p == 0x500a) {
                    count++;
                }
            }
        }
    }
    return count;
}

BOOL func_020b19ec(u8 *cell, u32 v) {
    if (func_020b1aa8(cell)) {
        return func_020b1a18(cell, func_02063b8c(), v);
    }
    return 0;
}

u32 func_020b1a18(u8 *cell, u32 target, u32 v) {
    u32 count = 0;
    u32 y, x;
    if (cell) {
        if (func_020374b0(cell, 0xe0) || func_020374b0(cell, 0x10)) {
            return 0;
        }
        for (y = 0; y < 16; y++) {
            for (x = 0; x < 16; x++) {
                u16 *p = func_02037558(cell, x, y, 0);
                if (p && *p == 0x500a) {
                    if (target == count) {
                        u16 t = v;
                        if (func_02037590(cell, &t, x, y, 0)) {
                            return 1;
                        }
                    }
                    count++;
                }
            }
        }
    }
    return 0;
}
}
