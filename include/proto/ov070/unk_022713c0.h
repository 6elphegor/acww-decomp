#ifndef PROTO_PROTO_OV070_UNK_022713C0_H
#define PROTO_PROTO_OV070_UNK_022713C0_H

// Prototypes of the functions defined in src/ov070/unk_022713c0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcGracie;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcGracie_Create
SpNpcGracie *SpNpcGracie_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcGracie_CountUnaskedQuestions
s32 SpNpcGracie_CountUnaskedQuestions(void *unused, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_SpNpcGracie_PickUnaskedQuestion
s32 SpNpcGracie_PickUnaskedQuestion(void *unused, u8 *p, s32 n);
#endif
#ifndef PROTO_LOCAL_SpNpcGracie_ScoreByPrice
u8 SpNpcGracie_ScoreByPrice(void *unused, s32 a, s32 kind);
#endif
#ifndef PROTO_LOCAL_SpNpcGracie_IsEmptyItem
BOOL SpNpcGracie_IsEmptyItem(u16 *p);
#endif
}
#endif

#endif
