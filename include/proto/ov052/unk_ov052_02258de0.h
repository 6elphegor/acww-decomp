#ifndef PROTO_PROTO_OV052_UNK_OV052_02258DE0_H
#define PROTO_PROTO_OV052_UNK_OV052_02258DE0_H

// Prototypes of the functions defined in src/ov052/unk_ov052_02258de0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcRedd;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sSpNpcReddKey
extern char sSpNpcReddKey[];
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcRedd_Create
SpNpcRedd *SpNpcRedd_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcRedd_CountUnusedFlags
s32 SpNpcRedd_CountUnusedFlags(void *self, u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_SpNpcRedd_PickUnusedFlag
s32 SpNpcRedd_PickUnusedFlag(void *self, u8 *buf, s32 n);
#endif
#ifndef PROTO_LOCAL_SpNpcRedd_IsSoldOut
BOOL SpNpcRedd_IsSoldOut(void *self);
#endif
#ifndef PROTO_LOCAL_sSpNpcReddModelPath
extern u8 sSpNpcReddModelPath[];
#endif
#ifndef PROTO_LOCAL_sSpNpcReddTexturePath
extern u8 sSpNpcReddTexturePath[];
#endif
}
#endif

#endif
