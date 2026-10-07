#ifndef PROTO_PROTO_MAIN_UNK_02065330_H
#define PROTO_PROTO_MAIN_UNK_02065330_H

// Prototypes of the functions defined in src/main/unk_02065330.cpp (generated: tools/host_protos.py)

#include "types.h"
struct LetterDefaults;
#ifdef __cplusplus
#include "item/LetterView.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Letter_Copy
LetterView *Letter_Copy(LetterView *self, const LetterView *src);
#endif
#ifndef PROTO_LOCAL_LetterParty_GetNameBytes
void LetterParty_GetNameBytes(LetterParty *self, void *out);
#endif
#ifndef PROTO_LOCAL_LetterParty_GetName
void LetterParty_GetName(LetterParty *self, void *out);
#endif
#ifndef PROTO_LOCAL_LetterParty_AsPlayer
LetterParty *LetterParty_AsPlayer(LetterParty *self);
#endif
#ifndef PROTO_LOCAL_LetterParty_AsVillager
LetterParty *LetterParty_AsVillager(LetterParty *self);
#endif
#ifndef PROTO_LOCAL_LetterParty_SetVillager
void LetterParty_SetVillager(LetterParty *self, void *src);
#endif
#ifndef PROTO_LOCAL_LetterParty_SetPlayer
void LetterParty_SetPlayer(LetterParty *self, void *src);
#endif
#ifndef PROTO_LOCAL_LetterParty_SetFutureSelf
void LetterParty_SetFutureSelf(LetterParty *self, void *src);
#endif
#ifndef PROTO_LOCAL_LetterParty_SetBottle
void LetterParty_SetBottle(LetterParty *self);
#endif
#ifndef PROTO_LOCAL_LetterParty_SetType
void LetterParty_SetType(LetterParty *self, u32 v);
#endif
#ifndef PROTO_LOCAL_LetterParty_IsType
u32 LetterParty_IsType(LetterParty *self, u32 t);
#endif
#ifndef PROTO_LOCAL_Letter_Clear
void Letter_Clear(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_GetPaper
u32 Letter_GetPaper(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_InitDraft
void Letter_InitDraft(LetterView *self, u32 v);
#endif
#ifndef PROTO_LOCAL_Letter_InitBottleDraft
void Letter_InitBottleDraft(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_SetRecipientVillager
void Letter_SetRecipientVillager(LetterView *self, s32 idx);
#endif
#ifndef PROTO_LOCAL_Letter_SetRecipientResident
void Letter_SetRecipientResident(LetterView *self, s32 idx);
#endif
#ifndef PROTO_LOCAL_Letter_SetRecipientFutureSelf
void Letter_SetRecipientFutureSelf(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_MarkSent
void Letter_MarkSent(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_MarkRead
void Letter_MarkRead(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_MarkReceived
void Letter_MarkReceived(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_SetTexts
void Letter_SetTexts(LetterView *self, s32 *pv, void *a, void *b, void *c);
#endif
#ifndef PROTO_LOCAL_Letter_FillFromVillager
void Letter_FillFromVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
#endif
#ifndef PROTO_LOCAL_Letter_ComposeVillagerMail
void Letter_ComposeVillagerMail(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, s32 a6);
#endif
#ifndef PROTO_LOCAL_Letter_ComposeVillagerMailZ
void Letter_ComposeVillagerMailZ(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9);
#endif
#ifndef PROTO_LOCAL_Letter_FillVillagerToVillager
void Letter_FillVillagerToVillager(LetterView *self, void *a, void *b, void *c, s32 v, u8 *ped, void *s1, void *s2);
#endif
#ifndef PROTO_LOCAL_Letter_ComposeVillagerToVillagerZ
void Letter_ComposeVillagerToVillagerZ(LetterView *self, void *a1, void *a2, void *a3, void *a4, void *a5, u8 *a6, void *a7, void *a8, s32 a9);
#endif
#ifndef PROTO_LOCAL_Letter_FillSystemMail
void Letter_FillSystemMail(LetterView *self, void *a, void *b, void *c, s32 v, u8 *pef, u8 *ped, void *obj);
#endif
#ifndef PROTO_LOCAL_Letter_ComposeFromMail
void Letter_ComposeFromMail(LetterView *self, void *a, void *b, u8 *pef, u8 *ped, void *obj);
#endif
#ifndef PROTO_LOCAL_Letter_FillBottleMail
void Letter_FillBottleMail(LetterView *self, void *a, void *b, void *c, s32 v);
#endif
#ifndef PROTO_LOCAL_Letter_ComposeBottleMail
void Letter_ComposeBottleMail(LetterView *self, void *a, void *b);
#endif
#ifndef PROTO_LOCAL_Letter_GetSenderPlayer
LetterParty *Letter_GetSenderPlayer(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_GetRecipientPlayer
LetterParty *Letter_GetRecipientPlayer(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_GetRecipientVillager
LetterParty *Letter_GetRecipientVillager(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_GetSenderNameBytes
void Letter_GetSenderNameBytes(LetterView *self, void *out);
#endif
#ifndef PROTO_LOCAL_Letter_GetRecipientNameBytes
void Letter_GetRecipientNameBytes(LetterView *self, void *out);
#endif
#ifndef PROTO_LOCAL_Letter_GetKind
u32 Letter_GetKind(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_GetSenderName
void Letter_GetSenderName(LetterView *self, void *out);
#endif
#ifndef PROTO_LOCAL_Letter_GetRecipientName
void Letter_GetRecipientName(LetterView *self, void *out);
#endif
#ifndef PROTO_LOCAL_Letter_IsBottle
u32 Letter_IsBottle(LetterView *self);
#endif
#ifndef PROTO_LOCAL_Letter_SetSignature
void Letter_SetSignature(LetterView *o, u8 *p);
#endif
#ifndef PROTO_LOCAL_LetterDefaults_Store
void LetterDefaults_Store(LetterDefaults *a, LetterView *b);
#endif
#ifndef PROTO_LOCAL_Letter_LoadTemplate2d
void Letter_LoadTemplate2d(u8 *code, u8 *dst, u8 *lenOut, u8 *extra);
#endif
}
#endif

#endif
