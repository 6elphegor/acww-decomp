// mwcc-version: 1.2/base
#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "gfx/Unk_02055704.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/Unk_ov004_02228a40_Mtx.h"
#include "gfx/AnimFrameCtrl.h"

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

class CachedModel : public Unk_02055704 {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 unk_98;
};


class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    void *anmObj;

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

    u32 archive;
    u32 model;
    u32 bcas[13];
    u32 bmas[13];
    u32 btas[13];
};

class RoomObjTex {
public:
    inline RoomObjTex() { RoomObjTex_Construct(this); }
    inline void RoomObjTex_Reset() { ::RoomObjTex_Reset(this); }
    inline void RoomObjTex_Load(const char *s) { ::RoomObjTex_Load(this, s); }
    inline u32 RoomObjTex_Get() { return ::RoomObjTex_Get(this); }

    u32 texture;
    u8 syncState;
};

class RoomObjSe {
public:
    inline RoomObjSe() { RoomObj_ConstructSe(this); }
    inline void RoomObj_PlaySe(s32 v) { ::RoomObj_PlaySe(this, v); }
    inline void RoomObj_DeactivateSe() { ::RoomObj_DeactivateSe(this); }
    inline void RoomObj_SetSePos(Unk_ov004_02224ee4_Vec *v) { ::RoomObj_SetSePos(this, v); }
    inline void RoomObj_ActivateSe() { ::RoomObj_ActivateSe(this); }

    u32 emitter[0x10];
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

    /* 0xec */ AnimModel model;
    /* 0x1a4 */ RoomObjRes res;
    /* 0x248 */ RoomObjTex tex;
    /* 0x250 */ RoomObjSe se;
};



// model element (0xb8 bytes), only the members touched from this unit
struct Unk_ov004_0224e034_M {
    u8 pad_00[0x5c];
    u32 resMdl;
    u8 pad_60[4];
    Unk_ov004_02228a40_Mtx mtx;
    u8 pad_94[0x9c - 0x94];
    u32 animFrameCtrl;
    s32 numFrames;
    s32 curFrame;
    u8 pad_a8[4];
    s32 frameStep;
    u8 pad_b0[8];
};

// helper table object (0xa4 bytes)
struct Unk_ov004_0224e034_T1 {
    u8 pad_00[0xa4];
};

struct Unk_ov004_0224e034_T2 {
    u32 unk_00;
};

struct Unk_ov004_0224e034_E {
    u32 pad_00[2];
    u32 curFrame;
    u32 pad_0c;
    u32 frameStep;
    u32 pad_14;
    u32 *anmObj;
    u8 pad_1c[0x20 - 0x1c];
};


class TarotProps : public RoomObjActor {
public:
    TarotProps();
    virtual ~TarotProps();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void releasePart(s32 i);
    void loadPart(s32 i, void *a, void *b);
    void execAct03();
    BOOL enterAct03();
    void execAct02();
    BOOL enterAct02();
    void execAct01();
    BOOL enterAct01();
    void execAct00();
    BOOL enterAct00();
    void execAct();
    BOOL changeAct(s32 i);
    void drawAtKatrina();

    /* 0x290 */ Unk_ov004_0224e034_M partModels[3];
    /* 0x4b8 */ Unk_ov004_0224e034_T1 partRes[3];
    /* 0x6a4 */ Unk_ov004_0224e034_T2 partTex[3];
    /* 0x6b0 */ u8 partVisible[3];
    /* 0x6b3 */ u8 pad_6b3;
    /* 0x6b4 */ Unk_ov004_0224e034_E part1MatAnim;
    /* 0x6d4 */ u8 modelVisible;
    /* 0x6d5 */ u8 pad_6d5[3];
    /* 0x6d8 */ s32 act;
};

typedef void (TarotProps::*Unk_ov004_02229148_Fn)();
typedef BOOL (TarotProps::*Unk_ov004_022291d4_Fn)();

extern "C" {
extern void *gBgHeap;
extern Unk_ov004_02228a40_Mtx data_021f47e0;
extern TarotProps *sTarotProps;
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *(*ctor)(void *), void *(*dtor)(void *, s32));
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *(*dtor)(void *, s32));
void RoomObjRes_Free(void *);
void RoomObjTex_Reset(void *);
void RoomObjRes_Load(void *, const char *);
void RoomObjTex_Load(void *, const char *);
void *RoomObjRes_GetModel(void *);
u32 RoomObjTex_Get(void *);
s32 RoomObjRes_GetBca(void *, u32);
s32 RoomObjRes_GetBta(void *, u32);
s32 _ZN9AnimModel12drawAnimatedEPv(void *, u32);
s32 _ZN9AnimModel8stepAnimEv(void *);
s32 _ZN13AnimFrameCtrl4stepEv(void *);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *, void *, u32);
s32 NNS_G3dBindMdlTex(void *, u32);
s32 NNS_G3dBindMdlPltt(void *, u32);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, void *);
s32 _ZN14BlendAnimModel8initAnimEiiitt(void *, u32, u32, u32, u32, u32);
s32 _ZN9AnimModel10attachAnimEv(void *);
s32 _ZN9ModelAnim11allocMatAnmEjPv(void *, u32, void *);
s32 _ZN9ModelAnim4initEiiit(void *, u32, u32, u32, u32);
void *_ZN5Model12getRenderObjEv(void *);
s32 _ZN9ModelAnim14addToRenderObjEj(void *, void *);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *);
s32 SpNpcKatrina_GetAnimFrame(void);
Unk_ov004_02228a40_Mtx *SpNpcKatrina_GetJointMtx(void);
void *_ZN9AnimModelC1Ev(void *, s32);
void *_ZN9AnimModelD1Ev(void *, s32);
void *_ZN10RoomObjResC1Ev(void *, s32);
void *_ZN10RoomObjResD1Ev(void *, s32);
void _ZN9ModelAnimC1Ev(void *);
void _ZN9ModelAnimD1Ev(void *);
TarotProps *TarotProps_Create();
}

#define F(T, off) (*(T *)((u8 *)this + off))

// ---------------------------------------------------------------- data
extern "C" Unk_ov004_Scene_Entry sTarotPropsProfile = {(void *(*)())TarotProps_Create, 0x71, 0x1b, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" TarotProps *sTarotProps = 0;

extern "C" TarotProps *TarotProps_Create() {
    return new TarotProps();
}

TarotProps::TarotProps() {
    __cxa_vec_ctor(partModels, 3, 0xb8, (void *(*)(void *))_ZN9AnimModelC1Ev, _ZN9AnimModelD1Ev);
    __cxa_vec_ctor(partRes, 3, 0xa4, (void *(*)(void *))_ZN10RoomObjResC1Ev, _ZN10RoomObjResD1Ev);
    __cxa_vec_ctor(partTex, 3, 4, (void *(*)(void *))RoomObjTex_Construct, (void *(*)(void *, s32))RoomObjTex_Destruct);
    _ZN9ModelAnimC1Ev(&part1MatAnim);
}

TarotProps::~TarotProps() {
    _ZN9ModelAnimD1Ev(&part1MatAnim);
    __cxa_vec_cleanup(partTex, 3, 4, (void *(*)(void *, s32))RoomObjTex_Destruct);
    __cxa_vec_cleanup(partRes, 3, 0xa4, _ZN10RoomObjResD1Ev);
    __cxa_vec_cleanup(partModels, 3, 0xb8, _ZN9AnimModelD1Ev);
}

BOOL TarotProps::vfunc_00() {
    sTarotProps = this;
    loadResources("/roomObj/obj_tarot1.arc", "/roomObj/obj_tarot1.nsbtx");
    loadPart(0, (void *)"/roomObj/obj_tarot2.arc", (void *)"/roomObj/obj_tarot2.nsbtx");
    loadPart(1, (void *)"/roomObj/obj_tarot3.arc", (void *)"/roomObj/obj_tarot3.nsbtx");
    loadPart(2, (void *)"/roomObj/obj_tarot4.arc", (void *)"/roomObj/obj_tarot4.nsbtx");
    if (RoomObjRes_GetBca(&partRes[2], 0)) {
        if (_ZN9AnimModel11allocAnmObjEPv(&partModels[2], gBgHeap)) {
            _ZN14BlendAnimModel8initAnimEiiitt(&partModels[2], RoomObjRes_GetBca(&partRes[2], 0), 1, 0x1000, 0, 0);
            _ZN9AnimModel10attachAnimEv(&partModels[2]);
            partModels[2].frameStep = 0;
        }
    }
    if (_ZN9ModelAnim11allocMatAnmEjPv(&part1MatAnim, partModels[1].resMdl, gBgHeap)) {
        _ZN9ModelAnim4initEiiit(&part1MatAnim, RoomObjRes_GetBta(&partRes[1], 0), 1, 0x1000, 0);
        _ZN9ModelAnim14addToRenderObjEj(&part1MatAnim, _ZN5Model12getRenderObjEv(&partModels[1]));
        part1MatAnim.frameStep = 0;
    }
    changeAct(0);
    return TRUE;
}

BOOL TarotProps::onExecute() {
    _ZN9AnimModel8stepAnimEv(&partModels[2]);
    _ZN13AnimFrameCtrl4stepEv(&part1MatAnim);
    *part1MatAnim.anmObj = part1MatAnim.curFrame;
    func_020e8388(&data_021f47e0, position[0], position[1], position[2]);
    partModels[1].mtx = data_021f47e0;
    partModels[2].mtx = data_021f47e0;
    execAct();
    return TRUE;
}

BOOL TarotProps::onDraw() {
    return TRUE;
}

void TarotProps::drawAtKatrina() {
    Unk_ov004_02228a40_Mtx *m = SpNpcKatrina_GetJointMtx();
    u8 i;
    data_021f47e0 = *m;
    F(Unk_ov004_02228a40_Mtx, 0xec + 0x64) = data_021f47e0;
    partModels[0].mtx = data_021f47e0;
    if (modelVisible) {
        _ZN9AnimModel12drawAnimatedEPv(&model, 0);
    }
    for (i = 0; i < 3; i++) {
        if (partVisible[i]) {
            _ZN9AnimModel12drawAnimatedEPv(&partModels[i], 0);
        }
    }
}

BOOL TarotProps::vfunc_0c() {
    releaseResources();
    releasePart(0);
    releasePart(1);
    releasePart(2);
    sTarotProps = 0;
    return TRUE;
}

BOOL TarotProps::changeAct(s32 i) {
    static Unk_ov004_022291d4_Fn tbl[4] = {&TarotProps::enterAct00, &TarotProps::enterAct01,
                                           &TarotProps::enterAct02, &TarotProps::enterAct03};
    if (i < 4) {
        if ((this->*tbl[i])()) {
            act = i;
            return TRUE;
        }
    }
    return FALSE;
}

void TarotProps::execAct() {
    static Unk_ov004_02229148_Fn tbl[4] = {&TarotProps::execAct00, &TarotProps::execAct01,
                                           &TarotProps::execAct02, &TarotProps::execAct03};
    if (act < 4) {
        (this->*tbl[act])();
    }
}

BOOL TarotProps::enterAct00() {
    u8 i;
    modelVisible = 0;
    for (i = 0; i < 3; i++) {
        partVisible[i] = 0;
    }
    return TRUE;
}

void TarotProps::execAct00() {}

BOOL TarotProps::enterAct01() {
    modelVisible = 1;
    partVisible[0] = 0;
    partVisible[1] = 1;
    partVisible[2] = 0;
    _ZN14BlendAnimModel8initAnimEiiitt(&partModels[2], RoomObjRes_GetBca(&partRes[2], 0), 1, 0x1000, 0, 0);
    _ZN9ModelAnim4initEiiit(&part1MatAnim, RoomObjRes_GetBta(&partRes[1], 0), 1, 0x1000, 0);
    return TRUE;
}

void TarotProps::execAct01() {
    if (SpNpcKatrina_GetAnimFrame() == 0xb) {
        modelVisible = 0;
        partVisible[2] = 1;
    }
}

BOOL TarotProps::enterAct02() {
    modelVisible = 0;
    partVisible[0] = 0;
    partVisible[1] = 1;
    partVisible[2] = 1;
    partModels[2].curFrame = (u32)(partModels[2].numFrames >> 12) << 16 >> 4;
    partModels[2].frameStep = 0;
    part1MatAnim.curFrame = (u32)(*(s32 *)&F(u32, 0x6b8) >> 12) << 16 >> 4;
    part1MatAnim.frameStep = 0;
    return TRUE;
}

void TarotProps::execAct02() {
    if (SpNpcKatrina_GetAnimFrame() == 9) {
        partVisible[0] = 1;
    }
}

BOOL TarotProps::enterAct03() {
    modelVisible = 0;
    partVisible[0] = 1;
    partVisible[1] = 1;
    partVisible[2] = 1;
    _ZN14BlendAnimModel8initAnimEiiitt(&partModels[2], RoomObjRes_GetBca(&partRes[2], 1), 1, 0x1000, 0, 0);
    _ZN9ModelAnim4initEiiit(&part1MatAnim, RoomObjRes_GetBta(&partRes[1], 1), 1, 0x1000, 0);
    return TRUE;
}

void TarotProps::execAct03() {
    if (SpNpcKatrina_GetAnimFrame() == 7) {
        partVisible[0] = 0;
    }
    if (SpNpcKatrina_GetAnimFrame() == 0x12) {
        partVisible[2] = 0;
    }
    if (SpNpcKatrina_GetAnimFrame() == 0x13) {
        modelVisible = 1;
    }
    if (SpNpcKatrina_GetAnimFrame() == 0x25) {
        modelVisible = 0;
    }
    if (_ZN13AnimFrameCtrl10isFinishedEv(&partModels[2].animFrameCtrl)) {
        changeAct(0);
    }
}

extern "C" BOOL TarotProps_StartAct01() {
    if (sTarotProps) {
        return sTarotProps->changeAct(1);
    }
    return FALSE;
}

extern "C" BOOL TarotProps_StartAct02() {
    if (sTarotProps) {
        return sTarotProps->changeAct(2);
    }
    return FALSE;
}

extern "C" BOOL TarotProps_StartAct03() {
    if (sTarotProps) {
        return sTarotProps->changeAct(3);
    }
    return FALSE;
}

extern "C" void TarotProps_Draw() {
    if (sTarotProps) {
        sTarotProps->drawAtKatrina();
    }
}

void TarotProps::loadPart(s32 i, void *a, void *b) {
    Unk_ov004_0224e034_T1 *t1 = &partRes[i];
    RoomObjRes_Load(t1, (const char *)a);
    Unk_ov004_0224e034_T2 *t2 = &partTex[i];
    RoomObjTex_Load(t2, (const char *)b);
    _ZN5Model11setResourceEP16Unk_020553f8_Resj(&partModels[i], RoomObjRes_GetModel(t1), 0);
    {
        void *x = RoomObjRes_GetModel(t1);
        NNS_G3dBindMdlTex(x, RoomObjTex_Get(t2));
    }
    {
        void *x = RoomObjRes_GetModel(t1);
        NNS_G3dBindMdlPltt(x, RoomObjTex_Get(t2));
    }
}

void TarotProps::releasePart(s32 i) {
    RoomObjRes_Free(&partRes[i]);
    RoomObjTex_Reset(&partTex[i]);
}
