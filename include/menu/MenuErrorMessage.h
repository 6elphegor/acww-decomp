#ifndef MENU_MENUERRORMESSAGE_H
#define MENU_MENUERRORMESSAGE_H

// Menu error / notice message (0x108 bytes, non-polymorphic): a "touch" prompt balloon plus a talk request that shows
// the message in the talk window. Defined in ov002, unk_ov002_02202fac.cpp.
#include "types.h"
#include "ui/TouchPromptBalloon.h"
#include "talk/TalkMsgRequest.h"

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();

    BOOL restoreBrightness();
    s32 dimSubScreen();
    BOOL finishTalk();
    void advanceTalk();
    BOOL isTalkWaiting();
    void undim();
    void hidePromptBalloon();
    void updatePromptBalloon();
    void showPromptOnly();
    BOOL stepClose();
    void beginClose();
    BOOL stepOpen();
    void startTalk(u8 *a, s32 b);
    BOOL update(s32 a);
    void openHigh(u8 *a, s32 b, u32 c);
    void open(u8 *a, s32 b, u32 c);

    /* 0x00 */ TouchPromptBalloon prompt;
    /* 0xc0 */ TalkMsgRequest talk;
    /* 0x104 */ u8 state;
    /* 0x105 */ u8 isFatal;
};

#endif
