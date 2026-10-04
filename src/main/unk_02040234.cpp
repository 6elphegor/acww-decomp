#include "types.h"
#include "Unk_020d8c7c.h"
#include "game/Unk_020d96fc_G.h"
#include "game/Unk_0203fe18_Date.h"
#include "game/Unk_0203fe18_B4.h"
#include "game/Unk_0203ff50_Slot.h"
#include "game/Unk_020400b0_Big.h"

class ReddPassword {
public:
    BOOL dropPassword();
    s32 pickPassword();
};
class ReddShop {
public:
    ReddPassword *getPassword();
};

class EventCalendarModule : public GameProc {
public:
    EventCalendarModule() {}
    virtual BOOL vfunc_0c();
};

extern "C" {
extern u8 gSaveData[];
}

extern "C" {
extern u16 sEventWeekSeenMask;
}

extern "C" {
u32 sEventWeekLastHour;
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
extern "C" void EventWeekSlots_ClearWeek(Unk_0203ff50_Slot *s);
extern "C" void EventWeekSlots_PlaceVisitors(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, u8 *a, Unk_0203fe18_Date *pd);
extern "C" void EventWeekSlots_PlacePete(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd);
extern "C" void EventWeekSlots_PlaceRedd(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd);
extern "C" void EventWeekSlots_MarkPastDays(Unk_0203ff50_Slot *s);
extern "C" void EventWeekSlots_UpdateWeek(Unk_0203ff50_Slot *s, s32 flag);
extern "C" void EventWeekSlots_Update(void);
extern "C" void EventWeekSlots_UpdateToday(void);
extern "C" s32 EventWeekSlots_FindId(Unk_0203ff50_Slot *s, u32 id);

extern "C" void EventWeekSlots_ClearWeek(Unk_0203ff50_Slot *s) {
    Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, 1);
    s32 i;
    for (i = 0; i < 5; e++, i++) EventWeekSlot_Clear(e);
    ReddShop *p = &data_021ed2c0;
    for (i = 0; i < 1; i++) {
        p->getPassword()->dropPassword();
        p->getPassword()->pickPassword();
    }
}

extern "C" void EventWeekSlots_PlaceVisitors(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, u8 *a, Unk_0203fe18_Date *pd) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        s32 v = 0x63;
        if (*cnt > 0) {
            s32 r6 = WeekVisitors_PickFreeDay(s, arr, *cnt);
            Unk_0203ff20_Entry *e;
            if (r6 >= 0) {
                v = WeekVisitors_PickRandom(s, a);
                arr[r6] = z1;
                (*cnt)--;
            }
            e = EventWeekSlots_Get(s, r6 + 1);
            if (e) {
                Unk_0203fe18_Date d1, d2;
                ((s32*)&d1)[0] = z2;
                ((s32*)&d1)[1] = z2;
                MI_CpuCopy8(pd, &d1, 8);
                DateTime_AddDays(&d1, r6 + 1);
                MI_CpuCopy8(&d1, &d2, 8);
                EventWeekSlot_Set(e, v, &d2);
            }
        }
        a[5] = v;
    }
}

extern "C" void EventWeekSlots_PlacePete(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        s32 v = 0x63;
        if (*cnt > 0) {
            s32 r6 = WeekVisitors_PickFreeDay(s, arr, *cnt);
            Unk_0203ff20_Entry *e;
            if (r6 >= 0) {
                v = 0x45;
                arr[r6] = z1;
                (*cnt)--;
            }
            e = EventWeekSlots_Get(s, r6 + 1);
            if (e) {
                Unk_0203fe18_Date d1, d2;
                ((s32*)&d1)[0] = z2;
                ((s32*)&d1)[1] = z2;
                MI_CpuCopy8(pd, &d1, 8);
                DateTime_AddDays(&d1, r6 + 1);
                MI_CpuCopy8(&d1, &d2, 8);
                EventWeekSlot_Set(e, v, &d2);
            }
        }
    }
}

extern "C" void EventWeekSlots_PlaceRedd(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd) {
    Unk_0203fe18_B4 x;
    Unk_0203fe18_Date c, d, z, cp;
    if (*cnt > 0) {
        u8 *g = gSaveData;
        s32 o = *cnt ? 0x15e28 : 0x15e28;
        u8 r4 = g[o];
        s32 *r6 = arr - 1 + r4;
        s32 t;
        if (*r6 != 0) {
            ((s32*)&c)[0] = 0;
            ((s32*)&c)[1] = 0;
            ((s32*)&d)[0] = 0;
            ((s32*)&d)[1] = 0;
            Clock_GetDateTime(&d);
            MI_CpuCopy8(&d, &c, 8);
            t = r4 - Clock_GetWeekday();
            if (t >= 0) DateTime_AddDays(&c, t);
            else DateTime_SubDays(&c, -t);
            x.b.b3 = c.b4;
            x.b.b2 = c.b3;
            if (!EventWeek_IsInUnkWeek(x)) {
                Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, r4);
                if (e) {
                    ((s32*)&z)[0] = 0;
                    ((s32*)&z)[1] = 0;
                    *r6 = 0;
                    (*cnt)--;
                    MI_CpuCopy8(pd, &z, 8);
                    DateTime_AddDays(&z, r4);
                    MI_CpuCopy8(&z, &cp, 8);
                    EventWeekSlot_Set(e, 0x3d, &cp);
                }
            }
        }
    }
}

extern "C" void EventWeekSlots_MarkPastDays(Unk_0203ff50_Slot *s) {
    volatile s32 z;
    Unk_0203fe18_Date d, c1, c2;
    u8 arr[84];
    s32 i, r6;
    ((s32*)&d)[0] = 0;
    ((s32*)&d)[1] = 0;
    i = Clock_GetWeekday();
    Clock_GetDateTime(&d);
    EventWeekSlots_SyncToday(s);
    MI_CpuCopy8(&d, &c1, 8);
    EventSchedule_CollectDayAll(arr, &c1);
    Clock_GetDateTime(&d);
    r6 = i - 1;
    i = 0;
    z = 0;
    for (; i <= r6; i++) {
        Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, i + 1);
        if (e) {
            if (e->eventId != 0x63) {
                BOOL ok;
                MI_CpuCopy8(&d, &c2, 8);
                ok = EventDayList_GetState(e->eventId, &c2, arr) == 0 ? TRUE : z;
                if (ok) {
                    EventWeekSlot_MarkAllPlayers(e);
                } else if (i != r6 && e->eventId == 0x45) {
                    EventWeekSlot_MarkAllPlayers(e);
                }
            }
        }
    }
}

extern "C" void EventWeekSlots_UpdateWeek(Unk_0203ff50_Slot *s, s32 flag) {
    Unk_0203fe18_Date d;
    long long t;
    u8 a[6];
    s32 cnt;
    Unk_0203fe18_Date c1, c2, c3, c4;
    s32 arr[5];
    s32 r6, i, idx;
    ((s32*)&d)[0] = 0;
    ((s32*)&d)[1] = 0;
    t = 0;
    Clock_GetDateTime(&d);
    r6 = Clock_GetWeekday();
    sEventWeekLastHour = d.b2;
    DateTime_GetWeekStart(&d, &t);
    if (s->weekStart == 0 || s->weekStart != t || flag != 0) {
        Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, 1);
        for (i = 0; i < 5; e++, i++) a[i] = e->eventId;
        a[5] = 0x63;
        EventWeekSlots_ClearWeek(s);
        MI_CpuCopy8(&t, &c1, 8);
        cnt = WeekVisitors_FindFreeDays(s, arr, &c1);
        MI_CpuCopy8(&t, &c2, 8);
        EventWeekSlots_PlaceRedd(s, arr, &cnt, &c2);
        MI_CpuCopy8(&t, &c3, 8);
        EventWeekSlots_PlaceVisitors(s, arr, &cnt, a, &c3);
        MI_CpuCopy8(&t, &c4, 8);
        EventWeekSlots_PlacePete(s, arr, &cnt, &c4);
        MI_CpuCopy8(&t, &s->weekStart, 8);
    }
    EventWeekSlots_MarkPastDays(s);
    idx = EventWeekSlots_FindId(s, 0x3d);
    if ((u32)(idx - r6) <= 1) {
        Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, idx);
        if (e) {
            if (e->occurred == 0) {
                ReddShop_SendPasswordLetters();
                e->occurred = 1;
            }
        }
    }
}

extern "C" void EventWeekSlots_Update(void) {
    EventWeekSlots_UpdateWeek((Unk_0203ff50_Slot *)gSaveEventWeekSlots, 0);
}

extern "C" void EventWeekSlots_UpdateToday(void) {
    if (Game_IsIntroPeriod() != 1) {
        u8 *g = gSaveData;
        Unk_0203fe18_Date d, c;
        Unk_0203ff20_Entry *e;
        u32 t;
        ((s32*)&d)[0] = 0;
        ((s32*)&d)[1] = 0;
        Clock_GetDateTime(&d);
        t = d.b2;
        if (sEventWeekLastHour != t) {
            sEventWeekLastHour = t;
            e = EventWeekSlots_GetToday((Unk_0203ff50_Slot *)(g + 0x15e18));
            if (e) {
                u32 id = e->eventId;
                if (id != 0x63) {
                    s32 r;
                    MI_CpuCopy8(&d, &c, 8);
                    r = Event_GetStateAt(id, &c, 0);
                    switch (e->state) {
                    case 0:
                        if (r == 2) e->state = 1;
                        break;
                    case 1:
                        if (r == 0) EventWeekSlot_MarkAllPlayers(e);
                        break;
                    }
                }
            }
        }
    }
}

extern "C" s32 EventWeekSlots_FindId(Unk_0203ff50_Slot *s, u32 id) {
    s32 r = 0;
    Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, 1);
    s32 i;
    for (i = 0; i < 5; e++, i++) {
        if (id == e->eventId) {
            r = i + 1;
            break;
        }
    }
    return r;
}

