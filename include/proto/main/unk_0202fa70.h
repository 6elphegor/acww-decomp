#ifndef PROTO_PROTO_MAIN_UNK_0202FA70_H
#define PROTO_PROTO_MAIN_UNK_0202FA70_H

// Prototypes of the functions defined in src/main/unk_0202fa70.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "game/TriangleTrigger.h"
#include "gfx/VecFx32.h"
struct CollisionState;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Collision_Move
void Collision_Move(CollisionState *self, VecFx32 *pos, VecFx32 *tgt, u16 hh, s32 arg5, Actor *actor, u32 flags);
#endif
}
#endif

#endif
