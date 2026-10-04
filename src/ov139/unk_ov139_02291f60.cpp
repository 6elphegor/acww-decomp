#include "types.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "ui/UiWidget.h"

// ---------------------------------------------------------------------------------------------------------------------
// Declarations from other files

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};



class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr attr;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

class EncodedString8B : public EncodedString {
public:
    EncodedString8B();
    virtual ~EncodedString8B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[10];
};

class MsgString9C : public MsgString {
public:
    MsgString9C();
    virtual ~MsgString9C();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u32 unk_14;
};

// String buffer wrapping a text renderer at +0x3c (size 0x40)
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 capacity();
    virtual u8 *data();

    s32 redrawAligned(s32 a, s32 b);
    void createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void destroyLabel();

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ void *label;
};


class LabelBalloon : public UiWidget {
public:
    LabelBalloon(s32 flag);
    virtual ~LabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    void setPos(s32 a, s32 b);
    void showLayer2();

    /* 0x0c */ u8 unk_0c[0xb0];
};

class MenuTitleBalloon : public LabelBalloon {
public:
    MenuTitleBalloon();
    virtual ~MenuTitleBalloon();
    virtual void setOrigin(s32 a, s32 b);

    void hideNow();
    void showText(u8 a, s32 b, s32 c);
};

// Button/sound helper (size 0x24)
class BgVramTask {
public:
    BgVramTask();
    virtual BOOL vfunc_00();
    virtual void clear();
    BOOL requestPalette(u32 a, u8 b, u32 c);
    void cancel(void);

    /* 0x04 */ u8 unk_04[0x20];
};

extern "C" {
extern u32 gCurrentHeap;

s32 Gfx2d_LoadCharFile(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f);
s32 Gfx2d_LoadPaletteFile(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
void String_FromEncodedBytes(MsgString *dst, const void *s, s32 len);
void String_Load2dMenu(void *a, u8 v);
BOOL EncodedString_SetRaw(void *, const void *, s32);
u8 String_SetSlot(u32 idx, MsgString *other);
BOOL File_LoadToBuffer(void *a, void *b, s32 c);
void MIi_CpuCopy16(void *dst, void *src, u32 n);
}

extern "C" u32 data_ov139_022925c0[8];
extern "C" u32 data_ov139_022925e0[8];
extern "C" u32 data_ov139_02292600[8];
extern "C" u32 data_ov139_02292620[8];
extern "C" u32 data_ov139_02292640[8];
extern "C" u32 data_ov139_02292660[8];
extern "C" u32 data_ov139_022926a0[12];
extern "C" u32 data_ov139_022926d0[84];


extern "C" u32 sTownListCellLists[8] = {(u32)data_ov139_022926d0, (u32)data_ov139_022926a0, (u32)data_ov139_022925c0, (u32)data_ov139_022925e0, (u32)data_ov139_02292620, (u32)data_ov139_02292640, (u32)data_ov139_02292600, (u32)data_ov139_02292660};
extern "C" u32 data_ov139_022925c0[8] = {0x81bf4047, 0x00008893, 0x41df0047, 0x00008897, 0x81d50040, 0x00008882, 0x81b90040, 0xffff8880};
extern "C" u32 data_ov139_022925e0[8] = {0x80114047, 0x0000888d, 0x40310047, 0x00008891, 0x80270040, 0x00008882, 0x800b0040, 0xffff8880};
extern "C" u32 data_ov139_02292600[8] = {0x81e44048, 0x00008893, 0x40040048, 0x00008897, 0x81fa0041, 0x00008882, 0x81de0041, 0xffff8880};
extern "C" u32 data_ov139_02292620[8] = {0x81e84023, 0x0000a08d, 0x40080023, 0x0000a091, 0x81fe001c, 0x0000a082, 0x81e2001c, 0xffffa080};
extern "C" u32 data_ov139_02292640[8] = {0x81a34048, 0x00008899, 0x41c30048, 0x0000889d, 0x81b90041, 0x00008882, 0x819d0041, 0xffff8880};
extern "C" u32 data_ov139_022926d0[84] = {0x81a800a8, 0x0000b17b, 0x41c880a8, 0x0000b17f, 0x41a840c8, 0x0000b1fb, 0x01c800c8, 0x0000b1ff, 0x4030403e, 0x000048e6, 0x4010403e, 0x000048e6, 0x41e8403e, 0x000048e6, 0x41c8403e, 0x000048e6, 0x41a8403e, 0x000048e6, 0x4030402e, 0x000048e6, 0x4010402e, 0x000048e6, 0x41e8402e, 0x000048e6, 0x41c8402e, 0x000048e6, 0x41a8402e, 0x000048e6, 0x4030401e, 0x000048e6, 0x4010401e, 0x000048e6, 0x41e8401e, 0x000048e6, 0x41c8401e, 0x000048e6, 0x41a8401e, 0x000048e6, 0x4030400e, 0x000048e6, 0x4010400e, 0x000048e6, 0x41e8400e, 0x000048e6, 0x41c8400e, 0x000048e6, 0x41a8400e, 0x000048e6, 0x403040fe, 0x000048e6, 0x401040fe, 0x000048e6, 0x41e840fe, 0x000048e6, 0x41c840fe, 0x000048e6, 0x41a840fe, 0x000048e6, 0x403040ee, 0x000048e6, 0x401040ee, 0x000048e6, 0x41e840ee, 0x000048e6, 0x41c840ee, 0x000048e6, 0x41a840ee, 0x000048e6, 0x41bc40d6, 0x000058cd, 0x01dc40d6, 0x000058d1, 0x401440d6, 0x000058ed, 0x003440d6, 0x000058f1, 0x902840d5, 0x00005888, 0x801040d5, 0x00005888, 0x91d040d5, 0x00005888, 0x81b840d5, 0xffff5888};
extern "C" u32 data_ov139_022926a0[12] = {0x403040ee, 0x000058c6, 0x41a400df, 0x00005886, 0x401040ee, 0x000058c6, 0x41e840ee, 0x000058c6, 0x41c840ee, 0x000058c6, 0x41a840ee, 0xffff58c6};

class MenuTownListPanel {
public:
    MenuTownListPanel();
    ~MenuTownListPanel();

    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    u32 getCellList(s32 i);
    void setRowPlayerName(s32 i, u8 *str, u8 pal);
    void setRowTownName(s32 i, u8 *str, u8 pal);
    LabelString *allocTextLabel();
    void resetTextLabels();
    void clearRow(s32 i);
    void setRow(s32 i, u8 *str);
    void createLabels();
    void setRowFadeColor(s32 a, s32 x, s32 n, s32 e);
    void loadObjGfx();
    void clearAllRows();
    void loadBgGfx();
    void drawTitle(s32 a, s32 b);
    void flushPalette();
    void preStateUpdate();
    void release();
    void init(u8 id, u8 v);

    /* 0x000 */ MenuTitleBalloon titleBalloon;
    /* 0x0bc */ LabelString textLabels[20];
    /* 0x5bc */ BgVramTask paletteTask;
    /* 0x5e0 */ u16 basePalette[16];
    /* 0x600 */ u16 workPalette[16];
    /* 0x620 */ u16 flags;
    /* 0x622 */ u8 bgLayer;
    /* 0x623 */ u8 labelCount;
};

MenuTownListPanel::MenuTownListPanel() {}

MenuTownListPanel::~MenuTownListPanel() {}

void MenuTownListPanel::init(u8 id, u8 v) {
    bgLayer = id;
    flags = 0;
    titleBalloon.hideNow();
    titleBalloon.showText(v, 0x90, 0x18);
    titleBalloon.showLayer2();
}

void MenuTownListPanel::release() {
    resetTextLabels();
    paletteTask.cancel();
}

void MenuTownListPanel::preStateUpdate() {
    resetTextLabels();
    paletteTask.cancel();
}

void MenuTownListPanel::flushPalette() {
    if (testFlags(1)) {
        if (paletteTask.requestPalette((u32)workPalette, bgLayer, 7)) {
            clearFlags(1);
        }
    }
}

void MenuTownListPanel::drawTitle(s32 a, s32 b) {
    titleBalloon.setPos(a, b);
    titleBalloon.draw();
}

void MenuTownListPanel::loadBgGfx() {
    u32 h = gCurrentHeap;
    Gfx2d_LoadCharFile((u32)"menu/res/bg.bch", h, bgLayer, 0x11, 0x11, 0x36);
    Gfx2d_LoadPaletteFile((u32)"menu/res/bg.bpl", h, bgLayer, 1, 1, 8);
    File_LoadToBuffer((void *)"menu/res/bg7.bpl", basePalette, 0x20);
    MIi_CpuCopy16(basePalette, workPalette, 0x20);
}

void MenuTownListPanel::clearAllRows() {
    s32 i;
    for (i = 0; i < 6; i++) {
        setRowTownName(i, NULL, 0xe);
        setRowPlayerName(i, NULL, 0xe);
    }
}

void MenuTownListPanel::loadObjGfx() {
    u32 h = gCurrentHeap;
    Gfx2d_LoadCharFile((u32)"menu/res/obj0.bch", h, 8, 0x80, 0x80, 0xff);
    Gfx2d_LoadCharFile((u32)"menu/res/obj1.bch", h, 8, 0x160, 0x160, 0x1ff);
    Gfx2d_LoadPaletteFile((u32)"menu/res/obj.bpl", h, 8, 4, 4, 0xd);
}

void MenuTownListPanel::setRowFadeColor(s32 a, s32 x, s32 n, s32 e) {
    u16 c1 = basePalette[15];
    u8 r = c1 & 0x1f;
    u8 g = (c1 & 0x3e0) >> 5;
    u8 b = (c1 & 0x7c00) >> 10;
    s32 d = n - x;
    u16 c2 = basePalette[e];
    r = ((u8)(c2 & 0x1f) * x + r * d) / n;
    g = ((u8)((c2 & 0x3e0) >> 5) * x + g * d) / n;
    b = ((u8)((c2 & 0x7c00) >> 10) * x + b * d) / n;
    workPalette[(u8)(0xe - a)] = r | (g << 5) | (b << 10);
    setFlags(1);
}

void MenuTownListPanel::createLabels() {
    LabelString *t;
    t = allocTextLabel();
    String_Load2dMenu(t, 0x65);
    t->createLabel(8, 0x93, 6, 0xf, 0, 0);
    t->redrawAligned(1, 0);
    t = allocTextLabel();
    String_Load2dMenu(t, 0xc2);
    t->createLabel(8, 0x8d, 6, 0xf, 0, 0);
    t->redrawAligned(1, 0);
    t = allocTextLabel();
    String_Load2dMenu(t, 0xc1);
    t->createLabel(8, 0x99, 6, 0xf, 0, 0);
    t->redrawAligned(1, 0);
    t = allocTextLabel();
    String_Load2dMenu(t, 0xbc);
    t->createSmallLabel(8, 0xcd, 6, 0xe, 0, 0);
    t->redrawAligned(1, 0);
    t = allocTextLabel();
    String_Load2dMenu(t, 0xbd);
    t->createSmallLabel(8, 0xed, 6, 0xe, 0, 0);
    t->redrawAligned(1, 0);
}

void MenuTownListPanel::setRow(s32 i, u8 *str) {
    u8 t = 0xe - i;
    setRowTownName(i, str, t);
    setRowPlayerName(i, str + 8, t);
}

void MenuTownListPanel::clearRow(s32 i) {
    u8 t = 0xe - i;
    setRowTownName(i, NULL, t);
    setRowPlayerName(i, NULL, t);
}

void MenuTownListPanel::resetTextLabels() {
    s32 i;
    labelCount = 0;
    for (i = 0; i < 0x14; i++) {
        textLabels[i].destroyLabel();
    }
}

LabelString *MenuTownListPanel::allocTextLabel() {
    if (labelCount >= 0x14) {
        return &textLabels[19];
    }
    labelCount++;
    return &textLabels[labelCount - 1];
}




void MenuTownListPanel::setRowTownName(s32 i, u8 *str, u8 pal) {
    LabelString *t = allocTextLabel();
    static EncodedString8B sA;
    static MsgString9C sB;
    if (str == NULL) {
        t->clear();
    } else {
        EncodedString_SetRaw(&sA, str, 8);
        sB.fromEncoded(&sA, 0, 0);
        String_SetSlot(0, &sB);
        String_Load2dMenu(t, 0x66);
    }
    u32 a = i * 0x14 + 0x11e;
    u8 x = 0xf;
    u8 y = 0xe;
    if (pal != 0xff) {
        x = pal;
        y = 0xf;
    }
    t->createLabel(bgLayer, a, 0xa, x, y, 0);
    t->redrawAligned(1, 0);
}



extern "C" u32 data_ov139_02292660[8] = {0x80254048, 0x0000888d, 0x40450048, 0x00008891, 0x803b0041, 0x00008882, 0x801f0041, 0xffff8880};

void MenuTownListPanel::setRowPlayerName(s32 i, u8 *str, u8 pal) {
    LabelString *t = allocTextLabel();
    if (str == NULL) {
        t->clear();
    } else {
        String_FromEncodedBytes(t, str, 8);
    }
    u32 a = i * 16 + 0x1d2;
    u8 x = 0xf;
    u8 y = 0xe;
    if (pal != 0xff) {
        x = pal;
        y = 0xf;
    }
    t->createLabel(bgLayer, a, 8, x, y, 0);
    t->redrawAligned(1, 0);
}

u32 MenuTownListPanel::getCellList(s32 i) { return sTownListCellLists[i]; }

BOOL MenuTownListPanel::testFlags(u32 m) {
    if (flags & m) {
        return TRUE;
    }
    return FALSE;
}

void MenuTownListPanel::setFlags(u32 m) { flags |= m; }

void MenuTownListPanel::clearFlags(u32 m) { flags &= ~m; }




// ---------------------------------------------------------------------------------------------------------------------



