#ifndef PROTO_PROTO_AUTOLOAD_2_UNK_020EC848_H
#define PROTO_PROTO_AUTOLOAD_2_UNK_020EC848_H

// Prototypes of the functions defined in src/autoload_2/unk_020ec848.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "sys/Heap.h"
#include "sys/ProcBase.h"
#include "sys/TreeNode.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL__ZN8ProcBasedlEPv
void _ZN8ProcBasedlEPv(void *p);
#endif
#ifndef PROTO_LOCAL_Main_InitTick
void Main_InitTick(void);
#endif
#ifndef PROTO_LOCAL_Mem_FreeForDelete
void Mem_FreeForDelete(void *p);
#endif
#ifndef PROTO_LOCAL__ZdlPv
void _ZdlPv(void *p);
#endif
#ifndef PROTO_LOCAL__ZdaPv
void _ZdaPv(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL__ZN8ProcBaseC2Ev
ProcBase *_ZN8ProcBaseC2Ev(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBaseD0Ev
ProcBase *_ZN8ProcBaseD0Ev(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBaseD2Ev
void _ZN8ProcBaseD2Ev(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase8onCreateEv
BOOL _ZN8ProcBase8onCreateEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase9preCreateEv
BOOL _ZN8ProcBase9preCreateEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase10postCreateEi
void _ZN8ProcBase10postCreateEi(ProcBase *self, s32 a);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase8onDeleteEv
BOOL _ZN8ProcBase8onDeleteEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase9preDeleteEv
BOOL _ZN8ProcBase9preDeleteEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase10postDeleteEv
void _ZN8ProcBase10postDeleteEv(ProcBase *self, s32 a);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase15onDeleteRequestEv
BOOL _ZN8ProcBase15onDeleteRequestEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL_ProcBase_SetHeap
void ProcBase_SetHeap(ProcBase *self, Heap *heap);
#endif
#ifndef PROTO_LOCAL_ProcBase_RequestDelete
void ProcBase_RequestDelete(ProcBase *self);
#endif
#ifndef PROTO_LOCAL_ProcBase_GetParent
ProcBase *ProcBase_GetParent(ProcBase *self);
#endif
#ifndef PROTO_LOCAL_ProcBase_SetExecutePriority
void ProcBase_SetExecutePriority(ProcBase *self, u16 v);
#endif
#ifndef PROTO_LOCAL_ProcBase_SetDrawPriority
void ProcBase_SetDrawPriority(ProcBase *self, u16 v);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase16createHeapFittedEv
BOOL _ZN8ProcBase16createHeapFittedEv(ProcBase *self, u32 size, Heap *parent);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase10createHeapEv
BOOL _ZN8ProcBase10createHeapEv(ProcBase *self, u32 size, Heap *parent);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase14allocResourcesEv
BOOL _ZN8ProcBase14allocResourcesEv(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBasenwEm
void *_ZN8ProcBasenwEm(u32 size);
#endif
#ifndef PROTO_LOCAL_ProcBase_StartCreate
void ProcBase_StartCreate(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase10taskCreateEv
void ProcBase_taskCreate(ProcBase *self);
#endif
#ifndef PROTO_LOCAL__ZN8ProcBase10taskDeleteEv
u32 ProcBase_taskDelete(ProcBase *self);
#endif
#ifndef PROTO_LOCAL_ProcBase_HasCreatingChild
BOOL ProcBase_HasCreatingChild(ProcBase *self);
#endif
#ifndef PROTO_LOCAL_Proc_SetCreateParams
void Proc_SetCreateParams(u32 a, TreeNode *parent, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Proc_Create
ProcBase *Proc_Create(u32 a, TreeNode *parent, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Proc_CallCreateHook
u32 Proc_CallCreateHook(u32 a);
#endif
#ifndef PROTO_LOCAL_Proc_CallDeleteHook
void Proc_CallDeleteHook(u32 a);
#endif
#ifndef PROTO_LOCAL_Proc_CreateChild
ProcBase *Proc_CreateChild(u32 a, ProcBase *parent, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Proc_CreateRoot
ProcBase *Proc_CreateRoot(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_Mem_AllocForNew
void *Mem_AllocForNew(u32 size);
#endif
#ifndef PROTO_LOCAL__Znwm
void *_Znwm(u32 size);
#endif
#ifndef PROTO_LOCAL__Znam
void *_Znam(u32 size);
#endif
}
#endif

#endif
