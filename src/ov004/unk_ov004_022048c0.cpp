// mwcc-version: 1.2/sp2
#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

// ---------------------------------------------------------------- library base chain (as in link_ov009)
// Slots 0x0c / 0x24 are overridden by Unk_ov004_0224860c; they carry the overriding methods' names so that the
// overrides do not also override the secondary base's vfunc_0c / vfunc_24 (which would emit extra thunks).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class ChoiceList {
public:
    s32 getResult();
};

struct Unk_020660f8 {
    ChoiceList *func_020679b4();
    void func_02067a1c(s32 idx, s32 a, s32 b);
    s32 func_02067a3c(s32 idx, void *p);
    void func_02067a84(u8 *src, void *s);

    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
};

// Slots 0x10..0x18 are overridden by the derived class's own new virtuals (named after their addresses).
class Unk_020ddcf0 : public MsgRequest {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void vfunc_s30();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020b6e10 {
    u8 pad[0x2a8];
};

struct Unk_020b6960 {
    BOOL func_020b68ec(Unk_020b6e10 *box, Vec3 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
    BOOL func_020b6928(Unk_020b6e10 *box);
};

class MsgString25 {
public:
    MsgString25();
    ~MsgString25();
    u32 pad[0xc];
};

extern "C" {
void *PlayerData_GetCurrent();
u16 *func_020acf54(void *p);
s32 func_020acde8(u32 x);
s32 func_020acdac(u16 *p);
s32 String_FormatNumber(MsgString25 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_020b6960 *func_020b50b4();
BOOL func_0203d67c(void *p);
s32 func_020e9650(s32 *a, s32 *b);
BOOL func_020318cc(void *self);
void func_02031908(void *self, s32 a, s32 b, s32 c, s32 *p, s16 s, s32 *q);
void _ZN9Character13func_0203e47cEi(void *self, Unk_020ddcf0 *sec);
void _ZN9Character13func_0203e488Ei(void *self, Unk_020ddcf0 *sec);
void *_ZN10PlayerData13getNookPointsEv(void *self);
void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
void _ZN12Unk_020b6e10C2Ev(void *self);
void _ZN12Unk_020b6e10D2Ev(void *self);
extern char *data_ov004_022485a0;
extern char *data_ov004_022485a4;
}

#define func_0203e47c _ZN9Character13func_0203e47cEi
#define func_0203e488 _ZN9Character13func_0203e488Ei
#define PlayerData_getNookPoints _ZN10PlayerData13getNookPointsEv

// ---------------------------------------------------------------- Unk_ov004_0224860c
class Unk_ov004_0224860c : public Character, public Unk_020ddcf0 {
public:
    Unk_ov004_0224860c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_ov004_0224860c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();

    void func_ov004_022049e0();
    BOOL func_ov004_02204a10();
    void func_ov004_02204a14();
    BOOL func_ov004_02204a38();
    void func_ov004_02204a80();
    BOOL func_ov004_02204a84();
    void func_ov004_02204a88();
    BOOL func_ov004_02204b04(s32 m);
    void func_ov004_02204c10();
    BOOL func_ov004_02204ccc();
    void func_ov004_02204cdc();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ u8 unk_134[0x9c]; // Unk_020d8cf4 (ctor C1 / dtor D2 called by hand, as the original does)
    /* 0x1d0 */ Unk_020b6e10 unk_1d0; // (ctor C2 / dtor D2 called by hand)
};

typedef void (Unk_ov004_0224860c::*Unk_02204a88_Fn)();
typedef BOOL (Unk_ov004_0224860c::*Unk_02204b04_Fn)();

extern "C" Unk_ov004_0224860c *data_ov004_0224f5c0;

struct Unk_02204a38_Pad {
    s32 v[2];
    Unk_02204a38_Pad() {}
    ~Unk_02204a38_Pad() {}
};

extern "C" Unk_ov004_0224860c *func_ov004_02204e7c() {
    return new Unk_ov004_0224860c;
}

extern "C" Unk_ov004_0224860c *func_ov004_02204e70() {
    return data_ov004_0224f5c0;
}

// ---------------------------------------------------------------- data
struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

Unk_ov004_0224860c::Unk_ov004_0224860c() {
    _ZN12Unk_020d8cf4C1Ev(unk_134);
    _ZN12Unk_020b6e10C2Ev(&unk_1d0);
    data_ov004_0224f5c0 = 0;
}

Unk_ov004_0224860c::~Unk_ov004_0224860c() {
    _ZN12Unk_020b6e10D2Ev(&unk_1d0);
    _ZN12Unk_020d8cf4D2Ev(unk_134);
}

BOOL Unk_ov004_0224860c::vfunc_00() {
    data_ov004_0224f5c0 = this;
    setCharId(0);
    func_ov004_02204b04(0);
    func_ov004_02204cdc();
    return TRUE;
}

BOOL Unk_ov004_0224860c::onExecute() {
    func_ov004_02204a88();
    func_020b50b4()->func_020b6928(&unk_1d0);
    return TRUE;
}

BOOL Unk_ov004_0224860c::onDraw() {
    return TRUE;
}

BOOL Unk_ov004_0224860c::vfunc_0c() {
    func_ov004_02204ccc();
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_02204cdc() {
    func_02031908(unk_134, 0x2000, 0x2000, 0x2000, unk_5c, 0, 0);
    func_020b50b4()->func_020b68ec(&unk_1d0, (Vec3 *)unk_5c, 0x2000, 0x2000, 0x2000, 0, 0xb, 0xff);
}

BOOL Unk_ov004_0224860c::func_ov004_02204ccc() {
    return func_020318cc(unk_134);
}

void Unk_ov004_0224860c::func_ov004_02204c10() {
    if (unk_3c) {
        u16 *p = func_020acf54(PlayerData_getNookPoints(PlayerData_GetCurrent()));
        u8 buf[2];
        MsgString25 obj;
        String_FormatNumber(&obj, *p, 10, 1, 0, 0);
        unk_3c->func_02067a3c(0, &obj);
        String_FormatNumber(&obj, func_020acdac(p), 10, 1, 0, 0);
        unk_3c->func_02067a3c(1, &obj);
        if (func_020acde8(*p) != 0) {
            buf[0] = func_020acde8(*p) - 1;
            unk_3c->func_02067a1c(2, (s32)&buf[0], (s32)data_ov004_022485a4);
        }
        buf[1] = func_020acde8(*p);
        unk_3c->func_02067a1c(3, (s32)&buf[1], (s32)data_ov004_022485a4);
    }
}

BOOL Unk_ov004_0224860c::vfunc_48(void *a) {
    Character *o = (Character *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < 0x2333) {
            u32 d = (u16)(o->unk_8e - (unk_8e + 0x8000));
            if (d < 0x1000 || d >= 0xf000) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224860c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov004_02204b04(1);
        break;
    case 8:
        func_ov004_02204b04(0);
        break;
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov004_0224860c *data_ov004_0224f5c0;
extern "C" char *data_ov004_022485a4;
extern "C" char data_ov004_022485e0[12];
extern "C" char *data_ov004_022485a0;
extern "C" char data_ov004_022485a8[8];
extern "C" Unk_ov004_Scene_Entry data_ov004_022485ec;

extern "C" Unk_ov004_0224860c *data_ov004_0224f5c0 = 0;

extern "C" char *data_ov004_022485a4 = data_ov004_022485a8;

extern "C" char data_ov004_022485e0[12] = "sp_npc_atm";

extern "C" char *data_ov004_022485a0 = data_ov004_022485e0;

extern "C" char data_ov004_022485a8[8] = "st_atm";

extern "C" Unk_ov004_Scene_Entry data_ov004_022485ec = {(void *(*)())func_ov004_02204e7c, 0x2c, 0x32, {0, 0xc8000, 0x12c000, 0x258000}};

BOOL Unk_ov004_0224860c::func_ov004_02204b04(s32 m) {
    static Unk_02204b04_Fn tbl[3] = { (Unk_02204b04_Fn)&Unk_ov004_0224860c::func_ov004_02204a84, (Unk_02204b04_Fn)&Unk_ov004_0224860c::func_ov004_02204a38, (Unk_02204b04_Fn)&Unk_ov004_0224860c::func_ov004_02204a10 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224860c::func_ov004_02204a88() {
    static Unk_02204a88_Fn tbl[3] = { &Unk_ov004_0224860c::func_ov004_02204a80, &Unk_ov004_0224860c::func_ov004_02204a14, &Unk_ov004_0224860c::func_ov004_022049e0 };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

BOOL Unk_ov004_0224860c::func_ov004_02204a84() {
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_02204a80() {}

BOOL Unk_ov004_0224860c::func_ov004_02204a38() {
    Unk_02204a38_Pad pad;
    func_0203e488(this, this);
    setFileName(data_ov004_022485a0);
    unk_1e = 0;
    func_ov004_02204c10();
    unk_3c->unk_08 = 1;
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_02204a14() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02204b04(2);
        }
    }
}

BOOL Unk_ov004_0224860c::func_ov004_02204a10() {
    return TRUE;
}

void Unk_ov004_0224860c::func_ov004_022049e0() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c(this, this);
            func_0203d67c(this);
        }
    }
}

void Unk_ov004_0224860c::vfunc_60() {}

void Unk_ov004_0224860c::vfunc_64() {
    u8 buf[2];
    switch (unk_1e) {
    case 1:
    case 2:
        if (func_020acde8(*func_020acf54(PlayerData_getNookPoints(PlayerData_GetCurrent()))) == 4) {
            buf[0] = 5;
            unk_3c->func_02067a84(&buf[0], data_ov004_022485a0);
        } else {
            buf[1] = 3;
            unk_3c->func_02067a84(&buf[1], data_ov004_022485a0);
        }
        break;
    }
}

// ================================================================ Unk_ov004_0224860c
void Unk_ov004_0224860c::vfunc_68() {
    u8 buf[4];
    u32 st = unk_1e;
    s32 v = unk_3c->func_020679b4()->getResult();
    if (st == 0 || st == 7) {
        switch (v) {
        case 0:
            if (func_020acde8(*func_020acf54(PlayerData_getNookPoints(PlayerData_GetCurrent()))) == 0) {
                buf[0] = 1;
                unk_3c->func_02067a84(&buf[0], data_ov004_022485a0);
            } else {
                buf[1] = 2;
                unk_3c->func_02067a84(&buf[1], data_ov004_022485a0);
            }
            break;
        case 1:
            buf[2] = 6;
            unk_3c->func_02067a84(&buf[2], data_ov004_022485a0);
            break;
        case 2:
            buf[3] = 4;
            unk_3c->func_02067a84(&buf[3], data_ov004_022485a0);
            break;
        }
    }
}

