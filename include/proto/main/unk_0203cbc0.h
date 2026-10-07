#ifndef PROTO_PROTO_MAIN_UNK_0203CBC0_H
#define PROTO_PROTO_MAIN_UNK_0203CBC0_H

// Prototypes of the functions defined in src/main/unk_0203cbc0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "talk/MsgString.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Main_PreTaskStub
void Main_PreTaskStub(void);
#endif
#ifndef PROTO_LOCAL_Main_PostTaskStub
void Main_PostTaskStub(void);
#endif
#ifndef PROTO_LOCAL_ScreenLayers_AcquireStub
void ScreenLayers_AcquireStub(void);
#endif
#ifndef PROTO_LOCAL_ScreenLayers_ReleaseStub
void ScreenLayers_ReleaseStub(void);
#endif
#ifndef PROTO_LOCAL_Scene_PostCreateStub
void Scene_PostCreateStub(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Stub_ReturnFalse
s32 Stub_ReturnFalse(void);
#endif
#ifndef PROTO_LOCAL_MailText_LoadLetter
BOOL MailText_LoadLetter(MsgString *a, MsgString *b, MsgString *c, u32 *d, const u8 *e, const char *f);
#endif
#ifndef PROTO_LOCAL_MailText_LoadLetterZ
BOOL MailText_LoadLetterZ(MsgString *a, MsgString *b, MsgString *c, u32 *d, u8 *e1, u8 *e2, u8 *e3, u8 *e4, const char *name);
#endif
#ifndef PROTO_LOCAL_MailText_LoadBbs
BOOL MailText_LoadBbs(MsgString *a, u8 *p, const char *name);
#endif
#ifndef PROTO_LOCAL_MailText_SetSlot
s32 MailText_SetSlot(s32 i, void *x);
#endif
#ifndef PROTO_LOCAL_MailText_SetSlotMonth
void MailText_SetSlotMonth(s32 i, s32 x);
#endif
#ifndef PROTO_LOCAL_MailText_SetSlotDayOrdinal
void MailText_SetSlotDayOrdinal(s32 i, s32 x);
#endif
}
#endif

#endif
