#include "uptr.h"
#include "types.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgTag.h"
#include "talk/MsgRunner.h"
#include "talk/TalkWindowState.h"
#include "talk/BmgReader.h"
#include "talk/BmgMsgAttr.h"
#include "talk/MsgParser.h"
#include "talk/MsgTextLabel.h"
#include "talk/MsgRequest.h"
#include "talk/MsgProcessor.h"
#include "talk/TalkBmgReader.h"
#include "talk/MsgWalker.h"
#include "room/HouseData.h"
#include "talk/MsgString9.h"
#include "talk/MsgString.h"
#include "talk/MsgString33.h"
#include "talk/TalkMsgRequest.h"
#include "talk/MsgString17.h"
#include "talk/MsgString17B.h"
#include "talk/MsgString9B.h"
#include "talk/MsgString25.h"
#include "talk/MsgString11.h"
#include "talk/MsgString9C.h"
#include "talk/ChoiceList.h"
#include "talk/ChoiceMenu.h"
#include "talk/ChoiceString.h"
#include "ui/TalkArrow.h"
#include "nitro/fs.h"
#include "net/CommManager.h"
#include "nitro/io_access.h"
#include "player/PlayerData.h"
#include "player/PlayerId.h"
#include "snd/BgmVolumeMixer.h"
#define PROTO_LOCAL_Snd_PlaySe  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Str_SPrintf  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_String_GetArticle  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TalkFrame_FreeBuffers  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TalkFrame_HideBg  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TalkFrame_SetupBgControl  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TalkFrame_ShowBg  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_TalkFrame_UploadBg  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sTalkMessagePath  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sTalkWindowCloseOffsets  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_sTalkWindowOpenOffsets  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_02119434.h"
#include "proto/main/unk_02065e88.h"
#include "proto/main/unk_02097444.h"

class MsgRequest;
class MsgString;
class MsgString9;
class TalkMsgRequest;
class TalkWindowState;
class TalkWindowMsg;
class MsgString33;
class MsgRunner;
struct TalkWindow;
class TalkFrame;
class TalkTextBox;
class TalkMsgBuffer;
class TalkVoice;
class TalkRenderProcessor;
class TalkParser;
class MsgTag;
class MsgParser;
class MsgWalker;
class MsgTextLabel;
class MsgProcessor;
class ChoiceMenu;
class ChoiceList;
class ChoiceEntry;
class BmgReader;
class TalkBmgReader;
struct TalkAdvanceStackPad;
class TalkTagScannerView;
class TalkAutoAdvance;
struct TalkWindowShake;
class BmgMsgAttr;
class MsgString25;
class MsgString11;
class MsgString9C;
class MsgString9B;
class MsgString17;
class MsgString17B;
class TalkFrameView;
class TalkTagScanner;
class HouseData;
class TalkParserCondTags;
class TalkParserVarTags;
class TalkParserTags2;
class TalkParserTags;
class TalkCharStepper;
struct TalkParserSpeedState;

extern "C" { extern u8 gTalkMsgIndexNone; }

class ChoiceString;




class TalkRenderProcessor : public MsgProcessor {
public:
    TalkRenderProcessor(u8 *owner);
    virtual ~TalkRenderProcessor();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    void tagGroup0b();
    void tagGroup04();
    void tagGroup02();
    void tagGroup01();
    void tagGroup00();
    void dispatchTag();
    void selectBySlotForm(MsgString *a);
    void tagAltText();
    void selectByPlayerGender();
    void expandNamedSlot(s32 idx);
    void expandSlot(s32 idx);
    void pushArticle(MsgString33 *e);
    s32 measureLine(u32 a, BOOL b);
    void tagNamedSlotForm3();
    void tagNamedSlotForm2();
    void tagNamedSlotForm1();
    void tagNamedSlotForm0();
    void tagSlotForm10();
    void tagSlotForm9();
    void tagSlotForm8();
    void tagSlotForm7();
    void tagSlotForm6();
    void tagSlotForm5();
    void tagSlotForm4();
    void tagSlotForm3();
    void tagSlotForm2();
    void tagSlotForm1();
    void tagSlotForm0();
    void tagSelectByPlayerGender();
    void tagArticleMode2();
    void tagArticleMode1();
    void tagTrend();
    void tagCompliment();
    void tagNickname();
    void tagImpression();
    void tagNamedSlot3();
    void tagNamedSlot2();
    void tagNamedSlot1();
    void tagNamedSlot0();
    void tagSlot10();
    void tagSlot9();
    void tagSlot8();
    void tagSlot7();
    void tagSlot6();
    void tagSlot5();
    void tagSlot4();
    void tagSlot3();
    void tagSlot2();
    void tagSlot1();
    void tagSlot0();
    void tagOtherResidentName();
    void tagRandomVillagerName();
    void tagEnemyName();
    void tagFriendName();
    void tagNumber1714();
    void tagMinute();
    void tagHour();
    void tagWeekday();
    void tagDay();
    void tagMonth();
    void tagYear();
    void tagTownName();
    void tagCatchphrase();
    void tagSpeakerName();
    void tagPlayerName();
    void tagGreetingEnd();
    void tagGreeting();
    void tagGlyph8();
    void tagGlyph7();
    void tagGlyph6();
    void tagGlyph1();
    void tagGlyph0();
    void tagGroupFf();

    /* 0x2c */ u8 *window;
    /* 0x30 */ MsgTextLabel *measureLabel;
    /* 0x34 */ MsgTag tag;
    /* 0x48 */ u8 *altTextEnd;
    /* 0x4c */ u8 *selectEnd;
    /* 0x50 */ u32 articleMode;
};




// Sub-object (0x3c bytes)
class TalkCharStepper : public MsgWalker {
public:
    TalkCharStepper(TalkWindow *owner, TalkTextBox *buf);
    virtual ~TalkCharStepper();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    void stop();
    BOOL isIdle();
    void stepOnce();
    void startUntil(u8 *p, u32 v, u8 flag);
    void startCount(u8 *p, s32 n, u8 flag);

    /* 0x24 */ TalkWindow *window;
    /* 0x28 */ TalkTextBox *textBox;
    /* 0x2c */ s32 mode;
    /* 0x30 */ s32 endPos;
    /* 0x34 */ s32 remaining;
    /* 0x38 */ u8 stepAllowed;
    /* 0x39 */ u8 printChars;
};

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

class TalkParser : public MsgWalker {
public:
    TalkParser(TalkWindow *owner, TalkTextBox *buf);
    virtual ~TalkParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);
    virtual BOOL canContinue();

    void tagBranchUnk8();
    void tagGroupFf();
    void tagGroup0b();
    void tagGroup0a();
    void tagGroup09();
    void tagGroup08();
    void tagGroup07();
    void tagGroup06();
    void tagGroup05();
    void tagGroup04();
    void tagGroup03();
    void tagGroup02();
    void tagGroup01();
    void tagGroup00();
    void dispatchTag();
    void jumpToMessage(u8 *p);
    void selectBySlotForm(u8 *p);
    void selectByPlayerGender();
    void expandNamedSlot(s32 idx);
    void expandSlot(s32 idx);
    void expandArticle(MsgString *ent, BOOL flag);
    BOOL stepSpeed();
    void stepSteppers();
    BOOL steppersIdle();
    void debugPrintMissing();
    void resetColor();
    void clearFastForward();
    void setFastForward();
    void setPrintMode(s32 v);
    void stop();

    /* 0x24 */ TalkWindow *window;
    /* 0x28 */ TalkTextBox *textBox;
    /* 0x2c */ u32 lineCount;
    /* 0x30 */ s32 printStatus;
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

class TalkTagScanner : public MsgWalker {
public:
    TalkTagScanner(TalkWindow *owner);
    virtual ~TalkTagScanner();
    virtual void onTag(u8 *p);

    void reportTag();
    void resetScan();
    void scan(u8 *p);
    void tagAltText();
    void tagColor();
    void tagNamedSlotForm3();
    void tagNamedSlotForm2();
    void tagNamedSlotForm1();
    void tagNamedSlotForm0();
    void tagSlotForm10();
    void tagSlotForm9();
    void tagSlotForm8();
    void tagSlotForm7();
    void tagSlotForm6();
    void tagSlotForm5();
    void tagSlotForm4();
    void tagSlotForm3();
    void tagSlotForm2();
    void tagSlotForm1();
    void tagSlotForm0();
    void tagSelectByPlayerGender();
    void tagCapitalizeNext();
    void tagArticleMode2();
    void tagArticleMode1();
    void tagNop0a00();
    void tagSignal09_9();
    void tagSignal09_8();
    void tagSignal09_7();
    void tagSignal09_6();
    void tagSignal09_5();
    void tagSignal09_4();
    void tagSignal09_3();
    void tagSignal09_2();
    void tagSignal09_1();
    void tagSignal09_0();
    void tagNop0802();
    void tagNop0801();
    void tagNop0800();
    void tagBranchSpecies();
    void tagBranchVisitor();
    void tagBranchWeekday();
    void tagBranchResidentCount();
    void tagBranchWeather();

    void jumpToMessage(u8 *p);
    void selectBySlotForm(void *p);
    void selectByPlayerGender();
    void debugPrintMissing(s32 a, const void *b);

    /* 0x24 */ TalkWindow *window;
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 tag[0x14];
    /* 0x4c */ u8 unk_4c[0x10];
    /* 0x5c */ u32 textColor;
    /* 0x60 */ u8 altTextStepper[0x3c];
    /* 0x9c */ u8 mainTextStepper[0x3c];
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 capitalizeNext;
    u8 pad_da[6];
    /* 0xe0 */ u32 articleMode;
};

class TalkVoice {
public:
    TalkWindow *window;
    u16 charKey0, charKey1, carryCharKey;
    s32 numCharKeys, msgModeOverride, msgMode;
    u8 instantByMsg, instantByTag, inWait;
    s32 voiceOverride, voiceType, textColor;

    TalkVoice(TalkWindow *o);
    virtual ~TalkVoice();
    void shiftHistory();
    void updateVoiceType();
    u8 getSpeakerMoodIndex();
    u32 getVoiceStyle();
    void end();
    void begin();
    void setMsgMode(s32 v);
    void update();
    void pushChar(u32 c);
    void reset(s32 flag);
    void refreshVoiceType();
    void setVoiceType(s32 r);
    void clearMsgModeOverride();
    void setMsgModeOverride(s32 v);
    void clearVoiceOverride();
    void setVoiceOverride(s32 v);
};








class TalkWindowMsg {
public:
    void loadMessageAttr();
    const char *matchSubdirPrefix(const char *s);
    const char *matchDirPrefix(const char *s);
    char *buildMessagePath(const char *a, const char *b);
    void scanMessageTags();
    void startMessage();
    void playMessageSe();
    void notifyChoice();
    void notifyMessageEnd();
    void notifyMessageStart();
    void destroyNameLabel();
    void createNameLabel();
    void applyFriendshipDelta(s32 idx);
    BOOL buildGreeting();
    void clearGreeting();
    BOOL buildCompliment();
    void clearCompliment();
    BOOL buildNickname();
    void clearNickname();
    BOOL buildImpression();
    void clearImpression();
    BOOL buildTrend();
    void clearTrend();
    BOOL buildOtherResidentName();
    void clearOtherResidentName();
    BOOL buildRandomVillagerName();
    void clearRandomVillagerName();
    BOOL buildEnemyName();
    void clearEnemyName();
    BOOL buildFriendName();
    void clearFriendName();
    BOOL buildPlayerName();
    void clearPlayerName();
    BOOL buildTownName();
    void clearTownName();
    BOOL buildCatchphrase();
    void clearCatchphrase();
    void clearNamedSlots();
    void clearSlots();
    void reset();
    void resetVars();

#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in TalkWindow)
    u8 pad_0000[0x408];  // DS +0x0 [0x314]
    u8 choiceList[0x8];  // DS +0x314 [0x4]
    u8 pad_0318[0x2f0];  // DS +0x318 [0x270]
    TextLabel * nameLabel;  // DS +0x588
    u8 textBox[0x4];  // DS +0x58c [0x4]
    u8 pad_0590[0x4dc];  // DS +0x590 [0x48c]
    u8 msgBuffer[0x4];  // DS +0xa1c [0x4]
    u8 pad_0a20[0x8d4];  // DS +0xa20 [0x8a0]
    u8 parser[0x8];  // DS +0x12c0 [0x4]
    u8 pad_12c4[0x138];  // DS +0x12c4 [0xe0]
    u8 runner[0x8];  // DS +0x13a4 [0x4]
    u8 pad_13a8[0x10];  // DS +0x13a8 [0x8]
    TalkMsgRequest * request;  // DS +0x13b0
    u8 msgAttr[0x10];  // DS +0x13b4 [0xc]
    MsgString33 slots[0xb];  // DS +0x13c0
    MsgString33 namedSlots[0x4];  // DS +0x15fc
    uptr namedSlotColors[0x4];  // DS +0x16cc [0x10] (pointers)
    u8 pad_16dc[0x24];  // DS +0x16dc [0x1c]
    u8 voiceInstantByMsg;  // DS +0x16f8
    u8 pad_16f9[0x1c3];  // DS +0x16f9 [0x167]
    u8 catchphrase[0x30];  // DS +0x1860 [0x20]
    u8 townName[0x28];  // DS +0x1880 [0x1c]
    u8 playerName[0x28];  // DS +0x189c [0x1c]
    u8 friendName[0x28];  // DS +0x18b8 [0x1c]
    u8 enemyName[0x28];  // DS +0x18d4 [0x1c]
    u8 randomVillagerName[0x28];  // DS +0x18f0 [0x1c]
    u8 otherResidentName[0x28];  // DS +0x190c [0x1c]
    u8 trend[0x40];  // DS +0x1928 [0x34]
    u8 impression[0x40];  // DS +0x195c [0x34]
    u8 nickname[0x28];  // DS +0x1990 [0x1c]
    u8 compliment[0x30];  // DS +0x19ac [0x24]
    u8 greeting[0x30];  // DS +0x19d0 [0x24]
    u8 randomVillagerNameBuilt;  // DS +0x19f4
    u8 otherResidentNameBuilt;  // DS +0x19f5
    u8 otherResidentIsVillager;  // DS +0x19f6
    u8 pad_19f7[0x1d];  // DS +0x19f7 [0x1d]
    u8 startNotifyPending;  // DS +0x1a14
    u8 endNotifyPending;  // DS +0x1a15
    u8 choiceNotifyPending;  // DS +0x1a16
    u8 pad_1a17[0x2];  // DS +0x1a17 [0x2]
    u8 noOpenSe;  // DS +0x1a19
    u8 pad_1a1a[0x2];  // DS +0x1a1a [0x3]
#else
    u8 pad_0000[0x314];
    /* 0x0314 */ u8 choiceList[4];
    u8 pad_0318[0x270];
    /* 0x0588 */ TextLabel *nameLabel;
    /* 0x058c */ u8 textBox[4];
    u8 pad_0590[0x48c];
    /* 0x0a1c */ u8 msgBuffer[4];
    u8 pad_0a20[0x8a0];
    /* 0x12c0 */ u8 parser[4];
    u8 pad_12c4[0xe0];
    /* 0x13a4 */ u8 runner[4];
    u8 pad_13a8[0x8];
    /* 0x13b0 */ TalkMsgRequest *request;
    /* 0x13b4 */ u8 msgAttr[0xc];
    /* 0x13c0 */ MsgString33 slots[11];
    /* 0x15fc */ MsgString33 namedSlots[4];
    /* 0x16cc */ u32 namedSlotColors[4];
    u8 pad_16dc[0x1c];
    /* 0x16f8 */ u8 voiceInstantByMsg;
    u8 pad_16f9[0x167];
    /* 0x1860 */ u8 catchphrase[0x20];
    /* 0x1880 */ u8 townName[0x1c];
    /* 0x189c */ u8 playerName[0x1c];
    /* 0x18b8 */ u8 friendName[0x1c];
    /* 0x18d4 */ u8 enemyName[0x1c];
    /* 0x18f0 */ u8 randomVillagerName[0x1c];
    /* 0x190c */ u8 otherResidentName[0x1c];
    /* 0x1928 */ u8 trend[0x34];
    /* 0x195c */ u8 impression[0x34];
    /* 0x1990 */ u8 nickname[0x1c];
    /* 0x19ac */ u8 compliment[0x24];
    /* 0x19d0 */ u8 greeting[0x24];
    /* 0x19f4 */ u8 randomVillagerNameBuilt;
    /* 0x19f5 */ u8 otherResidentNameBuilt;
    /* 0x19f6 */ u8 otherResidentIsVillager;
    u8 pad_19f7[0x1d];
    /* 0x1a14 */ u8 startNotifyPending;
    /* 0x1a15 */ u8 endNotifyPending;
    /* 0x1a16 */ u8 choiceNotifyPending;
    u8 pad_1a17[0x2];
    /* 0x1a19 */ u8 noOpenSe;
    u8 pad_1a1a[3];
#endif
};

// Entries of the owner (0x34 bytes)



class TalkFrame {
public:
    TalkFrame();
    BOOL load(s32 a, u32 b, s32 c, u8 d);
    TalkFrame *construct();
    TalkFrame *destruct();
    void draw();
    void update();
    void freeBuffers();
    void drawBusyIcon();
    void updateBusyIcon();
    void drawArrow();
    void updateArrow();
    BOOL loadCharacters(void *file);
    BOOL loadPalette(void *file);
    BOOL loadScreen(void *file, BOOL alt);
    void setTextPalette(s32 idx);
    void setNamePalette(s32 a, BOOL b);

    /* 0x00 */ u16 *screenData;
    /* 0x04 */ void *paletteData;
    /* 0x08 */ void *charData;
#ifdef HOST64
    // (the objects' 64-bit sizes: TalkArrow, TalkBusyIcon - src/main/unk_0208e6d8.cpp checks the latter)
    u8 arrow[sizeof(TalkArrow)] __attribute__((aligned(8)));
    u8 busyIcon[40] __attribute__((aligned(8)));
#else
    /* 0x0c */ u8 arrow[0x44];
    /* 0x50 */ u8 busyIcon[0x24];
#endif
    /* 0x74 */ u32 scrollX;
    /* 0x78 */ u32 scrollY;
    /* 0x7c */ u32 busyIconTimer;
};

class TalkTextBox {
public:
    TalkTextBox(TalkWindow *o);
    ~TalkTextBox();
    void markLineDirty();
    void endText();
    void redrawLines();
    void clearLabels();
    void destroyLabels();
    void createLabels();
    void setCentered(u8 v);
    void setRemainingLineColors(u32 v);
    void beginLine(u32 v);
    void appendTag(void *m);
    BOOL appendChar(s32 c0);
    BOOL appendBytes(s8 *src, u32 n);
    void setAllLineColors(u32 v);
    void clearWithColor(u32 v);
    void clear();

    /* 0x000 */ u8 text[0x400];
    /* 0x400 */ u32 length;
    /* 0x404 */ u8 *lineStarts[3];
    /* 0x410 */ u32 numLines;
    /* 0x414 */ u32 lineColors[3];
    /* 0x420 */ TextLabel *labels[3];
    /* 0x42c */ u32 lineOffsets[3];
    /* 0x438 */ u8 lineDirty[3];
    /* 0x43b */ u8 centered;
    /* 0x43c */ TalkRenderProcessor renderer;
};

class TalkMsgBuffer {
public:
    TalkMsgBuffer();
    u32 getBufferSize();
    u8 *getBuffer();
    void clear();

    u32 unk_00[sizeof(BmgReader) / 4] HOST_ALIGN8; // the BmgReader base (larger on 64-bit hosts)
    /* 0xa4 */ u8 buffer[0x800];
};



struct TalkWindowShake { u32 scrollY; u16 angle; u32 amplitude, decay, scaleX, scaleY; TalkWindowShake() { scrollY = 0; angle = 0; amplitude = 0; decay = 0; scaleX = 0; scaleY = 0; } };








struct TalkWindow {
    u32 index, state, nextState, stateStep, autoAdvanceTimer, openMode;
    u8 choicePending;
    TalkFrame frame;
    TalkWindowShake scrollShake;
    ChoiceMenu choiceMenu;
    ChoiceList choiceList;
    u32 nameLabel;
    TalkTextBox textBox;
    TalkMsgBuffer msgBuffer;
    TalkParser parser;
    MsgRunner runner;
    TalkMsgRequest *request;
    BmgMsgAttr msgAttr;
    MsgString33 slots[11];
    MsgString33 namedSlots[4];
    u8 *namedSlotColors[4];
    TalkVoice voice;
    u32 year;
    u8 day, month, minute, hour;
    u32 weekday, second, timeOfDay;
    MsgString25 yearText;
    MsgString33 monthText;
    MsgString25 dayText;
    MsgString33 weekdayText;
    MsgString25 hourText, minuteText, secondText;
    MsgString11 catchphrase;
    MsgString9C townName;
    MsgString9B playerName, friendName, enemyName, randomVillagerName, otherResidentName;
    MsgString33 trend, impression;
    MsgString9B nickname;
    MsgString17 compliment;
    MsgString17B greeting;
    u8 randomVillagerNameBuilt, otherResidentNameBuilt, otherResidentIsVillager, nextMsgIndex;
    u8 nextFileName[0x1a];
    u8 advancePending, advanceLocked, startNotifyPending, endNotifyPending, choiceNotifyPending, voicePlaying, inputDisabled, noOpenSe, silent;

    TalkWindow();
};





struct TalkAdvanceStackPad { s32 v[2]; TalkAdvanceStackPad() {} ~TalkAdvanceStackPad() {} };


class TalkTagScannerView {
public:
    TalkTagScannerView(void *owner);
    ~TalkTagScannerView();
    void scan(u32 v);
    u8 pad[HOST_SIZED(0x44, TalkTagScanner)] HOST_ALIGN8;  // a TalkTagScanner
};

class TalkAutoAdvance {
public:
    BOOL tick();
    void start(s32 v);
    void stop();
    u8 pad[0x10];
    s32 autoAdvanceTimer;
};




class TalkFrameView {
public:
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in TalkFrame)
    u8 pad_00[0x18];  // DS +0x0 [0xc]
    TalkArrow arrow;  // DS +0xc
    u8 pad_50[0x28];  // DS +0x50 [0x24]
    s32 scrollX;  // DS +0x74
    s32 scrollY;  // DS +0x78
    s32 busyIconTimer;  // DS +0x7c
    u8 hpad_0[0x4];
#else
    u8 pad_00[0x0c];
    TalkArrow arrow;
    u8 pad_50[0x74 - 0x50];
    s32 scrollX, scrollY, busyIconTimer;
#endif
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
    void setScroll(s32 a, s32 b);
    void setScrollY(s32 b);
};







// Script command handlers: member functions reached through pointer tables at 0x020dd6b4..0x020ddbf8
class TalkParserCondTags : public MsgParser {
public:
    void tagBranchVillagerCount();
    void tagBranchFishCount();
    void tagBranchInsectCount();
    void tagBranchHouseUnk();
    void tagBranchPlayerGender();
    void tagBranchFriendship();
    void tagBranchRandom3();
    void tagBranchRandom2();
    void tagChoiceSlots();
    void tagTrend();
    void tagCompliment();
    void tagNop0420();
    void tagNickname();
    void tagImpression();
    void tagNamedSlot3();
    void tagNamedSlot2();
    void tagNamedSlot1();
    void tagNamedSlot0();
    void tagSlot10();
    void tagSlot9();
    void tagSlot8();
    void tagSlot7();
    void tagSlot6();
    void tagSlot5();
    void tagSlot4();
    void tagSlot3();
    void tagSlot2();
    void tagSlot1();
    void tagSlot0();
    void tagOtherResidentName();
    void tagRandomVillagerName();
    void tagEnemyName();
    void tagFriendName();
    void tagNumber1714();
    void tagMinute();
    void tagHour();
    void tagWeekday();
    void tagDay();
    void tagMonth();
    void tagYear();
    void tagTownName();
    void tagCatchphrase();

    void jumpToMessage(u8 *p);
    void expandNamedSlot(s32 k);
    void expandSlot(s32 k);
    void debugPrintMissing(s32 line, const char *file);

#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in TalkParser)
    u8 * window;  // DS +0x24
    uptr unk_28;  // DS +0x28
    u32 unk_2c;  // DS +0x2c
    s32 printStatus;  // DS +0x30
    u32 unk_34;  // DS +0x34
    u8 hpad_0[0x4];
    MsgTag tag;  // DS +0x38
    u32 unk_4c;  // DS +0x4c
    u32 unk_50;  // DS +0x50
    u32 unk_54;  // DS +0x54
    u32 unk_58;  // DS +0x58
    s32 textColor;  // DS +0x5c
    u8 hpad_1[0x4];
    u8 unk_60[0xa0];  // DS +0x60 [0x78]
    u8 choiceDeferred;  // DS +0xd8
    u8 hpad_2[0x7];
#else
    /* 0x24 */ u8 *window;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 printStatus;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ MsgTag tag;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 textColor;
    /* 0x60 */ u8 unk_60[0xd8 - 0x60];
    /* 0xd8 */ u8 choiceDeferred;
#endif
};




class TalkParserVarTags : public MsgWalker {
public:
    void tagSpeakerName();
    void tagPlayerName();
    void tagAction4();
    void tagAction3();
    void tagAction2();
    void tagAction1();
    void tagAction0();
    void tagChoice5B();
    void tagChoice4B();
    void tagChoice3B();
    void tagChoice2B();
    void tagChoice5();
    void tagChoice4();
    void tagChoice3();
    void tagChoice2();
    void tagAutoAdvance();
    void tagSignal4();
    void tagSignal3();
    void tagSignal2();
    void tagSignal1();
    void tagSignal0();
    void tagShakeLarge();
    void tagShakeMedium();
    void tagShakeSmall();
    void tagGreetingEnd();
    void tagGreeting();
    void tagFastLockOff();
    void tagFastLockOn();
    void tagFastOff();
    void tagFastOn();
    void tagPageBreak();
    void tagWait();
    void tagGlyph8();
    void tagGlyph7();
    void tagGlyph6();
    void tagGlyph1();
    void tagGlyph0();
    void tagNop();

#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in TalkParser)
    TalkWindow * window;  // DS +0x24
    u8 pad_28[0xc];  // DS +0x28 [0x8]
    s32 printStatus;  // DS +0x30
    u8 pad_34[0x8];  // DS +0x34 [0x4]
    MsgTag tag;  // DS +0x38
    u8 pad_4c[0x2];  // DS +0x4c [0x2]
    u8 instant;  // DS +0x4e
    u8 fastForwardLock;  // DS +0x4f
    u8 pad_50[0x8];  // DS +0x50 [0x8]
    u32 waitTimer;  // DS +0x58
    s32 textColor;  // DS +0x5c
    u8 hpad_0[0x4];
#else
    /* 0x24 */ TalkWindow *window;
    u8 pad_28[8];
    /* 0x30 */ s32 printStatus;
    u8 pad_34[4];
    /* 0x38 */ MsgTag tag;
    u8 pad_4c[2];
    /* 0x4e */ u8 instant;
    /* 0x4f */ u8 fastForwardLock;
    u8 pad_50[8];
    /* 0x58 */ u32 waitTimer;
    /* 0x5c */ s32 textColor;
#endif
};

class TalkParserTags2 {
public:
    void tagGroupFf();
    void tagAltText();
    void tagColor();
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
    void tagNop();
    void tagGroup0b();
#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in TalkParser)
    u8 pad_00[0x54];  // DS +0x0 [0x3c]
    u32 tagId;  // DS +0x3c
#else
    /* 0x00 */ u8 pad_00[0x3c];
    /* 0x3c */ u32 tagId;
#endif
};



class TalkParserTags : public MsgParser {
public:

    void tagNop0a00();
    void tagSignal09_9();
    void tagSignal09_8();
    void tagSignal09_7();
    void tagSignal09_6();
    void tagSignal09_5();
    void tagSignal09_4();
    void tagSignal09_3();
    void tagSignal09_2();
    void tagSignal09_1();
    void tagSignal09_0();
    void tagNop0802();
    void tagNop0801();
    void tagNop0800();
    void tagBranchSpecies();
    void tagBranchVisitor();
    void tagBranchWeekday();
    void tagBranchResidentCount();
    void tagBranchWeather();
    void tagBranchUnk8();
    void tagBranchVillagerCount();
    void tagBranchFishCount();
    void tagBranchInsectCount();
    void tagBranchHouseUnk();
    void tagBranchPlayerGender();
    void tagBranchFriendship();
    void tagBranchRandom3();
    void tagBranchRandom2();
    void tagChoiceSlots();
    void tagTrend();
    void tagCompliment();
    void tagNop0420();
    void tagNickname();
    void tagImpression();
    void tagNamedSlot3();
    void tagNamedSlot2();
    void tagNamedSlot1();
    void tagNamedSlot0();
    void tagSlot10();
    void tagSlot9();
    void tagSlot8();
    void tagSlot7();
    void tagSlot6();
    void tagSlot5();
    void tagSlot4();
    void tagSlot3();
    void tagSlot2();
    void tagSlot1();
    void tagSlot0();
    void tagOtherResidentName();
    void tagRandomVillagerName();
    void tagEnemyName();
    void tagFriendName();
    void tagNumber1714();
    void tagMinute();
    void tagHour();
    void tagWeekday();
    void tagDay();
    void tagMonth();
    void tagYear();
    void tagTownName();
    void tagCatchphrase();
    void tagSpeakerName();
    void tagPlayerName();
    void tagAction4();
    void tagAction3();
    void tagAction2();
    void tagAction1();
    void tagAction0();
    void tagChoice5B();
    void tagChoice4B();
    void tagChoice3B();
    void tagChoice2B();
    void tagChoice5();
    void tagChoice4();
    void tagChoice3();
    void tagChoice2();
    void tagAutoAdvance();
    void tagSignal4();
    void tagSignal3();
    void tagSignal2();
    void tagSignal1();
    void tagSignal0();
    void tagShakeLarge();
    void tagShakeMedium();
    void tagShakeSmall();
    void tagGreetingEnd();
    void tagGreeting();
    void tagFastLockOff();
    void tagFastLockOn();
    void tagFastOff();
    void tagFastOn();
    void tagPageBreak();
    void tagWait();
    void tagGlyph8();
    void tagGlyph7();
    void tagGlyph6();
    void tagGlyph1();
    void tagGlyph0();
    void tagNop();
    void tagGroup0a();
    void tagGroup09();
    void tagGroup08();
    void tagGroup07();
    void tagGroup06();
    void tagGroup05();
    void tagGroup04();
    void tagGroup03();
    void tagGroup02();
    void tagGroup01();
    void tagGroup00();

#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in TalkParser)
    TalkWindow * window;  // DS +0x24
    u8 unk_28[0x18];  // DS +0x28 [0x10]
    u32 tag;  // DS +0x38
    u32 tagId;  // DS +0x3c
    u8 unk_40[0x10];  // DS +0x40 [0x8]
    u8 * tagRaw;  // DS +0x48
    u8 unk_4c[0xb8];  // DS +0x4c [0x8c]
    u8 choiceDeferred;  // DS +0xd8
    u8 hpad_0[0x7];
#else
    /* 0x24 */ TalkWindow *window;
    /* 0x28 */ u8 unk_28[0x10];
    /* 0x38 */ u32 tag;
    /* 0x3c */ u32 tagId;
    /* 0x40 */ u8 unk_40[0x8];
    /* 0x48 */ u8 *tagRaw;
    /* 0x4c */ u8 unk_4c[0x8c];
    /* 0xd8 */ u8 choiceDeferred;
#endif
};







// ======== unk_0206c714.cpp ========
namespace n18 {

}
namespace n0 {
extern "C" { extern const u8 data_020cba1c[0x6]; const u8 data_020cba1c[0x6] = {26, 5, 1, 1, 0, 0}; }
extern "C" { TalkWindowState *gTalkWindows; }
}
TalkBmgReader::TalkBmgReader() : BmgReader(1) {
    using namespace n18;}
// ---- TalkBmgReader
TalkBmgReader::~TalkBmgReader() {
    using namespace n18;}

// ======== unk_0206be04.cpp ========
namespace n17 {
extern "C" { void func_0206c56c_dummy_unused(); }
extern "C" { MsgTextLabel *MsgTextLabel_CreateVram(u32 a, u32 len, u32 b); }
extern "C" { void MsgTextLabel_Destroy(MsgTextLabel *p); }
extern "C" { MsgString *String_GetArticle(u8 *key); }
extern "C" { void *_ZN10PlayerData11getPlayerIdEv(void *); }
extern "C" { s32 _ZN8PlayerId9getGenderEv(void *); }
typedef void (TalkRenderProcessor::*Unk_020ddc64_Fn)();
extern "C" void MI_CpuFill8(void *dst, u32 value, u32 size);

}
void TalkMsgBuffer::clear() {
    using namespace n17;
    MI_CpuFill8(buffer, 0, 0x800);
}
u8 *TalkMsgBuffer::getBuffer() {
    using namespace n17;
    return buffer;
}
u32 TalkMsgBuffer::getBufferSize() {
    using namespace n17;
    return 0x800;
}
TalkRenderProcessor::TalkRenderProcessor(u8 *owner) : MsgProcessor(1), window(owner), measureLabel(0) {
    using namespace n17;
    altTextEnd = 0;
    selectEnd = 0;
    articleMode = 0;
    measureLabel = MsgTextLabel_CreateVram(0, 0x14, 2);
    if (measureLabel != 0) measureLabel->setProcessor(this);
}
TalkRenderProcessor::~TalkRenderProcessor() {
    using namespace n17;
    if (measureLabel != 0) MsgTextLabel_Destroy(measureLabel);
}
s32 TalkRenderProcessor::measureLine(u32 a, BOOL b) {
    using namespace n17;
    s32 r = 0;
    if (b != 0) {
        if (measureLabel != 0) {
            measureLabel->textStart = a;
            measureLabel->alignCenter();
            r = measureLabel->xOffset;
            measureLabel->textStart = 0;
        }
    }
    return r;
}
void TalkRenderProcessor::onBegin() {
    using namespace n17;
    if (measureLabel != 0) {
        articleMode = 0;
        altTextEnd = 0;
        selectEnd = 0;
        measureLabel->onBegin();
    }
}
void TalkRenderProcessor::onEnd() {
    using namespace n17;
    if (measureLabel != 0) measureLabel->onEnd();
}
void TalkRenderProcessor::onChar(u32 c) {
    using namespace n17;
    if (measureLabel != 0) measureLabel->onChar(c);
    if (cursor == altTextEnd) {
        altTextEnd = 0;
        popText();
    }
    if (cursor == selectEnd) {
        selectEnd = 0;
        popText();
    }
}
void TalkRenderProcessor::onTag(u8 *p) {
    using namespace n17;
    tag.parse(p);
    dispatchTag();
}
void TalkRenderProcessor::pushArticle(MsgString33 *e) {
    using namespace n17;
    u8 *k = (u8 *)&e->attr - 0;
    MsgString *o = 0;
    if (articleMode == 0) {
        o = String_GetArticle(k + 8);
    } else if (articleMode == 1) {
        o = String_GetArticle(k + 9);
    }
    if (o != 0) pushText(o->data());
    articleMode = 0;
}
void TalkRenderProcessor::expandSlot(s32 idx) {
    using namespace n17;
    MsgString33 *e = &((TalkWindowMsg *)window)->slots[idx];
    pushText(e->data());
    pushArticle(e);
}
void TalkRenderProcessor::expandNamedSlot(s32 idx) {
    using namespace n17;
    MsgString33 *e = &((TalkWindowMsg *)window)->namedSlots[idx];
    pushText(e->data());
    pushArticle(e);
}
void TalkRenderProcessor::selectByPlayerGender() {
    using namespace n17;
    char *p0, *p1;
    tag.getStrings2(&p0, &p1);
    if (((PlayerId *)(PlayerData_GetCurrent()->getPlayerId()))->getGender() == 0) {
        if (p0 != 0) pushText((u8 *)p0);
    } else {
        if (p1 != 0) {
            selectEnd = cursor;
            pushText((u8 *)p1);
        }
    }
}
void TalkRenderProcessor::selectBySlotForm(MsgString *a) {
    using namespace n17;
    char *p0, *p1, *p2;
    tag.getStrings3(&p0, &p1, &p2);
    if (a->attr.form == 0) {
        if (p0 != 0) pushText((u8 *)p0);
    } else if (a->attr.form == 1) {
        if (p1 != 0) pushText((u8 *)p1);
    } else if (a->attr.form == 2) {
        if (p2 != 0) {
            selectEnd = cursor;
            pushText((u8 *)p2);
        }
    }
}
void TalkRenderProcessor::dispatchTag() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[12] = { &TalkRenderProcessor::tagGroup00, &TalkRenderProcessor::tagGroup01, &TalkRenderProcessor::tagGroup02, 0, &TalkRenderProcessor::tagGroup04, 0, 0, 0, 0, 0, 0, &TalkRenderProcessor::tagGroup0b };
    s32 i = tag.group;
    Unk_020ddc64_Fn f = 0;
    if (i == 0xff) f = &TalkRenderProcessor::tagGroupFf;
    else if (i < 12) f = tbl[i];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGroup00() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[11] = { &TalkRenderProcessor::tagGlyph0, &TalkRenderProcessor::tagGlyph1, 0, 0, 0, 0, &TalkRenderProcessor::tagGlyph6, &TalkRenderProcessor::tagGlyph7, &TalkRenderProcessor::tagGlyph8, 0, 0 };
    Unk_020ddc64_Fn f = tbl[tag.id];
    (this->*f)();
}
void TalkRenderProcessor::tagGroup01() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[17] = { 0, 0, 0, 0, 0, 0, &TalkRenderProcessor::tagGreeting, &TalkRenderProcessor::tagGreetingEnd, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    Unk_020ddc64_Fn f = tbl[tag.id];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGroup02() {
    using namespace n17;
    skip(tag.getTrailingStringsSize());
}
void TalkRenderProcessor::tagGroup04() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[35] = { &TalkRenderProcessor::tagPlayerName, &TalkRenderProcessor::tagSpeakerName, &TalkRenderProcessor::tagCatchphrase, &TalkRenderProcessor::tagTownName, &TalkRenderProcessor::tagYear, &TalkRenderProcessor::tagMonth, &TalkRenderProcessor::tagDay, &TalkRenderProcessor::tagWeekday, &TalkRenderProcessor::tagHour, &TalkRenderProcessor::tagMinute, &TalkRenderProcessor::tagNumber1714, &TalkRenderProcessor::tagFriendName, &TalkRenderProcessor::tagEnemyName, &TalkRenderProcessor::tagRandomVillagerName, &TalkRenderProcessor::tagOtherResidentName, &TalkRenderProcessor::tagSlot0, &TalkRenderProcessor::tagSlot1, &TalkRenderProcessor::tagSlot2, &TalkRenderProcessor::tagSlot3, &TalkRenderProcessor::tagSlot4, &TalkRenderProcessor::tagSlot5, &TalkRenderProcessor::tagSlot6, &TalkRenderProcessor::tagSlot7, &TalkRenderProcessor::tagSlot8, &TalkRenderProcessor::tagSlot9, &TalkRenderProcessor::tagSlot10, &TalkRenderProcessor::tagNamedSlot0, &TalkRenderProcessor::tagNamedSlot1, &TalkRenderProcessor::tagNamedSlot2, &TalkRenderProcessor::tagNamedSlot3, &TalkRenderProcessor::tagImpression, &TalkRenderProcessor::tagNickname, 0, &TalkRenderProcessor::tagCompliment, &TalkRenderProcessor::tagTrend };
    Unk_020ddc64_Fn f = tbl[tag.id];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGroup0b() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[20] = { 0, &TalkRenderProcessor::tagArticleMode1, &TalkRenderProcessor::tagArticleMode2, 0, &TalkRenderProcessor::tagSelectByPlayerGender, &TalkRenderProcessor::tagSlotForm0, &TalkRenderProcessor::tagSlotForm1, &TalkRenderProcessor::tagSlotForm2, &TalkRenderProcessor::tagSlotForm3, &TalkRenderProcessor::tagSlotForm4, &TalkRenderProcessor::tagSlotForm5, &TalkRenderProcessor::tagSlotForm6, &TalkRenderProcessor::tagSlotForm7, &TalkRenderProcessor::tagSlotForm8, &TalkRenderProcessor::tagSlotForm9, &TalkRenderProcessor::tagSlotForm10, &TalkRenderProcessor::tagNamedSlotForm0, &TalkRenderProcessor::tagNamedSlotForm1, &TalkRenderProcessor::tagNamedSlotForm2, &TalkRenderProcessor::tagNamedSlotForm3 };
    Unk_020ddc64_Fn f = tbl[tag.id];
    if (f != 0) (this->*f)();
}

// ======== unk_0206b4e4.cpp ========
#define msgWindow ((TalkWindowMsg *)window)
namespace n16 {
extern "C" { void MI_CpuFill8(void *, s32, u32); }
extern "C" { u8 *Text_GetSpecialCharStr5(void); }
extern "C" { u8 *Text_GetSpecialCharStr7(void); }
extern "C" { u8 *Text_GetSpecialCharStr6(void); }
extern "C" { u8 *Text_GetSpecialCharStr4(void); }
extern "C" { u8 *Text_GetSpecialCharStr1(void); }
extern "C" { u32 Msg_FindTag(u32 a, s32 b, s32 c); }
extern "C" { BOOL Talk_IsAltTextEnabled(void); }
extern "C" TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
extern "C" void MsgTextLabel_Destroy(TextLabel *obj);
extern "C" { MsgString *_ZN15TalkWindowState17getNumber1714TextEv(void *); }
extern "C" { MsgString *_ZN15TalkWindowState13getMinuteTextEv(void *); }
extern "C" { MsgString *_ZN15TalkWindowState11getHourTextEv(void *); }
extern "C" { MsgString *_ZN15TalkWindowState14getWeekdayTextEv(void *); }
extern "C" { MsgString *_ZN15TalkWindowState10getDayTextEv(void *); }
extern "C" { MsgString *_ZN15TalkWindowState12getMonthTextEv(void *); }
extern "C" { MsgString *_ZN15TalkWindowState11getYearTextEv(void *); }
typedef void (TalkRenderProcessor::*Unk_0206bd88_Fn)();

}
void TalkRenderProcessor::tagGroupFf() {
    using namespace n16;
    static Unk_0206bd88_Fn tbl[3] = { 0, 0, &TalkRenderProcessor::tagAltText };
    Unk_0206bd88_Fn f = tbl[tag.id];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGlyph0() {
    using namespace n16; pushText(Text_GetSpecialCharStr6()); }
void TalkRenderProcessor::tagGlyph1() {
    using namespace n16; pushText(Text_GetSpecialCharStr7()); }
void TalkRenderProcessor::tagGlyph6() {
    using namespace n16; pushText(Text_GetSpecialCharStr5()); }
void TalkRenderProcessor::tagGlyph7() {
    using namespace n16; pushText(Text_GetSpecialCharStr4()); }
void TalkRenderProcessor::tagGlyph8() {
    using namespace n16; pushText(Text_GetSpecialCharStr1()); }
void TalkRenderProcessor::tagGreeting() {
    using namespace n16;
    u32 base = (u32)cursor;
    u32 r = Msg_FindTag(base, 1, 7);
    if (r) {
        if (msgWindow->buildGreeting()) {
            skip(r - base);
            pushText(((MsgString *)msgWindow->greeting)->data());
        }
    }
}
void TalkRenderProcessor::tagGreetingEnd() {
    using namespace n16;}
void TalkRenderProcessor::tagPlayerName() {
    using namespace n16;
    msgWindow->buildPlayerName();
    pushText(((MsgString *)msgWindow->playerName)->data());
}
void TalkRenderProcessor::tagSpeakerName() {
    using namespace n16;
    pushText(msgWindow->request->getSpeakerName()->data());
}
void TalkRenderProcessor::tagCatchphrase() {
    using namespace n16;
    msgWindow->buildCatchphrase();
    pushText(((MsgString *)msgWindow->catchphrase)->data());
}
void TalkRenderProcessor::tagTownName() {
    using namespace n16;
    msgWindow->buildTownName();
    pushText(((MsgString *)msgWindow->townName)->data());
}
void TalkRenderProcessor::tagYear() {
    using namespace n16;
    pushText(_ZN15TalkWindowState11getYearTextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagMonth() {
    using namespace n16;
    pushText(_ZN15TalkWindowState12getMonthTextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagDay() {
    using namespace n16;
    pushText(_ZN15TalkWindowState10getDayTextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagWeekday() {
    using namespace n16;
    pushText(_ZN15TalkWindowState14getWeekdayTextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagHour() {
    using namespace n16;
    pushText(_ZN15TalkWindowState11getHourTextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagMinute() {
    using namespace n16;
    pushText(_ZN15TalkWindowState13getMinuteTextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagNumber1714() {
    using namespace n16;
    pushText(_ZN15TalkWindowState17getNumber1714TextEv(msgWindow)->data());
}
void TalkRenderProcessor::tagFriendName() {
    using namespace n16;
    msgWindow->buildFriendName();
    pushText(((MsgString *)msgWindow->friendName)->data());
}
void TalkRenderProcessor::tagEnemyName() {
    using namespace n16;
    msgWindow->buildEnemyName();
    pushText(((MsgString *)msgWindow->enemyName)->data());
}
void TalkRenderProcessor::tagRandomVillagerName() {
    using namespace n16;
    msgWindow->buildRandomVillagerName();
    pushText(((MsgString *)msgWindow->randomVillagerName)->data());
}
void TalkRenderProcessor::tagOtherResidentName() {
    using namespace n16;
    msgWindow->buildOtherResidentName();
    pushText(((MsgString *)msgWindow->otherResidentName)->data());
}
void TalkRenderProcessor::tagSlot0() {
    using namespace n16; expandSlot(0); }
void TalkRenderProcessor::tagSlot1() {
    using namespace n16; expandSlot(1); }
void TalkRenderProcessor::tagSlot2() {
    using namespace n16; expandSlot(2); }
void TalkRenderProcessor::tagSlot3() {
    using namespace n16; expandSlot(3); }
void TalkRenderProcessor::tagSlot4() {
    using namespace n16; expandSlot(4); }
void TalkRenderProcessor::tagSlot5() {
    using namespace n16; expandSlot(5); }
void TalkRenderProcessor::tagSlot6() {
    using namespace n16; expandSlot(6); }
void TalkRenderProcessor::tagSlot7() {
    using namespace n16; expandSlot(7); }
void TalkRenderProcessor::tagSlot8() {
    using namespace n16; expandSlot(8); }
void TalkRenderProcessor::tagSlot9() {
    using namespace n16; expandSlot(9); }
void TalkRenderProcessor::tagSlot10() {
    using namespace n16; expandSlot(10); }
void TalkRenderProcessor::tagNamedSlot0() {
    using namespace n16; expandNamedSlot(0); }
void TalkRenderProcessor::tagNamedSlot1() {
    using namespace n16; expandNamedSlot(1); }
void TalkRenderProcessor::tagNamedSlot2() {
    using namespace n16; expandNamedSlot(2); }
void TalkRenderProcessor::tagNamedSlot3() {
    using namespace n16; expandNamedSlot(3); }
void TalkRenderProcessor::tagImpression() {
    using namespace n16;
    msgWindow->buildImpression();
    pushText(((MsgString *)msgWindow->impression)->data());
}
void TalkRenderProcessor::tagNickname() {
    using namespace n16;
    msgWindow->buildNickname();
    pushText(((MsgString *)msgWindow->nickname)->data());
}
void TalkRenderProcessor::tagCompliment() {
    using namespace n16;
    msgWindow->buildCompliment();
    pushText(((MsgString *)msgWindow->compliment)->data());
}
void TalkRenderProcessor::tagTrend() {
    using namespace n16;
    msgWindow->buildTrend();
    pushText(((MsgString *)msgWindow->trend)->data());
}
void TalkRenderProcessor::tagArticleMode1() {
    using namespace n16; articleMode = 1; }
void TalkRenderProcessor::tagArticleMode2() {
    using namespace n16; articleMode = 2; }
void TalkRenderProcessor::tagSelectByPlayerGender() {
    using namespace n16; selectByPlayerGender(); }
void TalkRenderProcessor::tagSlotForm0() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (0))); }
void TalkRenderProcessor::tagSlotForm1() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (1))); }
void TalkRenderProcessor::tagSlotForm2() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (2))); }
void TalkRenderProcessor::tagSlotForm3() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (3))); }
void TalkRenderProcessor::tagSlotForm4() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (4))); }
void TalkRenderProcessor::tagSlotForm5() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (5))); }
void TalkRenderProcessor::tagSlotForm6() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (6))); }
void TalkRenderProcessor::tagSlotForm7() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (7))); }
void TalkRenderProcessor::tagSlotForm8() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (8))); }
void TalkRenderProcessor::tagSlotForm9() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (9))); }
void TalkRenderProcessor::tagSlotForm10() {
    using namespace n16; MsgString33 *p = msgWindow->slots; selectBySlotForm((MsgString *)(p + (10))); }
void TalkRenderProcessor::tagNamedSlotForm0() {
    using namespace n16; MsgString33 *p = msgWindow->namedSlots; selectBySlotForm((MsgString *)(p + (0))); }
void TalkRenderProcessor::tagNamedSlotForm1() {
    using namespace n16; MsgString33 *p = msgWindow->namedSlots; selectBySlotForm((MsgString *)(p + (1))); }
void TalkRenderProcessor::tagNamedSlotForm2() {
    using namespace n16; MsgString33 *p = msgWindow->namedSlots; selectBySlotForm((MsgString *)(p + (2))); }
void TalkRenderProcessor::tagNamedSlotForm3() {
    using namespace n16; MsgString33 *p = msgWindow->namedSlots; selectBySlotForm((MsgString *)(p + (3))); }
// ---- TalkRenderProcessor state handlers
void TalkRenderProcessor::tagAltText() {
    using namespace n16;
    u32 x;
    char *y;
    char *z;
    tag.getAltTextArgs(&x, &y, &z);
    if (!Talk_IsAltTextEnabled()) {
        skip(x * 2);
        pushText((u8 *)z);
        altTextEnd = (u8 *)y;
    }
}
TalkTextBox::TalkTextBox(TalkWindow *o) : length(0), numLines(0), centered(0), renderer((u8 *)o) {
    using namespace n16;
    clear();
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        labels[i] = 0;
    }
}
TalkTextBox::~TalkTextBox() {
    using namespace n16;
    destroyLabels();
}
void TalkTextBox::clear() {
    using namespace n16; clearWithColor(0); }
void TalkTextBox::clearWithColor(u32 v) {
    using namespace n16;
    s32 i;
    length = 0;
    MI_CpuFill8(this, 0, 0x400);
    for (i = 0; (u32)i < 3; i++) {
        lineStarts[i] = 0;
        lineDirty[i] = 0;
        lineOffsets[i] = 0;
    }
    numLines = 0;
    setAllLineColors(v);
}
void TalkTextBox::setAllLineColors(u32 v) {
    using namespace n16;
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        lineColors[i] = v;
    }
}
BOOL TalkTextBox::appendBytes(s8 *src, u32 n) {
    using namespace n16;
    u32 pos = length;
    BOOL ok;
    if (0x400 - pos > n) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        u32 i;
        for (i = 0; i < n; i++) {
            (&text[length])[i] = src[i];
        }
        length += n;
        markLineDirty();
    }
    return ok;
}
BOOL TalkTextBox::appendChar(s32 c0) {
    using namespace n16;
    s8 c = (s8)c0;
    u32 pos = length;
    BOOL ok;
    if (0x400 - pos > 1) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        length++;
        text[pos] = c;
        markLineDirty();
    }
    return ok;
}
void TalkTextBox::appendTag(void *m) {
    using namespace n16;
    MsgTag *q = (MsgTag *)m;
    appendBytes((s8 *)q->raw, q->argLen + 5);
}
void TalkTextBox::beginLine(u32 v) {
    using namespace n16;
    if (numLines < 3) {
        lineOffsets[numLines] = renderer.measureLine(v, centered);
        u32 n = numLines;
        numLines = n + 1;
        lineStarts[n] = &text[length];
    }
}
void TalkTextBox::setRemainingLineColors(u32 v) {
    using namespace n16;
    u32 i;
    for (i = numLines; i < 3; i++) {
        lineColors[i] = v;
    }
}
void TalkTextBox::setCentered(u8 v) {
    using namespace n16; centered = v; }
void TalkTextBox::createLabels() {
    using namespace n16;
    u32 i, a;
    for (i = 0, a = 0x11; i < 3; i++, a += 0x28) {
        TextLabel *p = MsgTextLabel_CreateVram(a, 0x14, 2);
        if (p) {
            labels[i] = p;
            p->copyMode = 2;
            p->bgColor = 0xe;
            p->requestClear(0);
        }
    }
}
void TalkTextBox::destroyLabels() {
    using namespace n16;
    u32 i;
    for (i = 0; i < 3; i++) {
        if (labels[i]) {
            MsgTextLabel_Destroy(labels[i]);
            labels[i] = 0;
        }
    }
}
// ---- TalkTextBox
void TalkTextBox::clearLabels() {
    using namespace n16;
    volatile s32 z = 0;
    u32 i;
    for (i = 0; i < 3; i++) {
        TextLabel *p = labels[i];
        if (p) {
            p->requestClear(z);
            p->textStart = 0;
        }
    }
}
#undef msgWindow

// ======== unk_0206ab74.cpp ========
#define lineStartWords ((s32 *)lineStarts)
#define unk_16f9 voice.instantByTag
#define unk_16fa voice.inWait
#define unk_1704 voice.textColor
namespace n15 {
extern "C" { extern u8 data_0213a740[]; }
extern "C" { u8 Talk_ColorTagToTextColor(u32 x); }
extern "C" { u32 Text_ToUpper(u32 key); }
extern "C" { void _ZN15TalkWindowState10resetVoiceEv(void *p); }
extern "C" { void _ZN15TalkWindowState13onCharPrintedEi(void *p, u32 c); }
extern "C" { void _ZN15TalkWindowState14setNextMessageEPhPv(void *self, u8 *p, s32 z); }
extern "C" { void _ZN15TalkWindowState17setAdvancePendingEv(void *self); }
extern "C" { u8 *Msg_GetColorTag(s32 i); }
extern "C" { u8 *String_GetArticle(u8 *p); }
extern "C" { s32 _ZN10PlayerData11getPlayerIdEv(void *p); }
extern "C" { s32 _ZN8PlayerId9getGenderEv(s32 p); }

}
void TalkTextBox::redrawLines() {
    using namespace n15;
    u32 i;
    for (i = 0; i < numLines; i++) {
        TextLabel *e = labels[i];
        if (e != 0 && lineDirty[i] != 0) {
            e->textStart = (u32)(uptr)lineStarts[i];  // (the pointers, not their words: 8 bytes on 64-bit hosts)
            e->textEnd = 0;
            e->xOffset = lineOffsets[i];
            e->fgColor = Talk_ColorTagToTextColor(lineColors[i]);
            e->requestRedraw();
        }
    }
    if (numLines < 3) {
        TextLabel *e = labels[numLines];
        if (e != 0) e->textEnd = (u32)this + length;
    }
}
void TalkTextBox::endText() {
    using namespace n15;}
// ---------------------------------------------------------------------------
void TalkTextBox::markLineDirty() {
    using namespace n15;
    s32 i = numLines;
    if (i != 0 && (u32)i <= 3) lineDirty[i - 1] = 1;
}
TalkCharStepper::TalkCharStepper(TalkWindow *owner, TalkTextBox *buf)
    : window(owner), textBox(buf), mode(0), endPos(0), remaining(0) {
    using namespace n15;
    stepAllowed = 0;
    printChars = 0;
}
TalkCharStepper::~TalkCharStepper() {
    using namespace n15;}
void TalkCharStepper::startCount(u8 *p, s32 n, u8 flag) {
    using namespace n15;
    if (n > 0) {
        reset();
        begin(p);
        endPos = 0;
        remaining = n;
        printChars = flag;
        stepAllowed = 0;
        mode = 1;
    }
}
void TalkCharStepper::startUntil(u8 *p, u32 v, u8 flag) {
    using namespace n15;
    if (v > (u32)p) {
        reset();
        begin(p);
        endPos = v;
        remaining = 0;
        printChars = flag;
        stepAllowed = 0;
        mode = 2;
    }
}
void TalkCharStepper::stepOnce() {
    using namespace n15;
    s32 s = mode;
    if (s == 1) {
        stepAllowed = 1;
        run(FALSE);
    } else if (s == 2) {
        stepAllowed = 1;
        run((BOOL)endPos);
    }
}
BOOL TalkCharStepper::isIdle() {
    using namespace n15;
    if (mode == 0) return TRUE;
    return FALSE;
}
void TalkCharStepper::onBegin() {
    using namespace n15;}
void TalkCharStepper::onEnd() {
    using namespace n15;
    if (mode == 2) stop();
}
void TalkCharStepper::onChar(u32 c) {
    using namespace n15;
    if (printChars != 0) textBox->appendChar(c);
    stepAllowed = 0;
    if (mode == 1) {
        remaining = remaining - 1;
        if (remaining <= 0) stop();
    } else if (mode == 2) {
        ((TalkWindowState *)(window))->onCharPrinted(c);
    }
}
void TalkCharStepper::onTag(u8 *) {
    using namespace n15;}
BOOL TalkCharStepper::canContinue() {
    using namespace n15;
    return stepAllowed;
}
// ---------------------------------------------------------------------------
void TalkCharStepper::stop() {
    using namespace n15;
    mode = 0;
    endPos = 0;
    remaining = 0;
    stepAllowed = 0;
    printChars = 0;
    reset();
}
TalkParser::TalkParser(TalkWindow *owner, TalkTextBox *buf)
    : window(owner), textBox(buf), lineCount(0), printStatus(0), printMode(0), altTextStepper(owner, buf), mainTextStepper(owner, buf) {
    using namespace n15;
    choiceDeferred = 0;
    capitalizeNext = 0;
    selectEnd = 0;
    articleMode = 0;
}
TalkParser::~TalkParser() {
    using namespace n15;}
void TalkParser::stop() {
    using namespace n15;
    lineCount = 0;
    textBox->endText();
    textBox->clearWithColor(printVars.textColor);
    textBox->beginLine((u32)cursor);
    capitalizeNext = 0;
    articleMode = 0;
}
void TalkParser::setPrintMode(s32 v) {
    using namespace n15;
    printMode = v;
}
void TalkParser::setFastForward() {
    using namespace n15;
    if (printVars.fastForwardLock == 0) printVars.fastForward = 1;
}
void TalkParser::clearFastForward() {
    using namespace n15;
    printVars.fastForward = 0;
}
void TalkParser::resetColor() {
    using namespace n15;
    printVars.textColor = 0;
    window->unk_1704 = 0;
}
void TalkParser::onBegin() {
    using namespace n15;
    printStatus = 1;
    lineCount = 0;
    printVars.fastForward = 0;
    printVars.holdStep = 0;
    printVars.instant = 0;
    printVars.fastForwardLock = 0;
    printVars.charCount = 0;
    printVars.stepPhase = 0;
    printVars.waitTimer = 0;
    textBox->clear();
    textBox->beginLine((u32)cursor);
    ((TalkWindowState *)(window))->resetVoice();
    capitalizeNext = 0;
    selectEnd = 0;
    articleMode = 0;
    window->unk_16f9 = 0;
    window->unk_16fa = 0;
}
void TalkParser::onEnd() {
    using namespace n15;
    printStatus = 3;
    textBox->endText();
}
void TalkParser::onChar(u32 c) {
    using namespace n15;
    if (capitalizeNext != 0) {
        c = Text_ToUpper(c);
        capitalizeNext = 0;
    }
    BOOL nl = (c == 10) ? TRUE : FALSE;
    BOOL sp = (c == 0x20) ? TRUE : FALSE;
    textBox->appendChar(c);
    if (nl) {
        textBox->beginLine((u32)cursor);
        lineCount++;
        if (lineCount >= 3) printStatus = 2;
    }
    ((TalkWindowState *)(window))->onCharPrinted(c);
    window->unk_16fa = 0;
    if (!sp && !nl) printVars.charCount++;
    if (cursor == selectEnd) {
        selectEnd = 0;
        popText();
    }
}
void TalkParser::onTag(u8 *p) {
    using namespace n15;
    tag.parse(p);
    dispatchTag();
}
BOOL TalkParser::canContinue() {
    using namespace n15;
    BOOL r = TRUE;
    s32 s = printStatus;
    if (s == 2 || s == 5) {
        r = FALSE;
        printVars.charCount = r;
        printVars.stepPhase = r;
        printVars.waitTimer = r;
    } else if (s == 4) {
        r = FALSE;
        printVars.charCount = r;
        printVars.stepPhase = r;
    } else if (s == 1) {
        if (!stepSpeed()) r = FALSE;
    }
    return r;
}
void TalkParser::debugPrintMissing() {
    using namespace n15;}
BOOL TalkParser::steppersIdle() {
    using namespace n15;
    if (altTextStepper.isIdle() && mainTextStepper.isIdle()) return TRUE;
    return FALSE;
}
void TalkParser::stepSteppers() {
    using namespace n15;
    altTextStepper.stepOnce();
    mainTextStepper.stepOnce();
}
BOOL TalkParser::stepSpeed() {
    using namespace n15;
    BOOL r = TRUE;
    BOOL f = r;
    if (printMode != 1 && printVars.instant == 0) f = FALSE;
    if (printVars.holdStep != 0) {
        r = FALSE;
        printVars.holdStep = 0;
        goto end;
    }
    if (f) {
        printVars.charCount = 0;
        printVars.stepPhase = 0;
        printVars.waitTimer = 0;
        while (!steppersIdle()) {
            stepSteppers();
        }
        goto end;
    }
    BOOL t;
    if (printMode != 2 && printVars.fastForwardLock == 0 && printVars.fastForward != 0) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) printVars.waitTimer = 0;
    s32 v;
    v = printVars.waitTimer;
    if (v > 0) {
        printVars.waitTimer = v - 0x1800;
        r = FALSE;
        goto end;
    }
    s32 n;
    if (printVars.stepPhase == 0) n = 1;
    else n = 2;
    if (t) n = 3;
    if (printVars.charCount >= n) {
        printVars.charCount = 0;
        printVars.stepPhase = printVars.stepPhase + 1;
        if (printVars.stepPhase >= 2) printVars.stepPhase = 0;
        r = FALSE;
        goto end;
    }
    while (!steppersIdle()) {
        stepSteppers();
        printVars.charCount = printVars.charCount + 1;
        if (printVars.charCount >= n) {
            printVars.charCount = 0;
            printVars.stepPhase = printVars.stepPhase + 1;
            if (printVars.stepPhase >= 2) printVars.stepPhase = 0;
            r = FALSE;
            goto end;
        }
    }
end:
    return r;
}
void TalkParser::expandArticle(MsgString *ent, BOOL flag) {
    using namespace n15;
    u8 *q = (u8 *)&ent->attr;
    u8 *r = 0;
    if (articleMode == 0) {
        r = String_GetArticle(q + 8);
    } else if (articleMode == 1) {
        r = String_GetArticle(q + 9);
    }
    if (r != 0) {
        if (flag) {
            pushText(Msg_GetColorTag(printVars.textColor));
            pushText(((MsgString *)r)->data());
            pushText(Msg_GetColorTag(0));
        } else {
            pushText(((MsgString *)r)->data());
        }
    }
    articleMode = 0;
}
void TalkParser::expandSlot(s32 idx) {
    using namespace n15;
    MsgString *ent = &window->slots[idx];
    pushText(ent->data());
    expandArticle(ent, 1);
}
void TalkParser::expandNamedSlot(s32 idx) {
    using namespace n15;
    MsgString *ent = &window->namedSlots[idx];
    u8 *s = window->namedSlotColors[idx];
    pushText(Msg_GetColorTag(printVars.textColor));
    pushText(ent->data());
    pushText(Msg_GetColorTag((s32)s));
    expandArticle(ent, 0);
}
void TalkParser::selectByPlayerGender() {
    using namespace n15;
    char *a, *b;
    tag.getStrings2(&a, &b);
    if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0) {
        if (a != 0) pushText((u8 *)a);
    } else {
        if (b != 0) {
            selectEnd = cursor;
            pushText((u8 *)b);
        }
    }
}
void TalkParser::selectBySlotForm(u8 *p) {
    using namespace n15;
    char *a, *b, *c;
    tag.getStrings3(&a, &b, &c);
    s32 k = ((s32 *)p)[3];
    if (k == 0) {
        if (a != 0) pushText((u8 *)a);
    } else if (k == 1) {
        if (b != 0) pushText((u8 *)b);
    } else if (k == 2) {
        if (c != 0) {
            selectEnd = cursor;
            pushText((u8 *)c);
        }
    }
}
void TalkParser::jumpToMessage(u8 *p) {
    using namespace n15;
    ((TalkWindowState *)(window))->setNextMessage(p, (void *)(0));
    ((TalkWindowState *)(window))->setAdvancePending();
}
// ---------------------------------------------------------------------------
void TalkParser::dispatchTag() {
    using namespace n15;
    typedef void (TalkParser::*Fn)();
    static Fn tbl[12] = {
        &TalkParser::tagGroup00, &TalkParser::tagGroup01, &TalkParser::tagGroup02,
        &TalkParser::tagGroup03, &TalkParser::tagGroup04, &TalkParser::tagGroup05,
        &TalkParser::tagGroup06, &TalkParser::tagGroup07, &TalkParser::tagGroup08,
        &TalkParser::tagGroup09, &TalkParser::tagGroup0a, &TalkParser::tagGroup0b,
    };
    s32 id = tag.group;
    Fn fn = 0;
    if (id == 0xff) {
        fn = &TalkParser::tagGroupFf;
    } else if (id < 12) {
        fn = tbl[id];
    }
    (this->*fn)();
}
#undef lineStartWords
#undef unk_16f9
#undef unk_16fa
#undef unk_1704

// ======== unk_0206a198.cpp ========
namespace n14 {
extern "C" { void MsgTag_DtorStub(void *p); }
extern "C" { extern u8 data_020cba1c[]; }

}
void TalkParserTags::tagGroup00()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[11])() = {
        &TalkParserTags::tagGlyph0,
        &TalkParserTags::tagGlyph1,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagGlyph6,
        &TalkParserTags::tagGlyph7,
        &TalkParserTags::tagGlyph8,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup01()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[17])() = {
        &TalkParserTags::tagWait,
        &TalkParserTags::tagPageBreak,
        &TalkParserTags::tagFastOn,
        &TalkParserTags::tagFastOff,
        &TalkParserTags::tagFastLockOn,
        &TalkParserTags::tagFastLockOff,
        &TalkParserTags::tagGreeting,
        &TalkParserTags::tagGreetingEnd,
        &TalkParserTags::tagShakeSmall,
        &TalkParserTags::tagShakeMedium,
        &TalkParserTags::tagShakeLarge,
        &TalkParserTags::tagSignal0,
        &TalkParserTags::tagSignal1,
        &TalkParserTags::tagSignal2,
        &TalkParserTags::tagSignal3,
        &TalkParserTags::tagSignal4,
        &TalkParserTags::tagAutoAdvance,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup02()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[8])() = {
        &TalkParserTags::tagChoice2,
        &TalkParserTags::tagChoice3,
        &TalkParserTags::tagChoice4,
        &TalkParserTags::tagChoice5,
        &TalkParserTags::tagChoice2B,
        &TalkParserTags::tagChoice3B,
        &TalkParserTags::tagChoice4B,
        &TalkParserTags::tagChoice5B,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    if (choiceDeferred) {
        choiceDeferred = 0;
        (this->*f)();
    } else {
        unreadTag(tagRaw);
        choiceDeferred = 1;
        pushText(data_020cba1c);
    }
}
void TalkParserTags::tagGroup03()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[5])() = {
        &TalkParserTags::tagAction0,
        &TalkParserTags::tagAction1,
        &TalkParserTags::tagAction2,
        &TalkParserTags::tagAction3,
        &TalkParserTags::tagAction4,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup04()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[35])() = {
        &TalkParserTags::tagPlayerName,
        &TalkParserTags::tagSpeakerName,
        &TalkParserTags::tagCatchphrase,
        &TalkParserTags::tagTownName,
        &TalkParserTags::tagYear,
        &TalkParserTags::tagMonth,
        &TalkParserTags::tagDay,
        &TalkParserTags::tagWeekday,
        &TalkParserTags::tagHour,
        &TalkParserTags::tagMinute,
        &TalkParserTags::tagNumber1714,
        &TalkParserTags::tagFriendName,
        &TalkParserTags::tagEnemyName,
        &TalkParserTags::tagRandomVillagerName,
        &TalkParserTags::tagOtherResidentName,
        &TalkParserTags::tagSlot0,
        &TalkParserTags::tagSlot1,
        &TalkParserTags::tagSlot2,
        &TalkParserTags::tagSlot3,
        &TalkParserTags::tagSlot4,
        &TalkParserTags::tagSlot5,
        &TalkParserTags::tagSlot6,
        &TalkParserTags::tagSlot7,
        &TalkParserTags::tagSlot8,
        &TalkParserTags::tagSlot9,
        &TalkParserTags::tagSlot10,
        &TalkParserTags::tagNamedSlot0,
        &TalkParserTags::tagNamedSlot1,
        &TalkParserTags::tagNamedSlot2,
        &TalkParserTags::tagNamedSlot3,
        &TalkParserTags::tagImpression,
        &TalkParserTags::tagNickname,
        &TalkParserTags::tagNop0420,
        &TalkParserTags::tagCompliment,
        &TalkParserTags::tagTrend,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup05()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[8])() = {
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagChoiceSlots,
        &TalkParserTags::tagNop,
        &TalkParserTags::tagNop,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup06()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[14])() = {
        &TalkParserTags::tagBranchRandom2,
        &TalkParserTags::tagBranchRandom3,
        &TalkParserTags::tagBranchFriendship,
        &TalkParserTags::tagBranchPlayerGender,
        &TalkParserTags::tagBranchHouseUnk,
        &TalkParserTags::tagBranchInsectCount,
        &TalkParserTags::tagBranchFishCount,
        &TalkParserTags::tagBranchVillagerCount,
        &TalkParserTags::tagBranchUnk8,
        &TalkParserTags::tagBranchWeather,
        &TalkParserTags::tagBranchResidentCount,
        &TalkParserTags::tagBranchWeekday,
        &TalkParserTags::tagBranchVisitor,
        &TalkParserTags::tagBranchSpecies,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup07()
{
    using namespace n14;
    u32 v = tagId;
    TalkMsgRequest *p = window->request;
    MsgTag_DtorStub(&tag);
    p->onEventTag(v);
}
void TalkParserTags::tagGroup08()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[3])() = {
        &TalkParserTags::tagNop0800,
        &TalkParserTags::tagNop0801,
        &TalkParserTags::tagNop0802,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup09()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[10])() = {
        &TalkParserTags::tagSignal09_0,
        &TalkParserTags::tagSignal09_1,
        &TalkParserTags::tagSignal09_2,
        &TalkParserTags::tagSignal09_3,
        &TalkParserTags::tagSignal09_4,
        &TalkParserTags::tagSignal09_5,
        &TalkParserTags::tagSignal09_6,
        &TalkParserTags::tagSignal09_7,
        &TalkParserTags::tagSignal09_8,
        &TalkParserTags::tagSignal09_9,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}
void TalkParserTags::tagGroup0a()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[1])() = {
        &TalkParserTags::tagNop0a00,
    };
    void (TalkParserTags::*f)() = tbl[tagId];
    (this->*f)();
}

// ======== unk_02069834.cpp ========
namespace n13 {
extern "C" { u8 *Msg_GetColorTag(s32 i); }
extern "C" { ChoiceList *_ZN15TalkWindowState13getChoiceListEv(void *p); }
extern "C" { void _ZN13TalkWindowMsg15buildPlayerNameEv(void *p); }
extern "C" { void _ZN15TalkAutoAdvance5startEi(void *p, u32 v); }
extern "C" { s32 _ZN13TalkWindowMsg13buildGreetingEv(void *p); }
extern "C" { u8 *Msg_FindTag(u8 *p, s32 a, s32 b); }
extern "C" { void _ZN15TalkWindowState10startShakeEiiii(void *p, s32 a, s32 b, s32 c, s32 d); }
extern "C" { u8 *Text_GetSpecialCharStr1(); }
extern "C" { u8 *Text_GetSpecialCharStr4(); }
extern "C" { u8 *Text_GetSpecialCharStr5(); }
extern "C" { u8 *Text_GetSpecialCharStr7(); }
extern "C" { u8 *Text_GetSpecialCharStr6(); }
extern "C" { void Snd_PlaySe(s32 a); }
extern "C" { void MsgTag_DtorStub(MsgTag *p); }
typedef void (TalkParserTags2::*Unk_02069fa4_Fn)();

}
void TalkParserTags2::tagGroup0b() {
    using namespace n13;
    static Unk_02069fa4_Fn tbl[20] = {
        &TalkParserTags2::tagNop,
        &TalkParserTags2::tagArticleMode1,
        &TalkParserTags2::tagArticleMode2,
        &TalkParserTags2::tagCapitalizeNext,
        &TalkParserTags2::tagSelectByPlayerGender,
        &TalkParserTags2::tagSlotForm0,
        &TalkParserTags2::tagSlotForm1,
        &TalkParserTags2::tagSlotForm2,
        &TalkParserTags2::tagSlotForm3,
        &TalkParserTags2::tagSlotForm4,
        &TalkParserTags2::tagSlotForm5,
        &TalkParserTags2::tagSlotForm6,
        &TalkParserTags2::tagSlotForm7,
        &TalkParserTags2::tagSlotForm8,
        &TalkParserTags2::tagSlotForm9,
        &TalkParserTags2::tagSlotForm10,
        &TalkParserTags2::tagNamedSlotForm0,
        &TalkParserTags2::tagNamedSlotForm1,
        &TalkParserTags2::tagNamedSlotForm2,
        &TalkParserTags2::tagNamedSlotForm3};
    Unk_02069fa4_Fn f = tbl[tagId];
    (this->*f)();
}
void TalkParserTags2::tagGroupFf() {
    using namespace n13;
    static Unk_02069fa4_Fn tbl[3] = {&TalkParserTags2::tagColor, 0, &TalkParserTags2::tagAltText};
    Unk_02069fa4_Fn f = tbl[tagId];
    (this->*f)();
}
void TalkParserVarTags::tagNop() {
    using namespace n13;}
void TalkParserVarTags::tagGlyph0() {
    using namespace n13; pushText(Text_GetSpecialCharStr6()); }
void TalkParserVarTags::tagGlyph1() {
    using namespace n13; pushText(Text_GetSpecialCharStr7()); }
void TalkParserVarTags::tagGlyph6() {
    using namespace n13; pushText(Text_GetSpecialCharStr5()); }
void TalkParserVarTags::tagGlyph7() {
    using namespace n13; pushText(Text_GetSpecialCharStr4()); }
void TalkParserVarTags::tagGlyph8() {
    using namespace n13; pushText(Text_GetSpecialCharStr1()); }
void TalkParserVarTags::tagWait() {
    using namespace n13;
    u16 v[2];
    tag.getArgU16(v);
    waitTimer = v[0] << 12;
    window->voice.inWait = 1;
}
void TalkParserVarTags::tagPageBreak() {
    using namespace n13;
    MsgTag_DtorStub(&tag);
    printStatus = 4;
}
void TalkParserVarTags::tagFastOn() {
    using namespace n13;
    MsgTag_DtorStub(&tag);
    instant = 1;
    window->voice.instantByTag = 1;
}
void TalkParserVarTags::tagFastOff() {
    using namespace n13;
    MsgTag_DtorStub(&tag);
    instant = 0;
    window->voice.instantByTag = 0;
}
void TalkParserVarTags::tagFastLockOn() {
    using namespace n13;
    MsgTag_DtorStub(&tag);
    fastForwardLock = 1;
}
void TalkParserVarTags::tagFastLockOff() {
    using namespace n13;
    MsgTag_DtorStub(&tag);
    fastForwardLock = 0;
}
void TalkParserVarTags::tagGreeting() {
    using namespace n13;
    u8 *base = cursor;
    u8 *p = Msg_FindTag(base, 1, 7);
    if (p != 0) {
        if (((TalkWindowMsg *)(window))->buildGreeting() != 0) {
            skip(p - base);
            pushText(window->greeting.data());
        }
    }
}
void TalkParserVarTags::tagGreetingEnd() {
    using namespace n13;}
void TalkParserVarTags::tagShakeSmall() {
    using namespace n13;
    Snd_PlaySe(6);
    ((TalkWindowState *)(window))->startShake(0x6000, 0x666, 0x4cc, 0x1199);
}
void TalkParserVarTags::tagShakeMedium() {
    using namespace n13;
    Snd_PlaySe(7);
    ((TalkWindowState *)(window))->startShake(0xa000, 0x800, 0x800, 0x1333);
}
void TalkParserVarTags::tagShakeLarge() {
    using namespace n13;
    Snd_PlaySe(8);
    ((TalkWindowState *)(window))->startShake(0x11000, 0xa66, 0xccc, 0x1000);
}
void TalkParserVarTags::tagSignal0() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    MsgTag_DtorStub(&tag);
    o->onSignalTag(0);
}
void TalkParserVarTags::tagSignal1() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    MsgTag_DtorStub(&tag);
    o->onSignalTag(1);
}
void TalkParserVarTags::tagSignal2() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    MsgTag_DtorStub(&tag);
    o->onSignalTag(2);
}
void TalkParserVarTags::tagSignal3() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    MsgTag_DtorStub(&tag);
    o->onSignalTag(3);
}
void TalkParserVarTags::tagSignal4() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    MsgTag_DtorStub(&tag);
    o->onSignalTag(4);
}
void TalkParserVarTags::tagAutoAdvance() {
    using namespace n13;
    u8 v[4];
    tag.getArgs1(v);
    ((TalkAutoAdvance *)(window))->start(v[0]);
}
void TalkParserVarTags::tagChoice2() {
    using namespace n13;
    ChoiceList *l = ((TalkWindowState *)(window))->getChoiceList();
    ChoiceEntry *a = l->getEntry(0);
    ChoiceEntry *b = l->getEntry(1);
    l->clear();
    u8 *a1 = a->getValuePtr();
    MsgString *a2 = a->getText();
    u8 *b1 = b->getValuePtr();
    MsgString *b2 = b->getText();
    skip(tag.readArgStrings2(a1, a2, b1, b2));
    l->setCount(2);
    window->choiceMenu.setListChoices(l);
    window->choiceMenu.open();
    printStatus = 5;
}
void TalkParserVarTags::tagChoice3() {
    using namespace n13;
    ChoiceList *l = ((TalkWindowState *)(window))->getChoiceList();
    ChoiceEntry *a = l->getEntry(0);
    ChoiceEntry *b = l->getEntry(1);
    ChoiceEntry *c = l->getEntry(2);
    l->clear();
    u8 *a1 = a->getValuePtr();
    MsgString *a2 = a->getText();
    u8 *b1 = b->getValuePtr();
    MsgString *b2 = b->getText();
    u8 *c1 = c->getValuePtr();
    MsgString *c2 = c->getText();
    skip(tag.readArgStrings3(a1, a2, b1, b2, c1, c2));
    l->setCount(3);
    window->choiceMenu.setListChoices(l);
    window->choiceMenu.open();
    printStatus = 5;
}
void TalkParserVarTags::tagChoice4() {
    using namespace n13;
    ChoiceList *l = ((TalkWindowState *)(window))->getChoiceList();
    ChoiceEntry *a = l->getEntry(0);
    ChoiceEntry *b = l->getEntry(1);
    ChoiceEntry *c = l->getEntry(2);
    ChoiceEntry *d = l->getEntry(3);
    l->clear();
    u8 *a1 = a->getValuePtr();
    MsgString *a2 = a->getText();
    u8 *b1 = b->getValuePtr();
    MsgString *b2 = b->getText();
    u8 *c1 = c->getValuePtr();
    MsgString *c2 = c->getText();
    u8 *d1 = d->getValuePtr();
    MsgString *d2 = d->getText();
    skip(tag.readArgStrings4(a1, a2, b1, b2, c1, c2, d1, d2));
    l->setCount(4);
    window->choiceMenu.setListChoices(l);
    window->choiceMenu.open();
    printStatus = 5;
}
void TalkParserVarTags::tagChoice5() {
    using namespace n13;
    ChoiceList *l = ((TalkWindowState *)(window))->getChoiceList();
    ChoiceEntry *a = l->getEntry(0);
    ChoiceEntry *b = l->getEntry(1);
    ChoiceEntry *c = l->getEntry(2);
    ChoiceEntry *d = l->getEntry(3);
    ChoiceEntry *e = l->getEntry(4);
    l->clear();
    u8 *a1 = a->getValuePtr();
    MsgString *a2 = a->getText();
    u8 *b1 = b->getValuePtr();
    MsgString *b2 = b->getText();
    u8 *c1 = c->getValuePtr();
    MsgString *c2 = c->getText();
    u8 *d1 = d->getValuePtr();
    MsgString *d2 = d->getText();
    u8 *e1 = e->getValuePtr();
    MsgString *e2 = e->getText();
    skip(tag.readArgStrings5(a1, a2, b1, b2, c1, c2, d1, d2, e1, e2));
    l->setCount(5);
    window->choiceMenu.setListChoices(l);
    window->choiceMenu.open();
    printStatus = 5;
}
void TalkParserVarTags::tagChoice2B() {
    using namespace n13;
    tagChoice2();
    ((TalkWindowState *)(window))->getChoiceList()->setCancelToLast();
}
void TalkParserVarTags::tagChoice3B() {
    using namespace n13;
    tagChoice3();
    ((TalkWindowState *)(window))->getChoiceList()->setCancelToLast();
}
void TalkParserVarTags::tagChoice4B() {
    using namespace n13;
    tagChoice4();
    ((TalkWindowState *)(window))->getChoiceList()->setCancelToLast();
}
void TalkParserVarTags::tagChoice5B() {
    using namespace n13;
    tagChoice5();
    ((TalkWindowState *)(window))->getChoiceList()->setCancelToLast();
}
void TalkParserVarTags::tagAction0() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    MsgTag_DtorStub(&tag);
    o->onActionTag0();
}
void TalkParserVarTags::tagAction1() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    u8 v[4];
    tag.getArgs1(v);
    o->onActionTag1(v[0]);
}
void TalkParserVarTags::tagAction2() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    u8 v[4];
    tag.getArgs1(v);
    o->onActionTag2(v[0]);
}
void TalkParserVarTags::tagAction3() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    u8 v[4];
    tag.getArgs1(v);
    o->onActionTag3(v[0]);
}
void TalkParserVarTags::tagAction4() {
    using namespace n13;
    TalkMsgRequest *o = window->request;
    u8 v[4];
    tag.getArgs1(v);
    o->onActionTag4(v[0]);
}
void TalkParserVarTags::tagPlayerName() {
    using namespace n13;
    ((TalkWindowMsg *)(window))->buildPlayerName();
    pushText(Msg_GetColorTag(textColor));
    pushText(window->playerName.data());
    pushText(Msg_GetColorTag(5));
}
void TalkParserVarTags::tagSpeakerName() {
    using namespace n13;
    pushText(Msg_GetColorTag(textColor));
    pushText(window->request->getSpeakerName()->data());
    pushText(Msg_GetColorTag(6));
}

// ======== unk_02068f10.cpp ========
#define data_020dde2c ((char *)"\202i\220e\226\247\223x")
#define data_020dde38 ((char *)"\203u\201[\203\200")
#define data_020dde40 ((char *)"\203z\203\201\203R\203g\203o")
#define data_020dde4c ((char *)"\203j\203b\203N\203l\201[\203\200")
#define data_020dde5c ((char *)"\210\363\217\333")
#define data_020dde64 ((char *)"\221\274\202\314\217Z\220l\202o\226\274")
#define data_020dde74 ((char *)"\203\211\203\223\203_\203\200\202m\202o\202b")
#define data_020dde84 ((char *)"\222\207\210\253\202\265\202m\202o\202b")
#define data_020dde94 ((char *)"\222\207\227\307\202\265\202m\202o\202b")
#define data_020ddea4 ((char *)"\214\373\202\256\202\271\202\360\216g\227p\201H")
namespace n12 {
extern "C" { u32 Catalog_CountFish(); }
extern "C" { u32 Catalog_CountInsects(); }
extern "C" { s32 SaveVillagers_Count(void *p); }
extern "C" { s32 _ZN10PlayerData11getPlayerIdEv(PlayerData *p); }
extern "C" { s32 _ZN8PlayerId9getGenderEv(s32 p); }
extern "C" { s32 Villager_FindMemory(void *p, s32 v); }
extern "C" { s32 _ZN14VillagerMemory13getFriendshipEv(s32 m); }
extern "C" { s32 Random_GlobalBelow(s32 v); }
extern "C" { BOOL _ZN13TalkWindowMsg10buildTrendEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg15buildComplimentEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg13buildNicknameEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg15buildImpressionEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg22buildOtherResidentNameEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg23buildRandomVillagerNameEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg14buildEnemyNameEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg15buildFriendNameEv(u8 *c); }
extern "C" { BOOL _ZN13TalkWindowMsg16buildCatchphraseEv(u8 *c); }
extern "C" { void _ZN13TalkWindowMsg13buildTownNameEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState17getNumber1714TextEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState13getMinuteTextEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState11getHourTextEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState14getWeekdayTextEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState10getDayTextEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState12getMonthTextEv(u8 *c); }
extern "C" { MsgString *_ZN15TalkWindowState11getYearTextEv(u8 *c); }
extern "C" { ChoiceList *_ZN15TalkWindowState13getChoiceListEv(u8 *c); }
extern "C" { u8 *Msg_GetColorTag(s32 i); }
extern "C" { extern u8 gSaveData[]; }
extern "C" { extern s32 data_020cbf90; }
extern "C" { extern u8 gSaveHouse[]; }
extern "C" { extern u8 data_020cba1c[]; }
static inline TalkMsgRequest *Sel(u8 *ctx) { return *(TalkMsgRequest **)(ctx + 0x13b0); }
static inline MsgString *At(u8 *ctx, u32 off) { return (MsgString *)(ctx + off); }

}
void TalkParserCondTags::tagCatchphrase() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildCatchphrase()) debugPrintMissing(0xb58, data_020ddea4);
    pushText(At(window, 0x1860)->data());
}
void TalkParserCondTags::tagTownName() {
    using namespace n12;
    ((TalkWindowMsg *)(window))->buildTownName();
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x1880)->data());
    pushText(Msg_GetColorTag(8));
}
void TalkParserCondTags::tagYear() {
    using namespace n12; pushText(_ZN15TalkWindowState11getYearTextEv(window)->data()); }
void TalkParserCondTags::tagMonth() {
    using namespace n12; pushText(_ZN15TalkWindowState12getMonthTextEv(window)->data()); }
void TalkParserCondTags::tagDay() {
    using namespace n12; pushText(_ZN15TalkWindowState10getDayTextEv(window)->data()); }
void TalkParserCondTags::tagWeekday() {
    using namespace n12; pushText(_ZN15TalkWindowState14getWeekdayTextEv(window)->data()); }
void TalkParserCondTags::tagHour() {
    using namespace n12; pushText(_ZN15TalkWindowState11getHourTextEv(window)->data()); }
void TalkParserCondTags::tagMinute() {
    using namespace n12; pushText(_ZN15TalkWindowState13getMinuteTextEv(window)->data()); }
void TalkParserCondTags::tagNumber1714() {
    using namespace n12; pushText(_ZN15TalkWindowState17getNumber1714TextEv(window)->data()); }
void TalkParserCondTags::tagFriendName() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildFriendName()) debugPrintMissing(0xbbd, data_020dde94);
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x18b8)->data());
    pushText(Msg_GetColorTag(6));
}
void TalkParserCondTags::tagEnemyName() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildEnemyName()) debugPrintMissing(0xbcd, data_020dde84);
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x18d4)->data());
    pushText(Msg_GetColorTag(6));
}
void TalkParserCondTags::tagRandomVillagerName() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildRandomVillagerName()) debugPrintMissing(0xbdd, data_020dde74);
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x18f0)->data());
    pushText(Msg_GetColorTag(6));
}
void TalkParserCondTags::tagOtherResidentName() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildOtherResidentName()) debugPrintMissing(0xbee, data_020dde64);
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x190c)->data());
    s32 k = 5;
    if (window[0x19f6] != 0) k = 6;
    pushText(Msg_GetColorTag(k));
}
void TalkParserCondTags::tagSlot0() {
    using namespace n12; expandSlot(0); }
void TalkParserCondTags::tagSlot1() {
    using namespace n12; expandSlot(1); }
void TalkParserCondTags::tagSlot2() {
    using namespace n12; expandSlot(2); }
void TalkParserCondTags::tagSlot3() {
    using namespace n12; expandSlot(3); }
void TalkParserCondTags::tagSlot4() {
    using namespace n12; expandSlot(4); }
void TalkParserCondTags::tagSlot5() {
    using namespace n12; expandSlot(5); }
void TalkParserCondTags::tagSlot6() {
    using namespace n12; expandSlot(6); }
void TalkParserCondTags::tagSlot7() {
    using namespace n12; expandSlot(7); }
void TalkParserCondTags::tagSlot8() {
    using namespace n12; expandSlot(8); }
void TalkParserCondTags::tagSlot9() {
    using namespace n12; expandSlot(9); }
void TalkParserCondTags::tagSlot10() {
    using namespace n12; expandSlot(10); }
void TalkParserCondTags::tagNamedSlot0() {
    using namespace n12; expandNamedSlot(0); }
void TalkParserCondTags::tagNamedSlot1() {
    using namespace n12; expandNamedSlot(1); }
void TalkParserCondTags::tagNamedSlot2() {
    using namespace n12; expandNamedSlot(2); }
void TalkParserCondTags::tagNamedSlot3() {
    using namespace n12; expandNamedSlot(3); }
void TalkParserCondTags::tagImpression() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildImpression()) debugPrintMissing(0xc7d, data_020dde5c);
    pushText(At(window, 0x195c)->data());
}
void TalkParserCondTags::tagNickname() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildNickname()) debugPrintMissing(0xc8b, data_020dde4c);
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x1990)->data());
    pushText(Msg_GetColorTag(5));
}
void TalkParserCondTags::tagNop0420() {
    using namespace n12;}
void TalkParserCondTags::tagCompliment() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildCompliment()) debugPrintMissing(0xca4, data_020dde40);
    pushText(Msg_GetColorTag(textColor));
    pushText(At(window, 0x19ac)->data());
    pushText(Msg_GetColorTag(2));
}
void TalkParserCondTags::tagTrend() {
    using namespace n12;
    if (!((TalkWindowMsg *)(window))->buildTrend()) debugPrintMissing(0xcb5, data_020dde38);
    pushText(At(window, 0x1928)->data());
}
void TalkParserCondTags::tagChoiceSlots() {
    using namespace n12;
    if (choiceDeferred != 0) {
        choiceDeferred = 0;
        ChoiceList *o = _ZN15TalkWindowState13getChoiceListEv(window);
        ChoiceEntry *a = o->getEntry(0);
        ChoiceEntry *b = o->getEntry(1);
        ChoiceEntry *c = o->getEntry(2);
        ChoiceEntry *d = o->getEntry(3);
        o->clear();
        u8 *a0 = a->getWeightPtr();
        u8 *a1 = a->getValuePtr();
        u8 *b0 = b->getWeightPtr();
        u8 *b1 = b->getValuePtr();
        u8 *c0 = c->getWeightPtr();
        u8 *c1 = c->getValuePtr();
        u8 *d0 = d->getWeightPtr();
        u8 *d1 = d->getValuePtr();
        ChoiceString *e0 = o->getFirstText();
        ChoiceString *e1 = o->getLastText();
        skip(tag.readArgBytes8Strings2(a0, a1, b0, b1, c0, c1, d0, d1, (MsgString *)e0, (MsgString *)e1));
        o->setCount(4);
        ((ChoiceMenu *)(window + 0xb4))->setSliderChoices(o);
        ((ChoiceMenu *)(window + 0xb4))->open();
        printStatus = 5;
    } else {
        unreadTag((u8 *)tag.raw);
        choiceDeferred = 1;
        pushText(data_020cba1c);
    }
}
void TalkParserCondTags::tagBranchRandom2() {
    using namespace n12;
    u8 r[4];
    Sel(window)->onConditionTag(0, 2);
    tag.getArgs2(&r[1], &r[2]);
    u8 *q = &r[1];
    r[0] = q[Random_GlobalBelow(2)];
    jumpToMessage(r);
}
void TalkParserCondTags::tagBranchRandom3() {
    using namespace n12;
    u8 r[4];
    Sel(window)->onConditionTag(1, 3);
    tag.getArgs3(&r[1], &r[2], &r[3]);
    u8 *q = &r[1];
    r[0] = q[Random_GlobalBelow(3)];
    jumpToMessage(r);
}
void TalkParserCondTags::tagBranchFriendship() {
    using namespace n12;
    u8 r[4];
    TalkMsgRequest *o = Sel(window);
    o->onConditionTag(2, 2);
    tag.getArgs3(&r[0], &r[2], &r[3]);
    s32 k = 0;
    void *p = (void *)o->getSpeakerData();
    PlayerData *pd = PlayerData_GetCurrent();
    if (p) {
        s32 v = _ZN10PlayerData11getPlayerIdEv(pd);
        s32 m;
        if ((m = Villager_FindMemory(p, v)) != 0) {
            if (_ZN14VillagerMemory13getFriendshipEv(m) < r[0]) k = 1;
        }
    } else {
        debugPrintMissing(0xd64, data_020dde2c);
    }
    u8 *q = &r[2];
    r[1] = q[k];
    jumpToMessage(&r[1]);
}
void TalkParserCondTags::tagBranchPlayerGender() {
    using namespace n12;
    u8 r[4];
    Sel(window)->onConditionTag(3, 2);
    tag.getArgs2(&r[1], &r[2]);
    s32 i;
    if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) != 0) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
void TalkParserCondTags::tagBranchHouseUnk() {
    using namespace n12;
    u8 r[5];
    Sel(window)->onConditionTag(4, 4);
    tag.getArgs4(&r[1], &r[2], &r[3], &r[4]);
    s32 t = ((HouseData *)gSaveHouse)->getLevel();
    s32 i;
    if (t == 0) i = 0;
    else if (t >= 1 && t <= 2) i = 1;
    else if (t == 3) i = 2;
    else i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
void TalkParserCondTags::tagBranchInsectCount() {
    using namespace n12;
    u8 r[4];
    Sel(window)->onConditionTag(5, 3);
    tag.getArgs3(&r[1], &r[2], &r[3]);
    u32 t = Catalog_CountInsects();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
void TalkParserCondTags::tagBranchFishCount() {
    using namespace n12;
    u8 r[4];
    Sel(window)->onConditionTag(6, 3);
    tag.getArgs3(&r[1], &r[2], &r[3]);
    u32 t = Catalog_CountFish();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
void TalkParserCondTags::tagBranchVillagerCount() {
    using namespace n12;
    u8 r[5];
    Sel(window)->onConditionTag(7, 4);
    tag.getArgs4(&r[1], &r[2], &r[3], &r[4]);
    u32 g = (u32)gSaveData;
    s32 n;
    if (g != 0) n = SaveVillagers_Count((u8 *)g + 0x8a3c);
    else n = 0;
    s32 i;
    if (n <= data_020cbf90) i = 0;
    else if (n == data_020cbf90 + 1) i = 1;
    else if (n >= 8) i = 3;
    else i = 2;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
#undef data_020dde2c
#undef data_020dde38
#undef data_020dde40
#undef data_020dde4c
#undef data_020dde5c
#undef data_020dde64
#undef data_020dde74
#undef data_020dde84
#undef data_020dde94
#undef data_020ddea4

// ======== unk_02068e9c.cpp ========
#define windowBytes ((u8 *)window)
namespace n11 {
static inline TalkMsgRequest *Sel(u8 *ctx) { return *(TalkMsgRequest **)(ctx + 0x13b0); }

}
void TalkParser::tagBranchUnk8() {
    using namespace n11;
    u8 r[5];
    Sel(windowBytes)->onConditionTag(8, 4);
    tag.getArgs4(&r[1], &r[2], &r[3], &r[4]);
    s32 v = *(s32 *)(windowBytes + 0x1718);
    s32 i = 0;
    if (v == 0) {
    } else if (v == 1) i = 1;
    else if (v == 2) i = 2;
    else if (v == 3) i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
#undef windowBytes

// ======== unk_020685c4.cpp ========
#define SUB2C ((MsgTag *)&unk_2c)
#define OWN(off) ((u8 *)unk_24 + (off))
#define msgTag (*(MsgTag *)tag)
#define data_020dddbc ((u8 *)"/a_mes/a_mes_bg_ncg.bin")
#define data_020dddd4 ((u8 *)"/a_mes/a_mes_bg_ncl.bin")
#define data_020dddec ((u8 *)"/a_mes/a_mes0a_bg_nsc.bin")
#define data_020dde08 ((u8 *)"/a_mes/a_mes0b_bg_nsc.bin")
#define data_020dde24 ((u8 *)"\202i\216\355\221\260")
namespace n10 {
extern "C" { extern u8 data_020cba24[]; }
extern "C" { extern u8 gSaveData[]; }
extern "C" { void *Mem_AllocTail(u32 size); }
extern "C" { BOOL FS_OpenFile(void *self, const void *path); }
extern "C" { s32 FS_ReadFile(void *self, void *dst, u32 size); }
extern "C" { BOOL FS_CloseFile(void *self); }
extern "C" { void _ZN9TalkArrowC1Eh(void *p, s32 v); }
extern "C" { void _ZN9TalkArrow11setAltStyleEv(void *p); }
extern "C" { void _ZN9TalkArrowD1Ev(void *p); }
extern "C" { void _ZN12TalkBusyIcon4exitEv(void *p); }
extern "C" { void _ZN12TalkBusyIcon4initEv(void *p); }
extern "C" { void _ZN12TalkBusyIconD1Ev(void *p); }
extern "C" { void _ZN12TalkBusyIconC1Ev(void *p); }
extern "C" { BOOL Talk_IsAltTextEnabled(void); }
extern "C" { s32 Villager_GetAnimalKind(s32 a); }
extern "C" { s32 PlayerData_IsResidentIndex(u32 idx); }
extern "C" { s32 PlayerDataArray_CountUsed(void *p); }
extern "C" { s32 Weather_GetFallingPrecip(void); }
extern "C" { void _ZN15TalkCharStepper10startCountEPhih(void *self, u32 a, u32 b, BOOL c); }
extern "C" { void _ZN15TalkCharStepper10startUntilEPhjh(void *self, u32 a, u32 b, BOOL c); }
extern "C" { void _ZN11TalkTextBox9appendTagEPv(void *a, void *b); }
extern "C" { void _ZN11TalkTextBox22setRemainingLineColorsEj(void *a, u32 b); }
extern "C" { void MsgTag_DtorStub(void *p); }
extern "C" { void _ZN6MsgTagC1Ev(void *p); }

}
void TalkTagScanner::tagBranchWeather() {
    using namespace n10;
    u8 b[4];
    s32 i, r;
    window->request->onConditionTag(9, 3);
    msgTag.getArgs3(&b[1], &b[2], &b[3]);
    r = Weather_GetFallingPrecip();
    i = 0;
    if (r == 1) i = 1;
    else if (r == 2) i = 2;
    b[0] = (&b[1])[i];
    jumpToMessage(b);
}
void TalkTagScanner::tagBranchResidentCount() {
    using namespace n10;
    u8 b[8];
    s32 i, t;
    u8 *g;
    window->request->onConditionTag(0xa, 4);
    msgTag.getArgs4(&b[1], &b[2], &b[3], &b[4]);
    g = gSaveData;
    if ((u32)g != 0) t = PlayerDataArray_CountUsed(g + 0xc);
    else t = 0;
    i = t - 1;
    if (i < 0) i = 0;
    else if (i > 3) i = 3;
    b[0] = (&b[1])[i];
    jumpToMessage(b);
}
void TalkTagScanner::tagBranchWeekday() {
    using namespace n10;
    u8 b[8];
    window->request->onConditionTag(0xb, 7);
    msgTag.getArgBytes(&b[1], 7);
    u32 v = window->weekday;
    s32 i;
    if (v == 0) i = 6;
    else i = v - 1;
    b[0] = (&b[1])[i];
    jumpToMessage(b);
}
void TalkTagScanner::tagBranchVisitor() {
    using namespace n10;
    u8 b[8];
    window->request->onConditionTag(0xc, 2);
    msgTag.getArgs2(&b[1], &b[2]);
    s32 i;
    s32 r = PlayerData_IsResidentIndex(PlayerData_GetCurrentIndex());
    if (r == 1) i = 0;
    else i = 1;
    b[0] = (&b[1])[i];
    jumpToMessage(b);
}
void TalkTagScanner::tagBranchSpecies() {
    using namespace n10;
    u8 b[4];
    TalkMsgRequest *m = window->request;
    BOOL i;
    s32 res;
    m->onConditionTag(0xd, 2);
    msgTag.getArgs3(&b[0], &b[2], &b[3]);
    b[0]--;
    res = m->getSpeakerData();
    i = 0;
    if (res != 0) {
        s32 c = Villager_GetAnimalKind(res);
        if (c != b[0]) i = 1;
    } else {
        debugPrintMissing(0xeeb, data_020dde24);
    }
    u8 *q = &b[2];
    b[1] = q[i];
    jumpToMessage(&b[1]);
}
void TalkTagScanner::tagNop0800() {
    using namespace n10;}
void TalkTagScanner::tagNop0801() {
    using namespace n10;}
void TalkTagScanner::tagNop0802() {
    using namespace n10;}
void TalkTagScanner::tagSignal09_0() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_0();
}
void TalkTagScanner::tagSignal09_1() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_1();
}
void TalkTagScanner::tagSignal09_2() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_2();
}
void TalkTagScanner::tagSignal09_3() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_3();
}
void TalkTagScanner::tagSignal09_4() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_4();
}
void TalkTagScanner::tagSignal09_5() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_5();
}
void TalkTagScanner::tagSignal09_6() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_6();
}
void TalkTagScanner::tagSignal09_7() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_7();
}
void TalkTagScanner::tagSignal09_8() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_8();
}
void TalkTagScanner::tagSignal09_9() {
    using namespace n10;
    TalkMsgRequest *m = window->request;
    MsgTag_DtorStub(&msgTag);
    m->onTag09_9();
}
void TalkTagScanner::tagNop0a00() {
    using namespace n10;}
void TalkTagScanner::tagArticleMode1() {
    using namespace n10;
    articleMode = 1;
}
void TalkTagScanner::tagArticleMode2() {
    using namespace n10;
    articleMode = 2;
}
void TalkTagScanner::tagCapitalizeNext() {
    using namespace n10;
    capitalizeNext = 1;
}
void TalkTagScanner::tagSelectByPlayerGender() {
    using namespace n10;
    selectByPlayerGender();
}
void TalkTagScanner::tagSlotForm0() {
    using namespace n10;
    selectBySlotForm(window->slots);
}
void TalkTagScanner::tagSlotForm1() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[1]);
}
void TalkTagScanner::tagSlotForm2() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[2]);
}
void TalkTagScanner::tagSlotForm3() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[3]);
}
void TalkTagScanner::tagSlotForm4() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[4]);
}
void TalkTagScanner::tagSlotForm5() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[5]);
}
void TalkTagScanner::tagSlotForm6() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[6]);
}
void TalkTagScanner::tagSlotForm7() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[7]);
}
void TalkTagScanner::tagSlotForm8() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[8]);
}
void TalkTagScanner::tagSlotForm9() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[9]);
}
void TalkTagScanner::tagSlotForm10() {
    using namespace n10;
    MsgString33 *e = window->slots;
    selectBySlotForm(&e[10]);
}
void TalkTagScanner::tagNamedSlotForm0() {
    using namespace n10;
    selectBySlotForm(window->namedSlots);
}
void TalkTagScanner::tagNamedSlotForm1() {
    using namespace n10;
    MsgString33 *e = window->namedSlots;
    selectBySlotForm(&e[1]);
}
void TalkTagScanner::tagNamedSlotForm2() {
    using namespace n10;
    MsgString33 *e = window->namedSlots;
    selectBySlotForm(&e[2]);
}
void TalkTagScanner::tagNamedSlotForm3() {
    using namespace n10;
    MsgString33 *e = window->namedSlots;
    selectBySlotForm(&e[3]);
}
void TalkTagScanner::tagColor() {
    using namespace n10;
    textColor = msgTag.getArgU8();
    ((TalkTextBox *)(unk_28))->appendTag(&msgTag);
    ((TalkTextBox *)(unk_28))->setRemainingLineColors(textColor);
    window->voice.textColor = textColor;
}
void TalkTagScanner::tagAltText() {
    using namespace n10;
    u32 a;
    char *b;
    char *c;
    msgTag.getAltTextArgs(&a, &b, &c);
    BOOL r = Talk_IsAltTextEnabled();
    _ZN15TalkCharStepper10startCountEPhih(altTextStepper, (u32)b, a, r);
    _ZN15TalkCharStepper10startUntilEPhjh(mainTextStepper, (u32)c, (u32)b, r == 0);
    skip(a * 2);
}
TalkTagScanner::TalkTagScanner(TalkWindow *owner) {
    using namespace n10;
    window = owner;
    unk_28 = 0;
    new (SUB2C) MsgTag();
}
TalkTagScanner::~TalkTagScanner() {
    using namespace n10;}
void TalkTagScanner::scan(u8 *p) {
    using namespace n10;
    resetScan();
    unk_28 = 0;
    begin(p);
    run(FALSE);
}
void TalkTagScanner::onTag(u8 *p) {
    using namespace n10;
    SUB2C->parse(p);
    if (unk_28 == 0) {
        s32 a = *(volatile s32 *)&unk_2c;
        s32 b = *(volatile s32 *)&unk_30;
        if (a == 10 && b == 0) {
            reportTag();
        }
    }
}
void TalkTagScanner::resetScan() {
    using namespace n10;
    unk_28 = 0;
    new (SUB2C) MsgTag();
}
// ---- TalkTagScanner
void TalkTagScanner::reportTag() {
    using namespace n10;
    u8 b;
    SUB2C->getArgs1(&b);
    window->request->onScannedTag(b);
}
TalkFrame *TalkFrame::construct() {
    using namespace n10;
    screenData = NULL;
    paletteData = NULL;
    charData = NULL;
    new (arrow) TalkArrow(1);
    _ZN12TalkBusyIconC1Ev(busyIcon);
    scrollX = 0;
    scrollY = 0;
    busyIconTimer = 0;
    ((TalkArrow *)(arrow))->setAltStyle();
    _ZN12TalkBusyIcon4initEv(busyIcon);
    return this;
}
TalkFrame *TalkFrame::destruct() {
    using namespace n10;
    _ZN12TalkBusyIcon4exitEv(busyIcon);
    freeBuffers();
    _ZN12TalkBusyIconD1Ev(busyIcon);
    ((TalkArrow *)(arrow))->TalkArrow::~TalkArrow();
    return this;
}
void TalkFrame::update() {
    using namespace n10;
    updateArrow();
    updateBusyIcon();
}
void TalkFrame::draw() {
    using namespace n10;
    drawArrow();
    drawBusyIcon();
}
BOOL TalkFrame::loadScreen(void *file, BOOL alt) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, alt ? data_020dddec : data_020dde08);
    BOOL ok;
    screenData = (u16 *)Mem_AllocTail(0x800);
    if (screenData != NULL) {
        s32 n = FS_ReadFile(file, screenData, 0x800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && screenData) return TRUE;
    return FALSE;
}
BOOL TalkFrame::loadPalette(void *file) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, data_020dddd4);
    BOOL ok;
    paletteData = Mem_AllocTail(0x180);
    if (paletteData != NULL) {
        s32 n = FS_ReadFile(file, paletteData, 0x180);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && paletteData) return TRUE;
    return FALSE;
}
BOOL TalkFrame::loadCharacters(void *file) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, data_020dddbc);
    BOOL ok;
    charData = Mem_AllocTail(0x2800);
    if (charData != NULL) {
        s32 n = FS_ReadFile(file, charData, 0x2800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && charData) return TRUE;
    return FALSE;
}
void TalkFrame::setNamePalette(s32 a, BOOL b) {
    using namespace n10;
    u32 pal;
    s32 y, x;
    if (b != 0) {
        pal = 0xb000;
    } else if (a == 0) {
        pal = 0x1000;
    } else {
        pal = 0x2000;
    }
    if (pal != 0x1000) {
        for (y = 13; y <= 16; y++) {
            for (x = 3; x <= 14; x++) {
                u16 *p = (u16 *)((y << 6) + (u32)screenData);
                if ((p[x] & 0xf000) == 0x1000) {
                    u16 v = (u16)(p[x] & 0xffff0fff);
                    p[x] = v | pal;
                }
            }
        }
    }
}
// ---- TalkFrame
void TalkFrame::setTextPalette(s32 idx) {
    using namespace n10;
    s32 y, x;
    for (y = 15; y <= 24; y++) {
        for (x = 1; x <= 30; x++) {
            u16 *p = (u16 *)((y << 6) + (u32)screenData);
            u16 v = (u16)(p[x] & 0xffff0fff);
            p[x] = v | (((u32)data_020cba24[idx] << 28) >> 16);
        }
    }
}
#undef SUB2C
#undef OWN
#undef msgTag
#undef data_020dddbc
#undef data_020dddd4
#undef data_020dddec
#undef data_020dde08
#undef data_020dde24

// ======== unk_02068558.cpp ========
namespace n9 {

}
BOOL TalkFrame::load(s32 a, u32 b, s32 c, u8 d) {
    using namespace n9;
    BOOL result = FALSE;
    BOOL alt = (b == 0 && a == 0) ? TRUE : FALSE;
    FSFile file;
    FS_InitFile(&file);
    if (loadScreen(&file, alt)) {
        if (loadPalette(&file)) {
            if (loadCharacters(&file)) {
                if (alt) {
                    setNamePalette(c, d);
                } else {
                    setTextPalette(a);
                }
                result = TRUE;
            }
        }
    }
    return result;
}

// ======== unk_02067c70.cpp ========
namespace n8 {
extern "C" { void *__cxa_vec_ctor(void *p, u32 n, u32 sz, void *ctor, void *dtor); }
extern "C" { extern u16 sCharSortKeyZero; }
extern "C" { extern u8 data_020cba14[]; }
extern "C" { extern u8 data_020cba0c[]; }
extern "C" { void *Villager_GetState(void *); }
extern "C" { u32 VillagerState_GetMood(void *); }
extern "C" { BOOL PlayerOptions_GetTalkVoice(); }
extern "C" { void Snd_EndTalk(); }
extern "C" { void Snd_BeginTalk(s32); }
extern "C" { void Snd_SetVoiceType(s32); }
extern "C" { void Snd_PlayTalkVoice(s32, s32, u32, u32); }
extern "C" { void Snd_PlaySe(u32); }
extern "C" { void _ZN15TalkWindowState15setVoicePlayingEi(void *, s32); }
extern "C" { void _ZN15TalkWindowState10resetVoiceEv(void *); }
extern "C" { BOOL Text_AsciiToGameChar(u8 *out, u32 c); }
extern "C" { s32 Text_GetCharSortKey(u32); }
extern "C" { void _ZN12TalkBusyIcon6setPosEii(void *, s32, s32); }
extern "C" { void _ZN12TalkBusyIcon8callDrawEv(void *); }
extern "C" { void _ZN12TalkBusyIcon10callUpdateEv(void *); }
extern "C" { void _ZN12TalkBusyIcon11requestHideEv(void *); }
extern "C" { void _ZN12TalkBusyIcon11requestShowEj(void *p, u32 v); }
extern "C" { s32 _ZN9TalkArrow8getStateEv(void *); }
extern "C" { BOOL _ZN9TalkArrow10isAnimDoneEv(void *); }
extern "C" { void _ZN9TalkArrow9setOffsetEii(void *, s32, s32); }
extern "C" { void _ZN9TalkArrow8setStateEi(void *, s32); }
extern "C" { void Gfx2d_SetMainBg2Offset(s32, s32); }
extern "C" { void Gfx2d_SetMainWin0Rect(s32, s32, s32, s32); }
extern "C" { void Gfx2d_HideMainPlanes(s32); }
extern "C" { void Gfx2d_DisableMainWindows(s32); }
extern "C" { void Gfx2d_ShowMainPlanes(s32); }
extern "C" { void Gfx2d_EnableMainWindows(s32); }
extern "C" { void Gfx2d_SetMainWin0Planes(s32); }
extern "C" { void Gfx2d_SetMainWinOutPlanes(s32); }
extern "C" { void DC_FlushRange(void *, u32); }
extern "C" { void GX_LoadBGPltt(void *, s32, u32); }
extern "C" { void GX_LoadBG2Char(void *, s32, u32); }
extern "C" { void GX_LoadBG2Scr(void *, s32, u32); }
extern "C" { void MI_CpuFill8(void *, s32, u32); }
extern "C" { void Mem_Free(void *); }

extern "C" void TalkFrame_FreeBuffers(TalkFrame *p)
{
    if (p->screenData) { Mem_Free(p->screenData); p->screenData = 0; }
    if (p->paletteData) { Mem_Free(p->paletteData); p->paletteData = 0; }
    if (p->charData) { Mem_Free(p->charData); p->charData = 0; }
}
extern "C" void TalkFrame_SetupBgControl()
{
    volatile u16 *r = (volatile u16 *)0x400000c;
    IO_W(r, (IO_R(r) & ~3) | 1);
    IO_W(r, (IO_R(r) & 0x43) | 0x600);
    IO_W(r, IO_R(r) & ~0x40);
    Gfx2d_SetMainWin0Planes(0x1f);
    Gfx2d_SetMainWinOutPlanes(0x1b);
}
extern "C" void TalkFrame_UploadBg(TalkFrame *p)
{
    u16 *q = (u16 *)p->paletteData;
    DC_FlushRange(q + 1, 0x17e);
    GX_LoadBGPltt(q + 1, 2, 0x17e);
    DC_FlushRange(p->charData, 0x2800);
    GX_LoadBG2Char(p->charData, 0, 0x2800);
    DC_FlushRange(p->screenData, 0x800);
    GX_LoadBG2Scr(p->screenData, 0, 0x800);
}
extern "C" void TalkFrame_ShowBg()
{
    Gfx2d_ShowMainPlanes(4);
    Gfx2d_EnableMainWindows(1);
}
extern "C" void TalkFrame_HideBg()
{
    Gfx2d_HideMainPlanes(4);
    Gfx2d_DisableMainWindows(1);
}
}
void TalkFrameView::setScrollY(s32 b) {
    using namespace n8; setScroll(0, b); }
void TalkFrameView::setScroll(s32 a, s32 b)
{
    using namespace n8;
    scrollX = a;
    scrollY = b;
    Gfx2d_SetMainBg2Offset(a, b);
    s32 hi = 0xff - a;
    s32 lo = -a;
    if (lo < 0) lo = 0;
    if (hi > 0xff) hi = 0xff;
    Gfx2d_SetMainWin0Rect(lo, 0x3c, hi, 0xc0);
}
void TalkFrameView::hideArrow() {
    using namespace n8; ((TalkArrow *)(&arrow))->setState(0); }
void TalkFrameView::showArrowWait() {
    using namespace n8; ((TalkArrow *)(&arrow))->setState(1); }
void TalkFrameView::showArrowNext() {
    using namespace n8; ((TalkArrow *)(&arrow))->setState(2); }
void TalkFrameView::showArrowEnd() {
    using namespace n8; ((TalkArrow *)(&arrow))->setState(3); }
void TalkFrameView::updateArrow()
{
    using namespace n8;
    ((TalkArrow *)(&arrow))->setOffset(scrollX + 0x55, scrollY + 0x47);
    arrow.update();
}
void TalkFrameView::drawArrow() {
    using namespace n8; arrow.draw(); }
BOOL TalkFrameView::isArrowHidden()
{
    using namespace n8;
    if (busyIconTimer == 0 && ((TalkArrow *)(&arrow))->getState() == 0) return TRUE;
    return FALSE;
}
BOOL TalkFrameView::isArrowWaiting()
{
    using namespace n8;
    if (busyIconTimer == 0 && ((TalkArrow *)(&arrow))->getState() == 1) return TRUE;
    return FALSE;
}
BOOL TalkFrameView::isArrowNextDone()
{
    using namespace n8;
    if (busyIconTimer == 0 && ((TalkArrow *)(&arrow))->getState() == 2 && ((TalkArrow *)(&arrow))->isAnimDone()) return TRUE;
    return FALSE;
}
BOOL TalkFrameView::isArrowEndDone()
{
    using namespace n8;
    if (busyIconTimer == 0 && ((TalkArrow *)(&arrow))->getState() == 3 && ((TalkArrow *)(&arrow))->isAnimDone()) return TRUE;
    return FALSE;
}
void TalkFrameView::showBusyIcon(u32 se)
{
    using namespace n8;
    _ZN12TalkBusyIcon11requestShowEj(HOST_AT(this, 0x50, pad_50[0], 0), se);
    busyIconTimer = -1;
}
void TalkFrameView::hideBusyIcon()
{
    using namespace n8;
    _ZN12TalkBusyIcon11requestHideEv(HOST_AT(this, 0x50, pad_50[0], 0));
    busyIconTimer = 4;
}
void TalkFrameView::updateBusyIcon()
{
    using namespace n8;
    _ZN12TalkBusyIcon6setPosEii(HOST_AT(this, 0x50, pad_50[0], 0), scrollX + 0x59, scrollY + 0x4b);
    _ZN12TalkBusyIcon10callUpdateEv(HOST_AT(this, 0x50, pad_50[0], 0));
    if (busyIconTimer > 0) busyIconTimer--;
}
void TalkFrameView::drawBusyIcon() {
    using namespace n8; _ZN12TalkBusyIcon8callDrawEv(HOST_AT(this, 0x50, pad_50[0], 0)); }
namespace n8 {
extern "C" u8 Talk_ColorTagToTextColor(u32 x)
{
    if (x == 9) x = 2;
    return x + 1;
}
}
void TalkVoice::setVoiceOverride(s32 v) {
    using namespace n8; voiceOverride = v; }
void TalkVoice::clearVoiceOverride() {
    using namespace n8; voiceOverride = 5; }
void TalkVoice::setMsgModeOverride(s32 v) {
    using namespace n8; msgModeOverride = v; }
void TalkVoice::clearMsgModeOverride() {
    using namespace n8; msgModeOverride = 7; }
void TalkVoice::setVoiceType(s32 r)
{
    using namespace n8;
    if (voiceOverride == 5 && voiceType != 5 && voiceType != r) {
        Snd_SetVoiceType(r);
        voiceType = r;
    }
}
void TalkVoice::refreshVoiceType()
{
    using namespace n8;
    setVoiceType(window->request->getVoiceType());
}
TalkVoice::TalkVoice(TalkWindow *o)
    : window(o), msgModeOverride(7), msgMode(0), instantByMsg(0), instantByTag(0), inWait(0), voiceOverride(5), voiceType(5), textColor(0)
{
    using namespace n8;
    reset(1);
}
TalkVoice::~TalkVoice() {
    using namespace n8;}
void TalkVoice::reset(s32 flag)
{
    using namespace n8;
    s32 i = 0;
    u16 d = sCharSortKeyZero;
    for (; i < 2; i++) (&charKey0)[i] = d;
    if (flag != 0) carryCharKey = d;
    numCharKeys = 0;
}
void TalkVoice::pushChar(u32 c)
{
    using namespace n8;
    u32 cur = sCharSortKeyZero;
    u32 nw = cur;
    s32 low;
    if (numCharKeys < 2) low = 1; else low = 0;
    BOOL a, b;
    if (charKey0 == 0x2a) a = 1; else a = 0;
    if (charKey1 == 0x2a) b = 1; else b = 0;
    if (low != 0 || a != 0 || b != 0) {
        u8 buf;
        if (Text_AsciiToGameChar(&buf, c)) {
            s32 v = Text_GetCharSortKey(buf);
            if (v != cur) {
                if (v == 0x26 && inWait != 0) v = 0x27;
                nw = v;
            }
        }
    }
    if (nw != cur) {
        if (low == 0) {
            if (a != 0) {
                charKey0 = charKey1;
                charKey1 = cur;
                numCharKeys = numCharKeys - 1;
            } else if (b != 0) {
                charKey1 = cur;
                numCharKeys = numCharKeys - 1;
            }
        }
        s32 n = numCharKeys;
        if (n < 2) {
            numCharKeys = n + 1;
            (&charKey0)[n] = nw;
        }
    }
}
void TalkVoice::update()
{
    using namespace n8;
    updateVoiceType();
    shiftHistory();
    if (instantByMsg == 0 && instantByTag == 0) {
        s32 a = getVoiceStyle();
        s32 b = getSpeakerMoodIndex();
        if (numCharKeys >= 1) {
            if (voiceType == 5) {
                if (a != 2) Snd_PlaySe(0x2c);
            } else {
                Snd_PlayTalkVoice(a, b, charKey0, charKey1);
            }
        }
        s32 flag = 0;
        if (textColor != 4) {
            s32 i = 0;
            u16 d = sCharSortKeyZero;
            for (; i < numCharKeys; i++) {
                u16 h = (&charKey0)[i];
                if (h != d && h != 0x2a && h != 0x2b && h != 0x29 && h != 0x26 && h != 0x28 && h != 0x27 && h != 0x25)
                    flag = 1;
            }
        }
        ((TalkWindowState *)(window))->setVoicePlaying(flag);
    }
    if (inWait != 0) ((TalkWindowState *)(window))->resetVoice();
}
void TalkVoice::setMsgMode(s32 v) {
    using namespace n8; msgMode = v; }
void TalkVoice::begin()
{
    using namespace n8;
    s32 r = 5;
    if (voiceOverride != 5) {
        r = voiceOverride;
    } else if (getVoiceStyle() == 0) {
        if (msgMode == 3) r = 1;
        else r = window->request->getVoiceType();
    }
    voiceType = r;
    if (r != 5) Snd_BeginTalk(r);
}
void TalkVoice::end()
{
    using namespace n8;
    if (voiceType != 5) Snd_EndTalk();
    voiceType = 5;
}
u32 TalkVoice::getVoiceStyle()
{
    using namespace n8;
    u32 r = PlayerOptions_GetTalkVoice();
    s32 a = msgMode;
    BOOL b = r == 0 ? TRUE : FALSE;
    if (msgModeOverride != 7) a = msgModeOverride;
    if (a != 0 && a != 3 && b) r = 1;
    if (textColor == 4 && b) r = 1;
    return data_020cba0c[r];
}
u8 TalkVoice::getSpeakerMoodIndex()
{
    using namespace n8;
    u32 i = 0;
    void *p = (void *)window->request->getSpeakerData();
    if (p) {
        p = Villager_GetState(p);
        if (p) i = VillagerState_GetMood(p);
    }
    return data_020cba14[i];
}
void TalkVoice::updateVoiceType()
{
    using namespace n8;
    s32 r = 5;
    if (voiceType == 0) {
        if (textColor == 9) r = 4;
    } else if (voiceType == 4) {
        if (textColor != 9) r = ((TalkWindow *)window)->request->getVoiceType();
    }
    if (r != 5) setVoiceType(r);
}
void TalkVoice::shiftHistory()
{
    using namespace n8;
    if (numCharKeys == 0) {
        u16 c = sCharSortKeyZero;
        if (carryCharKey != c) {
            charKey0 = carryCharKey;
            carryCharKey = c;
            numCharKeys++;
        }
    } else if (numCharKeys == 1) {
        if (carryCharKey != sCharSortKeyZero) {
            charKey1 = charKey0;
            charKey0 = carryCharKey;
            carryCharKey = charKey1;
            numCharKeys++;
        }
    } else {
        carryCharKey = charKey1;
    }
}
TalkWindow::TalkWindow()
    : index(0), state(0), nextState(6), stateStep(0), autoAdvanceTimer(0), openMode(4), choicePending(0),
      nameLabel(0), textBox(this), parser(this, &textBox), runner(&parser),
      request(0), voice(this), year(0), weekday(0), second(0), timeOfDay(0),
      randomVillagerNameBuilt(0), otherResidentNameBuilt(0), otherResidentIsVillager(0), nextMsgIndex(gTalkMsgIndexNone),
      advancePending(0), advanceLocked(0), startNotifyPending(0), endNotifyPending(0), choiceNotifyPending(0), voicePlaying(0), inputDisabled(0), noOpenSe(0), silent(0)
{
    using namespace n8;
    MI_CpuFill8(nextFileName, 0, 0x1a);
}

// ======== unk_020671ec.cpp ========
#define data_020dddb8 ((u8 *)"20")
namespace n7 {
extern "C" { s32 _ZN10TalkParser4stopEv(void *p); }
extern "C" { s32 _ZN11TalkTextBox11clearLabelsEv(void *p); }
extern "C" { s32 _ZN10TalkParser16clearFastForwardEv(void *p); }
extern "C" { s32 _ZN15TalkAutoAdvance4stopEv(void *p); }
extern "C" { s32 Clock_GetYear(); }
extern "C" { s32 Clock_GetDayMonth(void *p); }
extern "C" { s32 Clock_GetMinuteHour(void *p); }
extern "C" { s32 Clock_GetWeekday(); }
extern "C" { s32 Clock_GetSecond(); }
extern "C" { s32 Clock_GetTimeOfDay(); }
extern "C" { s32 Math_StepS32Alt(void *p, s32 a, s32 b); }
extern "C" { s32 func_01ffcb0c(s32 a, s32 b); }
extern "C" { s32 _ZN13TalkFrameView9setScrollEii(void *p, s32 a, s32 b); }
extern "C" { s32 G2_GetBG2ScrPtr(); }
extern "C" { s32 _ZN13TalkWindowMsg16destroyNameLabelEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15createNameLabelEv(void *p); }
extern "C" { s32 String_FormatNumber(void *p, s32 a, s32 b, s32 c, s32 d, s32 e); }
extern "C" { s32 String_GetWeekdayName(void *p, s32 a, s32 b); }
extern "C" { s32 String_GetDayOrdinal(void *p, s32 a); }
extern "C" { s32 String_GetMonthName(void *p, s32 a); }
extern "C" { s32 _ZN11MsgString33C1Ev(void *p); }
extern "C" { s32 _ZN9MsgString3setEPh(void *p, void *q); }
extern "C" { s32 _ZN9MsgString12appendStringEPS_(void *p, void *q); }
extern "C" { s32 _ZN9TalkVoice5resetEi(void *p, s32 a); }
extern "C" { s32 _ZN9TalkVoice8pushCharEj(void *p, s32 a); }
extern "C" { s32 PlayerOptions_IsHiragana(); }
extern "C" { s32 _ZN9TalkFrame4drawEv(void *p); }
extern "C" { s32 _ZN10ChoiceMenu4drawEv(void *p); }
extern "C" { s32 _ZN9TalkFrame6updateEv(void *p); }
extern "C" { s32 _ZN10ChoiceMenu6updateEv(void *p); }
extern "C" { s32 __cxa_vec_delete(void *p, s32 a, s32 b, void *c); }
extern "C" { s32 _ZN13TalkFrameView12hideBusyIconEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView12showBusyIconEj(void *p, u32 se); }
extern "C" { s32 _ZN10ChoiceMenu14setListChoicesEP10ChoiceList(void *p, void *q); }
extern "C" { s32 _ZN10ChoiceMenu4openEv(void *p); }
extern "C" { s32 _ZN9MsgString4copyEPS_(void *p, void *q); }
extern "C" { s32 String_Load(void *p, s32 a, s32 b); }
extern "C" { s32 strncpy(void *d, void *s, s32 n); }
extern "C" { s32 MI_CpuFill8(void *d, s32 v, s32 n); }
extern "C" { s32 Input_IsTouchTrigInRect(s32 a, s32 b, s32 c, s32 d); }
extern "C" { s32 Input_IsBHeld(); }
extern "C" { s32 Input_IsATrig(); }
extern "C" { s32 Input_IsBTrig(); }
extern "C" { s32 Input_IsTouchMode(); }
extern "C" { s32 Input_IsAnyKeyTrig(); }
extern "C" { s32 Input_SetButtonMode(); }
extern "C" { s32 Input_IsButtonMode(); }
extern "C" { s32 Input_IsTouchTrig(); }
extern "C" { s32 Input_SetTouchMode(); }
extern "C" { s32 Input_StoreMode(); }
extern "C" { s32 Input_LoadMode(); }
extern "C" { s32 _ZN12MsgString17BD1Ev(void *p); }
extern "C" { s32 _ZN11MsgString17D1Ev(void *p); }
extern "C" { s32 _ZN11MsgString9BD1Ev(void *p); }
extern "C" { s32 _ZN11MsgString9CD1Ev(void *p); }
extern "C" { s32 _ZN11MsgString11D1Ev(void *p); }
extern "C" { s32 _ZN11MsgString25D1Ev(void *p); }
extern "C" { s32 _ZN9TalkVoiceD1Ev(void *p); }
extern "C" { void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor); }
extern "C" { s32 _ZN11MsgString33D1Ev(void *p); }
extern "C" { s32 BmgMsgAttr_Fini(void *p); }
extern "C" { s32 MsgRunner_DtorStub(void *p); }
extern "C" { s32 _ZN10TalkParserD1Ev(void *p); }
extern "C" { s32 _ZN13TalkBmgReaderD1Ev(void *p); }
extern "C" { s32 _ZN11TalkTextBoxD1Ev(void *p); }
extern "C" { s32 _ZN10ChoiceListD1Ev(void *p); }
extern "C" { s32 _ZN10ChoiceMenuD1Ev(void *p); }
extern "C" { s32 _ZN9TalkFrame8destructEv(void *p); }
extern "C" { extern u16 data_020cbadc; }
extern "C" { extern u16 data_020cbae0; }
extern "C" { extern u16 data_020cbae4; }
extern "C" { extern s16 data_02135f44[]; }
typedef void (TalkWindowState::*Unk_020660f8_Fn)();
extern "C" { extern TalkWindowState *gTalkWindows; }

}
TalkWindowState::~TalkWindowState() {
    using namespace n7;
    ((TalkWindowMsg *)(this))->destroyNameLabel();
    detachRequest();
    ((MsgString17B *)(greeting))->MsgString17B::~MsgString17B();
    ((MsgString17 *)(compliment))->MsgString17::~MsgString17();
    ((MsgString9B *)(nickname))->MsgString9B::~MsgString9B();
    ((MsgString33 *)(impression))->MsgString33::~MsgString33();
    ((MsgString33 *)(trend))->MsgString33::~MsgString33();
    ((MsgString9B *)(otherResidentName))->MsgString9B::~MsgString9B();
    ((MsgString9B *)(randomVillagerName))->MsgString9B::~MsgString9B();
    ((MsgString9B *)(enemyName))->MsgString9B::~MsgString9B();
    ((MsgString9B *)(friendName))->MsgString9B::~MsgString9B();
    ((MsgString9B *)(playerName))->MsgString9B::~MsgString9B();
    ((MsgString9C *)(townName))->MsgString9C::~MsgString9C();
    _ZN11MsgString11D1Ev(catchphrase);
    _ZN11MsgString25D1Ev(secondText);
    _ZN11MsgString25D1Ev(minuteText);
    _ZN11MsgString25D1Ev(hourText);
    ((MsgString33 *)(weekdayText))->MsgString33::~MsgString33();
    _ZN11MsgString25D1Ev(dayText);
    ((MsgString33 *)(monthText))->MsgString33::~MsgString33();
    _ZN11MsgString25D1Ev(yearText);
    ((TalkVoice *)(voice))->TalkVoice::~TalkVoice();
    __cxa_vec_cleanup(namedSlots, 4, sizeof(MsgString33), (void *)_ZN11MsgString33D1Ev);
    __cxa_vec_cleanup(slots, 0xb, sizeof(MsgString33), (void *)_ZN11MsgString33D1Ev);
    BmgMsgAttr_Fini(msgAttr);
    MsgRunner_DtorStub(runner);
    ((TalkParser *)(parser))->TalkParser::~TalkParser();
    ((TalkBmgReader *)(msgBuffer))->TalkBmgReader::~TalkBmgReader();
    ((TalkTextBox *)(textBox))->~TalkTextBox();
    ((ChoiceList *)(choiceList))->~ChoiceList();
    ((ChoiceMenu *)(choiceMenu))->~ChoiceMenu();
    ((TalkFrame *)(frame))->destruct();
}
BOOL TalkWindowState::setNextMessageIfUnset(u8 *src, void *s) {
    using namespace n7;
    BOOL r = FALSE;
    if (nextMsgIndex == gTalkMsgIndexNone) {
        setNextMessage(src, s);
        r = TRUE;
    }
    return r;
}
void TalkWindowState::setNextMessage(u8 *src, void *s) {
    using namespace n7;
    nextMsgIndex = *src;
    if (s) {
        strncpy(nextFileName, s, 0x19);
    } else {
        MI_CpuFill8(nextFileName, 0, 0x1a);
    }
}
void TalkWindowState::lockAdvance() {
    using namespace n7; advanceLocked = 1; }
void TalkWindowState::unlockAdvance() {
    using namespace n7; advanceLocked = 0; }
void TalkWindowState::setAdvancePending() {
    using namespace n7; advancePending = 1; }
void TalkWindowState::clearAdvancePending() {
    using namespace n7; advancePending = 0; }
s32 TalkWindowState::setSlot(s32 idx, void *p) {
    using namespace n7;
    return ((MsgString33 *)slots + idx)->copy((MsgString *)(p));
}
void TalkWindowState::setSlotFromString(s32 idx, s32 a, s32 b) {
    using namespace n7;
    String_Load((MsgString33 *)slots + idx, a, b);
}
void TalkWindowState::setNamedSlot(s32 idx, void *p, u32 val) {
    using namespace n7;
    ((MsgString33 *)namedSlots + idx)->copy((MsgString *)(p));
    namedSlotColors[idx] = val;
}
void TalkWindowState::openChoices(s32 v) {
    using namespace n7;
    if (v) {
        choicePending = 1;
    } else {
        ((ChoiceMenu *)(choiceMenu))->setListChoices((ChoiceList *)(choiceList));
        ((ChoiceMenu *)(choiceMenu))->open();
    }
}
ChoiceList *TalkWindowState::getChoiceList() {
    using namespace n7; return (ChoiceList *)choiceList; }
u8 TalkWindowState::isVoicePlaying() {
    using namespace n7; return voicePlaying; }
s32 TalkWindowState::showBusyIcon(u32 se) {
    using namespace n7; return _ZN13TalkFrameView12showBusyIconEj(frame, se); }
s32 TalkWindowState::hideBusyIcon() {
    using namespace n7; return _ZN13TalkFrameView12hideBusyIconEv(frame); }
void TalkWindowState::attachRequest(TalkMsgRequest *p) {
    using namespace n7;
    request = p;
    p->attachWindow((u32)this);
}
void TalkWindowState::detachRequest() {
    using namespace n7;
    if (request) {
        request->detachWindow();
        request = 0;
    }
}
void TalkWindowState::disableInput() {
    using namespace n7; inputDisabled = 1; }
void TalkWindowState::setKeepSe() {
    using namespace n7; noOpenSe = 1; }
void TalkWindowState::setSilent() {
    using namespace n7; silent = 1; }
namespace n7 {
extern "C" TalkWindowState *TalkWindow_Get(s32 i) {
    TalkWindowState *r = 0;
    if (gTalkWindows) r = gTalkWindows + i;
    return r;
}
extern "C" void TalkWindow_CreateAll() {
    gTalkWindows = new TalkWindowState[2];
    for (s32 i = 0; i < 2; i++) gTalkWindows[i].index = i;
}
extern "C" void TalkWindow_DestroyAll() {
    if (gTalkWindows) {
        delete[] gTalkWindows;
        gTalkWindows = 0;
    }
}
extern "C" void TalkWindow_UpdateAll() {
    if (gTalkWindows) {
        for (s32 i = 0; i < 2; i++) gTalkWindows[i].update();
    }
}
extern "C" void TalkWindow_DrawAll() {
    if (gTalkWindows) {
        for (s32 i = 0; i < 2; i++) gTalkWindows[i].draw();
    }
}
}
namespace n0 {
extern "C" { extern const u8 data_020cba14[0x5]; const u8 data_020cba14[0x5] = {0, 4, 1, 2, 3}; }
extern "C" { extern const u8 data_020cba0c[0x3]; const u8 data_020cba0c[0x3] = {0, 1, 2}; }
extern "C" { extern const u8 data_020cba24[0x7]; const u8 data_020cba24[0x7] = {3, 6, 7, 8, 9, 5, 10}; }
extern "C" { s16 sTalkWindowCloseOffsets[6] = {-101, -48, -20, -10, 0, 0}; }
}
void TalkWindowState::update() {
    using namespace n7;
    static Unk_020660f8_Fn tbl[6] = {
        &TalkWindowState::execIdle, &TalkWindowState::execOpening, &TalkWindowState::execWaitInput,
        &TalkWindowState::execPrinting, &TalkWindowState::execClosing, &TalkWindowState::execClosed,
    };
    (this->*tbl[state])();
    applyStateChange();
    updateShake();
    ((TalkFrame *)(frame))->update();
    ((ChoiceMenu *)(choiceMenu))->update();
    if (state != 0 && state != 5) storeInputMode();
}
void TalkWindowState::draw() {
    using namespace n7;
    ((TalkFrame *)(frame))->draw();
    ((ChoiceMenu *)(choiceMenu))->draw();
}
namespace n7 {
extern "C" BOOL Talk_IsAltTextEnabled() {
    if (PlayerOptions_IsHiragana() == 0) return TRUE;
    return FALSE;
}
}
s32 TalkWindowState::onCharPrinted(s32 a) {
    using namespace n7;
    return _ZN9TalkVoice8pushCharEj(voice, a);
}
void TalkWindowState::setVoicePlaying(BOOL v) {
    using namespace n7;
    if (v) {
        voicePlaying = 1;
    } else {
        voicePlaying = 0;
    }
}
s32 TalkWindowState::resetVoice() {
    using namespace n7;
    voicePlaying = 0;
    return _ZN9TalkVoice5resetEi(voice, 1);
}
void *TalkWindowState::getYearText() {
    using namespace n7;
    MsgString33 t;
    String_FormatNumber(&t, year, 2, 6, 0, 0);
    ((MsgString *)(yearText))->set((u8 *)(data_020dddb8));
    ((MsgString *)(yearText))->appendString((MsgString *)(&t));
    return yearText;
}
void *TalkWindowState::getMonthText() {
    using namespace n7;
    String_GetMonthName(monthText, month);
    return monthText;
}
void *TalkWindowState::getDayText() {
    using namespace n7;
    String_GetDayOrdinal(dayText, day);
    return dayText;
}
void *TalkWindowState::getWeekdayText() {
    using namespace n7;
    String_GetWeekdayName(weekdayText, weekday, 0);
    return weekdayText;
}
void *TalkWindowState::getHourText() {
    using namespace n7;
    u32 t = hour;
    if (t >= 12) t -= 12;
    if (t == 0) t = 12;
    String_FormatNumber(hourText, t, 2, 0, 0, 0);
    return hourText;
}
void *TalkWindowState::getMinuteText() {
    using namespace n7;
    String_FormatNumber(minuteText, minute, 2, 6, 9, 0);
    return minuteText;
}
void *TalkWindowState::getNumber1714Text() {
    using namespace n7;
    String_FormatNumber(secondText, second, 2, 0, 0, 0);
    return secondText;
}
void TalkWindowState::startShake(s32 a, s32 b, s32 c, s32 d) {
    using namespace n7;
    shakeAngle = 0;
    shakeAmplitude = a;
    shakeDecay = b;
    shakeScaleX = c;
    shakeScaleY = d;
    shakeDecay = shakeDecay * 3;
    shakeDecay = shakeDecay >> 1;
}
void TalkWindowState::refreshNameColor() {
    using namespace n7;
    s32 y;
    s32 x;
    u16 v;
    u16 c0;
    u16 c1;
    u16 * row;
    u16 c2;
    s32 mode;
    u16 * base;
    u16 * p;
    BOOL flag;
    if (request->getSpeakerData() == 0) {
        flag = TRUE;
    } else {
        flag = FALSE;
    }
    mode = request->getNameKind();
    base = (u16 *)G2_GetBG2ScrPtr();
    y = 13;
    c0 = data_020cbadc;
    c1 = data_020cbae0;
    c2 = data_020cbae4;
    for (; y <= 16; y++) {
        x = 3;
        row = base + y * 32;
        do {
            p = row + x;
            v = *p & 0xffff0fff;
            if (flag) {
                v |= c0;
            } else if (mode == 1) {
                v |= c1;
            } else {
                v |= c2;
            }
            *p = v;
        x++; } while (x <= 14);
    }
    ((TalkWindowMsg *)(this))->destroyNameLabel();
    ((TalkWindowMsg *)(this))->createNameLabel();
}
void TalkWindowState::loadInputMode() {
    using namespace n7;
    if (inputDisabled == 0) Input_LoadMode();
}
void TalkWindowState::storeInputMode() {
    using namespace n7;
    if (inputDisabled == 0) Input_StoreMode();
}
BOOL TalkWindowState::checkDeviceSwitch() {
    using namespace n7;
    BOOL r = FALSE;
    if (inputDisabled == 0) {
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
    }
    return r;
}
BOOL TalkWindowState::isAdvanceTriggered() {
    using namespace n7;
    BOOL r = FALSE;
    if (inputDisabled == 0) {
        if (checkDeviceSwitch() == 0) {
            if (Input_IsTouchTrigInRect(8, 0xf8, 0x70, 0xc0)) {
                r = TRUE;
            } else if (Input_IsATrig() || Input_IsBTrig()) {
                r = TRUE;
            }
        }
    }
    return r;
}
BOOL TalkWindowState::isSkipHeld() {
    using namespace n7;
    BOOL r = FALSE;
    if (inputDisabled == 0) {
        if (checkDeviceSwitch() == 0) {
            if (Input_IsTouchTrigInRect(8, 0xf8, 0x70, 0xc0)) {
                r = TRUE;
            } else if (Input_IsBHeld()) {
                r = TRUE;
            }
        }
    }
    return r;
}
void TalkWindowState::updateShake() {
    using namespace n7;
    if (shakeAmplitude != 0) {
        BOOL c = TRUE;
        if (state != 3 && state != 2) c = FALSE;
        BOOL z = Math_StepS32Alt(&shakeAmplitude, 0, shakeDecay) != 0 ? TRUE : FALSE;
        if (c != 0 && z == 0) {
            shakeAngle = shakeAngle + 0x4000;
            s32 a = func_01ffcb0c(shakeAmplitude, shakeScaleX);
            s32 b = func_01ffcb0c(shakeAmplitude, shakeScaleY);
            s32 ang = shakeAngle;
            a = func_01ffcb0c(data_02135f44[(((u16)(s16)(ang + 0x2000)) >> 4) * 2 + 1], a);
            b = func_01ffcb0c(data_02135f44[(((u16)(s16)(ang * 2 - 0x4000)) >> 4) * 2], b);
            ((TalkFrameView *)(frame))->setScroll(-(a >> 12), scrollY + (b >> 12));
        } else {
            s32 zero = 0;
            shakeAngle = zero;
            shakeAmplitude = zero;
            shakeDecay = zero;
            shakeScaleX = zero;
            shakeScaleY = zero;
            ((TalkFrameView *)(frame))->setScroll(zero, scrollY);
        }
    }
}
void TalkWindowState::captureClock() {
    using namespace n7;
    year = Clock_GetYear();
    Clock_GetDayMonth(&day);
    Clock_GetMinuteHour(&minute);
    weekday = Clock_GetWeekday();
    second = Clock_GetSecond();
    timeOfDay = Clock_GetTimeOfDay();
}
void TalkWindowState::resetPrint() {
    using namespace n7;
    ((TalkParser *)(parser))->clearFastForward();
    stopAutoAdvance();
}
void TalkWindowState::finish() {
    using namespace n7;
    clearAdvancePending();
    resetPrint();
    request->onTalkEnd();
}
void TalkWindowState::stopText() {
    using namespace n7;
    ((TalkParser *)(parser))->stop();
    ((TalkTextBox *)(textBox))->clearLabels();
    finish();
}
#undef data_020dddb8

// ======== unk_02067188.cpp ========
namespace n6 {
extern "C" { s32 _ZN13TalkWindowMsg23clearRandomVillagerNameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg22clearOtherResidentNameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg16clearCatchphraseEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg13clearTownNameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15clearPlayerNameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15clearFriendNameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg14clearEnemyNameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg10clearTrendEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15clearImpressionEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg13clearNicknameEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15clearComplimentEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg13clearGreetingEv(void *p); }

}
void TalkWindowState::resetTextVars() {
    using namespace n6;
    ((TalkParser *)parser)->resetColor();
    ((TalkWindowMsg *)(this))->clearRandomVillagerName();
    ((TalkWindowMsg *)(this))->clearOtherResidentName();
    ((TalkWindowMsg *)(this))->clearCatchphrase();
    ((TalkWindowMsg *)(this))->clearTownName();
    ((TalkWindowMsg *)(this))->clearPlayerName();
    ((TalkWindowMsg *)(this))->clearFriendName();
    ((TalkWindowMsg *)(this))->clearEnemyName();
    ((TalkWindowMsg *)(this))->clearTrend();
    ((TalkWindowMsg *)(this))->clearImpression();
    ((TalkWindowMsg *)(this))->clearNickname();
    ((TalkWindowMsg *)(this))->clearCompliment();
    ((TalkWindowMsg *)(this))->clearGreeting();
    stopText();
}

// ======== unk_020668a0.cpp ========
#define AT(T, off) (*(T *)((u8 *)this + (off)))
#define PTR(off) ((void *)((u8 *)this + (off)))
#define OWNER request
#define M ((BmgReader *)msgBuffer)
#define data_020ddd7c ((char *)"%s/%s/%s/%s_.bmg")
#define data_020ddd90 ((char *)"%s/%s/Other/%s_.bmg")
#define data_020ddda4 ((char *)"%s/Other/%s_.bmg")
namespace n5 {
extern "C" { extern const char *sTalkMessageSubdirs[]; }
extern "C" { extern const char *sTalkMessageDirs[]; }
extern "C" { extern char sTalkMessagePath[]; }
extern "C" { extern s8 sTalkFriendshipDeltas[]; }
extern "C" { extern u16 data_020cba10[]; }
extern "C" { extern u8 gSaveData[]; }
extern "C" { s32 strncmp(const char *a, const char *b, u32 n); }
extern "C" { u32 strlen(const char *s); }
extern "C" { char *Str_SPrintf(char *buf, const char *fmt, ...); }
extern "C" { void TownId_GetNameString(void *dst, void *src); }
extern "C" { void Snd_PlaySe(u32 a); }
extern "C" { void _ZN13TalkMsgBuffer5clearEv(void *p); }
extern "C" { void BmgMsgAttr_Copy(void *dst, void *src); }
extern "C" { void *Bmg_GetMsgAttr(void *p); }
extern "C" { s32 BmgMsgAttr_LookupUnkC(void *p); }
extern "C" { s32 BmgMsgAttr_LookupUnkB(void *p); }
extern "C" { void BmgMsgAttr_GetByte08(u8 *out, void *p); }
extern "C" { s32 BmgMsgAttr_GetByte09(void *p); }
extern "C" { u32 BmgMsgAttr_GetByte07(void *p); }
extern "C" { u32 BmgMsgAttr_GetByte06(void *p); }
extern "C" { u32 BmgMsgAttr_GetByte05(void *p); }
extern "C" { void _ZN9MsgRunner5resetEv(void *p); }
extern "C" { void _ZN9MsgRunner5startEPh(void *p, u32 v); }
extern "C" { void *_ZN10ChoiceList13getResultAttrEv(void *p); }
extern "C" { ChoiceString *_ZN10ChoiceList13getResultTextEv(void *p); }
extern "C" { void _ZN11MsgString339initEmptyEv(void *p); }
extern "C" { void _ZN9MsgString5clearEv(void *p); }
extern "C" { void MsgTextLabel_Destroy(void *p); }
extern "C" { void _ZN11TalkTextBox11setCenteredEh(void *p, u32 v); }
extern "C" { void _ZN10TalkParser12setPrintModeEi(void *p, s32 v); }
extern "C" { void _ZN15TalkWindowState14setNextMessageEPhPv(void *self, u8 *p, s32 z); }
extern "C" { s32 _ZN15TalkWindowState13unlockAdvanceEv(void *self); }
extern "C" { s32 _ZN15TalkWindowState13resetTextVarsEv(void *self); }
extern "C" { s32 _ZN10PlayerData11getPlayerIdEv(void *p); }
extern "C" { s32 Villager_FindMemoryIndex(void *a, s32 b); }
extern "C" { void *Villager_GetMemory(void *a, s32 b); }
extern "C" { void _ZN14VillagerMemory13addFriendshipEi(void *a, s32 b); }
extern "C" { void *_ZN14VillagerMemory13getFriendshipEv(void *a); }
extern "C" { void VillagerSync_Friendship(void *a, s32 b, void *c); }
extern "C" { s32 _ZN10PlayerData20getOtherResidentNameEPv(void *g, void *p); }
extern "C" { void Villager_GetRandomOtherName(void *a, void *b); }
extern "C" { void Villager_GetEnemyName(void *a, void *b); }
extern "C" { void Villager_GetFriendName(void *a, void *b); }
extern "C" { void Villager_GetImpressionText(void *a, void *b, s32 c); }
extern "C" { s32 Villager_GetTrend(void *a, void *b); }
extern "C" { s32 _ZN20VillagerDataItemView14getGreetingForEPvS0_(void *a, void *b, s32 c); }
extern "C" { void _ZN20VillagerDataItemView16getComplimentForEPvS0_(void *a, void *b, s32 c); }
extern "C" { void Villager_GetNicknameFor(void *a, void *b, s32 c); }
extern "C" { void _ZN23VillagerDataProfileView14getCatchphraseEPvS0_(void *a, void *b, s32 c); }
extern "C" { void _ZN8PlayerId13getNameStringEP9MsgString(s32 a, void *b); }
extern "C" { MsgString9 *_ZN14TalkMsgRequest14getSpeakerNameEv(void *p); }
extern "C" { TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c); }

}
void TalkWindowMsg::resetVars() {
    using namespace n5;
    ((TalkWindowState *)(this))->resetTextVars();
    noOpenSe = 0;
}
void TalkWindowMsg::reset() {
    using namespace n5;
    resetVars();
    clearSlots();
    clearNamedSlots();
    ((TalkWindowState *)(this))->unlockAdvance();
}
void TalkWindowMsg::clearSlots() {
    using namespace n5;
    s32 i;
    for (i = 0; i < 11; i++) {
        ((MsgString33 *)(&slots[i]))->initEmpty();
    }
}
void TalkWindowMsg::clearNamedSlots() {
    using namespace n5;
    s32 i;
    for (i = 0; i < 4; i++) {
        ((MsgString33 *)(&namedSlots[i]))->initEmpty();
        namedSlotColors[i] = 7;
    }
}
void TalkWindowMsg::clearCatchphrase() {
    using namespace n5; ((MsgString *)(catchphrase))->clear(); }
BOOL TalkWindowMsg::buildCatchphrase() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(catchphrase))->clear();
    if (r6 != 0) {
        _ZN23VillagerDataProfileView14getCatchphraseEPvS0_(r6, catchphrase, 1);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearTownName() {
    using namespace n5; ((MsgString *)(townName))->clear(); }
BOOL TalkWindowMsg::buildTownName() {
    using namespace n5;
    ((MsgString *)(townName))->clear();
    TownId_GetNameString((u8 *)((u32)gSaveData + 2), townName);
    return TRUE;
}
void TalkWindowMsg::clearPlayerName() {
    using namespace n5; ((MsgString *)(playerName))->clear(); }
BOOL TalkWindowMsg::buildPlayerName() {
    using namespace n5;
    void *r4 = PlayerData_GetCurrent();
    ((MsgString *)(playerName))->clear();
    _ZN8PlayerId13getNameStringEP9MsgString(_ZN10PlayerData11getPlayerIdEv(r4), playerName);
    return TRUE;
}
void TalkWindowMsg::clearFriendName() {
    using namespace n5; ((MsgString *)(friendName))->clear(); }
BOOL TalkWindowMsg::buildFriendName() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(friendName))->clear();
    if (r6 != 0) {
        Villager_GetFriendName(r6, friendName);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearEnemyName() {
    using namespace n5; ((MsgString *)(enemyName))->clear(); }
BOOL TalkWindowMsg::buildEnemyName() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(enemyName))->clear();
    if (r6 != 0) {
        Villager_GetEnemyName(r6, enemyName);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearRandomVillagerName() {
    using namespace n5;
    randomVillagerNameBuilt = 0;
    ((MsgString *)(randomVillagerName))->clear();
}
BOOL TalkWindowMsg::buildRandomVillagerName() {
    using namespace n5;
    BOOL r4 = TRUE;
    if (randomVillagerNameBuilt == 0) {
        void *r6 = (void *)OWNER->getSpeakerData();
        ((MsgString *)(randomVillagerName))->clear();
        if (r6 != 0) {
            Villager_GetRandomOtherName(r6, randomVillagerName);
        } else {
            r4 = FALSE;
        }
        randomVillagerNameBuilt = 1;
    }
    return r4;
}
void TalkWindowMsg::clearOtherResidentName() {
    using namespace n5;
    otherResidentNameBuilt = 0;
    otherResidentIsVillager = 0;
    ((MsgString *)(otherResidentName))->clear();
}
BOOL TalkWindowMsg::buildOtherResidentName() {
    using namespace n5;
    BOOL r4 = TRUE;
    if (otherResidentNameBuilt == 0) {
        void *g = PlayerData_GetCurrent();
        ((MsgString *)(otherResidentName))->clear();
        if (((PlayerData *)(g))->getOtherResidentName(otherResidentName) == 0) {
            void *r0 = (void *)OWNER->getSpeakerData();
            if (r0 != 0) {
                Villager_GetRandomOtherName(r0, otherResidentName);
                otherResidentIsVillager = r4;
            } else {
                r4 = FALSE;
            }
        }
        otherResidentNameBuilt = 1;
    }
    return r4;
}
void TalkWindowMsg::clearTrend() {
    using namespace n5; ((MsgString *)(trend))->clear(); }
BOOL TalkWindowMsg::buildTrend() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(trend))->clear();
    if (r6 != 0) {
        if (Villager_GetTrend(r6, trend) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}
void TalkWindowMsg::clearImpression() {
    using namespace n5; ((MsgString *)(impression))->clear(); }
BOOL TalkWindowMsg::buildImpression() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(impression))->clear();
    if (r6 != 0) {
        Villager_GetImpressionText(r6, impression, 0);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearNickname() {
    using namespace n5; ((MsgString *)(nickname))->clear(); }
BOOL TalkWindowMsg::buildNickname() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(nickname))->clear();
    if (r6 != 0) {
        void *g = PlayerData_GetCurrent();
        Villager_GetNicknameFor(r6, nickname, _ZN10PlayerData11getPlayerIdEv(g));
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearCompliment() {
    using namespace n5; ((MsgString *)(compliment))->clear(); }
BOOL TalkWindowMsg::buildCompliment() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(compliment))->clear();
    if (r6 != 0) {
        void *g = PlayerData_GetCurrent();
        _ZN20VillagerDataItemView16getComplimentForEPvS0_(r6, compliment, _ZN10PlayerData11getPlayerIdEv(g));
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearGreeting() {
    using namespace n5; ((MsgString *)(greeting))->clear(); }
BOOL TalkWindowMsg::buildGreeting() {
    using namespace n5;
    void *r6 = (void *)OWNER->getSpeakerData();
    BOOL r4 = FALSE;
    ((MsgString *)(greeting))->clear();
    if (r6 != 0) {
        void *g = PlayerData_GetCurrent();
        if (_ZN20VillagerDataItemView14getGreetingForEPvS0_(r6, greeting, _ZN10PlayerData11getPlayerIdEv(g)) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}
void TalkAutoAdvance::stop() {
    using namespace n5;
    autoAdvanceTimer = 0;
}
void TalkAutoAdvance::start(s32 v) {
    using namespace n5;
    autoAdvanceTimer = v;
}
BOOL TalkAutoAdvance::tick() {
    using namespace n5;
    BOOL r = FALSE;
    if (autoAdvanceTimer > 0) {
        autoAdvanceTimer--;
        if (autoAdvanceTimer == 0) {
            r = TRUE;
        }
    }
    return r;
}
void TalkWindowMsg::applyFriendshipDelta(s32 idx) {
    using namespace n5;
    if (idx != 0) {
        void *r4 = (void *)OWNER->getSpeakerData();
        void *g = PlayerData_GetCurrent();
        if (r4 != 0) {
            s32 r7 = Villager_FindMemoryIndex(r4, _ZN10PlayerData11getPlayerIdEv(g));
            void *r6 = Villager_GetMemory(r4, r7);
            if (r6 != 0) {
                _ZN14VillagerMemory13addFriendshipEi(r6, sTalkFriendshipDeltas[idx]);
                VillagerSync_Friendship(r4, r7, _ZN14VillagerMemory13getFriendshipEv(r6));
            }
        }
    }
}
void TalkWindowMsg::createNameLabel() {
    using namespace n5;
    nameLabel = MsgTextLabel_CreateVram(0x89, 8, 2);
    if (nameLabel != 0) {
        nameLabel->copyMode = 2;
        nameLabel->bgColor = 0xe;
        MsgString9 *o = ((TalkMsgRequest *)(request))->getSpeakerName();
        TextLabel *t = nameLabel;
        t->textStart = (u32)o->data();
        nameLabel->alignCenter();
        nameLabel->fgColor = 2;
        nameLabel->requestRedraw();
    }
}
void TalkWindowMsg::destroyNameLabel() {
    using namespace n5;
    if (nameLabel != 0) {
        MsgTextLabel_Destroy(nameLabel);
        nameLabel = 0;
    }
}
void TalkWindowMsg::notifyMessageStart() {
    using namespace n5;
    if (startNotifyPending != 0) {
        OWNER->onMessageStart(BmgMsgAttr_GetByte06(msgAttr));
        startNotifyPending = 0;
    }
}
void TalkWindowMsg::notifyMessageEnd() {
    using namespace n5;
    if (endNotifyPending != 0) {
        applyFriendshipDelta(BmgMsgAttr_GetByte05(msgAttr));
        OWNER->onMessageEnd(BmgMsgAttr_GetByte07(msgAttr));
        endNotifyPending = 0;
    }
}
void TalkWindowMsg::notifyChoice() {
    using namespace n5;
    if (choiceNotifyPending != 0) {
        OWNER->onChoice(BmgMsgAttr_GetByte07(((ChoiceList *)(choiceList))->getResultAttr()));
        choiceNotifyPending = 0;
    }
}
void TalkWindowMsg::playMessageSe() {
    using namespace n5;
    s32 r0 = BmgMsgAttr_GetByte09(msgAttr);
    if (r0 < 2) {
        if (data_020cba10[r0] != 0) {
            Snd_PlaySe(data_020cba10[r0]);
        }
    }
}
void TalkWindowMsg::startMessage() {
    using namespace n5;
    u8 loc;
    endNotifyPending = 1;
    startNotifyPending = 1;
    choiceNotifyPending = 0;
    ((TalkTextBox *)(textBox))->setCentered(BmgMsgAttr_LookupUnkC(msgAttr) == 1 ? 1 : 0);
    s32 r4 = BmgMsgAttr_LookupUnkB(msgAttr);
    ((TalkParser *)(parser))->setPrintMode(r4);
    voiceInstantByMsg = r4 == 1 ? 1 : 0;
    BmgMsgAttr_GetByte08(&loc, msgAttr);
    ((TalkWindowState *)(this))->setNextMessage(&loc, (void *)(0));
    notifyMessageStart();
    playMessageSe();
    ((MsgRunner *)(runner))->reset();
    ((MsgRunner *)(runner))->start((u8 *)(M->getBuffer()));
}
void TalkWindowMsg::scanMessageTags() {
    using namespace n5;
    ChoiceString *o = ((ChoiceList *)(choiceList))->getResultText();
    TalkTagScannerView loc(this);
    ((TalkTagScannerView *)&loc)->scan((u32)o->data());
}
char *TalkWindowMsg::buildMessagePath(const char *a, const char *b) {
    using namespace n5;
    u32 r6 = (u32)b;
    if (r6 == 0) {
        r6 = (u32)OWNER->getMsgDir();
    }
    const char *r5 = a ? a : (const char *)((MsgRequest *)request)->fileName;
    const char *r7 = matchDirPrefix(r5);
    if (r7 != 0) {
        r5 += strlen(r7) + 1;
        const char *r4 = matchSubdirPrefix(r5);
        if (r4 != 0) {
            const char *e = r5 + (strlen(r4) + 1);
            Str_SPrintf(sTalkMessagePath, data_020ddd7c, r6, r7, r4, e);
        } else {
            Str_SPrintf(sTalkMessagePath, data_020ddd90, r6, r7, r5);
        }
    } else {
        Str_SPrintf(sTalkMessagePath, data_020ddda4, r6, r5);
    }
    return sTalkMessagePath;
}
const char *TalkWindowMsg::matchDirPrefix(const char *s) {
    using namespace n5;
    const char **p;
    const char *e;
    for (p = sTalkMessageDirs; (e = *p) != 0; p++) {
        u32 n = strlen(e);
        if (strncmp(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}
const char *TalkWindowMsg::matchSubdirPrefix(const char *s) {
    using namespace n5;
    const char **p;
    const char *e;
    for (p = sTalkMessageSubdirs; (e = *p) != 0; p++) {
        u32 n = strlen(e);
        if (strncmp(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}
void TalkWindowMsg::loadMessageAttr() {
    using namespace n5;
    ((TalkMsgBuffer *)(msgBuffer))->clear();
    if (M->open(buildMessagePath(0, 0))) {
        M->loadMessage(&((MsgRequest *)request)->msgIndex);
    }
    BmgMsgAttr_Copy(msgAttr, Bmg_GetMsgAttr(msgBuffer));
    M->close();
}
#undef AT
#undef PTR
#undef OWNER
#undef M
#undef data_020ddd7c
#undef data_020ddd90
#undef data_020ddda4

// ======== unk_0206684c.cpp ========
#define nextFileNameByte (*(s8 *)nextFileName)
namespace n4 {
extern "C" { s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *p, u8 *a, void *b); }
extern "C" { s32 _ZN13TalkWindowMsg15loadMessageAttrEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg12startMessageEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState12captureClockEv(void *p); }

}
void TalkWindowState::loadNextMessage() {
    using namespace n4;
    request->msgIndex = nextMsgIndex;
    if (nextFileNameByte != 0) {
        request->setFileName((const char *)&nextFileNameByte);
    }
    ((TalkWindowState *)(this))->setNextMessage(&gTalkMsgIndexNone, 0);
    ((TalkWindowMsg *)(this))->loadMessageAttr();
    ((TalkWindowMsg *)(this))->startMessage();
    ((TalkWindowState *)(this))->captureClock();
}
#undef nextFileNameByte

// ======== unk_02065f50.cpp ========
namespace n3 {
extern "C" { s32 _ZN15TalkWindowState11openChoicesEi(void *p, s32 a); }
extern "C" { s32 _ZN15TalkWindowState15loadNextMessageEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg5resetEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg9resetVarsEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState13resetTextVarsEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState8stopTextEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState6finishEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState10resetPrintEv(void *p); }
extern "C" { s32 TalkFrame_HideBg(void *p); }
extern "C" { s32 _ZN13TalkFrameView10setScrollYEi(void *p, s32 a); }
extern "C" { s32 _ZN13TalkFrameView9hideArrowEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg16destroyNameLabelEv(void *p); }
extern "C" { s32 _ZN11TalkTextBox13destroyLabelsEv(void *p); }
extern "C" { s32 _ZN9TalkVoice3endEv(void *p); }
extern "C" { s32 _ZN14BgmVolumeMixer11endTalkDuckEv(void *p); }
extern "C" { s32 _ZN14BgmVolumeMixer13startTalkDuckEv(void *p); }
extern "C" { void Snd_PlaySe(s32 a); }
extern "C" { s32 _ZN15TalkWindowState10isSkipHeldEv(void *p); }
extern "C" { s32 _ZN10TalkParser14setFastForwardEv(void *p); }
extern "C" { s32 _ZN9TalkVoice5resetEi(void *p, s32 a); }
extern "C" { s32 _ZN9MsgRunner7advanceEv(void *p); }
extern "C" { s32 _ZN11TalkTextBox11redrawLinesEv(void *p); }
extern "C" { s32 _ZN9TalkVoice6updateEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg16notifyMessageEndEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState10resetVoiceEv(void *p); }
extern "C" { s32 _ZN10ChoiceMenu11justDecidedEv(void *p); }
extern "C" { s32 _ZN10ChoiceMenu6isIdleEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView13isArrowHiddenEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView13showArrowWaitEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView14isArrowWaitingEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState18isAdvanceTriggeredEv(void *p); }
extern "C" { s32 _ZN15TalkAutoAdvance4tickEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView13showArrowNextEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView15isArrowNextDoneEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView12showArrowEndEv(void *p); }
extern "C" { s32 _ZN13TalkFrameView14isArrowEndDoneEv(void *p); }
extern "C" { s32 _ZN9TalkVoice5beginEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState13loadInputModeEv(void *p); }
extern "C" { s32 BmgMsgAttr_LookupUnkA(void *p); }
extern "C" { s32 _ZN9TalkFrame4loadEijih(void *p, s32 a, u32 b, u32 c, s32 d); }
extern "C" { s32 _ZN9TalkVoice10setMsgModeEi(void *p, s32 a); }
extern "C" { s32 TalkFrame_SetupBgControl(void *p); }
extern "C" { s32 TalkFrame_UploadBg(void *p); }
extern "C" { s32 TalkFrame_ShowBg(void *p); }
extern "C" { s32 TalkFrame_FreeBuffers(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15createNameLabelEv(void *p); }
extern "C" { s32 _ZN11TalkTextBox12createLabelsEv(void *p); }
extern "C" { s32 ChatBalloon_Dismiss(u32 a); }
extern "C" { s32 _ZN10ChoiceList14getResultValueEv(void *p); }
extern "C" { s32 _ZN10ChoiceList13getResultNameEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *p, s32 a, s32 b); }
extern "C" { s32 _ZN15TalkWindowState17setAdvancePendingEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15scanMessageTagsEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg12notifyChoiceEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg15loadMessageAttrEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg12startMessageEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState12captureClockEv(void *p); }
extern "C" { extern u8 gTalkMsgIndexEnd; }
extern "C" { extern s16 sTalkWindowCloseOffsets[]; }
extern "C" { extern s16 sTalkWindowOpenOffsets[]; }
extern "C" { extern u8 *data_021c1b3c; }
extern "C" { extern CommManager *gCommManager; }
typedef void (TalkWindowState::*Unk_020660f8_Fn)();

}
void TalkWindowState::reloadMessage() {
    using namespace n3;
    ((TalkWindowMsg *)(this))->loadMessageAttr();
    ((TalkWindowMsg *)(this))->startMessage();
    ((TalkWindowState *)(this))->captureClock();
}
void TalkWindowState::onChoiceDone() {
    using namespace n3;
    s32 a = _ZN10ChoiceList14getResultValueEv(choiceList);
    s32 b = _ZN10ChoiceList13getResultNameEv(choiceList);
    ((TalkWindowState *)(this))->setNextMessage((u8 *)(a), (void *)(b));
    ((TalkWindowState *)(this))->setAdvancePending();
    choiceNotifyPending = 1;
    ((TalkWindowMsg *)(this))->scanMessageTags();
    ((TalkWindowMsg *)(this))->notifyChoice();
}
namespace n0 {
extern "C" { extern const s8 sTalkFriendshipDeltas[0x21]; const s8 sTalkFriendshipDeltas[0x21] = {0, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -15, -20, -25, -30, -35, -40}; }
extern "C" { char sTalkMessagePath[0x40]; }
extern "C" { extern const char *const sTalkMessageDirs[9]; const char *const sTalkMessageDirs[9] = {"fu", "bo", "ha", "ta", "ko", "ge", "sp", "obj", 0}; }
extern "C" { extern const char *const sTalkMessageSubdirs[26]; const char *const sTalkMessageSubdirs[26] = {"ai", "tsu", "ap", "3p", "etc", "ev", "npc", "q", "q01", "q02", "q03", "q04", "q05", "q06", "q07", "q08", "q09", "q10", "q11", "q12", "q13", "q14", "q15", "q16", "q17", 0}; }
}
void TalkWindowState::applyStateChange() {
    using namespace n3;
    static Unk_020660f8_Fn tbl[6] = {
        &TalkWindowState::enterIdle, &TalkWindowState::enterOpening, &TalkWindowState::enterWaitInput,
        &TalkWindowState::enterPrinting, &TalkWindowState::enterClosing, &TalkWindowState::enterClosed,
    };
    if (nextState != 6) {
        state = nextState;
        (this->*tbl[nextState])();
        nextState = 6;
    }
}
namespace n0 {
extern "C" { s16 sTalkWindowOpenOffsets[6] = {0, -7, -14, -25, -50, -101}; }
extern "C" { extern const u16 data_020cba10[2]; const u16 data_020cba10[2] = {0x0, 0x27}; }
}
void TalkWindowState::enterIdle() {
    using namespace n3; TalkFrame_HideBg(frame); }
void TalkWindowState::execIdle() {
    using namespace n3;}
void TalkWindowState::enterOpening() {
    using namespace n3;
    ((TalkWindowState *)(this))->loadInputMode();
    BOOL c = openMode != 4 ? TRUE : FALSE;
    if (c) ((TalkWindowState *)(this))->loadNextMessage();
    else reloadMessage();
    s32 r6 = BmgMsgAttr_LookupUnkA(msgAttr);
    TalkMsgRequest *o = request;
    u8 *p = o->getSpeakerName()->data();
    u32 v8 = request->getNameKind();
    BOOL r7 = request->getSpeakerData() == 0 ? TRUE : FALSE;
    u32 r2 = request->isNoSpeakerName();
    if (r2 == 0 && r6 == 0 && *(s8 *)p == 0) r6 = 5;
    ((TalkFrame *)(frame))->load(r6, r2, v8, r7);
    ((TalkVoice *)(voice))->setMsgMode(r6);
    TalkFrame_SetupBgControl(frame);
    TalkFrame_UploadBg(frame);
    TalkFrame_ShowBg(frame);
    TalkFrame_FreeBuffers(frame);
    stateStep = 5;
    scrollY = sTalkWindowOpenOffsets[stateStep];
    ((TalkFrameView *)(frame))->setScrollY(scrollY);
    ((TalkFrameView *)(frame))->hideArrow();
    ((TalkWindowMsg *)(this))->createNameLabel();
    ((TalkTextBox *)(textBox))->createLabels();
    if (gCommManager) ChatBalloon_Dismiss(gCommManager->myAid);
    if (noOpenSe == 0) Snd_PlaySe(9);
    if (inputDisabled == 0) {
        if (openMode != 1 && openMode != 2 && openMode != 3) ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->startTalkDuck();
    }
    if (c) openMode = 4;
}
void TalkWindowState::execOpening() {
    using namespace n3;
    BOOL done = FALSE;
    if (stateStep > 0) stateStep = stateStep - 1;
    else done = TRUE;
    scrollY = sTalkWindowOpenOffsets[stateStep];
    ((TalkFrameView *)(frame))->setScrollY(scrollY);
    if (done) {
        if (inputDisabled == 0) ((TalkVoice *)(voice))->begin();
        nextState = 3;
    }
}
void TalkWindowState::enterWaitInput() {
    using namespace n3; ((TalkFrameView *)(frame))->hideArrow(); }
void TalkWindowState::execWaitInput() {
    using namespace n3;
    ((MsgRunner *)(runner))->advance();
    s32 st = parserPrintStatus;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 3 ? TRUE : FALSE;
    BOOL c = st == 4 ? TRUE : FALSE;
    BOOL d = st == 5 ? TRUE : FALSE;
    if (((ChoiceMenu *)(choiceMenu))->justDecided() != 0) onChoiceDone();
    if (a || b || c) {
        if (advanceLocked == 0 && ((ChoiceMenu *)(choiceMenu))->isIdle() != 0) {
            if (advancePending != 0) {
                advance();
            } else if (((TalkFrameView *)(frame))->isArrowHidden() != 0) {
                ((TalkFrameView *)(frame))->showArrowWait();
            } else if (((TalkFrameView *)(frame))->isArrowWaiting() != 0) {
                if (((TalkWindowState *)(this))->isAdvanceTriggered() != 0 || ((TalkAutoAdvance *)(this))->tick() != 0) {
                    ((TalkFrameView *)(frame))->showArrowNext();
                    if (silent == 0) Snd_PlaySe(0x10);
                    if (choicePending != 0 || parserChoiceDeferred != 0) Snd_PlaySe(0x13);
                }
            } else if (((TalkFrameView *)(frame))->isArrowNextDone() != 0) {
                ((TalkFrameView *)(frame))->showArrowEnd();
            } else if (((TalkFrameView *)(frame))->isArrowEndDone() != 0) {
                advance();
            }
        } else {
            if (((TalkFrameView *)(frame))->isArrowHidden() == 0) ((TalkFrameView *)(frame))->hideArrow();
        }
    } else if (d) {
        if (((ChoiceMenu *)(choiceMenu))->isIdle() != 0) advance();
    }
}
void TalkWindowState::enterPrinting() {
    using namespace n3;
    ((TalkFrameView *)(frame))->hideArrow();
    stateStep = 1;
}
void TalkWindowState::execPrinting() {
    using namespace n3;
    if (((TalkWindowState *)(this))->isSkipHeld() != 0) ((TalkParser *)(parser))->setFastForward();
    ((TalkVoice *)(voice))->reset(0);
    ((MsgRunner *)(runner))->advance();
    ((TalkTextBox *)(textBox))->redrawLines();
    if (inputDisabled == 0) ((TalkVoice *)(voice))->update();
    s32 st = parserPrintStatus;
    BOOL b3 = st == 3 ? TRUE : FALSE;
    BOOL b2 = st == 2 ? TRUE : FALSE;
    BOOL b4 = st == 4 ? TRUE : FALSE;
    BOOL b5 = st == 5 ? TRUE : FALSE;
    BOOL b0 = st == 0 ? TRUE : FALSE;
    BOOL z = stateStep == 0 ? TRUE : FALSE;
    BOOL go = TRUE;
    if (!z && !b2 && !b4 && !b5 && !b0) go = FALSE;
    if (b3) stateStep = 0;
    if (go) {
        if (z) ((TalkWindowMsg *)(this))->notifyMessageEnd();
        nextState = 2;
        ((TalkWindowState *)(this))->resetVoice();
    }
}
void TalkWindowState::enterClosing() {
    using namespace n3;
    ((TalkFrameView *)(frame))->hideArrow();
    stateStep = 4;
    scrollY = sTalkWindowCloseOffsets[stateStep];
    if (inputDisabled == 0) {
        ((TalkVoice *)(voice))->end();
        if (openMode != 1 && openMode != 2 && openMode != 3) ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->endTalkDuck();
    }
    if (silent == 0) Snd_PlaySe(10);
    request->onWindowClose();
}
void TalkWindowState::execClosing() {
    using namespace n3;
    BOOL done = FALSE;
    if (stateStep > 0) stateStep = stateStep - 1;
    else done = TRUE;
    scrollY = sTalkWindowCloseOffsets[stateStep];
    ((TalkFrameView *)(frame))->setScrollY(scrollY);
    if (done) {
        ((TalkWindowMsg *)(this))->destroyNameLabel();
        ((TalkTextBox *)(textBox))->destroyLabels();
        if (openMode != 4) {
            nextState = 5;
        } else {
            inputDisabled = 0;
            silent = 0;
            nextState = 0;
        }
    }
}
void TalkWindowState::enterClosed() {
    using namespace n3; TalkFrame_HideBg(frame); }
void TalkWindowState::execClosed() {
    using namespace n3;}
// ---- state class ----
void TalkWindowState::advance() {
    using namespace n3;
    s32 st = parserPrintStatus;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 4 ? TRUE : FALSE;
    BOOL c = st == 5 ? TRUE : FALSE;
    s32 r7 = 6;
    s32 r6 = r7;
    s32 flag = 0;
    s32 act = 0;
    TalkAdvanceStackPad pad;
    if (choicePending != 0) {
        choicePending = 0;
        ((TalkWindowState *)(this))->openChoices(0);
    } else if (a || b || c) {
        r7 = 1;
        r6 = 3;
        if (c) act = r7;
        else if (b) act = 2;
        else act = r6;
    } else {
        u32 x = gTalkMsgIndexNone;
        u32 y = nextMsgIndex;
        if (y == gTalkMsgIndexEnd) {
            r7 = 0;
            r6 = 4;
            act = 6;
        } else if (openMode != 4) {
            r7 = 0;
            r6 = 4;
            act = 5;
        } else if (y != x) {
            flag = 1;
            act = 4;
        }
    }
    if (flag != 0) {
        ((TalkWindowState *)(this))->loadNextMessage();
        r7 = 1;
        r6 = 3;
    }
    if (r7 != 6) parserPrintStatus = r7;
    if (r6 != 6) {
        nextState = r6;
        if (act == 1) ((TalkWindowState *)(this))->resetPrint();
        else if (act == 2) ((TalkWindowState *)(this))->finish();
        else if (act == 3) ((TalkWindowState *)(this))->stopText();
        else if (act == 4) ((TalkWindowState *)(this))->resetTextVars();
        else if (act == 5) ((TalkWindowMsg *)(this))->resetVars();
        else if (act == 6) ((TalkWindowMsg *)(this))->reset();
    }
}
MsgString9::MsgString9() {
    using namespace n3; clear(); }
MsgString9::~MsgString9() {
    using namespace n3;}
u32 MsgString9::capacity() {
    using namespace n3; return 9; }
// ---- MsgString9 ----
u8 *MsgString9::data() {
    using namespace n3; return HOST_AT(this, 0x12, text[0], 0); }
TalkMsgRequest::TalkMsgRequest() {
    using namespace n3;
    window = 0;
    noSpeakerName = 0;
}
TalkMsgRequest::~TalkMsgRequest() {
    using namespace n3;}
void TalkMsgRequest::resetMsg() {
    using namespace n3;
    MsgRequest::resetMsg();
    speakerName.clear();
    window = 0;
    noSpeakerName = 0;
}
void TalkMsgRequest::setSpeakerName(u8 *p, u32 v) {
    using namespace n3;
    speakerName.set(p);
    speakerName.attr.form = v;
    noSpeakerName = 0;
}
void TalkMsgRequest::setSpeakerNameStr(MsgString *p, u32 v) {
    using namespace n3;
    speakerName.copy(p);
    speakerName.attr.form = v;
    noSpeakerName = 0;
}
// ---- TalkMsgRequest ----
void TalkMsgRequest::setNoSpeakerName(u32 v) {
    using namespace n3;
    speakerName.clear();
    speakerName.attr.form = v;
    noSpeakerName = 1;
}

// ======== unk_02065f14.cpp ========
namespace n2 {

}
void TalkMsgRequest::changeSpeakerName(MsgString *p, u32 v) {
    using namespace n2;
    TalkWindowState *o = (TalkWindowState *)window;
    s32 t = o->state;
    BOOL five = (t == 5);
    setSpeakerNameStr(p, v);
    if (t != 0 && !five) {
        ((TalkWindowState *)window)->refreshNameColor();
        ((TalkVoice *)(((TalkWindowState *)window)->voice))->refreshVoiceType();
    }
}

// ======== unk_020655e4.cpp ========
#define unk_04 ((u32 *)(HOST_AT(this, 4, fileName[0], 0)))
#define data_020ddd68 ((char *)"/script/ENG/message")
namespace n1 {

}
MsgString9 *TalkMsgRequest::getSpeakerName() {
    using namespace n1; return &speakerName; }
u32 TalkMsgRequest::isNoSpeakerName() {
    using namespace n1; return noSpeakerName; }
u32 TalkMsgRequest::getNameKind() {
    using namespace n1; return unk_04[(0x2c - 4) / 4]; }
const char *TalkMsgRequest::getMsgDir() {
    using namespace n1; return data_020ddd68; }
void TalkMsgRequest::onMessageStart(u32 attr) {
    using namespace n1;}
void TalkMsgRequest::onMessageEnd(u32 attr) {
    using namespace n1;}
void TalkMsgRequest::onChoice(u32 attr) {
    using namespace n1;}
void TalkMsgRequest::onSignalTag(s32 id) {
    using namespace n1;}
void TalkMsgRequest::onActionTag0() {
    using namespace n1;}
void TalkMsgRequest::onActionTag1(u32 arg) {
    using namespace n1;}
void TalkMsgRequest::onActionTag2(u32 arg) {
    using namespace n1;}
void TalkMsgRequest::onActionTag3(u32 arg) {
    using namespace n1;}
void TalkMsgRequest::onActionTag4(u32 arg) {
    using namespace n1;}
void TalkMsgRequest::onConditionTag(u32 condition, u32 branchCount) {
    using namespace n1;}
void TalkMsgRequest::onEventTag(u32 a) {
    using namespace n1;}
void TalkMsgRequest::onTag09_0() {
    using namespace n1;}
void TalkMsgRequest::onTag09_1() {
    using namespace n1;}
void TalkMsgRequest::onTag09_2() {
    using namespace n1;}
void TalkMsgRequest::onTag09_3() {
    using namespace n1;}
void TalkMsgRequest::onTag09_4() {
    using namespace n1;}
void TalkMsgRequest::onTag09_5() {
    using namespace n1;}
void TalkMsgRequest::onTag09_6() {
    using namespace n1;}
void TalkMsgRequest::onTag09_7() {
    using namespace n1;}
void TalkMsgRequest::onTag09_8() {
    using namespace n1;}
void TalkMsgRequest::onTag09_9() {
    using namespace n1;}
void TalkMsgRequest::onScannedTag(u32 tag) {
    using namespace n1;}
u32 TalkMsgRequest::getSpeakerData() {
    using namespace n1; return 0; }
s32 TalkMsgRequest::getVoiceType() {
    using namespace n1; return 5; }
void TalkMsgRequest::onWindowClose() {
    using namespace n1;}
void TalkMsgRequest::onTalkEnd() {
    using namespace n1;}
void TalkMsgRequest::attachWindow(u32 v) {
    using namespace n1; window = (TalkWindowState *)v; }
void TalkMsgRequest::detachWindow() {
    using namespace n1; window = 0; }
#undef unk_04
#undef data_020ddd68


#ifdef HOST64
static_assert(__builtin_offsetof(TalkFrameView, pad_00) == 0x0, "TalkFrameView.pad_00");
static_assert(__builtin_offsetof(TalkFrameView, arrow) == 0x18, "TalkFrameView.arrow");
static_assert(__builtin_offsetof(TalkFrameView, pad_50) == 0x68, "TalkFrameView.pad_50");
static_assert(__builtin_offsetof(TalkFrameView, scrollX) == 0x90, "TalkFrameView.scrollX");
static_assert(__builtin_offsetof(TalkFrameView, scrollY) == 0x94, "TalkFrameView.scrollY");
static_assert(__builtin_offsetof(TalkFrameView, busyIconTimer) == 0x98, "TalkFrameView.busyIconTimer");
#endif


#ifdef HOST64
// TalkWindowState (include/talk/TalkWindowState.h) views TalkWindow
static_assert(__builtin_offsetof(TalkWindowState, index) == 0x0, "TalkWindowState.index");
static_assert(__builtin_offsetof(TalkWindowState, state) == 0x4, "TalkWindowState.state");
static_assert(__builtin_offsetof(TalkWindowState, nextState) == 0x8, "TalkWindowState.nextState");
static_assert(__builtin_offsetof(TalkWindowState, stateStep) == 0xc, "TalkWindowState.stateStep");
static_assert(__builtin_offsetof(TalkWindowState, unk_10) == 0x10, "TalkWindowState.unk_10");
static_assert(__builtin_offsetof(TalkWindowState, openMode) == 0x14, "TalkWindowState.openMode");
static_assert(__builtin_offsetof(TalkWindowState, choicePending) == 0x18, "TalkWindowState.choicePending");
static_assert(__builtin_offsetof(TalkWindowState, pad_19) == 0x19, "TalkWindowState.pad_19");
static_assert(__builtin_offsetof(TalkWindowState, frame) == 0x20, "TalkWindowState.frame");
static_assert(__builtin_offsetof(TalkWindowState, scrollY) == 0xc0, "TalkWindowState.scrollY");
static_assert(__builtin_offsetof(TalkWindowState, shakeAngle) == 0xc4, "TalkWindowState.shakeAngle");
static_assert(__builtin_offsetof(TalkWindowState, pad_a2) == 0xc6, "TalkWindowState.pad_a2");
static_assert(__builtin_offsetof(TalkWindowState, shakeAmplitude) == 0xc8, "TalkWindowState.shakeAmplitude");
static_assert(__builtin_offsetof(TalkWindowState, shakeDecay) == 0xcc, "TalkWindowState.shakeDecay");
static_assert(__builtin_offsetof(TalkWindowState, shakeScaleX) == 0xd0, "TalkWindowState.shakeScaleX");
static_assert(__builtin_offsetof(TalkWindowState, shakeScaleY) == 0xd4, "TalkWindowState.shakeScaleY");
static_assert(__builtin_offsetof(TalkWindowState, choiceMenu) == 0xd8, "TalkWindowState.choiceMenu");
static_assert(__builtin_offsetof(TalkWindowState, choiceList) == 0x408, "TalkWindowState.choiceList");
static_assert(__builtin_offsetof(TalkWindowState, textBox) == 0x708, "TalkWindowState.textBox");
static_assert(__builtin_offsetof(TalkWindowState, msgBuffer) == 0xbe8, "TalkWindowState.msgBuffer");
static_assert(__builtin_offsetof(TalkWindowState, parser) == 0x14c0, "TalkWindowState.parser");
static_assert(__builtin_offsetof(TalkWindowState, parserPrintStatus) == 0x1504, "TalkWindowState.parserPrintStatus");
static_assert(__builtin_offsetof(TalkWindowState, pad_12f4) == 0x1508, "TalkWindowState.pad_12f4");
static_assert(__builtin_offsetof(TalkWindowState, parserChoiceDeferred) == 0x15e8, "TalkWindowState.parserChoiceDeferred");
static_assert(__builtin_offsetof(TalkWindowState, pad_1399) == 0x15e9, "TalkWindowState.pad_1399");
static_assert(__builtin_offsetof(TalkWindowState, runner) == 0x1600, "TalkWindowState.runner");
static_assert(__builtin_offsetof(TalkWindowState, request) == 0x1618, "TalkWindowState.request");
static_assert(__builtin_offsetof(TalkWindowState, msgAttr) == 0x1620, "TalkWindowState.msgAttr");
static_assert(__builtin_offsetof(TalkWindowState, slots) == 0x1630, "TalkWindowState.slots");
static_assert(__builtin_offsetof(TalkWindowState, namedSlots) == 0x18f0, "TalkWindowState.namedSlots");
static_assert(__builtin_offsetof(TalkWindowState, namedSlotColors) == 0x19f0, "TalkWindowState.namedSlotColors");
static_assert(__builtin_offsetof(TalkWindowState, voice) == 0x1a10, "TalkWindowState.voice");
static_assert(__builtin_offsetof(TalkWindowState, year) == 0x1a48, "TalkWindowState.year");
static_assert(__builtin_offsetof(TalkWindowState, day) == 0x1a4c, "TalkWindowState.day");
static_assert(__builtin_offsetof(TalkWindowState, month) == 0x1a4d, "TalkWindowState.month");
static_assert(__builtin_offsetof(TalkWindowState, minute) == 0x1a4e, "TalkWindowState.minute");
static_assert(__builtin_offsetof(TalkWindowState, hour) == 0x1a4f, "TalkWindowState.hour");
static_assert(__builtin_offsetof(TalkWindowState, weekday) == 0x1a50, "TalkWindowState.weekday");
static_assert(__builtin_offsetof(TalkWindowState, second) == 0x1a54, "TalkWindowState.second");
static_assert(__builtin_offsetof(TalkWindowState, timeOfDay) == 0x1a58, "TalkWindowState.timeOfDay");
static_assert(__builtin_offsetof(TalkWindowState, yearText) == 0x1a60, "TalkWindowState.yearText");
static_assert(__builtin_offsetof(TalkWindowState, monthText) == 0x1a98, "TalkWindowState.monthText");
static_assert(__builtin_offsetof(TalkWindowState, dayText) == 0x1ad8, "TalkWindowState.dayText");
static_assert(__builtin_offsetof(TalkWindowState, weekdayText) == 0x1b10, "TalkWindowState.weekdayText");
static_assert(__builtin_offsetof(TalkWindowState, hourText) == 0x1b50, "TalkWindowState.hourText");
static_assert(__builtin_offsetof(TalkWindowState, minuteText) == 0x1b88, "TalkWindowState.minuteText");
static_assert(__builtin_offsetof(TalkWindowState, secondText) == 0x1bc0, "TalkWindowState.secondText");
static_assert(__builtin_offsetof(TalkWindowState, catchphrase) == 0x1bf8, "TalkWindowState.catchphrase");
static_assert(__builtin_offsetof(TalkWindowState, townName) == 0x1c28, "TalkWindowState.townName");
static_assert(__builtin_offsetof(TalkWindowState, playerName) == 0x1c50, "TalkWindowState.playerName");
static_assert(__builtin_offsetof(TalkWindowState, friendName) == 0x1c78, "TalkWindowState.friendName");
static_assert(__builtin_offsetof(TalkWindowState, enemyName) == 0x1ca0, "TalkWindowState.enemyName");
static_assert(__builtin_offsetof(TalkWindowState, randomVillagerName) == 0x1cc8, "TalkWindowState.randomVillagerName");
static_assert(__builtin_offsetof(TalkWindowState, otherResidentName) == 0x1cf0, "TalkWindowState.otherResidentName");
static_assert(__builtin_offsetof(TalkWindowState, trend) == 0x1d18, "TalkWindowState.trend");
static_assert(__builtin_offsetof(TalkWindowState, impression) == 0x1d58, "TalkWindowState.impression");
static_assert(__builtin_offsetof(TalkWindowState, nickname) == 0x1d98, "TalkWindowState.nickname");
static_assert(__builtin_offsetof(TalkWindowState, compliment) == 0x1dc0, "TalkWindowState.compliment");
static_assert(__builtin_offsetof(TalkWindowState, greeting) == 0x1df0, "TalkWindowState.greeting");
static_assert(__builtin_offsetof(TalkWindowState, nextMsgIndex) == 0x1e23, "TalkWindowState.nextMsgIndex");
static_assert(__builtin_offsetof(TalkWindowState, nextFileName) == 0x1e24, "TalkWindowState.nextFileName");
static_assert(__builtin_offsetof(TalkWindowState, advancePending) == 0x1e3e, "TalkWindowState.advancePending");
static_assert(__builtin_offsetof(TalkWindowState, advanceLocked) == 0x1e3f, "TalkWindowState.advanceLocked");
static_assert(__builtin_offsetof(TalkWindowState, pad_1a14) == 0x1e40, "TalkWindowState.pad_1a14");
static_assert(__builtin_offsetof(TalkWindowState, choiceNotifyPending) == 0x1e42, "TalkWindowState.choiceNotifyPending");
static_assert(__builtin_offsetof(TalkWindowState, voicePlaying) == 0x1e43, "TalkWindowState.voicePlaying");
static_assert(__builtin_offsetof(TalkWindowState, inputDisabled) == 0x1e44, "TalkWindowState.inputDisabled");
static_assert(__builtin_offsetof(TalkWindowState, noOpenSe) == 0x1e45, "TalkWindowState.noOpenSe");
static_assert(__builtin_offsetof(TalkWindowState, silent) == 0x1e46, "TalkWindowState.silent");
static_assert(__builtin_offsetof(TalkWindowState, pad_1a1b) == 0x1e47, "TalkWindowState.pad_1a1b");
static_assert(sizeof(TalkWindowState) == sizeof(TalkWindow), "TalkWindowState: regenerate (tools/host_view_layout.py --remove)");
#endif

#ifdef HOST64
static_assert(__builtin_offsetof(TalkWindowMsg, pad_0000) == 0x0, "TalkWindowMsg.pad_0000");
static_assert(__builtin_offsetof(TalkWindowMsg, choiceList) == 0x408, "TalkWindowMsg.choiceList");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_0318) == 0x410, "TalkWindowMsg.pad_0318");
static_assert(__builtin_offsetof(TalkWindowMsg, nameLabel) == 0x700, "TalkWindowMsg.nameLabel");
static_assert(__builtin_offsetof(TalkWindowMsg, textBox) == 0x708, "TalkWindowMsg.textBox");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_0590) == 0x70c, "TalkWindowMsg.pad_0590");
static_assert(__builtin_offsetof(TalkWindowMsg, msgBuffer) == 0xbe8, "TalkWindowMsg.msgBuffer");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_0a20) == 0xbec, "TalkWindowMsg.pad_0a20");
static_assert(__builtin_offsetof(TalkWindowMsg, parser) == 0x14c0, "TalkWindowMsg.parser");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_12c4) == 0x14c8, "TalkWindowMsg.pad_12c4");
static_assert(__builtin_offsetof(TalkWindowMsg, runner) == 0x1600, "TalkWindowMsg.runner");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_13a8) == 0x1608, "TalkWindowMsg.pad_13a8");
static_assert(__builtin_offsetof(TalkWindowMsg, request) == 0x1618, "TalkWindowMsg.request");
static_assert(__builtin_offsetof(TalkWindowMsg, msgAttr) == 0x1620, "TalkWindowMsg.msgAttr");
static_assert(__builtin_offsetof(TalkWindowMsg, slots) == 0x1630, "TalkWindowMsg.slots");
static_assert(__builtin_offsetof(TalkWindowMsg, namedSlots) == 0x18f0, "TalkWindowMsg.namedSlots");
static_assert(__builtin_offsetof(TalkWindowMsg, namedSlotColors) == 0x19f0, "TalkWindowMsg.namedSlotColors");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_16dc) == 0x1a10, "TalkWindowMsg.pad_16dc");
static_assert(__builtin_offsetof(TalkWindowMsg, voiceInstantByMsg) == 0x1a34, "TalkWindowMsg.voiceInstantByMsg");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_16f9) == 0x1a35, "TalkWindowMsg.pad_16f9");
static_assert(__builtin_offsetof(TalkWindowMsg, catchphrase) == 0x1bf8, "TalkWindowMsg.catchphrase");
static_assert(__builtin_offsetof(TalkWindowMsg, townName) == 0x1c28, "TalkWindowMsg.townName");
static_assert(__builtin_offsetof(TalkWindowMsg, playerName) == 0x1c50, "TalkWindowMsg.playerName");
static_assert(__builtin_offsetof(TalkWindowMsg, friendName) == 0x1c78, "TalkWindowMsg.friendName");
static_assert(__builtin_offsetof(TalkWindowMsg, enemyName) == 0x1ca0, "TalkWindowMsg.enemyName");
static_assert(__builtin_offsetof(TalkWindowMsg, randomVillagerName) == 0x1cc8, "TalkWindowMsg.randomVillagerName");
static_assert(__builtin_offsetof(TalkWindowMsg, otherResidentName) == 0x1cf0, "TalkWindowMsg.otherResidentName");
static_assert(__builtin_offsetof(TalkWindowMsg, trend) == 0x1d18, "TalkWindowMsg.trend");
static_assert(__builtin_offsetof(TalkWindowMsg, impression) == 0x1d58, "TalkWindowMsg.impression");
static_assert(__builtin_offsetof(TalkWindowMsg, nickname) == 0x1d98, "TalkWindowMsg.nickname");
static_assert(__builtin_offsetof(TalkWindowMsg, compliment) == 0x1dc0, "TalkWindowMsg.compliment");
static_assert(__builtin_offsetof(TalkWindowMsg, greeting) == 0x1df0, "TalkWindowMsg.greeting");
static_assert(__builtin_offsetof(TalkWindowMsg, randomVillagerNameBuilt) == 0x1e20, "TalkWindowMsg.randomVillagerNameBuilt");
static_assert(__builtin_offsetof(TalkWindowMsg, otherResidentNameBuilt) == 0x1e21, "TalkWindowMsg.otherResidentNameBuilt");
static_assert(__builtin_offsetof(TalkWindowMsg, otherResidentIsVillager) == 0x1e22, "TalkWindowMsg.otherResidentIsVillager");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_19f7) == 0x1e23, "TalkWindowMsg.pad_19f7");
static_assert(__builtin_offsetof(TalkWindowMsg, startNotifyPending) == 0x1e40, "TalkWindowMsg.startNotifyPending");
static_assert(__builtin_offsetof(TalkWindowMsg, endNotifyPending) == 0x1e41, "TalkWindowMsg.endNotifyPending");
static_assert(__builtin_offsetof(TalkWindowMsg, choiceNotifyPending) == 0x1e42, "TalkWindowMsg.choiceNotifyPending");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_1a17) == 0x1e43, "TalkWindowMsg.pad_1a17");
static_assert(__builtin_offsetof(TalkWindowMsg, noOpenSe) == 0x1e45, "TalkWindowMsg.noOpenSe");
static_assert(__builtin_offsetof(TalkWindowMsg, pad_1a1a) == 0x1e46, "TalkWindowMsg.pad_1a1a");
static_assert(sizeof(TalkWindowMsg) == sizeof(TalkWindow), "TalkWindowMsg: regenerate (tools/host_view_layout.py --remove)");
#endif

#ifdef HOST64
static_assert(__builtin_offsetof(TalkParserTags2, pad_00) == 0x0, "TalkParserTags2.pad_00");
static_assert(__builtin_offsetof(TalkParserTags2, tagId) == 0x54, "TalkParserTags2.tagId");
#endif

#ifdef HOST64
static_assert(__builtin_offsetof(TalkParserCondTags, window) == 0x30, "TalkParserCondTags.window");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_28) == 0x38, "TalkParserCondTags.unk_28");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_2c) == 0x40, "TalkParserCondTags.unk_2c");
static_assert(__builtin_offsetof(TalkParserCondTags, printStatus) == 0x44, "TalkParserCondTags.printStatus");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_34) == 0x48, "TalkParserCondTags.unk_34");
static_assert(__builtin_offsetof(TalkParserCondTags, tag) == 0x50, "TalkParserCondTags.tag");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_4c) == 0x70, "TalkParserCondTags.unk_4c");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_50) == 0x74, "TalkParserCondTags.unk_50");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_54) == 0x78, "TalkParserCondTags.unk_54");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_58) == 0x7c, "TalkParserCondTags.unk_58");
static_assert(__builtin_offsetof(TalkParserCondTags, textColor) == 0x80, "TalkParserCondTags.textColor");
static_assert(__builtin_offsetof(TalkParserCondTags, unk_60) == 0x88, "TalkParserCondTags.unk_60");
static_assert(__builtin_offsetof(TalkParserCondTags, choiceDeferred) == 0x128, "TalkParserCondTags.choiceDeferred");
#endif

#ifdef HOST64
static_assert(__builtin_offsetof(TalkParserVarTags, window) == 0x30, "TalkParserVarTags.window");
static_assert(__builtin_offsetof(TalkParserVarTags, pad_28) == 0x38, "TalkParserVarTags.pad_28");
static_assert(__builtin_offsetof(TalkParserVarTags, printStatus) == 0x44, "TalkParserVarTags.printStatus");
static_assert(__builtin_offsetof(TalkParserVarTags, pad_34) == 0x48, "TalkParserVarTags.pad_34");
static_assert(__builtin_offsetof(TalkParserVarTags, tag) == 0x50, "TalkParserVarTags.tag");
static_assert(__builtin_offsetof(TalkParserVarTags, pad_4c) == 0x70, "TalkParserVarTags.pad_4c");
static_assert(__builtin_offsetof(TalkParserVarTags, instant) == 0x72, "TalkParserVarTags.instant");
static_assert(__builtin_offsetof(TalkParserVarTags, fastForwardLock) == 0x73, "TalkParserVarTags.fastForwardLock");
static_assert(__builtin_offsetof(TalkParserVarTags, pad_50) == 0x74, "TalkParserVarTags.pad_50");
static_assert(__builtin_offsetof(TalkParserVarTags, waitTimer) == 0x7c, "TalkParserVarTags.waitTimer");
static_assert(__builtin_offsetof(TalkParserVarTags, textColor) == 0x80, "TalkParserVarTags.textColor");
#endif

#ifdef HOST64
static_assert(__builtin_offsetof(TalkParserTags, window) == 0x30, "TalkParserTags.window");
static_assert(__builtin_offsetof(TalkParserTags, unk_28) == 0x38, "TalkParserTags.unk_28");
static_assert(__builtin_offsetof(TalkParserTags, tag) == 0x50, "TalkParserTags.tag");
static_assert(__builtin_offsetof(TalkParserTags, tagId) == 0x54, "TalkParserTags.tagId");
static_assert(__builtin_offsetof(TalkParserTags, unk_40) == 0x58, "TalkParserTags.unk_40");
static_assert(__builtin_offsetof(TalkParserTags, tagRaw) == 0x68, "TalkParserTags.tagRaw");
static_assert(__builtin_offsetof(TalkParserTags, unk_4c) == 0x70, "TalkParserTags.unk_4c");
static_assert(__builtin_offsetof(TalkParserTags, choiceDeferred) == 0x128, "TalkParserTags.choiceDeferred");
#endif
