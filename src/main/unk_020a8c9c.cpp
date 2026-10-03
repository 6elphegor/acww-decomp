#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files

// 0x020e2a08: small state object (position + two bytes), see unk_020a6914.cpp
class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

// Buffer interface with write position at +4, see unk_020a6914.cpp
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0; // size
    virtual u8 *vfunc_0c() = 0; // data
    u8 copy(MsgString *other);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// 0xc-byte record, see unk_020a6914.cpp (whose ctor BmgMsgAttr_Init and dtor BmgMsgAttr_Fini are still C functions there)
struct BmgMsgAttr {
    BmgMsgAttr();
    ~BmgMsgAttr();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

// 0x33-byte buffer; unk_020a6914.cpp calls this class Unk_020aa8e0 (its constructor)
class ChoiceString : public MsgString {
public:
    ChoiceString();
    virtual ~ChoiceString();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    BOOL loadFromBmg(const char *path, void *entry, BmgMsgAttr *out);

    /* 0x14 */ u8 unk_14[0x20];
};

// Buffer used on the stack in func_020aadcc; ctor func_0208e6b8, dtor func_0208e6a0
class LabelButtonText : public MsgString {
public:
    LabelButtonText();
    virtual ~LabelButtonText();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[8];
};

// BMG message file reader, see unk_020a6914.cpp
class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;

    BOOL loadMessage(u8 *arg1);
    void close();
    u8 open(const char *path);

    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05[0x3f];
    /* 0x44 */ u8 unk_44[0x48];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x90 */ u32 unk_90[3];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
};

// ---------------------------------------------------------------------------------------------------------------------
// Widget classes defined elsewhere

// Widget root (vtable 0x020e0db4)
class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();

    /* 0x00 */ u8 unk_00[0x14];
};

// Vtable 0x020e100c
class HandCursor : public UiWidget {
public:
    HandCursor(s32 a);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getAnim();
    void setAnim(s32 v);
    void setPos(s32 a, s32 b);

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ SpriteAnim unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

// Vtable 0x020e1028
class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 a);
    virtual ~ScrollKnob();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL areAnimsDone();
    s32 getState();
    void setState(s32 a);
    void getAnimOffset(s32 *x, s32 *y);
    void setPriority(s32 a);
    void moveTo(s32 a, s32 b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

// Vtable 0x020e1098 (ctor func_0208e590)
class LabelButton : public UiWidget {
public:
    LabelButton(u8 a, s32 b);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    void setState(s32 v);
    void getAnimOffset(s32 *x, s32 *y);
    void setPos(s32 x, s32 y);


    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ SpriteAnim unk_1c;
    /* 0x30 */ SpriteAnim unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ LabelButtonText unk_4c;
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

// ---------------------------------------------------------------------------------------------------------------------
// Classes of this file

// Vtable 0x020e2cb0: BMG reader over a caller-provided buffer (the global sChoiceBmgReader)
class BufferBmgReader : public BmgReader {
public:
    BufferBmgReader();
    virtual ~BufferBmgReader();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();

    void clearBuffer();
    void setBuffer(u8 *data, u32 size);

    /* 0xa4 */ u8 *unk_a4;
    /* 0xa8 */ u32 unk_a8;
};

// Vtable 0x020e2d14
class ChoiceHandCursor : public HandCursor {
public:
    ChoiceHandCursor();
    virtual ~ChoiceHandCursor();
};

// Vtable 0x020e2cf8: scroll bar
class ChoiceSlider : public UiWidget {
public:
    ChoiceSlider();
    virtual ~ChoiceSlider();
    virtual void draw();
    virtual void vfunc_0c();
    virtual void setOrigin(s32 a, s32 b);

    void startKnobRelease();
    void startKnobGrab();
    void hideKnob();
    void showKnob();
    BOOL isKnobAnimDone();
    void getKnobAnimOffset(s32 *x, s32 *y);
    s32 getTrackTop();
    s32 getTrackBottom();
    s32 getKnobY();
    s32 getKnobX();
    s32 getKnobOffsetY();
    void setPos(s32 v);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ ScrollKnob unk_10;
};

// Vtable 0x020e2c98: menu window base (BG tile map loaded from a file)
class ChoiceWindow {
public:
    ChoiceWindow();
    virtual ~ChoiceWindow();
    virtual void update() = 0;
    virtual void draw() = 0;

    s32 hitTestRow(s32 x, s32 y);
    void setRowColor(s32 idx, u16 val);
    void setAllRowColors();
    void setScroll(s32 a, s32 b);
    void hideLayer();
    void showLayer();
    void flushRowColors();
    void uploadBg();
    void setupBgControl();
    void setWidth(s32 v);
    void setTopRow(s32 v);
    void fitWidth(u32 start, u32 end);
    void layout5Rows();
    void layout4Rows();
    void layout3Rows();
    void layout2Rows();
    void layout1Row();
    void freeBg();
    BOOL loadBg();
    BOOL loadBgFile(void *file);

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u16 unk_08[5];
    /* 0x12 */ u8 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s16 unk_18;
    /* 0x1a */ s16 unk_1a;
    /* 0x1c */ s16 unk_1c;
    /* 0x1e */ s16 unk_1e;
};

// Vtable 0x020e2cc8
class ChoiceSliderWindow : public ChoiceWindow {
public:
    ChoiceSliderWindow();
    virtual ~ChoiceSliderWindow();
    virtual void update();
    virtual void draw();

    void updateDecided();
    void enterDecided();
    void updateCursorReturn();
    void enterCursorReturn();
    void updateButtonUp();
    void updateButtonDown();
    void enterButtonDown();
    void updatePressing();
    void enterPressing();
    void updateButtonFocus();
    void enterButtonFocus();
    void updateReleased();
    void enterReleased();
    void updateReleasing();
    void enterReleasing();
    void updateGrabbed();
    void enterGrabbed();
    void updateGrabbing();
    void enterGrabbing();
    void updateSliderFocus();
    void enterSliderFocus();
    void updateHidden();
    void enterHidden();
    void setCursorAnim(s32 v);
    void requestClose();
    void requestPress();
    void requestButtonFocus();
    void releaseKnob();
    void grabKnob();
    void requestSliderFocus();
    s32 getState();
    BOOL isButtonFocused();
    BOOL isSliderFocused();
    s32 getTrackBottomY();
    s32 getTrackTopY();
    s32 getKnobY();
    s32 getKnobX();
    void setSliderPos(s32 v);
    void setCursorVisible(u8 v, BOOL flag);
    BOOL isKnobHeld();
    void close();
    void openWidgets();

    /* 0x020 */ ChoiceHandCursor unk_20;
    /* 0x06c */ LabelButton unk_6c;
    /* 0x0dc */ ChoiceSlider unk_dc;
    /* 0x134 */ s32 unk_134;
    /* 0x138 */ u8 unk_138;
    /* 0x139 */ u8 unk_139;
    /* 0x13a */ u8 unk_13a;
    /* 0x13b */ u8 unk_13b;
    /* 0x13c */ u8 unk_13c;
    /* 0x13d */ u8 unk_13d;
};

// Vtable 0x020e2ce0
class ChoiceListWindow : public ChoiceWindow {
public:
    ChoiceListWindow();
    virtual ~ChoiceListWindow();
    virtual void update();
    virtual void draw();

    void setCursorVisible(u8 v, BOOL flag);
    BOOL blinkStep(s32 a);
    void resetBlink();
    void setCursorRow(s32 v);
    void startCursorSelect();
    void hideCursor();
    void startCursorAppear();
    BOOL isCursorSelectDone();
    BOOL isCursorPointing();

    /* 0x20 */ ChoiceHandCursor unk_20;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 unk_74;
};

// List entry, 0x68 bytes
class ChoiceEntry {
public:
    ChoiceEntry();
    ~ChoiceEntry();
    void loadText();
    void setSeType(s32 v);
    void setName(const char *src);
    void setValue(const u8 *p);
    void setBmgName(const void *p);
    void setMsgIndex(const u8 *p);
    s32 getSeType();
    u8 *getWeightPtr();
    BmgMsgAttr *getAttr();
    char *getName();
    u8 *getValuePtr();
    ChoiceString *getText();
    void clear();

    /* 0x00 */ u8 unk_00;
    /* 0x04 */ const void *unk_04;
    /* 0x08 */ ChoiceString unk_08;
    /* 0x3c */ BmgMsgAttr unk_3c;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ char unk_49[0x1a];
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ s32 unk_64;
};

// List of up to five entries plus the selected one
class ChoiceList {
public:
    ChoiceList();
    ~ChoiceList();
    void pickBySliderPos(s32 arg);
    void pick(s32 idx);
    void setCancelToLast();
    void setCount(s32 v);
    BmgMsgAttr *getResultAttr();
    ChoiceString *getResultText();
    char *getResultName();
    u8 *getResultValue();
    s32 getSliderValue();
    s32 getResult();
    s32 getCancelIndex();
    s32 getCount();
    ChoiceString *getLastText();
    ChoiceString *getFirstText();
    ChoiceEntry *getEntry(s32 i);
    void clearEntries();
    void clearResult();
    void clear();
    void loadTexts();
    void setEntry(s32 idx, const u8 *a, s32 b, const u8 *c, const char *d, s32 e);
    void reset(s32 a, s32 b);

    /* 0x000 */ ChoiceEntry unk_00[5];
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ u8 unk_214;
    /* 0x215 */ char unk_215[0x1a];
    /* 0x230 */ ChoiceString unk_230;
    /* 0x264 */ BmgMsgAttr unk_264;
    /* 0x270 */ s32 unk_270;
};

// List cursor for ChoiceListWindow windows, 0x30 bytes
class ChoiceListCursor {
public:
    ChoiceListCursor(ChoiceWindow *window);
    ~ChoiceListCursor();
    void playDecideSe();
    BOOL updateKeys();
    BOOL updateTouch();
    BOOL checkDeviceSwitch();
    void freeLabels();
    void clearLabels();
    void redrawLabels();
    void createLabels();
    void resetKeyRepeat();
    void calcMaxWidth();
    BOOL isTouchMode();
    void update();
    void close();
    void hideText();
    void showText();
    void open();
    u32 getMaxWidth();
    s32 getResult();
    s32 getRow();
    s32 getCount();
    void setList(ChoiceList *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ ChoiceWindow *unk_04;
    /* 0x08 */ TextLabel *unk_08[5];
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ ChoiceList *unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
};

// Scrolling cursor for ChoiceSliderWindow windows, 0x38 bytes
class ChoiceSliderCursor {
public:
    ChoiceSliderCursor(ChoiceSliderWindow *window);
    ~ChoiceSliderCursor();

    void updateOkButton();
    void focusOkButton();
    void updateSlider();
    void focusSlider();
    BOOL isConfirmPressed();
    BOOL isOkButtonTapped();
    BOOL isGrabKeyReleased();
    BOOL isTouchReleased();
    BOOL isGrabKeyPressed();
    BOOL isKnobTouched();
    void updateGrab();
    void updateFocus();
    BOOL checkDeviceSwitch();
    void freeLabels();
    void clearLabels();
    void redrawLabels();
    void createLabels();
    void calcMaxWidth();
    BOOL isCursorHidden();
    BOOL isGrabbing();
    BOOL isOkButtonFocused();
    BOOL isSliderFocused();
    void update();
    void close();
    void hideText();
    void showText();
    void open();
    s32 getResult();
    u32 getMaxWidth();
    s32 getPos();
    void setList(ChoiceList *p);

    /* 0x00 */ ChoiceSliderWindow *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ TextLabel *unk_14[5];
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x34 */ ChoiceList *unk_34;
};

// Vtable 0x020e2d70: common base of the two menu state machines
class ChoiceDialog {
public:
    ChoiceDialog();
    virtual ~ChoiceDialog();
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual BOOL isClosed() = 0;
    virtual BOOL justDecided() = 0;
    void requestOpen();

    /* 0x04 */ u8 unk_04;
};

// Vtable 0x020e2d30: menu state machine with a scrolling list
class ChoiceSliderDialog : public ChoiceDialog {
public:
    ChoiceSliderDialog();
    virtual ~ChoiceSliderDialog();
    virtual void update();
    virtual void draw();
    virtual BOOL isClosed();
    virtual BOOL justDecided();

    void layoutWindow();
    void updateClosing();
    void enterClosing();
    void updateSelecting();
    void enterSelecting();
    void updateOpening();
    void enterOpening();
    void updateClosed();
    void enterClosed();
    void setChoices(ChoiceList *p);

    /* 0x008 */ s32 unk_08;
    /* 0x00c */ ChoiceSliderWindow unk_0c;
    /* 0x14c */ ChoiceSliderCursor unk_14c;
    /* 0x184 */ s32 unk_184;
    /* 0x188 */ s32 unk_188;
    /* 0x18c */ s32 unk_18c;
    /* 0x190 */ u8 unk_190;
};

// Vtable 0x020e2d50: menu state machine with a short list
class ChoiceListDialog : public ChoiceDialog {
public:
    ChoiceListDialog();
    virtual ~ChoiceListDialog();
    virtual void update();
    virtual void draw();
    virtual BOOL isClosed();
    virtual BOOL justDecided();

    void layoutWindow();
    void updateClosing();
    void enterClosing();
    void updateSelecting();
    void enterSelecting();
    void updateOpening();
    void enterOpening();
    void updateClosed();
    void enterClosed();
    void setChoices(ChoiceList *p);

    /* 0x08 */ s32 unk_08;
    /* 0x0c */ ChoiceListWindow unk_0c;
    /* 0x84 */ ChoiceListCursor unk_84;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0;
};

// Holder that runs one of the two state machines
class ChoiceMenu {
public:
    ChoiceMenu();
    ~ChoiceMenu();
    void draw();
    BOOL justDecided();
    BOOL isIdle();
    void open();
    void update();
    void setSliderChoices(ChoiceList *p);
    void setListChoices(ChoiceList *p);

    /* 0x000 */ ChoiceDialog *unk_00;
    /* 0x004 */ ChoiceListDialog unk_04;
    /* 0x0c8 */ ChoiceSliderDialog unk_c8;
    /* 0x25c */ u8 unk_25c;
};

// Fixed-size stack of words
class MsgCallStack {
public:
    MsgCallStack();
    ~MsgCallStack();
    BOOL isEmpty();
    void push(const u32 &value);
    u32 *top();
    void pop();

    /* 0x00 */ u32 unk_00[6];
    /* 0x18 */ u32 unk_18;
};

// ---------------------------------------------------------------------------------------------------------------------
// Free functions and globals

extern "C" {
// Other files
void Gfx2d_HideMainPlanes(s32 a);
}

extern "C" {
void Gfx2d_ShowMainPlanes(s32 a);
}

extern "C" {
void Gfx2d_SetMainBg1Offset(s32 a, s32 b);
}

extern "C" {
s32 Snd_PlaySe(s32 id);
}

extern "C" {
void func_020639e8(char *buf, const char *fmt, ...);
}

extern "C" {
void Oam_DrawCell(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
}

extern "C" {
s32 DebugVar_GetStub(s32 a, s32 b);
}

extern "C" {
BOOL Input_IsButtonMode(void);
}

extern "C" {
BOOL Input_IsTouchMode(void);
}

extern "C" {
void Input_SetButtonMode(void);
}

extern "C" {
void Input_SetTouchMode(void);
}

extern "C" {
void Input_Unlock(void);
}

extern "C" {
void Input_Lock(void);
}

extern "C" {
BOOL Input_IsDownHeld(void);
}

extern "C" {
BOOL Input_IsUpHeld(void);
}

extern "C" {
BOOL Input_IsAHeld(void);
}

extern "C" {
BOOL Input_IsStartTrig(void);
}

extern "C" {
BOOL Input_IsDownTrig(void);
}

extern "C" {
BOOL Input_IsUpTrig(void);
}

extern "C" {
BOOL Input_IsATrig(void);
}

extern "C" {
BOOL Input_IsAnyKeyTrig(void);
}

extern "C" {
BOOL Input_GetTouchHeldPos(s32 *x, s32 *y);
}

extern "C" {
BOOL Input_GetTouchTrigPos(s32 *x, s32 *y);
}

extern "C" void _ZN11LabelButton12setLabelTextEv(LabelButton *self, LabelButtonText *p);

extern "C" {
BOOL Input_IsTouchTrigInRect(s32 x0, s32 x1, s32 y0, s32 y1);
}

extern "C" {
BOOL Input_IsTouchTrig(void);
}

extern "C" {
BmgMsgAttr *BmgMsgAttr_Get(BmgMsgAttr *p);
}

extern "C" {
void BmgMsgAttr_Clear(BmgMsgAttr *p);
}

extern "C" {
void BmgMsgAttr_Copy(BmgMsgAttr *dst, BmgMsgAttr *src);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *p);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
BmgMsgAttr *Bmg_GetMsgAttr(BmgReader *p);
}

extern "C" {
void String_Load2d(LabelButtonText *buf, u8 *str, s32 n);
}

extern "C" {
void *Mem_AllocTail(u32 size);
}

extern "C" {
void Heap_Free(void *heap, void *ptr);
}

extern "C" {
void GX_LoadBG1Scr(void *p, u32 a, u32 size);
}

extern "C" {
void GX_LoadBGPltt(void *p, u32 a, u32 size);
}

extern "C" {
void DC_FlushRange(void *p, u32 size);
}

extern "C" {
void MI_CpuFill8(void *dst, u32 value, u32 size);
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}

extern "C" {
s32 FS_ReadFile(void *file, void *buf, u32 size);
}

extern "C" {
s32 FS_CloseFile(void *file);
}

extern "C" {
s32 FS_OpenFile(void *file, const char *path);
}

extern "C" {
void FS_InitFile(void *file);
}

extern "C" {
char *func_0212a2ec(char *dst, const char *src, u32 n);
}

extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}

extern "C" {
// This file
const void *Choice_GetBmgName(u32 i);
}

extern "C" {
s32 ChoiceWindow_GetLabelTile(s32 a, s32 mode);
}

extern "C" {
void ChoiceWindow_BlankTiles(void *p, u32 n);
}

extern "C" {
extern const u8 sChoiceLabelTilesMode2[4];
}

extern "C" {
extern const u8 sChoiceLabelTilesMode3[4];
}

extern "C" {
extern const u8 sChoiceLabelTilesMode4[4];
}

extern "C" {
extern const void *const kChoiceBmgNames[2];
}

extern "C" {
extern const u16 kChoiceBlinkColors[6];
}

extern "C" {
extern u32 *data_020d467c;
}

extern "C" {
extern u8 gU8None;
}

extern "C" {
extern BufferBmgReader sChoiceBmgReader;
}

extern "C" {
extern u16 gPad[2];
}

extern "C" {
extern void *gCurrentHeap;
}

// ---- data ----
const u8 sChoiceLabelTilesMode2[4] = {0, 4, 0, 0};
const u8 sChoiceLabelTilesMode3[4] = {0, 3, 4, 0};
const u8 sChoiceLabelTilesMode4[4] = {0, 2, 3, 4};
const void *const kChoiceBmgNames[2] = {"select", "select2"};
const u16 kChoiceBlinkColors[6] = {0x7d5f, 0x7d5f, 0x7d5f, 0x7d5f, 0x7d5f, 0};
BufferBmgReader sChoiceBmgReader;


// ---------------------------------------------------------------------------------------------------------------------
// Functions, from the highest address to the lowest

ChoiceSlider::ChoiceSlider() : unk_0c(0x800), unk_10(1) {
    unk_10.setPriority(0);
}

ChoiceSlider::~ChoiceSlider() {}

void ChoiceSlider::draw() {
    if (unk_10.getState()) {
        unk_10.draw();
        u32 r = *data_020d467c;
        s32 a = getOriginY();
        s32 b = getOriginX();
        Oam_DrawCell(0, r, b, a, -1, 0, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void ChoiceSlider::vfunc_0c() {
    s32 a = getKnobX();
    s32 b = getKnobY();
    unk_10.moveTo(a, b);
    unk_10.vfunc_0c();
}

void ChoiceSlider::setOrigin(s32 a, s32 b) {
    UiWidget::setOrigin(a, b);
    unk_10.setOrigin(a, b);
}

void ChoiceSlider::setPos(s32 v) { unk_0c = v; }

s32 ChoiceSlider::getKnobOffsetY() { return -((unk_0c - 0x1000) * 32) >> 12; }

s32 ChoiceSlider::getKnobX() { return 6; }

s32 ChoiceSlider::getKnobY() { return getKnobOffsetY(); }

s32 ChoiceSlider::getTrackBottom() { return 0x20; }

s32 ChoiceSlider::getTrackTop() { return 0; }

void ChoiceSlider::getKnobAnimOffset(s32 *x, s32 *y) { unk_10.getAnimOffset(x, y); }

BOOL ChoiceSlider::isKnobAnimDone() { return unk_10.areAnimsDone(); }

void ChoiceSlider::showKnob() { unk_10.setState(1); }

void ChoiceSlider::hideKnob() { unk_10.setState(0); }

void ChoiceSlider::startKnobGrab() { unk_10.setState(2); }

void ChoiceSlider::startKnobRelease() { unk_10.setState(3); }

ChoiceHandCursor::ChoiceHandCursor() : HandCursor(1) {
    unk_28 = 0;
}

ChoiceHandCursor::~ChoiceHandCursor() {}

ChoiceWindow::ChoiceWindow() : unk_04(0), unk_12(0), unk_14(0), unk_18(0), unk_1a(0), unk_1c(0), unk_1e(0) {
    u32 i;
    for (i = 0; i < 5; i++) {
        unk_08[i] = 0;
    }
}

ChoiceWindow::~ChoiceWindow() {
    freeBg();
}

BOOL ChoiceWindow::loadBgFile(void *file) {
    s32 opened = FS_OpenFile(file, "/a_mes/a_mes1a_bg_nsc.bin");
    BOOL ok;
    unk_04 = (u8 *)Mem_AllocTail(0x800);
    if (unk_04) {
        ok = FS_ReadFile(file, unk_04, 0x800) != -1;
    } else {
        ok = FALSE;
    }
    s32 closed = FS_CloseFile(file);
    if (opened && ok && closed && unk_04) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChoiceWindow::loadBg() {
    BOOL r = FALSE;
    u8 file[0x4c];
    FS_InitFile(file);
    if (loadBgFile(file)) {
        r = TRUE;
    }
    return r;
}

void ChoiceWindow::freeBg() {
    if (unk_04) {
        Heap_Free(gCurrentHeap, unk_04);
        unk_04 = 0;
    }
}

void ChoiceWindow_BlankTiles(void *p, u32 n) {
    MI_CpuFill8(p, 0x10, n);
}

void ChoiceWindow::layout1Row() {
    MI_CpuCopy8(unk_04 + 0x2a2, unk_04 + 0x3a2, 0x1a);
    MI_CpuCopy8(unk_04 + 0x2e2, unk_04 + 0x3e2, 0x1a);
    MI_CpuCopy8(unk_04 + 0x25e, unk_04 + 0x35e, 0x22);
    MI_CpuCopy8(unk_04 + 0x51e, unk_04 + 0x41e, 0x22);
    *(u16 *)(unk_04 + 0x39e) = *(u16 *)(unk_04 + 0x29e);
    *(u16 *)(unk_04 + 0x3a0) = *(u16 *)(unk_04 + 0x2a0);
    *(u16 *)(unk_04 + 0x3be) = *(u16 *)(unk_04 + 0x2be);
    *(u16 *)(unk_04 + 0x3bc) = *(u16 *)(unk_04 + 0x2bc);
    *(u16 *)(unk_04 + 0x3de) = *(u16 *)(unk_04 + 0x4de);
    *(u16 *)(unk_04 + 0x3e0) = *(u16 *)(unk_04 + 0x4e0);
    *(u16 *)(unk_04 + 0x3fe) = *(u16 *)(unk_04 + 0x4fe);
    *(u16 *)(unk_04 + 0x3fc) = *(u16 *)(unk_04 + 0x4fc);
    ChoiceWindow_BlankTiles(unk_04 + 0x25e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x29e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x2de, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x31e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x45e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x49e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x4de, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x51e, 0x22);
    fitWidth(0xd, 0x10);
    setTopRow(0xd);
    unk_1e = 1;
}

void ChoiceWindow::layout2Rows() {
    MI_CpuCopy8(unk_04 + 0x29e, unk_04 + 0x39e, 0x22);
    MI_CpuCopy8(unk_04 + 0x2de, unk_04 + 0x3de, 0x22);
    MI_CpuCopy8(unk_04 + 0x25e, unk_04 + 0x35e, 0x22);
    MI_CpuCopy8(unk_04 + 0x49e, unk_04 + 0x41e, 0x22);
    MI_CpuCopy8(unk_04 + 0x4de, unk_04 + 0x45e, 0x22);
    MI_CpuCopy8(unk_04 + 0x51e, unk_04 + 0x49e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x25e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x29e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x2de, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x31e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x4de, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x51e, 0x22);
    fitWidth(0xd, 0x12);
    setTopRow(0xd);
    unk_1e = 2;
}

void ChoiceWindow::layout3Rows() {
    MI_CpuCopy8(unk_04 + 0x29e, unk_04 + 0x39e, 0x22);
    MI_CpuCopy8(unk_04 + 0x2de, unk_04 + 0x3de, 0x22);
    MI_CpuCopy8(unk_04 + 0x25e, unk_04 + 0x35e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x25e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x29e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x2de, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x31e, 0x22);
    fitWidth(0xd, 0x14);
    setTopRow(0xd);
    unk_1e = 3;
}

void ChoiceWindow::layout4Rows() {
    MI_CpuCopy8(unk_04 + 0x29e, unk_04 + 0x31e, 0x22);
    MI_CpuCopy8(unk_04 + 0x2de, unk_04 + 0x35e, 0x22);
    MI_CpuCopy8(unk_04 + 0x25e, unk_04 + 0x2de, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x25e, 0x22);
    ChoiceWindow_BlankTiles(unk_04 + 0x29e, 0x22);
    fitWidth(0xb, 0x14);
    setTopRow(0xb);
    unk_1e = 4;
}

void ChoiceWindow::layout5Rows() {
    fitWidth(9, 0x14);
    setTopRow(9);
    unk_1e = 5;
}

void ChoiceWindow::fitWidth(u32 start, u32 end) {
    if ((u32)unk_14 < 13) {
        s32 n = 13 - unk_14;
        s32 off1 = (30 - n) * 2;
        s32 off2 = (31 - n) * 2;
        u32 row;
        for (row = start; row <= end; row++) {
            s32 i;
            *(u16 *)(row * 0x40 + (off1 + (u32)unk_04)) = *(u16 *)((unk_04 ? unk_04 : unk_04) + row * 0x40 + 0x3c);
            *(u16 *)(row * 0x40 + (off2 + (u32)unk_04)) = *(u16 *)(unk_04 + row * 0x40 + 0x3e);
            for (i = n - 1; i >= 0; i--) {
                ChoiceWindow_BlankTiles(unk_04 + row * 0x40 + (31 - i) * 2, 2);
            }
        }
    }
}

void ChoiceWindow::setTopRow(s32 v) {
    unk_1c = (v - 9) << 3;
}

void ChoiceWindow::setWidth(s32 v) {
    unk_14 = v;
}

void ChoiceWindow::setupBgControl() {
    u16 *reg = (u16 *)0x400000a;
    *reg &= ~3;
    *reg = (*reg & 0x43) | 0x500;
    *reg &= ~0x40;
}

void ChoiceWindow::uploadBg() {
    DC_FlushRange(unk_04, 0x800);
    GX_LoadBG1Scr(unk_04, 0, 0x800);
}

void ChoiceWindow::flushRowColors() {
    if (unk_12) {
        DC_FlushRange(unk_08, 10);
        GX_LoadBGPltt(unk_08, 0x82, 10);
        unk_12 = 0;
    }
}

void ChoiceWindow::showLayer() {
    Gfx2d_ShowMainPlanes(2);
}

void ChoiceWindow::hideLayer() {
    Gfx2d_HideMainPlanes(2);
}

void ChoiceWindow::setScroll(s32 a, s32 b) {
    s32 x = DebugVar_GetStub(0x66, 2);
    s32 y = DebugVar_GetStub(0x66, 3) - 8;
    s32 n = 13 - unk_14;
    if (n < 0) {
        n = 0;
    }
    s32 pos = a + (x + y * n);
    Gfx2d_SetMainBg1Offset(pos, b);
    unk_18 = pos;
    unk_1a = b;
}

void ChoiceWindow::setAllRowColors() {
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_08[i] = 12;
    }
    unk_12 = 1;
}

void ChoiceWindow::setRowColor(s32 idx, u16 val) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (i == idx) {
            unk_08[i] = val;
        } else {
            unk_08[i] = 0;
        }
    }
    unk_12 = 1;
}

s32 ChoiceWindow_GetLabelTile(s32 a, s32 mode) {
    s32 r = 0;
    if (mode == 1) {
    } else if (mode == 2) {
        r = sChoiceLabelTilesMode2[a];
    } else if (mode == 3) {
        r = sChoiceLabelTilesMode3[a];
    } else if (mode == 4) {
        r = sChoiceLabelTilesMode4[a];
    } else if (mode == 5) {
        r = a;
    }
    return r * 26 + 0x99;
}

ChoiceListWindow::ChoiceListWindow() {
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 0;
}

ChoiceListWindow::~ChoiceListWindow() {}

void ChoiceListWindow::update() {
    unk_20.setPos(5, unk_1c + (unk_6c * 16 - 4));
    unk_20.vfunc_0c();
}

void ChoiceListWindow::draw() {
    if (unk_74) {
        unk_20.draw();
    }
}

BOOL ChoiceListWindow::isCursorPointing() {
    if (unk_20.getAnim() == 7) return TRUE;
    return FALSE;
}

BOOL ChoiceListWindow::isCursorSelectDone() {
    if (unk_20.getAnim() == 8 && unk_20.isAnimDone()) return TRUE;
    return FALSE;
}

void ChoiceListWindow::startCursorAppear() {
    unk_6c = 0;
    unk_20.setOrigin(-unk_18, -unk_1a);
    unk_20.setAnim(7);
}

void ChoiceListWindow::hideCursor() { unk_20.setAnim(0); }

void ChoiceListWindow::startCursorSelect() { unk_20.setAnim(8); }

void ChoiceListWindow::setCursorRow(s32 v) { unk_6c = v; }

void ChoiceListWindow::resetBlink() { unk_70 = 0; }

BOOL ChoiceListWindow::blinkStep(s32 a) {
    u16 v = kChoiceBlinkColors[unk_70];
    unk_70++;
    BOOL r;
    if (unk_70 >= 5) r = TRUE; else r = FALSE;
    setRowColor(a, v);
    return r;
}

s32 ChoiceWindow::hitTestRow(s32 x, s32 y) {
    s32 res = -1;
    s32 i = 0;
    s32 left = 0x88 - unk_18;
    s32 right = left + unk_14 * 8;
    if (x >= left && x < right) {
        s32 top = unk_1c + 0x50 - unk_1a;
        for (; i < unk_1e; i++) {
            s32 bot = top + 0x10;
            if (y >= top && y < bot) {
                res = i;
                break;
            }
            top = bot;
        }
    }
    return res;
}

void ChoiceListWindow::setCursorVisible(u8 v, BOOL flag) {
    if (flag != 0 && unk_74 == 0 && v != 0) Snd_PlaySe(0x3b);
    unk_74 = v;
}

ChoiceSliderWindow::ChoiceSliderWindow() : unk_6c(1, 0) {
    unk_134 = 0;
    unk_138 = 0;
    unk_139 = 0;
    unk_13a = 0;
    unk_13b = 0;
    unk_13c = 0;
    unk_13d = 0;
}

ChoiceSliderWindow::~ChoiceSliderWindow() {}

void ChoiceSliderWindow::update() {
    if (unk_138) { unk_138 = 0; enterSliderFocus(); }
    if (unk_13a) { unk_13a = 0; enterButtonFocus(); }
    if (unk_13c) { unk_13c = 0; enterHidden(); }
    static void (ChoiceSliderWindow::*table[12])() = {
        &ChoiceSliderWindow::updateHidden, &ChoiceSliderWindow::updateSliderFocus, &ChoiceSliderWindow::updateGrabbing,
        &ChoiceSliderWindow::updateGrabbed, &ChoiceSliderWindow::updateReleasing, &ChoiceSliderWindow::updateReleased,
        &ChoiceSliderWindow::updateButtonFocus, &ChoiceSliderWindow::updatePressing, &ChoiceSliderWindow::updateButtonDown,
        &ChoiceSliderWindow::updateButtonUp, &ChoiceSliderWindow::updateCursorReturn, &ChoiceSliderWindow::updateDecided,
    };
    (this->*table[unk_134])();
    s32 a, b, c, d;
    if (isSliderFocused()) {
        unk_dc.getKnobAnimOffset(&a, &b);
        s32 e = unk_dc.getKnobOffsetY();
        unk_20.setPos(a + 0x10, b + 7 + e);
    } else if (isButtonFocused()) {
        unk_6c.getAnimOffset(&c, &d);
        unk_20.setPos(c + 0x46, d + 0x4c);
    }
    unk_6c.setPos(0x3c, 0x44);
    unk_20.vfunc_0c();
    unk_6c.vfunc_0c();
    unk_dc.vfunc_0c();
}

void ChoiceSliderWindow::draw() {
    if (unk_13d) unk_20.draw();
    unk_6c.draw();
    unk_dc.draw();
}

void ChoiceSliderWindow::openWidgets() {
    s32 y = -unk_1a;
    s32 x = -unk_18;
    unk_20.setOrigin(x, y);
    unk_6c.setOrigin(0, y);
    unk_dc.setOrigin(x, y);
    LabelButtonText l;
    u8 v = 0x12;
    String_Load2d(&l, &v, 0);
    _ZN11LabelButton12setLabelTextEv(&unk_6c, &l);
    unk_dc.setPos(0x800);
    requestSliderFocus();
}

void ChoiceSliderWindow::close() { requestClose(); }

BOOL ChoiceSliderWindow::isKnobHeld() {
    if (unk_139 && unk_dc.isKnobAnimDone()) return TRUE;
    return FALSE;
}

void ChoiceSliderWindow::setCursorVisible(u8 v, BOOL flag) {
    if (flag != 0 && unk_13d == 0 && v != 0) Snd_PlaySe(0x3b);
    unk_13d = v;
}

void ChoiceSliderWindow::setSliderPos(s32 v) { unk_dc.setPos(v); }

s32 ChoiceSliderWindow::getKnobX() { return unk_dc.getKnobX() + 0x80 - unk_18; }

s32 ChoiceSliderWindow::getKnobY() { return unk_dc.getKnobY() + 0x60 - unk_1a; }

s32 ChoiceSliderWindow::getTrackTopY() { return unk_dc.getTrackTop() + 0x60 - unk_1a; }

s32 ChoiceSliderWindow::getTrackBottomY() { return unk_dc.getTrackBottom() + 0x60 - unk_1a; }

BOOL ChoiceSliderWindow::isSliderFocused() {
    if ((u32)(unk_134 - 1) <= 4) return TRUE;
    return FALSE;
}

BOOL ChoiceSliderWindow::isButtonFocused() {
    if ((u32)(unk_134 - 6) <= 5) return TRUE;
    return FALSE;
}

s32 ChoiceSliderWindow::getState() { return unk_134; }

void ChoiceSliderWindow::requestSliderFocus() { unk_138 = 1; }

void ChoiceSliderWindow::grabKnob() { unk_139 = 1; }

void ChoiceSliderWindow::releaseKnob() { unk_139 = 0; }

void ChoiceSliderWindow::requestButtonFocus() { unk_13a = 1; }

void ChoiceSliderWindow::requestPress() { unk_13b = 1; }

void ChoiceSliderWindow::requestClose() { unk_13c = 1; }

void ChoiceSliderWindow::setCursorAnim(s32 v) { unk_20.setAnim(v); }

void ChoiceSliderWindow::enterHidden() {
    unk_134 = 0;
    setCursorAnim(0);
    unk_dc.hideKnob();
    unk_6c.setState(0);
}

void ChoiceSliderWindow::updateHidden() {}

void ChoiceSliderWindow::enterSliderFocus() {
    unk_134 = 1;
    unk_20.setOrigin(-unk_18, -unk_1a);
    setCursorAnim(1);
    unk_dc.showKnob();
    unk_6c.setState(1);
}

void ChoiceSliderWindow::updateSliderFocus() {
    if (unk_139) enterGrabbing();
    else if (unk_13b) enterPressing();
}

void ChoiceSliderWindow::enterGrabbing() {
    unk_134 = 2;
    return setCursorAnim(2);
}

void ChoiceSliderWindow::updateGrabbing() {
    if (unk_20.isAnimDone()) {
        if (unk_13d) Snd_PlaySe(0x33);
        enterGrabbed();
    }
}

void ChoiceSliderWindow::enterGrabbed() {
    unk_134 = 3;
    return unk_dc.startKnobGrab();
}

void ChoiceSliderWindow::updateGrabbed() {
    if (unk_139 == 0) enterReleasing();
}

void ChoiceSliderWindow::enterReleasing() {
    unk_134 = 4;
    return unk_dc.startKnobRelease();
}

void ChoiceSliderWindow::updateReleasing() {
    if (unk_dc.isKnobAnimDone()) enterReleased();
}

void ChoiceSliderWindow::enterReleased() {
    unk_134 = 5;
    unk_dc.showKnob();
    setCursorAnim(3);
}

void ChoiceSliderWindow::updateReleased() {
    if (unk_20.isAnimDone()) enterSliderFocus();
}

void ChoiceSliderWindow::enterButtonFocus() {
    unk_134 = 6;
    unk_20.setOrigin(0, -unk_1a);
    unk_20.setAnim(7);
    unk_dc.showKnob();
    unk_6c.setState(1);
}

void ChoiceSliderWindow::updateButtonFocus() {
    if (unk_13b) enterPressing();
}

void ChoiceSliderWindow::enterPressing() {
    unk_134 = 7;
    unk_20.setOrigin(0, -unk_1a);
    setCursorAnim(8);
}

void ChoiceSliderWindow::updatePressing() {
    if (unk_20.isAnimDone()) {
        Snd_PlaySe(0x27);
        enterButtonDown();
    }
}

void ChoiceSliderWindow::enterButtonDown() {
    unk_134 = 8;
    return unk_6c.setState(2);
}

void ChoiceSliderWindow::updateButtonDown() {
    if (unk_6c.isAnimDone()) enterDecided();
}

void ChoiceSliderWindow::updateButtonUp() {
    if (unk_6c.isAnimDone()) enterCursorReturn();
}

void ChoiceSliderWindow::enterCursorReturn() {
    unk_134 = 10;
    setCursorAnim(9);
    unk_6c.setState(1);
}

void ChoiceSliderWindow::updateCursorReturn() {
    if (unk_20.isAnimDone()) enterDecided();
}

void ChoiceSliderWindow::enterDecided() {
    unk_134 = 11;
    unk_13b = 0;
}

void ChoiceSliderWindow::updateDecided() { unk_13b = 0; }

BufferBmgReader::BufferBmgReader() : BmgReader(1) {
    unk_a4 = 0;
    unk_a8 = 0;
}

BufferBmgReader::~BufferBmgReader() {}

void BufferBmgReader::setBuffer(u8 *data, u32 size) {
    unk_a4 = data;
    unk_a8 = size;
}

void BufferBmgReader::clearBuffer() {
    unk_a4 = 0;
    unk_a8 = 0;
}

u32 BufferBmgReader::getBuffer() { return (u32)unk_a4; }

u32 BufferBmgReader::getBufferSize() { return unk_a8; }

ChoiceString::ChoiceString() { clear(); }

ChoiceString::~ChoiceString() {}

u32 ChoiceString::vfunc_08() { return 0x21; }

u8 *ChoiceString::vfunc_0c() { return (u8 *)this + 0x12; }

BOOL ChoiceString::loadFromBmg(const char *path, void *entry, BmgMsgAttr *out) {
    u8 *d = vfunc_0c();
    u32 s = vfunc_08();
    BOOL r;
    sChoiceBmgReader.setBuffer(d, s);
    sChoiceBmgReader.open(path);
    r = sChoiceBmgReader.loadMessage((u8 *)entry);
    BmgMsgAttr_Copy(out, Bmg_GetMsgAttr(&sChoiceBmgReader));
    sChoiceBmgReader.close();
    sChoiceBmgReader.clearBuffer();
    return r;
}

ChoiceEntry::ChoiceEntry() : unk_00(gU8None), unk_48(gU8None) {
    clear();
}

ChoiceEntry::~ChoiceEntry() {}

void ChoiceEntry::clear() {
    unk_00 = gU8None;
    unk_04 = NULL;
    unk_08.clear();
    BmgMsgAttr_Clear(&unk_3c);
    unk_48 = gU8None;
    MI_CpuFill8(unk_49, 0, 0x1a);
    unk_63 = 0;
    unk_64 = 0;
}

ChoiceString *ChoiceEntry::getText() { return &unk_08; }

u8 *ChoiceEntry::getValuePtr() { return &unk_48; }

char *ChoiceEntry::getName() { return unk_49; }

BmgMsgAttr *ChoiceEntry::getAttr() { return &unk_3c; }

u8 *ChoiceEntry::getWeightPtr() { return &unk_63; }

s32 ChoiceEntry::getSeType() { return unk_64; }

void ChoiceEntry::setMsgIndex(const u8 *p) { unk_00 = *p; }

void ChoiceEntry::setBmgName(const void *p) { unk_04 = p; }

void ChoiceEntry::setValue(const u8 *p) { unk_48 = *p; }

void ChoiceEntry::setName(const char *src) {
    unk_49[0x19] = 0;
    func_0212a2ec(unk_49, src, 0x19);
}

void ChoiceEntry::setSeType(s32 v) { unk_64 = v; }

void ChoiceEntry::loadText() {
    char buf[0x40];
    func_020639e8(buf, "/script/%s/select/%s.bmg", unk_04 ? "ENG" : "ENG", unk_04);
    unk_08.loadFromBmg(buf, this, &unk_3c);
}

ChoiceList::ChoiceList() : unk_214(gU8None) {
    clear();
}

ChoiceList::~ChoiceList() {}

void ChoiceList::reset(s32 a, s32 b) {
    clear();
    unk_208 = a;
    unk_20c = b;
}

void ChoiceList::setEntry(s32 idx, const u8 *a, s32 b, const u8 *c, const char *d, s32 e) {
    ChoiceEntry *p = &unk_00[idx];
    p->setMsgIndex(a);
    p->setBmgName(Choice_GetBmgName(b));
    p->setValue(c);
    p->setSeType(e);
    if (d) {
        p->setName(d);
    }
}

void ChoiceList::loadTexts() {
    s32 i;
    for (i = 0; i < unk_208; i++) {
        unk_00[i].loadText();
    }
}

void ChoiceList::clear() {
    clearResult();
    clearEntries();
}

void ChoiceList::clearResult() {
    unk_210 = -1;
    unk_214 = gU8None;
    MI_CpuFill8(unk_215, 0, 0x1a);
    unk_230.clear();
    BmgMsgAttr_Clear(&unk_264);
    unk_270 = 0;
}

void ChoiceList::clearEntries() {
    s32 i;
    for (i = 0; (u32)i < 5; i++) {
        unk_00[i].clear();
    }
    unk_208 = 0;
    unk_20c = -1;
}

ChoiceEntry *ChoiceList::getEntry(s32 i) { return &unk_00[i]; }

ChoiceString *ChoiceList::getFirstText() { return getEntry(0)->getText(); }

ChoiceString *ChoiceList::getLastText() { return getEntry(4)->getText(); }

s32 ChoiceList::getCount() { return unk_208; }

s32 ChoiceList::getCancelIndex() { return unk_20c; }

s32 ChoiceList::getResult() { return unk_210; }

s32 ChoiceList::getSliderValue() { return unk_270; }

u8 *ChoiceList::getResultValue() { return &unk_214; }

char *ChoiceList::getResultName() { return unk_215; }

ChoiceString *ChoiceList::getResultText() { return &unk_230; }

BmgMsgAttr *ChoiceList::getResultAttr() { return &unk_264; }

void ChoiceList::setCount(s32 v) { unk_208 = v; }

void ChoiceList::setCancelToLast() { unk_20c = unk_208 - 1; }

void ChoiceList::pick(s32 idx) {
    ChoiceEntry *e = &unk_00[idx];
    unk_210 = idx;
    unk_214 = *e->getValuePtr();
    unk_230.copy(e->getText());
    char *src = e->getName();
    unk_215[0x19] = 0;
    func_0212a2ec(unk_215, src, 0x19);
    BmgMsgAttr_Copy(&unk_264, BmgMsgAttr_Get(e->getAttr()));
}

void ChoiceList::pickBySliderPos(s32 arg) {
    u32 i;
    s32 v = (arg << 4) >> 12;
    s32 sum;
    s32 sel;
    ChoiceEntry *e;
    if (v >= 16) {
        v = 15;
    }
    sum = 0;
    sel = 3;
    for (i = 0; i < 4; i++) {
        sum += *unk_00[i].getWeightPtr();
        if (v < sum) {
            sel = i;
            break;
        }
    }
    e = &unk_00[sel];
    unk_210 = sel;
    unk_214 = *e->getValuePtr();
    BmgMsgAttr_Copy(&unk_264, BmgMsgAttr_Get(e->getAttr()));
    unk_270 = v;
}

const void *Choice_GetBmgName(u32 i) { return kChoiceBmgNames[i]; }

ChoiceListCursor::ChoiceListCursor(ChoiceWindow *window) {
    u32 i;
    unk_00 = 0;
    unk_04 = window;
    unk_1c = 0;
    unk_20 = NULL;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    for (i = 0; i < 5; i++) {
        unk_08[i] = NULL;
    }
}

ChoiceListCursor::~ChoiceListCursor() { freeLabels(); }

void ChoiceListCursor::setList(ChoiceList *p) {
    p->getCount();
    unk_20 = p;
}

s32 ChoiceListCursor::getCount() { return unk_20->getCount(); }

s32 ChoiceListCursor::getRow() { return unk_00; }

s32 ChoiceListCursor::getResult() { return unk_20->getResult(); }

u32 ChoiceListCursor::getMaxWidth() { return unk_1c; }

void ChoiceListCursor::open() {
    unk_20->clearResult();
    createLabels();
    unk_00 = 0;
    unk_24 = 0;
    resetKeyRepeat();
    calcMaxWidth();
}

void ChoiceListCursor::showText() { redrawLabels(); }

void ChoiceListCursor::hideText() { clearLabels(); }

void ChoiceListCursor::close() {
    freeLabels();
    unk_20->clearEntries();
    unk_1c = 0;
    unk_20 = NULL;
}

void ChoiceListCursor::update() {
    if (unk_20) {
        if (unk_20->getResult() < 0) {
            if (checkDeviceSwitch()) {
                resetKeyRepeat();
            } else {
                BOOL r = FALSE;
                if (Input_IsTouchMode()) {
                    if (updateTouch()) {
                        r = TRUE;
                    }
                } else if (Input_IsButtonMode()) {
                    if (updateKeys()) {
                        r = TRUE;
                    }
                }
                if (r) {
                    unk_20->pick(unk_00);
                }
            }
        }
    }
}

BOOL ChoiceListCursor::isTouchMode() { return Input_IsTouchMode(); }

void ChoiceListCursor::calcMaxWidth() {
    u32 count = unk_20->getCount();
    u32 max = 0;
    u32 i;
    for (i = 0; i < count; i++) {
        if (unk_08[i]) {
            u32 v = unk_08[i]->getWidthInTiles();
            if (v > max) {
                max = v;
            }
        }
    }
    unk_1c = max;
}

void ChoiceListCursor::resetKeyRepeat() {
    unk_28 = 0;
    unk_2c = 0;
}

void ChoiceListCursor::createLabels() {
    u32 count = unk_20->getCount();
    u32 i;
    for (i = 0; i < count; i++) {
        ChoiceEntry *e = unk_20->getEntry(i);
        u32 size = ChoiceWindow_GetLabelTile(i, count);
        ChoiceString *buf = e->getText();
        TextLabel *t = MsgTextLabel_CreateVram(size, 0xd, 2);
        if (t) {
            t->unk_2c = 1;
            t->unk_10 = (u32)buf->vfunc_0c();
            t->unk_50 = 2;
            t->unk_39 = 0xe;
            t->unk_38 = i + 1;
            t->unk_58 = 2;
            t->requestClear(0);
            t->unk_58 = 0;
            unk_08[i] = t;
        }
    }
}

void ChoiceListCursor::redrawLabels() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_08[i]) {
            unk_08[i]->requestRedraw();
        }
    }
}

void ChoiceListCursor::clearLabels() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_08[i]) {
            unk_08[i]->requestClear(0);
        }
    }
}

void ChoiceListCursor::freeLabels() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_08[i]) {
            MsgTextLabel_Destroy(unk_08[i]);
            unk_08[i] = NULL;
        }
    }
}

BOOL ChoiceListCursor::checkDeviceSwitch() {
    BOOL r = FALSE;
    if (Input_IsTouchMode()) {
        if (Input_IsAnyKeyTrig()) {
            Input_SetButtonMode();
            r = TRUE;
        }
    } else if (Input_IsButtonMode()) {
        if (Input_IsTouchTrig()) {
            Input_SetTouchMode();
            r = TRUE;
        }
    }
    return r;
}

BOOL ChoiceListCursor::updateTouch() {
    s32 a, b;
    BOOL r = FALSE;
    if (Input_GetTouchTrigPos(&a, &b)) {
        s32 res = unk_04->hitTestRow(a, b);
        if (res >= 0) {
            unk_00 = res;
            r = TRUE;
            s32 cur = unk_20->getCancelIndex();
            if (cur >= 0 && cur == res) {
                Snd_PlaySe(0x2a);
            } else {
                playDecideSe();
            }
        }
    }
    return r;
}

BOOL ChoiceListCursor::updateKeys() {
    BOOL result = FALSE;
    s32 cur = unk_20->getCancelIndex();
    u16 pressed, held;
    if (unk_24 > 0) {
        unk_24--;
        if (unk_24 <= 0) {
            result = TRUE;
            Input_Unlock();
            goto end;
        }
    }
    pressed = gPad[1];
    if (pressed & 1) {
        if (cur >= 0 && cur == unk_00) {
            Snd_PlaySe(0x2a);
        } else {
            playDecideSe();
        }
        result = TRUE;
        Input_Unlock();
        goto end;
    }
    if (cur >= 0 && (pressed & 2)) {
        Snd_PlaySe(0x2a);
        unk_00 = unk_20->getCancelIndex();
        unk_24 = 1;
        Input_Lock();
        goto end;
    }
    held = gPad[0];
    BOOL heldUp = (held & 0x40) != 0;
    BOOL heldDown = (held & 0x80) != 0;
    BOOL pressUp = (pressed & 0x40) != 0;
    BOOL pressDown = (pressed & 0x80) != 0;
    s32 last = unk_20->getCount() - 1;
    s32 old = unk_00;
    BOOL moved = FALSE;
    s32 state = unk_2c;
    if (state == 0 && (heldUp || heldDown) && (pressUp || pressDown)) {
        moved = TRUE;
        Input_Lock();
        unk_28 = 9;
        unk_2c = heldUp ? -1 : 1;
    } else if ((state > 0 && heldDown) || (state < 0 && heldUp)) {
        if (unk_28 > 0) {
            unk_28--;
            if (unk_28 <= 0) {
                moved = TRUE;
                unk_28 = 3;
            }
        }
    } else {
        if (state != 0) {
            Input_Unlock();
        }
        unk_2c = 0;
        unk_28 = 0;
    }
    if (moved) {
        unk_00 += unk_2c;
    }
    if (unk_00 < 0) {
        unk_00 = last;
    } else if (unk_00 > last) {
        unk_00 = 0;
    }
    if (old != unk_00) {
        Snd_PlaySe(11);
    }
end:
    return result;
}

void ChoiceListCursor::playDecideSe() {
    s32 t = unk_20->getEntry(unk_00)->getSeType();
    s32 id = 0x29;
    if (t == 1) {
        id = 0x3a;
    } else if (t == 2) {
        id = 0x6a;
    } else if (t == 3) {
        id = 0x6c;
    }
    Snd_PlaySe(id);
}

ChoiceSliderCursor::ChoiceSliderCursor(ChoiceSliderWindow *window) {
    u32 i;
    unk_00 = window;
    unk_04 = 0;
    unk_08 = 0x800;
    unk_0c = 0x800;
    unk_10 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_31 = 0;
    unk_34 = NULL;
    for (i = 0; i < 5; i++) {
        unk_14[i] = NULL;
    }
}

ChoiceSliderCursor::~ChoiceSliderCursor() {
    freeLabels();
}

void ChoiceSliderCursor::setList(ChoiceList *p) {
    p->getCount();
    unk_34 = p;
}

s32 ChoiceSliderCursor::getPos() {
    return unk_08;
}

u32 ChoiceSliderCursor::getMaxWidth() {
    return unk_28;
}

s32 ChoiceSliderCursor::getResult() {
    return unk_34->getResult();
}

void ChoiceSliderCursor::open() {
    unk_34->clearResult();
    createLabels();
    unk_04 = 0;
    unk_08 = 0x800;
    unk_0c = 0x800;
    focusSlider();
    calcMaxWidth();
    unk_31 = 0;
}

void ChoiceSliderCursor::showText() {
    redrawLabels();
}

void ChoiceSliderCursor::hideText() {
    clearLabels();
}

void ChoiceSliderCursor::close() {
    freeLabels();
    unk_34->clearEntries();
    unk_28 = 0;
    unk_34 = NULL;
}

void ChoiceSliderCursor::update() {
    if (!checkDeviceSwitch()) {
        static void (ChoiceSliderCursor::*tbl[2])() = {
            &ChoiceSliderCursor::updateSlider,
            &ChoiceSliderCursor::updateOkButton,
        };
        updateGrab();
        updateFocus();
        (this->*tbl[unk_2c])();
    }
}

BOOL ChoiceSliderCursor::isSliderFocused() {
    if (unk_2c == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChoiceSliderCursor::isOkButtonFocused() {
    if (unk_2c == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChoiceSliderCursor::isGrabbing() {
    if (isSliderFocused() && unk_30) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChoiceSliderCursor::isCursorHidden() {
    if (Input_IsTouchMode() || unk_31) {
        return TRUE;
    }
    return FALSE;
}

void ChoiceSliderCursor::calcMaxWidth() {
    u32 m = 0;
    u32 w;
    if (unk_14[4]) {
        w = unk_14[4]->getWidthInTiles();
        if (w > m) {
            m = w;
        }
    }
    if (unk_14[0]) {
        w = unk_14[0]->getWidthInTiles();
        if (w > m) {
            m = w;
        }
    }
    unk_28 = m;
}

void ChoiceSliderCursor::createLabels() {
    u32 i;
    s32 zero = 0;
    for (i = 0; i < 5; i++) {
        ChoiceEntry *a = unk_34->getEntry(i);
        s32 font = ChoiceWindow_GetLabelTile(i, 5);
        ChoiceString *text = a->getText();
        TextLabel *o = MsgTextLabel_CreateVram(font, 13, 2);
        if (o) {
            o->unk_2c = 1;
            o->unk_10 = (u32)text->vfunc_0c();
            o->unk_50 = 2;
            o->unk_39 = 14;
            o->unk_38 = i + 1;
            o->unk_58 = 2;
            o->requestClear(zero);
            o->unk_58 = 0;
            unk_14[i] = o;
        }
    }
}

void ChoiceSliderCursor::redrawLabels() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_14[i]) {
            unk_14[i]->requestRedraw();
        }
    }
}

void ChoiceSliderCursor::clearLabels() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_14[i]) {
            unk_14[i]->requestClear(0);
        }
    }
}

void ChoiceSliderCursor::freeLabels() {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (unk_14[i]) {
            MsgTextLabel_Destroy(unk_14[i]);
            unk_14[i] = NULL;
        }
    }
}

BOOL ChoiceSliderCursor::checkDeviceSwitch() {
    BOOL r = FALSE;
    if (Input_IsTouchMode()) {
        if (Input_IsAnyKeyTrig()) {
            Input_SetButtonMode();
            r = TRUE;
        }
    } else if (Input_IsButtonMode()) {
        if (Input_IsTouchTrig()) {
            Input_SetTouchMode();
            r = TRUE;
        }
    }
    return r;
}

void ChoiceSliderCursor::updateFocus() {
    if (Input_IsTouchMode()) {
        if (unk_2c == 0) {
            if (isOkButtonTapped()) {
                focusOkButton();
            }
        } else if (unk_2c == 1) {
            if (unk_30) {
                focusSlider();
            }
        }
    } else if (Input_IsButtonMode()) {
        if (unk_2c == 0) {
            if (!unk_30) {
                BOOL a = Input_IsDownTrig();
                BOOL b = Input_IsStartTrig();
                if (a || b) {
                    if (a) {
                        Snd_PlaySe(11);
                    }
                    focusOkButton();
                }
            }
        } else if (unk_2c == 1) {
            if (Input_IsUpTrig()) {
                Snd_PlaySe(11);
                focusSlider();
            }
        }
    }
}

void ChoiceSliderCursor::updateGrab() {
    BOOL r;
    if (unk_30) {
        r = FALSE;
        if (Input_IsTouchMode()) {
            if (isTouchReleased()) {
                r = TRUE;
            }
        } else if (Input_IsButtonMode()) {
            if (isGrabKeyReleased()) {
                r = TRUE;
            }
        }
        if (r) {
            unk_30 = 0;
            Input_Unlock();
        }
    } else {
        r = FALSE;
        if (Input_IsTouchMode()) {
            if (isKnobTouched()) {
                r = TRUE;
            }
        } else if (Input_IsButtonMode()) {
            if (isGrabKeyPressed()) {
                r = TRUE;
            }
        }
        if (r) {
            unk_30 = 1;
            Input_Lock();
        }
    }
}

BOOL ChoiceSliderCursor::isKnobTouched() {
    BOOL r = FALSE;
    s32 a = unk_00->getKnobX();
    s32 b = unk_00->getKnobY();
    s32 x, y;
    if (Input_IsTouchTrigInRect(a - 5, a + 21, b, b + 16)) {
        Input_GetTouchTrigPos(&x, &y);
        unk_10 = y - b;
        r = TRUE;
    }
    return r;
}

BOOL ChoiceSliderCursor::isGrabKeyPressed() {
    if (unk_2c == 0 && Input_IsATrig()) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChoiceSliderCursor::isTouchReleased() {
    if (Input_GetTouchHeldPos(0, 0)) {
        return FALSE;
    }
    return TRUE;
}

BOOL ChoiceSliderCursor::isGrabKeyReleased() {
    if (Input_IsAHeld()) {
        return FALSE;
    }
    return TRUE;
}

BOOL ChoiceSliderCursor::isOkButtonTapped() {
    BOOL r = FALSE;
    if (Input_IsTouchTrigInRect(184, 256, 160, 176)) {
        r = TRUE;
    }
    return r;
}

BOOL ChoiceSliderCursor::isConfirmPressed() {
    BOOL r = FALSE;
    if (unk_2c == 1) {
        if (Input_IsStartTrig()) {
            r = TRUE;
            unk_31 = TRUE;
        } else if (Input_IsATrig()) {
            r = TRUE;
        }
    }
    return r;
}

void ChoiceSliderCursor::focusSlider() {
    unk_2c = 0;
}

void ChoiceSliderCursor::updateSlider() {
    s32 x, y, v, hi, lo;
    if (unk_30) {
        if (unk_00->isKnobHeld()) {
            if (Input_IsTouchMode()) {
                if (Input_GetTouchHeldPos(&x, &y)) {
                    lo = unk_00->getTrackBottomY();
                    hi = unk_00->getTrackTopY();
                    v = y - unk_10;
                    if (v < hi) {
                        v = hi;
                    } else if (v > lo) {
                        v = lo;
                    }
                    unk_08 = _s32_div_f((v - lo) << 12, hi - lo);
                }
                unk_04 = 0;
            } else if (Input_IsButtonMode()) {
                BOOL up = Input_IsUpHeld();
                BOOL down = Input_IsDownHeld();
                if (!up && !down) {
                    unk_04 = 40;
                } else {
                    unk_04 += 81;
                    s32 sp = unk_04;
                    if (sp < 0) {
                        sp = 0;
                    } else if (sp > 409) {
                        sp = 409;
                    }
                    unk_04 = sp;
                }
                if (up) {
                    unk_08 += unk_04;
                }
                if (down) {
                    unk_08 -= unk_04;
                }
                s32 pos = unk_08;
                if (pos < 0) {
                    pos = 0;
                } else if (pos > 0x1000) {
                    pos = 0x1000;
                }
                unk_08 = pos;
            }
        }
    }
    s32 d = unk_08 - unk_0c;
    if (d < 0) {
        d = -d;
    }
    if (d >= 81) {
        BOOL inc = unk_08 > unk_0c;
        s32 hi = inc ? unk_08 : unk_0c;
        s32 lo = inc ? unk_0c : unk_08;
        BOOL found = FALSE;
        s32 i;
        for (i = 0; i < 10; i++) {
            s32 v = i * 409;
            if (v >= lo && v < hi) {
                found = TRUE;
                break;
            }
        }
        if (hi == 0x1000) {
            found = TRUE;
        }
        if (found) {
            Snd_PlaySe(25);
        }
    }
    unk_0c = unk_08;
}

void ChoiceSliderCursor::focusOkButton() {
    unk_2c = 1;
}

void ChoiceSliderCursor::updateOkButton() {
    if (unk_34) {
        if (unk_34->getResult() < 0) {
            if ((Input_IsTouchMode() && isOkButtonTapped()) || (Input_IsButtonMode() && isConfirmPressed())) {
                unk_34->pickBySliderPos(unk_08);
            }
        }
    }
}

ChoiceDialog::ChoiceDialog() {
    unk_04 = 0;
}

ChoiceDialog::~ChoiceDialog() {}

void ChoiceDialog::requestOpen() {
    unk_04 = 1;
}

void ChoiceListDialog::setChoices(ChoiceList *p) {
    unk_84.setList(p);
}

ChoiceListDialog::ChoiceListDialog() : unk_08(0), unk_84(&unk_0c) {
    unk_b4 = 0;
    unk_b8 = 0;
    unk_bc = 0;
    unk_c0 = 0;
}

ChoiceListDialog::~ChoiceListDialog() {}

void ChoiceListDialog::update() {
    static void (ChoiceListDialog::*tbl[4])() = {
        &ChoiceListDialog::updateClosed,
        &ChoiceListDialog::updateOpening,
        &ChoiceListDialog::updateSelecting,
        &ChoiceListDialog::updateClosing,
    };
    (this->*tbl[unk_08])();
    unk_0c.update();
}

void ChoiceListDialog::draw() {
    unk_0c.draw();
    unk_0c.flushRowColors();
}

BOOL ChoiceListDialog::isClosed() {
    if (unk_08 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL ChoiceListDialog::justDecided() {
    return unk_c0;
}

void ChoiceListDialog::enterClosed() {
    unk_08 = 0;
}

void ChoiceListDialog::updateClosed() {
    if (unk_04) {
        unk_04 = 0;
        enterOpening();
    }
}

void ChoiceListDialog::enterOpening() {
    unk_08 = 1;
    unk_0c.loadBg();
    unk_84.open();
    layoutWindow();
    unk_0c.setupBgControl();
    unk_0c.uploadBg();
    unk_0c.showLayer();
    unk_0c.freeBg();
    unk_bc = DebugVar_GetStub(100, 2) + 3;
    unk_b4 = DebugVar_GetStub(100, 4) + 5;
    unk_b8 = DebugVar_GetStub(100, 5) - 5;
    unk_0c.setScroll(unk_b4, unk_b8);
    unk_0c.setAllRowColors();
}

void ChoiceListDialog::updateOpening() {
    BOOL done;
    if (unk_bc > DebugVar_GetStub(0x64, 3) + 2) {
        unk_b4 += DebugVar_GetStub(0x64, 6) - 6;
        unk_b8 += DebugVar_GetStub(0x64, 7) + 6;
    } else {
        unk_b4 += DebugVar_GetStub(0x64, 8) + 1;
        unk_b8 += DebugVar_GetStub(0x64, 9) - 1;
    }
    done = --unk_bc <= 0;
    if (done) {
        unk_b4 = 0;
        unk_b8 = 0;
    }
    unk_0c.setScroll(unk_b4, unk_b8);
    if (done) {
        unk_84.showText();
        enterSelecting();
    }
}

void ChoiceListDialog::enterSelecting() {
    unk_08 = 2;
    unk_0c.startCursorAppear();
    unk_0c.setCursorVisible(!unk_84.isTouchMode(), FALSE);
}

void ChoiceListDialog::updateSelecting() {
    s32 v;
    unk_84.update();
    unk_0c.setCursorVisible(!unk_84.isTouchMode(), TRUE);
    unk_0c.setCursorRow(unk_84.getRow());
    v = unk_84.getResult();
    if (v >= 0) {
        if (unk_0c.isCursorPointing()) {
            unk_0c.startCursorSelect();
            unk_0c.resetBlink();
        } else if (unk_0c.isCursorSelectDone()) {
            if (unk_0c.blinkStep(v)) {
                unk_0c.hideCursor();
                unk_84.hideText();
                enterClosing();
            }
        }
    }
}

void ChoiceListDialog::enterClosing() {
    unk_08 = 3;
    unk_c0 = 1;
    unk_bc = DebugVar_GetStub(0x65, 2) + 2;
    Snd_PlaySe(0x14);
}

void ChoiceListDialog::updateClosing() {
    BOOL done;
    unk_b4 += DebugVar_GetStub(0x65, 3) + 0x11;
    unk_b8 += DebugVar_GetStub(0x65, 4) - 0x11;
    done = --unk_bc <= 0;
    unk_0c.setScroll(unk_b4, unk_b8);
    unk_c0 = 0;
    if (done) {
        unk_84.close();
        unk_0c.hideLayer();
        enterClosed();
    }
}

void ChoiceListDialog::layoutWindow() {
    s32 t = unk_84.getCount();
    unk_0c.setWidth(unk_84.getMaxWidth());
    if (t == 1) {
        unk_0c.layout1Row();
    } else if (t == 2) {
        unk_0c.layout2Rows();
    } else if (t == 3) {
        unk_0c.layout3Rows();
    } else if (t == 4) {
        unk_0c.layout4Rows();
    } else if (t == 5) {
        unk_0c.layout5Rows();
    }
}

void ChoiceSliderDialog::setChoices(ChoiceList *p) {
    unk_14c.setList(p);
}

ChoiceSliderDialog::ChoiceSliderDialog() : unk_08(0), unk_14c(&unk_0c) {
    unk_184 = 0;
    unk_188 = 0;
    unk_18c = 0;
    unk_190 = 0;
}

ChoiceSliderDialog::~ChoiceSliderDialog() {}

void ChoiceSliderDialog::update() {
    static void (ChoiceSliderDialog::*const table[4])() = {
        &ChoiceSliderDialog::updateClosed,
        &ChoiceSliderDialog::updateOpening,
        &ChoiceSliderDialog::updateSelecting,
        &ChoiceSliderDialog::updateClosing,
    };
    (this->*table[unk_08])();
    unk_0c.update();
}

void ChoiceSliderDialog::draw() {
    unk_0c.draw();
    unk_0c.flushRowColors();
}

BOOL ChoiceSliderDialog::isClosed() {
    return unk_08 == 0;
}

BOOL ChoiceSliderDialog::justDecided() {
    return unk_190;
}

void ChoiceSliderDialog::enterClosed() {
    unk_08 = 0;
    unk_0c.hideLayer();
}

void ChoiceSliderDialog::updateClosed() {
    if (unk_04) {
        unk_04 = 0;
        enterOpening();
    }
}

void ChoiceSliderDialog::enterOpening() {
    unk_08 = 1;
    unk_0c.loadBg();
    unk_14c.open();
    layoutWindow();
    unk_0c.setupBgControl();
    unk_0c.uploadBg();
    unk_0c.showLayer();
    unk_0c.freeBg();
    unk_18c = DebugVar_GetStub(0x64, 2) + 3;
    unk_184 = DebugVar_GetStub(0x64, 4) + 5;
    unk_188 = DebugVar_GetStub(0x64, 5) - 5;
    unk_0c.setScroll(unk_184, unk_188 + 4);
    unk_0c.setAllRowColors();
    Snd_PlaySe(0x13);
}

void ChoiceSliderDialog::updateOpening() {
    BOOL done;
    if (unk_18c > DebugVar_GetStub(0x64, 3) + 2) {
        unk_184 += DebugVar_GetStub(0x64, 6) - 6;
        unk_188 += DebugVar_GetStub(0x64, 7) + 6;
    } else {
        unk_184 += DebugVar_GetStub(0x64, 8) + 2;
        unk_188 += DebugVar_GetStub(0x64, 9) - 2;
    }
    done = --unk_18c <= 0;
    if (done) {
        unk_184 = 0;
        unk_188 = 0;
    }
    unk_0c.setScroll(unk_184, unk_188 + 4);
    if (done) {
        unk_0c.openWidgets();
        unk_0c.setCursorVisible(!unk_14c.isCursorHidden(), FALSE);
        unk_14c.showText();
        enterSelecting();
    }
}

void ChoiceSliderDialog::enterSelecting() {
    unk_08 = 2;
}

void ChoiceSliderDialog::updateSelecting() {
    s32 v;
    s32 w;
    unk_14c.update();
    unk_0c.setCursorVisible(!unk_14c.isCursorHidden(), TRUE);
    unk_0c.setSliderPos(unk_14c.getPos());
    v = unk_14c.getResult();
    w = unk_0c.getState();
    if (v >= 0) {
        if (w == 0xb) {
            unk_0c.close();
            unk_14c.hideText();
            enterClosing();
        } else {
            unk_0c.requestPress();
        }
    } else if (unk_14c.isSliderFocused()) {
        if (unk_0c.isButtonFocused()) {
            unk_0c.requestSliderFocus();
        } else if (unk_14c.isGrabbing()) {
            unk_0c.grabKnob();
        } else {
            unk_0c.releaseKnob();
        }
    } else if (unk_14c.isOkButtonFocused()) {
        if (unk_0c.isSliderFocused()) {
            unk_0c.requestButtonFocus();
        }
    }
}

void ChoiceSliderDialog::enterClosing() {
    unk_08 = 3;
    unk_190 = 1;
    unk_18c = DebugVar_GetStub(0x65, 2) + 2;
    Snd_PlaySe(0x14);
}

void ChoiceSliderDialog::updateClosing() {
    BOOL done;
    unk_190 = 0;
    unk_184 += DebugVar_GetStub(0x65, 3) + 0xb;
    unk_188 += DebugVar_GetStub(0x65, 4) - 0xb;
    done = --unk_18c <= 0;
    unk_0c.setScroll(unk_184, unk_188);
    if (done) {
        unk_14c.close();
        enterClosed();
    }
}

void ChoiceSliderDialog::layoutWindow() {
    unk_0c.setWidth(unk_14c.getMaxWidth());
    unk_0c.layout5Rows();
}

void ChoiceMenu::setListChoices(ChoiceList *p) {
    unk_04.setChoices(p);
    unk_00 = &unk_04;
}

void ChoiceMenu::setSliderChoices(ChoiceList *p) {
    unk_c8.setChoices(p);
    unk_00 = &unk_c8;
}

ChoiceMenu::ChoiceMenu() : unk_00(0) {
    unk_25c = 0;
}

ChoiceMenu::~ChoiceMenu() {}

void ChoiceMenu::update() {
    if (unk_00 != 0) {
        unk_00->update();
        if (unk_00->isClosed()) {
            unk_00 = 0;
            unk_25c = 1;
        }
    } else {
        unk_25c = 0;
    }
}

void ChoiceMenu::open() {
    if (unk_00 != 0) {
        unk_00->requestOpen();
    }
}

BOOL ChoiceMenu::isIdle() {
    return unk_00 == 0;
}

BOOL ChoiceMenu::justDecided() {
    BOOL r = FALSE;
    if (unk_00 != 0) {
        r = unk_00->justDecided();
    }
    return r;
}

void ChoiceMenu::draw() {
    if (unk_00 != 0) {
        unk_00->draw();
    }
}

void MsgCallStack::pop() {
    if (unk_18 != 0) {
        unk_18--;
        unk_00[unk_18] = 0;
    }
}

u32 *MsgCallStack::top() {
    return &unk_00[unk_18 - 1];
}

void MsgCallStack::push(const u32 &value) {
    if (unk_18 < 6) {
        u32 i = unk_18++;
        unk_00[i] = value;
    }
}

BOOL MsgCallStack::isEmpty() {
    return unk_18 == 0;
}

MsgCallStack::~MsgCallStack() {}

MsgCallStack::MsgCallStack() {
    unk_18 = 0;
    for (u32 i = 0; i < 6; i++) {
        unk_00[i] = 0;
    }
}

