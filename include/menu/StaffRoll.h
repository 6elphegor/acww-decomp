#ifndef MENU_STAFFROLL_H
#define MENU_STAFFROLL_H

#include "types.h"
#include "talk/MsgString193.h"
#include "ui/LabelString.h"
#include "gfx/BgVramTask.h"

// One scrolling text layer of the staff roll (BG 0 of the main or the sub screen): the rows filled so far and the
// screen data uploaded to VRAM.
struct StaffRollLayer {
    void clearFlags(u32 m);
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void reset();
    StaffRollLayer();
    ~StaffRollLayer();

    /* 0x00 */ s16 rowCount;
    /* 0x02 */ s16 lineIndex;
    /* 0x04 */ u8 textSlot;
    /* 0x05 */ u8 flags;  // 1: next line is a heading, 2: screen changed (upload), 4: past the last line
    /* 0x06 */ u8 blankLines;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 screen[0x800];
};

// The staff roll of K.K.'s show (0x1fc4 bytes on the DS): two scrolling text layers and the logo. Defined in
// src/ov093/unk_ov093_022918e0.cpp; created by KkShowFx_Start (src/ov004/unk_ov004_0223f2c8.cpp).
class StaffRoll {
public:
    StaffRoll();
    ~StaffRoll();
    void setFlags(u32 m);
    BOOL testFlags(u32 m);
    void loadLogo();
    void resetLabels();
    LabelString *allocLabel();
    void scroll(BOOL b);
    void fillNextRow(s32 a, StaffRollLayer *s);
    s8 *getLine(s32 i);
    void copyTemplateRow(u8 *src, u32 dstRow, u32 srcRow);
    void clearRow(u8 *dst, u32 row);
    void scrollLayer(s32 which, s32 y);
    BOOL isFinished();
    void startLogo();
    void hide();
    void start(s32 a);
    void loadTextGraphics();
    void loadTemplate();
    void stop();
    void uploadScreens();
    void update();
    void init();

    /* 0x0000 */ u16 flags;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ u8 labelCount;
    /* 0x0005 */ u8 state;
    /* 0x0006 */ u8 logoTimer;
    /* 0x0008 */ s32 scrollPos;
    /* 0x000c */ s32 logoScrollPos;
    /* 0x0010 */ s32 scrollSpeed;
    /* 0x0014 */ s32 logoScrollSpeed;
    /* 0x0018 */ StaffRollLayer layer0;
    /* 0x0820 */ StaffRollLayer layer4;
    /* 0x1028 */ u16 templateScreen[0x400];
    /* 0x1828 */ MsgString193 staffText;
    /* 0x18fc */ LabelString labels[26];
    /* 0x1f7c */ BgVramTask screenTasks[2];
};

#endif
