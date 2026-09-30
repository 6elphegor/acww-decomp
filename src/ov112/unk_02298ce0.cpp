#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void *func_020ed174(void *p);
void func_020ed188(void *p);
void func_0206e63c();
BOOL func_0206e61c();
BOOL func_0206ef0c();
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_ov092_02291ce4(void *a, s32 b, s32 c);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p, s32 a);
void func_ov095_0229483c(void *p, s32 a);
void func_ov095_02294358(void *p, s32 a);
void func_020b87d0(void *p);
void func_0205125c(void *p, s32 n);
s32 func_02051268(void *src, void *dst, s32 n);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206f874(void *p);
void func_0206f85c(void *p);
void func_0206f9fc(void *o, u32 x);
void func_020a77f8(void *dst, void *src);
void func_02094030(void *p);
void func_02094018(void *p);
s32 func_0209750c();
s32 func_0209888c(s32 p);
void func_020940d0(s32 a, void *p);
void func_020b3544(s32 a, void *p);
void func_02115fb4(void *p, u32 v, u32 n);
}

struct Unk_ov112_02298d4c_A {
    u32 v[0x10];
    Unk_ov112_02298d4c_A() { func_0206fcc8(this); }
    ~Unk_ov112_02298d4c_A() { func_0206fca8(this); }
};
struct Unk_ov112_02298d4c_B {
    u32 v[7];
    Unk_ov112_02298d4c_B() { func_02094030(this); }
    ~Unk_ov112_02298d4c_B() { func_02094018(this); }
};
struct Unk_ov112_02298d4c_C {
    u8 pad[0xe];
    char text[0x2a];
    Unk_ov112_02298d4c_C() { func_0206f874(this); }
    ~Unk_ov112_02298d4c_C() { func_0206f85c(this); }
};

class Unk_ov112_02299b10;

// object at +0x40ac / +0x4258 (polymorphic, slot 0x0c called)
class Unk_ov112_040ac {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202f0c();
    u32 unk_04[0x44 / 4];
};

class Unk_ov112_04258 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[(0xa08 - 4) / 4];
};

// object at +0x40f4 (Unk_ov002_022046cc)
class Unk_ov112_040f4 {
public:
    void func_ov002_02203650();
    void func_ov002_02203900();
    void func_ov002_022033ec(s32 x);
    u32 unk_00[0x164 / 4];
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
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

typedef void (Unk_ov112_02299b10::*Unk_ov112_02299b10_Fn)();

// Vtable 0x02299b10
class Unk_ov112_02299b10 : public Unk_ov002_022044e4 {
public:
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov112_02296a18();
    void func_ov112_02296a8c();
    void func_ov112_02296abc();
    BOOL func_ov112_0229695c();
    void func_ov112_022969f8();
    BOOL func_ov112_022974f0();
    void func_ov112_022974fc(s32 a);
    void func_ov112_02297540();
    void func_ov112_02297574();
    void func_ov112_022976a8();
    void func_ov112_0229706c();
    void func_ov112_022977f8(s32 a);
    void func_ov112_02297808(s32 a);
    BOOL func_ov112_02297818(s32 a);
    void func_ov112_0229782c();
    void func_ov112_0229788c();
    void func_ov112_022978e0();
    void func_ov112_02297940();
    void func_ov112_02298b40();
    void func_ov112_02298c30();
    void func_ov112_02298c68();

    // state functions (vfunc_50 table targets)
    void func_ov112_02298a00();
    void func_ov112_022989c4();
    void func_ov112_02298988();
    void func_ov112_02298928();
    void func_ov112_022988cc();
    void func_ov112_02298860();
    void func_ov112_022987a8();
    void func_ov112_0229877c();
    void func_ov112_022986a8();
    void func_ov112_0229864c();
    void func_ov112_02298624();
    void func_ov112_022985b8();
    void func_ov112_022984b4();
    void func_ov112_02298440();
    void func_ov112_02298410();
    void func_ov112_022983e0();
    void func_ov112_022983bc();
    void func_ov112_02298380();
    void func_ov112_02298354();
    void func_ov112_0229823c();
    void func_ov112_02298208();
    void func_ov112_0229819c();
    void func_ov112_0229816c();

    // in range
    void func_ov112_02298ce0();
    void func_ov112_02298d18();
    void func_ov112_02298d4c();
    void func_ov112_02298e3c();
    void func_ov112_02298ea4();
    void func_ov112_02298f20();
    void func_ov112_02298f68();
    void func_ov112_02298fe8();
    void func_ov112_02299048();
    void func_ov112_022990ac();
    void func_ov112_022990d4();
    void func_ov112_02299108();
    void func_ov112_02299148();
    void func_ov112_022991a0();
    void func_ov112_022991f0();
    void func_ov112_02299250();
    void func_ov112_022992e4();
    void func_ov112_02299434();

    /* 0x094 */ u8 unk_94[0xc];
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ u8 unk_b0[6];
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9[7];
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1[2];
    /* 0x0c3 */ u8 unk_c3[0x34c - 0xc3];
    /* 0x34c */ u8 unk_34c[0x24];
    /* 0x370 */ u8 unk_370[0x40ac - 0x370];
    /* 0x40ac */ Unk_ov112_040ac unk_40ac;
    /* 0x40f4 */ Unk_ov112_040f4 unk_40f4;
    /* 0x4258 */ Unk_ov112_04258 unk_4258;
    /* 0x4c60 */ u8 unk_4c60[0x1e00];
};

void Unk_ov112_02299b10::func_ov112_02298ce0() {
    func_ov112_02297574();
    unk_40ac.vfunc_0c();
    unk_4258.vfunc_0c();
    unk_40f4.func_ov002_02203900();
}

void Unk_ov112_02299b10::func_ov112_02298d18() {
    func_ov112_02297574();
    func_ov095_02294438(unk_370);
    func_020b87d0(unk_34c);
    unk_40f4.func_ov002_02203900();
}

void Unk_ov112_02299b10::func_ov112_02298d4c() {
    unk_ac = 0;
    func_ov095_02294478(unk_370, 2);
    func_0205125c(unk_c3, 0xc0);
    Unk_ov112_02298d4c_A a;
    s32 t = func_0209750c();
    Unk_ov112_02298d4c_B b;
    func_020940d0(func_0209888c(t), &b);
    func_020b3544(0, &b);
    func_0206f9fc(&a, 0x89);
    Unk_ov112_02298d4c_C c;
    func_020a77f8(&c, &a);
    s32 n = func_020512e0(c.text, 0x28);
    func_02051268(c.text, unk_c3, n);
    unk_c3[n] = 0x86;
    n++;
    if (func_02051348(unk_c3, n) > 0x96) {
        n--;
        unk_c3[n] = 0;
    }
    unk_c0 = n;
    unk_40ac.func_ov002_02202f0c();
    func_02115fb4(unk_4c60, 0xdd, 0x1e00);
    unk_b6 = 0;
    unk_b7 = 0;
    unk_b8 = 0;
}

void Unk_ov112_02299b10::func_ov112_02298e3c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, -8);
        func_ov002_02200840(6, 0, -8);
    }
    unk_a4 = func_ov002_02200920();
    unk_a8 = unk_a4;
    unk_a0 = unk_a4;
}

void Unk_ov112_02299b10::func_ov112_02298ea4() {
    if (func_ov112_022974f0() == 0) {
        func_ov112_022977f8(0x40);
        func_ov112_022969f8();
        func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
        func_ov002_022008c4(0xa, 0, 0, 0x30);
        func_ov002_02200840(4, 0, -8);
        func_ov002_02200840(6, 0, -8);
        func_ov002_02200a50(0xd);
        unk_a4 = func_ov002_02200920();
        unk_a8 = unk_a4;
    }
}

void Unk_ov112_02299b10::func_ov112_02298f20() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, -8);
    }
    unk_a4 = func_ov002_02200920();
    unk_a8 = unk_a4;
}

void Unk_ov112_02299b10::func_ov112_02298f68() {
    if (func_ov112_02297818(0x2000) || func_ov112_0229695c()) {
        func_ov112_022977f8(0x40);
        func_ov112_022969f8();
        func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
        func_ov002_022008c4(2, 0, 0, 0x30);
        func_ov002_02200840(4, 0, -8);
        func_ov002_02200a50(0xb);
        unk_a4 = func_ov002_02200920();
        unk_a8 = unk_a4;
    }
}

void Unk_ov112_02299b10::func_ov112_02298fe8() {
    if (func_ov002_02200908(0)) {
        func_ov112_0229706c();
        func_ov002_02200a60(2);
        func_ov112_022978e0();
        func_ov112_022976a8();
        func_ov112_02298c68();
        func_ov112_02297808(0x80);
    }
    func_ov002_02200840(6, 0, 0);
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
}

void Unk_ov112_02299b10::func_ov112_02299048() {
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(9);
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
    func_ov112_02297808(1);
    unk_40f4.func_ov002_02203650();
}

void Unk_ov112_02299b10::func_ov112_022990ac() {
    if (func_ov002_022008fc(0)) {
        func_ov002_02200a50(8);
    }
    unk_a8 = func_ov002_02200920();
}

void Unk_ov112_02299b10::func_ov112_022990d4() {
    func_ov112_022969f8();
    func_ov002_022008c4(0, 0, 0, 0x30);
    func_ov002_02200a50(7);
    unk_a8 = func_ov002_02200920();
}

void Unk_ov112_02299b10::func_ov112_02299108() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov112_0229788c();
        } else {
            func_ov112_0229782c();
        }
    }
    unk_a8 = func_ov002_02200920();
}

void Unk_ov112_02299b10::func_ov112_02299148() {
    func_ov112_02296a18();
    if (func_ov112_02297818(0x2000)) {
        unk_40f4.func_ov002_022033ec(0x87);
    } else {
        unk_40f4.func_ov002_022033ec(0x22);
    }
    func_ov002_02200874(5, 0);
    unk_a8 = func_ov002_02200920();
    func_ov002_02200a50(5);
}

void Unk_ov112_02299b10::func_ov112_022991a0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov112_022977f8(1);
        func_ov002_02200a50(4);
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
}

void Unk_ov112_02299b10::func_ov112_022991f0() {
    func_ov112_022977f8(0x40);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(3);
    unk_a0 = func_ov002_02200920();
    unk_a8 = unk_a0;
    func_ov112_022974fc(0);
    func_ov112_022977f8(0x80);
}

void Unk_ov112_02299b10::func_ov112_02299250() {
    if (func_ov112_02297818(0x4000)) {
        func_ov112_02296abc();
        func_ov112_02296a8c();
        func_ov112_022977f8(0x4000);
    }
    if (func_ov002_02200908(0)) {
        func_ov112_0229706c();
        func_ov002_02200a60(2);
        func_ov112_022978e0();
        func_ov112_022976a8();
        func_ov112_02298c68();
    }
    func_ov002_02200840(4, 0, -8);
    func_ov002_02200840(6, 0, 0);
    unk_a0 = func_ov002_02200920();
    unk_a4 = unk_a0;
    unk_a8 = unk_a4;
}

void Unk_ov112_02299b10::func_ov112_022992e4() {
    func_ov112_02298c30();
    func_ov112_02298b40();
    func_ov112_02297540();
    func_ov112_02297808(0x4000);
    func_ov095_0229483c(unk_370, 6);
    func_ov095_02294358(unk_370, 6);
    func_ov002_022008e0(0xa, 7, 0, 0x30);
    func_020020b8(4);
    func_020020b8(6);
    func_ov002_02200840(4, 0, -8);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(1);
    unk_a0 = func_ov002_02200920();
    unk_a4 = unk_a0;
    unk_a8 = unk_a4;
    func_ov112_02297808(0x81);
    unk_40f4.func_ov002_02203650();
    func_ov112_022976a8();
    func_ov112_02298c68();
}

BOOL Unk_ov112_02299b10::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov112_02299b10::vfunc_58() { return TRUE; }

BOOL Unk_ov112_02299b10::vfunc_54() { return TRUE; }

BOOL Unk_ov112_02299b10::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
        case 19:
            func_ov112_02297940();
            return TRUE;
        }
    }
    func_ov112_02298ce0();
    func_ov112_02299434();
    func_ov112_02298c68();
    return TRUE;
}

void Unk_ov112_02299b10::func_ov112_02299434() {
    static Unk_ov112_02299b10_Fn tbl[23] = {
        &Unk_ov112_02299b10::func_ov112_02298a00, &Unk_ov112_02299b10::func_ov112_022989c4,
        &Unk_ov112_02299b10::func_ov112_02298988, &Unk_ov112_02299b10::func_ov112_02298928,
        &Unk_ov112_02299b10::func_ov112_022988cc, &Unk_ov112_02299b10::func_ov112_02298860,
        &Unk_ov112_02299b10::func_ov112_022987a8, &Unk_ov112_02299b10::func_ov112_0229877c,
        &Unk_ov112_02299b10::func_ov112_022986a8, &Unk_ov112_02299b10::func_ov112_0229864c,
        &Unk_ov112_02299b10::func_ov112_02298624, &Unk_ov112_02299b10::func_ov112_022985b8,
        &Unk_ov112_02299b10::func_ov112_022984b4, &Unk_ov112_02299b10::func_ov112_02298440,
        &Unk_ov112_02299b10::func_ov112_02298410, &Unk_ov112_02299b10::func_ov112_022983e0,
        &Unk_ov112_02299b10::func_ov112_022983bc, &Unk_ov112_02299b10::func_ov112_02298380,
        &Unk_ov112_02299b10::func_ov112_02298354, &Unk_ov112_02299b10::func_ov112_0229823c,
        &Unk_ov112_02299b10::func_ov112_02298208, &Unk_ov112_02299b10::func_ov112_0229819c,
        &Unk_ov112_02299b10::func_ov112_0229816c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov112_02299b10::vfunc_4c() {
    static Unk_ov112_02299b10_Fn tbl[14] = {
        &Unk_ov112_02299b10::func_ov112_022992e4, &Unk_ov112_02299b10::func_ov112_02299250,
        &Unk_ov112_02299b10::func_ov112_022991f0, &Unk_ov112_02299b10::func_ov112_022991a0,
        &Unk_ov112_02299b10::func_ov112_02299148, &Unk_ov112_02299b10::func_ov112_02299108,
        &Unk_ov112_02299b10::func_ov112_022990d4, &Unk_ov112_02299b10::func_ov112_022990ac,
        &Unk_ov112_02299b10::func_ov112_02299048, &Unk_ov112_02299b10::func_ov112_02298fe8,
        &Unk_ov112_02299b10::func_ov112_02298f68, &Unk_ov112_02299b10::func_ov112_02298f20,
        &Unk_ov112_02299b10::func_ov112_02298ea4, &Unk_ov112_02299b10::func_ov112_02298e3c};
    (this->*tbl[unk_8c])();
    return TRUE;
}
