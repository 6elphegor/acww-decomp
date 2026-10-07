#ifndef PROTO_PROTO_MAIN_UNK_020ABEA8_H
#define PROTO_PROTO_MAIN_UNK_020ABEA8_H

// Prototypes of the functions defined in src/main/unk_020abea8.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/ObjShadowTexture.h"
#ifdef __cplusplus
#include "gfx/ObjShadowStrip.h"
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
#ifndef PROTO_LOCAL_sObjShadowTexNameFc
extern char sObjShadowTexNameFc[];
#endif
#ifndef PROTO_LOCAL_sTreeShadowStage2
extern ObjShadowStrip sTreeShadowStage2;
#endif
#ifndef PROTO_LOCAL_sObjShadowTextures
extern ObjShadowTexture sObjShadowTextures[3];
#endif
#ifndef PROTO_LOCAL_sObjShadowAlpha
extern u8 sObjShadowAlpha;
#endif
#ifndef PROTO_LOCAL_sTreeShadowStage3
extern ObjShadowStrip sTreeShadowStage3;
#endif
#ifndef PROTO_LOCAL_sTreeShadowStage4
extern ObjShadowStrip sTreeShadowStage4;
#endif
#ifndef PROTO_LOCAL_sRockShadow
extern ObjShadowStrip sRockShadow;
#endif
#ifndef PROTO_LOCAL_sSignShadow
extern ObjShadowStrip sSignShadow;
#endif
#ifndef PROTO_LOCAL_sObjShadowTexNameTr
extern char sObjShadowTexNameTr[];
#endif
#ifndef PROTO_LOCAL_sObjShadowTexNameGr
extern char sObjShadowTexNameGr[];
#endif
#ifndef PROTO_LOCAL_sObjShadowSkew
extern s32 sObjShadowSkew;
#endif
#ifndef PROTO_LOCAL_sCharaShadowAlpha
extern u8 sCharaShadowAlpha;
#endif
#ifndef PROTO_LOCAL_sObjShadowNormMtx
extern u8 sObjShadowNormMtx[0x24];
#endif
#ifndef PROTO_LOCAL_sObjShadowViewMtx
extern u8 sObjShadowViewMtx[0x30];
#endif
#endif

#endif
