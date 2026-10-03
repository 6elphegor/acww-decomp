#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern const u8 data_ov137_022961f8[4];
extern const u8 data_ov137_022961fc[4];
extern const u8 data_ov137_02296200[4];
extern const u8 data_ov137_02296204[4];
extern const s32 data_ov137_02296208[3];
extern const s32 data_ov137_02296214[3];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurY;
extern u8 gTouchCurX;

BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void *PlayerData_GetCurrent();
void _ZN12Unk_02097ff413func_020982f4Ejj(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void Gfx2d_SetSubBgModeState(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(void *self);
void _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(void *self, s32 a, s32 b);

BOOL _ZN10HandCursor10isAnimDoneEv(void *self);
BOOL _ZN10HandCursor7getAnimEv(void *self);
void func_ov002_02203920(void *self);

// ov134 library object (class Unk_ov134_02291f60): plain functions take the object first
BOOL func_ov134_02292c54(void *self, s32 x, s32 y);
s32 func_ov134_02292cb0(void *self);
void func_ov134_02292df4(void *self);
void func_ov134_02292e40(void *self);
s32 func_ov134_02292f40(void *self);
void func_ov134_02293024(void *self, s32 a);
u8 func_ov134_022932d8(void *self);
s32 func_ov134_02293564(void *self, u8 a, u8 b);
void func_ov134_02293c48(void *self, s32 a, s32 b);
void func_ov134_022946fc(void *self);
void func_ov134_022947b8(void *self, u32 a);
void func_ov134_022947e8(void *self);
void func_ov134_022948d8(void *self, void *out);
void func_ov134_022948e4(void *self);
void func_ov134_022949a8(void *self);
void func_ov134_022949ec(void *self);
void func_ov134_02294a34(void *self, u32 a, u32 b, u32 c, u8 d);
}

// Vtable 0x022044e4
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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
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
    void func_ov002_02200a68();

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
    void func_ov002_02202af0();
    void func_ov002_02202a78();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    BOOL func_ov002_022028f0();
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202ca0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 v);
};

// Sub-object at +0x94 (vtable 0x02204614, size 0x64)
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
    BOOL func_ov002_02203110(s32 v);
    BOOL func_ov002_0220308c();
    s32 func_ov002_0220306c();
    s32 func_ov002_022030f4(s32 v);
    s32 func_ov002_022030b8(s32 v);
};

// Sub-object at +0xf8 (vtable 0x022046cc, size 0x164)
class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_02203510(s32 v);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// ov134 sub-object at +0x25c (class Unk_ov134_02291f60)
class Unk_ov134_02291f60 {
public:
    Unk_ov134_02291f60();
    ~Unk_ov134_02291f60();
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    BOOL func_ov134_02292530();
    BOOL func_ov134_02292170();
    BOOL func_ov134_02292420();
    void func_ov134_02292450();
    void func_ov134_02292444();
    s32 func_ov134_0229219c(u32 pad);
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    u8 unk_00[0x25c4];
};

class Unk_ov137_022962e0;
typedef void (Unk_ov137_022962e0::*Unk_ov137_022962e0_Fn)();

// Vtable 0x022962e0, size 0x2824 (scene overlay on Unk_ov002_022044e4)
class Unk_ov137_022962e0 : public Unk_ov002_022044e4 {
public:
    Unk_ov137_022962e0() : unk_94(), unk_f8(), unk_25c() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov137_022953f4(u32 m);
    void func_ov137_02295404(u32 m);
    BOOL func_ov137_02295414(u32 m);
    BOOL func_ov137_0229542c(u32 a);
    void func_ov137_022954c8();
    void func_ov137_022954f0();
    void func_ov137_02295508();
    void func_ov137_02295524(s32 a, s32 b);
    void func_ov137_02295584();
    void func_ov137_022955d4();
    s32 func_ov137_022955f0();
    s32 func_ov137_02295634();
    void func_ov137_02295678();
    void func_ov137_022956d4();
    void func_ov137_022956f4();
    void func_ov137_02295730();
    void func_ov137_02295748();
    void func_ov137_02295774();
    void func_ov137_022957a0(u32 a);
    void func_ov137_022957cc();
    void func_ov137_02295818();
    void func_ov137_02295838();
    void func_ov137_02295854();
    void func_ov137_0229586c();
    void func_ov137_022958ac();
    void func_ov137_022958cc();
    void func_ov137_02295930();
    void func_ov137_02295958();
    void func_ov137_022959c0();
    void func_ov137_022959e8();
    void func_ov137_02295a30();
    void func_ov137_02295a88();
    void func_ov137_02295b20();
    void func_ov137_02295b84();
    void func_ov137_02295bc0();
    void func_ov137_02295bfc();
    void func_ov137_02295c94();
    void func_ov137_02295d10();
    void func_ov137_02295d30();
    void func_ov137_02295d50();
    void func_ov137_02295d9c();
    void func_ov137_02295dac();
    void func_ov137_02295dc8();
    void func_ov137_02295dd0();
    void func_ov137_02295de8();
    void func_ov137_02295e08();
    void func_ov137_02295e40();
    void func_ov137_02295e60();
    void func_ov137_02295e90();
    void func_ov137_02295ec8();
    void func_ov137_02295ef0();
    void func_ov137_02295f80();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov002_02204614 unk_94;
    /* 0x0f8 */ Unk_ov002_022046cc unk_f8;
    /* 0x25c */ Unk_ov134_02291f60 unk_25c;
    /* 0x2820 */ u16 unk_2820;
    /* 0x2822 */ u8 unk_2822;
    /* 0x2823 */ u8 unk_2823;
};

#define U94A ((Unk_ov002_02202d98 *)&unk_94)
#define U94B ((Unk_ov002_0220464c *)&unk_94)

static inline BOOL Unk_ov137_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov137_022962e0 *func_ov137_022961b4() { return new Unk_ov137_022962e0(); }

BOOL Unk_ov137_022962e0::vfunc_00() {
    func_ov137_02295e08();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov137_022962e0::vfunc_0c() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(ProcBase_GetParent());
    func_ov137_02295de8();
    return TRUE;
}

BOOL Unk_ov137_022962e0::onDraw() {
    if (MenuCtrl_IsButtons()) {
        U94A->func_ov002_02202844();
    }
    if (!func_ov137_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    func_ov134_02293c48(&unk_25c, 0, r);
    s32 r2 = func_ov002_02200920();
    unk_f8.func_ov002_022036a4(r2);
    return TRUE;
}

struct Unk_ov137_SceneEntry {
    Unk_ov137_022962e0 *(*create)();
    u16 a;
    u16 b;
};

// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 data_ov137_022961fc[4];
extern "C" const s32 data_ov137_02296208[3];
extern "C" const s32 data_ov137_02296214[3];
extern "C" const u8 data_ov137_02296204[4];
extern "C" const u8 data_ov137_02296200[4];
extern "C" Unk_ov137_SceneEntry data_ov137_022962c8;
extern "C" const u8 data_ov137_022961f8[4];// Declarations for data defined further down (definition order sets the data layout)
extern "C" const s32 data_ov137_02296208[3];
extern "C" const u8 data_ov137_022961f8[4];
extern "C" const u8 data_ov137_022961fc[4];
extern "C" const u8 data_ov137_02296204[4];
extern "C" const u8 data_ov137_02296200[4];
extern "C" const s32 data_ov137_02296214[3];
extern "C" Unk_ov137_SceneEntry data_ov137_022962c8;

extern "C" const s32 data_ov137_02296208[3] = {0x60, 0xac, 0};

BOOL Unk_ov137_022962e0::vfunc_4c() {
    static Unk_ov137_022962e0_Fn tbl[4] = {
        &Unk_ov137_022962e0::func_ov137_02295ef0,
        &Unk_ov137_022962e0::func_ov137_02295ec8,
        &Unk_ov137_022962e0::func_ov137_02295e90,
        &Unk_ov137_022962e0::func_ov137_02295e60};
    func_ov137_02295dac();
    (this->*tbl[unk_8c])();
    func_ov137_02295d9c();
    return TRUE;
}

void Unk_ov137_022962e0::func_ov137_02295f80() {
    static Unk_ov137_022962e0_Fn tbl[14] = {
        &Unk_ov137_022962e0::func_ov137_02295c94,
        &Unk_ov137_022962e0::func_ov137_02295bfc,
        &Unk_ov137_022962e0::func_ov137_02295bc0,
        &Unk_ov137_022962e0::func_ov137_02295b84,
        &Unk_ov137_022962e0::func_ov137_02295b20,
        &Unk_ov137_022962e0::func_ov137_02295a88,
        &Unk_ov137_022962e0::func_ov137_02295a30,
        &Unk_ov137_022962e0::func_ov137_022959e8,
        &Unk_ov137_022962e0::func_ov137_022959c0,
        &Unk_ov137_022962e0::func_ov137_02295958,
        &Unk_ov137_022962e0::func_ov137_02295930,
        &Unk_ov137_022962e0::func_ov137_022958cc,
        &Unk_ov137_022962e0::func_ov137_022958ac,
        &Unk_ov137_022962e0::func_ov137_0229586c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov137_022962e0::vfunc_50() {
    func_ov137_02295dd0();
    func_ov137_02295f80();
    func_ov137_02295dc8();
    return TRUE;
}

BOOL Unk_ov137_022962e0::vfunc_54() { return TRUE; }

BOOL Unk_ov137_022962e0::vfunc_58() { return TRUE; }

BOOL Unk_ov137_022962e0::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov137_022962e0::func_ov137_02295ef0() {
    func_ov137_02295d50();
    func_ov137_02295d30();
    func_ov137_02295d10();
    func_ov002_022008e0(10, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    func_ov137_02295e40();
    func_ov137_02295404(1);
    unk_f8.func_ov002_02203510(0x21);
    func_ov002_02200a50(1);
}

void Unk_ov137_022962e0::func_ov137_02295ec8() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov137_02295818();
    }
    func_ov137_02295e40();
}

void Unk_ov137_022962e0::func_ov137_02295e90() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(ProcBase_GetParent(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov137_02295e40();
    func_ov002_02200a50(3);
}

void Unk_ov137_022962e0::func_ov137_02295e60() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        func_ov002_02200a60(5);
    } else {
        func_ov137_02295e40();
    }
}

void Unk_ov137_022962e0::func_ov137_02295e40() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov137_022962e0::func_ov137_02295e08() {
    func_ov134_02294a34(&unk_25c, 2, 6, 4, 3);
    unk_2823 = 0;
    unk_2820 = 0;
}

void Unk_ov137_022962e0::func_ov137_02295de8() {
    func_ov134_022949ec(&unk_25c);
    unk_f8.func_ov002_02203900();
}

void Unk_ov137_022962e0::func_ov137_02295dd0() {
    func_ov137_02295dac();
    unk_94.vfunc_0c();
}

void Unk_ov137_022962e0::func_ov137_02295dc8() {
    func_ov137_02295d9c();
}

void Unk_ov137_022962e0::func_ov137_02295dac() {
    unk_f8.func_ov002_02203900();
    func_ov134_022949a8(&unk_25c);
}

void Unk_ov137_022962e0::func_ov137_02295d9c() {
    func_ov134_022948e4(&unk_25c);
}

void Unk_ov137_022962e0::func_ov137_02295d50() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 1);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void Unk_ov137_022962e0::func_ov137_02295d30() {
    func_ov134_022947e8(&unk_25c);
    func_ov134_022947b8(&unk_25c, 0x6d);
}

void Unk_ov137_022962e0::func_ov137_02295d10() {
    func_ov134_022946fc(&unk_25c);
    func_ov002_02203920(&unk_f8);
}

void Unk_ov137_022962e0::func_ov137_02295c94() {
    if (func_ov002_02200a14(1)) {
        func_ov137_02295838();
    } else {
        if (Unk_ov137_Both()) {
            if (unk_f8.func_ov002_02203110(6)) {
                func_ov137_022957cc();
            } else {
                s32 r = func_ov134_02293564(&unk_25c, gTouchCurX, gTouchCurY);
                if (r != 6) {
                    func_ov137_022957a0(r);
                }
            }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295bfc() {
    if (func_ov002_02200a14(1)) {
        func_ov137_022956f4();
        return;
    }
    if (Unk_ov137_Both()) {
        switch (func_ov134_02292c54(&unk_25c, gTouchCurX, gTouchCurY)) {
        case 0:
            func_ov137_02295774();
            break;
        case 1:
            func_ov137_02295748();
            break;
        case 3:
            func_ov002_02200a58(2);
            break;
        case 2:
            func_ov002_02200a58(3);
            break;
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295bc0() {
    if (gTouchHeld != 0) {
        unk_25c.func_ov134_022924d8(gTouchCurY);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov137_022962e0::func_ov137_02295b84() {
    if (gTouchHeld != 0) {
        unk_25c.func_ov134_022924b0(gTouchCurY);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov137_022962e0::func_ov137_02295b20() {
    if (func_ov002_022009d4()) {
        func_ov137_02295854();
    } else {
        s32 r = func_ov002_022009c8();
        if (func_ov137_0229542c(r)) {
            func_ov137_02295584();
        } else {
            u32 t = gPad[1];
            if (t & 1) {
                func_ov137_022954f0();
            } else if (t & 8) {
                func_ov137_022955d4();
                func_ov137_022957cc();
            }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295a88() {
    if (func_ov002_022009d4()) {
        func_ov137_02295730();
    } else {
        s32 r = unk_25c.func_ov134_0229219c(func_ov002_022009c8());
        switch (r) {
        case 2:
            func_ov137_02295404(4);
            goto dflt;
        case 3: {
            s32 a = func_ov137_02295634();
            s32 b = func_ov137_022955f0();
            U94A->func_ov002_02202a40(a, b);
            break;
        }
        default:
        dflt:
            func_ov137_02295584();
            break;
        case 0: {
            u32 t = gPad[1];
            if (t & 1) {
                func_ov137_022954f0();
            } else if (t & 2) {
                func_ov137_02295748();
            }
            break;
        }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295a30() {
    if (gPad[0] & 1) {
        unk_25c.func_ov134_02292450();
        s32 a = func_ov137_02295634();
        s32 b = func_ov137_022955f0();
        U94A->func_ov002_02202a40(a, b);
    } else {
        unk_25c.func_ov134_02292444();
        func_ov002_02200a58(7);
    }
}

void Unk_ov137_022962e0::func_ov137_022959e8() {
    if (unk_25c.func_ov134_02292420()) {
        func_ov002_02200a58(5);
        func_ov137_022954c8();
    }
    s32 a = func_ov137_02295634();
    s32 b = func_ov137_022955f0();
    U94A->func_ov002_02202a40(a, b);
}

void Unk_ov137_022962e0::func_ov137_022959c0() {
    if (!U94A->func_ov002_022028f0()) {
        func_ov002_02200a58(unk_2822);
        func_ov137_02295f80();
    }
}

void Unk_ov137_022962e0::func_ov137_02295958() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        if (func_ov137_02295414(2)) {
            if (unk_25c.func_ov134_02292530()) {
                func_ov002_02200a58(6);
            } else {
                unk_25c.func_ov134_02292170();
                func_ov137_02295774();
            }
        } else {
            u32 s = unk_2823;
            if (s == 2) {
                func_ov137_022957cc();
            } else {
                func_ov137_022957a0(s + 1);
            }
        }
    }
}

void Unk_ov137_022962e0::func_ov137_02295930() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_94)) {
        func_ov137_02295508();
        func_ov002_02200a58(unk_2822);
    }
}

void Unk_ov137_022962e0::func_ov137_022958cc() {
    if (unk_f8.func_ov002_0220308c()) {
        if (_ZN10HandCursor7getAnimEv(&unk_94)) {
            s32 a = unk_f8.func_ov002_0220306c();
            s32 b = unk_f8.func_ov002_022030f4(-1);
            s32 c = unk_f8.func_ov002_022030b8(-1);
            U94A->func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov137_022955d4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov137_022962e0::func_ov137_022958ac() {
    if (func_ov134_02292f40(&unk_25c)) {
        func_ov137_022956d4();
    }
}

void Unk_ov137_022962e0::func_ov137_0229586c() {
    if (func_ov134_02292cb0(&unk_25c)) {
        s32 r = func_ov134_022932d8(&unk_25c);
        if (r == 6) {
            unk_2823 = 2;
        } else {
            unk_2823 = r - 1;
        }
        func_ov137_02295818();
    }
}

void Unk_ov137_022962e0::func_ov137_02295854() {
    func_ov137_022955d4();
    func_ov002_02200a58(0);
}

void Unk_ov137_022962e0::func_ov137_02295838() {
    func_ov137_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(4);
}

void Unk_ov137_022962e0::func_ov137_02295818() {
    if (MenuCtrl_IsTouch()) {
        func_ov137_02295854();
    } else {
        func_ov137_02295838();
    }
}

void Unk_ov137_022962e0::func_ov137_022957cc() {
    u32 w[2];
    unk_f8.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xb);
    void *obj = PlayerData_GetCurrent();
    w[0] = 0;
    w[1] = 0;
    func_ov134_022948d8(&unk_25c, w);
    _ZN12Unk_02097ff413func_020982f4Ejj(obj, ((u8 *)w)[4], ((u8 *)w)[3]);
}

void Unk_ov137_022962e0::func_ov137_022957a0(u32 a) {
    func_ov137_022955d4();
    func_ov134_02293024(&unk_25c, a);
    func_ov002_02200a58(0xc);
}

void Unk_ov137_022962e0::func_ov137_02295774() {
    func_ov137_022955d4();
    func_ov137_022953f4(2);
    func_ov134_02292e40(&unk_25c);
    func_ov002_02200a58(0xd);
}

void Unk_ov137_022962e0::func_ov137_02295748() {
    func_ov137_022955d4();
    func_ov137_022953f4(2);
    func_ov134_02292df4(&unk_25c);
    func_ov002_02200a58(0xd);
}

void Unk_ov137_022962e0::func_ov137_02295730() {
    func_ov137_022955d4();
    func_ov002_02200a58(1);
}

void Unk_ov137_022962e0::func_ov137_022956f4() {
    s32 t = unk_25c.func_ov134_0229236c();
    unk_25c.func_ov134_02292340(t);
    func_ov137_02295404(2);
    func_ov137_02295678();
    func_ov002_02200980();
    func_ov002_02200a58(5);
}

void Unk_ov137_022962e0::func_ov137_022956d4() {
    if (MenuCtrl_IsTouch()) {
        func_ov137_02295730();
    } else {
        func_ov137_022956f4();
    }
}

void Unk_ov137_022962e0::func_ov137_02295678() {
    s32 a = func_ov137_02295634();
    s32 b = func_ov137_022955f0();
    U94A->func_ov002_02202a40(a, b);
    if (func_ov137_02295414(2) || unk_2823 != 2) {
        U94B->func_ov002_02202d00(1);
    } else {
        U94B->func_ov002_02202d00(7);
    }
    func_ov137_02295508();
}

s32 Unk_ov137_022962e0::func_ov137_02295634() {
    if (func_ov137_02295414(2)) {
        return unk_25c.func_ov134_022923a0();
    }
    if (unk_2823 == 2) {
        return unk_f8.func_ov002_022030f4(6);
    }
    return data_ov137_02296208[unk_2823];
}

s32 Unk_ov137_022962e0::func_ov137_022955f0() {
    if (func_ov137_02295414(2)) {
        return unk_25c.func_ov134_0229236c();
    }
    if (unk_2823 == 2) {
        return unk_f8.func_ov002_022030b8(6);
    }
    return data_ov137_02296214[unk_2823];
}

void Unk_ov137_022962e0::func_ov137_022955d4() {
    U94B->func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

void Unk_ov137_022962e0::func_ov137_02295584() {
    if (func_ov137_02295414(2) || unk_2823 != 2) {
        U94B->func_ov002_02202c40();
    } else {
        U94B->func_ov002_02202ca0();
    }
    s32 a = func_ov137_02295634();
    s32 b = func_ov137_022955f0();
    func_ov137_02295524(a, b);
}

void Unk_ov137_022962e0::func_ov137_02295524(s32 a, s32 b) {
    if (func_ov137_02295414(4)) {
        U94A->func_ov002_022029e8(a, b, 2, 1);
    } else {
        U94A->func_ov002_022029e8(a, b, 3, 1);
    }
    unk_2822 = unk_8d;
    func_ov002_02200a58(8);
    func_ov137_022953f4(4);
}

void Unk_ov137_022962e0::func_ov137_02295508() {
    U94A->func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov137_022962e0::func_ov137_022954f0() {
    U94B->func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov137_022962e0::func_ov137_022954c8() {
    U94A->func_ov002_02202af0();
    unk_2822 = unk_8d;
    func_ov002_02200a58(10);
}

BOOL Unk_ov137_022962e0::func_ov137_0229542c(u32 a) {
    u8 old = unk_2823;
    if (func_ov002_0220126c(a)) {
        unk_2823 = data_ov137_022961fc[unk_2823];
    } else if (func_ov002_0220125c(a)) {
        unk_2823 = data_ov137_022961f8[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    if (func_ov002_0220128c(a)) {
        unk_2823 = data_ov137_02296204[unk_2823];
    } else if (func_ov002_0220127c(a)) {
        unk_2823 = data_ov137_02296200[unk_2823];
    }
    if (old != unk_2823) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov137_022962e0::func_ov137_02295414(u32 m) {
    if (unk_2820 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov137_022962e0::func_ov137_02295404(u32 m) { unk_2820 = unk_2820 | m; }

void Unk_ov137_022962e0::func_ov137_022953f4(u32 m) { unk_2820 = unk_2820 & ~m; }

extern "C" const u8 data_ov137_022961f8[4] = {1, 1, 2, 0};

extern "C" const u8 data_ov137_022961fc[4] = {0, 0, 2, 0};

extern "C" const u8 data_ov137_02296204[4] = {0, 1, 1, 0};

extern "C" const u8 data_ov137_02296200[4] = {2, 2, 2, 0};

extern "C" const s32 data_ov137_02296214[3] = {0x78, 0x78, 0};

extern "C" Unk_ov137_SceneEntry data_ov137_022962c8 = {func_ov137_022961b4, 0xb0, 0xb4};
