#include "types.h"

extern "C" {
extern void *gCurrentHeap;

void Gfx2d_LoadPaletteFile(const void *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadCharFile(const void *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadCharRange(void *p, s32 a, s32 b, s32 c, s32 d);
void Gfx2d_LoadPaletteFileSlot(const void *buf, void *h, s32 a, s32 b, s32 c);
void Gfx2d_LoadScreen(void *p, s32 a, s32 b, s32 c);
u8 *File_LoadAlloc(u32 id, void *heap, s32 a, void *out);
void File_LoadToBuffer(u32 src, void *dst, s32 n);
void Heap_Free(void *heap, void *p);
void String_Load2dMenu(void *o, u32 v);
void BgScreen_SetRectPalette(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
s32 PlayerData_GetCurrent();
void _ZN10PlayerData11getPlayerIdEv();
s32 _ZN8PlayerId9getGenderEv();
void Snd_SetKeySeMode(u32 v);
}

// text buffer object, 0x40 bytes (vtable 0x020e0488, see src/main/unk_0206f53c.cpp)
class LabelString {
public:
    LabelString();
    virtual ~LabelString();
    void redrawAligned(s32 a, s32 b);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    u8 unk_04[0x3c];
};

// sound/effect handle, 0x24 bytes (see src/main/unk_020b8464.cpp)
class BgVramTask {
public:
    BgVramTask();
    virtual void vfunc_00();
    virtual void clear();
    BOOL requestScreen(u32 a, u8 b, u32 c, u32 d);
    void cancel();
    u8 unk_04[0x20];
};

extern "C" {
void NumberPad_LoadObjGraphics(s32 n);
void NumberPad_LoadBgGraphics(s32 x);
}

class NumberPad {
public:
    NumberPad();
    ~NumberPad();

    void flushScreens();
    void update();
    void shutdown();
    void loadObj();
    void loadBg();
    void init(u32 mode, u32 a, u32 b);

    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u8 unk_1c[0x2c - 0x1c];
    /* 0x2c */ LabelString unk_2c[5];
    /* 0x16c */ BgVramTask unk_16c[2];
    /* 0x1b4 */ u8 unk_1b4[0x800];
    /* 0x9b4 */ u8 unk_9b4[0x800];
};

// Declarations (definition order below sets the data layout)
extern "C" const u8 sTitleTextIds[8];
extern "C" const u8 sValueLabelTextIds[8];
extern "C" const u8 sBalanceLabelTextIds[8];
extern "C" const u8 sNumberPadTouchKeyMap[12];
extern "C" const u8 sNumberPadCursorRightTable[16];
extern "C" const u8 sNumberPadCursorLeftTable[16];
extern "C" const u8 sNumberPadCursorUpTable[16];
extern "C" const u8 sNumberPadCursorDownTable[16];
extern "C" const u32 sDigitColumnTable[6];
extern "C" const u32 sDigitRowTable[6];
extern "C" const u32 sKeyX0Table[11];
extern "C" const u32 sKeyX1Table[11];
extern "C" const u32 sKeyRowTable[11];
extern "C" const u32 sNumberPadCursorYTable[13];
extern "C" const u32 sNumberPadCursorXTable[13];
extern "C" u32 sTitleObjCharFiles[2];
extern "C" char data_ov130_02293368[20];
extern "C" char data_ov130_0229337c[20];
extern "C" u16 sNumberPadKeySeIds[10];
extern "C" char data_ov130_022933a4[20];
extern "C" char data_ov130_022933b8[20];
extern "C" char data_ov130_022933cc[20];
extern "C" char data_ov130_022933e0[20];
extern "C" char data_ov130_022933f4[20];
extern "C" char data_ov130_02293408[20];
extern "C" char data_ov130_0229341c[20];
extern "C" char data_ov130_02293430[20];
extern "C" char data_ov130_02293444[20];
extern "C" char data_ov130_02293458[23];
extern "C" u32 sKeyScreenFiles[6];
extern "C" u32 sMainScreenFiles[6];
extern "C" char data_ov130_022934a0[25];
extern "C" char data_ov130_022934bc[25];
extern "C" u32 data_ov130_022934d8[8];
extern "C" u32 sSeparatorCells[8];
extern "C" u32 data_ov130_02293518[8];
extern "C" u32 sSeparatorCellsWide[12];
extern "C" u32 data_ov130_02293568[16];
extern "C" u32 data_ov130_022935a8[16];
extern "C" u32 data_ov130_022935e8[16];

extern "C" u32 data_ov130_02293568[16] = {0x81d840b0, 0xc14c, 0x81f840b0, 0xc150, 0x801840b0, 0xc154, 0x403800b0, 0xc158, 0x903040b0, 0xb0cf, 0x801040b0, 0xb0d0, 0x81f040b0, 0xb0d0, 0x81d040b0, 0xffffb0cf};
extern "C" u32 data_ov130_022935a8[16] = {0x81d440b4, 0xc14c, 0x81f440b4, 0xc150, 0x801440b4, 0xc154, 0x403400b4, 0xc158, 0x902c40b4, 0xb0cf, 0x800c40b4, 0xb0d0, 0x81ec40b4, 0xb0d0, 0x81cc40b4, 0xffffb0cf};
extern "C" u32 data_ov130_022935e8[16] = {0x81904022, 0xc14c, 0x81b04022, 0xc150, 0x81d04022, 0xc154, 0x41f00022, 0xc158, 0x91e84022, 0xb0cf, 0x81c84022, 0xb0d0, 0x81a84022, 0xb0d0, 0x81884022, 0xffffb0cf};
extern "C" const u32 sNumberPadCursorYTable[13] = {0x98, 0x88, 0x88, 0x88, 0x78, 0x78, 0x78, 0x68, 0x68, 0x68, 0x98, 0xb6, 0xb6};
extern "C" const u32 sNumberPadCursorXTable[13] = {0x70, 0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0, 0x60, 0x80, 0xa0, 0xa0, 0xc4, 0x7c};
extern "C" u32 sSeparatorCellsWide[12] = {0x2800d0, 0x5180, 0x1000d0, 0x5180, 0x2800b8, 0x5180, 0x1000b8, 0x5180, 0x2800e8, 0x5180, 0x1000e8, 0xffff5180};
extern "C" const u32 sKeyX0Table[11] = {0x9, 0x9, 0xe, 0x12, 0x9, 0xe, 0x12, 0x9, 0xe, 0x12, 0x12};
extern "C" const u32 sKeyX1Table[11] = {0x11, 0xd, 0x11, 0x15, 0xd, 0x11, 0x15, 0xd, 0x11, 0x15, 0x15};
extern "C" const u32 sKeyRowTable[11] = {0x12, 0x10, 0x10, 0x10, 0xe, 0xe, 0xe, 0xc, 0xc, 0xc, 0x12};
extern "C" u32 data_ov130_022934d8[8] = {0x81aa00f2, 0x415a, 0x81ca80f2, 0x415e, 0x81aa4012, 0x41da, 0x41ca0012, 0xffff41de};
extern "C" u32 sSeparatorCells[8] = {0x2800d8, 0x5180, 0x1000d8, 0x5180, 0x2800f0, 0x5180, 0x1000f0, 0xffff5180};
extern "C" u32 data_ov130_02293518[8] = {0x819c009c, 0x415a, 0x81bc809c, 0x415e, 0x819c40bc, 0x41da, 0x41bc00bc, 0xffff41de};
extern "C" char data_ov130_022934a0[] = "menu/bank/ten0_0_obj.bch";
extern "C" char data_ov130_022934bc[] = "menu/bank/ten0_1_obj.bch";
extern "C" u32 sKeyScreenFiles[6] = {(u32)data_ov130_02293430, (u32)data_ov130_02293444, (u32)data_ov130_022933cc, (u32)data_ov130_022933b8, (u32)data_ov130_02293458, (u32)data_ov130_022933a4};
extern "C" u32 sMainScreenFiles[6] = {(u32)data_ov130_022933e0, (u32)data_ov130_02293368, (u32)data_ov130_022933f4, (u32)data_ov130_0229337c, (u32)data_ov130_02293408, (u32)data_ov130_0229341c};
extern "C" const u32 sDigitColumnTable[6] = {0x16, 0x16, 0x17, 0x17, 0x14, 0x17};
extern "C" const u32 sDigitRowTable[6] = {0x2, 0x6, 0x2, 0x6, 0x7, 0x8};
extern "C" char data_ov130_02293458[] = "menu/bank/f1_bg_us.bsc";
extern "C" char data_ov130_02293430[] = "menu/bank/a1_bg.bsc";
extern "C" char data_ov130_0229341c[] = "menu/bank/h0_bg.bsc";
extern "C" char data_ov130_022933e0[] = "menu/bank/a0_bg.bsc";
extern "C" char data_ov130_022933f4[] = "menu/bank/d0_bg.bsc";
extern "C" char data_ov130_02293408[] = "menu/bank/f0_bg.bsc";
extern "C" char data_ov130_02293444[] = "menu/bank/b1_bg.bsc";
extern "C" char data_ov130_022933b8[] = "menu/bank/e1_bg.bsc";
extern "C" char data_ov130_02293368[] = "menu/bank/b0_bg.bsc";
extern "C" char data_ov130_022933cc[] = "menu/bank/d1_bg.bsc";
extern "C" char data_ov130_0229337c[] = "menu/bank/e0_bg.bsc";
extern "C" u16 sNumberPadKeySeIds[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
extern "C" char data_ov130_022933a4[] = "menu/bank/h1_bg.bsc";
extern "C" const u8 sNumberPadCursorUpTable[16] = {0x01, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x07, 0x08, 0x09, 0x03, 0x0a, 0x00, 0x00, 0x00, 0x00};
extern "C" const u8 sNumberPadCursorDownTable[16] = {0x0b, 0x00, 0x00, 0x0a, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x0b, 0x0b, 0x0c, 0x00, 0x00, 0x00};
extern "C" const u8 sNumberPadCursorLeftTable[16] = {0x00, 0x01, 0x01, 0x02, 0x04, 0x04, 0x05, 0x07, 0x07, 0x08, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00};
extern "C" const u8 sNumberPadCursorRightTable[16] = {0x0a, 0x02, 0x03, 0x03, 0x05, 0x06, 0x06, 0x08, 0x09, 0x09, 0x0a, 0x0b, 0x0b, 0x00, 0x00, 0x00};
extern "C" const u8 sNumberPadTouchKeyMap[12] = {0x07, 0x08, 0x09, 0x04, 0x05, 0x06, 0x01, 0x02, 0x03, 0x00, 0x00, 0x0a};
extern "C" const u8 sValueLabelTextIds[8] = {0x55, 0x58, 0x61, 0x5a, 0x5b, 0x5d, 0x52, 0x00};
extern "C" const u8 sBalanceLabelTextIds[8] = {0x56, 0x59, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00};
extern "C" const u8 sTitleTextIds[8] = {0x57, 0x57, 0x57, 0x5e, 0x5b, 0x5c, 0x62, 0x00};
extern "C" u32 sTitleObjCharFiles[2] = {(u32)data_ov130_022934a0, (u32)data_ov130_022934bc};

struct Ov130S {
    u16 flags;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u8 pad_24[8];
    u8 slots[5][0x40];
    u8 pad_16c[0x1b4 - 0x16c];
    u16 map[0x400];
};

extern "C" {
void _ZN11LabelString12destroyLabelEv(void *p);
void Snd_PlaySe(s32 v);
void Snd_PlayKeySe(u32 a);
s32 Oam_DrawCell(s32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void BgScreen_SetRectPalette(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
BOOL MenuKeys_HasUp(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasRight(u32 v);

void NumberPad_ClearFlags(Ov130S *s, u32 m);
void NumberPad_SetFlags(Ov130S *s, u32 m);
BOOL NumberPad_TestFlags(Ov130S *s, u32 m);
void *NumberPad_AllocLabel(Ov130S *s);
void NumberPad_ReleaseLabels(Ov130S *s);
void NumberPad_PutSmallDigit(Ov130S *s, s32 idx, s32 x, s32 y);
void NumberPad_PrintSmallNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n);
void NumberPad_FillSmallDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n);
void NumberPad_PutLargeDigit(Ov130S *s, s32 idx, s32 x, s32 y);
void NumberPad_PrintLargeNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n);
void NumberPad_FillLargeDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n);
void NumberPad_RedrawValues(Ov130S *s);
void NumberPad_ApplyKey(Ov130S *s);
BOOL NumberPad_ClearValue(Ov130S *s);
void NumberPad_PlayCancelSe();
void NumberPad_PlayKeySe(u32 idx);
void NumberPad_UnhighlightKey(Ov130S *s, u32 idx);
void NumberPad_HighlightKey(Ov130S *s, u32 idx);
void NumberPad_SetKeyPalette(Ov130S *s, u32 idx, s32 n);
void NumberPad_ResetKeyPalettes(Ov130S *s);
void NumberPad_PressKey(Ov130S *s);
}
namespace Unk_ov130_022925c8_Imp {
extern "C" {
s32 NumberPad_PrintSmallNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n);
s32 NumberPad_FillSmallDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n);
s32 NumberPad_PrintLargeNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n);
s32 NumberPad_FillLargeDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n);
}
}

NumberPad::NumberPad() {}

NumberPad::~NumberPad() {}

void NumberPad::init(u32 mode, u32 a, u32 b) {
    unk_00 = 0;
    unk_07 = mode;
    switch (unk_07) {
    case 0:
        unk_08 = 2;
        unk_09 = 0;
        break;
    case 1:
        unk_08 = 2;
        unk_09 = 5;
        break;
    case 2:
        unk_08 = 2;
        unk_09 = 1;
        break;
    case 3:
        unk_08 = 3;
        unk_09 = 2;
        break;
    case 4:
        unk_08 = 5;
        unk_09 = 3;
        break;
    case 5:
        unk_08 = 3;
        unk_09 = 4;
        break;
    case 6:
        unk_08 = 4;
        unk_09 = 6;
        break;
    }
    unk_0a = a;
    unk_0b = b;
    NumberPad_ReleaseLabels((Ov130S *)this);
    unk_05 = 0xa;
    unk_04 = 0xd;
    unk_03 = 0;
    unk_02 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    if (PlayerData_GetCurrent() != 0) {
        _ZN10PlayerData11getPlayerIdEv();
        if (_ZN8PlayerId9getGenderEv() == 0) {
            Snd_SetKeySeMode(0);
            return;
        }
    }
    Snd_SetKeySeMode(1);
}

void NumberPad_LoadBgGraphics(s32 x) {
    void *h = gCurrentHeap;
    Gfx2d_LoadCharFile("menu/bank/bg0.bch", h, x, 0x10, 0x10, 0xff);
    Gfx2d_LoadCharFile("menu/bank/bg1.bch", h, x, 0x100, 0x100, 0x1a9);
    Gfx2d_LoadPaletteFile("menu/bank/bg.bpl", h, x, 1, 1, 0xd);
}

void NumberPad::loadBg() {
    NumberPad_LoadBgGraphics(unk_0a);
    File_LoadToBuffer(sMainScreenFiles[unk_08], unk_1b4, 0x800);
    switch (unk_07) {
    case 0:
    case 1:
        BgScreen_SetRectPalette(unk_1b4, 2, 8, 0xd, 9, 0xa);
        break;
    case 2:
        BgScreen_SetRectPalette(unk_1b4, 2, 2, 0xd, 3, 0xa);
        break;
    }
    Gfx2d_LoadScreen(unk_1b4, unk_0a, 0x800, 0);
    File_LoadToBuffer(sKeyScreenFiles[unk_08], unk_9b4, 0x800);
    Gfx2d_LoadScreen(unk_9b4, unk_0b, 0x800, 0);
    LabelString *o = (LabelString *)NumberPad_AllocLabel((Ov130S *)this);
    if (unk_07 == 6) {
        String_Load2dMenu(o, 0x51);
    } else {
        String_Load2dMenu(o, 0xb8);
    }
    u32 a = 0xec;
    u32 b = 4;
    if (unk_07 == 6) {
        a = 0x14c;
        b = 6;
    }
    o->createLabel(unk_0b, a, b, 0xf, 0, 0);
    o->redrawAligned(1, 0);
    o = (LabelString *)NumberPad_AllocLabel((Ov130S *)this);
    switch (unk_07) {
    case 2:
        String_Load2dMenu(o, 0x59);
        break;
    case 4:
        String_Load2dMenu(o, 0x50);
        break;
    default:
        String_Load2dMenu(o, 0x54);
        break;
    }
    o->createLabel(unk_0b, 0xb0, 0xa, 0xf, 0, 0);
    o->redrawAligned(1, 0);
    o = (LabelString *)NumberPad_AllocLabel((Ov130S *)this);
    String_Load2dMenu(o, sValueLabelTextIds[unk_07]);
    o->createLabel(unk_0b, 0xc4, 0xa, 0xf, 0, 0);
    o->redrawAligned(1, 0);
    if (unk_08 == 0 || unk_08 == 2) {
        o = (LabelString *)NumberPad_AllocLabel((Ov130S *)this);
        String_Load2dMenu(o, sBalanceLabelTextIds[unk_07]);
        o->createLabel(unk_0b, 0xd8, 0xa, 0xf, 0, 0);
        o->redrawAligned(1, 0);
    }
    NumberPad_ResetKeyPalettes((Ov130S *)this);
    NumberPad_RedrawValues((Ov130S *)this);
}

void NumberPad_LoadObjGraphics(s32 n) {
    void *h = gCurrentHeap;
    u32 local;
    Gfx2d_LoadPaletteFile("menu/bank/obj.bpl", h, 8, 4, 4, 0xe);
    Gfx2d_LoadCharFile("menu/bank/obj0.bch", h, 8, 0xc0, 0xc0, 0x15f);
    Gfx2d_LoadCharFile("menu/bank/obj1.bch", h, 8, 0x160, 0x160, 0x1ff);
    u8 *res = File_LoadAlloc(sTitleObjCharFiles[n / 5], h, -4, &local);
    u8 *p = res + (n % 5) * 0xc0;
    s32 c = 0x15a;
    s32 i;
    for (i = 0; i < 6; i++) {
        Gfx2d_LoadCharRange(p, 8, c, c, c + 5);
        p += 0x400;
        c += 0x20;
    }
    Heap_Free(h, res);
    Gfx2d_LoadPaletteFileSlot("menu/bank/ten0.bpl", h, 8, n, 4);
}

void NumberPad::loadObj() {
    NumberPad_LoadObjGraphics(unk_09);
    LabelString *o = (LabelString *)NumberPad_AllocLabel((Ov130S *)this);
    String_Load2dMenu(o, sTitleTextIds[unk_07]);
    o->createLabel(8, 0x14c, 0xe, 0xf, 0, 0);
    o->redrawAligned(1, 0);
}

void NumberPad::shutdown() {
    NumberPad_ReleaseLabels((Ov130S *)this);
    unk_16c[0].cancel();
    unk_16c[1].cancel();
}

void NumberPad::update() {
    NumberPad_ReleaseLabels((Ov130S *)this);
    unk_16c[0].cancel();
    unk_16c[1].cancel();
    if (unk_03 != 0) {
        unk_03 = unk_03 - 1;
        if (*(volatile u8 *)&unk_03 == 0) {
            if (unk_02 != 0) {
                unk_03 = 1;
            } else {
                NumberPad_UnhighlightKey((Ov130S *)this, unk_04);
            }
        }
    }
}

void NumberPad::flushScreens() {
    if (NumberPad_TestFlags((Ov130S *)this, 1)) {
        if (unk_16c[0].requestScreen((u32)unk_1b4, unk_0a, 0x800, 0)) {
            NumberPad_ClearFlags((Ov130S *)this, 1);
        }
    }
    if (NumberPad_TestFlags((Ov130S *)this, 2)) {
        if (unk_16c[1].requestScreen((u32)unk_9b4, unk_0b, 0x800, 0)) {
            NumberPad_ClearFlags((Ov130S *)this, 2);
        }
    }
}

extern "C" u32 NumberPad_HitTestKey(Ov130S *s, s32 x, s32 y) {
    s32 yy;
    x -= 0x50;
    yy = y - 0x60;
    y = yy;
    if (s->unk_08 == 0 || s->unk_08 == 2) x -= 0x40;
    if (x >= 0 && x < 0x60 && y >= 0 && y < 0x40) {
        s->unk_04 = sNumberPadTouchKeyMap[(x >> 5) + (y >> 4) * 3];
        return s->unk_04;
    }
    return 13;
}

extern "C" void NumberPad_PressKey(Ov130S *s) {
    NumberPad_ResetKeyPalettes(s);
    NumberPad_HighlightKey(s, s->unk_04);
    s->unk_02 = 0xd;
    s->unk_03 = 5;
    NumberPad_ApplyKey(s);
}

extern "C" void NumberPad_StopKeyRepeat(Ov130S *s) {
    s->unk_02 = 0;
}

extern "C" BOOL NumberPad_TickKeyRepeat(Ov130S *s) {
    if (s->unk_02 != 0) {
        s->unk_02--;
        if (s->unk_02 == 0) {
            s->unk_02 = 2;
            NumberPad_ApplyKey(s);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void NumberPad_ResetKeyPalettes(Ov130S *s) {
    s32 x;
    if (s->unk_08 == 0 || s->unk_08 == 2) x = 0x12;
    else x = 0xa;
    BgScreen_SetRectPalette((u8 *)s + 0x9b4, x, 0xc, x + 0xc, 0x13, 2);
    NumberPad_UnhighlightKey(s, 10);
    NumberPad_SetFlags(s, 2);
}

extern "C" void NumberPad_SetKeyPalette(Ov130S *s, u32 idx, s32 n) {
    s32 a = sKeyX0Table[idx];
    s32 b = sKeyX1Table[idx];
    s32 c = sKeyRowTable[idx];
    s32 d = c + 1;
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        a += 8;
        b += 8;
    }
    BgScreen_SetRectPalette((u8 *)s + 0x9b4, a, c, b, d, n);
    NumberPad_SetFlags(s, 2);
}

extern "C" void NumberPad_HighlightKey(Ov130S *s, u32 idx) {
    NumberPad_SetKeyPalette(s, idx, 3);
}

extern "C" void NumberPad_UnhighlightKey(Ov130S *s, u32 idx) {
    s32 n;
    if (idx == 10) n = 1;
    else n = 2;
    NumberPad_SetKeyPalette(s, idx, n);
}

extern "C" u32 NumberPad_GetCursorX(Ov130S *s) {
    u32 t = s->unk_05;
    u32 v = sNumberPadCursorXTable[t];
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        if (t <= 10) v += 0x40;
    }
    return v;
}

extern "C" u32 NumberPad_GetCursorY(Ov130S *s) {
    return sNumberPadCursorYTable[s->unk_05];
}

extern "C" BOOL NumberPad_IsCursorOnButton(Ov130S *s) {
    BOOL r = TRUE;
    u32 t = s->unk_05;
    if (t != 0xb && t != 0xc) r = FALSE;
    return r;
}

extern "C" BOOL NumberPad_MoveCursor(Ov130S *s, u32 p) {
    u32 old;
    if (p == 0) return FALSE;
    old = s->unk_05;
    if (MenuKeys_HasUp(p)) s->unk_05 = sNumberPadCursorUpTable[s->unk_05];
    else if (MenuKeys_HasDown(p)) s->unk_05 = sNumberPadCursorDownTable[s->unk_05];
    if (MenuKeys_HasLeft(p)) s->unk_05 = sNumberPadCursorLeftTable[s->unk_05];
    else if (MenuKeys_HasRight(p)) s->unk_05 = sNumberPadCursorRightTable[s->unk_05];
    if (old != s->unk_05) return TRUE;
    return FALSE;
}

extern "C" BOOL NumberPad_PressCursorKey(Ov130S *s) {
    u32 t = s->unk_05;
    if ((u8)(t + 0xf5) <= 1) return FALSE;
    s->unk_04 = t;
    NumberPad_PressKey(s);
    return TRUE;
}

extern "C" BOOL NumberPad_IsCursorOnOk(Ov130S *s) {
    if (s->unk_05 == 0xb) return TRUE;
    return FALSE;
}

extern "C" void NumberPad_DrawKeypadFrame(Ov130S *s) {
    s32 y = (s32)s + 0x60;
    Oam_DrawCell(1, data_ov130_02293518, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, data_ov130_02293568, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

extern "C" void NumberPad_Draw(Ov130S *s, s32 y) {
    s32 r4 = y;
    s32 r6 = r4 + 0x60;
    u32 *t1;
    u32 *t2;
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        t1 = data_ov130_022934d8;
        t2 = data_ov130_022935e8;
    } else if (s->unk_08 == 4) {
        t1 = data_ov130_02293518;
        t2 = data_ov130_022935a8;
    } else {
        t1 = data_ov130_02293518;
        t2 = data_ov130_02293568;
    }
    if (s->unk_09 == 3) r6 += 10;
    Oam_DrawCell(1, t1, 0x80, r6, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    Oam_DrawCell(1, t2, 0x80, r6, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    r4 += 0x60;
    if (s->unk_08 == 4) return;
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        if (s->unk_0c >= 1000) func_02088730(1, sSeparatorCellsWide, 0x80, r4, -1, 2, 0);
        if (s->unk_0c >= 1000000) func_02088730(1, (sSeparatorCellsWide + 2), 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000) func_02088730(1, (sSeparatorCellsWide + 4), 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000000) func_02088730(1, (sSeparatorCellsWide + 6), 0x80, r4, -1, 2, 0);
        if (s->unk_20 >= 1000) func_02088730(1, (sSeparatorCellsWide + 8), 0x80, r4, -1, 2, 0);
        if (s->unk_20 >= 1000000) func_02088730(1, (sSeparatorCellsWide + 10), 0x80, r4, -1, 2, 0);
    } else {
        if (s->unk_08 == 5) r4 -= 8;
        if (s->unk_0c >= 1000) func_02088730(1, (sSeparatorCells + 4), 0x80, r4, -1, 2, 0);
        if (s->unk_0c >= 1000000) func_02088730(1, (sSeparatorCells + 6), 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000) func_02088730(1, sSeparatorCells, 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000000) func_02088730(1, (sSeparatorCells + 2), 0x80, r4, -1, 2, 0);
    }
}

extern "C" void NumberPad_SetAmounts(Ov130S *s, s32 a, s32 b, s32 c) {
    s->unk_10 = a;
    s->unk_14 = b;
    s->unk_18 = c;
}

extern "C" s32 NumberPad_GetValue(Ov130S *s) {
    return s->unk_0c;
}

extern "C" s32 NumberPad_GetTopAmount(Ov130S *s) {
    return s->unk_14;
}

extern "C" s32 NumberPad_GetBottomAmount(Ov130S *s) {
    return s->unk_18;
}

extern "C" void NumberPad_PlayKeySe(u32 idx) {
    Snd_PlayKeySe(sNumberPadKeySeIds[idx]);
}

extern "C" void NumberPad_PlayCancelSe() {
    Snd_PlaySe(0x2a);
}

extern "C" BOOL NumberPad_ClearValue(Ov130S *s) {
    if (s->unk_0c == 0) return FALSE;
    s->unk_0c = 0;
    NumberPad_PlayCancelSe();
    NumberPad_RedrawValues(s);
    return TRUE;
}

extern "C" void NumberPad_ApplyKey(Ov130S *s) {
    s32 n;
    s32 v = s->unk_0c;
    u32 k = s->unk_04;
    if (k == 10) {
        if (!NumberPad_ClearValue(s)) Snd_PlaySe(0x34);
    } else {
        n = k + v * 10;
        if (n > s->unk_10) n = s->unk_10;
        if (n == v) {
            Snd_PlaySe(0x34);
        } else {
            NumberPad_PlayKeySe(k);
            s->unk_0c = n;
            NumberPad_RedrawValues(s);
        }
    }
}

extern "C" void NumberPad_RedrawValues(Ov130S *s) {
    u32 m = s->unk_08;
    u32 a = sDigitColumnTable[m];
    u32 b = sDigitRowTable[m];
    switch (m) {
    case 4:
        if (s->unk_0c == 0) Unk_ov130_022925c8_Imp::NumberPad_FillSmallDigits(s, 10, a, b, 2);
        else Unk_ov130_022925c8_Imp::NumberPad_PrintSmallNumber(s, s->unk_0c, a, b, 2);
        break;
    case 5:
        if (s->unk_0c == 0) {
            Unk_ov130_022925c8_Imp::NumberPad_PrintSmallNumber(s, 0, a, b, 9);
            Unk_ov130_022925c8_Imp::NumberPad_FillSmallDigits(s, 10, a, b, 7);
        } else {
            Unk_ov130_022925c8_Imp::NumberPad_PrintSmallNumber(s, s->unk_0c, a, b, 7);
        }
        break;
    default:
        s->unk_1c = s->unk_14;
        if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::NumberPad_PrintSmallNumber(s, s->unk_1c, a, b, 9);
        else Unk_ov130_022925c8_Imp::NumberPad_PrintLargeNumber(s, s->unk_1c, a, b, 6);
        if (s->unk_0c == 0) {
            if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::NumberPad_FillSmallDigits(s, 10, a, b + 3, 9);
            else Unk_ov130_022925c8_Imp::NumberPad_FillLargeDigits(s, 10, a, b + 3, 6);
        } else {
            if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::NumberPad_PrintSmallNumber(s, s->unk_0c, a, b + 3, 9);
            else Unk_ov130_022925c8_Imp::NumberPad_PrintLargeNumber(s, s->unk_0c, a, b + 3, 6);
        }
        if (s->unk_08 == 0 || s->unk_08 == 2) {
            s32 t = s->unk_18;
            if (s->unk_07 != 0) t += s->unk_0c;
            s->unk_20 = t;
            if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::NumberPad_PrintSmallNumber(s, s->unk_20, a, b + 6, 9);
            else Unk_ov130_022925c8_Imp::NumberPad_PrintLargeNumber(s, s->unk_20, a, b + 6, 6);
        }
    }
}

extern "C" void NumberPad_FillLargeDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        NumberPad_PutLargeDigit(s, idx, x, y);
        x -= 2;
    }
}

extern "C" void NumberPad_PrintLargeNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (val == 0) {
            NumberPad_PutLargeDigit(s, 11, x, y);
        } else {
            NumberPad_PutLargeDigit(s, val % 10, x, y);
            val = val / 10;
        }
        x -= 2;
    }
}

extern "C" void NumberPad_PutLargeDigit(Ov130S *s, s32 idx, s32 x, s32 y) {
    u16 b;
    s32 p;
    if (idx != 11) b = (u16)(idx * 4 + 0x84);
    else b = 0x176;
    p = x + y * 32;
    s->map[p] = (s->map[p] & 0xfc00) | b;
    s->map[p + 1] = (s->map[p + 1] & 0xfc00) | (u16)(b + 1);
    b += 2;
    if (idx == 11) b = 0x176;
    s->map[p + 0x20] = (s->map[p + 0x20] & 0xfc00) | b;
    s->map[p + 0x21] = (s->map[p + 0x21] & 0xfc00) | (u16)(b + 1);
    NumberPad_SetFlags(s, 1);
}

extern "C" void NumberPad_FillSmallDigits(Ov130S *s, s32 idx, s32 x, s32 y, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        NumberPad_PutSmallDigit(s, idx, x, y);
        x--;
    }
}

extern "C" void NumberPad_PrintSmallNumber(Ov130S *s, s32 val, s32 x, s32 y, s32 n) {
    s32 z = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        if (val == 0) {
            if (i == 0) NumberPad_PutSmallDigit(s, z, x, y);
            else NumberPad_PutSmallDigit(s, 11, x, y);
        } else {
            NumberPad_PutSmallDigit(s, val % 10, x, y);
            val = val / 10;
        }
        x--;
    }
}

extern "C" void NumberPad_PutSmallDigit(Ov130S *s, s32 idx, s32 x, s32 y) {
    s32 p;
    u16 *m;
    u16 t = (u16)(idx * 2 + 0x160);
    p = x + y * 32;
    m = s->map;
    m[p] = (m[p] & 0xfc00) | t;
    p += 0x20;
    t = (u16)(t + 1);
    m[p] = (m[p] & 0xfc00) | t;
    NumberPad_SetFlags(s, 1);
}

extern "C" void NumberPad_ReleaseLabels(Ov130S *s) {
    s32 i;
    s->unk_06 = 0;
    for (i = 0; i < 5; i++) _ZN11LabelString12destroyLabelEv(s->slots[i]);
}

extern "C" void *NumberPad_AllocLabel(Ov130S *s) {
    if (s->unk_06 >= 5) return (u8 *)s + 0x12c;
    s->unk_06++;
    return s->slots[s->unk_06 - 1];
}

extern "C" BOOL NumberPad_TestFlags(Ov130S *s, u32 m) {
    if ((s->flags & m) != 0) return TRUE;
    return FALSE;
}

extern "C" void NumberPad_SetFlags(Ov130S *s, u32 m) {
    s->flags |= m;
}

extern "C" void NumberPad_ClearFlags(Ov130S *s, u32 m) {
    s->flags &= ~m;
}

