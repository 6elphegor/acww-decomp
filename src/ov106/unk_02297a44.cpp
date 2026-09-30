#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
BOOL func_0206ef00();
void func_ov092_02291c5c();
}

class Unk_ov106_02298180;

class Unk_ov106_02065cd4 {
public:
    Unk_ov106_02065cd4();
    ~Unk_ov106_02065cd4();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov106_020b85f8 {
public:
    Unk_ov106_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov106_02293a80 {
public:
    Unk_ov106_02293a80();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov106_022946a8 {
public:
    Unk_ov106_022946a8();
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_02294138(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov106_02292d6c {
public:
    Unk_ov106_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov106_02200800 {
public:
    Unk_ov106_02200800();
    virtual ~Unk_ov106_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov106_022027d0 {
public:
    Unk_ov106_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov106_02202658 {
public:
    Unk_ov106_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov106_022024a0 {
public:
    Unk_ov106_022024a0();
    u32 unk_00[0x300 / 4];
};

class Unk_ov106_02204400 {
public:
    Unk_ov106_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov106_0206d438 {
public:
    Unk_ov106_0206d438();
    u32 unk_00[0x210 / 4];
};

class Unk_ov106_02203e08 {
public:
    Unk_ov106_02203e08();
    virtual ~Unk_ov106_02203e08();
    virtual void vfunc_08();
    void func_0208e288(s32 a, s32 b);
    u32 unk_04[(0x70 - 4) / 4];
};

class Unk_ov106_02203994 {
public:
    Unk_ov106_02203994();
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

typedef void (Unk_ov106_02298180::*Unk_ov106_02298180_Fn)();

// Vtable 0x02298180
class Unk_ov106_02298180 : public Unk_ov002_022044e4 {
public:
    Unk_ov106_02298180()
        : unk_c0(), unk_f8(), unk_b58(), unk_b80(), unk_2160(), unk_2220(), unk_2238(), unk_229c(), unk_259c(), unk_26a4(),
          unk_28b4(), unk_2924(), unk_32ac(), unk_3c34(), unk_3d98(), unk_3e8c() {}
    virtual ~Unk_ov106_02298180();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov106_022973dc();
    void func_ov106_02297414();
    void func_ov106_02297474();
    void func_ov106_022974bc();
    BOOL func_ov106_02294e1c(u32 mask);
    void func_ov106_0229591c();

    // state functions (table targets, in other groups)
    void func_ov106_02297450();
    void func_ov106_02297488();
    void func_ov106_022974c8();
    void func_ov106_022974d0();
    void func_ov106_022974ec();
    void func_ov106_02297538();
    void func_ov106_02296014();
    void func_ov106_02296260();
    void func_ov106_02296288();
    void func_ov106_022962c4();
    void func_ov106_02296314();
    void func_ov106_02296394();
    void func_ov106_022963fc();
    void func_ov106_0229642c();
    void func_ov106_022964b0();
    void func_ov106_02296534();
    void func_ov106_02296588();
    void func_ov106_022966b8();
    void func_ov106_02296734();
    void func_ov106_02296764();
    void func_ov106_022967c4();
    void func_ov106_022967f8();
    void func_ov106_02296818();
    void func_ov106_02296868();
    void func_ov106_022968a4();
    void func_ov106_022968dc();
    void func_ov106_0229692c();
    void func_ov106_02296974();
    void func_ov106_022969c8();
    void func_ov106_022969f4();
    void func_ov106_02296a24();
    void func_ov106_02296a4c();
    void func_ov106_02296a80();
    void func_ov106_02296ac8();
    void func_ov106_02296b2c();
    void func_ov106_02296bc8();
    void func_ov106_02296be8();
    void func_ov106_02296c8c();
    void func_ov106_02296d90();
    void func_ov106_02296ee4();
    void func_ov106_02296fb0();
    void func_ov106_02296ff8();
    void func_ov106_02297130();
    void func_ov106_02297178();
    void func_ov106_022971e8();
    void func_ov106_02297294();
    void func_ov106_02297600();
    void func_ov106_02297658();
    void func_ov106_02297684();
    void func_ov106_022976c4();
    void func_ov106_02297744();
    void func_ov106_022977a0();
    void func_ov106_022977f0();
    void func_ov106_02297850();
    void func_ov106_0229789c();
    void func_ov106_022978fc();
    void func_ov106_0229796c();
    void func_ov106_02297af4();

    // in range
    void func_ov106_02297a44();

    /* 0x0094 */ u8 unk_94[4];
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ u8 unk_a4[0x1c];
    /* 0x00c0 */ Unk_ov106_020b85f8 unk_c0[1];
    /* 0x00f8 */ Unk_ov106_02293a80 unk_f8;
    /* 0x0b58 */ Unk_ov106_022946a8 unk_b58;
    /* 0x0b80 */ Unk_ov106_02292d6c unk_b80;
    /* 0x2160 */ Unk_ov106_02200800 unk_2160;
    /* 0x2220 */ Unk_ov106_022027d0 unk_2220;
    /* 0x2238 */ Unk_ov106_02202658 unk_2238;
    /* 0x229c */ Unk_ov106_022024a0 unk_229c;
    /* 0x259c */ Unk_ov106_02204400 unk_259c;
    /* 0x26a4 */ Unk_ov106_0206d438 unk_26a4;
    /* 0x28b4 */ Unk_ov106_02203e08 unk_28b4;
    /* 0x2924 */ Unk_ov106_02065cd4 unk_2924[10];
    /* 0x32ac */ Unk_ov106_02065cd4 unk_32ac[10];
    /* 0x3c34 */ Unk_ov106_02203994 unk_3c34;
    /* 0x3d98 */ Unk_ov106_02065cd4 unk_3d98;
    /* 0x3e8c */ Unk_ov106_02065cd4 unk_3e8c;
};

void Unk_ov106_02298180::func_ov106_02297a44() {
    static Unk_ov106_02298180_Fn tbl[39] = {
        &Unk_ov106_02298180::func_ov106_02297294,
        &Unk_ov106_02298180::func_ov106_022971e8,
        &Unk_ov106_02298180::func_ov106_02297178,
        &Unk_ov106_02298180::func_ov106_02297130,
        &Unk_ov106_02298180::func_ov106_02296ff8,
        &Unk_ov106_02298180::func_ov106_02296fb0,
        &Unk_ov106_02298180::func_ov106_02296ee4,
        &Unk_ov106_02298180::func_ov106_02296d90,
        &Unk_ov106_02298180::func_ov106_02296c8c,
        &Unk_ov106_02298180::func_ov106_02296be8,
        &Unk_ov106_02298180::func_ov106_02296bc8,
        &Unk_ov106_02298180::func_ov106_02296b2c,
        &Unk_ov106_02298180::func_ov106_02296ac8,
        &Unk_ov106_02298180::func_ov106_02296a80,
        &Unk_ov106_02298180::func_ov106_02296a4c,
        &Unk_ov106_02298180::func_ov106_02296a24,
        &Unk_ov106_02298180::func_ov106_022969f4,
        &Unk_ov106_02298180::func_ov106_022969c8,
        &Unk_ov106_02298180::func_ov106_02296974,
        &Unk_ov106_02298180::func_ov106_0229692c,
        &Unk_ov106_02298180::func_ov106_022968dc,
        &Unk_ov106_02298180::func_ov106_022968a4,
        &Unk_ov106_02298180::func_ov106_02296868,
        &Unk_ov106_02298180::func_ov106_02296818,
        &Unk_ov106_02298180::func_ov106_022967f8,
        &Unk_ov106_02298180::func_ov106_022967c4,
        &Unk_ov106_02298180::func_ov106_02296764,
        &Unk_ov106_02298180::func_ov106_02296734,
        &Unk_ov106_02298180::func_ov106_022966b8,
        &Unk_ov106_02298180::func_ov106_02296588,
        &Unk_ov106_02298180::func_ov106_02296534,
        &Unk_ov106_02298180::func_ov106_022964b0,
        &Unk_ov106_02298180::func_ov106_0229642c,
        &Unk_ov106_02298180::func_ov106_022963fc,
        &Unk_ov106_02298180::func_ov106_02296394,
        &Unk_ov106_02298180::func_ov106_02296314,
        &Unk_ov106_02298180::func_ov106_022962c4,
        &Unk_ov106_02298180::func_ov106_02296288,
        &Unk_ov106_02298180::func_ov106_02296260};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov106_02298180::vfunc_4c() {
    static Unk_ov106_02298180_Fn tbl[11] = {
        &Unk_ov106_02298180::func_ov106_0229796c,
        &Unk_ov106_02298180::func_ov106_022978fc,
        &Unk_ov106_02298180::func_ov106_0229789c,
        &Unk_ov106_02298180::func_ov106_02297850,
        &Unk_ov106_02298180::func_ov106_022977f0,
        &Unk_ov106_02298180::func_ov106_022977a0,
        &Unk_ov106_02298180::func_ov106_02297744,
        &Unk_ov106_02298180::func_ov106_022976c4,
        &Unk_ov106_02298180::func_ov106_02297684,
        &Unk_ov106_02298180::func_ov106_02297658,
        &Unk_ov106_02298180::func_ov106_02297600};
    func_ov106_02297414();
    (this->*tbl[unk_8c])();
    func_ov106_022973dc();
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_24() {
    if (!func_ov106_02294e1c(1)) {
        return TRUE;
    }
    unk_2160.vfunc_08();
    if (func_0206ef00()) {
        unk_2238.func_ov002_02202844();
    }
    func_ov106_0229591c();
    if (func_ov106_02294e1c(2)) {
        unk_3c34.func_ov002_022036a4(unk_a0);
        s32 t = unk_98 - 0x10;
        unk_f8.func_ov094_022932d0(0, t);
        unk_b58.func_ov094_022941a0(0, t);
        unk_b80.func_ov094_0229277c(t);
    }
    if (func_ov106_02294e1c(0x200)) {
        unk_b58.func_ov094_02294138(unk_9c, -0x10);
    }
    if (func_ov106_02294e1c(0x80)) {
        unk_28b4.func_0208e288(0, func_ov002_02200920());
        unk_28b4.vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov106_02297474();
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_00() {
    func_ov106_022974bc();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov106_02298180 *func_ov106_02297ed4() { return new Unk_ov106_02298180(); }

Unk_ov106_02298180::~Unk_ov106_02298180() {}
