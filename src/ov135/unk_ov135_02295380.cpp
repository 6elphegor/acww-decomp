#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern const u8 data_ov135_0229639c[7];
extern const u8 data_ov135_022963a4[7];
extern const u8 data_ov135_022963ac[7];
extern const u8 data_ov135_022963b4[7];
extern const s32 data_ov135_022963bc[7];
extern const s32 data_ov135_022963d8[7];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gSaveData[];

BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void func_0206e814();
void func_0206ecf8(u32 v);
s32 func_0206ed50();
void func_0206e8cc(void *p);
void func_0206e82c();
void func_0206e820();
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 func_0209cb9c(void *p, void *q);
u16 func_0209cb74(void *p, void *q);
void func_0209cfe4();
void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02203920(void *self);
void _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(void *self);
void _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(void *self, s32 a, s32 b);

// ov134 library object (Unk_ov134_02291f60) plain functions; first argument is the object
u32 func_ov134_02292c54(void *self, u8 a, u8 b);
BOOL func_ov134_02292cb0(void *self);
void func_ov134_02292df4(void *self);
void func_ov134_02292e40(void *self);
BOOL func_ov134_02292f40(void *self);
void func_ov134_02293024(void *self, u32 a);
s32 func_ov134_022932d8(void *self);
s32 func_ov134_0229360c(void *self, u8 a, u8 b);
BOOL func_ov134_02293a3c(void *self);
BOOL func_ov134_02293a5c(void *self);
void func_ov134_02293b30(void *self, u8 a, u8 b);
BOOL func_ov134_02293b90(void *self, u8 a, u8 b);
void func_ov134_02293c48(void *self, s32 a, s32 b);
void func_ov134_022946fc(void *self);
void func_ov134_022947b8(void *self, s32 a);
void func_ov134_022947e8(void *self);
BOOL func_ov134_022948b8(void *self);
void func_ov134_022948d8(void *self, void *out);
void func_ov134_022948e4(void *self);
void func_ov134_022949a8(void *self);
void func_ov134_022949ec(void *self);
void func_ov134_02294a28(void *self);
void func_ov134_02294a34(void *self, s32 a, s32 b, s32 c, s32 d);
}

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

// Menu cursor sub-object hierarchy (src/ov002/unk_02202200.cpp, unk_02202b68.cpp)
class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
    BOOL getAnim();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002/unk_02202b68.cpp
class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_02202fac {
public:
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 a);
};

// Menu list sub-object, 0x164 bytes
class Unk_ov002_022046cc : public Unk_ov002_02202fac {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_022034c4(u8 a);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// ov134 library object at +0x260, 0x25c4 bytes
class Unk_ov134_02291f60 {
public:
    BOOL func_ov134_02292170();
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    BOOL func_ov134_02292420();
    void func_ov134_02292444();
    void func_ov134_02292450();
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    BOOL func_ov134_02292530();
    s32 func_ov134_0229219c(u32 pad);
    Unk_ov134_02291f60();
    ~Unk_ov134_02291f60();
    u8 unk_00[0x25c4];
};

class Unk_ov135_022964b0;
typedef void (Unk_ov135_022964b0::*Unk_ov135_022964b0_Fn)();

static inline BOOL Unk_ov135_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x022964b0, size 0x2824 (scene overlay on Unk_ov002_022044e4)
class Unk_ov135_022964b0 : public Unk_ov002_022044e4 {
public:
    Unk_ov135_022964b0() : unk_98(), unk_fc(), unk_260() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov135_022953f4(u32 m);
    void func_ov135_02295404(u32 m);
    BOOL func_ov135_02295414(u32 m);
    BOOL func_ov135_02295428(u32 pad);
    void func_ov135_022954d0();
    void func_ov135_022954f4();
    void func_ov135_0229550c();
    void func_ov135_02295528(s32 a, s32 b);
    void func_ov135_02295588();
    void func_ov135_022955d8();
    s32 func_ov135_022955f4();
    s32 func_ov135_02295648();
    void func_ov135_0229569c();
    void func_ov135_022956f8();
    void func_ov135_02295718();
    void func_ov135_02295754();
    void func_ov135_0229576c();
    void func_ov135_02295798();
    void func_ov135_022957c4(u32 a);
    void func_ov135_022957f4();
    void func_ov135_0229581c();
    void func_ov135_022958bc();
    void func_ov135_022958dc();
    void func_ov135_022958f8();
    void func_ov135_02295910();
    void func_ov135_0229594c();
    void func_ov135_0229596c();
    void func_ov135_022959d0();
    void func_ov135_022959f4();
    void func_ov135_02295a78();
    void func_ov135_02295aa0();
    void func_ov135_02295ae8();
    void func_ov135_02295b40();
    void func_ov135_02295bd8();
    void func_ov135_02295c54();
    void func_ov135_02295c90();
    void func_ov135_02296108();
    void func_ov135_02295ccc();
    void func_ov135_02295d64();
    void func_ov135_02295d88();
    void func_ov135_02295ddc();
    void func_ov135_02295e90();
    void func_ov135_02295eb0();
    void func_ov135_02295ed0();
    void func_ov135_02295f1c();
    void func_ov135_02295f2c();
    void func_ov135_02295f48();
    void func_ov135_02295f50();
    void func_ov135_02295f68();
    void func_ov135_02295f88();
    void func_ov135_02295fc8();
    void func_ov135_02295fe8();
    void func_ov135_02296018();
    void func_ov135_02296050();
    void func_ov135_02296078();

    /* 0x091 */ u8 unk_91;
    /* 0x092 */ u16 unk_92;
    /* 0x094 */ u8 unk_94;
    /* 0x095 */ u8 unk_95;
    /* 0x096 */ u8 unk_96[2];
    /* 0x098 */ Unk_ov002_02204614 unk_98;
    /* 0x0fc */ Unk_ov002_022046cc unk_fc;
    /* 0x260 */ Unk_ov134_02291f60 unk_260;
};

extern "C" Unk_ov135_022964b0 *func_ov135_02296358() { return new Unk_ov135_022964b0(); }

struct Unk_ov135_SceneEntry {
    Unk_ov135_022964b0 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov135_SceneEntry data_ov135_02296490 = {func_ov135_02296358, 0xae, 0xb2};

BOOL Unk_ov135_022964b0::vfunc_00() {
    func_ov135_02295f88();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_0c() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(ProcBase_GetParent());
    func_ov135_02295f68();
    return TRUE;
}

BOOL Unk_ov135_022964b0::onDraw() {
    if (MenuCtrl_IsButtons()) {
        unk_98.func_ov002_02202844();
    }
    if (!func_ov135_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    func_ov134_02293c48(&unk_260, 0, r);
    s32 r2 = func_ov002_02200920();
    unk_fc.func_ov002_022036a4(r2);
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_4c() {
    static Unk_ov135_022964b0_Fn tbl[4] = {
        &Unk_ov135_022964b0::func_ov135_02296078,
        &Unk_ov135_022964b0::func_ov135_02296050,
        &Unk_ov135_022964b0::func_ov135_02296018,
        &Unk_ov135_022964b0::func_ov135_02295fe8};
    func_ov135_02295f2c();
    (this->*tbl[unk_8c])();
    func_ov135_02295f1c();
    return TRUE;
}

void Unk_ov135_022964b0::func_ov135_02296108() {
    static Unk_ov135_022964b0_Fn tbl[16] = {
        &Unk_ov135_022964b0::func_ov135_02295ddc,
        &Unk_ov135_022964b0::func_ov135_02295d88,
        &Unk_ov135_022964b0::func_ov135_02295d64,
        &Unk_ov135_022964b0::func_ov135_02295ccc,
        &Unk_ov135_022964b0::func_ov135_02295c90,
        &Unk_ov135_022964b0::func_ov135_02295c54,
        &Unk_ov135_022964b0::func_ov135_02295bd8,
        &Unk_ov135_022964b0::func_ov135_02295b40,
        &Unk_ov135_022964b0::func_ov135_02295ae8,
        &Unk_ov135_022964b0::func_ov135_02295aa0,
        &Unk_ov135_022964b0::func_ov135_02295a78,
        &Unk_ov135_022964b0::func_ov135_022959f4,
        &Unk_ov135_022964b0::func_ov135_022959d0,
        &Unk_ov135_022964b0::func_ov135_0229596c,
        &Unk_ov135_022964b0::func_ov135_0229594c,
        &Unk_ov135_022964b0::func_ov135_02295910};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov135_022964b0::vfunc_50() {
    func_ov135_02295f50();
    func_ov135_02296108();
    func_ov135_02295f48();
    return TRUE;
}

BOOL Unk_ov135_022964b0::vfunc_54() { return TRUE; }

BOOL Unk_ov135_022964b0::vfunc_58() { return TRUE; }

BOOL Unk_ov135_022964b0::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov135_022964b0::func_ov135_02296078() {
    func_ov135_02295ed0();
    func_ov135_02295eb0();
    func_ov135_02295e90();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov135_02295fc8();
    func_ov135_02295404(1);
    unk_fc.func_ov002_022034c4(0x65);
    func_ov002_02200a50(1);
}

void Unk_ov135_022964b0::func_ov135_02296050() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov135_022958bc();
    }
    func_ov135_02295fc8();
}

void Unk_ov135_022964b0::func_ov135_02296018() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(ProcBase_GetParent(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov135_02295fc8();
    func_ov002_02200a50(3);
}

void Unk_ov135_022964b0::func_ov135_02295fe8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov135_02295fc8();
    }
}

void Unk_ov135_022964b0::func_ov135_02295fc8() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov135_022964b0::func_ov135_02295f88() {
    func_ov134_02294a34(&unk_260, 0, 6, 4, 3);
    if (func_0206ed50() == 0x33) {
        func_ov134_02294a28(&unk_260);
    }
    unk_95 = 0;
    unk_92 = 0;
}

void Unk_ov135_022964b0::func_ov135_02295f68() {
    func_ov134_022949ec(&unk_260);
    unk_fc.func_ov002_02203900();
}

void Unk_ov135_022964b0::func_ov135_02295f50() {
    func_ov135_02295f2c();
    unk_98.vfunc_0c();
}

void Unk_ov135_022964b0::func_ov135_02295f48() {
    func_ov135_02295f1c();
}

void Unk_ov135_022964b0::func_ov135_02295f2c() {
    unk_fc.func_ov002_02203900();
    func_ov134_022949a8(&unk_260);
}

void Unk_ov135_022964b0::func_ov135_02295f1c() {
    func_ov134_022948e4(&unk_260);
}

void Unk_ov135_022964b0::func_ov135_02295ed0() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov135_022964b0::func_ov135_02295eb0() {
    func_ov134_022947e8(&unk_260);
    func_ov134_022947b8(&unk_260, 0x6b);
}

void Unk_ov135_022964b0::func_ov135_02295e90() {
    func_ov134_022946fc(&unk_260);
    func_ov002_02203920(&unk_fc);
}

void Unk_ov135_022964b0::func_ov135_02295ddc() {
    if (func_ov002_02200a14(1)) {
        func_ov135_022958dc();
    } else {
        if (Unk_ov135_Both()) {
            if (unk_fc.func_ov002_02203110(6)) {
                func_ov135_0229581c();
            } else if (unk_fc.func_ov002_02203110(7)) {
                func_ov135_022957f4();
            } else {
                u8 a = gTouchCurX;
                u8 b = gTouchCurY;
                if (func_ov134_02293b90(&unk_260, b ? a : a, b)) {
                    func_0206e814();
                    func_ov002_02200a58(1);
                }
                s32 r = func_ov134_0229360c(&unk_260, a, b);
                if (r != 6) {
                    func_ov135_022957c4(r);
                }
            }
        }
    }
}

void Unk_ov135_022964b0::func_ov135_02295d88() {
    if (gTouchHeld == 0) {
        if (func_ov134_02293a5c(&unk_260)) {
            func_ov002_02200a58(2);
        } else {
            func_ov002_02200a58(0);
        }
    } else {
        func_ov134_02293b30(&unk_260, gTouchCurX, gTouchCurY);
    }
}

void Unk_ov135_022964b0::func_ov135_02295d64() {
    if (func_ov134_02293a3c(&unk_260)) {
        func_ov002_02200a58(0);
    }
}

void Unk_ov135_022964b0::func_ov135_02295ccc() {
    if (func_ov002_02200a14(1)) {
        func_ov135_02295718();
    } else {
        if (Unk_ov135_Both()) {
            switch (func_ov134_02292c54(&unk_260, gTouchCurX, gTouchCurY)) {
            case 0:
                func_ov135_02295798();
                break;
            case 1:
                func_ov135_0229576c();
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
}

void Unk_ov135_022964b0::func_ov135_02295c90() {
    if (gTouchHeld) {
        unk_260.func_ov134_022924d8(gTouchCurY);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(3);
    }
}

void Unk_ov135_022964b0::func_ov135_02295c54() {
    if (gTouchHeld) {
        unk_260.func_ov134_022924b0(gTouchCurY);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(3);
    }
}

void Unk_ov135_022964b0::func_ov135_02295bd8() {
    if (func_ov002_022009d4()) {
        func_ov135_022958f8();
        return;
    }
    s32 x = func_ov002_022009c8();
    if (func_ov135_02295428(x)) {
        func_ov135_02295588();
        return;
    }
    u32 v = gPad[1];
    if (v & 1) {
        func_ov135_022954f4();
    } else if (v & 8) {
        func_ov135_022955d8();
        func_ov135_0229581c();
    } else if (v & 2) {
        func_ov135_022955d8();
        func_ov135_022957f4();
    }
}

void Unk_ov135_022964b0::func_ov135_02295b40() {
    if (func_ov002_022009d4()) {
        func_ov135_02295754();
        return;
    }
    s32 r = unk_260.func_ov134_0229219c(func_ov002_022009c8());
    switch (r) {
    case 0:
        goto zero;
    case 2:
        func_ov135_02295404(4);
        break;
    case 3: {
        s32 b = func_ov135_02295648();
        s32 c = func_ov135_022955f4();
        unk_98.func_ov002_02202a40(b, c);
        return;
    }
    default:
        break;
    }
    func_ov135_02295588();
    return;
zero: {
        u32 v = gPad[1];
        if (v & 1) {
            func_ov135_022954f4();
        } else if (v & 2) {
            func_ov135_0229576c();
        }
    }
}

void Unk_ov135_022964b0::func_ov135_02295ae8() {
    if (gPad[0] & 1) {
        unk_260.func_ov134_02292450();
        s32 b = func_ov135_02295648();
        s32 c = func_ov135_022955f4();
        unk_98.func_ov002_02202a40(b, c);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(9);
    }
}

void Unk_ov135_022964b0::func_ov135_02295aa0() {
    if (unk_260.func_ov134_02292420()) {
        func_ov002_02200a58(7);
        func_ov135_022954d0();
    }
    s32 b = func_ov135_02295648();
    s32 c = func_ov135_022955f4();
    unk_98.func_ov002_02202a40(b, c);
}

void Unk_ov135_022964b0::func_ov135_02295a78() {
    if (!unk_98.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_94);
        func_ov135_02296108();
    }
}

void Unk_ov135_022964b0::func_ov135_022959f4() {
    if (unk_98.isAnimDone()) {
        if (func_ov135_02295414(2)) {
            if (unk_260.func_ov134_02292530()) {
                func_ov002_02200a58(8);
            } else if (unk_260.func_ov134_02292170()) {
                func_ov135_02295798();
            } else {
                func_ov002_02200a58(7);
                func_ov135_022954d0();
            }
        } else {
            u32 v = unk_95;
            if (v == 5) {
                func_ov135_0229581c();
            } else if (v == 6) {
                func_ov135_022957f4();
            } else {
                func_ov135_022957c4(v);
            }
        }
    }
}

void Unk_ov135_022964b0::func_ov135_022959d0() {
    if (unk_98.isAnimDone()) {
        func_ov135_0229550c();
        func_ov002_02200a58(unk_94);
    }
}

void Unk_ov135_022964b0::func_ov135_0229596c() {
    if (unk_fc.func_ov002_0220308c()) {
        if (unk_98.getAnim()) {
            s32 a = unk_fc.func_ov002_0220306c();
            s32 b = unk_fc.func_ov002_022030f4(-1);
            s32 c = unk_fc.func_ov002_022030b8(-1);
            unk_98.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov135_022955d8();
        func_ov002_02200a60(1);
    }
}

void Unk_ov135_022964b0::func_ov135_0229594c() {
    if (func_ov134_02292f40(&unk_260)) {
        func_ov135_022956f8();
    }
}

void Unk_ov135_022964b0::func_ov135_02295910() {
    if (func_ov134_02292cb0(&unk_260)) {
        s32 r = func_ov134_022932d8(&unk_260);
        if (r == 6) {
            unk_95 = 5;
        } else {
            unk_95 = r;
        }
        func_ov135_022958bc();
    }
}

void Unk_ov135_022964b0::func_ov135_022958f8() {
    func_ov135_022955d8();
    func_ov002_02200a58(0);
}

void Unk_ov135_022964b0::func_ov135_022958dc() {
    func_ov135_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(6);
}

void Unk_ov135_022964b0::func_ov135_022958bc() {
    if (MenuCtrl_IsTouch()) {
        func_ov135_022958f8();
    } else {
        func_ov135_022958dc();
    }
}

void Unk_ov135_022964b0::func_ov135_0229581c() {
    unk_fc.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xd);
    func_0206ecf8(1);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    func_ov134_022948d8(&unk_260, v);
    func_0206e8cc(v);
    u8 *g = gSaveData;
    if (func_ov134_022948b8(&unk_260)) {
        func_0206e82c();
    } else {
        func_0206e820();
    }
    u32 a[2];
    MI_CpuCopy8(v, a, 8);
    s32 r4 = func_0209cb9c(g + 0x15fb4, a);
    u32 b[2];
    MI_CpuCopy8(v, b, 8);
    u16 r = func_0209cb74(g + 0x15fb4, b);
    *(s32 *)(g + 0x15fb4) = r4;
    *(u16 *)(g + 0x15fb8) = r;
    func_0209cfe4();
}

void Unk_ov135_022964b0::func_ov135_022957f4() {
    unk_fc.func_ov002_022030ac(7);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xd);
    func_0206ecf8(0);
}

void Unk_ov135_022964b0::func_ov135_022957c4(u32 a) {
    func_ov135_022955d8();
    func_ov134_02293024(&unk_260, a);
    func_ov002_02200a58(0xe);
    func_0206e814();
}

void Unk_ov135_022964b0::func_ov135_02295798() {
    func_ov135_022955d8();
    func_ov135_022953f4(2);
    func_ov134_02292e40(&unk_260);
    func_ov002_02200a58(0xf);
}

void Unk_ov135_022964b0::func_ov135_0229576c() {
    func_ov135_022955d8();
    func_ov135_022953f4(2);
    func_ov134_02292df4(&unk_260);
    func_ov002_02200a58(0xf);
}

void Unk_ov135_022964b0::func_ov135_02295754() {
    func_ov135_022955d8();
    func_ov002_02200a58(3);
}

void Unk_ov135_022964b0::func_ov135_02295718() {
    s32 t = unk_260.func_ov134_0229236c();
    unk_260.func_ov134_02292340(t);
    func_ov135_02295404(2);
    func_ov135_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(7);
}

void Unk_ov135_022964b0::func_ov135_022956f8() {
    if (MenuCtrl_IsTouch()) {
        func_ov135_02295754();
    } else {
        func_ov135_02295718();
    }
}

void Unk_ov135_022964b0::func_ov135_0229569c() {
    s32 b = func_ov135_02295648();
    s32 c = func_ov135_022955f4();
    unk_98.func_ov002_02202a40(b, c);
    u32 v;
    if (func_ov135_02295414(2) != 0 || ((v = unk_95) != 5 && v != 6)) {
        ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202d00(1);
    } else {
        ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202d00(7);
    }
    func_ov135_0229550c();
}

s32 Unk_ov135_022964b0::func_ov135_02295648() {
    if (func_ov135_02295414(2)) {
        return unk_260.func_ov134_022923a0();
    }
    switch (unk_95) {
    case 5:
        return unk_fc.func_ov002_022030f4(6);
    case 6:
        return unk_fc.func_ov002_022030f4(7);
    default:
        return data_ov135_022963bc[unk_95];
    }
}

s32 Unk_ov135_022964b0::func_ov135_022955f4() {
    if (func_ov135_02295414(2)) {
        return unk_260.func_ov134_0229236c();
    }
    switch (unk_95) {
    case 5:
        return unk_fc.func_ov002_022030b8(6);
    case 6:
        return unk_fc.func_ov002_022030b8(7);
    default:
        return data_ov135_022963d8[unk_95];
    }
}

void Unk_ov135_022964b0::func_ov135_022955d8() {
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202d00(0);
    unk_98.vfunc_0c();
}

void Unk_ov135_022964b0::func_ov135_02295588() {
    u32 k;
    if (func_ov135_02295414(2) != 0 || ((k = unk_95) != 5 && k != 6)) {
        ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202c40();
    } else {
        ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202ca0();
    }
    s32 b = func_ov135_02295648();
    s32 c = func_ov135_022955f4();
    func_ov135_02295528(b, c);
}

void Unk_ov135_022964b0::func_ov135_02295528(s32 a, s32 b) {
    if (func_ov135_02295414(4)) {
        unk_98.func_ov002_022029e8(a, b, 2, 1);
    } else {
        unk_98.func_ov002_022029e8(a, b, 3, 1);
    }
    unk_94 = unk_8d;
    func_ov002_02200a58(0xa);
    func_ov135_022953f4(4);
}

void Unk_ov135_022964b0::func_ov135_0229550c() {
    unk_98.func_ov002_02202a78();
    unk_98.vfunc_0c();
}

void Unk_ov135_022964b0::func_ov135_022954f4() {
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202b68();
    func_ov002_02200a58(0xb);
}

void Unk_ov135_022964b0::func_ov135_022954d0() {
    unk_98.func_ov002_02202af0();
    unk_94 = unk_8d;
    func_ov002_02200a58(0xc);
}

BOOL Unk_ov135_022964b0::func_ov135_02295428(u32 pad) {
    u32 old = unk_95;
    if (func_ov002_0220126c(pad)) {
        unk_95 = data_ov135_0229639c[unk_95];
    } else if (func_ov002_0220125c(pad)) {
        unk_95 = data_ov135_022963a4[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    if (func_ov002_0220128c(pad)) {
        unk_95 = data_ov135_022963b4[unk_95];
    } else if (func_ov002_0220127c(pad)) {
        unk_95 = data_ov135_022963ac[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov135_022964b0::func_ov135_02295414(u32 m) {
    if (unk_92 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov135_022964b0::func_ov135_02295404(u32 m) { unk_92 = unk_92 | m; }

void Unk_ov135_022964b0::func_ov135_022953f4(u32 m) { unk_92 = unk_92 & ~m; }

extern "C" const s32 data_ov135_022963bc[7] = {0xd6, 0x68, 0xa6, 0x68, 0xb0, 0};

extern "C" const s32 data_ov135_022963d8[7] = {0x70, 0x70, 0x70, 0x90, 0x90, 0};

extern "C" const u8 data_ov135_0229639c[7] = {2, 1, 1, 3, 3, 6, 6};

extern "C" const u8 data_ov135_022963a4[7] = {0, 2, 0, 4, 4, 5, 5};

extern "C" const u8 data_ov135_022963b4[7] = {0, 1, 2, 1, 2, 4, 3};

extern "C" const u8 data_ov135_022963ac[7] = {4, 3, 4, 6, 5, 5, 6};

