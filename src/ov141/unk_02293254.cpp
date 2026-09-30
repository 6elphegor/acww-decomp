#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern u8 data_ov141_022939c8[];
extern u8 data_ov141_022939dc[];
extern u32 data_021f482c;
extern u32 data_ov141_02293a00;
extern u32 data_ov141_02293a04;

extern "C" {
s32 func_020ed174(void *p);
void func_020ed188(void *p);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_020641b4(void *a, void *b, u32 c);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206ecf8(s32 a);
void *func_0206e868();
void *func_0206e85c();
void func_0206e874();
BOOL func_0206ef00();
void func_02116048(void *dst, void *src, u32 n);
void func_02087e70(u32 a, s32 h, s32 x, u32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
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
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);

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

// library sub-object at +0x94 (ov139 code; 0x624 bytes)
class Unk_ov141_094 {
public:
    Unk_ov141_094();
    s32 func_ov139_02291f98(s32 i);
    void func_ov139_022921ac();
    void func_ov139_0229237c();
    void func_ov139_022923dc();
    void func_ov139_02292410();
    void func_ov139_02292480(s32 a, s32 b);
    void func_ov139_02292498();
    void func_ov139_022924d8();
    void func_ov139_022924f4();
    void func_ov139_02292510(s32 a, s32 b);
    u32 unk_00[0x624 / 4];
};

// polymorphic object at +0x6b8 (vtable slot 0x0c called)
class Unk_ov141_6b8 {
public:
    Unk_ov141_6b8();
    virtual ~Unk_ov141_6b8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// object at +0x71c
class Unk_ov141_71c {
public:
    Unk_ov141_71c();
    void func_ov002_02203900();
    void func_ov002_02203920();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

// object at +0x880 (same class as main Unk_020e45f8, 0x24 bytes)
class Unk_ov141_880 {
public:
    Unk_ov141_880();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b86c0(void *a, u8 b, u32 c, u32 d);
    void func_020b87d0();
    u32 unk_04[0x20 / 4];
};

class Unk_ov141_02293968;
typedef void (Unk_ov141_02293968::*Unk_ov141_02293968_Fn)();

// Vtable 0x02293968, size 0x1674 (scene overlay on Unk_ov002_022044e4)
class Unk_ov141_02293968 : public Unk_ov002_022044e4 {
public:
    Unk_ov141_02293968() : unk_94(), unk_6b8(), unk_71c(), unk_880() {}
    virtual ~Unk_ov141_02293968();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // callees in other groups
    void func_ov141_0229297c(u32 m);
    void func_ov141_0229298c(u32 m);
    BOOL func_ov141_0229299c(u32 m);
    s32 func_ov141_022929b4(s32 v);
    void func_ov141_022929e8();
    void func_ov141_022929ec();
    void func_ov141_02292ca0();
    void func_ov141_02292f80();
    void func_ov141_02292fd4();
    void func_ov141_02293000();
    void func_ov141_02293054();
    void func_ov141_022930d4();
    void func_ov141_02293104();
    void func_ov141_02293194();

    // in range
    void func_ov141_02293254();
    void func_ov141_02293270();
    void func_ov141_022932f0();
    void func_ov141_0229333c();
    void func_ov141_02293354();
    void func_ov141_02293380();
    void func_ov141_02293388();
    void func_ov141_022933a4();
    void func_ov141_022933d0();
    void func_ov141_02293424();
    void func_ov141_02293448();
    void func_ov141_02293474();
    void func_ov141_022934b4();
    void func_ov141_022934e4();
    void func_ov141_02293524();
    void func_ov141_022935e0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ Unk_ov141_094 unk_94;
    /* 0x6b8 */ Unk_ov141_6b8 unk_6b8;
    /* 0x71c */ Unk_ov141_71c unk_71c;
    /* 0x880 */ Unk_ov141_880 unk_880;
    /* 0x8a4 */ u8 unk_8a4[6][0xe0];
    /* 0xde4 */ u8 unk_de4[6][0x11];
    /* 0xe4a */ u8 unk_e4a[2];
    /* 0xe4c */ u32 unk_e4c;
    /* 0xe50 */ s32 unk_e50;
    /* 0xe54 */ s32 unk_e54;
    /* 0xe58 */ s32 unk_e58;
    /* 0xe5c */ s32 unk_e5c;
    /* 0xe60 */ u8 unk_e60[0x800];
    /* 0x1660 */ u16 unk_1660;
    /* 0x1662 */ u8 unk_1662;
    /* 0x1663 */ u8 unk_1663[6];
    /* 0x1669 */ u8 unk_1669[7];
    /* 0x1670 */ u8 unk_1670;
};

void Unk_ov141_02293968::func_ov141_02293254() {
    unk_94.func_ov139_0229237c();
    unk_71c.func_ov002_02203920();
}

void Unk_ov141_02293968::func_ov141_02293270() {
    unk_94.func_ov139_02292410();
    unk_94.func_ov139_022923dc();
    func_020641b4(data_ov141_022939c8, unk_e60, 0x800);
    func_0206ee80(unk_e60, 7, 8, 0x10, 0x13, 7);
    func_0206ee80(unk_e60, 0x12, 8, 0x19, 0x13, 7);
    func_ov141_0229298c(4);
    func_020026c4(data_ov141_022939dc, data_021f482c, 6, 3, 3, 3);
}

void Unk_ov141_02293968::func_ov141_022932f0() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 2);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov141_02293968::func_ov141_02293380() {
    func_ov141_0229333c();
}

void Unk_ov141_02293968::func_ov141_0229333c() {
    func_ov141_02292ca0();
    unk_94.func_ov139_02292498();
}

void Unk_ov141_02293968::func_ov141_02293354() {
    unk_880.func_020b87d0();
    unk_71c.func_ov002_02203900();
    unk_94.func_ov139_022924d8();
}

void Unk_ov141_02293968::func_ov141_02293388() {
    func_ov141_02293354();
    unk_6b8.vfunc_0c();
}

void Unk_ov141_02293968::func_ov141_022933a4() {
    unk_71c.func_ov002_02203900();
    unk_94.func_ov139_022924f4();
    unk_880.func_020b87d0();
}

void Unk_ov141_02293968::func_ov141_022933d0() {
    s32 i;
    unk_1660 = 0;
    unk_94.func_ov139_02292510(6, 0x7e);
    for (i = 0; i < 6; i++) {
        unk_1663[i] = 0;
    }
    func_ov141_022929b4(-1);
    unk_e5c = 8;
    unk_1670 = 0;
}

void Unk_ov141_02293968::func_ov141_02293424() {
    func_ov002_02200840(6, 0, 0);
    unk_e4c = func_ov002_02200920();
}

void Unk_ov141_02293968::func_ov141_02293448() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov002_02200a60(5);
    } else {
        func_ov141_02293424();
    }
}

void Unk_ov141_02293968::func_ov141_02293474() {
    func_ov141_022929e8();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov141_02293424();
    func_ov002_02200a50(4);
}

void Unk_ov141_02293968::func_ov141_022934b4() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov141_02292f80();
        func_ov141_022929ec();
    }
    func_ov141_02293424();
}

void Unk_ov141_02293968::func_ov141_022934e4() {
    unk_94.func_ov139_022921ac();
    func_ov002_022008e0(8, 4, 0, 0x30);
    func_020020b8(6);
    func_ov141_02293424();
    func_ov141_0229298c(1);
    func_ov002_02200a50(2);
}

void Unk_ov141_02293968::func_ov141_02293524() {
    func_ov141_022932f0();
    func_ov141_02293270();
    func_ov141_02293254();
    func_ov002_02200a50(1);
}

BOOL Unk_ov141_02293968::vfunc_5c() {
    if (func_ov141_0229299c(2)) {
        func_0206ecf8(0);
    } else {
        func_0206ecf8(1);
        void *s = func_0206e868();
        if (s) {
            func_02116048(unk_8a4[unk_e54], s, 0xe0);
        }
        s = func_0206e85c();
        if (s) {
            func_02116048(unk_de4[unk_e54], s, 0x11);
        }
    }
    func_0206e874();
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_58() { return TRUE; }

BOOL Unk_ov141_02293968::vfunc_54() { return TRUE; }

BOOL Unk_ov141_02293968::vfunc_50() {
    func_ov141_02293388();
    func_ov141_022935e0();
    func_ov141_02293380();
    return TRUE;
}

void Unk_ov141_02293968::func_ov141_022935e0() {
    static Unk_ov141_02293968_Fn tbl[6] = {
        &Unk_ov141_02293968::func_ov141_02293194,
        &Unk_ov141_02293968::func_ov141_02293104,
        &Unk_ov141_02293968::func_ov141_022930d4,
        &Unk_ov141_02293968::func_ov141_02293054,
        &Unk_ov141_02293968::func_ov141_02293000,
        &Unk_ov141_02293968::func_ov141_02292fd4};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov141_02293968::vfunc_4c() {
    static Unk_ov141_02293968_Fn tbl[5] = {
        &Unk_ov141_02293968::func_ov141_02293524,
        &Unk_ov141_02293968::func_ov141_022934e4,
        &Unk_ov141_02293968::func_ov141_022934b4,
        &Unk_ov141_02293968::func_ov141_02293474,
        &Unk_ov141_02293968::func_ov141_02293448};
    func_ov141_02293354();
    (this->*tbl[unk_8c])();
    func_ov141_0229333c();
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_24() {
    if (func_0206ef00()) {
        unk_6b8.func_ov002_02202844();
    }
    if (!func_ov141_0229299c(1)) {
        return FALSE;
    }
    unk_71c.func_ov002_022036a4(unk_e50);
    u32 base = unk_e4c + 0x60;
    s32 h0 = unk_94.func_ov139_02291f98(0);
    s32 h1 = unk_94.func_ov139_02291f98(1);
    s32 h2 = unk_94.func_ov139_02291f98(2);
    s32 h3 = unk_94.func_ov139_02291f98(3);
    s32 t = unk_e54;
    if (t != -1) {
        func_02087e70(1, h1, 0x80, base + (t << 4), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    func_02087e70(1, h0, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, h2, 0x80, base, unk_e5c, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, h3, 0x80, base, unk_e58, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    unk_94.func_ov139_02292480(0, unk_e4c);
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_0c() {
    func_020ed174(this);
    func_ov092_02291c5c();
    func_ov141_022933a4();
    return TRUE;
}

BOOL Unk_ov141_02293968::vfunc_00() {
    func_ov141_022933d0();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov141_02293968 *func_ov141_022938a0() { return new Unk_ov141_02293968(); }
