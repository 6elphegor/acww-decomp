#ifndef PROTO_PROTO_OV003_UNK_OV003_0222E5E0_H
#define PROTO_PROTO_OV003_UNK_OV003_0222E5E0_H

// Prototypes of the functions defined in src/ov003/unk_ov003_0222e5e0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL__ZN13InsectNetSyncC2Ev
void _ZN13InsectNetSyncC2Ev();
#endif
#ifndef PROTO_LOCAL__ZN13InsectNetSyncD2Ev
void _ZN13InsectNetSyncD2Ev();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_InsectNetSync_Set
BOOL InsectNetSync_Set(s32 unused, s32 idx, s32 v, s32 *p, u8 e, s32 f);
#endif
#ifndef PROTO_LOCAL_InsectNetSync_PackVar
void InsectNetSync_PackVar(void *dst, s32 idx);
#endif
#ifndef PROTO_LOCAL_InsectNetSync_Get
BOOL InsectNetSync_Get(s32 a, s32 b, s8 *c, s32 *d, s32 *e, u8 *f);
#endif
}
#endif

#endif
