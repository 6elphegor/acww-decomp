#ifndef PROTO_PROTO_OV002_UNK_OV002_022013AC_H
#define PROTO_PROTO_OV002_UNK_OV002_022013AC_H

// Prototypes of the functions defined in src/ov002/unk_ov002_022013ac.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sPopupChoicePopOffsets
extern s32 sPopupChoicePopOffsets[3];
#endif
#ifndef PROTO_LOCAL_PopupChoice_CopyPlayerIdName
void PopupChoice_CopyPlayerIdName(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PopupChoice_CopyResidentName
void PopupChoice_CopyResidentName(s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PopupChoice_CopyVillagerIdName
void PopupChoice_CopyVillagerIdName(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_PopupChoice_CopyVillagerName
void PopupChoice_CopyVillagerName(s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_PopupChoice_SetAddresseeName
void PopupChoice_SetAddresseeName(s32 unused, s32 x, u32 id);
#endif
#ifndef PROTO_LOCAL_ChoiceIdList_Add
BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_ChoiceIdList_Clear
void ChoiceIdList_Clear(u8 *p, u8 v);
#endif
#ifndef PROTO_LOCAL_ChoiceIdList_Count
s32 ChoiceIdList_Count(u8 *p);
#endif
}
#endif

#endif
