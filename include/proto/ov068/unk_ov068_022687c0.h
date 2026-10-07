#ifndef PROTO_PROTO_OV068_UNK_OV068_022687C0_H
#define PROTO_PROTO_OV068_UNK_OV068_022687C0_H

// Prototypes of the functions defined in src/ov068/unk_ov068_022687c0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "field/Insect.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Insect_AccumAlarmFromActor
void Insect_AccumAlarmFromActor(Insect *o, u8 *flag, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Dragonfly_FindPerch
s32 Dragonfly_FindPerch(Insect *o);
#endif
#ifndef PROTO_LOCAL_Pondskater_Skate
void Pondskater_Skate(Insect *o, s16 *p);
#endif
#ifndef PROTO_LOCAL_Pondskater_StartSkate
void Pondskater_StartSkate(Insect *o, u16 *p);
#endif
#ifndef PROTO_LOCAL_Pondskater_CheckObstacle
void Pondskater_CheckObstacle(Insect *o, u16 *p);
#endif
#ifndef PROTO_LOCAL_Dragonfly_FlyToPerch
void Dragonfly_FlyToPerch(Insect *o);
#endif
#ifndef PROTO_LOCAL_Moth_CircleLight
void Moth_CircleLight(Insect *o);
#endif
#ifndef PROTO_LOCAL_Bee_StretchSwarm
void Bee_StretchSwarm(s32 *v, s32 up);
#endif
#ifndef PROTO_LOCAL_Bee_StingAndLeave
void Bee_StingAndLeave(Insect *o);
#endif
#ifndef PROTO_LOCAL_Stinger_Walk
void Stinger_Walk(Insect *o, s16 *p, u32 mode);
#endif
#ifndef PROTO_LOCAL_Stinger_UpdateChase
s32 Stinger_UpdateChase(Insect *o, s16 *p);
#endif
#ifndef PROTO_LOCAL_Stinger_Threaten
s32 Stinger_Threaten(Insect *o, u32 mode, u32 q);
#endif
#ifndef PROTO_LOCAL_Stinger_TryAttack
s32 Stinger_TryAttack(Insect *o, u32 mode, u32 q, s16 *p);
#endif
#ifndef PROTO_LOCAL_Insect_ApproachFlower
s32 Insect_ApproachFlower(Insect *o, s16 *p);
#endif
#ifndef PROTO_LOCAL_Insect_AdjustFlowerLandingPos
void Insect_AdjustFlowerLandingPos(s32 code, s32 *v);
#endif
}
#endif

#endif
