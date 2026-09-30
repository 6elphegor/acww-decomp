#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_0200402c(s32 a);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020015e0(u32 a);
void *func_0206ed68();
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_02003b9c();
void func_02003bac();
void func_020ed188();
extern u8 *data_021c1b3c;
extern u16 data_021f47d8[];
}

class Unk_ov091_02291ef0;

struct Unk_0206d1d4_Src;

class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void func_0206d394();
    void func_0206d39c(s32 v);

    u32 unk_00[0x210 / 4];
};

class Unk_02035758 {
public:
    void func_02035bb4();
    void func_02035bbc(s32 v);
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u32 flag);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208e13c(s32 v);
    void func_0208e288(s32 x, s32 y);

    /* 0x0c */ u8 unk_0c[0x64];
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x2a4 sub-object (0x70 bytes)
class Unk_ov002_0220471c : public Unk_020e1098 {
public:
    Unk_ov002_0220471c();
    virtual ~Unk_ov002_0220471c();
};

class Unk_ov002_02204738 {
public:
    BOOL func_ov002_02203e24();
    void func_ov002_02203ec8(s32 v);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 k);
    s32 func_ov002_02203f78(s32 k);
};

// +0x314 sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    u8 unk_4b[0x64 - 0x4b];
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

class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 x, s32 y);
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);
};

typedef void (Unk_ov091_02291ef0::*Unk_ov091_02291ef0_Fn)();

class Unk_ov091_02291ef0 : public Unk_ov002_022044e4 {
public:
    Unk_ov091_02291ef0()
        : unk_94(), unk_2a4(), unk_314() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov091_02291974();
    void func_ov091_022919c4();
    void func_ov091_02291a70();
    void func_ov091_02291ab4();
    void func_ov091_02291b0c();
    void func_ov091_02291b70();
    void func_ov091_02291ba8();
    void func_ov091_02291c04();
    void func_ov091_0229195c();
    void func_ov091_02291968();
    void func_ov091_02291a10();
    void func_ov091_02291a14();
    void func_ov091_02291a18();
    void func_ov091_02291a24();

    /* 0x094 */ Unk_0206d0a0 unk_94;
    /* 0x2a4 */ Unk_ov002_0220471c unk_2a4;
    /* 0x314 */ Unk_ov002_02204630 unk_314;
};

extern "C" Unk_ov091_02291ef0 *func_ov091_02291e54() { return new Unk_ov091_02291ef0(); }

struct Unk_ov091_SceneEntry {
    Unk_ov091_02291ef0 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov091_SceneEntry data_ov091_02291eb8 = {func_ov091_02291e54, 0xa8, 0xac};

BOOL Unk_ov091_02291ef0::vfunc_00() {
    func_ov091_02291a24();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    func_02003bac();
    return TRUE;
}

BOOL Unk_ov091_02291ef0::vfunc_0c() {
    func_ov091_02291a18();
    func_02003b9c();
    return TRUE;
}

BOOL Unk_ov091_02291ef0::vfunc_24() {
    unk_314.vfunc_0c();
    s32 r = func_ov002_02200920();
    unk_2a4.func_0208e288(0, r);
    unk_2a4.vfunc_08();
    if (func_0206ef00()) {
        ((Unk_ov002_02202d98 *)&unk_314)->func_ov002_02202844();
    }
    return TRUE;
}

BOOL Unk_ov091_02291ef0::vfunc_4c() {
    static Unk_ov091_02291ef0_Fn tbl[6] = {
        &Unk_ov091_02291ef0::func_ov091_02291c04, &Unk_ov091_02291ef0::func_ov091_02291ba8,
        &Unk_ov091_02291ef0::func_ov091_02291b70, &Unk_ov091_02291ef0::func_ov091_02291b0c,
        &Unk_ov091_02291ef0::func_ov091_02291ab4, &Unk_ov091_02291ef0::func_ov091_02291a70};
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL Unk_ov091_02291ef0::vfunc_50() {
    func_ov091_02291a14();
    static Unk_ov091_02291ef0_Fn tbl[2] = {&Unk_ov091_02291ef0::func_ov091_022919c4,
                                           &Unk_ov091_02291ef0::func_ov091_02291974};
    (this->*tbl[unk_8d])();
    func_ov091_02291a10();
    return TRUE;
}

BOOL Unk_ov091_02291ef0::vfunc_54() { return TRUE; }

BOOL Unk_ov091_02291ef0::vfunc_58() { return TRUE; }

BOOL Unk_ov091_02291ef0::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

void Unk_ov091_02291ef0::func_ov091_02291c04() {
    func_0200402c(1);
    ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(0);
    func_020015e0(0);
    unk_94.func_0206d2e0((Unk_0206d1d4_Src *)func_0206ed68(), 0, (void *)2, 1);
    func_ov002_022008a8(0xa, 0, 0, 0x30);
    func_020020b8(0);
    func_ov002_02200840(0, 0, 0);
    func_0200226c(0, 0, 0, 0);
    func_020020b8(2);
    func_ov002_02200840(2, 0, 0);
    func_0200226c(2, 0, 0, 0);
    func_ov002_02200a50(1);
}

void Unk_ov091_02291ef0::func_ov091_02291ba8() {
    if (func_ov002_02200908(1)) {
        func_ov002_02200a60(2);
        ((Unk_ov002_0220464c *)&unk_314)->func_ov002_02202d00(1);
        if (func_0206ef0c()) {
            func_ov002_02200a58(0);
        } else {
            func_ov002_02200a58(1);
        }
    }
    func_ov002_02200840(0, 0, 0);
    func_ov002_02200840(2, 0, 0);
}

void Unk_ov091_02291ef0::func_ov091_02291b70() {
    if (unk_314.func_0208d4fc()) {
        unk_2a4.func_0208e13c(2);
        func_ov002_02200a50(3);
        func_0200402c(0x27);
    }
}

void Unk_ov091_02291ef0::func_ov091_02291b0c() {
    if (((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203f08()) {
        if (unk_314.func_0208d534()) {
            s32 a = ((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203f78(1);
            s32 b = ((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203f28(1);
            ((Unk_ov002_02202d98 *)&unk_314)->func_ov002_02202a40(a, b);
        }
    } else {
        ((Unk_ov002_0220464c *)&unk_314)->func_ov002_02202d00(0);
        func_ov002_02200a50(4);
    }
}

void Unk_ov091_02291ef0::func_ov091_02291ab4() {
    func_0200402c(2);
    ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bb4();
    func_ov002_0220088c(0xa, 0, 0, 0x30);
    func_ov002_02200840(0, 0, 0);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(5);
}

void Unk_ov091_02291ef0::func_ov091_02291a70() {
    if (func_ov002_022008fc(1)) {
        func_020021a0(0);
        func_020021a0(2);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(0, 0, 0);
        func_ov002_02200840(2, 0, 0);
    }
}

void Unk_ov091_02291ef0::func_ov091_02291a24() {
    unk_94.func_0206d39c(0);
    ((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203ec8(0x65);
    s32 a = ((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203f78(1);
    s32 b = ((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203f28(1);
    ((Unk_ov002_02202d98 *)&unk_314)->func_ov002_02202a40(a, b);
}

void Unk_ov091_02291ef0::func_ov091_02291a18() { unk_94.func_0206d394(); }

void Unk_ov091_02291ef0::func_ov091_02291a14() {}

void Unk_ov091_02291ef0::func_ov091_02291a10() {}

void Unk_ov091_02291ef0::func_ov091_022919c4() {
    if (func_ov002_02200a14(1)) {
        func_ov091_0229195c();
    } else if (((Unk_ov002_02204738 *)&unk_2a4)->func_ov002_02203e24()) {
        unk_2a4.func_0208e13c(2);
        unk_8c = 3;
        func_ov002_02200a60(1);
        func_0200402c(0x27);
    }
}

void Unk_ov091_02291ef0::func_ov091_02291974() {
    if (func_ov002_022009d4()) {
        func_ov091_02291968();
    } else {
        u16 v = data_021f47d8[1];
        if ((v & 1) != 0 || (v & 2) != 0) {
            ((Unk_ov002_0220464c *)&unk_314)->func_ov002_02202b68();
            unk_8c = 2;
            func_ov002_02200a60(1);
        }
    }
}

void Unk_ov091_02291ef0::func_ov091_02291968() { func_ov002_02200a58(0); }

void Unk_ov091_02291ef0::func_ov091_0229195c() { func_ov002_02200a58(1); }

// ---------------------------------------------------------------------------------------------

