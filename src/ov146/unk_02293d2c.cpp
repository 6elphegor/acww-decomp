#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020b8800(void *p);
void func_ov092_02291c5c();
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




class Unk_ov146_020b8800 {
public:
    Unk_ov146_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov146_0206fcc8 {
public:
    Unk_ov146_0206fcc8();
    ~Unk_ov146_0206fcc8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov146_02202658 {
public:
    Unk_ov146_02202658();
    u32 unk_00[0x64 / 4];
};

class Unk_ov146_02202f88 {
public:
    Unk_ov146_02202f88();
    virtual ~Unk_ov146_02202f88();
    virtual u32 vfunc_08();
    u32 unk_04[(0x48 - 4) / 4];
};

class Unk_ov146_02203994 {
public:
    Unk_ov146_02203994();
    u32 unk_00[0xbc / 4];
};

// Vtable 0x02294080, size 0x1a7c
class Unk_ov146_02294080 : public Unk_ov002_022044e4 {
public:
    Unk_ov146_02294080()
        : unk_13cc(), unk_1430(), unk_1930(), unk_1978(), unk_1a34() {}
    virtual ~Unk_ov146_02294080();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();

    void func_ov146_022936ec();
    void func_ov146_02293700();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94[(0x13cc - 0x94) / 4];
    /* 0x13cc */ Unk_ov146_02202658 unk_13cc;
    /* 0x1430 */ Unk_ov146_0206fcc8 unk_1430[20];
    /* 0x1930 */ Unk_ov146_020b8800 unk_1930[2];
    /* 0x1978 */ Unk_ov146_02203994 unk_1978;
    /* 0x1a34 */ Unk_ov146_02202f88 unk_1a34;
};

BOOL Unk_ov146_02294080::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov146_022936ec();
    return TRUE;
}

BOOL Unk_ov146_02294080::vfunc_00() {
    func_ov146_02293700();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov146_02294080 *func_ov146_02293d68() { return new Unk_ov146_02294080(); }

Unk_ov146_02294080::~Unk_ov146_02294080() {}
