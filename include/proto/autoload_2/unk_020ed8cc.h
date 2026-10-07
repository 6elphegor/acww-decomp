#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020ED8CC_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020ED8CC_H

// Prototypes of the functions defined in src/autoload_2/unk_020ed8cc.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "snd/Player.h"
#ifdef __cplusplus
#include "sys/CmdSeq.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Snd_GetHeap
void *Snd_GetHeap(void);
#endif
#ifndef PROTO_LOCAL_Snd_CaptureBufferDisposeCallback
void Snd_CaptureBufferDisposeCallback(void);
#endif
#ifndef PROTO_LOCAL_Snd_AllocCaptureBuffer
void Snd_AllocCaptureBuffer(void);
#endif
#ifndef PROTO_LOCAL_Snd_Main
void Snd_Main(void);
#endif
#ifndef PROTO_LOCAL_Snd_InitHandle
void Snd_InitHandle(void *a);
#endif
#ifndef PROTO_LOCAL_Snd_GetHeapLevel
void *Snd_GetHeapLevel(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SndSeSystem_Shutdown
void SndSeSystem_Shutdown(Player *o, s32 flag);
#endif
#ifndef PROTO_LOCAL_Snd_InitSystem
void Snd_InitSystem(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Snd_StartOutputEffect
void Snd_StartOutputEffect(u32 a);
#endif
#ifndef PROTO_LOCAL_Snd_StartSeqArcDefault
void Snd_StartSeqArcDefault(s32 a, void *b);
#endif
#ifndef PROTO_LOCAL_Snd_StartSeqArc
void Snd_StartSeqArc(s32 a, void *b, void *c);
#endif
#ifndef PROTO_LOCAL_Snd_StartSeqArcEx
void Snd_StartSeqArcEx(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
#endif
#ifndef PROTO_LOCAL_Snd_StopHandle
void Snd_StopHandle(void *a, u32 b);
#endif
#ifndef PROTO_LOCAL_Snd_LoadGroup
s32 Snd_LoadGroup(u32 a);
#endif
#ifndef PROTO_LOCAL_Snd_RestoreHeapLevel
void *Snd_RestoreHeapLevel(u32 a);
#endif
#ifndef PROTO_LOCAL_CmdSeq_Undo
void CmdSeq_Undo(CmdSeq *o);
#endif
}
#endif

#endif
