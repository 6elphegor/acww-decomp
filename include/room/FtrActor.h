#ifndef ROOM_FTRACTOR_H
#define ROOM_FTRACTOR_H

#include "types.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "gfx/Mtx43.h"
#include "game/Unk_0203e4f0_Vec.h"
#include "room/FtrActorParts.h"

struct NNSG3dRS;

// Furniture actor of the room overlay (ov004): Character with TalkMsgRequest as secondary base at +0xec.
// Defined in src/ov004/unk_ov004_02204f24.cpp (ctor, all base methods); its 34 subclasses are in
// src/ov004/unk_ov004_02209f70.cpp (+ _switch, same unit). The members are byte arrays where the real parts
// (FtrStackLink, FtrTopItems, BlendAnimModel, FtrCollider, FtrSwitch ...) are constructed by hand. Size 0x840.
class FtrActor : public Character, public TalkMsgRequest {
public:
    FtrActor();
    virtual ~FtrActor();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL onCreate();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL postDelete(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preDraw();
    virtual VecFx32 *getInteractionPos();
    virtual BOOL onMatCalc();
    virtual void onNodeVisCalc(s32 a, NNSG3dRS *b);
    virtual BOOL onJointCalcPre();
    virtual void onJointCalcPost(s32 a, void *b);
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual u8 getActAid();
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL updateAppearRemove();
    virtual BOOL isVisible();
    virtual BOOL needsTexCopy();
    virtual void onRemove();
    virtual void onMoveStart();
    virtual void onRotateStart();
    virtual void onRotateUpdate();
    virtual BOOL isReady();

    void execPreview();
    BOOL enterPreview();
    void execHide();
    BOOL enterHide();
    void execRemove();
    BOOL enterRemove();
    void execPull();
    BOOL enterPull();
    void execPush();
    BOOL enterPush();

    BOOL execRotate();
    BOOL enterRotate();
    BOOL execIdle();
    BOOL enterIdle();
    void execAppear();
    BOOL enterAppear();
    void execAct();
    BOOL setAct(s32 idx);
    BOOL isAct(s32 s);
    BOOL isHidden();
    BOOL isRemoving();
    BOOL isNotReady();
    BOOL isNotIdle();
    BOOL isIdle();
    BOOL startHide();
    BOOL startPull(s16 a);
    BOOL startPush(s16 a);
    BOOL startRotate(s32 a);

    BOOL isPreview();
    void spawnEffectAtCorner(s32 a);
    void spawnEffectAt(Unk_0203e4f0_Vec *v);
    void spawnActorC0AtCenter();
    void spawnActorC0AtTile(s32 a);
    BOOL findOwnTile(s32 *ox, s32 *oy, s32 a, s32 b);
    u16 makeCharId(s32 a, s32 b);
    BOOL canMoveTo(s32 a, s32 b);
    BOOL canMoveBy(s32 a);
    BOOL canRotateBy(s32 a);
    BOOL hasItemOnTop();
    void releaseRoomLight();
    void updateLamp();

    void playAnim(s32 a, s32 b, s32 c, u32 d);
    void initAnims(s32 a, s32 b, s32 c, s32 d);
    u16 getAnimFrameCount(s32 a);
    BOOL playSound3();
    BOOL playSound2();
    BOOL playSound1();
    BOOL playSound0();
    u32 hasIndoorFlag6();
    BOOL isSoundingClock();
    BOOL isCabinClock();
    BOOL isGyroid();
    BOOL isSeatOrBed();
    BOOL isTvOn();
    BOOL isStereoOn();
    BOOL bindTvScreenTex(BOOL a);   // defined in 02209f70

    /* 0x12e */ u16 modelSlot; // a ModelSlotHandle (ctor/dtor called by hand)
    /* 0x130 */ u8 pad_130[0x14c - 0x130];
    /* 0x14c */ s32 drawScale;
    /* 0x150 */ s32 drawScaleY;
    /* 0x154 */ s32 drawScaleZ;
    /* 0x158 */ s32 colliderScale;
    /* 0x15c */ u16 appearFrame;
    /* 0x15e */ u16 wobblePhase;
    /* 0x160 */ s16 wobbleSpeed;
    /* 0x162 */ u8 pad_162[2];
    /* 0x164 */ s32 wobbleAmp;
    /* 0x168 */ s16 targetAngle;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 targetPos[3];
    /* 0x178 */ u8 stackLink[0x10];   // FtrStackLink
    /* 0x188 */ u8 topItems[0x44];   // FtrTopItems
    /* 0x1cc */ u8 topItemCylinders[0x80];   // 4 x TouchPickCylinder (0x20)
    /* 0x24c */ u8 moveFlag[0x34];
    /* 0x280 */ u32 ftrIndex;
    /* 0x284 */ u8 mapLayer;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ u8 touchBox[0x2a8];  // TouchPickBox
    /* 0x530 */ s32 baseAct;
    /* 0x534 */ u8 model[0x590 - 0x534]; // BlendAnimModel
    /* 0x590 */ u32 modelResMdl;
    /* 0x594 */ u8 pad_594[4];
    /* 0x598 */ Mtx43 modelMtx;
    /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
    /* 0x5d0 */ u8 animFrameCtrl[4];
    /* 0x5d4 */ u32 animNumFrames;
    /* 0x5d8 */ u32 animFrame;
    /* 0x5dc */ u8 pad_5dc[4];
    /* 0x5e0 */ s32 animFrameStep;
    /* 0x5e4 */ u8 pad_5e4[0x628 - 0x5e4];
    /* 0x628 */ u8 collider[0xa0];   // FtrCollider
    /* 0x6c8 */ u8 modelRes[0x74];   // FtrModelRes
    /* 0x73c */ u8 switchState[2];      // FtrSwitch
    /* 0x73e */ s8 clockHands;         // FtrClockHands (3 bytes)
    /* 0x73f */ s8 clockHandsMinJnt;
    /* 0x740 */ u8 clockHandsValid;
    /* 0x741 */ u8 pad_741[3];
    /* 0x744 */ u8 lampMat[0x1c];   // FtrGlowMat
    /* 0x760 */ u8 visNodes[8];      // FtrVisNodes
    /* 0x768 */ s32 spawnMode;
    /* 0x76c */ u16 actFrame;
    /* 0x76e */ u8 pad_76e[2];
    /* 0x770 */ s32 commentPersonality;
    /* 0x774 */ s32 commentId;
    /* 0x778 */ u8 actAid;
    /* 0x779 */ u8 netRequestPending;
    /* 0x77a */ u8 isInitializing;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ s32 kind;
    /* 0x780 */ s32 footprint;
    /* 0x784 */ s32 hasTopSurface;
    /* 0x788 */ u8 noCollision;
    /* 0x789 */ u8 startsOff;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 surfaceHeight;
    /* 0x790 */ s32 lightKind;
    /* 0x794 */ u8 soundEmitter[0x20];   // FtrSoundEmitter
    /* 0x7b4 */ s32 centerPos[3];
    /* 0x7c0 */ FtrModelAnimView anims[4];   // 4 x FtrModelAnim
};

#endif // ROOM_FTRACTOR_H
