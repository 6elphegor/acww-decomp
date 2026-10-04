#ifndef NPC_NPCLOOKAT_H
#define NPC_NPCLOOKAT_H

#include "types.h"

// NPC head/look-at controller, NpcActor::lookAt (methods 0x0201a334..0x0201a7e8, unk_0201a334.cpp part of
// src/main/unk_020119cc.cpp; ctor 0x0201a794, dtor label 0x0201a78c).

struct Unk_0201a334_Vec3 { s32 x, y, z; };
class Character;
class NpcActor;

class NpcLookAt {
public:
    NpcLookAt();
    ~NpcLookAt();

    u8 lookType;
    u8 pad_01[3];
    Character *targetActor;
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
    u8 pad_2b[0x50 - 0x2b];
    Unk_0201a334_Vec3 headPos;  // world head position (NpcLookAt_GetHeadPos; zero = unknown)
    s32 maxDistance;
    u8 useYawLimit;
    u8 pad_61[3];
    s32 targetPlayer;

    void lookAtTargetActor(Character *scene);
    void lookAtLocalPlayer(Character *scene);
    void lookAtTargetPlayer(Character *scene);
    void lookAtPlayer(Character *scene, s32 h, s32 limit, u8 flag);
    void relax();
    void lookAtActor(Character *scene, Character *tgt, Unk_0201a334_Vec3 *v, s32 limit, u8 flag);
    s32 clampPitch(s32 v);
    s32 calcClampedPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 clampYaw(s32 v);
    s32 calcClampedYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 calcPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 calcYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    BOOL canSeeTarget(Character *scene);
    void setManualAngles(s32 pri, s16 a, s16 b, s16 c, s16 d);
    void setTarget(u8 type, s32 pri, s32 tgt, Unk_0201a334_Vec3 *v, s32 h, s32 lim, u8 flag);
    void setTargetPos(Unk_0201a334_Vec3 *v);
    void setPitchLimit(s16 v);
    void disable();
    void clearTargetActor();
    u8 getObstacleBits();
    // look-type functions and helpers (symbols formerly of the NpcLookAt view, 0x0201a1a4..0x0201a334)
    BOOL isOnTarget();
    BOOL isWithinYawLimit(s32 v);
    void update(NpcActor *base);
    void approachManualAngles();
    void lookAtPoint(NpcActor *o);
};

// size 0x68

#endif
