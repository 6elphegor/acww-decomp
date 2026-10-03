// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02225924_Rect {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
};

struct Unk_ov001_02225924_Pt {
    u16 x;
    u16 y;
};

struct Unk_ov001_02225f40_W {
    Unk_ov001_02225924_Pt p;
};

struct Unk_ov001_02226214_Ent {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov001_0222df54_S {
    Unk_ov001_02226214_Ent ent[5];
    Unk_ov001_02225924_Pt pos0;
    Unk_ov001_02225924_Pt pos1;
    u16 unk_30;
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
    u8 flag0 : 1;
    u8 flag1 : 1;
    u8 flag2 : 1;
    u8 flag3 : 1;
};

typedef volatile u16 vu16;
typedef volatile u32 vu32;

extern "C" {
u32 OS_DisableIrqMask(u32 a);
void OS_EnableIrqMask(u32 a);
void func_0206d49c();
u32 func_0211ba58();
void TP_GetCalibratedPoint(Unk_ov001_02225924_Pt *p, void *e);
u32 FX_ModS32(u32 a, u32 b);
void func_ov001_02225970(u32 a, u32 b, Unk_ov001_02225924_Pt *out);
void *func_ov001_02225db0(s32, s32);
void func_ov001_02225d58(void *);
void TP_RequestAutoSamplingStopAsync();
void TP_WaitBusy(s32);
s32 TP_CheckError(s32);
s32 TP_GetUserInfo(void *);
void TP_SetCalibrateParam(void *);
void TP_RequestAutoSamplingStartAsync(s32, s32, void *, s32);
BOOL func_ov001_022260ac(Unk_ov001_02225924_Rect *r);
void func_ov001_02226214();
BOOL func_ov001_02225f40(Unk_ov001_02225924_Pt *out);
BOOL func_ov001_02225f88(Unk_ov001_02225924_Rect *r);
BOOL func_ov001_02225fd4(Unk_ov001_02225924_Rect *r);
BOOL func_ov001_02226040(Unk_ov001_02225924_Rect *r);
BOOL func_ov001_022260ac(Unk_ov001_02225924_Rect *r);
BOOL func_ov001_02226118(Unk_ov001_02225924_Rect *r);
BOOL func_ov001_02226184(u32 m);
BOOL func_ov001_022261a8(u32 m);
BOOL func_ov001_022261cc(u32 m);
BOOL func_ov001_022261f0(u32 m);
void func_ov001_02226214();
void func_ov001_022263cc();
void func_ov001_022264d8();
void func_ov001_022264f4();
void func_ov001_0222652c();
}

extern "C" Unk_ov001_0222df54_S *data_ov001_0222df54 = 0;
extern "C" u8 data_ov001_0222df50 = 0;
extern "C" u8 data_ov001_0222df58[16] = {0};

static inline BOOL Unk_ov001_02226214_Flag0() {
    if (data_ov001_0222df54->flag0) return TRUE;
    return FALSE;
}

void func_ov001_0222652c()
{
    u32 buf[3];
    data_ov001_0222df54 = (Unk_ov001_0222df54_S *)func_ov001_02225db0(0x3a, 4);
    if (TP_GetUserInfo(buf) == 0) func_0206d49c();
    TP_SetCalibrateParam(buf);
    TP_RequestAutoSamplingStartAsync(0, 4, data_ov001_0222df54, 5);
    TP_WaitBusy(2);
    if (TP_CheckError(2) != 0) func_0206d49c();
    func_ov001_022264d8();
}

void func_ov001_022264f4()
{
    do {
        TP_RequestAutoSamplingStopAsync();
        TP_WaitBusy(4);
    } while (TP_CheckError(4) != 0);
    func_ov001_02225d58(&data_ov001_0222df54);
}

void func_ov001_022264d8()
{
    func_ov001_022263cc();
    func_ov001_02226214();
}

void func_ov001_022263cc()
{
    Unk_ov001_0222df54_S *p;
    s32 i;
    u8 *cnt;
    u16 cur;
    u32 v;
    p = data_ov001_0222df54;
    v = *(volatile u16 *)0x4000130 | *(volatile u16 *)0x27fffa8;
    cur = ((v ^ 0x2fff) & 0x2fff);
    cnt = data_ov001_0222df58;
    p->unk_32 = (p->unk_30 ^ cur) & cur;
    data_ov001_0222df54->unk_36 = p->unk_30 & (p->unk_30 ^ cur);
    data_ov001_0222df54->unk_30 = cur;
    data_ov001_0222df54->unk_34 = data_ov001_0222df54->unk_32;
    for (i = 0; i < 14; i++, cnt++) {
        u16 bit = 1 << i;
        if ((cur & bit) == 0) {
            *cnt = 0;
        } else {
            (*cnt)++;
            if (*cnt == 0x28) {
                data_ov001_0222df54->unk_34 |= bit;
            } else if (*cnt == 0x2f) {
                data_ov001_0222df54->unk_34 |= bit;
                *cnt = 0x28;
            }
        }
    }
}

void func_ov001_02226214() {
    s32 i;
    u8 found;
    BOOL prev = Unk_ov001_02226214_Flag0();
    found = 0;
    u32 n = func_0211ba58();
    i = found;
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    *(Unk_ov001_02225f40_W *)&s->pos1 = *(Unk_ov001_02225f40_W *)&s->pos0;
    do {
        Unk_ov001_02226214_Ent *e = &data_ov001_0222df54->ent[n];
        if (e->unk_04 == 1 && e->unk_06 == 0) {
            Unk_ov001_02225924_Pt pt;
            found = TRUE;
            TP_GetCalibratedPoint(&pt, e);
            func_ov001_02225970(pt.x, pt.y, &data_ov001_0222df54->pos0);
            break;
        }
        i++;
        n = FX_ModS32(n + 4, 5);
    } while (i < 4);
    u32 d = found ^ prev;
    u32 up = found & d;
    u32 down = prev & d;
    data_ov001_0222df54->flag1 = (u8)up;
    data_ov001_0222df54->flag3 = (u8)down;
    data_ov001_0222df54->flag0 = found;
    data_ov001_0222df54->flag2 = data_ov001_0222df54->flag1;
    if (found == 0) {
        data_ov001_0222df50 = 0;
        return;
    }
    data_ov001_0222df50++;
    if (data_ov001_0222df50 == 0x28) {
        data_ov001_0222df54->flag2 = 1;
        return;
    }
    if (data_ov001_0222df50 != 0x2f) return;
    data_ov001_0222df54->flag2 = 1;
    data_ov001_0222df50 = 0x28;
}

BOOL func_ov001_022261f0(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_30;
    return m == t;
}

BOOL func_ov001_022261cc(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_32;
    return m == t;
}

BOOL func_ov001_022261a8(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_34;
    return m == t;
}

BOOL func_ov001_02226184(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_36;
    return m == t;
}

BOOL func_ov001_02226118(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag0) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_022260ac(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag1) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_02226040(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag2) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_02225fd4(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag3) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_02225f88(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_02225924_Rect t;
    t.x = r->x;
    t.y = r->y;
    t.w = r->x + r->w;
    t.h = r->y + r->h;
    return func_ov001_022260ac(&t);
}

BOOL func_ov001_02225f40(Unk_ov001_02225924_Pt *out) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag0) {
        *(Unk_ov001_02225f40_W *)out = *(Unk_ov001_02225f40_W *)&s->pos1;
        return FALSE;
    }
    *(Unk_ov001_02225f40_W *)out = *(Unk_ov001_02225f40_W *)&s->pos0;
    return TRUE;
}

