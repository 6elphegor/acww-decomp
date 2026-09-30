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
s32 func_ov002_02203f78(void *p, s32 a);
s32 func_ov002_02203f28(void *p, s32 a);
BOOL func_ov002_02203e24(void *p);
void func_ov002_02203ec8(void *p, s32 a);
void func_0206d394(void *p);
void func_0206d39c(void *p, s32 a);
void func_0206d2e0(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02065af0();
BOOL func_0206ef0c();
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

static inline BOOL Unk_ov103_02295f10_Both()
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

class Unk_ov103_02296da0;
typedef void (Unk_ov103_02296da0::*Unk_ov103_02296da0_Fn)();

class Unk_ov103_02296da0 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov103_02296da0();

    void func_ov103_02295e74();
    void func_ov103_02295ef0();
    void func_ov103_02295f10();
    void func_ov103_02295fa4();
    void func_ov103_02296040();
    void func_ov103_02296124();
    void func_ov103_022961b0();
    void func_ov103_022961e4();
    void func_ov103_0229627c();
    void func_ov103_022962ec();
    void func_ov103_02296350();
    void func_ov103_02296360();
    void func_ov103_02296374();
    void func_ov103_02296394();
    void func_ov103_022963cc();
    void func_ov103_022963fc();
    void func_ov103_02296404();
    void func_ov103_02296420();
    void func_ov103_0229645c();
    void func_ov103_022964e0();
    void func_ov103_02296528();
    void func_ov103_02296564();
    void func_ov103_022965b4();
    void func_ov103_0229663c();
    void func_ov103_022966ac();
    void func_ov103_02296720();
    void func_ov103_0229675c();

    // callees outside this group
    void func_ov103_02294fbc();
    void func_ov103_022951e0();
    void func_ov103_02294dcc();
    void func_ov103_022952ac();
    BOOL func_ov103_02294e10(u32 a, u32 b);
    void func_ov103_02295508();
    void func_ov103_02295234();
    BOOL func_ov103_022956c8(u32 a);
    void func_ov103_022950c4(u32 a);
    void func_ov103_02295078(u32 a);
    void func_ov103_02295454();
    void func_ov103_02295abc();
    BOOL func_ov103_022956fc(u32 a);
    BOOL func_ov103_022958bc(u32 a);
    void func_ov103_02294f04(u32 a);
    void func_ov103_02294d94(s32 a);
    void func_ov103_02295488();
    void func_ov103_02295650();
    s32 func_ov103_02295858(u32 a, u32 b, u32 c);
    BOOL func_ov103_0229580c(u32 a);
    void func_ov103_022958d8(u32 a, u32 b);
    void func_ov103_02295a60();
    void func_ov103_02295620(u32 a);
    BOOL func_ov103_02294db4(s32 a);
    BOOL func_ov103_022955dc();
    void func_ov103_02295990(u32 a);
    BOOL func_ov103_022955c8(s32 a);
    void func_ov103_02295a80();
    void func_ov103_022959d8(u32 a);
    void func_ov103_0229555c();
    void func_ov103_022958cc();
    void func_ov103_022967d0();
    s32 func_ov103_022957a8(u32 a);
    void func_ov103_02294da4(s32 a);
    void func_ov103_02295730();

    /* 0x094 */ u8 unk_94[0xcc - 0x94];
    /* 0x0cc */ u8 unk_cc[0xb2c - 0xcc];
    /* 0xb2c */ u8 unk_b2c[0xb54 - 0xb2c];
    /* 0xb54 */ u8 unk_b54[0x2134 - 0xb54];
    /* 0x2134 */ u8 unk_2134[0x21f4 - 0x2134];
    /* 0x21f4 */ u8 unk_21f4[0x220c - 0x21f4];
    /* 0x220c */ Unk_ov002_02204630 unk_220c;
    /* 0x2270 */ u8 unk_2270[0x2569 - 0x2270];
    /* 0x2569 */ u8 unk_2569[0x2678 - 0x2569];
    /* 0x2678 */ u8 unk_2678[0x2888 - 0x2678];
    /* 0x2888 */ u8 unk_2888[0x28f8 - 0x2888];
    /* 0x28f8 */ u32 unk_28f8;
    /* 0x28fc */ u32 unk_28fc;
    /* 0x2900 */ u8 unk_2900[0x2908 - 0x2900];
    /* 0x2908 */ s32 unk_2908;
    /* 0x290c */ s32 unk_290c;
    /* 0x2910 */ u8 unk_2910[0x2af8 - 0x2910];
    /* 0x2af8 */ u8 unk_2af8;
    /* 0x2af9 */ u8 unk_2af9;
    /* 0x2afa */ u8 unk_2afa;
    /* 0x2afb */ u8 unk_2afb;
    /* 0x2afc */ u8 unk_2afc;
    /* 0x2afd */ u8 unk_2afd;
    /* 0x2afe */ u8 unk_2afe[2];
    /* 0x2b00 */ u8 unk_2b00;
    /* 0x2b01 */ u8 unk_2b01;
};


void Unk_ov103_02296da0::func_ov103_02295e74() {
    if (func_ov002_022009d4()) {
        func_ov103_02294fbc();
    } else if (func_ov002_022019d0(unk_2270, func_ov002_022009c8(), &unk_2b01, 0)) {
        func_ov103_022951e0();
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            unk_220c.func_ov002_02202b68();
            func_ov002_02200a58(0xa);
        } else if ((f & 2) != 0) {
            func_ov103_02294fbc();
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295ef0() {
    if (unk_220c.func_0208d4fc()) {
        func_ov103_02294dcc();
    }
}

void Unk_ov103_02296da0::func_ov103_02295f10() {
    if (unk_220c.func_0208d534() == 0) {
        s32 a = func_ov002_02203f78(unk_2888, 1);
        s32 b = func_ov002_02203f28(unk_2888, 1);
        unk_220c.func_ov002_02202a40(a, b);
        unk_220c.func_ov002_02202d00(1);
    }
    if (func_ov002_022009d4()) {
        func_ov103_022952ac();
        func_ov002_02200a58(3);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0 || (f & 2) != 0) {
            unk_220c.func_ov002_02202b68();
            func_ov002_02200a58(8);
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02295fa4() {
    if (func_ov103_02294e10(func_ov002_022009c8(), 1)) {
        func_ov103_02295508();
        func_ov103_02295234();
        func_ov002_022006e4(unk_2134, 0);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            if (func_ov103_022956c8(unk_2afc)) {
                func_ov103_022950c4(unk_2afc);
            } else {
                func_ov103_02295078(unk_2afc);
            }
        } else if ((f & 2) != 0) {
            func_ov103_022950c4(unk_2afb);
        } else {
            func_ov103_02295454();
            func_ov002_022006c0(unk_2134);
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02296040() {
    if (func_ov002_022009d4()) {
        func_ov103_02295abc();
        func_ov002_022006e4(unk_2134, 1);
    } else if (func_ov103_02294e10(func_ov002_022009c8(), 0)) {
        func_ov103_02295508();
        func_ov103_02295234();
        func_ov002_022006e4(unk_2134, 0);
    } else if (func_ov103_022956fc(unk_2afc) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov103_022958bc(unk_2afc)) {
            if (func_ov103_022956c8(unk_2afc) == 0) {
                func_ov103_02294f04(unk_2afc);
            }
        }
    } else {
        if ((data_021f47d8[1] & 0x800) != 0) {
            unk_8c = 3;
            func_ov002_02200a60(1);
            func_ov002_022006e4(unk_2134, 1);
            func_ov103_022952ac();
            func_ov103_02294d94(0x100);
        } else {
            func_ov002_022006c0(unk_2134);
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02296124() {
    if (func_ov002_02200a14(1)) {
        func_ov103_02294fbc();
    } else {
        if (Unk_ov103_02295f10_Both()) {
            s32 t = func_ov002_022014c0(unk_2270, data_021ef5f0, data_021ef5ec);
            if (t >= 0) {
                func_ov002_02201aa0(unk_2270, t, 1);
                unk_2b00 = unk_2569[t];
                func_ov002_02200a58(0x15);
            }
        }
    }
}

void Unk_ov103_02296da0::func_ov103_022961b0() {
    if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(7);
    } else {
        if (func_ov002_02203e24(unk_2888)) {
            func_ov103_02294dcc();
        }
    }
}

void Unk_ov103_02296da0::func_ov103_022961e4() {
    func_ov103_02295488();
    func_ov103_02295650();
    s32 r = func_ov103_02295858(unk_2908 + 8, unk_290c + 8, 0);
    if (r != 0x15) {
        if (data_021f4770 == 0) {
            if (func_ov103_022956fc(r) != 0 || func_ov103_0229580c(r) == 0) {
                func_ov103_022958d8(unk_2afb, 4);
            } else {
                func_ov103_02295a60();
            }
        } else {
            func_ov103_02295620(r);
        }
    } else if (data_021f4770 == 0) {
        func_ov103_022958d8(unk_2afb, 4);
    }
}

void Unk_ov103_02296da0::func_ov103_0229627c() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
        func_ov002_022006a4(unk_2134, 0x3c);
    } else {
        if (func_ov103_02294db4(4)) {
            if (func_ov103_022955dc()) {
                func_ov103_02295990(unk_2af9);
                return;
            }
            if (func_ov103_022955c8(9)) {
                func_ov103_02294f04(unk_2af9);
                return;
            }
        }
        func_ov002_022006c0(unk_2134);
    }
}

void Unk_ov103_02296da0::func_ov103_022962ec() {
    if (func_ov002_02200a14(1)) {
        func_ov103_02295a80();
    } else {
        if (Unk_ov103_02295f10_Both()) {
            s32 r = func_ov103_02295858(data_021ef5f0, data_021ef5ec, 1);
            if (r != 0x15) {
                func_ov103_022959d8(r);
            }
        }
    }
}

void Unk_ov103_02296da0::func_ov103_02296350() {
    func_ov094_02292ae0(unk_b54);
}

void Unk_ov103_02296da0::func_ov103_02296360() {
    func_ov094_02292d1c(unk_b54, 0);
}

void Unk_ov103_02296da0::func_ov103_02296374() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov103_02296da0::func_ov103_022963fc() {
    func_ov103_02296394();
}

void Unk_ov103_02296da0::func_ov103_02296394() {
    func_ov002_02201b58(unk_2270);
    func_ov094_02292aa4(unk_b54);
    if (func_ov002_0220071c(unk_2134)) {
        func_ov103_0229555c();
    }
}

void Unk_ov103_02296da0::func_ov103_022963cc() {
    func_ov103_022958cc();
    func_ov094_02292acc(unk_b54);
    func_ov094_022939a0(unk_cc);
    func_ov094_0229462c(unk_b2c);
}

void Unk_ov103_02296da0::func_ov103_02296404() {
    func_ov103_022963cc();
    unk_220c.vfunc_0c();
}

void Unk_ov103_02296da0::func_ov103_02296420() {
    func_ov103_022958cc();
    func_ov094_02292a80(unk_b54);
    func_ov094_02293998(unk_cc);
    func_ov002_02201b04(unk_2270);
    func_0206d394(unk_2678);
}

void Unk_ov103_02296da0::func_ov103_0229645c() {
    unk_28f8 = 0;
    func_ov094_022939c0(unk_cc, 2);
    func_ov094_02294644(unk_b2c, 2);
    func_ov094_02292d30(unk_b54, 6);
    unk_2afa = 0x15;
    func_ov002_022027a4(unk_21f4);
    unk_2af8 = 0;
    unk_2afc = 0xb;
    func_ov002_02202310(unk_2270, 3, 1, 0);
    func_0206d39c(unk_2678, 3);
}

void Unk_ov103_02296da0::func_ov103_022964e0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov103_02294d94(0x80);
        func_ov103_022967d0();
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov103_02296da0::func_ov103_02296528() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(8);
}

void Unk_ov103_02296da0::func_ov103_02296564() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov002_02200a58(3);
        } else {
            func_ov002_02200a58(7);
        }
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov103_02296da0::func_ov103_022965b4() {
    s32 t = func_ov103_022957a8(unk_2afd);
    func_02065af0();
    func_0206d2e0(unk_2678, t, 3, 4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    func_020020b8(3);
    func_ov002_02200840(3, 0, 0);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(6);
    func_ov002_02203ec8(unk_2888, 0x88);
    func_ov103_02294da4(0x80);
}

void Unk_ov103_02296da0::func_ov103_0229663c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov103_02294d94(2);
        if (func_ov103_02294db4(0x100)) {
            func_ov002_02200a50(5);
            func_ov103_022965b4();
        } else {
            func_ov103_02294d94(1);
            func_ov002_02200a60(5);
        }
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_022966ac() {
    func_ov002_022006e4(unk_2134, 1);
    func_ov103_022952ac();
    if (func_ov103_02294db4(0x100) == 0) {
        func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    }
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_02296720() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov103_02295a60();
    }
    func_ov002_02200840(6, 0, 0);
    unk_28fc = func_ov002_02200920();
}

void Unk_ov103_02296da0::func_ov103_0229675c() {
    func_ov103_02296350();
    func_ov094_022937a0(unk_cc);
    func_ov094_02293d2c(unk_b2c);
    func_ov103_02295730();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(2);
    func_ov103_02294da4(1);
    func_ov103_02294da4(2);
    unk_28fc = func_ov002_02200920();
}
