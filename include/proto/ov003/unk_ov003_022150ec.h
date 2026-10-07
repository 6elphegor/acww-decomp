#ifndef PROTO_PROTO_OV003_UNK_OV003_022150EC_H
#define PROTO_PROTO_OV003_UNK_OV003_022150EC_H

// Prototypes of the functions defined in src/ov003/unk_ov003_022150ec.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/NNSG3dRS.h"
#ifdef __cplusplus
#include "town/CountdownDigit.h"
#include "town/CountdownSign.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_CountdownSign_ModelCallback
void CountdownSign_ModelCallback(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CountdownDigit_Create
CountdownDigit *CountdownDigit_Create();
#endif
#ifndef PROTO_LOCAL_CountdownSign_Create
CountdownSign *CountdownSign_Create();
#endif
#ifndef PROTO_LOCAL_CountdownSign_SetMaterialAlpha
void CountdownSign_SetMaterialAlpha(CountdownSign *self, s32 a, NNSG3dRS *o);
#endif
}
#endif

#endif
