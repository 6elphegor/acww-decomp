#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020F44F0_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020F44F0_H

// Prototypes of the functions defined in src/autoload_2/unk_020f44f0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct Ramp;
#ifndef __cplusplus
typedef struct Ramp Ramp;
#endif
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "snd/PlayCtx.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Snd_DistanceToVolume
s32 Snd_DistanceToVolume(s32 x);
#endif
#ifndef PROTO_LOCAL_Snd_CalcDepthVolumes
void Snd_CalcDepthVolumes(s32 z, s32 *a, s32 *b);
#endif
#ifndef PROTO_LOCAL_Snd_SetUnusedFlag
void Snd_SetUnusedFlag(u8 v);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Snd_ListenerDistanceCallback
s32 Snd_ListenerDistanceCallback(PlayCtx *p);
#endif
#ifndef PROTO_LOCAL_Snd_ListenerVolumeCallback
s32 Snd_ListenerVolumeCallback(PlayCtx *p);
#endif
#ifndef PROTO_LOCAL_Snd_CalcPan
s32 Snd_CalcPan(VecFx32 *p, s32 m);
#endif
#ifndef PROTO_LOCAL_Snd_ListenerPanCallback
s32 Snd_ListenerPanCallback(PlayCtx *p);
#endif
#ifndef PROTO_LOCAL_SndVolumeCurve_Clear
void SndVolumeCurve_Clear(Ramp *r);
#endif
#ifndef PROTO_LOCAL_SndVolumeCurve_Set
void SndVolumeCurve_Set(Ramp *r, s32 v);
#endif
#ifndef PROTO_LOCAL_SndVolumeCurve_Eval
s32 SndVolumeCurve_Eval(Ramp *r, s32 x);
#endif
#ifndef PROTO_LOCAL_Snd_GetVolumeCurve
Ramp *Snd_GetVolumeCurve(void);
#endif
}
#ifndef PROTO_LOCAL_gSndVolumeCurve
extern Ramp gSndVolumeCurve;
#endif
#ifndef PROTO_LOCAL_data_021f5bfc
extern u8 data_021f5bfc;
#endif
#ifndef PROTO_LOCAL_data_021f5c00
extern s32 data_021f5c00;
#endif
#ifndef PROTO_LOCAL_data_021f5c08
extern s32 data_021f5c08;
#endif
#ifndef PROTO_LOCAL_data_021f5c04
extern s32 data_021f5c04;
#endif
#endif

#endif
