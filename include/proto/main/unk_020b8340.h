#ifndef PROTO_PROTO_MAIN_UNK_020B8340_H
#define PROTO_PROTO_MAIN_UNK_020B8340_H

// Prototypes of the functions defined in src/main/unk_020b8340.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "sys/ListNode.h"
#ifdef __cplusplus
#include "gfx/VramTask.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_VramQueueTex_Init
void VramQueueTex_Init(void);
#endif
#ifndef PROTO_LOCAL_VramQueueTex_Run
void VramQueueTex_Run(void);
#endif
#ifndef PROTO_LOCAL_VramQueue2d_Init
void VramQueue2d_Init(void);
#endif
#ifndef PROTO_LOCAL_VramQueue2d_Run
void VramQueue2d_Run(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_VramQueue2d_Enqueue
BOOL VramQueue2d_Enqueue(VramTask *p);
#endif
#ifndef PROTO_LOCAL_VramQueue2d_Dequeue
void VramQueue2d_Dequeue(VramTask *p);
#endif
}
#ifndef PROTO_LOCAL_sVramQueueTex
extern List sVramQueueTex;
#endif
#ifndef PROTO_LOCAL_sVramQueue2d
extern List sVramQueue2d;
#endif
#endif

#endif
