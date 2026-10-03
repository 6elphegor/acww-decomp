#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];

void *ProcBase_GetParent();
void ProcBase_RequestDelete(void *p);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
BOOL func_0206e63c();
BOOL func_0206e61c();
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
s32 func_ov090_02291aa0();
u8 func_ov090_02291a38(u8 a);
u8 func_ov090_02291a58(u8 a);

// ov114 sub-object (+0xf8) functions
void func_ov114_02294e6c(void *p);
s32 func_ov114_022950cc(void *p);
BOOL func_ov114_022950b4(void *p);
s32 func_ov114_022950e8(void *p);
s32 func_ov114_02295150(void *p);
BOOL func_ov114_02295c9c(void *p);
void func_ov114_02295d04(void *p);
void func_ov114_02295ce0(void *p);
BOOL func_ov114_02295d98(void *p);
BOOL func_ov114_02294d88(void *p);
BOOL func_ov114_02294ed0(void *p, s32 a);
void func_ov114_02295dec(void *p, u32 a);
void func_ov114_02295dc4(void *p);
BOOL func_ov114_02295510(void *p, u32 a, u32 b);
void func_ov114_0229559c(void *p);
void func_ov114_0229539c(void *p);
void func_ov114_02295374(void *p);
void func_ov114_022956a4(void *p, s32 a);
}

class Unk_ov090_022921e0 {
public:
    void func_ov090_02291d2c();
    void func_ov090_02291d8c(u32 a);
};

class Unk_ov116_02297378;

struct Unk_ov116_SceneEntry {
    Unk_ov116_02297378 *(*create)();
    u16 a;
    u16 b;
};


class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fc44();
    u8 unk_04[0x3c];
};

class Unk_ov114_02294c40 {
public:
    Unk_ov114_02294c40();
    ~Unk_ov114_02294c40();
    BOOL func_ov114_02295eb4(s32 a, s32 b);
    void func_ov114_02295fec(s32 a);
    void func_ov114_0229600c();
    BOOL func_ov114_02296024(s32 a, s32 b);
    void func_ov114_02296078(s32 a);
    void func_ov114_02296148();
    void func_ov114_022961c0();
    void func_ov114_022962e4();
    void func_ov114_0229633c();
    void func_ov114_0229636c();
    void func_ov114_02296390(u8 a, u8 b, u8 c, u8 d);
    u32 unk_00[0x129c / 4];
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();

    /* 0x0c */ u8 unk_0c[0x3f];
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

class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 a);
};

// +0x94 sub-object (0x64 bytes)
class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u8 unk_4b[0x64 - 0x4b];
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
    u32 func_ov002_022009c8();
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

typedef void (Unk_ov116_02297378::*Unk_ov116_02297378_Fn)();

// Vtable 0x02297378, size 0x13e0
class Unk_ov116_02297378 : public Unk_ov002_022044e4 {
public:
    Unk_ov116_02297378() : unk_94(), unk_f8(), unk_1394() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov116_02296868(u32 mask);
    BOOL func_ov116_02296878(u32 mask);
    void func_ov116_02296890();
    void func_ov116_022968b8();
    void func_ov116_022968d0();
    void func_ov116_022968ec(s32 a, s32 b);
    void func_ov116_02296920();
    s32 func_ov116_02296990();
    s32 func_ov116_0229699c();
    void func_ov116_02296974();
    void func_ov116_022969a8();
    void func_ov116_02296a10();
    void func_ov116_02296a2c();
    void func_ov116_02296a4c();
    void func_ov116_02296a68();
    void func_ov116_02296a80();
    void func_ov116_02296ad0();
    void func_ov116_02296b34();
    void func_ov116_02296b80();
    void func_ov116_02296ba8();
    void func_ov116_02296c00();
    void func_ov116_02296c28();
    void func_ov116_02296cb0();
    void func_ov116_02296ce8();
    void func_ov116_02296d70();
    void func_ov116_02296d88();
    void func_ov116_02296da0();
    void func_ov116_02296de8();
    void func_ov116_02296df4();
    void func_ov116_02296e0c();
    void func_ov116_02296e14();
    void func_ov116_02296e2c();
    void func_ov116_02296e44();
    void func_ov116_02296e68();
    void func_ov116_02296ea4();
    void func_ov116_02296edc();
    void func_ov116_02296f14();
    void func_ov116_02296f3c();
    BOOL func_ov116_02296f8c(s32 v);
    BOOL func_ov116_02296fcc();
    void func_ov116_022970a8();

    /* 0x0091 */ u8 unk_91[0x3];
    /* 0x0094 */ Unk_ov002_02204614 unk_94;
    /* 0x00f8 */ Unk_ov114_02294c40 unk_f8;
    /* 0x1394 */ Unk_020e0488 unk_1394[1];
    /* 0x13d4 */ s32 unk_13d4;
    /* 0x13d8 */ u16 unk_13d8;
    /* 0x13da */ u8 unk_13da;
    /* 0x13db */ u8 unk_13db;
    /* 0x13dc */ u8 unk_13dc;
};

static inline BOOL Unk_ov116_02296ce8_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov116_02297378 *func_ov116_022972a0() { return new Unk_ov116_02297378(); }

BOOL Unk_ov116_02297378::vfunc_00() {
    func_ov116_02296e44();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov116_02297378::vfunc_0c() {
    ((Unk_ov090_022921e0 *)ProcBase_GetParent())->func_ov090_02291d2c();
    func_ov116_02296e2c();
    return TRUE;
}

BOOL Unk_ov116_02297378::onDraw() {
    if (!func_ov116_02296878(1)) {
        return TRUE;
    }
    unk_f8.func_ov114_02295fec(unk_13d4);
    if (MenuCtrl_IsButtons()) {
        unk_94.func_ov002_02202844();
    }
    unk_f8.func_ov114_02296078(unk_13d4);
    func_ov114_022956a4(&unk_f8, unk_13d4);
    unk_f8.func_ov114_0229600c();
    return TRUE;
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov116_SceneEntry data_ov116_02297318;

extern "C" Unk_ov116_SceneEntry data_ov116_02297318 = {func_ov116_022972a0, 0xa0, 0xa4};

BOOL Unk_ov116_02297378::vfunc_4c() {
    static Unk_ov116_02297378_Fn tbl[4] = {
        &Unk_ov116_02297378::func_ov116_02296f3c,
        &Unk_ov116_02297378::func_ov116_02296f14,
        &Unk_ov116_02297378::func_ov116_02296edc,
        &Unk_ov116_02297378::func_ov116_02296ea4};
    func_ov116_02296df4();
    (this->*tbl[unk_8c])();
    func_ov116_02296de8();
    return TRUE;
}

void Unk_ov116_02297378::func_ov116_022970a8() {
    static Unk_ov116_02297378_Fn tbl[9] = {
        &Unk_ov116_02297378::func_ov116_02296ce8,
        &Unk_ov116_02297378::func_ov116_02296cb0,
        &Unk_ov116_02297378::func_ov116_02296c28,
        &Unk_ov116_02297378::func_ov116_02296c00,
        &Unk_ov116_02297378::func_ov116_02296ba8,
        &Unk_ov116_02297378::func_ov116_02296b80,
        &Unk_ov116_02297378::func_ov116_02296b34,
        &Unk_ov116_02297378::func_ov116_02296ad0,
        &Unk_ov116_02297378::func_ov116_02296a80};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov116_02297378::vfunc_50() {
    if (func_ov116_02296fcc()) {
        return TRUE;
    }
    func_ov116_02296e14();
    func_ov116_022970a8();
    func_ov116_02296e0c();
    return TRUE;
}

BOOL Unk_ov116_02297378::vfunc_54() { return TRUE; }

BOOL Unk_ov116_02297378::vfunc_58() { return TRUE; }

BOOL Unk_ov116_02297378::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL Unk_ov116_02297378::func_ov116_02296fcc() {
    s32 r;
    func_0206e63c();
    if (func_0206e61c()) {
        return func_ov116_02296f8c(7);
    }
    if (unk_8d != 0 && unk_8d != 2) {
        return FALSE;
    }
    r = -1;
    if (MenuCtrl_IsTouch()) {
        r = func_ov090_02291aa0();
    } else {
        u32 m = gPad[1];
        if (m & 2) {
            r = 7;
        } else if (m & 0x800) {
            r = 0;
        } else if (m & 0x400) {
            r = 5;
        } else if (m & 4) {
            r = 4;
        }
    }
    return func_ov116_02296f8c(r);
}

BOOL Unk_ov116_02297378::func_ov116_02296f8c(s32 v) {
    void *h = ProcBase_GetParent();
    if (v != -1 && v != 3) {
        ((Unk_ov090_022921e0 *)h)->func_ov090_02291d8c((u8)v);
        unk_8c = 2;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov116_02297378::func_ov116_02296f3c() {
    func_ov116_02296da0();
    func_ov116_02296d88();
    func_ov116_02296d70();
    func_ov002_022008e0(0xb, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    Gfx2d_ShowLayer(6);
    func_ov116_02296868(1);
    func_ov116_02296e68();
    func_ov002_02200a50(1);
}

void Unk_ov116_02297378::func_ov116_02296f14() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov116_02296a2c();
    }
    func_ov116_02296e68();
}

void Unk_ov116_02297378::func_ov116_02296edc() {
    func_ov116_02296974();
    func_ov002_022008c4(0xb, 0, 0, 0x30);
    func_ov116_02296e68();
    func_ov002_02200a50(3);
    func_ov114_02295374(&unk_f8);
}

void Unk_ov116_02297378::func_ov116_02296ea4() {
    if (func_ov002_022008fc(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        func_ov002_02200a60(5);
    } else {
        func_ov116_02296e68();
    }
}

void Unk_ov116_02297378::func_ov116_02296e68() {
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_13d4 = func_ov002_02200920();
}

void Unk_ov116_02297378::func_ov116_02296e44() {
    unk_13d8 = 0;
    unk_f8.func_ov114_02296390(3, 6, 4, 1);
}

void Unk_ov116_02297378::func_ov116_02296e2c() {
    unk_f8.func_ov114_0229636c();
    func_ov116_02296a10();
}

void Unk_ov116_02297378::func_ov116_02296e14() {
    func_ov116_02296df4();
    unk_94.vfunc_0c();
}

void Unk_ov116_02297378::func_ov116_02296e0c() {
    func_ov116_02296de8();
}

void Unk_ov116_02297378::func_ov116_02296df4() {
    unk_f8.func_ov114_0229633c();
    func_ov116_02296a10();
}

void Unk_ov116_02297378::func_ov116_02296de8() {
    unk_f8.func_ov114_022962e4();
}

void Unk_ov116_02297378::func_ov116_02296da0() {
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
}

void Unk_ov116_02297378::func_ov116_02296d88() {
    unk_f8.func_ov114_022961c0();
    func_ov114_0229539c(&unk_f8);
}

void Unk_ov116_02297378::func_ov116_02296d70() {
    unk_f8.func_ov114_02296148();
    func_ov114_0229559c(&unk_f8);
}

void Unk_ov116_02297378::func_ov116_02296ce8() {
    if (func_ov002_02200a14(1)) {
        func_ov116_02296a4c();
    } else if (Unk_ov116_02296ce8_Both()) {
        u32 a = gTouchCurX;
        u32 b = gTouchCurY;
        if (unk_f8.func_ov114_02296024(a, b) == 0) {
            if (unk_f8.func_ov114_02295eb4(a, b)) {
                func_ov002_02200a58(1);
            } else if (func_ov114_02295510(&unk_f8, a, b) != 0) {
                return;
            }
        }
    }
}

void Unk_ov116_02297378::func_ov116_02296cb0() {
    if (gTouchHeld != 0) {
        func_ov114_02295dec(&unk_f8, gTouchCurX);
    } else {
        func_ov114_02295dc4(&unk_f8);
        func_ov002_02200a58(0);
    }
}

void Unk_ov116_02297378::func_ov116_02296c28() {
    if (func_ov002_022009d4()) {
        func_ov116_02296a68();
    } else {
        u32 k = func_ov002_022009c8();
        if (func_ov114_02294ed0(&unk_f8, k)) {
            func_ov116_02296920();
        } else {
            u32 m = gPad[1];
            if (m & 1) {
                func_ov116_022968b8();
            } else if (m & 0x100) {
                func_ov116_02296f8c(func_ov090_02291a38(3));
            } else if (m & 0x200) {
                func_ov116_02296f8c(func_ov090_02291a58(3));
            }
        }
    }
}

void Unk_ov116_02297378::func_ov116_02296c00() {
    if (!unk_94.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_13dc);
        func_ov116_022970a8();
    }
}

void Unk_ov116_02297378::func_ov116_02296ba8() {
    if (unk_94.isAnimDone()) {
        s32 r = func_ov114_022950cc(&unk_f8);
        if (r != -1) {
            if (func_ov116_02296f8c(r) != 0) {
                return;
            }
            goto bea;
        } else {
            if (func_ov114_02294d88(&unk_f8) == 0) {
                goto bea;
            }
            func_ov002_02200a58(6);
            return;
        }
        return;
    bea:
        func_ov002_02200a58(2);
        func_ov116_02296890();
    }
}

void Unk_ov116_02297378::func_ov116_02296b80() {
    if (unk_94.isAnimDone()) {
        func_ov116_022968d0();
        func_ov002_02200a58(unk_13dc);
    }
}

void Unk_ov116_02297378::func_ov116_02296b34() {
    if (func_ov114_02295d98(&unk_f8)) {
        func_ov002_02200a58(7);
    }
    unk_f8.func_ov114_02295fec(unk_13d4);
    s32 a = func_ov116_0229699c();
    s32 b = func_ov116_02296990();
    unk_94.func_ov002_02202a40(a, b);
}

void Unk_ov116_02297378::func_ov116_02296ad0() {
    if (gPad[0] & 1) {
        func_ov114_02295d04(&unk_f8);
    } else {
        func_ov114_02295ce0(&unk_f8);
        func_ov002_02200a58(8);
    }
    unk_f8.func_ov114_02295fec(unk_13d4);
    s32 a = func_ov116_0229699c();
    s32 b = func_ov116_02296990();
    unk_94.func_ov002_02202a40(a, b);
}

void Unk_ov116_02297378::func_ov116_02296a80() {
    if (func_ov114_02295c9c(&unk_f8)) {
        func_ov002_02200a58(2);
        func_ov116_02296890();
    }
    unk_f8.func_ov114_02295fec(unk_13d4);
    s32 a = func_ov116_0229699c();
    s32 b = func_ov116_02296990();
    unk_94.func_ov002_02202a40(a, b);
}

void Unk_ov116_02297378::func_ov116_02296a68() {
    func_ov116_02296974();
    func_ov002_02200a58(0);
}

void Unk_ov116_02297378::func_ov116_02296a4c() {
    func_ov116_022969a8();
    func_ov002_02200980();
    func_ov002_02200a58(2);
}

void Unk_ov116_02297378::func_ov116_02296a2c() {
    if (MenuCtrl_IsTouch()) {
        func_ov116_02296a68();
    } else {
        func_ov116_02296a4c();
    }
}

void Unk_ov116_02297378::func_ov116_02296a10() {
    unk_13da = 0;
    unk_1394[0].func_0206fc44();
}

void Unk_ov116_02297378::func_ov116_022969a8() {
    func_ov114_02294e6c(&unk_f8);
    s32 a = func_ov116_0229699c();
    s32 b = func_ov116_02296990();
    unk_94.func_ov002_02202a40(a, b);
    s32 r = func_ov114_022950cc(&unk_f8);
    if (r != -1 || func_ov114_022950b4(&unk_f8) != 0) {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(0xd);
    } else {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(1);
    }
    func_ov116_022968d0();
}

s32 Unk_ov116_02297378::func_ov116_0229699c() {
    return func_ov114_02295150(&unk_f8);
}

s32 Unk_ov116_02297378::func_ov116_02296990() {
    return func_ov114_022950e8(&unk_f8);
}

void Unk_ov116_02297378::func_ov116_02296974() {
    ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202d00(0);
    unk_94.vfunc_0c();
}

void Unk_ov116_02297378::func_ov116_02296920() {
    s32 r = func_ov114_022950cc(&unk_f8);
    if (r != -1 || func_ov114_022950b4(&unk_f8) != 0) {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202be0();
    } else {
        ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202c40();
    }
    s32 a = func_ov116_0229699c();
    s32 b = func_ov116_02296990();
    func_ov116_022968ec(a, b);
}

void Unk_ov116_02297378::func_ov116_022968ec(s32 a, s32 b) {
    unk_94.func_ov002_022029e8(a, b, 3, 1);
    unk_13dc = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov116_02297378::func_ov116_022968d0() {
    unk_94.func_ov002_02202a78();
    unk_94.vfunc_0c();
}

void Unk_ov116_02297378::func_ov116_022968b8() {
    ((Unk_ov002_0220464c *)&unk_94)->func_ov002_02202b68();
    func_ov002_02200a58(4);
}

void Unk_ov116_02297378::func_ov116_02296890() {
    unk_94.func_ov002_02202af0();
    unk_13dc = unk_8d;
    func_ov002_02200a58(5);
}

BOOL Unk_ov116_02297378::func_ov116_02296878(u32 mask) {
    if (unk_13d8 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov116_02297378::func_ov116_02296868(u32 mask) {
    unk_13d8 |= mask;
}
