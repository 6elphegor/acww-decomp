#ifndef PROTO_PROTO_MAIN_UNK_02063F3C_H
#define PROTO_PROTO_MAIN_UNK_02063F3C_H

// Prototypes of the functions defined in src/main/unk_02063f3c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "ds_stdarg.h"
#include "nitro/fs.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_File_OpenOrPanic
void File_OpenOrPanic(void *file, const char *path);
#endif
#ifndef PROTO_LOCAL_File_LoadF
void *File_LoadF(const char *fmt, ...);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_File_LoadOverlayEx
BOOL File_LoadOverlayEx(s32 target, u32 id);
#endif
#ifndef PROTO_LOCAL_File_Open
BOOL File_Open(void *file, const char *path);
#endif
#ifndef PROTO_LOCAL_File_LoadAlloc
void *File_LoadAlloc(u32 path, void *heap, s32 align, u32 *outSize);
#endif
#ifndef PROTO_LOCAL_File_Load
void *File_Load(u32 a);
#endif
#ifndef PROTO_LOCAL_File_LoadToBuffer
s32 File_LoadToBuffer(const char *buf, void *a, u32 b);
#endif
#ifndef PROTO_LOCAL_File_ReadAll
s32 File_ReadAll(FSFile *f, void *dst, u32 n);
#endif
#ifndef PROTO_LOCAL_File_LoadAllocV
s32 File_LoadAllocV(s32 a, s32 b, s32 c, const char *fmt, va_list va);
#endif
#ifndef PROTO_LOCAL_File_LoadAllocF
void *File_LoadAllocF(s32 a, s32 b, const char *fmt, ...);
#endif
#ifndef PROTO_LOCAL_File_LoadToBufferF
s32 File_LoadToBufferF(u32 a, u32 b, const char *fmt, ...);
#endif
#ifndef PROTO_LOCAL_File_GetDecodedSize
s32 File_GetDecodedSize(FSFile *f);
#endif
#ifndef PROTO_LOCAL_File_GetDecodedSizeByPath
s32 File_GetDecodedSizeByPath(u32 a);
#endif
}
#endif

#endif
