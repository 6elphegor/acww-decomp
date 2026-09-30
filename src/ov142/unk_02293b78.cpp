#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_0206ef0c();
void func_0200402c(u32 id);
void func_0206ecf8(s32 a);
void func_0206e738(u32 a);
void func_020b87d0(void *p);
s32 func_0200261c(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 func_020026c4(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 func_020641b4(const void *src, void *dst, s32 n);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
}

extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern void *data_021f482c;
extern u8 data_ov142_02294e98[];
extern u8 data_ov142_02294eb0[];
extern u8 data_ov142_02294ec8[];
extern u8 data_ov142_02294ee0[];
extern u8 data_ov142_02294ef8[];
extern u8 data_ov142_02294f10[];
extern u8 data_ov142_02294f24[];
extern u8 data_ov142_02294f3c[];
extern u8 data_ov142_02294f54[];
extern u8 data_ov142_02294f6c[];

// sub-object at +0xe8 (Unk_ov002_02202d98 shape, size 0x64)
class Unk_ov002_02202d98 {
public:
    virtual ~Unk_ov002_02202d98();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    s32 func_0208d534();
    BOOL func_ov002_022028f0();
    void func_ov002_02202a40(s32 x, s32 y);
    u8 unk_04[0x60];
};

// sub-object at +0x14c (Unk_ov002_022046b0 shape, size 0x48)
class Unk_ov002_022046b0 {
public:
    virtual ~Unk_ov002_022046b0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 func_ov002_02202ed0();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    u8 unk_04[0x44];
};

// sub-object at +0x194 (size 0x164)
class Unk_ov002_022046cc {
public:
    virtual ~Unk_ov002_022046cc();
    void func_ov002_02202fac();
    BOOL func_ov002_0220308c();
    s32 func_ov002_0220306c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);
    void func_ov002_02203900();
    u8 unk_04[0x160];
};
extern "C" void func_ov002_02203920(void *p);

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

    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
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

class Unk_ov142_02294da8 : public Unk_ov002_022044e4 {
public:
    Unk_ov142_02294da8();
    virtual ~Unk_ov142_02294da8();

    // other groups
    void func_ov142_02292008(u32 m);
    void func_ov142_02292018(u32 m);
    BOOL func_ov142_02292028(u32 m);
    void func_ov142_0229203c();
    void func_ov142_022921f0();
    void func_ov142_022922c8();
    void func_ov142_022922d8();
    void func_ov142_022922e8();
    void func_ov142_022922f8();
    BOOL func_ov142_022924a0();
    void func_ov142_022924c8();
    void func_ov142_02292554();
    void func_ov142_02292564(s32 a, s32 b);
    BOOL func_ov142_022925dc(s32 a, s32 b);
    BOOL func_ov142_02292624(s32 a);
    void func_ov142_02292ab8(s32 a, s32 b);
    s32 func_ov142_02292bbc(s32 a, s32 b);
    BOOL func_ov142_02292c58(s32 a);
    void func_ov142_02292e1c();
    void func_ov142_02292f00();
    u16 *func_ov142_02293004(s32 i);
    void func_ov142_022931a0();
    void func_ov142_0229320c();
    void func_ov142_02293240();
    void func_ov142_02293274();
    void func_ov142_022932a8();
    void func_ov142_022932dc();
    void func_ov142_02293314();
    void func_ov142_02293348();
    void func_ov142_0229337c();
    void func_ov142_02293820();
    void func_ov142_02293884();
    void func_ov142_022938a8();
    void func_ov142_022938c0();
    void func_ov142_0229390c();
    void func_ov142_02293954();
    s32 func_ov142_02293970();
    s32 func_ov142_02293a0c();
    void func_ov142_02293a94();
    void func_ov142_02293acc();
    void func_ov142_02293af8();
    void func_ov142_02293b34();
    void func_ov142_02294750();

    // this group
    void func_ov142_02293b78();
    void func_ov142_02293b98();
    void func_ov142_02293bbc();
    void func_ov142_02293bd4();
    void func_ov142_02293bfc();
    void func_ov142_02293c38();
    void func_ov142_02293c50();
    void func_ov142_02293cb8();
    void func_ov142_02293d10();
    void func_ov142_02293d54();
    void func_ov142_02293dfc();
    void func_ov142_02293e68();
    void func_ov142_02293e8c();
    void func_ov142_02293ec0();
    void func_ov142_02293ee8();
    void func_ov142_02293f1c();
    void func_ov142_02293f5c();
    void func_ov142_02293fa8();
    void func_ov142_02294030();
    void func_ov142_02294058();
    void func_ov142_0229408c();
    void func_ov142_022940c0();
    void func_ov142_022941c4();
    void func_ov142_02294234();
    void func_ov142_02294334();
    void func_ov142_0229435c();
    void func_ov142_022943c0();
    void func_ov142_022943d8();
    void func_ov142_02294424();

    /* 0x091 */ u8 unk_91[0xb6 - 0x91];
    /* 0x0b6 */ u16 unk_b6;
    /* 0x0b8 */ s16 unk_b8;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd[2];
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ u16 unk_c4[9];
    /* 0x0d6 */ u16 unk_d6[9];
    /* 0x0e8 */ Unk_ov002_02202d98 unk_e8;
    /* 0x14c */ Unk_ov002_022046b0 unk_14c;
    /* 0x194 */ Unk_ov002_022046cc unk_194;
    /* 0x2f8 */ u8 unk_2f8[0x380];
    /* 0x678 */ u32 unk_678[9];
    /* 0x69c */ u32 unk_69c[9];
    /* 0x6c0 */ u32 unk_6c0[9];
    /* 0x6e4 */ u32 unk_6e4[9];
    /* 0x708 */ u8 unk_708[0x157e - 0x708];
    /* 0x157e */ u16 unk_157e[9];
    /* 0x1590 */ u8 unk_1590[0x800];
    /* 0x1d90 */ u8 unk_1d90[0x800];
    /* 0x2590 */ u8 unk_2590[0x800];
    /* 0x2d90 */ u8 unk_2d90[0x40];
    /* 0x2dd0 */ u8 unk_2dd0[0x40];
};

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_02293b78() {
    if (func_0206ef0c()) {
        func_ov142_02293bbc();
    } else {
        func_ov142_02293b98();
    }
}

void Unk_ov142_02294da8::func_ov142_02293b98() {
    unk_c0 = 0x18;
    func_ov142_02293a94();
    func_ov002_02200980();
    func_ov002_02200a58(0xc);
}

void Unk_ov142_02294da8::func_ov142_02293bbc() {
    func_ov142_02293954();
    func_ov002_02200a58(0xb);
}

void Unk_ov142_02294da8::func_ov142_02293bd4() {
    if (func_0206ef0c()) {
        func_ov142_02293c38();
    } else {
        func_ov142_02293bfc();
    }
    func_ov142_02292008(0x80);
}

void Unk_ov142_02294da8::func_ov142_02293bfc() {
    if (func_ov142_02292028(0x80)) {
        func_ov142_02292008(0x80);
    } else {
        unk_c0 = 0;
    }
    func_ov142_02293a94();
    func_ov002_02200980();
    func_ov002_02200a58(4);
}

void Unk_ov142_02294da8::func_ov142_02293c38() {
    func_ov142_02293954();
    func_ov002_02200a58(0);
}

void Unk_ov142_02294da8::func_ov142_02293c50() {
    if (unk_194.func_ov002_0220308c()) {
        if (unk_e8.func_0208d534()) {
            s32 a = unk_194.func_ov002_0220306c();
            s32 b = unk_194.func_ov002_022030f4(-1);
            s32 c = unk_194.func_ov002_022030b8(-1);
            unk_e8.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov142_02293954();
        func_ov002_02200a60(1);
    }
}

void Unk_ov142_02294da8::func_ov142_02293cb8() {
    func_0200402c(0x2a);
    unk_194.func_ov002_022030ac(4);
    unk_8c = 6;
    func_ov002_0220085c(0, 0);
    func_ov002_02200a58(0xd);
    func_ov142_02292018(0x80);
    unk_c0 = 0x12;
    unk_bf = 5;
    func_ov142_022922f8();
}

void Unk_ov142_02294da8::func_ov142_02293d10() {
    func_0200402c(0x29);
    unk_194.func_ov002_022030ac(3);
    func_ov002_02200a58(0xd);
    func_0206ecf8(1);
    func_0206e738(*func_ov142_02293004(unk_b8));
    func_ov142_02293b34();
}

void Unk_ov142_02294da8::func_ov142_02293d54() {
    u8 old;
    if (func_ov002_022009d4()) {
        func_ov142_02293bbc();
        return;
    }
    old = unk_c0;
    func_ov002_022009c8();
    if (func_ov002_022009a4()) {
        unk_c0 = 0x17;
    } else if (func_ov002_02200998()) {
        unk_c0 = 0x18;
    }
    if (old != unk_c0) {
        func_ov142_0229390c();
        return;
    }
    {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov142_022938a8();
            return;
        }
        if (k & 8) {
            func_ov142_02293954();
            func_ov142_02293d10();
        }
    }
    if (data_021f47d8[1] & 2) {
        func_ov142_02293954();
        func_ov142_02293cb8();
    }
}

void Unk_ov142_02294da8::func_ov142_02293dfc() {
    if (func_ov002_02200a14(1)) {
        func_ov142_02293b98();
        return;
    }
    if (Both()) {
        if (unk_194.func_ov002_02203110(3)) {
            func_ov142_02293d10();
        } else if (unk_194.func_ov002_02203110(4)) {
            func_ov142_02293cb8();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02293e68() {
    if (unk_e8.func_0208d4fc()) {
        func_ov142_022938c0();
        func_ov002_02200a58(unk_ba);
    }
}

void Unk_ov142_02294da8::func_ov142_02293e8c() {
    if (unk_e8.func_0208d4fc()) {
        if (!func_ov142_02292c58(unk_c0)) {
            func_ov002_02200a58(4);
            func_ov142_02293884();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02293ec0() {
    if (!unk_e8.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_ba);
        func_ov142_02294750();
    }
}

void Unk_ov142_02294da8::func_ov142_02293ee8() {
    if (data_021f47d8[0] & 1) {
        func_ov142_022921f0();
    } else {
        func_ov142_022922c8();
        func_ov002_02200a58(4);
        func_ov142_02293884();
    }
}

void Unk_ov142_02294da8::func_ov142_02293f1c() {
    if (func_ov142_022924a0()) {
        func_ov002_02200a58(4);
        func_ov142_02293884();
    }
    s32 a = func_ov142_02293a0c();
    s32 b = func_ov142_02293970();
    unk_e8.func_ov002_02202a40(a, b);
}

void Unk_ov142_02294da8::func_ov142_02293f5c() {
    if (data_021f47d8[0] & 1) {
        func_ov142_022924c8();
        s32 a = func_ov142_02293a0c();
        s32 b = func_ov142_02293970();
        unk_e8.func_ov002_02202a40(a, b);
    } else {
        func_ov142_02292554();
        func_ov002_02200a58(6);
    }
}

void Unk_ov142_02294da8::func_ov142_02293fa8() {
    if (func_ov002_022009d4()) {
        func_ov142_02293c38();
        return;
    }
    if (func_ov142_02292624(func_ov002_022009c8())) {
        func_ov142_0229390c();
        return;
    }
    u32 k = data_021f47d8[1];
    if (k & 1) {
        func_ov142_022938a8();
    } else if (k & 2) {
        func_ov142_02293954();
        func_ov142_02293acc();
    } else if (k & 8) {
        if (func_ov142_02292028(0x20)) {
            func_ov142_02293954();
            func_ov142_02293af8();
        }
    }
}

void Unk_ov142_02294da8::func_ov142_02294030() {
    if (data_021f4770 != 0) {
        func_ov142_022921f0();
    } else {
        func_ov142_022922c8();
        func_ov002_02200a58(0);
    }
}

void Unk_ov142_02294da8::func_ov142_02294058() {
    if (data_021f4770 != 0) {
        func_ov142_02292564(data_021ef5ec, 1);
    } else {
        func_ov142_02292554();
        func_ov002_02200a58(0);
    }
}

void Unk_ov142_02294da8::func_ov142_0229408c() {
    if (data_021f4770 != 0) {
        func_ov142_02292564(data_021ef5ec, 0);
    } else {
        func_ov142_02292554();
        func_ov002_02200a58(0);
    }
}

void Unk_ov142_02294da8::func_ov142_022940c0() {
    if (func_ov002_02200a14(1)) {
        func_ov142_02293bfc();
        return;
    }
    if (Both()) {
        s32 x = data_021ef5f0;
        s32 y = data_021ef5ec;
        s32 r = func_ov142_02292bbc(x, y);
        if (r != 0x19) {
            func_ov142_02292c58(r);
            return;
        }
        if (func_ov142_02292028(0x100)) {
            return;
        }
        if (func_ov142_022925dc(x, y)) {
            func_ov002_02200a58(1);
            return;
        }
        if (x < 0xb8 || x >= 0xc8) {
            return;
        }
        if (!func_ov142_02292028(0x400) && y >= 0x19 && y < 0x29) {
            func_ov142_022922e8();
            func_ov002_02200a58(3);
            return;
        }
        if (!func_ov142_02292028(0x800) && y >= 0x95 && y < 0xa5) {
            func_ov142_022922d8();
            func_ov002_02200a58(3);
            return;
        }
        if (y >= 0x2c && y <= 0x86) {
            unk_14c.func_ov002_02202f00();
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov142_02294da8::func_ov142_022941c4() {
    func_ov002_02203920(&unk_194);
    void *h = data_021f482c;
    func_0200261c(data_ov142_02294e98, h, 8, 0xc0, 0xc0, 0x11f);
    func_0200261c(data_ov142_02294eb0, h, 8, 0x120, 0x120, 0x17f);
    func_020026c4(data_ov142_02294ec8, h, 8, 4, 4, 9);
}

void Unk_ov142_02294da8::func_ov142_02294234() {
    void *h = data_021f482c;
    func_0200261c(data_ov142_02294ee0, h, 6, 0x11, 0x11, 0x51);
    func_0200261c(data_ov142_02294ef8, h, 6, 0x156, 0x156, 0x174);
    func_020026c4(data_ov142_02294f10, h, 6, 1, 1, 5);
    func_020641b4(data_ov142_02294f24, unk_2d90, 0x20);
    func_020641b4(data_ov142_02294f3c, unk_2dd0, 0x20);
    func_020641b4(data_ov142_02294f54, unk_1590, 0x800);
    func_020641b4(data_ov142_02294f6c, unk_2590, 0x800);
}

extern "C" void func_ov142_022942e8() {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov142_02294da8::func_ov142_02294334() {
    func_ov142_0229203c();
    func_ov142_02292e1c();
    func_ov142_02292f00();
    unk_14c.func_ov002_02202ed0();
}

void Unk_ov142_02294da8::func_ov142_0229435c() {
    func_020b87d0(unk_678);
    func_020b87d0(unk_69c);
    func_020b87d0(unk_6c0);
    func_020b87d0(unk_6e4);
    func_ov142_02293820();
    unk_194.func_ov002_02203900();
    unk_14c.vfunc_0c();
}

void Unk_ov142_02294da8::func_ov142_022943c0() {
    func_ov142_0229435c();
    unk_e8.vfunc_0c();
}

void Unk_ov142_02294da8::func_ov142_022943d8() {
    func_ov142_02293820();
    unk_194.func_ov002_02203900();
    func_020b87d0(unk_678);
    func_020b87d0(unk_69c);
    func_020b87d0(unk_6c0);
    func_020b87d0(unk_6e4);
}

void Unk_ov142_02294da8::func_ov142_02294424() {
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_c4[i] = 0;
        unk_d6[i] = 0;
    }
    i = 0;
    for (; i < 9; i++) {
        unk_157e[i] = 0xfff1;
    }
    unk_b6 = 0;
    unk_bc = 9;
    unk_c1 = 3;
    unk_c2 = 0;
    func_ov142_02292ab8(9, -1);
    func_ov142_0229337c();
    func_ov142_02293348();
    func_ov142_02293314();
    func_ov142_022932dc();
    func_ov142_022932a8();
    func_ov142_02293274();
    func_ov142_022931a0();
    func_ov142_02293240();
    func_ov142_0229320c();
    unk_14c.func_ov002_02202f0c();
}

extern "C" void func_ov142_022943b8(Unk_ov142_02294da8 *p) { p->func_ov142_02294334(); }
