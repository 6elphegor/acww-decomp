#ifndef PROTO_PROTO_OV004_UNK_OV004_02214948_H
#define PROTO_PROTO_OV004_UNK_OV004_02214948_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02214948.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "npc/BirthdayHostVillager.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sBirthdayHostVillager
extern BirthdayHostVillager *sBirthdayHostVillager;
#endif
#ifndef PROTO_LOCAL_BirthdayHostVillager_Create
BirthdayHostVillager *BirthdayHostVillager_Create();
#endif
#ifndef PROTO_LOCAL_BirthdayHostVillager_Get
BirthdayHostVillager *BirthdayHostVillager_Get();
#endif
#ifndef PROTO_LOCAL_BirthdayHostVillager_HasReceivedGift
BOOL BirthdayHostVillager_HasReceivedGift();
#endif
#ifndef PROTO_LOCAL_BirthdayHost_GiftFilter
BOOL BirthdayHost_GiftFilter(u16 *p, s32 flag);
#endif
#ifndef PROTO_LOCAL_data_ov004_0224befc
extern Unk_ov004_0224c034_Fn data_ov004_0224befc;
#endif
#ifndef PROTO_LOCAL_sBirthdayHostMsgFile
extern u8 sBirthdayHostMsgFile[0x28];
#endif
#ifndef PROTO_LOCAL_BirthdayHost_PickReturnGift
u16 BirthdayHost_PickReturnGift(s32 n);
#endif
}
#endif

#endif
