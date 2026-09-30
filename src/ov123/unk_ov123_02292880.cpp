#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_0200402c(s32 a);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void func_0206fc44(void *o);
BOOL func_020b86c0(void *o, void *a, u32 b, u32 c, u32 d);
void func_020b87d0(void *o);
void func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_02087e70(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
}

struct Unk_ov123_022958c0 {
    u16 unk_00;
    u16 a : 9;
    u16 b : 5;
    u16 c : 2;
};

extern "C" {
extern Unk_ov123_022958c0 data_ov123_022958c0;
extern u16 data_ov123_02295840[];
extern u8 data_ov123_02295850[];
extern u8 data_ov123_022958a8[];
extern u8 data_ov123_02295830[];
extern void *data_ov123_0229598c[];
extern u8 data_ov123_02295364[];
extern u8 data_ov123_02295344[];
extern u8 data_ov123_02295354[];
extern u16 *data_ov123_0229592c[];
extern u32 data_ov123_022957cc;

struct Unk_ov123_02293010_Q {
    u8 a, b, c, d;
    Unk_ov123_02293010_Q() {}
};
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

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

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

// Vtable 0x022959c4
class Unk_ov123_022959c4 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov123_022959c4();

    void func_ov123_02291ff0(u32 m);
    void func_ov123_02292000(u32 m);
    BOOL func_ov123_02292010(u32 m);
    void func_ov123_02292238();
    void func_ov123_022922f0();
    void func_ov123_02292880();
    void func_ov123_022928c4();
    void func_ov123_022928fc();
    void func_ov123_02292a50(s32 x, s32 y);
    void func_ov123_02292a88(s32 x, s32 y);
    void func_ov123_02292b04(s32 x, s32 y);
    void func_ov123_02292b3c(s32 x, s32 y, u32 i);
    void func_ov123_02292ba4();
    void func_ov123_02292bb0();
    void func_ov123_02292be0();
    void func_ov123_02292c04(u32 v);
    void func_ov123_02292c34(u32 v);
    void func_ov123_02292c70();
    void func_ov123_02292cb4(u32 a, u32 b);
    void func_ov123_02292cfc();
    void func_ov123_02292d20();
    void func_ov123_02292df4();
    void func_ov123_02292e78();
    void func_ov123_02292ef4(u8 x, u8 y);
    void func_ov123_02292f88(s32 x, s32 y, u32 a, u32 idx);
    u32 func_ov123_02292ff8(u32 v, u32 s, u32 t);
    void func_ov123_02293010(u8 x, u8 y, u32 tgt);

    // callees elsewhere in the overlay
    void *func_ov123_0229275c();
    void func_ov123_022927e8();
    u8 func_ov123_02293298(u8 x, u8 y);
    void func_ov123_022932d4(u32 a);
    void func_ov123_02293344(u32 a);
    void func_ov123_0229336c(s32 x0, s32 y0, s32 x1, s32 y1, u32 a, u32 b);
    void func_ov123_022934d4(s32 x0, s32 y0, s32 x1, s32 y1, u32 a);
    void func_ov123_0229353c(s32 x0, s32 y0, s32 x1, s32 y1, u32 a, u32 b);
    void func_ov123_0229363c(s32 x, s32 y, u32 a, u32 b, u32 c);
    void func_ov123_02293784(u8 x, u8 y, u32 a);
    s32 func_ov123_02293830(s32 y);
    s32 func_ov123_02293838(s32 x);
    void func_ov123_022937e0();
    void func_ov123_02293b0c(u32 v);
    s32 func_ov123_02293190(s32 x, s32 y, u32 t);
    s32 func_ov123_022931e8(s32 x, s32 y, u32 t);
    s32 func_ov123_02293240(s32 x0, s32 x1, s32 y, u32 t);

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u8 unk_a0[2];
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ volatile u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab[2];
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1[7];
    /* 0xb8 */ u32 unk_b8[0x10];
    /* 0xf8 */ u32 unk_f8[3 * 0xe];
    /* 0x1a0 */ u32 unk_1a0[0x19];
    /* 0x204 */ u32 unk_204[0x200];
    /* 0xa04 */ u32 unk_a04[0x80];
    /* 0xc04 */ u32 unk_c04[0x80];
    /* 0xe04 */ u32 unk_e04[0x1000];
};

void Unk_ov123_022959c4::func_ov123_02292880() {
    func_ov123_02291ff0(0x100);
    u16 t = data_ov123_022958c0.b;
    t &= ~0x18;
    t |= 8;
    data_ov123_022958c0.b = t;
}

void Unk_ov123_022959c4::func_ov123_022928c4() {
    func_0200402c(0x866);
    func_ov123_02292000(0x100);
    unk_ad = unk_a8;
    unk_ae = unk_a9;
}

void Unk_ov123_022959c4::func_ov123_02292a50(s32 x, s32 y) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    func_02088730(1, data_ov123_02295850, a, b, -1, -1, 0);
}

void Unk_ov123_022959c4::func_ov123_02292a88(s32 x, s32 y) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    void *p = data_ov123_0229598c[unk_a4];
    if (func_ov123_02292010(0x800)) {
        p = data_ov123_02295830;
    }
    if (unk_a4 == 1) {
        a -= 2;
        b -= 2;
    }
    if (p != NULL) {
        func_02087e70(1, p, a, b, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_ov123_022959c4::func_ov123_02292b04(s32 x, s32 y) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    func_02088730(1, data_ov123_022958a8, a, b, -1, -1, 0);
}

void Unk_ov123_022959c4::func_ov123_02292b3c(s32 x, s32 y, u32 i) {
    s32 a = func_ov123_02293838(x);
    s32 b = func_ov123_02293830(y);
    u16 t = data_ov123_022958c0.b;
    t &= ~0x18;
    t |= data_ov123_02295840[i];
    data_ov123_022958c0.b = t;
    func_02088730(1, &data_ov123_022958c0, a, b, -1, -1, 0);
}

void Unk_ov123_022959c4::func_ov123_02292ba4() {
    func_0206fc44(&unk_b8);
}

void Unk_ov123_022959c4::func_ov123_02292bb0() {
    if (unk_a7 != 0) {
        unk_a7 = unk_a7 - 1;
        if (unk_a7 == 0) {
            func_ov123_02292be0();
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292be0() {
    func_ov123_02292cb4(unk_a6, 4);
    unk_a6 = 0x22;
    unk_a7 = 0;
}

void Unk_ov123_022959c4::func_ov123_02292c04(u32 v) {
    func_ov123_02292be0();
    unk_a6 = v;
    unk_a7 = 4;
    func_ov123_02292cb4(unk_a6, 5);
}

void Unk_ov123_022959c4::func_ov123_02292c34(u32 v) {
    if (unk_a4 != v) {
        if (unk_a4 != 0x22) {
            func_ov123_02292cb4(unk_a4, 4);
            func_0200402c(0xb);
        }
        unk_a4 = v;
        func_ov123_02292cb4(unk_a4, 5);
    }
}

void Unk_ov123_022959c4::func_ov123_02292c70() {
    if (func_ov123_02292010(0x10)) {
        if (func_020b86c0(&unk_f8[0x1c], &unk_204, 6, 0x800, 0)) {
            func_ov123_02291ff0(0x10);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292cb4(u32 a, u32 b) {
    if (a <= 0xc) {
        u32 t = data_ov123_02295364[a];
        func_0206ee80(&unk_204, data_ov123_02295344[a], t, data_ov123_02295354[a], t + 2, b);
        func_ov123_02292000(0x10);
    }
}

void Unk_ov123_022959c4::func_ov123_02292cfc() {
    func_ov123_02293b0c(func_ov123_02293298(unk_af, unk_b0));
}

u32 Unk_ov123_022959c4::func_ov123_02292ff8(u32 v, u32 s, u32 t) {
    return (v & ~(s * 15)) | (s * t);
}

void Unk_ov123_022959c4::func_ov123_022928fc() {
    if (unk_a4 == 8) {
        func_ov123_02292a50(unk_a8, unk_a9);
        func_ov123_02292a50(unk_ad, unk_ae);
        func_ov123_0229353c(unk_a8, unk_a9, unk_ad, unk_ae, 1, 3);
    } else {
        u8 xlo = unk_ad;
        u8 xa = unk_a8;
        u8 xhi;
        u32 cx0, cx1;
        if (xa >= xlo) {
            cx1 = 2;
            cx0 = 0;
            xhi = xa;
        } else {
            cx1 = 0;
            cx0 = 2;
            xhi = xlo;
            xlo = xa;
        }
        u8 ylo = unk_ae;
        u8 ya = unk_a9;
        u8 yhi;
        if (ya >= ylo) {
            cx0 = cx0 + 1;
            yhi = ya;
        } else {
            cx1 = cx1 + 1;
            yhi = ylo;
            ylo = ya;
        }
        func_ov123_02292b3c(xa, ya, cx0);
        func_ov123_02292b3c(unk_ad, unk_ae, cx1);
        u8 i = xlo;
        for (; i <= xhi; i = i + 2) {
            func_ov123_02292b04(i, ylo);
        }
        if (ylo != yhi) {
            i = xlo;
            if (((yhi - ylo) & 1) != 0) {
                i = xlo + 1;
            }
            for (; i <= xhi; i = i + 2) {
                func_ov123_02292b04(i, yhi);
            }
        }
        u32 t = ylo + 2;
        u8 j = t;
        for (; j < yhi; j = j + 2) {
            func_ov123_02292b04(xlo, j);
        }
        if (xlo != xhi) {
            j = t;
            if (((xhi - xlo) & 1) != 0) {
                j = j - 1;
            }
            for (; j < yhi; j = j + 2) {
                func_ov123_02292b04(xhi, j);
            }
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292d20() {
    if (func_ov123_02292010(0x100)) {
        if (unk_a4 >= 6 && unk_a4 <= 8) {
            u8 xa, yhi, xb, yb, xlo, xhi, ylo, ya;
            func_ov123_022927e8();
            xa = unk_a8;
            xb = unk_ad;
            if (xb >= xa) {
                xlo = xa;
                xhi = xb;
            } else {
                xhi = xa;
                xlo = xb;
            }
            ya = unk_a9;
            yb = unk_ae;
            if (yb >= ya) {
                ylo = ya;
                yhi = yb;
            } else {
                yhi = ya;
                ylo = yb;
            }
            switch (unk_a4) {
            case 8:
                func_ov123_0229353c(xb, yb, xa, ya, unk_a2, 0);
                break;
            case 6:
                func_ov123_022934d4(xlo, ylo, xhi, yhi, unk_a2);
                break;
            case 7:
                func_ov123_0229336c(xlo, ylo, xhi, yhi, unk_a2, 0);
                break;
            }
            func_ov123_02292000(0x40);
            func_0200402c(0x867);
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292df4() {
    unk_a8 = unk_af;
    unk_a9 = unk_b0;
    if (unk_a4 >= 6 && unk_a4 <= 8) {
        func_ov123_022928c4();
        func_ov002_02200a58(6);
    } else {
        func_ov123_022927e8();
        func_ov123_02292ef4(unk_a8, unk_a9);
        if (unk_a4 <= 2) {
            func_0200402c(0x85f);
            func_0200402c(0x861);
            func_ov002_02200a58(5);
        }
        func_ov123_02292000(0x40);
    }
}

void Unk_ov123_022959c4::func_ov123_02292e78() {
    func_ov123_022937e0();
    if (unk_a4 >= 6 && unk_a4 <= 8) {
        func_ov123_022928c4();
        func_ov123_02292238();
    } else {
        func_ov123_022927e8();
        func_ov123_02292ef4(unk_a8, unk_a9);
        if (unk_a4 <= 2) {
            func_0200402c(0x85f);
            func_0200402c(0x861);
            func_ov123_02292000(0x1000);
        }
        func_ov123_02292238();
        func_ov123_02292000(0x40);
    }
}

void Unk_ov123_022959c4::func_ov123_02292ef4(u8 x, u8 y) {
    u32 st = unk_a4;
    if (st <= 2) {
        func_ov123_0229363c(x, y, unk_a2, st, 1);
    } else if (st >= 3 && st <= 4) {
        func_ov123_02292f88(x, y, unk_a2, st - 3);
        func_0200402c(0x867);
    } else {
        if (st >= 9 && st <= 0xb) {
            func_0200402c(0x867);
        }
        switch (unk_a4) {
        case 9:
            func_ov123_02293010(x, y, unk_a2);
            break;
        case 0xb:
            func_ov123_02293344(unk_a2);
            break;
        case 0xa:
            func_ov123_022932d4(unk_a2);
            break;
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02292f88(s32 x, s32 y, u32 a, u32 idx) {
    s32 yy;
    s32 xx;
    u16 *p;
    s32 j;
    u32 mask;
    s32 i;
    s32 xs;
    yy = y - 8;
    p = data_ov123_0229592c[idx];
    j = 0;
    xs = x - 7;
    for (; j < 16; p++, yy++, j++) {
        mask = 0x8000;
        xx = xs;
        for (i = 0; i < 16; xx++, i++) {
            if ((mask & *p) != 0) {
                func_ov123_02293784(xx, yy, a);
            }
            mask = (mask << 15) >> 16;
        }
    }
}

void Unk_ov123_022959c4::func_ov123_02293010(u8 x, u8 y, u32 tgt) {
    u32 cur;
    s32 head;
    s32 i;
    s32 ym;
    s32 b;
    u32 m;
    s32 left;
    func_ov123_0229275c();
    cur = func_ov123_02293298(x, y);
    if (cur != tgt) {
        static Unk_ov123_02293010_Q q[64];
        s32 tail;
        head = 0;
        tail = 1;
        q[0].a = x;
        q[0].b = x;
        q[0].c = y;
        m = data_ov123_022957cc;
        do {
            s32 a = q[head].a;
            b = q[head].b;
            s32 yy = q[head].c;
            head = (head + 1) & m;
            if (tgt != func_ov123_02293298(a, yy)) {
                left = func_ov123_022931e8(a, yy, cur);
                s32 right = func_ov123_02293190(b, yy, cur);
                for (i = left; i <= right; i++) {
                    func_ov123_02293784(i, yy, tgt);
                }
                if (yy > 0) {
                    s32 xs = left;
                    ym = yy - 1;
                    do {
                        s32 t = func_ov123_02293240(xs, right, ym, cur);
                        if (t < 0) {
                            xs = 0xff;
                        } else {
                            s32 r = func_ov123_02293190(t, ym, cur);
                            q[tail].a = t;
                            q[tail].b = r;
                            q[tail].c = ym;
                            tail = (tail + 1) & m;
                            xs = r + 2;
                        }
                    } while (xs <= right);
                }
                if (yy < 0x1f) {
                    s32 y1 = yy + 1;
                    do {
                        s32 t = func_ov123_02293240(left, right, y1, cur);
                        if (t < 0) {
                            left = 0xff;
                        } else {
                            s32 r = func_ov123_02293190(t, y1, cur);
                            q[tail].a = t;
                            q[tail].b = r;
                            q[tail].c = y1;
                            tail = (tail + 1) & m;
                            left = r + 2;
                        }
                    } while (left <= right);
                }
            }
        } while (head != tail);
    }
}
