#ifndef UI_LABELSTRING_H
#define UI_LABELSTRING_H

// Message string drawn through its own text label (0x40 bytes, vtable 0x020e0480; 0x2a bytes of text at +0x12).
// Defined in src/main/unk_0206fc44.cpp (ctor/dtor, data/capacity) and src/main/unk_0206f834.cpp (label methods).
#include "types.h"
#include "talk/MsgString.h"

class TextLabel;

class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 capacity();
    virtual u8 *data();

    u32 getTextWidth();
    void setHighlight(u8 a, u8 b, u32 c, u32 d);
    void redrawAt(s32 v);
    void redrawRight();
    void redrawOffset(s32 a, s32 b);
    void redrawAligned(s32 a, s32 b);
    void createBufferLabel(u32 a, u32 b, u8 x, u8 y);
    void createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void setLayerColors(u32 id, u8 x, u8 y);
    void destroyLabel();

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ TextLabel *label;
};

#endif // UI_LABELSTRING_H
