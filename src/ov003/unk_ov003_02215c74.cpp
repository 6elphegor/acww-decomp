// mwcc-version: 1.2/sp2
// ov003 TU10 (actor 022318e8): .text 0x02215c74-0x02216430
#include "types.h"
#include "actor/ActorProfile.h"
#include "game/Unk_ov003_Vec.h"
#include "gfx/AnimFrameCtrl.h"
#include "talk/TalkWindowState.h"
#include "game/FxVec3.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "talk/MsgString9B.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/AnimModel.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"

// shared_actor.h.txt -- declarations shared by the ov003 actor units (class family of ov009 BuildingActor).
// Written by the agent that owns ov003 TU06/07/09/10/11/12 (all 1.2/sp2).  Paste unchanged after `#include "types.h"`
// (do NOT include GameProc.h: the chain below is an own copy whose slot names are the real symbol names).
//
// Vtable of every actor (original vtable symbol minus 8 bytes, 0x150 bytes):
//   primary slots 0x00..0xb8 (0xbc bytes), then 8 bytes secondary header, then the secondary vtable of TalkMsgRequest
//   (D1, D0, 08..74).  Primary slot -> symbol:
//     00 ov009::vfunc_00      04 Character::preCreate   08 Character::postCreate(s32)   0c Base::vfunc_0c
//     10 ov009::vfunc_10      14 Actor::postDelete   18 Base::vfunc_18
//     1c ov009::vfunc_1c   (symbols.txt names it vfunc_24, ALIAS NEEDED)   20 ov009::vfunc_20(u32) (symbols: vfunc_28Ej, ALIAS)
//     24 Base::vfunc_24       28 ov009::vfunc_28 (symbols: vfunc_30Ev, ALIAS)   2c Actor::postDraw   30..3c Base
//     40 D1 44 D0   48 ov009::vfunc_48(Character*)   4c ov009::vfunc_4c(u32,u8)   50 ov009::vfunc_50
//     54/58/5c Character   60 ov009::vfunc_60(u32,void*)   64/68 ov009   6c ov009::vfunc_6c(s32)   70 ov009::vfunc_70
//     74 ov009::func_ov009_0225ca98   78..b0 ov009::vfunc_78..b0   b4 / b8 ov009::vfunc_b4/b8 (symbols: BuildingActor::getSoundPos /
//     BuildingActor::calcCustomBaseMatrix, ALIAS)
// Aliases (zero-size labels, tools/pipeline/alias.py) the coordinator must add; <existing> -> <new>:
//   ov009  _ZN13BuildingActor10preExecuteEv           -> _ZN13BuildingActor10preExecuteEv        (0x0225db04)
//   ov009  _ZN13BuildingActor11postExecuteEj           -> _ZN13BuildingActor11postExecuteEj        (0x0225da90)
//   ov009  _ZN13BuildingActor7preDrawEv           -> _ZN13BuildingActor7preDrawEv        (0x0225d9e4)
//   ov009  BuildingActor::getSoundPos                           -> _ZN13BuildingActor11getSoundPosEv        (0x0225b884)
//   ov009  BuildingActor::calcCustomBaseMatrix                           -> _ZN13BuildingActor20calcCustomBaseMatrixEv        (0x0225b880)
//   main   TalkMsgRequest slots: the unit uses the TalkMsgRequest slot names (onMessageStart ... onTalkEnd); no
//          primary-chain class of the family declares a method of these names.
//   ov003  0x0221445c is _ZThn236_N13BuildingActor12onMessageEndEv, the thunk of ov009::onMessageEnd in slot 0x14 of the secondary
//          vtable.  Every unit of the family names that slot onMessageEnd, so each emits the thunk as a link-once function and
//          the linker keeps the copy of the first unit in link order (unk_ov003_022141bc.cpp), as in the original.
// Notes:
//  * The ctor of a derived class calls BuildingActor::BuildingActor() (ov009 symbol C2 0x0225deec).
//  * Names a derived class must not reuse for its own members: unk_130 .. unk_2a4 below.











class Unk_020b1ddc;


// ---- main-module helper classes ----




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
s32 Villager_IsHouseAvailable(void *p);
s32 Villager_GetWhereabouts(void *p);
void NetArea_GetSlotStatus(s32 i, u8 *a, u8 *b, u8 *c);
s32 SceneId_GetVillagerHouse(u32 a);
s32 VillagerId_GetPersonality(void *);

s32 Str_SPrintf(char *buf, const char *fmt, ...);
void func_01ffd070(Unk_ov003_Vec *out, void *a, void *b);
void NNS_G3dBindMdlTex(void *a, s32 b);
void _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, s32 d, void *e);
void _ZN10VillagerId7getNameEj(void *self, void *x);
void _ZN15TalkWindowState7setSlotEiPv(void *self, s32 a, void *q);
BOOL _ZN11CommManager12isSlotActiveEi(void *self, s32 i);
void *_ZN23VillagerDataProfileView9getInfo28Ev(void *self);
void *_ZN12VillagerData13getVillagerIdEv(void *self);
void *_ZN5Model12getRenderObjEv(void *self);
BOOL _ZN5Model11setResourceEP12NNSG3dResMdlj(void *self, void *res, u32 b);
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

    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual s32 getDoorInAnim();
    virtual s32 getDoorOutAnim();
    virtual BOOL initBuilding();
    virtual void setupTalkMsg();
    virtual BOOL isOpen();
    virtual BOOL usesDoorApproach();
    virtual BOOL playsDoorMelody();
    virtual BOOL areLightsOn();
    virtual char *getArcPath();
    virtual char *getTexPath();
    virtual char *getLightTexPath();

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
extern "C" ActorProfile sVillagerHouseProfile;
extern "C" const u8 sVillagerHouseClosedMsgs[8];

extern "C" const u8 sVillagerHouseClosedMsgsAlt[8] = { 0x0a, 0x0b, 0x0c, 0x08, 0x09, 0x0d, 0, 0 };
extern "C" const u8 sVillagerHouseClosedMsgs[8] = { 0x10, 0x11, 0x12, 0x0e, 0x0f, 0x13, 0, 0 };

extern "C" ActorProfile sVillagerHouseProfile = { (void *(*)())VillagerHouse_Create, 0x1d, 0x23, 0, 0xc8000, 0x12c000, 0x258000 };

BOOL VillagerHouse::initBuilding() {
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
        if (_ZN5Model11setResourceEP12NNSG3dResMdlj(&lightUpModel, HouseLightUpDeco_GetModel(FieldStructureMgr_GetLightUpDeco(), q), 0)) {
            void *a = HouseLightUpDeco_GetModel(FieldStructureMgr_GetLightUpDeco(), q);
            NNS_G3dBindMdlTex(a, HouseLightUpDeco_GetTex(FieldStructureMgr_GetLightUpDeco()));
            void *b = HouseLightUpDeco_GetModel(FieldStructureMgr_GetLightUpDeco(), q);
            NNS_G3dBindMdlPltt(b, HouseLightUpDeco_GetTex(FieldStructureMgr_GetLightUpDeco()));
            if (lightUpAnim.allocMatAnm((u32)lightUpModel.resMdl, gFieldStructureHeap)) {
                s32 c = HouseLightUpDeco_GetTexPattern(FieldStructureMgr_GetLightUpDeco());
                s32 d = HouseLightUpDeco_GetTex(FieldStructureMgr_GetLightUpDeco());
                lightUpAnim.initWithTex(c, d, 0, 0x1000, 0);
                lightUpAnim.addToRenderObj((u32)_ZN5Model12getRenderObjEv(&lightUpModel));
                *(Mtx43 *)((u8 *)this + 0x314) = baseMatrix;
            }
        }
    }
    return TRUE;
}

BOOL VillagerHouse::onExecute() {
    if (HouseLightUpDeco_IsLoaded(FieldStructureMgr_GetLightUpDeco())) {
        *(Mtx43 *)((u8 *)this + 0x314) = baseMatrix;
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

BOOL VillagerHouse::onDelete() {
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
    Str_SPrintf(data_ov003_022352d4, "obj_house%d_%d", t >> 2, t & 3);
    return data_ov003_022352d4;
}

char *VillagerHouse::getArcPath() {
    s32 a = getHouseStyle();
    char *s = getModelName();
    s32 e = Field_GetStructureTexSuffix();
    Str_SPrintf(data_ov003_02235308, "/str/npcHs/%d/%s%c.arc", a >> 2, s, e);
    return data_ov003_02235308;
}

char *VillagerHouse::getTexPath() {
    s32 a = getHouseStyle();
    char *s = getModelName();
    s32 e = Field_GetStructureTexSuffix();
    Str_SPrintf(data_ov003_02235330, "/str/npcHs/%d/%s%c.nsbtx", a >> 2, s, e);
    return data_ov003_02235330;
}

char *VillagerHouse::getLightTexPath() {
    return 0;
}

s32 VillagerHouse::getDoorInAnim() {
    return VillagerHouseTex_GetDoorInAnim(FieldStructureMgr_GetVillagerHouseTex());
}

s32 VillagerHouse::getDoorOutAnim() {
    return VillagerHouseTex_GetDoorOutAnim(FieldStructureMgr_GetVillagerHouseTex());
}

void VillagerHouse::setupTalkMsg() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = SaveVillagers_Get(gSaveVillagers, idx);
    setFileName("obj_etc_closed");
    if (Villager_IsHouseAvailable(p) == 0) {
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
    TalkWindowState_setSlot(window, 0, &l[1]);
    _ZN11MsgString9BD1Ev(&l[1]);
}

BOOL VillagerHouse::isOpen() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    void *p = SaveVillagers_Get(gSaveVillagers, idx);
    if (p) {
        if (Villager_IsHouseAvailable(p) == 0) {
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

BOOL VillagerHouse::areLightsOn() {
    s32 idx = Unk_ov003_02215c7c_Idx(this);
    if (Building_IsNight(this)) {
        void *p = SaveVillagers_Get(gSaveVillagers, idx);
        if (p) {
            if (Villager_IsHouseAvailable(p) == 0) {
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

BOOL VillagerHouse::usesDoorApproach() {
    return TRUE;
}

BOOL VillagerHouse::playsDoorMelody() {
    return TRUE;
}

