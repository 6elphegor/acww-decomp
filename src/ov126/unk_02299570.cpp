#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
u32 func_020ed174(void *p);
void func_020021fc(u32 a, u32 b, u32 c);
void func_02087e70(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_02088730(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
void func_0208dae8(void *a, u32 b, u32 c);
void func_ov092_02291c5c(u32 a);
BOOL func_0206ef00();
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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

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



extern "C" {
extern u8 data_ov126_02299ad0[];
void func_0206fca8(void *p);
void func_ov090_02291a90(u32 a);
s32 func_ov090_02291d2c(u32 a);
s32 func_0206ed50();
}

class Unk_ov126_020b8800 {
public:
    Unk_ov126_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov126_0206fcc8 {
public:
    Unk_ov126_0206fcc8();
    ~Unk_ov126_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov126_0206f874 {
public:
    Unk_ov126_0206f874();
    u32 unk_00[0x38 / 4];
};

class Unk_ov126_02204400 {
public:
    Unk_ov126_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov126_ov095_02293b60 {
public:
    Unk_ov126_ov095_02293b60() : unk_22f4(), unk_233c() {}
    void func_ov095_02293b60(u32 a, void *b, u32 c);
    void func_ov095_02293824(u32 a, void *b);
    void func_ov095_022938f8(s32 a, s32 b, s32 c);
    u32 unk_00[0x22f4 / 4];
    Unk_ov126_020b8800 unk_22f4[2];
    Unk_ov126_0206fcc8 unk_233c[2];
};

class Unk_ov126_02203994 {
public:
    Unk_ov126_02203994();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov126_02202658 {
public:
    Unk_ov126_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov126_02296e14 {
public:
    Unk_ov126_02296e14();
    void func_ov124_02296858(s32 a, u8 *b);
    u32 unk_00[0x94 / 4];
};

class Unk_ov126_02299ae8;
typedef BOOL (Unk_ov126_02299ae8::*Unk_ov126_02299ae8_Fn)();

// Vtable 0x02299ae8, size 0x40c8
class Unk_ov126_02299ae8 : public Unk_ov002_022044e4 {
public:
    Unk_ov126_02299ae8()
        : unk_b0(), unk_144(), unk_3d00(), unk_3e64(), unk_3ec8(), unk_3f08(), unk_3f48(), unk_3f80() {}
    virtual ~Unk_ov126_02299ae8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov126_02299570();
    BOOL func_ov126_02297188(u32 flags);
    void func_ov126_02298e58();
    void func_ov126_02298e6c();
    void func_ov126_02298ec0();
    void func_ov126_02298ef4();

    BOOL func_ov126_02298650();
    BOOL func_ov126_02298680();
    BOOL func_ov126_022986ec();
    BOOL func_ov126_0229871c();
    BOOL func_ov126_0229874c();
    BOOL func_ov126_022987b0();
    BOOL func_ov126_022987d8();
    BOOL func_ov126_02298834();
    BOOL func_ov126_022988bc();
    BOOL func_ov126_022988e8();
    BOOL func_ov126_02298964();
    BOOL func_ov126_02298a44();
    BOOL func_ov126_02298a5c();
    BOOL func_ov126_02298b2c();
    BOOL func_ov126_02298ba0();
    BOOL func_ov126_02298bfc();
    BOOL func_ov126_02298c4c();

    BOOL func_ov126_022990fc();
    BOOL func_ov126_02299120();
    BOOL func_ov126_02299150();
    BOOL func_ov126_0229916c();
    BOOL func_ov126_02299190();
    BOOL func_ov126_022991e0();
    BOOL func_ov126_022991fc();
    BOOL func_ov126_02299280();
    BOOL func_ov126_022992d0();
    BOOL func_ov126_022993cc();
    BOOL func_ov126_022993fc();
    BOOL func_ov126_0229945c();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u8 *unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ u8 *unk_a0;
    /* 0x0a4 */ u8 unk_a4[3];
    /* 0x0a7 */ u8 unk_a7;
    /* 0x0a8 */ u8 unk_a8[8];
    /* 0x0b0 */ Unk_ov126_02296e14 unk_b0;
    /* 0x144 */ Unk_ov126_ov095_02293b60 unk_144;
    /* 0x2500 */ u32 unk_2500[(0x3d00 - 0x2500) / 4];
    /* 0x3d00 */ Unk_ov126_02203994 unk_3d00;
    /* 0x3e64 */ Unk_ov126_02202658 unk_3e64;
    /* 0x3ec8 */ Unk_ov126_0206fcc8 unk_3ec8;
    /* 0x3f08 */ Unk_ov126_0206fcc8 unk_3f08;
    /* 0x3f48 */ Unk_ov126_0206f874 unk_3f48;
    /* 0x3f80 */ Unk_ov126_02204400 unk_3f80;
    /* 0x4088 */ u32 unk_4088[0x40 / 4];
};

BOOL Unk_ov126_02299ae8::func_ov126_02299570() {
    static Unk_ov126_02299ae8_Fn tbl[17] = {
        &Unk_ov126_02299ae8::func_ov126_02298c4c, &Unk_ov126_02299ae8::func_ov126_02298bfc,
        &Unk_ov126_02299ae8::func_ov126_02298ba0, &Unk_ov126_02299ae8::func_ov126_02298b2c,
        &Unk_ov126_02299ae8::func_ov126_02298a5c, &Unk_ov126_02299ae8::func_ov126_02298a44,
        &Unk_ov126_02299ae8::func_ov126_02298964, &Unk_ov126_02299ae8::func_ov126_022988e8,
        &Unk_ov126_02299ae8::func_ov126_022988bc, &Unk_ov126_02299ae8::func_ov126_02298834,
        &Unk_ov126_02299ae8::func_ov126_022987d8, &Unk_ov126_02299ae8::func_ov126_022987b0,
        &Unk_ov126_02299ae8::func_ov126_0229874c, &Unk_ov126_02299ae8::func_ov126_0229871c,
        &Unk_ov126_02299ae8::func_ov126_022986ec, &Unk_ov126_02299ae8::func_ov126_02298680,
        &Unk_ov126_02299ae8::func_ov126_02298650};
    return (this->*tbl[unk_8d])();
}

BOOL Unk_ov126_02299ae8::vfunc_4c() {
    static Unk_ov126_02299ae8_Fn tbl[12] = {
        &Unk_ov126_02299ae8::func_ov126_0229945c, &Unk_ov126_02299ae8::func_ov126_022993fc,
        &Unk_ov126_02299ae8::func_ov126_022993cc, &Unk_ov126_02299ae8::func_ov126_022992d0,
        &Unk_ov126_02299ae8::func_ov126_02299280, &Unk_ov126_02299ae8::func_ov126_022991fc,
        &Unk_ov126_02299ae8::func_ov126_022991e0, &Unk_ov126_02299ae8::func_ov126_02299190,
        &Unk_ov126_02299ae8::func_ov126_0229916c, &Unk_ov126_02299ae8::func_ov126_02299150,
        &Unk_ov126_02299ae8::func_ov126_02299120, &Unk_ov126_02299ae8::func_ov126_022990fc};
    func_ov126_02298e6c();
    (this->*tbl[unk_8c])();
    func_ov126_02298e58();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_24() {
    u8 *p = unk_94;
    if (!func_ov126_02297188(1)) {
        return FALSE;
    }
    if (func_0206ef00()) {
        unk_3e64.func_ov002_02202844();
    }
    unk_b0.func_ov124_02296858(0, p);
    unk_3d00.func_ov002_022036a4(func_ov002_02200920());
    unk_144.func_ov095_02293b60(0x80, p + 0x60, 1);
    unk_144.func_ov095_02293824(0x80, p + 0x60);
    if (func_ov126_02297188(0x100)) {
        func_02087e70(1, data_ov126_02299ad0, (u32)unk_a0 + 0x80, p + 0x60, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (func_ov126_02297188(2)) {
        s32 a = unk_98;
        s32 b = unk_9c;
        unk_a7 = unk_a7 + 1;
        if ((unk_a7 & 0x10) != 0) {
            unk_144.func_ov095_022938f8(a, b, 2);
        }
    }
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_0c() {
    s32 t = func_0206ed50();
    if ((u32)t >= 0x18 && (u32)t <= 0x1b) {
        u32 h = func_020ed174(this);
        if (func_ov090_02291d2c(h) == 6) {
            func_ov090_02291a90(h);
        }
    } else {
        func_ov092_02291c5c(func_020ed174(this));
    }
    func_ov126_02298ec0();
    return TRUE;
}

BOOL Unk_ov126_02299ae8::vfunc_00() {
    func_ov126_02298ef4();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov126_02299ae8 *func_ov126_02299914() { return new Unk_ov126_02299ae8(); }

Unk_ov126_02299ae8::~Unk_ov126_02299ae8() {}
