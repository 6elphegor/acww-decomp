#ifndef PROTO_PROTO_MAIN_UNK_02087E70_H
#define PROTO_PROTO_MAIN_UNK_02087E70_H

// Prototypes of the functions defined in src/main/unk_02087e70.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "nitro/gxoam.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Oam_LoadBuffers
void Oam_LoadBuffers();
#endif
#ifndef PROTO_LOCAL_Oam_FlushBuffers
void Oam_FlushBuffers();
#endif
#ifndef PROTO_LOCAL_Oam_ResetBuffers
void Oam_ResetBuffers();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_BugNet_HitTest
BOOL BugNet_HitTest(void *a, void *b, s32 rad, u8 *out);
#endif
#ifndef PROTO_LOCAL_Oam_DrawObj
s32 Oam_DrawObj(s32 mode, u32 *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
#endif
#ifndef PROTO_LOCAL_Oam_DrawObjRotated
GXOamAttr *Oam_DrawObjRotated(u32 mode, GXOamAttr *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 scale, s32 rot, s32 sz);
#endif
#ifndef PROTO_LOCAL_Oam_DrawCell
void Oam_DrawCell(u32 mode, GXOamAttr *e, s32 dx, s32 dy, s32 pal, s32 pri, s32 sx, s32 sy, s32 rot, s32 sz, s32 fx, s32 fy);
#endif
}
#endif

#endif
