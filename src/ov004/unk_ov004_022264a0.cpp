// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"

// shared_0224d4e8.h.txt -- final declaration of class RoomObjActor (defined in ov004 TU17, 0x0221e7a8-0x02225290).
// Paste this block unchanged into TU18..TU26 (it is the base of 0224d618 (TU18), 0224d80c (TU19), 0224dd98 (TU23),
// 0224def8 (TU24), 0224e034 (TU25), 0224e2b8 (TU26)).  It is what TU17's unit.cpp compiles; vtable symbols in the
// original (0x0224d4e0, 0x70 bytes):
//   slot 00 ProcBase::vfunc_00        04 M::vfunc_04               08 Character::postCreate(s32)
//   0c Base::vfunc_0c   10 M::vfunc_10   14 Actor::vfunc_14   18 Base::vfunc_18   1c M::vfunc_1c
//   20 M::vfunc_20(u32) (symbols.txt calls it func_ov004_022250cc: renames.txt  ov004 022250cc _ZN12RoomObjActor8vfunc_20Ej)
//   24 Base::vfunc_24   28 Actor::preDraw   2c Actor::postDraw   30..3c Base   40 D1  44 D0
//   48..5c Character (vfunc_48/4c/50/54/58/5c)   60 M::changeSyncState(u32)   64 M::getSoundPos(Vec *)
// Notes for derived classes:
//  * M's constructor is the base-object ctor _ZN12RoomObjActorC2Ev (0x02225244, the only ctor in the original);
//    TU17 defines it as an extern "C" function with that name, derived constructors call it as M::M() (C2).
//  * The helper members unk_1a4 (RoomObjRes: real C1/D1 methods), unk_248 (RoomObjTex) and unk_250
//    (RoomObjSe) are driven through plain extern "C" functions func_ov004_02224xxxx(void *self, ...) (their symbols.txt
//    names); the inline member wrappers below call them.  Their destructors are called by M's own destructor bodies
//    (RoomObj_DestructSe / RoomObjTex_Destruct), so RoomObjTex and RoomObjSe have no destructor here.
//  * ProcBase .. Character are an own copy of the library chain (the header GameProc.h names slot 08
//    vfunc_08, the real symbol is Character::postCreate(s32); slot 20 takes a u32).  Do not also include GameProc.h.
//  * Names a derived class must not reuse: unk_ea (u8, 0xff = none), unk_ec (AnimModel), unk_1a4, unk_248, unk_250.
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
    /* 0x5c */ s32 position[3];
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

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
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

class CachedModel : public Unk_02055704 {
public:
    CachedModel();
    virtual ~CachedModel();
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

class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *unk_b4;

    s32 attachAnim();
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
    // declared in BlendAnimModel in src/main, but it is called on this object
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

extern "C" {
s32 RoomObjRes_GetBca(void *self, u32 i);
void RoomObjRes_Free(void *self);
void RoomObjRes_Load(void *self, const char *s);
void *RoomObjRes_GetModel(void *self);
void RoomObjTex_Construct(void *self);
void RoomObjTex_Destruct(void *self);
void RoomObjTex_Reset(void *self);
void RoomObjTex_Load(void *self, const char *s);
u32 RoomObjTex_Get(void *self);
void RoomObj_ConstructSe(void *self);
void RoomObj_DestructSe(void *self);
void RoomObj_PlaySe(void *self, s32 v);
void RoomObj_DeactivateSe(void *self);
void RoomObj_SetSePos(void *self, void *v);
void RoomObj_ActivateSe(void *self);
}

// ---- helper objects at +0x1a4, +0x248, +0x250 (their other methods live in ov004_054)
class RoomObjRes {
public:
    RoomObjRes();
    ~RoomObjRes();
    void clear();
    inline s32 RoomObjRes_GetBca(u32 i) { return ::RoomObjRes_GetBca(this, i); }
    inline void RoomObjRes_Free() { ::RoomObjRes_Free(this); }
    inline void RoomObjRes_Load(const char *s) { ::RoomObjRes_Load(this, s); }
    inline void *RoomObjRes_GetModel() { return ::RoomObjRes_GetModel(this); }

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    u32 unk_00;
    u8 unk_04;
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    u32 unk_00[0x10];
};

class RoomObjActor : public Character {
public:
    RoomObjActor();
    virtual ~RoomObjActor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL changeSyncState(u32 v);
    virtual void getSoundPos(Unk_ov004_02224ee4_Vec *out);

    void setSyncSlot(u32 v);
    s32 storeSyncState();
    s32 getSyncState();
    void releaseResources();
    void loadResourcesByName(char *name);
    void loadResources(char *a, char *b);

    /* 0xec */ AnimModel unk_ec;
    /* 0x1a4 */ RoomObjRes unk_1a4;
    /* 0x248 */ RoomObjTex unk_248;
    /* 0x250 */ RoomObjSe unk_250;
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

class CafeCoffeeSet : public RoomObjActor {
public:
    CafeCoffeeSet();
    virtual ~CafeCoffeeSet();
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
extern void *volatile sCafeCoffeeSet;
extern Mtx data_021f47e0;
extern void *gBgHeap;
extern u8 data_021ed0a0[];
u32 _ZN14BlendAnimModel9getAnmResEv(void *);
s32 _ZN14BlendAnimModel8initAnimEiiitt(void *, u32, u32, u32, u32, u32);
s32 _ZN9AnimModel10attachAnimEv(void *);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, void *);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 _ZN9AnimModel12drawAnimatedEPv(void *, u32);
s32 _ZN9AnimModel8stepAnimEv(void *);
s32 _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *, void *, u32);
s32 NNS_G3dBindMdlTex(void *, u32);
s32 NNS_G3dBindMdlPltt(void *, u32);
s32 Camera_RestorePrevMode(void);
s32 Camera_MuteSe(void);
s32 Camera_SetMode4(void);
s32 Effect_End(void *);
s32 Effect_CreateById(u32 a, void *b, void *c, u32 d);
u32 SpNpcBrewster_GetAnimFrame(void);
u32 SpNpcBrewster_GetAnimState(void);
void *SpNpcBrewster_GetJointMtxB(void);
void *SpNpcBrewster_GetJointMtxE(void);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void *Bgm_GetCurrent(void);
s32 func_020e77cc(void *p, u32 a, u32 b);
Unk_ov004_022275fc_Sess *Snd_GetBeatState(void);
s32 Effect_SetPosition(s32 a, void *b, u32 c, u32 d);
void *Heap_Alloc(void *heap, u32 size);
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void RoomObjTex_Construct(void *);
void RoomObjTex_Destruct(void *);
void *_ZN9AnimModelC1Ev(void *, s32);
void *_ZN9AnimModelD1Ev(void *, s32);
void *_ZN10RoomObjResC1Ev(void *, s32);
void *_ZN10RoomObjResD1Ev(void *, s32);
extern "C" CafeCoffeeSet *CafeCoffeeSet_Create();
void CafeCoffeeSet_UpdateMatrices(void *ov);
BOOL CafeCoffeeSet_ChangeState(void *ov, s32 n);
void CafeCoffeeSet_UpdateState(ObjB *o);
BOOL CafeCoffeeSet_EnterState00(ObjB *o);
void CafeCoffeeSet_UpdateState00(ObjB *o);
BOOL CafeCoffeeSet_EnterState01(ObjB *o);
void CafeCoffeeSet_UpdateState01(ObjB *o);
BOOL CafeCoffeeSet_EnterState02(ObjB *o);
void CafeCoffeeSet_UpdateState02(ObjB *o);
BOOL CafeCoffeeSet_EnterState03(ObjB *o);
void CafeCoffeeSet_UpdateState03(ObjA *o);
BOOL CafeCoffeeSet_EnterState04(ObjA *o);
void CafeCoffeeSet_UpdateState04(ObjA *o);
BOOL CafeCoffeeSet_EnterState05(void);
void CafeCoffeeSet_UpdateState05(ObjA *o);
BOOL CafeCoffeeSet_EnterState06(void);
void CafeCoffeeSet_UpdateState06(ObjA *o);
BOOL CafeCoffeeSet_EnterState08(ObjA *o);
void CafeCoffeeSet_UpdateState08(ObjA *o);
BOOL CafeCoffeeSet_EnterState09(void);
#define M0 (&o->unk_290[0])
#define M1 (&o->unk_290[1])
#define M2 (&o->unk_290[2])
#define R0 (&o->unk_908[0])
#define R1 (&o->unk_908[1])
#define R2 (&o->unk_908[2])
#define UP(id, m, r, a5, a7) CafeCoffeeSet_SwitchAnim(o, id, m, r, a5, 0x1000, a7, 0)

void CafeCoffeeSet_UpdateState09(ObjA *o);
void CafeCoffeeSet_SyncToBrewster(void);
void CafeCoffeeSet_LoadPart(void *ov, u32 idx, const char *id, const char *x);
s32 CafeCoffeeSet_ReleasePart(void *ov, u32 idx);
void CafeCoffeeSet_InitPartAnim(void *ov, u32 idx);
s32 CafeCoffeeSet_SetState00(void);
s32 CafeCoffeeSet_SetState01(void);
s32 CafeCoffeeSet_SetState02(void);
s32 CafeCoffeeSet_SetState03(void);
s32 CafeCoffeeSet_SetState04(void);
s32 CafeCoffeeSet_SetState05(void);
s32 CafeCoffeeSet_SetState06(void);
s32 CafeCoffeeSet_SetState07(void);
s32 CafeCoffeeSet_SetState08(void);
s32 CafeCoffeeSet_SetState09(void);
s32 CafeCoffeeSet_GetState(void);
BOOL CafeCoffeeSet_IsAnim0BAtFrame9(void);
BOOL CafeCoffeeSet_IsAnim0CDone(void);
s32 CafeCoffeeSet_SwitchAnim(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u32 a7, u32 a8);
void CafeCoffeeSet_StartEffectB(void);
void CafeCoffeeSet_SetFlagEF8(void);
}

#define CDA (*(ObjA * volatile *)&sCafeCoffeeSet)
#define CDB (*(ObjB * volatile *)&sCafeCoffeeSet)
#define CDC (*(CafeCoffeeSet * volatile *)&sCafeCoffeeSet)
// declarations (definition order below sets the data layout)
extern "C" { extern FxVec3 data_ov004_02250d2c; }
extern "C" { extern FxVec3 data_ov004_02250d44; }
extern "C" { extern FxVec3 data_ov004_02250d5c; }
extern "C" { extern void *data_ov004_0224d920[2]; }
extern "C" { extern void *data_ov004_0224d8f8[2]; }
extern "C" { extern void *data_ov004_0224d8e0[2]; }
extern "C" { extern FxVec3 data_ov004_02250cd8; }
extern "C" { extern void *data_ov004_0224d8d8[2]; }
extern "C" { extern void *volatile sCafeCoffeeSet; }
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
extern "C" { extern Unk_ov004_Scene_Entry sCafeCoffeeSetProfile; }// declarations (definition order below sets the data layout)
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
extern "C" { extern void *volatile sCafeCoffeeSet; }
extern "C" { extern void *data_ov004_0224d8c8[2]; }
extern "C" { extern Unk_ov004_Scene_Entry sCafeCoffeeSetProfile; }

extern "C" FxVec3 data_ov004_02250d2c(0, 0, 0);

extern "C" FxVec3 data_ov004_02250d44(0x17700, 0x1900, 0x15800);

extern "C" void *data_ov004_0224d938[2] = {(void *)CafeCoffeeSet_UpdateState04, 0};

extern "C" FxVec3 data_ov004_02250d5c(0x17800, 0x1a00, 0x13400);

extern "C" void *data_ov004_0224d8e0[2] = {(void *)CafeCoffeeSet_UpdateState08, 0};

extern "C" FxVec3 data_ov004_02250cd8(0x10c00, 0x1600, 0x1b000);

extern "C" FxVec3 data_ov004_02250cf0(0x16a00, 0x1900, 0x13000);

extern "C" void *data_ov004_0224d918[2] = {(void *)CafeCoffeeSet_UpdateState09, 0};

extern "C" void *data_ov004_0224d908[2] = {(void *)CafeCoffeeSet_UpdateState00, 0};

extern "C" FxVec3 data_ov004_02250d08(0x16600, 0x1900, 0x11e00);

extern "C" void *data_ov004_0224d958[2] = {(void *)CafeCoffeeSet_EnterState02, 0};

extern "C" void *data_ov004_0224d950[2] = {(void *)CafeCoffeeSet_EnterState03, 0};

extern "C" void *data_ov004_0224d948[2] = {(void *)CafeCoffeeSet_EnterState04, 0};

extern "C" void *data_ov004_0224d940[2] = {(void *)CafeCoffeeSet_EnterState05, 0};

extern "C" void *data_ov004_0224d8d0[2] = {(void *)CafeCoffeeSet_EnterState06, 0};

extern "C" void *data_ov004_0224d8e8[2] = {(void *)CafeCoffeeSet_UpdateState05, 0};

extern "C" void *data_ov004_0224d910[2] = {(void *)CafeCoffeeSet_EnterState09, 0};

extern "C" void *data_ov004_0224d930[2] = {(void *)CafeCoffeeSet_EnterState08, 0};

extern "C" void *data_ov004_0224d960[2] = {(void *)CafeCoffeeSet_EnterState01, 0};

#define D2C ((s32 *)&data_ov004_02250d2c)
#define D5C ((s32 *)&data_ov004_02250d5c)
#define DCD8 ((s32 *)&data_ov004_02250cd8)
#define DCF0 ((s32 *)&data_ov004_02250cf0)
#define DD08 ((s32 *)&data_ov004_02250d08)

// @2227b28
extern "C" CafeCoffeeSet *CafeCoffeeSet_Create() {
    return new CafeCoffeeSet();
}

// @2227ab0
CafeCoffeeSet::CafeCoffeeSet() {
    __cxa_vec_ctor(unk_290, 9, 0xb8, (void *(*)(void *))_ZN9AnimModelC1Ev, _ZN9AnimModelD1Ev);
    __cxa_vec_ctor(unk_908, 9, 0xa4, (void *(*)(void *))_ZN10RoomObjResC1Ev, _ZN10RoomObjResD1Ev);
    __cxa_vec_ctor(unk_ecc, 9, 4, (void *(*)(void *))RoomObjTex_Construct, (void *(*)(void *, s32))RoomObjTex_Destruct);
}

// @22279f0
CafeCoffeeSet::~CafeCoffeeSet() {
    __cxa_vec_cleanup(unk_ecc, 9, 4, (void *(*)(void *, s32))RoomObjTex_Destruct);
    __cxa_vec_cleanup(unk_908, 9, 0xa4, _ZN10RoomObjResD1Ev);
    __cxa_vec_cleanup(unk_290, 9, 0xb8, _ZN9AnimModelD1Ev);
}

// @2227728
BOOL CafeCoffeeSet::vfunc_00() {
    CDC = this;
    loadResources("/roomObj/obj_cafe1.arc", "/roomObj/obj_cafe1.nsbtx");
    CafeCoffeeSet_LoadPart(this, 0, "/roomObj/obj_cafe2.arc", "/roomObj/obj_cafe2.nsbtx");
    CafeCoffeeSet_LoadPart(this, 1, "/roomObj/obj_cafe3.arc", "/roomObj/obj_cafe3.nsbtx");
    CafeCoffeeSet_LoadPart(this, 2, "/roomObj/obj_cafe4.arc", "/roomObj/obj_cafe4.nsbtx");
    CafeCoffeeSet_LoadPart(this, 3, "/roomObj/obj_cafe5.arc", "/roomObj/obj_cafe5.nsbtx");
    CafeCoffeeSet_LoadPart(this, 4, "/roomObj/obj_cafe3.arc", "/roomObj/obj_cafe3.nsbtx");
    CafeCoffeeSet_LoadPart(this, 5, "/roomObj/obj_cafe4.arc", "/roomObj/obj_cafe4.nsbtx");
    CafeCoffeeSet_LoadPart(this, 6, "/roomObj/obj_cafe3.arc", "/roomObj/obj_cafe3.nsbtx");
    CafeCoffeeSet_LoadPart(this, 7, "/roomObj/obj_cafe4.arc", "/roomObj/obj_cafe4.nsbtx");
    CafeCoffeeSet_LoadPart(this, 8, "/roomObj/obj_cafe6.arc", "/roomObj/obj_cafe6.nsbtx");
    if (RoomObjRes_GetBca((u8 *)this + 0x1a4, 0) != 0) {
        if (_ZN9AnimModel11allocAnmObjEPv((u8 *)this + 0xec, gBgHeap) != 0) {
            _ZN14BlendAnimModel8initAnimEiiitt((u8 *)this + 0xec, RoomObjRes_GetBca((u8 *)this + 0x1a4, 0), 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv((u8 *)this + 0xec);
            F(u32, 0x198) = 0;
        }
    }
    u8 i = 0;
    do {
        CafeCoffeeSet_InitPartAnim(this, i);
        i++;
    } while (i < 9);
    CafeCoffeeSet_ChangeState(this, 0);
    unk_ef3 = 1;
    CafeCoffeeSet_SwitchAnim(this, 8, &unk_290[4], &unk_908[4], 0, 0x1000, 0, 0);
    CafeCoffeeSet_SwitchAnim(this, 6, &unk_290[5], &unk_908[5], 0, 0x1000, 0, 0);
    CafeCoffeeSet_SwitchAnim(this, 8, &unk_290[6], &unk_908[6], 0, 0x1000, 0, 0);
    CafeCoffeeSet_SwitchAnim(this, 6, &unk_290[7], &unk_908[7], 0, 0x1000, 0, 0);
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
BOOL CafeCoffeeSet::onExecute() {
    ObjB *o = (ObjB *)this;
    u8 i;
    if (func_020e77cc(Bgm_GetCurrent(), 0x63, 0xab)) {
        Unk_ov004_022275fc_Sess *t = Snd_GetBeatState();
        if (t != NULL) {
            if (t->unk_03 != 1) {
                o->unk_190 = 0;
                o->unk_198 = t->unk_10;
                _ZN9AnimModel8stepAnimEv((u8 *)o + 0xec);
                o->unk_198 = 0;
                o->unk_334 = 0;
                o->unk_33c = t->unk_10;
                _ZN9AnimModel8stepAnimEv((u8 *)o + 0x290);
                o->unk_33c = 0;
            }
        }
    }
    _ZN9AnimModel8stepAnimEv((u8 *)o + 0xec);
    for (i = 0; i < 9; i++) {
        _ZN9AnimModel8stepAnimEv((u8 *)o + 0x290 + i * 0xb8);
    }
    CafeCoffeeSet_UpdateState(o);
    if (o->unk_f38 != -1) {
        Effect_SetPosition(o->unk_f38, (u8 *)o + 0xf10, 0, 0);
    }
    if (o->unk_ef4 != 0) {
        if (o->unk_f3c == -1) {
            o->unk_f3c = Effect_CreateById(0x6b, (u8 *)o + 0xf1c, (u8 *)o + 0xf34, 0);
        }
    }
    if (o->unk_ef6 != 0) {
        if (o->unk_f40 == -1) {
            o->unk_f40 = Effect_CreateById(0x6b, (u8 *)o + 0xf28, (u8 *)o + 0xf36, 0);
        }
    }
    return TRUE;
}

// @22275f8
BOOL CafeCoffeeSet::onDraw() {
    ObjB *o = (ObjB *)this;
    return TRUE;
}

// @2227228
void CafeCoffeeSet_UpdateMatrices(void *ov) {
    ObjB *o = (ObjB *)ov;
    u8 i;
    data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
    o->unk_150 = data_021f47e0;
    data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxE();
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
            data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
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
            data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
            o->unk_f10 = data_021f47e0.v[9];
            o->unk_f14 = data_021f47e0.v[10];
            o->unk_f18 = data_021f47e0.v[11];
        }
    } else {
        data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
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
            data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
        }
    } else if (st == 6) {
        if ((s32)o->unk_4a4.mid >= (s32)o->unk_4a0.mid - 0x2d) {
            func_020e8388(&data_021f47e0, D2C[0], D2C[1], D2C[2]);
        } else {
            data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
        }
    } else {
        data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxB();
    }
    o->unk_464 = data_021f47e0;
    if (o->unk_55c.mid >= 0xf && o->unk_55c.mid <= 0x48) {
        data_021f47e0 = *(Mtx *)SpNpcBrewster_GetJointMtxE();
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
        _ZN9AnimModel12drawAnimatedEPv((u8 *)o + 0xec, NULL);
    }
    for (i = 0; i < 9; i++) {
        if (o->unk_ef0[i] != 0) {
            _ZN9AnimModel12drawAnimatedEPv((u8 *)o + 0x290 + i * 0xb8, NULL);
        }
    }
}

// @22271f4
BOOL CafeCoffeeSet::vfunc_0c() {
    ObjB *o = (ObjB *)this;
    u8 i;
    ((RoomObjActor *)o)->releaseResources();
    for (i = 0; i < 9; i++) {
        CafeCoffeeSet_ReleasePart(o, i);
    }
    CDB = NULL;
    return TRUE;
}

// @2227104
BOOL CafeCoffeeSet_ChangeState(void *ov, s32 n) {
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

extern "C" void *data_ov004_0224d900[2] = {(void *)CafeCoffeeSet_UpdateState01, 0};

extern "C" void *data_ov004_0224d8f8[2] = {(void *)CafeCoffeeSet_UpdateState02, 0};

extern "C" void *data_ov004_0224d8f0[2] = {(void *)CafeCoffeeSet_UpdateState03, 0};

extern "C" void *data_ov004_0224d928[2] = {(void *)CafeCoffeeSet_EnterState03, 0};

extern "C" void *data_ov004_0224d920[2] = {(void *)CafeCoffeeSet_UpdateState06, 0};

extern "C" void *data_ov004_0224d8d8[2] = {(void *)CafeCoffeeSet_UpdateState03, 0};

extern "C" void *volatile sCafeCoffeeSet = 0;

// @2227024
void CafeCoffeeSet_UpdateState(ObjB *o) {
    static Fn tbl[10] = {*(Fn *)data_ov004_0224d908, *(Fn *)data_ov004_0224d900, *(Fn *)data_ov004_0224d8f8, *(Fn *)data_ov004_0224d8f0,
                              *(Fn *)data_ov004_0224d938, *(Fn *)data_ov004_0224d8e8, *(Fn *)data_ov004_0224d920, *(Fn *)data_ov004_0224d8d8,
                              *(Fn *)data_ov004_0224d8e0, *(Fn *)data_ov004_0224d918};
    s32 i = o->unk_efc;
    if (i < 10) {
        (o->*tbl[i])();
    }
}

// ---------------------------------------------------------------- data
extern "C" void *data_ov004_0224d8c8[2] = {(void *)CafeCoffeeSet_EnterState00, 0};

extern "C" Unk_ov004_Scene_Entry sCafeCoffeeSetProfile = {(void *(*)())CafeCoffeeSet_Create, 0x64, 0x13, {0, 0xc8000, 0x12c000, 0x258000}};

// @222700c
BOOL CafeCoffeeSet_EnterState00(ObjB *o) {
    o->unk_ef9 = 1;
    o->unk_ef0[0] = 1;
    return TRUE;
}

// @2226f6c
void CafeCoffeeSet_UpdateState00(ObjB *o) {
    SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf2) {
        CafeCoffeeSet_SwitchAnim(o, 0, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0x1000, 0, 0);
        CafeCoffeeSet_SwitchAnim(o, 0, (u8 *)o + 0x290, (u8 *)o + 0x908, 0, 0x1000, 0, 0);
    } else if (SpNpcBrewster_GetAnimState() == 0xf4) {
        CafeCoffeeSet_SwitchAnim(o, 1, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0x1000, 0, 0);
        CafeCoffeeSet_SwitchAnim(o, 1, (u8 *)o + 0x290, (u8 *)o + 0x908, 0, 0x1000, 0, 0);
    }
}

// @2226f68
BOOL CafeCoffeeSet_EnterState01(ObjB *o) {
    return TRUE;
}

// @2226ec4
void CafeCoffeeSet_UpdateState01(ObjB *o) {
    SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf3) {
        CafeCoffeeSet_SwitchAnim(o, 0, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        CafeCoffeeSet_SwitchAnim(o, 0, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    } else if (SpNpcBrewster_GetAnimState() == 0xf5) {
        CafeCoffeeSet_SwitchAnim(o, 1, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        CafeCoffeeSet_SwitchAnim(o, 1, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    }
}

// @2226ec0
BOOL CafeCoffeeSet_EnterState02(ObjB *o) {
    return TRUE;
}

// @2226e18
void CafeCoffeeSet_UpdateState02(ObjB *o) {
    SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf3) {
        CafeCoffeeSet_SwitchAnim(o, 3, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        CafeCoffeeSet_SwitchAnim(o, 0, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    } else if (SpNpcBrewster_GetAnimState() == 0xf5) {
        CafeCoffeeSet_SwitchAnim(o, 4, (u8 *)o + 0x348, (u8 *)o + 0x9ac, 0, 0x1000, 0, 0);
        CafeCoffeeSet_SwitchAnim(o, 1, (u8 *)o + 0x400, (u8 *)o + 0xa50, 0, 0x1000, 0, 0);
    }
}

// @2226e14
BOOL CafeCoffeeSet_EnterState03(ObjB *o) {
    return TRUE;
}

// @2226c24
void CafeCoffeeSet_UpdateState03(ObjA *o) {
    u32 t = SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf2) {
        UP(0, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(0, M0, R0, 0, 0);
    } else if (SpNpcBrewster_GetAnimState() == 0xf4) {
        UP(1, (u8 *)o + 0xec, (u8 *)o + 0x1a4, 0, 0);
        UP(1, M0, R0, 0, 0);
    } else if (SpNpcBrewster_GetAnimState() == 0xf6) {
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
    } else if (SpNpcBrewster_GetAnimState() == 0xf3) {
        UP(0, M1, R1, 0, 0);
        UP(0, M2, R2, 0, 0);
    } else if (SpNpcBrewster_GetAnimState() == 0xf5) {
        UP(1, M1, R1, 0, 0);
        UP(1, M2, R2, 0, 0);
    }
}

// @2226be8
BOOL CafeCoffeeSet_EnterState04(ObjA *o) {
    _ZN14BlendAnimModel8initAnimEiiitt(&o->unk_290[3], RoomObjRes_GetBca(&o->unk_908[3], 0), 1, 0x1000, 0, 0);
    return TRUE;
}

// @2226b80
void CafeCoffeeSet_UpdateState04(ObjA *o) {
    SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf7) {
        UP(5, M1, R1, 0, 0);
        UP(3, M2, R2, 0, 0);
    }
}

// @2226b7c
BOOL CafeCoffeeSet_EnterState05(void) {
    return TRUE;
}

// @2226af0
void CafeCoffeeSet_UpdateState05(ObjA *o) {
    u32 t = SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf8) {
        UP(6, M1, R1, 1, 0);
        UP(4, M2, R2, 1, 0);
        if (t == 0x3b) {
            o->unk_f38 = Effect_CreateById(0x6b, (u8 *)o + 0xf10, (u8 *)o + 0x8e, 0);
        }
    }
}

// @2226aec
BOOL CafeCoffeeSet_EnterState06(void) {
    return TRUE;
}

// @2226a80
void CafeCoffeeSet_UpdateState06(ObjA *o) {
    u32 t = SpNpcBrewster_GetAnimFrame();
    if (SpNpcBrewster_GetAnimState() == 0xf8) {
        UP(7, M1, R1, 3, t);
        UP(5, M2, R2, 3, t);
    }
}

// @2226a68
BOOL CafeCoffeeSet_EnterState08(ObjA *o) {
    Effect_End((void *)o->unk_f38);
    return TRUE;
}

// @2226914
void CafeCoffeeSet_UpdateState08(ObjA *o) {
    if (_ZN14BlendAnimModel9getAnmResEv(M1) == RoomObjRes_GetBca(R1, 6) && _ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
        UP(9, M1, R1, 1, 0);
        UP(7, M2, R2, 1, 0);
    } else if (_ZN14BlendAnimModel9getAnmResEv(M1) == RoomObjRes_GetBca(R1, 9) && _ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
        UP(0xa, M1, R1, 1, 0);
        UP(8, M2, R2, 1, 0);
    } else if (_ZN14BlendAnimModel9getAnmResEv(M1) == RoomObjRes_GetBca(R1, 0xa) && _ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
        Camera_MuteSe();
        Camera_SetMode4();
        UP(0xb, M1, R1, 1, 0);
        UP(9, M2, R2, 1, 0);
    }
}

// @2226904
BOOL CafeCoffeeSet_EnterState09(void) {
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
#define UP(id, m, r, a5, a7) CafeCoffeeSet_SwitchAnim(o, id, m, r, a5, 0x1000, a7, 0)

void CafeCoffeeSet_UpdateState09(ObjA *o) {
    if (_ZN14BlendAnimModel9getAnmResEv(M1) == RoomObjRes_GetBca(R1, 0xb)) {
        if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)o + 0x3e4)) {
            UP(0xc, M1, R1, 1, 0);
            UP(0xa, M2, R2, 1, 0);
        }
    }
}

// @2226860
void CafeCoffeeSet_SyncToBrewster(void) {
    ObjA *g = CDA;
    if (g) {
        CafeCoffeeSet_UpdateMatrices(g);
    }
}

// @22267dc
void CafeCoffeeSet_LoadPart(void *ov, u32 idx, const char *id, const char *x) {
    ObjA *o = (ObjA *)ov;
    u8 *b = (u8 *)o;
    void *r = b + 0x908 + idx * 0xa4;
    void *q;
    RoomObjRes_Load(r, id);
    q = b + 0xecc + idx * 4;
    RoomObjTex_Load(q, x);
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(b + 0x290 + idx * 0xb8, RoomObjRes_GetModel(r), 0);
    NNS_G3dBindMdlTex(RoomObjRes_GetModel(r), RoomObjTex_Get(q));
    NNS_G3dBindMdlPltt(RoomObjRes_GetModel(r), RoomObjTex_Get(q));
}

// @22267a8
s32 CafeCoffeeSet_ReleasePart(void *ov, u32 idx) {
    ObjA *o = (ObjA *)ov;
    RoomObjRes_Free(&o->unk_908[idx]);
    RoomObjTex_Reset(&o->unk_ecc[idx]);
}

// @2226724
void CafeCoffeeSet_InitPartAnim(void *ov, u32 idx) {
    ObjA *o = (ObjA *)ov;
    Unk_ov004_02226724_Res *r = &o->unk_908[idx];
    if (RoomObjRes_GetBca(r, 0)) {
        if (_ZN9AnimModel11allocAnmObjEPv(&o->unk_290[idx], gBgHeap)) {
            u32 off = idx * 0xb8;
            void *m = (u8 *)o->unk_290 + off;
            _ZN14BlendAnimModel8initAnimEiiitt(m, RoomObjRes_GetBca(r, 0), 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv(m);
            *(u32 *)((u8 *)o + off + 0x33c) = 0;
        }
    }
}

// @2226704
s32 CafeCoffeeSet_SetState00(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 0);
    }
    return 0;
}

// @22266e4
s32 CafeCoffeeSet_SetState01(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 1);
    }
    return 0;
}

// @22266c4
s32 CafeCoffeeSet_SetState02(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 2);
    }
    return 0;
}

// @22266a4
s32 CafeCoffeeSet_SetState03(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 3);
    }
    return 0;
}

// @2226684
s32 CafeCoffeeSet_SetState04(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 4);
    }
    return 0;
}

// @2226664
s32 CafeCoffeeSet_SetState05(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 5);
    }
    return 0;
}

// @2226644
s32 CafeCoffeeSet_SetState06(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 6);
    }
    return 0;
}

// @2226624
s32 CafeCoffeeSet_SetState07(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 7);
    }
    return 0;
}

// @2226604
s32 CafeCoffeeSet_SetState08(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 8);
    }
    return 0;
}

// @22265e4
s32 CafeCoffeeSet_SetState09(void) {
    ObjA *g = CDA;
    if (g) {
        return CafeCoffeeSet_ChangeState(g, 9);
    }
    return 0;
}

// @22265c8
s32 CafeCoffeeSet_GetState(void) {
    ObjA *g = CDA;
    if (g) {
        return g->unk_efc;
    }
    return 0;
}

// @2226574
BOOL CafeCoffeeSet_IsAnim0BAtFrame9(void) {
    ObjA *g = CDA;
    if (g) {
        u32 t = _ZN14BlendAnimModel9getAnmResEv((u8 *)g + 0x348);
        if (t == RoomObjRes_GetBca((u8 *)g + 0x9ac, 0xb)) {
            if (((Unk_ov004_02226574_Bits *)((u8 *)CDA + 0x3ec))->mid == 9) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @2226520
BOOL CafeCoffeeSet_IsAnim0CDone(void) {
    ObjA *g = CDA;
    if (g) {
        u32 t = _ZN14BlendAnimModel9getAnmResEv((u8 *)g + 0x348);
        if (t == RoomObjRes_GetBca((u8 *)g + 0x9ac, 0xc)) {
            if (_ZN13AnimFrameCtrl10isFinishedEv((u8 *)CDA + 0x3e4)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @22264dc
s32 CafeCoffeeSet_SwitchAnim(void *self, u32 id, void *m, void *res, u8 a5, s32 a6, u32 a7, u32 a8) {
    u32 t = _ZN14BlendAnimModel9getAnmResEv(m);
    if (t != RoomObjRes_GetBca(res, id)) {
        _ZN14BlendAnimModel8initAnimEiiitt(m, RoomObjRes_GetBca(res, id), a5, a6, *(u16 *)&a7, *(u16 *)&a8);
    }
}

// @22264b8
void CafeCoffeeSet_StartEffectB(void) {
    ObjA *g = CDA;
    if (g) {
        g->unk_ef6 = 1;
        CDA->unk_ef7 = 1;
    }
}

// @22264a0
void CafeCoffeeSet_SetFlagEF8(void) {
    ObjA *g = CDA;
    if (g) {
        g->unk_ef8 = 1;
    }
}
