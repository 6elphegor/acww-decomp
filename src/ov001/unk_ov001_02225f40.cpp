// mwcc-flags: -O4,p
#include "types.h"
#include "net/Unk_ov001_02225924_Rect.h"

#pragma thumb off



struct Unk_ov001_02225f40_W {
    Unk_ov001_02225924_Pt p;
};

struct Unk_ov001_02226214_Ent {
    u32 unk_00;
    u16 touch;
    u16 validity;
};

struct WfcInputState {
    Unk_ov001_02226214_Ent ent[5];
    Unk_ov001_02225924_Pt pos0;
    Unk_ov001_02225924_Pt pos1;
    u16 heldKeys;
    u16 pressedKeys;
    u16 repeatKeys;
    u16 releasedKeys;
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
void Fatal_Trap();
u32 TP_GetLatestIndexInAuto();
void TP_GetCalibratedPoint(Unk_ov001_02225924_Pt *p, void *e);
u32 FX_ModS32(u32 a, u32 b);
void WfcUtil_SetPoint(u32 a, u32 b, Unk_ov001_02225924_Pt *out);
void *WfcHeap_AllocClear(s32, s32);
void WfcHeap_FreeAndClear(void *);
void TP_RequestAutoSamplingStopAsync();
void TP_WaitBusy(s32);
s32 TP_CheckError(s32);
s32 TP_GetUserInfo(void *);
void TP_SetCalibrateParam(void *);
void TP_RequestAutoSamplingStartAsync(s32, s32, void *, s32);
BOOL WfcInput_IsTouchPressedIn(Unk_ov001_02225924_Rect *r);
void WfcInput_UpdateTouch();
BOOL WfcInput_GetTouchPos(Unk_ov001_02225924_Pt *out);
BOOL WfcInput_IsTouchPressedInBox(Unk_ov001_02225924_Rect *r);
BOOL WfcInput_IsTouchReleasedIn(Unk_ov001_02225924_Rect *r);
BOOL WfcInput_IsTouchRepeatIn(Unk_ov001_02225924_Rect *r);
BOOL WfcInput_IsTouchPressedIn(Unk_ov001_02225924_Rect *r);
BOOL WfcInput_IsTouchHeldIn(Unk_ov001_02225924_Rect *r);
BOOL WfcInput_IsKeyReleased(u32 m);
BOOL WfcInput_IsKeyRepeat(u32 m);
BOOL WfcInput_IsKeyPressed(u32 m);
BOOL WfcInput_IsKeyHeld(u32 m);
void WfcInput_UpdateTouch();
void WfcInput_UpdateKeys();
void WfcInput_Update();
void WfcInput_Shutdown();
void WfcInput_Init();
}

extern "C" WfcInputState *sWfcInput = 0;
extern "C" u8 sWfcTouchRepeatCounter = 0;
extern "C" u8 sWfcKeyRepeatCounters[16] = {0};

static inline BOOL Unk_ov001_02226214_Flag0() {
    if (sWfcInput->flag0) return TRUE;
    return FALSE;
}

void WfcInput_Init()
{
    u32 buf[3];
    sWfcInput = (WfcInputState *)WfcHeap_AllocClear(0x3a, 4);
    if (TP_GetUserInfo(buf) == 0) Fatal_Trap();
    TP_SetCalibrateParam(buf);
    TP_RequestAutoSamplingStartAsync(0, 4, sWfcInput, 5);
    TP_WaitBusy(2);
    if (TP_CheckError(2) != 0) Fatal_Trap();
    WfcInput_Update();
}

void WfcInput_Shutdown()
{
    do {
        TP_RequestAutoSamplingStopAsync();
        TP_WaitBusy(4);
    } while (TP_CheckError(4) != 0);
    WfcHeap_FreeAndClear(&sWfcInput);
}

void WfcInput_Update()
{
    WfcInput_UpdateKeys();
    WfcInput_UpdateTouch();
}

void WfcInput_UpdateKeys()
{
    WfcInputState *p;
    s32 i;
    u8 *cnt;
    u16 cur;
    u32 v;
    p = sWfcInput;
    v = *(volatile u16 *)0x4000130 | *(volatile u16 *)0x27fffa8;
    cur = ((v ^ 0x2fff) & 0x2fff);
    cnt = sWfcKeyRepeatCounters;
    p->pressedKeys = (p->heldKeys ^ cur) & cur;
    sWfcInput->releasedKeys = p->heldKeys & (p->heldKeys ^ cur);
    sWfcInput->heldKeys = cur;
    sWfcInput->repeatKeys = sWfcInput->pressedKeys;
    for (i = 0; i < 14; i++, cnt++) {
        u16 bit = 1 << i;
        if ((cur & bit) == 0) {
            *cnt = 0;
        } else {
            (*cnt)++;
            if (*cnt == 0x28) {
                sWfcInput->repeatKeys |= bit;
            } else if (*cnt == 0x2f) {
                sWfcInput->repeatKeys |= bit;
                *cnt = 0x28;
            }
        }
    }
}

void WfcInput_UpdateTouch() {
    s32 i;
    u8 found;
    BOOL prev = Unk_ov001_02226214_Flag0();
    found = 0;
    u32 n = TP_GetLatestIndexInAuto();
    i = found;
    WfcInputState *s = sWfcInput;
    *(Unk_ov001_02225f40_W *)&s->pos1 = *(Unk_ov001_02225f40_W *)&s->pos0;
    do {
        Unk_ov001_02226214_Ent *e = &sWfcInput->ent[n];
        if (e->touch == 1 && e->validity == 0) {
            Unk_ov001_02225924_Pt pt;
            found = TRUE;
            TP_GetCalibratedPoint(&pt, e);
            WfcUtil_SetPoint(pt.x, pt.y, &sWfcInput->pos0);
            break;
        }
        i++;
        n = FX_ModS32(n + 4, 5);
    } while (i < 4);
    u32 d = found ^ prev;
    u32 up = found & d;
    u32 down = prev & d;
    sWfcInput->flag1 = (u8)up;
    sWfcInput->flag3 = (u8)down;
    sWfcInput->flag0 = found;
    sWfcInput->flag2 = sWfcInput->flag1;
    if (found == 0) {
        sWfcTouchRepeatCounter = 0;
        return;
    }
    sWfcTouchRepeatCounter++;
    if (sWfcTouchRepeatCounter == 0x28) {
        sWfcInput->flag2 = 1;
        return;
    }
    if (sWfcTouchRepeatCounter != 0x2f) return;
    sWfcInput->flag2 = 1;
    sWfcTouchRepeatCounter = 0x28;
}

BOOL WfcInput_IsKeyHeld(u32 m) {
    u32 t = m & sWfcInput->heldKeys;
    return m == t;
}

BOOL WfcInput_IsKeyPressed(u32 m) {
    u32 t = m & sWfcInput->pressedKeys;
    return m == t;
}

BOOL WfcInput_IsKeyRepeat(u32 m) {
    u32 t = m & sWfcInput->repeatKeys;
    return m == t;
}

BOOL WfcInput_IsKeyReleased(u32 m) {
    u32 t = m & sWfcInput->releasedKeys;
    return m == t;
}

BOOL WfcInput_IsTouchHeldIn(Unk_ov001_02225924_Rect *r) {
    WfcInputState *s = sWfcInput;
    if (!s->flag0) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL WfcInput_IsTouchPressedIn(Unk_ov001_02225924_Rect *r) {
    WfcInputState *s = sWfcInput;
    if (!s->flag1) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL WfcInput_IsTouchRepeatIn(Unk_ov001_02225924_Rect *r) {
    WfcInputState *s = sWfcInput;
    if (!s->flag2) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL WfcInput_IsTouchReleasedIn(Unk_ov001_02225924_Rect *r) {
    WfcInputState *s = sWfcInput;
    if (!s->flag3) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL WfcInput_IsTouchPressedInBox(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_02225924_Rect t;
    t.x = r->x;
    t.y = r->y;
    t.w = r->x + r->w;
    t.h = r->y + r->h;
    return WfcInput_IsTouchPressedIn(&t);
}

BOOL WfcInput_GetTouchPos(Unk_ov001_02225924_Pt *out) {
    WfcInputState *s = sWfcInput;
    if (!s->flag0) {
        *(Unk_ov001_02225f40_W *)out = *(Unk_ov001_02225f40_W *)&s->pos1;
        return FALSE;
    }
    *(Unk_ov001_02225f40_W *)out = *(Unk_ov001_02225f40_W *)&s->pos0;
    return TRUE;
}

