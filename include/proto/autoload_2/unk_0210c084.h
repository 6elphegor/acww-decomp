#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_0210C084_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_0210C084_H

// Prototypes of the functions defined in src/autoload_2/unk_0210c084.c (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_data_02135e80
extern const s8 data_02135e80[16];
#endif
#ifndef PROTO_LOCAL_data_02135e90
extern const s16 data_02135e90[89];
#endif
#ifndef PROTO_LOCAL_StrmThreadProc
void StrmThreadProc(u8 *obj);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcPlayerSetup
BOOL NNS_SndArcPlayerSetup(void *heap);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcPlayerStartSeq
u32 NNS_SndArcPlayerStartSeq(u32 handle, u32 seqNo);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcPlayerStartSeqArc
u32 NNS_SndArcPlayerStartSeqArc(u32 handle, u32 arcNo, u32 idx);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcPlayerStartSeqArcEx
u32 NNS_SndArcPlayerStartSeqArcEx(u32 handle, s32 player, s32 bank, s32 prio, u32 arcNo, u32 idx);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcLoadGroup
BOOL NNS_SndArcLoadGroup(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcLoadSeqArc
BOOL NNS_SndArcLoadSeqArc(u32 id, u32 heap);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcLoadBank
BOOL NNS_SndArcLoadBank(u32 id, u32 heap);
#endif
#ifndef PROTO_LOCAL_NNS_SndArcLoadWaveArc
BOOL NNS_SndArcLoadWaveArc(u32 id, u32 heap);
#endif
#ifndef PROTO_LOCAL_NNSi_SndArcLoadGroup
u32 NNSi_SndArcLoadGroup(u32 grp, u32 heap);
#endif
#ifndef PROTO_LOCAL_NNSi_SndArcLoadSeq
u32 NNSi_SndArcLoadSeq(u32 id, u32 flags, u32 heap, u32 flag, u32 *out);
#endif
#ifndef PROTO_LOCAL_NNSi_SndArcLoadSeqArc
u32 NNSi_SndArcLoadSeqArc(u32 id, u32 flags, u32 heap, u32 flag, u32 *out);
#endif
#ifndef PROTO_LOCAL_NNSi_SndArcLoadBank
u32 NNSi_SndArcLoadBank(u32 id, u32 flags, u32 heap, u32 flag, u32 *out);
#endif
#ifndef PROTO_LOCAL_NNSi_SndArcLoadWaveArc
u32 NNSi_SndArcLoadWaveArc(u32 id, u32 flags, u32 heap, u32 flag, u32 *out);
#endif
#ifndef PROTO_LOCAL_NNSi_SndArcLoadFile
u32 NNSi_SndArcLoadFile(u32 file, void *cb, u32 arg1, u32 arg2, u32 heap);
#endif
#ifndef PROTO_LOCAL_LoadSeq
u32 LoadSeq(u32 file, u32 heap, u32 flag);
#endif
#ifndef PROTO_LOCAL_LoadSeqArc
u32 LoadSeqArc(u32 file, u32 heap, u32 flag);
#endif
#ifndef PROTO_LOCAL_LoadBank
u32 LoadBank(u32 file, u32 heap, u32 flag);
#endif
#ifndef PROTO_LOCAL_LoadWaveArc
u32 LoadWaveArc(u32 file, u32 heap, u32 flag);
#endif
#ifndef PROTO_LOCAL_LoadWaveArcTable
u32 LoadWaveArcTable(u32 file, u32 heap, u32 flag);
#endif
#ifndef PROTO_LOCAL_DisposeCallback
void DisposeCallback(u32 mem, u32 arc, u32 idx);
#endif
#ifndef PROTO_LOCAL_SeqDisposeCallback
void SeqDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx);
#endif
#ifndef PROTO_LOCAL_BankDisposeCallback
void BankDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx);
#endif
#ifndef PROTO_LOCAL_WaveArcDisposeCallback
void WaveArcDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx);
#endif
#ifndef PROTO_LOCAL_WaveArcTableDisposeCallback
void WaveArcTableDisposeCallback(u32 mem, u32 size, u32 arc, u32 idx);
#endif
#ifndef PROTO_LOCAL_SingleWaveDisposeCallback
void SingleWaveDisposeCallback(u32 mem, u32 size, u32 base, u32 idx);
#endif
#ifndef PROTO_LOCAL_LoadSingleWave
u32 LoadSingleWave(u8 *wa, u32 idx, u32 file, u32 heap);
#endif
#ifndef PROTO_LOCAL_LoadSingleWaves
u32 LoadSingleWaves(u32 wa, u32 bank, u32 arcNo, u32 file, u32 heap);
#endif
}
#endif

#endif
