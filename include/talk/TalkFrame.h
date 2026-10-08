#ifndef TALK_TALKFRAME_H
#define TALK_TALKFRAME_H

#include "types.h"
#include "ui/TalkArrow.h"
#include "ui/TalkBusyIcon.h"
#include "nitro/fs.h"

// The talk window's frame (0x80 bytes on the DS): the BG 2 graphics of the window (loaded from /a_mes/, uploaded
// when the window opens), the "next" arrow and the busy icon, and the window's scroll position.
// Defined in src/main/unk_02065e88.cpp.
class TalkFrame {
public:
    TalkFrame();
    ~TalkFrame();
    BOOL load(s32 a, u32 b, s32 c, u8 d);
    void draw();
    void update();
    void freeBuffers();
    void uploadBg();
    BOOL loadCharacters(FSFile *file);
    BOOL loadPalette(FSFile *file);
    BOOL loadScreen(FSFile *file, BOOL alt);
    void setTextPalette(s32 idx);
    void setNamePalette(s32 a, BOOL b);

    void drawBusyIcon();
    void updateBusyIcon();
    void hideBusyIcon();
    void showBusyIcon(u32 se);
    BOOL isArrowEndDone();
    BOOL isArrowNextDone();
    BOOL isArrowWaiting();
    BOOL isArrowHidden();
    void drawArrow();
    void updateArrow();
    void showArrowEnd();
    void showArrowNext();
    void showArrowWait();
    void hideArrow();
    void setScroll(s32 x, s32 y);
    void setScrollY(s32 y);

    /* 0x00 */ u16 *screenData;
    /* 0x04 */ void *paletteData;
    /* 0x08 */ void *charData;
    /* 0x0c */ TalkArrow arrow;
    /* 0x50 */ TalkBusyIcon busyIcon;
    /* 0x74 */ s32 scrollX;
    /* 0x78 */ s32 scrollY;
    /* 0x7c */ s32 busyIconTimer;  // -1 while shown, then counts down after hideBusyIcon
};

#endif
