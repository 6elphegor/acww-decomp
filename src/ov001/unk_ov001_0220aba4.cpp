// mwcc-flags: -O3,p
#include "types.h"
#include "ui/Unk_ov001_0220a7f0.h"

#pragma thumb off

extern "C" const u8 data_ov001_02229e94[2] = {0x3c, 0x3d};
extern "C" const u8 data_ov001_02229e8c[2] = {4, 5};
extern "C" const u16 data_ov001_02229eac[2] = {0x1c, 0x14};
extern "C" const u8 data_ov001_02229e9c[2] = {0x12, 0x13};
extern "C" const u16 data_ov001_02229eb0[2] = {0x78, 0x12};
extern "C" const u16 data_ov001_02229ebc[2][2] = {{0x4, 0xaa}, {0x84, 0xaa}};
extern "C" const char data_ov001_02229ec4[12] = "7894561230";
extern "C" const u16 data_ov001_02229eb4[2][2] = {{0x72, 0x91}, {0x92, 0x91}};
extern "C" const u16 data_ov001_02229ea4[2] = {0x1c, 0x14};
extern "C" const u16 data_ov001_02229ea8[2] = {0xc, 0x4};
extern "C" const u16 data_ov001_02229ed0[14] = {0x37, 0x38, 0x39, 0x34, 0x35, 0x36, 0x31, 0x32, 0x33, 0x30, 0x20, 0x20, 0, 0};
extern "C" const u8 data_ov001_02229e98[2] = {2, 3};
extern "C" const u16 data_ov001_02229eec[10][2] = {
    {0x52, 0x4c}, {0x72, 0x4c}, {0x92, 0x4c}, {0x52, 0x63},
    {0x72, 0x63}, {0x92, 0x63}, {0x52, 0x7a}, {0x72, 0x7a},
    {0x92, 0x7a}, {0x52, 0x91},
};
extern "C" const u8 data_ov001_02229e90[2] = {0x37, 0x38};
extern "C" { void *sWfcNumPad; }
extern "C" const u16 data_ov001_02229f14[14][2] = {
    {0x50, 0x4a}, {0x70, 0x4a}, {0x90, 0x4a}, {0x50, 0x61},
    {0x70, 0x61}, {0x90, 0x61}, {0x50, 0x78}, {0x70, 0x78},
    {0x90, 0x78}, {0x50, 0x8f}, {0x70, 0x8f}, {0x90, 0x8f},
    {0x2, 0xa8}, {0x82, 0xa8},
};
extern "C" const s8 sWfcNumPadNavTable[14][4] = {
    {2, 12, 1, 3},
    {0, 13, 2, 4},
    {1, 13, 0, 5},
    {5, 0, 4, 6},
    {3, 1, 5, 7},
    {4, 2, 3, 8},
    {8, 3, 7, 9},
    {6, 4, 8, 10},
    {7, 5, 6, 11},
    {11, 6, 10, 12},
    {9, 7, 11, 13},
    {10, 8, 9, 13},
    {13, 9, 13, 0},
    {12, -1, 12, -2},
};
extern "C" const u8 data_ov001_02229ea0[2] = {0x10, 0x11};
extern "C" u16 data_ov001_0222aa58[4] = {0, 1, 0, 0};


#define data_ov001_02229f16 ((u16 *)data_ov001_02229f14 + 1)


namespace N_0a758 {




struct Unk_ov001_0222dddc {
    void *rowCanvases[3][4];
    Unk_ov001_0220a7f0_Reg *charKeyOams[0x2f];
    Unk_ov001_0220a7f0_Reg *funcKeyOams[4];
    void *bottomButtons[2];
    void *rowTextObjs[4];
    void *cursorObj;
    void *task;
    u8 inputKey;
    u8 caseMode;
    u8 pad_11e[3];
    u8 cursorKey;
    u8 pad_122;
    u8 deleteEnabled;
    u8 insertEnabled;
};

struct Unk_ov001_0222dde0 {
    void *rowCanvases[4];
    Unk_ov001_0220a7f0_Reg *digitKeyOams[10];
    void *funcKeyOams[2];
    void *bottomButtons[2];
    void *rowTextObjs[4];
    void *cursorObj;
    u8 pad_05c[7];
    s8 cursorKey;
    s8 prevCursorKey;
};

extern "C" {
extern Unk_ov001_0222dddc *sWfcTextKb;
extern Unk_ov001_0222dde0 *sWfcNumPad;
extern u16 data_ov001_02229bf4[];
extern u8 data_ov001_02229be8[];
extern u8 data_ov001_02229be0[];
extern u16 data_ov001_02229bec[];
extern u16 *sWfcTextKbGlyphMaps[];
extern u16 data_ov001_02229f14[];
extern s8 sWfcNumPadNavTable[][4];

extern void *WfcHeap_AllocClear(s32, s32);
extern Unk_ov001_0220a7f0_Reg *WfcObj_CreateSingle(s32, s32);
extern void *WfcObj_Create(s32, s32, s32);
extern void WfcObj_SetAffineMode(void *, s32, s32, s32);
extern void WfcObj_SetPriority(void *, s32, s32);
extern void WfcObj_SetPos(void *, s32, s32, s32);
extern void *WfcText_CreateObjCanvas(s32, s32, s32, s32, void *, s32);
extern void WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
extern void *WfcObj_Alloc(s32, s32, s32);
extern void *WfcObj_GetOam(void *, s32);
extern void WfcObj_Free(void *);
extern void WfcText_DestroyObjCanvas(void *);
extern void WfcOam_FreeEntry(void *);
extern void WfcHeap_FreeAndClear(void *);
extern void WfcTask_RequestDelete(s32, s32);
extern void WfcTask_SetFunc(s32, void *);
extern u32 WfcTask_Add(s32, void *, s32, s32);
extern void WfcTextKb_SetRowY(u32, s32, s32);
extern void WfcTextKb_SlideOutStep0();
extern void WfcTextKb_SlideInStep0();
extern void WfcNumPad_SetRowY(s32, s32);
extern void WfcCell_Copy(s32, u32, u32);
extern void WfcSound_Play(s32);
void WfcNumPad_UpdateCursor();
void WfcNumPad_Destroy(s32);
void WfcNumPad_SlideOutStep4(s32);
void WfcNumPad_SlideOutStep3(s32);
void WfcNumPad_SlideOutStep2(s32);
void WfcNumPad_SlideOutStep1(s32);


}
}

namespace N_0b05c {

struct Unk_ov001_0220b05c_Reg {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_0222dde0 {
    void *rowCanvases[4];
    Unk_ov001_0220b05c_Reg *digitKeyOams[10];
    Unk_ov001_0220b05c_Reg *funcKeyOams[2];
    void *bottomButtons[2];
    void *rowTextObjs[4];
    u8 unk_58[8];
    u8 inputKey;
    s8 touchKey;
    s8 highlightKey;
    s8 cursorKey;
    u8 prevCursorKey;
    u8 deleteHoldTimer;
    u8 deleteEnabled;
    u8 insertEnabled;
    u8 dotEnabled;
    u8 errorSoundPlayed;
};

struct Unk_ov001_0220b618_Pt {
    u16 x;
    u16 y;
};

extern "C" {
extern Unk_ov001_0222dde0 *sWfcNumPad;
extern u8 data_ov001_02229e98[];
extern u8 data_ov001_02229e8c[];
extern u8 data_ov001_02229e9c[];
extern u8 data_ov001_02229ea0[];
extern u8 data_ov001_02229ec4[];
extern Unk_ov001_0220b618_Pt data_ov001_02229eec[];
extern Unk_ov001_0220b618_Pt data_ov001_02229eb4[];
extern Unk_ov001_0220b618_Pt data_ov001_02229ebc[];
extern u8 gWfcScreenRect[];
extern u8 data_ov001_02229ea4[];
extern u8 data_ov001_02229eac[];
extern u8 data_ov001_02229eb0[];

extern void WfcObj_SetModePalette(void *, s32, s32, u32);
extern void WfcText_ArrangeObj(void *, u32, s32, void *, s32);
extern void WfcObj_SetAffineMode(void *, s32, s32, s32);
extern void WfcObj_SetPos(void *, s32, u32, s32);
extern void WfcUtil_RectFromPosSize(void *, void *, void *);
extern s32 WfcInput_IsTouchHeldIn(void *);
extern s32 WfcInput_IsTouchReleasedIn(void *);
extern s32 WfcInput_IsKeyRepeat(u32);
extern s32 WfcInput_IsKeyPressed(u32);
extern s32 WfcInput_IsKeyReleased(u32);
extern void WfcNumPad_MoveCursor(s32);
extern void WfcSound_Play(s32);
extern void WfcNumPad_UpdateCursor();

void WfcNumPad_SetKeyHighlight(s32 a, u32 b);
void WfcNumPad_SetRowY(s32 a, s32 b);
void WfcNumPad_HandlePad();
void WfcNumPad_SetPressedKey(s32 a);
void WfcNumPad_HandleTouchHold();
void WfcNumPad_HandleTouchRelease();


}
}

namespace N_0ba08 {

struct Unk_ov001_0220ba08_Reg {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_0222dde0 {
    void *rowCanvases[4];
    Unk_ov001_0220ba08_Reg *digitKeyOams[10];
    Unk_ov001_0220ba08_Reg *funcKeyOams[2];
    void *bottomButtons[2];
    void *rowTextObjs[4];
    void *cursorObj;
    void *task;
    u8 inputKey;
    s8 touchKey;
    s8 highlightKey;
    s8 cursorKey;
    u8 prevCursorKey;
    u8 deleteHoldTimer;
    u8 deleteEnabled;
    u8 insertEnabled;
    u8 dotEnabled;
    u8 errorSoundPlayed;
};

extern "C" {
extern Unk_ov001_0222dde0 *sWfcNumPad;
extern u8 gWfcScreenRect[];
extern u32 data_ov001_02229eec[];
extern u32 data_ov001_02229eb4[];
extern u32 data_ov001_02229ebc[];
extern u8 data_ov001_02229ea4[];
extern u8 data_ov001_02229eac[];
extern u8 data_ov001_02229eb0[];
extern u16 data_ov001_0222aa58[];
extern u16 data_ov001_02229ea4_h[];
extern u8 data_ov001_02229e90[];
extern u8 data_ov001_02229e94[];
extern u16 data_ov001_02229ea8[];
extern u16 data_ov001_02229ed0[];

extern void WfcUtil_RectFromPosSize(void *, void *, void *);
extern s32 WfcInput_IsTouchPressedIn(void *);
extern void WfcSound_Play(s32);
extern void WfcObj_GetPos(void *, s32, s32 *, s32 *);
extern void WfcNumPad_SetRowY(s32, s32);
extern void WfcNumPad_UpdateCursor();
extern s32 WfcTask_SetFunc(void *, void *);
extern void WfcNumPad_HandleTouchRelease();
extern void WfcNumPad_HandleTouchHold();
extern void WfcNumPad_HandlePad();
extern void WfcObj_Free(void *);
extern void WfcNumPad_SlideOutStep0(void *);
extern void *WfcHeap_AllocClear(s32, s32);
extern void *WfcObj_CreateSingle(s32, s32);
extern void *WfcObj_Create(s32, s32, s32);
extern void WfcObj_SetAffineMode(void *, s32, s32, s32);
extern void WfcObj_SetPriority(void *, s32, s32);
extern void *WfcText_CreateObjCanvas(s32, s32, s32, s32, void *, s32);
extern void WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
extern void *WfcObj_Alloc(s32, s32, s32);
extern void *WfcTask_Add(s32, void *, s32, s32);

void WfcNumPad_HandleTouchPress();
void WfcNumPad_InputTask();
void WfcNumPad_SlideInStep4(void *self);
void WfcNumPad_SlideInStep3(void *self);
void WfcNumPad_SlideInStep2(void *self);
void WfcNumPad_SlideInStep1(void *self);
void WfcNumPad_SlideInStep0(void *self);


}
}

namespace N_0ba08 {
struct Unk_ov001_0220bfec_Pair { u16 a, b; };
struct Unk_ov001_0220bfec_Rect { Unk_ov001_0220bfec_Pair p; Unk_ov001_0220bfec_Pair s; };
}



namespace N_0ba08 {
extern "C" {
void WfcNumPad_Create();
void WfcNumPad_Close();
u32 WfcNumPad_GetKey();
void WfcNumPad_SetDeleteEnabled(u32 v);
void WfcNumPad_SetInsertEnabled(u32 v);
void WfcNumPad_SetDotEnabled(u32 v);
BOOL WfcNumPad_Exists();
void WfcNumPad_SlideInStep0(void *self);
void WfcNumPad_SlideInStep1(void *self);
void WfcNumPad_SlideInStep2(void *self);
void WfcNumPad_SlideInStep3(void *self);
void WfcNumPad_SlideInStep4(void *self);
void WfcNumPad_InputTask();
void WfcNumPad_HandleTouchPress();
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_HandleTouchRelease();
void WfcNumPad_HandleTouchHold();
void WfcNumPad_SetPressedKey(s32 a);
void WfcNumPad_HandlePad();
void WfcNumPad_SetRowY(s32 a, s32 b);
void WfcNumPad_SetKeyHighlight(s32 a, u32 b);
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_UpdateCursor();
void WfcNumPad_MoveCursor(s32 a);
void WfcNumPad_SlideOutStep0(s32 a);
void WfcNumPad_SlideOutStep1(s32 a);
void WfcNumPad_SlideOutStep2(s32 a);
void WfcNumPad_SlideOutStep3(s32 a);
void WfcNumPad_SlideOutStep4(s32 a);
void WfcNumPad_Destroy(s32 a);
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_Create() {
    Unk_ov001_0220bfec_Rect pos;
    u32 t;
    u16 v[2];
    s32 i, j, k;
    pos = *(Unk_ov001_0220bfec_Rect *)data_ov001_0222aa58;
    pos.s = *(Unk_ov001_0220bfec_Pair *)data_ov001_02229ea4;
    sWfcNumPad = (Unk_ov001_0222dde0 *)WfcHeap_AllocClear(0x6c, 4);
    sWfcNumPad->inputKey = 0x1f;
    sWfcNumPad->cursorKey = 0;
    sWfcNumPad->deleteEnabled = 1;
    sWfcNumPad->insertEnabled = 1;
    sWfcNumPad->dotEnabled = 1;
    for (i = 0; i < 10; i++) {
        sWfcNumPad->digitKeyOams[i] = (Unk_ov001_0220ba08_Reg *)WfcObj_CreateSingle(0, 0x36);
        sWfcNumPad->digitKeyOams[i]->w0 = (sWfcNumPad->digitKeyOams[i]->w0 & 0xc1fffcff) | 0x200;
        sWfcNumPad->digitKeyOams[i]->h4 = (sWfcNumPad->digitKeyOams[i]->h4 & ~0xc00) | 0xc00;
    }
    u8 *p = data_ov001_02229e90;
    for (i = 0; i < 2; i++) {
        sWfcNumPad->funcKeyOams[i] = (Unk_ov001_0220ba08_Reg *)WfcObj_CreateSingle(0, *p);
        p++;
        sWfcNumPad->funcKeyOams[i]->w0 = (sWfcNumPad->funcKeyOams[i]->w0 & 0xc1fffcff) | 0x200;
        sWfcNumPad->funcKeyOams[i]->h4 = (sWfcNumPad->funcKeyOams[i]->h4 & ~0xc00) | 0xc00;
    }
    for (i = 0; i < 2; i++) {
        sWfcNumPad->bottomButtons[i] = WfcObj_Create(0, data_ov001_02229e94[i], 1);
        WfcObj_SetAffineMode(sWfcNumPad->bottomButtons[i], -1, 0x200, 0);
        WfcObj_SetPriority(sWfcNumPad->bottomButtons[i], -1, 3);
    }
    u32 bh = data_ov001_02229ea8[1];
    u32 bw = data_ov001_02229ea8[0];
    s32 n;
    i = 0;
    n = i;
    v[1] = i;
    for (; i < 4; i++) {
        sWfcNumPad->rowCanvases[i] = WfcText_CreateObjCanvas(0, bw, bh, 0, &t, 0);
        pos.p.a = 0;
        s32 idx = n;
        s32 kk;
        for (kk = 0; kk < 3; kk++, idx++, pos.p.a += 0x20) {
            v[0] = data_ov001_02229ed0[idx];
            WfcText_DrawTextRect(sWfcNumPad->rowCanvases[i], pos.p.a, pos.p.b, pos.s.a, pos.s.b, 2, 0x480, (void *)v);
        }
        sWfcNumPad->rowTextObjs[i] = WfcObj_Alloc(0, t, 0);
        n += 3;
    }
    sWfcNumPad->cursorObj = WfcObj_Create(0, 0x44, 1);
    WfcObj_SetAffineMode(sWfcNumPad->cursorObj, -1, 0x200, 0);
    WfcObj_SetPriority(sWfcNumPad->cursorObj, -1, 2);
    sWfcNumPad->task = WfcTask_Add(0, (void *)WfcNumPad_SlideInStep0, 0, 0x78);
    WfcNumPad_SetRowY(0, 0xc0);
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_Close() {
    WfcObj_Free(sWfcNumPad->cursorObj);
    WfcTask_SetFunc(sWfcNumPad->task, (void *)WfcNumPad_SlideOutStep0);
}
}
}

namespace N_0ba08 {
extern "C" {
u32 WfcNumPad_GetKey() {
    return sWfcNumPad->inputKey;
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SetDeleteEnabled(u32 v) {
    sWfcNumPad->deleteEnabled = v;
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SetInsertEnabled(u32 v) {
    sWfcNumPad->insertEnabled = v;
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SetDotEnabled(u32 v) {
    sWfcNumPad->dotEnabled = v;
}
}
}

namespace N_0ba08 {
extern "C" {
BOOL WfcNumPad_Exists() {
    return sWfcNumPad != NULL ? TRUE : FALSE;
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SlideInStep0(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)sWfcNumPad->digitKeyOams[0];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x2 / 2];
    if (c > (s32)h) {
        WfcNumPad_SetRowY(0, c);
        return;
    }
    WfcNumPad_SetRowY(0, h);
    WfcNumPad_SetRowY(1, 0xc0);
    WfcTask_SetFunc(self, (void *)WfcNumPad_SlideInStep1);
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SlideInStep1(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)sWfcNumPad->digitKeyOams[3];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0xe / 2];
    if (c > (s32)h) {
        WfcNumPad_SetRowY(1, c);
        return;
    }
    WfcNumPad_SetRowY(1, h);
    WfcNumPad_SetRowY(2, 0xc0);
    WfcTask_SetFunc(self, (void *)WfcNumPad_SlideInStep2);
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SlideInStep2(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)sWfcNumPad->digitKeyOams[6];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x1a / 2];
    if (c > (s32)h) {
        WfcNumPad_SetRowY(2, c);
        return;
    }
    WfcNumPad_SetRowY(2, h);
    WfcNumPad_SetRowY(3, 0xc0);
    WfcTask_SetFunc(self, (void *)WfcNumPad_SlideInStep3);
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SlideInStep3(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)sWfcNumPad->digitKeyOams[9];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x26 / 2];
    if (c > (s32)h) {
        WfcNumPad_SetRowY(3, c);
        return;
    }
    WfcNumPad_SetRowY(3, h);
    WfcNumPad_SetRowY(4, 0xc0);
    WfcTask_SetFunc(self, (void *)WfcNumPad_SlideInStep4);
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_SlideInStep4(void *self) {
    s32 a, b;
    WfcObj_GetPos(sWfcNumPad->bottomButtons[0], 0, &a, &b);
    b -= 12;
    u32 h = ((u16 *)data_ov001_02229ebc)[1];
    if (b > (s32)h) {
        WfcNumPad_SetRowY(4, b);
        return;
    }
    WfcNumPad_SetRowY(4, h);
    WfcNumPad_UpdateCursor();
    WfcTask_SetFunc(self, (void *)WfcNumPad_InputTask);
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_InputTask() {
    WfcNumPad_HandleTouchPress();
    WfcNumPad_HandleTouchRelease();
    WfcNumPad_HandleTouchHold();
    WfcNumPad_HandlePad();
}
}
}

namespace N_0ba08 {
extern "C" {
void WfcNumPad_HandleTouchPress() {
    u32 out[3];
    s32 i;
    if (WfcInput_IsTouchPressedIn(gWfcScreenRect) == 0) return;
    sWfcNumPad->touchKey = -1;
    for (i = 0; i < 10; i++) {
        WfcUtil_RectFromPosSize(&data_ov001_02229eec[i], data_ov001_02229ea4, out);
        if (WfcInput_IsTouchPressedIn(out) != 0) {
            if (sWfcNumPad->insertEnabled == 0) {
                WfcSound_Play(9);
                return;
            }
            WfcSound_Play(0);
            sWfcNumPad->touchKey = i;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        WfcUtil_RectFromPosSize(&data_ov001_02229eb4[i], data_ov001_02229eac, out);
        if (WfcInput_IsTouchPressedIn(out) != 0) {
            if (i == 0 && sWfcNumPad->deleteEnabled == 0) goto fail;
            if (i == 1 && sWfcNumPad->dotEnabled == 0) {
            fail:
                WfcSound_Play(9);
                return;
            }
            WfcSound_Play(0);
            sWfcNumPad->touchKey = i + 10;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        WfcUtil_RectFromPosSize(&data_ov001_02229ebc[i], data_ov001_02229eb0, out);
        if (WfcInput_IsTouchPressedIn(out) != 0) {
            WfcSound_Play(0);
            sWfcNumPad->touchKey = i + 12;
            return;
        }
    }
}
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_HandleTouchRelease() {
    Unk_ov001_0220b618_Pt *p;
    s32 i;
    u32 buf[3];
    sWfcNumPad->inputKey = 0;
    if (!WfcInput_IsTouchReleasedIn(gWfcScreenRect)) return;
    for (p = data_ov001_02229eec, i = 0; i < 10; p++, i++) {
        WfcUtil_RectFromPosSize(p, data_ov001_02229ea4, buf);
        if (WfcInput_IsTouchReleasedIn(buf)) {
            if (sWfcNumPad->touchKey != i) return;
            sWfcNumPad->inputKey = data_ov001_02229ec4[i];
            sWfcNumPad->cursorKey = i;
            WfcNumPad_UpdateCursor();
            return;
        }
    }
    for (p = data_ov001_02229eb4, i = 0; i < 2; p++, i++) {
        WfcUtil_RectFromPosSize(p, data_ov001_02229eac, buf);
        if (WfcInput_IsTouchReleasedIn(buf)) {
            if (sWfcNumPad->touchKey != i + 10) return;
            sWfcNumPad->inputKey = data_ov001_02229ea0[i];
            sWfcNumPad->cursorKey = i + 10;
            WfcNumPad_UpdateCursor();
            return;
        }
    }
    for (p = data_ov001_02229ebc, i = 0; i < 2; p++, i++) {
        WfcUtil_RectFromPosSize(p, data_ov001_02229eb0, buf);
        if (WfcInput_IsTouchReleasedIn(buf)) {
            if (sWfcNumPad->touchKey != i + 12) return;
            sWfcNumPad->inputKey = data_ov001_02229e9c[i];
            sWfcNumPad->cursorKey = i + 12;
            WfcNumPad_UpdateCursor();
            return;
        }
    }
}
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_HandleTouchHold() {
    s32 i;
    Unk_ov001_0220b618_Pt *p;
    u32 buf[3];
    if (!WfcInput_IsTouchHeldIn(gWfcScreenRect)) goto fail;
    for (p = data_ov001_02229eec, i = 0; i < 10; p++, i++) {
        WfcUtil_RectFromPosSize(p, data_ov001_02229ea4, buf);
        if (WfcInput_IsTouchHeldIn(buf)) {
            if (sWfcNumPad->touchKey != i) goto fail;
            WfcNumPad_SetPressedKey(i);
            goto end;
        }
    }
    for (p = data_ov001_02229eb4, i = 0; i < 2; p++, i++) {
        WfcUtil_RectFromPosSize(p, data_ov001_02229eac, buf);
        if (WfcInput_IsTouchHeldIn(buf)) {
            if (sWfcNumPad->touchKey != i + 10) goto fail;
            WfcNumPad_SetPressedKey(i + 10);
            if (i != 0) goto end;
            sWfcNumPad->deleteHoldTimer++;
            if (sWfcNumPad->deleteHoldTimer < 0x28) return;
            if (sWfcNumPad->deleteEnabled == 0) {
                WfcSound_Play(9);
                sWfcNumPad->touchKey = -1;
                return;
            }
            sWfcNumPad->inputKey = 0x10;
            sWfcNumPad->deleteHoldTimer -= 7;
            return;
        }
    }
    for (p = data_ov001_02229ebc, i = 0; i < 2; p++, i++) {
        WfcUtil_RectFromPosSize(p, data_ov001_02229eb0, buf);
        if (WfcInput_IsTouchHeldIn(buf)) {
            if (sWfcNumPad->touchKey != i + 12) goto fail;
            WfcNumPad_SetPressedKey(i + 12);
            goto end;
        }
    }
fail:
    WfcNumPad_SetPressedKey(-1);
end:
    sWfcNumPad->deleteHoldTimer = 0;
}
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_SetPressedKey(s32 a) {
    if (a == sWfcNumPad->highlightKey) return;
    WfcNumPad_SetKeyHighlight(a, 1);
    WfcNumPad_SetKeyHighlight(sWfcNumPad->highlightKey, 0);
    sWfcNumPad->highlightKey = a;
}
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_HandlePad() {
    if (WfcInput_IsKeyRepeat(0x20)) WfcNumPad_MoveCursor(0);
    if (WfcInput_IsKeyRepeat(0x40)) WfcNumPad_MoveCursor(1);
    if (WfcInput_IsKeyRepeat(0x10)) WfcNumPad_MoveCursor(2);
    if (WfcInput_IsKeyRepeat(0x80)) WfcNumPad_MoveCursor(3);
    if (WfcInput_IsKeyPressed(1)) {
        Unk_ov001_0222dde0 *o = sWfcNumPad;
        s32 c = o->cursorKey;
        if (c < 10) {
            if (o->insertEnabled != 0) {
                o->inputKey = data_ov001_02229ec4[c];
                return;
            }
            WfcSound_Play(9);
            return;
        } else if (c - 10 < 2) {
            if ((c - 10 == 0 && o->deleteEnabled == 0) || (c - 10 == 1 && o->dotEnabled == 0)) {
                WfcSound_Play(9);
                return;
            }
            o->inputKey = data_ov001_02229ea0[c - 10];
            return;
        } else {
            o->inputKey = data_ov001_02229e9c[c - 12];
        }
    }
    if (WfcInput_IsKeyRepeat(2)) {
        Unk_ov001_0222dde0 *o = sWfcNumPad;
        if (o->deleteEnabled == 0) {
            if (o->errorSoundPlayed != 0) return;
            WfcSound_Play(9);
            sWfcNumPad->errorSoundPlayed = 1;
            return;
        }
        o->inputKey = 0x10;
        return;
    }
    if (WfcInput_IsKeyReleased(2)) {
        sWfcNumPad->errorSoundPlayed = 0;
    }
}
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_SetRowY(s32 a, s32 b) {
    u8 x[5] = {3, 3, 3, 1, 0};
    u8 y[5] = {0, 0, 0, 2, 0};
    u8 z[5] = {0, 0, 0, 0, 2};
    s32 k = a * 3;
    s32 i;
    for (i = 0; i < x[a]; i++) {
        Unk_ov001_0220b05c_Reg *r = sWfcNumPad->digitKeyOams[k];
        r->w0 &= 0xc1fffcff;
        u32 t = data_ov001_02229eec[k].x;
        r = sWfcNumPad->digitKeyOams[k];
        r->w0 = (r->w0 & 0xfe00ff00) | (u8)b | ((t & 0x1ff) << 16);
        k++;
    }
    if (a < 4) {
        WfcText_ArrangeObj(sWfcNumPad->rowCanvases[a], data_ov001_02229eec[a * 3].x, b, sWfcNumPad->rowTextObjs[a], 2);
    }
    for (i = 0; i < y[a]; i++) {
        Unk_ov001_0220b05c_Reg *r = sWfcNumPad->funcKeyOams[i];
        r->w0 &= 0xc1fffcff;
        u32 t = data_ov001_02229eb4[i].x;
        r = sWfcNumPad->funcKeyOams[i];
        r->w0 = (r->w0 & 0xfe00ff00) | (u8)b | ((t & 0x1ff) << 16);
    }
    for (i = 0; i < z[a]; i++) {
        WfcObj_SetAffineMode(sWfcNumPad->bottomButtons[i], -1, 0, 0);
        WfcObj_SetPos(sWfcNumPad->bottomButtons[i], -1, data_ov001_02229ebc[i].x, b);
    }
}
}
}

namespace N_0b05c {
extern "C" {
void WfcNumPad_SetKeyHighlight(s32 a, u32 b) {
    if (a < 0) return;
    if (a < 10) {
        Unk_ov001_0220b05c_Reg *r = sWfcNumPad->digitKeyOams[a];
        r->w0 = r->w0 & ~0xc00;
        r->h4 = (r->h4 & ~0xf000) | (data_ov001_02229e98[b] << 12);
    } else if (a - 10 < 2) {
        Unk_ov001_0220b05c_Reg *r = sWfcNumPad->funcKeyOams[a - 10];
        r->w0 = r->w0 & ~0xc00;
        r->h4 = (r->h4 & ~0xf000) | (data_ov001_02229e98[b] << 12);
    } else {
        WfcObj_SetModePalette(sWfcNumPad->bottomButtons[a - 12], -1, 0, data_ov001_02229e8c[b]);
    }
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_UpdateCursor() {
    s32 t;
    s32 idx = sWfcNumPad->cursorKey;
    if (idx <= 0xb) t = 0x44;
    else t = 0x45;
    void *r = WfcObj_GetOam(sWfcNumPad->cursorObj, 0);
    WfcCell_Copy(0, t, (u32)r);
    WfcObj_SetPriority(sWfcNumPad->cursorObj, -1, 2);
    s32 i2 = sWfcNumPad->cursorKey << 2;
    WfcObj_SetPos(sWfcNumPad->cursorObj, -1, *(u16 *)((u8 *)data_ov001_02229f14 + i2), *(u16 *)((u8 *)data_ov001_02229f16 + i2));
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_MoveCursor(s32 a) {
    Unk_ov001_0222dde0 *g = sWfcNumPad;
    s32 old = g->cursorKey;
    g->cursorKey = sWfcNumPadNavTable[old][a];
    g = sWfcNumPad;
    s32 n = g->cursorKey;
    if (n == 0xd && (a == 1 || a == 3)) {
        g->prevCursorKey = old;
    } else if (n == -1) {
        if (g->prevCursorKey == 1 || g->prevCursorKey == 0xa) {
            g->cursorKey = 0xa;
        } else {
            g->cursorKey = 0xb;
        }
    } else if (n == -2) {
        if (g->prevCursorKey == 1 || g->prevCursorKey == 0xa) {
            g->cursorKey = 1;
        } else {
            g->cursorKey = 2;
        }
    }
    WfcNumPad_UpdateCursor();
    WfcSound_Play(8);
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_SlideOutStep0(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = (Unk_ov001_0220a7f0_Reg *)WfcObj_GetOam(sWfcNumPad->bottomButtons[0], 0);
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    WfcNumPad_SetRowY(4, t);
    if (s[1] < 0xc0) return;
    WfcTask_SetFunc(a, (void *)WfcNumPad_SlideOutStep1);
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_SlideOutStep1(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = sWfcNumPad->digitKeyOams[9];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    WfcNumPad_SetRowY(3, t);
    if (s[1] < 0xc0) return;
    WfcTask_SetFunc(a, (void *)WfcNumPad_SlideOutStep2);
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_SlideOutStep2(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = sWfcNumPad->digitKeyOams[6];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    WfcNumPad_SetRowY(2, t);
    if (s[1] < 0xc0) return;
    WfcTask_SetFunc(a, (void *)WfcNumPad_SlideOutStep3);
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_SlideOutStep3(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = sWfcNumPad->digitKeyOams[3];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    WfcNumPad_SetRowY(1, t);
    if (s[1] < 0xc0) return;
    WfcTask_SetFunc(a, (void *)WfcNumPad_SlideOutStep4);
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_SlideOutStep4(s32 a) {
    volatile s32 s[2];
    Unk_ov001_0220a7f0_Reg *r = sWfcNumPad->digitKeyOams[0];
    s32 t;
    s[0] = (*(volatile u32 *)&r->w0 & 0x1ff0000) >> 16;
    t = *(volatile u32 *)&r->w0 & 0xff;
    s[1] = t;
    t += 0xc;
    s[1] = t;
    WfcNumPad_SetRowY(0, t);
    if (s[1] < 0xc0) return;
    WfcTask_SetFunc(a, (void *)WfcNumPad_Destroy);
}
}
}

namespace N_0a758 {
extern "C" {
void WfcNumPad_Destroy(s32 a) {
    s32 i;
    WfcTask_RequestDelete(0, a);
    for (i = 0; i < 4; i++) {
        WfcObj_Free(sWfcNumPad->rowTextObjs[i]);
        WfcText_DestroyObjCanvas(sWfcNumPad->rowCanvases[i]);
    }
    for (i = 0; i < 2; i++) {
        WfcObj_Free(sWfcNumPad->bottomButtons[i]);
    }
    for (i = 0; i < 2; i++) {
        WfcOam_FreeEntry(sWfcNumPad->funcKeyOams[i]);
    }
    for (i = 0; i < 10; i++) {
        WfcOam_FreeEntry(sWfcNumPad->digitKeyOams[i]);
    }
    WfcHeap_FreeAndClear(&sWfcNumPad);
}
}
}
