// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
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
// Layout: M is 0x290 bytes; TalkMsgRequest (secondary base of the derived classes) starts at 0x290.

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

    s32 isFinished();
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


// ---------------------------------------------------------------- the state-actor object, seen two ways by the free functions
struct Unk_ov004_02226724_Model {
    u8 unk_00[0xb8];
};
struct Unk_ov004_02226724_Res {
    u8 unk_00[0xa4];
};
struct ObjA {
    u8 pad_00[0x290];
    Unk_ov004_02226724_Model unk_290[4];
    u8 pad_570[0x908 - 0x570];
    Unk_ov004_02226724_Res unk_908[4];
    u8 pad_b98[0xecc - 0xb98];
    u32 unk_ecc[4];
    u8 pad_edc[0xef0 - 0xedc];
    u8 unk_ef0, unk_ef1, unk_ef2;
    u8 pad_ef3[3];
    u8 unk_ef6, unk_ef7;
    u8 unk_ef8, unk_ef9;
    u8 pad_efa[2];
    s32 unk_efc;
    u8 pad_f00[0xf38 - 0xf00];
    s32 unk_f38;
};

struct Unk_ov004_02226574_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02227228_Mtx {
    s32 v[12];
};

struct Unk_ov004_02227228_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_022275fc_Sess {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    s8 unk_03;
    u8 pad_04[0xc];
    u32 unk_10;
};

typedef Unk_ov004_02227228_Mtx Mtx;
typedef Unk_ov004_02227228_Bits Bits;

class ObjB {
public:
    u8 pad_000[0x150];
    Mtx unk_150;
    u8 pad_180[0x190 - 0x180];
    s32 unk_190;
    u8 pad_194[4];
    s32 unk_198;
    u8 pad_19c[0x2f4 - 0x19c];
    Mtx unk_2f4;
    u8 pad_324[0x334 - 0x324];
    s32 unk_334;
    u8 pad_338[4];
    s32 unk_33c;
    u8 pad_340[0x3ac - 0x340];
    Mtx unk_3ac;
    u8 pad_3dc[0x3e8 - 0x3dc];
    Bits unk_3e8;
    Bits unk_3ec;
    u8 pad_3f0[0x464 - 0x3f0];
    Mtx unk_464;
    u8 pad_494[0x4a0 - 0x494];
    Bits unk_4a0;
    Bits unk_4a4;
    u8 pad_4a8[0x51c - 0x4a8];
    Mtx unk_51c;
    u8 pad_54c[0x55c - 0x54c];
    Bits unk_55c;
    u8 pad_560[0x5d4 - 0x560];
    Mtx unk_5d4;
    u8 pad_604[0x68c - 0x604];
    Mtx unk_68c;
    u8 pad_6bc[0x744 - 0x6bc];
    Mtx unk_744;
    u8 pad_774[0x7fc - 0x774];
    Mtx unk_7fc;
    u8 pad_82c[0x8b4 - 0x82c];
    Mtx unk_8b4;
    u8 pad_8e4[0xef0 - 0x8e4];
    u8 unk_ef0[4];
    u8 unk_ef4;
    u8 pad_ef5;
    u8 unk_ef6;
    u8 pad_ef7[2];
    u8 unk_ef9;
    u8 pad_efa[2];
    s32 unk_efc;
    u8 pad_f00[0xf10 - 0xf00];
    s32 unk_f10;
    s32 unk_f14;
    s32 unk_f18;
    u8 pad_f1c[0xf38 - 0xf1c];
    s32 unk_f38;
    s32 unk_f3c;
    s32 unk_f40;
};
typedef BOOL (ObjB::*Fn)();

// the colour-less 3-word global used by the state machine (inline ctor, dtor is a main stub)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

struct Unk_ov004_0224d988_M {
    u8 pad_00[0xa0];
    Bits unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;
    u32 unk_b4;
};
struct Unk_ov004_0224d988_H {
    u8 pad_00[0xa4];
};
struct Unk_ov004_0224d988_W {
    u32 unk_00;
};
struct Unk_ov004_0224d988_V3 {
    s32 x, y, z;
};

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

class Unk_ov004_0224d988 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224d988();
    virtual ~Unk_ov004_0224d988();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x290 */ Unk_ov004_0224d988_M unk_290[9];
    /* 0x908 */ Unk_ov004_0224d988_H unk_908[9];
    /* 0xecc */ Unk_ov004_0224d988_W unk_ecc[9];
    /* 0xef0 */ u8 pad_ef0[3];
    /* 0xef3 */ u8 unk_ef3;
    /* 0xef4 */ u8 pad_ef4[0xf1c - 0xef4];
    /* 0xf1c */ Unk_ov004_0224d988_V3 unk_f1c;
    /* 0xf28 */ Unk_ov004_0224d988_V3 unk_f28;
    /* 0xf34 */ u16 unk_f34;
    /* 0xf36 */ u16 unk_f36;
    /* 0xf38 */ s32 unk_f38;
    /* 0xf3c */ s32 unk_f3c;
    /* 0xf40 */ s32 unk_f40;
};

#define F(T, off) (*(T *)((u8 *)this + off))

extern "C" {
extern void *volatile data_ov004_02250cd0;
extern Mtx data_021f47e0;
extern void *data_021c620c;
extern u8 data_021ed0a0[];
u32 _ZN12Unk_0205454c13func_0205458cEv(void *);
s32 _ZN12Unk_0205454c13func_02054720Eiiitt(void *, u32, u32, u32, u32, u32);
s32 _ZN12Unk_020dbd5413func_02054710Ev(void *);
s32 _ZN12Unk_020dbd5413func_02054800EPv(void *, void *);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 _ZN12Unk_020dbd5413func_020547ccEPv(void *, u32);
s32 _ZN12Unk_020dbd5413func_020547e4Ev(void *);
s32 _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *, void *, u32);
s32 NNS_G3dBindMdlTex(void *, u32);
s32 NNS_G3dBindMdlPltt(void *, u32);
s32 Camera_RestorePrevMode(void);
s32 Camera_MuteSe(void);
s32 Camera_SetMode4(void);
s32 func_020902f8(void *);
s32 func_02090268(u32 a, void *b, void *c, u32 d);
u32 func_ov004_0221c08c(void);
u32 func_ov004_0221c070(void);
void *func_ov004_0221c0a4(void);
void *func_ov004_0221c0b8(void);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void *func_02034d2c(void);
s32 func_020e77cc(void *p, u32 a, u32 b);
Unk_ov004_022275fc_Sess *Snd_GetBeatState(void);
s32 func_020902d4(s32 a, void *b, u32 c, u32 d);
void *Heap_Alloc(void *heap, u32 size);
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void func_ov004_02224d60(void *);
void func_ov004_02224d5c(void *);
void *_ZN12Unk_020dbd54C1Ev(void *, s32);
void *_ZN12Unk_020dbd54D1Ev(void *, s32);
void *_ZN18Unk_ov004_02224ee4C1Ev(void *, s32);
void *_ZN18Unk_ov004_02224ee4D1Ev(void *, s32);
extern "C" Unk_ov004_0224d988 *func_ov004_02227b28();
void func_ov004_02227228(void *ov);
BOOL func_ov004_02227104(void *ov, s32 n);
void func_ov004_02227024(ObjB *o);
BOOL func_ov004_0222700c(ObjB *o);
void func_ov004_02226f6c(ObjB *o);
BOOL func_ov004_02226f68(ObjB *o);
void func_ov004_02226ec4(ObjB *o);
BOOL func_ov004_02226ec0(ObjB *o);
void func_ov004_02226e18(ObjB *o);
BOOL func_ov004_02226e14(ObjB *o);
void func_ov004_02226c24(ObjA *o);
BOOL func_ov004_02226be8(ObjA *o);
void func_ov004_02226b80(ObjA *o);
BOOL func_ov004_02226b7c(void);
void func_ov004_02226af0(ObjA *o);
BOOL func_ov004_02226aec(void);
void func_ov004_02226a80(ObjA *o);
BOOL func_ov004_02226a68(ObjA *o);
void func_ov004_02226914(ObjA *o);
BOOL func_ov004_02226904(void);
#define M0 (&o->unk_290[0])
#define M1 (&o->unk_290[1])
#define M2 (&o->unk_290[2])
#define R0 (&o->unk_908[0])
#define R1 (&o->unk_908[1])
#define R2 (&o->unk_908[2])
#define UP(id, m, r, a5, a7) func_ov004_022264dc(o, id, m, r, a5, 0x1000, a7, 0)

void func_ov004_0222687c(ObjA *o);
void func_ov004_02226860(void);
void func_ov004_022267dc(void *ov, u32 idx, const char *id, const char *x);
s32 func_ov004_022267a8(void *ov, u32 idx);
void func_ov004_02226724(void *ov, u32 idx);
s32 func_ov004_02226704(void);
s32 func_ov004_022266e4(void);
s32 func_ov004_022266c4(void);
s32 func_ov004_022266a4(void);
s32 func_ov004_02226684(void);
s32 func_ov004_02226664(void);
s32 func_ov004_02226644(void);
s32 func_ov004_02226624(void);
s32 func_ov004_02226604(void);
s32 func_ov004_022265e4(void);
s32 func_ov004_022265c8(void);
BOOL func_ov004_02226574(void);
BOOL func_ov004_02226520(void);
s32 func_ov004_022264dc(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u32 a7, u32 a8);
void func_ov004_022264b8(void);
void func_ov004_022264a0(void);
}

#define CDA (*(ObjA * volatile *)&data_ov004_02250cd0)
#define CDB (*(ObjB * volatile *)&data_ov004_02250cd0)
#define CDC (*(Unk_ov004_0224d988 * volatile *)&data_ov004_02250cd0)
// declarations (definition order below sets the data layout)
extern "C" { extern FxVec3 data_ov004_02250d2c; }
extern "C" { extern FxVec3 data_ov004_02250d44; }
extern "C" { extern FxVec3 data_ov004_02250d5c; }
extern "C" { extern void *data_ov004_0224d920[2]; }
extern "C" { extern void *data_ov004_0224d8f8[2]; }
extern "C" { extern void *data_ov004_0224d8e0[2]; }
extern "C" { extern FxVec3 data_ov004_02250cd8; }
extern "C" { extern void *data_ov004_0224d8d8[2]; }
extern "C" { extern void *volatile data_ov004_02250cd0; }
extern "C" { extern void *data_ov004_0224d908[2]; }
extern "C" { extern FxVec3 data_ov004_02250cf0; }
extern "C" { extern FxVec3 data_ov004_02250d08; }
extern "C" { extern void *data_ov004_0224d948[2]; }
extern "C" { extern void *data_ov004_0224d940[2]; }
extern "C" { extern void *data_ov004_0224d8d0[2]; }
extern "C" { extern void *data_ov004_0224d930[2]; }
extern "C" { extern void *data_ov004_0224d8e8[2]; }
extern "C" { extern void *data_ov004_0224d910[2]; }
extern "C" { extern void *data_ov004_0224d960[2]; }
extern "C" { extern void *data_ov004_0224d900[2]; }
extern "C" { extern void *data_ov004_0224d950[2]; }
extern "C" { extern void *data_ov004_0224d8f0[2]; }
extern "C" { extern void *data_ov004_0224d918[2]; }
extern "C" { extern void *data_ov004_0224d938[2]; }
extern "C" { extern void *data_ov004_0224d958[2]; }
extern "C" { extern void *data_ov004_0224d928[2]; }
extern "C" { extern void *data_ov004_0224d8c8[2]; }
extern "C" { extern Unk_ov004_Scene_Entry data_ov004_0224d968; }// declarations (definition order below sets the data layout)
extern "C" { extern FxVec3 data_ov004_02250d2c; }
extern "C" { extern FxVec3 data_ov004_02250d44; }
extern "C" { extern void *data_ov004_0224d938[2]; }
extern "C" { extern FxVec3 data_ov004_02250d5c; }
extern "C" { extern void *data_ov004_0224d8e0[2]; }
extern "C" { extern FxVec3 data_ov004_02250cd8; }
extern "C" { extern FxVec3 data_ov004_02250cf0; }
extern "C" { extern void *data_ov004_0224d918[2]; }
extern "C" { extern void *data_ov004_0224d908[2]; }
extern "C" { extern FxVec3 data_ov004_02250d08; }
extern "C" { extern void *data_ov004_0224d958[2]; }
extern "C" { extern void *data_ov004_0224d950[2]; }
extern "C" { extern void *data_ov004_0224d948[2]; }
extern "C" { extern void *data_ov004_0224d940[2]; }
extern "C" { extern void *data_ov004_0224d8d0[2]; }
extern "C" { extern void *data_ov004_0224d8e8[2]; }
extern "C" { extern void *data_ov004_0224d910[2]; }
extern "C" { extern void *data_ov004_0224d930[2]; }
extern "C" { extern void *data_ov004_0224d960[2]; }
extern "C" { extern void *data_ov004_0224d900[2]; }
extern "C" { extern void *data_ov004_0224d8f8[2]; }
extern "C" { extern void *data_ov004_0224d8f0[2]; }
extern "C" { extern void *data_ov004_0224d928[2]; }
extern "C" { extern void *data_ov004_0224d920[2]; }
extern "C" { extern void *data_ov004_0224d8d8[2]; }
extern "C" { extern void *volatile data_ov004_02250cd0; }
extern "C" { extern void *data_ov004_0224d8c8[2]; }
extern "C" { extern Unk_ov004_Scene_Entry data_ov004_0224d968; }

extern "C" FxVec3 data_ov004_02250d2c(0, 0, 0);

extern "C" FxVec3 data_ov004_02250d44(0x17700, 0x1900, 0x15800);

extern "C" void *data_ov004_0224d938[2] = {(void *)func_ov004_02226b80, 0};

extern "C" FxVec3 data_ov004_02250d5c(0x17800, 0x1a00, 0x13400);

extern "C" void *data_ov004_0224d8e0[2] = {(void *)func_ov004_02226914, 0};

extern "C" FxVec3 data_ov004_02250cd8(0x10c00, 0x1600, 0x1b000);

extern "C" FxVec3 data_ov004_02250cf0(0x16a00, 0x1900, 0x13000);

extern "C" void *data_ov004_0224d918[2] = {(void *)func_ov004_0222687c, 0};

extern "C" void *data_ov004_0224d908[2] = {(void *)func_ov004_02226f6c, 0};

extern "C" FxVec3 data_ov004_02250d08(0x16600, 0x1900, 0x11e00);

extern "C" void *data_ov004_0224d958[2] = {(void *)func_ov004_02226ec0, 0};

extern "C" void *data_ov004_0224d950[2] = {(void *)func_ov004_02226e14, 0};

extern "C" void *data_ov004_0224d948[2] = {(void *)func_ov004_02226be8, 0};

extern "C" void *data_ov004_0224d940[2] = {(void *)func_ov004_02226b7c, 0};

extern "C" void *data_ov004_0224d8d0[2] = {(void *)func_ov004_02226aec, 0};

extern "C" void *data_ov004_0224d8e8[2] = {(void *)func_ov004_02226af0, 0};

extern "C" void *data_ov004_0224d910[2] = {(void *)func_ov004_02226904, 0};

extern "C" void *data_ov004_0224d930[2] = {(void *)func_ov004_02226a68, 0};

extern "C" void *data_ov004_0224d960[2] = {(void *)func_ov004_02226f68, 0};

#define D2C ((s32 *)&data_ov004_02250d2c)
#define D5C ((s32 *)&data_ov004_02250d5c)
#define DCD8 ((s32 *)&data_ov004_02250cd8)
#define DCF0 ((s32 *)&data_ov004_02250cf0)
#define DD08 ((s32 *)&data_ov004_02250d08)

// @2227b28
extern "C" Unk_ov004_0224d988 *func_ov004_02227b28() {
    return new Unk_ov004_0224d988();
}

// @2227ab0
Unk_ov004_0224d988::Unk_ov004_0224d988() {
    __cxa_vec_ctor(unk_290, 9, 0xb8, (void *(*)(void *))_ZN12Unk_020dbd54C1Ev, _ZN12Unk_020dbd54D1Ev);
    __cxa_vec_ctor(unk_908, 9, 0xa4, (void *(*)(void *))_ZN18Unk_ov004_02224ee4C1Ev, _ZN18Unk_ov004_02224ee4D1Ev);
    __cxa_vec_ctor(unk_ecc, 9, 4, (void *(*)(void *))func_ov004_02224d60, (void *(*)(void *, s32))func_ov004_02224d5c);
}

// @22279f0
Unk_ov004_0224d988::~Unk_ov004_0224d988() {
    __cxa_vec_cleanup(unk_ecc, 9, 4, (void *(*)(void *, s32))func_ov004_02224d5c);
    __cxa_vec_cleanup(unk_908, 9, 0xa4, _ZN18Unk_ov004_02224ee4D1Ev);
    __cxa_vec_cleanup(unk_290, 9, 0xb8, _ZN12Unk_020dbd54D1Ev);
}

// @2227728
BOOL Unk_ov004_0224d988::vfunc_00() {
    CDC = this;
    func_ov004_02224fc8("/roomObj/obj_cafe1.arc", "/roomObj/obj_cafe1.nsbtx");
    func_ov004_022267dc(this, 0, "/roomObj/obj_cafe2.arc", "/roomObj/obj_cafe2.nsbtx");
    func_ov004_022267dc(this, 1, "/roomObj/obj_cafe3.arc", "/roomObj/obj_cafe3.nsbtx");
    func_ov004_022267dc(this, 2, "/roomObj/obj_cafe4.arc", "/roomObj/obj_cafe4.nsbtx");
    func_ov004_022267dc(this, 3, "/roomObj/obj_cafe5.arc", "/roomObj/obj_cafe5.nsbtx");
    func_ov004_022267dc(this, 4, "/roomObj/obj_cafe3.arc", "/roomObj/obj_cafe3.nsbtx");
    func_ov004_022267dc(this, 5, "/roomObj/obj_cafe4.arc", "/roomObj/obj_cafe4.nsbtx");
    func_ov004_022267dc(this, 6, "/roomObj/obj_cafe3.arc", "/roomObj/obj_cafe3.nsbtx");
    func_ov004_022267dc(this, 7, "/roomObj/obj_cafe4.arc", "/roomObj/obj_cafe4.nsbtx");
    func_ov004_022267dc(this, 8, "/roomObj/obj_cafe6.arc", "/roomObj/obj_cafe6.nsbtx");
    if (func_ov004_02224d8c((u8 *)this + 0x1a4, 0) != 0) {
        if (_ZN12Unk_020dbd5413func_02054800EPv((u8 *)this + 0xec, data_021c620c) != 0) {
            _ZN12Unk_0205454c13func_02054720Eiiitt((u8 *)this + 0xec, func_ov004_02224d8c((u8 *)this + 0x1a4, 0), 1, 0x1000, 0, 0);
            _ZN12Unk_020dbd5413func_02054710Ev((u8 *)this + 0xec);
            F(u32, 0x198) = 0;
        }
    }
    u8 i = 0;
    do {
        func_ov004_02226724(this, i);
        i++;
    } while (i < 9);
    func_ov004_02227104(this, 0);
    unk_ef3 = 1;
    func_ov004_022264dc(this, 8, &unk_290[4], &unk_908[4], 0, 0x1000, 0, 0);
    func_ov004_022264dc(this, 6, &unk_290[5], &unk_908[5], 0, 0x1000, 0, 0);
    func_ov004_022264dc(this, 8, &unk_290[6], &unk_908[6], 0, 0x1000, 0, 0);
    func_ov004_022264dc(this, 6, &unk_290[7], &unk_908[7], 0, 0x1000, 0, 0);
    unk_f1c = *(Unk_ov004_0224d988_V3 *)&data_ov004_02250cd8;
    unk_f28 = *(Unk_ov004_0224d988_V3 *)&data_ov004_02250cf0;
    unk_f34 = 0;
    unk_f36 = 0;
    unk_290[4].unk_ac = 0;
    unk_290[4].unk_a4 = (u16)(unk_290[4].unk_a0.mid - 1) << 12;
    unk_290[5].unk_ac = 0;
    unk_290[5].unk_a4 = (u16)(unk_290[5].unk_a0.mid - 1) << 12;
    unk_290[6].unk_ac = 0;
    unk_290[6].unk_a4 = (u16)(unk_290[6].unk_a0.mid - 1) << 12;
    unk_290[7].unk_ac = 0;
    unk_290[7].unk_a4 = (u16)(unk_290[7].unk_a0.mid - 1) << 12;
    unk_f38 = -1;
    unk_f3c = -1;
    unk_f40 = -1;
    return TRUE;
}

// @22275fc
BOOL Unk_ov004_0224d988::onExecute() {
    ObjB *o = (ObjB *)this;
    u8 i;
    if (func_020e77cc(func_02034d2c(), 0x63, 0xab)) {
        Unk_ov004_022275fc_Sess *t = Snd_GetBeatState();
        if (t != NULL) {
            if (t->unk_03 != 1) {
                o->unk_190 = 0;
                o->unk_198 = t->unk_10;
                _ZN12Unk_020dbd5413func_020547e4Ev((u8 *)o + 0xec);
                o->unk_198 = 0;
                o->unk_334 = 0;
                o->unk_33c = t->unk_10;
                _ZN12Unk_020dbd5413func_020547e4Ev((u8 *)o + 0x290);
                o->unk_33c = 0;
            }
        }
    }
    _ZN12Unk_020dbd5413func_020547e4Ev((u8 *)o + 0xec);
    for (i = 0; i < 9; i++) {
        _ZN12Unk_020dbd5413func_020547e4Ev((u8 *)o + 0x290 + i * 0xb8);
    }
    func_ov004_02227024(o);
    if (o->unk_f38 != -1) {
        func_020902d4(o->unk_f38, (u8 *)o + 0xf10, 0, 0);
    }
    if (o->unk_ef4 != 0) {
        if (o->unk_f3c == -1) {
            o->unk_f3c = func_02090268(0x6b, (u8 *)o + 0xf1c, (u8 *)o + 0xf34, 0);
        }
    }
    if (o->unk_ef6 != 0) {
        if (o->unk_f40 == -1) {
            o->unk_f40 = func_02090268(0x6b, (u8 *)o + 0xf28, (u8 *)o + 0xf36, 0);
        }
    }
    return TRUE;
}

// @22275f8
BOOL Unk_ov004_0224d988::onDraw() {
    ObjB *o = (ObjB *)this;
    return TRUE;
}

// @2227228
void func_ov004_02227228(void *ov) {
    ObjB *o = (ObjB *)ov;
    u8 i;
    data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
    o->unk_150 = data_021f47e0;
    data_021f47e0 = *(Mtx *)func_ov004_0221c0b8();
    o->unk_2f4 = data_021f47e0;
    s32 st = o->unk_efc;
    if ((u32)(st - 8) <= 1) {
        func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
        o->unk_3ac = data_021f47e0;
    } else if (st == 5) {
        if (o->unk_3ec.mid >= 0x10) {
            func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
            o->unk_f10 = 0x16a00;
            o->unk_f14 = 0x1900;
            o->unk_f18 = 0x15000;
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
            o->unk_f10 = data_021f47e0.v[9];
            o->unk_f14 = data_021f47e0.v[10];
            o->unk_f18 = data_021f47e0.v[11];
        }
    } else if (st == 6) {
        if ((s32)o->unk_3ec.mid >= (s32)o->unk_3e8.mid - 0x2d) {
            func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
            o->unk_f10 = 0x16a00;
            o->unk_f14 = 0x1900;
            o->unk_f18 = 0x15000;
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
            o->unk_f10 = data_021f47e0.v[9];
            o->unk_f14 = data_021f47e0.v[10];
            o->unk_f18 = data_021f47e0.v[11];
        }
    } else {
        data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
        o->unk_f10 = data_021f47e0.v[9];
        o->unk_f14 = data_021f47e0.v[10];
        o->unk_f18 = data_021f47e0.v[11];
    }
    o->unk_3ac = data_021f47e0;
    st = o->unk_efc;
    if ((u32)(st - 8) <= 1) {
        func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
        o->unk_464 = data_021f47e0;
    } else if (st == 5) {
        if (o->unk_4a4.mid >= 0x10) {
            func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
        }
    } else if (st == 6) {
        if ((s32)o->unk_4a4.mid >= (s32)o->unk_4a0.mid - 0x2d) {
            func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
        } else {
            data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
        }
    } else {
        data_021f47e0 = *(Mtx *)func_ov004_0221c0a4();
    }
    o->unk_464 = data_021f47e0;
    if (o->unk_55c.mid >= 0xf && o->unk_55c.mid <= 0x48) {
        data_021f47e0 = *(Mtx *)func_ov004_0221c0b8();
    } else {
        func_020e8388(&data_021f47e0, D5C[0], D5C[1], D5C[2]);
    }
    o->unk_51c = data_021f47e0;
    func_020e8388(&data_021f47e0, DCD8[0], DCD8[1], DCD8[2]);
    o->unk_5d4 = data_021f47e0;
    o->unk_68c = data_021f47e0;
    func_020e8388(&data_021f47e0, DCF0[0], DCF0[1], DCF0[2]);
    o->unk_744 = data_021f47e0;
    o->unk_7fc = data_021f47e0;
    func_020e8388(&data_021f47e0, DD08[0], DD08[1], DD08[2]);
    o->unk_8b4 = data_021f47e0;
    if (o->unk_ef9 != 0) {
        _ZN12Unk_020dbd5413func_020547ccEPv((u8 *)o + 0xec, NULL);
    }
    for (i = 0; i < 9; i++) {
        if (o->unk_ef0[i] != 0) {
            _ZN12Unk_020dbd5413func_020547ccEPv((u8 *)o + 0x290 + i * 0xb8, NULL);
        }
    }
}

// @22271f4
BOOL Unk_ov004_0224d988::vfunc_0c() {
    ObjB *o = (ObjB *)this;
    u8 i;
    ((Unk_ov004_0224d4e8 *)o)->func_ov004_02224f60();
    for (i = 0; i < 9; i++) {
        func_ov004_022267a8(o, i);
    }
    CDB = NULL;
    return TRUE;
}

// @2227104
BOOL func_ov004_02227104(void *ov, s32 n) {
    ObjB *o = (ObjB *)ov;
    static Fn tbl[10] = {*(Fn *)data_ov004_0224d8c8, *(Fn *)data_ov004_0224d960, *(Fn *)data_ov004_0224d958, *(Fn *)data_ov004_0224d950,
                              *(Fn *)data_ov004_0224d948, *(Fn *)data_ov004_0224d940, *(Fn *)data_ov004_0224d8d0, *(Fn *)data_ov004_0224d928,
                              *(Fn *)data_ov004_0224d930, *(Fn *)data_ov004_0224d910};
    if (n < 10) {
        if ((o->*tbl[n])()) {
            o->unk_efc = n;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *data_ov004_0224d900[2] = {(void *)func_ov004_02226ec4, 0};

extern "C" void *data_ov004_0224d8f8[2] = {(void *)func_ov004_02226e18, 0};

extern "C" void *data_ov004_0224d8f0[2] = {(void *)func_ov004_02226c24, 0};

extern "C" void *data_ov004_0224d928[2] = {(void *)func_ov004_02226e14, 0};

extern "C" void *data_ov004_0224d920[2] = {(void *)func_ov004_02226a80, 0};

extern "C" void *data_ov004_0224d8d8[2] = {(void *)func_ov004_02226c24, 0};

extern "C" void *volatile data_ov004_02250cd0 = 0;

// @2227024
void func_ov004_02227024(ObjB *o) {
    static Fn tbl[10] = {*(Fn *)data_ov004_0224d908, *(Fn *)data_ov004_0224d900, *(Fn *)data_ov004_0224d8f8, *(Fn *)data_ov004_0224d8f0,
                              *(Fn *)data_ov004_0224d938, *(Fn *)data_ov004_0224d8e8, *(Fn *)data_ov004_0224d920, *(Fn *)data_ov004_0224d8d8,
                              *(Fn *)data_ov004_0224d8e0, *(Fn *)data_ov004_0224d918};
    s32 i = o->unk_efc;
    if (i < 10) {
        (o->*tbl[i])();
    }
}

// ---------------------------------------------------------------- data
extern "C" void *data_ov004_0224d8c8[2] = {(void *)func_ov004_0222700c, 0};

extern "C" Unk_ov004_Scene_Entry data_ov004_0224d968 = {(void *(*)())func_ov004_02227b28, 0x64, 0x13, {0, 0xc8000, 0x12c000, 0x258000}};

// @222700c
BOOL func_ov004_0222700c(ObjB *o) {
    o->unk_ef9 = 1;
    o->unk_ef0[0] = 1;
    return TRUE;
}

// @2226f6c
void func_ov004_02226f6c(ObjB *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf2) {
        func_ov004_022264dc(o, 0, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 0, (u8 *)o + 0x290, (u8 *)o + 0x908, 0, 0x1000, 0, 0);
    } else if (func_ov004_0221c070() == 0xf4) {
        func_ov004_022264dc(o, 1, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 1, (u8 *)o + 0x290, (u8 *)o + 0x908, 0, 0x1000, 0, 0);
    }
}

// @2226f68
BOOL func_ov004_02226f68(ObjB *o) {
    return TRUE;
}

// @2226ec4
void func_ov004_02226ec4(ObjB *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf3) {
        func_ov004_022264dc(o, 0, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 0, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    } else if (func_ov004_0221c070() == 0xf5) {
        func_ov004_022264dc(o, 1, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 1, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    }
}

// @2226ec0
BOOL func_ov004_02226ec0(ObjB *o) {
    return TRUE;
}

// @2226e18
void func_ov004_02226e18(ObjB *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf3) {
        func_ov004_022264dc(o, 3, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 0, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    } else if (func_ov004_0221c070() == 0xf5) {
        func_ov004_022264dc(o, 4, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        func_ov004_022264dc(o, 1, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    }
}

// @2226e14
BOOL func_ov004_02226e14(ObjB *o) {
    return TRUE;
}

// @2226c24
void func_ov004_02226c24(ObjA *o) {
    u32 t = func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf2) {
        UP(0, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(0, M0, R0, 0, 0);
    } else if (func_ov004_0221c070() == 0xf4) {
        UP(1, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(1, M0, R0, 0, 0);
    } else if (func_ov004_0221c070() == 0xf6) {
        if (t <= 6) {
            o->unk_ef9 = 1;
            o->unk_ef0 = 1;
        } else {
            o->unk_ef9 = 0;
            o->unk_ef0 = 0;
        }
        if (t >= 0x12) {
            o->unk_ef1 = 1;
            o->unk_ef2 = 1;
        } else {
            o->unk_ef1 = 0;
            o->unk_ef2 = 0;
        }
        UP(2, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(2, M0, R0, 0, 0);
        UP(2, M1, R1, 0, 0);
        UP(2, M2, R2, 0, 0);
    } else if (func_ov004_0221c070() == 0xf3) {
        UP(0, M1, R1, 0, 0);
        UP(0, M2, R2, 0, 0);
    } else if (func_ov004_0221c070() == 0xf5) {
        UP(1, M1, R1, 0, 0);
        UP(1, M2, R2, 0, 0);
    }
}

// @2226be8
BOOL func_ov004_02226be8(ObjA *o) {
    _ZN12Unk_0205454c13func_02054720Eiiitt(&o->unk_290[3], func_ov004_02224d8c(&o->unk_908[3], 0), 1, 0x1000, 0, 0);
    return TRUE;
}

// @2226b80
void func_ov004_02226b80(ObjA *o) {
    func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf7) {
        UP(5, M1, R1, 0, 0);
        UP(3, M2, R2, 0, 0);
    }
}

// @2226b7c
BOOL func_ov004_02226b7c(void) {
    return TRUE;
}

// @2226af0
void func_ov004_02226af0(ObjA *o) {
    u32 t = func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf8) {
        UP(6, M1, R1, 1, 0);
        UP(4, M2, R2, 1, 0);
        if (t == 0x3b) {
            o->unk_f38 = func_02090268(0x6b, (u8 *)o + 0xf10, (u8 *)o + 0x8e, 0);
        }
    }
}

// @2226aec
BOOL func_ov004_02226aec(void) {
    return TRUE;
}

// @2226a80
void func_ov004_02226a80(ObjA *o) {
    u32 t = func_ov004_0221c08c();
    if (func_ov004_0221c070() == 0xf8) {
        UP(7, M1, R1, 3, t);
        UP(5, M2, R2, 3, t);
    }
}

// @2226a68
BOOL func_ov004_02226a68(ObjA *o) {
    func_020902f8((void *)o->unk_f38);
    return TRUE;
}

// @2226914
void func_ov004_02226914(ObjA *o) {
    if (_ZN12Unk_0205454c13func_0205458cEv(M1) == func_ov004_02224d8c(R1, 6) && _ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
        UP(9, M1, R1, 1, 0);
        UP(7, M2, R2, 1, 0);
    } else if (_ZN12Unk_0205454c13func_0205458cEv(M1) == func_ov004_02224d8c(R1, 9) && _ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
        UP(0xa, M1, R1, 1, 0);
        UP(8, M2, R2, 1, 0);
    } else if (_ZN12Unk_0205454c13func_0205458cEv(M1) == func_ov004_02224d8c(R1, 0xa) && _ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
        Camera_MuteSe();
        Camera_SetMode4();
        UP(0xb, M1, R1, 1, 0);
        UP(9, M2, R2, 1, 0);
    }
}

// @2226904
BOOL func_ov004_02226904(void) {
    Camera_RestorePrevMode();
    return TRUE;
}

// @222687c
#define M0 (&o->unk_290[0])
#define M1 (&o->unk_290[1])
#define M2 (&o->unk_290[2])
#define R0 (&o->unk_908[0])
#define R1 (&o->unk_908[1])
#define R2 (&o->unk_908[2])
#define UP(id, m, r, a5, a7) func_ov004_022264dc(o, id, m, r, a5, 0x1000, a7, 0)

void func_ov004_0222687c(ObjA *o) {
    if (_ZN12Unk_0205454c13func_0205458cEv(M1) == func_ov004_02224d8c(R1, 0xb)) {
        if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
            UP(0xc, M1, R1, 1, 0);
            UP(0xa, M2, R2, 1, 0);
        }
    }
}

// @2226860
void func_ov004_02226860(void) {
    ObjA *g = CDA;
    if (g) {
        func_ov004_02227228(g);
    }
}

// @22267dc
void func_ov004_022267dc(void *ov, u32 idx, const char *id, const char *x) {
    ObjA *o = (ObjA *)ov;
    u8 *b = (u8 *)o;
    void *r = b + 0x908 + idx * 0xa4;
    void *q;
    func_ov004_02224dbc(r, id);
    q = b + 0xecc + idx * 4;
    func_ov004_02224d10(q, x);
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(b + 0x290 + idx * 0xb8, func_ov004_02224d68(r), 0);
    NNS_G3dBindMdlTex(func_ov004_02224d68(r), func_ov004_02224d04(q));
    NNS_G3dBindMdlPltt(func_ov004_02224d68(r), func_ov004_02224d04(q));
}

// @22267a8
s32 func_ov004_022267a8(void *ov, u32 idx) {
    ObjA *o = (ObjA *)ov;
    func_ov004_02224d9c(&o->unk_908[idx]);
    func_ov004_02224d08(&o->unk_ecc[idx]);
}

// @2226724
void func_ov004_02226724(void *ov, u32 idx) {
    ObjA *o = (ObjA *)ov;
    Unk_ov004_02226724_Res *r = &o->unk_908[idx];
    if (func_ov004_02224d8c(r, 0)) {
        if (_ZN12Unk_020dbd5413func_02054800EPv(&o->unk_290[idx], data_021c620c)) {
            u32 off = idx * 0xb8;
            void *m = (u8 *)o->unk_290 + off;
            _ZN12Unk_0205454c13func_02054720Eiiitt(m, func_ov004_02224d8c(r, 0), 1, 0x1000, 0, 0);
            _ZN12Unk_020dbd5413func_02054710Ev(m);
            *(u32 *)((u8 *)o + off + 0x33c) = 0;
        }
    }
}

// @2226704
s32 func_ov004_02226704(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 0);
    }
    return 0;
}

// @22266e4
s32 func_ov004_022266e4(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 1);
    }
    return 0;
}

// @22266c4
s32 func_ov004_022266c4(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 2);
    }
    return 0;
}

// @22266a4
s32 func_ov004_022266a4(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 3);
    }
    return 0;
}

// @2226684
s32 func_ov004_02226684(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 4);
    }
    return 0;
}

// @2226664
s32 func_ov004_02226664(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 5);
    }
    return 0;
}

// @2226644
s32 func_ov004_02226644(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 6);
    }
    return 0;
}

// @2226624
s32 func_ov004_02226624(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 7);
    }
    return 0;
}

// @2226604
s32 func_ov004_02226604(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 8);
    }
    return 0;
}

// @22265e4
s32 func_ov004_022265e4(void) {
    ObjA *g = CDA;
    if (g) {
        return func_ov004_02227104(g, 9);
    }
    return 0;
}

// @22265c8
s32 func_ov004_022265c8(void) {
    ObjA *g = CDA;
    if (g) {
        return g->unk_efc;
    }
    return 0;
}

// @2226574
BOOL func_ov004_02226574(void) {
    ObjA *g = CDA;
    if (g) {
        u32 t = _ZN12Unk_0205454c13func_0205458cEv((u8 *)g + 0x348);
        if (t == func_ov004_02224d8c((u8 *)g + 0x9ac, 0xb)) {
            if (((Unk_ov004_02226574_Bits *)((u8 *)CDA + 0x3ec))->mid == 9) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @2226520
BOOL func_ov004_02226520(void) {
    ObjA *g = CDA;
    if (g) {
        u32 t = _ZN12Unk_0205454c13func_0205458cEv((u8 *)g + 0x348);
        if (t == func_ov004_02224d8c((u8 *)g + 0x9ac, 0xc)) {
            if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)CDA + 0x3e4)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @22264dc
s32 func_ov004_022264dc(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u32 a7, u32 a8) {
    u32 t = _ZN12Unk_0205454c13func_0205458cEv(m);
    if (t != func_ov004_02224d8c(res, id)) {
        _ZN12Unk_0205454c13func_02054720Eiiitt(m, func_ov004_02224d8c(res, id), a5, a6, *(u16 *)&a7, *(u16 *)&a8);
    }
}

// @22264b8
void func_ov004_022264b8(void) {
    ObjA *g = CDA;
    if (g) {
        g->unk_ef6 = 1;
        CDA->unk_ef7 = 1;
    }
}

// @22264a0
void func_ov004_022264a0(void) {
    ObjA *g = CDA;
    if (g) {
        g->unk_ef8 = 1;
    }
}
