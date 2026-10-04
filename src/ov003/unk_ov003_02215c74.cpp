// mwcc-version: 1.2/sp2
// ov003 TU10 (actor 022318e8): .text 0x02215c74-0x02216430
#include "types.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "talk/TalkWindowState.h"
#include "game/FxVec3.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 BuildingActor).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include GameProc.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of TalkMsgRequest
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Character::vfunc_04   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::vfunc_14   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: func_ov009_0225b884 /
//     func_ov009_0225b880, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor7preDrawEj           -> _ZN13BuildingActor8vfunc_20Ej        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  func_ov009_0225b884                           -> _ZN13BuildingActor8vfunc_b4Ev        (0x0225b884)
//   ov009  func_ov009_0225b880                           -> _ZN13BuildingActor8vfunc_b8Ev        (0x0225b880)
//   main   TalkMsgRequest slots: the unit uses the TalkMsgRequest slot names (onMessageStart ... onTalkEnd); no
//          primary-chain class of the family declares a method of these names.
//   ov003  0x0221445c is _ZThn236_N13BuildingActor12onMessageEndEv, the thunk of ov009::onMessageEnd in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot onMessageEnd, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
// Notes:
//  * The ctor of a derived class calls BuildingActor::BuildingActor() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.

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
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slot names are TalkMsgRequest's; slot 0x14
// (onMessageEnd) is overridden by BuildingActor.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};


class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void onMessageStart();
    // Slot 0x14 has the name of BuildingActor::onMessageEnd, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N13BuildingActor12onMessageEndEv (0x0221445c).  The compiler also emits a link-once copy of the
    // thunk in this unit; the linker keeps the first one (unk_ov003_022141bc.cpp) and drops this one.
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};



class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 entryState;
    /* 0x27c */ u8 closedTalk;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 warpTimer;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *colliders;
    /* 0x28c */ u8 colliderCount;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec entryPos;
    /* 0x2b0 */
};

// ---- main-module helper classes ----

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void addToRenderObj(u32 a);
    void initWithTex(s32 a, s32 b, s32 c, s32 e, u16 f);
    BOOL allocMatAnm(u32 a, void *c);

    u32 anmObj;
    u32 resMdl;
};

class AnimModel {
public:
    AnimModel();
    virtual ~AnimModel();
    s32 drawAnimated(void *q);

    u8 pad_04[0x5c - 4];
    void *unk_5c;
    u8 pad_60[0xb8 - 0x60];
};

class MsgString9B {
public:
    MsgString9B();
    ~MsgString9B();
    u32 pad[8];
};

#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define VillagerDataProfileView_getInfo28 _ZN23VillagerDataProfileView9getInfo28Ev
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
extern "C" {
extern u8 gSaveVillagers[];
extern void *gCommManager;
extern void *gFieldStructureHeap;
extern const u8 sVillagerHouseClosedMsgs[];
extern const u8 sVillagerHouseClosedMsgsAlt[];
extern char data_ov003_02235330[];
extern char data_ov003_02235308[];
extern char data_ov003_022352d4[];
extern u32 sVillagerHouses[];

BOOL Building_IsNight(void *p);
void *SaveVillagers_Get(void *p, s32 i);
s32 func_0207e274(void *p);
s32 Villager_GetWhereabouts(void *p);
void NetArea_GetSlotStatus(s32 i, u8 *a, u8 *b, u8 *c);
s32 SceneId_GetVillagerHouse(u32 a);
s32 VillagerId_GetPersonality(void *);

s32 func_020639e8(char *buf, const char *fmt, ...);
void func_01ffd070(Unk_ov003_Vec *out, void *a, void *b);
void NNS_G3dBindMdlTex(void *a, s32 b);
void _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, s32 d, void *e);
void _ZN10VillagerId7getNameEj(void *self, void *x);
void _ZN15TalkWindowState7setSlotEiPv(void *self, s32 a, void *q);
BOOL _ZN11CommManager12isSlotActiveEi(void *self, s32 i);
void *_ZN23VillagerDataProfileView9getInfo28Ev(void *self);
void *_ZN12VillagerData13getVillagerIdEv(void *self);
void *_ZN5Model12getRenderObjEv(void *self);
BOOL _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *self, void *res, u32 b);
void _ZN11MsgString9BC1Ev(void *p);
void _ZN11MsgString9BD1Ev(void *p);
void NNS_G3dBindMdlPltt(void *a, s32 b);

s32 FieldStructureMgr_GetVillagerHouseTex();
s32 VillagerHouseTex_GetDoorOutAnim(s32 a);
s32 VillagerHouseTex_GetDoorInAnim(s32 a);
void *FieldStructureMgr_GetLightUpDeco();
BOOL HouseLightUpDeco_IsLoaded(void *p);
void *HouseLightUpDeco_GetModel(void *p, s32 i);
s32 HouseLightUpDeco_GetTex(void *p);
s32 HouseLightUpDeco_GetTexPattern(void *p);
s32 VillagerHouseTex_GetHouseTex(s32 a, s32 b);
s32 VillagerHouseTex_GetLightTex(s32 a, s32 b);
s32 Field_GetStructureTexSuffix();
void VillagerHouse_Create();
}

static inline s32 Unk_ov003_02215c7c_Idx(BuildingActor *o) {
    BOOL r = FALSE;
    u16 v = o->itemId;
    if (v < 0x5001 || v > 0x5008) {
    } else {
        r = TRUE;
    }
    if (r) {
        return v - 0x5001;
    }
    return -1;
}

struct Unk_ov003_02215fc0_Rec {
    u8 f : 5;
};


// ============================================================ class VillagerHouse
class VillagerHouse : public BuildingActor {
public:
    VillagerHouse();
    virtual ~VillagerHouse();

    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();

    char *getModelName();
    u8 getHouseVariant();
    s32 getHouseStyle();

    /* 0x2b0 */ AnimModel lightUpModel;
    /* 0x368 */ ModelAnim lightUpAnim;
};

extern "C" {
char data_ov003_022352d4[0x14];
u32 sVillagerHouses[8];
char data_ov003_02235308[0x28];
char data_ov003_02235330[0x28];
}

extern "C" void VillagerHouse_Create() {
    new VillagerHouse;
}

VillagerHouse::VillagerHouse() {
    for (u32 i = 0; i < 8; i++) {
        sVillagerHouses[i] = 0;
    }
}

VillagerHouse::~VillagerHouse() {
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 sVillagerHouseClosedMsgsAlt[8];
extern "C" Unk_ov003_SceneEntry sVillagerHouseProfile;
extern "C" const u8 sVillagerHouseClosedMsgs[8];

extern "C" const u8 sVillagerHouseClosedMsgsAlt[8] = { 0x0a, 0x0b, 0x0c, 0x08, 0x09, 0x0d, 0, 0 };
extern "C" const u8 sVillagerHouseClosedMsgs[8] = { 0x10, 0x11, 0x12, 0x0e, 0x0f, 0x13, 0, 0 };

extern "C" Unk_ov003_SceneEntry sVillagerHouseProfile = { (void *(*)())VillagerHouse_Create, 0x1d, 0x23, 0, 0xc8000, 0x12c000, 0x258000 };

BOOL VillagerHouse::vfunc_70() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    static FxVec3 v(-0x2000, 0x1000, 0x2000);
    Unk_ov003_Vec tmp;
    func_01ffd070(&tmp, &position, &v);
    Actor_spawn(0x18, idx, &tmp, 0, this);
    sVillagerHouses[idx] = (u32)this;
    s32 k = getHouseVariant();
    s32 r7 = VillagerHouseTex_GetHouseTex(FieldStructureMgr_GetVillagerHouseTex(), k);
    s32 r4 = VillagerHouseTex_GetLightTex(FieldStructureMgr_GetVillagerHouseTex(), k);
    void *g = modelRes;
    if (r7) {
        NNS_G3dBindMdlTex(g, r7);
    }
    if (r4) {
        NNS_G3dBindMdlTex(g, r4);
        NNS_G3dBindMdlPltt(g, r4);
    }
    if (HouseLightUpDeco_IsLoaded(FieldStructureMgr_GetLightUpDeco())) {
        s32 q = getHouseStyle() >> 2;
        if (_ZN5Model11setResourceEP16Unk_020553f8_Resj(&lightUpModel, HouseLightUpDeco_GetModel(FieldStructureMgr_GetLightUpDeco(), q), 0)) {
            void *a = HouseLightUpDeco_GetModel(FieldStructureMgr_GetLightUpDeco(), q);
            NNS_G3dBindMdlTex(a, HouseLightUpDeco_GetTex(FieldStructureMgr_GetLightUpDeco()));
            void *b = HouseLightUpDeco_GetModel(FieldStructureMgr_GetLightUpDeco(), q);
            NNS_G3dBindMdlPltt(b, HouseLightUpDeco_GetTex(FieldStructureMgr_GetLightUpDeco()));
            if (lightUpAnim.allocMatAnm((u32)lightUpModel.unk_5c, gFieldStructureHeap)) {
                s32 c = HouseLightUpDeco_GetTexPattern(FieldStructureMgr_GetLightUpDeco());
                s32 d = HouseLightUpDeco_GetTex(FieldStructureMgr_GetLightUpDeco());
                lightUpAnim.initWithTex(c, d, 0, 0x1000, 0);
                lightUpAnim.addToRenderObj((u32)_ZN5Model12getRenderObjEv(&lightUpModel));
                *(Unk_ov003_Blk *)((u8 *)this + 0x314) = baseMatrix;
            }
        }
    }
    return TRUE;
}

BOOL VillagerHouse::onExecute() {
    if (HouseLightUpDeco_IsLoaded(FieldStructureMgr_GetLightUpDeco())) {
        *(Unk_ov003_Blk *)((u8 *)this + 0x314) = baseMatrix;
        if ((colliderFlags & 1) == 0) {
            lightUpAnim.step();
            **(u32 **)((u8 *)this + 0x380) = *(u32 *)((u8 *)this + 0x370);
        }
    }
    return TRUE;
}

BOOL VillagerHouse::onDraw() {
    if (HouseLightUpDeco_IsLoaded(FieldStructureMgr_GetLightUpDeco())) {
        lightUpModel.drawAnimated(0);
    }
    return TRUE;
}

BOOL VillagerHouse::vfunc_0c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    sVillagerHouses[idx] = 0;
    return TRUE;
}

s32 VillagerHouse::getHouseStyle() {
    u8 *g = gSaveVillagers;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)VillagerDataProfileView_getInfo28(SaveVillagers_Get(g, idx));
    return r->f;
}

u8 VillagerHouse::getHouseVariant() {
    u8 *g = gSaveVillagers;
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    Unk_ov003_02215fc0_Rec *r = (Unk_ov003_02215fc0_Rec *)VillagerDataProfileView_getInfo28(SaveVillagers_Get(g, idx));
    return r->f & 3;
}

char *VillagerHouse::getModelName() {
    s32 t = getHouseStyle();
    func_020639e8(data_ov003_022352d4, "obj_house%d_%d", t >> 2, t & 3);
    return data_ov003_022352d4;
}

char *VillagerHouse::vfunc_a4() {
    s32 a = getHouseStyle();
    char *s = getModelName();
    s32 e = Field_GetStructureTexSuffix();
    func_020639e8(data_ov003_02235308, "/str/npcHs/%d/%s%c.arc", a >> 2, s, e);
    return data_ov003_02235308;
}

char *VillagerHouse::vfunc_a8() {
    s32 a = getHouseStyle();
    char *s = getModelName();
    s32 e = Field_GetStructureTexSuffix();
    func_020639e8(data_ov003_02235330, "/str/npcHs/%d/%s%c.nsbtx", a >> 2, s, e);
    return data_ov003_02235330;
}

char *VillagerHouse::vfunc_ac() {
    return 0;
}

s32 VillagerHouse::vfunc_64() {
    return VillagerHouseTex_GetDoorInAnim(FieldStructureMgr_GetVillagerHouseTex());
}

s32 VillagerHouse::vfunc_68() {
    return VillagerHouseTex_GetDoorOutAnim(FieldStructureMgr_GetVillagerHouseTex());
}

void VillagerHouse::vfunc_78() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = SaveVillagers_Get(gSaveVillagers, idx);
    setFileName("obj_etc_closed");
    if (func_0207e274(p) == 0) {
        msgIndex = 6;
    } else if (entryFlags.f1) {
        setFileName("obj_etc_error");
        msgIndex = 0;
    } else if (void *q = VillagerData_getVillagerId(p)) {
        if (visitRefused == 0) {
            msgIndex = sVillagerHouseClosedMsgs[VillagerId_GetPersonality(q)];
        } else {
            msgIndex = sVillagerHouseClosedMsgsAlt[VillagerId_GetPersonality(q)];
        }
    }
    u32 l[9];
    _ZN11MsgString9BC1Ev(&l[1]);
    VillagerId_getName(VillagerData_getVillagerId(p), &l[1]);
    TalkWindowState_setSlot(unk_3c, 0, &l[1]);
    _ZN11MsgString9BD1Ev(&l[1]);
}

BOOL VillagerHouse::vfunc_8c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = SaveVillagers_Get(gSaveVillagers, idx);
    if (p) {
        if (func_0207e274(p) == 0) {
            return FALSE;
        }
        if (Villager_GetWhereabouts(p) == 0 || Villager_GetWhereabouts(p) == 3 || Villager_GetWhereabouts(p) == 4 || Villager_GetWhereabouts(p) == 5 ||
            Villager_GetWhereabouts(p) == 6 || Villager_GetWhereabouts(p) == 7) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerHouse::vfunc_9c() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    if (Building_IsNight(this)) {
        void *p = SaveVillagers_Get(gSaveVillagers, idx);
        if (p) {
            if (func_0207e274(p) == 0) {
                return FALSE;
            }
            if (Villager_GetWhereabouts(p) == 0 || Villager_GetWhereabouts(p) == 3 || Villager_GetWhereabouts(p) == 4 || Villager_GetWhereabouts(p) == 5 ||
                Villager_GetWhereabouts(p) == 6 || Villager_GetWhereabouts(p) == 7) {
                return FALSE;
            }
            if (Villager_GetWhereabouts(p) == 2) {
                u8 a, b, c;
                u32 i = 0;
                void *g = gCommManager;
                for (; i < 4; i++) {
                    if (CommManager_isSlotActive(g, i)) {
                        NetArea_GetSlotStatus(i, &a, &b, &c);
                        if (idx == SceneId_GetVillagerHouse(a)) {
                            return TRUE;
                        }
                    }
                }
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerHouse::vfunc_90() {
    return TRUE;
}

BOOL VillagerHouse::vfunc_98() {
    return TRUE;
}

