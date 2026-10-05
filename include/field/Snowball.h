#ifndef FIELD_SNOWBALL_H
#define FIELD_SNOWBALL_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "gfx/Quat.h"
#include "gfx/CachedModel.h"
#include "game/CollisionState.h"
#include "actor/ActorFollowCollider.h"
#include "actor/Character.h"
#include "talk/TalkMsgRequest.h"

// Collider of a snowball: onCollide latches hitThisFrame for contacts with flag 4.
class SnowballCollider : public ActorFollowCollider {
public:
    SnowballCollider();
    ~SnowballCollider();
    virtual void onCollide(u32 a, u32 b, u32 c);
    /* 0x44 */ u8 hitThisFrame;
};

// Packed state flags of a snowball (Snowball 0x374).
struct SnowballFlags {
    u16 a : 2; // snowman record index (SnowmanRecords::add / getInfo, Item_MakeSnowman)
    u16 b : 2; // size-ratio rank of the two balls (Snowball_GetSizeRatioRank)
    u16 c : 1; // set on entering the roll, fall, sink and break states, cleared on entering all other states
    u16 d : 1; // inverse of c
    u16 e : 1; // pushed this frame (onExecute moves it to f and clears it)
    u16 f : 1; // pushed last frame
    u16 g : 1;
    u16 h : 1;
    u16 i : 1;
};

// Snowball field object (0x3a0 bytes; actor profile sSnowballProfile). Defined in src/ov003/unk_ov003_02212830.cpp;
// the state functions of its ptmf state tables (Snowball_ChangeState / Snowball_RunState, states 0-13) are in
// src/ov068/unk_ov068_02267584.cpp. sSnowballs[8] (src/ov003/unk_ov003_0222e734.cpp) holds the live ones.
class Snowball : public Character, public TalkMsgRequest {
public:
    Snowball();
    virtual ~Snowball();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL acceptsInteraction(void *a);
    virtual void onInteractionEvent(u32 a, u8 b);
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    void mainTalkEnd();
    BOOL setupTalkEnd();
    void mainTalk();
    BOOL setupTalk();
    void mainTalkIdle();
    BOOL setupTalkIdle();
    void runTalkAct();
    BOOL changeTalkAct(s32 m);
    void execSnowmanHead();
    BOOL enterSnowmanHead();
    void execSnowmanBody();
    BOOL enterSnowmanBody();

    // state functions and helpers in ov068
    BOOL enterSnowballRoll();
    void execSnowballRoll();
    void spawnSnowballSplash();
    void spawnSnowballBreak();
    void applySnowballMotion();
    BOOL enterSnowballFall();
    void execSnowballFall();
    BOOL enterSnowballSink();
    void execSnowballSink();
    BOOL enterSnowballBreak();
    void execSnowballBreak();
    BOOL enterSnowballHole();
    void execSnowballHole();
    BOOL enterSnowball05();
    void execSnowball05();
    BOOL enterSnowballSplash();
    void execSnowballSplash();
    BOOL enterSnowballToSnowman();
    void execSnowballToSnowman();
    BOOL enterSnowballStack();
    void execSnowballStack();
    BOOL enterSnowballSettle();
    void execSnowballSettle();
    BOOL enterSnowballCrumble();
    void execSnowballCrumble();
    BOOL enterSnowballCrumble2();
    void execSnowballCrumble2();

    /* 0x130 */ CachedModel ballModel;
    /* 0x1cc */ CachedModel faceModel;
    /* 0x268 */ s32 radius;
    /* 0x26c */ s32 collisionRadius;
    /* 0x270 */ CollisionState collisionState;
    /* 0x2a0 */ SnowballCollider collider;
    /* 0x2e8 */ s32 colliderWeight;
    /* 0x2ec */ s32 rollVelX;
    /* 0x2f0 */ s32 rollVelZ;
    /* 0x2f4 */ Quat rotationQuat;
    /* 0x304 */ VecFx32 drawOffset;
    /* 0x310 */ s32 stepX; // per-frame step towards targetPos (snowman / stack states)
    /* 0x314 */ s32 stepZ;
    /* 0x318 */ VecFx32 lastFramePos;
    /* 0x324 */ u8 seEmitter[0x40];
    /* 0x364 */ u8 fallFrames;
    /* 0x365 */ u8 prevContactCount;
    /* 0x366 */ u8 hitSeLatch;
    /* 0x367 */ u8 pad_367;
    /* 0x368 */ s32 moveVelX; // roll velocity / position delta of the frame, checked against wall contacts
    /* 0x36c */ s32 moveVelZ;
    /* 0x370 */ s32 pushSpeed;
    /* 0x374 */ union {
        SnowballFlags snowballFlags;
        u16 snowballFlagBits;
    };
    /* 0x376 */ u8 pad_376[2];
    /* 0x378 */ VecFx32 targetPos;
    /* 0x384 */ VecFx32 holePos;
    /* 0x390 */ s16 pushAngle;
    /* 0x392 */ s16 wobblePhase;
    /* 0x394 */ u8 crumbleTimer;
    /* 0x395 */ u8 stepCount;
    /* 0x396 */ u16 displacedItem;
    /* 0x398 */ s32 snowballState;
    /* 0x39c */ s32 talkAct;
};

#endif
