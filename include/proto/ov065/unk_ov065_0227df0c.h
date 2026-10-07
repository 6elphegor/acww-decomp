#ifndef PROTO_PROTO_OV065_UNK_OV065_0227DF0C_H
#define PROTO_PROTO_OV065_UNK_OV065_0227DF0C_H

// Prototypes of the functions defined in src/ov065/unk_ov065_0227df0c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/gp.h"
#include "net/gpiCallback.h"
#include "net/gpiOperation.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gpiAddCallback
s32 gpiAddCallback(GPConnection *h, GPICallbackCopy p, GPICallbackData *m, GPIOperation *g, s32 k);
#endif
#ifndef PROTO_LOCAL_gpiCallCallback
s32 gpiCallCallback(GPConnection *h, GPICallbackData *n);
#endif
#ifndef PROTO_LOCAL_gpiProcessCallbacks
s32 gpiProcessCallbacks(GPConnection *h, void *key);
#endif
}
#endif

#endif
