#include "types.h"
#include "Unk_020d8c7c.h"
#include "game/Unk_020d96fc_G.h"
#include "game/Unk_0203fe18_Date.h"
#include "game/Unk_0203fe18_B4.h"
#include "game/Unk_0203ff50_Slot.h"
#include "game/Unk_020400b0_Big.h"
#include "game/ReddPassword.h"
#include "game/ReddShop.h"
#include "game/EventCalendarModule.h"



extern "C" {
extern u8 gSaveData[];
}

extern "C" {
u16 sEventWeekSeenMask;
}

extern "C" {
extern u32 sEventWeekLastHour;
}

extern "C" {
extern u8 gSaveEventWeekSlots[];
}

extern "C" {
extern u8 data_021ed174[];
}

extern "C" {
extern Unk_020d96fc_G data_021ed170;
}

extern "C" {
extern ReddShop data_021ed2c0;
}

extern "C" {
extern u32 sWeekVisitorWeights[];
}

extern "C" {
extern u32 sWeekVisitorIds[];
}

extern "C" {
s32 DateTime_AddDays(Unk_0203fe18_Date*, s32);
}

extern "C" {
s32 DateTime_SubDays(Unk_0203fe18_Date*, s32);
}

extern "C" {
void Clock_GetDateTime(Unk_0203fe18_Date*);
}

extern "C" {
s32 Clock_GetWeekday(void);
}

extern "C" {
s32 Date_DaysBetween(Unk_0203fe18_B3*, u8*);
}

extern "C" {
void DateTime_GetWeekStart(Unk_0203fe18_Date*, long long*);
}

extern "C" {
s32 PlayerData_GetCurrentIndex(void);
}

extern "C" {
void MI_CpuCopy8(const void*, void*, u32);
}

extern "C" {
s32 Game_IsIntroPeriod(void);
}

extern "C" {
s32 Event_GetStateAt(u32, Unk_0203fe18_Date*, s32);
}

extern "C" {
s32 EventDayList_GetState(u32, Unk_0203fe18_Date*, void*);
}

extern "C" {
s32 EventSchedule_CollectDayAll(void*, Unk_0203fe18_Date*);
}

extern "C" {
s32 ReddShop_SendPasswordLetters(void);
}

extern "C" {
s32 Random_GlobalBelow(s32);
}

extern "C" {
s32 WeekVisitors_ListContains(void*, void*, s32);
}

extern "C" {
s32 WeekVisitors_PickFreeDay(void*, void*, s32);
}

extern "C" {
s32 WeekVisitors_FindFreeDays(void*, void*, void*);
}

extern "C" {
Unk_0203ff20_Entry* EventWeekSlots_Get(Unk_0203ff50_Slot*, s32);
}

extern "C" {
s32 EventWeekSlots_FindId(Unk_0203ff50_Slot*, u32);
}

extern "C" {
Unk_0203ff20_Entry* EventWeekSlots_GetToday(Unk_0203ff50_Slot*);
}

extern "C" {
void EventWeekSlots_RefreshSeenMask(Unk_0203ff50_Slot*);
}

extern "C" {
void EventWeekSlots_SyncToday(Unk_0203ff50_Slot*);
}

extern "C" {
void EventWeekSlot_MarkAllPlayers(Unk_0203ff20_Entry*);
}

extern "C" {
void EventWeekSlot_Clear(Unk_0203ff20_Entry*);
}

extern "C" {
void EventWeekSlot_Set(Unk_0203ff20_Entry*, u8, Unk_0203fe18_Date*);
}

extern "C" {
void EventWeekSlots_ClearWeek(Unk_0203ff50_Slot*);
}

extern "C" {
s32 WeekVisitors_PickRandom(Unk_0203ff50_Slot*, u8*);
}

extern "C" {
void EventWeekSlots_MarkPastDays(Unk_0203ff50_Slot*);
}

extern "C" {
void EventWeekSlots_PlaceRedd(Unk_0203ff50_Slot*, s32*, s32*, Unk_0203fe18_Date*);
}

extern "C" {
void EventWeekSlots_PlacePete(Unk_0203ff50_Slot*, s32*, s32*, Unk_0203fe18_Date*);
}

extern "C" {
void EventWeekSlots_PlaceVisitors(Unk_0203ff50_Slot*, s32*, s32*, u8*, Unk_0203fe18_Date*);
}

extern "C" {
void EventWeekSlots_UpdateWeek(Unk_0203ff50_Slot*, s32);
}

extern "C" {
void Date_GetWeekBoundary(Unk_0203fe18_Date*, s32);
}

extern "C" {
BOOL EventWeek_IsInUnkWeek(Unk_0203fe18_B4);
}

#define SLOT ((Unk_0203ff50_Slot *)(gSaveData + 0x15e18))

// prototypes
extern "C" void EventWeekSlots_MarkTodaySeen(u32 id);
extern "C" void Date_GetWeekBoundary(Unk_0203fe18_Date *d, s32 n);
extern "C" BOOL EventWeek_IsInLyleWeek(Unk_0203fe18_B4 d);
extern "C" void EventWeek_SetLyleWeek(u32 x, s32 flag);
extern "C" BOOL EventWeek_IsInUnkWeek(Unk_0203fe18_B4 d);
extern "C" BOOL EventWeekSlots_IsSeenToday(u32 id);
extern "C" void EventWeekSlots_SyncToday(Unk_0203ff50_Slot *s);
extern "C" void EventWeekSlots_RefreshSeenMask(Unk_0203ff50_Slot *s);

extern "C" void EventWeekSlots_MarkTodaySeen(u32 id) {
    if (id >= 0x3e && id < 0x46) {
        Unk_0203ff20_Entry *e = EventWeekSlots_GetToday((Unk_0203ff50_Slot *)gSaveEventWeekSlots);
        if (e) {
            if (id == e->eventId) e->occurred = 1;
        }
    }
}

extern "C" void Date_GetWeekBoundary(Unk_0203fe18_Date *d, s32 n) {
    Clock_GetDateTime(d);
    if (n == 1) {
        s32 t = Clock_GetWeekday() + 1;
        DateTime_SubDays(d, t);
    }
    else {
        s32 t = 7 - Clock_GetWeekday();
        DateTime_AddDays(d, t);
    }
}

extern "C" BOOL EventWeek_IsInLyleWeek(Unk_0203fe18_B4 d) {
    BOOL r = FALSE;
    u8 b3 = d.b.b3;
    u8 b2 = d.b.b2;
    u8 *g = (u8 *)&data_021ed170;
    u8 c = g[2];
    if (c != 0 || g[1] != 1 || g[0] != 1) {
        Unk_0203fe18_B3 t;
        s32 n;
        t.b2 = c;
        t.b1 = b3;
        t.b0 = b2;
        n = Date_DaysBetween(&t, g);
        if (n >= 0 && n < 7) r = TRUE;
    }
    return r;
}

extern "C" void EventWeek_SetLyleWeek(u32 x, s32 flag) {
    Unk_020d96fc_G *g = &data_021ed170;
    if (flag == 0) {
        g->b0 = 1;
        g->b1 = 1;
        g->b2 = 0;
        g->b3 = 0;
    } else {
        Unk_0203fe18_Date d;
        ((s32*)&d)[0] = 0;
        ((s32*)&d)[1] = 0;
        Date_GetWeekBoundary(&d, x);
        g->b0 = d.b3;
        g->b1 = d.b4;
        g->b2 = d.b5;
    }
}

extern "C" BOOL EventWeek_IsInUnkWeek(Unk_0203fe18_B4 d) {
    BOOL r = FALSE;
    u8 b3 = d.b.b3;
    u8 b2 = d.b.b2;
    u8 *g = data_021ed174;
    u8 c = g[2];
    if (c != 0 || g[1] != 1 || g[0] != 1) {
        Unk_0203fe18_B3 t;
        s32 n;
        t.b2 = c;
        t.b1 = b3;
        t.b0 = b2;
        n = Date_DaysBetween(&t, g);
        if (n >= 0 && n < 7) r = TRUE;
    }
    return r;
}

extern "C" BOOL EventWeekSlots_IsSeenToday(u32 id) {
    u8 *g = gSaveData;
    BOOL r = FALSE;
    s32 o = id ? 0x15e2a : 0x15e2a;
    if (id == g[o]) {
        s32 n = PlayerData_GetCurrentIndex();
        if (n == 7) {
            if (sEventWeekSeenMask == 0xff) r = TRUE;
        } else if (((sEventWeekSeenMask >> n) & 1) != 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void EventWeekSlots_SyncToday(Unk_0203ff50_Slot *s) {
    s32 r4 = Clock_GetWeekday();
    Unk_0203ff20_Entry *e = EventWeekSlots_GetToday(s);
    if (e) {
        u8 t = e->eventId;
        if (r4 != s->todayWeekday || t != s->todayEventId) {
            s->todayEventId = t;
            s->todayWeekday = r4;
        }
        EventWeekSlots_RefreshSeenMask(s);
    }
}

extern "C" void EventWeekSlots_RefreshSeenMask(Unk_0203ff50_Slot *s) {
    Unk_0203ff20_Entry *e;
    sEventWeekSeenMask = 0xff;
    e = EventWeekSlots_GetToday((Unk_0203ff50_Slot *)gSaveEventWeekSlots);
    if (e) sEventWeekSeenMask = e->playerMask;
}

