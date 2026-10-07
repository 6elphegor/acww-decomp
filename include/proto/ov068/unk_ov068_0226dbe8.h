#ifndef PROTO_PROTO_OV068_UNK_OV068_0226DBE8_H
#define PROTO_PROTO_OV068_UNK_OV068_0226DBE8_H

// Prototypes of the functions defined in src/ov068/unk_ov068_0226dbe8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class HouseVisitVillager;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_HouseVisit_SetFinished
void HouseVisit_SetFinished(void *);
#endif
#ifndef PROTO_LOCAL_HouseVisit_SetCalled
void HouseVisit_SetCalled(void *p);
#endif
#ifndef PROTO_LOCAL_HouseVisit_SetDoorTalkDone
void HouseVisit_SetDoorTalkDone(void *p);
#endif
#ifndef PROTO_LOCAL_HouseVisit_SetFirstTalkDone
void HouseVisit_SetFirstTalkDone(void *);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_HouseVisitVillager_Create
HouseVisitVillager *HouseVisitVillager_Create();
#endif
#ifndef PROTO_LOCAL_HouseVisit_IsAppointmentNow
BOOL HouseVisit_IsAppointmentNow(void *);
#endif
#ifndef PROTO_LOCAL_HouseVisit_IsCalled
BOOL HouseVisit_IsCalled(void *);
#endif
#ifndef PROTO_LOCAL_HouseVisit_IsDoorTalkDone
BOOL HouseVisit_IsDoorTalkDone(void *);
#endif
#ifndef PROTO_LOCAL_HouseVisit_IsFirstTalkPending
BOOL HouseVisit_IsFirstTalkPending(void *);
#endif
}
#endif

#endif
