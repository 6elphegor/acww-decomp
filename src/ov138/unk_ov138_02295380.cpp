#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern const u8 data_ov138_02296284[5];
extern const u8 data_ov138_0229628c[5];
extern const u8 data_ov138_02296294[5];
extern const u8 data_ov138_0229629c[5];
extern const s32 data_ov138_022962a4[5];
extern const s32 data_ov138_022962b8[5];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchCurX;
extern u8 gTouchCurY;

void ProcBase_RequestDelete(void *p);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0206e814();
s32 func_0206ed50();
BOOL MenuCtrl_IsButtons();
void *ProcBase_GetParent();
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
BOOL _ZN10HandCursor7getAnimEv(void *self);
BOOL _ZN10HandCursor10isAnimDoneEv(void *self);
void func_ov002_02203920(void *self);
void _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(void *self, s32 a, s32 b);
void _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(void *self);

// ov134 library object (plain functions; first argument is the Unk_ov134_02291f60 object)
void func_ov134_022948d8(void *self, void *out);
void func_ov134_02293024(void *self, u32 a);
void func_ov134_02292e40(void *self);
void func_ov134_02292df4(void *self);
BOOL MenuCtrl_IsTouch();
void func_0206e8cc(void *p);
void func_0206ecf8(u32 v);
s32 func_ov134_02292c54(void *self, u32 a, u32 b);
BOOL func_ov134_02292cb0(void *self);
s32 func_ov134_022932d8(void *self);
BOOL func_ov134_02292f40(void *self);
s32 func_ov134_02293c48(void *self, s32 a, s32 b);
s32 func_ov134_022935b8(void *self, u8 a, u8 b);
void func_ov134_022946fc(void *self);
void func_ov134_022947e8(void *self);
void func_ov134_022947b8(void *self, s32 a);
void func_ov134_022948e4(void *self);
void func_ov134_022949a8(void *self);
void func_ov134_022949ec(void *self);
void func_ov134_02294a28(void *self);
void func_ov134_02294a34(void *self, s32 a, s32 b, s32 c, s32 d);
}

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
    void func_ov002_022034c4(u8 v);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// ov134's library object at +0x260 (plain class Unk_ov134_02291f60)
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
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
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

class Unk_ov138_02296380;
typedef void (Unk_ov138_02296380::*Unk_ov138_02296380_Fn)();

static inline BOOL Unk_ov138_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x02296380, size 0x2824 (scene overlay on Unk_ov002_022044e4)
class Unk_ov138_02296380 : public Unk_ov002_022044e4 {
public:
    Unk_ov138_02296380() : unk_98(), unk_fc(), unk_260() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov138_022953f4(u32 m);
    void func_ov138_02295404(u32 m);
    BOOL func_ov138_02295414(u32 m);
    BOOL func_ov138_02295428(u32 pad);
    void func_ov138_022954d0();
    void func_ov138_022954f4();
    void func_ov138_0229550c();
    void func_ov138_02295528(s32 a, s32 b);
    void func_ov138_02295588();
    void func_ov138_022955d8();
    s32 func_ov138_022955f4();
    s32 func_ov138_02295648();
    void func_ov138_0229569c();
    void func_ov138_022956f8();
    void func_ov138_02295718();
    void func_ov138_02295754();
    void func_ov138_0229576c();
    void func_ov138_02295798();
    void func_ov138_022957c4(u32 a);
    void func_ov138_022957f0();
    void func_ov138_02295818();
    void func_ov138_02295860();
    void func_ov138_02295880();
    void func_ov138_0229589c();
    void func_ov138_022958b4();
    void func_ov138_022958f0();
    void func_ov138_02295910();
    void func_ov138_02295974();
    void func_ov138_02295998();
    void func_ov138_02295a1c();
    void func_ov138_02295a44();
    void func_ov138_02295a8c();
    void func_ov138_02295ae4();
    void func_ov138_02295b7c();
    void func_ov138_02295bf8();
    void func_ov138_02295c34();
    void func_ov138_02295c70();
    void func_ov138_02295d08();
    void func_ov138_02295d9c();
    void func_ov138_02295dbc();
    void func_ov138_02295ddc();
    void func_ov138_02295e28();
    void func_ov138_02295e38();
    void func_ov138_02295e54();
    void func_ov138_02295e5c();
    void func_ov138_02295e74();
    void func_ov138_02295e94();
    void func_ov138_02295ecc();
    void func_ov138_02295eec();
    void func_ov138_02295f1c();
    void func_ov138_02295f54();
    void func_ov138_02295f7c();
    void func_ov138_0229600c();

    /* 0x091 */ u8 unk_91;
    /* 0x092 */ u16 unk_92;
    /* 0x094 */ u8 unk_94;
    /* 0x095 */ u8 unk_95;
    /* 0x096 */ u8 unk_96[2];
    /* 0x098 */ Unk_ov002_02204614 unk_98;
    /* 0x0fc */ Unk_ov002_022046cc unk_fc;
    /* 0x260 */ Unk_ov134_02291f60 unk_260;
};

struct Unk_ov138_SceneEntry {
    Unk_ov138_02296380 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov138_02296380 *func_ov138_02296240();

extern "C" Unk_ov138_02296380 *func_ov138_02296240() { return new Unk_ov138_02296380(); }

BOOL Unk_ov138_02296380::vfunc_00() {
    func_ov138_02295e94();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov138_02296380::vfunc_0c() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv(ProcBase_GetParent());
    func_ov138_02295e74();
    return TRUE;
}

BOOL Unk_ov138_02296380::onDraw() {
    if (MenuCtrl_IsButtons()) {
        ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202844();
    }
    if (!func_ov138_02295414(1)) {
        return FALSE;
    }
    s32 r = func_ov002_02200920();
    func_ov134_02293c48(&unk_260, 0, r);
    s32 r2 = func_ov002_02200920();
    unk_fc.func_ov002_022036a4(r2);
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const s32 data_ov138_022962a4[5];
extern "C" const u8 data_ov138_02296294[5];
extern "C" const u8 data_ov138_0229629c[5];
extern "C" const u8 data_ov138_02296284[5];
extern "C" const u8 data_ov138_0229628c[5];
extern "C" const s32 data_ov138_022962b8[5];
extern "C" Unk_ov138_SceneEntry data_ov138_02296368;

extern "C" const s32 data_ov138_022962a4[5] = {0xd6, 0x68, 0xa6, 0, 0};

BOOL Unk_ov138_02296380::vfunc_4c() {
    static Unk_ov138_02296380_Fn tbl[4] = {
        &Unk_ov138_02296380::func_ov138_02295f7c,
        &Unk_ov138_02296380::func_ov138_02295f54,
        &Unk_ov138_02296380::func_ov138_02295f1c,
        &Unk_ov138_02296380::func_ov138_02295eec};
    func_ov138_02295e38();
    (this->*tbl[unk_8c])();
    func_ov138_02295e28();
    return TRUE;
}

void Unk_ov138_02296380::func_ov138_0229600c() {
    static Unk_ov138_02296380_Fn tbl[14] = {
        &Unk_ov138_02296380::func_ov138_02295d08,
        &Unk_ov138_02296380::func_ov138_02295c70,
        &Unk_ov138_02296380::func_ov138_02295c34,
        &Unk_ov138_02296380::func_ov138_02295bf8,
        &Unk_ov138_02296380::func_ov138_02295b7c,
        &Unk_ov138_02296380::func_ov138_02295ae4,
        &Unk_ov138_02296380::func_ov138_02295a8c,
        &Unk_ov138_02296380::func_ov138_02295a44,
        &Unk_ov138_02296380::func_ov138_02295a1c,
        &Unk_ov138_02296380::func_ov138_02295998,
        &Unk_ov138_02296380::func_ov138_02295974,
        &Unk_ov138_02296380::func_ov138_02295910,
        &Unk_ov138_02296380::func_ov138_022958f0,
        &Unk_ov138_02296380::func_ov138_022958b4};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov138_02296380::vfunc_50() {
    func_ov138_02295e5c();
    func_ov138_0229600c();
    func_ov138_02295e54();
    return TRUE;
}

BOOL Unk_ov138_02296380::vfunc_54() { return TRUE; }

BOOL Unk_ov138_02296380::vfunc_58() { return TRUE; }

BOOL Unk_ov138_02296380::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov138_02296380::func_ov138_02295f7c() {
    func_ov138_02295ddc();
    func_ov138_02295dbc();
    func_ov138_02295d9c();
    func_ov002_022008e0(10, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov138_02295ecc();
    func_ov138_02295404(1);
    unk_fc.func_ov002_022034c4(0x65);
    func_ov002_02200a50(1);
}

void Unk_ov138_02296380::func_ov138_02295f54() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov138_02295860();
    }
    func_ov138_02295ecc();
}

void Unk_ov138_02296380::func_ov138_02295f1c() {
    _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii(ProcBase_GetParent(), 0x44, 1);
    func_ov002_022008c4(10, 0, 0, 0x30);
    func_ov138_02295ecc();
    func_ov002_02200a50(3);
}

void Unk_ov138_02296380::func_ov138_02295eec() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov138_02295ecc();
    }
}

void Unk_ov138_02296380::func_ov138_02295ecc() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
}

void Unk_ov138_02296380::func_ov138_02295e94() {
    func_ov134_02294a34(&unk_260, 3, 6, 4, 3);
    func_ov134_02294a28(&unk_260);
    unk_95 = 0;
    unk_92 = 0;
}

void Unk_ov138_02296380::func_ov138_02295e74() {
    func_ov134_022949ec(&unk_260);
    unk_fc.func_ov002_02203900();
}

void Unk_ov138_02296380::func_ov138_02295e5c() {
    func_ov138_02295e38();
    unk_98.vfunc_0c();
}

void Unk_ov138_02296380::func_ov138_02295e54() {
    func_ov138_02295e28();
}

void Unk_ov138_02296380::func_ov138_02295e38() {
    unk_fc.func_ov002_02203900();
    func_ov134_022949a8(&unk_260);
}

void Unk_ov138_02296380::func_ov138_02295e28() {
    func_ov134_022948e4(&unk_260);
}

void Unk_ov138_02296380::func_ov138_02295ddc() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov138_02296380::func_ov138_02295dbc() {
    func_ov134_022947e8(&unk_260);
    func_ov134_022947b8(&unk_260, 0x6c);
}

void Unk_ov138_02296380::func_ov138_02295d9c() {
    func_ov134_022946fc(&unk_260);
    func_ov002_02203920(&unk_fc);
}

void Unk_ov138_02296380::func_ov138_02295d08() {
    if (func_ov002_02200a14(1)) {
        func_ov138_02295880();
    } else {
        if (Unk_ov138_Both()) {
            if (unk_fc.func_ov002_02203110(6)) {
                func_ov138_02295818();
            } else if (unk_fc.func_ov002_02203110(7)) {
                func_ov138_022957f0();
            } else {
                s32 r = func_ov134_022935b8(&unk_260, gTouchCurX, gTouchCurY);
                if (r != 6) {
                    func_ov138_022957c4(r);
                }
            }
        }
    }
}

void Unk_ov138_02296380::func_ov138_02295c70() {
    if (func_ov002_02200a14(1)) {
        func_ov138_02295718();
        return;
    }
    BOOL ok;
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        switch (func_ov134_02292c54(&unk_260, gTouchCurX, gTouchCurY)) {
        case 0:
            func_ov138_02295798();
            break;
        case 1:
            func_ov138_0229576c();
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

void Unk_ov138_02296380::func_ov138_02295c34() {
    if (gTouchHeld) {
        unk_260.func_ov134_022924d8(gTouchCurY);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov138_02296380::func_ov138_02295bf8() {
    if (gTouchHeld) {
        unk_260.func_ov134_022924b0(gTouchCurY);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(1);
    }
}

void Unk_ov138_02296380::func_ov138_02295b7c() {
    if (func_ov002_022009d4()) {
        func_ov138_0229589c();
        return;
    }
    s32 x = func_ov002_022009c8();
    if (func_ov138_02295428(x)) {
        func_ov138_02295588();
        return;
    }
    u32 v = gPad[1];
    if (v & 1) {
        func_ov138_022954f4();
    } else if (v & 8) {
        func_ov138_022955d8();
        func_ov138_02295818();
    } else if (v & 2) {
        func_ov138_022955d8();
        func_ov138_022957f0();
    }
}

void Unk_ov138_02296380::func_ov138_02295ae4() {
    if (func_ov002_022009d4()) {
        func_ov138_02295754();
        return;
    }
    s32 r = unk_260.func_ov134_0229219c(func_ov002_022009c8());
    switch (r) {
    case 2:
        func_ov138_02295404(4);
        goto dflt;
    case 3: {
        s32 b = func_ov138_02295648();
        s32 c = func_ov138_022955f4();
        ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202a40(b, c);
        return;
    }
    default:
    dflt:
        func_ov138_02295588();
        return;
    case 0: {
        u32 v = gPad[1];
        if (v & 1) {
            func_ov138_022954f4();
        } else if (v & 2) {
            func_ov138_0229576c();
        }
        return;
    }
    }
}

void Unk_ov138_02296380::func_ov138_02295a8c() {
    if (gPad[0] & 1) {
        unk_260.func_ov134_02292450();
        s32 b = func_ov138_02295648();
        s32 c = func_ov138_022955f4();
        ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202a40(b, c);
    } else {
        unk_260.func_ov134_02292444();
        func_ov002_02200a58(7);
    }
}

void Unk_ov138_02296380::func_ov138_02295a44() {
    if (unk_260.func_ov134_02292420()) {
        func_ov002_02200a58(5);
        func_ov138_022954d0();
    }
    s32 b = func_ov138_02295648();
    s32 c = func_ov138_022955f4();
    ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202a40(b, c);
}

void Unk_ov138_02296380::func_ov138_02295a1c() {
    if (!((Unk_ov002_02202d98 *)&unk_98)->func_ov002_022028f0()) {
        func_ov002_02200a58(unk_94);
        func_ov138_0229600c();
    }
}

void Unk_ov138_02296380::func_ov138_02295998() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_98)) {
        if (func_ov138_02295414(2)) {
            if (unk_260.func_ov134_02292530()) {
                func_ov002_02200a58(6);
            } else if (unk_260.func_ov134_02292170()) {
                func_ov138_02295798();
            } else {
                func_ov002_02200a58(5);
                func_ov138_022954d0();
            }
        } else {
            u32 v = unk_95;
            if (v == 3) {
                func_ov138_02295818();
            } else if (v == 4) {
                func_ov138_022957f0();
            } else {
                func_ov138_022957c4(v);
            }
        }
    }
}

void Unk_ov138_02296380::func_ov138_02295974() {
    if (_ZN10HandCursor10isAnimDoneEv(&unk_98)) {
        func_ov138_0229550c();
        func_ov002_02200a58(unk_94);
    }
}

void Unk_ov138_02296380::func_ov138_02295910() {
    if (unk_fc.func_ov002_0220308c()) {
        if (_ZN10HandCursor7getAnimEv(&unk_98)) {
            s32 a = unk_fc.func_ov002_0220306c();
            s32 b = unk_fc.func_ov002_022030f4(-1);
            s32 c = unk_fc.func_ov002_022030b8(-1);
            ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov138_022955d8();
        func_ov002_02200a60(1);
    }
}

void Unk_ov138_02296380::func_ov138_022958f0() {
    if (func_ov134_02292f40(&unk_260)) {
        func_ov138_022956f8();
    }
}

void Unk_ov138_02296380::func_ov138_022958b4() {
    if (func_ov134_02292cb0(&unk_260)) {
        s32 r = func_ov134_022932d8(&unk_260);
        if (r == 6) {
            unk_95 = 3;
        } else {
            unk_95 = r;
        }
        func_ov138_02295860();
    }
}

void Unk_ov138_02296380::func_ov138_0229589c() {
    func_ov138_022955d8();
    func_ov002_02200a58(0);
}

void Unk_ov138_02296380::func_ov138_02295880() {
    func_ov138_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(4);
}

void Unk_ov138_02296380::func_ov138_02295860() {
    if (MenuCtrl_IsTouch()) {
        func_ov138_0229589c();
    } else {
        func_ov138_02295880();
    }
}

void Unk_ov138_02296380::func_ov138_02295818() {
    unk_fc.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xb);
    u32 v[2];
    v[0] = 0;
    v[1] = 0;
    func_ov134_022948d8(&unk_260, v);
    func_0206e8cc(v);
    func_0206ecf8(1);
}

void Unk_ov138_02296380::func_ov138_022957f0() {
    unk_fc.func_ov002_022030ac(7);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xb);
    func_0206ecf8(0);
}

void Unk_ov138_02296380::func_ov138_022957c4(u32 a) {
    func_ov138_022955d8();
    func_ov134_02293024(&unk_260, a);
    func_ov002_02200a58(0xc);
}

void Unk_ov138_02296380::func_ov138_02295798() {
    func_ov138_022955d8();
    func_ov138_022953f4(2);
    func_ov134_02292e40(&unk_260);
    func_ov002_02200a58(0xd);
}

void Unk_ov138_02296380::func_ov138_0229576c() {
    func_ov138_022955d8();
    func_ov138_022953f4(2);
    func_ov134_02292df4(&unk_260);
    func_ov002_02200a58(0xd);
}

void Unk_ov138_02296380::func_ov138_02295754() {
    func_ov138_022955d8();
    func_ov002_02200a58(1);
}

void Unk_ov138_02296380::func_ov138_02295718() {
    s32 t = unk_260.func_ov134_0229236c();
    unk_260.func_ov134_02292340(t);
    func_ov138_02295404(2);
    func_ov138_0229569c();
    func_ov002_02200980();
    func_ov002_02200a58(5);
}

void Unk_ov138_02296380::func_ov138_022956f8() {
    if (MenuCtrl_IsTouch()) {
        func_ov138_02295754();
    } else {
        func_ov138_02295718();
    }
}

void Unk_ov138_02296380::func_ov138_0229569c() {
    s32 b = func_ov138_02295648();
    s32 c = func_ov138_022955f4();
    ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202a40(b, c);
    if (func_ov138_02295414(2) != 0) {
        goto els;
    }
    {
        u32 v = unk_95;
        if (v == 3) {
            goto hit;
        }
        if (v == 4) {
            goto hit;
        }
    }
els:
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202d00(1);
    goto out;
hit:
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202d00(7);
out:
    func_ov138_0229550c();
}

s32 Unk_ov138_02296380::func_ov138_02295648() {
    if (func_ov138_02295414(2)) {
        return unk_260.func_ov134_022923a0();
    }
    switch (unk_95) {
    case 3:
        return unk_fc.func_ov002_022030f4(6);
    case 4:
        return unk_fc.func_ov002_022030f4(7);
    default:
        return data_ov138_022962a4[unk_95];
    }
}

s32 Unk_ov138_02296380::func_ov138_022955f4() {
    if (func_ov138_02295414(2)) {
        return unk_260.func_ov134_0229236c();
    }
    switch (unk_95) {
    case 3:
        return unk_fc.func_ov002_022030b8(6);
    case 4:
        return unk_fc.func_ov002_022030b8(7);
    default:
        return data_ov138_022962b8[unk_95];
    }
}

void Unk_ov138_02296380::func_ov138_022955d8() {
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202d00(0);
    unk_98.vfunc_0c();
}

void Unk_ov138_02296380::func_ov138_02295588() {
    if (func_ov138_02295414(2) != 0) {
        goto els;
    }
    {
        u32 c = unk_95;
        if (c == 3) {
            goto hit;
        }
        if (c == 4) {
            goto hit;
        }
    }
els:
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202c40();
    goto out;
hit:
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202ca0();
out:
    s32 b = func_ov138_02295648();
    s32 c = func_ov138_022955f4();
    func_ov138_02295528(b, c);
}

void Unk_ov138_02296380::func_ov138_02295528(s32 a, s32 b) {
    if (func_ov138_02295414(4)) {
        ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_022029e8(a, b, 2, 1);
    } else {
        ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_022029e8(a, b, 3, 1);
    }
    unk_94 = unk_8d;
    func_ov002_02200a58(8);
    func_ov138_022953f4(4);
}

void Unk_ov138_02296380::func_ov138_0229550c() {
    ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202a78();
    unk_98.vfunc_0c();
}

void Unk_ov138_02296380::func_ov138_022954f4() {
    ((Unk_ov002_0220464c *)&unk_98)->func_ov002_02202b68();
    func_ov002_02200a58(9);
}

void Unk_ov138_02296380::func_ov138_022954d0() {
    ((Unk_ov002_02202d98 *)&unk_98)->func_ov002_02202af0();
    unk_94 = unk_8d;
    func_ov002_02200a58(0xa);
}

BOOL Unk_ov138_02296380::func_ov138_02295428(u32 pad) {
    u32 old = unk_95;
    if (func_ov002_0220126c(pad)) {
        unk_95 = data_ov138_02296284[unk_95];
    } else if (func_ov002_0220125c(pad)) {
        unk_95 = data_ov138_0229628c[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    if (func_ov002_0220128c(pad)) {
        unk_95 = data_ov138_0229629c[unk_95];
    } else if (func_ov002_0220127c(pad)) {
        unk_95 = data_ov138_02296294[unk_95];
    }
    if (old != unk_95) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov138_02296380::func_ov138_02295414(u32 m) {
    if (unk_92 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov138_02296380::func_ov138_02295404(u32 m) { unk_92 = unk_92 | m; }

void Unk_ov138_02296380::func_ov138_022953f4(u32 m) { unk_92 = unk_92 & ~m; }

extern "C" const u8 data_ov138_02296294[5] __attribute__((aligned(4))) = {3, 3, 3, 3, 4};

extern "C" const u8 data_ov138_0229629c[5] __attribute__((aligned(4))) = {0, 1, 2, 0, 2};

extern "C" const u8 data_ov138_02296284[5] __attribute__((aligned(4))) = {2, 1, 1, 4, 4};

extern "C" const u8 data_ov138_0229628c[5] __attribute__((aligned(4))) = {0, 2, 0, 3, 3};

extern "C" const s32 data_ov138_022962b8[5] = {0x70, 0x70, 0x70, 0, 0};

extern "C" Unk_ov138_SceneEntry data_ov138_02296368 = {func_ov138_02296240, 0xb1, 0xb5};

