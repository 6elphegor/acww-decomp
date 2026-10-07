#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020F4A5C_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020F4A5C_H

// Prototypes of the functions defined in src/autoload_2/unk_020f4a5c.cpp (generated: tools/host_protos.py)

#include "types.h"
struct Ctl2;
struct Obj;
struct Seq1;
struct Seq2;
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL__ZN11MelodyTrackD1Ev
Obj *MelodyTrack_dtor(Obj *self);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_Stop
void MelodyTrack_Stop(void *p);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_Construct
void MelodyBeat_Construct(void);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_Destruct
void MelodyBeat_Destruct(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_MelodyTrack_Start
void MelodyTrack_Start(Seq2 *self, u16 id, u8 *pat);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_StartPattern
void MelodyTrack_StartPattern(Seq2 *self, u8 *pat);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_PlayNote
void MelodyTrack_PlayNote(Seq2 *self, u32 idx);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_SetInstrument
void MelodyTrack_SetInstrument(Seq2 *s, u16 v);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_GetStepNote
u8 MelodyTrack_GetStepNote(Seq2 *self, u8 idx);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_CheckEnd
BOOL MelodyTrack_CheckEnd(Seq2 *self);
#endif
#ifndef PROTO_LOCAL_MelodyTrack_Update
s32 MelodyTrack_Update(Seq2 *self);
#endif
#ifndef PROTO_LOCAL_Melody_GetDefaultPattern
u8 *Melody_GetDefaultPattern(void);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_SetPattern
void MelodyPlayer_SetPattern(Ctl2 *c, u8 *src);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_GetPattern
u8 *MelodyPlayer_GetPattern(Ctl2 *c);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_PlayPattern
void MelodyPlayer_PlayPattern(Ctl2 *c, u32 v, u8 *pat);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_Play
void MelodyPlayer_Play(Ctl2 *c, u32 v);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_PlayRandom
void MelodyPlayer_PlayRandom(Ctl2 *c, u32 v);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_ApplyRandomPattern
u8 *MelodyPlayer_ApplyRandomPattern(Ctl2 *c);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_PlayAt
void MelodyPlayer_PlayAt(Ctl2 *c, VecFx32 *pos, u32 mode);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_PlayNote
void MelodyPlayer_PlayNote(Ctl2 *c, u32 idx);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_Update
s32 MelodyPlayer_Update(Ctl2 *c);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_IsPlaying
u8 MelodyPlayer_IsPlaying(Ctl2 *c);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_SetInstrument
void MelodyPlayer_SetInstrument(Seq2 *s, u16 v);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_LoadBank
void MelodyPlayer_LoadBank(void *c, u32 id);
#endif
#ifndef PROTO_LOCAL_MelodyPlayer_LoadSeqArc
void MelodyPlayer_LoadSeqArc(void *c, u32 id);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_Start
void MelodyBeat_Start(Seq1 *self, u16 id);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_Update
void MelodyBeat_Update(Seq1 *self, VecFx32 *pos);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_PlayStep
void MelodyBeat_PlayStep(Seq1 *self, VecFx32 *pos);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_EndStep
BOOL MelodyBeat_EndStep(Seq1 *self);
#endif
#ifndef PROTO_LOCAL_MelodyBeat_ApplyPosition
void MelodyBeat_ApplyPosition(void *obj, VecFx32 *pos);
#endif
}
#endif

#endif
