#include "types.h"
#include "save/TownExchangeRecord.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "item/Letter.h"
#include "item/ReceivedLetterBlock.h"
#include "ui/InputModeIcon.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 TalkRequestFlags_IsSceneHold();
s32 _ZN10LetterView8getStateEv();
void Letter_Clear(void *p);
}




InputModeIcon sInputModeIcon;




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

extern "C" void InputMode_Clear() { sInputModeIcon.inputMode = 0; }

extern "C" void InputMode_SetButtons() { sInputModeIcon.inputMode = 1; }

extern "C" void InputMode_SetTouch() { sInputModeIcon.inputMode = 2; }

extern "C" BOOL InputMode_IsButtons() {
    if (sInputModeIcon.inputMode == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL InputMode_IsTouch() {
    if (sInputModeIcon.inputMode == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void InputModeIcon_Init() { sInputModeIcon.init(); }

extern "C" void InputModeIcon_Exit() { sInputModeIcon.exit(); }

extern "C" void InputModeIcon_Update() { sInputModeIcon.vfunc_0c(); }

extern "C" void InputModeIcon_Draw() { sInputModeIcon.draw(); }

void InputModeIcon::draw() {
    if (isVisible != 0) {
        if (!isDrawBlocked()) {
            void *h = anim.getCell();
            s32 x = getOriginX() + anim.getFrameX(-1);
            s32 y = getOriginY() + anim.getFrameY(-1);
            Oam_DrawCell(3, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void InputModeIcon::vfunc_0c() {
    if (isVisible != 0) {
        anim.update();
    }
    if (inputMode != shownMode) {
        startModeAnim();
        shownMode = inputMode;
    }
}

InputModeIcon::InputModeIcon() : inputMode(0), shownMode(0) {
    isVisible = 0;
}

InputModeIcon::~InputModeIcon() {
}

