#ifndef NPC_NPCLOOKAT_H
#define NPC_NPCLOOKAT_H

#include "types.h"

// NPC head/look-at controller, NpcActor::lookAt (methods 0x0201a334..0x0201a7e8, unk_0201a334.cpp part of
// src/main/unk_020119cc.cpp; ctor 0x0201a794, dtor label 0x0201a78c).

struct Unk_0201a334_Vec3 { s32 x, y, z; };
struct Unk_0201a334_Scene;
struct Unk_0201a734_Obj;

class NpcLookAt {
public:
    NpcLookAt();
    ~NpcLookAt();

    u8 lookType;
    u8 pad_01[3];
    Unk_0201a734_Obj *targetActor;
    Unk_0201a334_Vec3 targetPos;
    s32 priority;
    u8 disabled;
    u8 pad_19;
    s16 pitch;
    s16 pitchStep;
    s16 manualPitch;
    s16 pitchLimit;
    s16 yaw;
    s16 yawStep;
    s16 manualYaw;
    s16 yawLimit;
    u8 onTarget;
    u8 pad_2b[0x5c - 0x2b];
    s32 maxDistance;
    u8 useYawLimit;
    u8 pad_61[3];
    s32 targetPlayer;

    void lookAtTargetActor(Unk_0201a334_Scene *scene);
    void lookAtLocalPlayer(Unk_0201a334_Scene *scene);
    void lookAtTargetPlayer(Unk_0201a334_Scene *scene);
    void lookAtPlayer(Unk_0201a334_Scene *scene, s32 h, s32 limit, u8 flag);
    void relax();
    void lookAtActor(Unk_0201a334_Scene *scene, Unk_0201a334_Scene *tgt, Unk_0201a334_Vec3 *v, s32 limit, u8 flag);
    s32 clampPitch(s32 v);
    s32 calcClampedPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 clampYaw(s32 v);
    s32 calcClampedYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 calcPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 calcYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    BOOL canSeeTarget(Unk_0201a334_Scene *scene);
    void setManualAngles(s32 pri, s16 a, s16 b, s16 c, s16 d);
    void setTarget(u8 type, s32 pri, s32 tgt, Unk_0201a334_Vec3 *v, s32 h, s32 lim, u8 flag);
    void setTargetPos(Unk_0201a334_Vec3 *v);
    void setPitchLimit(s16 v);
    void disable();
    void clearTargetActor();
    u8 getObstacleBits();
};

// size 0x68

#endif
