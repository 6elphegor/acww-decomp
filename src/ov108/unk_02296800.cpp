#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_ov092_02291c5c();
BOOL func_0206ef00();
}

class Unk_ov108_02296b58;

class Unk_ov108_02065cd4 {
public:
    Unk_ov108_02065cd4();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov108_020b85f8 {
public:
    Unk_ov108_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov108_02293a80 {
public:
    Unk_ov108_02293a80();
    void func_ov094_02293998();
    void func_ov094_022939a0();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov108_022946a8 {
public:
    Unk_ov108_022946a8();
    void func_ov094_0229462c();
    void func_ov094_022941a0(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov108_02292d6c {
public:
    Unk_ov108_02292d6c();
    void func_ov094_02292a80();
    void func_ov094_02292aa4();
    void func_ov094_02292acc();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov108_02200800 {
public:
    Unk_ov108_02200800();
    virtual ~Unk_ov108_02200800();
    virtual void vfunc_08();
    BOOL func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov108_022027d0 {
public:
    Unk_ov108_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov108_02202658 {
public:
    Unk_ov108_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov108_022024a0 {
public:
    Unk_ov108_022024a0();
    void func_ov002_02201b04();
    void func_ov002_02201b28();
    void func_ov002_02201b58();
    u32 unk_00[0x300 / 4];
};

class Unk_ov108_02204400 {
public:
    Unk_ov108_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov108_02203994 {
public:
    Unk_ov108_02203994();
    void func_ov002_022036a4(s32 a);
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
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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
};

typedef void (Unk_ov108_02296b58::*Unk_ov108_02296b58_Fn)();

class Unk_ov108_02296b58 : public Unk_ov002_022044e4 {
public:
    Unk_ov108_02296b58()
        : unk_ac(), unk_1a0(), unk_2a0(), unk_2d8(), unk_d38(), unk_d60(), unk_2340(), unk_2400(), unk_2418(), unk_247c(), unk_277c(), unk_2884() {}
    virtual ~Unk_ov108_02296b58();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov108_02294d9c(s32 a);
    void func_ov108_02295458();
    void func_ov108_022963e0();
    void func_ov108_02296420();
    void func_ov108_022964a0();
    void func_ov108_022964ec();
    void func_ov108_0229654c();
    void func_ov108_02296588();
    void func_ov108_0229660c();
    void func_ov108_02296344();
    void func_ov108_0229637c();

    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ u32 unk_9c[(0xac - 0x9c) / 4];
    /* 0x00ac */ Unk_ov108_02065cd4 unk_ac;
    /* 0x01a0 */ Unk_ov108_02065cd4 unk_1a0;
    /* 0x0294 */ u32 unk_294[3];
    /* 0x02a0 */ Unk_ov108_020b85f8 unk_2a0[1];
    /* 0x02d8 */ Unk_ov108_02293a80 unk_2d8;
    /* 0x0d38 */ Unk_ov108_022946a8 unk_d38;
    /* 0x0d60 */ Unk_ov108_02292d6c unk_d60;
    /* 0x2340 */ Unk_ov108_02200800 unk_2340;
    /* 0x2400 */ Unk_ov108_022027d0 unk_2400;
    /* 0x2418 */ Unk_ov108_02202658 unk_2418;
    /* 0x247c */ Unk_ov108_022024a0 unk_247c;
    /* 0x277c */ Unk_ov108_02204400 unk_277c;
    /* 0x2884 */ Unk_ov108_02203994 unk_2884;
};

BOOL Unk_ov108_02296b58::vfunc_4c() {
    static Unk_ov108_02296b58_Fn tbl[5] = {
        &Unk_ov108_02296b58::func_ov108_0229660c, &Unk_ov108_02296b58::func_ov108_02296588,
        &Unk_ov108_02296b58::func_ov108_0229654c, &Unk_ov108_02296b58::func_ov108_022964ec,
        &Unk_ov108_02296b58::func_ov108_022964a0};
    func_ov108_0229637c();
    (this->*tbl[unk_8c])();
    func_ov108_02296344();
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_24() {
    s32 t;
    unk_247c.func_ov002_02201b28();
    if (!func_ov108_02294d9c(1)) {
        return TRUE;
    }
    unk_2340.vfunc_08();
    if (func_0206ef00()) {
        unk_2418.func_ov002_02202844();
    }
    func_ov108_02295458();
    if (func_ov108_02294d9c(2)) {
        unk_2884.func_ov002_022036a4(unk_98);
        t = unk_98 - 0x10;
        unk_2d8.func_ov094_022932d0(0, t);
        unk_d38.func_ov094_022941a0(0, t);
        unk_d60.func_ov094_0229277c(t);
    }
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov108_022963e0();
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_00() {
    func_ov108_02296420();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov108_02296b58 *func_ov108_02296984() { return new Unk_ov108_02296b58(); }

Unk_ov108_02296b58::~Unk_ov108_02296b58() {}
