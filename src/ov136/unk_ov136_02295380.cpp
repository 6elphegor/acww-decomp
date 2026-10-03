#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov134_02291f60;

extern "C" {
extern const u8 data_ov136_022962b8[3];
extern const u8 data_ov136_022962bc[3];
extern const u8 data_ov136_022962c0[3];
extern const u8 data_ov136_022962c4[3];
extern const s32 data_ov136_022962c8[3];
extern const s32 data_ov136_022962d4[3];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;

BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void func_0206e8cc(void *p);
void func_0206ecf8(u32 v);
void func_020015b8(u32 a);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void *ProcBase_GetParent();
void ProcBase_RequestDelete();
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
s32 _ZN10HandCursor7getAnimEv(void *self);
s32 _ZN10HandCursor10isAnimDoneEv(void *self);
void _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(void *self, s32 a, s32 b);
void _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(void *self);
void func_ov002_02203920(void *self);

// ov134 library functions (plain symbols; first argument is the Unk_ov134_02291f60 object)
s32 func_ov134_02292c54(Unk_ov134_02291f60 *p, s32 a, s32 b);
BOOL func_ov134_02292cb0(Unk_ov134_02291f60 *p);
void func_ov134_02292df4(Unk_ov134_02291f60 *p);
void func_ov134_02292e40(Unk_ov134_02291f60 *p);
BOOL func_ov134_02292f40(Unk_ov134_02291f60 *p);
void func_ov134_02293024(Unk_ov134_02291f60 *p, u32 a);
s32 func_ov134_022932d8(Unk_ov134_02291f60 *p);
s32 func_ov134_02293510(Unk_ov134_02291f60 *p, u8 a, u8 b);
BOOL func_ov134_02293a3c(Unk_ov134_02291f60 *p);
BOOL func_ov134_02293a5c(Unk_ov134_02291f60 *p);
void func_ov134_02293b30(Unk_ov134_02291f60 *p, u8 a, u8 b);
BOOL func_ov134_02293b90(Unk_ov134_02291f60 *p, u8 a, u8 b);
void func_ov134_02293c48(Unk_ov134_02291f60 *p, s32 a, s32 b);
void func_ov134_022946fc(Unk_ov134_02291f60 *p);
void func_ov134_022947b8(Unk_ov134_02291f60 *p, s32 a);
void func_ov134_022947e8(Unk_ov134_02291f60 *p);
void func_ov134_022948d8(Unk_ov134_02291f60 *p, void *out);
void func_ov134_022948e4(Unk_ov134_02291f60 *p);
void func_ov134_022949a8(Unk_ov134_02291f60 *p);
void func_ov134_022949ec(Unk_ov134_02291f60 *p);
void func_ov134_02294a34(Unk_ov134_02291f60 *p, s32 a, s32 b, s32 c, s32 d);
}

// ov134 library object embedded at +0x25c (size 0x25c4)
class Unk_ov134_02291f60 {
public:
    Unk_ov134_02291f60();
    ~Unk_ov134_02291f60();
    BOOL func_ov134_02292170();
    s32 func_ov134_0229219c(u32 pad);
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    BOOL func_ov134_02292420();
    void func_ov134_02292444();
    void func_ov134_02292450();
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    BOOL func_ov134_02292530();
    u8 unk_00[0x25c4];
};

class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    void func_ov002_02202af0();
    void func_ov002_02202a78();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    s32 func_ov002_022028f0();
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202ca0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 v);
};

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02202fac {
public:
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_02203110(s32 v);
    s32 func_ov002_0220308c();
    s32 func_ov002_0220306c();
    s32 func_ov002_022030f4(s32 v);
    s32 func_ov002_022030b8(s32 v);
};

class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203510(s32 v);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();

    u32 unk_00[0x164 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public GameProc {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
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

class Unk_ov136_022963b0;
typedef void (Unk_ov136_022963b0::*Unk_ov136_022963b0_Fn)();

struct Unk_ov136_SceneEntry {
    Unk_ov136_022963b0 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov136_022963b0 *func_ov136_02296274();

// Vtable 0x022963b0
class Unk_ov136_022963b0 : public Unk_ov002_022044e4 {
public:
    Unk_ov136_022963b0() : unk_94(), unk_f8(), unk_25c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov136_022953f4(u32 m);
    void func_ov136_02295404(u32 m);
    BOOL func_ov136_02295414(u32 m);
    BOOL func_ov136_0229542c(u32 pad);
    void func_ov136_022954c8();
    void func_ov136_022954f0();
    void func_ov136_02295508();
    void func_ov136_02295524(s32 a, s32 b);
    void func_ov136_02295584();
    void func_ov136_022955d4();
    s32 func_ov136_022955f0();
    s32 func_ov136_02295634();
    void func_ov136_02295678();
    void func_ov136_022956d4();
    void func_ov136_022956f4();
    void func_ov136_02295730();
    void func_ov136_02295748();
    void func_ov136_02295774();
    void func_ov136_022957a0(u32 a);
    void func_ov136_022957cc();
    void func_ov136_02295814();
    void func_ov136_02295834();
    void func_ov136_02295850();
    void func_ov136_02295868();
    void func_ov136_022958a8();
    void func_ov136_022958c8();
    void func_ov136_0229592c();
    void func_ov136_02295954();
    void func_ov136_022959d0();
    void func_ov136_022959f8();
    void func_ov136_02295a40();
    void func_ov136_02295a98();
    void func_ov136_02295b30();
    void func_ov136_02295b94();
    void func_ov136_02295bd0();
    void func_ov136_02295c0c();
    void func_ov136_02295ca4();
    void func_ov136_02295cc8();
    void func_ov136_02295d1c();
    void func_ov136_02295db4();
    void func_ov136_02295dd4();
    void func_ov136_02295df4();
    void func_ov136_02295e40();
    void func_ov136_02295e50();
    void func_ov136_02295e6c();
    void func_ov136_02295e74();
    void func_ov136_02295e8c();
    void func_ov136_02295eac();
    void func_ov136_02295ee4();
    void func_ov136_02295f04();
    void func_ov136_02295f34();
    void func_ov136_02295f6c();
    void func_ov136_02295f94();
    void func_ov136_02296024();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov002_02204614 unk_94;
    /* 0x0f8 */ Unk_ov002_022046cc unk_f8;
    /* 0x25c */ Unk_ov134_02291f60 unk_25c;
    /* 0x2820 */ u16 unk_2820;
    /* 0x2822 */ u8 unk_2822;
    /* 0x2823 */ u8 unk_2823;
};

extern "C" Unk_ov136_SceneEntry data_ov136_02296390;

static inline BOOL Unk_ov136_02295c0c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov136_02295d1c_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov136_022963b0 *func_ov136_02296274() { return new Unk_ov136_022963b0(); }

BOOL Unk_ov136_022963b0::vfunc_00() {
    func_ov136_02295eac();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov136_022963b0::vfunc_0c() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(ProcBase_GetParent());
    func_ov136_02295e8c();
    return TRUE;
}

BOOL Unk_ov136_022963b0::onDraw() {
    if (MenuCtrl_IsButtons()) {
        ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202844();
    }
    if (!func_ov136_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    func_ov134_02293c48(&unk_25c, 0, r);
    unk_f8.func_ov002_022036a4(func_ov002_02200920());
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov136_SceneEntry data_ov136_02296390;
extern "C" const s32 data_ov136_022962c8[3];
extern "C" const s32 data_ov136_022962d4[3];
extern "C" const u8 data_ov136_022962bc[3];
extern "C" const u8 data_ov136_022962b8[3];
extern "C" const u8 data_ov136_022962c4[3];
extern "C" const u8 data_ov136_022962c0[3];

extern "C" Unk_ov136_SceneEntry data_ov136_02296390 = {func_ov136_02296274, 0xaf, 0xb3};

BOOL Unk_ov136_022963b0::vfunc_4c() {
    static Unk_ov136_022963b0_Fn tbl[4] = {
        &Unk_ov136_022963b0::func_ov136_02295f94, &Unk_ov136_022963b0::func_ov136_02295f6c,
        &Unk_ov136_022963b0::func_ov136_02295f34, &Unk_ov136_022963b0::func_ov136_02295f04};
    func_ov136_02295e50();
    (this->*tbl[unk_8c])();
    func_ov136_02295e40();
    return TRUE;
}

void Unk_ov136_022963b0::func_ov136_02296024() {
    static Unk_ov136_022963b0_Fn tbl[16] = {
        &Unk_ov136_022963b0::func_ov136_02295d1c, &Unk_ov136_022963b0::func_ov136_02295cc8,
        &Unk_ov136_022963b0::func_ov136_02295ca4, &Unk_ov136_022963b0::func_ov136_02295c0c,
        &Unk_ov136_022963b0::func_ov136_02295bd0, &Unk_ov136_022963b0::func_ov136_02295b94,
        &Unk_ov136_022963b0::func_ov136_02295b30, &Unk_ov136_022963b0::func_ov136_02295a98,
        &Unk_ov136_022963b0::func_ov136_02295a40, &Unk_ov136_022963b0::func_ov136_022959f8,
        &Unk_ov136_022963b0::func_ov136_022959d0, &Unk_ov136_022963b0::func_ov136_02295954,
        &Unk_ov136_022963b0::func_ov136_0229592c, &Unk_ov136_022963b0::func_ov136_022958c8,
        &Unk_ov136_022963b0::func_ov136_022958a8, &Unk_ov136_022963b0::func_ov136_02295868};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov136_022963b0::vfunc_50() {
    func_ov136_02295e74();
    func_ov136_02296024();
    func_ov136_02295e6c();
    return TRUE;
}

BOOL Unk_ov136_022963b0::vfunc_54() { return TRUE; }

BOOL Unk_ov136_022963b0::vfunc_58() { return TRUE; }

BOOL Unk_ov136_022963b0::vfunc_5c() {
    ProcBase_RequestDelete();
    return TRUE;
}

void Unk_ov136_022963b0::func_ov136_02295f94() {
    func_ov136_02295df4();
    func_ov136_02295dd4();
    func_ov136_02295db4();
    func_ov002_022008e0(0xa, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov136_02295ee4();
    func_ov136_02295404(1);
    unk_f8.func_ov002_02203510(0x21);
    func_ov002_02200a50(1);
}

void Unk_ov136_022963b0::func_ov136_02295f6c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov136_02295814();
    }
    func_ov136_02295ee4();
}

void Unk_ov136_022963b0::func_ov136_02295f34() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(ProcBase_GetParent(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov136_02295ee4();
    func_ov002_02200a50(3);
}

void Unk_ov136_022963b0::func_ov136_02295f04() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov136_02295ee4();
    }
}

void Unk_ov136_022963b0::func_ov136_02295ee4() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov136_022963b0::func_ov136_02295eac() {
    func_ov134_02294a34(&unk_25c, 1, 6, 4, 3);
    unk_2823 = 0;
    unk_2820 = 0;
}

void Unk_ov136_022963b0::func_ov136_02295e8c() {
    func_ov134_022949ec(&unk_25c);
    unk_f8.func_ov002_02203900();
}

void Unk_ov136_022963b0::func_ov136_02295e74() {
    func_ov136_02295e50();
    unk_94.vfunc_0c();
}

void Unk_ov136_022963b0::func_ov136_02295e6c() { func_ov136_02295e40(); }

void Unk_ov136_022963b0::func_ov136_02295e50() {
    unk_f8.func_ov002_02203900();
    func_ov134_022949a8(&unk_25c);
}

void Unk_ov136_022963b0::func_ov136_02295e40() { func_ov134_022948e4(&unk_25c); }

void Unk_ov136_022963b0::func_ov136_02295df4() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov136_022963b0::func_ov136_02295dd4() {
    func_ov134_022947e8(&unk_25c);
    func_ov134_022947b8(&unk_25c, 0x8b);
}

void Unk_ov136_022963b0::func_ov136_02295db4() {
    func_ov134_022946fc(&unk_25c);
    func_ov002_02203920(&unk_f8);
}

void Unk_ov136_022963b0::func_ov136_02295d1c() {
    if (func_ov002_02200a14(1)) {
        func_ov136_02295834();
    } else if (Unk_ov136_02295d1c_Both()) {
        if (unk_f8.func_ov002_02203110(6)) {
            func_ov136_022957cc();
        } else {
            u8 a = gTouchCurX;
            u8 b = gTouchCurY;
            if (func_ov134_02293b90(&unk_25c, b ? a : a, b)) {
                func_ov002_02200a58(1);
            }
            s32 r = func_ov134_02293510(&unk_25c, a, b);
            if (r != 6) {
                func_ov136_022957a0(r);
            }
        }
    }
}

void Unk_ov136_022963b0::func_ov136_02295cc8() {
    if (gTouchHeld == 0) {
        if (func_ov134_02293a5c(&unk_25c)) {
            func_ov002_02200a58(2);
        } else {
            func_ov002_02200a58(0);
        }
    } else {
        func_ov134_02293b30(&unk_25c, gTouchCurX, gTouchCurY);
    }
}

void Unk_ov136_022963b0::func_ov136_02295ca4() {
    if (func_ov134_02293a3c(&unk_25c)) {
        func_ov002_02200a58(0);
    }
}

void Unk_ov136_022963b0::func_ov136_02295c0c() {
    if (func_ov002_02200a14(1)) {
        func_ov136_022956f4();
        return;
    }
    if (Unk_ov136_02295c0c_Both()) {
        s32 r = func_ov134_02292c54(&unk_25c, gTouchCurX, gTouchCurY);
        switch (r) {
        case 0:
            func_ov136_02295774();
            break;
        case 1:
            func_ov136_02295748();
            break;
        case 3:
            func_ov002_02200a58(4);
            break;
        case 2:
            func_ov002_02200a58(5);
            break;
        }
    }
}

void Unk_ov136_022963b0::func_ov136_02295bd0() {
    if (gTouchHeld) {
        unk_25c.func_ov134_022924d8(gTouchCurY);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(3);
    }
}

void Unk_ov136_022963b0::func_ov136_02295b94() {
    if (gTouchHeld) {
        unk_25c.func_ov134_022924b0(gTouchCurY);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(3);
    }
}

void Unk_ov136_022963b0::func_ov136_02295b30() {
    if (func_ov002_022009d4()) {
        func_ov136_02295850();
        return;
    }
    s32 x = func_ov002_022009c8();
    if (func_ov136_0229542c(x)) {
        func_ov136_02295584();
        return;
    }
    u32 v = gPad[1];
    if (v & 1) {
        func_ov136_022954f0();
    } else if (v & 8) {
        func_ov136_022955d4();
        func_ov136_022957cc();
    }
}

void Unk_ov136_022963b0::func_ov136_02295a98() {
    if (func_ov002_022009d4()) {
        func_ov136_02295730();
        return;
    }
    s32 r = unk_25c.func_ov134_0229219c(func_ov002_022009c8());
    switch (r) {
    case 2:
        func_ov136_02295404(4);
        goto rest;
    case 3: {
        s32 b = func_ov136_02295634();
        s32 c = func_ov136_022955f0();
        ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(b, c);
        return;
    }
    default:
    rest:
        func_ov136_02295584();
        return;
    case 0: {
        u32 v = gPad[1];
        if (v & 1) {
            func_ov136_022954f0();
        } else if (v & 2) {
            func_ov136_02295748();
        }
        return;
    }
    }
}

void Unk_ov136_022963b0::func_ov136_02295a40() {
    if (gPad[0] & 1) {
        unk_25c.func_ov134_02292450();
        s32 b = func_ov136_02295634();
        s32 c = func_ov136_022955f0();
        ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(b, c);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(9);
    }
}

void Unk_ov136_022963b0::func_ov136_022959f8() {
    if (unk_25c.func_ov134_02292420()) {
        func_ov002_02200a58(7);
        func_ov136_022954c8();
    }
    s32 b = func_ov136_02295634();
    s32 c = func_ov136_022955f0();
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(b, c);
}

void Unk_ov136_022963b0::func_ov136_022959d0() {
    if (!((Unk_ov002_02202d98 *)&unk_94)->func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2822);
        func_ov136_02296024();
    }
}

void Unk_ov136_022963b0::func_ov136_02295954() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        if (func_ov136_02295414(2)) {
            if (unk_25c.func_ov134_02292530()) {
                func_ov002_02200a58(8);
            } else if (unk_25c.func_ov134_02292170()) {
                func_ov136_02295774();
            } else {
                func_ov002_02200a58(7);
                func_ov136_022954c8();
            }
        } else {
            u32 v = unk_2823;
            if (v == 2) {
                func_ov136_022957cc();
            } else {
                func_ov136_022957a0(v + 3);
            }
        }
    }
}

void Unk_ov136_022963b0::func_ov136_0229592c() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        func_ov136_02295508();
        func_ov002_02200a58(unk_2822);
    }
}

void Unk_ov136_022963b0::func_ov136_022958c8() {
    if (unk_f8.func_ov002_0220308c()) {
        if (_ZN10HandCursor7getAnimEv(&unk_94)) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov136_022955d4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov136_022963b0::func_ov136_022958a8() {
    if (func_ov134_02292f40(&unk_25c)) {
        func_ov136_022956d4();
    }
}

void Unk_ov136_022963b0::func_ov136_02295868() {
    if (func_ov134_02292cb0(&unk_25c)) {
        s32 r = func_ov134_022932d8(&unk_25c);
        if (r == 6) {
            unk_2823 = 2;
        } else {
            unk_2823 = r - 3;
        }
        func_ov136_02295814();
    }
}

void Unk_ov136_022963b0::func_ov136_02295850() {
    func_ov136_022955d4();
    func_ov002_02200a58(0);
}

void Unk_ov136_022963b0::func_ov136_02295834() {
    func_ov136_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(6);
}

void Unk_ov136_022963b0::func_ov136_02295814() {
    if (MenuCtrl_IsTouch()) {
        func_ov136_02295850();
    } else {
        func_ov136_02295834();
    }
}

void Unk_ov136_022963b0::func_ov136_022957cc() {
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xd);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    func_ov134_022948d8(&unk_25c, v);
    func_0206e8cc(v);
    func_0206ecf8(1);
}

void Unk_ov136_022963b0::func_ov136_022957a0(u32 a) {
    func_ov136_022955d4();
    func_ov134_02293024(&unk_25c, a);
    func_ov002_02200a58(0xe);
}

void Unk_ov136_022963b0::func_ov136_02295774() {
    func_ov136_022955d4();
    func_ov136_022953f4(2);
    func_ov134_02292e40(&unk_25c);
    func_ov002_02200a58(0xf);
}

void Unk_ov136_022963b0::func_ov136_02295748() {
    func_ov136_022955d4();
    func_ov136_022953f4(2);
    func_ov134_02292df4(&unk_25c);
    func_ov002_02200a58(0xf);
}

void Unk_ov136_022963b0::func_ov136_02295730() {
    func_ov136_022955d4();
    func_ov002_02200a58(3);
}

void Unk_ov136_022963b0::func_ov136_022956f4() {
    s32 t = unk_25c.func_ov134_0229236c();
    unk_25c.func_ov134_02292340(t);
    func_ov136_02295404(2);
    func_ov136_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(7);
}

void Unk_ov136_022963b0::func_ov136_022956d4() {
    if (MenuCtrl_IsTouch()) {
        func_ov136_02295730();
    } else {
        func_ov136_022956f4();
    }
}

void Unk_ov136_022963b0::func_ov136_02295678() {
    s32 b = func_ov136_02295634();
    s32 c = func_ov136_022955f0();
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a40(b, c);
    if (func_ov136_02295414(2) != 0 || unk_2823 != 2) {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(1);
    } else {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(7);
    }
    func_ov136_02295508();
}

s32 Unk_ov136_022963b0::func_ov136_02295634() {
    if (func_ov136_02295414(2)) {
        return unk_25c.func_ov134_022923a0();
    }
    u32 c = unk_2823;
    if (c == 2) {
        return unk_f8.func_ov002_022030f4(6);
    }
    return data_ov136_022962c8[c];
}

s32 Unk_ov136_022963b0::func_ov136_022955f0() {
    if (func_ov136_02295414(2)) {
        return unk_25c.func_ov134_0229236c();
    }
    u32 c = unk_2823;
    if (c == 2) {
        return unk_f8.func_ov002_022030b8(6);
    }
    return data_ov136_022962d4[c];
}

void Unk_ov136_022963b0::func_ov136_022955d4() {
    ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

void Unk_ov136_022963b0::func_ov136_02295584() {
    if (func_ov136_02295414(2) != 0 || unk_2823 != 2) {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202c40();
    } else {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202ca0();
    }
    s32 b = func_ov136_02295634();
    s32 c = func_ov136_022955f0();
    func_ov136_02295524(b, c);
}

void Unk_ov136_022963b0::func_ov136_02295524(s32 a, s32 b) {
    if (func_ov136_02295414(4)) {
        ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_022029e8(a, b, 2, 1);
    } else {
        ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_022029e8(a, b, 3, 1);
    }
    unk_2822 = unk_8d;
    func_ov002_02200a58(0xa);
    func_ov136_022953f4(4);
}

void Unk_ov136_022963b0::func_ov136_02295508() {
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov136_022963b0::func_ov136_022954f0() {
    ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202b68();
    func_ov002_02200a58(0xb);
}

void Unk_ov136_022963b0::func_ov136_022954c8() {
    ((Unk_ov002_02202d98 *)&unk_94)->func_ov002_02202af0();
    unk_2822 = unk_8d;
    func_ov002_02200a58(0xc);
}

BOOL Unk_ov136_022963b0::func_ov136_0229542c(u32 pad) {
    u32 old = unk_2823;
    if (func_ov002_0220126c(pad)) {
        unk_2823 = data_ov136_022962bc[unk_2823];
    } else if (func_ov002_0220125c(pad)) {
        unk_2823 = data_ov136_022962b8[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    if (func_ov002_0220128c(pad)) {
        unk_2823 = data_ov136_022962c4[unk_2823];
    } else if (func_ov002_0220127c(pad)) {
        unk_2823 = data_ov136_022962c0[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov136_022963b0::func_ov136_02295414(u32 m) {
    if (unk_2820 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov136_022963b0::func_ov136_02295404(u32 m) { unk_2820 = unk_2820 | m; }

void Unk_ov136_022963b0::func_ov136_022953f4(u32 m) { unk_2820 = unk_2820 & ~m; }

extern "C" const s32 data_ov136_022962c8[3] = {0x6e, 0xae, 0};

extern "C" const s32 data_ov136_022962d4[3] = {0x88, 0x88, 0};

extern "C" const u8 data_ov136_022962bc[3] = {0, 0, 2};

extern "C" const u8 data_ov136_022962b8[3] = {1, 1, 2};

extern "C" const u8 data_ov136_022962c4[3] = {0, 1, 1};

extern "C" const u8 data_ov136_022962c0[3] = {2, 2, 2};
