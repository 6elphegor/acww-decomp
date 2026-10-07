#ifndef PROTO_PROTO_MAIN_UNK_020ABEA8_H
#define PROTO_PROTO_MAIN_UNK_020ABEA8_H

// Prototypes of the functions defined in src/main/unk_020abea8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_ObjShadow_NormalizeAxes
void ObjShadow_NormalizeAxes(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_ObjShadow_Init
void ObjShadow_Init(void *arg);
#endif
#ifndef PROTO_LOCAL_ObjShadow_Update
void ObjShadow_Update();
#endif
#ifndef PROTO_LOCAL_ObjShadow_Exit
void ObjShadow_Exit();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ObjShadow_CalcAlpha
u8 ObjShadow_CalcAlpha(VecFx32 *p, s32 q, u8 r4);
#endif
#ifndef PROTO_LOCAL_ObjShadow_GetObjAlpha
u8 ObjShadow_GetObjAlpha(VecFx32 *p, s32 q);
#endif
#ifndef PROTO_LOCAL_ObjShadow_GetCharaAlpha
u8 ObjShadow_GetCharaAlpha(VecFx32 *p, s32 q);
#endif
#ifndef PROTO_LOCAL_ObjShadow_DrawTree
void ObjShadow_DrawTree(VecFx32 *p, u32 n);
#endif
#ifndef PROTO_LOCAL_ObjShadow_DrawRock
void ObjShadow_DrawRock(VecFx32 *p);
#endif
#ifndef PROTO_LOCAL_ObjShadow_DrawSign
void ObjShadow_DrawSign(VecFx32 *p);
#endif
}
#endif

#endif
