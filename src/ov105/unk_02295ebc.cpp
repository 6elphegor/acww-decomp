#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02065e70(void *p, void *q);
s32 func_02065578(void *p);
void func_020b87d0(void *p);
s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
s32 func_020991fc();
BOOL func_0206ef0c();
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
struct Unk_ov105_02298544_E {
    u32 v[2];
};
extern Unk_ov105_02298544_E data_ov105_02298544[];

void func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006c0(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
void func_ov002_02202718(void *p);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
BOOL func_ov002_02203110(void *p, s32 a);
BOOL func_ov002_0220126c(s32 a);
BOOL func_ov002_0220125c(s32 a);
void func_ov094_022935dc(void *p);
void func_ov094_022943f8(void *p);
BOOL func_ov094_02293d80(void *p, s32 a);
BOOL func_ov094_022941ec(void *p, s32 a);
void func_ov094_02293318(void *p, s32 a, s32 b);
void func_ov094_022941f8(void *p, s32 a);
s32 func_ov094_02293d9c(void *p, s32 a);
s32 func_ov094_02293df8(void *p, s32 a);
s32 func_ov094_0229433c(void *p, s32 a);
void func_ov094_02294318(void *p, s32 a, void *c);
s32 func_ov094_02294610(void *p);
s32 func_ov094_022945dc(void *p, s32 a, s32 b);
s32 func_ov094_02292380();
s32 func_ov094_0229238c();
}

class Unk_ov002_022044e4;

static inline BOOL Unk_ov105_0229677c_Both()
{
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x220c sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    BOOL func_ov002_022028f0();
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);

    u8 unk_4b[0x64 - 0x4b];
};

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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
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
    /* 0x91 */ u8 unk_91[3];
};


struct Unk_ov105_02298594_Elem {
    u8 b[0xf4];
};

class Unk_ov105_02298594 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov105_02298594();

    void func_ov105_02295ebc();
    BOOL func_ov105_02295ee0(u32 a);
    BOOL func_ov105_02295f20(u32 a);
    void func_ov105_02295f54();
    s32 func_ov105_02295f7c(u32 a);
    s32 func_ov105_02295fe8(u32 a);
    s32 func_ov105_02296054(u32 a);
    void func_ov105_02296094(u32 a, void *c);
    BOOL func_ov105_02296108(u32 a);
    s32 func_ov105_02296154(u32 a, u32 b, u32 c);
    u32 func_ov105_022961b0(u32 a);
    u32 func_ov105_022961d0(u32 a);
    BOOL func_ov105_022961f4(u32 a);
    BOOL func_ov105_02296208(u32 a);
    BOOL func_ov105_02296214(u32 a);
    BOOL func_ov105_02296224(u32 a);
    void func_ov105_02296234();
    u32 func_ov105_02296244();
    u32 func_ov105_0229628c();
    void func_ov105_022962ac(u32 a, u32 b, u32 c);
    void func_ov105_022962e4(u32 a, s32 b);
    void func_ov105_02296328(u32 a, u32 c);
    void func_ov105_022963c0(u8 a);
    void func_ov105_02296428(u8 a);
    void func_ov105_02296498(u32 a);
    void func_ov105_02296534();
    void func_ov105_02296554();
    void func_ov105_022965b4();
    void func_ov105_022965cc();
    void func_ov105_022965ec();
    void func_ov105_02296628();
    void func_ov105_02296644();
    void func_ov105_02296678();
    void func_ov105_0229677c();

    // callees outside this group
    void func_ov105_022950b4();
    void func_ov105_022950e4();
    void func_ov105_02294dd8(u32 a);
    void func_ov105_02294de8(u32 a);
    void func_ov105_02295a78();
    void func_ov105_02295af4();
    void func_ov105_02295b8c(u32 a);
    void func_ov105_02295bb0(u32 a);
    void func_ov105_02295c0c();
    void func_ov105_02295c34();
    void func_ov105_02295c7c();
    void func_ov105_02295ce8();
    void func_ov105_02295e6c(u32 a);
    void func_ov105_022959c8(s32 a, s32 b);
    void func_ov002_02200980();

    /* 0x094 */ u8 unk_94[0xa4 - 0x94];
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ s32 unk_b0;
    /* 0x0b4 */ u8 unk_b4[0x1a8 - 0xb4];
    /* 0x1a8 */ u8 unk_1a8[0x29c - 0x1a8];
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e;
    /* 0x29f */ u8 unk_29f;
    /* 0x2a0 */ u8 unk_2a0;
    /* 0x2a1 */ u8 unk_2a1;
    /* 0x2a2 */ u8 unk_2a2;
    /* 0x2a3 */ u8 unk_2a3[2];
    /* 0x2a5 */ u8 unk_2a5;
    /* 0x2a6 */ u8 unk_2a6[2];
    /* 0x2a8 */ u8 unk_2a8;
    /* 0x2a9 */ u8 unk_2a9;
    /* 0x2aa */ u8 unk_2aa;
    /* 0x2ab */ u8 unk_2ab;
    /* 0x2ac */ u8 unk_2ac[0x2e4 - 0x2ac];
    /* 0x2e4 */ u8 unk_2e4[0xd44 - 0x2e4];
    /* 0xd44 */ u8 unk_d44[0x234c - 0xd44];
    /* 0x234c */ u8 unk_234c[0x240c - 0x234c];
    /* 0x240c */ u8 unk_240c[0x2424 - 0x240c];
    /* 0x2424 */ Unk_ov002_02204630 unk_2424;
    /* 0x2488 */ u8 unk_2488[0x2b10 - 0x2488];
    /* 0x2b10 */ Unk_ov105_02298594_Elem unk_2b10[50];
    /* 0x5ab8 */ u8 unk_5ab8[0x728c - 0x5ab8];
    /* 0x728c */ u8 unk_728c[0x40];
};

void Unk_ov105_02298594::func_ov105_02295ebc() {
    func_ov094_022935dc(unk_2e4);
    func_ov094_022943f8(unk_d44);
}

BOOL Unk_ov105_02298594::func_ov105_02295ee0(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_02293d80(unk_d44, func_ov105_022961d0(a));
    }
    return TRUE;
}

BOOL Unk_ov105_02298594::func_ov105_02295f20(u32 a) {
    if (func_ov105_02296224(a)) {
        return func_ov094_022941ec(unk_d44, func_ov105_022961d0(a));
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02295f54() {
    func_ov094_02293318(unk_2e4, 0, 0xe);
    func_ov094_022941f8(unk_d44, 4);
}

s32 Unk_ov105_02298594::func_ov105_02295f7c(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_02293d9c(unk_d44, func_ov105_022961d0(a)) - 0x10;
    }
    if (a == 0x3d) {
        return 0xb6;
    }
    if (func_ov105_022961f4(a)) {
        return func_02087e0c(&data_ov105_02298544[(a - 0x3e) * 3]) + 0x58;
    }
    return 0;
}

s32 Unk_ov105_02298594::func_ov105_02295fe8(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_02293df8(unk_d44, func_ov105_022961d0(a));
    }
    if (a == 0x3d) {
        return 0xbc;
    }
    if (func_ov105_022961f4(a)) {
        return func_02087e14(&data_ov105_02298544[(a - 0x3e) * 3]) + 0x80;
    }
    return 0;
}

s32 Unk_ov105_02298594::func_ov105_02296054(u32 a) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        return func_ov094_0229433c(unk_d44, func_ov105_022961d0(a));
    }
    return 0;
}

void Unk_ov105_02298594::func_ov105_02296094(u32 a, void *c) {
    if (func_ov105_02296224(a) || func_ov105_02296214(a)) {
        func_ov094_02294318(unk_d44, func_ov105_022961d0(a), c);
    } else if (func_ov105_022961f4(a)) {
        func_02065e70(&unk_2b10[(unk_2a1 - 0x24) + unk_2a0 * 0x19], c);
    }
}

BOOL Unk_ov105_02298594::func_ov105_02296108(u32 a) {
    if (!func_ov105_02295ee0(a)) {
        func_02065e70(unk_1a8, (void *)func_ov105_02296054(a));
        func_ov105_02296094(unk_29f, unk_1a8);
    }
    func_ov105_02295b8c(a);
    return TRUE;
}

s32 Unk_ov105_02298594::func_ov105_02296154(u32 a, u32 b, u32 c) {
    s32 r = func_ov094_02294610(unk_d44);
    if (r == 0x37) {
        r = func_ov094_022945dc(unk_d44, a, b);
    }
    if (r != 0x37) {
        if (c != 0 && func_ov094_02293d80(unk_d44, r)) {
            return 0x41;
        }
        return func_ov105_022961b0(r);
    }
    return 0x41;
}

u32 Unk_ov105_02298594::func_ov105_022961b0(u32 a) {
    if (a <= 9) {
        return (u8)(a + 0x1a);
    }
    if (a >= 0xa && a <= 0x22) {
        return (u8)(a + 0x1a);
    }
    return 0x41;
}

u32 Unk_ov105_02298594::func_ov105_022961d0(u32 a) {
    if (a >= 0x1a && a <= 0x23) {
        return (u8)(a - 0x1a);
    }
    if (a >= 0x24 && a <= 0x3c) {
        return (u8)(a - 0x1a);
    }
    return 0;
}

BOOL Unk_ov105_02298594::func_ov105_022961f4(u32 a) {
    if ((u8)(a + 0xc2) <= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02296208(u32 a) {
    if (a == 0x3d) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02296214(u32 a) {
    if (a >= 0x24 && a <= 0x3c) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov105_02298594::func_ov105_02296224(u32 a) {
    if (a >= 0x1a && a <= 0x23) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_02296234() {
    func_020b87d0(unk_2ac);
}

u32 Unk_ov105_02298594::func_ov105_02296244() {
    Unk_ov105_02298594_Elem *p = &unk_2b10[unk_2a8 * 0x19];
    s32 i;
    for (i = 0; i < 0x19; p++, i++) {
        if (func_02065578(p) == 0) {
            return (u8)(i + 0x24);
        }
    }
    return 0x41;
}

u32 Unk_ov105_02298594::func_ov105_0229628c() {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x41;
    }
    return (u8)(r + 0x1a);
}

void Unk_ov105_02298594::func_ov105_022962ac(u32 a, u32 b, u32 c) {
    func_ov105_02295bb0(a);
    unk_ac = func_ov105_02295fe8(a);
    unk_b0 = func_ov105_02295f7c(a);
    func_ov105_02296328(b, 4);
}

void Unk_ov105_02298594::func_ov105_022962e4(u32 a, s32 b) {
    u32 r = 0x41;
    if (b >= 0xc0) {
        if (func_ov105_02296214(a)) {
            r = func_ov105_0229628c();
        }
    } else {
        if (func_ov105_02296224(a)) {
            r = func_ov105_02296244();
        }
    }
    if (r != 0x41) {
        a = r;
    }
    func_ov105_02296328(a, 4);
}

void Unk_ov105_02298594::func_ov105_02296328(u32 a, u32 c) {
    unk_29f = a;
    func_ov002_022026f4(unk_240c, unk_ac, unk_b0);
    s32 t = func_ov105_02295f7c(a);
    if (func_ov105_022961f4(a)) {
        t -= 8;
    }
    func_ov002_022026c4(unk_240c, func_ov105_02295fe8(a), t, c);
    func_ov002_02202718(unk_240c);
    func_ov105_02295c0c();
    if (func_ov105_022961f4(a)) {
        func_ov105_02294de8(0x2000);
    } else {
        func_ov105_02294dd8(0x2000);
    }
    func_ov002_02200a58(0x15);
}

void Unk_ov105_02298594::func_ov105_022963c0(u8 a) {
    unk_29f = a;
    unk_2a1 = a;
    unk_2a0 = unk_2a8;
    func_ov002_022006e4(unk_234c, 1);
    func_ov105_02295bb0(a);
    if (unk_29c == 1) {
        unk_2a5 = 8;
    }
    func_ov105_02295c34();
    func_ov094_02292380();
}

void Unk_ov105_02298594::func_ov105_02296428(u8 a) {
    func_ov105_02294de8(0x1000);
    unk_29f = a;
    unk_2a1 = a;
    unk_2a0 = unk_2a8;
    func_ov002_022006e4(unk_234c, 1);
    func_ov105_02295bb0(a);
    if (unk_29c == 1) {
        func_ov002_02200a58(4);
    }
    func_ov105_02295c7c();
    func_ov094_02292380();
}

void Unk_ov105_02298594::func_ov105_02296498(u32 a) {
    unk_29d = a;
    func_ov002_02200a58(1);
    u32 x = data_021ef5f0;
    u32 y = data_021ef5ec;
    unk_a4 = func_ov105_02295fe8(unk_29d) - x;
    unk_a8 = func_ov105_02295f7c(unk_29d) - y;
    unk_29e = a;
    func_ov002_022006b8(unk_234c);
    func_ov002_022006c0(unk_234c);
    unk_2ab = 2;
    if (func_ov105_02295f20(a)) {
        func_ov105_02294dd8(4);
    } else {
        func_ov105_02294de8(4);
        func_ov094_0229238c();
    }
}

void Unk_ov105_02298594::func_ov105_02296534() {
    if (func_0206ef0c()) {
        func_ov105_022965b4();
    } else {
        func_ov105_02296554();
    }
}

void Unk_ov105_02298594::func_ov105_02296554() {
    func_ov002_02200980();
    unk_2aa = 1;
    unk_2424.func_ov002_02202d00(1);
    unk_2424.vfunc_0c();
    s32 a = func_ov002_022030f4(unk_728c, 4);
    s32 b = func_ov002_022030b8(unk_728c, 4);
    unk_2424.func_ov002_02202a40(a, b);
    func_ov002_02200a58(0x1e);
}

void Unk_ov105_02298594::func_ov105_022965b4() {
    func_ov105_02295a78();
    func_ov002_02200a58(0x1d);
}

void Unk_ov105_02298594::func_ov105_022965cc() {
    if (func_0206ef0c()) {
        func_ov105_02296628();
    } else {
        func_ov105_022965ec();
    }
}

void Unk_ov105_02298594::func_ov105_022965ec() {
    unk_29e = 0x41;
    func_ov105_02295af4();
    func_ov002_02200980();
    func_ov105_02295ce8();
    func_ov002_02200a58(7);
    func_ov105_02295e6c(unk_2a2);
}

void Unk_ov105_02298594::func_ov105_02296628() {
    func_ov105_02295a78();
    func_ov105_02295ebc();
    func_ov002_02200a58(0);
}

void Unk_ov105_02298594::func_ov105_02296644() {
    if (unk_2424.func_0208d4fc()) {
        if (unk_2aa != 0) {
            func_ov105_022950b4();
        } else {
            func_ov105_022950e4();
        }
    }
}

void Unk_ov105_02298594::func_ov105_02296678() {
    if (func_ov002_022009d4()) {
        func_ov105_022965b4();
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            unk_2424.func_ov002_02202b68();
            func_ov002_02200a58(0x1f);
        } else if ((f & 2) != 0) {
            func_ov105_02295a78();
            func_ov105_022950b4();
        } else if ((f & 8) != 0) {
            func_ov105_02295a78();
            func_ov105_022950e4();
        } else {
            u32 old = unk_2aa;
            s32 t = func_ov002_022009c8();
            if (func_ov002_0220126c(t)) {
                if (unk_2aa != 0) {
                    unk_2aa--;
                }
            } else if (func_ov002_0220125c(t)) {
                if (unk_2aa < 1) {
                    unk_2aa++;
                }
            }
            if (old != unk_2aa) {
                if (unk_2aa != 0) {
                    s32 a = func_ov002_022030f4(unk_728c, 4);
                    s32 b = func_ov002_022030b8(unk_728c, 4);
                    func_ov105_022959c8(a, b);
                } else {
                    s32 a = func_ov002_022030f4(unk_728c, 3);
                    s32 b = func_ov002_022030b8(unk_728c, 3);
                    func_ov105_022959c8(a, b);
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_0229677c() {
    if (func_ov002_02200a14(1)) {
        func_ov105_02296554();
    } else {
        if (Unk_ov105_0229677c_Both()) {
            if (func_ov002_02203110(unk_728c, 3)) {
                func_ov105_022950e4();
            }
            if (func_ov002_02203110(unk_728c, 4)) {
                func_ov105_022950b4();
            }
        }
    }
}
