#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02065e70(void *dst, void *src);
BOOL func_02065578(void *p);
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_02089ad8(void *p, s32 x, s32 y);
s32 func_020991fc();
void func_020b87d0(void *p);
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;

void func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006c0(void *p);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);
void func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, u32 c);
void func_ov002_02202718(void *p);

void *func_ov094_0229433c(void *p, u32 a);
void func_ov094_022942f4(void *p, u32 a);
void func_ov094_0229405c(void *p, s32 a, s32 b, void *c);
void func_ov094_02294420(void *p, void *q, u32 a);
void func_ov094_022943a4(void *p, u32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_022943bc(void *p, u32 a);
void func_ov094_022935dc(void *p);
void func_ov094_022943f8(void *p);
BOOL func_ov094_02293d80(void *p, u32 a);
BOOL func_ov094_022941ec(void *p, u32 a);
void func_ov094_02293318(void *p, s32 a, s32 b);
void func_ov094_022941f8(void *p, s32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
void func_ov094_02294318(void *p, u32 a, void *b);
u32 func_ov094_02294610(void *p);
u32 func_ov094_022945f0(void *p, u32 a, s32 b);
void func_ov094_02292380();
void func_ov094_0229238c();
}

// Vtable 0x022044e4 (declaration copied from ov101_002; sub-objects opaque)
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

    void func_ov002_02200980();
    void func_ov002_02200a58(u8 v);

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

class Unk_ov104_02298170 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov104_02298170();

    // group methods
    void func_ov104_02295edc(u32 i);
    void func_ov104_02295f18(u32 i);
    void func_ov104_02295f3c(u32 i);
    void func_ov104_02295f94();
    void func_ov104_02295fbc();
    void func_ov104_02295fe8();
    void func_ov104_02296014();
    void func_ov104_02296054();
    void func_ov104_022960b8();
    BOOL func_ov104_02296138();
    void func_ov104_0229617c(u32 i);
    void func_ov104_022961b8();
    void func_ov104_022961dc(u32 i);
    void func_ov104_0229622c();
    BOOL func_ov104_02296250(u32 i);
    BOOL func_ov104_02296290(u32 i);
    void func_ov104_022962c4();
    s32 func_ov104_022962ec(u32 i);
    s32 func_ov104_0229633c(u32 i);
    void *func_ov104_0229638c(u32 i);
    void func_ov104_022963cc(u32 i, void *p);
    BOOL func_ov104_02296408(u32 i);
    u8 func_ov104_02296450(u32 i, s32 a, u32 flag);
    u8 func_ov104_022964ac(u32 i);
    u8 func_ov104_022964cc(u32 i);
    BOOL func_ov104_022964f0(u32 i);
    BOOL func_ov104_02296504(u32 i);
    BOOL func_ov104_02296514(u32 i);
    void func_ov104_02296524();
    u8 func_ov104_02296534();
    u8 func_ov104_02296568();
    void func_ov104_02296588(u32 i, u32 a);
    void func_ov104_022965c0(u32 i, s32 a);
    void func_ov104_02296604(u32 i, u32 a);
    void func_ov104_02296668(u32 i);
    void func_ov104_022966b0(u32 i);
    void func_ov104_022966f8(u32 i);
    void func_ov104_02296790();
    void func_ov104_022967b0();

    // callees in other groups
    void func_ov104_02294dfc(u32 a);
    void func_ov104_02294e0c(u32 a);
    BOOL func_ov104_02294e1c(u32 a);
    void func_ov104_02295e0c();
    void func_ov104_02295e84();
    void func_ov104_022967e4();

    /* 0x094 */ u8 unk_94[0xa0 - 0x94];
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ u8 unk_b0[4];
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9[2];
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[3];
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0[0x1b4 - 0xc0];
    /* 0x1b4 */ u8 unk_1b4[0x2a8 - 0x1b4];
    /* 0x2a8 */ u8 unk_2a8[0x2e0 - 0x2a8];
    /* 0x2e0 */ u8 unk_2e0[0xd40 - 0x2e0];
    /* 0xd40 */ u8 unk_d40[0x2348 - 0xd40];
    /* 0x2348 */ u8 unk_2348[0x2408 - 0x2348];
    /* 0x2408 */ u8 unk_2408[0x2420 - 0x2408];
    /* 0x2420 */ u8 unk_2420[0x2b0c - 0x2420];
    /* 0x2b0c */ u8 unk_2b0c[0x10];
};

// ---------------------------------------------------------------------------------------------

void Unk_ov104_02298170::func_ov104_02295edc(u32 i) {
    if (unk_b4 == 1) {
        func_02065e70(unk_1b4, unk_c0);
        func_ov104_02295f3c(i);
        func_ov104_022963cc(i, unk_1b4);
    }
}

void Unk_ov104_02298170::func_ov104_02295f18(u32 i) {
    if (unk_b4 == 1) {
        func_ov104_022963cc(i, unk_c0);
    }
    unk_b4 = 0;
}

void Unk_ov104_02298170::func_ov104_02295f3c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        u32 t = func_ov104_022964cc(i);
        unk_b4 = 1;
        func_02065e70(unk_c0, func_ov094_0229433c(unk_d40, t));
        func_ov094_022942f4(unk_d40, t);
    }
}

void Unk_ov104_02298170::func_ov104_02295f94() {
    unk_a8 = func_ov002_02202710(unk_2408);
    unk_ac = func_ov002_02202708(unk_2408);
}

void Unk_ov104_02298170::func_ov104_02295fbc() {
    unk_a8 = func_ov002_022028c8(unk_2420) - 2;
    unk_ac = func_ov002_022028a0(unk_2420) - 4;
}

void Unk_ov104_02298170::func_ov104_02295fe8() {
    unk_a8 = unk_a0 + data_021ef5f0;
    unk_ac = unk_a4 + data_021ef5ec;
}

void Unk_ov104_02298170::func_ov104_02296014() {
    if (func_ov104_02294e1c(0x40) == 0) {
        if (unk_b4 != 0) {
            if (unk_b4 == 1) {
                func_ov094_0229405c(unk_d40, unk_a8, unk_ac, unk_c0);
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296054() {
    if (func_ov104_02296514(unk_b8) || func_ov104_02296504(unk_b8)) {
        if (func_ov104_02296250(unk_b8)) {
            func_ov002_022006b0(unk_2348);
        } else {
            unk_b6 = unk_b8;
            func_ov002_022006b8(unk_2348);
        }
    } else {
        func_ov002_022006b0(unk_2348);
    }
}

void Unk_ov104_02298170::func_ov104_022960b8() {
    s32 x = func_ov104_0229633c(unk_b6) - 0x6d;
    s32 y = func_ov104_022962ec(unk_b6) - 0x78;
    if (func_0206ef00()) {
        y -= 8;
    }
    func_02089ad8(unk_2348, x, y);
    if (func_ov104_02296514(unk_b6) || func_ov104_02296504(unk_b6)) {
        func_ov094_02294420(unk_d40, unk_2348, func_ov104_022964cc(unk_b6));
    }
}

BOOL Unk_ov104_02298170::func_ov104_02296138() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void Unk_ov104_02298170::func_ov104_0229617c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        func_ov094_022943a4(unk_d40, func_ov104_022964cc(i));
    }
}

void Unk_ov104_02298170::func_ov104_022961b8() {
    func_ov094_0229358c(unk_2e0);
    func_ov094_022943b0(unk_d40);
}

void Unk_ov104_02298170::func_ov104_022961dc(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        func_ov094_022943bc(unk_d40, func_ov104_022964cc(i));
        func_ov094_022935dc(unk_2e0);
    } else {
        func_ov104_0229622c();
    }
}

void Unk_ov104_02298170::func_ov104_0229622c() {
    func_ov094_022935dc(unk_2e0);
    func_ov094_022943f8(unk_d40);
}

BOOL Unk_ov104_02298170::func_ov104_02296250(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_02293d80(unk_d40, func_ov104_022964cc(i));
    } else {
        return TRUE;
    }
}

BOOL Unk_ov104_02298170::func_ov104_02296290(u32 i) {
    if (func_ov104_02296514(i)) {
        return func_ov094_022941ec(unk_d40, func_ov104_022964cc(i));
    } else {
        return FALSE;
    }
}

void Unk_ov104_02298170::func_ov104_022962c4() {
    func_ov094_02293318(unk_2e0, 0, 0xe);
    func_ov094_022941f8(unk_d40, 0xe);
}

s32 Unk_ov104_02298170::func_ov104_022962ec(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_02293d9c(unk_d40, func_ov104_022964cc(i)) - 0x10;
    } else {
        if ((u8)(i + 0xe1) <= 1) {
            return 0xb6;
        }
        return 0;
    }
}

s32 Unk_ov104_02298170::func_ov104_0229633c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_02293df8(unk_d40, func_ov104_022964cc(i));
    } else {
        if (i == 0x1f) {
            return 0xbc;
        }
        if (i == 0x20) {
            return 0x74;
        }
        return 0;
    }
}

void *Unk_ov104_02298170::func_ov104_0229638c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_0229433c(unk_d40, func_ov104_022964cc(i));
    } else {
        return 0;
    }
}

void Unk_ov104_02298170::func_ov104_022963cc(u32 i, void *p) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        func_ov094_02294318(unk_d40, func_ov104_022964cc(i), p);
    }
}

BOOL Unk_ov104_02298170::func_ov104_02296408(u32 i) {
    if (func_ov104_02296250(i) == 0) {
        func_02065e70(unk_1b4, func_ov104_0229638c(i));
        func_ov104_022963cc(unk_b7, unk_1b4);
    }
    func_ov104_02295f18(i);
    return TRUE;
}

u8 Unk_ov104_02298170::func_ov104_02296450(u32 i, s32 a, u32 flag) {
    u32 r = func_ov094_02294610(unk_d40);
    if (r == 0x37) {
        r = func_ov094_022945f0(unk_d40, i, a);
    }
    if (r != 0x37) {
        if (flag != 0) {
            if (func_ov094_02293d80(unk_d40, r) != 0) {
                return 0x21;
            }
        }
        return func_ov104_022964ac(r);
    }
    return 0x21;
}

u8 Unk_ov104_02298170::func_ov104_022964ac(u32 i) {
    if (i <= 9) {
        return i + 0xb;
    }
    if (i >= 0x2d && i <= 0x36) {
        return i - 0x18;
    }
    return 0x21;
}

u8 Unk_ov104_02298170::func_ov104_022964cc(u32 i) {
    if (i >= 0xb && i <= 0x14) {
        return i - 0xb;
    }
    if (i >= 0x15 && i <= 0x1e) {
        return i + 0x18;
    }
    return 0;
}

BOOL Unk_ov104_02298170::func_ov104_022964f0(u32 i) {
    if ((u8)(i + 0xe1) <= 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov104_02298170::func_ov104_02296504(u32 i) {
    if (i >= 0x15 && i <= 0x1e) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov104_02298170::func_ov104_02296514(u32 i) {
    if (i >= 0xb && i <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov104_02298170::func_ov104_02296524() {
    func_020b87d0(unk_2a8);
}

u8 Unk_ov104_02298170::func_ov104_02296534() {
    u8 *p = unk_2b0c;
    s32 i;
    for (i = 0; i < 10; p += 0xf4, i++) {
        if (func_02065578(p) == 0) {
            return i + 0x15;
        }
    }
    return 0x21;
}

u8 Unk_ov104_02298170::func_ov104_02296568() {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x21;
    }
    return r + 0xb;
}

void Unk_ov104_02298170::func_ov104_02296588(u32 i, u32 a) {
    func_ov104_02295f3c(i);
    unk_a8 = func_ov104_0229633c(i);
    unk_ac = func_ov104_022962ec(i);
    func_ov104_02296604(a, 4);
}

void Unk_ov104_02298170::func_ov104_022965c0(u32 i, s32 a) {
    u32 r = 0x21;
    if (a >= 0xc0) {
        if (func_ov104_02296504(i)) {
            r = func_ov104_02296568();
        }
    } else {
        if (func_ov104_02296514(i)) {
            r = func_ov104_02296534();
        }
    }
    if (r != 0x21) {
        i = r;
    }
    func_ov104_02296604(i, 4);
}

void Unk_ov104_02298170::func_ov104_02296604(u32 i, u32 a) {
    unk_b7 = i;
    func_ov002_022026f4(unk_2408, unk_a8, unk_ac);
    s32 x = func_ov104_0229633c(i);
    s32 y = func_ov104_022962ec(i);
    func_ov002_022026c4(unk_2408, x, y, a);
    func_ov002_02202718(unk_2408);
    func_ov104_02295f94();
    func_ov002_02200a58(0x15);
}

void Unk_ov104_02298170::func_ov104_02296668(u32 i) {
    unk_b7 = i;
    func_ov002_022006e4(unk_2348, 1);
    func_ov104_02295f3c(i);
    if (unk_b4 == 1) {
        unk_bb = 8;
    }
    func_ov104_02295fbc();
    func_ov094_02292380();
}

void Unk_ov104_02298170::func_ov104_022966b0(u32 i) {
    unk_b7 = i;
    func_ov002_022006e4(unk_2348, 1);
    func_ov104_02295f3c(i);
    if (unk_b4 == 1) {
        func_ov002_02200a58(4);
    }
    func_ov104_02295fe8();
    func_ov094_02292380();
}

void Unk_ov104_02298170::func_ov104_022966f8(u32 i) {
    unk_b5 = i;
    func_ov002_02200a58(1);
    u32 gx = data_021ef5f0;
    u32 gy = data_021ef5ec;
    unk_a0 = func_ov104_0229633c(unk_b5) - gx;
    unk_a4 = func_ov104_022962ec(unk_b5) - gy;
    unk_b6 = i;
    func_ov002_022006b8(unk_2348);
    func_ov002_022006c0(unk_2348);
    unk_bf = 2;
    if (func_ov104_02296290(i)) {
        func_ov104_02294dfc(4);
    } else {
        func_ov104_02294e0c(4);
        func_ov094_0229238c();
    }
}

void Unk_ov104_02298170::func_ov104_02296790() {
    if (func_0206ef0c()) {
        func_ov104_022967e4();
    } else {
        func_ov104_022967b0();
    }
}

void Unk_ov104_02298170::func_ov104_022967b0() {
    unk_b6 = 0x21;
    func_ov104_02295e84();
    func_ov002_02200980();
    func_ov104_02296054();
    func_ov002_02200a58(7);
    func_ov104_022961dc(unk_b8);
}
