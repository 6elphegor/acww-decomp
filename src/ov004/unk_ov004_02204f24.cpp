#include "uptr.h"
// mwcc-version: 1.2/sp2
#include "types.h"
#include "gfx/VecFx32.h"
#include "room/Unk_ov004_0224882c_Buf.h"
#include "gfx/Mtx43.h"
#include "gfx/DebugColor.h"
#include "actor/ActorProfile.h"
#include "actor/ActorListNode.h"
#include "actor/CharacterListNode.h"
#include "room/FtrActorParts.h"
#include "gfx/AnimFrameCtrl.h"
#include "item/ItemId.h"
#include "game/LightLevel.h"
#include "gfx/G3dResAccess.h"
#include "room/FtrVisNodes.h"
#include "room/FtrSwitch.h"
#include "room/FtrClockHands.h"
#include "room/FtrAnimSet.h"
#include "room/FtrStackedSet.h"
#include "game/BoxCollider.h"
#include "room/FtrTileList.h"
#include "room/FtrGlowMat.h"
#include "room/FtrStackLink.h"
#include "room/FtrTopItem.h"
#include "sys/ProcBase.h"
#include "gfx/ModelAnim.h"
#include "room/FtrCollider.h"
#include "room/FtrGlowMatSet.h"
#include "room/FtrTopItems.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ModelResource.h"
#include "room/FtrModelRes.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "game/CollisionVec2.h"
#include "game/CollisionEdge.h"

// ================================================================ plain value types



// main class 0x02000c8c (3 words, registered for destruction through __register_global_object)
struct FxVec3 : VecFx32Copy {
    FxVec3() {}
    FxVec3(s32 a, s32 b, s32 c) : VecFx32Copy(a, b, c) {}
    ~FxVec3();
};

// ================================================================ library chain (as tu01, but slot 08/14 as this class overrides them)






// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)


// ================================================================ helper object types (members of / used by the 0224882c object)


// ---- 0x02206520: list of up to 4 tile positions



// ---- 0x02205994: 4 ids + count (member at 0x760)

// ---- 0x02205bcc: model animation slot (base: main class LightLevel)


// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)



// ---- 0x02205c44 (member at 0x73c)

// ---- 0x02205d5c (member at 0x73e)

// ---- 0x02205e58 (member at 0x178)

// ---- 0x022062f4 (element of 0x022061b4)


// ---- 0x022061b4 (member at 0x188)

// ---- 0x02206398 (member at 0x44 of 0x02206e38; 5 pairs of resource pointers)


// ---- 0x02206434 (set of up to 4 neighbour objects)

// ---- 0x022487cc : BoxCollider (member at 0x628)






// ---- 0x022069ec / 0x02206e38 (model loader, member at 0x6c8)
class TexVramSlot;





// ---- 0x02248804 (array of 4 at 0x7c0)



#include "room/FtrModelAnim.h"
#include "gfx/NNSG3dRS.h"
// ================================================================ FtrActor




class FtrActor;
typedef FtrActor Self;
#include "room/FtrActor.h"
#include "game/TouchPicker.h"
#include "gfx/AnimModel.h"
#include "gfx/Model.h"
#include "gfx/ModelSlotPool.h"
#include "gfx/TwoLayerAnimModel.h"
#include "room/FtrActorTable.h"
#include "save/TownId.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/autoload_2/unk_02101048.h"
#include "proto/autoload_2/unk_02128030.h"
#include "proto/itcm/unk_01ffcfc0.h"
#include "proto/main/unk_02002b1c.h"
#include "proto/main/unk_020514a4.h"
#include "proto/main/unk_02052b50.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"
#include "proto/main/unk_020815f8.h"
#include "proto/main/unk_02090268.h"
#include "proto/main/unk_020943dc.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_0209c08c.h"
#include "proto/ov004/unk_ov004_02204f24.h"
#include "proto/ov004/unk_ov004_0222a500.h"
#include "proto/ov004/unk_ov004_0222bed0.h"
#include "proto/ov004/unk_ov004_02233074.h"
#include "proto/ov004/unk_ov004_02235fd0.h"
#include "player/PlayerData.h"



// Set of up to four neighbour objects built by func_ov004_02206494
struct FtrStackedSetView {
    u32 count;
    FtrActor *v[4];
};

// ================================================================ local helper types / inlines
struct Unk_ov004_02207ac4_Tmp {
    u16 v;
    u16 pad;
    Unk_ov004_02207ac4_Tmp() {}
    ~Unk_ov004_02207ac4_Tmp() {}
};

// Spawn argument word of a furniture actor (Character::param), built by FtrActor_MakeSpawnArg.
struct FtrSpawnArg {
    u32 tileX : 4;
    u32 tileZ : 4;
    u32 ftrIndex : 16;
    u32 dir : 2;
    u32 mode : 2;
    u32 layer : 1;
};

// Character ids made by FtrActor::makeCharId (written with masks): preview/house form {actor table index, scene} in
// the first halfword, placed form {tile x, tile z, layer, scene} in the second.
struct FtrCharIdBits {
    u16 tableIndex : 9;
    u16 sceneId : 7;
    u16 tileX : 4;
    u16 tileZ : 4;
    u16 layer : 1;
    u16 tileSceneId : 6;
    u16 pad : 1;
};

// FtrSpawnArg bit layout followed by a second word (only MakeSpawnArg writes it).
struct FtrSpawnArgBuf {
    u32 tileX : 4;
    u32 tileZ : 4;
    u32 ftrIndex : 16;
    u32 dir : 2;
    u32 mode : 2;
    u32 layer : 1;
    u32 w1;
};

typedef BOOL (FtrActor::*Unk_ov004_0224882c_Fn)();
struct FtrCenterPosBuf { s32 v[4]; };

static inline BOOL Unk_ov004_02205820_Is3d(u16 v) {
    if (v == 0x3d) return TRUE;
    return FALSE;
}


// ================================================================ real names of the symbols outside this unit
#define func_02002d9c _ZN5Actor7preDrawEv   // main
#define func_02002ec0 _ZN5Actor10postDeleteEv   // main
#define BoxColliderShape_updateTransform _ZN16BoxColliderShape15updateTransformEP7VecFx32iS1_   // main
#define Character_setCharId _ZN9Character9setCharIdEj   // main
#define Character_getCharId _ZN9Character9getCharIdEv   // main
#define func_0203e650 _ZN9Character9preDeleteEv   // main
#define Character_postCreate _ZN9Character10postCreateEi   // main
#define BlendAnimModel_stepBlend _ZN14BlendAnimModel9stepBlendEv   // main
#define func_020544d8 _ZN14BlendAnimModelD1Ev   // main
#define func_02054514 _ZN14BlendAnimModelC1Ev   // main
#define BlendAnimModel_getAnmObj _ZN14BlendAnimModel9getAnmObjEv   // main
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv   // main
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv   // main
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv   // main
#define Model_setPolygonId _ZN5Model12setPolygonIdEj   // main
#define Model_getRenderObj _ZN5Model12getRenderObjEv   // main
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi   // main
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv   // main
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv   // main
#define TownId_getTownRelation _ZN6TownId15getTownRelationEv   // main
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv   // main
#define ModelSlotPool_release _ZN13ModelSlotPool7releaseEPt   // main
#define ModelSlotPool_acquire _ZN13ModelSlotPool7acquireEPt   // main
#define ModelSlot_getVramSlot _ZN9ModelSlot11getVramSlotEv   // main
#define ModelSlot_getHeap _ZN9ModelSlot7getHeapEv   // main
#define LightLevel_getLevel _ZN10LightLevel8getLevelEv   // main
#define Math_LerpFx _Z11Math_LerpFxiii   // main
#define LightLevel_update _ZN10LightLevel6updateEv   // main
#define TouchPicker_addCylinder _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP7VecFx32S3_S3_ih   // main
#define TouchPicker_addBox _ZN11TouchPicker6addBoxEP12TouchPickBoxP7VecFx32iiisih   // main
#define TouchPicker_pushBox _ZN11TouchPicker7pushBoxEP12TouchPickBox   // main
#define func_020b69fc _ZN17TouchPickCylinderD2Ev   // main
#define func_020b6a0c _ZN17TouchPickCylinderC2Ev   // main
#define func_020b6df4 _ZN12TouchPickBoxD2Ev   // main
#define func_020b6e10 _ZN12TouchPickBoxC2Ev   // main
#define Atm_execTalkAct02 _ZN3Atm13execTalkAct02Ev   // ov004
#define Atm_enterTalkAct02 _ZN3Atm14enterTalkAct02Ev   // ov004
#define Atm_execTalkAct01 _ZN3Atm13execTalkAct01Ev   // ov004
#define Atm_enterTalkAct01 _ZN3Atm14enterTalkAct01Ev   // ov004
#define Atm_execTalkAct00 _ZN3Atm13execTalkAct00Ev   // ov004
#define Atm_enterTalkAct00 _ZN3Atm14enterTalkAct00Ev   // ov004
#define Atm_execTalkAct _ZN3Atm11execTalkActEv   // ov004
#define Atm_setTalkAct _ZN3Atm10setTalkActEi   // ov004
#define Atm_setPointTexts _ZN3Atm13setPointTextsEv   // ov004
#define Atm_releaseCollision _ZN3Atm16releaseCollisionEv   // ov004
#define Atm_initCollision _ZN3Atm13initCollisionEv   // ov004
#define FtrPhone_execTalkAct04 _ZN8FtrPhone13execTalkAct04Ev   // ov004
#define FtrPhone_enterTalkAct04 _ZN8FtrPhone14enterTalkAct04Ev   // ov004
#define FtrPhone_execTalkAct03 _ZN8FtrPhone13execTalkAct03Ev   // ov004
#define FtrPhone_enterTalkAct03 _ZN8FtrPhone14enterTalkAct03Ev   // ov004
#define FtrPhone_execTalkAct02 _ZN8FtrPhone13execTalkAct02Ev   // ov004
#define FtrPhone_enterTalkAct02 _ZN8FtrPhone14enterTalkAct02Ev   // ov004
#define FtrPhone_execTalkAct01 _ZN8FtrPhone13execTalkAct01Ev   // ov004
#define FtrPhone_enterTalkAct01 _ZN8FtrPhone14enterTalkAct01Ev   // ov004
#define FtrPhone_execTalkAct00 _ZN8FtrPhone13execTalkAct00Ev   // ov004
#define FtrPhone_enterTalkAct00 _ZN8FtrPhone14enterTalkAct00Ev   // ov004
#define FtrPhone_execTalkAct _ZN8FtrPhone11execTalkActEv   // ov004
#define FtrPhone_setTalkAct _ZN8FtrPhone10setTalkActEi   // ov004
#define FtrPhone_execFtrAct03 _ZN8FtrPhone12execFtrAct03Ev   // ov004
#define FtrPhone_enterFtrAct03 _ZN8FtrPhone13enterFtrAct03Ev   // ov004
#define FtrPhone_execFtrAct02 _ZN8FtrPhone12execFtrAct02Ev   // ov004
#define FtrPhone_enterFtrAct02 _ZN8FtrPhone13enterFtrAct02Ev   // ov004
#define FtrPhone_execFtrAct01 _ZN8FtrPhone12execFtrAct01Ev   // ov004
#define FtrPhone_enterFtrAct01 _ZN8FtrPhone13enterFtrAct01Ev   // ov004
#define FtrPhone_execFtrAct00 _ZN8FtrPhone12execFtrAct00Ev   // ov004
#define FtrPhone_enterFtrAct00 _ZN8FtrPhone13enterFtrAct00Ev   // ov004
#define FtrPhone_execFtrAct _ZN8FtrPhone10execFtrActEv   // ov004
#define FtrContactSet_setContact _ZN13FtrContactSet10setContactEiP7VecFx32S1_iS1_S1_si   // ov004
#define FtrContactSet_findContact _ZN13FtrContactSet11findContactEPv   // ov004
#define FtrContact_getPushAngle _ZN10FtrContact12getPushAngleEv   // ov004
#define FtrContact_getClampedContactPoint _ZN10FtrContact22getClampedContactPointEv   // ov004
#define FtrActorGrid_getActorAtPos _ZN12FtrActorGrid13getActorAtPosEPvi   // ov004
#define FtrActorGrid_getActor _ZN12FtrActorGrid8getActorEiii   // ov004
#define FtrActorGrid_getIndex _ZN12FtrActorGrid8getIndexEiii   // ov004
#define FtrActorGrid_clearCell _ZN12FtrActorGrid9clearCellEiiih   // ov004
#define FtrActorGrid_setCell _ZN12FtrActorGrid7setCellEiiih   // ov004
#define FtrActorTable_get _ZN13FtrActorTable3getEj   // ov004
#define FtrActorTable_indexOf _ZN13FtrActorTable7indexOfEPv   // ov004
#define FtrActorTable_remove _ZN13FtrActorTable6removeEPv   // ov004
#define FtrActorTable_add _ZN13FtrActorTable3addEPv   // ov004
#define FtrActorHeap_free _ZN12FtrActorHeap4freeEPv   // ov004
#define FtrActorHeap_alloc _ZN12FtrActorHeap5allocEv   // ov004
#define FtrSoundEmitter_playOnce _ZN15FtrSoundEmitter8playOnceEjj   // ov004
#define FtrSoundEmitter_play _ZN15FtrSoundEmitter4playEjj   // ov004
#define FtrSoundEmitter_release _ZN15FtrSoundEmitter7releaseEv   // ov004
#define FtrSoundEmitter_attach _ZN15FtrSoundEmitter6attachEv   // ov004
#define FtrSoundEmitter_resetAttached _ZN15FtrSoundEmitter13resetAttachedEv   // ov004

// ================================================================ externs
extern "C" {
BOOL TalkRequest_SetTargetDone(void *p);
s32 Vec_DistXZ(void *a, void *b);
s32 FX_Div(s32 a, s32 b);
s32 Math_StepS32(s32 *p, s32 target, s32 step);
s32 Vec_Sub(void *out, void *a, void *b);
s32 Math_StepAngle(s16 *v, s32 target, s32 step);
s32 func_01ffcb0c(s32 a, s32 b);
void Vec_RotateY(VecFx32 *v, s16 a);
u16 Item_MakeFurniture(s32 a, s32 b);
s32 LightLevel_update(void *p);
s32 LightLevel_getLevel(void *p);
s32 Math_LerpFx(s32 a, s32 b, s32 c);
s32 NNSi_G3dModifyMatFlag(void *p, s32 a, s32 b);
s32 NNS_G3dMdlSetMdlEmi(void *p, s32 a, s32 b);
FtrActor *FtrActorGrid_getActor(void *mgr, s32 a, s32 b, s32 c);
s32 FtrActorTable_indexOf(void *mgr, void *o);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 y);
void FieldPos_ToUnit(s32 *x, s32 *y, void *v);
void MTX_Inverse43(void *a, void *b);
void MTX_MultVec43(void *a, void *b, void *c);
void Mtx43_Translate(void *m, s32 x, s32 y, s32 z);
u32 Scene_GetCurrent();
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL Item_IsFurnitureOrF031(u16 *p);
BOOL Item_IsNormalItem(u16 *p);
BOOL Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
void *NNS_G3dGetTex(void *p);
extern void *gSceneBlockMap;
extern Mtx43 data_021f47e0;
void Gfx3d_LoadTexAndPltt(void *a, TexVramSlot *b);  // defined with u32 b (src/main/unk_02055200.cpp)
void *Gfx3d_CopyTex(void *a, void *heap);
s32 Math_Atan2(s32 a, s32 b);
s32 FX_Sqrt(s64 a);
void WallEdge_GetMidpoint(CollisionVec2 *out, CollisionEdge *p);
void Mtx43_SetRotY(void *a, s32 b);
void VEC_Subtract(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
s32 Vec_Distance(void *a, void *b);
s32 Vec_NotEqual(void *a, void *b);
void *FtrActorGrid_getActorAtPos(void *a, void *b, s32 c);
void FtrContactSet_setContact(void *a, void *b, void *c, void *d, s32 e, void *f, void *g, s32 h, s32 i);
TexVramSlot *ModelSlot_getVramSlot(ModelSlot *p);
void *ModelSlot_getHeap(ModelSlot *p);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 NNS_FndMountArchive(void *buf, char *fmt, void *arg);
void NNS_FndUnmountArchive(void *buf);
u8 *NNS_G3dGetMdlSet(u8 *p);
u8 *func_021065dc(u8 *p);
u8 *func_021065f8(u8 *p, u32 i);
u8 *func_02106618(u8 *p);
u8 *func_02106634(u8 *p, u32 i);
u8 *func_02106788(u8 *p);
u8 *func_021067a4(u8 *p, u32 i);
u8 *func_02106654(u8 *p);
u8 *func_02106670(u8 *p, u32 i);
u8 *func_02106690(u8 *p);
u8 *func_021066ac(u8 *p, u32 i);
extern s32 data_020c8cbc;
extern u8 gFieldSceneKind;
BOOL Scene_InHouseRoom(void);
BOOL Ground_CanPlaceItem(s32 x, s32 y);
s32 Ground_GetExitAtPos(void *v);
u32 ItemInfo_GetIndoorUnk1(u16 *p);
u32 GroundAttr_GetDragSe(u32 a);
void LightSwitch_SetOff(u32 a, u32 b);
u32 Scene_InUnk6To8(void);
void JointCb_RotateClockHourHand(NNSG3dRS *rs);
void JointCb_RotateClockMinuteHand(NNSG3dRS *rs);
extern u8 gCameraEye[];
extern u8 gCameraLookAt[];
BOOL SceneId_IsHouseRoom(u32 a);
void LightSwitch_SetOn(u32 a, u32 b, u32 c);
void FtrActorGrid_setCell(void *a, void *self, s32 x, s32 y, u32 layer);
void FtrActorGrid_clearCell(void *a, void *self, s32 x, s32 y, u32 layer);
s32 FtrActorGrid_getIndex(void *a, s32 x, s32 y, s32 one);
void Model_setPolygonId(void *self, u32 v);
void NNS_G3dBindMdlTex(void *a, void *b);
void NNS_G3dBindMdlPltt(void *a, void *b);
void FieldPos_FromBlockUnitCenter(void *p, s32 a, s32 b, u32 c, u32 d);
s32 Vec_SafeNormalize(void *v);
void TouchPicker_addCylinder(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d);
void TouchPicker_addBox(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void TouchPicker_pushBox(u32 o, void *p);
s32 BoxColliderShape_updateTransform(void *o, void *p, s32 a, void *q);
void BoxCollider_Register(void *o, s32 a, s32 b, s32 c, void *p, s32 d, void *q);
void BoxCollider_Unregister(void *o);
s32 Mtx43_SetTranslate(void *m, s32 x, s32 y, s32 z);
s32 Mtx43_RotateX(void *m, s32 a);
s32 Mtx43_RotateY(void *m, s32 a);
s32 PlayerData_getPlayerId(s32 p);
s32 TownId_getTownRelation(s32 id);
s32 BlendAnimModel_getAnmObj(void *o);
void BlendAnimModel_stepBlend(void *o);
s32 AnimFrameCtrl_isFinished(void *o);
void AnimFrameCtrl_step(void *o);
void *Model_getRenderObj(void *o);
extern u8 data_027e00c8[];
extern s16 data_02135f44[];
void FtrSoundEmitter_play(void *, u32, void *);
void FtrSoundEmitter_playOnce(void *, u32, void *);
void FtrSoundEmitter_release(void *);
void FtrSoundEmitter_attach(void *);
void FtrActorTable_remove(void *, void *);
BOOL AnimModel_allocAnmObj(void *, u32);
void AnimModel_attachAnim(void *);
void AnimModel_drawAnimated(void *, void *);
void ModelSlotPool_release(void *, void *);
BOOL SceneId_IsVillagerHouse(u32);
void BlockMap_SetItemAtUnit(void *, u16 *, s32, s32, s32);
BOOL func_02002ec0(void *, s32);
BOOL func_02002d9c(void *);
BOOL func_0203e650(void *);
void func_ov004_02205c1c(void *);
void func_ov004_02205d78(void *);
void func_ov004_02205d4c(void *);
void func_ov004_022069b4(void *);
void func_020544d8(void *);
void func_020b6df4(void *);
void func_ov004_022061e8(void *);
void func_ov004_02205e9c(void *);
void func_ov004_02206e98(void *);
void func_020b69fc(void *);
void func_ov004_02206eb0(void *);
void func_020b6a0c(void *);
void func_ov004_02205ea0(void *);
void func_ov004_02206204(void *);
void func_020b6e10(void *);
void func_02054514(void *);
void func_ov004_022069cc(void *);
void func_ov004_02206e38(void *);
void func_ov004_02205d50(void *);
void func_ov004_02205d7c(void *);
void func_ov004_02205c2c(void *);
void FtrSoundEmitter_resetAttached(void *);
void FtrActorTable_add(void *, void *);
BOOL Character_getCharId(void *);
void Character_setCharId(void *, u32);
void Character_postCreate(void *, s32);
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];
void FtrActorHeap_free(void *heap, void *p);
void *FtrActorHeap_alloc(void *heap, u32 size);
void *FtrContactSet_findContact(void *, void *);
s32 *FtrContact_getClampedContactPoint(void);
u32 FtrContact_getPushAngle(void *);
u32 ItemInfo_IsReady(void);
void TalkRequest_AddPlayerTalk6(void *, s32);
BOOL AnimFrameCtrl_hasPassedFrame(void *, u32);
u32 Scene_GetTouchPicker();
void *func_ov004_02206be4(void *o);
struct Unk_ov004_027e0148 { u8 pad[0x18]; u32 unk_18; };
extern Unk_ov004_027e0148 data_027e0148;
extern void *gSceneBlockMap;
extern Mtx43 data_021f47e0;
void _ZN11FtrTileList7releaseEv(void *self);
FtrActor *FtrActorTable_get(void *a, u32 b);
void *_ZN11FtrColliderD1Ev(void *);
void _ZN12FtrModelAnimD1Ev(void *);
void _ZN12FtrModelAnimC1Ev(void *);
typedef void (*FtrArrayElemFn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, FtrArrayElemFn, FtrArrayElemFn);
void __cxa_vec_cleanup(void *, s32, s32, FtrArrayElemFn);
BOOL _ZN8FtrActor9isNotIdleEv(void *self);
void _ZN11BoxColliderD1Ev(void *self);
extern u32 _ZTV11FtrCollider[];
}

// plain functions defined in this unit
extern "C" {
void FtrVisNodes_Destruct(void *);
void FtrVisNodes_Construct(void *);
u16 FtrGlowMat_GetBaseEmission();
BOOL FtrStack_CalcRelPlacement(s32 *idx, VecFx32 *pos, s16 *ang, s32 x, s32 a, s16 b);
void FtrActor_GetItemId(u16 *out, FtrActor *o);
s32 FtrActor_PredIsGyroid(FtrActor *p);
s32 FtrActor_PredIsSeatOrBed(FtrActor *p);
s32 FtrActor_PredIsStereo(FtrActor *p);
s32 FtrActor_PredIsLightSource(FtrActor *p);
void FtrActor_SpawnActorC0(void *a, u32 x);
s32 FtrActor_GetDragSe(void);
s32 FtrActor_TestCurSceneUnk();
s32 FtrActor_TestSceneUnk(s32 a);
void FtrActor_MakeItemForAngle(u16 *out, FtrActor *obj, s32 ang);
u32 FtrActor_AngleToDir(s32 v);
void FtrActor_SetInitialAct(Self *self);
void FtrActor_UpdateTopItemBoxes(Self *self);
void FtrActor_UpdateBox(Self *self);
void FtrActor_ReleaseCollider(Self *self);
void FtrActor_InitCollider(Self *self);
void FtrActor_GetBoxSize(Self *self, VecFx32 *out);
void FtrActor_UpdateMtx(Self *self);
void FtrActor_CalcWorldMtx(Self *self, VecFx32 *a, s32 b);
u8 FtrActor_GetLayer(Self *self);
BOOL FtrActor_RequestToggle(Self *self);
s32 FtrActor_GetFtrIndex(Self *self);
Self *FtrActor_GetParent(Self *self);
BOOL FtrActor_IsPosClearOfCharacters(Self *self, s32 a, s32 b, s32 c, s32 d);
BOOL FtrActor_IsWithinDist(Self *self, s32 a, void *p, s32 b);
BOOL FtrActor_TestPlayerUnk();
void FtrActor_GetCenter(Self *self, VecFx32 *out);
void FtrActor_GetCorner(Self *self, void *out, s32 i);
void FtrActor_LocalToWorld(Self *self, void *out, void *src);
ModelSlot *FtrActor_GetHeap(Self *self);
BOOL FtrActor_StepAnims(Self *self);
void FtrActor_PlayAnimsFromLastFrame(Self *self, u32 a, s32 b, s32 c);
BOOL FtrActor_IsStereo(FtrActor *p);
BOOL FtrActor_IsLightSource(FtrActor *p);
u32 FtrActor_GetArgMode(u32 v);
u32 FtrActor_GetArgFtrIndex(u32 v);
u32 FtrActor_MakeSpawnArg(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e);
void FtrActor_TurnOnRoomLight(u32 a);
u32 FtrActor_IsLightKind1(u32 a);
void FtrActor_SetModelCallbacks(NNSG3dRS *o);
void FtrActor_NodeCallback(NNSG3dRS *o);
void FtrActor_NodeDescCallbackB(NNSG3dRS *self);
void FtrActor_NodeDescCallbackA(NNSG3dRS *self);
void FtrActor_MatCallback(NNSG3dRS *self);
void *FtrActor_Create();
}

// ================================================================ static inline helpers
static inline BOOL Unk_ov004_0220607c_IsEmpty(u16 *p) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 t = 0xfff1;
        r = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) ? TRUE : FALSE;
    } else {
        r = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return r;
}

static inline BOOL Unk_ov004_02206a44_IsInvalid(u16 *a) {
    if (Item_IsFurniture(a)) {
        u16 t = 0xfff1;
        if (Item_GetFurnitureIndex(a) == Item_GetFurnitureIndex(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02206a44_Same(u16 *a, u16 *b) {
    if (Item_IsFurniture(a)) {
        if (Item_GetFurnitureIndex(a) == Item_GetFurnitureIndex(b)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == *b) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02207650_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

static inline BOOL Unk_ov004_02207650_InRange(u16 *p) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1144 && v <= 0x1187) {
        r = TRUE;
    }
    return r;
}

#define UNK_OV004_022072B4_FAIL()                              \
    {                                                          \
        ((FtrActor *)this)->writeTiles(0, 0, 0, 0); \
        _ZN11FtrTileList7releaseEv(&c2);   \
        _ZN11FtrTileList7releaseEv(&c1);   \
        return FALSE;                                          \
    }

#define B8(o) (*(u8 *)((u8 *)self + (o)))
#define S32(o) (*(s32 *)((u8 *)self + (o)))
#define S16(o) (*(s16 *)((u8 *)self + (o)))
#define PT(o) ((void *)((u8 *)self + (o)))
typedef FtrActor Self;



// ---- declarations of the data defined below
extern "C" {
extern const u32 sFtrInitialActByMode[3];
extern const u8 sFtrPolygonIds[0x1c];
extern u16 gFtrSoundNone;
extern char data_ov004_022486fc[2];
extern char data_ov004_02248700[3];
extern char data_ov004_02248704[3];
extern char data_ov004_02248708[3];
extern char sFtrModelName[15];
extern char *sFtrModelNamePtr;
extern char data_ov004_02248710[5];
extern char data_ov004_02248718[6];
extern char data_ov004_02248720[6];
extern char *sFtrGlowMatNames[3];
extern char *sFtrVisNodeNames[4];
extern ActorProfile sFtrActorProfile;
extern s16 sFtrPreviewYaw;
extern s16 sFtrPreviewPitch;
extern char sFtrArcPathBuf[0x28];
extern char sFtrTexPathBuf[0x28];
extern DebugColor data_ov004_0224f60c;
extern DebugColor data_ov004_0224f62c;
extern DebugColor data_ov004_0224f63c;
extern DebugColor data_ov004_0224f608;
extern DebugColor data_ov004_0224f61c;
extern DebugColor data_ov004_0224f618;
extern FxVec3 data_ov004_0224f88c[4];
extern FxVec3 data_ov004_0224f8bc[4];
extern FxVec3 data_ov004_0224f8ec[4];
extern FxVec3 *sFtrFootprintCorners[3];
}

// ================================================================ functions and data

// @02209f1c
extern "C" void *FtrActor_Create() {
    return new FtrActor;
}

// @02209ef0
void *FtrActor::operator new(size_t size) {
    void *p = FtrActorHeap_alloc(FtrActorHeap_GetInstance(), size);
    if (p == 0) {
        return 0;
    }
    memset(p, 0, size);
    return p;
}

// @02209edc
void FtrActor::operator delete(void *p) {
    FtrActorHeap_free(FtrActorHeap_GetInstance(), p);
}

// @02209ebc
extern "C" void FtrActor_MatCallback(NNSG3dRS *self) {
    FtrActor *t = (FtrActor *)self->pRenderObj->ptrUser;
    if (t != 0) {
        t->onMatCalc(self->c[1], self);
    }
}

// @02209e90
extern "C" void FtrActor_NodeDescCallbackA(NNSG3dRS *self) {
    FtrActor *t = (FtrActor *)self->pRenderObj->ptrUser;
    if (t != 0) {
        t->onJointCalcPre(self->c[1], self);
    }
    self->cbVecFunc[6] = (void *)FtrActor_NodeDescCallbackB;
    self->cbVecTiming[6] = 2;
}

// @02209e64
extern "C" void FtrActor_NodeDescCallbackB(NNSG3dRS *self) {
    FtrActor *t = (FtrActor *)self->pRenderObj->ptrUser;
    if (t != 0) {
        t->onJointCalcPost(self->c[1], self);
    }
    self->cbVecFunc[6] = (void *)FtrActor_NodeDescCallbackA;
    self->cbVecTiming[6] = 1;
}

// @02209e44
extern "C" void FtrActor_NodeCallback(NNSG3dRS *o) {
    FtrActor *t = (FtrActor *)o->pRenderObj->ptrUser;
    if (t != NULL) {
        t->onNodeVisCalc(o->c[1], o);
    }
}

// @02209e14
extern "C" void FtrActor_SetModelCallbacks(NNSG3dRS *o) {
    o->cbVecFunc[4] = (void *)FtrActor_MatCallback;
    o->cbVecTiming[4] = 2;
    o->cbVecFunc[2] = (void *)FtrActor_NodeCallback;
    o->cbVecTiming[2] = 2;
    o->cbVecFunc[6] = (void *)FtrActor_NodeDescCallbackA;
    o->cbVecTiming[6] = 1;
}

// @02209e08
extern "C" u32 FtrActor_IsLightKind1(u32 a) {
    if (a == 1) {
        return 1;
    }
    return 0;
}

// @02209dd8
extern "C" void FtrActor_TurnOnRoomLight(u32 a) {
    u32 t = FtrActor_IsLightKind1(a);
    if (a == 2) {
        LightSwitch_SetOn(0, 8, t);
    } else {
        LightSwitch_SetOn(0, 0xc, t);
    }
    FtrSync_SetRoomLight(Scene_GetCurrent(), 1);
}

// @02209d58
extern "C" u32 FtrActor_MakeSpawnArg(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e) {
    FtrSpawnArgBuf l;
    l.tileX = a;
    l.tileZ = b;
    l.ftrIndex = c;
    l.dir = d;
    l.mode = e;
    l.layer = f;
    l.w1 = (l.w1 & ~0x1f) | 1;
    return *(u32 *)&l;
}

// @02209d4c
extern "C" u32 FtrActor_GetArgFtrIndex(u32 v) {
    FtrSpawnArgBuf l;
    *(u32 *)&l = v;
    return l.ftrIndex;
}

// @02209d40
extern "C" u32 FtrActor_GetArgMode(u32 v) {
    FtrSpawnArgBuf l;
    *(u32 *)&l = v;
    return l.mode;
}

// @02209d10
extern "C" BOOL FtrActor_IsLightSource(FtrActor *p) {
    if (p != NULL) {
        if (FtrInfo_GetIndoorFlagPair(FtrActor_GetFtrIndex(p)) != 0) {
            if (p->isPreview() == 0) {
                return TRUE;
            }
        }
        return FALSE;
    }
    return FALSE;
}

// @02209cf0
extern "C" BOOL FtrActor_IsStereo(FtrActor *p) {
    if (p != NULL) {
        u32 v = *(u16 *)((u8 *)p + 0xc);
        BOOL r;
        if (v == 0x3a) r = TRUE; else r = FALSE;
        if (r != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

// @02209ccc
BOOL FtrActor::isStereoOn() {
    if (FtrActor_IsStereo(this)) {
        return ((FtrSwitch *)(switchState))->isOn();
    }
    return FALSE;
}

// @02209c88
BOOL FtrActor::isTvOn() {
    u32 v = profile;
    BOOL a;
    BOOL b;
    BOOL r;
    if (v == 0x3b) a = TRUE; else a = FALSE;
    if (a != 0 || ((v == 0x3c ? (b = TRUE) : (b = FALSE)), b != 0)) {
        if (((FtrSwitch *)(switchState))->isOn()) r = TRUE; else r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

// @02209c58
BOOL FtrActor::isSeatOrBed() {
    BOOL r = TRUE;
    u32 v = profile;
    BOOL a;
    if (v == 0x36) a = TRUE; else a = FALSE;
    if (a == 0) {
        BOOL b;
        if (v == 0x37) b = TRUE; else b = FALSE;
        if (b == 0) r = FALSE;
    }
    if (r != 0) return TRUE;
    return FALSE;
}

// @02209c44
BOOL FtrActor::isGyroid() {
    if (kind == 0x18) {
        return TRUE;
    }
    return FALSE;
}

// @02209c10
BOOL FtrActor::isCabinClock() {
    if (isAct(0) == 0) {
        if (isAct(5) == 0) {
            if (kind == 0x10) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @02209bb4
BOOL FtrActor::isSoundingClock() {
    if (isAct(0) == 0) {
        if (isAct(5) == 0) {
            switch (kind) {
            case 0x10:
                return TRUE;
            case 0x11:
            case 0x2b:
                u32 c = FtrSound_GetSe3(FtrActor_GetFtrIndex(this));
                if (c != gFtrSoundNone) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

// @02209bb0
BOOL FtrActor::initModel() {
    return TRUE;
}

// @022099a0
FtrActor::FtrActor() {
    ModelSlotHandle_Init(&modelSlot);
    ((FtrStackLink *)(stackLink))->clear();
    new (topItems) FtrTopItems();
    __cxa_vec_ctor(topItemCylinders, 4, 0x20, func_020b6a0c, func_020b69fc);
    FtrMoveFlag_Init(moveFlag);
    func_020b6e10(touchBox);
    new (model) BlendAnimModel();
    new (collider) FtrCollider();
    new (modelRes) FtrModelRes();
    ((FtrSwitch *)(switchState))->clear();
    ((FtrClockHands *)(&clockHands))->clear();
    new (lampMat) FtrGlowMat();
    FtrVisNodes_Construct(visNodes);
    FtrSoundEmitter_resetAttached(soundEmitter);
    __cxa_vec_ctor(anims, 4, 0x20, _ZN12FtrModelAnimC1Ev, _ZN12FtrModelAnimD1Ev);
}

// @022096b4
FtrActor::~FtrActor() {
    __cxa_vec_cleanup(anims, 4, 0x20, _ZN12FtrModelAnimD1Ev);
    FtrSoundEmitter_Destroy();
    FtrVisNodes_Destruct(visNodes);
    ((FtrGlowMat *)(lampMat))->~FtrGlowMat();
    ((FtrClockHands *)(&clockHands))->~FtrClockHands();
    ((FtrSwitch *)(switchState))->~FtrSwitch();
    ((FtrModelRes *)(modelRes))->~FtrModelRes();
    _ZN11FtrColliderD1Ev(collider);
    ((BlendAnimModel *)(model))->BlendAnimModel::~BlendAnimModel();
    func_020b6df4(touchBox);
    FtrMoveFlag_Destroy(moveFlag);
    __cxa_vec_cleanup(topItemCylinders, 4, 0x20, func_020b69fc);
    ((FtrTopItems *)(topItems))->~FtrTopItems();
    ((FtrStackLink *)(stackLink))->~FtrStackLink();
    ModelSlotHandle_Destroy(&modelSlot);
}

// @02209578
BOOL FtrActor::onCreate() {
    FtrSpawnArgBuf l;
    *(u32 *)&l = param;  // (ProcBase::param: the spawn parameter)
    u32 t = l.mode;
    spawnMode = t;
    ((FtrActorTable *)(FtrActorTable_GetInstance()))->add(this);
    ModelSlot *r = sFtrMgrPool.acquire(&modelSlot);
    setupFromSpawnArg();
    if (((Character *)(this))->getCharId() == 0) {
        ((Character *)(this))->setCharId(makeCharId(0, 0));
    }
    if (spawnMode == 0) {
        ((FtrModelRes *)(modelRes))->loadSync(r, ftrIndex, needsTexCopy());
        void *p = ((FtrModelRes *)(modelRes))->getModel();
        ((Model *)(model))->setResource((NNSG3dResMdl *)(p), (NNSG3dResTex *)(((FtrModelRes *)(modelRes))->getTexture()));
        isInitializing = 1;
        setupModel();
        if (initModel()) {
            isInitializing = 0;
            return 1;
        }
        return 0;
    } else {
        if (((FtrModelRes *)(modelRes))->loadAsync(r, ftrIndex, needsTexCopy()) != 0) {
            void *p = ((FtrModelRes *)(modelRes))->getModel();
            ((Model *)(model))->setResource((NNSG3dResMdl *)(p), (NNSG3dResTex *)(((FtrModelRes *)(modelRes))->getTexture()));
            isInitializing = 1;
            setupModel();
            if (initModel()) {
                isInitializing = 0;
                return 1;
            }
            return 0;
        }
        return -1;
    }
}

// @02209558
void FtrActor::postCreate(s32 a) {
    if (a == 2) {
        initLamp();
    }
    ((Character *)(this))->Character::postCreate(a);
}

// @02209480
BOOL FtrActor::onExecute() {
    s32 v[4];
    if (isPreview() == 0) {
        FtrSoundEmitter_attach(soundEmitter);
        FtrActor_GetCenter(this, (VecFx32 *)v);
        centerPos[0] = v[0];
        centerPos[1] = v[1];
        centerPos[2] = v[2];
    }
    execAct();
    FtrActor_UpdateBox((Self *)this);
    FtrActor_UpdateMtx((Self *)this);
    if (isAct(0) == 0 && isAct(5) == 0) {
        if (kind == 0) {
            hasIndoorFlag6();
        }
        updateActive();
    } else {
        updateAppearRemove();
        if (((FtrSwitch *)(switchState))->isChanging()) {
            ((FtrSwitch *)(switchState))->toggle(0);
        }
    }
    if (isPreview() == 0) {
        updateLamp();
        ((FtrSwitch *)(switchState))->commit(this);
        FtrActor_UpdateTopItemBoxes((Self *)this);
    }
    return TRUE;
}

// @0220947c
BOOL FtrActor::updateActive() { return TRUE; }

// @02209478
BOOL FtrActor::updateAppearRemove() { return TRUE; }

// @022093a8
BOOL FtrActor::preDraw() {
    if (Actor::preDraw() == 0) {
        return FALSE;
    }
    if (isVisible() == 0) {
        return FALSE;
    }
    if (drawScale != 0 || drawScaleY != 0 || drawScaleZ != 0) {
        u32 saved[4];
        u32 i;
        if (isPreview()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)((u8 *)saved + o) = *(u32 *)(q + 0xa8);
                *(u32 *)(q + 0xa8) = (i << 30) | 0x7fff;
            }
        }
        ((AnimModel *)(model))->drawAnimated(&drawScale);
        if (isPreview()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)(q + 0xa8) = *(u32 *)((u8 *)saved + o);
            }
        }
    }
    if (isPreview() == 0) {
        ((FtrTopItems *)topItems)->drawAll(this);
    }
    return TRUE;
}

// @02209390
BOOL FtrActor::preDelete() {
    if (Character::preDelete()) {
        return TRUE;
    }
    return FALSE;
}

// @02209294
BOOL FtrActor::postDelete(s32 a) {
    if (a == 2) {
        FtrSoundEmitter_release(soundEmitter);
        releaseRoomLight();
        FtrActor_ReleaseCollider((Self *)this);
        if (isRemoving() == 0) {
            if (isHidden() == 0) {
                ((FtrSwitch *)(switchState))->saveToMap(this);
            }
        }
        ((FtrModelRes *)(modelRes))->release();
        sFtrMgrPool.release(&modelSlot);
        if (isRemoving()) {
            s32 x, y;
            findOwnTile(&x, &y, 0, 0);
            u32 r = Scene_GetCurrent();
            if (FtrMgr_IsSaleMode() && !SceneId_IsVillagerHouse(r) && !SceneId_IsHouseRoom(r)) {
                void *g = gSceneBlockMap;
                clearTiles(0, 0);
                if (g) {
                    u16 v = 0x1547;
                    BlockMap_SetItemAtUnit(g, &v, x, y, 0);
                }
            } else {
                clearTiles(1, 0);
            }
            spawnActorC0AtCenter();
        }
        ((FtrActorTable *)(FtrActorTable_GetInstance()))->remove(this);
    }
    return func_02002ec0(this, a);
}

// @02209290
BOOL FtrActor::needsTexCopy() { return FALSE; }

// @0220928c
BOOL FtrActor::isVisible() { return TRUE; }

// @02209288
void FtrActor::onRemove() {}

// @02209284
void FtrActor::onMoveStart(BOOL isPush) {}

// @02209280
void FtrActor::onRotateStart(BOOL negative) {}

// @0220927c
void FtrActor::onRotateUpdate(BOOL negative) {}

// data
DebugColor data_ov004_0224f60c(31, 20, 20, 31);
// data
DebugColor data_ov004_0224f62c(20, 20, 31, 31);
// data
DebugColor data_ov004_0224f63c(31, 31, 20, 31);
// data
DebugColor data_ov004_0224f608(20, 31, 20, 31);
// data
DebugColor data_ov004_0224f61c(20, 31, 31, 31);
// data
DebugColor data_ov004_0224f618(20, 24, 24, 31);
// data
ActorProfile sFtrActorProfile = {(void *(*)())FtrActor_Create, 0x2e, 0x35, 0, 0xc8000, 0x12c000, 0x258000};
// data
FxVec3 data_ov004_0224f88c[4] = {FxVec3(-0x1000, 0, -0x1000), FxVec3(-0x1000, 0, 0x1000),
                                       FxVec3(0x1000, 0, 0x1000), FxVec3(0x1000, 0, -0x1000)};
// data
FxVec3 data_ov004_0224f8bc[4] = {FxVec3(-0x1000, 0, -0x1000), FxVec3(-0x1000, 0, 0x1000),
                                       FxVec3(0x3000, 0, 0x1000), FxVec3(0x3000, 0, -0x1000)};
// data
FxVec3 data_ov004_0224f8ec[4] = {FxVec3(-0x2000, 0, -0x2000), FxVec3(-0x2000, 0, 0x2000),
                                       FxVec3(0x2000, 0, 0x2000), FxVec3(0x2000, 0, -0x2000)};
// data
s16 sFtrPreviewYaw;
// data
FxVec3 *sFtrFootprintCorners[3] = {data_ov004_0224f88c, data_ov004_0224f8bc, data_ov004_0224f8ec};
// data
u16 gFtrSoundNone = 0xffff;

// @022091fc
VecFx32 *FtrActor::getInteractionPos() {
    static FxVec3 v;
    v.x = position.x;
    v.y = position.y;
    v.z = position.z;
    u8 *o = (u8 *)PlayerActor_GetActor(4);
    if (o) {
        s32 i = *(u16 *)(o + 0x8e) >> 4;
        s32 k = i * 2;
        v.x = *(s32 *)(o + 0x5c) + data_02135f44[k];
        v.y = *(s32 *)(o + 0x60);
        v.z = *(s32 *)(o + 0x64) + data_02135f44[k + 1];
    }
    return (VecFx32 *)&v;
}

// @022091f0
u8 FtrActor::getActAid() {
    return actAid;
}

// @022091e0
u32 FtrActor::hasIndoorFlag6() {
    return FtrInfo_TestIndoorFlag6(ftrIndex);
}

// @02209198
BOOL FtrActor::playSound0() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe0(ftrIndex);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_playOnce(soundEmitter, t, centerPos);
            return TRUE;
        }
    }
    return FALSE;
}

// @02209150
BOOL FtrActor::playSound1() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe1(ftrIndex);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_play(soundEmitter, t, centerPos);
            return TRUE;
        }
    }
    return FALSE;
}

// @02209108
BOOL FtrActor::playSound2() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe2(ftrIndex);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_play(soundEmitter, t, centerPos);
            return TRUE;
        }
    }
    return FALSE;
}

// @022090c0
BOOL FtrActor::playSound3() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe3(ftrIndex);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_play(soundEmitter, t, centerPos);
            return TRUE;
        }
    }
    return FALSE;
}

// @02208ff0
u16 FtrActor::getAnimFrameCount(s32 a) {
    u32 i = a & 1;
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBca(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBca(i)->numFrame;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBma(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBma(i)->numFrame;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBta(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBta(i)->numFrame;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBtp(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBtp(i)->numFrame;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBva(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBva(i)->numFrame;
    }
    return 0;
}

// @02208de0
void FtrActor::initAnims(s32 a, s32 b, s32 c, s32 d) {
    ModelSlot *m = FtrActor_GetHeap((Self *)this);
    u32 i = a & 1;
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBva(i)) {
        void *t = modelResMdl;
        if (((ModelAnim *)(&anims[3]))->allocJointAnm((NNSG3dResMdl *)t, ModelSlot_getHeap(m))) {
            ((ModelAnim *)(&anims[3]))->init((s32)(((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBva(i)), b, c, d);
            ((ModelAnim *)(&anims[3]))->addToRenderObj(Model_getRenderObj(model));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBma(i)) {
        void *t = modelResMdl;
        if (((ModelAnim *)(anims))->allocMatAnm((NNSG3dResMdl *)t, ModelSlot_getHeap(m))) {
            ((ModelAnim *)(anims))->init((s32)(((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBma(i)), b, c, d);
            ((ModelAnim *)(anims))->addToRenderObj(Model_getRenderObj(model));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBta(i)) {
        void *t = modelResMdl;
        if (((ModelAnim *)(&anims[1]))->allocMatAnm((NNSG3dResMdl *)t, ModelSlot_getHeap(m))) {
            ((ModelAnim *)(&anims[1]))->init((s32)(((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBta(i)), b, c, d);
            ((ModelAnim *)(&anims[1]))->addToRenderObj(Model_getRenderObj(model));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBtp(i)) {
        void *t = modelResMdl;
        if (((ModelAnim *)(&anims[2]))->allocMatAnm((NNSG3dResMdl *)t, ModelSlot_getHeap(m))) {
            NNSG3dResAnmCommon *rec = ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBtp(i);
            ((ModelAnim *)(&anims[2]))->initWithTex(rec, ((FtrModelRes *)(modelRes))->getTexture(), b, c, d);
            ((ModelAnim *)(&anims[2]))->addToRenderObj(Model_getRenderObj(model));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBca(i)) {
        if (((AnimModel *)(model))->allocAnmObj(ModelSlot_getHeap(m))) {
            ((BlendAnimModel *)(model))->initAnim(((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBca(i), b, c, d, 0);
            ((AnimModel *)(model))->attachAnim();
        }
    }
}

// @02208ba8
void FtrActor::playAnim(s32 a, s32 b, s32 c, u32 d) {
    u32 i = a & 1;
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBva(i)) {
        NNSG3dResAnmCommon *rec = ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBva(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)anims[3].curFrame << 4) >> 16;
        } else {
            u32 n = rec->numFrame;
            v = (u16)(d >= n ? n - 1 : d);
        }
        ((ModelAnim *)(&anims[3]))->replace(Model_getRenderObj(model), rec, b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBma(i)) {
        NNSG3dResAnmCommon *rec = ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBma(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)anims[0].curFrame << 4) >> 16;
        } else {
            u32 n = rec->numFrame;
            v = (u16)(d >= n ? n - 1 : d);
        }
        ((ModelAnim *)(anims))->replace(Model_getRenderObj(model), rec, b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBta(i)) {
        NNSG3dResAnmCommon *rec = ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBta(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)anims[1].curFrame << 4) >> 16;
        } else {
            u32 n = rec->numFrame;
            v = (u16)(d >= n ? n - 1 : d);
        }
        ((ModelAnim *)(&anims[1]))->replace(Model_getRenderObj(model), rec, b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBtp(i)) {
        NNSG3dResAnmCommon *rec = ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBtp(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)anims[2].curFrame << 4) >> 16;
        } else {
            u32 n = rec->numFrame;
            v = (u16)(d >= n ? n - 1 : d);
        }
        void *p = Model_getRenderObj(model);
        ((ModelAnim *)(&anims[2]))->replaceWithTex(p, rec, ((FtrModelRes *)(modelRes))->getTexture(), b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBca(i)) {
        NNSG3dResAnmCommon *rec = ((FtrAnimSet *)(((FtrModelRes *)(modelRes))->getAnimSet()))->getBca(i);
        u32 v;
        if (d == 0xffff) {
            v = (animFrame << 4) >> 16;
        } else {
            u32 n = rec->numFrame;
            if (d >= n) {
                d = n - 1;
            }
            v = (u16)d;
        }
        ((BlendAnimModel *)(model))->initAnim(rec, b, c, v, 0);
    }
}

// @02208a18
extern "C" void FtrActor_PlayAnimsFromLastFrame(Self *self, u32 a, s32 b, s32 c) {
    s32 k = a & 1;
    NNSG3dResAnmCommon *q;
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBva(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBva(k);
        ((ModelAnim *)(PT(0x820)))->replace(Model_getRenderObj(PT(0x534)), q, b, c, (u16)(q->numFrame - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBma(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBma(k);
        ((ModelAnim *)(PT(0x7c0)))->replace(Model_getRenderObj(PT(0x534)), q, b, c, (u16)(q->numFrame - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBta(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBta(k);
        ((ModelAnim *)(PT(0x7e0)))->replace(Model_getRenderObj(PT(0x534)), q, b, c, (u16)(q->numFrame - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBtp(k)) {
        void *obj;
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBtp(k);
        obj = Model_getRenderObj(PT(0x534));
        ((ModelAnim *)(PT(0x800)))->replaceWithTex(obj, q, ((FtrModelRes *)(PT(0x6c8)))->getTexture(), b, c, (u16)(q->numFrame - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBca(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBca(k);
        ((BlendAnimModel *)(PT(0x534)))->initAnim(q, b, c, (u16)(q->numFrame - 1), 0);
    }
}

// @02208980
extern "C" BOOL FtrActor_StepAnims(Self *self) {
    BOOL k = TRUE;
    BOOL r4 = TRUE;
    BOOL z = FALSE;
    u32 i;
    void *p;
    if (((BlendAnimModel *)(PT(0x534)))->getAnmObj()) {
        ((BlendAnimModel *)(PT(0x534)))->stepBlend();
        if (!((AnimFrameCtrl *)(PT(0x5d0)))->isFinished()) {
            r4 = FALSE;
        }
    }
    for (i = z; i < 4; i++) {
        if (((FtrModelAnim *)(&self->anims[i]))->getAnmObj()) {
            p = (FtrModelAnimView *)PT(0x7c0) + i;
            ((AnimFrameCtrl *)(p))->step();
            *self->anims[i].anmObj = self->anims[i].curFrame;
            if (!((AnimFrameCtrl *)(p))->isFinished()) {
                k = z;
            }
        }
    }
    if (k && r4) {
        return TRUE;
    }
    return FALSE;
}

// @02208968
extern "C" ModelSlot *FtrActor_GetHeap(Self *self) {
    return sFtrMgrPool.acquire(&self->modelSlot);
}

// @02208938
extern "C" void FtrActor_LocalToWorld(Self *self, void *out, void *src) {
    data_021f47e0 = *(Mtx43 *)PT(0x250);
    MTX_MultVec43(src, &data_021f47e0, out);
}

// @02208910
extern "C" void FtrActor_GetCorner(Self *self, void *out, s32 i) {
    FxVec3 *tbl = sFtrFootprintCorners[S32(0x780)];
    FtrActor_LocalToWorld(self, out, (u8 *)tbl + (i & 3) * 12);
}

// @022088c0
extern "C" void FtrActor_GetCenter(Self *self, VecFx32 *out) {
    u32 i = 0;
    VecFx32 v;
    VecFx32 t;
    v.x = i;
    v.y = i;
    v.z = i;
    for (; i < 4; i++) {
        FtrActor_GetCorner(self, &t, i);
        VEC_Add(&v, &t, &v);
    }
    v.x = v.x >> 2;
    v.y = v.y >> 2;
    v.z = v.z >> 2;
    out->x = v.x;
    out->y = v.y;
    out->z = v.z;
}

// @02208894
extern "C" BOOL FtrActor_TestPlayerUnk() {
    PlayerData *pd;
    s32 id;
    if ((pd = PlayerData_GetCurrent()) != NULL) {
        if ((id = pd->getPlayerId()) != 0) {
            if (((TownId *)(id))->getTownRelation() == 0) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

// @02208870
extern "C" BOOL FtrActor_IsWithinDist(Self *self, s32 a, void *p, s32 b) {
    if (Vec_DistXZ(self, p) < a + b) {
        return TRUE;
    }
    return FALSE;
}

// @022087e8
extern "C" BOOL FtrActor_IsPosClearOfCharacters(Self *self, s32 a, s32 b, s32 c, s32 d) {
    void *p;
    u32 i;
    u32 j;
    u32 n;
    p = PlayerActor_GetActor(4);
    if (p) {
        for (i = 0; i < 4; i++) {
            void *q = PlayerActor_GetActor(i);
            if (q && p != q) {
                if (FtrActor_IsWithinDist(self, a, (u8 *)q + 0x5c, c)) {
                    return FALSE;
                }
            }
        }
        n = NpcRegistry_GetSlotCount();
        for (j = 0; j < n; j++) {
            void *q = NpcRegistry_GetBySlot(j);
            if (q) {
                if (FtrActor_IsWithinDist(self, b, (u8 *)q + 0x5c, d)) {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}

// @022087b0
extern "C" Self *FtrActor_GetParent(Self *self) {
    if (((FtrStackLink *)(PT(0x178)))->isAttached()) {
        void *p = FtrActorTable_GetInstance();
        return ((FtrActorTable *)(p))->get(((FtrStackLink *)(PT(0x178)))->getParentIndex());
    }
    return 0;
}

// @022087a4
extern "C" s32 FtrActor_GetFtrIndex(Self *self) {
    return S32(0x280);
}

// @0220878c
BOOL FtrActor::changeAct(u32 a, u8 v) {
    actAid = v;
    netRequestPending = 0;
    return 1;
}

// @02208788
u8 FtrActor::getActSwitchState(u32 a) {
    return 0;
}

// @0220875c
extern "C" BOOL FtrActor_RequestToggle(Self *self) {
    if (B8(0x779) == 0) {
        ((FtrSwitch *)(PT(0x73c)))->toggle(1);
        return TRUE;
    }
    return FALSE;
}

// @02208750
extern "C" u8 FtrActor_GetLayer(Self *self) {
    return B8(0x284);
}

// @0220865c
extern "C" void FtrActor_CalcWorldMtx(Self *self, VecFx32 *a, s32 b) {
    if (((FtrStackLink *)(PT(0x178)))->isAttached()) {
        void *p = FtrActorTable_GetInstance();
        Self *q = ((FtrActorTable *)(p))->get(((FtrStackLink *)(PT(0x178)))->getParentIndex());
        s32 r4, r6;
        if (a != 0 || b != 0) {
            FtrActor_CalcWorldMtx(q, a, b);
        } else {
            data_021f47e0 = *(Mtx43 *)(HOST_AT(q, 0x250, moveFlag[4], 0));
        }
        r6 = ((FtrStackLink *)(PT(0x178)))->getRelPos()->z;
        r4 = ((FtrStackLink *)(PT(0x178)))->getRelPos()->y;
        s32 x = ((FtrStackLink *)(PT(0x178)))->getRelPos()->x;
        Mtx43_Translate(&data_021f47e0, x, r4, r6);
        Mtx43_RotateY(&data_021f47e0, ((FtrStackLink *)(PT(0x178)))->getRelAngle());
    } else {
        VecFx32 v;
        s32 ang;
        v.x = S32(0x5c);
        v.y = S32(0x60);
        v.z = S32(0x64);
        if (a != 0) {
            VEC_Add(&v, a, &v);
        }
        ang = (s16)(S16(0x8e) + b);
        Mtx43_SetTranslate(&data_021f47e0, v.x, v.y, v.z);
        Mtx43_RotateY(&data_021f47e0, ang);
        Mtx43_Translate(&data_021f47e0, S32(0x140), S32(0x144), S32(0x148));
    }
}

// @02208554
extern "C" void FtrActor_UpdateMtx(Self *self) {
    if (((FtrActor *)(self))->isPreview()) {
        Mtx43_SetTranslate(&data_021f47e0, S32(0x5c), S32(0x60), S32(0x64));
        Mtx43_RotateX(&data_021f47e0, sFtrPreviewPitch);
        Mtx43_RotateY(&data_021f47e0, (s16)(S16(0x8e) + sFtrPreviewYaw));
        if (S32(0x780) == 1) {
            Mtx43_Translate(&data_021f47e0, func_01ffcb0c(S32(0x14c), -0x1000), 0, 0);
        }
        s32 y = FtrInfo_GetDmaUnk06(FtrActor_GetFtrIndex(self)) * 100 - 0x258;
        Mtx43_Translate(&data_021f47e0, 0, y, 0);
        *(Mtx43 *)PT(0x598) = data_021f47e0;
    } else {
        FtrActor_CalcWorldMtx(self, 0, 0);
        *(Mtx43 *)PT(0x250) = data_021f47e0;
        if (S32(0x780) == 1) {
            Mtx43_Translate(&data_021f47e0, func_01ffcb0c(0x1000 - S32(0x14c), 0x1000), 0, 0);
        }
        *(Mtx43 *)PT(0x598) = data_021f47e0;
    }
}

// data
s16 sFtrPreviewPitch;

// @02208470
extern "C" void FtrActor_GetBoxSize(Self *self, VecFx32 *out) {
    static FxVec3 vs[3] = {FxVec3(0x2000, 0x2000, 0x2000),
                                         FxVec3(0x4000, 0x2000, 0x2000),
                                         FxVec3(0x4000, 0x2000, 0x4000)};
    volatile VecFx32 r;
    Scene_GetCurrent();
    {
        FxVec3 *q = &vs[S32(0x780)];
        r.x = q->x;
        r.y = q->y;
        r.z = q->z;
    }
    if (S32(0x78c) == 0) {
        r.y = 0x200;
    } else if (FtrMgr_IsSaleMode() != 0) {
        r.y = S32(0x78c);
    } else {
        r.y = S32(0x78c) >> 1;
    }
    out->x = r.x;
    out->y = r.y;
    out->z = r.z;
}

// @0220838c
extern "C" void FtrActor_InitCollider(Self *self) {
    VecFx32 a;
    s32 b[3];
    VecFx32 c;
    if (!((FtrActor *)(self))->isPreview()) {
        u32 r6;
        s32 k;
        FtrActor_GetBoxSize(self, &a);
        {
            s32 t = S32(0x158);
            b[0] = t;
            b[1] = t;
            b[2] = t;
        }
        FtrActor_GetCenter(self, &c);
        if (B8(0x788) == 0) {
            void *r4;
            ((FtrCollider *)(PT(0x628)))->setOwner(self);
            r4 = FtrActorTable_GetInstance();
            ((FtrActorTable *)(r4))->get(((FtrStackLink *)(PT(0x178)))->getParentIndex());
            BoxCollider_Register(PT(0x628), a.x, a.z, 0x4000, &c, S16(0x8e), b);
        }
        r6 = (u8)((FtrActorTable *)(FtrActorTable_GetInstance()))->indexOf(self);
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (Scene_InUnk6To8() != 0) {
            k = 0xf;
        } else {
            k = 8;
        }
        ((TouchPicker *)(Scene_GetTouchPicker()))->addBox((TouchPickBox *)(PT(0x288)), (VecFx32 *)(&c), a.x, a.z, a.y, S16(0x8e), k, r6);
    }
}

// @02208358
extern "C" void FtrActor_ReleaseCollider(Self *self) {
    if (!((FtrActor *)(self))->isPreview()) {
        if (B8(0x788) == 0) {
            BoxCollider_Unregister(PT(0x628));
            ((FtrCollider *)(PT(0x628)))->clearOwner();
        }
    }
}

// @02208284
extern "C" void FtrActor_UpdateBox(Self *self) {
    VecFx32 a;
    s32 b[3];
    VecFx32 c;
    if (!((FtrActor *)(self))->isPreview()) {
        s32 r4;
        s32 t;
        FtrActor_GetBoxSize(self, &a);
        t = S32(0x158);
        b[0] = t;
        b[1] = t;
        b[2] = t;
        FtrActor_GetCenter(self, &c);
        r4 = 0;
        if (B8(0x788) == 0) {
            if (B8(0x6c0) != 0) {
                r4 = BoxColliderShape_updateTransform(PT(0x628), &c, S16(0x8e), b);
            } else {
                r4 = 1;
            }
        }
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (r4 != 0) {
            u32 r6 = (u8)((FtrActorTable *)(FtrActorTable_GetInstance()))->indexOf(self);
            s32 k;
            if (Scene_InUnk6To8() != 0) {
                k = 0xf;
            } else {
                k = 8;
            }
            ((TouchPicker *)(Scene_GetTouchPicker()))->addBox((TouchPickBox *)(PT(0x288)), (VecFx32 *)(&c), a.x, a.z, a.y, S16(0x8e), k, r6);
        } else {
            ((TouchPicker *)(Scene_GetTouchPicker()))->pushBox((TouchPickBox *)(PT(0x288)));
        }
    }
}

// @022081b4
extern "C" void FtrActor_UpdateTopItemBoxes(Self *self) {
    if (B8(0x284) == 0 && S32(0x784) == 1) {
        Unk_ov004_02207854_List l;
        VecFx32 v;
        void *grid;
        u32 i;
        new (&l) FtrTileList();
        ((FtrActor *)(self))->getTiles(&l, 0, 0);
        grid = gSceneBlockMap;
        for (i = 0; i < ((FtrTileList *)(&l))->getCount(); i++) {
            s32 x = ((FtrTileList *)(&l))->get(i)->x;
            s32 y = ((FtrTileList *)(&l))->get(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *c = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (c) {
                if (Item_IsNormalItem(c)) {
                    FieldPos_FromUnitCenter(&v, x, y);
                    v.y = FtrMgr_GetSurfaceHeight(x, y);
                    ((TouchPicker *)(Scene_GetTouchPicker()))->addCylinder((TouchPickCylinder *)(HOST_AT(self, 0x1cc, topItemCylinders[0], 0) + i * 0x20), (VecFx32 *)(&v), 0xccd, 0x100, 10, 0xff);
                }
            }
        }
        ((FtrTileList *)(&l))->release();
    }
}

// @02208198
extern "C" void FtrActor_SetInitialAct(Self *self) {
    ((FtrActor *)(self))->setAct(sFtrInitialActByMode[S32(0x768)]);
}

// @02207ef0
void FtrActor::setupFromSpawnArg() {
    if (isSetUp == 0) {
        struct {
            volatile u16 tmp;
            u16 pad;
            FtrSpawnArg bits;
            u32 pad2;
        } f;
        f.bits = *(FtrSpawnArg *)&param;
        VecFx32 p1, p2, r;
        volatile VecFx32 q;
        if (!isPreview()) {
            FieldPos_FromBlockUnitCenter(&position, 0, 0, f.bits.tileX, f.bits.tileZ);
            position.y = FtrMgr_GetSurfaceHeightAtPos(&position);
            drawScale = 0x1000;
            drawScaleY = 0x1000;
            drawScaleZ = 0x1000;
            colliderScale = 0x1000;
        } else {
            p1 = *(VecFx32 *)gCameraEye;
            p2 = *(VecFx32 *)gCameraLookAt;
            Vec_Sub(&r, &p2, &p1);
            Vec_SafeNormalize(&r);
            s32 qz = func_01ffcb0c(r.z, 0x4000);
            s32 qy = func_01ffcb0c(r.y, 0x4000);
            s32 qx = func_01ffcb0c(r.x, 0x4000);
            q.x = qx;
            q.y = qy;
            q.z = qz;
            position.x = p1.x + qx;
            position.y = p1.y + q.y;
            position.z = p1.z + q.z;
            drawScale = 0x400;
            drawScaleY = 0x400;
            drawScaleZ = 0x400;
            colliderScale = 0x1000;
            sFtrPreviewPitch = Math_Atan2(r.z, r.y) - 0xb000;
            sFtrPreviewYaw = Math_Atan2(r.x, r.z) + 0x8000;
        }
        rotY = f.bits.dir << 14;
        ftrIndex = f.bits.ftrIndex;
        if ((s32)ftrIndex >= 0x6e9) {
            ftrIndex = 0x6e8;
        }
        f.tmp = Item_MakeFurniture(ftrIndex, 0);
        mapLayer = f.bits.layer;
        if (!isPreview() && mapLayer == 0) {
            position.y = 0;
            if (Scene_GetCurrent() == 10) {
                position.y = FtrMgr_GetSurfaceHeightAtPos(&position);
            }
        }
        kind = FtrInfo_GetDmaUnk02(ftrIndex);
        surfaceHeight = FtrInfo_GetDmaUnk03Fx(ftrIndex);
        footprint = FtrInfo_GetUnk05(ftrIndex);
        commentPersonality = FtrInfo_GetDmaUnk07(ftrIndex);
        commentId = FtrInfo_GetDmaUnk08(ftrIndex);
        noCollision = FtrInfo_TestIndoorFlag2(ftrIndex);
        startsOff = FtrInfo_TestIndoorFlag3(ftrIndex);
        hasTopSurface = FtrInfo_GetDmaUnk04(ftrIndex);
        lightKind = FtrInfo_GetIndoorFlagPair(ftrIndex);
        if (!isPreview()) {
            if (footprint == 2) {
                position.x += 0x1000;
                position.z += 0x1000;
            }
            if (mapLayer == 1) {
                ((FtrStackLink *)(stackLink))->attachAt(f.bits.tileX, f.bits.tileZ, rotY);
            }
        }
        FtrActor_UpdateMtx((Self *)this);
        ((FtrSwitch *)(switchState))->loadFromMap(this);
        writeTiles(1, 0, 0, 0);
        FtrActor_SetInitialAct((Self *)this);
        FtrActor_InitCollider((Self *)this);
        isSetUp = 1;
    }
}

// @02207e48
void FtrActor::setupModel() {
    void *p = modelResMdl;
    s32 a = ((G3dResAccess *)(p))->findNodeIdx((const char *)("kh_j"));
    s32 b = ((G3dResAccess *)(p))->findNodeIdx((const char *)("km_j"));
    ((FtrClockHands *)&clockHands)->set((s8)a, (s8)b);
    ((Model *)(model))->setInitCallback((void (*)(NNSG3dRS *))(FtrActor_SetModelCallbacks), this);
    ((FtrVisNodes *)(visNodes))->init(modelResMdl, 1);
    void *t = ((FtrModelRes *)(modelRes))->getModel();
    NNS_G3dBindMdlTex(t, ((FtrModelRes *)(modelRes))->getTexture());
    t = ((FtrModelRes *)(modelRes))->getModel();
    NNS_G3dBindMdlPltt(t, ((FtrModelRes *)(modelRes))->getTexture());
    applyPolygonId();
}

// @02207e14
void FtrActor::applyPolygonId() {
    s32 r = ((FtrActorTable *)(FtrActorTable_GetInstance()))->indexOf(this);
    if (r != -1) {
        ((Model *)(model))->setPolygonId(sFtrPolygonIds[r]);
    }
}

// data
const u32 sFtrInitialActByMode[3] = {1, 0, 8};
// data
const u8 sFtrPolygonIds[0x1c] = {0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13,
                                      0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c};

// @02207c40
void FtrActor::getTiles(Unk_ov004_02207854_List *l, void *x, s32 y) {
    VecFx32 c;
    VecFx32 d;
    VecFx32 e;
    s32 ox, oy;
    c.x = position.x;
    c.y = position.y;
    c.z = position.z;
    if (x != 0) {
        VEC_Add(&c, x, &c);
    }
    static FxVec3 arr[2] = {FxVec3(0, 0, 0), FxVec3(0x2000, 0, 0)};
    d.x = c.x;
    d.y = c.y;
    d.z = c.z;
    switch (footprint) {
    case 0:
        if (x != 0 || y != 0) {
            FtrActor_CalcWorldMtx((Self *)this, (VecFx32 *)x, y);
        } else {
            data_021f47e0 = worldMtx;
        }
        {
            static FxVec3 s(0, 0, 0);
            MTX_MultVec43(&s, &data_021f47e0, &d);
        }
        FieldPos_ToUnit(&ox, &oy, &d);
        ((FtrTileList *)(l))->add(ox, oy);
        break;
    case 1: {
        if (x != 0 || y != 0) {
            FtrActor_CalcWorldMtx((Self *)this, (VecFx32 *)x, y);
        } else {
            data_021f47e0 = worldMtx;
        }
        s32 i;
        for (i = 0; i < 2; i++) {
            e.x = arr[i].x;
            e.y = arr[i].y;
            e.z = arr[i].z;
            MTX_MultVec43(&e, &data_021f47e0, &d);
            FieldPos_ToUnit(&ox, &oy, &d);
            ((FtrTileList *)(l))->add(ox, oy);
        }
        break;
    }
    default:
        d.x = c.x - 0x1000;
        d.z = c.z - 0x1000;
        FieldPos_ToUnit(&ox, &oy, &d);
        ((FtrTileList *)(l))->add(ox, oy);
        ((FtrTileList *)(l))->add(ox + 1, oy);
        ((FtrTileList *)(l))->add(ox, oy + 1);
        ((FtrTileList *)(l))->add(ox + 1, oy + 1);
        break;
    }
}

// @02207c04
extern "C" u32 FtrActor_AngleToDir(s32 v) {
    u32 x = (u16)v;
    if (x >= 0xe000 || x < 0x2000) {
        return 0;
    }
    if (x < 0x6000) {
        return 1;
    }
    if (x < 0xa000) {
        return 2;
    }
    return 3;
}

// @02207bdc
extern "C" void FtrActor_MakeItemForAngle(u16 *out, FtrActor *obj, s32 ang) {
    *out = Item_MakeFurniture(obj->ftrIndex, FtrActor_AngleToDir(ang));
}

// @02207ac4
void FtrActor::clearTiles(s32 a, s32 b) {
    if (!isPreview()) {
        Unk_ov004_02207854_List l;
        void *grid;
        u32 i;
        new (&l) FtrTileList();
        getTiles(&l, 0, 0);
        grid = (void *)gSceneBlockMap;
        {
            volatile u16 tmp[1];
            tmp[0] = 0xfff1;
            ((void (*)(u32))FtrMgr_IsSaleMode)(Scene_GetCurrent());
            i = 0;
            for (; i < ((FtrTileList *)(&l))->getCount(); i++) {
                s32 x = ((FtrTileList *)(&l))->get(i)->x;
                s32 y = ((FtrTileList *)(&l))->get(i)->y;
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                u16 *p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), mapLayer);
                if (p != 0 && Item_IsFurniture(p)) {
                    s32 t = Scene_GetCurrent();
                    FtrSync_RemoveFurniture(t, x, y, mapLayer, ((FtrSwitch *)(switchState))->isOn(), p, b, a);
                }
                FtrActorGrid_clearCell(FtrActorGrid_GetInstance(), this, x, y, mapLayer);
                if (b != 0 && mapLayer == 0) {
                    s32 c = FtrActorGrid_getIndex(FtrActorGrid_GetInstance(), x, y, 1);
                    if (c != -1) {
                        FtrActorGrid_clearCell(FtrActorGrid_GetInstance(), this, x, y, 1);
                    }
                }
            }
        }
        ((FtrTileList *)(&l))->release();
    }
}

// @022078d8
void FtrActor::writeTiles(s32 unused, void *x, s32 y, u8 flag) {
    if (!isPreview()) {
        Unk_ov004_02207854_List l;
        u16 a, b, c;
        u32 r7;
        s32 v18;
        u32 i;
        new (&l) FtrTileList();
        getTiles(&l, x, y);
        a = 0xfff1;
        if (mapLayer == 1) {
            VecFx32 v1, v2;
            static FxVec3 s0(0, 0, 0);
            static FxVec3 s1(0, 0, 0x1000);
            MTX_MultVec43(&s0, &data_021f47e0, &v1);
            MTX_MultVec43(&s1, &data_021f47e0, &v2);
            s32 ang = Math_Atan2(v2.x - v1.x, v2.z - v1.z);
            FtrActor_MakeItemForAngle(&b, this, ang);
            a = b;
        } else {
            FtrActor_MakeItemForAngle(&c, this, (s16)(rotY + y));
            a = c;
        }
        ((void (*)(u32))FtrMgr_IsSaleMode)(Scene_GetCurrent());
        if (isSetUp == 0) {
            r7 = 0;
        } else {
            r7 = ((u32 (*)(void *))FtrActor_PredIsGyroid)(this);
        }
        v18 = getActAid();
        for (i = 0; i < ((FtrTileList *)(&l))->getCount(); i++) {
            if (i == 0) {
                u32 s = ((FtrSwitch *)(switchState))->isOn();
                s32 t = Scene_GetCurrent();
                Unk_ov004_02206520_Ent *p1 = ((FtrTileList *)(&l))->get(i);
                Unk_ov004_02206520_Ent *p2 = ((FtrTileList *)(&l))->get(i);
                FtrSync_PlaceFurniture(t, p1->x, p2->y, mapLayer, s, r7, v18, &a, 1);
            }
            void *o = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *p3 = ((FtrTileList *)(&l))->get(i);
            Unk_ov004_02206520_Ent *p4 = ((FtrTileList *)(&l))->get(i);
            FtrActorGrid_setCell(o, this, p3->x, p4->y, mapLayer);
        }
        if (flag != 0) {
            u32 r = makeCharId((VecFx32 *)x, y);
            if (r != ((Character *)(this))->getCharId()) {
                ((Character *)(this))->setCharId(r);
            }
        }
        ((FtrTileList *)(&l))->release();
    }
}

// @02207854
void FtrActor::moveTiles(void *a, s32 b) {
    Unk_ov004_02207854_List l;
    FtrStackedSetView set;
    u32 i;
    new (&l) FtrTileList();
    getTiles(&l, 0, 0);
    new (&set) FtrStackedSet((FtrTileList *)(&l), mapLayer);
    clearTiles(1, 1);
    writeTiles(1, a, b, 1);
    for (i = 0; i < ((FtrStackedSet *)(void *)(&set))->getCount(); i++) {
        FtrActor *o = ((FtrStackedSet *)(void *)(&set))->get(i);
        if (o != 0) {
            o->writeTiles(1, a, b, 1);
        }
    }
    new (&set) FtrStackedSet();
    ((FtrTileList *)(&l))->release();
}

// @0220784c
extern "C" s32 FtrActor_TestSceneUnk(s32 a) {
    return SceneId_IsHouseRoom(a);
}

// @02207838
extern "C" s32 FtrActor_TestCurSceneUnk() {
    return FtrActor_TestSceneUnk(Scene_GetCurrent());
}

// @022077a4
void FtrActor::initLamp() {
    if (FtrActor_PredIsLightSource(this)) {
        void *v = modelResMdl;
        u32 t = ((FtrSwitch *)(switchState))->isOn();
        ((FtrGlowMat *)(lampMat))->bindMaterial((G3dResAccess *)v, "lp_m", t);
        if (FtrActor_TestCurSceneUnk()) {
            s32 r = FtrMgr_CountSwitchedOn(FtrActor_IsLightSource);
            if (((FtrSwitch *)(switchState))->isOn() != 0 && r == 1) {
                if (spawnMode != 0) {
                    FtrActor_TurnOnRoomLight(lightKind);
                    FtrSync_SetRoomLight(Scene_GetCurrent(), 1);
                } else {
                    LightSwitch_SetOn(0, 1, 0);
                }
            }
        }
    }
}

// @02207704
void FtrActor::updateLamp() {
    if (FtrActor_PredIsLightSource(this)) {
        if (FtrActor_TestCurSceneUnk()) {
            u32 b = ((FtrSwitch *)(switchState))->isOn();
            u32 f = lightKind == 1 ? 1 : 0;
            if (((FtrGlowMat *)(lampMat))->setLit(b, 1, f)) {
                s32 m = FtrMgr_CountSwitchedOn(FtrActor_IsLightSource);
                if (((FtrSwitch *)(switchState))->isOn()) {
                    if (m == 1) {
                        FtrActor_TurnOnRoomLight(lightKind);
                        FtrSync_SetRoomLight(Scene_GetCurrent(), 1);
                    }
                } else if (m == 0) {
                    LightSwitch_SetOff(0, 8);
                    FtrSync_SetRoomLight(Scene_GetCurrent(), 0);
                }
            }
        }
    }
    ((FtrGlowMat *)(lampMat))->updateEmission();
}

// @022076b0
void FtrActor::releaseRoomLight() {
    if (FtrActor_PredIsLightSource(this)) {
        if (FtrActor_TestCurSceneUnk()) {
            if (((FtrSwitch *)(switchState))->isOn()) {
                if (FtrMgr_CountSwitchedOn(FtrActor_IsLightSource) == 1) {
                    LightSwitch_SetOff(0, 1);
                    if (isRemoving()) {
                        FtrSync_SetRoomLight(Scene_GetCurrent(), 0);
                    }
                }
            }
        }
    }
}

// @02207650
extern "C" s32 FtrActor_GetDragSe(void) {
    if (Unk_ov004_02207650_IsOne(gFieldSceneKind)) {
        u16 *p = RoomShell_GetCarpet();
        if (Unk_ov004_02207650_InRange(p)) {
            s32 q = GroundAttr_GetDragSe(ItemInfo_GetIndoorUnk1(p));
            if (q != 0xffff) {
                return q;
            }
        }
        return 0x4c1;
    }
    return 0xffff;
}

// @022075b0
BOOL FtrActor::hasItemOnTop() {
    Unk_ov004_02207854_List c;
    new (&c) FtrTileList();
    ((FtrActor *)(this))->getTiles(&c, 0, 0);
    void *grid = gSceneBlockMap;
    if (mapLayer == 0 && hasTopSurface == 1) {
        u32 i;
        for (i = 0; i < ((FtrTileList *)(&c))->getCount(); i++) {
            s32 y = ((FtrTileList *)(&c))->get(i)->y;
            s32 x = ((FtrTileList *)(&c))->get(i)->x;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell && *cell != 0xfff1) {
                ((FtrTileList *)(&c))->release();
                return TRUE;
            }
        }
    }
    ((FtrTileList *)(&c))->release();
    return FALSE;
}

// @022075a4
BOOL FtrActor::canRotateBy(s32 a) {
    return canMoveTo(0, a);
}

// @02207598
BOOL FtrActor::canMoveBy(VecFx32 *a) {
    return canMoveTo(a, 0);
}

// @022072b4
BOOL FtrActor::canMoveTo(VecFx32 *a, s32 b) {
    s32 x0, y0, x1, y1;
    VecFx32 v1;
    VecFx32 v2;
    Unk_ov004_02207854_List c1;
    Unk_ov004_02207854_List c2;
    FtrActor *obj;
    s32 y;
    s32 y2;
    void *grid;
    u16 *cell1;
    s32 x2;
    s32 x;
    if (netRequestPending != 0) {
        return FALSE;
    }
    if (!Scene_InHouseRoom()) {
        return FALSE;
    }
    if (!FtrActor_TestPlayerUnk()) {
        return FALSE;
    }
    grid = gSceneBlockMap;
    u8 *cam = (u8 *)PlayerActor_GetActor(4);
    if (mapLayer == 1) {
        return FALSE;
    }
    if (grid == 0 || cam == 0) {
        return FALSE;
    }
    if (!((FtrTopItems *)(topItems))->canPickUp(this)) {
        return FALSE;
    }
    VecFx32 *pp = (VecFx32 *)(cam + 0x5c);
    v1.x = pp->x;
    v1.y = pp->y;
    v1.z = pp->z;
    FieldPos_ToUnit(&x0, &y0, &v1);
    v2.x = v1.x;
    v2.y = v1.y;
    v2.z = v1.z;
    if (a) {
        VEC_Add(&v2, a, &v2);
    }
    FieldPos_ToUnit(&x1, &y1, &v2);
    obj = (FtrActor *)FtrActorGrid_getActor(FtrActorGrid_GetInstance(), x1, y1, 0);
    ((FtrActor *)(this))->clearTiles(0, 0);
    new (&c1) FtrTileList();
    ((FtrActor *)(this))->getTiles(&c1, a, b);
    new (&c2) FtrTileList();
    ((FtrActor *)(this))->getTiles(&c2, a, b >> 1);
    u32 i;
    for (i = 0; i < ((FtrTileList *)(&c1))->getCount(); i++) {
        x = ((FtrTileList *)(&c1))->get(i)->x;
        y = ((FtrTileList *)(&c1))->get(i)->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        cell1 = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (a == 0 && x0 == x && y0 == y) UNK_OV004_022072B4_FAIL()
        if (a == 0) {
            y2 = ((FtrTileList *)(&c2))->get(i)->y;
            x2 = ((FtrTileList *)(&c2))->get(i)->x;
            s32 hx2 = x2 >> 4;
            s32 hy2 = y2 >> 4;
            u16 *cell2 = BlockMap_GetItemPtr(grid, hx2, hy2, x2 - (hx2 << 4), y2 - (hy2 << 4), 0);
            if (cell2 && *cell2 != 0xfff1) UNK_OV004_022072B4_FAIL()
        }
        if (cell1 && *cell1 != 0xfff1) UNK_OV004_022072B4_FAIL()
        if (!Ground_CanPlaceItem(x, y)) UNK_OV004_022072B4_FAIL()
        void *gridActor = FtrActorGrid_getActor(FtrActorGrid_GetInstance(), x, y, 1);
        if (gridActor && _ZN8FtrActor9isNotIdleEv(gridActor)) UNK_OV004_022072B4_FAIL()
        if (b == 0) {
            if ((obj && obj->noCollision == 0 && obj != this) || Ground_GetExitAtPos(&v2) != -1 || FtrMgr_GetSurfaceHeightAtPos(&v2)) UNK_OV004_022072B4_FAIL()
        }
    }
    ((FtrActor *)(this))->writeTiles(0, 0, 0, 0);
    ((FtrTileList *)(&c2))->release();
    ((FtrTileList *)(&c1))->release();
    return TRUE;
}

// @022071cc
u16 FtrActor::makeCharId(VecFx32 *a, s32 b) {
    FtrCharIdBits p;
    s32 x;
    s32 y;
    if (Scene_InUnk6To8() != 0 || isPreview()) {
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xfffffe00) | ((u16)((FtrActorTable *)(FtrActorTable_GetInstance()))->indexOf(this) & 0x1ff);
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xffff01ff) | ((Scene_GetCurrent() & 0x7f) << 9);
        return (*(u16 *)&p);
    } else {
        if (findOwnTile(&x, &y, a, b)) {
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf) | ((u16)(x & 0xf) & 0xf);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf0) | (((u16)(y & 0xf) & 0xf) << 4);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xfffffeff) | (((u16)(mapLayer & 1) & 1) << 8);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xffff81ff) | ((Scene_GetCurrent() & 0x3f) << 9);
            return (((u16 *)&p)[1]);
        }
        return 0;
    }
}

// @0220711c
BOOL FtrActor::findOwnTile(s32 *ox, s32 *oy, VecFx32 *a, s32 b) {
    Unk_ov004_02207854_List c;
    new (&c) FtrTileList();
    ((FtrActor *)(this))->getTiles(&c, a, *(s16 *)&b);
    void *grid = gSceneBlockMap;
    u32 i;
    for (i = 0; i < ((FtrTileList *)(&c))->getCount(); i++) {
        s32 y, x, hx, hy;
        u8 layer;
        layer = mapLayer;
        y = ((FtrTileList *)(&c))->get(i)->y;
        x = ((FtrTileList *)(&c))->get(i)->x;
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
        if (cell) {
            if (Item_IsFurniture(cell)) {
                *ox = ((FtrTileList *)(&c))->get(i)->x;
                *oy = ((FtrTileList *)(&c))->get(i)->y;
                ((FtrTileList *)(&c))->release();
                return TRUE;
            }
        }
    }
    ((FtrTileList *)(&c))->release();
    return FALSE;
}

// @02207100
extern "C" void FtrActor_SpawnActorC0(void *a, u32 x) {
    u16 s[3];
    s[0] = 0;
    s[1] = x;
    s[2] = 0;
    HouseRoach_SpawnFromFurniture(a, s);
}

// @02207038
void FtrActor::spawnActorC0AtTile(s32 a) {
    void *cam = PlayerActor_GetBodyPos(4);
    if (cam) {
        Unk_ov004_02207854_List c;
        VecFx32 v1;
        VecFx32 v2;
        new (&c) FtrTileList();
        ((FtrActor *)(this))->getTiles(&c, 0, 0);
        s32 hi = 0;
        s32 hiIdx = ~hi;
        s32 loIdx = hiIdx;
        s32 lo = data_020c8cbc;
        u32 i;
        for (i = 0; i < ((FtrTileList *)(&c))->getCount(); i++) {
            Unk_ov004_02206520_Ent *e1 = ((FtrTileList *)(&c))->get(i);
            Unk_ov004_02206520_Ent *e2 = ((FtrTileList *)(&c))->get(i);
            FieldPos_FromUnitCenter(&v1, e1->x, e2->y);
            s32 d = Vec_DistXZ(cam, &v1);
            if (d > hi) {
                hiIdx = i;
                hi = d;
            }
            if (d < lo) {
                loIdx = i;
                lo = d;
            }
        }
        if (a == 0) {
            hiIdx = loIdx;
        }
        if (hiIdx != -1) {
            Unk_ov004_02206520_Ent *p = ((FtrTileList *)(&c))->get(hiIdx);
            Unk_ov004_02206520_Ent *q = ((FtrTileList *)(&c))->get(hiIdx);
            FieldPos_FromUnitCenter(&v2, p->x, q->y);
            FtrActor_SpawnActorC0(&v2, Math_AngleXZ(&v2.x, (s32 *)cam));
        }
        ((FtrTileList *)(&c))->release();
    }
}

// @02207004
void FtrActor::spawnActorC0AtCenter() {
    void *cam = PlayerActor_GetBodyPos(4);
    if (cam) {
        VecFx32 v;
        FtrActor_GetCenter(this, (VecFx32 *)&v);
        FtrActor_SpawnActorC0(&v, Math_AngleXZ(&v.x, (s32 *)cam));
    }
}

// @02206fe0
void FtrActor::spawnEffectAt(VecFx32 *v) {
    VecFx32 t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    Effect_PlayById2(0x3d, &t, 0, 0);
}

// @02206fa0
void FtrActor::spawnEffectAtCorner(s32 a) {
    s32 p[3];
    s32 q[3];
    s32 r[3];
    FtrActor_GetCorner(this, p, a);
    FtrActor_GetCenter(this, (VecFx32 *)q);
    s32 y = position.y;
    r[0] = (p[0] + q[0]) >> 1;
    r[1] = y;
    r[2] = (p[2] + q[2]) >> 1;
    spawnEffectAt((VecFx32 *)r);
}

// @02206f8c
BOOL FtrActor::isPreview() {
    if (spawnMode == 2) {
        return TRUE;
    }
    return FALSE;
}

// @02206f84
extern "C" s32 FtrActor_PredIsLightSource(FtrActor *p) {
    return FtrActor_IsLightSource(p);
}

// @02206f7c
extern "C" s32 FtrActor_PredIsStereo(FtrActor *p) {
    return FtrActor_IsStereo(p);
}

// @02206f74
extern "C" s32 FtrActor_PredIsSeatOrBed(FtrActor *p) {
    return (p)->isSeatOrBed();
}

// @02206f6c
extern "C" s32 FtrActor_PredIsGyroid(FtrActor *p) {
    return (p)->isGyroid();
}

// @02206f3c
extern "C" void FtrActor_GetItemId(u16 *out, FtrActor *o) {
    if (o->kind == 0x1c) {
        *out = 0xfff1;
    } else {
        *out = Item_MakeFurniture(FtrActor_GetFtrIndex(o), 0);
    }
}

// @02206f38
BOOL FtrActor::onMatCalc(s32 matId, NNSG3dRS *rs) {
    return TRUE;
}

// @02206f34
BOOL FtrActor::onJointCalcPre(s32 nodeId, NNSG3dRS *rs) {
    return TRUE;
}

// @02206ef8
void FtrActor::onJointCalcPost(s32 a, void *b) {
    if (clockHandsValid != 0) {
        if (clockHands == a) {
            JointCb_RotateClockHourHand((NNSG3dRS *)b);
        } else if (clockHandsMinJnt == a) {
            JointCb_RotateClockMinuteHand((NNSG3dRS *)b);
        }
    }
}

// @02206ec8
void FtrActor::onNodeVisCalc(s32 a, NNSG3dRS *b) {
    if (((FtrVisNodes *)(visNodes))->hasNode(a)) {
        u32 v = ((FtrVisNodes *)(visNodes))->isVisible();
        *(u32 *)b->pVisAnmResult = v;
    }
}

// @02206eb0
FtrModelAnim::FtrModelAnim() {
}

// @02206e78
FtrModelAnim::~FtrModelAnim() {
}

// @02206e74
u32 FtrModelAnim::getAnmObj() {
    return anmObj;
}

// @02206e38
FtrModelRes::FtrModelRes() : item(0xfff1) {
    texFile = 0;
    arcFile = 0;
    model = 0;
    texture = 0;
    item = 0xfff1;
    keepTexCopy = 0;
}

// @02206e1c
// ---- functions ----
FtrModelRes::~FtrModelRes() {
}

// @02206e0c
BOOL FtrModelRes::isLoaded() {
    if (texture != 0) {
        return TRUE;
    }
    return FALSE;
}

// @02206de0
char *FtrModelRes::makeArcPath(s32 id) {
    Str_SPrintf(sFtrArcPathBuf, "/ftr/%d/%d/%04x.arc", id >> 8, (id & 0xff) >> 4, id);
    return sFtrArcPathBuf;
}

// @02206db4
char *FtrModelRes::makeTexPath(s32 id) {
    Str_SPrintf(sFtrTexPathBuf, "/ftr/%d/%d/%04x.nsbtx", id >> 8, (id & 0xff) >> 4, id);
    return sFtrTexPathBuf;
}

// @02206be8
BOOL FtrModelRes::loadFiles(ModelSlot *obj, s32 id) {
    u32 size0;
    u32 size1;
    char name[0x20];
    NNSFndArchive blk;
    if (texFile == 0) {
        texFile = File_LoadAlloc(makeTexPath(id), gCurrentHeap, -4, &size0);
        if (keepTexCopy != 0) {
            void *r7 = Heap_Alloc((Heap *)ModelSlot_getHeap(obj), size0);
            MI_CpuCopy8(texFile, r7, size0);
            animSet.setTexCopy(r7);
        }
    }
    if (arcFile == 0) {
        char *p = makeArcPath(id);
        arcFile = File_LoadAlloc(p, ModelSlot_getHeap(obj), 4, &size1);
    }
    if (model == 0 && arcFile != 0) {
        if (NNS_FndMountArchive(&blk, "FTR", arcFile)) {
            u8 *pb = (u8 *)NNS_G3dGetMdlSet((u8 *)NNS_FndGetArchiveFileByName(sFtrModelNamePtr));
            model = pb + *(u32 *)(pb + *(u16 *)(pb + 0xe) + 0xc);
            u32 i = 0;
            s32 z0 = 0, z1 = 0, z2 = 0, z3 = 0, z4 = 0;
            do {
                u8 *h;
                Str_SPrintf(name, "FTR:a/bca/bca%d", i);
                h = (u8 *)NNS_FndGetArchiveFileByName(name);
                if (h) {
                    animSet.setBca(func_021065f8(func_021065dc(h), z0), i);
                }
                Str_SPrintf(name, "FTR:a/bma/bma%d", i);
                h = (u8 *)NNS_FndGetArchiveFileByName(name);
                if (h) {
                    animSet.setBma(func_02106634(func_02106618(h), z1), i);
                }
                Str_SPrintf(name, "FTR:a/bva/bva%d", i);
                h = (u8 *)NNS_FndGetArchiveFileByName(name);
                if (h) {
                    animSet.setBva(func_021067a4(func_02106788(h), z2), i);
                }
                Str_SPrintf(name, "FTR:a/bta/bta%d", i);
                h = (u8 *)NNS_FndGetArchiveFileByName(name);
                if (h) {
                    animSet.setBta(func_02106670(func_02106654(h), z3), i);
                }
                Str_SPrintf(name, "FTR:a/btp/btp%d", i);
                h = (u8 *)NNS_FndGetArchiveFileByName(name);
                if (h) {
                    animSet.setBtp(func_021066ac(func_02106690(h), z4), i);
                }
                i++;
            } while (i < 2);
            NNS_FndUnmountArchive(&blk);
        }
    }
    if (texFile != 0 && model != 0) {
        return TRUE;
    }
    return FALSE;
}

// @02206be4
FtrAnimSet *FtrModelRes::getAnimSet() {
    return &animSet;
}

// @02206bcc
void FtrModelRes::freeTexFile() {
    if (texFile != 0) {
        Mem_Free(texFile);
        texFile = 0;
    }
}

// @02206b64
BOOL FtrModelRes::loadSync(ModelSlot *obj, s32 a, s32 flag) {
    void *h;
    keepTexCopy = flag;
    if (isLoaded()) {
        return TRUE;
    }
    item = Item_MakeFurniture(a, 0);
    loadFiles(obj, a);
    h = NNS_G3dGetTex(texFile);
    Gfx3d_LoadTexAndPltt(h, ModelSlot_getVramSlot(obj));
    texture = Gfx3d_CopyTex(h, ModelSlot_getHeap(obj));
    release();
    return TRUE;
}

// @02206a44
BOOL FtrModelRes::loadAsync(ModelSlot *obj, s32 a, s32 flag) {
    if (isLoaded()) {
        return TRUE;
    }
    u16 t2;
    if (Unk_ov004_02206a44_IsInvalid(&item)) {
        item = Item_MakeFurniture(a, 0);
        keepTexCopy = flag;
    } else {
        t2 = Item_MakeFurniture(a, 0);
        if (!Unk_ov004_02206a44_Same(&t2, &item)) {
            return FALSE;
        }
    }
    loadFiles(obj, a);
    if (texture == 0) {
        void *p = NNS_G3dGetTex(texFile);
        TexVramSlot *x = ModelSlot_getVramSlot(obj);
        void *y = ModelSlot_getHeap(obj);
        if (texLoader.loadTexture(p, x, y) == 3) {
            texture = texLoader.getTexture();
            release();
            return TRUE;
        }
    }
    return FALSE;
}

// @02206a2c
void *FtrModelRes::getModel() {
    if (isLoaded()) {
        return model;
    }
    return 0;
}

// @02206a14
void *FtrModelRes::getTexture() {
    if (isLoaded()) {
        return texture;
    }
    return 0;
}

// @022069ec
void FtrModelRes::release() {
    item = 0xfff1;
    freeTexFile();
    texLoader.release();
    keepTexCopy = 0;
}

// @022069cc
FtrCollider::FtrCollider() {
    clearOwner();
}

// @022069b4
// D1 written out: the original destroys the BoxCollider part with its D1 (0x02031bd8), which an sp2 base-object destructor call would not use
extern "C" void *_ZN11FtrColliderD1Ev(void *self) {
    *(void **)self = (void *)&_ZTV11FtrCollider[2];
    _ZN11BoxColliderD1Ev(self);
    return self;
}

// @022069ac
void FtrCollider::setOwner(void *p) {
    owner = p;
}

// @022069a4
void FtrCollider::clearOwner() {
    owner = 0;
}

// @02206744
void FtrCollider::onEdgeContact(CollisionEdge *a, Actor *b, s32 c) {
    CollisionVec2 v0, v1, v2, mid, d1, d2;
    volatile VecFx32Ctor pos;
    VecFx32Ctor w1, w2, buf;
    s32 t18, t1c, t20, t24, len2;
    s32 r7;
    s32 r5;
    s32 px, pz;
    void *chk = PlayerActor_GetActor(4);
    if (b != NULL && (void *)b == chk) {
        if (owner != NULL && ((FtrActor *)owner)->isAct(1)) {
            VecFx32Ctor *pv;
            t20 = Math_Atan2(a->normal.x, a->normal.y);
            t24 = t20 + 0x8000;
            r7 = (u16)(t24 - b->rotY);
            pv = (VecFx32Ctor *)&b->prevPosition;
            px = b->prevPosition.x;
            pos.x = px;
            pos.y = pv->y;
            pz = pv->z;
            pos.z = pz;
            v0.set(px, pz);
            v1.set(pos.x + a->normal.x, pos.z + a->normal.y);
            v2.set(0, 0);
            if ((u32)r7 < 0x1700 || (u32)r7 > 0xe900) {
                if (a->intersectLine(&v2, &v0, &v1)) {
                    r7 = FX_Sqrt(a->start.distSq(&v2));
                    len2 = FX_Sqrt(a->start.distSq(&a->end));
                    if (r7 >= 0x666) {
                        if (r7 <= len2 - 0x666) {
                            if (a->isBetweenEnds(&v2)) {
                                WallEdge_GetMidpoint(&mid, a);
                                t1c = mid.y + func_01ffcb0c(a->normal.y, c);
                                s32 x = mid.x + func_01ffcb0c(a->normal.x, c);
                                w1.x = x;
                                w1.y = 0;
                                w1.z = t1c;
                                w2.x = x;
                                w2.y = 0;
                                w2.z = t1c;
                                if (len2 > 0x3000) {
                                    if (r7 < 0x1000) {
                                        d1.setDiff(&a->end, &a->start);
                                        d1.normalize();
                                        v2.x = a->start.x + func_01ffcb0c(d1.x, 0x1000);
                                        v2.y = a->start.y + func_01ffcb0c(d1.y, 0x1000);
                                    } else if (r7 > 0x3000) {
                                        d2.setDiff(&a->end, &a->start);
                                        d2.normalize();
                                        v2.x = a->start.x + func_01ffcb0c(d2.x, 0x3000);
                                        v2.y = a->start.y + func_01ffcb0c(d2.y, 0x3000);
                                    }
                                    r7 = v2.y + func_01ffcb0c(a->normal.y, c);
                                    w2.x = v2.x + func_01ffcb0c(a->normal.x, c);
                                    w2.y = 0;
                                    w2.z = r7;
                                }
                                slideOwnerForWideFtr(b);
                                t18 = (s32)((FtrActorTable *)(FtrActorTable_GetInstance()))->indexOf(owner);
                                r5 = (s16)(t20 - ((FtrActor *)owner)->rotY);
                                if (FtrActor_GetLayer((Self *)owner) == 1) {
                                    void *q;
                                    FtrActor_GetCenter((Self *)owner, (VecFx32 *)&buf);
                                    q = FtrActorGrid_getActorAtPos(FtrActorGrid_GetInstance(), &buf, 0);
                                    if (q != NULL) {
                                        r5 = (s16)(t20 - ((FtrActor *)q)->rotY - ((FtrStackLink *)((u8 *)owner + 0x178))->getRelAngle());
                                    }
                                }
                                r5 = FtrActor_AngleToDir(r5);
                                FtrContactSet_setContact(FtrContactSet_GetInstance(), (void *)t18, &b->prevPosition, &b->position, c, &w1, &w2, (s16)t24, r5);
                            }
                        }
                    }
                }
            }
        }
    }
}

// data
char sFtrArcPathBuf[0x28];
// data
char sFtrTexPathBuf[0x28];
// data
char sFtrModelName[] = "FTR:a/bmd/bmd0";
// data
char *sFtrModelNamePtr = sFtrModelName;

// @02206570
void FtrCollider::slideOwnerForWideFtr(Actor *b) {
    FtrActor *o;
    VecFx32Ctor tmp[2];
    o = (FtrActor *)owner;
    if (*(s32 *)(HOST_AT(o, 0x780, footprint, 0)) == 1) {
        static FxVec3 tbl0[2] = {FxVec3(0, 0, 0), FxVec3(-0x2000, 0, 0)};
        static FxVec3 tbl1[2] = {FxVec3(0, 0, 0), FxVec3(0x2000, 0, 0)};
        static FxVec3 one(0x2000, 0, 0);
        s32 r6;
        Mtx43_SetRotY(&data_021f47e0, ((FtrActor *)owner)->rotY);
        MTX_MultVec43(&one, &data_021f47e0, &tmp[0]);
        FtrActor_LocalToWorld((Self *)owner, &tmp[1], &tbl1[0]);
        r6 = Vec_Distance(&b->position, &tmp[1]);
        FtrActor_LocalToWorld((Self *)owner, &tmp[1], &tbl1[1]);
        if (r6 < Vec_Distance(&b->position, &tmp[1])) {
            if (Vec_NotEqual((u8 *)owner + 0x140, &tbl0[0])) {
                VecFx32Ctor *d = (VecFx32Ctor *)((u8 *)owner + 0x140);
                FxVec3 *s = &tbl0[0];
                d->x = s->x;
                d->y = s->y;
                d->z = s->z;
                VEC_Subtract(&((FtrActor *)owner)->position, &tmp[0], &((FtrActor *)owner)->position);
            }
        } else {
            if (Vec_NotEqual((u8 *)owner + 0x140, &tbl0[1])) {
                VecFx32Ctor *d = (VecFx32Ctor *)((u8 *)owner + 0x140);
                d->x = ((u32 *)tbl0)[3];
                d->y = ((u32 *)tbl0)[4];
                d->z = ((u32 *)tbl0)[5];
                VEC_Add(&((FtrActor *)owner)->position, &tmp[0], &((FtrActor *)owner)->position);
            }
        }
    }
}

// @02206558
FtrTileList::FtrTileList() {
    count = 0;
}

// @02206554
void FtrTileList::release() {}

// @02206530
BOOL FtrTileList::add(u32 a, u32 b) {
    if (count < 4) {
        tiles[count].x = a;
        tiles[count].y = b;
        count++;
        return TRUE;
    }
    return FALSE;
}

// @0220652c
u32 FtrTileList::getCount() {
    return count;
}

// @02206520
Unk_ov004_02206520_Ent *FtrTileList::get(s32 i) {
    return &tiles[i & 3];
}

// @0220650c
void FtrStackedSet::clear() {
    u32 i;
    count = 0;
    for (i = 0; i < 4; i++) {
        actors[i] = 0;
    }
}

// @022064b4
void FtrStackedSet::collect(FtrTileList *l, s32 flag) {
    u32 i;
    if (flag == 0) {
        for (i = 0; i < l->getCount(); i++) {
            void *mgr = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *a = l->get(i);
            Unk_ov004_02206520_Ent *b = l->get(i);
            FtrActor *o = FtrActorGrid_getActor(mgr, a->x, b->y, 1);
            if (o != NULL) {
                add(o);
            }
        }
    }
}

// @02206494
FtrStackedSet::FtrStackedSet(FtrTileList *l, s32 flag) {
    ((FtrStackedSet *)(this))->clear();
    collect(l, flag);
}

// @02206484
FtrStackedSet::FtrStackedSet() {
    ((FtrStackedSet *)(this))->clear();
}

// @02206480
u32 FtrStackedSet::getCount() {
    return count;
}

// @02206474
FtrActor *FtrStackedSet::get(u32 i) {
    return actors[i & 3];
}

// @02206434
BOOL FtrStackedSet::add(FtrActor *o) {
    u32 i;
    u32 n;
    if (o == NULL) {
        return FALSE;
    }
    n = count;
    if (n >= 4) {
        return FALSE;
    }
    for (i = 0; i < n; i++) {
        if (actors[i] == o) {
            return FALSE;
        }
    }
    count = count + 1;
    actors[n] = o;
    return TRUE;
}

// @02206418
void FtrAnimSet::clear() {
    u32 i;
    texCopy = 0;
    for (i = 0; i < 2; i++) {
        bca[i] = NULL;
        bma[i] = NULL;
        bta[i] = NULL;
        btp[i] = NULL;
    }
}

// @02206414
FtrAnimSet::~FtrAnimSet() {
}

// @02206408
void FtrAnimSet::setBca(void *v, u32 i) {
    bca[i & 1] = v;
}

// @022063fc
void FtrAnimSet::setBma(void *v, u32 i) {
    bma[i & 1] = v;
}

// @022063f0
void FtrAnimSet::setBva(void *v, u32 i) {
    bva[i & 1] = v;
}

// @022063e4
void FtrAnimSet::setBta(void *v, u32 i) {
    bta[i & 1] = v;
}

// @022063d8
void FtrAnimSet::setBtp(void *v, u32 i) {
    btp[i & 1] = v;
}

// @022063d4
void FtrAnimSet::setTexCopy(void *v) {
    texCopy = v;
}

// @022063c8
NNSG3dResAnmCommon *FtrAnimSet::getBca(u32 i) {
    return (NNSG3dResAnmCommon *)bca[i & 1];
}

// @022063bc
NNSG3dResAnmCommon *FtrAnimSet::getBma(u32 i) {
    return (NNSG3dResAnmCommon *)bma[i & 1];
}

// @022063b0
NNSG3dResAnmCommon *FtrAnimSet::getBva(u32 i) {
    return (NNSG3dResAnmCommon *)bva[i & 1];
}

// @022063a4
NNSG3dResAnmCommon *FtrAnimSet::getBta(u32 i) {
    return (NNSG3dResAnmCommon *)bta[i & 1];
}

// @02206398
NNSG3dResAnmCommon *FtrAnimSet::getBtp(u32 i) {
    return (NNSG3dResAnmCommon *)btp[i & 1];
}

// @02206380
void *FtrAnimSet::getTexCopy() {
    if (texCopy != 0) {
        return NNS_G3dGetTex(texCopy);
    }
    return 0;
}

// @02206368
FtrTopItem::FtrTopItem() {
    item = 0xfff1;
    clear();
}

// @02206364
FtrTopItem::~FtrTopItem() {
}

// @02206310
BOOL FtrTopItem::isSet() {
    BOOL r;
    if (Item_IsFurniture(&item)) {
        u16 t = 0xfff1;
        if (Item_GetFurnitureIndex(&item) == Item_GetFurnitureIndex(&t)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (item == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        return FALSE;
    }
    return TRUE;
}

// @022062fc
void FtrTopItem::clear() {
    item = 0xfff1;
    relPos.x = 0;
    relPos.y = 0;
    relPos.z = 0;
}

// @022062f8
VecFx32 *FtrTopItem::getPos() {
    return &relPos;
}

// @022062f4
u16 *FtrTopItem::getItem() {
    return &item;
}

// @022062c8
BOOL FtrTopItem::set(u16 *id, VecFx32 *pos) {
    if (isSet() == 0) {
        item = *id;
        relPos.x = pos->x;
        relPos.y = pos->y;
        relPos.z = pos->z;
        return TRUE;
    }
    return FALSE;
}

// @02206234
void FtrTopItem::draw(FtrActor *o) {
    if (isSet()) {
        VecFx32 z, d;
        VecFx32Copy p, s;
        data_021f47e0 = o->modelMtx;
        s32 x, y, c;
        c = getPos()->z;
        y = getPos()->y;
        x = getPos()->x;
        Mtx43_Translate(&data_021f47e0, x, y, c);
        z.x = 0;
        z.y = 0;
        z.z = 0;
        MTX_MultVec43(&z, &data_021f47e0, &d);
        p.x = d.x;
        p.y = d.y;
        p.z = d.z;
        s.x = 0x1000;
        s.y = 0x1000;
        s.z = 0x1000;
        RoomItemIcons_DrawItem(*getItem(), &p, &s, 0, 0, 0);
    }
}

// @02206204
FtrTopItems::FtrTopItems() {
    clearAll();
}

// @022061e8
FtrTopItems::~FtrTopItems() {
}

// @022061c4
void FtrTopItems::clearAll() {
    u32 i;
    for (i = 0; i < 4; i++) {
        get(i)->clear();
    }
}

// @022061b4
FtrTopItem *FtrTopItems::get(u32 i) {
    if (i < 4) {
        return &items[i];
    }
    return &items[0];
}

// @02206190
void FtrTopItems::drawAll(FtrActor *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        get(i)->draw(o);
    }
}

// @0220614c
BOOL FtrTopItems::add(u16 *id, VecFx32 *pos) {
    u32 i;
    for (i = 0; i < 4; i++) {
        if (get(i)->isSet() == 0) {
            get(i)->set(id, pos);
            return TRUE;
        }
    }
    return FALSE;
}

// @0220607c
BOOL FtrTopItems::canPickUp(FtrActor *o) {
    FtrTileList list;
    ((FtrActor *)(o))->getTiles((Unk_ov004_02207854_List *)&list, 0, 0);
    void *grid = gSceneBlockMap;
    u32 i;
    for (i = 0; i < list.getCount(); i++) {
        s32 y = list.get(i)->y;
        s32 x = list.get(i)->x;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
        if (cell != NULL && !Item_IsFurnitureOrF031(cell) && !Item_IsNormalItem(cell)) {
            if (Unk_ov004_0220607c_IsEmpty(cell) == 0) {
                list.release();
                return FALSE;
            }
        }
    }
    list.release();
    return TRUE;
}

// @02205f58
BOOL FtrTopItems::pickUpAll(FtrActor *o) {
    static ItemId dflt(0xfff1);
    BOOL res = TRUE;
    FtrTileList list;
    ((FtrActor *)(o))->getTiles((Unk_ov004_02207854_List *)&list, 0, 0);
    void *grid = gSceneBlockMap;
    if (canPickUp(o)) {
        clearAll();
        FtrActor_CalcWorldMtx((Self *)o, 0, 0);
        MTX_Inverse43(&data_021f47e0, &data_021f47e0);
        u32 i;
        for (i = 0; i < list.getCount(); i++) {
            s32 x = list.get(i)->x;
            s32 y = list.get(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell != NULL && Item_IsNormalItem(cell)) {
                VecFx32 v, d;
                FieldPos_FromUnitCenter(&v, x, y);
                v.y = o->surfaceHeight;
                MTX_MultVec43(&v, &data_021f47e0, &d);
                res &= add(cell, &d);
                if (res != 0) {
                    res = 1;
                } else {
                    res = 0;
                }
            }
        }
        if (res == 0) {
            clearAll();
        }
    }
    list.release();
    return res;
}

// @02205eb0
void FtrTopItems::dropAll(FtrActor *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        FtrTopItem *e = get(i);
        if (e->isSet()) {
            VecFx32 z, d;
            s32 a, b;
            z.x = 0;
            z.y = 0;
            z.z = 0;
            data_021f47e0 = o->modelMtx;
            s32 x, y, c;
            c = e->getPos()->z;
            y = e->getPos()->y;
            x = e->getPos()->x;
            Mtx43_Translate(&data_021f47e0, x, y, c);
            MTX_MultVec43(&z, &data_021f47e0, &d);
            FieldPos_ToUnit(&a, &b, &d);
            u32 mgr = Scene_GetCurrent();
            FtrSync_SetTopItem(mgr, a, b, e->getItem(), 1);
        }
    }
    clearAll();
}

// @02205ea0
void FtrStackLink::clear() {
    parentIndex = -1;
    relPos.x = 0;
    relPos.y = 0;
    relPos.z = 0;
    relAngle = 0;
}

// @02205e9c
FtrStackLink::~FtrStackLink() {
}

// @02205e8c
BOOL FtrStackLink::isAttached() {
    BOOL r = FALSE;
    if (parentIndex != -1) {
        r = TRUE;
    }
    return r;
}

// @02205e84
s32 FtrStackLink::getParentIndex() {
    return parentIndex;
}

// @02205e80
VecFx32 *FtrStackLink::getRelPos() {
    return &relPos;
}

// @02205e78
s32 FtrStackLink::getRelAngle() {
    return relAngle;
}

// @02205e58
BOOL FtrStackLink::set(s32 idx, VecFx32 *pos, s32 ang) {
    if (idx >= 0 && (u32)idx < 0x1c) {
        parentIndex = idx;
        relPos.x = pos->x;
        relPos.y = pos->y;
        relPos.z = pos->z;
        relAngle = ang;
        return TRUE;
    }
    return FALSE;
}

// @02205e20
BOOL FtrStackLink::attachAt(s32 x, s32 y, s16 z) {
    s32 idx;
    VecFx32 pos;
    s16 ang;
    if (FtrStack_CalcRelPlacement(&idx, &pos, &ang, x, y, z)) {
        return set(idx, &pos, ang);
    }
    return FALSE;
}

// @02205d8c
extern "C" BOOL FtrStack_CalcRelPlacement(s32 *idx, VecFx32 *pos, s16 *ang, s32 x, s32 a, s16 b) {
    void *mgr = FtrActorGrid_GetInstance();
    FtrActor *e = FtrActorGrid_getActor(mgr, x, a, 0);
    s32 i = ((FtrActorTable *)(FtrActorTable_GetInstance()))->indexOf(e);
    if (e != NULL && i != -1) {
        VecFx32 t;
        VecFx32 d;
        FieldPos_FromUnitCenter(&t, x, a);
        t.y = e->surfaceHeight;
        FtrActor_CalcWorldMtx((Self *)e, 0, 0);
        MTX_Inverse43(&data_021f47e0, &data_021f47e0);
        MTX_MultVec43(&t, &data_021f47e0, &d);
        *idx = i;
        pos->x = d.x;
        pos->y = d.y;
        pos->z = d.z;
        *ang = b - e->rotY;
        return TRUE;
    }
    return FALSE;
}

// @02205d7c
void FtrClockHands::clear() {
    minJnt = -1;
    hourJnt = minJnt;
    valid = 0;
}

// @02205d78
FtrClockHands::~FtrClockHands() {
}

// @02205d5c
void FtrClockHands::set(s32 a, s32 b) {
    hourJnt = a;
    minJnt = b;
    if (hourJnt == -1 && minJnt == -1) {
    } else {
        valid = 1;
    }
}

// @02205d50
void FtrSwitch::clear() {
    next = 0;
    cur = next;
}

// @02205d4c
FtrSwitch::~FtrSwitch() {
}

// @02205cdc
void FtrSwitch::loadFromMap(FtrActor *o) {
    s32 r = 0;
    s32 x, y;
    if (o->spawnMode == 1 || ((FtrActor *)(o))->isPreview() != 0) {
        if (o->startsOff == 0) {
            r = 1;
        } else {
            r = 0;
        }
    } else {
        if (((FtrActor *)(o))->findOwnTile(&x, &y, NULL, 0)) {  // r is 0 here
            u32 mgr = Scene_GetCurrent();
            r = RoomFtrState_GetSwitch(x, y, o->mapLayer, mgr);
        }
    }
    set(r, 0);
}

// @02205cc4
void FtrSwitch::commit(FtrActor *o) {
    if (((FtrActor *)(o))->isPreview() == 0) {
        cur = next;
    }
}

// @02205c80
void FtrSwitch::saveToMap(FtrActor *o) {
    if (((FtrActor *)(o))->isPreview() == 0) {
        s32 x, y;
        if (((FtrActor *)(o))->findOwnTile(&x, &y, 0, 0)) {
            RoomFtrState_SetSwitch(x, y, o->mapLayer, next, Scene_GetCurrent());
        }
    }
}

// @02205c7c
u8 FtrSwitch::isOn() {
    return next;
}

// @02205c6c
BOOL FtrSwitch::isChanging() {
    if (cur != next) {
        return TRUE;
    }
    return FALSE;
}

// @02205c54
void FtrSwitch::toggle(s32 flag) {
    set(((next + 1) & 1) != 0 ? TRUE : FALSE, flag);
}

// @02205c44
void FtrSwitch::set(u32 v, s32 flag) {
    if (flag != 0) {
        next = v;
    } else {
        cur = v;
        next = cur;
    }
}

// @02205c2c
FtrGlowMat::FtrGlowMat() {
    matIdx = -1;
    resMdl = NULL;
}

// @02205c1c
FtrGlowMat::~FtrGlowMat() {
}

// @02205be4
BOOL FtrGlowMat::bindMaterial(G3dResAccess *res, const char *idx, BOOL on) {
    if (res != NULL) {
        matIdx = res->findMatIdx(idx);
        if (matIdx != -1) {
            switchLightAnimated(on);
            resMdl = res;
            return TRUE;
        }
    }
    return FALSE;
}

// @02205bcc
BOOL FtrGlowMat::setLit(BOOL on, s32 a, s32 b) {
    return switchLight(on, a, b, 0x800);
}

// @02205b14
void FtrGlowMat::updateEmission() {
    if (matIdx != -1) {
        ((LightLevel *)(this))->update();
        s32 x = ((LightLevel *)(this))->getLevel();
        if (x) {
            NNSi_G3dModifyMatFlag(resMdl, 1, 0x400);
            s32 col = FtrGlowMat_GetBaseEmission();
            s32 r7 = Math_LerpFx(x, ((col >> 10) & 0x1f) << 12, 0x1f000);
            s32 g = Math_LerpFx(x, (col & 0x1f) << 12, 0x1f000);
            s32 b = Math_LerpFx(x, ((col >> 5) & 0x1f) << 12, 0x1f000);
            u32 r7c = (u16)(((r7 >> 12) << 10) | ((g >> 12) | ((b >> 12) << 5)));
            for (s32 i = 0; i < ((Unk_ov004_02205b14_Obj *)resMdl)->numMat; i++) {
                NNS_G3dMdlSetMdlEmi(resMdl, i, i == matIdx ? r7c : col);
            }
        } else {
            NNSi_G3dModifyMatFlag(resMdl, 0, 0x400);
        }
    }
}

// @02205b04
extern "C" u16 FtrGlowMat_GetBaseEmission() {
    return (u16)(data_027e0148.unk_18 >> 16);
}

// @02205ad4
FtrGlowMatSet::FtrGlowMatSet() {
    anyBound = 0;
}

// @02205ab8
FtrGlowMatSet::~FtrGlowMatSet() {}

// @02205a64
u32 FtrGlowMatSet::init(void *a, u32 b) {
    u32 i = 0;
    anyBound = 0;
    u8 *pf = &anyBound;
    u32 z = 0;
    for (i = 0; i < 3; i++) {
        u32 r = mats[i].bindMaterial((G3dResAccess *)a, sFtrGlowMatNames[i], b);
        u32 t = *pf | r;
        if (t != 0) t = 1; else t = z;
        *pf = t;
    }
    return anyBound;
}

// @02205a1c
u32 FtrGlowMatSet::setLit(u32 a, u32 b, u32 c) {
    u32 r = 0;
    if (anyBound != 0) {
        u32 z = 0;
        for (FtrGlowMat *p = mats; p < (FtrGlowMat *)&anyBound; p++) {
            r |= p->setLit(a, b, c);
            if (r != 0) r = 1; else r = z;
        }
    }
    return r;
}

// @022059f4
void FtrGlowMatSet::update() {
    if (anyBound != 0) {
        FtrGlowMat *p = mats;
        FtrGlowMat *end = (FtrGlowMat *)&anyBound;
        for (; p < end; p++) p->updateEmission();
    }
}

// @022059f0
extern "C" void FtrVisNodes_Construct(void *) {}

// @022059ec
extern "C" void FtrVisNodes_Destruct(void *) {}

// @022059b4
void FtrVisNodes::init(void *p, u32 v) {
    if (p) {
        for (u32 i = 0; i < 4; i++) {
            nodeIds[i] = ((G3dResAccess *)(p))->findNodeIdx((const char *)(sFtrVisNodeNames[i]));
        }
        setVisible(v);
    }
}

// @022059b0
void FtrVisNodes::setVisible(u32 v) { visible = v; }

// @02205998
BOOL FtrVisNodes::hasNode(s32 v) {
    for (u32 i = 0; i < 4; i++) {
        if (v == nodeIds[i]) return TRUE;
    }
    return FALSE;
}

// @02205994
u8 FtrVisNodes::isVisible() { return visible; }

// @02205954
BOOL FtrActor::startRotate(s32 a) {
    if (((FtrActor *)(this))->canRotateBy(a)) {
        targetAngle = rotY + a;
        setAct(2);
        PlayerActor_PlayLocalSe(0x4c4);
        return TRUE;
    }
    return FALSE;
}

// @022058c0
BOOL FtrActor::startPush(s16 a) {
    VecFx32 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    Vec_RotateY(&v, a);
    if (canMoveBy(&v)) {
        VecFx32 w;
        Vec_Add(&w, (VecFx32 *)&position, &v);
        targetPos[0] = w.x;
        targetPos[1] = w.y;
        targetPos[2] = w.z;
        targetAngle = a;
        setAct(3);
        if (!Unk_ov004_02205820_Is3d(profile)) {
            u32 t = ((s32 (*)(void *))FtrActor_GetDragSe)(this);
            if (t != 0xffff) PlayerActor_PlayLocalSe(t);
        }
        return TRUE;
    }
    return FALSE;
}

// @02205820
BOOL FtrActor::startPull(s16 a) {
    VecFx32 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    Vec_RotateY(&v, (s16)(a + 0x8000));
    if (canMoveBy(&v)) {
        VecFx32 w;
        Vec_Add(&w, (VecFx32 *)&position, &v);
        targetPos[0] = w.x;
        targetPos[1] = w.y;
        targetPos[2] = w.z;
        targetAngle = a;
        setAct(4);
        if (!Unk_ov004_02205820_Is3d(profile)) {
            u32 t = ((s32 (*)(void *))FtrActor_GetDragSe)(this);
            if (t != 0xffff) PlayerActor_PlayLocalSe(t);
        }
        return TRUE;
    }
    return FALSE;
}

// @02205814
BOOL FtrActor::startHide() { return setAct(6); }

// @02205808
BOOL FtrActor::isIdle() { return isAct(1); }

// @022057f0
BOOL FtrActor::isNotIdle() {
    if (isIdle() == 0) return TRUE;
    return FALSE;
}

// @022057e4
BOOL FtrActor::isReady() { return isAct(1); }

// @022057c8
BOOL FtrActor::isNotReady() {
    if (isReady() == 0) return TRUE;
    return FALSE;
}

// @022057bc
BOOL FtrActor::isRemoving() { return isAct(5); }

// @022057b0
BOOL FtrActor::isHidden() { return isAct(7); }

// @0220579c
BOOL FtrActor::isAct(s32 s) {
    if (baseAct == s) return TRUE;
    return FALSE;
}

// data
char data_ov004_02248710[] = "mn_m";
// data
char data_ov004_02248718[] = "mn_m0";
// data
char data_ov004_02248720[] = "mn_m1";
// data
char *sFtrGlowMatNames[3] = {data_ov004_02248710, data_ov004_02248718, data_ov004_02248720};
// data
char data_ov004_022486fc[] = "v";
// data
char data_ov004_02248704[] = "v1";
// data
char data_ov004_02248708[] = "v2";
// data
char data_ov004_02248700[] = "v3";
// data
char *sFtrVisNodeNames[4] = {data_ov004_022486fc, data_ov004_02248704, data_ov004_02248708, data_ov004_02248700};

// @022056bc
BOOL FtrActor::setAct(s32 idx) {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        &FtrActor::enterAppear, &FtrActor::enterIdle,
        &FtrActor::enterRotate, &FtrActor::enterPush,
        &FtrActor::enterPull, &FtrActor::enterRemove,
        &FtrActor::enterHide, &FtrActor::enterIdle,
        &FtrActor::enterPreview,
    };
    if (idx < 9) {
        if ((this->*tbl[idx])()) {
            baseAct = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// @022055ec
void FtrActor::execAct() {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        (Unk_ov004_0224882c_Fn)&FtrActor::execAppear, (Unk_ov004_0224882c_Fn)&FtrActor::execIdle,
        (Unk_ov004_0224882c_Fn)&FtrActor::execRotate, (Unk_ov004_0224882c_Fn)&FtrActor::execPush,
        (Unk_ov004_0224882c_Fn)&FtrActor::execPull, (Unk_ov004_0224882c_Fn)&FtrActor::execRemove,
        (Unk_ov004_0224882c_Fn)&FtrActor::execHide, (Unk_ov004_0224882c_Fn)&FtrActor::execIdle,
        (Unk_ov004_0224882c_Fn)&FtrActor::execPreview,
    };
    if (baseAct < 9) (this->*tbl[baseAct])();
}

// @0220552c
BOOL FtrActor::enterAppear() {
    colliderScale = 0x555;
    drawScale = 0;
    drawScaleY = 0;
    drawScaleZ = 0;
    appearFrame = 0;
    wobblePhase = 0;
    wobbleSpeed = 0x2710;
    wobbleAmp = 0x800;
    if (PlayerActor_GetActor(4)) {
        VecFx32 pos;
        u16 t;
        FtrActor_GetCenter(this, &pos);
        if (mapLayer == 0) pos.y = 0;
        else pos.y = FtrMgr_GetSurfaceHeightAtPos(&pos);
        pos.y += 0x800;
        t = Item_MakeFurniture(ftrIndex, 0);
        VecFx32Copy c;
        c.x = pos.x;
        c.y = pos.y;
        c.z = pos.z;
        return ItemDrop_StartFromLocalPlayer(&t, &c);
    }
    return TRUE;
}

// @022053c0
void FtrActor::execAppear() {
    Math_StepS32(&colliderScale, 0x1000, 0x88);
    if (appearFrame < 0xf) {
        appearFrame = appearFrame + 1;
        actFrame = 0;
        if (appearFrame == 0xc) PlayerActor_PlayLocalSe(0x4c7);
        if (appearFrame == 0xf) {
            FtrCenterPosBuf buf;
            FtrActor_GetCenter(this, (VecFx32 *)&buf);
            spawnEffectAt((VecFx32 *)&buf);
        }
    } else if (appearFrame < 0x11) {
        appearFrame = appearFrame + 1;
    } else {
        s16 r6 = wobblePhase;
        u16 r4;
        u16 *q = (u16 *)&wobblePhase;
        *q = *q + wobbleSpeed;
        r4 = *q;
        s32 m = func_01ffcb0c(wobbleAmp, data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        s32 t = 0x1000;
        drawScaleY = m + t;
        s32 *pp = &drawScale;
        *pp = t - m;
        drawScaleZ = *pp;
        s32 c = func_01ffcb0c(data_02135f44[((u16)r6 >> 4) * 2], data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        if (c < 0) {
            wobbleAmp = func_01ffcb0c(wobbleAmp, 0x4cd);
            wobbleSpeed = wobbleSpeed + 0x960;
        }
        if (colliderScale == 0x1000) {
            s32 v = wobbleAmp;
            if (v < 0) v = -v;
            if (v < 0x52) setAct(1);
        }
        switch (actFrame) {
        case 0:
            spawnEffectAtCorner(0);
            spawnEffectAtCorner(2);
            break;
        case 2:
            spawnEffectAtCorner(1);
            spawnEffectAtCorner(3);
            break;
        }
        actFrame = actFrame + 1;
    }
}

// @022053bc
BOOL FtrActor::enterIdle() { return TRUE; }

// @022053b8
void FtrActor::execIdle() {}

// @022052f4
BOOL FtrActor::enterRotate() {
    ((FtrTopItems *)topItems)->pickUpAll(this);
    s32 d = (s16)(targetAngle - rotY);
    moveTiles(0, d);
    if (d < 0) d = 1; else d = 0;
    onRotateStart(d);
    if (mapLayer == 0 && hasTopSurface == 1) {
        FtrTileList v;
        getTiles((Unk_ov004_02207854_List *)&v, 0, 0);
        for (u32 i = 0; i < v.getCount(); i++) {
            void *mgr = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *e = v.get(i);
            FtrActor *o = (FtrActor *)FtrActorGrid_getActor(mgr, e->x, v.get(i)->y, 1);
            if (o) o->onRotateStart(d);
        }
        v.release();
    }
    return TRUE;
}

// @0220521c
void FtrActor::execRotate() {
    s32 d = (s16)(targetAngle - rotY);
    BOOL neg;
    if (d < 0) neg = TRUE; else neg = FALSE;
    onRotateUpdate(neg);
    if (mapLayer == 0 && hasTopSurface == 1) {
        FtrTileList v;
        getTiles((Unk_ov004_02207854_List *)&v, 0, 0);
        for (u32 i = 0; i < v.getCount(); i++) {
            void *mgr = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *e = v.get(i);
            FtrActor *o = (FtrActor *)FtrActorGrid_getActor(mgr, e->x, v.get(i)->y, 1);
            if (o) o->onRotateUpdate(neg);
        }
        v.release();
    }
    if (Math_StepAngle(&rotY, targetAngle, 0x700)) {
        setAct(1);
        ((FtrTopItems *)topItems)->dropAll(this);
    }
}

// @022051a4
BOOL FtrActor::enterPush() {
    Unk_ov004_0224882c_Buf buf;
    Vec_Sub(&buf, targetPos, &position);
    ((FtrTopItems *)topItems)->pickUpAll(this);
    moveTiles(&buf, 0);
    FtrMoveAnim *g = (FtrMoveAnim *)FurnitureManager_GetMoveAnim();
    if (g) {
        if (FtrMoveAnim_StartPush(g, moveFlag, &position, targetAngle)) {
            onMoveStart(TRUE);
            spawnActorC0AtTile(0);
            return TRUE;
        }
    }
    return FALSE;
}

// @02205138
void FtrActor::execPush() {
    VecFx32 buf;
    FtrMoveAnim *g = (FtrMoveAnim *)FurnitureManager_GetMoveAnim();
    if (g) {
        if (FtrMoveAnim_Step(g, moveFlag, &buf)) {
            position.x = targetPos[0];
            position.y = targetPos[1];
            position.z = targetPos[2];
            setAct(1);
            ((FtrTopItems *)topItems)->dropAll(this);
        } else {
            position.x = buf.x;
            position.y = buf.y;
            position.z = buf.z;
        }
    }
}

// @022050c0
BOOL FtrActor::enterPull() {
    Unk_ov004_0224882c_Buf buf;
    Vec_Sub(&buf, targetPos, &position);
    ((FtrTopItems *)topItems)->pickUpAll(this);
    moveTiles(&buf, 0);
    FtrMoveAnim *g = (FtrMoveAnim *)FurnitureManager_GetMoveAnim();
    if (g) {
        if (FtrMoveAnim_StartPull(g, moveFlag, &position, targetAngle)) {
            onMoveStart(FALSE);
            spawnActorC0AtTile(1);
            return TRUE;
        }
    }
    return FALSE;
}

// @022050b8
void FtrActor::execPull() {
    execPush();
}

// @0220507c
BOOL FtrActor::enterRemove() {
    VecFx32 buf;
    onRemove();
    actFrame = 0;
    FtrActor_GetCenter(this, &buf);
    FtrMgr_SetRemovePos(&buf);
    PlayerActor_PlayLocalSe(0x4c8);
    return TRUE;
}

// @0220500c
void FtrActor::execRemove() {
    Unk_ov004_0224882c_Buf buf;
    Math_StepS32(&drawScale, 0, 0x400);
    drawScaleY = drawScaleZ = drawScale;
    if (drawScale == 0) {
        ProcBase_RequestDelete(this);
    }
    if (actFrame == 1) {
        FtrActor_GetCenter(this, (VecFx32 *)&buf);
        spawnEffectAt((VecFx32 *)&buf);
    }
    actFrame++;
}

// @02205004
BOOL FtrActor::enterHide() {
    return enterRemove();
}

// @02204f90
void FtrActor::execHide() {
    Unk_ov004_0224882c_Buf buf;
    Math_StepS32(&drawScale, 0, 0x400);
    drawScaleY = drawScaleZ = drawScale;
    if (drawScale == 0) {
        setAct(7);
    } else if (actFrame == 1) {
        FtrActor_GetCenter(this, (VecFx32 *)&buf);
        spawnEffectAt((VecFx32 *)&buf);
    }
    actFrame++;
}

// @02204f8c
BOOL FtrActor::enterPreview() {
    return TRUE;
}

// @02204f24
// SKIPPED (out of range 35670208): void Atm::vfunc_68()
// SKIPPED (out of range 35670388): void Atm::vfunc_64()
// SKIPPED (out of range 35670492): void Atm::vfunc_60()
// SKIPPED (out of range 35670496): void Atm::execTalkAct02()
// SKIPPED (out of range 35670544): BOOL Atm::enterTalkAct02()
// SKIPPED (out of range 35670548): void Atm::execTalkAct01()
// SKIPPED (out of range 35670584): BOOL Atm::enterTalkAct01()
// SKIPPED (out of range 35670656): void Atm::execTalkAct00()
// SKIPPED (out of range 35670660): BOOL Atm::enterTalkAct00()
// SKIPPED (out of range 35670664): void Atm::execTalkAct()
// SKIPPED (out of range 35670788): BOOL Atm::setTalkAct(s32 m)
// SKIPPED (out of range 35670928): void Atm::vfunc_4c(u32 a, u8 b)
// SKIPPED (out of range 35670964): BOOL Atm::vfunc_48(void *a)
// SKIPPED (out of range 35671056): void Atm::setPointTexts()
// SKIPPED (out of range 35671244): BOOL Atm::releaseCollision()
// SKIPPED (out of range 35671260): void Atm::initCollision()
// SKIPPED (out of range 35671344): BOOL Atm::vfunc_0c()
// SKIPPED (out of range 35671360): BOOL Atm::vfunc_24()
// SKIPPED (out of range 35671364): BOOL Atm::vfunc_18()
// SKIPPED (out of range 35671396): BOOL Atm::vfunc_00()
// SKIPPED (out of range 35671436): Atm::~Atm()
// SKIPPED (out of range 35671584): Atm::Atm()
// SKIPPED (out of range 35671676): extern "C" Atm *Atm_Create()
// ================================================================ FtrActor
void FtrActor::execPreview() {
    if (kind != 0x23 && kind != 0x24 && kind != 0x25) {
        rotY += 0x400;
    }
    s32 v = FX_Div(FtrInfo_GetDmaUnk05Fx(FtrActor_GetFtrIndex(this)), 0x64000) >> 2;
    drawScale = drawScaleY = drawScaleZ = v;
}

