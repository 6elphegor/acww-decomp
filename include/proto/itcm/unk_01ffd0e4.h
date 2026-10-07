#ifndef PROTO_PROTO_ITCM_UNK_01FFD0E4_H
#define PROTO_PROTO_ITCM_UNK_01FFD0E4_H

// Prototypes of the functions defined in src/itcm/unk_01ffd0e4.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "sys/ProcBase.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL__ZN8ProcBase9onExecuteEv
BOOL _ZN8ProcBase9onExecuteEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase10preExecuteEv
BOOL _ZN8ProcBase10preExecuteEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase11postExecuteEv
BOOL _ZN8ProcBase11postExecuteEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase6onDrawEv
BOOL _ZN8ProcBase6onDrawEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase7preDrawEv
BOOL _ZN8ProcBase7preDrawEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase8postDrawEv
BOOL _ZN8ProcBase8postDrawEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase11taskConnectEv
BOOL ProcBase_taskConnect(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase11taskExecuteEv
s32 ProcBase_taskExecute(ProcBase *p);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase8taskDrawEv
s32 ProcBase_taskDraw(ProcBase *p);
#endif
}
#endif

#endif
