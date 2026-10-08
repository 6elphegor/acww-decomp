#ifndef PROTO_PROTO_OV048_UNK_OV048_02258DE0_H
#define PROTO_PROTO_OV048_UNK_OV048_02258DE0_H

// Prototypes of the functions defined in src/ov048/unk_ov048_02258de0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcCopper;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperSequence4Key
extern char sSpNpcCopperSequence4Key[];
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperModelPath
extern char sSpNpcCopperModelPath[];
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperTexturePathPtr
extern void *sSpNpcCopperTexturePathPtr;
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperMsgKey
extern void *sSpNpcCopperMsgKey;
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperKey
extern char sSpNpcCopperKey[];
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperModelPathPtr
extern void *sSpNpcCopperModelPathPtr;
#endif
#ifndef PROTO_LOCAL_sSpNpcCopperTexturePath
extern char sSpNpcCopperTexturePath[];
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcCopper_Create
SpNpcCopper *SpNpcCopper_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcCopper_ChangeAct
void SpNpcCopper_ChangeAct(SpNpcCopper *self, s32 s);
#endif
#ifndef PROTO_LOCAL_SpNpcCopper_CheckKatieEscort
BOOL SpNpcCopper_CheckKatieEscort();
#endif
}
#endif

#endif
