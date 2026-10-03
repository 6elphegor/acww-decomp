#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203eb78_Entry {
    Unk_0203eb78_Entry();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09[3];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15[7];
};

struct Unk_0203ebdc_List {
    /* 0x00 */ Unk_0203eb78_Entry *head;
};

struct WorldCurve {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s16 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_0203ecec_Global {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u8 unk_04;
};

struct Unk_0203ef38_Global {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ volatile s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_0203f408_Entry {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

union Unk_0203f218_Ver {
    u32 word;
    u8 b[4];
};

struct Unk_0203f218_Date {
    u8 b[8];
};

struct Unk_0203f218_Slot {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u8 unk_04[0x18];
};

extern "C" {
extern Unk_0203f218_Slot sEventSchedule[99];
}

extern "C" {
extern s32 (*data_020d96d4[])(u8 *, s32);
}

extern "C" {
extern u8 data_021e87d8[];
}

extern "C" {
extern s32 gCamera;
}

extern "C" {
extern Unk_0203ecec_Global *data_021ef2f0;
}

extern "C" {
extern s32 data_021c3b94;
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
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_02065ba4(void *p, s32 q);
}

extern "C" {
void func_02065ac0(void *p);
}

extern "C" {
s32 PlayerData_GetCurrent(void);
}

extern "C" {
s32 func_02097980(s32 p);
}

extern "C" {
s32 _ZN10PlayerData8getIndexEv(s32 p);
}

extern "C" {
s32 LetterDelivery_PutInMailbox(void *p, s32 a, s32 b);
}

extern "C" {
s32 func_02097954(s32 p, s32 v);
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
u32 func_0203efec(u32 x);
}

extern "C" {
u8 *func_02098314(s32 p);
}

extern "C" {
s32 func_0203f048(u32 id);
}

extern "C" {
s32 func_0203f100(u8 *p, s32 i);
}

extern "C" {
s32 func_0203f0fc(u8 *p, s32 i, u32 v);
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
s32 func_02040264(s32 v);
}

extern "C" {
s32 func_020400b0(void);
}

extern "C" {
s32 func_0203f14c(void);
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
Unk_0203eb78_Entry data_021c39f0[15];

extern "C" void *func_0203ecdc(void *p) {
    _ZN6LetterC1Ev(p);
    return p;
}

extern "C" void *func_0203eccc(void *p) {
    _ZN6LetterD1Ev(p);
    return p;
}

extern "C" u8 *func_0203ecc8(u8 *p) { return p + 0xf6; }

extern "C" BOOL func_0203ec58(u8 *p) {
    u8 l[0xf8];
    _ZN6LetterC1Ev(l);
    s32 h = PlayerData_GetCurrent();
    if (*(u16 *)(p + 0xf4) != func_02097980(h)) {
        func_02065e70(l, p);
        s32 q = _ZN10PlayerData8getIndexEv(h);
        func_02065ba4(l, q);
        func_02065ac0(l);
        if (LetterDelivery_PutInMailbox(l, q, 0)) {
            func_02097954(h, *(u16 *)(p + 0xf4));
            _ZN6LetterD1Ev(l);
            return TRUE;
        }
    }
    _ZN6LetterD1Ev(l);
    return FALSE;
}

extern "C" void func_0203ec54(void) {}

extern "C" void func_0203ec50(void) {}

extern "C" u8 *func_0203ec4c(u8 *p) { return p + 0xc2; }

extern "C" BOOL func_0203ec18(u8 *p) {
    u8 *g = data_021e87d8;
    u32 v = *(u16 *)(p + 0xc0);
    if (v != _ZN8BbsBoard11getNoticeIdEv(g)) {
        _ZN8BbsBoard11setNoticeIdEt(g, v);
        Bbs_AddPost(p);
        return TRUE;
    }
    return FALSE;
}

Unk_0203eb78_Entry::Unk_0203eb78_Entry() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0xff;
}

extern "C" void func_0203ec00(Unk_0203eb78_Entry *e) {
    e->unk_14 = 0;
    e->unk_0c = 0;
    e->unk_10 = 0;
}

extern "C" void func_0203ebdc(Unk_0203ebdc_List *l) {
    Unk_0203eb78_Entry *p = l->head;
    while (p) {
        Unk_0203eb78_Entry *next = *(Unk_0203eb78_Entry **)((u8 *)p + 4);
        func_020e79a0(l, p);
        func_0203ec00(p);
        p = next;
    }
}

extern "C" void func_0203ebb0(void) {
    for (s32 i = 0; i < 15; i++) {
        func_0203ec00(&data_021c39f0[i]);
    }
    MI_CpuFill8(data_021c39f0, 0, 15);
}

extern "C" Unk_0203eb78_Entry *func_0203eb78(void) {
    for (s32 i = 0; i < 15; i++) {
        Unk_0203eb78_Entry *e = &data_021c39f0[i];
        if (IsZero(e->unk_14)) {
            return e;
        }
    }
    return NULL;
}

