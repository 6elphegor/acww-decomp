#ifndef PROTO_PROTO_MAIN_UNK_020B60B0_H
#define PROTO_PROTO_MAIN_UNK_020B60B0_H

// Prototypes of the functions defined in src/main/unk_020b60b0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "game/TouchPicker.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL__ZN15TouchPickResultC2Ev
void TouchPickResult_ctorBase(void);
#endif
#ifndef PROTO_LOCAL__ZN15TouchPickResultD2Ev
void TouchPickResult_dtorBase(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TouchPick_Cast
void TouchPick_Cast(TouchPicker *self, s32 sx, s32 sy, u8 flag);
#endif
#ifndef PROTO_LOCAL_TouchPick_GetGroundPos
BOOL TouchPick_GetGroundPos(VecFx32 *obj, VecFx32 *out);
#endif
}
#endif

#endif
