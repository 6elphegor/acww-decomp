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
u16 data_021c3c88;
}

extern "C" {
extern u32 data_021c3c8c;
}

extern "C" {
extern u8 data_021ed168[];
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
extern "C" void func_02040208(u32 id);
extern "C" void func_020401d4(Unk_0203fe18_Date *d, s32 n);
extern "C" BOOL func_02040188(Unk_0203fe18_B4 d);
extern "C" void func_02040144(u32 x, s32 flag);
extern "C" BOOL func_020400f8(Unk_0203fe18_B4 d);
extern "C" BOOL func_020400b0(u32 id);
extern "C" void func_02040078(Unk_0203ff50_Slot *s);
extern "C" void func_02040050(Unk_0203ff50_Slot *s);

extern "C" void func_02040208(u32 id) {
    if (id >= 0x3e && id < 0x46) {
        Unk_0203ff20_Entry *e = EventWeekSlots_GetToday((Unk_0203ff50_Slot *)data_021ed168);
        if (e) {
            if (id == e->unk_02) e->unk_04 = 1;
        }
    }
}

extern "C" void func_020401d4(Unk_0203fe18_Date *d, s32 n) {
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

extern "C" BOOL func_02040188(Unk_0203fe18_B4 d) {
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

extern "C" void func_02040144(u32 x, s32 flag) {
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
        func_020401d4(&d, x);
        g->b0 = d.b3;
        g->b1 = d.b4;
        g->b2 = d.b5;
    }
}

extern "C" BOOL func_020400f8(Unk_0203fe18_B4 d) {
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

extern "C" BOOL func_020400b0(u32 id) {
    u8 *g = gSaveData;
    BOOL r = FALSE;
    s32 o = id ? 0x15e2a : 0x15e2a;
    if (id == g[o]) {
        s32 n = PlayerData_GetCurrentIndex();
        if (n == 7) {
            if (data_021c3c88 == 0xff) r = TRUE;
        } else if (((data_021c3c88 >> n) & 1) != 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_02040078(Unk_0203ff50_Slot *s) {
    s32 r4 = Clock_GetWeekday();
    Unk_0203ff20_Entry *e = EventWeekSlots_GetToday(s);
    if (e) {
        u8 t = e->unk_02;
        if (r4 != s->unk_13 || t != s->unk_12) {
            s->unk_12 = t;
            s->unk_13 = r4;
        }
        func_02040050(s);
    }
}

extern "C" void func_02040050(Unk_0203ff50_Slot *s) {
    Unk_0203ff20_Entry *e;
    data_021c3c88 = 0xff;
    e = EventWeekSlots_GetToday((Unk_0203ff50_Slot *)data_021ed168);
    if (e) data_021c3c88 = e->unk_05;
}

