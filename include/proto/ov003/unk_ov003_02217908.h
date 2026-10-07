#ifndef PROTO_PROTO_OV003_UNK_OV003_02217908_H
#define PROTO_PROTO_OV003_UNK_OV003_02217908_H

// Prototypes of the functions defined in src/ov003/unk_ov003_02217908.cpp (generated: tools/host_protos.py)

#include "types.h"
struct GroundSoundSrc;
#ifdef __cplusplus
#include "gfx/Model.h"
#include "gfx/VecFx32.h"
#include "snd/SndEnvChannel.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_FieldGround_EndSoundSrc
void FieldGround_EndSoundSrc();
#endif
#ifndef PROTO_LOCAL_FieldGround_InitEnvChannel
void FieldGround_InitEnvChannel(void *volatile *p);
#endif
#ifndef PROTO_LOCAL_FieldGround_DestroyEnvChannel
void FieldGround_DestroyEnvChannel();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FieldGround_DrawBackdrop
BOOL FieldGround_DrawBackdrop(Model *p);
#endif
#ifndef PROTO_LOCAL_FieldGround_ReleaseBackdrop
BOOL FieldGround_ReleaseBackdrop(Model *p);
#endif
#ifndef PROTO_LOCAL_FieldGround_GetBlockAcre
void *FieldGround_GetBlockAcre(GroundSoundSrc *r, u32 x, u32 y);
#endif
#ifndef PROTO_LOCAL_FieldGround_GetBlockBgObjects
void *FieldGround_GetBlockBgObjects(GroundSoundSrc *r, u32 x, u32 y);
#endif
#ifndef PROTO_LOCAL_FieldGround_FindSoundSrc
GroundSoundSrc *FieldGround_FindSoundSrc(GroundSoundSrc *out, VecFx32 *pos);
#endif
#ifndef PROTO_LOCAL_FieldGround_ConsiderSoundSrc
BOOL FieldGround_ConsiderSoundSrc(GroundSoundSrc *r, s32 d, VecFx32 *p, s32 k);
#endif
#ifndef PROTO_LOCAL_FieldGround_GetSoundSrcPos
s32 *FieldGround_GetSoundSrcPos(GroundSoundSrc *r);
#endif
#ifndef PROTO_LOCAL_FieldGround_GetSoundSrcKind
s32 FieldGround_GetSoundSrcKind(GroundSoundSrc *r);
#endif
#ifndef PROTO_LOCAL_FieldGround_ResetEnvChannel
void FieldGround_ResetEnvChannel(SndEnvChannel *p);
#endif
#ifndef PROTO_LOCAL_FieldGround_PlayEnvSe
void FieldGround_PlayEnvSe(SndEnvChannel *p, VecFx32 *v, void *a);
#endif
#ifndef PROTO_LOCAL_FieldGround_ReleaseEnvChannel
void FieldGround_ReleaseEnvChannel(SndEnvChannel *p);
#endif
}
#endif

#endif
