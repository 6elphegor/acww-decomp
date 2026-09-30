#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
u32 func_0206ed50();
void func_0206e048();
void func_0206db88(s32 a);
void func_0200402c(s32 a);
void func_02003f5c(s32 a);
void func_020015b8(s32 a);
void func_0206e60c();
void func_0206f0b8(s32 a);
void func_0206ed44(s32 a);
void func_0206e03c();
void func_0206e070();
void func_0206e5fc();
void func_0206dfe4();
void func_02003b9c();
void func_02003bac();
void func_0206eee4();
void func_020ed188();
extern u8 *data_021c1b3c;
}

class Unk_02035758 {
public:
    void func_02035bb4();
    void func_02035bbc(s32 a);
};

class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();
    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_ov002_02201194 {
public:
    Unk_ov002_02201194();
    ~Unk_ov002_02201194();
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

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

    void func_ov002_02200a60(u8 v);

    /* 0x50 */ Unk_ov002_022013a0 unk_50;
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ Unk_ov002_02201194 unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

class Unk_ov092_02291ec8;
typedef void (Unk_ov092_02291ec8::*Unk_ov092_02291ec8_Fn)();

// Vtable 0x02291ec8
class Unk_ov092_02291ec8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov092_02291ec8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov092_02291918();
    void func_ov092_0229191c();
    void func_ov092_02291a2c();
    void func_ov092_02291a44();
    void func_ov092_02291c58();
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);

    /* 0x91 */ u8 unk_91;
};

void Unk_ov092_02291ec8::func_ov092_0229191c() {
    unk_91 = func_0206ed50();
    unk_8d = 1;
    if (unk_91 == 0) {
        func_ov002_02200a60(2);
    } else {
        unk_8c = 0;
        func_ov002_02200a60(0);
        func_0206e048();
    }
    switch (unk_91) {
    case 0x2d:
    case 0x2e:
        func_0206db88(3);
        break;
    case 0xf:
        func_0206db88(1);
        break;
    case 0x10:
        func_0206db88(2);
        break;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
        func_0206db88(0);
        break;
    }
    switch (unk_91) {
    case 0:
        func_0200402c(0x11);
        break;
    default:
        func_0200402c(1);
        break;
    case 3:
        func_02003f5c(1);
        break;
    }
    switch (unk_91) {
    case 0x2d:
    case 0x2e:
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(1);
        break;
    case 0x3f:
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(2);
        break;
    default:
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bbc(0);
        break;
    }
}

void Unk_ov092_02291ec8::func_ov092_02291a2c() {
    func_020015b8(0);
    func_ov002_02200a60(2);
}

void Unk_ov092_02291ec8::func_ov092_02291a44() {
    switch (unk_91) {
    case 0:
    case 1:
    case 0x18:
    case 0x1a:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x40:
        func_0206e60c();
        break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
        break;
    }
    switch (unk_91) {
    case 0x0: func_0206f0b8(0xb); break;
    case 0x1: func_0206f0b8(0xa); break;
    case 0x2: case 0x3: func_0206f0b8(0xd); break;
    case 0x4: case 0x5: case 0x6: case 0x7: case 0x8: case 0x9: case 0xa: func_0206f0b8(0xe); break;
    case 0xb: case 0xc: case 0xd: case 0xe: case 0xf: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: func_0206f0b8(0xf); break;
    case 0x18: case 0x19: case 0x1a: case 0x1b: break;
    case 0x1c: func_0206f0b8(0x10); break;
    case 0x1d: case 0x1e: func_0206f0b8(0x11); break;
    case 0x1f: case 0x20: func_0206f0b8(0x2c); break;
    case 0x21: func_0206f0b8(0x12); break;
    case 0x22: func_0206f0b8(0x13); break;
    case 0x24: func_0206f0b8(0x14); break;
    case 0x25: func_0206f0b8(0x15); break;
    case 0x26: func_0206f0b8(0x16); break;
    case 0x27: func_0206f0b8(0x17); break;
    case 0x28: func_0206f0b8(0x28); break;
    case 0x23: func_0206f0b8(0x29); break;
    case 0x29: case 0x2a: case 0x2b: case 0x2c: func_0206f0b8(0x18); break;
    case 0x2d: func_0206f0b8(0x19); break;
    case 0x2e: func_0206f0b8(0x1a); break;
    case 0x2f: func_0206f0b8(0x1b); break;
    case 0x30: func_0206f0b8(0x1c); break;
    case 0x31: func_0206f0b8(0x1d); break;
    case 0x32: func_0206f0b8(0x1e); break;
    case 0x33: func_0206f0b8(0x2a); break;
    case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3a: func_0206f0b8(0x1f); break;
    case 0x3b: func_0206f0b8(0x20); break;
    case 0x3c: func_0206f0b8(0x2d); break;
    case 0x3d: func_0206f0b8(0x22); break;
    case 0x3e: func_0206f0b8(0x23); break;
    case 0x3f: func_0206f0b8(0x25); break;
    case 0x40: func_0206f0b8(0x26); break;
    case 0x41: func_0206f0b8(0x27); break;
    case 0x42: func_0206f0b8(0x2d); break;
    }
    unk_8d = 0;
}

void Unk_ov092_02291ec8::func_ov092_02291c5c() {
    switch (unk_91) {
    case 0x43:
        func_ov002_02200a60(5);
        break;
    case 0x44:
        func_ov002_02200a60(0);
        func_020015b8(1);
        func_0206e03c();
        break;
    case 0:
    case 1:
        func_0206e048();
        unk_8d = 1;
        break;
    case 2:
    case 0x23:
    case 0x35:
    case 0x36:
    case 0x40:
        unk_8d = 1;
        func_0206ed44(unk_91);
        break;
    }
}

void Unk_ov092_02291ec8::func_ov092_02291ce4(s32 a, s32 b) {
    unk_91 = a;
    switch (a) {
    case 0:
        break;
    case 1:
        break;
    case 0x43:
        break;
    case 0x44:
        func_0206e070();
        break;
    }
    if (a != 0x43 && a != 0x44) {
    } else {
        if (b != 0) {
            func_0200402c(2);
        }
        ((Unk_02035758 *)(data_021c1b3c + 0x1c4))->func_02035bb4();
    }
}

BOOL Unk_ov092_02291ec8::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_58() { return TRUE; }

BOOL Unk_ov092_02291ec8::vfunc_54() { return TRUE; }

BOOL Unk_ov092_02291ec8::vfunc_50() {
    static Unk_ov092_02291ec8_Fn tbl[2] = {&Unk_ov092_02291ec8::func_ov092_02291c58, &Unk_ov092_02291ec8::func_ov092_02291a44};
    (this->*tbl[unk_8d])();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_4c() {
    static Unk_ov092_02291ec8_Fn tbl[1] = {&Unk_ov092_02291ec8::func_ov092_02291a2c};
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_24() { return TRUE; }

BOOL Unk_ov092_02291ec8::vfunc_0c() {
    func_0206e5fc();
    func_0206dfe4();
    func_ov092_02291918();
    func_02003b9c();
    return TRUE;
}

BOOL Unk_ov092_02291ec8::vfunc_00() {
    func_0206e5fc();
    func_ov092_0229191c();
    func_02003bac();
    func_0206eee4();
    return TRUE;
}

Unk_ov092_02291ec8::~Unk_ov092_02291ec8() {}

void Unk_ov092_02291ec8::func_ov092_02291c58() {}

void Unk_ov092_02291ec8::func_ov092_02291918() {}

extern "C" Unk_ov092_02291ec8 *func_ov092_02291e60() {
    return new Unk_ov092_02291ec8();
}
