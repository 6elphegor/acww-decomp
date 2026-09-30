#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_020ed188();
void *func_020ed174(void *p);
void func_0209909c(u16 *p, s32 a, s32 b);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;

void func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006c0(void *p);
void func_ov002_022006a4(void *p, s32 a);
BOOL func_ov002_0220071c(void *p);
s32 func_ov002_022014c0(void *p, s32 a, s32 b);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *b, s32 c);
void func_ov002_02201b58(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_022027a4(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);

void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_0229462c(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02294644(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_022937a0(void *p);
void func_ov094_02293d2c(void *p);
}

class Unk_ov002_022044e4;

static inline BOOL Unk_ov099_02296158_Both()
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

class Unk_ov099_02296b00;
typedef void (Unk_ov099_02296b00::*Unk_ov099_02296b00_Fn)();

class Unk_ov099_02296b00 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov099_02296b00();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // state handlers (member-pointer tables)
    void func_ov099_02295ea0();
    void func_ov099_02295ec0();
    void func_ov099_02295f0c();
    void func_ov099_02295f5c();
    void func_ov099_02295fd8();
    void func_ov099_02296080();
    void func_ov099_02296158();
    void func_ov099_022961d8();
    void func_ov099_02296264();
    void func_ov099_022962d4();
    void func_ov099_022964f4();
    void func_ov099_02296544();
    void func_ov099_022965a8();
    void func_ov099_022965e4();
    void func_ov099_02296654();

    void func_ov099_02295e78();
    void func_ov099_02295e48();
    void func_ov099_02295e18();
    void func_ov099_02295dc4();
    void func_ov099_02295d7c();
    void func_ov099_02295d38();
    void func_ov099_02295d00();
    void func_ov099_02295cc4();
    void func_ov099_02295c80();
    void func_ov099_02295c60();
    void func_ov099_02295c28();

    // helpers
    void func_ov099_02296354();
    void func_ov099_02296364();
    void func_ov099_02296378();
    void func_ov099_02296398();
    void func_ov099_022963d0();
    void func_ov099_02296400();
    void func_ov099_02296408();
    void func_ov099_02296424();
    void func_ov099_02296454();

    // callees outside this group
    void func_ov099_02295088();
    void func_ov099_0229564c(u32 a);
    void func_ov099_022953e8();
    void func_ov099_02294f30();
    void func_ov099_02295148();
    BOOL func_ov099_02294d84(s32 a);
    void func_ov099_02295490();
    void func_ov099_0229519c();
    BOOL func_ov099_022959f0(u32 a);
    BOOL func_ov099_02295734(u32 a);
    void func_ov099_0229502c(u32 a);
    void func_ov099_02294fe0(u32 a);
    void func_ov099_02295c0c();
    BOOL func_ov099_02295788(u32 a);
    void func_ov099_02294ea0(u32 a);
    void func_ov099_02295214();
    void func_ov099_0229541c();
    void func_ov099_02295630();
    s32 func_ov099_02295978(u32 a, u32 b, u32 c);
    s32 func_ov099_02295884(u32 a, u32 b, u32 c);
    BOOL func_ov099_02295928(s32 a);
    void func_ov099_02295a08(u32 a, s32 b);
    void func_ov099_02295bb0();
    void func_ov099_022955e0(s32 a);
    BOOL func_ov099_02294d6c(u32 a);
    BOOL func_ov099_0229559c();
    void func_ov099_02295ac4(u32 a);
    BOOL func_ov099_02295588(s32 a);
    void func_ov099_02295bd0();
    void func_ov099_02295b10(s32 a);
    void func_ov099_022959fc();
    void func_ov099_022954f4();
    void func_ov099_02294d4c(u32 a);
    void func_ov099_02294d5c(u32 a);
    void func_ov099_02295454();

    /* 0x094 */ u8 unk_94[0xcc - 0x94];
    /* 0x0cc */ u8 unk_cc[0xb2c - 0xcc];
    /* 0xb2c */ u8 unk_b2c[0xb54 - 0xb2c];
    /* 0xb54 */ u8 unk_b54[0x2134 - 0xb54];
    /* 0x2134 */ u8 unk_2134[0x21f4 - 0x2134];
    /* 0x21f4 */ u8 unk_21f4[0x220c - 0x21f4];
    /* 0x220c */ Unk_ov002_02204630 unk_220c;
    /* 0x2270 */ u8 unk_2270[0x2569 - 0x2270];
    /* 0x2569 */ u8 unk_2569[0x2678 - 0x2569];
    /* 0x2678 */ u32 unk_2678;
    /* 0x267c */ u32 unk_267c;
    /* 0x2680 */ u8 unk_2680[0x2688 - 0x2680];
    /* 0x2688 */ u32 unk_2688;
    /* 0x268c */ u32 unk_268c;
    /* 0x2690 */ u8 unk_2690[0x2787 - 0x2690];
    /* 0x2787 */ u8 unk_2787;
    /* 0x2788 */ u8 unk_2788;
    /* 0x2789 */ u8 unk_2789;
    /* 0x278a */ u8 unk_278a;
    /* 0x278b */ u8 unk_278b;
    /* 0x278c */ u8 unk_278c[2];
    /* 0x278e */ u8 unk_278e;
    /* 0x278f */ u8 unk_278f;
    /* 0x2790 */ u8 unk_2790;
};

// ---------------------------------------------------------------------------------------------

void Unk_ov099_02296b00::func_ov099_02295ea0() {
    if (unk_220c.func_0208d4fc()) {
        func_ov099_02295088();
    }
}

void Unk_ov099_02296b00::func_ov099_02295ec0() {
    if (unk_220c.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_278e);
        if ((u8)(unk_278e + 0xfc) <= 1) {
            func_ov099_0229564c(unk_278b);
        }
    }
    func_ov099_022953e8();
}

void Unk_ov099_02296b00::func_ov099_02295f0c() {
    if (unk_220c.func_0208d4fc()) {
        func_ov002_02201aa0(unk_2270, unk_2790, 1);
        unk_278f = unk_2569[unk_2790];
        func_ov002_02200a58(0x12);
    }
}

void Unk_ov099_02296b00::func_ov099_02295f5c() {
    if (func_ov002_022009d4()) {
        func_ov099_02294f30();
    } else if (func_ov002_022019d0(unk_2270, func_ov002_022009c8(), &unk_2790, 0)) {
        func_ov099_02295148();
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            unk_220c.func_ov002_02202b68();
            func_ov002_02200a58(7);
        } else if ((f & 2) != 0) {
            func_ov099_02294f30();
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02295fd8() {
    if (func_ov099_02294d84(func_ov002_022009c8())) {
        func_ov099_02295490();
        func_ov099_0229519c();
        func_ov002_022006e4(unk_2134, 0);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            if (func_ov099_022959f0(unk_278b)) {
                if (func_ov099_02295734(unk_278b)) {
                    func_ov099_0229502c(unk_278b);
                } else {
                    func_ov099_02294fe0(unk_278b);
                }
            }
        } else if ((f & 2) != 0) {
            func_ov099_0229502c(unk_278a);
        } else {
            func_ov099_022953e8();
            func_ov002_022006c0(unk_2134);
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02296080() {
    if (func_ov002_022009d4()) {
        func_ov099_02295c0c();
        func_ov002_022006e4(unk_2134, 1);
    } else if (func_ov099_02294d84(func_ov002_022009c8())) {
        func_ov099_02295490();
        func_ov099_0229519c();
        func_ov002_022006e4(unk_2134, 0);
    } else if (func_ov099_02295788(unk_278b) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov099_022959f0(unk_278b)) {
            if (func_ov099_02295734(unk_278b) == 0) {
                func_ov099_02294ea0(unk_278b);
            }
        }
    } else {
        if ((data_021f47d8[1] & 0x800) != 0) {
            unk_8c = 3;
            func_ov002_02200a60(1);
            func_ov002_022006e4(unk_2134, 1);
            func_ov099_02295214();
        } else {
            func_ov002_022006c0(unk_2134);
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02296158() {
    func_ov099_0229541c();
    func_ov099_02295630();
    s32 r = func_ov099_02295978(unk_2688 + 8, unk_268c + 8, 0);
    if (r != 0x1d) {
        if (data_021f4770 == 0) {
            if (func_ov099_02295928(r) == 0) {
                func_ov099_02295a08(unk_278a, 4);
            }
            func_ov099_02295bb0();
        } else {
            func_ov099_022955e0(r);
        }
    } else if (data_021f4770 == 0) {
        func_ov099_02295a08(unk_278a, 4);
    }
}

void Unk_ov099_02296b00::func_ov099_022961d8() {
    if (func_ov002_02200a14(1)) {
        func_ov099_02294f30();
    } else {
        if (Unk_ov099_02296158_Both()) {
            s32 t = func_ov002_022014c0(unk_2270, data_021ef5f0, data_021ef5ec);
            if (t >= 0) {
                func_ov002_02201aa0(unk_2270, t, 1);
                unk_278f = unk_2569[t];
                func_ov002_02200a58(0x12);
            }
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02296264() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
        func_ov002_022006a4(unk_2134, 0x3c);
    } else {
        if (func_ov099_02294d6c(4)) {
            if (func_ov099_0229559c()) {
                func_ov099_02295ac4(unk_2788);
                return;
            }
            if (func_ov099_02295588(9)) {
                func_ov099_02294ea0(unk_2788);
                return;
            }
        }
        func_ov002_022006c0(unk_2134);
    }
}

void Unk_ov099_02296b00::func_ov099_022962d4() {
    if (func_ov002_02200a14(1)) {
        func_ov099_02295bd0();
    } else {
        if (Unk_ov099_02296158_Both()) {
            u8 x = data_021ef5f0;
            u8 y = data_021ef5ec;
            s32 r = func_ov099_02295978(x, y, 1);
            if (r != 0x1d) {
                func_ov099_02295b10(r);
            } else {
                r = func_ov099_02295884(x, y, 1);
                if (r != 0x1d) {
                    func_ov099_02295b10(r);
                }
            }
        }
    }
}

void Unk_ov099_02296b00::func_ov099_02296354() {
    func_ov094_02292ae0(unk_b54);
}

void Unk_ov099_02296b00::func_ov099_02296364() {
    func_ov094_02292d1c(unk_b54, 0);
}

void Unk_ov099_02296b00::func_ov099_02296378() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov099_02296b00::func_ov099_02296400() {
    func_ov099_02296398();
}

void Unk_ov099_02296b00::func_ov099_02296398() {
    func_ov002_02201b58(unk_2270);
    func_ov094_02292aa4(unk_b54);
    if (func_ov002_0220071c(unk_2134)) {
        func_ov099_022954f4();
    }
}

void Unk_ov099_02296b00::func_ov099_022963d0() {
    func_ov099_022959fc();
    func_ov094_02292acc(unk_b54);
    func_ov094_022939a0(unk_cc);
    func_ov094_0229462c(unk_b2c);
}

void Unk_ov099_02296b00::func_ov099_02296408() {
    func_ov099_022963d0();
    unk_220c.vfunc_0c();
}

void Unk_ov099_02296b00::func_ov099_02296424() {
    func_ov099_022959fc();
    func_ov094_02292a80(unk_b54);
    func_ov094_02293998(unk_cc);
    func_ov002_02201b04(unk_2270);
}

void Unk_ov099_02296b00::func_ov099_02296454() {
    u16 a;
    u16 b;
    unk_2678 = 0;
    func_ov094_022939c0(unk_cc, 2);
    func_ov094_02294644(unk_b2c, 2);
    func_ov094_02292d30(unk_b54, 6);
    unk_2789 = 0x1d;
    func_ov002_022027a4(unk_21f4);
    unk_2787 = 0;
    unk_278b = 0;
    func_ov002_02202310(unk_2270, 3, 1, 0);
    a = 0x11a9;
    func_0209909c(&a, 1, 0);
    b = 0x1548;
    func_0209909c(&b, 0, 2);
}

void Unk_ov099_02296b00::func_ov099_022964f4() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
        func_ov099_02294d4c(1);
        func_ov099_02294d4c(2);
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_02296544() {
    func_ov002_022006e4(unk_2134, 1);
    func_ov099_02295214();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_022965a8() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov099_02295bb0();
    }
    func_ov002_02200840(6, 0, 0);
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_022965e4() {
    func_ov099_02296354();
    func_ov094_022937a0(unk_cc);
    func_ov094_02293d2c(unk_b2c);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(2);
    func_ov099_02294d5c(1);
    func_ov099_02294d5c(2);
    unk_267c = func_ov002_02200920();
}

void Unk_ov099_02296b00::func_ov099_02296654() {
    func_ov099_02296378();
    func_ov099_02296364();
    func_ov002_02200a50(1);
}

BOOL Unk_ov099_02296b00::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov099_02296b00::vfunc_58() { return TRUE; }

BOOL Unk_ov099_02296b00::vfunc_54() { return TRUE; }

BOOL Unk_ov099_02296b00::vfunc_50() {
    func_ov099_02296408();
    static Unk_ov099_02296b00_Fn tbl[21] = {
        &Unk_ov099_02296b00::func_ov099_022962d4, &Unk_ov099_02296b00::func_ov099_02296264,
        &Unk_ov099_02296b00::func_ov099_022961d8, &Unk_ov099_02296b00::func_ov099_02296158,
        &Unk_ov099_02296b00::func_ov099_02296080, &Unk_ov099_02296b00::func_ov099_02295fd8,
        &Unk_ov099_02296b00::func_ov099_02295f5c, &Unk_ov099_02296b00::func_ov099_02295f0c,
        &Unk_ov099_02296b00::func_ov099_02295ec0, &Unk_ov099_02296b00::func_ov099_02295ea0,
        &Unk_ov099_02296b00::func_ov099_02295e78, &Unk_ov099_02296b00::func_ov099_02295e48,
        &Unk_ov099_02296b00::func_ov099_02295e18, &Unk_ov099_02296b00::func_ov099_02295dc4,
        &Unk_ov099_02296b00::func_ov099_02295d7c, &Unk_ov099_02296b00::func_ov099_02295d38,
        &Unk_ov099_02296b00::func_ov099_02295d00, &Unk_ov099_02296b00::func_ov099_02295cc4,
        &Unk_ov099_02296b00::func_ov099_02295c80, &Unk_ov099_02296b00::func_ov099_02295c60,
        &Unk_ov099_02296b00::func_ov099_02295c28};
    (this->*tbl[unk_8d])();
    func_ov099_02296400();
    return TRUE;
}
