// mwcc-flags: -str reuse
#include "types.h"

// Base of the menu cursor sub-object at +0x18
class ScrollKnob {
public:
    virtual ~ScrollKnob();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void moveTo(s32 x, s32 y);
    BOOL areAnimsDone();
    u8 unk_04[0x44];
};

class MenuScrollKnob : public ScrollKnob {
public:
    MenuScrollKnob();
    ~MenuScrollKnob();
    s32 getGripY();
    s32 getGripX();
    void updateRelease();
    void release();
    void grab();
    void show();
    BOOL hitTest(s32 x, s32 y);
};

// 0x40 byte sprite/text object
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void destroyLabel();
    void createLabel(u32 a, u32 b, u32 c, u8 d, u8 e, s32 f);
    void redrawOffset(s32 a, s32 b);
    void redrawAligned(s32 a, s32 b);
    u8 unk_04[0x3c];
};

// 0x24 byte transfer object
class BgVramTask {
public:
    BgVramTask();
    virtual BOOL vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void requestPalette(u32 a, u8 b, u32 c);
    void cancel();
    u8 unk_04[0x20];
};

struct Unk_ov134_Date8 {
    u8 b[8];
    Unk_ov134_Date8() {
        *(u32 *)&b[0] = 0;
        *(u32 *)&b[4] = 0;
    }
};

class DateTimePicker {
public:
    DateTimePicker();
    ~DateTimePicker();
    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void blendListPalette(s32 t);
    void stepListScroll();
    s32 rowAtY(s32 y);
    BOOL moveListCursorDown();
    BOOL moveListCursorUp();
    BOOL pickListCursorRow();
    s32 navigateList(u32 pad);
    void setListCursorFromY(s32 y);
    s32 getListCursorY();
    s32 getListCursorX();
    void placeKnob();
    void syncScrollToKnob();
    void syncKnobToScroll();
    BOOL finishKnobRelease();
    void releaseKnob();
    void moveKnobByPad();
    void dragKnobToward(s32 x);
    void dragKnob(s32 x);
    void onKnobMoved();
    BOOL grabKnobByCursor();
    BOOL grabKnobAt(s32 x, s32 y);
    BOOL isRowDisabled(s32 v);
    BOOL isBelowMinimum(s32 v, u8 n);
    BOOL isAboveMaximum(s32 v, u8 n);
    BOOL applyPickedValue();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x10];
    /* 0x18 */ MenuScrollKnob unk_18;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ u32 unk_70;
    /* 0x74 */ void *unk_74;
    /* 0x78 */ u32 unk_78;
    /* 0x7c */ u8 *unk_7c;
    /* 0x80 */ s32 unk_80;
    /* 0x84 */ s32 unk_84;
    /* 0x88 */ s32 unk_88;
    /* 0x8c */ s32 unk_8c;
    /* 0x90 */ u16 unk_90;
    /* 0x92 */ u16 unk_92;
    /* 0x94 */ u16 unk_94;
    /* 0x96 */ u16 unk_96;
    /* 0x98 */ volatile u8 unk_98[6];
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ volatile u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ s8 unk_b7;
    /* 0xb8 */ Unk_ov134_Date8 unk_b8;
    /* 0xc0 */ Unk_ov134_Date8 unk_c0;
    /* 0xc8 */ Unk_ov134_Date8 unk_c8;
    /* 0xd0 */ Unk_ov134_Date8 unk_d0;
    /* 0xd8 */ LabelString unk_d8[0x11];
    /* 0x518 */ BgVramTask unk_518;
    /* 0x53c */ BgVramTask unk_53c;
    /* 0x560 */ BgVramTask unk_560;
    /* 0x584 */ u8 unk_584[0x800];
    /* 0xd84 */ u8 unk_d84[0x800];
    /* 0x1584 */ u8 unk_1584[0x800];
    /* 0x1d84 */ u8 unk_1d84[0x800];
    /* 0x2584 */ u8 unk_2584[0x20];
    /* 0x25a4 */ u8 unk_25a4[0x20];
};

typedef DateTimePicker S;

extern "C" {
void DateTimePicker_AnimCloseWindow(DateTimePicker *self);
void DateTimePicker_AnimOpenWindow(DateTimePicker *self);
s32 DateTimePicker_RedrawList(DateTimePicker *self);
void DateTimePicker_ApplyListScroll(DateTimePicker *self);
void DateTimePicker_SetListScroll(DateTimePicker *self, s32 a);
s32 DateTimePicker_HitTestList(DateTimePicker *self, s32 x, s32 y);
s32 DateTimePicker_UpdateListClose(DateTimePicker *self);
void DateTimePicker_CancelList(DateTimePicker *self);
void DateTimePicker_DecideList(DateTimePicker *self);
s32 DateTimePicker_HitTestRow(DateTimePicker *self, s32 x, s32 y);
s32 DateTimePicker_UpdateListOpen(DateTimePicker *self);
void DateTimePicker_OpenList(DateTimePicker *self, s32 idx);
void DateTimePicker_AdvanceCursorField(DateTimePicker *self);
void DateTimePicker_SetCursorField(DateTimePicker *self, u8 v);
u8 DateTimePicker_GetCursorField(DateTimePicker *self);
void DateTimePicker_TickFieldFlash(DateTimePicker *self);
void DateTimePicker_ResetFieldPalettes(DateTimePicker *self);
void DateTimePicker_SetDropButtonPalette(DateTimePicker *self, s32 a, s32 b);
void DateTimePicker_SetFieldPalette(DateTimePicker *self, s32 idx, s32 x);
s32 DateTimePicker_GetFieldBottom(DateTimePicker *self, s32 i);
s32 DateTimePicker_GetFieldRight(DateTimePicker *self, s32 i);
s32 DateTimePicker_GetFieldWidth(DateTimePicker *self, s32 i);
s32 DateTimePicker_GetFieldTop(DateTimePicker *self, s32 i);
s32 DateTimePicker_GetFieldLeft(DateTimePicker *self, s32 i);
s32 DateTimePicker_HitTestTimeField(DateTimePicker *self, s32 x, s32 y);
s32 DateTimePicker_HitTestMonthDayField(DateTimePicker *self, s32 x, s32 y);
s32 DateTimePicker_HitTestDateField(DateTimePicker *self, s32 x, s32 y);
s32 DateTimePicker_HitTestField(DateTimePicker *self, s32 x, s32 y);
BOOL DateTimePicker_StepHandAnim(DateTimePicker *self);
BOOL DateTimePicker_Approach(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep);
void DateTimePicker_AddMinutes(DateTimePicker *self, s32 delta);
BOOL DateTimePicker_IsInClockFace(void *self, s32 x, s32 y, s32 r);
s32 DateTimePicker_AngleDiff(void *self, s32 a, s32 b);
s32 DateTimePicker_AngleDeltaAt(DateTimePicker *self, s32 x, s32 y, s32 t);
s32 DateTimePicker_AngleAt(void *self, s32 x, s32 y);
void DateTimePicker_SetHandsFromMinutes(DateTimePicker *self);
void DateTimePicker_SyncHands(DateTimePicker *self);
void DateTimePicker_SetHands(DateTimePicker *self, u8 a, u8 b);
void DateTimePicker_DragHourHand(DateTimePicker *self, s32 x, s32 y);
void DateTimePicker_DragMinuteHand(DateTimePicker *self, s32 x, s32 y);
BOOL DateTimePicker_UpdateHandAnim(DateTimePicker *self);
BOOL DateTimePicker_EndHandDrag(DateTimePicker *self);
void DateTimePicker_UpdateHandDrag(DateTimePicker *self, s32 x, s32 y);
s32 DateTimePicker_GrabHand(S *s, u32 a, u32 b);
void DateTimePicker_Draw(S *s, u8 *a, u8 *b);
void DateTimePicker_AddListNumberText(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void DateTimePicker_AddNumberText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void DateTimePicker_AddPaddedNumberText(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void DateTimePicker_AddListHourText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void DateTimePicker_AddListDayText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void DateTimePicker_AddMonthText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void DateTimePicker_AddNamedTextAt(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g, s32 h, s32 i);
void DateTimePicker_AddNamedText(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g);
void DateTimePicker_AddMenuTextAt(S *s, u32 a, u32 b, u32 c, u8 d, u32 e);
void DateTimePicker_AddMenuText(S *s, u32 a, u32 b, u32 c, u8 d, s32 e, u8 f, u8 g);
void DateTimePicker_ReleaseLabels(S *s);
void DateTimePicker_DrawPickedValue(S *s);
void DateTimePicker_DrawMinute(S *s);
void DateTimePicker_DrawHour(S *s);
void *DateTimePicker_AllocLabel(S *s);
void DateTimePicker_DrawDay(S *s);
u32 DateTimePicker_GetDayStringId(S *s, u32 a);
void DateTimePicker_DrawMonth(S *s);
u32 DateTimePicker_GetMonthStringId(S *s, u32 a);
void DateTimePicker_DrawYear(S *s);
void DateTimePicker_SetField(S *s, u32 idx, u32 v);
u32 DateTimePicker_GetFieldOf(S *s, u32 idx, u8 *p);
u32 DateTimePicker_GetField(S *s, u32 idx);
void DateTimePicker_DrawField(S *s, u32 idx);
void DateTimePicker_DrawFields(S *s);
void DateTimePicker_DrawWeekday(S *s);
void DateTimePicker_LoadObjGraphics(S *s);
void DateTimePicker_DrawTitleAndFields(S *s, u8 a);
void DateTimePicker_LoadBgGraphics(S *s);
BOOL DateTimePicker_IsBeforeStart(S *s);
void DateTimePicker_GetDateTime(S *s, void *src);
void DateTimePicker_EndFrame(S *s);
void DateTimePicker_BeginFrame(S *s);
void DateTimePicker_Shutdown(S *s);
void DateTimePicker_EnableMinLimit(S *s);
void DateTimePicker_Init(S *s, u32 a, u32 b, u32 c, u8 d);

extern u16 gPad;
extern s32 gCurrentHeap;
void Gfx2d_SetWindowRect(u32 a, u32 b, u32 c, u32 d, u32 e);
void Gfx2d_SetLayerOffset(u32 a, s32 b, s32 c);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 _s32_div_f(s32 a, s32 b);
void BgScreen_SetRectPalette(void *map, s32 a, s32 b, s32 c, s32 d, s32 e);
void Snd_PlaySe(s32 a);
void Gfx2d_EnableSubWindows(u32 a);
void Gfx2d_DisableSubWindows(u32 a);
void Gfx2d_HideLayer(u32 a);
void Gfx2d_ShowLayer(u32 a);
void func_02004008(s32 a);
void Snd_StopSe(s32 a, s32 b);
void Gfx2d_SetSubWin0Planes(u32 a, u32 b);
u32 Gfx2d_GetLayerPlaneMask(u32 a);
void Gfx2d_SetSubWinOutPlanes(u32 a);
s32 Date_GetDaysInMonth(u32 a, u32 b);
s32 Date_GetWeekday(u32 a, u32 b, u32 c);
void func_020e761c(void *p, s32 a, s32 b);
void DateTime_SubDays(void *p, s32 a);
void DateTime_AddDays(void *p, s32 a);
void DateTime_AddMinutes(void *p, s32 a);
void DateTime_SubMinutes(void *p, s32 a);
void DateTime_SubHours(void *p, s32 a);
void DateTime_AddHours(void *p, s32 a);
s32 DateTime_Compare(void *a, void *b, s32 c);
s32 DateTime_DiffMinutes(void *a, void *b);
void Clock_GetDateTime(void *p);
s32 func_020e7b98(s32 a, s32 b);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
void Menu_PlayScrollGrabSe(void *p);
void Menu_PlayScrollTickSe(void *p);
void Oam_DrawObj(u32 a, const void *b, void *c, void *d, s32 e, s32 f, s32 g);
void Oam_DrawObjRotated(u32 a, const void *b, void *c, void *d, s32 e, s32 f, s32 g, u32 h, s32 i);
void Oam_DrawCell(u32 a, const void *b, void *c, u32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void String_FormatNumberWrapper(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void String_LoadByIndex(void *a, const void *c, u32 v);
void String_Load2dMenu(void *a, u32 v);
void Gfx2d_LoadCharRange(void *a, s32 b, s32 c, s32 d, s32 e);
void Gfx2d_LoadCharFile(const void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadScreenFile(const void *name, s32 h, s32 a);
void Gfx2d_LoadPaletteFileSlot(const void *name, s32 h, s32 a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const void *name, s32 h, s32 a, s32 b, s32 c, s32 d);
void File_LoadToBuffer(const void *src, void *dst, s32 n);
void *File_LoadAlloc(const void *a, s32 h, s32 b, u32 *out);
void Heap_Free(s32 h, void *p);
extern "C" const u8 sFieldNameTextIds[6];
extern "C" const u8 sFieldValueCounts[6];
extern "C" const u8 sWeekdayTextIds[7];
extern "C" const u8 sMonthStringIds[12];
extern "C" const u32 sFieldTopDefault[6];
extern "C" const u32 sFieldWidths[6];
extern "C" const u32 sFieldLeftBirthday[6];
extern "C" const u32 sFieldLeftDefault[6];
extern "C" const u32 sFieldLeftTime[6];
extern "C" const u32 sFieldTopBirthday[6];
extern "C" const u32 sFieldTopTime[6];
extern "C" u32 sObjVariantFiles[1];
extern "C" u32 data_ov134_02294d44[2];
extern "C" u32 data_ov134_02294d4c[2];
extern "C" u32 data_ov134_02294d54[4];
extern "C" u32 sBgPaletteFiles[4];
extern "C" u32 data_ov134_02294d74[4];
extern "C" u32 data_ov134_02294d84[4];
extern "C" u32 sFieldScreenFiles[4];
extern "C" u32 data_ov134_02294da4[4];
extern "C" u32 data_ov134_02294db4[4];
extern "C" u32 data_ov134_02294dc4[4];
extern "C" char data_ov134_02294dd4[19];
extern "C" char data_ov134_02294de8[19];
extern "C" char data_ov134_02294dfc[19];
extern "C" char data_ov134_02294e10[19];
extern "C" char data_ov134_02294e24[22];
extern "C" char data_ov134_02294e3c[22];
extern "C" char data_ov134_02294e54[22];
extern "C" char data_ov134_02294e6c[22];
extern "C" u32 data_ov134_02294e84[6];
extern "C" u32 data_ov134_02294e9c[6];
extern "C" u32 data_ov134_02294eb4[6];
extern "C" u32 data_ov134_02294ecc[6];
extern "C" u32 data_ov134_02294ee4[6];
extern "C" u32 data_ov134_02294efc[6];
extern "C" u32 data_ov134_02294f14[6];
extern "C" u32 data_ov134_02294f2c[6];
extern "C" u32 data_ov134_02294f44[6];
extern "C" u32 data_ov134_02294f5c[6];
extern "C" char data_ov134_02294f74[30];
extern "C" u32 data_ov134_02294f94[8];
extern "C" u32 data_ov134_02294fb4[8];
extern "C" u32 data_ov134_02294fd4[8];
extern "C" u32 data_ov134_02294ff4[8];
extern "C" u32 data_ov134_02295014[8];
extern "C" u32 data_ov134_02295034[8];
extern "C" u32 data_ov134_02295054[8];
extern "C" u32 data_ov134_02295074[12];
extern "C" u32 data_ov134_022950a4[12];
extern "C" u32 data_ov134_022950d4[12];
extern "C" u32 data_ov134_02295104[12];
extern "C" u32 data_ov134_02295134[12];
extern "C" u32 data_ov134_02295164[12];
extern "C" u32 data_ov134_02295194[12];
extern "C" u32 data_ov134_022951c4[16];
extern "C" u32 data_ov134_02295204[28];
}

static inline s32 Unk_ov134_02293510_Hi(DateTimePicker *self, s32 i, s32 off) { return DateTimePicker_GetFieldRight(self, i) + off; }

DateTimePicker::DateTimePicker() {
}

DateTimePicker::~DateTimePicker() {
}

extern "C" void DateTimePicker_Init(S *s, u32 a, u32 b, u32 c, u8 d) {
    s->unk_90 = 0;
    s->unk_b7 = 0;
    s->unk_a0 = a;
    s->unk_98[0] = 0;
    switch (s->unk_a0) {
    case 0:
    case 1:
        s->unk_a1 = 0;
        break;
    case 2:
        s->unk_a1 = 1;
        break;
    case 3:
        s->unk_a1 = 2;
        break;
    }
    s->unk_a2 = b;
    s->unk_a3 = c;
    s->unk_a4 = d;
    s->unk_70 = 0;
    s->unk_74 = 0;
    s->unk_78 = 0;
    s->unk_18.show();
    s->unk_04 = 0;
    switch (s->unk_a0) {
    case 0:
    case 3:
        s->unk_b1 = 0;
        break;
    case 1:
        s->unk_b1 = 3;
        s->setFlags(0x40);
        s->setFlags(0x80);
        break;
    case 2:
        s->unk_b1 = 1;
        break;
    }
    if (s->unk_a0 == 2) {
        *(u32 *)&s->unk_b8.b[0] = 0;
        *(u32 *)&s->unk_b8.b[4] = 0;
        s->unk_b8.b[5] = 1;
        s->unk_b8.b[4] = 1;
        s->unk_b8.b[3] = 1;
    } else {
        Clock_GetDateTime(s->unk_b8.b);
        s->unk_b8.b[0] = 0;
        if (s->unk_a0 == 3) {
            DateTime_AddDays(s->unk_b8.b, 1);
        }
        MI_CpuCopy8(s->unk_b8.b, s->unk_c8.b, 8);
        MI_CpuCopy8(s->unk_b8.b, s->unk_d0.b, 8);
        DateTime_AddHours(s->unk_d0.b, 0xc);
        s->unk_b2 = s->unk_c8.b[2];
        s->unk_b3 = s->unk_d0.b[2];
        s->unk_b4 = s->unk_c8.b[1];
        DateTimePicker_SyncHands(s);
    }
}

extern "C" void DateTimePicker_EnableMinLimit(S *s) {
    s->setFlags(0x80);
}

extern "C" void DateTimePicker_Shutdown(S *s) {
    DateTimePicker_ReleaseLabels(s);
    Gfx2d_HideLayer(s->unk_a4);
    s->unk_518.cancel();
    s->unk_53c.cancel();
    s->unk_560.cancel();
}

extern "C" void DateTimePicker_BeginFrame(S *s) {
    DateTimePicker_ReleaseLabels(s);
    s->unk_518.cancel();
    s->unk_53c.cancel();
    s->unk_560.cancel();
    DateTimePicker_TickFieldFlash(s);
    s->unk_18.vfunc_0c();
}

extern "C" void DateTimePicker_EndFrame(S *s) {
    s->stepListScroll();
    s->unk_18.updateRelease();
    if (s->testFlags(2)) {
        if (s->unk_518.requestScreen((u32)s->unk_584, s->unk_a3, 0x800, 0)) {
            s->clearFlags(2);
        }
    }
    if (s->testFlags(1)) {
        if (s->unk_53c.requestScreen((u32)s->unk_1d84, s->unk_a4, 0x800, 0)) {
            s->clearFlags(1);
        }
    }
    s32 t = s->unk_b7;
    if (t > 0) {
        if (gPad & 0x40) {
            s->unk_b7 = 0;
        }
    } else if (t < 0) {
        if (gPad & 0x80) {
            s->unk_b7 = 0;
        }
    }
}

extern "C" void DateTimePicker_GetDateTime(S *s, void *src) {
    MI_CpuCopy8(s->unk_b8.b, src, 8);
}

extern "C" BOOL DateTimePicker_IsBeforeStart(S *s) {
    if (DateTime_Compare(s->unk_c8.b, s->unk_b8.b, 0x3f) == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void DateTimePicker_LoadBgGraphics(S *s) {
    s32 h = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/clock/b_tim_bg.bch", h, s->unk_a2, 0x10, 0x10, 0x80);
    Gfx2d_LoadPaletteFile("menu/clock/b_tim_bg.bpl", h, s->unk_a2, 1, 1, 10);
    Gfx2d_LoadPaletteFile((const void *)sBgPaletteFiles[s->unk_a0], h, s->unk_a2, 1, 1, 2);
    Gfx2d_LoadScreenFile("menu/clock/bga.bsc", h, s->unk_a2);
    File_LoadToBuffer((const void *)sFieldScreenFiles[s->unk_a0], s->unk_584, 0x800);
    DateTimePicker_ResetFieldPalettes(s);
    File_LoadToBuffer("menu/clock/b_tim_b1_bg.bsc", s->unk_d84, 0x800);
    File_LoadToBuffer("menu/clock/b_tim_bg_9.bpl", s->unk_2584, 0x20);
}

extern "C" void DateTimePicker_DrawTitleAndFields(S *s, u8 a) {
    DateTimePicker_DrawFields(s);
    DateTimePicker_AddMenuText(s, s->unk_a2, 0x54, 0x10, a, 1, 0xf, 0xe);
}

extern "C" void DateTimePicker_LoadObjGraphics(S *s) {
    s32 h = gCurrentHeap;
    Gfx2d_LoadPaletteFile("menu/clock/b_tim_obj.bpl", h, 8, 4, 4, 10);
    Gfx2d_LoadCharFile("menu/clock/b_tim_obj.bch", h, 8, 0xc0, 0xc0, 0x1df);
    u32 v = s->unk_a1;
    u32 out;
    u8 *buf = (u8 *)File_LoadAlloc((const void *)sObjVariantFiles[v >> 2], h, -4, &out);
    u8 *p = buf + ((s32)v % 4) * 0x100;
    s32 x = 0xc0;
    s32 i = 0;
    do {
        Gfx2d_LoadCharRange(p, 8, x, x, x + 7);
        p += 0x400;
        x += 0x20;
        i++;
    } while (i < 8);
    Heap_Free(h, buf);
    Gfx2d_LoadPaletteFileSlot("menu/clock/b_tim_ten0_obj.bpl", h, 8, s->unk_a1, 4);
}

extern "C" void DateTimePicker_DrawWeekday(S *s) {
    s32 i = Date_GetWeekday(s->unk_b8.b[5], s->unk_b8.b[4], s->unk_b8.b[3]);
    DateTimePicker_AddMenuText(s, s->unk_a3, 0x1a8, 7, sWeekdayTextIds[i], 1, 0xf, 0);
}

extern "C" void DateTimePicker_DrawFields(S *s) {
    DateTimePicker_DrawYear(s);
    DateTimePicker_DrawMonth(s);
    DateTimePicker_DrawDay(s);
    DateTimePicker_DrawHour(s);
    DateTimePicker_DrawMinute(s);
    DateTimePicker_DrawWeekday(s);
}

extern "C" void DateTimePicker_DrawField(S *s, u32 idx) {
    switch (idx) {
    case 0:
        DateTimePicker_DrawYear(s);
        break;
    case 1:
        DateTimePicker_DrawMonth(s);
        break;
    case 2:
        DateTimePicker_DrawDay(s);
        break;
    case 3:
        DateTimePicker_DrawHour(s);
        break;
    case 4:
        DateTimePicker_DrawMinute(s);
        break;
    case 5:
        DateTimePicker_DrawWeekday(s);
        break;
    }
}

extern "C" u32 DateTimePicker_GetField(S *s, u32 idx) {
    return DateTimePicker_GetFieldOf(s, idx, s->unk_b8.b);
}

extern "C" u32 DateTimePicker_GetFieldOf(S *s, u32 idx, u8 *p) {
    switch (idx) {
    case 0:
        return p[5];
    case 1:
        return p[4];
    case 2:
        return p[3];
    case 3:
        return p[2];
    case 4:
        return p[1];
    case 5:
        return 0;
    }
    return 0xff;
}

extern "C" void DateTimePicker_SetField(S *s, u32 idx, u32 v) {
    switch (idx) {
    case 0:
        s->unk_b8.b[5] = v;
        break;
    case 1:
        s->unk_b8.b[4] = v + 1;
        break;
    case 2:
        s->unk_b8.b[3] = v + 1;
        break;
    case 3:
        s->unk_b8.b[2] = v;
        break;
    case 4:
        s->unk_b8.b[1] = v;
        break;
    case 5:
        break;
    }
}

extern "C" void DateTimePicker_DrawYear(S *s) {
    DateTimePicker_AddNumberText(s, s->unk_a3, 0x180, 4, 0x7d0 + s->unk_b8.b[5], 0xf, 0);
}

extern "C" u32 DateTimePicker_GetMonthStringId(S *s, u32 a) {
    return sMonthStringIds[a - 1];
}

extern "C" void DateTimePicker_DrawMonth(S *s) {
    u32 r = DateTimePicker_GetMonthStringId(s, s->unk_b8.b[4]);
    DateTimePicker_AddNamedText(s, s->unk_a3, 0x18e, 8, "st_day_month", r, 0xf, 0);
}

extern "C" u32 DateTimePicker_GetDayStringId(S *s, u32 a) {
    return (u8)(a + 0xc);
}

extern "C" void DateTimePicker_DrawDay(S *s) {
    u32 r = DateTimePicker_GetDayStringId(s, s->unk_b8.b[3]);
    DateTimePicker_AddNamedText(s, s->unk_a3, 0x19e, 5, "st_day_month", r, 0xf, 0);
}

extern "C" void DateTimePicker_DrawHour(S *s) {
    u32 r4 = *((u8 *)s + 0xba);
    u32 r1 = 0x37;
    if ((s32)r4 >= 0xc) {
        r1 = 0x38;
    }
    DateTimePicker_AddNamedText(s, s->unk_a3, 0x1ce, 4, "st_general", r1, 0xf, 0);
    if ((s32)r4 > 0xc) {
        r4 -= 0xc;
    }
    if (r4 == 0) {
        r4 = 0xc;
    }
    DateTimePicker_AddNumberText(s, s->unk_a3, 0x1b6, 6, r4, 0xf, 0);
}

extern "C" void DateTimePicker_DrawMinute(S *s) {
    DateTimePicker_AddPaddedNumberText(s, s->unk_a3, 0x1c2, 6, *((u8 *)s + 0xb9), 0, 0xf, 0);
}

extern "C" void DateTimePicker_DrawPickedValue(S *s) {
    u32 r5 = DateTimePicker_GetFieldWidth(s, s->unk_a5);
    u32 r1 = s->unk_ad;
    u32 r2 = s->unk_a5;
    switch (r2) {
    case 0:
        r1 += 0x7d0;
        break;
    case 1:
    case 2:
        r1 += 1;
        break;
    }
    switch (r2) {
    case 1:
        DateTimePicker_AddNamedText(s, 8, 0xcb, r5, "st_day_month", DateTimePicker_GetMonthStringId(s, r1), 0xf, 0);
        break;
    case 2:
        DateTimePicker_AddNamedText(s, 8, 0xcb, r5, "st_day_month", DateTimePicker_GetDayStringId(s, r1), 0xf, 0);
        break;
    case 3:
        DateTimePicker_AddNamedTextAt(s, 8, 0xcb, r5, "st_general", r1 + 0x1e, 0xf, 0, 0, 6);
        break;
    case 4:
        DateTimePicker_AddPaddedNumberText(s, 8, 0xcb, r5, r1, 0, 0xf, 0);
        break;
    case 0:
    default:
        DateTimePicker_AddNumberText(s, 8, 0xcb, r5, r1, 0xf, 0);
        break;
    }
}

extern "C" void DateTimePicker_ReleaseLabels(S *s) {
    s32 i;
    s->unk_9f = 0;
    for (i = 0; i < 0x11; i++) {
        ((LabelString *)((u8 *)s + 0xd8))[i].destroyLabel();
    }
}

extern "C" void *DateTimePicker_AllocLabel(S *s) {
    if (*(volatile u8 *)&s->unk_9f >= 0x11) {
        return (u8 *)s + 0x4d8;
    }
    s->unk_9f = s->unk_9f + 1;
    return (u8 *)s + 0xd8 + (s->unk_9f - 1) * 0x40;
}

extern "C" void DateTimePicker_AddMenuText(S *s, u32 a, u32 b, u32 c, u8 d, s32 e, u8 f, u8 g) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_Load2dMenu(p, d);
    p->createLabel(a, b, c, f, g, 0);
    p->redrawAligned(e, 0);
}

extern "C" void DateTimePicker_AddMenuTextAt(S *s, u32 a, u32 b, u32 c, u8 d, u32 e) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_Load2dMenu(p, d);
    p->createLabel(a, b, c, 0xf, 0, 0);
    p->redrawOffset(1, -((c - e) * 4));
}

extern "C" void DateTimePicker_AddNamedText(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_LoadByIndex(p, d, e);
    p->createLabel(a, b, c, f, g, 0);
    p->redrawAligned(1, 0);
}

extern "C" void DateTimePicker_AddNamedTextAt(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g, s32 h, s32 i) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_LoadByIndex(p, d, e);
    p->createLabel(a, b, c, f, g, 0);
    p->redrawOffset(h, i);
}

extern "C" void DateTimePicker_AddMonthText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    DateTimePicker_AddNamedText(s, a, b, c, "st_day_month", DateTimePicker_GetMonthStringId(s, d), e, f);
}

extern "C" void DateTimePicker_AddListDayText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_LoadByIndex(p, "st_day_month", DateTimePicker_GetDayStringId(s, d));
    p->createLabel(a, b, c, e, f, 0);
    p->redrawOffset(1, (c - 5) * 4);
}

extern "C" void DateTimePicker_AddListHourText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_LoadByIndex(p, "st_general", d + 0x1e);
    p->createLabel(a, b, c, e, f, 0);
    p->redrawOffset(0, (c - 6) * 8 + 6);
}

extern "C" void DateTimePicker_AddPaddedNumberText(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_FormatNumberWrapper(p, d, 2, 6, 0, 0);
    p->createLabel(a, b, c, f, g, 0);
    if (e != 0) {
        p->redrawOffset(1, (c - e) * 4);
    } else {
        p->redrawAligned(1, 0);
    }
}

extern "C" void DateTimePicker_AddNumberText(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_FormatNumberWrapper(p, d, 4, 0, 0, 0);
    p->createLabel(a, b, c, e, f, 0);
    p->redrawAligned(1, 0);
}

extern "C" void DateTimePicker_AddListNumberText(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g) {
    LabelString *p = (LabelString *)DateTimePicker_AllocLabel(s);
    String_FormatNumberWrapper(p, d, 4, 0, 0, 0);
    p->createLabel(a, b, c, f, g, 0);
    p->redrawOffset(1, (c - e) * 4);
}

extern "C" void DateTimePicker_Draw(S *s, u8 *a, u8 *b) {
    u8 *r6 = a + 0x80;
    u8 *r7 = b + 0x60;
    if (s->unk_a1 == 0) {
        void *p = a + 0x38;
        u8 *q = b + 0x34;
        Oam_DrawObj(1, data_ov134_02294e84, p, q, -1, 2, 0);
        Oam_DrawObjRotated(1, data_ov134_02294e84 + 2, p, q, -1, 2, 0x1000, s->unk_92, 0);
        Oam_DrawObjRotated(1, data_ov134_02294e84 + 4, p, q, -1, 2, 0x1000, s->unk_94, 0);
    }
    Oam_DrawCell(1, data_ov134_02294d44, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    if (s->testFlags(4)) {
        s->unk_18.vfunc_08();
    }
    if (s->unk_74 != 0) {
        Oam_DrawCell(1, data_ov134_02294d74, s->unk_7c - 8, s->unk_b5, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, s->unk_74, s->unk_7c - 8, s->unk_b5, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (s->unk_78 != 0) {
        Oam_DrawCell(1, (void *)s->unk_78, s->unk_7c - 8, s->unk_b6, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (s->unk_70 != 0) {
        Oam_DrawCell(1, (void *)s->unk_70, s->unk_7c, s->unk_80, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    switch (s->unk_a0) {
    case 0:
        Oam_DrawCell(1, data_ov134_02294db4, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    case 3: {
        s32 i;
        Oam_DrawCell(1, data_ov134_02294f44, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        for (i = 0; i < 5; i++) {
            if (s->unk_a0 == 3) {
                if (i == 3) continue;
                if (i == 4) continue;
            }
            Oam_DrawCell(1, (const void *)data_ov134_02294e9c[i], r6, (u32)r7, i == s->unk_b1 ? 7 : -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        Oam_DrawCell(1, (const void *)data_ov134_02294e9c[5], r6, (u32)r7, s->testFlags(8) ? 10 : 9, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    case 2: {
        s32 v1, v2;
        u32 b1 = s->unk_b1;
        if (b1 == 1) {
            v1 = 7;
            v2 = 6;
        } else if (b1 == 2) {
            v2 = 7;
            v1 = 6;
        } else {
            v1 = 6;
            v2 = 6;
        }
        Oam_DrawCell(1, data_ov134_02295104, r6, (u32)r7, v1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov134_02295034, r6, (u32)r7, v2, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    case 1: {
        s32 v1, v2;
        u32 b1;
        Oam_DrawCell(1, data_ov134_02294d54, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov134_02295204, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        b1 = s->unk_b1;
        if (b1 == 3) {
            v1 = 7;
            v2 = 6;
        } else if (b1 == 4) {
            v2 = 7;
            v1 = 6;
        } else {
            v1 = 6;
            v2 = 6;
        }
        Oam_DrawCell(1, data_ov134_022950d4, r6, (u32)r7, v1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        Oam_DrawCell(1, data_ov134_02295014, r6, (u32)r7, v2, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    }
}

extern "C" s32 DateTimePicker_GrabHand(S *s, u32 a, u32 b) {
    s32 r6, r0;
    s32 r4;
    if (!DateTimePicker_IsInClockFace(s, a, b, 0x28)) {
        return FALSE;
    }
    r6 = DateTimePicker_AngleAt(s, a, b);
    r0 = DateTimePicker_AngleDiff(s, r6, s->unk_92);
    r4 = 0;
    if (r0 >= -0x800 && r0 < 0x800) {
        s->unk_9e = r4;
        r4 = 1;
        s->unk_96 = s->unk_92;
    } else {
        r0 = DateTimePicker_AngleDiff(s, r6, s->unk_94);
        if (r0 >= -0x800 && r0 < 0x800) {
            r4 = 1;
            s->unk_9e = r4;
            s->unk_96 = s->unk_94;
        }
    }
    if (r4) {
        DateTimePicker_SetCursorField(s, 6);
        MI_CpuCopy8(s->unk_b8.b, (u8 *)s + 0xc0, 8);
        s->clearFlags(0x30);
        return TRUE;
    }
    return FALSE;
}

extern "C" void DateTimePicker_UpdateHandDrag(DateTimePicker *self, s32 x, s32 y) {
    u32 w;
    s32 t;
    switch (self->unk_9e) {
    case 0:
        DateTimePicker_DragMinuteHand(self, x, y);
        w = self->unk_92;
        break;
    case 1:
        DateTimePicker_DragHourHand(self, x, y);
        w = self->unk_94;
        break;
    default:
        return;
    }
    t = DateTimePicker_AngleDiff(self, self->unk_96, w);
    if (t < -1000 || t > 1000) {
        Snd_PlaySe(0x1a);
        self->unk_96 = w;
    }
}

extern "C" BOOL DateTimePicker_EndHandDrag(DateTimePicker *self) {
    s32 a;
    DateTimePicker_ResetFieldPalettes(self);
    if (self->testFlags(0x40) && self->testFlags(0x10)) {
        a = DateTimePicker_GetField(self, 4);
        self->unk_88 = a + DateTimePicker_GetField(self, 3) * 0x3c;
        while (self->unk_88 > self->unk_84) {
            self->unk_88 = self->unk_88 - 0x2d0;
        }
        func_02004008(0x54);
        return TRUE;
    }
    if (self->testFlags(0x80) && self->testFlags(0x20)) {
        a = DateTimePicker_GetField(self, 4);
        self->unk_88 = a + DateTimePicker_GetField(self, 3) * 0x3c;
        while (self->unk_88 < self->unk_84) {
            self->unk_88 = self->unk_88 + 0x2d0;
        }
        func_02004008(0x54);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL DateTimePicker_UpdateHandAnim(DateTimePicker *self) {
    if (DateTimePicker_StepHandAnim(self)) {
        DateTimePicker_SyncHands(self);
        return TRUE;
    }
    return FALSE;
}

extern "C" void DateTimePicker_DragMinuteHand(DateTimePicker *self, s32 x, s32 y) {
    s32 t = DateTimePicker_AngleDeltaAt(self, x, y, self->unk_92);
    if (t != 0) {
        DateTimePicker_AddMinutes(self, (t * 0x3c) >> 16);
    }
}

extern "C" void DateTimePicker_DragHourHand(DateTimePicker *self, s32 x, s32 y) {
    s32 t = DateTimePicker_AngleDeltaAt(self, x, y, self->unk_94);
    if (t != 0) {
        DateTimePicker_AddMinutes(self, (t * 0x2d0) >> 16);
    }
}

extern "C" void DateTimePicker_SetHands(DateTimePicker *self, u8 a, u8 b) {
    self->unk_84 = a * 0x3c + b;
    if (a >= 0xc) {
        a = a - 0xc;
    }
    self->unk_94 = ((b + a * 0x3c) << 16) / 0x2d0;
    self->unk_92 = b * 0x444;
}

extern "C" void DateTimePicker_SyncHands(DateTimePicker *self) {
    DateTimePicker_SetHands(self, self->unk_b8.b[2], self->unk_b8.b[1]);
}

extern "C" void DateTimePicker_SetHandsFromMinutes(DateTimePicker *self) {
    s32 t = self->unk_84;
    while (t < 0) t += 0x2d0;
    while (t >= 0x2d0) t -= 0x2d0;
    self->unk_94 = (t << 16) / 0x2d0;
    self->unk_92 = (t % 0x3c) * 0x444;
}

extern "C" s32 DateTimePicker_AngleAt(void *self, s32 x, s32 y) {
    return func_020e7b98((x - 0x38) << 12, -(y - 0x34) << 12);
}

extern "C" s32 DateTimePicker_AngleDeltaAt(DateTimePicker *self, s32 x, s32 y, s32 t) {
    if (x == 0x38 && y == 0x34) {
        return 0;
    }
    return DateTimePicker_AngleDiff(self, DateTimePicker_AngleAt(self, x, y), t);
}

extern "C" s32 DateTimePicker_AngleDiff(void *self, s32 a, s32 b) {
    s32 x = a - b;
    s32 y = b - a;
    while (x < 0) x += 0x10000;
    while (x >= 0x10000) x -= 0x10000;
    while (y < 0) y += 0x10000;
    while (y >= 0x10000) y -= 0x10000;
    if (x > y) {
        x = -y;
    }
    return x;
}

extern "C" BOOL DateTimePicker_IsInClockFace(void *self, s32 x, s32 y, s32 r) {
    s32 dx = x - 0x38;
    dx = dx * dx;
    s32 dy = y - 0x34;
    dy = dy * dy;
    if (dx + dy < r * r) return TRUE;
    return FALSE;
}

extern "C" void DateTimePicker_AddMinutes(DateTimePicker *self, s32 delta) {
    u8 buf[6];
    s32 i;
    BOOL r;
    s32 v;
    u8 *pc;
    if (delta == 0) return;
    for (i = 0; i <= 4; i++) {
        buf[i] = DateTimePicker_GetField(self, i);
    }
    buf[5] = 0;
    if (delta > 0) {
        DateTime_AddMinutes(self->unk_c0.b, delta);
    } else {
        DateTime_SubMinutes(self->unk_c0.b, -delta);
    }
    r = TRUE;
    if (self->testFlags(0x40)) {
        if (DateTime_Compare(self->unk_d0.b, self->unk_c0.b, 0x3f) == -1) {
            v = DateTime_DiffMinutes(self->unk_d0.b, self->unk_c0.b);
            r = FALSE;
            MI_CpuCopy8(self->unk_d0.b, self->unk_b8.b, 8);
            self->setFlags(0x10);
            pc = self->unk_c0.b;
            while (v >= 0x2d0) {
                DateTime_SubHours(pc, 0xc);
                v -= 0x2d0;
            }
        } else {
            self->clearFlags(0x10);
        }
    }
    if (self->testFlags(0x80)) {
        if (DateTime_Compare(self->unk_c8.b, self->unk_c0.b, 0x3f) == 1) {
            v = DateTime_DiffMinutes(self->unk_c0.b, self->unk_c8.b);
            r = FALSE;
            MI_CpuCopy8(self->unk_c8.b, self->unk_b8.b, 8);
            self->setFlags(0x20);
            pc = self->unk_c0.b;
            while (v >= 0x2d0) {
                DateTime_AddHours(pc, 0xc);
                v -= 0x2d0;
            }
        } else {
            self->clearFlags(0x20);
        }
    }
    if (r) {
        MI_CpuCopy8(self->unk_c0.b, self->unk_b8.b, 8);
        DateTimePicker_SyncHands(self);
    } else {
        DateTimePicker_SetHands(self, self->unk_c0.b[2], self->unk_c0.b[1]);
    }
    for (i = 0; i <= 4; i++) {
        if (buf[i] != DateTimePicker_GetField(self, i)) {
            self->unk_98[i] = 10;
            DateTimePicker_SetFieldPalette(self, i, 5);
            DateTimePicker_DrawField(self, i);
            if (i >= 0 && i <= 2) {
                buf[5] = 1;
            }
        }
    }
    if (buf[5] != 0) {
        self->unk_98[5] = 10;
        DateTimePicker_SetFieldPalette(self, 5, 5);
        DateTimePicker_DrawWeekday(self);
    }
}

extern "C" BOOL DateTimePicker_Approach(void *self, s32 *p, s32 target, s32 maxstep, s32 minstep) {
    s32 d;
    s32 step;
    s32 cur = *p;
    if (cur > target) { d = cur - target; } else { d = target - cur; }
    if (d < minstep) { *p = target; return TRUE; }
    step = d >> 1;
    if (step > maxstep) { step = maxstep; } else if (step < minstep) { step = minstep; }
    if (cur > target) { *p = *p - step; } else { *p = *p + step; }
    return FALSE;
}

extern "C" BOOL DateTimePicker_StepHandAnim(DateTimePicker *self) {
    BOOL r;
    if (self->unk_84 == self->unk_88) {
        r = TRUE;
    } else {
        r = DateTimePicker_Approach(self, &self->unk_84, self->unk_88, 0x30, 3);
        DateTimePicker_SetHandsFromMinutes(self);
    }
    if (r == TRUE) {
        Snd_StopSe(0x54, 1);
        Snd_PlaySe(0x2e);
    }
    return r;
}

extern "C" s32 DateTimePicker_HitTestField(DateTimePicker *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 0; i <= 4; i++) {
        if (DateTimePicker_GetFieldLeft(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (DateTimePicker_GetFieldTop(self, i) > hy) continue;
        if (DateTimePicker_GetFieldBottom(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 DateTimePicker_HitTestDateField(DateTimePicker *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 0; i <= 2; i++) {
        if (DateTimePicker_GetFieldLeft(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 3) < hx) continue;
        if (DateTimePicker_GetFieldTop(self, i) > hy) continue;
        if (DateTimePicker_GetFieldBottom(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 DateTimePicker_HitTestMonthDayField(DateTimePicker *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 1; i <= 2; i++) {
        if (DateTimePicker_GetFieldLeft(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (DateTimePicker_GetFieldTop(self, i) > hy) continue;
        if (DateTimePicker_GetFieldBottom(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 DateTimePicker_HitTestTimeField(DateTimePicker *self, s32 x, s32 y) {
    s32 i;
    s32 hx = x >> 3;
    s32 hy = y >> 3;
    for (i = 3; i <= 4; i++) {
        if (DateTimePicker_GetFieldLeft(self, i) > hx) continue;
        if (Unk_ov134_02293510_Hi(self, i, 0) < hx) continue;
        if (DateTimePicker_GetFieldTop(self, i) > hy) continue;
        if (DateTimePicker_GetFieldBottom(self, i) < hy) continue;
        return i;
    }
    return 6;
}

extern "C" s32 DateTimePicker_GetFieldLeft(DateTimePicker *self, s32 i) {
    u32 m = self->unk_a0;
    if (m == 2) return sFieldLeftBirthday[i];
    if (m == 1) return sFieldLeftTime[i];
    return sFieldLeftDefault[i];
}

extern "C" s32 DateTimePicker_GetFieldTop(DateTimePicker *self, s32 i) {
    u32 m = self->unk_a0;
    if (m == 2) return sFieldTopBirthday[i];
    if (m == 1) return sFieldTopTime[i];
    return sFieldTopDefault[i];
}

extern "C" s32 DateTimePicker_GetFieldWidth(DateTimePicker *self, s32 i) {
    return sFieldWidths[i];
}

extern "C" s32 DateTimePicker_GetFieldRight(DateTimePicker *self, s32 i) {
    s32 a = DateTimePicker_GetFieldLeft(self, i);
    return a + DateTimePicker_GetFieldWidth(self, i) - 1;
}

extern "C" s32 DateTimePicker_GetFieldBottom(DateTimePicker *self, s32 i) {
    return DateTimePicker_GetFieldTop(self, i) + 1;
}

extern "C" void DateTimePicker_SetFieldPalette(DateTimePicker *self, s32 idx, s32 x) {
    s32 t;
    s32 a;
    s32 b;
    s32 c;
    if (self->unk_a0 == 1) {
        if (idx == 0) return;
        if (idx == 1 || idx == 2 || idx == 5) {
            if (x == 3) x = 4;
            if (x == 5) x = 7;
        }
    } else if (self->unk_a0 == 2) {
        if (idx != 1 && idx != 2) return;
    }
    if (idx == 5 && x == 3) {
        if (Date_GetWeekday(self->unk_b8.b[5], self->unk_b8.b[4], self->unk_b8.b[3]) == 0) {
            x = 8;
            self->setFlags(x);
        } else {
            self->clearFlags(8);
        }
    }
    if (self->unk_b1 == idx && x == 3) x = 5;
    t = DateTimePicker_GetFieldLeft(self, idx);
    a = DateTimePicker_GetFieldTop(self, idx);
    b = DateTimePicker_GetFieldRight(self, idx);
    c = DateTimePicker_GetFieldBottom(self, idx);
    BgScreen_SetRectPalette(self->unk_584, t, a, b, c, x);
    self->setFlags(2);
}

extern "C" void DateTimePicker_SetDropButtonPalette(DateTimePicker *self, s32 a, s32 b) {
    s32 x = DateTimePicker_GetFieldRight(self, a) + 1;
    s32 y = DateTimePicker_GetFieldTop(self, a);
    s32 z;
    if (self->unk_a0 == 0 && a == 3) {
        z = x + 1;
    } else {
        z = x + 2;
    }
    BgScreen_SetRectPalette(self->unk_584, x, y, z, y + 1, b);
    self->setFlags(2);
}

extern "C" void DateTimePicker_ResetFieldPalettes(DateTimePicker *self) {
    s32 i;
    s32 j;
    for (i = 0; i <= 5; i++) {
        DateTimePicker_SetFieldPalette(self, i, 3);
    }
    for (j = 0; j <= 5; j++) {
        self->unk_98[j] = 0;
    }
}

extern "C" void DateTimePicker_TickFieldFlash(DateTimePicker *self) {
    s32 i;
    for (i = 0; i <= 5; i++) {
        if (self->unk_98[i] != 0) {
            self->unk_98[i] = self->unk_98[i] - 1;
            if (self->unk_98[i] == 0) {
                DateTimePicker_SetFieldPalette(self, i, 3);
            }
        }
    }
}

extern "C" u8 DateTimePicker_GetCursorField(DateTimePicker *self) {
    return self->unk_b1;
}

extern "C" void DateTimePicker_SetCursorField(DateTimePicker *self, u8 v) {
    u32 old = self->unk_b1;
    if (old == v) return;
    self->unk_b1 = v;
    if (old != 6) {
        DateTimePicker_SetFieldPalette(self, old, 3);
    }
    if (v != 6) {
        DateTimePicker_SetFieldPalette(self, v, 3);
    }
}

extern "C" void DateTimePicker_AdvanceCursorField(DateTimePicker *self) {
    switch (self->unk_a0) {
    case 0:
    case 1:
        if (self->unk_b1 < 4) {
            DateTimePicker_SetCursorField(self, self->unk_b1 + 1);
        } else {
            DateTimePicker_SetCursorField(self, 6);
        }
        break;
    case 2:
    case 3:
        if (self->unk_b1 < 2) {
            DateTimePicker_SetCursorField(self, self->unk_b1 + 1);
        } else {
            DateTimePicker_SetCursorField(self, 6);
        }
        break;
    }
}

extern "C" void DateTimePicker_OpenList(DateTimePicker *self, s32 idx) {
    s32 h, lim, i, j, off;
    s32 z;
    s32 r6;
    u16 *row;
    Snd_PlaySe(0x13);
    self->unk_a5 = idx;
    self->unk_a9 = 0;
    Gfx2d_HideLayer(self->unk_a4);
    self->unk_a7 = DateTimePicker_GetFieldLeft(self, idx);
    self->unk_a8 = DateTimePicker_GetFieldTop(self, idx);
    MIi_CpuCopy16(self->unk_d84, self->unk_1584, 0x800);
    h = DateTimePicker_GetFieldWidth(self, idx);
    lim = 8 - h;
    row = (u16 *)self->unk_1584;
    i = 0;
    off = ((lim - 1) & 0x1f) << 1;
    z = 0;
    for (; i < 0x20; row += 0x20, i++) {
        for (j = z; j < lim; j++) {
            row[j] = 0x10;
        }
        *(u16 *)(off + (u32)row) = 0x3079;
    }
    self->unk_aa = (self->unk_a7 - lim) << 3;
    self->unk_ab = 0x28;
    self->unk_ac = sFieldValueCounts[idx];
    if (idx == 2) {
        self->unk_ac = Date_GetDaysInMonth(self->unk_b8.b[5], self->unk_b8.b[4]);
    }
    self->unk_8c = (self->unk_ac - 8) << 4;
    for (i = 0; i < 0x10; i++) {
        self->unk_08[i] = 0xff;
    }
    r6 = DateTimePicker_GetField(self, self->unk_a5);
    if ((u8)(self->unk_a5 + 0xff) <= 1) {
        r6 = (u8)(r6 - 1);
    }
    {
        s32 v = (r6 << 4) - ((self->unk_a8 << 3) - self->unk_ab);
        if (v < 0) {
            v = 0;
        } else if (v > self->unk_8c) {
            v = self->unk_8c;
        }
        DateTimePicker_SetListScroll(self, v);
    }
    self->syncKnobToScroll();
    DateTimePicker_SetCursorField(self, (u8)idx);
    self->unk_7c = (u8 *)(DateTimePicker_GetFieldLeft(self, self->unk_a5) << 3);
    self->unk_ae = DateTimePicker_GetFieldBottom(self, idx) << 3;
    self->unk_b5 = self->unk_ae - 8;
    self->unk_b6 = self->unk_ae + 8;
    DateTimePicker_AddMenuTextAt(self, 8, 0x1aa, 8, sFieldNameTextIds[idx], h + 1);
    self->unk_74 = (void *)data_ov134_02294f14[idx];
    self->unk_78 = data_ov134_02294f2c[idx];
    self->unk_af = 3;
    Gfx2d_DisableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~Gfx2d_GetLayerPlaneMask(self->unk_a4) & 0x1f);
    self->blendListPalette(0);
    self->unk_b0 = r6 + 1;
    self->unk_04 = 0;
}

extern "C" s32 DateTimePicker_UpdateListOpen(DateTimePicker *self) {
    switch (self->unk_a9) {
    case 0:
        self->unk_a9 = 1;
        Gfx2d_ShowLayer(self->unk_a4);
        Gfx2d_EnableSubWindows(1);
        self->unk_af = self->unk_af - 1;
        DateTimePicker_AnimOpenWindow(self);
        break;
    case 1:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            DateTimePicker_AnimOpenWindow(self);
        } else {
            Gfx2d_DisableSubWindows(1);
            self->unk_a9 = 2;
            self->unk_af = 0;
            self->setFlags(4);
            self->unk_60 = DateTimePicker_GetFieldRight(self, self->unk_a5) << 3;
            self->placeKnob();
        }
        break;
    case 2:
        if (self->unk_af < 3) {
            self->unk_af = self->unk_af + 1;
            self->blendListPalette(self->unk_af);
        } else {
            self->unk_a9 = 8;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        return 1;
    }
    return 0;
}

extern "C" s32 DateTimePicker_HitTestRow(DateTimePicker *self, s32 x, s32 y) {
    s32 r6, u, m, t, r4;
    if (y <= 0x28 || y >= 0xa8) {
        return 0;
    }
    r6 = x >> 3;
    if (DateTimePicker_GetFieldLeft(self, self->unk_a5) > r6 || DateTimePicker_GetFieldRight(self, self->unk_a5) < r6) {
        return 0;
    }
    u = self->unk_00;
    m = u & 15;
    if (y >= 0xb2 - m) {
        return 2;
    }
    if (y <= (((16 - m) & 15) + 0x1e)) {
        return 2;
    }
    t = y - (self->unk_ab - u);
    if (t < 0) {
        return 2;
    }
    r4 = t >> 4;
    if (r4 >= self->unk_ac) {
        return 2;
    }
    if (self->isRowDisabled(r4)) {
        return 2;
    }
    self->unk_ad = r4;
    return 1;
}

extern "C" void DateTimePicker_DecideList(DateTimePicker *self) {
    Snd_PlaySe(0x29);
    self->unk_a9 = 3;
    self->unk_af = 3;
    Gfx2d_DisableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~Gfx2d_GetLayerPlaneMask(self->unk_a4) & 0x1f);
    DateTimePicker_DrawPickedValue(self);
    self->unk_80 = self->unk_ab + (self->unk_ad << 4) - self->unk_00;
    self->clearFlags(4);
}

extern "C" void DateTimePicker_CancelList(DateTimePicker *self) {
    Snd_PlaySe(0x2a);
    self->unk_a9 = 4;
    self->unk_af = 3;
    Gfx2d_DisableSubWindows(1);
    Gfx2d_SetSubWin0Planes(0x1f, 1);
    Gfx2d_SetSubWinOutPlanes(~Gfx2d_GetLayerPlaneMask(self->unk_a4) & 0x1f);
    self->clearFlags(4);
}

extern "C" s32 DateTimePicker_UpdateListClose(DateTimePicker *self) {
    switch (self->unk_a9) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        self->unk_a9 = 5;
        self->unk_70 = data_ov134_02294f5c[self->unk_a5];
        break;
    case 4:
        self->unk_a9 = 5;
        break;
    case 5:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            self->blendListPalette(self->unk_af);
        } else {
            Snd_PlaySe(0x14);
            self->unk_a9 = 6;
            self->unk_af = 3;
            Gfx2d_EnableSubWindows(1);
            self->unk_af = self->unk_af - 1;
            DateTimePicker_AnimCloseWindow(self);
        }
        break;
    case 6:
        if (self->unk_af != 0) {
            self->unk_af = self->unk_af - 1;
            DateTimePicker_AnimCloseWindow(self);
        } else {
            Gfx2d_HideLayer(self->unk_a4);
            Gfx2d_DisableSubWindows(1);
            DateTimePicker_SetDropButtonPalette(self, self->unk_a5, 3);
            self->unk_74 = 0;
            self->unk_78 = 0;
            if (self->unk_70 != 0) {
                if (self->applyPickedValue()) {
                    self->unk_a9 = 7;
                    func_02004008(0x54);
                } else {
                    self->unk_a9 = 8;
                }
                self->unk_70 = 0;
                DateTimePicker_AdvanceCursorField(self);
            } else {
                self->unk_a9 = 8;
            }
        }
        break;
    case 7:
        if (DateTimePicker_StepHandAnim(self)) {
            DateTimePicker_SyncHands(self);
            self->unk_a9 = 8;
        }
        break;
    case 8:
        return 1;
    }
    return 0;
}

extern "C" s32 DateTimePicker_HitTestList(DateTimePicker *self, s32 x, s32 y) {
    switch (DateTimePicker_HitTestRow(self, x, y)) {
    case 1:
        return 0;
    case 2:
        return 4;
    }
    if (self->grabKnobAt(x, y)) {
        return 3;
    }
    if (y >= 0x20 && y <= 0xa8) {
        s32 t = self->unk_60;
        if (x <= t + 0x18 && x >= t) {
            self->unk_18.grab();
            return 2;
        }
    }
    return 1;
}

extern "C" void DateTimePicker_SetListScroll(DateTimePicker *self, s32 a) {
    self->unk_00 = a;
    DateTimePicker_ApplyListScroll(self);
    DateTimePicker_RedrawList(self);
}

extern "C" void DateTimePicker_ApplyListScroll(DateTimePicker *self) {
    Gfx2d_SetLayerOffset(self->unk_a4, -self->unk_aa, -(self->unk_ab - self->unk_00));
}

extern "C" s32 DateTimePicker_RedrawList(DateTimePicker *self) {
    u16 *row;
    s32 dx, h, lim, off, i, j, k, t;
    u32 c, ac;
    MIi_CpuCopy16(self->unk_1584, self->unk_1d84, 0x800);
    dx = self->unk_ab - self->unk_00;
    h = DateTimePicker_GetFieldWidth(self, self->unk_a5);
    lim = 8 - DateTimePicker_GetFieldWidth(self, self->unk_a5);
    if (dx > 0) {
        i = (16 - ((dx + 15) >> 4)) * 2;
        row = (u16 *)(self->unk_1d84 + (i << 6));
        for (; i < 0x20; row += 0x20, i++) {
            for (j = lim; j < 8; j++) {
                row[j] = 0x3074;
            }
        }
    }
    off = (self->unk_00 - self->unk_ab) >> 4;
    for (k = 0; k < 0x10; k++) {
        s32 r5 = k + off;
        s32 r6 = r5 & 15;
        if (r5 < 0 || r5 >= self->unk_ac) {
            continue;
        }
        if (self->isRowDisabled(r5)) {
            BgScreen_SetRectPalette(self->unk_1d84, lim, r6 * 2, 7, r6 * 2 + 1, 6);
        }
        if (r5 == self->unk_08[r6]) {
            continue;
        }
        self->unk_08[r6] = r5;
        c = self->unk_a5;
        if (c == 0) {
            r5 += 0x7d0;
        }
        if ((u8)(c + 0xff) <= 1) {
            r5++;
        }
        switch (c) {
        case 1:
            DateTimePicker_AddMonthText(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 2:
            DateTimePicker_AddListDayText(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 3:
            DateTimePicker_AddListHourText(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, 15, 14);
            break;
        case 4:
            DateTimePicker_AddPaddedNumberText(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, h, 15, 14);
            break;
        case 0:
        default:
            DateTimePicker_AddListNumberText(self, self->unk_a4, (r6 << 4) + 0x80, 8, r5, h, 15, 14);
            break;
        }
    }
    ac = self->unk_ac;
    t = self->unk_ab - self->unk_00;
    t = t + (ac << 4);
    if (t < 0xc0) {
        s32 yb;
        s32 n;
        u16 *rowb;
        s32 jb;
        s32 ib;
        n = ((0xcf - t) >> 4) << 1;
        yb = (ac << 1) & 0x1f;
        for (ib = 0; ib < n; ib++) {
            rowb = (u16 *)(self->unk_1d84 + (yb << 6));
            for (jb = lim; jb < 8; jb++) {
                rowb[jb] = 0x3074;
            }
            yb = (yb + 1) & 0x1f;
        }
    }
    {
        s32 y;
        u16 *row2;
        s32 i2;
        s32 j2;
        y = ((self->unk_00 - self->unk_ab + 0x20) & 0xff) >> 3;
        for (i2 = 0; i2 < 5; i2++) {
            row2 = (u16 *)(self->unk_1d84 + (y << 6));
            for (j2 = 0; j2 < 10; j2++) {
                row2[j2] = 0x10;
            }
            row2[0x1f] = 0x10;
            y = (y - 1) & 0x1f;
        }
    }
    {
        s32 y;
        u16 *row2;
        s32 i2;
        s32 j2;
        y = ((self->unk_00 - self->unk_ab + 0xb0) & 0xff) >> 3;
        for (i2 = 0; i2 < 3; i2++) {
            row2 = (u16 *)(self->unk_1d84 + (y << 6));
            for (j2 = 0; j2 < 10; j2++) {
                row2[j2] = 0x10;
            }
            row2[0x1f] = 0x10;
            y = (y + 1) & 0x1f;
        }
    }
    self->setFlags(1);
}

extern "C" void DateTimePicker_AnimOpenWindow(DateTimePicker *self) {
    if (self->unk_af != 0) {
        self->unk_b5 = (self->unk_b5 + 0x28) >> 1;
        self->unk_b6 = (self->unk_b6 + 0xa8) >> 1;
    } else {
        self->unk_b5 = 0x28;
        self->unk_b6 = 0xa8;
    }
    Gfx2d_SetWindowRect(2, 0, self->unk_b5, 0xff, self->unk_b6);
}

extern "C" void DateTimePicker_AnimCloseWindow(DateTimePicker *self) {
    if (self->unk_af != 0) {
        self->unk_b5 = (self->unk_ae - 8 + self->unk_b5) >> 1;
        self->unk_b6 = (self->unk_ae + 8 + self->unk_b6) >> 1;
    } else {
        self->unk_b5 = self->unk_ae - 8;
        self->unk_b6 = self->unk_ae + 8;
    }
    Gfx2d_SetWindowRect(2, 0, self->unk_b5, 0xff, self->unk_b6);
    s32 v = self->unk_b5;
    if (self->unk_80 < v) {
        self->unk_80 = v;
    }
    v = self->unk_b6 - 8;
    if (self->unk_80 > v) {
        self->unk_80 = v;
    }
}

BOOL DateTimePicker::applyPickedValue() {
    u16 m = 0;
    u32 cur = DateTimePicker_GetField(this, unk_a5);
    DateTimePicker_SetField(this, unk_a5, unk_ad);
    m |= 1 << unk_a5;
    s32 r = Date_GetDaysInMonth(unk_b8.b[5], unk_b8.b[4]);
    if (r < unk_b8.b[3]) {
        unk_b8.b[3] = r;
        m |= 4;
    }
    if (unk_a5 <= 2) {
        DateTimePicker_SetFieldPalette(this, 5, 3);
        m |= 0x20;
    }
    s32 dir = 0;
    if (unk_a5 == 3 && unk_a0 == 1) {
        u8 lo = unk_b2;
        if (cur < lo) {
            if (unk_ad >= lo) {
                DateTime_SubDays(unk_b8.b, 1);
                dir = -1;
            }
        } else {
            if (unk_ad < lo) {
                DateTime_AddDays(unk_b8.b, 1);
                dir = 1;
            }
        }
        if (dir != 0) {
            m |= 0x27;
        }
    }
    if (testFlags(0x80)) {
        if (DateTime_Compare(unk_c8.b, unk_b8.b, 0x3f) == 1) {
            MI_CpuCopy8(unk_c8.b, unk_b8.b, 8);
            m = 0xffff;
        }
    }
    if (testFlags(0x40)) {
        if (DateTime_Compare(unk_d0.b, unk_b8.b, 0x3f) == -1) {
            MI_CpuCopy8(unk_d0.b, unk_b8.b, 8);
            m = 0xffff;
        }
    }
    u8 i;
    for (i = 0; i <= 5; i++) {
        if (m & (1 << i)) {
            DateTimePicker_DrawField(this, i);
        }
    }
    if ((u8)(unk_a5 + 0xfd) <= 1) {
        if (cur == unk_ad) {
            return FALSE;
        }
        u32 a = DateTimePicker_GetField(this, 4);
        u32 b = DateTimePicker_GetField(this, 3);
        unk_88 = a + b * 0x3c;
        unk_88 = unk_88 + dir * 0x5a0;
        return TRUE;
    }
    return FALSE;
}

BOOL DateTimePicker::isAboveMaximum(s32 v, u8 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        u32 a = DateTimePicker_GetField(this, i);
        if (a != DateTimePicker_GetFieldOf(this, i, unk_d0.b)) {
            return FALSE;
        }
    }
    if (v > (s32)DateTimePicker_GetFieldOf(this, n, unk_d0.b)) {
        return TRUE;
    }
    return FALSE;
}

BOOL DateTimePicker::isBelowMinimum(s32 v, u8 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        u32 a = DateTimePicker_GetField(this, i);
        if (a != DateTimePicker_GetFieldOf(this, i, unk_c8.b)) {
            return FALSE;
        }
    }
    if (v < (s32)DateTimePicker_GetFieldOf(this, n, unk_c8.b)) {
        return TRUE;
    }
    return FALSE;
}

BOOL DateTimePicker::isRowDisabled(s32 v) {
    u32 t = unk_a5;
    if (t == 1) goto inc;
    if (t == 2) {
inc:
        v++;
    }
    if (unk_a0 == 1 && t == 3) {
        u8 hi = unk_b3;
        u8 lo = unk_b2;
        if (lo < hi) {
            if (v < lo || v > hi) {
                return TRUE;
            }
        } else {
            if (v < lo && v > hi) {
                return TRUE;
            }
        }
        return FALSE;
    }
    if (testFlags(0x80)) {
        if (isBelowMinimum(v, unk_a5)) {
            return TRUE;
        }
    }
    if (testFlags(0x40)) {
        return isAboveMaximum(v, unk_a5);
    }
    return FALSE;
}

BOOL DateTimePicker::grabKnobAt(s32 x, s32 y) {
    if (unk_18.hitTest(x, y)) {
        unk_68 = unk_64 - y;
        unk_18.grab();
        unk_6c = unk_64;
        return TRUE;
    }
    return FALSE;
}

BOOL DateTimePicker::grabKnobByCursor() {
    if (unk_b0 == 0) {
        unk_18.grab();
        Menu_PlayScrollGrabSe(&unk_18);
        return TRUE;
    }
    return FALSE;
}

void DateTimePicker::onKnobMoved() {
    syncScrollToKnob();
    placeKnob();
    s32 t = unk_6c - unk_64;
    if (t >= 4 || t <= -4) {
        Menu_PlayScrollTickSe(&unk_18);
        unk_6c = unk_64;
    }
}

void DateTimePicker::dragKnob(s32 x) {
    unk_64 = x + unk_68;
    if (unk_64 < 0x20) {
        unk_64 = 0x20;
    }
    if (unk_64 > 0xa0) {
        unk_64 = 0xa0;
    }
    onKnobMoved();
}

void DateTimePicker::dragKnobToward(s32 x) {
    x -= 8;
    if (x < 0x20) {
        x = 0x20;
    }
    if (x > 0xa0) {
        x = 0xa0;
    }
    func_020e761c(&unk_64, x, 8);
    onKnobMoved();
}

void DateTimePicker::moveKnobByPad() {
    s32 old = unk_64;
    u32 k = gPad;
    if (k & 0x40) {
        unk_64 = old - 4;
        if (unk_64 < 0x20) {
            unk_64 = 0x20;
        }
    } else if (k & 0x80) {
        unk_64 = old + 4;
        if (unk_64 > 0xa0) {
            unk_64 = 0xa0;
        }
    }
    if (old != unk_64) {
        syncScrollToKnob();
        placeKnob();
        Menu_PlayScrollTickSe(&unk_18);
    }
}

void DateTimePicker::releaseKnob() {
    unk_18.release();
}

BOOL DateTimePicker::finishKnobRelease() {
    if (unk_18.areAnimsDone()) {
        unk_18.show();
        return TRUE;
    }
    return FALSE;
}

void DateTimePicker::syncKnobToScroll() {
    unk_64 = _s32_div_f(unk_00 << 7, unk_8c) + 0x20;
    placeKnob();
}

void DateTimePicker::syncScrollToKnob() {
    DateTimePicker_SetListScroll(this, _s32_div_f(unk_8c * (unk_64 - 0x20), 0x80));
    unk_04 = 0;
}

void DateTimePicker::placeKnob() {
    unk_18.moveTo(unk_60 - 0x78, unk_64 - 0x60);
}

s32 DateTimePicker::getListCursorX() {
    if (unk_b0 == 0) {
        return unk_18.getGripX();
    }
    return unk_60;
}

s32 DateTimePicker::getListCursorY() {
    if (unk_b0 == 0) {
        return unk_18.getGripY();
    }
    return unk_ab + ((unk_b0 - 1) << 4) - unk_00 + 8 - unk_04;
}

void DateTimePicker::setListCursorFromY(s32 y) {
    if (unk_b0 != 0) {
        if (y < 0x28) {
            y = 0x28;
        } else if (y > 0xa8) {
            y = 0xa8;
        }
        unk_b0 = rowAtY(y) + 1;
    }
}

s32 DateTimePicker::navigateList(u32 pad) {
    if (unk_b0 == 0) {
        unk_b7 = 0;
        if (MenuKeys_HasLeft(pad)) {
            unk_b0 = 1;
            setListCursorFromY(unk_18.getGripY());
            return 1;
        }
    } else {
        if (MenuKeys_HasRight(pad)) {
            unk_b0 = 0;
            unk_b7 = 0;
            return 1;
        }
        s32 v = unk_b7;
        if (v >= 6) {
            if (gPad & 0x40) {
                if (moveListCursorUp()) {
                    if (unk_04 != 0) {
                        DateTimePicker_SetListScroll(this, unk_00 + unk_04);
                        unk_04 = 0;
                        syncKnobToScroll();
                    }
                    if (testFlags(0x100)) {
                        clearFlags(0x100);
                        Snd_PlaySe(0xb);
                    } else {
                        setFlags(0x100);
                    }
                    return 3;
                }
            } else {
                unk_b7 = 0;
            }
        } else if (v <= -6) {
            if (gPad & 0x80) {
                if (moveListCursorDown()) {
                    if (unk_04 != 0) {
                        DateTimePicker_SetListScroll(this, unk_00 + unk_04);
                        unk_04 = 0;
                        syncKnobToScroll();
                    }
                    if (testFlags(0x100)) {
                        clearFlags(0x100);
                        Snd_PlaySe(0xb);
                    } else {
                        setFlags(0x100);
                    }
                    return 3;
                }
            } else {
                unk_b7 = 0;
            }
        }
        if (MenuKeys_HasUp(pad)) {
            s32 t = unk_b7;
            if (t < 0) {
                unk_b7 = 1;
            } else {
                unk_b7 = t + 1;
            }
            if (moveListCursorUp()) {
                return 2;
            }
        } else if (MenuKeys_HasDown(pad)) {
            s32 t = unk_b7;
            if (t > 0) {
                unk_b7 = -1;
            } else {
                unk_b7 = t - 1;
            }
            if (moveListCursorDown()) {
                return 2;
            }
        }
    }
    return 0;
}

BOOL DateTimePicker::pickListCursorRow() {
    s32 t = unk_b0 - 1;
    if (isRowDisabled(t)) {
        return FALSE;
    }
    unk_ad = t;
    return TRUE;
}

BOOL DateTimePicker::moveListCursorUp() {
    if (*(volatile u8 *)&unk_b0 > 1) {
        unk_b0 = *(volatile u8 *)&unk_b0 - 1;
        s32 t = getListCursorY();
        if (t < 0x30) {
            unk_04 = unk_04 - (0x30 - t);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL DateTimePicker::moveListCursorDown() {
    if ((s32)*(volatile u8 *)&unk_b0 < (s32)*(volatile u8 *)&unk_ac) {
        unk_b0 = *(volatile u8 *)&unk_b0 + 1;
        s32 t = getListCursorY();
        if (t > 0xa0) {
            unk_04 = unk_04 + (t - 0xa0);
        }
        return TRUE;
    }
    return FALSE;
}

s32 DateTimePicker::rowAtY(s32 y) {
    s32 d = unk_ab;
    d -= unk_00;
    s32 v = y - d;
    if (v < 0) {
        v = 0;
    }
    v >>= 4;
    s32 lim = unk_ac;
    if (v >= lim) {
        v = lim - 1;
    }
    return v;
}

void DateTimePicker::stepListScroll() {
    if (testFlags(1)) {
        return;
    }
    s32 a = unk_00;
    s32 b = unk_04;
    if (b > 0) {
        if (b < 8) {
            a += b;
            unk_04 = 0;
        } else {
            a += 8;
            unk_04 = b - 8;
        }
    } else if (b < 0) {
        if (b > -8) {
            a += b;
            unk_04 = 0;
        } else {
            a -= 8;
            unk_04 = b + 8;
        }
    }
    if (a != unk_00) {
        DateTimePicker_SetListScroll(this, a);
        syncKnobToScroll();
    }
}

void DateTimePicker::blendListPalette(s32 t) {
    u8 *p = (u8 *)this;
    MIi_CpuCopy16(p + 0x2584, p + 0x25a4, 0x20);
    s32 c1 = *(u16 *)(p + 0x25a0);
    u8 r = c1 & 0x1f;
    u8 g = (c1 & 0x3e0) >> 5;
    u8 b = (c1 & 0x7c00) >> 10;
    s32 w = 3 - t;
    s32 c2 = *(u16 *)(p + 0x25a2);
    r = ((u8)(c2 & 0x1f) * t + r * w) / 3;
    g = ((u8)((c2 & 0x3e0) >> 5) * t + g * w) / 3;
    b = ((u8)((c2 & 0x7c00) >> 10) * t + b * w) / 3;
    *(u16 *)(p + 0x25c2) = r | (g << 5) | (b << 10);
    ((BgVramTask *)(p + 0x560))->requestPalette((u32)(p + 0x25a4), unk_a4, 9);
}

BOOL DateTimePicker::testFlags(u32 m) {
    if (unk_90 & m) {
        return TRUE;
    }
    return FALSE;
}

void DateTimePicker::setFlags(u32 m) {
    unk_90 |= m;
}

void DateTimePicker::clearFlags(u32 m) {
    unk_90 &= ~m;
}

extern "C" u32 data_ov134_02294dc4[4] = {0x80004000, 0x50cb, 0x208000, 0xffff50cf};
extern "C" u32 data_ov134_02294fb4[8] = {0x81e84004, 0x6554, 0x41e84014, 0x6594, 0x81c84004, 0x6554, 0x41c84014, 0xffff6594};
extern "C" u32 sObjVariantFiles[1] = {(u32)data_ov134_02294f74};
extern "C" char data_ov134_02294e3c[22] = "menu/clock/bgb_us.bsc";
extern "C" u32 data_ov134_02294d44[2] = {0xc19800b3, 0xffff44c0};
extern "C" u32 data_ov134_02294d4c[2] = {0x80004000, 0xffff50cb};
extern "C" u32 data_ov134_02294f5c[6] = {(u32)data_ov134_02294d4c, (u32)data_ov134_02294d84, (u32)data_ov134_02294dc4, (u32)data_ov134_02294da4, (u32)data_ov134_02294da4, (u32)data_ov134_02294ee4};
extern "C" u32 data_ov134_02294fd4[8] = {0x80004004, 0x6554, 0x40004014, 0x6594, 0x800f4004, 0x6554, 0x400f4014, 0xffff6594};
extern "C" char data_ov134_02294e6c[22] = "menu/clock/bgd_us.bsc";
extern "C" u32 data_ov134_02294ff4[8] = {0x90264024, 0x6552, 0x50264034, 0x6592, 0x80084024, 0x6552, 0x40084034, 0xffff6592};
extern "C" u32 data_ov134_022950a4[12] = {0x1ff0030, 0x6559, 0x1ff0028, 0x6559, 0x91de4024, 0x6552, 0x51de4034, 0x6592, 0x81c04024, 0x6552, 0x41c04034, 0xffff6592};
extern "C" u32 data_ov134_022950d4[12] = {0x40028, 0x6559, 0x40020, 0x6559, 0x91e4401c, 0x6552, 0x51e4402c, 0x6592, 0x81cc401c, 0x6552, 0x41cc402c, 0xffff6592};
extern "C" const u8 sWeekdayTextIds[7] = {0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0};
extern "C" u32 data_ov134_02295104[12] = {0x81d0400c, 0x6555, 0x41d0401c, 0x6595, 0x91e8400c, 0x6552, 0x51e8401c, 0x6592, 0x81b8400c, 0x6552, 0x41b8401c, 0xffff6592};
extern "C" u32 data_ov134_02294d54[4] = {0x80444023, 0x65b2, 0x40640023, 0xffff65b6};
extern "C" u32 data_ov134_02294db4[4] = {0x8044402b, 0x65b2, 0x4064002b, 0xffff65b6};
extern "C" u32 data_ov134_02295204[28] = {0x268000, 0x84ca, 0x1e88000, 0x84ca, 0x81c740fc, 0x8554, 0x41c7400c, 0x8594, 0x81e740fc, 0x8554, 0x41e7400c, 0x8594, 0x801740fc, 0x8554, 0x4017400c, 0x8594, 0x81f740fc, 0x8554, 0x41f7400c, 0x8594, 0x903740fc, 0x8552, 0x5037400c, 0x8592, 0x81a740fc, 0x8552, 0x41a7400c, 0xffff8592};
extern "C" u32 data_ov134_02295194[12] = {0x800040e8, 0x6108, 0x800a40e8, 0x610c, 0x402800e8, 0x6110, 0x400040f8, 0x6148, 0x400a40f8, 0x614c, 0x2840f8, 0xffff6150};
extern "C" u32 data_ov134_02294f2c[6] = {(u32)data_ov134_02294efc, (u32)data_ov134_02295054, (u32)data_ov134_02294ecc, (u32)data_ov134_02294eb4, (u32)data_ov134_02294eb4, (u32)data_ov134_02294eb4};
extern "C" u32 data_ov134_02294f14[6] = {(u32)data_ov134_02295194, (u32)data_ov134_022951c4, (u32)data_ov134_02295164, (u32)data_ov134_02295134, (u32)data_ov134_02295134, (u32)data_ov134_02295134};
extern "C" u32 data_ov134_02294efc[6] = {0x80004000, 0x6168, 0x800a4000, 0x616c, 0x40280000, 0xffff6170};
extern "C" const u32 sFieldTopTime[6] = {0x0, 0xc, 0xc, 0x10, 0x10, 0xc};
extern "C" u32 data_ov134_02294eb4[6] = {0x80004000, 0x6168, 0x80184000, 0x616c, 0x40380000, 0xffff6170};
extern "C" char data_ov134_02294dfc[19] = "menu/clock/bg2.bpl";
extern "C" u32 data_ov134_02294ecc[6] = {0x80004000, 0x6168, 0x80104000, 0x616c, 0x40300000, 0xffff6170};
extern "C" const u32 sFieldLeftTime[6] = {0x0, 0x6, 0xe, 0xa, 0x12, 0x13};
extern "C" char data_ov134_02294e24[22] = "menu/clock/bge_us.bsc";
extern "C" u32 data_ov134_02294d84[4] = {0x80004000, 0x50cb, 0x80204000, 0xffff50cf};
extern "C" u32 data_ov134_02295074[12] = {0x902e4004, 0x6554, 0x502e4014, 0x6594, 0x90344004, 0x6554, 0x50344014, 0x6594, 0x904f4004, 0x6552, 0x504f4014, 0xffff6592};
extern "C" const u32 sFieldWidths[6] = {0x4, 0x8, 0x5, 0x6, 0x6, 0x7};
extern "C" const u8 sMonthStringIds[12] = {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xa, 0xb};
extern "C" u32 data_ov134_02294da4[4] = {0x80004000, 0x50cb, 0x40200000, 0xffff50cf};
extern "C" char data_ov134_02294e54[22] = "menu/clock/bgc_us.bsc";
extern "C" u32 data_ov134_02295014[8] = {0x9024401c, 0x6552, 0x5024402c, 0x6592, 0x800c401c, 0x6552, 0x400c402c, 0xffff6592};
extern "C" const u8 sFieldNameTextIds[6] = {0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xaa};
extern "C" u32 data_ov134_02295134[12] = {0x800040e8, 0x6108, 0x801840e8, 0x610c, 0x403800e8, 0x6110, 0x400040f8, 0x6148, 0x401840f8, 0x614c, 0x3840f8, 0xffff6150};
extern "C" u32 sBgPaletteFiles[4] = {(u32)data_ov134_02294dd4, (u32)data_ov134_02294de8, (u32)data_ov134_02294dfc, (u32)data_ov134_02294e10};
extern "C" u32 data_ov134_02295164[12] = {0x800040e8, 0x6108, 0x801040e8, 0x610c, 0x403000e8, 0x6110, 0x400040f8, 0x6148, 0x401040f8, 0x614c, 0x3040f8, 0xffff6150};
extern "C" u32 data_ov134_02294e9c[6] = {(u32)data_ov134_02295074, (u32)data_ov134_02294fb4, (u32)data_ov134_02294fd4, (u32)data_ov134_022950a4, (u32)data_ov134_02294ff4, (u32)data_ov134_02294f94};
extern "C" const u32 sFieldLeftBirthday[6] = {0x0, 0x8, 0x12, 0x0, 0x0, 0x0};
extern "C" u32 data_ov134_02294d74[4] = {0x800a40ee, 0x61aa, 0x802a40ee, 0xffff61ae};
extern "C" u32 data_ov134_02294ee4[6] = {0x80004000, 0x50cb, 0x40200000, 0x50cf, 0x308000, 0xffff50d1};
extern "C" u32 data_ov134_02294f94[8] = {0x91a84004, 0x9554, 0x51a84014, 0x9594, 0x81884004, 0x9552, 0x41884014, 0xffff9592};
extern "C" u32 data_ov134_022951c4[16] = {0x802840e8, 0x610c, 0x402840f8, 0x614c, 0x800040e8, 0x6108, 0x802040e8, 0x610c, 0x404800e8, 0x6110, 0x400040f8, 0x6148, 0x402040f8, 0x614c, 0x4840f8, 0xffff6150};
extern "C" const u8 sFieldValueCounts[6] = {0x64, 0xc, 0x1f, 0x18, 0x3c, 0x7};
extern "C" u32 data_ov134_02295034[8] = {0x9020400c, 0x6552, 0x5020401c, 0x6592, 0x8008400c, 0x6552, 0x4008401c, 0xffff6592};
extern "C" u32 data_ov134_02294e84[6] = {0x1fc00fc, 0x54e8, 0x81f000e0, 0x54d8, 0x81f000e0, 0xffff54d4};
extern "C" char data_ov134_02294dd4[19] = "menu/clock/bg0.bpl";
extern "C" const u32 sFieldLeftDefault[6] = {0x17, 0x9, 0x11, 0x9, 0x12, 0x2};
extern "C" const u32 sFieldTopBirthday[6] = {0x0, 0xe, 0xe, 0x0, 0x0, 0x0};
extern "C" char data_ov134_02294f74[30] = "menu/clock/b_tim_ten0_obj.bch";
extern "C" u32 data_ov134_02295054[8] = {0x80284000, 0x616c, 0x80004000, 0x6168, 0x80204000, 0x616c, 0x40480000, 0xffff6170};
extern "C" char data_ov134_02294e10[19] = "menu/clock/bg3.bpl";
extern "C" u32 data_ov134_02294f44[6] = {0x2e8008, 0x64ca, 0x78008, 0x64ca, 0x1c88008, 0xffff64ca};
extern "C" const u32 sFieldTopDefault[6] = {0xd, 0xd, 0xd, 0x11, 0x11, 0xd};
extern "C" char data_ov134_02294de8[19] = "menu/clock/bg1.bpl";
extern "C" u32 sFieldScreenFiles[4] = {(u32)data_ov134_02294e3c, (u32)data_ov134_02294e54, (u32)data_ov134_02294e6c, (u32)data_ov134_02294e24};
