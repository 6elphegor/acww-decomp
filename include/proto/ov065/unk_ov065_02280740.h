#ifndef PROTO_PROTO_OV065_UNK_OV065_02280740_H
#define PROTO_PROTO_OV065_UNK_OV065_02280740_H

// Prototypes of the functions defined in src/ov065/unk_ov065_02280740.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "net/gp.h"
#include "net/gpiOperation.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_gpiFailedOpCallback
s32 gpiFailedOpCallback(void *h, GPIOperation *n);
#endif
#ifndef PROTO_LOCAL_gpiAddOperation
s32 gpiAddOperation(GPConnection *h, s32 a, void *b, GPIOperation **out, s32 e, s32 f, s32 g);
#endif
#ifndef PROTO_LOCAL_gpiFindOperationByID
s32 gpiFindOperationByID(GPConnection *h, GPIOperation **out, s32 id);
#endif
#ifndef PROTO_LOCAL_gpiOperationsAreBlocking
s32 gpiOperationsAreBlocking(GPConnection *h);
#endif
#ifndef PROTO_LOCAL_gpiProcessOperation
s32 gpiProcessOperation(void *h, GPIOperation *n, char *x);
#endif
#ifndef PROTO_LOCAL_gpiIsValidDate
s32 gpiIsValidDate(s32 day, s32 mon, s32 year);
#endif
}
#endif

#endif
