#ifndef ACTOR_NPCACTOR_H
#define ACTOR_NPCACTOR_H

#include "types.h"
#include "actor/Character.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "npc/NpcMoveAnimSet.h"
#include "npc/NpcFaceAnim.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/Unk_0201ac88.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/NpcLookAt.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcEmotionFx.h"
#include "gfx/Mtx43.h"
#include "gfx/VecFx32.h"
#include "game/CollisionState.h"
#include "actor/ActorFollowCollider.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_020135e4.h"
#include "npc/NpcActionCtrl.h"
#include "npc/Unk_02014254.h"

struct Unk_020d77a4_Vec3;
struct Unk_020d77a4_Vec;
struct Unk_0201bc1c;

// Base of all NPC actors (villagers and special NPCs; 0x640 bytes). Methods and vtable in src/main/unk_020119cc.cpp
// (0x0201b084..0x0201be04, D0 0x020119cc / D1 0x02011a98, inline destructor defined there and in 0202e2d4 / 0201c050,
// whose derived destructors inline it); the constructor is inline.
class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *out);
    /* 0x60 */ virtual BOOL onToolHit(u16 *item);
    /* 0x64 */ virtual void *vfunc_64();
    /* 0x68 */ virtual BOOL updateAct();
    /* 0x6c */ virtual u8 *getTexturePath() = 0;
    /* 0x70 */ virtual u8 *getModelPath() = 0;
    /* 0x74 */ virtual void getName(u32 a) = 0;
    /* 0x78 */ virtual u32 getGender() = 0;
    /* 0x7c */ virtual BOOL canPlayTalkMelody() = 0;
    /* 0x80 */ virtual void onTalkMelodyPlayed() = 0;
    /* 0x84 */ virtual u16 getSpecies() = 0;
    /* 0x88 */ virtual void setShirt(u16 *p, BOOL flag);
    /* 0x8c */ virtual void onJoinTalk();
    /* 0x90 */ virtual void onLeaveTalk();
    /* 0x94 */ virtual s32 getAct0BAnimA();
    /* 0x98 */ virtual s32 getAct0BAnimB();
    /* 0x9c */ virtual u16 vfunc_9c();
    /* 0xa0 */ virtual s32 getTeachableEmotion();
    /* 0xa4 */ virtual void addMood(u32 a, s32 b);

    u8 isUpdating();
    BOOL netReadAction(s32 *a, s32 *b, u8 *c);
    BOOL netReadPosition(s32 *a, u8 *b);
    void netSendState(u32 a, ...);
    void setNetUserBytes(void *dst, s32 n);
    BOOL getNetUserBytes(u8 *src, u32 n);
    BOOL netIsTalkLocked();
    s32 netGetSlots(s32 a, s32 b);
    void netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...);
    s32 netSetSlots(s32 a, s32 b, s32 c);
    BOOL isNetOwner();
    s32 findAvoidPos(Unk_020d77a4_Vec *out);
    BOOL getFreeOffsetPos(Unk_020d77a4_Vec *out, void *p);
    s32 getSpeakerGender();
    Unk_0201bc1c *getTalkRequest();
    void setTalkRequest(Unk_0201bc1c *p);
    u32 getPlayerActor(u32 id);
    s16 getRelativeAngleTo(NpcActor *other);
    s32 getAngleToPlayer(u32 id);
    s32 getAngleTo(NpcActor *other);
    BOOL isPlayerNear(s32 n, u32 id);
    BOOL isNear(NpcActor *other, s32 n);
    s32 getDistanceToPlayer(u32 id);
    s32 getDistanceTo(NpcActor *other);
    BOOL isPosInFront(s16 *out, Unk_020d77a4_Vec *pos);
    void setCollisionRadius(s32 v);
    void setNpcHandle(u16 *p);
    void setNpcIndex(u16 v);
    u16 getNpcIndex();
    void releaseModel();
    BOOL loadModel();

    /* 0x0ea */ u16 unk_ea;
    /* 0x0ec */ ThreeLayerAnimModel model;
    /* 0x2a0 */ Unk_0201ad3c moveAnimSet;
    /* 0x2ac */ NpcFaceAnim faceAnim;
    /* 0x334 */ NpcAnimCtrl animCtrl;
    /* 0x350 */ Unk_0201accc moveCtrl;
    /* 0x3a8 */ Unk_0201a8bc obstacleProbe;
    /* 0x3aa */ Unk_0201ad18 unk_3aa;
    /* 0x3b0 */ Unk_0201a794 lookAt;
    /* 0x418 */ NpcSpeechState speechState;
    /* 0x420 */ NpcEmotionFx emotionFx;
    /* 0x448 */ Mtx43 jointMtx;       // world matrix of model joint 0xb (onDraw); its translation is vfunc_5c's position
    /* 0x478 */ VecFx32 jointPos[3];  // un-curved world positions of model joints 0x10, 0x7, 0x4 (onDraw)
    /* 0x49c */ CollisionState collisionState;
    /* 0x4cc */ ActorFollowCollider collider;
    /* 0x510 */ u8 collisionEnabled;
    /* 0x511 */ u8 shadowEnabled;
    /* 0x512 */ u8 pad_512[2];
    /* 0x514 */ SndSeEmitterKind1 seEmitter;
    /* 0x558 */ Unk_020135e4 footstepFx;
    /* 0x560 */ u8 partnerPlayer;
    /* 0x561 */ u8 updateEnabled;     // isUpdating(); onExecute does nothing else while 0
    /* 0x562 */ u8 drawEnabled;
    /* 0x563 */ u8 netSyncOff;        // no NPC net-record sync while set
    /* 0x564 */ NpcActionCtrl actionCtrl;
    /* 0x618 */ Unk_02014254 talkCtrl;
    /* 0x628 */ void *curHeldTool; // HeldToolModel shown in the NPC's hand
    /* 0x62c */ u8 talkLockHeld;
    /* 0x62d */ u8 netUserBytes[3];
    /* 0x630 */ u8 pad_630[2];
    /* 0x632 */ u16 npcIndex;
    /* 0x634 */ Unk_0201bc1c *talkRequest;
    /* 0x638 */ s32 collisionRadius;
    /* 0x63c */ u8 pad_63c[4];
};

#endif
