#ifndef TOWN_BUILDINGACTOR_H
#define TOWN_BUILDINGACTOR_H

#include "types.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"
#include "gfx/Mtx43.h"
#include "game/Unk_ov009_0225b880_Vec3.h"
#include "town/Unk_ov009_0225b880.h"

// Field building / structure actor (houses, shops, tents, signs, mailboxes, the taxi ...): Character with
// TalkMsgRequest as secondary base at +0xec. Defined in src/ov009/unk_ov009_0225b880.cpp (+ _switch, same unit;
// vtable 0x0225e29c); derived classes in ov003 and ov068. Its first member sits in TalkMsgRequest's tail padding
// (0x12e). Size 0x2b0.
class ObjShadowStrip;
struct TouchPickTriangle;
class BuildingCollider;
struct BuildingResources;

// AnimFrameCtrl's current frame as bitfields (BuildingActor::doorAnimFrame, read by ov068 KappnTaxi).
struct Unk_ov068_0226b5a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL onCreate();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL postExecute(u32 a);
    virtual BOOL preDraw();
    virtual BOOL acceptsInteraction(void *a);
    virtual void onInteractionEvent(u32 a, u8 b);
    virtual VecFx32 *getInteractionPos();
    virtual void onJointCalcPost(u32 a, void *b);
    virtual s32 getDoorInAnim();                                   // bca anim (door open)
    virtual s32 getDoorOutAnim();                                   // bca anim (door close)
    virtual s32 setDoorState(s32 a);                              // set door state
    virtual BOOL initBuilding();
    virtual void updateDoorState();                                  // update door state
    virtual void setupTalkMsg();
    virtual void onTalkOpened();
    virtual void updateTalk();
    virtual void onTalkEnded();
    virtual void onMessageEnd(u32 attr);
    virtual BOOL isOpen();
    virtual BOOL usesDoorApproach();
    virtual BOOL alignsPlayerToDoor();
    virtual BOOL playsDoorMelody();
    virtual BOOL areLightsOn();
    virtual s32 hasFlickeringLights();
    virtual char *getArcPath();
    virtual char *getTexPath();
    virtual char *getLightTexPath();
    virtual BOOL needsMatrixUpdate();
    virtual Unk_ov009_0225da90_Vec3 getSoundPos();
    virtual BOOL calcCustomBaseMatrix(Mtx43 *out);

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
    void createColliders(Mtx43 *m);
    void destroyShadows();
    void updateShadows(Mtx43 *m);
    void createShadows(Mtx43 *m);
    void updateBaseMatrix(Mtx43 *out);
    void func_ov009_0225d0d8();
    BuildingResources *getResources();
    void makeCurvedMatrix(Mtx43 *out);
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
    s32 callIsLit();
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

    /* 0x12e */ u16 unk_12e;    // in TalkMsgRequest's tail padding (door-close SE delay in ov009)
    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u32 buildingIndex;
    /* 0x138 */ u8 unk_138[0x194 - 0x138];     // BlendAnimModel
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Mtx43 baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[8];                 // AnimFrameCtrl (door animation)
    /* 0x1dc */ Unk_ov068_0226b5a4_Bits doorAnimFrame;
    /* 0x1e0 */ u8 pad_1e0[0x1f0 - 0x1e0];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 unk_234[0x44];              // BuildingSeEmitter
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

#endif // TOWN_BUILDINGACTOR_H
