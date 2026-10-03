#include "types.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

struct Unk_0204c3c0_Ver {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct TownState {
    /* 0x00 */ Unk_0204c3c0_Ver unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot unk_58[4];
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
    p->unk_04 = Random_GlobalBelow(5);
    Date_GetWeekday(p->unk_00.unk_02, p->unk_00.unk_01, p->unk_00.unk_00);
    TownState_PickNextWeekDate(p, p);
    TownState_ClearUnk0c(p);
    TownState_ClearUnk16(p);
    Town_SetNativeFruitTrees(p);
    Town_ReplaceSouthCedars(p);
    TownState_ClearEvents(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->unk_58, i = 0; i < 4; i++) {
        s->unk_00 = 1;
        s->unk_01 = 1;
        s->unk_02 = 0;
        s->unk_03 = 0;
        s++;
    }
    p->unk_21 = -1;
    p->unk_54 = 1;
    p->unk_55 = 1;
    p->unk_56 = 0;
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
    p->unk_04 = 0;
    p->unk_08 = 1;
    p->unk_09 = 1;
    p->unk_0a = 0;
    p->unk_0b = 0;
    TownState_ClearUnk0c(p);
    TownState_ClearUnk16(p);
    TownState_ClearEvents(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->unk_58, i = 0; i < 4; i++) {
        s->unk_00 = 1;
        s->unk_01 = 1;
        s->unk_02 = 0;
        s->unk_03 = 0;
        s++;
    }
    p->unk_21 = -1;
    p->unk_54 = 1;
    p->unk_55 = 1;
    p->unk_56 = 0;
    p->unk_57 = 0;
}

extern "C" void TownState_ClampDate(Unk_0204c3c0_Ver *p) {
    Unk_0204c3c0_Ver t;
    Clock_GetDate(&t);
    if (Date_IsAfterOrEqual(&t, p) == 0) {
        p->unk_00 = t.unk_00;
        p->unk_01 = t.unk_01;
        p->unk_02 = t.unk_02;
        p->unk_03 = t.unk_03;
    }
}

extern "C" void Town_SetNativeFruitTrees(TownState *p) {
    Unk_0204da0c_Map *m = TownBlockMap_Get();
    if (m) {
        Unk_0204da0c_Size *sz = &m->unk_04;
        s32 w = sz->w << 4;
        s32 h = sz->h << 4;
        s32 x, y, cx, cy;
        y = 0;
        u16 v = sNativeFruitTrees[p->unk_04];
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
