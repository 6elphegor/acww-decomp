#ifndef PROTO_PROTO_MAIN_UNK_0206D4A4_H
#define PROTO_PROTO_MAIN_UNK_0206D4A4_H

// Prototypes of the functions defined in src/main/unk_0206d4a4.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/DebugColor.h"
#include "sys/OSThread.h"
#ifdef __cplusplus
#include "game/Random.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Main_RunWifiUtility
void Main_RunWifiUtility(void);
#endif
#ifndef PROTO_LOCAL_Fatal_Handler
void Fatal_Handler(void *arg);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Main_DwcAlloc
void *Main_DwcAlloc(u32 a, void *p, u32 n);
#endif
#ifndef PROTO_LOCAL_Main_DwcFree
void Main_DwcFree(u32 a, void *p);
#endif
#ifndef PROTO_LOCAL_Main_PxiSendWordRetry
void Main_PxiSendWordRetry(s32 a, s32 b);
#endif
}
#ifndef PROTO_LOCAL_data_021cb3d8
extern DebugColor data_021cb3d8 (31, 20, 20, 31);
#endif
#ifndef PROTO_LOCAL_sFatalEntered
extern u8 sFatalEntered;
#endif
#ifndef PROTO_LOCAL_data_021cb3e0
extern DebugColor data_021cb3e0 (20, 20, 31, 31);
#endif
#ifndef PROTO_LOCAL_sVBlankCount
extern s32 sVBlankCount;
#endif
#ifndef PROTO_LOCAL_data_021cb3c8
extern DebugColor data_021cb3c8 (31, 31, 20, 31);
#endif
#ifndef PROTO_LOCAL_gFrameWaitQueue
extern OSThreadQueue gFrameWaitQueue;
#endif
#ifndef PROTO_LOCAL_data_021cb3c4
extern DebugColor data_021cb3c4 (20, 31, 20, 31);
#endif
#ifndef PROTO_LOCAL_data_021cb3cc
extern DebugColor data_021cb3cc (20, 31, 31, 31);
#endif
#ifndef PROTO_LOCAL_data_021cb3d0
extern DebugColor data_021cb3d0 (20, 24, 24, 31);
#endif
#ifndef PROTO_LOCAL_gVBlankQueue
extern OSThreadQueue gVBlankQueue;
#endif
#ifndef PROTO_LOCAL_data_021cb3d4
extern Random data_021cb3d4;
#endif
#ifndef PROTO_LOCAL_sVBlankReady
extern u8 sVBlankReady;
#endif
#ifndef PROTO_LOCAL_gMainWaitingFrame
extern u16 gMainWaitingFrame;
#endif
#endif

#endif
