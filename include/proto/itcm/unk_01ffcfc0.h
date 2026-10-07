#ifndef PROTO_PROTO_ITCM_UNK_01FFCFC0_H
#define PROTO_PROTO_ITCM_UNK_01FFCFC0_H

// Prototypes of the functions defined in src/itcm/unk_01ffcfc0.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "types64.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "sys/TreeNode.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Vec_Add
void Vec_Add(VecFx32 *out, VecFx32 *a, VecFx32 *b);
#endif
#ifndef PROTO_LOCAL_Vec_DistSq
s64 Vec_DistSq(VecFx32 *a, VecFx32 *b);
#endif
#ifndef PROTO_LOCAL_TreeNode_GetNextPreOrder
TreeNode *TreeNode_GetNextPreOrder(TreeNode *n);
#endif
#ifndef PROTO_LOCAL_TreeNode_GetNextSkipChildren
TreeNode *TreeNode_GetNextSkipChildren(TreeNode *n);
#endif
}
#endif

#endif
