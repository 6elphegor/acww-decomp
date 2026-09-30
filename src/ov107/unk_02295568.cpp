#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov107_02296e78;

class Unk_ov107_Vt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

extern "C" {
extern u8 data_021edb68;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

u16 func_0206e750();
void func_02061478(void *a, void *b);
u32 func_020991b0();
void func_0209750c();
s32 func_020986c8();
void func_0203c42c(s32 a, void *b, s32 c, s32 d);
void func_0206e744();
void func_0206ed2c(u32 a);
void func_0206ecf8(s32 a);
void func_0200402c(u32 a);
BOOL func_0206ef00();
s32 func_020b87d0(void *a);
void func_0208d538(void *a, s32 b);
void func_0208d63c(void *a);
void func_02089ad8(void *a, s32 b, s32 c);

void func_ov002_022030ac(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a60(void *a, s32 b);
void func_ov002_022006e4(void *a, s32 b);
void func_ov002_022006b0(void *a);
void func_ov002_022006b8(void *a);
void func_ov002_02202064(void *a, s32 b);
void func_ov002_0220160c(void *a, void *b, s32 c);
void func_ov002_02202200(void *a, void *b, s32 c);
void func_ov002_0220229c(void *a, s32 b, s32 c);
void func_ov002_02202098(void *a, s32 b);
void func_ov002_02202b68(void *a);
void func_ov002_02202a78(void *a);
void func_ov002_02202a40(void *a, s32 b, s32 c);
void func_ov002_02202a18(void *a, s32 b, s32 c, s32 d);
void func_ov002_022029e8(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_02202d00(void *a, s32 b);
s32 func_ov002_022014a4(void *a);
s32 func_ov002_02201498(void *a, s32 b);
u32 func_ov002_02201a70(void *a, s32 b);
void func_ov002_02204394(void *a, void *b, s32 c, s32 d);

void func_ov094_0229313c(void *a, s32 b, s32 c);
void func_ov094_02293638(void *a, void *b, s32 c);
void func_ov094_0229359c(void *a, s32 b);
void func_ov094_022943f8(void *a);
void func_ov094_022935dc(void *a);
u32 func_ov094_02293504(void *a, s32 b);
u32 func_ov094_0229352c(void *a, s32 b);
BOOL func_ov094_0229311c(void *a, s32 b);
BOOL func_ov094_0229333c(void *a, s32 b);
void func_ov094_02293308(void *a, s32 b);
s32 func_ov094_02293610(void *a, s32 b);
s32 func_ov094_02293624(void *a, s32 b);
void func_ov094_02293494(void *a, s32 b, s32 c, s32 d);
void func_ov094_02293434(void *a, s32 b);
u32 func_ov094_02293968(void *a);
}

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

    /* 0x50 */ u8 unk_50[0x3c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91[3];
};

typedef void (Unk_ov107_02296e78::*Unk_ov107_02296e78_Fn)();

class Unk_ov107_02296e78 : public Unk_ov002_022044e4 {
public:
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // same-class callees outside this group
    void func_ov107_02294ed4();
    void func_ov107_02294d54(s32 a);
    BOOL func_ov107_02294d74(s32 a);
    void func_ov107_02295048();
    void func_ov107_022951e0();
    void func_ov107_02295270();
    void func_ov107_02295f40();

    // this group
    void func_ov107_02295568();
    void func_ov107_022955d4();
    void func_ov107_022955fc();
    void func_ov107_02295638();
    void func_ov107_02295664(s32 a);
    void func_ov107_022956d4();
    void func_ov107_02295768();
    void func_ov107_02295788();
    void func_ov107_022957a8();
    void func_ov107_022957dc();
    void func_ov107_02295828();
    void func_ov107_0229588c();
    void func_ov107_022958dc();
    void func_ov107_02295950();
    s32 func_ov107_02295974();
    s32 func_ov107_02295984();
    void func_ov107_022959c8();
    void func_ov107_02295a18();
    void func_ov107_02295a50();
    void func_ov107_02295aa4();
    void func_ov107_02295b14(s32 a);
    void func_ov107_02295b58();
    u32 func_ov107_02295b7c(s32 a);
    u32 func_ov107_02295bb0(s32 a);
    BOOL func_ov107_02295be8(s32 a);
    BOOL func_ov107_02295c1c(s32 a);
    BOOL func_ov107_02295c50(s32 a);
    void func_ov107_02295ce4();
    s32 func_ov107_02295d20(s32 a);
    s32 func_ov107_02295d5c(s32 a);
    void func_ov107_02295d98(s32 a, s32 b, s32 c);
    u32 func_ov107_02295ddc(s32 a, s32 b, s32 c);
    u32 func_ov107_02295e1c(s32 a);
    u32 func_ov107_02295e2c(s32 a);
    BOOL func_ov107_02295e48(s32 a);
    void func_ov107_02295e54();
    void func_ov107_02295e60(s32 a, u32 b);

    /* 0x0094 */ u8 pad_94[0xa4 - 0x94];
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ u8 pad_ac[0xb5 - 0xac];
    /* 0x00b5 */ u8 unk_b5;
    /* 0x00b6 */ u8 unk_b6;
    /* 0x00b7 */ u8 unk_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 unk_b9;
    /* 0x00ba */ u8 unk_ba;
    /* 0x00bb */ u8 unk_bb;
    /* 0x00bc */ u8 unk_bc;
    /* 0x00bd */ u8 unk_bd;
    /* 0x00be */ u8 pad_be[0xd4 - 0xbe];
    /* 0x00d4 */ u8 unk_d4[0x10c - 0xd4];
    /* 0x010c */ u8 unk_10c[0xb6c - 0x10c];
    /* 0x0b6c */ u8 unk_b6c[0x2174 - 0xb6c];
    /* 0x2174 */ u8 unk_2174[0x2234 - 0x2174];
    /* 0x2234 */ u8 unk_2234[0x224c - 0x2234];
    /* 0x224c */ Unk_ov107_Vt unk_224c;
    /* 0x2250 */ u8 pad_2250[0x22b0 - 0x2250];
    /* 0x22b0 */ u8 unk_22b0[0x25a4 - 0x22b0];
    /* 0x25a4 */ u8 unk_25a4[0x25b0 - 0x25a4];
    /* 0x25b0 */ u8 unk_25b0[0x26b8 - 0x25b0];
    /* 0x26b8 */ u8 unk_26b8[0x281c - 0x26b8];
};

void Unk_ov107_02296e78::func_ov107_02295568() {
    u16 a;
    u16 b;
    u32 r6, r4;
    a = func_0206e750();
    func_02061478(&b, &a);
    r6 = b;
    r4 = 0;
    if (r6 == 0x156b) {
        r6 = func_020991b0();
        r4 = 1;
    }
    func_0209750c();
    func_0203c42c(func_020986c8(), &b, 0, 1);
    func_ov107_02295bb0(unk_b9);
    func_0206e744();
    func_ov107_02295d98(unk_b9, r6, r4);
}

void Unk_ov107_02296e78::func_ov107_022955d4() {
    func_ov002_022030ac(unk_26b8, 9);
    func_ov002_02200a58(this, 0xf);
    func_0200402c(0x28);
}

void Unk_ov107_02296e78::func_ov107_022955fc() {
    func_0206ed2c(unk_b9);
    func_0206ecf8(1);
    unk_8c = 3;
    func_ov002_02200a60(this, 1);
    func_ov002_022006e4(unk_2174, 1);
    func_ov107_02295950();
}

void Unk_ov107_02296e78::func_ov107_02295638() {
    unk_bc = 4;
    func_ov107_022957a8();
    func_ov002_02202064(unk_22b0, 0);
    func_ov002_02200a58(this, 0xd);
}

void Unk_ov107_02296e78::func_ov107_02295664(s32 a) {
    s32 r6, r2;
    func_ov002_0220160c(unk_22b0, unk_25a4, 0);
    r6 = func_ov107_02295d5c(unk_b9);
    r2 = func_ov107_02295d20(unk_b9);
    if (a != 0) {
        func_ov002_02202200(unk_22b0, unk_2174, r2);
    } else {
        func_ov002_0220229c(unk_22b0, r6, r2);
    }
    func_ov002_02202098(unk_22b0, 0);
    func_ov002_02200a58(this, 0xb);
}

void Unk_ov107_02296e78::func_ov107_022956d4() {
    if (unk_bc == 4) {
        func_ov107_02295f40();
    } else {
        static Unk_ov107_02296e78_Fn tbl[4] = {
            &Unk_ov107_02296e78::func_ov107_022951e0,
            &Unk_ov107_02296e78::func_ov107_02295270,
            &Unk_ov107_02296e78::func_ov107_02295048,
            &Unk_ov107_02296e78::func_ov107_02294ed4,
        };
        (this->*tbl[unk_bc])();
    }
}

void Unk_ov107_02296e78::func_ov107_02295768() {
    func_ov002_02202b68(&unk_224c);
    func_ov002_02200a58(this, 9);
}

void Unk_ov107_02296e78::func_ov107_02295788() {
    func_ov002_02202a78(&unk_224c);
    unk_224c.vfunc_0c();
}

void Unk_ov107_02296e78::func_ov107_022957a8() {
    s32 r4 = func_ov107_02295984();
    s32 r2 = func_ov107_02295974();
    func_ov002_02202a40(&unk_224c, r4, r2);
    func_ov002_02202d00(&unk_224c, 1);
}

void Unk_ov107_02296e78::func_ov107_022957dc() {
    s32 r4;
    s32 r2;
    unk_bd = 0;
    r4 = func_ov002_022014a4(unk_22b0);
    r2 = func_ov002_02201498(unk_22b0, unk_bd);
    func_ov002_02202a40(&unk_224c, r4, r2);
    func_ov002_02202d00(&unk_224c, 7);
}

void Unk_ov107_02296e78::func_ov107_02295828() {
    s32 r4;
    s32 r2;
    unk_bc = 4;
    unk_bd = func_ov002_02201a70(unk_22b0, 1);
    r4 = func_ov002_022014a4(unk_22b0);
    r2 = func_ov002_02201498(unk_22b0, unk_bd);
    func_ov002_02202a40(&unk_224c, r4, r2);
    func_0208d538(&unk_224c, 8);
    func_ov002_02200a58(this, 0xc);
}

void Unk_ov107_02296e78::func_ov107_0229588c() {
    s32 r4 = func_ov002_022014a4(unk_22b0);
    s32 r2 = func_ov002_02201498(unk_22b0, unk_bd);
    func_ov002_02202a18(&unk_224c, r4, r2, 2);
    unk_bb = unk_8d;
    func_ov002_02200a58(this, 8);
}

void Unk_ov107_02296e78::func_ov107_022958dc() {
    if (func_ov107_02294d74(4)) {
        s32 r5 = func_ov107_02295984();
        s32 r2 = func_ov107_02295974();
        func_ov002_02202a40(&unk_224c, r5, r2);
        func_ov107_02294d54(4);
    } else {
        s32 r5 = func_ov107_02295984();
        s32 r2 = func_ov107_02295974();
        func_ov002_022029e8(&unk_224c, r5, r2, 3, 1);
        unk_bb = unk_8d;
        func_ov002_02200a58(this, 8);
    }
}

void Unk_ov107_02296e78::func_ov107_02295950() {
    func_ov002_02202d00(&unk_224c, 0);
    unk_224c.vfunc_0c();
}

s32 Unk_ov107_02296e78::func_ov107_02295974() {
    return func_ov107_02295d20(unk_b8);
}

s32 Unk_ov107_02296e78::func_ov107_02295984() {
    s32 r4 = func_ov107_02295d5c(unk_b8);
    if (func_ov107_02294d74(0x10)) {
        r4 += 0x100;
    } else if (func_ov107_02294d74(8)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

void Unk_ov107_02296e78::func_ov107_022959c8() {
    s32 r4 = func_ov107_02295984();
    s32 r2 = func_ov107_02295974();
    func_ov002_02202a40(&unk_224c, r4, r2);
    if (unk_b8 == 0xf) {
        func_ov002_02202d00(&unk_224c, 7);
    } else {
        func_ov002_02202d00(&unk_224c, 1);
    }
    func_ov107_02295788();
}

void Unk_ov107_02296e78::func_ov107_02295a18() {
    if (!func_ov107_02294d74(0x20)) {
        if (unk_b5 != 0) {
            if (unk_b5 == 1) {
                func_ov094_0229313c(unk_10c, unk_a4, unk_a8);
            }
        }
    }
}

void Unk_ov107_02296e78::func_ov107_02295a50() {
    if (func_ov107_02295e48(unk_b8)) {
        if (func_ov107_02295be8(unk_b8)) {
            func_ov002_022006b0(unk_2174);
        } else {
            unk_b7 = unk_b8;
            func_ov002_022006b8(unk_2174);
        }
    } else {
        func_ov002_022006b0(unk_2174);
    }
}

void Unk_ov107_02296e78::func_ov107_02295aa4() {
    s32 r6 = func_ov107_02295d5c(unk_b7) - 0x6d;
    s32 r4 = func_ov107_02295d20(unk_b7) - 0x78;
    if (func_0206ef00()) r4 -= 8;
    func_02089ad8(unk_2174, r6, r4);
    if (func_ov107_02295e48(unk_b7)) {
        func_ov094_02293638(unk_10c, unk_2174, func_ov107_02295e2c(unk_b7));
    }
}

void Unk_ov107_02296e78::func_ov107_02295b14(s32 a) {
    if (func_ov107_02295e48(a)) {
        func_ov094_0229359c(unk_10c, func_ov107_02295e2c(a));
        func_ov094_022943f8(unk_b6c);
    } else {
        func_ov107_02295b58();
    }
}

void Unk_ov107_02296e78::func_ov107_02295b58() {
    func_ov094_022935dc(unk_10c);
    func_ov094_022943f8(unk_b6c);
}

u32 Unk_ov107_02296e78::func_ov107_02295b7c(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_02293504(unk_10c, func_ov107_02295e2c(a));
    }
    return 0xf1;
}

u32 Unk_ov107_02296e78::func_ov107_02295bb0(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_0229352c(unk_10c, func_ov107_02295e2c(a));
    }
    return 0xfff1;
}

BOOL Unk_ov107_02296e78::func_ov107_02295be8(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_0229311c(unk_10c, func_ov107_02295e2c(a));
    }
    return TRUE;
}

BOOL Unk_ov107_02296e78::func_ov107_02295c1c(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_0229333c(unk_10c, func_ov107_02295e2c(a));
    }
    return FALSE;
}

BOOL Unk_ov107_02296e78::func_ov107_02295c50(s32 a) {
    u32 r;
    if (func_ov107_02295be8(a)) return FALSE;
    if (func_ov107_02295b7c(a)) return TRUE;
    r = func_ov107_02295bb0(a);
    if ((r >= 0x137c && r <= 0x137c) || (r >= 0x1408 && r <= 0x1428) || (r >= 0x1471 && r <= 0x1491)) {
        return TRUE;
    }
    if (r >= 0x12e8 && r <= 0x131f) {
        if (!func_ov107_02294d74(0x40)) return TRUE;
    }
    return FALSE;
}

void Unk_ov107_02296e78::func_ov107_02295ce4() {
    u8 i = 0;
    do {
        if (func_ov107_02295c50(i)) {
            func_ov094_02293308(unk_10c, func_ov107_02295e2c(i));
        }
        i++;
    } while (i <= 0xe);
}

s32 Unk_ov107_02296e78::func_ov107_02295d20(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_02293610(unk_10c, func_ov107_02295e2c(a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

s32 Unk_ov107_02296e78::func_ov107_02295d5c(s32 a) {
    if (func_ov107_02295e48(a)) {
        return func_ov094_02293624(unk_10c, func_ov107_02295e2c(a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

void Unk_ov107_02296e78::func_ov107_02295d98(s32 a, s32 b, s32 c) {
    if (func_ov107_02295e48(a)) {
        s32 t = func_ov107_02295e2c(a);
        func_ov094_02293494(unk_10c, t, b, c);
        func_ov094_02293434(unk_10c, t);
    }
}

u32 Unk_ov107_02296e78::func_ov107_02295ddc(s32 a, s32 b, s32 c) {
    u32 t = func_ov094_02293968(unk_10c);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(unk_10c, t)) return 0x10;
        }
        return func_ov107_02295e1c(t);
    }
    return 0x10;
}

u32 Unk_ov107_02296e78::func_ov107_02295e1c(s32 a) {
    if ((u32)a <= 0xe) return (u8)a;
    return 0x10;
}

u32 Unk_ov107_02296e78::func_ov107_02295e2c(s32 a) {
    if (func_ov107_02295e48(a)) return (u8)a;
    return 0;
}

BOOL Unk_ov107_02296e78::func_ov107_02295e48(s32 a) {
    if ((u32)a <= 0xe) return TRUE;
    return FALSE;
}

void Unk_ov107_02296e78::func_ov107_02295e54() {
    func_020b87d0(unk_d4);
}

void Unk_ov107_02296e78::func_ov107_02295e60(s32 a, u32 b) {
    volatile u8 v[1];
    if (b == 0xff) {
        unk_bb = unk_8d;
    } else {
        unk_bb = b;
    }
    v[0] = data_021edb68;
    v[0] = a;
    func_ov002_02204394(unk_25b0, (void *)v, 1, 0);
    func_ov002_02200a58(this, 0xe);
    func_0208d63c(&unk_224c);
}
