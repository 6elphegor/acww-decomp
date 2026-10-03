// ov113: scene overlay (class Unk_ov113_02293640, vtable 0x02293640, 0x29cc bytes).
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class Unk_ov113_02293640;

extern "C" {
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern void *gCurrentHeap;
extern u8 data_021e87d8[];
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 data_ov113_022936a0[];
s32 Snd_PlaySe(s32 a);
u32 func_02076f78();
void *ProcBase_GetParent(...);
void ProcBase_RequestDelete(void *p);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void func_0206f9fc(void *o, u32 x);
void func_0206f994(void *dst, const void *s, s32 len);
void func_0206f920(void *dst, const void *s, s32 len, BOOL a, u32 b);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
void func_ov092_02291c5c();
void func_0200212c(s32 a);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020020b8(s32 a);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020015e0(u32 a);
void func_02002398(s32 a, s32 b);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
BOOL func_0206e61c();
void func_0206e63c();
s32 PlayerData_GetCurrentIndex();
u8 *func_02077374(void *p);
s32 func_0206cf4c(u8 *str, s32 *starts, s32 *cnt, s32 len, s32 maxw, s32 pxw, s32 maxLines);
void String_SetSlot(s32 a, void *buf);
s32 func_020026c4(void *, void *, u32, u32, u32, u32);
BOOL File_LoadToBuffer(void *a, void *b, s32 c);
BOOL func_020024f0(void *p, u32 a, u32 b, u32 c);
s32 func_0200261c(void *, void *, u32, u32, u32, u32);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void G2x_SetBlendBrightnessExt_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
Unk_ov113_02293640 *func_ov113_02293530();
}

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

class Unk_02077198 {
public:
    static void *func_02077278(s32 p);
};

class Unk_020772cc {
public:
    BOOL func_020772dc();
    void func_020772f0(s32 i);
    BOOL func_02077310(s32 i);
    u8 func_02077330();
    u8 func_02077338();
    u8 func_02077340();
};

// Text window, 0x40 bytes
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb04(u32 a, u32 b, u8 x, u8 y);
    void func_0206fc44();
    u8 unk_04[0x3c];
};

class MsgString {
public:
    void clear();
};

// Screen upload helper, 0x24 bytes
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual void vfunc_00();
    virtual void vfunc_04();
    void func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    void func_020b87d0();
    u8 unk_04[0x20];
};

class HandCursor {
public:
    virtual ~HandCursor();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL isAnimDone();
};

class Unk_ov002_02202d98 : public HandCursor {
public:
    void func_ov002_02202844();
    BOOL func_ov002_022028f0();
    s32 func_ov002_022028c8();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

// Same object as Unk_ov002_02202d98 under the name used by src/ov002/unk_02202b68.cpp
class Unk_ov002_0220464c : public HandCursor {
public:
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 a);
};

class Unk_ov002_02204630 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();
    u32 unk_04[0x60 / 4];
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
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200980();
    u32 func_ov002_022009c8();

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

typedef void (Unk_ov113_02293640::*Unk_ov113_02293640_Fn)();

struct Unk_ov113_SceneEntry {
    Unk_ov113_02293640 *(*factory)();
    u16 a;
    u16 b;
};

// Vtable 0x02293640, size 0x29cc
class Unk_ov113_02293640 : public Unk_ov002_022044e4 {
public:
    Unk_ov113_02293640() : unk_26a0(), unk_26e8(), unk_27e8(), unk_2968() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    BOOL func_ov113_02292004(void *pad);
    void func_ov113_0229226c();
    void func_ov113_0229228c();
    void func_ov113_022922ac();
    void func_ov113_022922cc();
    void func_ov113_02292340();
    s32 func_ov113_02292364();
    s32 func_ov113_02292384();
    s32 func_ov113_022923c8();
    void func_ov113_02292404();
    void func_ov113_02292440();
    BOOL func_ov113_02292464();
    void func_ov113_02292604(s32 flag);
    BOOL func_ov113_02292690();
    void func_ov113_02292744(u32 mask);
    void func_ov113_02292754(u32 mask);
    BOOL func_ov113_02292764(u32 mask);
    void func_ov113_02292778(s32 idx, s32 a, s32 b, s32 c, s32 d);
    void func_ov113_022927b0();
    void func_ov113_02292854(void *pad);
    void func_ov113_02292880(void *unused);
    void func_ov113_022928f8(s32 i);
    void func_ov113_0229297c(void *unused);
    void func_ov113_02292a5c(void *unused);
    void func_ov113_02292b38();
    void func_ov113_02292b54();
    void func_ov113_02292b6c();
    void func_ov113_02292b94();
    void func_ov113_02292be0();
    void func_ov113_02292c04();
    void func_ov113_02292cc0();
    void func_ov113_02292d10();
    void func_ov113_02292d78();
    void func_ov113_02292d9c();
    void func_ov113_02292ddc();
    void func_ov113_02292de4();
    void func_ov113_02292e48();
    void func_ov113_02292e50();
    void func_ov113_02292ec0();
    void func_ov113_02292ef0();
    void func_ov113_02292f50();
    void func_ov113_02292fdc();
    void func_ov113_0229300c();
    void func_ov113_022930a4();
    void func_ov113_022930f0();
    void func_ov113_02293120();
    void func_ov113_02293168();
    void func_ov113_02293198();
    void func_ov113_02293480(s32 a, s32 *p);

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u16 unk_98;
    /* 0x09a */ volatile u8 unk_9a;
    /* 0x09b */ volatile u8 unk_9b;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u16 unk_a0[0x400];
    /* 0x8a0 */ u8 unk_8a0[6][0x500];
    /* 0x26a0 */ Unk_020e45f8 unk_26a0[2];
    /* 0x26e8 */ Unk_020e0488 unk_26e8[4];
    /* 0x27e8 */ Unk_020e0488 unk_27e8[6];
    /* 0x2968 */ Unk_ov002_02204630 unk_2968;
};

static inline BOOL Unk_ov113_02292cc0_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov113_02293640 *func_ov113_02293530() { return new Unk_ov113_02293640(); }

BOOL Unk_ov113_02293640::vfunc_00() {
    G2x_SetBlendBrightnessExt_(0x4000050, 0x1f, 0x20, 0x10, 0x10, 0);
    func_ov113_02292ec0();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)ProcBase_GetParent())->func_ov092_02291c5c();
    func_ov113_02292e50();
    return TRUE;
}

void Unk_ov113_02293640::func_ov113_02293480(s32 a, s32 *p) {
    u8 i;
    s32 z = 0;
    for (i = 0; i < unk_9d; i++) {
        func_02088730(z, (void *)(data_ov113_022936a0 + (i + 8) * 8), a, (s32)p, i == unk_9a ? 11 : 10, 1, (s32 *)z);
    }
}

BOOL Unk_ov113_02293640::onDraw() {
    if (!func_ov113_02292764(8)) {
        return TRUE;
    }
    if (MenuCtrl_IsButtons()) {
        unk_2968.func_ov002_02202844();
    }
    s32 x = 0x80;
    s32 y = unk_94 + 0x60;
    s32 p0 = 10;
    s32 p1 = 10;
    if (func_ov113_02292764(2)) {
        p0 = 11;
    } else if (func_ov113_02292764(4)) {
        p1 = 11;
    }
    Oam_DrawCell(0, (void *)data_ov113_022936a0, 0x80, y, p0, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(0, (void *)(data_ov113_022936a0 + 0x20), 0x80, y, p1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    x += unk_9e;
    if (func_ov113_02292764(0x100)) {
        x += func_ov002_02200914();
    }
    func_ov113_02293480(x, (s32 *)y);
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov113_SceneEntry data_ov113_022935c8;
extern "C" u8 data_ov113_022936a0[0xb8];

extern "C" Unk_ov113_SceneEntry data_ov113_022935c8 = {func_ov113_02293530, 0xa7, 0xab};

extern "C" u8 data_ov113_022936a0[0xb8] = {0xf0,0x00,0x66,0x40,0xc0,0xb1,0x00,0x00,0xf0,0x80,0x76,0x00,0xc2,0xb1,0x00,0x00,0x00,0x00,0x66,0x60,0xc0,0xb1,0x00,0x00,0x00,0x80,0x76,0x20,0xc2,0xb1,0xff,0xff,
0xf0,0x00,0x8a,0x51,0xc0,0xa1,0x00,0x00,0xf0,0x80,0x82,0x11,0xc2,0xa1,0x00,0x00,0x00,0x00,0x8a,0x71,0xc0,0xa1,0x00,0x00,0x00,0x80,0x82,0x31,0xc2,0xa1,0xff,0xff,0x38,0x00,0xc4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xcc,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xd4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xdc,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xe4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xec,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xf4,0x01,0xe3,0xa1,0x00,0x00,0x38,0x00,0xfc,0x01,0xe3,0xb1,0x00,0x00,0x38,0x00,0x04,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x0c,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x14,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x1c,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x24,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x2c,0x00,0xe3,0xa1,0x00,0x00,0x38,0x00,0x34,0x00,0xe3,0xa1,0xff,0xff};

BOOL Unk_ov113_02293640::vfunc_4c() {
    static Unk_ov113_02293640_Fn tbl[9] = {
        &Unk_ov113_02293640::func_ov113_02293198,
        &Unk_ov113_02293640::func_ov113_02293168,
        &Unk_ov113_02293640::func_ov113_02293120,
        &Unk_ov113_02293640::func_ov113_022930f0,
        &Unk_ov113_02293640::func_ov113_022930a4,
        &Unk_ov113_02293640::func_ov113_0229300c,
        &Unk_ov113_02293640::func_ov113_02292fdc,
        &Unk_ov113_02293640::func_ov113_02292f50,
        &Unk_ov113_02293640::func_ov113_02292ef0};
    func_ov113_02292de4();
    (this->*tbl[unk_8c])();
    func_ov113_02292d9c();
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        if (unk_8d == 0) goto st;
        if (unk_8d == 1) {
        st:
            unk_9b = 3;
            func_ov113_02292340();
            func_ov113_02292464();
            return TRUE;
        }
    }
    func_ov113_02292e48();
    static Unk_ov113_02293640_Fn tbl[5] = {
        &Unk_ov113_02293640::func_ov113_02292cc0,
        &Unk_ov113_02293640::func_ov113_02292c04,
        &Unk_ov113_02293640::func_ov113_02292be0,
        &Unk_ov113_02293640::func_ov113_02292b94,
        &Unk_ov113_02293640::func_ov113_02292b6c};
    (this->*tbl[unk_8d])();
    func_ov113_02292ddc();
    return TRUE;
}

BOOL Unk_ov113_02293640::vfunc_54() { return TRUE; }

BOOL Unk_ov113_02293640::vfunc_58() { return TRUE; }

BOOL Unk_ov113_02293640::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void Unk_ov113_02293640::func_ov113_02293198() {
    func_ov113_02292d78();
    func_ov113_02292d10();
    func_ov002_022008a8(8, 6, 0, 0x30);
    func_020020b8(2);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(1);
    func_ov113_022927b0();
}

void Unk_ov113_02293640::func_ov113_02293168() {
    func_ov002_02200a50(2);
    func_ov113_02292854((void *)unk_9a);
    unk_94 = func_ov002_02200920();
    func_ov113_02292754(8);
}

void Unk_ov113_02293640::func_ov113_02293120() {
    if (func_ov002_02200908(1)) {
        func_ov002_02200a60(2);
        if (MenuCtrl_IsTouch()) {
            func_ov113_02292b54();
        } else {
            func_ov113_02292b38();
        }
    }
    func_ov002_02200840(2, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov113_02293640::func_ov113_022930f0() {
    func_ov002_0220088c(8, 0, 0, 0x30);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(4);
}

void Unk_ov113_02293640::func_ov113_022930a4() {
    if (func_ov002_022008fc(1)) {
        func_0200212c(2);
        func_020021fc(2, 0, 0);
        func_ov002_02200a60(5);
        func_ov113_02292744(8);
    } else {
        func_ov002_02200840(2, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov113_02293640::func_ov113_0229300c() {
    s32 m;
    func_ov113_02292754(0x100);
    switch (unk_9b) {
    case 1:
    case 4:
        m = 2;
        break;
    case 0:
    case 5:
        m = 3;
        break;
    default:
        if (func_ov113_02292764(0x40)) {
            m = 2;
        } else {
            m = 3;
        }
        break;
    }
    switch (unk_9b) {
    case 0:
    case 1:
        Snd_PlaySe(0x3c);
        break;
    default:
        Snd_PlaySe(0x39);
        break;
    }
    func_ov002_0220088c(8, 0, m, 0x30);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(6);
}

void Unk_ov113_02293640::func_ov113_02292fdc() {
    if (func_ov002_022008fc(1)) {
        func_0200212c(2);
        func_ov002_02200a50(7);
    } else {
        func_ov002_02200840(2, 0, 0);
    }
}

void Unk_ov113_02293640::func_ov113_02292f50() {
    s32 m;
    switch (unk_9b) {
    case 1:
        func_ov113_02292604(0);
    case 4:
        m = 3;
        break;
    case 0:
        func_ov113_02292604(0);
    case 5:
        m = 2;
        break;
    default:
        if (func_ov113_02292764(0x40) == 0) {
            m = 2;
        } else {
            m = 3;
        }
        break;
    }
    func_ov002_022008a8(8, 6, m, 0x30);
    func_020020b8(2);
    func_ov002_02200840(2, 0, 0);
    func_ov002_02200a50(8);
    func_ov113_02292854((void *)unk_9a);
}

void Unk_ov113_02293640::func_ov113_02292ef0() {
    if (func_ov002_02200908(1)) {
        func_ov002_02200a60(2);
        func_ov113_02292604(0);
        if (MenuCtrl_IsTouch()) {
            func_ov113_02292b54();
        } else {
            func_ov002_02200980();
            func_ov002_02200a58(1);
            func_ov113_02292744(0x100);
            func_ov113_02292404();
        }
    }
    func_ov002_02200840(2, 0, 0);
}

void Unk_ov113_02293640::func_ov113_02292ec0() {
    unk_94 = 0;
    unk_98 = 0;
    unk_9b = 3;
    func_ov113_02292440();
    unk_9a = unk_9d - 1;
}

void Unk_ov113_02293640::func_ov113_02292e50() {
    unk_26a0[0].func_020b87d0();
    unk_26a0[1].func_020b87d0();
    unk_26e8[0].func_0206fc44();
    unk_26e8[1].func_0206fc44();
    unk_26e8[2].func_0206fc44();
    unk_26e8[3].func_0206fc44();
    for (s32 i = 0; i < 6; i++) {
        unk_27e8[i].func_0206fc44();
    }
}

void Unk_ov113_02293640::func_ov113_02292e48() { func_ov113_02292de4(); }

void Unk_ov113_02293640::func_ov113_02292de4() {
    unk_2968.vfunc_0c();
    unk_26e8[0].func_0206fc44();
    unk_26e8[1].func_0206fc44();
    unk_26e8[2].func_0206fc44();
    unk_26e8[3].func_0206fc44();
    for (s32 i = 0; i < 6; i++) {
        unk_27e8[i].func_0206fc44();
    }
}

void Unk_ov113_02293640::func_ov113_02292ddc() { func_ov113_02292d9c(); }

void Unk_ov113_02293640::func_ov113_02292d9c() {
    if (func_ov113_02292764(1)) {
        if (unk_26a0[1].func_020b86c0((u32)unk_a0, 2, 0x800, 0)) {
            func_ov113_02292744(1);
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292d78() {
    func_020015e0(0);
    func_02002398(2, 1);
    func_0200226c(2, 0, 0, 0);
}

void Unk_ov113_02293640::func_ov113_02292d10() {
    void *h = gCurrentHeap;
    func_020026c4((void *)"menu/bbs/b_bbs.bpl", h, 2, 8, 8, 0xe);
    File_LoadToBuffer((void *)"menu/bbs/b_bbs_us.bsc", unk_a0, 0x800);
    func_020024f0(unk_a0, 2, 0x800, 0);
    func_0200261c((void *)"menu/bbs/b_bbs.bch", h, 2, 0x10, 0x10, 0x13f);
}

void Unk_ov113_02293640::func_ov113_02292cc0() {
    if (func_ov002_02200a14(1)) {
        func_ov113_02292b38();
    } else if (Unk_ov113_02292cc0_Both()) {
        if (func_ov113_02292690()) {
            func_ov113_02292464();
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292c04() {
    if (func_ov002_022009d4()) {
        func_ov113_02292b54();
    } else if (func_ov113_02292004((void *)func_ov002_022009c8())) {
        func_ov113_022922cc();
    } else {
        u16 v = gPad[1];
        if ((v & 1) != 0) {
            func_ov113_022922ac();
        } else if ((v & 2) != 0) {
            unk_9b = 3;
            func_ov113_02292340();
            func_ov113_02292464();
        } else if ((v & 0x200) != 0) {
            unk_9b = 5;
            if (func_ov113_02292464()) {
                func_ov113_02292340();
            }
        } else if ((v & 0x100) != 0) {
            unk_9b = 4;
            if (func_ov113_02292464()) {
                func_ov113_02292340();
            }
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292be0() {
    if (!unk_2968.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_9c);
    }
}

void Unk_ov113_02293640::func_ov113_02292b94() {
    if (unk_2968.isAnimDone()) {
        if (func_ov113_02292464()) {
            if ((u8)(unk_9b + 0xfe) <= 1) {
                func_ov113_02292340();
            } else {
                unk_2968.func_ov002_02202af0();
            }
        } else {
            func_ov113_0229228c();
        }
    }
}

void Unk_ov113_02293640::func_ov113_02292b6c() {
    if (unk_2968.isAnimDone()) {
        func_ov113_0229226c();
        func_ov002_02200a58(1);
    }
}

void Unk_ov113_02293640::func_ov113_02292b54() {
    func_ov113_02292340();
    func_ov002_02200a58(0);
}

void Unk_ov113_02293640::func_ov113_02292b38() {
    func_ov113_02292404();
    func_ov002_02200980();
    func_ov002_02200a58(1);
}

void Unk_ov113_02293640::func_ov113_02292a5c(void *unused) {
    void *p = Unk_02077198::func_02077278((s32)data_021e87d8);
    s32 starts[7];
    s32 cnt;
    s32 i;
    s32 z1 = 0;
    s32 z2 = 0;
    func_0206cf4c(func_02077374(p), starts, &cnt, 0xc0, 0x28, 0x96, 6);
    for (i = 0; i < 6; i++) {
        s32 len = starts[i + 1] - starts[i];
        Unk_020e0488 *o = &unk_27e8[i];
        ((MsgString *)o)->clear();
        if (len != 0) {
            func_0206f920(o, func_02077374(p) + starts[i], len, z1, z1);
        }
    }
    for (i = 0; i < 6; i++) {
        Unk_020e0488 *o = &unk_27e8[i];
        o->func_0206fb04((u32)unk_8a0[i], 0x14, 0xe, 0xd);
        o->func_0206fab4(z2, z2);
    }
    unk_26a0[0].func_020b8714((u32)unk_8a0, 2, 0x11, 0x11, 0x100);
}

void Unk_ov113_02293640::func_ov113_0229297c(void *unused) {
    Unk_020772cc *p = (Unk_020772cc *)Unk_02077198::func_02077278((s32)data_021e87d8);
    u8 buf[8];
    buf[0] = 0x37;
    buf[1] = 0x35;
    buf[2] = p->func_02077330() / 10 + 0x35;
    buf[3] = p->func_02077330() % 10 + 0x35;
    buf[4] = 0;
    func_0206f994(&unk_26e8[0], buf, 5);
    func_ov113_02292778(0, 0x111, 4, 0, 1);
    buf[0] = p->func_02077338() / 10 + 0x35;
    buf[1] = p->func_02077338() % 10 + 0x35;
    buf[2] = p->func_02077340() / 10 + 0x35;
    buf[3] = p->func_02077340() % 10 + 0x35;
    func_0206f994(&unk_26e8[1], buf, 5);
    func_ov113_02292778(1, 0x116, 4, 0, 1);
}

void Unk_ov113_02293640::func_ov113_022928f8(s32 i) {
    u8 buf[4];
    if (i + 1 >= 10) {
        buf[0] = (i + 1) / 10 + 0x35;
        buf[1] = (i + 1) % 10 + 0x35;
        buf[2] = 0;
    } else {
        buf[0] = i + 0x36;
        buf[1] = 0;
    }
    Unk_020e0488 str;
    func_0206f994(&str, buf, 3);
    String_SetSlot(0, &str);
    func_0206f9fc(&unk_26e8[2], 0x86);
    func_ov113_02292778(2, 0x11a, 5, 1, 0);
}

void Unk_ov113_02293640::func_ov113_02292880(void *unused) {
    Unk_020772cc *p = (Unk_020772cc *)Unk_02077198::func_02077278((s32)data_021e87d8);
    s32 n = PlayerData_GetCurrentIndex();
    s32 m;
    if (p->func_02077310(n)) {
        m = 8;
    } else {
        m = 0xa;
    }
    func_0206ee80(unk_a0, 0x10, 0, 0x12, 3, m);
    if (p->func_020772dc()) {
        m = 0xa;
    } else {
        m = 8;
    }
    func_0206ee80(unk_a0, 6, 5, 0x19, 6, m);
    func_ov113_02292754(1);
    p->func_020772f0(n);
}

void Unk_ov113_02293640::func_ov113_02292854(void *pad) {
    func_ov113_0229297c(pad);
    func_ov113_022928f8((s32)pad);
    func_ov113_02292a5c(pad);
    func_ov113_02292880(pad);
}

void Unk_ov113_02293640::func_ov113_022927b0() {
    func_0206f9fc(&unk_26e8[0], 0x83);
    func_ov113_02292778(0, 0x101, 4, 1, 0);
    func_0206f9fc(&unk_26e8[1], 0x82);
    func_ov113_02292778(1, 0x105, 4, 1, 0);
    func_0206f9fc(&unk_26e8[2], 0x84);
    func_ov113_02292778(2, 0x109, 4, 1, 0);
    func_0206f9fc(&unk_26e8[3], 0x88);
    func_ov113_02292778(3, 0x10d, 4, 1, 0);
}

void Unk_ov113_02293640::func_ov113_02292778(s32 idx, s32 a, s32 b, s32 c, s32 d) {
    Unk_020e0488 *o = &unk_26e8[idx];
    o->func_0206fb48(2, a, b, 0xf, 0xa, d);
    o->func_0206fab4(c, 0);
}

BOOL Unk_ov113_02293640::func_ov113_02292764(u32 mask) {
    if (unk_98 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_02292754(u32 mask) { unk_98 = unk_98 | mask; }

void Unk_ov113_02293640::func_ov113_02292744(u32 mask) { unk_98 = unk_98 & ~mask; }

BOOL Unk_ov113_02293640::func_ov113_02292690() {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    if (y >= 0x54 && y <= 0x70) {
        if (x <= 0x18) {
            unk_9b = 5;
            return TRUE;
        }
        if (x < 0xe8) {
            goto fail;
        }
        unk_9b = 4;
        return TRUE;
    }
    if (y >= 0xa4 && y <= 0xb4) {
        if (x < 0x20) {
            return FALSE;
        }
        if (x < 0x50) {
            unk_9b = 0;
            return TRUE;
        }
        if (x < 0x80) {
            unk_9b = 1;
            return TRUE;
        }
        if (x < 0xb0) {
            unk_9b = 2;
            return TRUE;
        }
        if (x >= 0xe0) {
            goto fail;
        }
        unk_9b = 3;
        return TRUE;
    }
    if (y >= 0x92 && y <= 0x9e) {
        s32 t = unk_9e + 0x44;
        if (x < t) {
            goto fail;
        }
        u32 idx = (u32)((x - t) << 21) >> 24;
        if (idx >= unk_9d) {
            return FALSE;
        }
        unk_9b = idx + 6;
        return TRUE;
    }
fail:
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_02292604(s32 flag) {
    u32 st = unk_9b;
    switch (st) {
    case 0:
    case 1:
    case 2:
    case 3: {
        s32 e = flag ? 0xe : 0xd;
        s32 x = st * 6 + 4;
        func_0206ee80(&unk_a0, x, 0x14, x + 5, 0x16, e);
        func_ov113_02292754(1);
        break;
    }
    default:
        if (st == 4) {
            if (flag) {
                func_ov113_02292754(2);
            } else {
                func_ov113_02292744(2);
            }
        } else {
            if (flag) {
                func_ov113_02292754(4);
            } else {
                func_ov113_02292744(4);
            }
        }
        break;
    }
}

BOOL Unk_ov113_02293640::func_ov113_02292464() {
    func_ov113_02292440();
    u32 st = unk_9b;
    switch (st) {
    case 2:
        Snd_PlaySe(0x29);
    case 3: {
        func_ov113_02292604(1);
        unk_8c = 3;
        func_ov002_02200a60(1);
        void *r = ProcBase_GetParent(this);
        if (unk_9b == 3) {
            ((Unk_ov092_02291ec8 *)r)->func_ov092_02291ce4(0x43, 0);
            Snd_PlaySe(0x12);
        } else {
            ((Unk_ov092_02291ec8 *)r)->func_ov092_02291ce4(1, 1);
        }
        return TRUE;
    }
    case 4:
        if (unk_9d > unk_9a + 1) {
            unk_9a = unk_9a + 1;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    case 5:
        if (unk_9a != 0) {
            unk_9a = unk_9a - 1;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    case 1: {
        s32 t = unk_9d - 1;
        if (unk_9a != t) {
            unk_9a = t;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    }
    case 0:
        if (unk_9a != 0) {
            unk_9a = 0;
            func_ov113_02292604(1);
            unk_8c = 5;
            func_ov002_02200a60(1);
            return TRUE;
        }
        break;
    }
    if (st >= 6 && st <= 0x14) {
        u8 idx = (u8)(st - 6);
        u32 cur = unk_9a;
        if (idx == cur) {
            return FALSE;
        }
        if (cur < idx) {
            func_ov113_02292754(0x40);
        } else {
            func_ov113_02292744(0x40);
        }
        unk_9a = idx;
        unk_8c = 5;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov113_02293640::func_ov113_02292440() {
    unk_9d = func_02076f78();
    unk_9e = (0xf - unk_9d) * 4;
}

void Unk_ov113_02293640::func_ov113_02292404() {
    s32 a = func_ov113_02292384();
    s32 b = func_ov113_02292364();
    unk_2968.func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_2968)->func_ov002_02202d00(1);
    func_ov113_0229226c();
}

s32 Unk_ov113_02293640::func_ov113_022923c8() {
    u32 st = unk_9b;
    if (st <= 3) {
        return st * 0x30 + 0x47;
    }
    if (st == 5) {
        return 0x10;
    }
    if (st == 4) {
        return 0xf0;
    }
    if (st <= 0x14) {
        return unk_9e + 0x48 + (st - 6) * 8;
    }
    return 0x80;
}

s32 Unk_ov113_02293640::func_ov113_02292384() {
    s32 r = func_ov113_022923c8();
    if (func_ov113_02292764(0x10)) {
        r -= 0x100;
    } else if (func_ov113_02292764(0x20)) {
        r += 0x100;
    }
    func_ov113_02292744(0x30);
    return r;
}

s32 Unk_ov113_02293640::func_ov113_02292364() {
    u32 st = unk_9b;
    if (st <= 3) {
        return 0xaa;
    }
    if (st <= 5) {
        return 0x56;
    }
    if (st <= 0x14) {
        return 0x98;
    }
    return 0x60;
}

void Unk_ov113_02293640::func_ov113_02292340() {
    ((Unk_ov002_0220464c *)&unk_2968)->func_ov002_02202d00(0);
    unk_2968.vfunc_0c();
}

void Unk_ov113_02293640::func_ov113_022922cc() {
    if (func_ov113_02292764(0x80)) {
        s32 a = func_ov113_02292384();
        s32 b = func_ov113_02292364();
        unk_2968.func_ov002_02202a40(a, b);
        func_ov113_02292744(0x80);
    } else {
        s32 a = func_ov113_02292384();
        s32 b = func_ov113_02292364();
        unk_2968.func_ov002_022029e8(a, b, 4, 1);
        unk_9c = unk_8d;
        func_ov002_02200a58(2);
    }
}

void Unk_ov113_02293640::func_ov113_022922ac() {
    ((Unk_ov002_0220464c *)&unk_2968)->func_ov002_02202b68();
    func_ov002_02200a58(3);
}

void Unk_ov113_02293640::func_ov113_0229228c() {
    unk_2968.func_ov002_02202af0();
    func_ov002_02200a58(4);
}

void Unk_ov113_02293640::func_ov113_0229226c() {
    unk_2968.func_ov002_02202a78();
    unk_2968.vfunc_0c();
}

BOOL Unk_ov113_02293640::func_ov113_02292004(void *pad) {
    u32 st = unk_9b;
    if (st <= 3) {
        if (func_ov002_0220126c(pad)) {
            if (unk_9b != 0) {
                unk_9b = unk_9b - 1;
            } else {
                unk_9b = 3;
                func_ov113_02292754(0x10);
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_9b < 3) {
                unk_9b = unk_9b + 1;
            } else {
                unk_9b = 0;
                func_ov113_02292754(0x20);
            }
        } else if (func_ov002_0220128c(pad)) {
            s32 t = unk_9e + 0x44;
            s32 v = unk_2968.func_ov002_022028c8() - t;
            if (v < 0) {
                v = 0;
            }
            s32 i = v >> 3;
            s32 n = unk_9d;
            if (i >= n) {
                i = n - 1;
            }
            unk_9b = i + 6;
        }
    } else if (st == 5) {
        if (func_ov002_0220127c(pad)) {
            unk_9b = 6;
        } else if (func_ov002_0220126c(pad)) {
            unk_9b = 4;
            func_ov113_02292754(0x10);
        } else if (func_ov002_0220125c(pad)) {
            unk_9b = 4;
        }
    } else if (st == 4) {
        if (func_ov002_0220127c(pad)) {
            unk_9b = unk_9d + 5;
        } else if (func_ov002_0220126c(pad)) {
            unk_9b = 5;
        } else if (func_ov002_0220125c(pad)) {
            unk_9b = 5;
            func_ov113_02292754(0x20);
        }
    } else if (st <= 0x14) {
        if (func_ov002_0220128c(pad)) {
            if (func_ov002_0220125c(pad) != 0 || (unk_2968.func_ov002_022028c8() > 0x80 && func_ov002_0220126c(pad) == 0)) {
                unk_9b = 4;
            } else {
                unk_9b = 5;
            }
        } else if (func_ov002_0220127c(pad)) {
            if (func_ov002_0220125c(pad) != 0 || (unk_2968.func_ov002_022028c8() > 0x80 && func_ov002_0220126c(pad) == 0)) {
                unk_9b = 2;
            } else {
                unk_9b = 1;
            }
        } else if (func_ov002_0220126c(pad)) {
            if (unk_9b > 6) {
                unk_9b = unk_9b - 1;
                func_ov113_02292754(0x80);
                Snd_PlaySe(0xb);
            } else {
                unk_9b = 5;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_9b + 1 < unk_9d + 6) {
                unk_9b = unk_9b + 1;
                func_ov113_02292754(0x80);
                Snd_PlaySe(0xb);
            } else {
                unk_9b = 4;
            }
        }
    }
    if (unk_9b != st) {
        return TRUE;
    }
    return FALSE;
}
