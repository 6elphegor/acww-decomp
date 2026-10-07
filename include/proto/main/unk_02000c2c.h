#ifndef PROTO_PROTO_MAIN_UNK_02000C2C_H
#define PROTO_PROTO_MAIN_UNK_02000C2C_H

// Prototypes of the functions defined in src/main/unk_02000c2c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Fatal_Panic
void Fatal_Panic(const char *fmt, ...);
#endif
#ifndef PROTO_LOCAL_CrashScreen_DrawStack
void CrashScreen_DrawStack(void);
#endif
#ifndef PROTO_LOCAL_CrashScreen_DrawMain
void CrashScreen_DrawMain(void);
#endif
#ifndef PROTO_LOCAL_CrashScreen_Clear
void CrashScreen_Clear(void);
#endif
#ifndef PROTO_LOCAL_CrashScreen_InitDisplay
void CrashScreen_InitDisplay(void);
#endif
#ifndef PROTO_LOCAL_CrashScreen_WaitVBlank
void CrashScreen_WaitVBlank(void);
#endif
#ifndef PROTO_LOCAL_CrashScreen_Frame
void CrashScreen_Frame(void);
#endif
#ifndef PROTO_LOCAL_CrashScreen_Run
void CrashScreen_Run(void);
#endif
#ifndef PROTO_LOCAL_FxVec3_Construct
void FxVec3_Construct(void);
#endif
#ifndef PROTO_LOCAL__ZN6FxVec3D1Ev
void _ZN6FxVec3D1Ev(void *);
#endif
#ifndef PROTO_LOCAL_NitroMain
void NitroMain(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Fatal_PanicV
void Fatal_PanicV(const char *a, u32 b, const char *c, void *d);
#endif
#ifndef PROTO_LOCAL_CrashScreen_IsValidAddress
BOOL CrashScreen_IsValidAddress(u32 addr, u32 len);
#endif
#ifndef PROTO_LOCAL_CrashScreen_DumpWords
void CrashScreen_DumpWords(u8 *dst, u32 src, u32 size);
#endif
#ifndef PROTO_LOCAL_CrashScreen_Fill
void CrashScreen_Fill(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_LitCedarPos_Construct
void LitCedarPos_Construct(u32 *p);
#endif
}
#endif

#endif
