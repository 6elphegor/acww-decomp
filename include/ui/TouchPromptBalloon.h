#ifndef UI_TOUCHPROMPTBALLOON_H
#define UI_TOUCHPROMPTBALLOON_H

// "Touch" prompt speech balloon (0xc0 bytes, vtable 0x02204468): a LabelBalloon with an open/auto-close state.
// Defined in ov002, unk_ov002_02200680.cpp (0x02200680..0x02200800).
#include "types.h"
#include "ui/LabelBalloon.h"

class TouchPromptBalloon : public LabelBalloon {
public:
    TouchPromptBalloon();                       // C1 0x02200800
    virtual ~TouchPromptBalloon();              // D0 0x022007c8, D1 0x022007e8

    BOOL isOpenOrOpening();                     // 0x02200680
    void setAutoCloseTimer(u8 v);               // 0x022006a4
    void func_ov002_022006ac(s32 v);            // 0x022006ac
    void cancelQueuedOpen();                    // 0x022006b0
    void queueOpen();                           // 0x022006b8
    void commitOpen();                          // 0x022006c0
    BOOL hide(s32 a);                           // 0x022006e4
    s32 updatePrompt();                         // 0x0220071c

    /* 0xbc */ u8 promptState;
    /* 0xbd */ u8 openQueued;
    /* 0xbe */ volatile u8 autoCloseTimer;
};

#endif
