#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020021fc(u32 a, u32 b, u32 c);
void func_02087e70(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_02088730(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
void func_0208dae8(void *a, u32 b, u32 c);
void func_ov092_02291c5c();
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
extern u8 data_ov112_02299ad8[];
extern u8 data_ov112_02299ac0[];
void func_0206fca8(void *p);
}

class Unk_ov112_020b8800 {
public:
    Unk_ov112_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov112_0206fcc8 {
public:
    Unk_ov112_0206fcc8();
    ~Unk_ov112_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov112_02204400 {
public:
    Unk_ov112_02204400();
    u32 unk_00[0x108 / 4];
};

// 0x370: ov095 list/text object, size 0x22f4 + 0x48
class Unk_ov112_ov095_02293b60 {
public:
    Unk_ov112_ov095_02293b60() : unk_22f4(), unk_233c() {}
    void func_ov095_02293b60(u32 a, void *b, u32 c);
    void func_ov095_02293824(u32 a, void *b);
    void func_ov095_022937d0(u32 a, void *b, u32 c);
    void func_ov095_0229253c(s32 a, s32 b);
    void func_ov095_022938f8(s32 a, s32 b, s32 c);
    u32 unk_00[0x22f4 / 4];
    Unk_ov112_020b8800 unk_22f4[2];
    Unk_ov112_0206fcc8 unk_233c[2];
};

class Unk_ov112_02202f88 {
public:
    Unk_ov112_02202f88();
    virtual ~Unk_ov112_02202f88();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 func_ov002_02202e84();
    s32 func_ov002_02202e60();
    u32 unk_04[0x44 / 4];
};

class Unk_ov112_02203994 {
public:
    Unk_ov112_02203994();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov112_02202658 {
public:
    Unk_ov112_02202658();
    virtual ~Unk_ov112_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 a, s32 b);
    u32 unk_04[0x60 / 4];
};

class Unk_ov112_02077178 {
public:
    Unk_ov112_02077178();
    u32 unk_00[0xd4 / 4];
};

class Unk_ov112_02077100 {
public:
    Unk_ov112_02077100();
    u32 unk_00[0x26ec / 4];
};

// Vtable 0x02299b10, size 0x6a7c
class Unk_ov112_02299b10 : public Unk_ov002_022044e4 {
public:
    Unk_ov112_02299b10()
        : unk_244(), unk_34c(), unk_370(), unk_3f2c(), unk_40ac(), unk_40f4(), unk_4258(),
          unk_42bc(), unk_4390() {}
    virtual ~Unk_ov112_02299b10();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();

    // callees in other groups
    BOOL func_ov112_02297468();
    BOOL func_ov112_022974f0();
    BOOL func_ov112_02297818(u32 flags);
    void func_ov112_02298d18();
    void func_ov112_02298d4c();

    /* 0x0091 */ u8 unk_91[7];
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ u8 *unk_a0;
    /* 0x00a4 */ u32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ u32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ u8 unk_b4[2];
    /* 0x00b6 */ u8 unk_b6;
    /* 0x00b7 */ u8 unk_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 unk_b9[3];
    /* 0x00bc */ u8 unk_bc;
    /* 0x00bd */ u8 unk_bd[0x244 - 0xbd];
    /* 0x0244 */ Unk_ov112_02204400 unk_244;
    /* 0x034c */ Unk_ov112_020b8800 unk_34c[1];
    /* 0x0370 */ Unk_ov112_ov095_02293b60 unk_370;
    /* 0x272c */ u32 unk_272c[(0x3f2c - 0x272c) / 4];
    /* 0x3f2c */ Unk_ov112_0206fcc8 unk_3f2c[6];
    /* 0x40ac */ Unk_ov112_02202f88 unk_40ac;
    /* 0x40f4 */ Unk_ov112_02203994 unk_40f4;
    /* 0x4258 */ Unk_ov112_02202658 unk_4258;
    /* 0x42bc */ Unk_ov112_02077178 unk_42bc;
    /* 0x4390 */ Unk_ov112_02077100 unk_4390;
};

BOOL Unk_ov112_02299b10::vfunc_24() {
    if (func_ov112_022974f0()) {
        func_ov112_02297468();
        func_020021fc(4, 0, unk_b6 + 8);
    }
    if (func_ov112_02297818(1)) {
        u8 *p = unk_a0 + 0x60;
        func_02087e70(1, data_ov112_02299ad8, 0x80, p - 8, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        unk_370.func_ov095_02293b60(0x80, p, 1);
        unk_370.func_ov095_02293824(0x80, p);
        if (func_0206ef00()) {
            func_02088730(1, data_ov112_02299ac0, 0x80, p, -1, 1, 0);
        }
        unk_370.func_ov095_022937d0(0x80, p, unk_b0);
        func_0208dae8(&unk_40ac, 0x5d, unk_b8 + (u32)(unk_a0 - 0x50));
        s32 t = unk_40ac.func_ov002_02202e84();
        unk_370.func_ov095_0229253c(t, unk_40ac.func_ov002_02202e60());
        unk_40ac.vfunc_08();
    }
    if (func_0206ef00()) {
        if (func_ov112_02297818(0x1000)) {
            s32 t = unk_40ac.func_ov002_02202e84();
            unk_4258.func_ov002_02202a40(t, unk_40ac.func_ov002_02202e60());
        }
        unk_4258.func_ov002_02202844();
    }
    if (func_ov112_02297818(1)) {
        if (func_ov112_02297818(0x40)) {
            s32 a = unk_98;
            s32 b = unk_9c - (unk_b6 + 8);
            unk_bc = unk_bc + 1;
            if ((unk_bc & 0x10) != 0) {
                unk_370.func_ov095_022938f8(a, b, 2);
            }
        }
    }
    unk_40f4.func_ov002_022036a4(unk_a8);
    return TRUE;
}

BOOL Unk_ov112_02299b10::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov112_02298d18();
    return TRUE;
}

BOOL Unk_ov112_02299b10::vfunc_00() {
    func_ov112_02298d4c();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov112_02299b10 *func_ov112_022998c4() { return new Unk_ov112_02299b10(); }

Unk_ov112_02299b10::~Unk_ov112_02299b10() {}
