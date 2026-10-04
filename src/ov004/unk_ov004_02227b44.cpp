// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/Unk_ov004_Rgba.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "gfx/Unk_02055704.h"
#include "game/Unk_ov004_02224ee4_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "room/RoomObjRes.h"
#include "room/RoomObjTex.h"
#include "gfx/CachedModel.h"

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



// a 4-byte colour record whose constructor is inline (the __sinit of this unit initialises six of them)

struct Unk_ov004_02227728_Rec {
    u16 (*unk_00)(u32);
    u32 numItems;
    const char *arcPath;
    const char *texPath;
};

class MuseumDisplay : public RoomObjActor {
public:
    MuseumDisplay();
    virtual ~MuseumDisplay();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    BOOL isShownNode(s32 c);
    void selectNodes();
    void setNodeVisibility(s32 c, void *o);

    s8 *shownNodes;
};

struct Unk_ov004_02227bfc_Out {
    u8 pad_00[0xb8];
    s32 *visAnmResult;
};

struct Unk_ov004_02227cbc_Obj {
    u8 pad_00[0x14];
    void (*nodeCallback)(void *);
    u8 pad_18[0x8e - 0x14 - 4];
    u8 nodeCallbackTiming;
};

struct Unk_ov004_02227ccc_Sub {
    u8 pad_00[0x2c];
    MuseumDisplay *userPtr;
};
struct Unk_ov004_02227ccc_Ctx {
    u8 unk_00;
    u8 operand;
};
struct Unk_ov004_02227ccc_Obj {
    Unk_ov004_02227ccc_Ctx *sbcCmd;
    Unk_ov004_02227ccc_Sub *renderObj;
};

extern "C" {
extern void *gBgHeap;
extern u8 data_021ed0a0[];
s32 RoomObjRes_GetBca(void *, u32);
void *Heap_Alloc(void *heap, u32 size);
s32 _ZN10MuseumData9isDonatedEPt(void *p, u16 *v);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 _ZN12G3dResAccess13func_02056fccEi(void *p, char *name);
s32 _ZN9AnimModel12drawAnimatedEPv(void *p, u32 a);
s32 _ZN5Model15setInitCallbackEii(void *p, void *fn, void *self);
void MuseumDisplay_InitRenderObj(void *p);
void MuseumDisplay_NodeCallback(Unk_ov004_02227ccc_Obj *o);
const Unk_ov004_02227728_Rec *MuseumDisplay_GetKindInfo(u32 i);
u16 MuseumDisplay_GetPaintingItem(u32 i);
MuseumDisplay *MuseumDisplay_Create();
void Item_MakeInsect();
}

#define F(T, off) (*(T *)((u8 *)this + off))
// declarations (definition order below sets the data layout)
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e08; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e18; }
extern "C" { extern char sMuseumPictureTexPath[0x20]; }
extern "C" { extern char sMuseumDisplayNodeName[0x28]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e14; }
extern "C" { extern char sMuseumInsectTexPath[0x20]; }
extern "C" { extern char sMuseumInsectArcPath[0x1c]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e1c; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e10; }
extern "C" { extern const Unk_ov004_02227728_Rec sMuseumDisplayKinds[2]; }
extern "C" { extern Unk_ov004_Rgba data_ov004_02250e0c; }
extern "C" { extern char sMuseumPictureArcPath[0x1c]; }
extern "C" { extern Unk_ov004_Scene_Entry sMuseumDisplayProfile; }

extern "C" Unk_ov004_Rgba data_ov004_02250e08(31, 20, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e18(20, 20, 31, 31);

extern "C" char sMuseumPictureTexPath[0x20] = "/roomObj/obj_ms_picture.nsbtx";

extern "C" char sMuseumDisplayNodeName[0x28] = {0};

extern "C" Unk_ov004_Rgba data_ov004_02250e14(31, 31, 20, 31);

extern "C" char sMuseumInsectTexPath[0x20] = "/roomObj/obj_ms_insectA.nsbtx";

extern "C" char sMuseumInsectArcPath[0x1c] = "/roomObj/obj_ms_insectA.arc";

extern "C" Unk_ov004_Rgba data_ov004_02250e1c(20, 31, 20, 31);

extern "C" Unk_ov004_Rgba data_ov004_02250e10(20, 31, 31, 31);

extern "C" const Unk_ov004_02227728_Rec sMuseumDisplayKinds[2] = {
    {MuseumDisplay_GetPaintingItem, 0x14, sMuseumPictureArcPath, sMuseumPictureTexPath},
    {(u16 (*)(u32))Item_MakeInsect, 0x38, sMuseumInsectArcPath, sMuseumInsectTexPath},
};

extern "C" Unk_ov004_Rgba data_ov004_02250e0c(20, 24, 24, 31);

// ---------------------------------------------------------------- data
extern "C" char sMuseumPictureArcPath[0x1c] = "/roomObj/obj_ms_picture.arc";

extern "C" Unk_ov004_Scene_Entry sMuseumDisplayProfile = {(void *(*)())MuseumDisplay_Create, 0x14, 0x18, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" MuseumDisplay *MuseumDisplay_Create() {
    return new MuseumDisplay();
}

extern "C" u16 MuseumDisplay_GetPaintingItem(u32 i) {
    return i < 0x14 ? i * 4 + 0x3894 : 0x3894;
}

extern "C" const Unk_ov004_02227728_Rec *MuseumDisplay_GetKindInfo(u32 i) {
    if (i < 2) {
        return &sMuseumDisplayKinds[i];
    }
    return &sMuseumDisplayKinds[0];
}

extern "C" void MuseumDisplay_NodeCallback(Unk_ov004_02227ccc_Obj *o) {
    MuseumDisplay *b = o->renderObj->userPtr;
    if (b != 0) {
        b->setNodeVisibility(o->sbcCmd->operand, o);
    }
}

extern "C" void MuseumDisplay_InitRenderObj(void *p) {
    Unk_ov004_02227cbc_Obj *o = (Unk_ov004_02227cbc_Obj *)p;
    o->nodeCallback = (void (*)(void *))MuseumDisplay_NodeCallback;
    o->nodeCallbackTiming = 2;
}

MuseumDisplay::MuseumDisplay() {}

MuseumDisplay::~MuseumDisplay() {}

BOOL MuseumDisplay::vfunc_00() {
    const Unk_ov004_02227728_Rec *r = MuseumDisplay_GetKindInfo(F(s32, 0x08));
    loadResources((char *)r->arcPath, (char *)r->texPath);
    _ZN5Model15setInitCallbackEii((u8 *)this + 0xec, (void *)MuseumDisplay_InitRenderObj, this);
    selectNodes();
    return TRUE;
}

BOOL MuseumDisplay::onExecute() {
    return TRUE;
}

BOOL MuseumDisplay::onDraw() {
    _ZN9AnimModel12drawAnimatedEPv((u8 *)this + 0xec, 0);
    return TRUE;
}

BOOL MuseumDisplay::vfunc_0c() {
    releaseResources();
    return TRUE;
}

void MuseumDisplay::setNodeVisibility(s32 c, void *o) {
    *((Unk_ov004_02227bfc_Out *)o)->visAnmResult = isShownNode(c);
}

void MuseumDisplay::selectNodes() {
    const Unk_ov004_02227728_Rec *r = MuseumDisplay_GetKindInfo(F(s32, 0x08));
    shownNodes = (s8 *)Heap_Alloc(gBgHeap, r->numItems);
    u32 z = 0;
    u32 i;
    for (i = 0; i < r->numItems; i++) {
        u16 v = r->unk_00(i);
        u32 f = z;
        if (_ZN10MuseumData9isDonatedEPt(data_021ed0a0, &v) != 0) {
            f = 1;
        }
        func_020639e8(sMuseumDisplayNodeName, "p%d_%d", i, f);
        shownNodes[i] = _ZN12G3dResAccess13func_02056fccEi(F(void *, 0x148), sMuseumDisplayNodeName);
    }
}

BOOL MuseumDisplay::isShownNode(s32 c) {
    const Unk_ov004_02227728_Rec *r = MuseumDisplay_GetKindInfo(F(s32, 0x08));
    u32 i = 0;
    u32 n = r->numItems;
    for (; i < n; i++) {
        if (c == shownNodes[i]) {
            return TRUE;
        }
    }
    return FALSE;
}
