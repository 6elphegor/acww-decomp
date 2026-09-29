#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_022488d8 {
public:
    Unk_ov004_022488d8();
    virtual ~Unk_ov004_022488d8();
};

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60(u32 a);
    virtual u32 vfunc_64(u32 a);
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual BOOL vfunc_74();
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    BOOL func_ov004_02206f8c();
    BOOL func_ov004_022057bc();
    BOOL func_ov004_02208980();
    void func_ov004_02208a18(s32 a, s32 b, s32 c);
    void func_ov004_02208ba8(s32 a, s32 b, s32 c, s32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    void func_ov004_02209108();
    void func_ov004_02209150();

    /* 0x0f0 */ u8 f_0f0[0x73c - 0xf0];
    /* 0x73c */ u8 f_73c[0x778 - 0x73c];
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 f_779[0x794 - 0x779];
    /* 0x794 */ u8 f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 f_7b4[0x840 - 0x7b4];
};

// The 0x5d0 sub-object and 0x590 field are inside the opaque range; use these helpers.
#define BASE_U8(o) (*(u8 *)((u8 *)this + (o)))
#define BASE_S32(o) (*(s32 *)((u8 *)this + (o)))
#define PT(o) ((void *)((u8 *)this + (o)))

struct Unk_020cbb18_G {
    u8 pad_00[0x68];
    s32 unk_68;
};

struct Unk_020e45e0 {
    Unk_020e45e0();
    u32 pad[10];
};

extern "C" {
extern Unk_020cbb18_G *data_020cbb18;
extern u8 data_ov004_02240064[];
extern u8 data_ov004_0224bb60[];

void func_ov004_02205c44(void *p, s32 a, s32 b);
BOOL func_ov004_02205c6c(void *p);
BOOL func_ov004_02205c7c(void *p);
void func_ov004_02235908(void *p, s32 a, void *q);
void func_ov004_022358e0(void *p, s32 a);
BOOL func_ov004_02234ad4();
void *func_ov004_02235a04();
void *func_ov004_02235c74(void *o);
void *func_ov004_02235a1c(void *o);
void func_020b8cf8(void *o, u16 *p);
u32 func_020b8cf0(void *o);
BOOL func_020b8840(void *o, void *a, u32 b, void *c, u32 d, u32 e);
BOOL func_020565e8(void *o, u32 a);
s32 func_02051cc8(void *o, s32 a, u8 c, u8 d);
void *func_0209750c();
void *func_02098750(void *o);
s32 func_02097d1c(void *o, s32 a);
void func_02097ac4(void *o, s32 a, s32 b);
}

// ---------------------------------------------------------------------------
// Class A (vtable 0x0224981c, secondary 0x022498c8), size 0x86c

class Unk_ov004_0224981c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224981c();
    virtual ~Unk_ov004_0224981c();

    /* 0x840 */ u8 unk_840[4];
    /* 0x844 */ Unk_020e45e0 unk_844;
};

Unk_ov004_0224981c::~Unk_ov004_0224981c() {}

Unk_ov004_0224981c::Unk_ov004_0224981c() {}

extern "C" void func_ov004_0220b264() {
    new Unk_ov004_0224981c;
}

// ---------------------------------------------------------------------------
// Class B (vtable 0x02249ba0), size 0x86c

class Unk_ov004_02249ba0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249ba0();
    virtual ~Unk_ov004_02249ba0();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u8 vfunc_78();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ Unk_020e45e0 unk_844;
};

u8 Unk_ov004_02249ba0::vfunc_78() {
    if (unk_842 >= 2) return 1;
    return 0;
}

BOOL Unk_ov004_02249ba0::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249ba0::vfunc_70(s32 a, s32 b) {
    if (unk_842 < 2) unk_842++;
    return TRUE;
}

BOOL Unk_ov004_02249ba0::vfunc_6c() {
    u16 v;
    u16 tmp;
    u32 s;
    u32 t;
    unk_840 = (u16)func_ov004_02235c74(func_ov004_02235a04());
    unk_842 = 0;
    if (unk_840 < 0x44) {
        v = unk_840 + 0x1100;
    } else {
        v = 0x1100;
    }
    tmp = v;
    func_020b8cf8(func_ov004_02235a1c(func_ov004_02235a04()), &tmp);
    s = BASE_S32(0x590);
    t = func_020b8cf0(func_ov004_02235a1c(func_ov004_02235a04()));
    if (func_020b8840(&unk_844, (void *)s, (u32)data_ov004_0224bb60, (void *)t, 0, 0) != 0) return TRUE;
    return FALSE;
}

Unk_ov004_02249ba0::~Unk_ov004_02249ba0() {}

Unk_ov004_02249ba0::Unk_ov004_02249ba0() {}

extern "C" void func_ov004_0220b3bc() {
    new Unk_ov004_02249ba0;
}

// ---------------------------------------------------------------------------
// Class C (vtable 0x02249ccc), size 0x844

class Unk_ov004_02249ccc;
typedef void (Unk_ov004_02249ccc::*Unk_ov004_0220b73c_Fn)();
typedef BOOL (Unk_ov004_02249ccc::*Unk_ov004_0220b7d4_Fn)();

class Unk_ov004_02249ccc : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249ccc();
    virtual ~Unk_ov004_02249ccc();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_60(u32 a);
    virtual u32 vfunc_64(u32 a);
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual BOOL vfunc_74();

    void func_ov004_0220b3d8();
    BOOL func_ov004_0220b448();
    void func_ov004_0220b47c();
    BOOL func_ov004_0220b534();
    void func_ov004_0220b574();
    BOOL func_ov004_0220b628();
    void func_ov004_0220b654();
    BOOL func_ov004_0220b6a8();
    void func_ov004_0220b6e0();
    BOOL func_ov004_0220b708();
    void func_ov004_0220b73c();
    void func_ov004_0220b9cc();
    BOOL func_ov004_0220b9d4();
    void func_ov004_0220ba38();
    BOOL func_ov004_0220ba84();
    void func_ov004_0220ba88();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 unk_843;
};

void Unk_ov004_02249ccc::func_ov004_0220b3d8() {
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02235908(PT(0x794), 0x42a, PT(0x7b4));
        if (unk_842 != 0) {
            func_ov004_022358e0(PT(0x794), 1);
            unk_842 = 0;
        }
    }
    func_ov004_02205c44(PT(0x73c), 0, 0);
    if (func_ov004_02208980() != 0) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b448() {
    func_ov004_02205c44(PT(0x73c), 0, 0);
    func_ov004_02208a18(0, 3, 0x1000);
    unk_842 = 1;
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b47c() {
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02235908(PT(0x794), 0x42a, PT(0x7b4));
    }
    func_ov004_02205c44(PT(0x73c), 0, 0);
    if (func_ov004_02206f8c() == 0) {
        if (func_020565e8(PT(0x5d0), 0) != 0) {
            func_ov004_022358e0(PT(0x794), 1);
        } else if (func_020565e8(PT(0x5d0), 0x14) != 0) {
            if ((unk_841 & 1) != 0) {
                func_ov004_022358e0(PT(0x794), 2);
            } else {
                func_ov004_022358e0(PT(0x794), 1);
            }
            unk_841++;
        }
    }
    if (func_ov004_02208980() != 0) {
        vfunc_70(4, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b534() {
    func_ov004_02205c44(PT(0x73c), 0, 0);
    func_ov004_02209108();
    func_ov004_02208ba8(1, 1, 0x1000, 0xffff);
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b574() {
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02235908(PT(0x794), 0x42a, PT(0x7b4));
    }
    func_ov004_02208980();
    if (func_ov004_02206f8c() == 0) {
        if (func_020565e8(PT(0x5d0), 0) != 0) {
            func_ov004_022358e0(PT(0x794), 1);
        } else if (func_020565e8(PT(0x5d0), 0x14) != 0) {
            if ((unk_841 & 1) != 0) {
                func_ov004_022358e0(PT(0x794), 2);
            } else {
                func_ov004_022358e0(PT(0x794), 1);
            }
            unk_841++;
        }
    }
    if (func_ov004_02205c6c(PT(0x73c)) != 0) {
        func_02051cc8(this, 3, 0xff, 1);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b628() {
    func_ov004_02205c44(PT(0x73c), 1, 0);
    func_ov004_02208a18(1, 0, 0x1000);
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b654() {
    if (func_ov004_02206f8c() == 0) {
        func_ov004_02235908(PT(0x794), 0x42a, PT(0x7b4));
    }
    func_ov004_02205c44(PT(0x73c), 1, 0);
    if (func_ov004_02208980() != 0) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b6a8() {
    func_ov004_02205c44(PT(0x73c), 1, 0);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b6e0() {
    if (func_ov004_02205c6c(PT(0x73c)) != 0) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b708() {
    func_ov004_02205c44(PT(0x73c), 0, 0);
    func_ov004_02208ba8(0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220b73c() {
    static Unk_ov004_0220b73c_Fn tbl[5] = {&Unk_ov004_02249ccc::func_ov004_0220b6e0, &Unk_ov004_02249ccc::func_ov004_0220b654,
                                           &Unk_ov004_02249ccc::func_ov004_0220b574, &Unk_ov004_02249ccc::func_ov004_0220b47c,
                                           &Unk_ov004_02249ccc::func_ov004_0220b3d8};
    u32 i = unk_843;
    if (i < 5) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249ccc::vfunc_60(u32 idx) {
    Unk_ov004_0224882c::vfunc_60(idx);
    static Unk_ov004_0220b7d4_Fn tbl[5] = {&Unk_ov004_02249ccc::func_ov004_0220b708, &Unk_ov004_02249ccc::func_ov004_0220b6a8,
                                           &Unk_ov004_02249ccc::func_ov004_0220b628, &Unk_ov004_02249ccc::func_ov004_0220b534,
                                           &Unk_ov004_02249ccc::func_ov004_0220b448};
    if (idx < 5) {
        if ((this->*tbl[idx])() != 0) {
            unk_843 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_02249ccc::vfunc_64(u32 idx) {
    if (idx < 5) return data_ov004_02240064[idx];
    return 0;
}

BOOL Unk_ov004_02249ccc::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249ccc::vfunc_74() {
    if (func_ov004_02206f8c() == 0) {
        if (func_ov004_022057bc() == 0) {
            func_ov004_02235908(PT(0x794), 0x42a, PT(0x7b4));
        }
    }
    return TRUE;
}

BOOL Unk_ov004_02249ccc::vfunc_70(s32 a, s32 b) {
    func_ov004_0220b73c();
    return TRUE;
}

BOOL Unk_ov004_02249ccc::vfunc_6c() {
    unk_840 = 0;
    func_ov004_02208de0(0, 1, 0x1000, 0);
    if (func_ov004_02205c7c(PT(0x73c)) != 0 && func_ov004_02234ad4() == 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_02249ccc::~Unk_ov004_02249ccc() {}

Unk_ov004_02249ccc::Unk_ov004_02249ccc() {}

extern "C" void func_ov004_0220b9b0() {
    new Unk_ov004_02249ccc;
}

void Unk_ov004_02249ccc::func_ov004_0220b9cc() {
    func_ov004_0220ba38();
}

BOOL Unk_ov004_02249ccc::func_ov004_0220b9d4() {
    void *r5;
    func_ov004_02209150();
    if (unk_778 == data_020cbb18->unk_68) {
        r5 = func_0209750c();
        if (r5 != 0) {
            if (func_02097d1c(func_02098750(r5), 0) > 0) {
                void *r4 = func_02098750(r5);
                func_02097ac4(r4, func_02097d1c(func_02098750(r5), 0) - 1, 0);
            }
        }
    }
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220ba38() {
    if (func_ov004_02205c6c(PT(0x73c)) != 0) {
        func_02051cc8(this, 1, data_020cbb18->unk_68, 1);
    } else if (func_ov004_02206f8c() != 0) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_02249ccc::func_ov004_0220ba84() {
    return TRUE;
}

void Unk_ov004_02249ccc::func_ov004_0220ba88() {
    static Unk_ov004_0220b73c_Fn tbl[2] = {&Unk_ov004_02249ccc::func_ov004_0220ba38, &Unk_ov004_02249ccc::func_ov004_0220b9cc};
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}
