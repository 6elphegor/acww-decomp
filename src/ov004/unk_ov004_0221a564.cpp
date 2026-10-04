// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"
#include "actor/ActorProfile.h"
#include "npc/VillagerClothModel.h"
#include "room/RoomFreeUnitMap.h"
#include "npc/VillagerMood.h"
#include "snd/SndSeEmitter.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/NpcMoveCtrl.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcFootstepFx.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/NpcTalkCtrl.h"
#include "npc/NpcFaceAnim.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"
#include "talk/ActorTalkRequest.h"
#include "talk/VillagerTalk.h"
#include "talk/TalkTopicMsg.h"
#include "talk/TalkWindowState.h"
#include "gfx/DebugColor.h"

class SickVillager;

#define VillagerId_makeFileName _ZN10VillagerId12makeFileNameEPvjj
#define NpcFootstepFx_enableFootsteps _ZN13NpcFootstepFx15enableFootstepsEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define ActorTalkRequest_requestTakeItem _ZN16ActorTalkRequest15requestTakeItemEPtjjj
#define ActorTalkRequest_setPlayerNameSlot _ZN16ActorTalkRequest17setPlayerNameSlotEjj
#define ActorTalkRequest_setTalkPlayer _ZN16ActorTalkRequest13setTalkPlayerEj
#define NpcActionCtrl_requestStand _ZN13NpcActionCtrl12requestStandEjt
#define NpcActionCtrl_requestEmotion _ZN13NpcActionCtrl14requestEmotionEiht
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_getAction _ZN13NpcActionCtrl9getActionEv
#define NpcLookAt_setTarget _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih
#define NpcMoveCtrl_setSpeedPreset _ZN11NpcMoveCtrl14setSpeedPresetEiiii
#define NpcMoveCtrl_setWaypoint _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3
#define NpcMoveAnimSet_setWalkAnim _ZN14NpcMoveAnimSet11setWalkAnimEi
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define func_0201b138 _ZN8NpcActor6onDrawEv
#define NpcActor_findAvoidPos _ZN8NpcActor12findAvoidPosEP16Unk_020d77a4_Vec
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP16ActorTalkRequest
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcActor_getAngleTo _ZN8NpcActor10getAngleToEPS_
#define VillagerMood_playMood3Effect _ZN12VillagerMood15playMood3EffectEP12VillagerTalk
#define VillagerMood_updateSoundPos _ZN12VillagerMood14updateSoundPosEP12VillagerTalk
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define func_0202d928 _ZN13VillagerActor9preDeleteEv
#define func_0202d948 _ZN13VillagerActor8onCreateEv
#define func_0202dab0 _ZN13VillagerActor9preCreateEv
#define TalkWindowState_getChoiceList _ZN15TalkWindowState13getChoiceListEv
#define TalkWindowState_openChoices _ZN15TalkWindowState11openChoicesEi
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define SickVillagerRecord_setTodaysVisitor _ZN18SickVillagerRecord16setTodaysVisitorEP8PlayerId
#define SickVillagerRecord_hasTodaysVisitor _ZN18SickVillagerRecord16hasTodaysVisitorEv
#define SickVillagerRecord_getTodaysVisitor _ZN18SickVillagerRecord16getTodaysVisitorEv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define ChoiceList_loadTexts _ZN10ChoiceList9loadTextsEv
#define ChoiceList_setEntry _ZN10ChoiceList8setEntryEiPKhiS1_PKci
#define ChoiceList_reset _ZN10ChoiceList5resetEii
class SickVillagerTalk;

typedef BOOL (SickVillager::*Unk_ov004_0224cb98_BFn)();
typedef void (SickVillager::*Unk_ov004_0224cb98_VFn)();

struct Unk_ov004_0221a7d4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b1e8_Map {
    u8 *blocks;
    u8 *width;
    u8 *height;
};

struct Unk_ov004_0221b0f0_Vec {
    s32 x, y, z;
    Unk_ov004_0221b0f0_Vec() {}
    ~Unk_ov004_0221b0f0_Vec() {}
};

extern SickVillager *sSickVillager;
extern "C" {
extern u16 data_020c6cc8;
extern u32 gFrameCounter;
extern u8 gSaveVillagers[];
extern u8 gTalkMsgIndexNone[];
extern u8 gVec3Zero[];
extern s32 data_020c6d1c;
extern Unk_ov004_0221b1e8_Map *gSceneBlockMap;
extern void *data_ov004_0224ca60[2];
extern void *data_ov004_0224ca68[2];
extern void *data_ov004_0224ca70[2];
extern void *data_ov004_0224ca78[2];
extern void *data_ov004_0224ca80[2];
extern void *data_ov004_0224ca88[2];
extern void *data_ov004_0224ca90[2];
extern void *data_ov004_0224ca98[2];
extern void *data_ov004_0224caa0[2];
extern void *data_ov004_0224caa8[2];
extern void *data_ov004_0224cab0[2];
extern void *data_ov004_0224cab8[2];
extern void *data_ov004_0224cac0[2];
extern void *data_ov004_0224cac8[2];
extern void *data_ov004_0224cad0[2];
extern void *data_ov004_0224cad8[2];
extern void *data_ov004_0224cae0[2];
extern u8 data_ov004_0225095c[0x28];
extern u8 data_ov004_02250984[0x28];

void *TalkWindowState_getChoiceList(void *);
s32 ChoiceList_getResult(void *);
void ChoiceList_reset(void *, s32, s32);
void ChoiceList_setEntry(void *, s32, void *, s32, const void *, s32, s32);
void ChoiceList_loadTexts(void *);
void TalkWindowState_openChoices(void *, s32);
s32 TalkWindowState_setNextMessage(void *, void *, const void *);
void *VillagerData_getVillagerId(void *);
void VillagerId_makeFileName(void *, const void *, s32, const void *);
s32 MenuCtrl_BuildPocketMask(void *);
s32 MenuCtrl_OpenPocketSelect(s32, u32);
s32 TalkRequest_SetTargetDone(void *);
void *PlayerActor_GetActor(u32);
s32 NpcActor_getAngleTo(void *, void *);
void NpcTalkCtrl_requestTurnAndTalk(void *, u32, s32, u32);
s32 NpcActionCtrl_requestEmotion(void *, u32, u32, u32);
s32 NpcActionCtrl_requestStand(void *, u32, u32);
s32 NpcActionCtrl_getAction(void *);
s32 NpcActionCtrl_isActionDone(void *);
s32 NpcActionCtrl_requestAction(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void VillagerMood_playMood3Effect(void *, void *);
s32 NpcActor_findAvoidPos(void *, void *);
void NpcMoveCtrl_setWaypoint(void *, void *);
s32 Vec_NotEqual(void *, void *);
s32 Vec_DistXZ(void *, void *);
s32 Random_GlobalBelow(s32);
u16 Room_PickRandomWalkTarget(void *, void *, s32);
void *SaveVillagers_GetUnk3830(void *);
void *SickVillagerRecord_getTodaysVisitor(void *);
void ActorTalkRequest_setPlayerNameSlot(void *, void *, s32);
s32 Snd_PlaySe(s32);
BOOL SickVillager_IsMedicine(u16 *p, s32 x);
BOOL SickVillager_HasCurrentVisitor(void *o);
void SickVillager_SetCurrentVisitor();
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
s32 Pocket_RemoveItem();
void ActorTalkRequest_requestTakeItem(void *, void *, s32, s32, s32);
void *PlayerData_GetCurrent();
void *PlayerData_getPlayerId(void *);
void SickVillagerRecord_setTodaysVisitor(void *, void *);
s32 SickVillagerRecord_hasTodaysVisitor(void *);
void VillagerTalk_begin(void *, void *, u32);
void ActorTalkRequest_setTalkPlayer(void *, s32);
s32 NpcActor_getPlayerActor(void *, s32);
s32 NpcTalkCtrl_isBusy(void *);
void *Villager_FindOrCreateMemory(void *, void *);
void VillagerMemory_RecordTalk(void *, s32, s32, s32);
s32 MapBlock_GetItemPtr(void *, s32, s32, s32);
s32 Item_IsFurnitureOrF031();
void Ground_UnlinkUnit(s32, s32);
void VillagerMood_updateSoundPos(void *, void *);
s32 func_0202d928();
s32 func_0202d948(void *);
s32 func_0202dab0(void *);
void NpcFootstepFx_enableFootsteps(void *);
s32 func_0201b138(void *);
void NpcActor_setTalkRequest(void *, void *);
s32 NpcMoveAnimSet_setWalkAnim(void *, s32);
s32 NpcMoveAnimSet_setStandAnim(void *, s32);
void NpcMoveCtrl_setSpeedPreset(void *, s32, s32, s32, s32);
void NpcLookAt_setTarget(void *, s32, s32, s32, void *, s32, s32, s32);
s32 Item_IsFurniture(void *);
u32 Item_GetFurnitureIndex(void *);
}





struct Unk_020d77a4_Vec3;








class SickVillagerTalk : public VillagerTalk {
public:
    SickVillagerTalk() {}
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone(u32 a);

    void attachOwner(SickVillager *owner);
    u8 getSickStage();

    /* 0x1a0 */ u8 sickStage;
    /* 0x1a1 */ u8 pad_1a1[3];
    /* 0x1a4 */ SickVillager *villager;
};

class SickVillager : public VillagerActor {
public:
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL acceptsInteraction(void *other);
    virtual void onInteractionEvent(u32 idx, u8 v);
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    BOOL changeAct(s32 s);
    void execAct();
    void mainAct07();
    BOOL setupAct07();
    void mainAct06();
    BOOL setupAct06();
    void mainAct05();
    BOOL setupAct05();
    void mainAct04();
    BOOL setupAct04();
    void mainAct03();
    BOOL setupAct03();
    void mainAct02();
    BOOL setupAct02();
    void mainAct01();
    BOOL setupAct01();
    void mainAct00();
    BOOL setupAct00();
    void recordPlayerTalk();
    void blockFurnitureCells();
    BOOL drawModel();

    /* 0x894 */ u8 hasVisitor;
    /* 0x895 */ u8 isAnswered;
    /* 0x896 */ u8 talkMelodyPlayed;
    /* 0x897 */ u8 pad_897;
    /* 0x898 */ u32 act;
    /* 0x89c */ SickVillagerTalk talk;
    /* 0xa44 */ Unk_ov004_0224cb98_BFn drawFn;
    /* 0xa4c */ RoomFreeUnitMap freeUnitMap;
    /* 0xa6c */ s16 walkAngle;
    /* 0xa6e */ u16 walkTimer;
    /* 0xa70 */ Unk_ov004_0221a7d4_Vec waypoint;
    /* 0xa7c */ Unk_ov004_0221a7d4_Vec walkTarget;
    /* 0xa88 */ u8 emotionTimer;
    /* 0xa89 */ u8 pad_a89[3];
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" SickVillager *SickVillager_Create();
extern "C" {
void _ZN12SickVillager9mainAct05Ev();
void _ZN12SickVillager9drawModelEv();
void _ZN12SickVillager9mainAct00Ev();
void _ZN12SickVillager9mainAct06Ev();
void _ZN12SickVillager10setupAct07Ev();
void _ZN12SickVillager9mainAct07Ev();
void _ZN12SickVillager10setupAct02Ev();
void _ZN12SickVillager9mainAct02Ev();
void _ZN12SickVillager10setupAct03Ev();
void _ZN12SickVillager10setupAct04Ev();
void _ZN12SickVillager10setupAct01Ev();
void _ZN12SickVillager10setupAct00Ev();
void _ZN12SickVillager9mainAct01Ev();
void _ZN12SickVillager9mainAct03Ev();
void _ZN12SickVillager10setupAct05Ev();
void _ZN12SickVillager10setupAct06Ev();
void _ZN12SickVillager9mainAct04Ev();
}
#define PMV(x) (*(Unk_ov004_0224cb98_VFn *)(x))
#define PMB(x) (*(Unk_ov004_0224cb98_BFn *)(x))
// Definition order (colours, ptmf constants, buffers, entry) reproduces the original object order; see notes.txt.
DebugColor data_ov004_02250938(31, 20, 20, 31);
DebugColor data_ov004_02250940(20, 20, 31, 31);
extern "C" {
u8 data_ov004_0225095c[0x28];
}
DebugColor data_ov004_02250948(31, 31, 20, 31);
extern "C" void *data_ov004_0224ca60[2] = {(void *)_ZN12SickVillager9mainAct05Ev, 0};
DebugColor data_ov004_02250944(20, 31, 20, 31);
extern "C" void *data_ov004_0224cae0[2] = {(void *)_ZN12SickVillager9mainAct04Ev, 0};
extern "C" void *data_ov004_0224cad8[2] = {(void *)_ZN12SickVillager10setupAct06Ev, 0};
extern "C" void *data_ov004_0224ca70[2] = {(void *)_ZN12SickVillager9mainAct00Ev, 0};
extern "C" void *data_ov004_0224ca78[2] = {(void *)_ZN12SickVillager9mainAct06Ev, 0};
extern "C" void *data_ov004_0224cac0[2] = {(void *)_ZN12SickVillager9mainAct01Ev, 0};
DebugColor data_ov004_02250954(20, 31, 31, 31);
extern "C" void *data_ov004_0224cab0[2] = {(void *)_ZN12SickVillager10setupAct01Ev, 0};
extern "C" void *data_ov004_0224ca90[2] = {(void *)_ZN12SickVillager10setupAct02Ev, 0};
DebugColor data_ov004_02250958(20, 24, 24, 31);
extern "C" void *data_ov004_0224caa0[2] = {(void *)_ZN12SickVillager10setupAct03Ev, 0};
extern "C" void *data_ov004_0224cab8[2] = {(void *)_ZN12SickVillager10setupAct00Ev, 0};
extern "C" void *data_ov004_0224cac8[2] = {(void *)_ZN12SickVillager9mainAct03Ev, 0};

static inline BOOL Unk_ov004_0221b3f8_Chk(u16 *p) {
    u16 v;
    BOOL r;
    if (Item_IsFurniture(p)) {
        v = 0x155e;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0x155e) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" SickVillager *SickVillager_Create() {
    return new SickVillager;
}

extern "C" BOOL SickVillager_IsMedicine(u16 *p, s32 x) {
    if (x == 0) {
        if (Unk_ov004_0221b3f8_Chk(p)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SickVillager::preCreate() {
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    sSickVillager = this;
    NpcActor_setTalkRequest(this, &talk);
    talk.attachOwner(this);
    u8 *p = (u8 *)SaveVillagers_GetUnk3830(gSaveVillagers);
    *((u8 *)this + 0xa3c) = p[0x8e];
    if (talk.getSickStage() > 1) {
        NpcMoveAnimSet_setWalkAnim(&moveAnimSet, 0xea);
        NpcMoveAnimSet_setStandAnim(&moveAnimSet, 0xe9);
        NpcMoveCtrl_setSpeedPreset(&moveCtrl, 1, 0xa4, 0x10, 0x10);
        NpcLookAt_setTarget(&lookAt, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
        mood.severeSickness = 1;
    } else {
        NpcMoveCtrl_setSpeedPreset(&moveCtrl, 1, 0xcd, 0x14, 0x14);
        mood.severeSickness = 0;
    }
    changeAct(0);
    return TRUE;
}

BOOL SickVillager::onCreate() {
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    drawFn = PMB(data_ov004_0224ca68);
    blockFurnitureCells();
    NpcFootstepFx_enableFootsteps(&footstepFx);
    return TRUE;
}

BOOL SickVillager::drawModel() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

BOOL SickVillager::onDraw() {
    if (drawFn) {
        return (this->*drawFn)();
    }
    return TRUE;
}

BOOL SickVillager::preDelete() {
    if (func_0202d928() == 0) {
        return FALSE;
    }
    sSickVillager = 0;
    return TRUE;
}

BOOL SickVillager::updateAct() {
    execAct();
    VillagerMood_updateSoundPos(&mood, this);
    return TRUE;
}

void SickVillager::blockFurnitureCells() {
    Unk_ov004_0221b1e8_Map *m = gSceneBlockMap;
    void *p;
    if (m->width > (u8 *)0 && m->height > (u8 *)0 && (p = m->blocks) != 0) {
    } else {
        p = 0;
    }
    s32 y = 0;
    s32 z = 0;
    for (; y < 16; y++) {
        for (s32 x = 0; x < 16; x++) {
            if (MapBlock_GetItemPtr(p, x, y, z)) {
                if (Item_IsFurnitureOrF031()) {
                    Ground_UnlinkUnit(x, y);
                }
            }
        }
    }
}

void SickVillager::recordPlayerTalk() {
    void *p = PlayerData_GetCurrent();
    if (p) {
        if (villagerData) {
            void *g = PlayerData_getPlayerId(p);
            void *t = Villager_FindOrCreateMemory(villagerData, g);
            VillagerMemory_RecordTalk(t, 0, 0, 0);
        }
    }
}

BOOL SickVillager::acceptsInteraction(void *) {
    if (NpcTalkCtrl_isBusy(&talkCtrl)) {
        return FALSE;
    }
    if (act > 1) {
        return FALSE;
    }
    return TRUE;
}

void SickVillager::onInteractionEvent(u32 idx, u8 v) {
    Unk_ov004_0221b0f0_Vec vec;
    vec.x = position.x;
    vec.y = position.y;
    vec.z = position.z;
    vec.y += 0x2000;
    switch (idx) {
    case 3:
        partnerPlayer = v;
        changeAct(2);
        break;
    case 0:
        partnerPlayer = v;
        ActorTalkRequest_setTalkPlayer(&talk, NpcActor_getPlayerActor(this, 4));
        changeAct(3);
        break;
    case 8:
        recordPlayerTalk();
        changeAct(0);
        break;
    case 4:
        changeAct(0);
        break;
    }
}

u8 SickVillagerTalk::getSickStage() { return sickStage; }

extern "C" BOOL SickVillager_HasCurrentVisitor(void *o) {
    if (SickVillagerRecord_hasTodaysVisitor(SaveVillagers_GetUnk3830(gSaveVillagers))) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void SickVillager_SetCurrentVisitor() {
    void *p = SaveVillagers_GetUnk3830(gSaveVillagers);
    SickVillagerRecord_setTodaysVisitor(p, PlayerData_getPlayerId(PlayerData_GetCurrent()));
}

void SickVillagerTalk::attachOwner(SickVillager *owner) {
    VillagerTalk_begin(this, owner, 0x11);
    villager = owner;
}

void SickVillagerTalk::onTaskDone(u32 a) {
    if (a == 4) {
        SickVillager_SetCurrentVisitor();
        ((TalkWindowState *)window)->nextState = 1;
    }
}

void SickVillagerTalk::update() {
    u8 buf[4];
    SickVillager *o = villager;
    if (o->act == 6) {
        if (MenuCtrl_IsFinished()) {
            if (MenuCtrl_IsResultOk() == 0) {
                ((TalkWindowState *)window)->nextState = 1;
                buf[0] = Random_GlobalBelow(3) + 13;
                TalkWindowState_setNextMessage(window, buf, 0);
                villager->changeAct(4);
            } else {
                MenuCtrl_GetIndex();
                Pocket_RemoveItem();
                buf[1] = Random_GlobalBelow(3) + 16;
                TalkWindowState_setNextMessage(window, &buf[1], 0);
                *(u16 *)(buf + 2) = 0x155e;
                ActorTalkRequest_requestTakeItem(this, buf + 2, 0, 6, 0);
                villager->changeAct(7);
            }
        }
    }
}

void SickVillagerTalk::start(TalkStartMsg *out_) {
    TalkTopicMsg *out = (TalkTopicMsg *)out_;
    out->fileName = (u32)data_ov004_0225095c;
    getSickStage();
    if (villager->mood.severeSickness == 0) {
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_0225095c, 0x28, "q12_ask1_2");
    } else {
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_0225095c, 0x28, "q12_ask3_5");
    }
    villager->isAnswered = 0;
    if (SickVillager_HasCurrentVisitor(this)) {
        out->msgIndex = Random_GlobalBelow(3) + 3;
        villager->hasVisitor = 1;
    } else {
        out->msgIndex = Random_GlobalBelow(3);
        villager->hasVisitor = 0;
    }
}

void SickVillagerTalk::onMessageStart(u32) {
    void *p = SaveVillagers_GetUnk3830(gSaveVillagers);
    if (p != 0) {
        if (SickVillagerRecord_getTodaysVisitor(p) != 0) {
            ActorTalkRequest_setPlayerNameSlot(this, SickVillagerRecord_getTodaysVisitor(p), 0);
        }
    }
}

void SickVillagerTalk::onMessageEnd(u32) {
    u8 b[6];
    SickVillager *o = villager;
    if (o->isAnswered == 0) {
        switch (msgIndex) {
        case 0:
        case 1:
        case 2: {
            void *h = TalkWindowState_getChoiceList(window);
            if (h == 0) break;
            ChoiceList_reset(h, 3, 2);
            b[0] = 0x15;
            ChoiceList_setEntry(h, 0, &b[0], 0, gTalkMsgIndexNone, 0, 0);
            b[1] = 0x16;
            ChoiceList_setEntry(h, 1, &b[1], 0, gTalkMsgIndexNone, 0, 0);
            b[2] = Random_GlobalBelow(10) + 10;
            ChoiceList_setEntry(h, 2, &b[2], 0, gTalkMsgIndexNone, 0, 0);
            ChoiceList_loadTexts(h);
            TalkWindowState_openChoices(window, 1);
            break;
        }
        case 3:
        case 4:
        case 5: {
            void *h = TalkWindowState_getChoiceList(window);
            if (h == 0) break;
            ChoiceList_reset(h, 2, 1);
            b[3] = 0x17;
            ChoiceList_setEntry(h, 0, &b[3], 0, gTalkMsgIndexNone, 0, 0);
            b[4] = Random_GlobalBelow(10) + 0x78;
            ChoiceList_setEntry(h, 1, &b[4], 0, gTalkMsgIndexNone, 0, 0);
            ChoiceList_loadTexts(h);
            TalkWindowState_openChoices(window, 1);
            break;
        }
        }
    } else {
        switch (msgIndex) {
        case 7:
        case 8:
        case 9:
            o->changeAct(5);
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        case 16:
        case 17:
        case 18:
            Snd_PlaySe(0x5f);
            break;
        }
    }
}

void SickVillagerTalk::onChoice(u32) {
    u8 buf[6];
    s32 t = ChoiceList_getResult(TalkWindowState_getChoiceList(villager->talk.window));
    if (villager->mood.severeSickness == 0) {
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_02250984, 0x28, "q12_sick1_2");
        villager->isAnswered = 1;
    } else {
        VillagerId_makeFileName(VillagerData_getVillagerId(villager->villagerData), data_ov004_02250984, 0x28, "q12_sick3_5");
        villager->isAnswered = 1;
    }
    if (villager->hasVisitor == 0) {
        switch (t) {
        case 0:
            if (MenuCtrl_BuildPocketMask((void *)SickVillager_IsMedicine) != 0) {
                buf[0] = Random_GlobalBelow(3) + 7;
                TalkWindowState_setNextMessage(villager->talk.window, &buf[0], data_ov004_02250984);
            } else {
                buf[1] = Random_GlobalBelow(3) + 10;
                TalkWindowState_setNextMessage(villager->talk.window, &buf[1], data_ov004_02250984);
            }
            break;
        case 1:
            buf[2] = Random_GlobalBelow(4);
            TalkWindowState_setNextMessage(villager->talk.window, &buf[2], data_ov004_02250984);
            break;
        default:
            buf[3] = Random_GlobalBelow(3) + 4;
            TalkWindowState_setNextMessage(villager->talk.window, &buf[3], data_ov004_02250984);
            break;
        }
    } else {
        if (t == 0) {
            buf[4] = Random_GlobalBelow(3) + 0x13;
            TalkWindowState_setNextMessage(villager->talk.window, &buf[4], data_ov004_02250984);
        } else {
            buf[5] = Random_GlobalBelow(3) + 4;
            TalkWindowState_setNextMessage(villager->talk.window, &buf[5], data_ov004_02250984);
        }
    }
}

BOOL SickVillager::changeAct(s32 s) {
    static Unk_ov004_0224cb98_BFn tbl[8] = {
        PMB(data_ov004_0224cab8), PMB(data_ov004_0224cab0),
        PMB(data_ov004_0224ca90), PMB(data_ov004_0224caa0),
        PMB(data_ov004_0224caa8), PMB(data_ov004_0224cad0),
        PMB(data_ov004_0224cad8), PMB(data_ov004_0224ca80),
    };
    if (s < 8) {
        if ((this->*tbl[s])()) {
            act = s;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void *data_ov004_0224ca68[2] = {(void *)_ZN12SickVillager9drawModelEv, 0};
extern "C" void *data_ov004_0224ca80[2] = {(void *)_ZN12SickVillager10setupAct07Ev, 0};
extern "C" ActorProfile sSickVillagerProfile = {(void *(*)())SickVillager_Create, 0x83, 0x87, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224ca98[2] = {(void *)_ZN12SickVillager9mainAct02Ev, 0};
extern "C" void *data_ov004_0224caa8[2] = {(void *)_ZN12SickVillager10setupAct04Ev, 0};
extern "C" void *data_ov004_0224cad0[2] = {(void *)_ZN12SickVillager10setupAct05Ev, 0};
SickVillager *sSickVillager;
extern "C" {
u8 data_ov004_02250984[0x28];
}
extern "C" void *data_ov004_0224ca88[2] = {(void *)_ZN12SickVillager9mainAct07Ev, 0};

void SickVillager::execAct() {
    static Unk_ov004_0224cb98_VFn tbl[8] = {
        PMV(data_ov004_0224ca70), PMV(data_ov004_0224cac0),
        PMV(data_ov004_0224ca98), PMV(data_ov004_0224cac8),
        PMV(data_ov004_0224cae0), PMV(data_ov004_0224ca60),
        PMV(data_ov004_0224ca78), PMV(data_ov004_0224ca88),
    };
    s32 s = act;
    if (s < 8) {
        (this->*tbl[s])();
    }
}

BOOL SickVillager::setupAct00() {
    return NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8);
}

void SickVillager::mainAct00() {
    Unk_ov004_0221a7d4_Vec v;
    if (mood.severeSickness != 0) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            if (gFrameCounter % 14 == 0) {
                VillagerMood_playMood3Effect(&mood, this);
            }
        }
    }
    if (collider.isHit != 0) {
        if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            if (changeAct(1)) {
                return;
            }
        }
    }
    if (NpcActionCtrl_getAction(&actionCtrl) == 0) {
        if (walkTimer != 0) {
            walkTimer--;
        }
        if (walkTimer == 0) {
            walkAngle = Room_PickRandomWalkTarget(&walkTarget, (u8 *)this + 0x5c, rotY);
            waypoint.x = walkTarget.x;
            waypoint.y = walkTarget.y;
            waypoint.z = walkTarget.z;
            if (walkAngle != rotY) {
                if (NpcActionCtrl_requestAction(&actionCtrl, 3, 1, 0, 0, 0, walkAngle, 0, 0, data_020c6cc8, 0) == 0) {
                    return;
                }
                if (mood.severeSickness != 0) {
                    walkTimer = Random_GlobalBelow(0x46) + 0x32;
                } else {
                    walkTimer = Random_GlobalBelow(0x46) + 0x14;
                }
            } else {
                if (NpcActionCtrl_requestAction(&actionCtrl, 1, 1, walkTarget.x, walkTarget.z, 0, 0, 0, 0, data_020c6cc8, 0) == 0) {
                    return;
                }
                if (mood.severeSickness != 0) {
                    walkTimer = Random_GlobalBelow(0x46) + 0x32;
                } else {
                    walkTimer = Random_GlobalBelow(0x50) + 0x14;
                }
            }
        } else {
            if (NpcActionCtrl_isActionDone(&actionCtrl) != 0) {
                NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8);
            }
        }
    } else {
        if (NpcActionCtrl_getAction(&actionCtrl) == 3) {
            if (NpcActionCtrl_isActionDone(&actionCtrl) != 0) {
                NpcActionCtrl_requestAction(&actionCtrl, 1, 1, walkTarget.x, walkTarget.z, 0, 0, 0, 0, data_020c6cc8, 0);
            }
        } else if (NpcActionCtrl_getAction(&actionCtrl) == 1) {
            switch (NpcActor_findAvoidPos(this, &v)) {
            case 1:
                NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8);
                break;
            case 2:
                waypoint = v;
                NpcMoveCtrl_setWaypoint(&moveCtrl, &waypoint);
                break;
            default:
                if (Vec_NotEqual(&waypoint, &walkTarget) != 0) {
                    waypoint = walkTarget;
                    NpcMoveCtrl_setWaypoint(&moveCtrl, &walkTarget);
                } else if (Vec_DistXZ(&walkTarget, (u8 *)this + 0x5c) < 0x200) {
                    changeAct(1);
                }
                break;
            }
        }
    }
}

BOOL SickVillager::setupAct01() {
    if (NpcActionCtrl_requestStand(&actionCtrl, 1, data_020c6cc8)) {
        emotionTimer = 0x46;
        return TRUE;
    }
    return FALSE;
}

void SickVillager::mainAct01() {
    switch (emotionTimer) {
    case 0x45:
        NpcActionCtrl_requestEmotion(&actionCtrl, 1, 7, data_020c6cc8);
        break;
    case 1:
        NpcActionCtrl_requestEmotion(&actionCtrl, 1, 0, data_020c6cc8);
        walkTimer = Random_GlobalBelow(0x14) + 0x14;
        break;
    case 0:
        if (changeAct(0)) {
            return;
        }
        break;
    }
    if (emotionTimer != 0) {
        emotionTimer--;
    }
}

BOOL SickVillager::setupAct02() {
    if (act == 1) {
        NpcActionCtrl_requestEmotion(&actionCtrl, 2, 0, data_020c6cc8);
    }
    return TRUE;
}

void SickVillager::mainAct02() {}

BOOL SickVillager::setupAct03() {
    BOOL r;
    void *o = PlayerActor_GetActor(4);
    if (o != 0) {
        NpcTalkCtrl_requestTurnAndTalk(&talkCtrl, 0, NpcActor_getAngleTo(this, o), 0);
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

void SickVillager::mainAct03() {
    changeAct(4);
}

BOOL SickVillager::setupAct04() { return TRUE; }

void SickVillager::mainAct04() {
    TalkWindowState *o = talk.window;
    if (o != 0) {
        if (o->state == 0) {
            TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL SickVillager::setupAct05() {
    talk.window->openMode = 1;
    return TRUE;
}

void SickVillager::mainAct05() {
    TalkWindowState *m = talk.window;
    if (m->state == 5) {
        if (MenuCtrl_OpenPocketSelect(MenuCtrl_BuildPocketMask((void *)SickVillager_IsMedicine), 0xd) != 0) {
            changeAct(6);
        }
    }
}

BOOL SickVillager::setupAct06() { return TRUE; }

void SickVillager::mainAct06() {}

BOOL SickVillager::setupAct07() { return TRUE; }

void SickVillager::mainAct07() {
    changeAct(4);
}

void SickVillager::onTalkMelodyPlayed() { talkMelodyPlayed = 1; }

BOOL SickVillager::canPlayTalkMelody() {
    if (talkMelodyPlayed == 0) {
        return TRUE;
    }
    return FALSE;
}

