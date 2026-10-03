// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221d2f0_State {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1a;
    u8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
};

extern "C" {
extern u8 gWfcScreenRect[];
void WfcInput_GetTouchPos(void *);
s32 WfcInput_IsTouchHeldIn(void *);
s32 WfcInput_IsTouchRepeatIn(void *);
s32 WfcInput_IsTouchPressedIn(void *);
void WfcSound_Stop();
void WfcSound_Play(s32);
void WfcSound_SetVolume(s32);
void WfcSound_SetTrackPitch(s32, s32);
void WfcTask_Delete(s32, s32);
void WfcObj_Free(s32);
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_AllocClear(s32, s32);
void WfcUtil_SetPoint(s32, s32, void *);
s32 WfcObj_Create(s32, s32, s32);
void WfcObj_SetPos(s32, s32, u32, u32);
void WfcObj_SetPriority(s32, s32, s32);
s32 WfcTask_Add(s32, void *, s32, s32);
s32 FX_DivS32(s32, s32);

void WfcScrollBar_SetThumbPos(u32 a);
void WfcScrollBar_GetPartRect(s32 a, u16 *out);
s32 WfcScrollBar_HitTestArrowHeld(s32 unused);
s32 WfcScrollBar_HitTest();
void WfcScrollBar_JumpToTouch();
void WfcScrollBar_StartArrow(s32 a);
void WfcScrollBar_UpdateDragSound(s32 a);
void WfcScrollBar_UpdateDrag();
void WfcScrollBar_Task();
void WfcScrollBar_Disable();
void WfcScrollBar_Enable();
void WfcScrollBar_SetPos(s32 a);
u32 WfcScrollBar_GetEvent();
u32 WfcScrollBar_GetPos();
void WfcScrollBar_Destroy();
void WfcScrollBar_Create(u32 a, u32 b, s32 c, s32 d, u32 e);
}

extern "C" const u8 sWfcScrollBarThumbSizes[4] = { 0x55, 0x36, 0x1e, 0x00 };
extern "C" const u8 sWfcScrollBarThumbCells[4] = { 0x10, 0x0f, 0x0e, 0x00 };
Unk_ov001_0221d2f0_State *sWfcScrollBar;

void WfcScrollBar_Create(u32 a, u32 b, s32 c, s32 d, u32 e) {
    sWfcScrollBar = (Unk_ov001_0221d2f0_State *)WfcHeap_AllocClear(0x20, 4);
    sWfcScrollBar->unk_1b = a;
    sWfcScrollBar->unk_19 = b;
    sWfcScrollBar->unk_1a = e;
    WfcUtil_SetPoint(c, d, &sWfcScrollBar->unk_10);
    sWfcScrollBar->unk_00 = WfcObj_Create(0, sWfcScrollBarThumbCells[a], 1);
    WfcObj_SetPos(sWfcScrollBar->unk_00, -1, c, d + e);
    WfcObj_SetPriority(sWfcScrollBar->unk_00, -1, 1);
    sWfcScrollBar->unk_0c = WfcTask_Add(0, (void *)WfcScrollBar_Task, 0, 0x80);
}

void WfcScrollBar_Destroy() {
    WfcTask_Delete(0, sWfcScrollBar->unk_0c);
    WfcObj_Free(sWfcScrollBar->unk_00);
    WfcHeap_FreeAndClear(&sWfcScrollBar);
}

u32 WfcScrollBar_GetPos() {
    return sWfcScrollBar->unk_1a;
}

u32 WfcScrollBar_GetEvent() {
    return sWfcScrollBar->unk_1d;
}

void WfcScrollBar_SetPos(s32 a) {
    WfcScrollBar_SetThumbPos(a);
}

void WfcScrollBar_Enable() {
    sWfcScrollBar->unk_1e = 0;
}

void WfcScrollBar_Disable() {
    sWfcScrollBar->unk_1e = 1;
}

void WfcScrollBar_Task() {
    sWfcScrollBar->unk_1d = 0;
    Unk_ov001_0221d2f0_State *s = sWfcScrollBar;
    switch (s->unk_1c) {
    case 0:
        if (s->unk_1e != 0) return;
        switch (WfcScrollBar_HitTest()) {
        case 1:
            if (sWfcScrollBar->unk_1b == 0) return;
            WfcSound_Play(0x16);
            WfcSound_SetVolume(0);
            sWfcScrollBar->unk_1d = 1;
            WfcInput_GetTouchPos(&sWfcScrollBar->unk_14);
            {
                Unk_ov001_0221d2f0_State *t = sWfcScrollBar;
                t->unk_18 = t->unk_1a;
            }
            sWfcScrollBar->unk_1c = 1;
            break;
        case 2:
            WfcScrollBar_StartArrow(2);
            break;
        case 3:
            WfcScrollBar_StartArrow(3);
            break;
        case 4:
            WfcScrollBar_JumpToTouch();
            break;
        }
        break;
    case 1:
        WfcScrollBar_UpdateDrag();
        break;
    case 2:
        if (WfcScrollBar_HitTestArrowHeld(2) != 2) {
            sWfcScrollBar->unk_1d = 5;
            sWfcScrollBar->unk_1c = 0;
            return;
        }
        if (WfcScrollBar_HitTest() != 2) return;
        WfcScrollBar_StartArrow(2);
        break;
    case 3:
        if (WfcScrollBar_HitTestArrowHeld(3) != 3) {
            sWfcScrollBar->unk_1d = 7;
            sWfcScrollBar->unk_1c = 0;
            return;
        }
        if (WfcScrollBar_HitTest() != 3) return;
        WfcScrollBar_StartArrow(3);
        break;
    }
}

void WfcScrollBar_UpdateDrag() {
    u16 pt[2];
    if (WfcInput_IsTouchHeldIn(gWfcScreenRect) != 0) {
        WfcInput_GetTouchPos(pt);
        Unk_ov001_0221d2f0_State *s = sWfcScrollBar;
        if ((s32)pt[0] >= (s32)s->unk_10 - 0x1e) {
            s32 v = s->unk_18 + ((s32)pt[1] - (s32)s->unk_16);
            if (v < 0) {
                v = 0;
            } else {
                s32 m = s->unk_19 - sWfcScrollBarThumbSizes[s->unk_1b];
                if (v >= m) v = m;
            }
            WfcScrollBar_UpdateDragSound(v);
            WfcScrollBar_SetThumbPos(v);
            sWfcScrollBar->unk_1d = 2;
            return;
        }
    }
    WfcSound_Stop();
    sWfcScrollBar->unk_1c = 0;
    sWfcScrollBar->unk_1d = 3;
}

void WfcScrollBar_UpdateDragSound(s32 a) {
    s32 r4 = sWfcScrollBar->unk_1a - a;
    s32 r0, r1;
    if (r4 < 0) r4 = -r4;
    if (r4 < 2) {
        r0 = 0;
    } else if (r4 >= 6) {
        r0 = 0x7f;
    } else {
        r0 = FX_DivS32(0x7f, 6 - r4);
    }
    WfcSound_SetVolume(r0);
    if (r4 < 2) {
        r1 = -0x100;
    } else if (r4 >= 6) {
        r1 = 0x100;
    } else {
        r1 = FX_DivS32(0x200, 6 - r4) - 0x100;
    }
    WfcSound_SetTrackPitch(0xffff, r1);
}

void WfcScrollBar_StartArrow(s32 a) {
    sWfcScrollBar->unk_1c = a;
    sWfcScrollBar->unk_1d = (a == 2) ? 4 : 6;
}

void WfcScrollBar_JumpToTouch() {
    u16 buf[2];
    s32 v;
    WfcInput_GetTouchPos(buf);
    u32 t = sWfcScrollBarThumbSizes[sWfcScrollBar->unk_1b];
    v = buf[1] - sWfcScrollBar->unk_12 - (t >> 1);
    if (v < 0) {
        v = 0;
    } else {
        s32 m = sWfcScrollBar->unk_19 - t;
        if (v >= m) v = m;
    }
    WfcScrollBar_SetThumbPos(v);
    sWfcScrollBar->unk_1d = 3;
}

s32 WfcScrollBar_HitTest() {
    u16 buf[6];
    s32 i;
    WfcScrollBar_GetPartRect(1, buf);
    if (WfcInput_IsTouchRepeatIn(buf) != 0) return 1;
    for (i = 2; i <= 3; i++) {
        WfcScrollBar_GetPartRect(i, buf);
        if (WfcInput_IsTouchRepeatIn(buf) != 0) return i;
    }
    WfcScrollBar_GetPartRect(4, buf);
    if (WfcInput_IsTouchPressedIn(buf) != 0) return 4;
    return 0;
}

s32 WfcScrollBar_HitTestArrowHeld(s32 unused) {
    u16 buf[6];
    s32 i;
    for (i = 2; i <= 3; i++) {
        WfcScrollBar_GetPartRect(i, buf);
        if (WfcInput_IsTouchHeldIn(buf) != 0) return i;
    }
    return 0;
}

void WfcScrollBar_GetPartRect(s32 a, u16 *out) {
    out[0] = sWfcScrollBar->unk_10;
    out[2] = out[0] + 0xc;
    switch (a) {
    case 0:
        break;
    case 1:
        out[1] = sWfcScrollBar->unk_12 + sWfcScrollBar->unk_1a;
        out[3] = out[1] + sWfcScrollBarThumbSizes[sWfcScrollBar->unk_1b];
        break;
    case 2:
        out[1] = sWfcScrollBar->unk_12 - 0xd;
        out[3] = sWfcScrollBar->unk_12;
        break;
    case 3:
        out[1] = sWfcScrollBar->unk_12 + sWfcScrollBar->unk_19;
        out[3] = out[1] + 0xd;
        break;
    case 4:
        out[1] = sWfcScrollBar->unk_12;
        out[3] = out[1] + sWfcScrollBar->unk_19;
        break;
    }
}

void WfcScrollBar_SetThumbPos(u32 a) {
    WfcObj_SetPos(sWfcScrollBar->unk_00, -1, sWfcScrollBar->unk_10, a + sWfcScrollBar->unk_12);
    sWfcScrollBar->unk_1a = a;
}

