#ifndef PROTO_PROTO_MAIN_UNK_02036C58_H
#define PROTO_PROTO_MAIN_UNK_02036C58_H

// Prototypes of the functions defined in src/main/unk_02036c58.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_BgModel_LoadFile
void *BgModel_LoadFile(void *a, void *b);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_BgModel_GetGrassType
s32 BgModel_GetGrassType(void *);
#endif
#ifndef PROTO_LOCAL_BgModel_LoadBcl
void *BgModel_LoadBcl(s32 id, void *heap);
#endif
#ifndef PROTO_LOCAL_BgMgt_GetCount
s32 BgMgt_GetCount(s16 *p);
#endif
#ifndef PROTO_LOCAL_BgModelCache_Get
u8 *BgModelCache_Get(void);
#endif
}
#ifndef PROTO_LOCAL_BgMgt_GetEntry
VecFx32 BgMgt_GetEntry(u8 *base, s32 idx);
#endif
#endif

#endif
