#ifndef NET_WFCLOADFUNC_H
#define NET_WFCLOADFUNC_H

#include "types.h"

// ov001 Wi-Fi setup: a loader WfcUtil_LoadFileTo (src/ov001/unk_ov001_02208388.cpp) hands a loaded file to - the SDK's
// VRAM loaders (GX_LoadBG2Char, GX_LoadBGPltt, GX_LoadOBJPltt, ...: data, offset in the target, size).
typedef void (*WfcLoadFunc)(const void *src, u32 offset, u32 size);

#ifdef __cplusplus
extern "C" {
#endif
// (its definition still writes the loader as void (*)(void *, s32, u32), a file-local typedef, so its generated
// header leaves it out; same arguments)
void WfcUtil_LoadFileTo(void *path, WfcLoadFunc fn);
// (src/autoload_2: NitroSDK GX)
void GX_LoadBG2Char(const void *src, u32 offset, u32 size);
void GX_LoadBG3Char(const void *src, u32 offset, u32 size);
void GX_LoadBG2Scr(const void *src, u32 offset, u32 size);
void GX_LoadBG3Scr(const void *src, u32 offset, u32 size);
void GX_LoadBGPltt(const void *src, u32 offset, u32 size);
void GX_LoadOBJPltt(const void *src, u32 offset, u32 size);
void GX_LoadOBJ(const void *src, u32 offset, u32 size);
#ifdef __cplusplus
}
#endif

#endif
