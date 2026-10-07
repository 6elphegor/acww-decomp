#ifndef PROTO_PROTO_MAIN_UNK_02037734_H
#define PROTO_PROTO_MAIN_UNK_02037734_H

// Prototypes of the functions defined in src/main/unk_02037734.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Comm_SetShutdownErrorFlag
void Comm_SetShutdownErrorFlag();
#endif
#ifndef PROTO_LOCAL_CommCaution_SaveErrorCode
void CommCaution_SaveErrorCode();
#endif
#ifndef PROTO_LOCAL_CommCaution_CopyString
void CommCaution_CopyString(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_CommCaution_Init
void CommCaution_Init();
#endif
#ifndef PROTO_LOCAL_CommCaution_Release
void CommCaution_Release();
#endif
#ifndef PROTO_LOCAL_CommCaution_Draw
void CommCaution_Draw();
#endif
#ifndef PROTO_LOCAL_CommCaution_UpdateBlendRegs
void CommCaution_UpdateBlendRegs();
#endif
#ifndef PROTO_LOCAL_CommCaution_LoadMessages
void CommCaution_LoadMessages();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CommCaution_FormatErrorCode
u8 *CommCaution_FormatErrorCode();
#endif
#ifndef PROTO_LOCAL_CommCaution_ArePlanesHidden
u8 CommCaution_ArePlanesHidden();
#endif
#ifndef PROTO_LOCAL_CommCaution_IsShutDown
BOOL CommCaution_IsShutDown();
#endif
#ifndef PROTO_LOCAL_CommCaution_Update
void CommCaution_Update(u8 a);
#endif
}
#endif

#endif
