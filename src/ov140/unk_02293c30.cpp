#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020b8800(void *p);
void func_0206fca8(void *p);
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_020ed174();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void func_02110a64(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
BOOL func_0206e61c();
void func_0206e63c();
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
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
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




class Unk_ov140_020b8800 {
public:
    Unk_ov140_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov140_0206fcc8 {
public:
    Unk_ov140_0206fcc8();
    ~Unk_ov140_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov140_0229256c {
public:
    Unk_ov140_0229256c();
    u32 unk_00[0x624 / 4];
};

class Unk_ov140_02202658 {
public:
    Unk_ov140_02202658();
    u32 unk_00[0x64 / 4];
};

class Unk_ov140_02203994 {
public:
    Unk_ov140_02203994();
    u32 unk_00[0x164 / 4];
};

// Vtable 0x02293e04, size 0x1760
class Unk_ov140_02293e04 : public Unk_ov002_022044e4 {
public:
    Unk_ov140_02293e04() : unk_8e8(), unk_f0c(), unk_f70(), unk_10d4(), unk_16a0() {}
    virtual ~Unk_ov140_02293e04();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();

    void func_ov140_02293690();
    void func_ov140_022936c4();

    /* 0x0091 */ u8 unk_91[0x8e8 - 0x91];
    /* 0x08e8 */ Unk_ov140_0229256c unk_8e8;
    /* 0x0f0c */ Unk_ov140_02202658 unk_f0c;
    /* 0x0f70 */ Unk_ov140_02203994 unk_f70;
    /* 0x10d4 */ Unk_ov140_020b8800 unk_10d4;
    /* 0x10f8 */ u8 unk_10f8[0x16a0 - 0x10f8];
    /* 0x16a0 */ Unk_ov140_0206fcc8 unk_16a0[3];
};

BOOL Unk_ov140_02293e04::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov140_02293690();
    return TRUE;
}

BOOL Unk_ov140_02293e04::vfunc_00() {
    func_ov140_022936c4();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov140_02293e04 *func_ov140_02293c6c() { return new Unk_ov140_02293e04(); }

Unk_ov140_02293e04::~Unk_ov140_02293e04() {}
