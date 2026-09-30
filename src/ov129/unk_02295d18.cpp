#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_0206ef0c();
BOOL func_0206ef00();
void func_0200151c(s32 a);
void func_0200152c(s32 a);
void func_020021b8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02001710(s32 a, s32 b);
void *func_020ed174();
void func_020ed188(void *p);
void func_ov092_02291ce4(void *a, s32 b, s32 c);
void func_ov092_02291c5c();
void func_ov127_02292724(void *s, s32 a);
void func_ov127_02292780(void *s, s32 a);
void func_ov127_022927a8(void *s, s32 a, s32 b);
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    void func_ov002_02200980();
    s32 func_ov002_02200920();
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
};


// sub-object at +0xb8 (ctor func_ov002_02204400)
class Unk_ov129_02204400 {
public:
    Unk_ov129_02204400();
    u32 unk_00[0x108 / 4];
};

// sub-object at +0x1c0 (ctor func_ov002_02203994)
class Unk_ov129_02203994 {
public:
    Unk_ov129_02203994();
    void func_ov002_02202fc8(s32 a);
    void func_ov002_02202fe4(s32 a);
    s32 func_ov002_022030b8(s32 a);
    s32 func_ov002_022030f4(s32 a);
    void func_ov002_02203370(s32 a);
    void func_ov002_02203548();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

// sub-object at +0x324 (polymorphic, ctor func_ov002_02202658)
class Unk_ov129_02202658 {
public:
    Unk_ov129_02202658();
    virtual ~Unk_ov129_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202d00(s32 a);
    u32 unk_04[0x60 / 4];
};

// sub-object at +0x388 (ctor func_020b08b8)
class Unk_ov129_020b08b8 {
public:
    Unk_ov129_020b08b8();
    u32 unk_00[0x330 / 4];
};

// sub-object at +0x6b8 (ov127 state, ctor func_ov127_02292aac)
class Unk_ov129_ov127_02292aac {
public:
    Unk_ov129_ov127_02292aac();
    u32 unk_00[0x2a30 / 4];
};

class Unk_ov129_022965f8;
typedef void (Unk_ov129_022965f8::*Unk_ov129_022965f8_Fn)();

// Vtable 0x022965f8, size 0x30e8
class Unk_ov129_022965f8 : public Unk_ov002_022044e4 {
public:
    Unk_ov129_022965f8()
        : unk_b8(), unk_1c0(), unk_324(), unk_388(), unk_6b8() {}
    virtual ~Unk_ov129_022965f8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    void func_ov129_0229418c(u8 v);
    void func_ov129_0229419c(u8 v);
    BOOL func_ov129_022941ac(s32 v);
    void func_ov129_022948a4(s32 v);
    void func_ov129_022948d0();
    void func_ov129_02294db0();
    void func_ov129_022951d8();
    void func_ov129_02295ac8();
    void func_ov129_02295b38();
    void func_ov129_02295b70();
    void func_ov129_02295bd0();
    void func_ov129_02295bfc();
    void func_ov129_02295c04();
    void func_ov129_02295c20();
    void func_ov129_02295c88();
    // 0x8d table targets (other groups)
    void func_ov129_022959c0();
    void func_ov129_02295980();
    void func_ov129_02295914();
    void func_ov129_0229570c();
    void func_ov129_02295654();
    void func_ov129_02295604();
    void func_ov129_022955c0();
    void func_ov129_02295594();
    void func_ov129_022954c0();
    void func_ov129_02295494();
    void func_ov129_02295428();
    void func_ov129_022953bc();
    void func_ov129_022952a4();
    void func_ov129_02295270();
    void func_ov129_02295248();

    // in range
    void func_ov129_02295d18();
    void func_ov129_02295d38();
    void func_ov129_02295d98();
    void func_ov129_02295db0();
    void func_ov129_02295df8();
    void func_ov129_02295e48();
    void func_ov129_02295e70();
    void func_ov129_02295e8c();
    void func_ov129_02295eb8();
    void func_ov129_02295f0c();
    void func_ov129_02295f40();
    void func_ov129_02295f5c();
    void func_ov129_02295fa4();
    void func_ov129_02295fd0();
    void func_ov129_0229600c();
    void func_ov129_02296054();
    void func_ov129_0229609c();
    void func_ov129_02296138();

    /* 0x0091 */ u8 unk_91[0xb];
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ u8 unk_a4[0xb];
    /* 0x00af */ u8 unk_af;
    /* 0x00b0 */ u8 unk_b0;
    /* 0x00b1 */ u8 unk_b1;
    /* 0x00b2 */ u8 unk_b2;
    /* 0x00b3 */ u8 unk_b3;
    /* 0x00b4 */ u8 unk_b4[4];
    /* 0x00b8 */ Unk_ov129_02204400 unk_b8;
    /* 0x01c0 */ Unk_ov129_02203994 unk_1c0;
    /* 0x0324 */ Unk_ov129_02202658 unk_324;
    /* 0x0388 */ Unk_ov129_020b08b8 unk_388;
    /* 0x06b8 */ Unk_ov129_ov127_02292aac unk_6b8;
};

void Unk_ov129_022965f8::func_ov129_02295d18() {
    if (func_0206ef0c()) {
        func_ov129_02295d98();
    } else {
        func_ov129_02295d38();
    }
}

void Unk_ov129_022965f8::func_ov129_02295d38() {
    func_ov002_02200980();
    unk_af = 1;
    unk_324.func_ov002_02202d00(1);
    unk_324.vfunc_0c();
    s32 t = unk_1c0.func_ov002_022030f4(4);
    unk_324.func_ov002_02202a40(t, unk_1c0.func_ov002_022030b8(4));
    func_ov002_02200a58(0xc);
}

void Unk_ov129_022965f8::func_ov129_02295d98() {
    func_ov129_02294db0();
    func_ov002_02200a58(0xb);
}

void Unk_ov129_022965f8::func_ov129_02295db0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov129_022951d8();
        func_ov129_0229419c(0x10);
        func_ov129_022948a4(1);
    }
    unk_a0 = func_ov002_02200920();
    unk_9c = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295df8() {
    func_ov002_02200874(0, 0);
    unk_1c0.func_ov002_02203548();
    if (unk_b1 == 2) {
        unk_1c0.func_ov002_02202fc8(6);
    } else {
        unk_1c0.func_ov002_02202fe4(6);
    }
    func_ov002_02200a50(0xb);
    func_ov129_0229419c(1);
}

void Unk_ov129_022965f8::func_ov129_02295e48() {
    if (func_ov002_022008fc(-1)) {
        func_ov129_02295df8();
    }
    unk_a0 = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295e70() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(9);
}

void Unk_ov129_022965f8::func_ov129_02295e8c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov129_02295d18();
    }
    unk_a0 = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295eb8() {
    func_ov002_02200874(0, 0);
    unk_1c0.func_ov002_02202fc8(6);
    if (func_ov129_022941ac(4)) {
        unk_1c0.func_ov002_02203370(0x87);
    } else {
        unk_1c0.func_ov002_02203370(0x22);
    }
    func_ov129_0229418c(1);
    func_ov002_02200a50(7);
}

void Unk_ov129_022965f8::func_ov129_02295f0c() {
    if (func_ov002_022008fc(-1)) {
        func_ov129_02295eb8();
    }
    unk_a0 = func_ov002_02200920();
    unk_9c = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295f40() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(5);
}

void Unk_ov129_022965f8::func_ov129_02295f5c() {
    s32 a = func_ov002_02200920() - 0x40;
    if (a < 0) {
        a = 0;
    }
    s32 b = func_ov002_02200920() - 0x30;
    if (b <= 0) {
        func_0200151c(2);
    } else {
        func_0200152c(2);
        func_020021b8(3, 0, a, 0xff, b);
    }
}

void Unk_ov129_022965f8::func_ov129_02295fa4() {
    func_ov002_02200840(6, 0, 0);
    unk_9c = func_ov002_02200920();
    unk_a0 = func_ov002_02200920();
}

void Unk_ov129_022965f8::func_ov129_02295fd0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(6);
        func_0200151c(2);
        func_ov002_02200a60(5);
    } else {
        func_ov129_02295f5c();
        func_ov129_02295fa4();
    }
}

void Unk_ov129_022965f8::func_ov129_0229600c() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(9, 0, 0, 0x30);
    func_02001710(0x1e, 1);
    func_ov129_02295f5c();
    func_ov129_02295fa4();
    func_ov002_02200a50(3);
}

void Unk_ov129_022965f8::func_ov129_02296054() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov129_022951d8();
        func_ov129_0229419c(0x10);
        func_ov129_022948a4(1);
        func_0200151c(2);
    } else {
        func_ov129_02295f5c();
    }
    func_ov129_02295fa4();
}

void Unk_ov129_022965f8::func_ov129_0229609c() {
    func_ov129_02295b38();
    func_ov129_02295ac8();
    func_ov129_022948d0();
    func_ov002_022008e0(9, 4, 0, 0x30);
    func_02001710(0x1e, 1);
    func_ov129_02295f5c();
    func_020020b8(3);
    func_020020b8(6);
    func_ov129_0229419c(1);
    func_ov129_0229419c(8);
    func_ov129_02295fa4();
    func_ov002_02200a50(1);
}

BOOL Unk_ov129_022965f8::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_58() { return TRUE; }

BOOL Unk_ov129_022965f8::vfunc_54() { return TRUE; }

BOOL Unk_ov129_022965f8::vfunc_50() {
    func_ov129_02295c04();
    func_ov129_02296138();
    func_ov129_02295bfc();
    return TRUE;
}

void Unk_ov129_022965f8::func_ov129_02296138() {
    static Unk_ov129_022965f8_Fn tbl[15] = {
        &Unk_ov129_022965f8::func_ov129_022959c0,
        &Unk_ov129_022965f8::func_ov129_02295980,
        &Unk_ov129_022965f8::func_ov129_02295914,
        &Unk_ov129_022965f8::func_ov129_0229570c,
        &Unk_ov129_022965f8::func_ov129_02295654,
        &Unk_ov129_022965f8::func_ov129_02295604,
        &Unk_ov129_022965f8::func_ov129_022955c0,
        &Unk_ov129_022965f8::func_ov129_02295594,
        &Unk_ov129_022965f8::func_ov129_022954c0,
        &Unk_ov129_022965f8::func_ov129_02295494,
        &Unk_ov129_022965f8::func_ov129_02295428,
        &Unk_ov129_022965f8::func_ov129_022953bc,
        &Unk_ov129_022965f8::func_ov129_022952a4,
        &Unk_ov129_022965f8::func_ov129_02295270,
        &Unk_ov129_022965f8::func_ov129_02295248};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov129_022965f8::vfunc_4c() {
    static Unk_ov129_022965f8_Fn tbl[12] = {
        &Unk_ov129_022965f8::func_ov129_0229609c,
        &Unk_ov129_022965f8::func_ov129_02296054,
        &Unk_ov129_022965f8::func_ov129_0229600c,
        &Unk_ov129_022965f8::func_ov129_02295fd0,
        &Unk_ov129_022965f8::func_ov129_02295f40,
        &Unk_ov129_022965f8::func_ov129_02295f0c,
        &Unk_ov129_022965f8::func_ov129_02295eb8,
        &Unk_ov129_022965f8::func_ov129_02295e8c,
        &Unk_ov129_022965f8::func_ov129_02295e70,
        &Unk_ov129_022965f8::func_ov129_02295e48,
        &Unk_ov129_022965f8::func_ov129_02295df8,
        &Unk_ov129_022965f8::func_ov129_02295db0};
    func_ov129_02295bd0();
    (this->*tbl[unk_8c])();
    func_ov129_02295b70();
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_24() {
    if (func_0206ef00()) {
        unk_324.func_ov002_02202844();
    }
    if (func_ov129_022941ac(8)) {
        unk_1c0.func_ov002_022036a4(unk_a0);
    }
    if (func_0206ef00()) {
        if (func_ov129_022941ac(0x10)) {
            func_ov127_02292780(&unk_6b8, 0);
        }
    }
    if (func_ov129_022941ac(1)) {
        func_ov127_022927a8(&unk_6b8, unk_9c, 5);
    }
    if (unk_b3 != 0xff) {
        if (func_ov129_022941ac(0x80)) {
            func_ov127_02292724(&unk_6b8, unk_b3);
        }
    }
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov129_02295c20();
    return TRUE;
}

BOOL Unk_ov129_022965f8::vfunc_00() {
    func_ov129_02295c88();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov129_022965f8 *func_ov129_02296438() { return new Unk_ov129_022965f8(); }

Unk_ov129_022965f8::~Unk_ov129_022965f8() {}
