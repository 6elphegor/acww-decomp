#ifndef UI_NAMELABELBALLOONVIEW_H
#define UI_NAMELABELBALLOONVIEW_H

#include "types.h"

class MsgTextLabel;

// 0x70-byte view of the HUD name-label balloon. Methods defined in src/main/unk_02089fbc.cpp.
class NameLabelBalloonView {
public:
    void freeLabel();
    void createLabel();

    /* 0x00 */ u32 pad_00[3];
    /* 0x0c */ s32 kind;
    /* 0x10 */ u32 pad_10[0x5c / 4];
    /* 0x6c */ MsgTextLabel *textLabel;
};

#endif
