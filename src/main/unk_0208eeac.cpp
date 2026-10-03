#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 TalkRequestFlags_IsSceneHold();
s32 _ZN10LetterView8getStateEv();
void Letter_Clear(void *p);
}

// Sub-object at +0x14 of InputModeIcon (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setPlayOnce(s32 v);
    void setSeq(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
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

// Vtable at 0x020e1164; singleton sInputModeIcon
class InputModeIcon : public UiWidget {
public:
    InputModeIcon();
    virtual ~InputModeIcon();
    virtual void draw();
    virtual void vfunc_0c();

    void startModeAnim();
    BOOL isDrawBlocked();
    void exit();
    void init();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ u8 unk_28;
};

InputModeIcon sInputModeIcon;

// Player-slot style record (full definition in the next unit)
class TownExchangeRecord {
public:
    u8 getChecksumByte();
    void setChecksumByte(u32 v);

    /* 0x000 */ u8 unk_000[0xf4];
    /* 0x0f4 */ u8 unk_0f4;
};

class Letter {
public:
    Letter();
    ~Letter();
};

class ReceivedLetterBlock : public Letter {
public:
    ReceivedLetterBlock();
    ~ReceivedLetterBlock();
};

ReceivedLetterBlock::ReceivedLetterBlock() {}

ReceivedLetterBlock::~ReceivedLetterBlock() {}

extern "C" void ReceivedLetter_Clear(void *p) { Letter_Clear(p); }

extern "C" BOOL ReceivedLetter_HasLetter() {
    if (_ZN10LetterView8getStateEv()) {
        return TRUE;
    }
    return FALSE;
}

void TownExchangeRecord::setChecksumByte(u32 v) { unk_0f4 = v; }

u8 TownExchangeRecord::getChecksumByte() { return unk_0f4; }

extern "C" void ReceivedLetter_GetLetter() {}

extern "C" void InputMode_Clear() { sInputModeIcon.unk_0c = 0; }

extern "C" void InputMode_SetButtons() { sInputModeIcon.unk_0c = 1; }

extern "C" void InputMode_SetTouch() { sInputModeIcon.unk_0c = 2; }

extern "C" BOOL InputMode_IsButtons() {
    if (sInputModeIcon.unk_0c == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL InputMode_IsTouch() {
    if (sInputModeIcon.unk_0c == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void InputModeIcon_Init() { sInputModeIcon.init(); }

extern "C" void InputModeIcon_Exit() { sInputModeIcon.exit(); }

extern "C" void InputModeIcon_Update() { sInputModeIcon.vfunc_0c(); }

extern "C" void InputModeIcon_Draw() { sInputModeIcon.draw(); }

void InputModeIcon::draw() {
    if (unk_28 != 0) {
        if (!isDrawBlocked()) {
            void *h = unk_14.getCell();
            s32 x = getOriginX() + unk_14.getFrameX(-1);
            s32 y = getOriginY() + unk_14.getFrameY(-1);
            Oam_DrawCell(3, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void InputModeIcon::vfunc_0c() {
    if (unk_28 != 0) {
        unk_14.update();
    }
    if (unk_0c != unk_10) {
        startModeAnim();
        unk_10 = unk_0c;
    }
}

InputModeIcon::InputModeIcon() : unk_0c(0), unk_10(0) {
    unk_28 = 0;
}

InputModeIcon::~InputModeIcon() {
}

