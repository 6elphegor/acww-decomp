#ifndef MENU_MENUTOWNLISTPANEL_H
#define MENU_MENUTOWNLISTPANEL_H

// Town/player list panel of the ov139..ov141 menus (0x624 bytes): title balloon, 20 text labels, a palette task.
// Defined in src/ov139/unk_ov139_02291f60.cpp.
#include "types.h"
#include "gfx/BgVramTask.h"
#include "ui/LabelString.h"
#include "menu/MenuTitleBalloon.h"

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

#endif // MENU_MENUTOWNLISTPANEL_H
