#ifndef PLAYER_PLAYERACTOR_H
#define PLAYER_PLAYERACTOR_H

// The player object (PlayerActor, 0xc9c bytes, vtable 0x020d6dec), including the method sets 0x02006d14.. and
// 0x02008040.. (formerly the field-less shell classes Unk_02006d14 / Unk_02008040). All of it is defined in
// src/main/unk_02004558.cpp and unk_02004558_extra.cpp (one translation unit built by two compilers).
// TalkMsgRequest is talk/TalkMsgRequest.h. The player unit defines SndSeEmitterKind1's destructor inline (its link-once
// D1/D0 are emitted there).
#include "types.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "actor/ActorPlacedCollider.h"
#include "actor/BlinkTimer.h"
#include "actor/CharaClothTexRef.h"
#include "actor/CharaFaceAnimRef.h"
#include "actor/CharaFaceAnimWorkRef.h"
#include "game/CollisionState.h"
#include "game/TouchPickCylinder.h"
#include "gfx/CachedModel.h"
#include "gfx/MatTexPatAnim.h"
#include "gfx/MatTexVramTask.h"
#include "gfx/TwoLayerAnimModel.h"
#include "gfx/Mtx43.h"
#include "gfx/VecFx32.h"
#include "npc/NpcEmotionFx.h"
#include "player/HeldItemModel.h"
#include "player/PlayerActionRequest.h"
#include "player/PlayerBodyModelRef.h"
#include "player/PlayerBodyWorkRef.h"
#include "player/PlayerFaceTexRef.h"
#include "player/PlayerGlassesModelRef.h"
#include "player/PlayerHead.h"
#include "player/Unk_0205c3a4.h"
#include "player/Unk_0205ef98.h"
#include "player/PlayerNetActionArgs.h"
#include "snd/SndSeEmitterKind1.h"
#include "snd/SndSeEmitterKind99.h"

struct Unk_02006d14_Pair;
struct Unk_02006d14_Vec;
struct Unk_02006d14_Vec3;
struct Unk_0200b144_Pos;
struct Unk_0200b750_Pair;
struct Unk_0200b908_Obj;
struct Unk_0200f6d4_V2;
struct Unk_0200ff08_Obj;
struct Unk_020107c8_Blk;



// ---- the object (size 0xc9c; vtable 0x020d6dec with the secondary table at 0x020d6e64)
class PlayerActor : public Character, public TalkMsgRequest {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    PlayerActor();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~PlayerActor();
    virtual BOOL getHeldItemPos(Unk_020d77a4_Vec3 *out);
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void onWindowClose();

    void doDraw();
    BOOL doDelete();
    s32 getJointGroundY(s32 x);
    void drawReady();
    void drawNotReady();
    void doExecute();
    void walkUpdateLean();
    void walkMove();
    BOOL walkFollowNet();
    void walkUpdateSpeed();
    void netWalk();
    void setupWalk(PlayerActionRequest *item, u32 old);
    BOOL requestWalk(u32 a, u32 b, u32 c);
    void mainWait();
    void waitNetCheckEnd(u8 *p);
    void waitCheckInput();
    BOOL waitFollowNet();
    void endWait();
    void netWait(u32 a);
    void setupWait(PlayerActionRequest *item, u32 old);
    BOOL requestWait(u32 a, u32 b, u32 c);
    void mainAct01();
    void endAct01();
    void netAct01(u32 a);
    void setupAct01(PlayerActionRequest *item, u32 old);
    BOOL requestAct01(u32 a, u32 b);
    void mainInit();
    void startFirstAction(s32 *p);
    BOOL finishModelSetup();
    void endInit(u32 a);
    void netInit();
    void setupInit(PlayerActionRequest *item);
    BOOL requestInit(u32 a, u32 b, u32 c);
    u8 isInteractPressed();
    s32 getInputDirRelative();
    s32 getInputSideRelative();
    s16 getInputAngle();
    s16 getInputAngleRaw();
    s32 getInputMagnitude();
    void readInput();
    BOOL doCreate();
    void initFaceItemModel();
    void initHatModel();
    void initShirtModel();
    s32 getRequiredPriority();
    s32 getEffectivePriority();
    void clearRequests();
    PlayerActionRequest *getRequest(s32 i);
    BOOL pushRequest(PlayerActionRequest *r);
    BOOL getRemoteTransform(u8 *a, s32 *b, s32 *c, u16 *d);
    u8 isLocomotionAction(u32 i);

    // method set 0x02006d14..
    void changeAction(PlayerActionRequest* item);
    BOOL netAct76(s16 v);
    BOOL requestAct76(u8 a, u8 b, u8 c, u32 d, s16 e);
    void mainTurnTo();
    void turnToCheckEnd();
    void turnToUpdate();
    void netTurnTo();
    void setupTurnTo(PlayerActionRequest *item, u32 old);
    BOOL requestTurnTo(s16 v, u32 a, u32 b);
    void mainWalkTo();
    void walkToCheckEnd(s32 f);
    void walkToMove();
    void walkToUpdateAnim();
    s32 walkToUpdateSpeed();
    void netWalkTo();
    void setupWalkTo(PlayerActionRequest *item, u32 old);
    BOOL requestWalkTo(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c);
    void mainChangeHeldItem();
    void changeHeldItemUpdate();
    void endChangeHeldItem();
    void setupAct76(PlayerActionRequest *item, u32 old);
    s32 netChangeHeldItem(u32 a);
    void setupChangeHeldItem(PlayerActionRequest* item, u32 old);
    s32 requestChangeHeldItem(u16 a, u32 b, u32 c);
    void mainAct35();
    void act35CheckEnd();
    void setupAct35(PlayerActionRequest* item, u32 old);
    s32 requestAct35(u32 a, u32 b);
    s32 requestAct34(u32 a, u32 b);
    s32 requestAct33(u32 a, u32 b);
    s32 requestAct32(u32 a, u32 b);
    s32 requestAct31(u32 a, u32 b);
    void mainAct34();
    void act34CheckEnd();
    void setupAct34(PlayerActionRequest* item, u32 old);
    void mainAct33();
    void act33CheckEnd();
    void setupAct33(PlayerActionRequest* item, u32 old);
    void mainAct32();
    void act32CheckEnd();
    void act32UpdateAnim();
    void act32UpdateSpeed();
    s32 netAct32(u32 a);
    void setupAct32(PlayerActionRequest* item, u32 old);
    void mainAct31();
    void act31CheckEnd();
    void setupAct31(PlayerActionRequest* item, u32 old);
    void mainAct30();
    void act30CheckEnd();
    void act30UpdateAnim();
    void setupAct30(PlayerActionRequest* item, u32 old);
    s32 requestAct30(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g);
    void mainPickUpFanfareStow();
    void pickUpFanfareStowShrink();
    void netAct35();
    void netAct34();
    void netAct33();
    void netAct31();
    void netAct30();
    void netPickUpFanfareStow(s16 v);
    void setupPickUpFanfareStow(PlayerActionRequest* item, u32 v);
    s32 requestPickUpFanfareStow(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void mainPickUpFanfare();
    void pickUpFanfareTakeItem();
    void pickUpFanfareNetTake();
    void pickUpFanfareUpdate();
    void pickUpFanfareUpdateItemPos();
    void endPickUpFanfare();
    void netPickUpFanfare(s16 v);
    void setupPickUpFanfare(PlayerActionRequest* item, u32 v);
    s32 requestPickUpFanfareWithItem(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y);
    s32 requestPickUpFanfareAt(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void mainPickUp();
    void pickUpRemoteCheckEnd();
    void pickUpUpdateStore(u8* state, u8 flag);
    s32 requestPickUpWithItem(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d);
    s32 requestPickUpAt(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d);
    void pickUpUpdateAnim(PlayerActionRequest* item, u32 old);
    void endPickUp(PlayerActionRequest* item, u32 old);
    void netPickUp(s16 old);
    void mainPickUpReach(PlayerActionRequest* item, u32 old);
    void pickUpReachUpdate();
    void pickUpUpdateItem();
    void setupPickUp(PlayerActionRequest* item, u32 old);
    void pickUpReachWaitAnswer();
    void netPickUpReach(s16 v);
    void setupPickUpReach(PlayerActionRequest *item, u32 old);
    s32 requestPickUpReach(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c);
    void mainAct15();
    void act15CheckEnd();
    void act15UpdateAnim();
    s32 netAct15(u32 v);
    void setupAct15(PlayerActionRequest *item, u32 old);
    s32 requestAct15(u32 a, u32 b);
    void mainEmotion();
    void emotionCheckEnd();
    void emotionUpdateAnim();
    void endEmotion();
    s32 netEmotion(s16 v);
    void setupEmotion(PlayerActionRequest *item, u32 old);
    s32 requestEmotion(u8 a, u8 b, u32 c, s16 d);
    void mainAct13();
    void act13CheckEnd();
    s32 netAct13(u32 v);
    void setupAct13(PlayerActionRequest *item, u32 old);
    BOOL requestAct13(u32 a, u32 b);
    void mainAct10();
    void act10CheckTalk();
    void act10FaceTalkTarget();
    void act10UpdateAnim();
    void netAct10(u32 v);
    void setupAct10(PlayerActionRequest *item, u32 old);
    s32 requestAct10(s16 a, u32 b, s32 c);
    void mainChangeClothes();
    void changeClothesCheckEnd();
    BOOL isGuestInSession();
    void calcHandMtx();
    void resetHeldToolAnim();
    void netUpdateBodyCollider();
    BOOL canAcceptTalk(u32 id);
    void updateHeadLook();
    void netSendTan();
    void netSendClothesChange(u32 a, u32 b);
    void loadInputMode();
    void clearActionFlag(u32 id);
    void setActionFlag(u32 id);
    u32 testActionFlag(u32 id);
    void playSeAt(u32 a, Unk_02006d14_Vec3 *v);
    void playSe(u32 a);
    void offsetSpawnBySlot();
    void nudgeForward();
    BOOL netSyncNearPoint(Unk_02006d14_Vec3 *p);
    BOOL netSyncNearUnit(s32 *p);
    BOOL netFollowTransform();
    BOOL getNetTransformInArea(Unk_02006d14_Vec3 *out, s16 *ang);
    void updateShownItemPos(u32 a, ...);
    BOOL checkLidAndError();
    void playFootstepSe();
    void updateFootstepFx();
    s32 turnAwayFromCamera(s32 a);
    s32 turnToCamera(s32 a);
    s32 turnToward(s32 a);
    s32 getHeldToolKind();
    s32 getHeldHoldableIndex();
    BOOL requestByFieldAnswer(s32 a, s32 b);
    s32 startUnitItemQuery(Unk_0200f6d4_V2 *p, s32 a, s32 b);
    s32 pollFieldQuery();
    void pollStoreQuery();
    BOOL startFieldQuery(s32 a, s32 mode, s32 idx);
    u32 getFieldAnswerKind();
    s32 interactAt(s32 a);
    s32 useHeldTool();
    BOOL isPosInReach(s32 *pos, u32 idx);
    void bindPaletteByName(void *a, void *b, void *c, void *d);
    void bindTextureByName(void *a, void *b, void *c, void *d);
    BOOL requestHatChange(u16 *p, u8 b, u8 c, u8 d);
    void pollHatLoad();
    void applyHatChange();
    BOOL requestFaceItemChange(u16 *p);
    void pollFaceItemLoad();
    void applyFaceItemChange();
    s32 tryInteract();
    void requestShirtTexUpload();
    void setShirtTexture(void *p);
    void applySkinHairPalette(s32 a, s32 b);
    s32 getTargetWalkSpeed();
    void applyHoldPose(u16 *p, s32 b, void *c);
    void applyHeldItemPose(s32 b, void *c);
    // method set 0x02008040..
    void netHoldUpItem(void *arg);
    void setupHoldUpItem();
    BOOL requestHoldUpItem(u16 *v, u32 a, u32 b);
    void mainErrorMessage();
    void errorMessageUpdate();
    void func_020082a8();
    BOOL netErrorMessage(u32 b);
    void setupErrorMessage(u8 *msg);
    BOOL requestErrorMessage(u8 v, u32 a, u32 b);
    void mainLidClosed();
    void lidClosedCheckOpen();
    void lidClosedUpdateAnim();
    BOOL netLidClosed(u32 b);
    void setupLidClosed(u32 a, u32 flag);
    BOOL requestLidClosed(u32 a, u32 b);
    void mainAct79();
    void act79Update();
    BOOL netAct79(u32 b);
    void setupAct79();
    BOOL requestAct79(u32 a, u32 b);
    void mainAct77();
    void act77CheckEnd();
    void act77Turn();
    void netAct77(u32 b);
    void setupAct77(u8 *msg);
    BOOL requestAct77(s16 v, u32 a, u32 b);
    void mainAct76();
    void act76Update();

    // 0x000-0x0ec Character, 0x0ec-0x130 TalkMsgRequest
    // animation / face / collider / movement methods (0x020102ec..0x020107c8 of src/main/unk_02004558.cpp; formerly
    // the view PlayerActor)
    void replayAnim();
    void startAnimOnce(s32 a, u32 b, u16 c);
    void switchAnim(s32 a, u32 b, u16 c);
    void startAnim(s32 a, u32 b, u16 c);
    void playAnim(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g);
    void setMouthAnim(s32 *a, u8 *b);
    void setEyeAnim(s32 *a, u8 *b);
    void setMouthAnimForBody(s32 *a, u8 *b);
    void setEyeAnimForBody(s32 *a, u8 *b);
    void initFaceAnims();
    void submitSceneCollider();
    void updateCollidersAtDrawPos(u32 *a);
    void updateBodyCollider();
    void setSubCollider(u32 a, u32 b, u32 c);
    void setSubColliderBody(u32 *a);
    void setBodyColliderAtDrawPos(u32 *a);
    void setBodyCollider(u32 *a);
    void setBodyColliderAt(Unk_020107c8_Blk *a, u32 *b);
    u32 getBodyColliderFlags(u32 *a);
    void updateMouthAnim();
    void updateEyeAnim();
    void updateFaceAnims();
    void advanceAnim();
    BOOL netApproachTransform();
    void moveNoCollision();
    void moveWithCollision();
    void setSpeed(u32 *a);
    void approachRotX();
    void setRotX(u16 a);
    void setAngleY(s16 *a);
    u32 getAnimResIndex(u32 *a);
    u32 calcTan(u32 a);

    /* 0x130 */ s32 inputMagnitude;
    /* 0x134 */ s16 inputAngle;
    /* 0x136 */ u8 inputRun;
    /* 0x137 */ u8 interactPressed;
    /* 0x138 */ Unk_0200ff08_Obj *interactTarget;
    /* 0x13c */ u8 actionPressed;
    /* 0x13d */ u8 actionHeld;
    /* 0x13e */ u8 pad_13e[2];
    /* 0x140 */ s32 toolTargetKind;
    /* 0x144 */ u8 hasTargetPos;
    /* 0x145 */ u8 pad_145[3];
    /* 0x148 */ VecFx32 toolTargetPos;
    /* 0x154 */ VecFx32 targetPos;
    /* 0x160 */ u8 pad_160[4];
    /* 0x164 */ s32 toolHitActor;
    /* 0x168 */ u8 toolHitKind;
    /* 0x169 */ u8 touchTargetId;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 inputMode;
    /* 0x170 */ ActorPlacedCollider bodyCollider;
    /* 0x1c0 */ ActorPlacedCollider subCollider;
    /* 0x210 */ TouchPickCylinder touchCylinder;
    /* 0x230 */ TwoLayerAnimModel bodyModel;
    /* 0x384 */ PlayerBodyWorkRef bodyWork;
    /* 0x385 */ PlayerBodyModelRef bodyModelRef;
    /* 0x386 */ u8 pad_386[2];
    /* 0x388 */ CachedModel headModel0;
    /* 0x424 */ PlayerHead headRef;
    /* 0x425 */ u8 pad_425[3];
    /* 0x428 */ Mtx43 headMtx;
    /* 0x458 */ s16 headPitch;
    /* 0x45a */ s16 headYaw;
    /* 0x45c */ s16 headPitchTarget;
    /* 0x45e */ s16 headYawTarget;
    /* 0x460 */ CachedModel headModel1;
    /* 0x4fc */ CachedModel faceItemModel;
    /* 0x598 */ PlayerGlassesModelRef faceItemRef;
    /* 0x599 */ u8 pad_599[3];
    /* 0x59c */ HeldItemModel heldItemModel;
    /* 0x604 */ Mtx43 heldItemJointMtx;
    /* 0x634 */ Mtx43 heldItemJointMtx2;
    /* 0x664 */ Mtx43 toolHandMtx;
    /* 0x694 */ Mtx43 itemHandMtx;
    /* 0x6c4 */ VecFx32 footPosA;
    /* 0x6d0 */ VecFx32 footPosB;
    /* 0x6dc */ VecFx32 headTopPos;
    /* 0x6e8 */ s32 actionFlags;
    /* 0x6ec */ s32 shadowSize;
    /* 0x6f0 */ VecFx32 bodyPos;
    /* 0x6fc */ Unk_0205c3a4 bodyAnimSlot;
    /* 0x6fd */ Unk_0205c3a4 holdAnimSlot;
    /* 0x6fe */ u8 pad_6fe[2];
    /* 0x700 */ s32 animId;
    /* 0x704 */ s32 handPose;
    /* 0x708 */ u8 animMode;
    /* 0x709 */ PlayerFaceTexRef faceTex;
    /* 0x70a */ CharaFaceAnimRef faceAnimRef;
    /* 0x70b */ CharaFaceAnimWorkRef faceAnimWork;
    /* 0x70c */ MatTexPatAnim eyeTexAnim;
    /* 0x738 */ MatTexPatAnim mouthTexAnim;
    /* 0x764 */ BlinkTimer blinkTimer;
    /* 0x768 */ s32 eyeAnimId;
    /* 0x76c */ s32 mouthAnimId;
    /* 0x770 */ CharaClothTexRef shirtTex;
    /* 0x771 */ u8 pad_771[3];
    /* 0x774 */ MatTexVramTask shirtTexUpload;
    /* 0x79c */ Unk_0205ef98 skinHairPalette;
    /* 0x79d */ u8 pad_79d[3];
    /* 0x7a0 */ CollisionState bgCheckWork;
    /* 0x7d0 */ union {                     // per-action work area, mostly read through per-action views
        s32 actionWork;
        u8 actionWorkRaw[0x1c];
    };
    /* 0x7ec */ s32 action;
    /* 0x7f0 */ s32 prevAction;
    /* 0x7f4 */ s32 drawStep;
    /* 0x7f8 */ s32 actionPriority;
    /* 0x7fc */ s32 sessionSlot;
    /* 0x800 */ s32 exitIndex;
    /* 0x804 */ s32 exitMode;
    /* 0x808 */ s32 fieldQuery;
    /* 0x80c */ s32 dropQuery;
    /* 0x810 */ s32 fieldAnswerKind;
    /* 0x814 */ s32 fieldAnswer;
    /* 0x818 */ s32 msgStep;
    /* 0x81c */ u16 actionItem;
    /* 0x81e */ u16 shownItem;
    /* 0x820 */ s32 shownItemPosX;
    /* 0x824 */ s32 shownItemPosY;
    /* 0x828 */ s32 shownItemPosZ;
    /* 0x82c */ s32 shownItemScaleX;
    /* 0x830 */ s32 shownItemScaleY;
    /* 0x834 */ s32 shownItemScaleZ;
    /* 0x838 */ SndSeEmitterKind99 seEmitterLocal;
    /* 0x87c */ SndSeEmitterKind1 seEmitterRemote;
    /* 0x8c0 */ s32 sePosX;
    /* 0x8c4 */ s32 sePosY;
    /* 0x8c8 */ s32 sePosZ;
    /* 0x8cc */ s32 aheadUnitX;
    /* 0x8d0 */ s32 aheadUnitZ;
    /* 0x8d4 */ s32 runUnitX;
    /* 0x8d8 */ s32 runUnitZ;
    /* 0x8dc */ s32 pitfallUnitX;
    /* 0x8e0 */ s32 pitfallUnitZ;
    /* 0x8e4 */ u8 tripCooldown;
    /* 0x8e5 */ u8 alpha;
    /* 0x8e6 */ u8 lastInputSide;
    /* 0x8e7 */ s8 pendingAct76Kind;
    /* 0x8e8 */ u8 netPickUpDelay;
    /* 0x8e9 */ u8 pad_8e9[3];
    /* 0x8ec */ PlayerNetActionArgs netData;       // per-action net payload (also read through per-action views)
    /* 0x8f4 */ s32 lastNetAction;
    /* 0x8f8 */ s32 pendingEventUnitX;
    /* 0x8fc */ s32 pendingEventUnitZ;
    /* 0x900 */ u8 pendingEvent;
    /* 0x901 */ u8 pad_901[3];
    /* 0x904 */ Unk_0200b908_Obj *emotionEntry;
    /* 0x908 */ NpcEmotionFx emotionFx;
    /* 0x930 */ PlayerActionRequest requests[30];
    /* 0xc78 */ s32 requestCount;
    /* 0xc7c */ s32 bestRequest;
    /* 0xc80 */ s16 netSeq;
    /* 0xc82 */ u8 pad_c82[2];
    /* 0xc84 */ s32 netSeqAction;
    /* 0xc88 */ s32 faceItemState;
    /* 0xc8c */ u16 pendingFaceItem;
    /* 0xc8e */ u8 pad_c8e[2];
    /* 0xc90 */ s32 hatState;
    /* 0xc94 */ u16 pendingHat;
    /* 0xc96 */ u8 pendingHairStyle;
    /* 0xc97 */ u8 pendingHairColor;
    /* 0xc98 */ u8 pendingHatBindFace;
    /* 0xc99 */ u8 pad_c99[3];
};

#endif
