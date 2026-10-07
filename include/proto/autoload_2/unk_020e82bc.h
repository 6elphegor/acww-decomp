#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020E82BC_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020E82BC_H

// Prototypes of the functions defined in src/autoload_2/unk_020e82bc.cpp (generated: tools/host_protos.py)

#include "types.h"
struct MtxFx43;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Mtx43_Translate
void Mtx43_Translate(MtxFx43 *m, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_Mtx43_Scale
void Mtx43_Scale(MtxFx43 *m, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_Mtx43_RotateXYZ
void Mtx43_RotateXYZ(MtxFx43 *m, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_Mtx43_RotateX
void Mtx43_RotateX(MtxFx43 *m, s32 angle);
#endif
#ifndef PROTO_LOCAL_Mtx43_RotateY
void Mtx43_RotateY(MtxFx43 *m, s32 angle);
#endif
#ifndef PROTO_LOCAL_Mtx43_RotateZ
void Mtx43_RotateZ(MtxFx43 *m, s32 angle);
#endif
#ifndef PROTO_LOCAL_Mtx43_SetTranslate
void Mtx43_SetTranslate(MtxFx43 *m, s32 x, s32 y, s32 z);
#endif
#ifndef PROTO_LOCAL_Mtx43_SetRotX
void Mtx43_SetRotX(MtxFx43 *m, s32 angle);
#endif
#ifndef PROTO_LOCAL_Mtx43_SetRotY
void Mtx43_SetRotY(MtxFx43 *m, s32 angle);
#endif
#ifndef PROTO_LOCAL_Mtx43_SetRotZ
void Mtx43_SetRotZ(MtxFx43 *m, s32 angle);
#endif
}
#endif

#endif
