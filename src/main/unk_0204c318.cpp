#include "types.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 blocks;
    Unk_0204da0c_Size size;
};

struct Unk_0204c3c0_Ver {
    u8 day;
    u8 month;
    u8 year;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 day;
    u8 month;
    u8 year;
    u8 unk_03;
};

struct TownState {
    /* 0x00 */ Unk_0204c3c0_Ver lastUpdate;
    /* 0x04 */ s32 nativeFruit;
    /* 0x08 */ u8 nextWeekDay;
    /* 0x09 */ u8 nextWeekMonth;
    /* 0x0a */ u8 nextWeekYear;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 perfectStreak;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 eventUpdateDay;
    /* 0x55 */ u8 eventUpdateMonth;
    /* 0x56 */ u8 eventUpdateYear;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot playerDates[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
Unk_0204da0c_Map *TownBlockMap_Get();
u16 *BlockMap_GetItemPtr(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
s32 BlockMap_SetItemAtUnit(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
s32 BlockMap_ClearBuriedAtUnit(Unk_0204da0c_Map *m, s32 x, s32 y);
void Clock_GetDate(void *p);
s32 Date_IsAfterOrEqual(void *a, void *b);
s32 Date_GetWeekday(u32 a, u32 b, u32 c);
void TownState_ClearUnk0c(void *p);
void TownState_ClearUnk16(void *p);
void TownState_ClearEvents(void *p);
void TownState_PickNextWeekDate(void *p, void *q);
void Town_ReplaceSouthCedars(void *p);
void Town_InitNew();
s32 Random_GlobalBelow(s32 a);
}

extern const u16 sNativeFruitTrees[6];
const u16 sNativeFruitTrees[6] = {0x3b, 0x43, 0x4b, 0x33, 0x53, 0};

static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void TownState_Construct() {}

extern "C" void TownState_Destruct() {}

extern "C" void Town_SetNativeFruitTrees(TownState *p);

extern "C" void TownState_InitNew(TownState *p) {
    Clock_GetDate(p);
    p->nativeFruit = Random_GlobalBelow(5);
    Date_GetWeekday(p->lastUpdate.year, p->lastUpdate.month, p->lastUpdate.day);
    TownState_PickNextWeekDate(p, p);
    TownState_ClearUnk0c(p);
    TownState_ClearUnk16(p);
    Town_SetNativeFruitTrees(p);
    Town_ReplaceSouthCedars(p);
    TownState_ClearEvents(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->playerDates, i = 0; i < 4; i++) {
        s->day = 1;
        s->month = 1;
        s->year = 0;
        s->unk_03 = 0;
        s++;
    }
    p->perfectStreak = -1;
    p->eventUpdateDay = 1;
    p->eventUpdateMonth = 1;
    p->eventUpdateYear = 0;
    p->unk_57 = 0;
    Town_InitNew();
    p->unk_6b = 0;
    p->unk_6a = 0xff;
    p->unk_69 = 0xff;
    p->unk_68 = 0xff;
    p->unk_22 = 0;
}

extern "C" void TownState_Reset(TownState *p) {
    Clock_GetDate(p);
    p->nativeFruit = 0;
    p->nextWeekDay = 1;
    p->nextWeekMonth = 1;
    p->nextWeekYear = 0;
    p->unk_0b = 0;
    TownState_ClearUnk0c(p);
    TownState_ClearUnk16(p);
    TownState_ClearEvents(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->playerDates, i = 0; i < 4; i++) {
        s->day = 1;
        s->month = 1;
        s->year = 0;
        s->unk_03 = 0;
        s++;
    }
    p->perfectStreak = -1;
    p->eventUpdateDay = 1;
    p->eventUpdateMonth = 1;
    p->eventUpdateYear = 0;
    p->unk_57 = 0;
}

extern "C" void TownState_ClampDate(Unk_0204c3c0_Ver *p) {
    Unk_0204c3c0_Ver t;
    Clock_GetDate(&t);
    if (Date_IsAfterOrEqual(&t, p) == 0) {
        p->day = t.day;
        p->month = t.month;
        p->year = t.year;
        p->unk_03 = t.unk_03;
    }
}

extern "C" void Town_SetNativeFruitTrees(TownState *p) {
    Unk_0204da0c_Map *m = TownBlockMap_Get();
    if (m) {
        Unk_0204da0c_Size *sz = &m->size;
        s32 w = sz->w << 4;
        s32 h = sz->h << 4;
        s32 x, y, cx, cy;
        y = 0;
        u16 v = sNativeFruitTrees[p->nativeFruit];
        for (; y < h; y++) {
            x = 0;
            if (w > 0) {
                goto test;
            loop:
                cx = x >> 4;
                cy = y >> 4;
                {
                    u16 *t = BlockMap_GetItemPtr(m, cx, cy, x - (cx << 4), y - (cy << 4), 0);
                    if (t) {
                        if (Unk_0204c318_InRange(t, 0x2f, 0x56)) {
                            u16 nv = v;
                            BlockMap_SetItemAtUnit(m, &nv, x, y, 0);
                            BlockMap_ClearBuriedAtUnit(m, x, y);
                        }
                    }
                }
                x++;
            test:
                if (x < w) goto loop;
            }
        }
    }
}
