#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_ov144_02293d70[];
void func_020ed174();
void func_020b8800(void *p);
void func_ov092_02291c5c();
void func_02087e70(u32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
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
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
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



class Unk_ov144_020b8800 {
public:
    Unk_ov144_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov144_0206fcc8 {
public:
    Unk_ov144_0206fcc8();
    ~Unk_ov144_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov144_02202658 {
public:
    Unk_ov144_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov144_02202f88 {
public:
    Unk_ov144_02202f88();
    virtual ~Unk_ov144_02202f88();
    virtual u32 vfunc_08();
    u32 unk_04[(0x48 - 4) / 4];
};

class Unk_ov144_02203994 {
public:
    Unk_ov144_02203994();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov144_02204400 {
public:
    Unk_ov144_02204400();
    u32 unk_00[0x120 / 4];
};

class Unk_ov144_02293db8;
typedef void (Unk_ov144_02293db8::*Unk_ov144_02293db8_Fn)();

// Vtable 0x02293db8, size 0x1f04
class Unk_ov144_02293db8 : public Unk_ov002_022044e4 {
public:
    Unk_ov144_02293db8()
        : unk_c4(), unk_128(), unk_170(), unk_2d4(), unk_514(), unk_55c() {}
    virtual ~Unk_ov144_02293db8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov144_02292040(u32 mask);
    void func_ov144_0229371c();
    void func_ov144_0229373c();
    void func_ov144_0229379c();
    void func_ov144_022937d0();
    void func_ov144_02293850();
    void func_ov144_02293880();
    void func_ov144_022938d4();
    void func_ov144_022938fc();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ u8 unk_98[0xc];
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ u8 unk_a8[0x1c];
    /* 0x00c4 */ Unk_ov144_02202658 unk_c4;
    /* 0x0128 */ Unk_ov144_02202f88 unk_128;
    /* 0x0170 */ Unk_ov144_02203994 unk_170;
    /* 0x02d4 */ Unk_ov144_0206fcc8 unk_2d4[9];
    /* 0x0514 */ Unk_ov144_020b8800 unk_514[2];
    /* 0x055c */ Unk_ov144_02204400 unk_55c;
    /* 0x067c */ u32 unk_67c[(0x1f04 - 0x67c) / 4];
};

BOOL Unk_ov144_02293db8::vfunc_4c() {
    static Unk_ov144_02293db8_Fn tbl[4] = {
        &Unk_ov144_02293db8::func_ov144_022938fc, &Unk_ov144_02293db8::func_ov144_022938d4,
        &Unk_ov144_02293db8::func_ov144_02293880, &Unk_ov144_02293db8::func_ov144_02293850};
    func_ov144_0229373c();
    (this->*tbl[unk_8c])();
    func_ov144_0229371c();
    return TRUE;
}

BOOL Unk_ov144_02293db8::vfunc_24() {
    if (func_0206ef00()) {
        unk_c4.func_ov002_02202844();
    }
    if (!func_ov144_02292040(1)) {
        return FALSE;
    }
    unk_170.func_ov002_022036a4(func_ov002_02200920());
    u32 p = unk_94 + 0x60;
    if (unk_a4 > 0) {
        unk_128.vfunc_08();
        func_02087e70(1, data_ov144_02293d70, 0x80, p, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    return TRUE;
}

BOOL Unk_ov144_02293db8::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov144_0229379c();
    return TRUE;
}

BOOL Unk_ov144_02293db8::vfunc_00() {
    func_ov144_022937d0();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov144_02293db8 *func_ov144_02293c3c() { return new Unk_ov144_02293db8(); }

Unk_ov144_02293db8::~Unk_ov144_02293db8() {}
