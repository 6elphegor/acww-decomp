#ifndef NPC_NPCMOVECTRL_H
#define NPC_NPCMOVECTRL_H

#include "types.h"
#include "npc/NpcLookAt.h"

class Unk_02006d14;

// 0x58-byte NPC movement controller, NpcActor::moveCtrl (speed presets, move mode, turning, waypoint/destination).
// Defined in main, src/main/unk_020119cc.cpp (unk_0201a334.cpp / unk_0201ac80.cpp parts; ctor 0x0201accc, dtor label
// 0x0201acc8, reset 0x0201ac88).
class NpcMoveCtrl {
public:
    NpcMoveCtrl();
    ~NpcMoveCtrl();

    /* 0x00 */ Unk_0201a334_Vec3 curSpeedPreset;
    /* 0x0c */ Unk_0201a334_Vec3 speedPresets[3];
    /* 0x30 */ s32 moveMode;
    /* 0x34 */ s16 targetAngle;
    /* 0x36 */ s16 turnSpeed;
    /* 0x38 */ Unk_0201a334_Vec3 waypoint;
    /* 0x44 */ Unk_0201a334_Vec3 destination;
    /* 0x50 */ s32 arriveDistance;
    /* 0x54 */ u8 keepAnimFrame;
    /* 0x55 */ u8 turnMode;

    void storeHeadMtx(Unk_02006d14 *p);
    void setTurnMode(u8 v);
    void func_0201a8cc();
    void setSpeedPreset(s32 idx, s32 x, s32 y, s32 z);
    void resetDestination();
    s32 hasNextLeg();
    Unk_0201a334_Vec3 *getDestination();
    void setDestination(Unk_0201a334_Vec3 *v);
    s32 getTurnSpeed();
    s32 getTargetAngle();
    void setTargetAngle(s16 v);
    BOOL hasArrived(Unk_0201a334_Scene *scene, s32 which);
    Unk_0201a334_Vec3 *getDestinationB();
    void setWaypoint(Unk_0201a334_Vec3 *v);
    void updateTurn(Unk_0201a334_Scene *scene);
    s32 stepAngle(s16 *p, s16 target, s16 step, u8 mode);
    void aimAtDestination(Unk_0201a334_Scene *scene);
    s32 getMoveMode();
    void setMoveMode(Unk_0201a334_Scene *scene, s32 mode, s16 ang, u16 extra);
    void applyMovement(Unk_0201a334_Scene *scene);
    void reset();
    void func_0201acc8();
};

#endif
