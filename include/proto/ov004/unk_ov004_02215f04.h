#ifndef PROTO_PROTO_OV004_UNK_OV004_02215F04_H
#define PROTO_PROTO_OV004_UNK_OV004_02215F04_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02215f04.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "npc/BirthdayGuestVillager.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sBirthdayGuestVillager
extern BirthdayGuestVillager *sBirthdayGuestVillager;
#endif
#ifndef PROTO_LOCAL_data_ov004_0224c158
extern Unk_ov004_0224c228_BFn data_ov004_0224c158;
#endif
#ifndef PROTO_LOCAL_sBirthdayGuestMsgFile
extern u8 sBirthdayGuestMsgFile[0x28];
#endif
#ifndef PROTO_LOCAL_BirthdayGuestVillager_Create
BirthdayGuestVillager *BirthdayGuestVillager_Create();
#endif
#ifndef PROTO_LOCAL_BirthdayGuestVillager_Get
BirthdayGuestVillager *BirthdayGuestVillager_Get();
#endif
#ifndef PROTO_LOCAL_Room_PickRandomWalkTarget
s32 Room_PickRandomWalkTarget(VecFx32 *out, VecFx32 *in, s32 angle);
#endif
}
#endif

#endif
