#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203fe18_Date { u8 b0, b1, b2, b3, b4, b5, b6, b7; };
struct Unk_0203fe18_B4Bytes { u8 b0, b1, b2, b3; };
union Unk_0203fe18_B4 { u32 w; Unk_0203fe18_B4Bytes b; };
struct Unk_0203fe18_B3 { u8 b0, b1, b2; };
struct Unk_020400b0_Big { u8 pad[0x15e28]; u8 unk_15e28; u8 unk_15e29; u8 unk_15e2a; };
struct Unk_0203ff20_Entry { u16 unk_00; u8 unk_02, unk_03, unk_04, unk_05; };
struct Unk_0203ff50_Slot { u8 pad[0x10]; u8 unk_10, unk_11; u8 unk_12, unk_13; Unk_0203ff20_Entry ent[5]; long long unk_34; };
class ReddPassword {
public:
    BOOL dropPassword();
    s32 pickPassword();
};
class ReddShop {
public:
    ReddPassword *getPassword();
};
struct Unk_020d96fc_G { u8 b0, b1, b2, b3; };

class EventCalendarModule : public GameProc {
public:
    EventCalendarModule() {}
    virtual BOOL vfunc_0c();
};

extern "C" {
extern u8 gSaveData[];
}

extern "C" {
extern u16 data_021c3c88;
}

extern "C" {
u32 data_021c3c8c;
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
extern u32 data_020c9060[];
}

extern "C" {
extern u32 data_020c907c[];
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
s32 func_0203f14c(void);
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
s32 func_02063b8c(s32);
}

extern "C" {
s32 func_02040754(void*, void*, s32);
}

extern "C" {
s32 func_02040778(void*, void*, s32);
}

extern "C" {
s32 func_020407a8(void*, void*, void*);
}

extern "C" {
Unk_0203ff20_Entry* EventWeekSlots_Get(Unk_0203ff50_Slot*, s32);
}

extern "C" {
s32 func_02040234(Unk_0203ff50_Slot*, u32);
}

extern "C" {
Unk_0203ff20_Entry* EventWeekSlots_GetToday(Unk_0203ff50_Slot*);
}

extern "C" {
void func_02040050(Unk_0203ff50_Slot*);
}

extern "C" {
void func_02040078(Unk_0203ff50_Slot*);
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
void func_02040684(Unk_0203ff50_Slot*);
}

extern "C" {
s32 func_020406c4(Unk_0203ff50_Slot*, u8*);
}

extern "C" {
void func_02040410(Unk_0203ff50_Slot*);
}

extern "C" {
void func_020404ac(Unk_0203ff50_Slot*, s32*, s32*, Unk_0203fe18_Date*);
}

extern "C" {
void func_0204056c(Unk_0203ff50_Slot*, s32*, s32*, Unk_0203fe18_Date*);
}

extern "C" {
void func_020405f4(Unk_0203ff50_Slot*, s32*, s32*, u8*, Unk_0203fe18_Date*);
}

extern "C" {
void func_020402f8(Unk_0203ff50_Slot*, s32);
}

extern "C" {
void func_020401d4(Unk_0203fe18_Date*, s32);
}

extern "C" {
BOOL func_020400f8(Unk_0203fe18_B4);
}

#define SLOT ((Unk_0203ff50_Slot *)(gSaveData + 0x15e18))

// prototypes
extern "C" void func_02040684(Unk_0203ff50_Slot *s);
extern "C" void func_020405f4(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, u8 *a, Unk_0203fe18_Date *pd);
extern "C" void func_0204056c(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd);
extern "C" void func_020404ac(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd);
extern "C" void func_02040410(Unk_0203ff50_Slot *s);
extern "C" void func_020402f8(Unk_0203ff50_Slot *s, s32 flag);
extern "C" void func_020402e8(void);
extern "C" void func_02040264(void);
extern "C" s32 func_02040234(Unk_0203ff50_Slot *s, u32 id);

extern "C" void func_02040684(Unk_0203ff50_Slot *s) {
    Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, 1);
    s32 i;
    for (i = 0; i < 5; e++, i++) EventWeekSlot_Clear(e);
    ReddShop *p = &data_021ed2c0;
    for (i = 0; i < 1; i++) {
        p->getPassword()->dropPassword();
        p->getPassword()->pickPassword();
    }
}

extern "C" void func_020405f4(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, u8 *a, Unk_0203fe18_Date *pd) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        s32 v = 0x63;
        if (*cnt > 0) {
            s32 r6 = func_02040778(s, arr, *cnt);
            Unk_0203ff20_Entry *e;
            if (r6 >= 0) {
                v = func_020406c4(s, a);
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

extern "C" void func_0204056c(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd) {
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 2; i++) {
        s32 v = 0x63;
        if (*cnt > 0) {
            s32 r6 = func_02040778(s, arr, *cnt);
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

extern "C" void func_020404ac(Unk_0203ff50_Slot *s, s32 *arr, s32 *cnt, Unk_0203fe18_Date *pd) {
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
            if (!func_020400f8(x)) {
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

extern "C" void func_02040410(Unk_0203ff50_Slot *s) {
    volatile s32 z;
    Unk_0203fe18_Date d, c1, c2;
    u8 arr[84];
    s32 i, r6;
    ((s32*)&d)[0] = 0;
    ((s32*)&d)[1] = 0;
    i = Clock_GetWeekday();
    Clock_GetDateTime(&d);
    func_02040078(s);
    MI_CpuCopy8(&d, &c1, 8);
    EventSchedule_CollectDayAll(arr, &c1);
    Clock_GetDateTime(&d);
    r6 = i - 1;
    i = 0;
    z = 0;
    for (; i <= r6; i++) {
        Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, i + 1);
        if (e) {
            if (e->unk_02 != 0x63) {
                BOOL ok;
                MI_CpuCopy8(&d, &c2, 8);
                ok = EventDayList_GetState(e->unk_02, &c2, arr) == 0 ? TRUE : z;
                if (ok) {
                    EventWeekSlot_MarkAllPlayers(e);
                } else if (i != r6 && e->unk_02 == 0x45) {
                    EventWeekSlot_MarkAllPlayers(e);
                }
            }
        }
    }
}

extern "C" void func_020402f8(Unk_0203ff50_Slot *s, s32 flag) {
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
    data_021c3c8c = d.b2;
    DateTime_GetWeekStart(&d, &t);
    if (s->unk_34 == 0 || s->unk_34 != t || flag != 0) {
        Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, 1);
        for (i = 0; i < 5; e++, i++) a[i] = e->unk_02;
        a[5] = 0x63;
        func_02040684(s);
        MI_CpuCopy8(&t, &c1, 8);
        cnt = func_020407a8(s, arr, &c1);
        MI_CpuCopy8(&t, &c2, 8);
        func_020404ac(s, arr, &cnt, &c2);
        MI_CpuCopy8(&t, &c3, 8);
        func_020405f4(s, arr, &cnt, a, &c3);
        MI_CpuCopy8(&t, &c4, 8);
        func_0204056c(s, arr, &cnt, &c4);
        MI_CpuCopy8(&t, &s->unk_34, 8);
    }
    func_02040410(s);
    idx = func_02040234(s, 0x3d);
    if ((u32)(idx - r6) <= 1) {
        Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, idx);
        if (e) {
            if (e->unk_04 == 0) {
                ReddShop_SendPasswordLetters();
                e->unk_04 = 1;
            }
        }
    }
}

extern "C" void func_020402e8(void) {
    func_020402f8((Unk_0203ff50_Slot *)gSaveEventWeekSlots, 0);
}

extern "C" void func_02040264(void) {
    if (func_0203f14c() != 1) {
        u8 *g = gSaveData;
        Unk_0203fe18_Date d, c;
        Unk_0203ff20_Entry *e;
        u32 t;
        ((s32*)&d)[0] = 0;
        ((s32*)&d)[1] = 0;
        Clock_GetDateTime(&d);
        t = d.b2;
        if (data_021c3c8c != t) {
            data_021c3c8c = t;
            e = EventWeekSlots_GetToday((Unk_0203ff50_Slot *)(g + 0x15e18));
            if (e) {
                u32 id = e->unk_02;
                if (id != 0x63) {
                    s32 r;
                    MI_CpuCopy8(&d, &c, 8);
                    r = Event_GetStateAt(id, &c, 0);
                    switch (e->unk_03) {
                    case 0:
                        if (r == 2) e->unk_03 = 1;
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

extern "C" s32 func_02040234(Unk_0203ff50_Slot *s, u32 id) {
    s32 r = 0;
    Unk_0203ff20_Entry *e = EventWeekSlots_Get(s, 1);
    s32 i;
    for (i = 0; i < 5; e++, i++) {
        if (id == e->unk_02) {
            r = i + 1;
            break;
        }
    }
    return r;
}

