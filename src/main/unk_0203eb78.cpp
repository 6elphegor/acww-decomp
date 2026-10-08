#include "uptr.h"
#include "item/Letter.h"
#include "types.h"
#include "Unk_020d8c7c.h"
#include "talk/TalkRequestList.h"
#include "game/SceneInfo.h"
#include "game/EventScheduleRule.h"
#include "game/EventDayEntry.h"
#include "talk/TalkRequestEntry.h"
#include "gfx/WorldCurve.h"
#include "player/PlayerData.h"
#include "save/BbsBoard.h"
#define PROTO_LOCAL_LetterDelivery_PutInMailbox  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_Copy  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_MarkReceived  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Letter_SetRecipientResident  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_0203eb78.h"
#include "proto/main/unk_0203ecec.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_0209eb94.h"










extern "C" {
extern EventScheduleRule sEventSchedule[99];
}

extern "C" {
}

extern "C" {
extern u8 data_021e87d8[];
}

extern "C" {
extern s32 gCamera;
}

extern "C" {
extern SceneInfo *gCurSceneInfo;
}

extern "C" {
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
extern EventDayEntry data_021c3bdc[7];
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
s32 List_Remove(void *list, void *node);
}

extern "C" {
}

extern "C" {
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
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 LetterDelivery_PutInMailbox(void *p, s32 a, s32 b);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
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
s32 Math_Atan2(s32 a, s32 b);
}

extern "C" {
}

extern "C" {
u8 *func_02098314(s32 p);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
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
s32 EventSchedule_Match(EventDayEntry *out, EventScheduleRule *e, u32 v, Unk_0203f218_Ver w);
}

extern "C" {
s32 EventSchedule_IsBlocked(EventScheduleRule *e, Unk_0203f218_Ver w, EventDayEntry *tmp, EventDayEntry *out, s32 n, s32 x, s32 y);
}

extern "C" {
void Event_AdjustToDay(EventDayEntry *tmp, Unk_0203f218_Ver w);
}

extern "C" {
s32 Event_GetStateAt(s32 a, u8 *b, s32 c);
}

extern "C" {
s32 EventDayList_GetState(s32 a, u8 *b, EventDayEntry *c);
}

extern "C" {
EventDayEntry *EventDayList_Find(u32 id, EventDayEntry *tbl);
}

static inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
TalkRequestEntry sTalkRequestPool[15];

extern "C" void *AxMail_Construct(void *p) {
    new (p) Letter();
    return p;
}

extern "C" void *AxMail_Destruct(void *p) {
    ((Letter *)(p))->Letter::~Letter();
    return p;
}

extern "C" u8 *AxMail_GetDigest(u8 *p) { return p + 0xf6; }

extern "C" BOOL AxMail_Deliver(u8 *p) {
    u8 l[HOST_SIZED(0xf8, Letter) / 1] HOST_ALIGN8;
    new (l) Letter();
    PlayerData *h = PlayerData_GetCurrent();
    if (*(u16 *)(p + 0xf4) != PlayerData_GetLastWifiMailId(h)) {
        Letter_Copy(l, p);
        s32 q = h->getIndex();
        Letter_SetRecipientResident(l, q);
        Letter_MarkReceived(l);
        if (LetterDelivery_PutInMailbox(l, q, 0)) {
            PlayerData_SetLastWifiMailId(h, *(u16 *)(p + 0xf4));
            ((Letter *)(l))->Letter::~Letter();
            return TRUE;
        }
    }
    ((Letter *)(l))->Letter::~Letter();
    return FALSE;
}

extern "C" void AxBbsNotice_Construct(void) {}

extern "C" void AxBbsNotice_Destruct(void) {}

extern "C" u8 *AxBbsNotice_GetDigest(u8 *p) { return p + 0xc2; }

extern "C" BOOL AxBbsNotice_Post(u8 *p) {
    u8 *g = data_021e87d8;
    u32 v = *(u16 *)(p + 0xc0);
    if (v != ((BbsBoard *)(g))->getNoticeId()) {
        ((BbsBoard *)(g))->setNoticeId(v);
        Bbs_AddPost(p);
        return TRUE;
    }
    return FALSE;
}

TalkRequestEntry::TalkRequestEntry() {
    prev = 0;
    next = 0;
    priority = 0xff;
}

extern "C" void TalkRequestEntry_Free(TalkRequestEntry *e) {
    e->phase = 0;
    e->requesterId = 0;
    e->targetId = 0;
}

extern "C" void TalkRequestList_FreeAll(TalkRequestList *l) {
    TalkRequestEntry *p = l->head;
    while (p) {
        TalkRequestEntry *next = *(TalkRequestEntry **)(HOST_AT(p, 4, next, 0));
        List_Remove(l, p);
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
        if (IsZero(e->phase)) {
            return e;
        }
    }
    return NULL;
}

