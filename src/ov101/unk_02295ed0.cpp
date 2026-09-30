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
void func_0200402c(s32 a);
void func_020ed188();
void *func_020ed174(void *p);
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
BOOL func_ov002_02200680(void *p);
BOOL func_ov002_022017b4(void *p);
s32 func_ov002_022014c0(void *p, s32 a, s32 b);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b58(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_022027a4(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
void func_ov002_02203900(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203510(void *p, s32 a);

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
void func_ov094_022941f8(void *p, s32 a);
}

class Unk_ov002_022044e4;

static inline BOOL Unk_ov101_02296280_Both()
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

// +0x2234 sub-object (0x64 bytes)
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

class Unk_ov101_02296b38;
typedef void (Unk_ov101_02296b38::*Unk_ov101_02296b38_Fn)();

class Unk_ov101_02296b38 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov101_02296b38();

    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // state handlers (member-pointer table, index = unk_8d)
    void func_ov101_02296280();
    void func_ov101_022961e0();
    void func_ov101_022961c4();
    void func_ov101_0229617c();
    void func_ov101_022960e4();
    void func_ov101_02296068();
    void func_ov101_02295f74();
    void func_ov101_02295ed0();

    // other table (vfunc_4c) entries
    void func_ov101_022964ac();
    void func_ov101_022964f8();
    void func_ov101_02296558();
    void func_ov101_02296594();
    void func_ov101_02296620();

    // helpers
    void func_ov101_02296310();
    void func_ov101_02296334();
    void func_ov101_02296348();
    void func_ov101_02296368();
    void func_ov101_022963a0();
    void func_ov101_022963dc();
    void func_ov101_022963e4();
    void func_ov101_02296400();
    void func_ov101_0229643c();
    void func_ov101_02296670();

    // state handlers in other groups
    void func_ov101_02295e58();
    void func_ov101_02295e0c();
    void func_ov101_02295dbc();
    void func_ov101_02295d84();
    void func_ov101_02295d5c();
    void func_ov101_02295d2c();
    void func_ov101_02295d00();
    void func_ov101_02295cb0();
    void func_ov101_02295c68();
    void func_ov101_02295c28();
    void func_ov101_02295bf4();
    void func_ov101_02295bb8();
    void func_ov101_02295b68();
    void func_ov101_02295b48();
    void func_ov101_02295b14();
    void func_ov101_02295ab0();

    // callees outside this group
    BOOL func_ov101_02294d80(s32 a);
    void func_ov101_02294d4c(u32 a);
    void func_ov101_02294d5c(u32 a);
    void func_ov101_02294eec(u32 a, u32 b);
    void func_ov101_02294fdc();
    void func_ov101_0229509c(u32 a);
    void func_ov101_022950e4(u32 a);
    void func_ov101_02295120();
    void func_ov101_02295290();
    void func_ov101_02295304();
    void func_ov101_022954c0();
    void func_ov101_022954ec();
    void func_ov101_02295518();
    void func_ov101_0229556c();
    void func_ov101_022955d8(s32 a);
    void func_ov101_02295604();
    BOOL func_ov101_022956e0(u32 a);
    BOOL func_ov101_02295710(u32 a);
    void func_ov101_02295740();
    BOOL func_ov101_02295840(s32 a);
    s32 func_ov101_02295890(u32 a, u32 b, u32 c);
    BOOL func_ov101_022958f8(u32 a);
    void func_ov101_02295904();
    void func_ov101_02295910(u32 a, u32 b);
    void func_ov101_02295a40();
    void func_ov101_02295a60();
    void func_ov101_02295a94();
    void func_ov101_022959b8(s32 a);

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 unk_9c[0xa4 - 0x9c];
    /* 0x0a4 */ u32 unk_a4;
    /* 0x0a8 */ u32 unk_a8;
    /* 0x0ac */ u8 unk_ac[3];
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4[3];
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9;
    /* 0x0ba */ u8 unk_ba[0xf4 - 0xba];
    /* 0x0f4 */ u8 unk_f4[0xb54 - 0xf4];
    /* 0xb54 */ u8 unk_b54[0xb7c - 0xb54];
    /* 0xb7c */ u8 unk_b7c[0x215c - 0xb7c];
    /* 0x215c */ u8 unk_215c[0x221c - 0x215c];
    /* 0x221c */ u8 unk_221c[0x2234 - 0x221c];
    /* 0x2234 */ Unk_ov002_02204630 unk_2234;
    /* 0x2298 */ u8 unk_2298[0x2591 - 0x2298];
    /* 0x2591 */ u8 unk_2591[0x26a0 - 0x2591];
    /* 0x26a0 */ u8 unk_26a0[0x2794 - 0x26a0];
};

// ---------------------------------------------------------------------------------------------

void Unk_ov101_02296b38::func_ov101_02295ed0() {
    if (func_ov101_02294d80(func_ov002_022009c8())) {
        func_ov101_02295518();
        func_ov101_02295290();
        func_ov002_022006e4(unk_215c, 0);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            if (func_ov101_022958f8(unk_b3)) {
                if (func_ov101_022956e0(unk_b3)) {
                    func_ov101_022950e4(unk_b3);
                } else {
                    func_ov101_0229509c(unk_b3);
                }
            }
        } else if ((f & 2) != 0) {
            func_ov101_022950e4(unk_b2);
        } else {
            func_ov101_022954c0();
            func_ov002_022006c0(unk_215c);
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02295f74() {
    if (func_ov002_022009d4()) {
        func_ov101_02295a94();
        func_ov002_022006e4(unk_215c, 1);
    } else if (func_ov101_02294d80(func_ov002_022009c8())) {
        func_ov101_02295518();
        func_ov101_02295290();
        func_ov002_022006e4(unk_215c, 0);
    } else if (func_ov101_02295710(unk_b3) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov101_022958f8(unk_b3)) {
            if (func_ov101_022956e0(unk_b3) == 0) {
                func_ov101_02294eec(unk_b3, 0);
            }
        } else if (unk_b3 == 0xf) {
            func_ov101_02295120();
        }
    } else {
        if ((data_021f47d8[1] & 2) != 0) {
            func_ov101_02295304();
            func_ov002_022030ac(unk_26a0, 9);
            func_ov002_02200a58(0x17);
            func_0200402c(0x28);
            func_ov002_022006e4(unk_215c, 0);
        } else {
            func_ov002_022006c0(unk_215c);
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02296068() {
    func_ov101_022954ec();
    func_ov101_02295604();
    s32 r = func_ov101_02295890(unk_a4 + 8, unk_a8 + 8, 0);
    if (r != 0x10) {
        if (data_021f4770 == 0) {
            if (func_ov101_02295840(r) == 0) {
                func_ov101_02295910(unk_b2, 4);
            }
            func_ov101_02295a40();
        } else {
            func_ov101_022955d8(r);
        }
    } else if (data_021f4770 == 0) {
        func_ov101_02295910(unk_b2, 4);
    }
}

void Unk_ov101_02296b38::func_ov101_022960e4() {
    if (func_ov002_022017b4(unk_2298)) {
        if (func_ov002_02200a14(1)) {
            func_ov101_02294fdc();
        } else {
            if (Unk_ov101_02296280_Both()) {
                s32 t = func_ov002_022014c0(unk_2298, data_021ef5f0, data_021ef5ec);
                if (t >= 0) {
                    func_ov002_02201aa0(unk_2298, t, 1);
                    unk_b7 = unk_2591[t - 0];
                    func_ov002_02200a58(0x14);
                }
            }
        }
    }
}

void Unk_ov101_02296b38::func_ov101_0229617c() {
    if (func_ov002_02200680(unk_215c)) {
        if (*(volatile u8 *)&unk_b9 != 0) {
            unk_b9 = unk_b9 - 1;
        } else {
            func_ov101_02294eec(unk_b0, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov101_02296b38::func_ov101_022961c4() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(4);
    }
}

void Unk_ov101_02296b38::func_ov101_022961e0() {
    if (data_021f4770 == 0) {
        if (func_ov101_02295710(unk_b0)) {
            func_ov002_02200a58(0);
            func_ov002_022006a4(unk_215c, 0x3c);
        } else {
            func_ov002_02200a58(3);
            func_ov101_02296670();
        }
    } else {
        if (func_ov101_02295710(unk_b0) == 0 && func_ov002_02200680(unk_215c)) {
            if (*(volatile u8 *)&unk_b9 != 0) {
                unk_b9 = unk_b9 - 1;
            } else {
                func_ov101_02294eec(unk_b0, 1);
                func_ov002_02200a58(2);
            }
        } else {
            func_ov002_022006c0(unk_215c);
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02296280() {
    if (func_ov002_02200a14(1)) {
        func_ov101_02295a60();
    } else {
        if (Unk_ov101_02296280_Both()) {
            s32 r = func_ov101_02295890(data_021ef5f0, data_021ef5ec + 0x10, 1);
            if (r != 0x10) {
                func_ov101_022959b8(r);
            } else {
                if (func_ov002_02203110(unk_26a0, 9)) {
                    func_ov002_022030ac(unk_26a0, 9);
                    func_ov002_02200a58(0x17);
                    func_0200402c(0x28);
                }
            }
        }
    }
}

void Unk_ov101_02296b38::func_ov101_02296310() {
    func_ov094_02292ae0(unk_b7c);
    func_ov002_02203920(unk_26a0);
}

void Unk_ov101_02296b38::func_ov101_02296334() {
    func_ov094_02292d1c(unk_b7c, 0);
}

void Unk_ov101_02296b38::func_ov101_02296348() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov101_02296b38::func_ov101_02296368() {
    func_ov002_02201b58(unk_2298);
    func_ov094_02292aa4(unk_b7c);
    if (func_ov002_0220071c(unk_215c)) {
        func_ov101_0229556c();
    }
}

void Unk_ov101_02296b38::func_ov101_022963a0() {
    func_ov101_02295904();
    func_ov094_02292acc(unk_b7c);
    func_ov094_022939a0(unk_f4);
    func_ov094_0229462c(unk_b54);
    func_ov002_02203900(unk_26a0);
}

void Unk_ov101_02296b38::func_ov101_022963dc() {
    func_ov101_02296368();
}

void Unk_ov101_02296b38::func_ov101_022963e4() {
    func_ov101_022963a0();
    unk_2234.vfunc_0c();
}

void Unk_ov101_02296b38::func_ov101_02296400() {
    func_ov101_02295904();
    func_ov094_02292a80(unk_b7c);
    func_ov094_02293998(unk_f4);
    func_ov002_02201b04(unk_2298);
    func_ov002_02203900(unk_26a0);
}

void Unk_ov101_02296b38::func_ov101_0229643c() {
    unk_94 = 0;
    func_ov094_022939c0(unk_f4, 2);
    func_ov094_02294644(unk_b54, 2);
    func_ov094_02292d30(unk_b7c, 6);
    unk_b1 = 0x10;
    func_ov002_022027a4(unk_221c);
    unk_af = 0;
    unk_b3 = 0;
    func_ov002_02202310(unk_2298, 3, 1, 0);
    unk_b9 = 0;
}

void Unk_ov101_02296b38::func_ov101_022964ac() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
        func_ov101_02294d4c(1);
        func_ov101_02294d4c(2);
    } else {
        func_ov002_02200840(6, 0, -16);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_022964f8() {
    func_ov002_022006e4(unk_215c, 1);
    func_ov101_02295304();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(4);
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_02296558() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov101_02295a40();
    }
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_02296594() {
    func_ov101_02296310();
    func_ov002_02203510(unk_26a0, 0x65);
    func_ov094_022937a0(unk_f4);
    func_ov101_02295740();
    func_ov094_02293d2c(unk_b54);
    func_ov094_022941f8(unk_b54, 0xf);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(2);
    func_ov101_02294d5c(1);
    func_ov101_02294d5c(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov101_02296b38::func_ov101_02296620() {
    func_ov101_02296348();
    func_ov101_02296334();
    func_ov002_02200a50(1);
}

BOOL Unk_ov101_02296b38::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov101_02296b38::vfunc_58() { return TRUE; }

BOOL Unk_ov101_02296b38::vfunc_54() { return TRUE; }

BOOL Unk_ov101_02296b38::vfunc_50() {
    func_ov101_022963e4();
    func_ov101_02296670();
    func_ov101_022963dc();
    return TRUE;
}

void Unk_ov101_02296b38::func_ov101_02296670() {
    static Unk_ov101_02296b38_Fn tbl[24] = {
        &Unk_ov101_02296b38::func_ov101_02296280, &Unk_ov101_02296b38::func_ov101_022961e0,
        &Unk_ov101_02296b38::func_ov101_022961c4, &Unk_ov101_02296b38::func_ov101_0229617c,
        &Unk_ov101_02296b38::func_ov101_022960e4, &Unk_ov101_02296b38::func_ov101_02296068,
        &Unk_ov101_02296b38::func_ov101_02295f74, &Unk_ov101_02296b38::func_ov101_02295ed0,
        &Unk_ov101_02296b38::func_ov101_02295e58, &Unk_ov101_02296b38::func_ov101_02295e0c,
        &Unk_ov101_02296b38::func_ov101_02295dbc, &Unk_ov101_02296b38::func_ov101_02295d84,
        &Unk_ov101_02296b38::func_ov101_02295d5c, &Unk_ov101_02296b38::func_ov101_02295d2c,
        &Unk_ov101_02296b38::func_ov101_02295d00, &Unk_ov101_02296b38::func_ov101_02295cb0,
        &Unk_ov101_02296b38::func_ov101_02295c68, &Unk_ov101_02296b38::func_ov101_02295c28,
        &Unk_ov101_02296b38::func_ov101_02295bf4, &Unk_ov101_02296b38::func_ov101_02295bb8,
        &Unk_ov101_02296b38::func_ov101_02295b68, &Unk_ov101_02296b38::func_ov101_02295b48,
        &Unk_ov101_02296b38::func_ov101_02295b14, &Unk_ov101_02296b38::func_ov101_02295ab0};
    (this->*tbl[unk_8d])();
}
