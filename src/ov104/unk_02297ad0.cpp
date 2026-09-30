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

class Unk_ov104_02298170;

class Unk_ov104_02065cd4 {
public:
    Unk_ov104_02065cd4();
    ~Unk_ov104_02065cd4();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov104_020b85f8 {
public:
    Unk_ov104_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov104_02293a80 {
public:
    Unk_ov104_02293a80();
    void func_ov094_022932d0(s32 a, s32 b);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov104_022946a8 {
public:
    Unk_ov104_022946a8();
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_02294104(s32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov104_02292d6c {
public:
    Unk_ov104_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov104_02200800 {
public:
    Unk_ov104_02200800();
    virtual ~Unk_ov104_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov104_022027d0 {
public:
    Unk_ov104_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov104_02202658 {
public:
    Unk_ov104_02202658();
    void func_ov002_02202844();
    u32 unk_00[0x64 / 4];
};

class Unk_ov104_022024a0 {
public:
    Unk_ov104_022024a0();
    u32 unk_00[0x300 / 4];
};

class Unk_ov104_02204400 {
public:
    Unk_ov104_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov104_0206d438 {
public:
    Unk_ov104_0206d438();
    u32 unk_00[0x210 / 4];
};

class Unk_ov104_02203e08 {
public:
    Unk_ov104_02203e08();
    virtual ~Unk_ov104_02203e08();
    virtual void vfunc_08();
    void func_0208e288(s32 a, s32 b);
    u32 unk_04[(0x70 - 4) / 4];
};

class Unk_ov104_02203994 {
public:
    Unk_ov104_02203994();
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

typedef void (Unk_ov104_02298170::*Unk_ov104_02298170_Fn)();

// Vtable 0x02298170
class Unk_ov104_02298170 : public Unk_ov002_022044e4 {
public:
    Unk_ov104_02298170()
        : unk_c0(), unk_1b4(), unk_2a8(), unk_2e0(), unk_d40(), unk_d68(), unk_2348(), unk_2408(), unk_2420(), unk_2484(),
          unk_2784(), unk_288c(), unk_2a9c(), unk_2b0c(), unk_3494(), unk_3e1c() {}
    virtual ~Unk_ov104_02298170();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov104_02297450();
    void func_ov104_02297488();
    void func_ov104_022974c8();
    void func_ov104_022974d0();
    void func_ov104_022974ec();
    void func_ov104_02297538();
    BOOL func_ov104_02294e1c(u32 mask);
    void func_ov104_02296014();

    // state functions (table targets, in other groups)
    void func_ov104_02296800();
    void func_ov104_02296828();
    void func_ov104_02296894();
    void func_ov104_022968fc();
    void func_ov104_02296930();
    void func_ov104_02296950();
    void func_ov104_022969a0();
    void func_ov104_022969dc();
    void func_ov104_02296a14();
    void func_ov104_02296a64();
    void func_ov104_02296aac();
    void func_ov104_02296b00();
    void func_ov104_02296b2c();
    void func_ov104_02296b5c();
    void func_ov104_02296b84();
    void func_ov104_02296bb8();
    void func_ov104_02296c00();
    void func_ov104_02296c64();
    void func_ov104_02296cf0();
    void func_ov104_02296d10();
    void func_ov104_02296da4();
    void func_ov104_02296e48();
    void func_ov104_02296fdc();
    void func_ov104_02297098();
    void func_ov104_022970cc();
    void func_ov104_022971a4();
    void func_ov104_022971ec();
    void func_ov104_02297248();
    void func_ov104_022972f4();
    void func_ov104_02297640();
    void func_ov104_02297678();
    void func_ov104_022976a4();
    void func_ov104_022976e4();
    void func_ov104_02297758();
    void func_ov104_022977b4();
    void func_ov104_02297804();
    void func_ov104_02297864();
    void func_ov104_0229788c();
    void func_ov104_022978ec();
    void func_ov104_02297960();

    // in range
    void func_ov104_02297af4();

    /* 0x0094 */ u8 unk_94[4];
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ u8 unk_a0[0x20];
    /* 0x00c0 */ Unk_ov104_02065cd4 unk_c0;
    /* 0x01b4 */ Unk_ov104_02065cd4 unk_1b4;
    /* 0x02a8 */ Unk_ov104_020b85f8 unk_2a8[1];
    /* 0x02e0 */ Unk_ov104_02293a80 unk_2e0;
    /* 0x0d40 */ Unk_ov104_022946a8 unk_d40;
    /* 0x0d68 */ Unk_ov104_02292d6c unk_d68;
    /* 0x2348 */ Unk_ov104_02200800 unk_2348;
    /* 0x2408 */ Unk_ov104_022027d0 unk_2408;
    /* 0x2420 */ Unk_ov104_02202658 unk_2420;
    /* 0x2484 */ Unk_ov104_022024a0 unk_2484;
    /* 0x2784 */ Unk_ov104_02204400 unk_2784;
    /* 0x288c */ Unk_ov104_0206d438 unk_288c;
    /* 0x2a9c */ Unk_ov104_02203e08 unk_2a9c;
    /* 0x2b0c */ Unk_ov104_02065cd4 unk_2b0c[10];
    /* 0x3494 */ Unk_ov104_02065cd4 unk_3494[10];
    /* 0x3e1c */ Unk_ov104_02203994 unk_3e1c;
};

BOOL Unk_ov104_02298170::vfunc_58() { return TRUE; }

BOOL Unk_ov104_02298170::vfunc_54() { return TRUE; }

BOOL Unk_ov104_02298170::vfunc_50() {
    func_ov104_022974d0();
    func_ov104_02297af4();
    func_ov104_022974c8();
    return TRUE;
}

void Unk_ov104_02298170::func_ov104_02297af4() {
    static Unk_ov104_02298170_Fn tbl[29] = {
        &Unk_ov104_02298170::func_ov104_022972f4,
        &Unk_ov104_02298170::func_ov104_02297248,
        &Unk_ov104_02298170::func_ov104_022971ec,
        &Unk_ov104_02298170::func_ov104_022971a4,
        &Unk_ov104_02298170::func_ov104_022970cc,
        &Unk_ov104_02298170::func_ov104_02297098,
        &Unk_ov104_02298170::func_ov104_02296fdc,
        &Unk_ov104_02298170::func_ov104_02296e48,
        &Unk_ov104_02298170::func_ov104_02296da4,
        &Unk_ov104_02298170::func_ov104_02296d10,
        &Unk_ov104_02298170::func_ov104_02296cf0,
        &Unk_ov104_02298170::func_ov104_02296c64,
        &Unk_ov104_02298170::func_ov104_02296c00,
        &Unk_ov104_02298170::func_ov104_02296bb8,
        &Unk_ov104_02298170::func_ov104_02296b84,
        &Unk_ov104_02298170::func_ov104_02296b5c,
        &Unk_ov104_02298170::func_ov104_02296b2c,
        &Unk_ov104_02298170::func_ov104_02296b00,
        &Unk_ov104_02298170::func_ov104_02296aac,
        &Unk_ov104_02298170::func_ov104_02296a64,
        &Unk_ov104_02298170::func_ov104_02296a14,
        &Unk_ov104_02298170::func_ov104_022969dc,
        &Unk_ov104_02298170::func_ov104_022969a0,
        &Unk_ov104_02298170::func_ov104_02296950,
        &Unk_ov104_02298170::func_ov104_02296930,
        &Unk_ov104_02298170::func_ov104_022968fc,
        &Unk_ov104_02298170::func_ov104_02296894,
        &Unk_ov104_02298170::func_ov104_02296828,
        &Unk_ov104_02298170::func_ov104_02296800};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov104_02298170::vfunc_4c() {
    static Unk_ov104_02298170_Fn tbl[11] = {
        &Unk_ov104_02298170::func_ov104_02297960,
        &Unk_ov104_02298170::func_ov104_022978ec,
        &Unk_ov104_02298170::func_ov104_0229788c,
        &Unk_ov104_02298170::func_ov104_02297864,
        &Unk_ov104_02298170::func_ov104_02297804,
        &Unk_ov104_02298170::func_ov104_022977b4,
        &Unk_ov104_02298170::func_ov104_02297758,
        &Unk_ov104_02298170::func_ov104_022976e4,
        &Unk_ov104_02298170::func_ov104_022976a4,
        &Unk_ov104_02298170::func_ov104_02297678,
        &Unk_ov104_02298170::func_ov104_02297640};
    func_ov104_02297488();
    (this->*tbl[unk_8c])();
    func_ov104_02297450();
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_24() {
    if (!func_ov104_02294e1c(1)) {
        return TRUE;
    }
    unk_2348.vfunc_08();
    if (func_0206ef00()) {
        unk_2420.func_ov002_02202844();
    }
    func_ov104_02296014();
    if (func_ov104_02294e1c(2)) {
        unk_3e1c.func_ov002_022036a4(unk_98);
        s32 t = unk_98 - 0x10;
        unk_2e0.func_ov094_022932d0(0, t);
        unk_d40.func_ov094_022941a0(0, t);
        unk_d68.func_ov094_0229277c(t);
    }
    if (func_ov104_02294e1c(0x200)) {
        unk_d40.func_ov094_02294104(unk_9c, -0x10);
    }
    if (func_ov104_02294e1c(0x80)) {
        unk_2a9c.func_0208e288(0, func_ov002_02200920());
        unk_2a9c.vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov104_022974ec();
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_00() {
    func_ov104_02297538();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov104_02298170 *func_ov104_02297ef8() { return new Unk_ov104_02298170(); }

Unk_ov104_02298170::~Unk_ov104_02298170() {}
