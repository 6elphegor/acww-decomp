#include "types.h"
#include "Unk_020d8c7c.h"
#include "talk/Unk_0203ebdc_List.h"
#include "game/Unk_0203ecec_Global.h"
#include "game/Unk_0203f218_Slot.h"
#include "game/Unk_0203f408_Entry.h"
#include "talk/TalkRequestEntry.h"
#include "gfx/WorldCurve.h"





struct Unk_0203ef38_Global {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ volatile s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};





extern "C" {
extern Unk_0203f218_Slot sEventSchedule[99];
}

extern "C" {
extern s32 (*sCharInteractSyncRecvFns[])(u8 *, s32);
}

extern "C" {
extern u8 data_021e87d8[];
}

extern "C" {
extern s32 gCamera;
}

extern "C" {
extern Unk_0203ecec_Global *gCurSceneInfo;
}

extern "C" {
extern s32 sWorldCurveZScale;
}

extern "C" {
extern Unk_0203ef38_Global gWorldCurve;
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern u32 gCommManager;
}

extern "C" {
extern s32 sEventsOnlineRefresh;
}

extern "C" {
extern u8 gBackup[];
}

extern "C" {
extern Unk_0203f408_Entry data_021c3bdc[7];
}

extern "C" {
extern u8 gTodayEvents[];
}

extern "C" {
s32 MI_CpuFill8(void *dst, s32 v, s32 n);
}

extern "C" {
void MI_CpuCopy8(void *src, void *dst, s32 n);
}

extern "C" {
s32 func_020e79a0(void *list, void *node);
}

extern "C" {
void _ZN6LetterC1Ev(void *p);
}

extern "C" {
void _ZN6LetterD1Ev(void *p);
}

extern "C" {
void Letter_Copy(void *p, void *q);
}

extern "C" {
void Letter_SetRecipientResident(void *p, s32 q);
}

extern "C" {
void Letter_MarkReceived(void *p);
}

extern "C" {
s32 PlayerData_GetCurrent(void);
}

extern "C" {
s32 PlayerData_GetLastWifiMailId(s32 p);
}

extern "C" {
s32 _ZN10PlayerData8getIndexEv(s32 p);
}

extern "C" {
s32 LetterDelivery_PutInMailbox(void *p, s32 a, s32 b);
}

extern "C" {
s32 PlayerData_SetLastWifiMailId(s32 p, s32 v);
}

extern "C" {
s32 _ZN8BbsBoard11getNoticeIdEv(void *p);
}

extern "C" {
s32 _ZN8BbsBoard11setNoticeIdEt(void *p, s32 v);
}

extern "C" {
s32 Bbs_AddPost(void *p);
}

extern "C" {
s32 func_0203bc7c(void);
}

extern "C" {
s32 FX_Div(s32 a, s32 b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
s32 FX_Sqrt(s32 a);
}

extern "C" {
s32 func_020e7b98(s32 a, s32 b);
}

extern "C" {
u32 WorldCurve_AngleToDistance(u32 x);
}

extern "C" {
u8 *func_02098314(s32 p);
}

extern "C" {
s32 Emotion_FindSlot(u32 id);
}

extern "C" {
s32 EmotionSlots_Get(u8 *p, s32 i);
}

extern "C" {
s32 EmotionSlots_Set(u8 *p, s32 i, u32 v);
}

extern "C" {
s32 GameStart_IsActive(void);
}

extern "C" {
s32 func_02098044(s32 p, s32 v);
}

extern "C" {
s32 func_02072e44(u32 v);
}

extern "C" {
s32 Event_RefreshToday(s32 v);
}

extern "C" {
s32 Backup_GetStatus(void *p);
}

extern "C" {
s32 Event_RefreshIfDateChanged(void *p);
}

extern "C" {
s32 EventWeekSlots_UpdateToday(s32 v);
}

extern "C" {
s32 EventWeekSlots_IsSeenToday(void);
}

extern "C" {
s32 Game_IsIntroPeriod(void);
}

extern "C" {
void EventSchedule_CollectDay(void *out, void *in, s32 v);
}

extern "C" {
s32 DateTime_DiffMinutes(void *a, void *b);
}

extern "C" {
void Clock_GetDateTime(void *a);
}

extern "C" {
s32 DateTime_DiffDays(void *a, void *b);
}

extern "C" {
u32 Date_GetWeekday(u32 v, u32 a, u32 b);
}

extern "C" {
void EventDayList_Clear(void *a, s32 n);
}

extern "C" {
s32 EventSchedule_Match(Unk_0203f408_Entry *out, Unk_0203f218_Slot *e, u32 v, Unk_0203f218_Ver w);
}

extern "C" {
s32 EventSchedule_IsBlocked(Unk_0203f218_Slot *e, Unk_0203f218_Ver w, Unk_0203f408_Entry *tmp, Unk_0203f408_Entry *out, s32 n, s32 x, s32 y);
}

extern "C" {
void Event_AdjustToDay(Unk_0203f408_Entry *tmp, Unk_0203f218_Ver w);
}

extern "C" {
s32 Event_GetStateAt(s32 a, u8 *b, s32 c);
}

extern "C" {
s32 EventDayList_GetState(s32 a, u8 *b, Unk_0203f408_Entry *c);
}

extern "C" {
Unk_0203f408_Entry *EventDayList_Find(u32 id, Unk_0203f408_Entry *tbl);
}

static inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
TalkRequestEntry sTalkRequestPool[15];

extern "C" void *AxMail_Construct(void *p) {
    _ZN6LetterC1Ev(p);
    return p;
}

extern "C" void *AxMail_Destruct(void *p) {
    _ZN6LetterD1Ev(p);
    return p;
}

extern "C" u8 *AxMail_GetDigest(u8 *p) { return p + 0xf6; }

extern "C" BOOL AxMail_Deliver(u8 *p) {
    u8 l[0xf8];
    _ZN6LetterC1Ev(l);
    s32 h = PlayerData_GetCurrent();
    if (*(u16 *)(p + 0xf4) != PlayerData_GetLastWifiMailId(h)) {
        Letter_Copy(l, p);
        s32 q = _ZN10PlayerData8getIndexEv(h);
        Letter_SetRecipientResident(l, q);
        Letter_MarkReceived(l);
        if (LetterDelivery_PutInMailbox(l, q, 0)) {
            PlayerData_SetLastWifiMailId(h, *(u16 *)(p + 0xf4));
            _ZN6LetterD1Ev(l);
            return TRUE;
        }
    }
    _ZN6LetterD1Ev(l);
    return FALSE;
}

extern "C" void AxBbsNotice_Construct(void) {}

extern "C" void AxBbsNotice_Destruct(void) {}

extern "C" u8 *AxBbsNotice_GetDigest(u8 *p) { return p + 0xc2; }

extern "C" BOOL AxBbsNotice_Post(u8 *p) {
    u8 *g = data_021e87d8;
    u32 v = *(u16 *)(p + 0xc0);
    if (v != _ZN8BbsBoard11getNoticeIdEv(g)) {
        _ZN8BbsBoard11setNoticeIdEt(g, v);
        Bbs_AddPost(p);
        return TRUE;
    }
    return FALSE;
}

TalkRequestEntry::TalkRequestEntry() {
    prev = 0;
    next = 0;
    unk_08 = 0xff;
}

extern "C" void TalkRequestEntry_Free(TalkRequestEntry *e) {
    e->inUse = 0;
    e->unk_0c = 0;
    e->unk_10 = 0;
}

extern "C" void TalkRequestList_FreeAll(Unk_0203ebdc_List *l) {
    TalkRequestEntry *p = l->head;
    while (p) {
        TalkRequestEntry *next = *(TalkRequestEntry **)((u8 *)p + 4);
        func_020e79a0(l, p);
        TalkRequestEntry_Free(p);
        p = next;
    }
}

extern "C" void TalkRequestPool_Reset(void) {
    for (s32 i = 0; i < 15; i++) {
        TalkRequestEntry_Free(&sTalkRequestPool[i]);
    }
    MI_CpuFill8(sTalkRequestPool, 0, 15);
}

extern "C" TalkRequestEntry *TalkRequestPool_Alloc(void) {
    for (s32 i = 0; i < 15; i++) {
        TalkRequestEntry *e = &sTalkRequestPool[i];
        if (IsZero(e->inUse)) {
            return e;
        }
    }
    return NULL;
}

