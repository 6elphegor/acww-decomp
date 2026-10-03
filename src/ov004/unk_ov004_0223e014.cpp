// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// ---- sub-object declarations (defined in src/main/unk_0208d154.cpp etc.) ----
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

class Unk_020e0ff0 : public UiWidget {
public:
    Unk_020e0ff0();
    virtual ~Unk_020e0ff0();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL func_0208d2d8();
    BOOL func_0208d2f0();
    void func_0208d308(void *p);
    void func_0208d314(s32 a, s32 b);
    void func_0208d31c();
    void func_0208d324(s32 a);

    /* 0x0c */ u8 unk_0c[0x74];
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);

    /* 0x0c */ u8 unk_0c[0x40];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();

    /* 0x00 */ u8 unk_00[0x1c];
};

class Unk_ov004_0224e2b8_Stub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void *vfunc_50();
};

struct Unk_ov004_0223e014_Zero {
    s32 x, y, z;
    Unk_ov004_0223e014_Zero() {}
    ~Unk_ov004_0223e014_Zero() {}
};

struct Unk_ov004_0223e10c_Pair {
    s32 a, b;
};

struct Unk_ov004_0223e2f4_G {
    u8 pad_00[0x68];
    s32 unk_68;
};

struct Unk_ov004_0223e2f4_Pad {
    u16 unk_00;
    u16 unk_02;
};

extern "C" {
extern u8 gScreenTransition;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern u8 gSaveData[];
extern u8 data_021d735c[];
extern Unk_ov004_0223e2f4_Pad gPad;
extern Unk_ov004_0223e2f4_G *gCommManager;
extern const Unk_ov004_0223e10c_Pair data_ov004_0224480c[];
extern const Unk_ov004_0223e10c_Pair data_ov004_022447e4;
extern const s32 data_ov004_022447dc[];
extern const s32 data_ov004_022447ec[];
#define data_ov004_022447f0 ((const s32 *)((const u8 *)data_ov004_022447ec + 4))
Unk_ov004_0224e2b8_Stub *func_ov004_0222a2c0();
void Snd_PlaySe(s32 a);

s32 func_020978c8(void *, s32);
u8 *func_020951ec(u32 id);
void *PlayerData_GetResident(void *a, s32 i);
void *_ZN10PlayerData11getPlayerIdEv(void *self);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *self, void *o);
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_020940d0 _ZN8PlayerId13func_020940d0EP9MsgString
void Camera_ProjectCurvedToScreen(s32 *a, s32 *b, void *c);
void func_02094018(void *p);
void func_02094030(void *);
s32 *func_020947f0(u32);
void PlayerActor_RequestAct6F(void *v, s32 a, s32 b);
void PlayerActor_RequestAct70(s32 a, u32 b);
BOOL func_020a0868(void);
void SaveManager_RequestAct03(void);
BOOL func_020e7500(void *p);
BOOL InputMode_IsTouch();
BOOL InputMode_IsButtons();
void InputMode_SetTouch(void);
void InputMode_SetButtons(void);
u8 *func_020b50b4();
s32 func_020b6080(u8 *obj, void *out, s32 *a, u8 *b);
void String_Load2d(void *o, u8 *p, u32 x);
void Clock_GetDateTime(void *p);
s32 DateTime_Compare(void *a, void *b, s32 n);
s32 _ZN8SaveData8testFlagEj(void *self, u32 i);
#define SaveData_testFlag _ZN8SaveData8testFlagEj
s32 _ZN10PlayerData13func_02098a48Ev(void *self);
#define func_02098a48 _ZN10PlayerData13func_02098a48Ev
s32 func_0206e838(void);
s32 func_0206e7f8(void);
s32 func_0206e820(void);
s32 func_0206e82c(void);
void func_0203d984(void);
void func_0203d990(void);
void func_ov004_02224ad8(u32 a, u32 b);
BOOL func_ov004_0222975c();
BOOL func_ov004_02229738();
void func_ov004_0223f43c(void *self);
}

class Unk_ov004_0224f20c;
typedef void (Unk_ov004_0224f20c::*Unk_ov004_0224f20c_Fn)();
struct Unk_ov004_0223e6bc_Ent {
    Unk_ov004_0224f20c_Fn enter;
    Unk_ov004_0224f20c_Fn exit;
};
extern Unk_ov004_0223e6bc_Ent data_ov004_02258854[];

extern "C" void func_ov004_0223e014(Unk_ov004_0224f20c *o);

static inline BOOL Unk_ov004_0223e2f4_IsMode2() {
    if (gScreenTransition == 2) {
        return TRUE;
    }
    return FALSE;
}

class Unk_ov004_0224f20c : public GameProc {
public:
    Unk_ov004_0224f20c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_ov004_0224f20c();

    void func_ov004_0223e10c();
    void func_ov004_0223e1e0();
    void func_ov004_0223e1e4();
    void func_ov004_0223e218();
    void func_ov004_0223e234();
    void func_ov004_0223e23c();
    void func_ov004_0223e260();
    void func_ov004_0223e280();
    void func_ov004_0223e2a4();
    void func_ov004_0223e2f4();
    void func_ov004_0223e554();
    void func_ov004_0223e580();
    void func_ov004_0223e638();
    void func_ov004_0223e664();
    void func_ov004_0223e690();
    void func_ov004_0223e6bc(s32 state);

    /* 0x050 */ HandCursor unk_50;
    /* 0x09c */ Unk_020e0ff0 unk_9c[5];
    /* 0x31c */ u8 unk_31c;
    /* 0x31d */ u8 unk_31d;
    /* 0x31e */ u8 pad_31e[2];
    /* 0x320 */ s32 unk_320;
    /* 0x324 */ u16 unk_324;
    /* 0x326 */ u8 pad_326[2];
    /* 0x328 */ s32 unk_328;
    /* 0x32c */ s32 unk_32c;
    /* 0x330 */ s32 unk_330;
    /* 0x334 */ s32 unk_334;
    /* 0x338 */ Unk_020e1c64 unk_338;
};

// scene registration entry (referenced from main by address only)
struct Unk_ov004_0224f194_Entry {
    void *(*factory)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov004_0224f20c *func_ov004_0223e9a0();
Unk_ov004_0224f194_Entry data_ov004_0224f194 = {(void *(*)())func_ov004_0223e9a0, 0xd3, 0xce};

// state table (enter, exit) filled by __sinit from the 14 member-function-pointer constants
#define M(n) &Unk_ov004_0224f20c::func_ov004_0223##n
Unk_ov004_0223e6bc_Ent data_ov004_02258854[7] = {
    {M(e690), M(e664)}, {M(e638), M(e580)}, {M(e554), M(e2f4)}, {M(e2a4), M(e280)},
    {M(e260), M(e23c)}, {M(e234), M(e218)}, {M(e1e4), M(e1e0)},
};
#undef M

static inline BOOL Unk_ov004_0223e2f4_Both47() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_0223e580_BothEf() {
    if (gTouchPrevHeld != 0 && gTouchPrevChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov004_0224f20c *func_ov004_0223e9a0() {
    return new Unk_ov004_0224f20c;
}

Unk_ov004_0224f20c::Unk_ov004_0224f20c() : unk_50(1), unk_328(0), unk_32c(0) {
}

Unk_ov004_0224f20c::~Unk_ov004_0224f20c() {
}

BOOL Unk_ov004_0224f20c::vfunc_00() {
    u8 *g;
    u8 c;
    u8 i;
    func_0203d990();
    g = gSaveData;
    for (i = 0; i < 4; i++) {
        void *o = PlayerData_GetResident(g + 0xc, i);
        if (o != 0 && func_02098a48(o) != 0) {
            unk_31c = i;
            break;
        }
    }
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d324(i);
    }
    c = 0x81;
    String_Load2d(&unk_338, &c, 0);
    if (SaveData_testFlag(g, 0) == 0) {
        func_ov004_0223e6bc(0);
    } else if (InputMode_IsButtons()) {
        func_ov004_0223e6bc(2);
    } else {
        func_ov004_0223e6bc(1);
    }
    unk_31d = 0;
    Clock_GetDateTime(&unk_328);
    return TRUE;
}

BOOL Unk_ov004_0224f20c::vfunc_0c() {
    func_0203d984();
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d31c();
    }
    if (func_0206e838()) {
        s32 l[2];
        func_0206e7f8();
        l[0] = 0;
        l[1] = 0;
        Clock_GetDateTime(l);
        if (DateTime_Compare(&unk_328, l, 0x3f) == -1) {
            func_0206e820();
        } else {
            func_0206e82c();
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224f20c::onExecute() {
    func_ov004_0223e014(this);
    func_ov004_0223e10c();
    if (*(u32 *)((u8 *)data_ov004_02258854 + 8 + unk_320 * 16) != 0) {
        (this->*data_ov004_02258854[unk_320].exit)();
    }
    return TRUE;
}

BOOL Unk_ov004_0224f20c::onDraw() {
    unk_50.draw();
    u8 i;
    for (i = 0; i < 5; i++) {
        Unk_020e0ff0 *e = &unk_9c[i];
        e->draw();
    }
    return TRUE;
}

void Unk_ov004_0224f20c::func_ov004_0223e6bc(s32 state) {
    if (data_ov004_02258854[state].enter) {
        (this->*data_ov004_02258854[state].enter)();
    }
    unk_320 = state;
}

void Unk_ov004_0224f20c::func_ov004_0223e690() {
    unk_50.setAnim(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2d8();
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e664() {
    if (!func_ov004_0222975c()) {
        if (InputMode_IsButtons()) {
            func_ov004_0223e6bc(2);
        } else {
            func_ov004_0223e6bc(1);
        }
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e638() {
    unk_50.setAnim(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2f0();
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e580() {
    u8 c;
    s32 a;
    s32 out[4];
    if (!Unk_ov004_0223e2f4_IsMode2()) {
        return;
    }
    if (InputMode_IsTouch() && Unk_ov004_0223e580_BothEf()) {
        if (func_020b6080(func_020b50b4(), out, &a, &c) && a == 1) {
            gCommManager->unk_68 = c;
            unk_31c = c;
            func_ov004_0223e6bc(3);
            return;
        }
    }
    if (func_ov004_0222975c()) {
        func_ov004_0223e6bc(0);
    } else if (gPad.unk_02 & 0xff3) {
        InputMode_SetButtons();
        func_ov004_0223e6bc(2);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e554() {
    unk_50.setAnim(7);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2f0();
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e2f4() {
    Unk_ov004_0223e2f4_G *g;
    u8 st;
    if (!Unk_ov004_0223e2f4_IsMode2()) {
        return;
    }
    g = gCommManager;
    if (g->unk_68 != 4) {
        func_ov004_0223e6bc(3);
        return;
    }
    if (func_ov004_0222975c()) {
        func_ov004_0223e6bc(0);
        return;
    }
    if (Unk_ov004_0223e2f4_Both47()) {
        InputMode_SetTouch();
        func_ov004_0223e6bc(1);
        return;
    }
    if (unk_31d != 0) {
        u16 k = gPad.unk_02;
        if (k & 0x80) {
            unk_31d = 0;
            goto L500;
        }
        {
            u32 up = k & 0x10;
            if (up == 0 && (k & 0x20) == 0) {
                goto L500;
            }
            st = unk_31c;
            if (up != 0) {
                st = 1;
            } else if (k & 0x20) {
                st = 0;
            }
        }
        if (func_020951ec(st) == 0) {
            goto L500;
        }
        unk_31d = 0;
        unk_31c = st;
        goto L500;
    }
    st = unk_31c;
    switch (st) {
    case 0: {
        u16 k = gPad.unk_02;
        if (k & 0x10) {
            st = st + 1;
        } else if (k & 0x80) {
            st = st + 2;
            if (!func_020951ec(st)) {
                st = st + 1;
            }
        } else if (k & 0x40) {
            unk_31d = 1;
        }
        break;
    }
    case 1: {
        u16 k = gPad.unk_02;
        if (k & 0x20) {
            st = st - 1;
        } else if (k & 0x80) {
            st = st + 2;
            if (!func_020951ec(st)) {
                st = st - 1;
            }
        } else if (k & 0x40) {
            unk_31d = 1;
        }
        break;
    }
    case 2: {
        u16 k = gPad.unk_02;
        if (k & 0x10) {
            st = st + 1;
        } else if (k & 0x40) {
            st = st - 2;
            if (!func_020951ec(st)) {
                st = st + 1;
                if (!func_020951ec(st)) {
                    unk_31d = 1;
                }
            }
        }
        break;
    }
    case 3: {
        u16 k = gPad.unk_02;
        if (k & 0x20) {
            st = st - 1;
        } else if (k & 0x40) {
            st = st - 2;
            if (!func_020951ec(st)) {
                st = st - 1;
                if (!func_020951ec(st)) {
                    unk_31d = 1;
                }
            }
        }
        break;
    }
    }
    if (func_020951ec(st) != 0) {
        unk_31c = st;
    }
L500:
    {
        u16 k = gPad.unk_02;
        if ((k & 8) || (k & 1)) {
            if (unk_31d != 0) {
                func_ov004_02229738();
            } else {
                g->unk_68 = unk_31c;
                func_ov004_0223e6bc(3);
            }
        }
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e2a4() {
    BOOL r = FALSE;
    u8 v = unk_31c;
    if (v == 0 || v == 2) {
        r = TRUE;
    }
    func_ov004_02224ad8(r, 1);
    unk_50.setAnim(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2d8();
    }
    unk_324 = 0x19;
}

void Unk_ov004_0224f20c::func_ov004_0223e280() {
    if (!func_020e7500(&unk_324)) {
        func_ov004_0223e6bc(4);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e260() {
    func_ov004_0223f43c(this);
    PlayerActor_RequestAct70(0, 4);
    unk_324 = 5;
}

void Unk_ov004_0224f20c::func_ov004_0223e23c() {
    if (!func_020e7500(&unk_324)) {
        func_ov004_0223e6bc(5);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e234() {
    SaveManager_RequestAct03();
}

void Unk_ov004_0224f20c::func_ov004_0223e218() {
    if (func_020a0868()) {
        func_ov004_0223e6bc(6);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e1e4() {
    s32 v[3];
    s32 *p = func_020947f0(4);
    v[0] = p[0];
    v[1] = p[1];
    v[2] = p[2];
    v[2] = v[2] + 0x6000;
    PlayerActor_RequestAct6F(v, 0x2b8, 4);
}

void Unk_ov004_0224f20c::func_ov004_0223e1e0() {
}

void Unk_ov004_0224f20c::func_ov004_0223e10c() {
    u8 i;
    for (i = 0; i < 4; i++) {
        if (func_020978c8(data_021d735c, i) != 0) {
            u8 *a = func_020951ec(i);
            if (a != 0) {
                s32 x, y;
                s32 v[3];
                s32 *pv = (s32 *)(a + 0x5c);
                v[0] = *(s32 *)(a + 0x5c);
                v[1] = pv[1];
                v[2] = pv[2];
                Unk_020e1c64 o;
                func_020940d0(PlayerData_getPlayerId(PlayerData_GetResident(data_021d735c, i)), &o);
                Camera_ProjectCurvedToScreen(&x, &y, v);
                x += data_ov004_0224480c[i].a;
                y += data_ov004_0224480c[i].b;
                Unk_020e0ff0 *e = &unk_9c[i];
                e->func_0208d314(x, y);
                e->func_0208d308(&o);
                e->vfunc_0c();
            }
        }
    }
    unk_9c[4].func_0208d314(data_ov004_022447e4.a, data_ov004_022447e4.b);
    unk_9c[4].func_0208d308(&unk_338);
    Unk_020e0ff0 *e4 = &unk_9c[4];
    e4->vfunc_0c();
}

extern "C" void func_ov004_0223e014(Unk_ov004_0224f20c *o) {
    Unk_ov004_0223e014_Zero z;
    s32 xy[2];
    void *pp;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    if (o->unk_31d != 0) {
        pp = func_ov004_0222a2c0()->vfunc_50();
    } else {
        pp = (u8 *)func_020951ec(o->unk_31c) + 0x5c;
    }
    Camera_ProjectCurvedToScreen(&xy[0], &xy[1], pp);
    if (o->unk_31d == 0) {
        xy[0] = xy[0] + data_ov004_022447ec[o->unk_31c * 2];
        xy[1] = xy[1] + data_ov004_022447f0[o->unk_31c * 2];
    } else {
        xy[0] = xy[0] + data_ov004_022447dc[0];
        xy[1] = xy[1] + data_ov004_022447dc[1];
    }
    BOOL t;
    if (gScreenTransition == 2) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) {
        if (o->unk_320 == 2) {
            if (o->unk_330 != xy[0] || o->unk_334 != xy[1]) {
                Snd_PlaySe(0xb);
            }
        }
    }
    o->unk_50.setPos(xy[0], xy[1]);
    o->unk_50.vfunc_0c();
    o->unk_330 = xy[0];
    o->unk_334 = xy[1];
}

// ---- rodata (defined after the functions so that the compiler cannot fold the loads) ----
const s32 data_ov004_022447dc[2] = {-6, -14};
const s32 data_ov004_022447ec[8] = {-15, -12, -8, -12, -19, -14, -11, -14};
const Unk_ov004_0223e10c_Pair data_ov004_022447e4 = {15, -92};
const Unk_ov004_0223e10c_Pair data_ov004_0224480c[4] = {{-5, -5}, {5, -5}, {-5, 0}, {5, 0}};
