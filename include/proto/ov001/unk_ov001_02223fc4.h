#ifndef PROTO_PROTO_OV001_UNK_OV001_02223FC4_H
#define PROTO_PROTO_OV001_UNK_OV001_02223FC4_H

// Prototypes of the functions defined in src/ov001/unk_ov001_02223fc4.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_WfcFs_MountArchive
void WfcFs_MountArchive();
#endif
#ifndef PROTO_LOCAL_WfcFs_UnmountArchive
void WfcFs_UnmountArchive();
#endif
#ifndef PROTO_LOCAL_WfcFs_FreeFile
void WfcFs_FreeFile(void *p, ...);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_WfcFs_ArchiveProc
s32 WfcFs_ArchiveProc(void *self, s32 code);
#endif
#ifndef PROTO_LOCAL_WfcFs_ReadCallback
s32 WfcFs_ReadCallback(u8 *self, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_WfcFs_OnReadDone
s32 WfcFs_OnReadDone(void *a);
#endif
#ifndef PROTO_LOCAL_WfcFs_WriteCallback
BOOL WfcFs_WriteCallback();
#endif
#ifndef PROTO_LOCAL_WfcFs_LoadFile
void *WfcFs_LoadFile(void *name, u32 *outSize, s32 c);
#endif
#ifndef PROTO_LOCAL_WfcUtil_StrEndsWith
BOOL WfcUtil_StrEndsWith(void *a, void *b, s32 n);
#endif
}
#endif

#endif
