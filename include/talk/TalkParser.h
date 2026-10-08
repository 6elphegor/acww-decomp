#ifndef TALK_TALKPARSER_H
#define TALK_TALKPARSER_H

#include "types.h"
#include "talk/MsgWalker.h"
#include "talk/MsgTag.h"

class TalkWindowState;
class TalkTextBox;
class MsgString;

// Prints part of a message character by character (the alternative text of an alt-text tag and the main text it
// replaces). 0x3c bytes on the DS. Defined in src/main/unk_02065e88.cpp.
class TalkCharStepper : public MsgWalker {
public:
    TalkCharStepper(TalkWindowState *owner, TalkTextBox *buf);
    virtual ~TalkCharStepper();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    void stop();
    BOOL isIdle();
    void stepOnce();
    void startUntil(u8 *p, u8 *end, u8 flag);
    void startCount(u8 *p, s32 n, u8 flag);

    /* 0x24 */ TalkWindowState *window;
    /* 0x28 */ TalkTextBox *textBox;
    /* 0x2c */ s32 mode;      // 0 idle, 1 a number of characters, 2 up to endPos
    /* 0x30 */ u8 *endPos;
    /* 0x34 */ s32 remaining;
    /* 0x38 */ u8 stepAllowed;
    /* 0x39 */ u8 printChars;
};

// The print speed state of the talk parser
struct TalkParserSpeedState {
    /* 0x4c */ u8 fastForward, holdStep, instant, fastForwardLock;
    /* 0x50 */ s32 charCount, stepPhase, waitTimer, textColor;
    TalkParserSpeedState() {
        fastForward = 0;
        holdStep = 0;
        instant = 0;
        fastForwardLock = 0;
        charCount = 0;
        stepPhase = 0;
        waitTimer = 0;
        textColor = 0;
    }
};

// Prints the talk window's message into its text box, interpreting the message tags (names, choices, branches,
// signals to the request ...). 0xe4 bytes on the DS. Defined in src/main/unk_02065e88.cpp; the tag handlers are
// reached through the tables of the tagGroup functions.
class TalkParser : public MsgWalker {
public:
    TalkParser(TalkWindowState *owner, TalkTextBox *buf);
    virtual ~TalkParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    void dispatchTag();
    void tagGroup00();
    void tagGroup01();
    void tagGroup02();
    void tagGroup03();
    void tagGroup04();
    void tagGroup05();
    void tagGroup06();
    void tagGroup07();
    void tagGroup08();
    void tagGroup09();
    void tagGroup0a();
    void tagGroup0b();
    void tagGroupFf();

    void jumpToMessage(u8 *p);
    void selectBySlotForm(MsgString *p);
    void selectByPlayerGender();
    void expandNamedSlot(s32 idx);
    void expandSlot(s32 idx);
    void expandArticle(MsgString *ent, BOOL flag);
    BOOL stepSpeed();
    void stepSteppers();
    BOOL steppersIdle();
    void debugPrintMissing(s32 line, const char *what);
    void resetColor();
    void clearFastForward();
    void setFastForward();
    void setPrintMode(s32 v);
    void stop();

    // group 0x00
    void tagNop();
    void tagGlyph0();
    void tagGlyph1();
    void tagGlyph6();
    void tagGlyph7();
    void tagGlyph8();
    // group 0x01
    void tagWait();
    void tagPageBreak();
    void tagFastOn();
    void tagFastOff();
    void tagFastLockOn();
    void tagFastLockOff();
    void tagGreeting();
    void tagGreetingEnd();
    void tagShakeSmall();
    void tagShakeMedium();
    void tagShakeLarge();
    void tagSignal0();
    void tagSignal1();
    void tagSignal2();
    void tagSignal3();
    void tagSignal4();
    void tagAutoAdvance();
    // group 0x02
    void tagChoice2();
    void tagChoice3();
    void tagChoice4();
    void tagChoice5();
    void tagChoice2B();
    void tagChoice3B();
    void tagChoice4B();
    void tagChoice5B();
    // group 0x03
    void tagAction0();
    void tagAction1();
    void tagAction2();
    void tagAction3();
    void tagAction4();
    // group 0x04
    void tagPlayerName();
    void tagSpeakerName();
    void tagCatchphrase();
    void tagTownName();
    void tagYear();
    void tagMonth();
    void tagDay();
    void tagWeekday();
    void tagHour();
    void tagMinute();
    void tagNumber1714();
    void tagFriendName();
    void tagEnemyName();
    void tagRandomVillagerName();
    void tagOtherResidentName();
    void tagSlot0();
    void tagSlot1();
    void tagSlot2();
    void tagSlot3();
    void tagSlot4();
    void tagSlot5();
    void tagSlot6();
    void tagSlot7();
    void tagSlot8();
    void tagSlot9();
    void tagSlot10();
    void tagNamedSlot0();
    void tagNamedSlot1();
    void tagNamedSlot2();
    void tagNamedSlot3();
    void tagImpression();
    void tagNickname();
    void tagNop0420();
    void tagCompliment();
    void tagTrend();
    // group 0x05
    void tagChoiceSlots();
    // group 0x06
    void tagBranchRandom2();
    void tagBranchRandom3();
    void tagBranchFriendship();
    void tagBranchPlayerGender();
    void tagBranchHouseUnk();
    void tagBranchInsectCount();
    void tagBranchFishCount();
    void tagBranchVillagerCount();
    void tagBranchUnk8();
    void tagBranchWeather();
    void tagBranchResidentCount();
    void tagBranchWeekday();
    void tagBranchVisitor();
    void tagBranchSpecies();
    // group 0x08
    void tagNop0800();
    void tagNop0801();
    void tagNop0802();
    // group 0x09
    void tagSignal09_0();
    void tagSignal09_1();
    void tagSignal09_2();
    void tagSignal09_3();
    void tagSignal09_4();
    void tagSignal09_5();
    void tagSignal09_6();
    void tagSignal09_7();
    void tagSignal09_8();
    void tagSignal09_9();
    // group 0x0a
    void tagNop0a00();
    // group 0x0b
    void tagArticleMode1();
    void tagArticleMode2();
    void tagCapitalizeNext();
    void tagSelectByPlayerGender();
    void tagSlotForm0();
    void tagSlotForm1();
    void tagSlotForm2();
    void tagSlotForm3();
    void tagSlotForm4();
    void tagSlotForm5();
    void tagSlotForm6();
    void tagSlotForm7();
    void tagSlotForm8();
    void tagSlotForm9();
    void tagSlotForm10();
    void tagNamedSlotForm0();
    void tagNamedSlotForm1();
    void tagNamedSlotForm2();
    void tagNamedSlotForm3();
    // group 0xff
    void tagColor();
    void tagAltText();

    /* 0x24 */ TalkWindowState *window;
    /* 0x28 */ TalkTextBox *textBox;
    /* 0x2c */ u32 lineCount;
    /* 0x30 */ s32 printStatus;  // 1 printing, 2 page full, 3 done, 4 page break, 5 choice
    /* 0x34 */ s32 printMode;
    /* 0x38 */ MsgTag tag;
    /* 0x4c */ TalkParserSpeedState printVars;
    /* 0x60 */ TalkCharStepper altTextStepper;
    /* 0x9c */ TalkCharStepper mainTextStepper;
    /* 0xd8 */ u8 choiceDeferred;
    /* 0xd9 */ u8 capitalizeNext;
    /* 0xdc */ u8 *selectEnd;
    /* 0xe0 */ s32 articleMode;
};

#endif
