// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_0202f2ac_V3.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_ov009_0225b880_Vec3.h"
#include "game/Vec3.h"
#include "snd/BgmSceneFade.h"
#include "game/StrBSizeData.h"
#include "town/BuildingResources.h"
#include "game/Unk_02031e10_Vec.h"
#include "gfx/Unk_ov009_0225bc88_Blk.h"
#include "town/Unk_ov009_0225b880.h"
#include "game/Unk_ov009_0225cb4c_V3.h"

// Library base class chain (header GameProc.h rebuilt so that the vtable names the real symbols:
// slot 08 is Character::postCreate(int)).
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
    virtual BOOL vfunc_20(u32 a);
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
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ s32 drawPos;
    /* 0xc8 */ s32 drawPosY;
    /* 0xcc */ s32 drawPosZ;
    /* 0xd0 */ s16 drawTilt;
    /* 0xd2 */ u16 pad_d2;
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
    virtual Unk_ov009_0225b880_Vec3 *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void clearTalkStartMode();
    void setInteractionRange(s32 v);

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u16 pad_ea;
};


// Real class of the secondary base's first part (vtable 0x020e2a30 in main)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

// Secondary base at +0xec (vtable 0x020ddcf0 in main)
class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
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

    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov009_0225b880_Target *unk_3c;
    /* 0x40 */ u8 pad_40[2];
    /* 0x42 */ u16 unk_42;
};









// ---- main-module helper classes (declarations only)
struct TouchPickTriangle {
    TouchPickTriangle();
    static void *operator new(unsigned long, void *p) { return p; }
    u8 pad[0x44];
};

struct TouchPicker {
    BOOL addTriangle(TouchPickTriangle *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL pushTriangle(TouchPickTriangle *o);
};


class ObjShadowStrip {
public:
    void draw(Vec3 *pos);
    BOOL build(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    ObjShadowStrip *func_020ac1e0();

    u8 pad[0x34];
};


struct BgmManager {
    u8 pad_00[0x2d0];
    BgmSceneFade sceneFade;
};

class BuildingActor;
struct Unk_ov009_0225cc24_Obj;

class CollisionTriangle {
public:
    CollisionTriangle();
    virtual s32 pushOutFace(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void pushBackCrossing(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void pushOutEdges(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void collide(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    s32 distanceTo(Unk_0202f2ac_V3 *p);
    BOOL intersectLine(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);

    s32 unk_04[9];
    s32 normal, normalY, normalZ, offset;
};

class TriangleTrigger : public CollisionTriangle {
public:
    TriangleTrigger();
    void setupTrigger(Unk_02031e10_Vec *a, Unk_02031e10_Vec *b, Unk_02031e10_Vec *c, s32 d);

    TriangleTrigger *next;
    s32 center, centerY, centerZ;
    s32 radiusSq;
};

// ov009 element (vtable 0x0225e280, size 0x54), one per ground-collision triangle
class BuildingCollider : public TriangleTrigger {
public:
    BuildingCollider();
    virtual void onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    BOOL isPlayerAtDoor(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o);
    static void *operator new(unsigned long, void *p) { return p; }

    /* 0x4c */ BuildingActor *building;
    /* 0x50 */ s32 entranceType;
};



struct BuildingShadowTable {
    Unk_ov009_0225cd48_Item *getEntry(u32 i);
    u32 getCount();

    /* 0x00 */ u32 count;
    /* 0x04 */ Unk_ov009_0225cd48_Item entries[1];
};




struct Unk_ov009_0225df84_Obj;
struct Unk_ov009_0225df94_Target;

// Sub-object at +0x234 (Unk_0213b9c4 + flag byte, 0x44 bytes); its destructor is emitted in this overlay.
class SndSeEmitter {
public:
    virtual ~SndSeEmitter();
};

// Vtable 0x0213b9c4 (ctor func_020f3e50 in main); its destructor is emitted in this overlay.
class Unk_0213b9c4 : public SndSeEmitter {
public:
    Unk_0213b9c4();
    virtual ~Unk_0213b9c4();

    /* 0x04 */ u8 pad_04[0x3c];
};

class BuildingSeEmitter {
public:
    BuildingSeEmitter();

    void playSeHeld(u32 a);
    void playSe(u32 a);
    void deactivate();
    void setPosition(Unk_ov009_0225b880_Vec3 *v);
    void activate();

    /* 0x00 */ Unk_0213b9c4 unk_00;
    /* 0x40 */ u8 isActive;
};

class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *getInteractionPos();
    virtual void vfunc_60(u32 a, void *b);
    virtual s32 func_ov009_0225d708();
    virtual s32 func_ov009_0225d6f0();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL func_ov009_0225dd58();
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
    virtual Unk_ov009_0225da90_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8(Unk_ov009_0225bc88_Blk *out);

    s32 getEntranceType();
    s32 getViewRangeX();
    s32 getViewRangeFront();
    s32 getViewRangeBack();
    BOOL setEntryState(s32 a);
    BOOL execEntryCheck();
    BOOL enterEntryCheck();
    void execEntryIdle();
    BOOL enterEntryIdle();
    void updateEntryState();
    void execDoorNoAnimOut();
    BOOL enterDoorNoAnimOut();
    void execDoorNoAnimIn();
    BOOL enterDoorNoAnimIn();
    void execDoorSlideClose();
    BOOL enterDoorSlideClose();
    void execDoorSlideOpen();
    BOOL enterDoorSlideOpen();
    void execDoorOpenOut();
    BOOL enterDoorOpenOut();
    void execDoorOpenIn();
    BOOL enterDoorOpenIn();
    void execDoorIdle();
    BOOL enterDoorIdle();

    void destroyColliders();
    void submitColliders();
    void createColliders(Unk_ov009_0225bc88_Blk *m);
    void destroyShadows();
    void updateShadows(Unk_ov009_0225bc88_Blk *m);
    void createShadows(Unk_ov009_0225bc88_Blk *m);
    void updateBaseMatrix(Unk_ov009_0225bc88_Blk *out);
    void func_ov009_0225d0d8();
    BuildingResources *getResources();
    void makeCurvedMatrix(Unk_ov009_0225bc88_Blk *out);
    BOOL loadResources(char *a, char *b, char *c);
    BOOL setupModel(char *a, char *b, char *c);
    void *getBtaAnim(u32 idx);
    s32 getBca2Anim();
    void setupAnims();
    void initEntryArea();

    BOOL tryOpenDoorForExit();
    BOOL openDoorForExit();
    BOOL tryOpenDoorForEntry();
    BOOL openDoorForEntry();
    BOOL isDoorIdle();
    void updateOffscreen();
    BOOL isOffscreen();
    void callIsLit();
    u32 getGridZ();
    u32 getGridX();
    u16 *getItemId();
    s32 getInteriorScene();
    BOOL getDoorPos(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    void updateMatrix();
    void execEntry08();
    BOOL enterEntry08();
    void execEntry07();
    BOOL enterEntry07();
    void execEntryWarp();
    BOOL enterEntryWarp();
    void execEntry05();
    BOOL enterEntry05();
    void execEntry04();
    BOOL enterEntry04();
    void execEntryTalk();
    BOOL enterEntryTalk();
    void execEntryTalkOpen();
    BOOL enterEntryTalkOpen();

    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u32 buildingIndex;
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 unk_234[0x44];
    /* 0x278 */ s32 entryState;
    /* 0x27c */ u8 closedTalk;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 warpTimer;
    /* 0x280 */ ObjShadowStrip *shadows;
    /* 0x284 */ TouchPickTriangle *collisionShapes;
    /* 0x288 */ BuildingCollider *colliders;
    /* 0x28c */ u8 colliderCount;
    /* 0x28d */ u8 pad_28d;
    /* 0x28e */ u8 unk_28e[2];
    /* 0x290 */ s32 solidCenterX;
    /* 0x294 */ s32 solidCenterY;
    /* 0x298 */ s32 solidCenterZ;
    /* 0x29c */ s32 solidSizeX;
    /* 0x2a0 */ s32 solidSizeZ;
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 entryPos;
};

typedef void (BuildingActor::*Unk_ov009_0225c290_Fn)();
typedef BOOL (BuildingActor::*Unk_ov009_0225c360_Fn)();

// Real (mangled) symbols of the other modules, reached as plain functions with the object first.
#define func_02002d9c _ZN5Actor7preDrawEv
#define func_02002dd0 _ZN5Actor8vfunc_20Ev
#define func_0203e638 _ZN9Character10preExecuteEv
#define func_0203e650 _ZN9Character9preDeleteEv
#define Character_setCharId _ZN9Character9setCharIdEj
#define func_02003e50 _ZN12Unk_02003c3013func_02003e50Ev
#define func_02003e80 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec
#define func_02003ecc _ZN12Unk_02003c3013func_02003eccEv
#define TriangleTrigger_getCenter _ZN15TriangleTrigger9getCenterEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_clearResource _ZN5Model13clearResourceEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define TalkAutoAdvance_start _ZN15TalkAutoAdvance5startEi
#define BuildingLights_isLit _ZN14BuildingLights5isLitEv
#define BuildingLights_setLit _ZN14BuildingLights6setLitEiii
#define BuildingLights_updateLights _ZN14BuildingLights12updateLightsEP3Ctx
#define BuildingLights_bind _ZN14BuildingLights4bindEP3Ctxi
#define func_020b200c _ZN14BuildingLightsD2Ev
#define func_020b2034 _ZN14BuildingLightsC2Ev
#define func_ov009_0225b934 _ZN12Unk_0213b9c4D1Ev
#define func_ov009_0225b94c _ZN17BuildingSeEmitterC1Ev

extern "C" {
extern char sBuildingDefaultMsgFile[];
extern char data_ov009_0225e3e8[];
extern char data_ov009_0225e3ec[];
extern char data_ov009_0225e3fc[];
extern char data_ov009_0225e40c[];
extern char data_ov009_0225e41c[];
extern char data_ov009_0225e42c[];
extern char data_ov009_0225e43c[];
extern char data_ov009_0225e44c[];
extern char data_ov009_0225e45c[];
extern char sBuildingLightTexPathFmt[];
extern char sBuildingTexPathFmt[];
extern char sBuildingArcPathFmt[];
extern char sBuildingArcPath[];
extern char sBuildingTexPath[];
extern char sBuildingLightTexPath[];
extern BuildingResources sBuildingResources[];
extern u32 gCamera;
extern Unk_ov009_0225b880_Vec3 gCameraLookAt;
extern u8 data_020d0a7c[];
extern void *gFieldStructureHeap;
extern void *gCurrentHeap;
extern BgmManager *data_021c1b3c;

void _ZN9Character17detachTalkRequestEi(void *self, MsgRequest *a);
void _ZN9Character17attachTalkRequestEi(void *self, MsgRequest *a);
void *func_ov009_0225b934(void *self);
void _ZN12SndSeEmitterD2Ev(void *self);
extern u8 data_0213b9c4[];
void func_ov009_0225b94c(void *self);
void _ZN17BuildingSeEmitter11setPositionEP23Unk_ov009_0225b880_Vec3(void *self, Unk_ov009_0225b880_Vec3 *v, u32 extra);
StrBSizeData *StrBSize_Get(u16 *p);

void BuildingInfo_Copy(void *self, const u8 *src);
void BuildingInfo_Destroy(void *self);
s32 BuildingInfo_GetViewRangeBack(void *self);
s32 BuildingInfo_GetViewRangeFront(void *self);
s32 BuildingInfo_GetViewRangeX(void *self);
s32 BuildingInfo_GetUnk05(void *self);
s32 BuildingInfo_GetInteriorScene(void *self);
s32 BuildingInfo_GetEntranceType(void *self);

void Snd_SeEmitterPlayHeld(void *, u32, u32, u32);
void func_02003e70(void *, u32, u32, u32);
void func_02003e50(void *);
void func_02003e80(void *, void *);
void func_02003ecc(void *);
void BuildingLights_isLit(void *);
void AnimModel_drawAnimated(void *, u32);
s32 func_020e7b98(s32, s32);
s32 func_01ffcb0c(s32, s32);
void func_01ffd070(Unk_ov009_0225b880_Vec3 *, void *, Unk_ov009_0225b880_Vec3 *);
void *TriangleTrigger_getCenter(void *);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
void TalkAutoAdvance_start(void *, u32);
void BuildingOccupancy_Leave(u32, u32);
void HouseVisitor_ClearPresent();
void *Scene_GetWarpRequest();
void Scene_ResetTownReturnPos();
s32 func_020e780c(s32, s32);
s32 func_020e9650(void *, void *);
s32 *PlayerActor_GetBodyPos(u32);
BOOL PlayerActor_LocalRequestDoorEnter(u32, s32 *, s32 *, s32);
BOOL PlayerActor_IsStowFinished();
void PlayerActor_RequestStowThenAct10(u32);
BOOL PlayerActor_IsEnteringDoor();
void Camera_SetMode3();
void TalkRequest_SetTargetDone(void *);
BOOL PlayerActor_LocalRequestDoorApproach(s32 *, s32 *, s16 *);
s32 Scene_GetCurrent();
s32 SceneWarp_RequestExit(void *, s32);
s32 Ground_GetDefaultY(u32);
void Scene_SetTownReturnPos(void *, s32, Unk_ov009_0225b880_Vec3 *, u32, s32, u32, u32);
void Building_SetLastEntranceType();

s32 BuildingOccupancy_GetAnswer(u32);
void BuildingOccupancy_RequestEnter(u32);
BOOL Item_IsNookShop(u16 *);
void AnimModel_stepAnim(void *);
BOOL AnimFrameCtrl_isFinished(void *);
BOOL AnimFrameCtrl_hasPassedFrame(void *, s32);
void BlendAnimModel_initAnim(void *, void *, s32, s32, s32, s32);
void Melody_PlayAt(void *, s32);
s32 PlayerActor_TestSlotFlag(s32, s32);
BOOL TalkRequestFlags_IsResetti();
void TalkRequest_AddPlayerTalk6(void *, s32);
TouchPicker *Scene_GetTouchPicker();
s32 TouchPick_GetTappedObject(void *, s32 *, u8 *);
void *PlayerActor_GetActor(u32);
BOOL BuildingState_Set(u32, u32);

void *Heap_Alloc(void *heap, u32 size);
u32 BuildingList_IndexOf(void *p);
void Field_SetDoorExitMode(u32 a);
BOOL PlayerActor_LocalRequestDoorExit();
s32 TriangleTrigger_Unregister(void *node);
void TriangleTrigger_Register(void *node);
s32 WorldCurve_ToCurved(void *out, void *in);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
BOOL PlayerActor_IsInterruptibleByMenu();
s32 func_020639e8(char *buf, const char *fmt, ...);
void *File_LoadAlloc(void *a, void *heap, s32 c, s32 d);
BOOL File_Exists(void *p);
s32 func_02101340(void *buf, char *name, void *data);
void *func_021012bc(void *name);
void func_02101310(void *buf);
void *func_02106654();
void *func_02106670(void *p, s32 a);
void *func_02106690();
void *func_021066ac(void *p, s32 a);
void *NNS_G3dGetTex(void *p);
void Mem_Free(void *p);
BOOL Gfx3d_LoadTex(void *p, u32 a);
BOOL Gfx3d_LoadTexAndPltt(void *p, u32 a);
void *Gfx3d_CopyTex(void *p, void *g);

u16 Item_MakeBuilding(u32 x);
s32 BuildingState_Get(u32);
s32 Field_GetStructureTexSuffix();
void FieldStructureMgr_GetPlayerHouseTex();
s32 PlayerHouseTex_Get();
void BuildingList_Remove(void *);
void BuildingList_Add(void *);
BOOL Model_setResource(void *, void *, s32);
void AnimModel_allocAnmObj(void *, void *);
void AnimModel_attachAnim(void *);
void Model_clearResource(void *);
void Model_setInitCallback(void *, void *, void *);
void func_020548a0(void *);
void ModelSlotHandle_Destroy(void *);
void Clock_GetMinuteHour(void *);
void BuildingLights_setLit(void *, s32, s32, s32);
void BuildingLights_updateLights(void *, void *);
void BuildingLights_bind(void *, void *, s32);
void func_020b200c(void *);
void CharInteractSync_ReleaseLock();
void NookShop_SetVisitState(u32);
BOOL func_02002d9c(void *);
s32 func_02002dd0(void *, u32);
BOOL func_0203e638(void *);
BOOL func_0203e650(void *);
void Character_setCharId(void *, u32);
BOOL Camera_IsBlockingFocusView(void *, s32, s32);
s32 WorldCurve_Apply(void *, void *);
void NNS_G3dBindMdlPltt(void *, s32);
void NNS_G3dBindMdlTex(void *, s32);

void func_020548d0(void *);
void func_020b2034(void *);
void ModelSlotHandle_Init(void *);
void *func_021065dc();
u32 func_021065f8(void *, u32);
void *NNS_G3dGetMdlSet();
void MTX_MultVec43(s32, s32, Unk_ov009_0225b880_Vec3 *);
void WorldCurve_FromCurved(void *, Unk_ov009_0225b880_Vec3 *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(BuildingResources *));

void Building_LocalToWorld(void *p, s32 a, s32 b);
BOOL _ZN13BuildingActor13setEntryStateEi(void *self, s32 a);
BOOL Building_IsNight();
void BuildingActor_Create();
BOOL BuildingResources_IsLoaded(BuildingResources *e);
void *func_ov009_0225df58(void *unused);
void *func_ov009_0225df6c(void *unused);
void Building_InitModelCallback(Unk_ov009_0225df84_Obj *o);
void Building_ModelCallback(struct Unk_ov009_0225df94_Arg *a);
}

static inline BOOL Unk_ov009_0225d0d8_Match(u16 *p, u32 v) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 t;
        t = v;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
        if (a == b) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == v) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

static inline BOOL Unk_ov009_0225cc24_IsNine(u16 v) {
    if (v == 9) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov009_0225d858_Is(u16 *p, u32 v) {
    if (Item_IsFurniture(p)) {
        u16 t = v;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == v) {
        return TRUE;
    }
    return FALSE;
}




void BuildingActor::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        BuildingOccupancy_Leave(itemId, 0);
        HouseVisitor_ClearPresent();
        Scene_GetWarpRequest();
        Scene_ResetTownReturnPos();
        exitDelay = 1;
        break;
    case 0:
    case 1:
        setEntryState(1);
        break;
    case 8:
        setEntryState(0);
        break;
    }
}
