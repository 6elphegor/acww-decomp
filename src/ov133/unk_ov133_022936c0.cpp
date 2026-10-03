// mwcc-flags: -str reuse
#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
extern const u8 data_ov133_0229513c[12];
extern const u32 data_ov133_02295148[3];
extern const u8 data_ov133_02295154[12];
extern const s32 data_ov133_02295160[12];
extern const u32 data_ov133_02295190[12];
extern const s32 data_ov133_022951c0[12];
extern u16 data_ov133_022952a0[10];
extern u32 data_ov133_02295230[2];
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 data_021edb68;
extern u16 gPad[];

void func_0206ee80(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void Snd_PlaySe(s32 v);
void Snd_PlayKeySe(u32 a);
void *func_02076cf0(void *p);
BOOL func_02076e38(void *a, u8 *buf);
void *PlayerData_GetCurrent();
void *func_02076c80(void *p);
void func_02076f1c(void *p);
BOOL func_02076e88(void *out, u8 *data, void *ctx);
void func_0206ecf8(u32 v);
s32 func_0206ed50();
void func_02076cf4(void *p);
void func_ov094_0229277c();
s32 func_0206e5cc();
s32 func_020eaf18();
s32 func_0206ed38();
u32 func_02076e1c(void *p);
BOOL func_020e9c78(u32 a, u32 b);
void *ProcBase_GetParent();
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220128c(u32 v);
BOOL func_ov002_0220127c(u32 v);
u64 func_02076c94(void *p);
void *func_02076db4(void *p);
BOOL func_02076f04(void *p);
BOOL func_02076f28(u32 a, void *p);
BOOL MenuCtrl_IsTouch();
BOOL MenuCtrl_IsButtons();
void ProcBase_RequestDelete(void *p);
void func_0206f9fc(void *p, s32 a);
void File_LoadToBuffer(void *a, void *b, s32 c);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void Snd_SetKeySeMode(s32 a);
BOOL func_0206e61c();
void func_0206e63c();
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_ov130_02292db8(s32 a);
void func_ov130_0229304c(s32 a);
void func_ov130_022929d4(s32 a);
void func_ov002_02203920(void *self);
void _ZN18Unk_ov133_022952bc19func_ov133_02294614Ev();
extern void *data_ov133_02295200[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294c64Ev();
extern void *data_ov133_02295208[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294cb0Ev();
extern void *data_ov133_02295210[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294c10Ev();
extern void *data_ov133_02295218[2];
void _ZN18Unk_ov133_022952bc19func_ov133_022947b0Ev();
extern void *data_ov133_02295220[2];
void _ZN18Unk_ov133_022952bc19func_ov133_0229478cEv();
extern void *data_ov133_02295228[2];
void _ZN18Unk_ov133_022952bc19func_ov133_022945dcEv();
extern void *data_ov133_02295238[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294cf4Ev();
extern void *data_ov133_02295240[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294638Ev();
extern void *data_ov133_02295248[2];
void _ZN18Unk_ov133_022952bc19func_ov133_022946a4Ev();
extern void *data_ov133_02295250[2];
void _ZN18Unk_ov133_022952bc19func_ov133_022946e8Ev();
extern void *data_ov133_02295258[2];
void _ZN18Unk_ov133_022952bc19func_ov133_0229474cEv();
extern void *data_ov133_02295260[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294d50Ev();
extern void *data_ov133_02295270[2];
void _ZN18Unk_ov133_022952bc19func_ov133_022947e0Ev();
extern void *data_ov133_02295278[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294808Ev();
extern void *data_ov133_02295280[2];
void _ZN18Unk_ov133_022952bc19func_ov133_022948dcEv();
extern void *data_ov133_02295288[2];
void _ZN18Unk_ov133_022952bc19func_ov133_0229490cEv();
extern void *data_ov133_02295290[2];
void _ZN18Unk_ov133_022952bc19func_ov133_02294940Ev();
extern void *data_ov133_02295298[2];
}

struct Unk_020cbb18 {
    s32 func_02072e88(s32 v);
    u8 pad_00[0x64];
    s32 unk_64;
};

class PlayerData {
public:
    void *getFriendList();
    void *getWifiUserData();
    void *getPlayerId();
};

class PlayerId {
public:
    s32 getGender();
};

class Unk_ov090_022921e0 {
public:
    void func_ov090_02291964();
    void func_ov090_02291a90();
    s32 func_ov090_02291d2c();
    void func_ov090_02291d8c(u32 v);
};
extern "C" Unk_020cbb18 *data_020cbb18;

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
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
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

// Element at +0xb0, 0x40 bytes
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fc44();
    void func_0206fb9c(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void func_0206fab4(s32 a, s32 b);
    u8 unk_04[0x3c];
};

// Menu/message cursor buffer objects at +0x2b8 and +0x2dc (0x24 bytes each)
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    void func_020b87d0();
    u8 unk_04[0x20];
};

// Menu cursor sub-object hierarchy
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
    s32 func_ov002_0220288c();
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
    BOOL func_ov002_02202fac(s32 idx);
    void func_ov002_02202fc8(s32 idx);
    void func_ov002_02202fe4(s32 idx);
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

// Object at +0x1300 (0x108 bytes)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// Local object with empty out-of-line ctor/dtor (func_02076f74 / func_02076f70)
class Unk_02076f70 {
public:
    Unk_02076f70();
    ~Unk_02076f70();
    u32 v[3];
};

class Unk_ov133_022952bc;
typedef void (Unk_ov133_022952bc::*Unk_ov133_022952bc_Fn)();

// Vtable 0x022952bc, size 0x1408
class Unk_ov133_022952bc : public Unk_ov002_022044e4 {
public:
    Unk_ov133_022952bc() : unk_b0(), unk_f0(), unk_154(), unk_2b8(), unk_1300() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov133_02293760(u32 m);
    void func_ov133_02293770(u32 m);
    BOOL func_ov133_02293780(u32 m);
    void func_ov133_02293794(s32 idx);
    void func_ov133_022937b0(s32 idx);
    void func_ov133_022937bc(s32 idx, u32 to);
    void func_ov133_02293814();
    BOOL func_ov133_02293854();
    void func_ov133_02293884();
    BOOL func_ov133_0229388c();
    void func_ov133_022938cc();
    void func_ov133_02293988();
    void func_ov133_022939e4();
    s32 func_ov133_02293acc();
    BOOL func_ov133_02293ae8(u8 v);
    void func_ov133_02293b88();
    BOOL func_ov133_02293be0(s32 f);
    void func_ov133_02293c78();
    void func_ov133_02293ca4();
    void func_ov133_02293cdc(s32 x);
    void func_ov133_02293d18(u8 x);
    s32 func_ov133_02293d3c();
    BOOL func_ov133_02293d64(u32 key);
    BOOL func_ov133_02293dec(s32 a);
    s32 func_ov133_02293e48();
    void func_ov133_02293eac();
    void func_ov133_02293efc();
    BOOL func_ov133_0229405c();
    BOOL func_ov133_022940b4(u32 a);
    void *func_ov133_02294110();
    u32 func_ov133_02294138(s32 x, s32 y);
    BOOL func_ov133_0229418c(u32 keys);
    void func_ov133_02294330();
    void func_ov133_0229434c();
    void func_ov133_02294364();
    void func_ov133_02294390();
    void func_ov133_022943f4();
    s32 func_ov133_02294410();
    s32 func_ov133_02294460();
    void func_ov133_022944b8();
    void *func_ov133_0229450c();
    void func_ov133_02294538();
    void func_ov133_0229454c(u8 v, s32 b);
    void func_ov133_02294588();
    void func_ov133_022945a8();
    void func_ov133_022945c4();
    void func_ov133_022945dc();
    void func_ov133_02294614();
    void func_ov133_02294638();
    void func_ov133_022946a4();
    void func_ov133_022946e8();
    void func_ov133_0229474c();
    void func_ov133_0229478c();
    void func_ov133_022947b0();
    void func_ov133_022947e0();
    void func_ov133_02294808();
    void func_ov133_022948dc();
    void func_ov133_0229490c();
    void func_ov133_02294940();
    void func_ov133_02294a08();
    void func_ov133_02294a5c();
    void func_ov133_02294ab0();
    void func_ov133_02294ae4();
    void func_ov133_02294aec();
    void func_ov133_02294b04();
    void func_ov133_02294b0c();
    void func_ov133_02294b90();
    void func_ov133_02294bc4();
    void func_ov133_02294c10();
    void func_ov133_02294c64();
    void func_ov133_02294cb0();
    void func_ov133_02294cf4();
    void func_ov133_02294d50();
    BOOL func_ov133_02294d88(u32 v);
    void func_ov133_02294dd4();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u16 unk_98;
    /* 0x09a */ u8 unk_9a;
    /* 0x09b */ u8 unk_9b;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u8 unk_a0;
    /* 0x0a1 */ u8 unk_a1;
    /* 0x0a2 */ u8 unk_a2;
    /* 0x0a3 */ u8 unk_a3;
    /* 0x0a4 */ u8 unk_a4[12];
    /* 0x0b0 */ Unk_020e0488 unk_b0[1];
    /* 0x0f0 */ Unk_ov002_02204614 unk_f0;
    /* 0x154 */ Unk_ov002_022046cc unk_154;
    /* 0x2b8 */ Unk_020e45f8 unk_2b8[2];
    /* 0x300 */ u16 unk_300[0x400];
    /* 0xb00 */ u16 unk_b00[0x400];
    /* 0x1300 */ Unk_ov002_022040ec unk_1300;
};

struct Unk_ov133_SceneEntry {
    Unk_ov133_022952bc *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov133_022952bc *func_ov133_022950bc() { return new Unk_ov133_022952bc(); }

BOOL Unk_ov133_022952bc::vfunc_00() {
    func_ov133_02294bc4();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_0c() {
    Unk_ov090_022921e0 *p = (Unk_ov090_022921e0 *)ProcBase_GetParent();
    if (p->func_ov090_02291d2c() == 6) {
        p->func_ov090_02291a90();
    }
    func_ov133_02294b90();
    return TRUE;
}

BOOL Unk_ov133_022952bc::onDraw() {
    if (!func_ov133_02293780(1)) {
        return TRUE;
    }
    if (MenuCtrl_IsButtons()) {
        unk_f0.func_ov002_02202844();
    }
    unk_154.func_ov002_022036a4(unk_94);
    func_ov130_022929d4(unk_94);
    if (unk_a1 & 0x10) {
        Oam_DrawCell(1, data_ov133_02295230, (unk_9f << 4) + 0x20, unk_94 + 0x40, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" void *data_ov133_02295220[2];
extern "C" void *data_ov133_02295238[2];
extern "C" void *data_ov133_02295258[2];
extern "C" void *data_ov133_02295240[2];
extern "C" void *data_ov133_02295210[2];
extern "C" void *data_ov133_02295200[2];
extern "C" u16 data_ov133_022952a0[10];
extern "C" void *data_ov133_02295298[2];
extern "C" void *data_ov133_02295290[2];
extern "C" void *data_ov133_02295288[2];
extern "C" u32 data_ov133_02295230[2];
extern "C" void *data_ov133_02295278[2];
extern "C" const u32 data_ov133_02295148[3];
extern "C" const s32 data_ov133_022951c0[12];
extern "C" void *data_ov133_02295250[2];
extern "C" void *data_ov133_02295270[2];
extern "C" void *data_ov133_02295280[2];
extern "C" const u8 data_ov133_0229513c[12];
extern "C" void *data_ov133_02295208[2];
extern "C" const u8 data_ov133_02295154[12];
extern "C" void *data_ov133_02295260[2];
extern "C" const s32 data_ov133_02295160[12];
extern "C" void *data_ov133_02295248[2];
extern "C" const u32 data_ov133_02295190[12];
extern "C" void *data_ov133_02295228[2];
extern "C" void *data_ov133_02295218[2];
extern "C" Unk_ov133_SceneEntry data_ov133_02295268;

extern "C" void *data_ov133_02295220[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_022947b0Ev, 0};

extern "C" void *data_ov133_02295238[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_022945dcEv, 0};

extern "C" void *data_ov133_02295258[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_022946e8Ev, 0};

extern "C" void *data_ov133_02295240[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294cf4Ev, 0};

extern "C" void *data_ov133_02295210[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294cb0Ev, 0};

extern "C" void *data_ov133_02295200[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294614Ev, 0};

BOOL Unk_ov133_022952bc::vfunc_4c() {
    static Unk_ov133_022952bc_Fn tbl[5] = {
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295270,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295240,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295210,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295208,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295218};
    func_ov133_02294b0c();
    (this->*tbl[unk_8c])();
    func_ov133_02294b04();
    return TRUE;
}
extern "C" u16 data_ov133_022952a0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

extern "C" void *data_ov133_02295298[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294940Ev, 0};

extern "C" void *data_ov133_02295290[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_0229490cEv, 0};

extern "C" void *data_ov133_02295288[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_022948dcEv, 0};

extern "C" u32 data_ov133_02295230[2] = {0x000080f8, 0xffff5181};

extern "C" void *data_ov133_02295278[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_022947e0Ev, 0};

extern "C" const u32 data_ov133_02295148[3] = {9, 0xe, 0x12};

extern "C" const s32 data_ov133_022951c0[12] = {0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0};

void Unk_ov133_022952bc::func_ov133_02294dd4() {
    static Unk_ov133_022952bc_Fn tbl[13] = {
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295298,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295290,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295288,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295280,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295278,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295220,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295228,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295260,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295258,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295250,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295248,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295200,
        *(Unk_ov133_022952bc_Fn *)data_ov133_02295238};
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 7:
        case 8:
        case 9:
            func_ov133_022943f4();
            func_ov002_02200a50(3);
            func_ov133_02294d88(7);
            if (func_0206ed50() == 0xe) {
                func_02076cf4(func_ov133_02294110());
            }
            func_ov002_02200a60(1);
            break;
        case 4:
        case 5:
        case 6:
            break;
        }
    }
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov133_022952bc::vfunc_50() {
    func_ov133_02294aec();
    func_ov133_02294dd4();
    func_ov133_02294ae4();
    return TRUE;
}

BOOL Unk_ov133_022952bc::vfunc_54() { return TRUE; }

BOOL Unk_ov133_022952bc::vfunc_58() { return TRUE; }

BOOL Unk_ov133_022952bc::vfunc_5c() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL Unk_ov133_022952bc::func_ov133_02294d88(u32 v) {
    ((Unk_ov090_022921e0 *)ProcBase_GetParent())->func_ov090_02291d8c((u8)v);
    return TRUE;
}

void Unk_ov133_022952bc::func_ov133_02294d50() {
    func_ov133_02294ab0();
    func_ov133_02294a5c();
    func_ov133_02294a08();
    func_ov002_02200a50(1);
    unk_154.func_ov002_022034c4(0x65);
    func_ov133_02294cf4();
}

void Unk_ov133_022952bc::func_ov133_02294cf4() {
    func_ov002_022008e0(0xa, 0, 0, 0x30);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov133_02293770(1);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(2);
}

void Unk_ov133_022952bc::func_ov133_02294cb0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov133_02294588();
    }
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov133_022952bc::func_ov133_02294c64() {
    func_ov133_022943f4();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    unk_94 = func_ov002_02200920();
}

void Unk_ov133_022952bc::func_ov133_02294c10() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov133_02293760(1);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(6, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov133_022952bc::func_ov133_02294bc4() {
    unk_9a = 0;
    unk_98 = 0;
    unk_9c = 0xb;
    unk_9e = 0;
    unk_9d = 0;
    void *p = PlayerData_GetCurrent();
    if (p != 0) {
        if (((PlayerId *)((PlayerData *)p)->getPlayerId())->getGender() == 0) {
            Snd_SetKeySeMode(0);
            return;
        }
    }
    Snd_SetKeySeMode(1);
}

void Unk_ov133_022952bc::func_ov133_02294b90() {
    unk_2b8[0].func_020b87d0();
    unk_2b8[1].func_020b87d0();
    func_ov133_02294538();
    unk_154.func_ov002_02203900();
}

void Unk_ov133_022952bc::func_ov133_02294b0c() {
    unk_2b8[0].func_020b87d0();
    unk_2b8[1].func_020b87d0();
    func_ov133_02294538();
    unk_154.func_ov002_02203900();
    if (unk_9e != 0) {
        unk_9e = *(volatile u8 *)&unk_9e - 1;
        if (unk_9e == 0) {
            if (unk_9d != 0) {
                unk_9e = 1;
            } else {
                func_ov133_02293794(unk_a0);
            }
        }
    }
    unk_a1 = unk_a1 + 1;
}

void Unk_ov133_022952bc::func_ov133_02294b04() { func_ov133_022938cc(); }

void Unk_ov133_022952bc::func_ov133_02294aec() {
    func_ov133_02294b0c();
    unk_f0.vfunc_0c();
}

void Unk_ov133_022952bc::func_ov133_02294ae4() { func_ov133_02294b04(); }

void Unk_ov133_022952bc::func_ov133_02294ab0() {
    func_02002398(4, 2);
    func_02002398(6, 2);
    func_0200226c(4, 0, 0, 0);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov133_022952bc::func_ov133_02294a5c() {
    func_ov130_0229304c(4);
    File_LoadToBuffer((void *)"menu/bank/g0_bg.bsc", unk_b00, 0x800);
    File_LoadToBuffer((void *)"menu/bank/g1_bg.bsc", unk_300, 0x800);
    func_ov133_02293ca4();
    func_ov133_02293770(2);
    func_ov133_02293770(4);
}

void Unk_ov133_022952bc::func_ov133_02294a08() {
    func_ov130_02292db8(7);
    void *p = func_ov133_0229450c();
    func_0206f9fc(p, 0xd7);
    ((Unk_020e0488 *)p)->func_0206fb9c(8, 0x14c, 0xe, 0xf, 0, 0);
    ((Unk_020e0488 *)p)->func_0206fab4(1, 0);
    func_ov002_02203920(&unk_154);
}

void Unk_ov133_022952bc::func_ov133_02294940() {
    if (func_ov002_02200a14(1)) {
        func_ov133_022945a8();
    } else {
        BOOL ok;
        if (gTouchHeld != 0 && gTouchChanged != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
        if (ok) {
            if (unk_154.func_ov002_02202fac(6) == 0 && unk_154.func_ov002_02203110(6) != 0) {
                func_ov133_02293efc();
            } else if (unk_154.func_ov002_02203110(7)) {
                func_ov133_02293eac();
            } else {
                u32 r = func_ov133_02294138(gTouchCurX, gTouchCurY);
                if (r == 0xc) {
                    u32 t = func_ov133_02293d3c();
                    func_ov133_02293d18((u8)t);
                    func_ov002_02200a58(2);
                } else if (r != 0xf) {
                    if (func_ov133_0229388c()) {
                        func_ov002_02200a58(1);
                    }
                }
            }
        }
    }
}

void Unk_ov133_022952bc::func_ov133_0229490c() {
    if (gTouchHeld == 0) {
        func_ov133_02293884();
        func_ov002_02200a58(0);
    } else {
        if (func_ov133_02293854()) {
            func_ov133_02293dec(0);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022948dc() {
    if (gTouchHeld == 0) {
        func_ov002_02200a58(0);
    } else {
        u32 r = func_ov133_02293d3c();
        func_ov133_02293cdc((u8)r);
    }
}

void Unk_ov133_022952bc::func_ov133_02294808() {
    if (func_ov002_022009d4()) {
        func_ov133_022945c4();
    } else {
        u32 k = func_ov002_022009c8();
        if (func_ov133_0229418c(k)) {
            func_ov133_02294390();
        } else {
            u32 t = gPad[1];
            if (t & 1) {
                func_ov133_02294364();
            } else if (t & 2) {
                if (func_ov133_02293be0(0)) {
                    unk_9d = 0xd;
                    func_ov002_02200a58(8);
                    if (unk_9c == 0xc) {
                        s32 x = func_ov133_02294460();
                        s32 y = func_ov133_02294410();
                        unk_f0.func_ov002_02202a40(x, y);
                    }
                } else {
                    func_ov133_02293eac();
                    func_ov133_022943f4();
                }
            } else if (t & 8) {
                if (!unk_154.func_ov002_02202fac(6)) {
                    func_ov133_02293efc();
                    func_ov133_022943f4();
                }
            }
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022947e0() {
    if (!unk_f0.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_9b);
        func_ov133_02294dd4();
    }
}

void Unk_ov133_022952bc::func_ov133_022947b0() {
    if (unk_f0.isAnimDone()) {
        s32 r = func_ov133_02293e48();
        switch (r) {
        case 1:
            break;
        case 2:
            func_ov133_0229434c();
            break;
        default:
            func_ov133_0229434c();
            break;
        }
    }
}

void Unk_ov133_022952bc::func_ov133_0229478c() {
    if (unk_f0.isAnimDone()) {
        func_ov133_02294330();
        func_ov002_02200a58(3);
    }
}

void Unk_ov133_022952bc::func_ov133_0229474c() {
    if ((gPad[0] & 1) == 0) {
        func_ov133_02293884();
        func_ov002_02200a58(3);
        func_ov133_0229434c();
    } else {
        if (func_ov133_02293854()) {
            func_ov133_02293dec(0);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022946e8() {
    if ((gPad[0] & 2) == 0) {
        func_ov133_02293884();
        func_ov002_02200a58(3);
    } else {
        if (func_ov133_02293854()) {
            if (func_ov133_02293be0(1)) {
                if (unk_9c == 0xc) {
                    s32 x = func_ov133_02294460();
                    s32 y = func_ov133_02294410();
                    unk_f0.func_ov002_02202a40(x, y);
                }
            }
        }
    }
}

void Unk_ov133_022952bc::func_ov133_022946a4() {
    if ((gPad[0] & 1) == 0) {
        func_ov002_02200a58(3);
        func_ov133_0229434c();
    } else {
        u32 k = func_ov002_022009c8();
        if (func_ov133_02293d64(k)) {
            func_ov133_02293cdc(unk_9f);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_02294638() {
    if (unk_154.func_ov002_0220308c()) {
        if (unk_f0.getAnim()) {
            s32 a = unk_154.func_ov002_0220306c();
            s32 b = unk_154.func_ov002_022030f4(-1);
            s32 c = unk_154.func_ov002_022030b8(-1);
            unk_f0.func_ov002_02202a40(a + (b - 6), a + c);
        }
    } else {
        func_ov133_022943f4();
        func_ov002_02200a60(1);
    }
}

void Unk_ov133_022952bc::func_ov133_02294614() {
    if (unk_1300.func_ov002_02204234(1)) {
        func_ov133_02294588();
    }
}

void Unk_ov133_022952bc::func_ov133_022945dc() {
    void *r = func_ov133_02294110();
    s32 idx = func_0206ed38();
    u32 t = func_02076e1c(func_02076cf0(r));
    if (func_020e9c78((u8)idx, t)) {
        func_ov002_02200a58(10);
    }
}

void Unk_ov133_022952bc::func_ov133_022945c4() {
    func_ov133_022943f4();
    func_ov002_02200a58(0);
}

void Unk_ov133_022952bc::func_ov133_022945a8() {
    func_ov133_022944b8();
    func_ov002_02200980();
    func_ov002_02200a58(3);
}

void Unk_ov133_022952bc::func_ov133_02294588() {
    if (MenuCtrl_IsTouch()) {
        func_ov133_022945c4();
    } else {
        func_ov133_022945a8();
    }
}

void Unk_ov133_022952bc::func_ov133_0229454c(u8 v, s32 b) {
    u8 l;
    u8 *p = &l;
    *p = data_021edb68;
    *p = v;
    unk_1300.func_ov002_02204394(p, b, 0);
    func_ov002_02200a58(0xb);
    func_ov133_022943f4();
}

void Unk_ov133_022952bc::func_ov133_02294538() {
    unk_9a = 0;
    unk_b0[0].func_0206fc44();
}

void *Unk_ov133_022952bc::func_ov133_0229450c() {
    if ((*(volatile u8 *)&unk_9a) >= 1) {
        return &unk_b0;
    }
    (*(volatile u8 *)&unk_9a) = (*(volatile u8 *)&unk_9a) + 1;
    return (u8 *)&unk_b0 + ((*(volatile u8 *)&unk_9a) - 1) * 0x40;
}

void Unk_ov133_022952bc::func_ov133_022944b8() {
    s32 x = func_ov133_02294460();
    s32 y = func_ov133_02294410();
    unk_f0.func_ov002_02202a40(x, y);
    if ((u8)(unk_9c + 0xf3) <= 1) {
        ((Unk_ov002_0220464c *)&unk_f0)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&unk_f0)->func_ov002_02202d00(1);
    }
    func_ov133_02294330();
}

s32 Unk_ov133_022952bc::func_ov133_02294460() {
    u32 v = unk_9c;
    if (v <= 0xb) {
        return data_ov133_022951c0[v];
    }
    switch (v) {
    case 0xc:
        return (unk_9f << 4) + 0x20;
    case 0xd:
        return unk_154.func_ov002_022030f4(6);
    case 0xe:
        return unk_154.func_ov002_022030f4(7);
    default:
        return 0x80;
    }
}

s32 Unk_ov133_022952bc::func_ov133_02294410() {
    u32 v = unk_9c;
    if (v <= 0xb) {
        return data_ov133_02295160[v];
    }
    switch (v) {
    case 0xc:
        return 0x40;
    case 0xd:
        return unk_154.func_ov002_022030b8(6);
    case 0xe:
        return unk_154.func_ov002_022030b8(7);
    default:
        return 0x60;
    }
}

void Unk_ov133_022952bc::func_ov133_022943f4() {
    ((Unk_ov002_0220464c *)&unk_f0)->func_ov002_02202d00(0);
    unk_f0.vfunc_0c();
}

void Unk_ov133_022952bc::func_ov133_02294390() {
    if ((u8)(unk_9c + 0xf3) <= 1) {
        ((Unk_ov002_0220464c *)&unk_f0)->func_ov002_02202ca0();
    } else {
        ((Unk_ov002_0220464c *)&unk_f0)->func_ov002_02202c40();
    }
    s32 x = func_ov133_02294460();
    s32 y = func_ov133_02294410();
    unk_f0.func_ov002_022029e8(x, y, 3, 1);
    unk_9b = unk_8d;
    func_ov002_02200a58(4);
}

void Unk_ov133_022952bc::func_ov133_02294364() {
    if (unk_9c == 0xc) {
        func_ov002_02200a58(9);
    } else {
        ((Unk_ov002_0220464c *)&unk_f0)->func_ov002_02202b68();
        func_ov002_02200a58(5);
    }
}

void Unk_ov133_022952bc::func_ov133_0229434c() {
    unk_f0.func_ov002_02202af0();
    func_ov002_02200a58(6);
}

void Unk_ov133_022952bc::func_ov133_02294330() {
    unk_f0.func_ov002_02202a78();
    unk_f0.vfunc_0c();
}

BOOL Unk_ov133_022952bc::func_ov133_0229418c(u32 keys) {
    u32 old = unk_9c;
    if (keys == 0) {
        return FALSE;
    }
    if (old <= 0xb) {
        if (func_ov002_0220126c(keys)) {
            if ((s32)(*(volatile u8 *)&unk_9c) % 3 > 0) {
                (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) - 1;
            }
        } else if (func_ov002_0220125c(keys)) {
            if ((s32)(*(volatile u8 *)&unk_9c) % 3 < 2) {
                (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) + 1;
            } else {
                (*(volatile u8 *)&unk_9c) = 0xd;
            }
        }
        if ((*(volatile u8 *)&unk_9c) <= 0xb) {
            if (func_ov002_0220128c(keys)) {
                if ((*(volatile u8 *)&unk_9c) <= 2) {
                    (*(volatile u8 *)&unk_9c) = 0xc;
                } else {
                    (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) - 3;
                }
            } else if (func_ov002_0220127c(keys)) {
                u32 v = (*(volatile u8 *)&unk_9c);
                if (v < 9 || v > 0xb) {
                    (*(volatile u8 *)&unk_9c) = (*(volatile u8 *)&unk_9c) + 3;
                } else {
                    (*(volatile u8 *)&unk_9c) = 0xe;
                }
            }
        }
    } else if (old == 0xc) {
        if (func_ov002_0220127c(keys)) {
            s32 r = unk_f0.func_ov002_0220288c();
            if (r <= 0x70) {
                (*(volatile u8 *)&unk_9c) = 0;
            } else if (r <= 0x90) {
                (*(volatile u8 *)&unk_9c) = 1;
            } else {
                (*(volatile u8 *)&unk_9c) = 2;
            }
        } else if (func_ov133_02293d64(keys)) {
            Snd_PlaySe(0xb);
            func_ov133_02293d18(unk_9f);
        }
    } else if (old == 0xd) {
        if (func_ov002_0220126c(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xe;
        } else if (func_ov002_0220128c(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xb;
        }
    } else if (old == 0xe) {
        if (func_ov002_0220125c(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xd;
        } else if (func_ov002_0220128c(keys)) {
            (*(volatile u8 *)&unk_9c) = 0xa;
        }
    }
    if (old == (*(volatile u8 *)&unk_9c)) {
        return FALSE;
    }
    return TRUE;
}

u32 Unk_ov133_022952bc::func_ov133_02294138(s32 x0, s32 y) {
    s32 x = x0 - 0x50;
    s32 t = y - 0x60;
    if (x >= 0 && x < 0x60 && t >= 0 && t < 0x40) {
        unk_9c = data_ov133_02295154[(x >> 5) + (t >> 4) * 3];
        return unk_9c;
    }
    if (y >= 0x40 && y <= 0x50) {
        unk_9c = 0xc;
        return unk_9c;
    }
    return 0xf;
}

void *Unk_ov133_022952bc::func_ov133_02294110() {
    void *h = ((PlayerData *)PlayerData_GetCurrent())->getFriendList();
    s32 idx = func_0206ed38();
    return (u8 *)func_02076db4(h) + idx * 0x1c;
}

BOOL Unk_ov133_022952bc::func_ov133_022940b4(u32 a) {
    void *h = PlayerData_GetCurrent();
    s32 idx = func_0206ed38();
    u8 *p = (u8 *)func_02076db4(((PlayerData *)h)->getFriendList());
    s32 i;
    for (i = 0; i < 0x20; p += 0x1c, i++) {
        if (func_02076f04(func_02076cf0(p)) && i != idx) {
            if (func_02076f28(a, func_02076cf0(p))) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov133_022952bc::func_ov133_0229405c() {
    void *h = PlayerData_GetCurrent();
    s64 sum = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        sum = sum * 10 + (s64)(u32)unk_a4[i];
    }
    return func_02076c94(((PlayerData *)h)->getWifiUserData()) == sum;
}

void Unk_ov133_022952bc::func_ov133_02293efc() {
    void *h = PlayerData_GetCurrent();
    Unk_02076f70 l;
    func_02076f1c(&l);
    if (!func_02076e88(&l, unk_a4, func_02076c80(((PlayerData *)h)->getWifiUserData()))) {
        func_ov133_0229454c(0x19, 0);
        Snd_PlaySe(0x73);
        return;
    }
    if (func_ov133_0229405c()) {
        func_ov133_0229454c(0x1d, 0);
        Snd_PlaySe(0x73);
        return;
    }
    if (func_ov133_022940b4((u32)&l)) {
        func_ov133_0229454c(0x14, 0);
        Snd_PlaySe(0x73);
        return;
    }
    void *s = func_ov133_02294110();
    void *t = func_02076cf0(s);
    func_02076e88(t, unk_a4, func_02076c80(((PlayerData *)h)->getWifiUserData()));
    func_0206ecf8(1);
    unk_154.func_ov002_022030ac(6);
    func_ov002_02200a50(3);
    func_ov002_02200a58(10);
    Snd_PlaySe(0x29);
    if (func_0206ed50() == 0xe) {
        func_ov133_02294d88(0xc);
    } else {
        ((Unk_ov090_022921e0 *)((void *(*)(void *))ProcBase_GetParent)(this))->func_ov090_02291964();
        func_ov133_02294d88(6);
        func_0206e5cc();
        if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
            switch (func_020eaf18()) {
            case 3:
            case 4: {
                s32 pl = func_0206ed38();
                u32 x = func_02076e1c(func_02076cf0(s));
                if (!func_020e9c78((u8)pl, x)) {
                    func_ov002_02200a58(0xc);
                    return;
                }
            }
            }
        }
    }
}

void Unk_ov133_022952bc::func_ov133_02293eac() {
    func_0206ecf8(0);
    unk_154.func_ov002_022030ac(7);
    func_ov002_02200a50(3);
    func_ov002_02200a58(10);
    func_ov133_02294d88(6);
    if (func_0206ed50() == 0xe) {
        func_02076cf4(func_ov133_02294110());
    }
    Snd_PlaySe(0x28);
}

s32 Unk_ov133_022952bc::func_ov133_02293e48() {
    u32 st = unk_9c;
    if (st <= 11) {
        if (func_ov133_0229388c()) {
            func_ov002_02200a58(7);
            return 1;
        }
        return 2;
    }
    switch (st) {
    case 12:
        break;
    case 13:
        if (!unk_154.func_ov002_02202fac(6)) {
            func_ov133_02293efc();
            return 1;
        }
        return 0;
    case 14:
        func_ov133_02293eac();
        return 1;
    }
    return 0;
}

BOOL Unk_ov133_022952bc::func_ov133_02293dec(s32 a) {
    u32 st = unk_9c;
    switch (st) {
    case 11:
        if (a) {
            func_ov133_02293c78();
            func_ov094_0229277c();
        }
        unk_9d = 0;
        return FALSE;
    case 10:
        func_ov133_02293be0(1);
        return TRUE;
    default:
        if (st <= 9) {
            u8 v = data_ov133_0229513c[st];
            if (func_ov133_02293ae8(v)) {
                Snd_PlayKeySe(data_ov133_022952a0[v]);
            }
        }
        return TRUE;
    }
}

BOOL Unk_ov133_022952bc::func_ov133_02293d64(u32 key) {
    u32 old = unk_9f;
    if (func_ov002_0220126c(key)) {
        if (unk_9f != 0) {
            unk_9f = *(volatile u8 *)&unk_9f - 1;
        }
    } else if (func_ov002_0220125c(key)) {
        if (func_ov133_02293acc() > *(volatile u8 *)&unk_9f) {
            unk_9f = *(volatile u8 *)&unk_9f + 1;
        }
    }
    if (old != *(volatile u8 *)&unk_9f) {
        s32 x = func_ov133_02294460();
        s32 y = func_ov133_02294410();
        unk_f0.func_ov002_02202a40(x, y);
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov133_022952bc::func_ov133_02293d3c() {
    s32 v = gTouchCurX - 0x18;
    if (v < 0) {
        v = 0;
    }
    s32 r = v >> 4;
    s32 n = func_ov133_02293acc();
    if (r > n) {
        r = n;
    }
    return r;
}

void Unk_ov133_022952bc::func_ov133_02293d18(u8 x) {
    unk_9f = x;
    unk_a1 = 0x10;
    unk_a2 = x;
    unk_a3 = x;
    func_ov133_02293770(0x10);
}

void Unk_ov133_022952bc::func_ov133_02293cdc(s32 x) {
    unk_9f = x;
    unk_a1 = 0x10;
    if (unk_a2 != x) {
        Snd_PlaySe(0x15);
    }
    unk_a2 = x;
    func_ov133_02293770(0x10);
}

void Unk_ov133_022952bc::func_ov133_02293ca4() {
    if (func_02076e38(func_02076cf0(func_ov133_02294110()), unk_a4)) {
        func_ov133_02293d18(0);
        func_ov133_02293770(8);
    } else {
        func_ov133_02293c78();
    }
}

void Unk_ov133_022952bc::func_ov133_02293c78() {
    s32 i;
    for (i = 0; i < 12; i++) {
        unk_a4[i] = 10;
    }
    func_ov133_02293d18(0);
    func_ov133_02293770(8);
}

BOOL Unk_ov133_022952bc::func_ov133_02293be0(s32 f) {
    s32 i;
    if (unk_a2 != unk_a3) {
        func_ov133_02293b88();
        Snd_PlaySe(0x35);
        return TRUE;
    }
    if (unk_9f == 0) {
        if (unk_a4[0] != 10) {
            unk_9f = 1;
        } else {
            if (f) {
                Snd_PlaySe(0x34);
            }
            return FALSE;
        }
    }
    for (i = unk_9f; i < 12; i++) {
        unk_a4[i - 1] = unk_a4[i];
    }
    unk_a4[11] = 10;
    func_ov133_02293770(8);
    func_ov133_02293d18(unk_9f - 1);
    Snd_PlaySe(0x35);
    return TRUE;
}

void Unk_ov133_022952bc::func_ov133_02293b88() {
    u32 b = unk_a3;
    u32 a = unk_a2;
    s32 lo, hi;
    if (a < b) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    func_ov133_02293d18(lo);
    for (; hi < 12; lo++, hi++) {
        unk_a4[lo] = unk_a4[hi];
    }
    for (; lo < 12; lo++) {
        unk_a4[lo] = 10;
    }
    func_ov133_02293770(8);
}

BOOL Unk_ov133_022952bc::func_ov133_02293ae8(u8 v) {
    s32 i;
    if (unk_9f == 12 && unk_a2 == unk_a3) {
        Snd_PlaySe(0x34);
        return FALSE;
    }
    u32 b = unk_a3;
    u32 a = unk_a2;
    if (a == b && unk_a4[11] != 10) {
        Snd_PlaySe(0x34);
        return FALSE;
    }
    if (a != b) {
        func_ov133_02293b88();
    }
    for (i = 11; i > unk_9f; i--) {
        unk_a4[i] = unk_a4[i - 1];
    }
    unk_a4[unk_9f] = v;
    func_ov133_02293d18(unk_9f + 1);
    func_ov133_02293770(8);
    return TRUE;
}

s32 Unk_ov133_022952bc::func_ov133_02293acc() {
    s32 i;
    for (i = 0; i < 12; i++) {
        if (unk_a4[i] == 10) {
            return i;
        }
    }
    return 12;
}

void Unk_ov133_022952bc::func_ov133_022939e4() {
    s32 i;
    u16 *p = unk_b00;
    p += 0xe4;
    for (i = 0; i < 12; p += 2, i++) {
        u32 c = unk_a4[i];
        if (c == 10) {
            p[0] = (p[0] & 0xfc00) | 0x176;
            p[1] = (p[1] & 0xfc00) | 0x176;
            p[0x20] = (p[0x20] & 0xfc00) | 0x176;
            p[0x21] = (p[0x21] & 0xfc00) | 0x176;
        } else {
            u32 v = c * 4 + 0x84;
            p[0] = (p[0] & 0xfc00) | v;
            p[1] = (p[1] & 0xfc00) | (v + 1);
            p[0x20] = (p[0x20] & 0xfc00) | (v + 2);
            p[0x21] = (p[0x21] & 0xfc00) | (v + 3);
        }
    }
    if (unk_154.func_ov002_02202fac(6)) {
        if (unk_a4[11] != 10) {
            unk_154.func_ov002_02202fc8(6);
        }
    } else if (unk_a4[11] == 10) {
        unk_154.func_ov002_02202fe4(6);
    }
}

void Unk_ov133_022952bc::func_ov133_02293988() {
    func_0206ee80(unk_b00, 4, 7, 0x1b, 8, 4);
    u32 b = unk_a3;
    u32 a = unk_a2;
    if (a != b) {
        u32 lo, hi;
        if (a > b) {
            lo = b;
            hi = a;
        } else {
            lo = a;
            hi = b;
        }
        lo = lo * 2 + 4;
        hi = hi * 2 + 3;
        func_0206ee80(unk_b00, lo, 7, hi, 8, 8);
    }
}

void Unk_ov133_022952bc::func_ov133_022938cc() {
    if (func_ov133_02293780(8)) {
        func_ov133_022939e4();
        func_ov133_02293760(8);
        func_ov133_02293770(4);
    }
    if (func_ov133_02293780(0x10)) {
        func_ov133_02293988();
        func_ov133_02293760(0x10);
        func_ov133_02293770(4);
    }
    if (func_ov133_02293780(2)) {
        if (unk_2b8[0].func_020b86c0((u32)unk_300, 4, 0x800, 0)) {
            func_ov133_02293760(2);
        }
    }
    if (func_ov133_02293780(4)) {
        if (unk_2b8[1].func_020b86c0((u32)unk_b00, 6, 0x800, 0)) {
            func_ov133_02293760(4);
        }
    }
}

BOOL Unk_ov133_022952bc::func_ov133_0229388c() {
    func_ov133_02293814();
    unk_a0 = unk_9c;
    func_ov133_022937b0(unk_a0);
    unk_9d = 0xd;
    unk_9e = 5;
    return func_ov133_02293dec(1);
}

void Unk_ov133_022952bc::func_ov133_02293884() { unk_9d = 0; }

BOOL Unk_ov133_022952bc::func_ov133_02293854() {
    if (unk_9d != 0) {
        unk_9d = *(volatile u8 *)&unk_9d - 1;
        if (unk_9d == 0) {
            unk_9d = 2;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov133_022952bc::func_ov133_02293814() {
    func_0206ee80(unk_300, 9, 0xc, 0x15, 0x14, 2);
    func_ov133_02293794(0xb);
    func_ov133_02293794(0xa);
    func_ov133_02293770(2);
}

void Unk_ov133_022952bc::func_ov133_022937bc(s32 idx, u32 to) {
    s32 m = idx % 3;
    u32 x0 = data_ov133_02295148[m];
    u32 x1;
    if (m == 0) {
        x1 = x0 + 4;
    } else {
        x1 = x0 + 3;
    }
    u32 y0 = data_ov133_02295190[idx];
    func_0206ee80(unk_300, x0, y0, x1, y0 + 1, to);
    func_ov133_02293770(2);
}

void Unk_ov133_022952bc::func_ov133_022937b0(s32 idx) { func_ov133_022937bc(idx, 3); }

void Unk_ov133_022952bc::func_ov133_02293794(s32 idx) {
    u32 to;
    if ((u8)(idx + 0xf6) <= 1) {
        to = 1;
    } else {
        to = 2;
    }
    func_ov133_022937bc(idx, to);
}

BOOL Unk_ov133_022952bc::func_ov133_02293780(u32 m) {
    if (unk_98 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov133_022952bc::func_ov133_02293770(u32 m) { unk_98 = unk_98 | m; }

void Unk_ov133_022952bc::func_ov133_02293760(u32 m) { unk_98 = unk_98 & ~m; }

extern "C" void *data_ov133_02295250[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_022946a4Ev, 0};

extern "C" void *data_ov133_02295270[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294d50Ev, 0};

extern "C" void *data_ov133_02295280[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294808Ev, 0};

extern "C" const u8 data_ov133_0229513c[12] = {7, 8, 9, 4, 5, 6, 1, 2, 3, 0, 0, 0};

extern "C" void *data_ov133_02295208[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294c64Ev, 0};

extern "C" const u8 data_ov133_02295154[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

extern "C" void *data_ov133_02295260[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_0229474cEv, 0};

extern "C" const s32 data_ov133_02295160[12] = {0x68, 0x68, 0x68, 0x78, 0x78, 0x78, 0x88, 0x88, 0x88, 0x98, 0x98, 0x98};

extern "C" void *data_ov133_02295248[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294638Ev, 0};

extern "C" const u32 data_ov133_02295190[12] = {0xc, 0xc, 0xc, 0xe, 0xe, 0xe, 0x10, 0x10, 0x10, 0x12, 0x12, 0x12};

extern "C" void *data_ov133_02295228[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_0229478cEv, 0};

extern "C" void *data_ov133_02295218[2] = {(void *)_ZN18Unk_ov133_022952bc19func_ov133_02294c10Ev, 0};

extern "C" Unk_ov133_SceneEntry data_ov133_02295268 = {func_ov133_022950bc, 0xb4, 0xb8};
