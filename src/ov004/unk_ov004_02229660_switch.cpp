// mwcc-version: 1.2/base
// ov004 TU26: .text 0x02229660-0x0222a374 (class Unk_ov004_0224e2b8). The switch function at 0x02229c20
// (Unk_ov004_0224e2b8::vfunc_70) needs mwcc 1.2/base and is in the _switch file (object order).
#include "types.h"

// shared_0224d4e8.h.txt -- final declaration of class Unk_ov004_0224d4e8 (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN18Unk_ov004_0224d4e88vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::vfunc_60(u32)   64 M::vfunc_64(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN18Unk_ov004_0224d4e8C2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (Unk_ov004_02224ee4: real C1/D1 methods), unk_248 (Unk_ov004_02224d60) and unk_250
//    (Unk_ov004_02224cf4) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (func_ov004_02224ce4 / func_ov004_02224d5c), so LightLevel and Cf4 have no destructor here.
//  * ProcBase .. Character are an own copy of the library chain (the header GameProc.h names slot 08
//    vfunc_08, the real symbol is Character::postCreate(s32); slot 20 takes a u32).  Do not also include GameProc.h.
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (Unk_020dbd54), unk_1a4, unk_248, unk_250.
// Layout: M is 0x290 bytes; Unk_020ddcf0 (secondary base of the derived classes) starts at 0x290.

// Library base class chain (header GameProc.h rebuilt so that the vtable names the real symbols:
// slot 08 is Character::postCreate(s32), slot 20 takes a u32).
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
    virtual void vfunc_20(u32 a);
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

struct Unk_ov004_02224ee4_Vec {
    s32 x, y, z;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
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
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// ---- model resource sub-object at +0xec (see src/main/unk_02054190.cpp)
class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u8 pad_04[0x94];
};

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
};

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;

    s32 AnimFrameCtrl_isFinished();
    s32 hasPassedFrame(s32 a);
};

class Unk_020dbd54 : public Unk_020dbd34, public AnimFrameCtrl {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    void *unk_b4;

    s32 func_02054710();
    s32 func_020547cc(void *q);
    void func_020547e4();
    BOOL func_02054800(void *x);
    // declared in Unk_0205454c in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

extern "C" {
s32 func_ov004_02224d8c(void *self, u32 i);
void func_ov004_02224d9c(void *self);
void func_ov004_02224dbc(void *self, const char *s);
void *func_ov004_02224d68(void *self);
void func_ov004_02224d60(void *self);
void func_ov004_02224d5c(void *self);
void func_ov004_02224d08(void *self);
void func_ov004_02224d10(void *self, const char *s);
u32 func_ov004_02224d04(void *self);
void func_ov004_02224cf4(void *self);
void func_ov004_02224ce4(void *self);
void func_ov004_02224ca4(void *self, s32 v);
void func_ov004_02224cb8(void *self);
void func_ov004_02224cc0(void *self, void *v);
void func_ov004_02224cdc(void *self);
}

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class Unk_ov004_02224ee4 {
public:
    Unk_ov004_02224ee4();
    ~Unk_ov004_02224ee4();
    void func_ov004_02224ee4();
    inline s32 func_ov004_02224d8c(u32 i) { return ::func_ov004_02224d8c(this, i); }
    inline void func_ov004_02224d9c() { ::func_ov004_02224d9c(this); }
    inline void func_ov004_02224dbc(const char *s) { ::func_ov004_02224dbc(this, s); }
    inline void *func_ov004_02224d68() { return ::func_ov004_02224d68(this); }

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class Unk_ov004_02224d60 {
public:
    inline Unk_ov004_02224d60() { func_ov004_02224d60(this); }
    inline void func_ov004_02224d08() { ::func_ov004_02224d08(this); }
    inline void func_ov004_02224d10(const char *s) { ::func_ov004_02224d10(this, s); }
    inline u32 func_ov004_02224d04() { return ::func_ov004_02224d04(this); }

    u32 unk_00;
    u8 unk_04;
};

class Unk_ov004_02224cf4 {
public:
    inline Unk_ov004_02224cf4() { func_ov004_02224cf4(this); }
    inline void func_ov004_02224ca4(s32 v) { ::func_ov004_02224ca4(this, v); }
    inline void func_ov004_02224cb8() { ::func_ov004_02224cb8(this); }
    inline void func_ov004_02224cc0(Unk_ov004_02224ee4_Vec *v) { ::func_ov004_02224cc0(this, v); }
    inline void func_ov004_02224cdc() { ::func_ov004_02224cdc(this); }

    u32 unk_00[0x10];
};

class Unk_ov004_0224d4e8 : public Character {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(Unk_ov004_02224ee4_Vec *out);

    void func_ov004_02224f58(u32 v);
    s32 func_ov004_02224f20();
    s32 func_ov004_02224f3c();
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *name);
    void func_ov004_02224fc8(char *a, char *b);

    /* 0xec */ Unk_020dbd54 unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};


// ---------------------------------------------------------------- secondary base at +0x290 (vtable main 0x020ddcf0)
// Unk_ov004_0224e2b8 overrides its slots 0x10, 0x14 and 0x18 with the functions its own vtable has at 0x68, 0x6c and
// 0x70, so those three slots carry the names vfunc_68/6c/70 here (thunks _ZThn656_N18Unk_ov004_0224e2b88vfunc_68Ev ...).
// Every other slot is named vfunc_sXX: main has a label _ZN12Unk_020ddcf09vfunc_sXXEv for each of them.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ u8 pad_0c[8];
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ u8 pad_18[0x16dc - 0x18];
    /* 0x16dc */ u8 unk_16dc[4];
};

class Unk_020ddcf0 : public MsgRequest {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70(u32 a, u8 b);
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

struct Unk_ov004_02229ae0_Pad {
    s32 v[2];
    Unk_ov004_02229ae0_Pad() {}
    ~Unk_ov004_02229ae0_Pad() {}
};

struct Unk_ov004_02229970_Xyz {
    s32 x, y, z;
};

struct Unk_ov004_02229970_Glob {
    u8 pad_00[0x68];
    s32 unk_68;
};

struct Unk_ov004_02229660_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0224e2b8_Str {
    const u8 *unk_00;
    u8 unk_04;
};

struct Unk_ov004_0222a0bc_V3 {
    s32 v[3];
};

class Unk_020b6960;
class ChoiceList;

// Functions of other modules, under their real (mangled) symbol names; the object is the first argument.
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define func_0203e47c _ZN9Character13func_0203e47cEi
#define func_0203e488 _ZN9Character13func_0203e488Ei
#define func_02067958 _ZN12Unk_020660f813func_02067958Ev
#define func_02067978 _ZN12Unk_020660f813func_02067978EP12Unk_020ddcf0
#define func_020679b4 _ZN12Unk_020660f813func_020679b4Ev
#define func_020679c0 _ZN12Unk_020660f813func_020679c0Ei
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02068290 _ZN12Unk_020ddc2413func_02068290Ev
#define func_02068298 _ZN12Unk_020ddc2413func_02068298Ei
#define func_0206829c _ZN12Unk_020ddc2413func_0206829cEv
#define func_020682a4 _ZN12Unk_020ddc2413func_020682a4Ei
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define SaveData_clearFlag _ZN8SaveData9clearFlagEj
#define SaveData_setFlag _ZN8SaveData7setFlagEj
#define SaveData_testFlag _ZN8SaveData8testFlagEj
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii
#define func_020b68ec _ZN12Unk_020b696013func_020b68ecEP12Unk_020b6e10P4Vec3iiisih
#define func_020b6928 _ZN12Unk_020b696013func_020b6928EP12Unk_020b6e10

extern "C" {
extern u8 data_021c3cc0;
extern u8 gTouchPrevHeld;
extern u8 gTouchPrevChanged;
extern Unk_ov004_02229970_Glob *data_020cbb18;
extern u8 gSaveData[];
extern u8 data_021edb60[];
extern s32 data_021c620c;

void _ZN12Unk_020d8cf4C1Ev(void *self);
void _ZN12Unk_020d8cf4D2Ev(void *self);
void _ZN12Unk_020b6e10C2Ev(void *self);
void _ZN12Unk_020b6e10D2Ev(void *self);
void _ZN12Unk_020b6a94C1Ev(void *self);
void _ZN12Unk_020b6a94D1Ev(void *self);
s32 func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02054710(void *p);
void func_020547cc(void *p, s32 a);
void func_020547e4(void *p);
BOOL func_02054800(void *p, s32 v);
BOOL AnimFrameCtrl_isFinished(void *p);
void func_0203e47c(void *self, Unk_020ddcf0 *sec);
void func_0203e488(void *self, Unk_020ddcf0 *sec);
void func_02067958(Unk_020660f8 *p);
void func_02067978(Unk_020660f8 *p, Unk_020ddcf0 *sec);
ChoiceList *func_020679b4(Unk_020660f8 *p);
void func_020679c0(Unk_020660f8 *p, u32 v);
void func_02067a84(Unk_020660f8 *p, u8 *src, const void *s);
void func_02068290(void *p);
void func_02068298(void *p, s32 a);
void func_0206829c(void *p);
void func_020682a4(void *p, s32 a);
BOOL func_02072e44(void *g);
void SaveData_clearFlag(void *p, u32 n);
void SaveData_setFlag(void *p, u32 n);
BOOL SaveData_testFlag(void *p, u32 n);
s32 ChoiceList_getResult(ChoiceList *p);
void ChoiceList_loadTexts(ChoiceList *p);
void ChoiceList_setEntry(ChoiceList *p, u32 i, u8 *b, u32 n, void *d, s32 z, s32 c);
void ChoiceList_reset(ChoiceList *p, u32 n, s32 v);
BOOL func_020b68ec(Unk_020b6960 *o, void *box, s32 *pos, s32 w, s32 h, s32 d, s16 angle, s32 e, u8 f);
void func_020b6928(Unk_020b6960 *o, void *p);
s32 func_02067918(s32 a);
BOOL func_0206ec6c();
s32 func_0206ed18();
BOOL func_0206eca4(u32 a);
u32 func_020b50e8();
Unk_020b6960 *func_020b50b4();
BOOL func_020b6080(Unk_020b6960 *obj, Unk_ov004_02229970_Xyz *out, s32 *a, u8 *b);
s32 func_020b6014(Unk_020b6960 *o, u32 a, u32 b);
void *func_02095204(u32 x);
void *func_020951ec(s32 v);
void func_0203d704(void *p, s32 a);
void func_0203d67c(void *p);
BOOL InputMode_IsTouch();
void func_0203cb80(u32 a);
void func_0203cb48(u32 a);
void func_0203cb1c(u32 a);
u32 func_0203cb38();
void Snd_SetOutputMode(u32 a);
void func_0203ca94();
s32 func_020e9650(s32 *a, s32 *b);
void func_ov004_022248a0(void *p);
void func_ov004_022248c4(void *p);
}

class Unk_ov004_0224e2b8 : public Unk_ov004_0224d4e8, public Unk_020ddcf0 {
public:
    Unk_ov004_0224e2b8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_ov004_0224e2b8();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *getInteractionPos();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70(u32 a, u8 b);

    void func_ov004_02229780(const char *name, u32 flag);
    void func_ov004_022297d0();
    void func_ov004_02229830();
    void func_ov004_02229834();
    void func_ov004_02229858();
    void func_ov004_0222985c();
    void func_ov004_02229888();
    void func_ov004_0222988c();
    void func_ov004_022298b8();
    void func_ov004_022298bc();
    void func_ov004_022298e0();
    void func_ov004_02229900();
    void func_ov004_0222992c(const char *name, u32 flag);
    void func_ov004_0222993c();
    void func_ov004_02229964();
    void func_ov004_02229970();
    void func_ov004_02229a04();
    void func_ov004_02229a08();
    void func_ov004_02229a0c();
    void func_ov004_02229a10();
    void func_ov004_02229a4c();
    void func_ov004_02229a6c();
    void func_ov004_02229a90();
    void func_ov004_02229a94();
    void func_ov004_02229ab8();
    void func_ov004_02229abc();
    void func_ov004_02229ae0();
    void func_ov004_02229b40();
    void func_ov004_02229b64();
    void func_ov004_02229b84();
    void func_ov004_02229be0();
    void func_ov004_02229be4(s32 state);
    void func_ov004_02229e1c(Unk_ov004_0224e2b8_Str *p, s32 v);

    /* 0x2d4 */ u32 unk_2d4[0x27]; // a Unk_020d8cf4 (ctor C1 / dtor D2 by hand, as the original calls them)
    /* 0x370 */ u32 unk_370[0xaa]; // a Unk_020b6e10 (ctor C2 / dtor D2 by hand)
    /* 0x618 */ u32 unk_618[7];    // a Unk_020b6a94 (ctor C2 / dtor D1 by hand)
    /* 0x634 */ s32 unk_634;
    /* 0x638 */ u8 unk_638;
    /* 0x639 */ u8 pad_639[3];
    /* 0x63c */ u32 unk_63c;
};

#define F(T, off) (*(T *)((u8 *)this + off))

typedef void (Unk_ov004_0224e2b8::*Unk_ov004_0224e2b8_Fn)();

struct Unk_ov004_0224e2b8_Ent {
    Unk_ov004_0224e2b8_Fn enter;
    Unk_ov004_0224e2b8_Fn exit;
};

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224e2b8 *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern const u8 data_ov004_02240290[3];
extern const u8 data_ov004_02240294[4];
extern const s32 data_ov004_02240298[3];
extern const char data_ov004_022402a4[];
extern u8 data_ov004_0224e16c[2];
extern u8 data_ov004_0224e170[3];
extern u8 data_ov004_0224e174[4];
extern const char *data_ov004_0224e178;
extern char data_ov004_0224e26c[];
extern Unk_ov004_0224e2b8_Str data_ov004_0224e298;
extern Unk_ov004_0224e2b8_Str data_ov004_0224e2a0;
extern Unk_ov004_0224e2b8_Str data_ov004_0224e2a8;
extern char data_ov004_0224e3ac[];
extern char data_ov004_0224e3c8[];
extern Unk_ov004_0224e2b8 *volatile data_ov004_02251288;
extern Unk_ov004_0224e2b8_Ent data_ov004_02251298[15];
Unk_ov004_0224e2b8 *func_ov004_0222a2cc();
}

// Only this function: it needs mwcc 1.2/base (the rest of the unit is in the main file, built with 1.2/sp2).
// It is the class's virtual at vtable slot 0x70 (and, through the thunk, the secondary base's slot 0x18).
void Unk_ov004_0224e2b8::vfunc_70(u32 a_, u8 b_) {
    Unk_020660f8 *p = unk_3c;
    s32 t = ChoiceList_getResult(func_020679b4(p));
    u32 r = 0;
    switch (unk_1e) {
    case 0xe:
    case 0x1f:
        if (func_020b50e8() == 6) {
            r = data_ov004_02240294[t];
        } else {
            r = data_ov004_02240290[t];
        }
        if (r == 0x17) {
            if (SaveData_testFlag(gSaveData, 0x13) && SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x42;
            } else if (!SaveData_testFlag(gSaveData, 0x13) && SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x41;
            } else if (SaveData_testFlag(gSaveData, 0x13) && !SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x40;
            } else if (!SaveData_testFlag(gSaveData, 0x13) && !SaveData_testFlag(gSaveData, 0x14)) {
                r = 0x3f;
            }
        }
        break;
    case 0x14:
        switch (t) {
        case 0:
            func_0203cb80(r);
            break;
        case 1:
            func_0203cb80(1);
            break;
        }
        break;
    case 0x17:
        switch (t) {
        case 0:
            SaveData_clearFlag(gSaveData, 0x13);
            break;
        case 1:
            SaveData_setFlag(gSaveData, 0x13);
            break;
        }
        break;
    case 0x1a:
        switch (t) {
        case 0:
            SaveData_clearFlag(gSaveData, 0x14);
            break;
        case 1:
            SaveData_setFlag(gSaveData, 0x14);
            break;
        }
        break;
    case 0x1b:
        switch (t) {
        case 0:
            func_0203cb48(1);
            Snd_SetOutputMode(r);
            r = 0x1c;
            break;
        case 1:
            func_0203cb48(r);
            Snd_SetOutputMode(1);
            r = 0x1e;
            break;
        }
        break;
    case 0x11:
        unk_63c = func_0203cb38();
        switch (t) {
        case 0:
            func_0203cb1c(r);
            break;
        case 1:
            func_0203cb1c(1);
            break;
        case 2:
            func_0203cb1c(2);
            break;
        }
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        if (t == 1) {
            func_0203cb1c(unk_63c);
        }
        break;
    }
    if (func_020b50e8() != 6) {
        func_0203ca94();
    }
    if (r) {
        u8 b = r;
        func_02067a84(p, &b, data_ov004_022402a4);
    }
}
