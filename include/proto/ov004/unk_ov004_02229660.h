#ifndef PROTO_PROTO_OV004_UNK_OV004_02229660_H
#define PROTO_PROTO_OV004_UNK_OV004_02229660_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02229660.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "room/RoomTelephone.h"
#include "room/RoomTelephoneActEntry.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_sRoomTelephoneMsgFile2
extern char sRoomTelephoneMsgFile2[];
#endif
#ifndef PROTO_LOCAL_sRoomTelephoneArcPath
extern char sRoomTelephoneArcPath[];
#endif
#ifndef PROTO_LOCAL_sRoomTelephoneTexPath
extern char sRoomTelephoneTexPath[];
#endif
#ifndef PROTO_LOCAL_RoomTelephone_PlayAnimHold
void RoomTelephone_PlayAnimHold();
#endif
#ifndef PROTO_LOCAL_RoomTelephone_PlayAnimHangUp
void RoomTelephone_PlayAnimHangUp();
#endif
#ifndef PROTO_LOCAL_RoomTelephone_PlayAnimPickUp
void RoomTelephone_PlayAnimPickUp();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sRoomTelephoneActTable
extern RoomTelephoneActEntry sRoomTelephoneActTable[15];
#endif
#ifndef PROTO_LOCAL_data_ov004_0224e16c
extern u8 data_ov004_0224e16c[2];
#endif
#ifndef PROTO_LOCAL_data_ov004_0224e170
extern u8 data_ov004_0224e170[3];
#endif
#ifndef PROTO_LOCAL_data_ov004_0224e174
extern u8 data_ov004_0224e174[4];
#endif
#ifndef PROTO_LOCAL_sRoomTelephone
extern RoomTelephone *volatile sRoomTelephone;
#endif
#ifndef PROTO_LOCAL_RoomTelephone_StartAct0A
BOOL RoomTelephone_StartAct0A();
#endif
#ifndef PROTO_LOCAL_RoomTelephone_IsTalking
BOOL RoomTelephone_IsTalking();
#endif
#ifndef PROTO_LOCAL_RoomTelephone_GetInstance
RoomTelephone *RoomTelephone_GetInstance();
#endif
#ifndef PROTO_LOCAL_RoomTelephone_Create
RoomTelephone *RoomTelephone_Create();
#endif
}
#endif

#endif
