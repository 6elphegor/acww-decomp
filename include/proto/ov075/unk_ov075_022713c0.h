#ifndef PROTO_PROTO_OV075_UNK_OV075_022713C0_H
#define PROTO_PROTO_OV075_UNK_OV075_022713C0_H

// Prototypes of the functions defined in src/ov075/unk_ov075_022713c0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcPete;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcPete_Create
SpNpcPete *SpNpcPete_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcPete_ChangeAct
void SpNpcPete_ChangeAct(void *self, s32 state);
#endif
#ifndef PROTO_LOCAL_SpNpcPete_IsInFocusBox
s32 SpNpcPete_IsInFocusBox(void *self, void *a, void *b);
#endif
}
#endif

#endif
