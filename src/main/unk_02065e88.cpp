#include "types.h"
#include "text/Unk_02050288.h"

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
class Unk_02068f10_Obj;
class TalkBmgReader;
struct Unk_020cbb18_Obj;
struct Unk_020660f8_Pad;
class Unk_02066978_Owner;
class Unk_0206891c;
class TalkAutoAdvance;
struct Unk_020676b4_Tmp;
struct Unk_02067c70_Z;
class BmgMsgAttr;
class MsgString25;
class MsgString11;
class Unk_020dd38c;
class Unk_020e1c64;
class MsgString17;
class MsgString17B;
struct Unk_02067f44_Sel;
struct Unk_020682b8_Sub;
class TalkFrameView;
struct Unk_02068490_Ptrs;
struct Unk_02068558_File;
class Unk_02068848_Menu;
struct Unk_02068848_Entry;
struct Unk_02068848_Owner;
class TalkTagScanner;
class HouseData;
class TalkParserCondTags;
class Unk_020ddcf0_v13;
class Unk_02069878_Obj;
struct Unk_02069834_Owner;
class TalkParserVarTags;
class TalkParserTags2;
class Unk_0206a198_Sub;
struct Unk_0206a198_Owner;
class TalkParserTags;
class Unk_0206ad58_Ent;
class TalkCharStepper;
struct Unk_0206b1dc_State;
class Unk_0206b950_Obj;
class Unk_020a71d0_v16;
struct Unk_0206b618_Msg;
struct Unk_0206c4fc_Ent;
struct Unk_0206c56c_Obj;
struct Unk_0206c45c_Arg;

extern "C" { extern u8 gTalkMsgIndexNone; }

class ChoiceString;

class MsgTag {
public:
    MsgTag();
    u32 getArgU8();
    void func_020a72c4(u32 *a, char **b, char **c);
    void getStrings3(char **a, char **b, char **c);
    void getStrings2(char **a, char **b);
    u32 readArgBytes8Strings2(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, MsgString *s5, MsgString *s6);
    u32 getTrailingStringsSize();
    u32 readArgStrings5(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2, u8 *s3,
                      MsgString *s4, u8 *s5, MsgString *s6);
    u32 readArgStrings4(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2, u8 *s3,
                      MsgString *s4);
    u32 readArgStrings3(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2);
    u32 readArgStrings2(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0);
    void getArgU16(u16 *out);
    void getArgBytes(u8 *buf, s32 n);
    void getArgs4(u8 *a, u8 *b, u8 *c, u8 *d);
    void getArgs3(u8 *a, u8 *b, u8 *c);
    void getArgs2(u8 *a, u8 *b);
    void getArgs1(u8 *a);
    void parse(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class MsgParser {
public:
    MsgParser();
    virtual ~MsgParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    void popText();
    void pushText(u8 *p);
    void begin(u8 *p);
    BOOL step(u32 arg);
    BOOL isLeadByte(u32 c);
    void unreadTag(u8 *p);
    void skip(s32 n);
    void processTag();
    void reset();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class MsgProcessor : public MsgParser {
public:
    MsgProcessor(u8 flag);
    virtual ~MsgProcessor();

    /* 0x24 */ MsgTextLabel *unk_24;
    /* 0x28 */ u8 unk_28;
};

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
    void func_0206c45c(Unk_0206c45c_Arg *a);
    void func_0206b7a4();
    void func_0206c4b4();
    void func_0206c4fc(s32 idx);
    void func_0206c534(s32 idx);
    void func_0206c56c(Unk_0206c4fc_Ent *e);
    s32 measureLine(u32 a, BOOL b);
    void func_0206b7dc();
    void func_0206b7f0();
    void func_0206b804();
    void func_0206b818();
    void func_0206b82c();
    void func_0206b848();
    void func_0206b864();
    void func_0206b880();
    void func_0206b89c();
    void func_0206b8b8();
    void func_0206b8d4();
    void func_0206b8e8();
    void func_0206b8fc();
    void func_0206b910();
    void func_0206b924();
    void func_0206b938();
    void func_0206b940();
    void func_0206b948();
    void func_0206b950();
    void func_0206b978();
    void func_0206b9a0();
    void func_0206b9c8();
    void func_0206b9f0();
    void func_0206b9fc();
    void func_0206ba08();
    void func_0206ba14();
    void func_0206ba20();
    void func_0206ba2c();
    void func_0206ba38();
    void func_0206ba44();
    void func_0206ba50();
    void func_0206ba5c();
    void func_0206ba68();
    void func_0206ba74();
    void func_0206ba80();
    void func_0206ba8c();
    void func_0206ba98();
    void func_0206baa4();
    void func_0206bacc();
    void func_0206baf4();
    void func_0206bb1c();
    void func_0206bb44();
    void func_0206bb64();
    void func_0206bb84();
    void func_0206bba4();
    void func_0206bbc4();
    void func_0206bbe4();
    void func_0206bc04();
    void func_0206bc24();
    void func_0206bc4c();
    void func_0206bc74();
    void func_0206bc9c();
    void func_0206bcc4();
    void func_0206bcc8();
    void func_0206bd10();
    void func_0206bd28();
    void func_0206bd40();
    void func_0206bd58();
    void func_0206bd70();
    void tagGroupFf();

    /* 0x2c */ u8 *unk_2c;
    /* 0x30 */ MsgTextLabel *unk_30;
    /* 0x34 */ MsgTag unk_34;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 *unk_4c;
    /* 0x50 */ u32 unk_50;
};

class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;
    void loadMessage(u8 *p);
    s32 close();
    u8 open(const char *path);

    /* 0x04 */ u8 unk_04;
};

class TalkBmgReader : public BmgReader {
public:
    TalkBmgReader();
    virtual ~TalkBmgReader();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
};

class MsgWalker : public MsgParser {
public:
    MsgWalker() {}
    virtual ~MsgWalker() {}
    virtual BOOL canContinue();
    u8 *run(BOOL arg);
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

    /* 0x24 */ TalkWindow *unk_24;
    /* 0x28 */ TalkTextBox *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
};

struct Unk_0206b1dc_State {
    /* 0x4c */ u8 unk_4c, unk_4d, unk_4e, unk_4f;
    /* 0x50 */ s32 unk_50, unk_54, unk_58, unk_5c;
    Unk_0206b1dc_State() {
        unk_4c = 0;
        unk_4d = 0;
        unk_4e = 0;
        unk_4f = 0;
        unk_50 = 0;
        unk_54 = 0;
        unk_58 = 0;
        unk_5c = 0;
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
    void func_02069fa4();
    void func_0206a024();
    void func_0206a198();
    void func_0206a1f8();
    void func_0206a2d8();
    void func_0206a358();
    void func_0206a380();
    void func_0206a498();
    void func_0206a55c();
    void func_0206a7a8();
    void func_0206a844();
    void func_0206a93c();
    void func_0206aa84();
    void dispatchTag();
    void jumpToMessage(u8 *p);
    void selectBySlotForm(u8 *p);
    void selectByPlayerGender();
    void expandNamedSlot(s32 idx);
    void expandSlot(s32 idx);
    void expandArticle(Unk_0206ad58_Ent *ent, BOOL flag);
    BOOL stepSpeed();
    void stepSteppers();
    BOOL steppersIdle();
    void func_0206afa0();
    void resetColor();
    void clearFastForward();
    void setFastForward();
    void setPrintMode(s32 v);
    void stop();

    /* 0x24 */ TalkWindow *unk_24;
    /* 0x28 */ TalkTextBox *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ MsgTag unk_38;
    /* 0x4c */ Unk_0206b1dc_State unk_4c;
    /* 0x60 */ TalkCharStepper unk_60;
    /* 0x9c */ TalkCharStepper unk_9c;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    /* 0xdc */ u8 *unk_dc;
    /* 0xe0 */ s32 unk_e0;
};

class TalkTagScanner : public MsgWalker {
public:
    TalkTagScanner(Unk_02068848_Owner *owner);
    virtual ~TalkTagScanner();
    virtual void onTag(u8 *p);

    void reportTag();
    void resetScan();
    void func_020688ac(u8 *p);
    void tagAltText();
    void tagColor();
    void func_020689d0();
    void func_020689e4();
    void func_020689f8();
    void func_02068a0c();
    void func_02068a20();
    void func_02068a3c();
    void func_02068a58();
    void func_02068a74();
    void func_02068a90();
    void func_02068aac();
    void func_02068ac8();
    void func_02068adc();
    void func_02068af0();
    void func_02068b04();
    void func_02068b18();
    void tagSelectByPlayerGender();
    void tagCapitalizeNext();
    void tagArticleMode2();
    void tagArticleMode1();
    void func_02068b4c();
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
    void func_02068c90();
    void func_02068c94();
    void func_02068c98();
    void tagBranchSpecies();
    void func_02068d20();
    void func_02068d78();
    void func_02068dd0();
    void func_02068e40();

    void func_0206ac98(u8 *p);
    void func_0206acb0(void *p);
    void func_0206ad0c();
    void func_0206afa0(s32 a, const void *b);

    /* 0x24 */ Unk_02068848_Owner *unk_24;
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38[0x14];
    /* 0x4c */ u8 unk_4c[0x10];
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 unk_60[0x3c];
    /* 0x9c */ u8 unk_9c[0x3c];
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    u8 pad_da[6];
    /* 0xe0 */ u32 unk_e0;
};

class TalkVoice {
public:
    TalkWindow *unk_04;
    u16 unk_08, unk_0a, unk_0c;
    s32 unk_10, unk_14, unk_18;
    u8 unk_1c, unk_1d, unk_1e;
    s32 unk_20, unk_24, unk_28;

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
    void pushChar();
    void reset(s32 flag);
    void refreshVoiceType();
    void setVoiceType(s32 r);
    void func_02068290();
    void func_02068298(s32 v);
    void func_0206829c();
    void func_020682a4(s32 v);
};

class MsgString {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void copy(MsgString *p);
    void set(u8 *p);
    void clear();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class MsgString9 : public MsgString {
public:
    MsgString9();
    virtual ~MsgString9();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual const char *vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual u32 vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    void detachWindow();
    void attachWindow(u32 v);
    u32 getNameKind();
    u32 isNoSpeakerName();
    MsgString9 *func_02065f10();
    void changeSpeakerName(MsgString *p, u32 v);
    void setNoSpeakerName(u32 v);
    void setSpeakerNameStr(MsgString *p, u32 v);
    void setSpeakerName(u8 *p, u32 v);

    /* 0x20 */ MsgString9 unk_20;
    /* 0x2c */ u32 unk_2c;
    u8 pad_30[0xc];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class TalkWindowState {
public:
    TalkWindowState();
    ~TalkWindowState();
    void advance();
    void onChoiceDone();
    void reloadMessage();
    void loadNextMessage();
    void resetTextVars();
    void func_02066cfc();
    void execClosed();
    void enterClosed();
    void execClosing();
    void enterClosing();
    void execPrinting();
    void enterPrinting();
    void execWaitInput();
    void enterWaitInput();
    void execOpening();
    void enterOpening();
    void execIdle();
    void enterIdle();
    void applyStateChange();

    void stopText();
    void finish();
    void resetPrint();
    void captureClock();
    void updateShake();
    BOOL isSkipHeld();
    BOOL isAdvanceTriggered();
    BOOL checkDeviceSwitch();
    void storeInputMode();
    void loadInputMode();
    void refreshNameColor();
    void startShake(s32 a, s32 b, s32 c, s32 d);
    void *getNumber1714Text();
    void *getMinuteText();
    void *getHourText();
    void *getWeekdayText();
    void *getDayText();
    void *getMonthText();
    void *getYearText();
    s32 resetVoice();
    void setVoicePlaying(BOOL v);
    s32 onCharPrinted(s32 a);
    void draw();
    void update();
    void setSilent();
    void setKeepSe();
    void disableInput();
    void detachRequest();
    void attachRequest(TalkMsgRequest *p);
    s32 func_02067990();
    s32 func_0206799c();
    u8 isVoicePlaying();
    void *getChoiceList();
    void openChoices(s32 v);
    void setNamedSlot(s32 idx, void *p, u32 val);
    void setSlotFromString(s32 idx, s32 a, s32 b);
    s32 setSlot(s32 idx, void *p);
    void clearAdvancePending();
    void setAdvancePending();
    void unlockAdvance();
    void lockAdvance();
    void setNextMessage(u8 *src, void *s);
    BOOL setNextMessageIfUnset(u8 *src, void *s);

    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ s32 unk_0c;
    u8 pad_10[4];
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ u8 unk_18;
    u8 pad_19[3];
    /* 0x001c */ u8 unk_1c[0x9c - 0x1c];
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s16 unk_a0;
    u8 pad_a2[2];
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ u8 unk_b4[0x314 - 0xb4];
    /* 0x0314 */ u8 unk_314[0x58c - 0x314];
    /* 0x058c */ u8 unk_58c[0xa1c - 0x58c];
    /* 0x0a1c */ u8 unk_a1c[0x12c0 - 0xa1c];
    /* 0x12c0 */ u8 unk_12c0[0x30];
    /* 0x12f0 */ s32 unk_12f0;
    u8 pad_12f4[0x1398 - 0x12f4];
    /* 0x1398 */ u8 unk_1398;
    u8 pad_1399[0x13a4 - 0x1399];
    /* 0x13a4 */ u8 unk_13a4[0xc];
    /* 0x13b0 */ TalkMsgRequest *unk_13b0;
    /* 0x13b4 */ u8 unk_13b4[0xc];
    /* 0x13c0 */ u8 unk_13c0[0x15fc - 0x13c0];
    /* 0x15fc */ u8 unk_15fc[0x16cc - 0x15fc];
    /* 0x16cc */ u32 unk_16cc[4];
    /* 0x16dc */ u8 unk_16dc[0x1708 - 0x16dc];
    /* 0x1708 */ s32 unk_1708;
    /* 0x170c */ u8 unk_170c;
    /* 0x170d */ u8 unk_170d;
    /* 0x170e */ u8 unk_170e;
    /* 0x170f */ u8 unk_170f;
    /* 0x1710 */ s32 unk_1710;
    /* 0x1714 */ s32 unk_1714;
    /* 0x1718 */ s32 unk_1718;
    /* 0x171c */ u8 unk_171c[0x1748 - 0x171c];
    /* 0x1748 */ u8 unk_1748[0x177c - 0x1748];
    /* 0x177c */ u8 unk_177c[0x17a8 - 0x177c];
    /* 0x17a8 */ u8 unk_17a8[0x17dc - 0x17a8];
    /* 0x17dc */ u8 unk_17dc[0x1808 - 0x17dc];
    /* 0x1808 */ u8 unk_1808[0x1834 - 0x1808];
    /* 0x1834 */ u8 unk_1834[0x1860 - 0x1834];
    /* 0x1860 */ u8 unk_1860[0x1880 - 0x1860];
    /* 0x1880 */ u8 unk_1880[0x189c - 0x1880];
    /* 0x189c */ u8 unk_189c[0x18b8 - 0x189c];
    /* 0x18b8 */ u8 unk_18b8[0x18d4 - 0x18b8];
    /* 0x18d4 */ u8 unk_18d4[0x18f0 - 0x18d4];
    /* 0x18f0 */ u8 unk_18f0[0x190c - 0x18f0];
    /* 0x190c */ u8 unk_190c[0x1928 - 0x190c];
    /* 0x1928 */ u8 unk_1928[0x195c - 0x1928];
    /* 0x195c */ u8 unk_195c[0x1990 - 0x195c];
    /* 0x1990 */ u8 unk_1990[0x19ac - 0x1990];
    /* 0x19ac */ u8 unk_19ac[0x19d0 - 0x19ac];
    /* 0x19d0 */ u8 unk_19d0[0x19f7 - 0x19d0];
    /* 0x19f7 */ u8 unk_19f7;
    /* 0x19f8 */ u8 unk_19f8[0x1a12 - 0x19f8];
    /* 0x1a12 */ u8 unk_1a12;
    /* 0x1a13 */ u8 unk_1a13;
    u8 pad_1a14[2];
    /* 0x1a16 */ u8 unk_1a16;
    /* 0x1a17 */ u8 unk_1a17;
    /* 0x1a18 */ u8 unk_1a18;
    /* 0x1a19 */ u8 unk_1a19;
    /* 0x1a1a */ u8 unk_1a1a;
    u8 pad_1a1b;
};

// library object, 0x34 bytes (polymorphic)
struct Unk_020a71d0_v16 {
    u8 pad[0x34];
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

    u8 pad_0000[0x314];
    /* 0x0314 */ u8 unk_314[4];
    u8 pad_0318[0x270];
    /* 0x0588 */ TextLabel *unk_588;
    /* 0x058c */ u8 unk_58c[4];
    u8 pad_0590[0x48c];
    /* 0x0a1c */ u8 unk_a1c[4];
    u8 pad_0a20[0x8a0];
    /* 0x12c0 */ u8 unk_12c0[4];
    u8 pad_12c4[0xe0];
    /* 0x13a4 */ u8 unk_13a4[4];
    u8 pad_13a8[0x8];
    union {
        /* 0x13b0 */ Unk_02066978_Owner *unk_13b0;
        TalkMsgRequest *unk_13b0_v16;
    };
    /* 0x13b4 */ u8 unk_13b4[0xc];
    union {
        /* 0x13c0 */ u8 unk_13c0[11][0x34];
        Unk_020a71d0_v16 unk_13c0_v16[11];
    };
    union {
        /* 0x15fc */ u8 unk_15fc[4][0x34];
        Unk_020a71d0_v16 unk_15fc_v16[4];
    };
    /* 0x16cc */ u32 unk_16cc[4];
    u8 pad_16dc[0x1c];
    /* 0x16f8 */ u8 unk_16f8;
    u8 pad_16f9[0x167];
    /* 0x1860 */ u8 unk_1860[0x20];
    /* 0x1880 */ u8 unk_1880[0x1c];
    /* 0x189c */ u8 unk_189c[0x1c];
    /* 0x18b8 */ u8 unk_18b8[0x1c];
    /* 0x18d4 */ u8 unk_18d4[0x1c];
    /* 0x18f0 */ u8 unk_18f0[0x1c];
    /* 0x190c */ u8 unk_190c[0x1c];
    /* 0x1928 */ u8 unk_1928[0x34];
    /* 0x195c */ u8 unk_195c[0x34];
    /* 0x1990 */ u8 unk_1990[0x1c];
    /* 0x19ac */ u8 unk_19ac[0x24];
    /* 0x19d0 */ u8 unk_19d0[0x24];
    /* 0x19f4 */ u8 unk_19f4;
    /* 0x19f5 */ u8 unk_19f5;
    /* 0x19f6 */ u8 unk_19f6;
    u8 pad_19f7[0x1d];
    /* 0x1a14 */ u8 unk_1a14;
    /* 0x1a15 */ u8 unk_1a15;
    /* 0x1a16 */ u8 unk_1a16;
    u8 pad_1a17[0x2];
    /* 0x1a19 */ u8 unk_1a19;
    u8 pad_1a1a[3];
};

// Entries of the owner (0x34 bytes)
class Unk_0206ad58_Ent {
public:
    virtual ~Unk_0206ad58_Ent();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_04[0x30];
};

class MsgString33 : public Unk_0206ad58_Ent {
public:
    MsgString33();
    ~MsgString33();
};

class MsgRunner { public: u32 pad[0xc / 4]; MsgRunner(MsgWalker *p); };

class TalkFrame {
public:
    TalkFrame();
    BOOL load(s32 a, u32 b, s32 c, u8 d);
    TalkFrame *construct();
    TalkFrame *destruct();
    void draw();
    void update();
    void freeBuffers();
    void func_020682b8();
    void func_020682c4();
    void func_020683bc();
    void func_020683d0();
    BOOL loadCharacters(void *file);
    BOOL loadPalette(void *file);
    BOOL loadScreen(void *file, BOOL alt);
    void setTextPalette(s32 idx);
    void setNamePalette(s32 a, BOOL b);

    /* 0x00 */ u16 *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ u8 unk_0c[0x44];
    /* 0x50 */ u8 unk_50[0x24];
    /* 0x74 */ u32 unk_74;
    /* 0x78 */ u32 unk_78;
    /* 0x7c */ u32 unk_7c;
};

class TalkTextBox {
public:
    TalkTextBox(TalkWindow *o);
    ~TalkTextBox();
    void markLineDirty();
    void func_0206b454();
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
    void func_0206b6d0(u32 v);
    void func_0206b72c();

    /* 0x000 */ u8 unk_00[0x400];
    /* 0x400 */ u32 unk_400;
    /* 0x404 */ u8 *unk_404[3];
    /* 0x410 */ u32 unk_410;
    /* 0x414 */ u32 unk_414[3];
    /* 0x420 */ TextLabel *unk_420[3];
    /* 0x42c */ u32 unk_42c[3];
    /* 0x438 */ u8 unk_438[3];
    /* 0x43b */ u8 unk_43b;
    /* 0x43c */ TalkRenderProcessor unk_43c;
};

class TalkMsgBuffer {
public:
    TalkMsgBuffer();
    u32 getBufferSize();
    u8 *getBuffer();
    void clear();

    /* 0x00 */ u32 unk_00[0xa4 / 4];
    /* 0xa4 */ u8 unk_a4[0x800];
};

class ChoiceMenu {
public:
    ChoiceMenu();
    void open();
    void setSliderChoices(ChoiceList *p);
    void setListChoices(ChoiceList *p);
    u32 pad[0x260 / 4];
};

class ChoiceList {
public:
    ChoiceList();
    s32 setCancelToLast();
    void setCount(s32 v);
    ChoiceString *getLastText();
    ChoiceString *getFirstText();
    ChoiceEntry *getEntry(s32 i);
    void clear();
    u32 pad[0x274 / 4];
};

struct Unk_02067c70_Z { u32 a; u16 b; u32 c, d, e, f; Unk_02067c70_Z() { a = 0; b = 0; c = 0; d = 0; e = 0; f = 0; } };

class BmgMsgAttr { public: u32 pad[0xc / 4]; BmgMsgAttr(); };

class MsgString25 { public: u32 pad[0x2c / 4]; MsgString25(); };

class MsgString11 { public: u32 pad[0x20 / 4]; MsgString11(); };

class Unk_020dd38c { public: u32 pad[0x1c / 4]; Unk_020dd38c(); };

class Unk_020e1c64 { public: u32 pad[0x1c / 4]; Unk_020e1c64(); };

class MsgString17 { public: u32 pad[0x24 / 4]; MsgString17(); };

class MsgString17B { public: u32 pad[0x24 / 4]; MsgString17B(); };

struct TalkWindow {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14;
    u8 unk_18;
    TalkFrame unk_1c;
    Unk_02067c70_Z unk_9c;
    ChoiceMenu unk_b4;
    ChoiceList unk_314;
    u32 unk_588;
    TalkTextBox unk_58c;
    TalkMsgBuffer unk_a1c;
    TalkParser unk_12c0;
    MsgRunner unk_13a4;
    Unk_02067f44_Sel *unk_13b0;
    BmgMsgAttr unk_13b4;
    MsgString33 unk_13c0[11];
    MsgString33 unk_15fc[4];
    u8 *unk_16cc[4];
    TalkVoice unk_16dc;
    u32 unk_1708;
    u32 unk_170c_pad;
    u32 unk_1710, unk_1714, unk_1718;
    MsgString25 unk_171c;
    MsgString33 unk_1748;
    MsgString25 unk_177c_a;
    MsgString33 unk_17a8;
    MsgString25 unk_17dc, unk_1808, unk_1834;
    MsgString11 unk_1860;
    Unk_020dd38c unk_1880;
    Unk_020e1c64 unk_189c, unk_18b8, unk_18d4, unk_18f0, unk_190c;
    MsgString33 unk_1928, unk_195c;
    Unk_020e1c64 unk_1990;
    MsgString17 unk_19ac;
    MsgString17B unk_19d0;
    u8 unk_19f4, unk_19f5, unk_19f6, unk_19f7;
    u8 unk_19f8[0x1a];
    u8 unk_1a12, unk_1a13, unk_1a14, unk_1a15, unk_1a16, unk_1a17, unk_1a18, unk_1a19, unk_1a1a;

    TalkWindow();
};

class MsgTextLabel : public TextLabel {
public:
    MsgTextLabel(s32 arg1, s32 arg2, s32 arg3);
    virtual ~MsgTextLabel();
    virtual void draw();
    virtual u32 measureWidth();

    void onChar(u32 c);
    void onEnd();
    void onBegin();
    void setProcessor(MsgProcessor *v);
};

class ChoiceEntry {
public:
    u8 *getWeightPtr();
    u8 *getValuePtr();
    MsgString *getText();
};

class Unk_02068f10_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34(s32 a, s32 b);
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void *vfunc_68();
};

struct Unk_020cbb18_Obj { u8 pad[0x64]; u32 unk_64; };

struct Unk_020660f8_Pad { s32 v[2]; Unk_020660f8_Pad() {} ~Unk_020660f8_Pad() {} };

class Unk_02066978_Owner {
public:
    virtual ~Unk_02066978_Owner();
    virtual void vfunc_08();
    virtual u32 vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void *vfunc_68();
};

class Unk_0206891c {
public:
    Unk_0206891c(void *owner);
    ~Unk_0206891c();
    void func_020688ac(u32 v);
    u8 pad[0x44];
};

class TalkAutoAdvance {
public:
    BOOL tick();
    void start(s32 v);
    void stop();
    u8 pad[0x10];
    s32 unk_10;
};

struct Unk_020676b4_Tmp {
    Unk_020676b4_Tmp();
    ~Unk_020676b4_Tmp();
    u8 b[0x38];
};

struct Unk_02067f44_Sel {
    virtual void vfunc_00(); virtual void vfunc_04(); virtual void vfunc_08(); virtual void vfunc_0c();
    virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1c();
    virtual void vfunc_20(); virtual void vfunc_24(); virtual void vfunc_28(); virtual void vfunc_2c();
    virtual void vfunc_30(); virtual void vfunc_34(); virtual void vfunc_38(); virtual void vfunc_3c();
    virtual void vfunc_40(); virtual void vfunc_44(); virtual void vfunc_48(); virtual void vfunc_4c();
    virtual void vfunc_50(); virtual void vfunc_54(); virtual void vfunc_58(); virtual void vfunc_5c();
    virtual void vfunc_60(); virtual void vfunc_64();
    virtual void *vfunc_68();
    virtual s32 vfunc_6c();
};

struct Unk_020682b8_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class TalkFrameView {
public:
    u8 pad_00[0x0c];
    Unk_020682b8_Sub unk_0c;
    u8 pad_10[0x74 - 0x10];
    s32 unk_74, unk_78, unk_7c;
    void func_020682b8();
    void func_020682c4();
    void func_020682f0();
    void func_02068304();
    BOOL isArrowEndDone();
    BOOL isArrowNextDone();
    BOOL isArrowWaiting();
    BOOL isArrowHidden();
    void func_020683bc();
    void func_020683d0();
    void showArrowEnd();
    void showArrowNext();
    void showArrowWait();
    void hideArrow();
    void setScroll(s32 a, s32 b);
    void setScrollY(s32 b);
};

struct Unk_02068490_Ptrs {
    void *a;
    u16 *b;
    void *c;
};

struct Unk_02068558_File {
    u32 v[0x12];
};

class Unk_02068848_Menu {
public:
    virtual ~Unk_02068848_Menu();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34(s32 a, s32 b);
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64(u32 v);
    virtual s32 vfunc_68();
};

struct Unk_02068848_Entry {
    u8 unk_00[0x34];
};

struct Unk_02068848_Owner {
    u8 pad_0000[0x13b0];
    /* 0x13b0 */ Unk_02068848_Menu *unk_13b0;
    u8 pad_13b4[0x13c0 - 0x13b4];
    /* 0x13c0 */ Unk_02068848_Entry unk_13c0[11];
    /* 0x15fc */ Unk_02068848_Entry unk_15fc[4];
    u8 pad_16cc[0x1704 - 0x16cc];
    /* 0x1704 */ u32 unk_1704;
    u8 pad_1708[0x1710 - 0x1708];
    /* 0x1710 */ u32 unk_1710;
};

class HouseData {
public:
    s32 func_020604c4();
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

    void func_0206ac98(u8 *p);
    void func_0206ad58(s32 k);
    void func_0206adb8(s32 k);
    void func_0206afa0(s32 line, const char *file);

    /* 0x24 */ u8 *unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ MsgTag unk_38;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60[0xd8 - 0x60];
    /* 0xd8 */ u8 unk_d8;
};

class Unk_020ddcf0_v13 {
public:
    virtual ~Unk_020ddcf0_v13();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 v);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void onActionTag4(u32 v);
    MsgString9 *func_02065f10();
};

class Unk_02069878_Obj {
public:
    virtual ~Unk_02069878_Obj();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_02069834_Owner {
    u8 pad_00[0xb4];
    /* 0x00b4 */ u8 unk_b4[0x13b0 - 0xb4];
    /* 0x13b0 */ Unk_020ddcf0_v13 *unk_13b0;
    u8 pad_13b4[0x16f9 - 0x13b4];
    /* 0x16f9 */ u8 unk_16f9;
    /* 0x16fa */ u8 unk_16fa;
    u8 pad_16fb[0x189c - 0x16fb];
    /* 0x189c */ Unk_02069878_Obj unk_189c;
    u8 pad_18a0[0x19d0 - 0x18a0];
    /* 0x19d0 */ Unk_02069878_Obj unk_19d0;
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
    void func_02069e24();
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

    /* 0x24 */ Unk_02069834_Owner *unk_24;
    u8 pad_28[8];
    /* 0x30 */ s32 unk_30;
    u8 pad_34[4];
    /* 0x38 */ MsgTag unk_38;
    u8 pad_4c[2];
    /* 0x4e */ u8 unk_4e;
    /* 0x4f */ u8 unk_4f;
    u8 pad_50[8];
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
};

class TalkParserTags2 {
public:
    void tagGroupFf();
    void func_02068950();
    void func_020689a0();
    void func_02068b44();
    void func_02068b3c();
    void func_02068b34();
    void func_02068b2c();
    void func_02068b18();
    void func_02068b04();
    void func_02068af0();
    void func_02068adc();
    void func_02068ac8();
    void func_02068aac();
    void func_02068a90();
    void func_02068a74();
    void func_02068a58();
    void func_02068a3c();
    void func_02068a20();
    void func_02068a0c();
    void func_020689f8();
    void func_020689e4();
    void func_020689d0();
    void func_02069fa0();
    void tagGroup0b();
    /* 0x00 */ u8 pad_00[0x3c];
    /* 0x3c */ u32 unk_3c;
};

class Unk_0206a198_Sub {
public:
    virtual ~Unk_0206a198_Sub();

    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
};

struct Unk_0206a198_Owner {
    /* 0x0000 */ u8 pad[0x13b0];
    /* 0x13b0 */ Unk_0206a198_Sub *unk_13b0;
};

class TalkParserTags : public MsgParser {
public:

    void func_02068b4c();
    void func_02068b50();
    void func_02068b70();
    void func_02068b90();
    void func_02068bb0();
    void func_02068bd0();
    void func_02068bf0();
    void func_02068c10();
    void func_02068c30();
    void func_02068c50();
    void func_02068c70();
    void func_02068c90();
    void func_02068c94();
    void func_02068c98();
    void func_02068c9c();
    void func_02068d20();
    void func_02068d78();
    void func_02068dd0();
    void func_02068e40();
    void func_02068e9c();
    void func_02068f10();
    void func_02068f9c();
    void func_02068ffc();
    void func_0206905c();
    void func_020690d0();
    void func_0206912c();
    void func_020691bc();
    void func_0206920c();
    void func_02069258();
    void func_02069360();
    void func_020693a0();
    void func_020693fc();
    void func_02069400();
    void func_0206945c();
    void func_0206949c();
    void func_020694a8();
    void func_020694b4();
    void func_020694c0();
    void func_020694cc();
    void func_020694d8();
    void func_020694e4();
    void func_020694f0();
    void func_020694fc();
    void func_02069508();
    void func_02069514();
    void func_02069520();
    void func_0206952c();
    void func_02069538();
    void func_02069544();
    void func_02069550();
    void func_020695bc();
    void func_02069618();
    void func_02069674();
    void func_020696d0();
    void func_020696f0();
    void func_02069710();
    void func_02069730();
    void func_02069750();
    void func_02069770();
    void func_02069790();
    void func_020697b0();
    void func_020697f4();
    void func_02069834();
    void func_02069878();
    void func_020698bc();
    void func_020698e8();
    void func_02069914();
    void func_02069940();
    void func_0206996c();
    void func_0206998c();
    void func_020699a4();
    void func_020699bc();
    void func_020699d4();
    void func_020699ec();
    void func_02069ad0();
    void func_02069b94();
    void func_02069c34();
    void func_02069cb8();
    void func_02069cd8();
    void func_02069cfc();
    void func_02069d20();
    void func_02069d44();
    void func_02069d68();
    void func_02069d8c();
    void func_02069dc0();
    void func_02069df0();
    void func_02069e24();
    void func_02069e28();
    void func_02069e70();
    void func_02069e88();
    void func_02069ea0();
    void func_02069ec4();
    void func_02069ee8();
    void func_02069efc();
    void func_02069f28();
    void func_02069f40();
    void func_02069f58();
    void func_02069f70();
    void func_02069f88();
    void func_02069fa0();
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

    /* 0x24 */ Unk_0206a198_Owner *unk_24;
    /* 0x28 */ u8 unk_28[0x10];
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40[0x8];
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 unk_4c[0x8c];
    /* 0xd8 */ u8 unk_d8;
};

// polymorphic object seen through the owner's member objects
struct Unk_0206b950_Obj {
    virtual ~Unk_0206b950_Obj();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_0206b618_Msg {
    u8 pad[8];
    s32 unk_08;
    u8 pad2[4];
    s32 unk_10;
};

struct Unk_0206c4fc_Ent {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    u32 unk_04;
    u8 unk_08[0x2c];
};

struct Unk_0206c56c_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_0206c45c_Arg {
    u32 unk_00, unk_04, unk_08;
    s32 unk_0c;
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
extern "C" { Unk_0206c56c_Obj *String_GetArticle(u8 *key); }
extern "C" { void *PlayerData_GetCurrent(); }
extern "C" { void *_ZN10PlayerData11getPlayerIdEv(void *); }
extern "C" { s32 _ZN8PlayerId9getGenderEv(void *); }
typedef void (TalkRenderProcessor::*Unk_020ddc64_Fn)();
extern "C" void MI_CpuFill8(void *dst, u32 value, u32 size);

}
void TalkMsgBuffer::clear() {
    using namespace n17;
    MI_CpuFill8(unk_a4, 0, 0x800);
}
u8 *TalkMsgBuffer::getBuffer() {
    using namespace n17;
    return unk_a4;
}
u32 TalkMsgBuffer::getBufferSize() {
    using namespace n17;
    return 0x800;
}
TalkRenderProcessor::TalkRenderProcessor(u8 *owner) : MsgProcessor(1), unk_2c(owner), unk_30(0) {
    using namespace n17;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_30 = MsgTextLabel_CreateVram(0, 0x14, 2);
    if (unk_30 != 0) unk_30->setProcessor(this);
}
TalkRenderProcessor::~TalkRenderProcessor() {
    using namespace n17;
    if (unk_30 != 0) MsgTextLabel_Destroy(unk_30);
}
s32 TalkRenderProcessor::measureLine(u32 a, BOOL b) {
    using namespace n17;
    s32 r = 0;
    if (b != 0) {
        if (unk_30 != 0) {
            unk_30->unk_10 = a;
            unk_30->alignCenter();
            r = unk_30->unk_30;
            unk_30->unk_10 = 0;
        }
    }
    return r;
}
void TalkRenderProcessor::onBegin() {
    using namespace n17;
    if (unk_30 != 0) {
        unk_50 = 0;
        unk_48 = 0;
        unk_4c = 0;
        unk_30->onBegin();
    }
}
void TalkRenderProcessor::onEnd() {
    using namespace n17;
    if (unk_30 != 0) unk_30->onEnd();
}
void TalkRenderProcessor::onChar(u32 c) {
    using namespace n17;
    if (unk_30 != 0) unk_30->onChar(c);
    if (unk_04 == unk_48) {
        unk_48 = 0;
        popText();
    }
    if (unk_04 == unk_4c) {
        unk_4c = 0;
        popText();
    }
}
void TalkRenderProcessor::onTag(u8 *p) {
    using namespace n17;
    unk_34.parse(p);
    dispatchTag();
}
void TalkRenderProcessor::func_0206c56c(Unk_0206c4fc_Ent *e) {
    using namespace n17;
    u8 *k = e->unk_08 - 0;
    Unk_0206c56c_Obj *o = 0;
    if (unk_50 == 0) {
        o = String_GetArticle(k + 8);
    } else if (unk_50 == 1) {
        o = String_GetArticle(k + 9);
    }
    if (o != 0) pushText(o->vfunc_0c());
    unk_50 = 0;
}
void TalkRenderProcessor::func_0206c534(s32 idx) {
    using namespace n17;
    Unk_0206c4fc_Ent *e = (Unk_0206c4fc_Ent *)(unk_2c + 0x13c0 + idx * 0x34);
    pushText(e->vfunc_0c());
    func_0206c56c(e);
}
void TalkRenderProcessor::func_0206c4fc(s32 idx) {
    using namespace n17;
    Unk_0206c4fc_Ent *e = (Unk_0206c4fc_Ent *)(unk_2c + 0x15fc + idx * 0x34);
    pushText(e->vfunc_0c());
    func_0206c56c(e);
}
void TalkRenderProcessor::func_0206c4b4() {
    using namespace n17;
    char *p0, *p1;
    unk_34.getStrings2(&p0, &p1);
    if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0) {
        if (p0 != 0) pushText((u8 *)p0);
    } else {
        if (p1 != 0) {
            unk_4c = unk_04;
            pushText((u8 *)p1);
        }
    }
}
void TalkRenderProcessor::func_0206c45c(Unk_0206c45c_Arg *a) {
    using namespace n17;
    char *p0, *p1, *p2;
    unk_34.getStrings3(&p0, &p1, &p2);
    if (a->unk_0c == 0) {
        if (p0 != 0) pushText((u8 *)p0);
    } else if (a->unk_0c == 1) {
        if (p1 != 0) pushText((u8 *)p1);
    } else if (a->unk_0c == 2) {
        if (p2 != 0) {
            unk_4c = unk_04;
            pushText((u8 *)p2);
        }
    }
}
void TalkRenderProcessor::dispatchTag() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[12] = { &TalkRenderProcessor::tagGroup00, &TalkRenderProcessor::tagGroup01, &TalkRenderProcessor::tagGroup02, 0, &TalkRenderProcessor::tagGroup04, 0, 0, 0, 0, 0, 0, &TalkRenderProcessor::tagGroup0b };
    s32 i = unk_34.unk_00;
    Unk_020ddc64_Fn f = 0;
    if (i == 0xff) f = &TalkRenderProcessor::tagGroupFf;
    else if (i < 12) f = tbl[i];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGroup00() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[11] = { &TalkRenderProcessor::func_0206bd70, &TalkRenderProcessor::func_0206bd58, 0, 0, 0, 0, &TalkRenderProcessor::func_0206bd40, &TalkRenderProcessor::func_0206bd28, &TalkRenderProcessor::func_0206bd10, 0, 0 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    (this->*f)();
}
void TalkRenderProcessor::tagGroup01() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[17] = { 0, 0, 0, 0, 0, 0, &TalkRenderProcessor::func_0206bcc8, &TalkRenderProcessor::func_0206bcc4, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGroup02() {
    using namespace n17;
    skip(unk_34.getTrailingStringsSize());
}
void TalkRenderProcessor::tagGroup04() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[35] = { &TalkRenderProcessor::func_0206bc9c, &TalkRenderProcessor::func_0206bc74, &TalkRenderProcessor::func_0206bc4c, &TalkRenderProcessor::func_0206bc24, &TalkRenderProcessor::func_0206bc04, &TalkRenderProcessor::func_0206bbe4, &TalkRenderProcessor::func_0206bbc4, &TalkRenderProcessor::func_0206bba4, &TalkRenderProcessor::func_0206bb84, &TalkRenderProcessor::func_0206bb64, &TalkRenderProcessor::func_0206bb44, &TalkRenderProcessor::func_0206bb1c, &TalkRenderProcessor::func_0206baf4, &TalkRenderProcessor::func_0206bacc, &TalkRenderProcessor::func_0206baa4, &TalkRenderProcessor::func_0206ba98, &TalkRenderProcessor::func_0206ba8c, &TalkRenderProcessor::func_0206ba80, &TalkRenderProcessor::func_0206ba74, &TalkRenderProcessor::func_0206ba68, &TalkRenderProcessor::func_0206ba5c, &TalkRenderProcessor::func_0206ba50, &TalkRenderProcessor::func_0206ba44, &TalkRenderProcessor::func_0206ba38, &TalkRenderProcessor::func_0206ba2c, &TalkRenderProcessor::func_0206ba20, &TalkRenderProcessor::func_0206ba14, &TalkRenderProcessor::func_0206ba08, &TalkRenderProcessor::func_0206b9fc, &TalkRenderProcessor::func_0206b9f0, &TalkRenderProcessor::func_0206b9c8, &TalkRenderProcessor::func_0206b9a0, 0, &TalkRenderProcessor::func_0206b978, &TalkRenderProcessor::func_0206b950 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::tagGroup0b() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[20] = { 0, &TalkRenderProcessor::func_0206b948, &TalkRenderProcessor::func_0206b940, 0, &TalkRenderProcessor::func_0206b938, &TalkRenderProcessor::func_0206b924, &TalkRenderProcessor::func_0206b910, &TalkRenderProcessor::func_0206b8fc, &TalkRenderProcessor::func_0206b8e8, &TalkRenderProcessor::func_0206b8d4, &TalkRenderProcessor::func_0206b8b8, &TalkRenderProcessor::func_0206b89c, &TalkRenderProcessor::func_0206b880, &TalkRenderProcessor::func_0206b864, &TalkRenderProcessor::func_0206b848, &TalkRenderProcessor::func_0206b82c, &TalkRenderProcessor::func_0206b818, &TalkRenderProcessor::func_0206b804, &TalkRenderProcessor::func_0206b7f0, &TalkRenderProcessor::func_0206b7dc };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}

// ======== unk_0206b4e4.cpp ========
#define unk_2c ((TalkWindowMsg *)unk_2c)
#define unk_13b0 unk_13b0_v16
#define unk_13c0 unk_13c0_v16
#define unk_15fc unk_15fc_v16
#define Unk_020a71d0 Unk_020a71d0_v16
#define Unk_0206b7dc_Arg Unk_0206c45c_Arg
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
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState17getNumber1714TextEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState13getMinuteTextEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState11getHourTextEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState14getWeekdayTextEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState10getDayTextEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState12getMonthTextEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN15TalkWindowState11getYearTextEv(void *); }
typedef void (TalkRenderProcessor::*Unk_0206bd88_Fn)();

}
void TalkRenderProcessor::tagGroupFf() {
    using namespace n16;
    static Unk_0206bd88_Fn tbl[3] = { 0, 0, &TalkRenderProcessor::func_0206b7a4 };
    Unk_0206bd88_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
void TalkRenderProcessor::func_0206bd70() {
    using namespace n16; pushText(Text_GetSpecialCharStr6()); }
void TalkRenderProcessor::func_0206bd58() {
    using namespace n16; pushText(Text_GetSpecialCharStr7()); }
void TalkRenderProcessor::func_0206bd40() {
    using namespace n16; pushText(Text_GetSpecialCharStr5()); }
void TalkRenderProcessor::func_0206bd28() {
    using namespace n16; pushText(Text_GetSpecialCharStr4()); }
void TalkRenderProcessor::func_0206bd10() {
    using namespace n16; pushText(Text_GetSpecialCharStr1()); }
void TalkRenderProcessor::func_0206bcc8() {
    using namespace n16;
    u32 base = (u32)unk_04;
    u32 r = Msg_FindTag(base, 1, 7);
    if (r) {
        if (unk_2c->buildGreeting()) {
            skip(r - base);
            pushText(((Unk_0206b950_Obj *)unk_2c->unk_19d0)->vfunc_0c());
        }
    }
}
void TalkRenderProcessor::func_0206bcc4() {
    using namespace n16;}
void TalkRenderProcessor::func_0206bc9c() {
    using namespace n16;
    unk_2c->buildPlayerName();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_189c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bc74() {
    using namespace n16;
    pushText(unk_2c->unk_13b0->func_02065f10()->vfunc_0c());
}
void TalkRenderProcessor::func_0206bc4c() {
    using namespace n16;
    unk_2c->buildCatchphrase();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_1860)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bc24() {
    using namespace n16;
    unk_2c->buildTownName();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_1880)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bc04() {
    using namespace n16;
    pushText(_ZN15TalkWindowState11getYearTextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bbe4() {
    using namespace n16;
    pushText(_ZN15TalkWindowState12getMonthTextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bbc4() {
    using namespace n16;
    pushText(_ZN15TalkWindowState10getDayTextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bba4() {
    using namespace n16;
    pushText(_ZN15TalkWindowState14getWeekdayTextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bb84() {
    using namespace n16;
    pushText(_ZN15TalkWindowState11getHourTextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bb64() {
    using namespace n16;
    pushText(_ZN15TalkWindowState13getMinuteTextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bb44() {
    using namespace n16;
    pushText(_ZN15TalkWindowState17getNumber1714TextEv(unk_2c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bb1c() {
    using namespace n16;
    unk_2c->buildFriendName();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_18b8)->vfunc_0c());
}
void TalkRenderProcessor::func_0206baf4() {
    using namespace n16;
    unk_2c->buildEnemyName();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_18d4)->vfunc_0c());
}
void TalkRenderProcessor::func_0206bacc() {
    using namespace n16;
    unk_2c->buildRandomVillagerName();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_18f0)->vfunc_0c());
}
void TalkRenderProcessor::func_0206baa4() {
    using namespace n16;
    unk_2c->buildOtherResidentName();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_190c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206ba98() {
    using namespace n16; func_0206c534(0); }
void TalkRenderProcessor::func_0206ba8c() {
    using namespace n16; func_0206c534(1); }
void TalkRenderProcessor::func_0206ba80() {
    using namespace n16; func_0206c534(2); }
void TalkRenderProcessor::func_0206ba74() {
    using namespace n16; func_0206c534(3); }
void TalkRenderProcessor::func_0206ba68() {
    using namespace n16; func_0206c534(4); }
void TalkRenderProcessor::func_0206ba5c() {
    using namespace n16; func_0206c534(5); }
void TalkRenderProcessor::func_0206ba50() {
    using namespace n16; func_0206c534(6); }
void TalkRenderProcessor::func_0206ba44() {
    using namespace n16; func_0206c534(7); }
void TalkRenderProcessor::func_0206ba38() {
    using namespace n16; func_0206c534(8); }
void TalkRenderProcessor::func_0206ba2c() {
    using namespace n16; func_0206c534(9); }
void TalkRenderProcessor::func_0206ba20() {
    using namespace n16; func_0206c534(10); }
void TalkRenderProcessor::func_0206ba14() {
    using namespace n16; func_0206c4fc(0); }
void TalkRenderProcessor::func_0206ba08() {
    using namespace n16; func_0206c4fc(1); }
void TalkRenderProcessor::func_0206b9fc() {
    using namespace n16; func_0206c4fc(2); }
void TalkRenderProcessor::func_0206b9f0() {
    using namespace n16; func_0206c4fc(3); }
void TalkRenderProcessor::func_0206b9c8() {
    using namespace n16;
    unk_2c->buildImpression();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_195c)->vfunc_0c());
}
void TalkRenderProcessor::func_0206b9a0() {
    using namespace n16;
    unk_2c->buildNickname();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_1990)->vfunc_0c());
}
void TalkRenderProcessor::func_0206b978() {
    using namespace n16;
    unk_2c->buildCompliment();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_19ac)->vfunc_0c());
}
void TalkRenderProcessor::func_0206b950() {
    using namespace n16;
    unk_2c->buildTrend();
    pushText(((Unk_0206b950_Obj *)unk_2c->unk_1928)->vfunc_0c());
}
void TalkRenderProcessor::func_0206b948() {
    using namespace n16; unk_50 = 1; }
void TalkRenderProcessor::func_0206b940() {
    using namespace n16; unk_50 = 2; }
void TalkRenderProcessor::func_0206b938() {
    using namespace n16; func_0206c4b4(); }
void TalkRenderProcessor::func_0206b924() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (0))); }
void TalkRenderProcessor::func_0206b910() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (1))); }
void TalkRenderProcessor::func_0206b8fc() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (2))); }
void TalkRenderProcessor::func_0206b8e8() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (3))); }
void TalkRenderProcessor::func_0206b8d4() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (4))); }
void TalkRenderProcessor::func_0206b8b8() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (5))); }
void TalkRenderProcessor::func_0206b89c() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (6))); }
void TalkRenderProcessor::func_0206b880() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (7))); }
void TalkRenderProcessor::func_0206b864() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (8))); }
void TalkRenderProcessor::func_0206b848() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (9))); }
void TalkRenderProcessor::func_0206b82c() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (10))); }
void TalkRenderProcessor::func_0206b818() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (0))); }
void TalkRenderProcessor::func_0206b804() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (1))); }
void TalkRenderProcessor::func_0206b7f0() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (2))); }
void TalkRenderProcessor::func_0206b7dc() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (3))); }
// ---- TalkRenderProcessor state handlers
void TalkRenderProcessor::func_0206b7a4() {
    using namespace n16;
    u32 x;
    char *y;
    char *z;
    unk_34.func_020a72c4(&x, &y, &z);
    if (!Talk_IsAltTextEnabled()) {
        skip(x * 2);
        pushText((u8 *)z);
        unk_48 = (u8 *)y;
    }
}
TalkTextBox::TalkTextBox(TalkWindow *o) : unk_400(0), unk_410(0), unk_43b(0), unk_43c((u8 *)o) {
    using namespace n16;
    func_0206b72c();
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        unk_420[i] = 0;
    }
}
TalkTextBox::~TalkTextBox() {
    using namespace n16;
    destroyLabels();
}
void TalkTextBox::func_0206b72c() {
    using namespace n16; func_0206b6d0(0); }
void TalkTextBox::func_0206b6d0(u32 v) {
    using namespace n16;
    s32 i;
    unk_400 = 0;
    MI_CpuFill8(this, 0, 0x400);
    for (i = 0; (u32)i < 3; i++) {
        unk_404[i] = 0;
        unk_438[i] = 0;
        unk_42c[i] = 0;
    }
    unk_410 = 0;
    setAllLineColors(v);
}
void TalkTextBox::setAllLineColors(u32 v) {
    using namespace n16;
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        unk_414[i] = v;
    }
}
BOOL TalkTextBox::appendBytes(s8 *src, u32 n) {
    using namespace n16;
    u32 pos = unk_400;
    BOOL ok;
    if (0x400 - pos > n) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        u32 i;
        for (i = 0; i < n; i++) {
            (&unk_00[unk_400])[i] = src[i];
        }
        unk_400 += n;
        markLineDirty();
    }
    return ok;
}
BOOL TalkTextBox::appendChar(s32 c0) {
    using namespace n16;
    s8 c = (s8)c0;
    u32 pos = unk_400;
    BOOL ok;
    if (0x400 - pos > 1) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        unk_400++;
        unk_00[pos] = c;
        markLineDirty();
    }
    return ok;
}
void TalkTextBox::appendTag(void *m) {
    using namespace n16;
    Unk_0206b618_Msg *q = (Unk_0206b618_Msg *)m;
    appendBytes((s8 *)q->unk_10, q->unk_08 + 5);
}
void TalkTextBox::beginLine(u32 v) {
    using namespace n16;
    if (unk_410 < 3) {
        unk_42c[unk_410] = unk_43c.measureLine(v, unk_43b);
        u32 n = unk_410;
        unk_410 = n + 1;
        unk_404[n] = &unk_00[unk_400];
    }
}
void TalkTextBox::setRemainingLineColors(u32 v) {
    using namespace n16;
    u32 i;
    for (i = unk_410; i < 3; i++) {
        unk_414[i] = v;
    }
}
void TalkTextBox::setCentered(u8 v) {
    using namespace n16; unk_43b = v; }
void TalkTextBox::createLabels() {
    using namespace n16;
    u32 i, a;
    for (i = 0, a = 0x11; i < 3; i++, a += 0x28) {
        TextLabel *p = MsgTextLabel_CreateVram(a, 0x14, 2);
        if (p) {
            unk_420[i] = p;
            p->unk_50 = 2;
            p->unk_39 = 0xe;
            p->requestClear(0);
        }
    }
}
void TalkTextBox::destroyLabels() {
    using namespace n16;
    u32 i;
    for (i = 0; i < 3; i++) {
        if (unk_420[i]) {
            MsgTextLabel_Destroy(unk_420[i]);
            unk_420[i] = 0;
        }
    }
}
// ---- TalkTextBox
void TalkTextBox::clearLabels() {
    using namespace n16;
    volatile s32 z = 0;
    u32 i;
    for (i = 0; i < 3; i++) {
        TextLabel *p = unk_420[i];
        if (p) {
            p->requestClear(z);
            p->unk_10 = 0;
        }
    }
}
#undef unk_2c
#undef unk_13b0
#undef unk_13c0
#undef unk_15fc
#undef Unk_020a71d0
#undef Unk_0206b7dc_Arg

// ======== unk_0206ab74.cpp ========
#define unk_404 ((s32 *)unk_404)
#define unk_16f9 unk_16dc.unk_1d
#define unk_16fa unk_16dc.unk_1e
#define unk_1704 unk_16dc.unk_28
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
extern "C" { void *PlayerData_GetCurrent(void); }
extern "C" { s32 _ZN10PlayerData11getPlayerIdEv(void *p); }
extern "C" { s32 _ZN8PlayerId9getGenderEv(s32 p); }

}
void TalkTextBox::redrawLines() {
    using namespace n15;
    u32 i;
    for (i = 0; i < unk_410; i++) {
        TextLabel *e = unk_420[i];
        if (e != 0 && unk_438[i] != 0) {
            e->unk_10 = unk_404[i];
            e->unk_14 = 0;
            e->unk_30 = unk_42c[i];
            e->unk_38 = Talk_ColorTagToTextColor(unk_414[i]);
            e->requestRedraw();
        }
    }
    if (unk_410 < 3) {
        TextLabel *e = unk_420[unk_410];
        if (e != 0) e->unk_14 = (u32)this + unk_400;
    }
}
void TalkTextBox::func_0206b454() {
    using namespace n15;}
// ---------------------------------------------------------------------------
void TalkTextBox::markLineDirty() {
    using namespace n15;
    s32 i = unk_410;
    if (i != 0 && (u32)i <= 3) *((u8 *)this + i + 0x437) = 1;
}
TalkCharStepper::TalkCharStepper(TalkWindow *owner, TalkTextBox *buf)
    : unk_24(owner), unk_28(buf), unk_2c(0), unk_30(0), unk_34(0) {
    using namespace n15;
    unk_38 = 0;
    unk_39 = 0;
}
TalkCharStepper::~TalkCharStepper() {
    using namespace n15;}
void TalkCharStepper::startCount(u8 *p, s32 n, u8 flag) {
    using namespace n15;
    if (n > 0) {
        reset();
        begin(p);
        unk_30 = 0;
        unk_34 = n;
        unk_39 = flag;
        unk_38 = 0;
        unk_2c = 1;
    }
}
void TalkCharStepper::startUntil(u8 *p, u32 v, u8 flag) {
    using namespace n15;
    if (v > (u32)p) {
        reset();
        begin(p);
        unk_30 = v;
        unk_34 = 0;
        unk_39 = flag;
        unk_38 = 0;
        unk_2c = 2;
    }
}
void TalkCharStepper::stepOnce() {
    using namespace n15;
    s32 s = unk_2c;
    if (s == 1) {
        unk_38 = 1;
        run(FALSE);
    } else if (s == 2) {
        unk_38 = 1;
        run((BOOL)unk_30);
    }
}
BOOL TalkCharStepper::isIdle() {
    using namespace n15;
    if (unk_2c == 0) return TRUE;
    return FALSE;
}
void TalkCharStepper::onBegin() {
    using namespace n15;}
void TalkCharStepper::onEnd() {
    using namespace n15;
    if (unk_2c == 2) stop();
}
void TalkCharStepper::onChar(u32 c) {
    using namespace n15;
    if (unk_39 != 0) unk_28->appendChar(c);
    unk_38 = 0;
    if (unk_2c == 1) {
        unk_34 = unk_34 - 1;
        if (unk_34 <= 0) stop();
    } else if (unk_2c == 2) {
        _ZN15TalkWindowState13onCharPrintedEi(unk_24, c);
    }
}
void TalkCharStepper::onTag(u8 *) {
    using namespace n15;}
BOOL TalkCharStepper::canContinue() {
    using namespace n15;
    return unk_38;
}
// ---------------------------------------------------------------------------
void TalkCharStepper::stop() {
    using namespace n15;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_39 = 0;
    reset();
}
TalkParser::TalkParser(TalkWindow *owner, TalkTextBox *buf)
    : unk_24(owner), unk_28(buf), unk_2c(0), unk_30(0), unk_34(0), unk_60(owner, buf), unk_9c(owner, buf) {
    using namespace n15;
    unk_d8 = 0;
    unk_d9 = 0;
    unk_dc = 0;
    unk_e0 = 0;
}
TalkParser::~TalkParser() {
    using namespace n15;}
void TalkParser::stop() {
    using namespace n15;
    unk_2c = 0;
    unk_28->func_0206b454();
    unk_28->func_0206b6d0(unk_4c.unk_5c);
    unk_28->beginLine((u32)unk_04);
    unk_d9 = 0;
    unk_e0 = 0;
}
void TalkParser::setPrintMode(s32 v) {
    using namespace n15;
    unk_34 = v;
}
void TalkParser::setFastForward() {
    using namespace n15;
    if (unk_4c.unk_4f == 0) unk_4c.unk_4c = 1;
}
void TalkParser::clearFastForward() {
    using namespace n15;
    unk_4c.unk_4c = 0;
}
void TalkParser::resetColor() {
    using namespace n15;
    unk_4c.unk_5c = 0;
    unk_24->unk_1704 = 0;
}
void TalkParser::onBegin() {
    using namespace n15;
    unk_30 = 1;
    unk_2c = 0;
    unk_4c.unk_4c = 0;
    unk_4c.unk_4d = 0;
    unk_4c.unk_4e = 0;
    unk_4c.unk_4f = 0;
    unk_4c.unk_50 = 0;
    unk_4c.unk_54 = 0;
    unk_4c.unk_58 = 0;
    unk_28->func_0206b72c();
    unk_28->beginLine((u32)unk_04);
    _ZN15TalkWindowState10resetVoiceEv(unk_24);
    unk_d9 = 0;
    unk_dc = 0;
    unk_e0 = 0;
    unk_24->unk_16f9 = 0;
    unk_24->unk_16fa = 0;
}
void TalkParser::onEnd() {
    using namespace n15;
    unk_30 = 3;
    unk_28->func_0206b454();
}
void TalkParser::onChar(u32 c) {
    using namespace n15;
    if (unk_d9 != 0) {
        c = Text_ToUpper(c);
        unk_d9 = 0;
    }
    BOOL nl = (c == 10) ? TRUE : FALSE;
    BOOL sp = (c == 0x20) ? TRUE : FALSE;
    unk_28->appendChar(c);
    if (nl) {
        unk_28->beginLine((u32)unk_04);
        unk_2c++;
        if (unk_2c >= 3) unk_30 = 2;
    }
    _ZN15TalkWindowState13onCharPrintedEi(unk_24, c);
    unk_24->unk_16fa = 0;
    if (!sp && !nl) unk_4c.unk_50++;
    if (unk_04 == unk_dc) {
        unk_dc = 0;
        popText();
    }
}
void TalkParser::onTag(u8 *p) {
    using namespace n15;
    unk_38.parse(p);
    dispatchTag();
}
BOOL TalkParser::canContinue() {
    using namespace n15;
    BOOL r = TRUE;
    s32 s = unk_30;
    if (s == 2 || s == 5) {
        r = FALSE;
        unk_4c.unk_50 = r;
        unk_4c.unk_54 = r;
        unk_4c.unk_58 = r;
    } else if (s == 4) {
        r = FALSE;
        unk_4c.unk_50 = r;
        unk_4c.unk_54 = r;
    } else if (s == 1) {
        if (!stepSpeed()) r = FALSE;
    }
    return r;
}
void TalkParser::func_0206afa0() {
    using namespace n15;}
BOOL TalkParser::steppersIdle() {
    using namespace n15;
    if (unk_60.isIdle() && unk_9c.isIdle()) return TRUE;
    return FALSE;
}
void TalkParser::stepSteppers() {
    using namespace n15;
    unk_60.stepOnce();
    unk_9c.stepOnce();
}
BOOL TalkParser::stepSpeed() {
    using namespace n15;
    BOOL r = TRUE;
    BOOL f = r;
    if (unk_34 != 1 && unk_4c.unk_4e == 0) f = FALSE;
    if (unk_4c.unk_4d != 0) {
        r = FALSE;
        unk_4c.unk_4d = 0;
        goto end;
    }
    if (f) {
        unk_4c.unk_50 = 0;
        unk_4c.unk_54 = 0;
        unk_4c.unk_58 = 0;
        while (!steppersIdle()) {
            stepSteppers();
        }
        goto end;
    }
    BOOL t;
    if (unk_34 != 2 && unk_4c.unk_4f == 0 && unk_4c.unk_4c != 0) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) unk_4c.unk_58 = 0;
    s32 v = unk_4c.unk_58;
    if (v > 0) {
        unk_4c.unk_58 = v - 0x1800;
        r = FALSE;
        goto end;
    }
    s32 n;
    if (unk_4c.unk_54 == 0) n = 1;
    else n = 2;
    if (t) n = 3;
    if (unk_4c.unk_50 >= n) {
        unk_4c.unk_50 = 0;
        unk_4c.unk_54 = unk_4c.unk_54 + 1;
        if (unk_4c.unk_54 >= 2) unk_4c.unk_54 = 0;
        r = FALSE;
        goto end;
    }
    while (!steppersIdle()) {
        stepSteppers();
        unk_4c.unk_50 = unk_4c.unk_50 + 1;
        if (unk_4c.unk_50 >= n) {
            unk_4c.unk_50 = 0;
            unk_4c.unk_54 = unk_4c.unk_54 + 1;
            if (unk_4c.unk_54 >= 2) unk_4c.unk_54 = 0;
            r = FALSE;
            goto end;
        }
    }
end:
    return r;
}
void TalkParser::expandArticle(Unk_0206ad58_Ent *ent, BOOL flag) {
    using namespace n15;
    u8 *q = ent->unk_04 + 4;
    u8 *r = 0;
    if (unk_e0 == 0) {
        r = String_GetArticle(q + 8);
    } else if (unk_e0 == 1) {
        r = String_GetArticle(q + 9);
    }
    if (r != 0) {
        if (flag) {
            pushText(Msg_GetColorTag(unk_4c.unk_5c));
            pushText(((Unk_0206ad58_Ent *)r)->vfunc_0c());
            pushText(Msg_GetColorTag(0));
        } else {
            pushText(((Unk_0206ad58_Ent *)r)->vfunc_0c());
        }
    }
    unk_e0 = 0;
}
void TalkParser::expandSlot(s32 idx) {
    using namespace n15;
    Unk_0206ad58_Ent *ent = &unk_24->unk_13c0[idx];
    pushText(ent->vfunc_0c());
    expandArticle(ent, 1);
}
void TalkParser::expandNamedSlot(s32 idx) {
    using namespace n15;
    Unk_0206ad58_Ent *ent = &unk_24->unk_15fc[idx];
    u8 *s = unk_24->unk_16cc[idx];
    pushText(Msg_GetColorTag(unk_4c.unk_5c));
    pushText(ent->vfunc_0c());
    pushText(Msg_GetColorTag((s32)s));
    expandArticle(ent, 0);
}
void TalkParser::selectByPlayerGender() {
    using namespace n15;
    char *a, *b;
    unk_38.getStrings2(&a, &b);
    if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0) {
        if (a != 0) pushText((u8 *)a);
    } else {
        if (b != 0) {
            unk_dc = unk_04;
            pushText((u8 *)b);
        }
    }
}
void TalkParser::selectBySlotForm(u8 *p) {
    using namespace n15;
    char *a, *b, *c;
    unk_38.getStrings3(&a, &b, &c);
    s32 k = ((s32 *)p)[3];
    if (k == 0) {
        if (a != 0) pushText((u8 *)a);
    } else if (k == 1) {
        if (b != 0) pushText((u8 *)b);
    } else if (k == 2) {
        if (c != 0) {
            unk_dc = unk_04;
            pushText((u8 *)c);
        }
    }
}
void TalkParser::jumpToMessage(u8 *p) {
    using namespace n15;
    _ZN15TalkWindowState14setNextMessageEPhPv(unk_24, p, 0);
    _ZN15TalkWindowState17setAdvancePendingEv(unk_24);
}
// ---------------------------------------------------------------------------
void TalkParser::dispatchTag() {
    using namespace n15;
    typedef void (TalkParser::*Fn)();
    static Fn tbl[12] = {
        &TalkParser::func_0206aa84, &TalkParser::func_0206a93c, &TalkParser::func_0206a844,
        &TalkParser::func_0206a7a8, &TalkParser::func_0206a55c, &TalkParser::func_0206a498,
        &TalkParser::func_0206a380, &TalkParser::func_0206a358, &TalkParser::func_0206a2d8,
        &TalkParser::func_0206a1f8, &TalkParser::func_0206a198, &TalkParser::func_0206a024,
    };
    s32 id = unk_38.unk_00;
    Fn fn = 0;
    if (id == 0xff) {
        fn = &TalkParser::func_02069fa4;
    } else if (id < 12) {
        fn = tbl[id];
    }
    (this->*fn)();
}
#undef unk_404
#undef unk_16f9
#undef unk_16fa
#undef unk_1704

// ======== unk_0206a198.cpp ========
namespace n14 {
extern "C" { void func_020a7768(void *p); }
extern "C" { extern u8 data_020cba1c[]; }

}
void TalkParserTags::tagGroup00()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[11])() = {
        &TalkParserTags::func_02069f88,
        &TalkParserTags::func_02069f70,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069f58,
        &TalkParserTags::func_02069f40,
        &TalkParserTags::func_02069f28,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup01()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[17])() = {
        &TalkParserTags::func_02069efc,
        &TalkParserTags::func_02069ee8,
        &TalkParserTags::func_02069ec4,
        &TalkParserTags::func_02069ea0,
        &TalkParserTags::func_02069e88,
        &TalkParserTags::func_02069e70,
        &TalkParserTags::func_02069e28,
        &TalkParserTags::func_02069e24,
        &TalkParserTags::func_02069df0,
        &TalkParserTags::func_02069dc0,
        &TalkParserTags::func_02069d8c,
        &TalkParserTags::func_02069d68,
        &TalkParserTags::func_02069d44,
        &TalkParserTags::func_02069d20,
        &TalkParserTags::func_02069cfc,
        &TalkParserTags::func_02069cd8,
        &TalkParserTags::func_02069cb8,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup02()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[8])() = {
        &TalkParserTags::func_02069c34,
        &TalkParserTags::func_02069b94,
        &TalkParserTags::func_02069ad0,
        &TalkParserTags::func_020699ec,
        &TalkParserTags::func_020699d4,
        &TalkParserTags::func_020699bc,
        &TalkParserTags::func_020699a4,
        &TalkParserTags::func_0206998c,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    if (unk_d8) {
        unk_d8 = 0;
        (this->*f)();
    } else {
        unreadTag(unk_48);
        unk_d8 = 1;
        pushText(data_020cba1c);
    }
}
void TalkParserTags::tagGroup03()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[5])() = {
        &TalkParserTags::func_0206996c,
        &TalkParserTags::func_02069940,
        &TalkParserTags::func_02069914,
        &TalkParserTags::func_020698e8,
        &TalkParserTags::func_020698bc,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup04()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[35])() = {
        &TalkParserTags::func_02069878,
        &TalkParserTags::func_02069834,
        &TalkParserTags::func_020697f4,
        &TalkParserTags::func_020697b0,
        &TalkParserTags::func_02069790,
        &TalkParserTags::func_02069770,
        &TalkParserTags::func_02069750,
        &TalkParserTags::func_02069730,
        &TalkParserTags::func_02069710,
        &TalkParserTags::func_020696f0,
        &TalkParserTags::func_020696d0,
        &TalkParserTags::func_02069674,
        &TalkParserTags::func_02069618,
        &TalkParserTags::func_020695bc,
        &TalkParserTags::func_02069550,
        &TalkParserTags::func_02069544,
        &TalkParserTags::func_02069538,
        &TalkParserTags::func_0206952c,
        &TalkParserTags::func_02069520,
        &TalkParserTags::func_02069514,
        &TalkParserTags::func_02069508,
        &TalkParserTags::func_020694fc,
        &TalkParserTags::func_020694f0,
        &TalkParserTags::func_020694e4,
        &TalkParserTags::func_020694d8,
        &TalkParserTags::func_020694cc,
        &TalkParserTags::func_020694c0,
        &TalkParserTags::func_020694b4,
        &TalkParserTags::func_020694a8,
        &TalkParserTags::func_0206949c,
        &TalkParserTags::func_0206945c,
        &TalkParserTags::func_02069400,
        &TalkParserTags::func_020693fc,
        &TalkParserTags::func_020693a0,
        &TalkParserTags::func_02069360,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup05()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[8])() = {
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069258,
        &TalkParserTags::func_02069fa0,
        &TalkParserTags::func_02069fa0,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup06()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[14])() = {
        &TalkParserTags::func_0206920c,
        &TalkParserTags::func_020691bc,
        &TalkParserTags::func_0206912c,
        &TalkParserTags::func_020690d0,
        &TalkParserTags::func_0206905c,
        &TalkParserTags::func_02068ffc,
        &TalkParserTags::func_02068f9c,
        &TalkParserTags::func_02068f10,
        &TalkParserTags::func_02068e9c,
        &TalkParserTags::func_02068e40,
        &TalkParserTags::func_02068dd0,
        &TalkParserTags::func_02068d78,
        &TalkParserTags::func_02068d20,
        &TalkParserTags::func_02068c9c,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup07()
{
    using namespace n14;
    u32 v = unk_3c;
    Unk_0206a198_Sub *p = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    p->vfunc_38(v);
}
void TalkParserTags::tagGroup08()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[3])() = {
        &TalkParserTags::func_02068c98,
        &TalkParserTags::func_02068c94,
        &TalkParserTags::func_02068c90,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup09()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[10])() = {
        &TalkParserTags::func_02068c70,
        &TalkParserTags::func_02068c50,
        &TalkParserTags::func_02068c30,
        &TalkParserTags::func_02068c10,
        &TalkParserTags::func_02068bf0,
        &TalkParserTags::func_02068bd0,
        &TalkParserTags::func_02068bb0,
        &TalkParserTags::func_02068b90,
        &TalkParserTags::func_02068b70,
        &TalkParserTags::func_02068b50,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags::tagGroup0a()
{
    using namespace n14;
    static void (TalkParserTags::*const tbl[1])() = {
        &TalkParserTags::func_02068b4c,
    };
    void (TalkParserTags::*f)() = tbl[unk_3c];
    (this->*f)();
}

// ======== unk_02069834.cpp ========
#define TalkMsgRequest Unk_020ddcf0_v13
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
extern "C" { void func_020a7768(MsgTag *p); }
typedef void (TalkParserTags2::*Unk_02069fa4_Fn)();

}
void TalkParserTags2::tagGroup0b() {
    using namespace n13;
    static Unk_02069fa4_Fn tbl[20] = {
        &TalkParserTags2::func_02069fa0,
        &TalkParserTags2::func_02068b44,
        &TalkParserTags2::func_02068b3c,
        &TalkParserTags2::func_02068b34,
        &TalkParserTags2::func_02068b2c,
        &TalkParserTags2::func_02068b18,
        &TalkParserTags2::func_02068b04,
        &TalkParserTags2::func_02068af0,
        &TalkParserTags2::func_02068adc,
        &TalkParserTags2::func_02068ac8,
        &TalkParserTags2::func_02068aac,
        &TalkParserTags2::func_02068a90,
        &TalkParserTags2::func_02068a74,
        &TalkParserTags2::func_02068a58,
        &TalkParserTags2::func_02068a3c,
        &TalkParserTags2::func_02068a20,
        &TalkParserTags2::func_02068a0c,
        &TalkParserTags2::func_020689f8,
        &TalkParserTags2::func_020689e4,
        &TalkParserTags2::func_020689d0};
    Unk_02069fa4_Fn f = tbl[unk_3c];
    (this->*f)();
}
void TalkParserTags2::tagGroupFf() {
    using namespace n13;
    static Unk_02069fa4_Fn tbl[3] = {&TalkParserTags2::func_020689a0, 0, &TalkParserTags2::func_02068950};
    Unk_02069fa4_Fn f = tbl[unk_3c];
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
    unk_38.getArgU16(v);
    unk_58 = v[0] << 12;
    unk_24->unk_16fa = 1;
}
void TalkParserVarTags::tagPageBreak() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_30 = 4;
}
void TalkParserVarTags::tagFastOn() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4e = 1;
    unk_24->unk_16f9 = 1;
}
void TalkParserVarTags::tagFastOff() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4e = 0;
    unk_24->unk_16f9 = 0;
}
void TalkParserVarTags::tagFastLockOn() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4f = 1;
}
void TalkParserVarTags::tagFastLockOff() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4f = 0;
}
void TalkParserVarTags::tagGreeting() {
    using namespace n13;
    u8 *base = unk_04;
    u8 *p = Msg_FindTag(base, 1, 7);
    if (p != 0) {
        if (_ZN13TalkWindowMsg13buildGreetingEv(unk_24) != 0) {
            skip(p - base);
            pushText(unk_24->unk_19d0.vfunc_0c());
        }
    }
}
void TalkParserVarTags::func_02069e24() {
    using namespace n13;}
void TalkParserVarTags::tagShakeSmall() {
    using namespace n13;
    Snd_PlaySe(6);
    _ZN15TalkWindowState10startShakeEiiii(unk_24, 0x6000, 0x666, 0x4cc, 0x1199);
}
void TalkParserVarTags::tagShakeMedium() {
    using namespace n13;
    Snd_PlaySe(7);
    _ZN15TalkWindowState10startShakeEiiii(unk_24, 0xa000, 0x800, 0x800, 0x1333);
}
void TalkParserVarTags::tagShakeLarge() {
    using namespace n13;
    Snd_PlaySe(8);
    _ZN15TalkWindowState10startShakeEiiii(unk_24, 0x11000, 0xa66, 0xccc, 0x1000);
}
void TalkParserVarTags::tagSignal0() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(0);
}
void TalkParserVarTags::tagSignal1() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(1);
}
void TalkParserVarTags::tagSignal2() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(2);
}
void TalkParserVarTags::tagSignal3() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(3);
}
void TalkParserVarTags::tagSignal4() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(4);
}
void TalkParserVarTags::tagAutoAdvance() {
    using namespace n13;
    u8 v[4];
    unk_38.getArgs1(v);
    _ZN15TalkAutoAdvance5startEi(unk_24, v[0]);
}
void TalkParserVarTags::tagChoice2() {
    using namespace n13;
    ChoiceList *l = _ZN15TalkWindowState13getChoiceListEv(unk_24);
    ChoiceEntry *a = l->getEntry(0);
    ChoiceEntry *b = l->getEntry(1);
    l->clear();
    u8 *a1 = a->getValuePtr();
    MsgString *a2 = a->getText();
    u8 *b1 = b->getValuePtr();
    MsgString *b2 = b->getText();
    skip(unk_38.readArgStrings2(a1, a2, b1, b2));
    l->setCount(2);
    ((ChoiceMenu *)unk_24->unk_b4)->setListChoices(l);
    ((ChoiceMenu *)unk_24->unk_b4)->open();
    unk_30 = 5;
}
void TalkParserVarTags::tagChoice3() {
    using namespace n13;
    ChoiceList *l = _ZN15TalkWindowState13getChoiceListEv(unk_24);
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
    skip(unk_38.readArgStrings3(a1, a2, b1, b2, c1, c2));
    l->setCount(3);
    ((ChoiceMenu *)unk_24->unk_b4)->setListChoices(l);
    ((ChoiceMenu *)unk_24->unk_b4)->open();
    unk_30 = 5;
}
void TalkParserVarTags::tagChoice4() {
    using namespace n13;
    ChoiceList *l = _ZN15TalkWindowState13getChoiceListEv(unk_24);
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
    skip(unk_38.readArgStrings4(a1, a2, b1, b2, c1, c2, d1, d2));
    l->setCount(4);
    ((ChoiceMenu *)unk_24->unk_b4)->setListChoices(l);
    ((ChoiceMenu *)unk_24->unk_b4)->open();
    unk_30 = 5;
}
void TalkParserVarTags::tagChoice5() {
    using namespace n13;
    ChoiceList *l = _ZN15TalkWindowState13getChoiceListEv(unk_24);
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
    skip(unk_38.readArgStrings5(a1, a2, b1, b2, c1, c2, d1, d2, e1, e2));
    l->setCount(5);
    ((ChoiceMenu *)unk_24->unk_b4)->setListChoices(l);
    ((ChoiceMenu *)unk_24->unk_b4)->open();
    unk_30 = 5;
}
void TalkParserVarTags::tagChoice2B() {
    using namespace n13;
    tagChoice2();
    _ZN15TalkWindowState13getChoiceListEv(unk_24)->setCancelToLast();
}
void TalkParserVarTags::tagChoice3B() {
    using namespace n13;
    tagChoice3();
    _ZN15TalkWindowState13getChoiceListEv(unk_24)->setCancelToLast();
}
void TalkParserVarTags::tagChoice4B() {
    using namespace n13;
    tagChoice4();
    _ZN15TalkWindowState13getChoiceListEv(unk_24)->setCancelToLast();
}
void TalkParserVarTags::tagChoice5B() {
    using namespace n13;
    tagChoice5();
    _ZN15TalkWindowState13getChoiceListEv(unk_24)->setCancelToLast();
}
void TalkParserVarTags::tagAction0() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_20();
}
void TalkParserVarTags::tagAction1() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.getArgs1(v);
    o->vfunc_24(v[0]);
}
void TalkParserVarTags::tagAction2() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.getArgs1(v);
    o->vfunc_28(v[0]);
}
void TalkParserVarTags::tagAction3() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.getArgs1(v);
    o->vfunc_2c(v[0]);
}
void TalkParserVarTags::tagAction4() {
    using namespace n13;
    TalkMsgRequest *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.getArgs1(v);
    o->onActionTag4(v[0]);
}
void TalkParserVarTags::tagPlayerName() {
    using namespace n13;
    _ZN13TalkWindowMsg15buildPlayerNameEv(unk_24);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(unk_24->unk_189c.vfunc_0c());
    pushText(Msg_GetColorTag(5));
}
void TalkParserVarTags::tagSpeakerName() {
    using namespace n13;
    pushText(Msg_GetColorTag(unk_5c));
    pushText(unk_24->unk_13b0->func_02065f10()->vfunc_0c());
    pushText(Msg_GetColorTag(6));
}
#undef TalkMsgRequest

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
extern "C" { u32 func_0203c304(); }
extern "C" { u32 func_0203c2f4(); }
extern "C" { s32 SaveVillagers_Count(void *p); }
extern "C" { s32 PlayerData_GetCurrent(); }
extern "C" { s32 _ZN10PlayerData11getPlayerIdEv(); }
extern "C" { s32 _ZN8PlayerId9getGenderEv(); }
extern "C" { s32 Villager_FindMemory(void *p, s32 v); }
extern "C" { s32 _ZN14VillagerMemory13getFriendshipEv(); }
extern "C" { s32 func_02063b8c(s32 v); }
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
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState17getNumber1714TextEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState13getMinuteTextEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState11getHourTextEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState14getWeekdayTextEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState10getDayTextEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState12getMonthTextEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN15TalkWindowState11getYearTextEv(u8 *c); }
extern "C" { ChoiceList *_ZN15TalkWindowState13getChoiceListEv(u8 *c); }
extern "C" { u8 *Msg_GetColorTag(s32 i); }
extern "C" { extern u8 gSaveData[]; }
extern "C" { extern s32 data_020cbf90; }
extern "C" { extern u8 data_021e58a8[]; }
extern "C" { extern u8 data_020cba1c[]; }
static inline Unk_02068f10_Obj *Sel(u8 *ctx) { return *(Unk_02068f10_Obj **)(ctx + 0x13b0); }
static inline Unk_02068f10_Obj *At(u8 *ctx, u32 off) { return (Unk_02068f10_Obj *)(ctx + off); }

}
void TalkParserCondTags::tagCatchphrase() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg16buildCatchphraseEv(unk_24)) func_0206afa0(0xb58, data_020ddea4);
    pushText(At(unk_24, 0x1860)->vfunc_0c());
}
void TalkParserCondTags::tagTownName() {
    using namespace n12;
    _ZN13TalkWindowMsg13buildTownNameEv(unk_24);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x1880)->vfunc_0c());
    pushText(Msg_GetColorTag(8));
}
void TalkParserCondTags::tagYear() {
    using namespace n12; pushText(_ZN15TalkWindowState11getYearTextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagMonth() {
    using namespace n12; pushText(_ZN15TalkWindowState12getMonthTextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagDay() {
    using namespace n12; pushText(_ZN15TalkWindowState10getDayTextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagWeekday() {
    using namespace n12; pushText(_ZN15TalkWindowState14getWeekdayTextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagHour() {
    using namespace n12; pushText(_ZN15TalkWindowState11getHourTextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagMinute() {
    using namespace n12; pushText(_ZN15TalkWindowState13getMinuteTextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagNumber1714() {
    using namespace n12; pushText(_ZN15TalkWindowState17getNumber1714TextEv(unk_24)->vfunc_0c()); }
void TalkParserCondTags::tagFriendName() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg15buildFriendNameEv(unk_24)) func_0206afa0(0xbbd, data_020dde94);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x18b8)->vfunc_0c());
    pushText(Msg_GetColorTag(6));
}
void TalkParserCondTags::tagEnemyName() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg14buildEnemyNameEv(unk_24)) func_0206afa0(0xbcd, data_020dde84);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x18d4)->vfunc_0c());
    pushText(Msg_GetColorTag(6));
}
void TalkParserCondTags::tagRandomVillagerName() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg23buildRandomVillagerNameEv(unk_24)) func_0206afa0(0xbdd, data_020dde74);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x18f0)->vfunc_0c());
    pushText(Msg_GetColorTag(6));
}
void TalkParserCondTags::tagOtherResidentName() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg22buildOtherResidentNameEv(unk_24)) func_0206afa0(0xbee, data_020dde64);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x190c)->vfunc_0c());
    s32 k = 5;
    if (unk_24[0x19f6] != 0) k = 6;
    pushText(Msg_GetColorTag(k));
}
void TalkParserCondTags::tagSlot0() {
    using namespace n12; func_0206adb8(0); }
void TalkParserCondTags::tagSlot1() {
    using namespace n12; func_0206adb8(1); }
void TalkParserCondTags::tagSlot2() {
    using namespace n12; func_0206adb8(2); }
void TalkParserCondTags::tagSlot3() {
    using namespace n12; func_0206adb8(3); }
void TalkParserCondTags::tagSlot4() {
    using namespace n12; func_0206adb8(4); }
void TalkParserCondTags::tagSlot5() {
    using namespace n12; func_0206adb8(5); }
void TalkParserCondTags::tagSlot6() {
    using namespace n12; func_0206adb8(6); }
void TalkParserCondTags::tagSlot7() {
    using namespace n12; func_0206adb8(7); }
void TalkParserCondTags::tagSlot8() {
    using namespace n12; func_0206adb8(8); }
void TalkParserCondTags::tagSlot9() {
    using namespace n12; func_0206adb8(9); }
void TalkParserCondTags::tagSlot10() {
    using namespace n12; func_0206adb8(10); }
void TalkParserCondTags::tagNamedSlot0() {
    using namespace n12; func_0206ad58(0); }
void TalkParserCondTags::tagNamedSlot1() {
    using namespace n12; func_0206ad58(1); }
void TalkParserCondTags::tagNamedSlot2() {
    using namespace n12; func_0206ad58(2); }
void TalkParserCondTags::tagNamedSlot3() {
    using namespace n12; func_0206ad58(3); }
void TalkParserCondTags::tagImpression() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg15buildImpressionEv(unk_24)) func_0206afa0(0xc7d, data_020dde5c);
    pushText(At(unk_24, 0x195c)->vfunc_0c());
}
void TalkParserCondTags::tagNickname() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg13buildNicknameEv(unk_24)) func_0206afa0(0xc8b, data_020dde4c);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x1990)->vfunc_0c());
    pushText(Msg_GetColorTag(5));
}
void TalkParserCondTags::tagNop0420() {
    using namespace n12;}
void TalkParserCondTags::tagCompliment() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg15buildComplimentEv(unk_24)) func_0206afa0(0xca4, data_020dde40);
    pushText(Msg_GetColorTag(unk_5c));
    pushText(At(unk_24, 0x19ac)->vfunc_0c());
    pushText(Msg_GetColorTag(2));
}
void TalkParserCondTags::tagTrend() {
    using namespace n12;
    if (!_ZN13TalkWindowMsg10buildTrendEv(unk_24)) func_0206afa0(0xcb5, data_020dde38);
    pushText(At(unk_24, 0x1928)->vfunc_0c());
}
void TalkParserCondTags::tagChoiceSlots() {
    using namespace n12;
    if (unk_d8 != 0) {
        unk_d8 = 0;
        ChoiceList *o = _ZN15TalkWindowState13getChoiceListEv(unk_24);
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
        skip(unk_38.readArgBytes8Strings2(a0, a1, b0, b1, c0, c1, d0, d1, (MsgString *)e0, (MsgString *)e1));
        o->setCount(4);
        ((ChoiceMenu *)(unk_24 + 0xb4))->setSliderChoices(o);
        ((ChoiceMenu *)(unk_24 + 0xb4))->open();
        unk_30 = 5;
    } else {
        unreadTag((u8 *)unk_38.unk_10);
        unk_d8 = 1;
        pushText(data_020cba1c);
    }
}
void TalkParserCondTags::tagBranchRandom2() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(0, 2);
    unk_38.getArgs2(&r[1], &r[2]);
    u8 *q = &r[1];
    r[0] = q[func_02063b8c(2)];
    func_0206ac98(r);
}
void TalkParserCondTags::tagBranchRandom3() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(1, 3);
    unk_38.getArgs3(&r[1], &r[2], &r[3]);
    u8 *q = &r[1];
    r[0] = q[func_02063b8c(3)];
    func_0206ac98(r);
}
void TalkParserCondTags::tagBranchFriendship() {
    using namespace n12;
    u8 r[4];
    Unk_02068f10_Obj *o = Sel(unk_24);
    o->vfunc_34(2, 2);
    unk_38.getArgs3(&r[0], &r[2], &r[3]);
    s32 k = 0;
    void *p = o->vfunc_68();
    PlayerData_GetCurrent();
    if (p) {
        s32 v = _ZN10PlayerData11getPlayerIdEv();
        if (Villager_FindMemory(p, v) != 0) {
            if (_ZN14VillagerMemory13getFriendshipEv() < r[0]) k = 1;
        }
    } else {
        func_0206afa0(0xd64, data_020dde2c);
    }
    u8 *q = &r[2];
    r[1] = q[k];
    func_0206ac98(&r[1]);
}
void TalkParserCondTags::tagBranchPlayerGender() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(3, 2);
    unk_38.getArgs2(&r[1], &r[2]);
    PlayerData_GetCurrent();
    _ZN10PlayerData11getPlayerIdEv();
    s32 i;
    if (_ZN8PlayerId9getGenderEv() != 0) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void TalkParserCondTags::tagBranchHouseUnk() {
    using namespace n12;
    u8 r[5];
    Sel(unk_24)->vfunc_34(4, 4);
    unk_38.getArgs4(&r[1], &r[2], &r[3], &r[4]);
    s32 t = ((HouseData *)data_021e58a8)->func_020604c4();
    s32 i;
    if (t == 0) i = 0;
    else if (t >= 1 && t <= 2) i = 1;
    else if (t == 3) i = 2;
    else i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void TalkParserCondTags::tagBranchInsectCount() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(5, 3);
    unk_38.getArgs3(&r[1], &r[2], &r[3]);
    u32 t = func_0203c2f4();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void TalkParserCondTags::tagBranchFishCount() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(6, 3);
    unk_38.getArgs3(&r[1], &r[2], &r[3]);
    u32 t = func_0203c304();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void TalkParserCondTags::tagBranchVillagerCount() {
    using namespace n12;
    u8 r[5];
    Sel(unk_24)->vfunc_34(7, 4);
    unk_38.getArgs4(&r[1], &r[2], &r[3], &r[4]);
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
    func_0206ac98(r);
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
#define unk_24 ((u8 *)unk_24)
namespace n11 {
static inline Unk_02068f10_Obj *Sel(u8 *ctx) { return *(Unk_02068f10_Obj **)(ctx + 0x13b0); }

}
void TalkParser::tagBranchUnk8() {
    using namespace n11;
    u8 r[5];
    Sel(unk_24)->vfunc_34(8, 4);
    unk_38.getArgs4(&r[1], &r[2], &r[3], &r[4]);
    s32 v = *(s32 *)(unk_24 + 0x1718);
    s32 i = 0;
    if (v == 0) {
    } else if (v == 1) i = 1;
    else if (v == 2) i = 2;
    else if (v == 3) i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    jumpToMessage(r);
}
#undef unk_24

// ======== unk_020685c4.cpp ========
#define SUB2C ((MsgTag *)&unk_2c)
#define OWN(off) ((u8 *)unk_24 + (off))
#define unk_38 (*(MsgTag *)unk_38)
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
extern "C" { void _ZN12Unk_020e0d44C1Eh(void *p, s32 v); }
extern "C" { void _ZN12Unk_020e0d4413func_02089328Ev(void *p); }
extern "C" { void _ZN12Unk_020e0d44D1Ev(void *p); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec78Ev(void *p); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec7cEv(void *p); }
extern "C" { void _ZN12Unk_020e10dcD1Ev(void *p); }
extern "C" { void _ZN12Unk_020e10dcC1Ev(void *p); }
extern "C" { BOOL Talk_IsAltTextEnabled(void); }
extern "C" { s32 Villager_GetAnimalKind(void); }
extern "C" { s32 PlayerData_GetCurrentIndex(void); }
extern "C" { s32 func_020978fc(void); }
extern "C" { s32 func_020978a4(void *p); }
extern "C" { s32 func_020b8fe8(void); }
extern "C" { void _ZN15TalkCharStepper10startCountEPhih(void *self, u32 a, u32 b, BOOL c); }
extern "C" { void _ZN15TalkCharStepper10startUntilEPhjh(void *self, u32 a, u32 b, BOOL c); }
extern "C" { void _ZN11TalkTextBox9appendTagEPv(void *a, void *b); }
extern "C" { void _ZN11TalkTextBox22setRemainingLineColorsEj(void *a, u32 b); }
extern "C" { void func_020a7768(void *p); }
extern "C" { void _ZN6MsgTagC1Ev(void *p); }

}
void TalkTagScanner::func_02068e40() {
    using namespace n10;
    u8 b[4];
    s32 i, r;
    unk_24->unk_13b0->vfunc_34(9, 3);
    unk_38.getArgs3(&b[1], &b[2], &b[3]);
    r = func_020b8fe8();
    i = 0;
    if (r == 1) i = 1;
    else if (r == 2) i = 2;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void TalkTagScanner::func_02068dd0() {
    using namespace n10;
    u8 b[8];
    s32 i, t;
    u8 *g;
    unk_24->unk_13b0->vfunc_34(0xa, 4);
    unk_38.getArgs4(&b[1], &b[2], &b[3], &b[4]);
    g = gSaveData;
    if ((u32)g != 0) t = func_020978a4(g + 0xc);
    else t = 0;
    i = t - 1;
    if (i < 0) i = 0;
    else if (i > 3) i = 3;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void TalkTagScanner::func_02068d78() {
    using namespace n10;
    u8 b[8];
    unk_24->unk_13b0->vfunc_34(0xb, 7);
    unk_38.getArgBytes(&b[1], 7);
    u32 v = unk_24->unk_1710;
    s32 i;
    if (v == 0) i = 6;
    else i = v - 1;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void TalkTagScanner::func_02068d20() {
    using namespace n10;
    u8 b[8];
    unk_24->unk_13b0->vfunc_34(0xc, 2);
    unk_38.getArgs2(&b[1], &b[2]);
    PlayerData_GetCurrentIndex();
    s32 i;
    s32 r = func_020978fc();
    if (r == 1) i = 0;
    else i = 1;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void TalkTagScanner::tagBranchSpecies() {
    using namespace n10;
    u8 b[4];
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    BOOL i;
    s32 res;
    m->vfunc_34(0xd, 2);
    unk_38.getArgs3(&b[0], &b[2], &b[3]);
    b[0]--;
    res = m->vfunc_68();
    i = 0;
    if (res != 0) {
        s32 c = Villager_GetAnimalKind();
        if (c != b[0]) i = 1;
    } else {
        func_0206afa0(0xeeb, data_020dde24);
    }
    u8 *q = &b[2];
    b[1] = q[i];
    func_0206ac98(&b[1]);
}
void TalkTagScanner::func_02068c98() {
    using namespace n10;}
void TalkTagScanner::func_02068c94() {
    using namespace n10;}
void TalkTagScanner::func_02068c90() {
    using namespace n10;}
void TalkTagScanner::tagSignal09_0() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_3c();
}
void TalkTagScanner::tagSignal09_1() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_40();
}
void TalkTagScanner::tagSignal09_2() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_44();
}
void TalkTagScanner::tagSignal09_3() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_48();
}
void TalkTagScanner::tagSignal09_4() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_4c();
}
void TalkTagScanner::tagSignal09_5() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_50();
}
void TalkTagScanner::tagSignal09_6() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_54();
}
void TalkTagScanner::tagSignal09_7() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_58();
}
void TalkTagScanner::tagSignal09_8() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_5c();
}
void TalkTagScanner::tagSignal09_9() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_60();
}
void TalkTagScanner::func_02068b4c() {
    using namespace n10;}
void TalkTagScanner::tagArticleMode1() {
    using namespace n10;
    unk_e0 = 1;
}
void TalkTagScanner::tagArticleMode2() {
    using namespace n10;
    unk_e0 = 2;
}
void TalkTagScanner::tagCapitalizeNext() {
    using namespace n10;
    unk_d9 = 1;
}
void TalkTagScanner::tagSelectByPlayerGender() {
    using namespace n10;
    func_0206ad0c();
}
void TalkTagScanner::func_02068b18() {
    using namespace n10;
    func_0206acb0(unk_24->unk_13c0);
}
void TalkTagScanner::func_02068b04() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[1]);
}
void TalkTagScanner::func_02068af0() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[2]);
}
void TalkTagScanner::func_02068adc() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[3]);
}
void TalkTagScanner::func_02068ac8() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[4]);
}
void TalkTagScanner::func_02068aac() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[5]);
}
void TalkTagScanner::func_02068a90() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[6]);
}
void TalkTagScanner::func_02068a74() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[7]);
}
void TalkTagScanner::func_02068a58() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[8]);
}
void TalkTagScanner::func_02068a3c() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[9]);
}
void TalkTagScanner::func_02068a20() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[10]);
}
void TalkTagScanner::func_02068a0c() {
    using namespace n10;
    func_0206acb0(unk_24->unk_15fc);
}
void TalkTagScanner::func_020689f8() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[1]);
}
void TalkTagScanner::func_020689e4() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[2]);
}
void TalkTagScanner::func_020689d0() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[3]);
}
void TalkTagScanner::tagColor() {
    using namespace n10;
    unk_5c = unk_38.getArgU8();
    _ZN11TalkTextBox9appendTagEPv(unk_28, &unk_38);
    _ZN11TalkTextBox22setRemainingLineColorsEj(unk_28, unk_5c);
    unk_24->unk_1704 = unk_5c;
}
void TalkTagScanner::tagAltText() {
    using namespace n10;
    u32 a;
    char *b;
    char *c;
    unk_38.func_020a72c4(&a, &b, &c);
    BOOL r = Talk_IsAltTextEnabled();
    _ZN15TalkCharStepper10startCountEPhih(unk_60, (u32)b, a, r);
    _ZN15TalkCharStepper10startUntilEPhjh(unk_9c, (u32)c, (u32)b, r == 0);
    skip(a * 2);
}
TalkTagScanner::TalkTagScanner(Unk_02068848_Owner *owner) {
    using namespace n10;
    unk_24 = owner;
    unk_28 = 0;
    _ZN6MsgTagC1Ev(SUB2C);
}
TalkTagScanner::~TalkTagScanner() {
    using namespace n10;}
void TalkTagScanner::func_020688ac(u8 *p) {
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
    _ZN6MsgTagC1Ev(SUB2C);
}
// ---- TalkTagScanner
void TalkTagScanner::reportTag() {
    using namespace n10;
    u8 b;
    SUB2C->getArgs1(&b);
    unk_24->unk_13b0->vfunc_64(b);
}
TalkFrame *TalkFrame::construct() {
    using namespace n10;
    unk_00 = NULL;
    unk_04 = NULL;
    unk_08 = NULL;
    _ZN12Unk_020e0d44C1Eh(unk_0c, 1);
    _ZN12Unk_020e10dcC1Ev(unk_50);
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
    _ZN12Unk_020e0d4413func_02089328Ev(unk_0c);
    _ZN12Unk_020e10dc13func_0208ec7cEv(unk_50);
    return this;
}
TalkFrame *TalkFrame::destruct() {
    using namespace n10;
    _ZN12Unk_020e10dc13func_0208ec78Ev(unk_50);
    freeBuffers();
    _ZN12Unk_020e10dcD1Ev(unk_50);
    _ZN12Unk_020e0d44D1Ev(unk_0c);
    return this;
}
void TalkFrame::update() {
    using namespace n10;
    func_020683d0();
    func_020682c4();
}
void TalkFrame::draw() {
    using namespace n10;
    func_020683bc();
    func_020682b8();
}
BOOL TalkFrame::loadScreen(void *file, BOOL alt) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, alt ? data_020dddec : data_020dde08);
    BOOL ok;
    unk_00 = (u16 *)Mem_AllocTail(0x800);
    if (unk_00 != NULL) {
        s32 n = FS_ReadFile(file, unk_00, 0x800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && unk_00) return TRUE;
    return FALSE;
}
BOOL TalkFrame::loadPalette(void *file) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, data_020dddd4);
    BOOL ok;
    unk_04 = Mem_AllocTail(0x180);
    if (unk_04 != NULL) {
        s32 n = FS_ReadFile(file, unk_04, 0x180);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && unk_04) return TRUE;
    return FALSE;
}
BOOL TalkFrame::loadCharacters(void *file) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, data_020dddbc);
    BOOL ok;
    unk_08 = Mem_AllocTail(0x2800);
    if (unk_08 != NULL) {
        s32 n = FS_ReadFile(file, unk_08, 0x2800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && unk_08) return TRUE;
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
                u16 *p = (u16 *)((y << 6) + (u32)unk_00);
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
            u16 *p = (u16 *)((y << 6) + (u32)unk_00);
            u16 v = (u16)(p[x] & 0xffff0fff);
            p[x] = v | (((u32)data_020cba24[idx] << 28) >> 16);
        }
    }
}
#undef SUB2C
#undef OWN
#undef unk_38
#undef data_020dddbc
#undef data_020dddd4
#undef data_020dddec
#undef data_020dde08
#undef data_020dde24

// ======== unk_02068558.cpp ========
namespace n9 {
extern "C" void FS_InitFile(void *p);

}
BOOL TalkFrame::load(s32 a, u32 b, s32 c, u8 d) {
    using namespace n9;
    BOOL result = FALSE;
    BOOL alt = (b == 0 && a == 0) ? TRUE : FALSE;
    Unk_02068558_File file;
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
extern "C" { extern u16 data_020ca488; }
extern "C" { extern u8 data_020cba14[]; }
extern "C" { extern u8 data_020cba0c[]; }
extern "C" { void *func_0207e310(void *); }
extern "C" { u32 func_0207856c(void *); }
extern "C" { BOOL func_0203cb38(); }
extern "C" { void Snd_EndTalk(); }
extern "C" { void Snd_BeginTalk(s32); }
extern "C" { void Snd_SetVoiceType(s32); }
extern "C" { void Snd_PlayTalkVoice(s32, s32, u32, u32); }
extern "C" { void Snd_PlaySe(u32); }
extern "C" { void _ZN15TalkWindowState15setVoicePlayingEi(void *, s32); }
extern "C" { void _ZN15TalkWindowState10resetVoiceEv(void *); }
extern "C" { BOOL Text_AsciiToGameChar(u8 *); }
extern "C" { s32 Text_GetCharSortKey(u32); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec50Eii(void *, s32, s32); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec58Ev(void *); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec68Ev(void *); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ee30Ev(void *); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ee38Ej(void *); }
extern "C" { s32 _ZN12Unk_020e0d4413func_020892acEv(void *); }
extern "C" { BOOL _ZN12Unk_020e0d4413func_02089284Ev(void *); }
extern "C" { void _ZN12Unk_020e0d4413func_02089320Eii(void *, s32, s32); }
extern "C" { void _ZN12Unk_020e0d4413func_020892b0Ei(void *, s32); }
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

extern "C" void TalkFrame_FreeBuffers(Unk_02068490_Ptrs *p)
{
    if (p->a) { Mem_Free(p->a); p->a = 0; }
    if (p->b) { Mem_Free(p->b); p->b = 0; }
    if (p->c) { Mem_Free(p->c); p->c = 0; }
}
extern "C" void TalkFrame_SetupBgControl()
{
    volatile u16 *r = (volatile u16 *)0x400000c;
    *r = (*r & ~3) | 1;
    *r = (*r & 0x43) | 0x600;
    *r = *r & ~0x40;
    Gfx2d_SetMainWin0Planes(0x1f);
    Gfx2d_SetMainWinOutPlanes(0x1b);
}
extern "C" void TalkFrame_UploadBg(Unk_02068490_Ptrs *p)
{
    u16 *q = p->b;
    DC_FlushRange(q + 1, 0x17e);
    GX_LoadBGPltt(q + 1, 2, 0x17e);
    DC_FlushRange(p->c, 0x2800);
    GX_LoadBG2Char(p->c, 0, 0x2800);
    DC_FlushRange(p->a, 0x800);
    GX_LoadBG2Scr(p->a, 0, 0x800);
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
    unk_74 = a;
    unk_78 = b;
    Gfx2d_SetMainBg2Offset(a, b);
    s32 hi = 0xff - a;
    s32 lo = -a;
    if (lo < 0) lo = 0;
    if (hi > 0xff) hi = 0xff;
    Gfx2d_SetMainWin0Rect(lo, 0x3c, hi, 0xc0);
}
void TalkFrameView::hideArrow() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 0); }
void TalkFrameView::showArrowWait() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 1); }
void TalkFrameView::showArrowNext() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 2); }
void TalkFrameView::showArrowEnd() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 3); }
void TalkFrameView::func_020683d0()
{
    using namespace n8;
    _ZN12Unk_020e0d4413func_02089320Eii(&unk_0c, unk_74 + 0x55, unk_78 + 0x47);
    unk_0c.vfunc_0c();
}
void TalkFrameView::func_020683bc() {
    using namespace n8; unk_0c.vfunc_08(); }
BOOL TalkFrameView::isArrowHidden()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 0) return TRUE;
    return FALSE;
}
BOOL TalkFrameView::isArrowWaiting()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 1) return TRUE;
    return FALSE;
}
BOOL TalkFrameView::isArrowNextDone()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 2 && _ZN12Unk_020e0d4413func_02089284Ev(&unk_0c)) return TRUE;
    return FALSE;
}
BOOL TalkFrameView::isArrowEndDone()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 3 && _ZN12Unk_020e0d4413func_02089284Ev(&unk_0c)) return TRUE;
    return FALSE;
}
void TalkFrameView::func_02068304()
{
    using namespace n8;
    _ZN12Unk_020e10dc13func_0208ee38Ej((u8 *)this + 0x50);
    unk_7c = -1;
}
void TalkFrameView::func_020682f0()
{
    using namespace n8;
    _ZN12Unk_020e10dc13func_0208ee30Ev((u8 *)this + 0x50);
    unk_7c = 4;
}
void TalkFrameView::func_020682c4()
{
    using namespace n8;
    _ZN12Unk_020e10dc13func_0208ec50Eii((u8 *)this + 0x50, unk_74 + 0x59, unk_78 + 0x4b);
    _ZN12Unk_020e10dc13func_0208ec68Ev((u8 *)this + 0x50);
    if (unk_7c > 0) unk_7c--;
}
void TalkFrameView::func_020682b8() {
    using namespace n8; _ZN12Unk_020e10dc13func_0208ec58Ev((u8 *)this + 0x50); }
namespace n8 {
extern "C" u8 Talk_ColorTagToTextColor(u32 x)
{
    if (x == 9) x = 2;
    return x + 1;
}
}
void TalkVoice::func_020682a4(s32 v) {
    using namespace n8; unk_20 = v; }
void TalkVoice::func_0206829c() {
    using namespace n8; unk_20 = 5; }
void TalkVoice::func_02068298(s32 v) {
    using namespace n8; unk_14 = v; }
void TalkVoice::func_02068290() {
    using namespace n8; unk_14 = 7; }
void TalkVoice::setVoiceType(s32 r)
{
    using namespace n8;
    if (unk_20 == 5 && unk_24 != 5 && unk_24 != r) {
        Snd_SetVoiceType(r);
        unk_24 = r;
    }
}
void TalkVoice::refreshVoiceType()
{
    using namespace n8;
    setVoiceType(unk_04->unk_13b0->vfunc_6c());
}
TalkVoice::TalkVoice(TalkWindow *o)
    : unk_04(o), unk_14(7), unk_18(0), unk_1c(0), unk_1d(0), unk_1e(0), unk_20(5), unk_24(5), unk_28(0)
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
    u16 d = data_020ca488;
    for (; i < 2; i++) (&unk_08)[i] = d;
    if (flag != 0) unk_0c = d;
    unk_10 = 0;
}
void TalkVoice::pushChar()
{
    using namespace n8;
    u32 cur = data_020ca488;
    u32 nw = cur;
    s32 low;
    if (unk_10 < 2) low = 1; else low = 0;
    BOOL a, b;
    if (unk_08 == 0x2a) a = 1; else a = 0;
    if (unk_0a == 0x2a) b = 1; else b = 0;
    if (low != 0 || a != 0 || b != 0) {
        u8 buf;
        if (Text_AsciiToGameChar(&buf)) {
            s32 v = Text_GetCharSortKey(buf);
            if (v != cur) {
                if (v == 0x26 && unk_1e != 0) v = 0x27;
                nw = v;
            }
        }
    }
    if (nw != cur) {
        if (low == 0) {
            if (a != 0) {
                unk_08 = unk_0a;
                unk_0a = cur;
                unk_10 = unk_10 - 1;
            } else if (b != 0) {
                unk_0a = cur;
                unk_10 = unk_10 - 1;
            }
        }
        s32 n = unk_10;
        if (n < 2) {
            unk_10 = n + 1;
            (&unk_08)[n] = nw;
        }
    }
}
void TalkVoice::update()
{
    using namespace n8;
    updateVoiceType();
    shiftHistory();
    if (unk_1c == 0 && unk_1d == 0) {
        s32 a = getVoiceStyle();
        s32 b = getSpeakerMoodIndex();
        if (unk_10 >= 1) {
            if (unk_24 == 5) {
                if (a != 2) Snd_PlaySe(0x2c);
            } else {
                Snd_PlayTalkVoice(a, b, unk_08, unk_0a);
            }
        }
        s32 flag = 0;
        if (unk_28 != 4) {
            s32 i = 0;
            u16 d = data_020ca488;
            for (; i < unk_10; i++) {
                u16 h = (&unk_08)[i];
                if (h != d && h != 0x2a && h != 0x2b && h != 0x29 && h != 0x26 && h != 0x28 && h != 0x27 && h != 0x25)
                    flag = 1;
            }
        }
        _ZN15TalkWindowState15setVoicePlayingEi(unk_04, flag);
    }
    if (unk_1e != 0) _ZN15TalkWindowState10resetVoiceEv(unk_04);
}
void TalkVoice::setMsgMode(s32 v) {
    using namespace n8; unk_18 = v; }
void TalkVoice::begin()
{
    using namespace n8;
    s32 r = 5;
    if (unk_20 != 5) {
        r = unk_20;
    } else if (getVoiceStyle() == 0) {
        if (unk_18 == 3) r = 1;
        else r = unk_04->unk_13b0->vfunc_6c();
    }
    unk_24 = r;
    if (r != 5) Snd_BeginTalk(r);
}
void TalkVoice::end()
{
    using namespace n8;
    if (unk_24 != 5) Snd_EndTalk();
    unk_24 = 5;
}
u32 TalkVoice::getVoiceStyle()
{
    using namespace n8;
    u32 r = func_0203cb38();
    s32 a = unk_18;
    BOOL b = r == 0 ? TRUE : FALSE;
    if (unk_14 != 7) a = unk_14;
    if (a != 0 && a != 3 && b) r = 1;
    if (unk_28 == 4 && b) r = 1;
    return data_020cba0c[r];
}
u8 TalkVoice::getSpeakerMoodIndex()
{
    using namespace n8;
    u32 i = 0;
    void *p = unk_04->unk_13b0->vfunc_68();
    if (p) {
        p = func_0207e310(p);
        if (p) i = func_0207856c(p);
    }
    return data_020cba14[i];
}
void TalkVoice::updateVoiceType()
{
    using namespace n8;
    s32 r = 5;
    if (unk_24 == 0) {
        if (unk_28 == 9) r = 4;
    } else if (unk_24 == 4) {
        if (unk_28 != 9) r = ((TalkWindow *)unk_04)->unk_13b0->vfunc_6c();
    }
    if (r != 5) setVoiceType(r);
}
void TalkVoice::shiftHistory()
{
    using namespace n8;
    if (unk_10 == 0) {
        u16 c = data_020ca488;
        if (unk_0c != c) {
            unk_08 = unk_0c;
            unk_0c = c;
            unk_10++;
        }
    } else if (unk_10 == 1) {
        if (unk_0c != data_020ca488) {
            unk_0a = unk_08;
            unk_08 = unk_0c;
            unk_0c = unk_0a;
            unk_10++;
        }
    } else {
        unk_0c = unk_0a;
    }
}
TalkWindow::TalkWindow()
    : unk_00(0), unk_04(0), unk_08(6), unk_0c(0), unk_10(0), unk_14(4), unk_18(0),
      unk_588(0), unk_58c(this), unk_12c0(this, &unk_58c), unk_13a4(&unk_12c0),
      unk_13b0(0), unk_16dc(this), unk_1708(0), unk_1710(0), unk_1714(0), unk_1718(0),
      unk_19f4(0), unk_19f5(0), unk_19f6(0), unk_19f7(gTalkMsgIndexNone),
      unk_1a12(0), unk_1a13(0), unk_1a14(0), unk_1a15(0), unk_1a16(0), unk_1a17(0), unk_1a18(0), unk_1a19(0), unk_1a1a(0)
{
    using namespace n8;
    MI_CpuFill8(unk_19f8, 0, 0x1a);
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
extern "C" { s32 func_020e759c(void *p, s32 a, s32 b); }
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
extern "C" { s32 _ZN9TalkVoice8pushCharEv(void *p, s32 a); }
extern "C" { s32 func_0203cba8(); }
extern "C" { s32 _ZN9TalkFrame4drawEv(void *p); }
extern "C" { s32 _ZN10ChoiceMenu4drawEv(void *p); }
extern "C" { s32 _ZN9TalkFrame6updateEv(void *p); }
extern "C" { s32 _ZN10ChoiceMenu6updateEv(void *p); }
extern "C" { s32 func_021355a8(void *p, s32 a, s32 b, void *c); }
extern "C" { s32 _ZN13TalkFrameView13func_020682f0Ev(void *p); }
extern "C" { s32 _ZN13TalkFrameView13func_02068304Ev(void *p); }
extern "C" { s32 _ZN10ChoiceMenu14setListChoicesEP10ChoiceList(void *p, void *q); }
extern "C" { s32 _ZN10ChoiceMenu4openEv(void *p); }
extern "C" { s32 _ZN9MsgString4copyEPS_(void *p, void *q); }
extern "C" { s32 String_Load(void *p, s32 a, s32 b); }
extern "C" { s32 func_0212a2ec(void *d, void *s, s32 n); }
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
extern "C" { s32 _ZN12Unk_020e1c64D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020dd38cD1Ev(void *p); }
extern "C" { s32 _ZN11MsgString11D1Ev(void *p); }
extern "C" { s32 _ZN11MsgString25D1Ev(void *p); }
extern "C" { s32 _ZN9TalkVoiceD1Ev(void *p); }
extern "C" { void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor); }
extern "C" { s32 _ZN11MsgString33D1Ev(void *p); }
extern "C" { s32 func_020a728c(void *p); }
extern "C" { s32 func_020a8538(void *p); }
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
    _ZN13TalkWindowMsg16destroyNameLabelEv(this);
    detachRequest();
    _ZN12MsgString17BD1Ev(unk_19d0);
    _ZN11MsgString17D1Ev(unk_19ac);
    _ZN12Unk_020e1c64D1Ev(unk_1990);
    _ZN11MsgString33D1Ev(unk_195c);
    _ZN11MsgString33D1Ev(unk_1928);
    _ZN12Unk_020e1c64D1Ev(unk_190c);
    _ZN12Unk_020e1c64D1Ev(unk_18f0);
    _ZN12Unk_020e1c64D1Ev(unk_18d4);
    _ZN12Unk_020e1c64D1Ev(unk_18b8);
    _ZN12Unk_020e1c64D1Ev(unk_189c);
    _ZN12Unk_020dd38cD1Ev(unk_1880);
    _ZN11MsgString11D1Ev(unk_1860);
    _ZN11MsgString25D1Ev(unk_1834);
    _ZN11MsgString25D1Ev(unk_1808);
    _ZN11MsgString25D1Ev(unk_17dc);
    _ZN11MsgString33D1Ev(unk_17a8);
    _ZN11MsgString25D1Ev(unk_177c);
    _ZN11MsgString33D1Ev(unk_1748);
    _ZN11MsgString25D1Ev(unk_171c);
    _ZN9TalkVoiceD1Ev(unk_16dc);
    __cxa_vec_cleanup(unk_15fc, 4, 0x34, (void *)_ZN11MsgString33D1Ev);
    __cxa_vec_cleanup(unk_13c0, 0xb, 0x34, (void *)_ZN11MsgString33D1Ev);
    func_020a728c(unk_13b4);
    func_020a8538(unk_13a4);
    _ZN10TalkParserD1Ev(unk_12c0);
    _ZN13TalkBmgReaderD1Ev(unk_a1c);
    _ZN11TalkTextBoxD1Ev(unk_58c);
    _ZN10ChoiceListD1Ev(unk_314);
    _ZN10ChoiceMenuD1Ev(unk_b4);
    _ZN9TalkFrame8destructEv(unk_1c);
}
BOOL TalkWindowState::setNextMessageIfUnset(u8 *src, void *s) {
    using namespace n7;
    BOOL r = FALSE;
    if (unk_19f7 == gTalkMsgIndexNone) {
        setNextMessage(src, s);
        r = TRUE;
    }
    return r;
}
void TalkWindowState::setNextMessage(u8 *src, void *s) {
    using namespace n7;
    unk_19f7 = *src;
    if (s) {
        func_0212a2ec(unk_19f8, s, 0x19);
    } else {
        MI_CpuFill8(unk_19f8, 0, 0x1a);
    }
}
void TalkWindowState::lockAdvance() {
    using namespace n7; unk_1a13 = 1; }
void TalkWindowState::unlockAdvance() {
    using namespace n7; unk_1a13 = 0; }
void TalkWindowState::setAdvancePending() {
    using namespace n7; unk_1a12 = 1; }
void TalkWindowState::clearAdvancePending() {
    using namespace n7; unk_1a12 = 0; }
s32 TalkWindowState::setSlot(s32 idx, void *p) {
    using namespace n7;
    return _ZN9MsgString4copyEPS_(unk_13c0 + idx * 0x34, p);
}
void TalkWindowState::setSlotFromString(s32 idx, s32 a, s32 b) {
    using namespace n7;
    String_Load(unk_13c0 + idx * 0x34, a, b);
}
void TalkWindowState::setNamedSlot(s32 idx, void *p, u32 val) {
    using namespace n7;
    _ZN9MsgString4copyEPS_(unk_15fc + idx * 0x34, p);
    unk_16cc[idx] = val;
}
void TalkWindowState::openChoices(s32 v) {
    using namespace n7;
    if (v) {
        unk_18 = 1;
    } else {
        _ZN10ChoiceMenu14setListChoicesEP10ChoiceList(unk_b4, unk_314);
        _ZN10ChoiceMenu4openEv(unk_b4);
    }
}
void *TalkWindowState::getChoiceList() {
    using namespace n7; return unk_314; }
u8 TalkWindowState::isVoicePlaying() {
    using namespace n7; return unk_1a17; }
s32 TalkWindowState::func_0206799c() {
    using namespace n7; return _ZN13TalkFrameView13func_02068304Ev(unk_1c); }
s32 TalkWindowState::func_02067990() {
    using namespace n7; return _ZN13TalkFrameView13func_020682f0Ev(unk_1c); }
void TalkWindowState::attachRequest(TalkMsgRequest *p) {
    using namespace n7;
    unk_13b0 = p;
    p->attachWindow((u32)this);
}
void TalkWindowState::detachRequest() {
    using namespace n7;
    if (unk_13b0) {
        unk_13b0->detachWindow();
        unk_13b0 = 0;
    }
}
void TalkWindowState::disableInput() {
    using namespace n7; unk_1a18 = 1; }
void TalkWindowState::setKeepSe() {
    using namespace n7; unk_1a19 = 1; }
void TalkWindowState::setSilent() {
    using namespace n7; unk_1a1a = 1; }
namespace n7 {
extern "C" TalkWindowState *TalkWindow_Get(s32 i) {
    TalkWindowState *r = 0;
    if (gTalkWindows) r = gTalkWindows + i;
    return r;
}
extern "C" void TalkWindow_CreateAll() {
    gTalkWindows = new TalkWindowState[2];
    for (s32 i = 0; i < 2; i++) gTalkWindows[i].unk_00 = i;
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
    (this->*tbl[unk_04])();
    applyStateChange();
    updateShake();
    _ZN9TalkFrame6updateEv(unk_1c);
    _ZN10ChoiceMenu6updateEv(unk_b4);
    if (unk_04 != 0 && unk_04 != 5) storeInputMode();
}
void TalkWindowState::draw() {
    using namespace n7;
    _ZN9TalkFrame4drawEv(unk_1c);
    _ZN10ChoiceMenu4drawEv(unk_b4);
}
namespace n7 {
extern "C" BOOL Talk_IsAltTextEnabled() {
    if (func_0203cba8() == 0) return TRUE;
    return FALSE;
}
}
s32 TalkWindowState::onCharPrinted(s32 a) {
    using namespace n7;
    return _ZN9TalkVoice8pushCharEv(unk_16dc, a);
}
void TalkWindowState::setVoicePlaying(BOOL v) {
    using namespace n7;
    if (v) {
        unk_1a17 = 1;
    } else {
        unk_1a17 = 0;
    }
}
s32 TalkWindowState::resetVoice() {
    using namespace n7;
    unk_1a17 = 0;
    return _ZN9TalkVoice5resetEi(unk_16dc, 1);
}
void *TalkWindowState::getYearText() {
    using namespace n7;
    Unk_020676b4_Tmp t;
    String_FormatNumber(&t, unk_1708, 2, 6, 0, 0);
    _ZN9MsgString3setEPh(unk_171c, data_020dddb8);
    _ZN9MsgString12appendStringEPS_(unk_171c, &t);
    return unk_171c;
}
void *TalkWindowState::getMonthText() {
    using namespace n7;
    String_GetMonthName(unk_1748, unk_170d);
    return unk_1748;
}
void *TalkWindowState::getDayText() {
    using namespace n7;
    String_GetDayOrdinal(unk_177c, unk_170c);
    return unk_177c;
}
void *TalkWindowState::getWeekdayText() {
    using namespace n7;
    String_GetWeekdayName(unk_17a8, unk_1710, 0);
    return unk_17a8;
}
void *TalkWindowState::getHourText() {
    using namespace n7;
    u32 t = unk_170f;
    if (t >= 12) t -= 12;
    if (t == 0) t = 12;
    String_FormatNumber(unk_17dc, t, 2, 0, 0, 0);
    return unk_17dc;
}
void *TalkWindowState::getMinuteText() {
    using namespace n7;
    String_FormatNumber(unk_1808, unk_170e, 2, 6, 9, 0);
    return unk_1808;
}
void *TalkWindowState::getNumber1714Text() {
    using namespace n7;
    String_FormatNumber(unk_1834, unk_1714, 2, 0, 0, 0);
    return unk_1834;
}
void TalkWindowState::startShake(s32 a, s32 b, s32 c, s32 d) {
    using namespace n7;
    unk_a0 = 0;
    unk_a4 = a;
    unk_a8 = b;
    unk_ac = c;
    unk_b0 = d;
    unk_a8 = unk_a8 * 3;
    unk_a8 = unk_a8 >> 1;
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
    if (unk_13b0->vfunc_68() == 0) {
        flag = TRUE;
    } else {
        flag = FALSE;
    }
    mode = unk_13b0->getNameKind();
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
    _ZN13TalkWindowMsg16destroyNameLabelEv(this);
    _ZN13TalkWindowMsg15createNameLabelEv(this);
}
void TalkWindowState::loadInputMode() {
    using namespace n7;
    if (unk_1a18 == 0) Input_LoadMode();
}
void TalkWindowState::storeInputMode() {
    using namespace n7;
    if (unk_1a18 == 0) Input_StoreMode();
}
BOOL TalkWindowState::checkDeviceSwitch() {
    using namespace n7;
    BOOL r = FALSE;
    if (unk_1a18 == 0) {
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
    if (unk_1a18 == 0) {
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
    if (unk_1a18 == 0) {
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
    if (unk_a4 != 0) {
        BOOL c = TRUE;
        if (unk_04 != 3 && unk_04 != 2) c = FALSE;
        BOOL z = func_020e759c(&unk_a4, 0, unk_a8) != 0 ? TRUE : FALSE;
        if (c != 0 && z == 0) {
            unk_a0 = unk_a0 + 0x4000;
            s32 a = func_01ffcb0c(unk_a4, unk_ac);
            s32 b = func_01ffcb0c(unk_a4, unk_b0);
            s32 ang = unk_a0;
            a = func_01ffcb0c(data_02135f44[(((u16)(s16)(ang + 0x2000)) >> 4) * 2 + 1], a);
            b = func_01ffcb0c(data_02135f44[(((u16)(s16)(ang * 2 - 0x4000)) >> 4) * 2], b);
            _ZN13TalkFrameView9setScrollEii(unk_1c, -(a >> 12), unk_9c + (b >> 12));
        } else {
            s32 zero = 0;
            unk_a0 = zero;
            unk_a4 = zero;
            unk_a8 = zero;
            unk_ac = zero;
            unk_b0 = zero;
            _ZN13TalkFrameView9setScrollEii(unk_1c, zero, unk_9c);
        }
    }
}
void TalkWindowState::captureClock() {
    using namespace n7;
    unk_1708 = Clock_GetYear();
    Clock_GetDayMonth(&unk_170c);
    Clock_GetMinuteHour(&unk_170e);
    unk_1710 = Clock_GetWeekday();
    unk_1714 = Clock_GetSecond();
    unk_1718 = Clock_GetTimeOfDay();
}
void TalkWindowState::resetPrint() {
    using namespace n7;
    _ZN10TalkParser16clearFastForwardEv(unk_12c0);
    func_02066cfc();
}
void TalkWindowState::finish() {
    using namespace n7;
    clearAdvancePending();
    resetPrint();
    unk_13b0->vfunc_74();
}
void TalkWindowState::stopText() {
    using namespace n7;
    _ZN10TalkParser4stopEv(unk_12c0);
    _ZN11TalkTextBox11clearLabelsEv(unk_58c);
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
    ((TalkParser *)unk_12c0)->resetColor();
    _ZN13TalkWindowMsg23clearRandomVillagerNameEv(this);
    _ZN13TalkWindowMsg22clearOtherResidentNameEv(this);
    _ZN13TalkWindowMsg16clearCatchphraseEv(this);
    _ZN13TalkWindowMsg13clearTownNameEv(this);
    _ZN13TalkWindowMsg15clearPlayerNameEv(this);
    _ZN13TalkWindowMsg15clearFriendNameEv(this);
    _ZN13TalkWindowMsg14clearEnemyNameEv(this);
    _ZN13TalkWindowMsg10clearTrendEv(this);
    _ZN13TalkWindowMsg15clearImpressionEv(this);
    _ZN13TalkWindowMsg13clearNicknameEv(this);
    _ZN13TalkWindowMsg15clearComplimentEv(this);
    _ZN13TalkWindowMsg13clearGreetingEv(this);
    stopText();
}

// ======== unk_020668a0.cpp ========
#define AT(T, off) (*(T *)((u8 *)this + (off)))
#define PTR(off) ((void *)((u8 *)this + (off)))
#define OWNER unk_13b0
#define M ((BmgReader *)unk_a1c)
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
extern "C" { u32 func_0212a438(const char *s); }
extern "C" { char *func_020639e8(char *buf, const char *fmt, ...); }
extern "C" { void func_020638d0(void *dst, void *src); }
extern "C" { void Snd_PlaySe(void); }
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
extern "C" { Unk_02066978_Owner *_ZN10ChoiceList13getResultTextEv(void *p); }
extern "C" { void _ZN11MsgString3313func_020a7188Ev(void *p); }
extern "C" { void _ZN9MsgString5clearEv(void *p); }
extern "C" { void MsgTextLabel_Destroy(void *p); }
extern "C" { void _ZN11TalkTextBox11setCenteredEh(void *p, u32 v); }
extern "C" { void _ZN10TalkParser12setPrintModeEi(void *p, s32 v); }
extern "C" { void _ZN15TalkWindowState14setNextMessageEPhPv(void *self, u8 *p, s32 z); }
extern "C" { s32 _ZN15TalkWindowState13unlockAdvanceEv(void *self); }
extern "C" { s32 _ZN15TalkWindowState13resetTextVarsEv(void *self); }
extern "C" { void *PlayerData_GetCurrent(void); }
extern "C" { s32 _ZN10PlayerData11getPlayerIdEv(void *p); }
extern "C" { s32 Villager_FindMemoryIndex(void *a, s32 b); }
extern "C" { void *Villager_GetMemory(void *a, s32 b); }
extern "C" { void _ZN14VillagerMemory13addFriendshipEi(void *a, s32 b); }
extern "C" { void *_ZN14VillagerMemory13getFriendshipEv(void *a); }
extern "C" { void func_0207787c(void *a, s32 b, void *c); }
extern "C" { s32 _ZN12Unk_02097ff413func_0209836cEPv(void *g, void *p); }
extern "C" { void Villager_GetRandomOtherName(void *a, void *b); }
extern "C" { void Villager_GetEnemyName(void *a, void *b); }
extern "C" { void Villager_GetFriendName(void *a, void *b); }
extern "C" { void Villager_GetImpressionText(void *a, void *b, s32 c); }
extern "C" { s32 Villager_GetTrend(void *a, void *b); }
extern "C" { s32 _ZN20VillagerDataItemView14getGreetingForEPvS0_(void *a, void *b, s32 c); }
extern "C" { void _ZN20VillagerDataItemView16getComplimentForEPvS0_(void *a, void *b, s32 c); }
extern "C" { void Villager_GetNicknameFor(void *a, void *b, s32 c); }
extern "C" { void _ZN23VillagerDataProfileView14getCatchphraseEPvS0_(void *a, void *b, s32 c); }
extern "C" { void _ZN8PlayerId13func_020940d0EP9MsgString(s32 a, void *b); }
extern "C" { Unk_02066978_Owner *_ZN14TalkMsgRequest13func_02065f10Ev(void *p); }
extern "C" { TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c); }

}
void TalkWindowMsg::resetVars() {
    using namespace n5;
    _ZN15TalkWindowState13resetTextVarsEv(this);
    unk_1a19 = 0;
}
void TalkWindowMsg::reset() {
    using namespace n5;
    resetVars();
    clearSlots();
    clearNamedSlots();
    _ZN15TalkWindowState13unlockAdvanceEv(this);
}
void TalkWindowMsg::clearSlots() {
    using namespace n5;
    s32 i;
    for (i = 0; i < 11; i++) {
        _ZN11MsgString3313func_020a7188Ev(unk_13c0[i]);
    }
}
void TalkWindowMsg::clearNamedSlots() {
    using namespace n5;
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN11MsgString3313func_020a7188Ev(unk_15fc[i]);
        unk_16cc[i] = 7;
    }
}
void TalkWindowMsg::clearCatchphrase() {
    using namespace n5; _ZN9MsgString5clearEv(unk_1860); }
BOOL TalkWindowMsg::buildCatchphrase() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_1860);
    if (r6 != 0) {
        _ZN23VillagerDataProfileView14getCatchphraseEPvS0_(r6, unk_1860, 1);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearTownName() {
    using namespace n5; _ZN9MsgString5clearEv(unk_1880); }
BOOL TalkWindowMsg::buildTownName() {
    using namespace n5;
    _ZN9MsgString5clearEv(unk_1880);
    func_020638d0((u8 *)((u32)gSaveData + 2), unk_1880);
    return TRUE;
}
void TalkWindowMsg::clearPlayerName() {
    using namespace n5; _ZN9MsgString5clearEv(unk_189c); }
BOOL TalkWindowMsg::buildPlayerName() {
    using namespace n5;
    void *r4 = PlayerData_GetCurrent();
    _ZN9MsgString5clearEv(unk_189c);
    _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(r4), unk_189c);
    return TRUE;
}
void TalkWindowMsg::clearFriendName() {
    using namespace n5; _ZN9MsgString5clearEv(unk_18b8); }
BOOL TalkWindowMsg::buildFriendName() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_18b8);
    if (r6 != 0) {
        Villager_GetFriendName(r6, unk_18b8);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearEnemyName() {
    using namespace n5; _ZN9MsgString5clearEv(unk_18d4); }
BOOL TalkWindowMsg::buildEnemyName() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_18d4);
    if (r6 != 0) {
        Villager_GetEnemyName(r6, unk_18d4);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearRandomVillagerName() {
    using namespace n5;
    unk_19f4 = 0;
    _ZN9MsgString5clearEv(unk_18f0);
}
BOOL TalkWindowMsg::buildRandomVillagerName() {
    using namespace n5;
    BOOL r4 = TRUE;
    if (unk_19f4 == 0) {
        void *r6 = OWNER->vfunc_68();
        _ZN9MsgString5clearEv(unk_18f0);
        if (r6 != 0) {
            Villager_GetRandomOtherName(r6, unk_18f0);
        } else {
            r4 = FALSE;
        }
        unk_19f4 = 1;
    }
    return r4;
}
void TalkWindowMsg::clearOtherResidentName() {
    using namespace n5;
    unk_19f5 = 0;
    unk_19f6 = 0;
    _ZN9MsgString5clearEv(unk_190c);
}
BOOL TalkWindowMsg::buildOtherResidentName() {
    using namespace n5;
    BOOL r4 = TRUE;
    if (unk_19f5 == 0) {
        void *g = PlayerData_GetCurrent();
        _ZN9MsgString5clearEv(unk_190c);
        if (_ZN12Unk_02097ff413func_0209836cEPv(g, unk_190c) == 0) {
            void *r0 = OWNER->vfunc_68();
            if (r0 != 0) {
                Villager_GetRandomOtherName(r0, unk_190c);
                unk_19f6 = r4;
            } else {
                r4 = FALSE;
            }
        }
        unk_19f5 = 1;
    }
    return r4;
}
void TalkWindowMsg::clearTrend() {
    using namespace n5; _ZN9MsgString5clearEv(unk_1928); }
BOOL TalkWindowMsg::buildTrend() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_1928);
    if (r6 != 0) {
        if (Villager_GetTrend(r6, unk_1928) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}
void TalkWindowMsg::clearImpression() {
    using namespace n5; _ZN9MsgString5clearEv(unk_195c); }
BOOL TalkWindowMsg::buildImpression() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_195c);
    if (r6 != 0) {
        Villager_GetImpressionText(r6, unk_195c, 0);
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearNickname() {
    using namespace n5; _ZN9MsgString5clearEv(unk_1990); }
BOOL TalkWindowMsg::buildNickname() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_1990);
    if (r6 != 0) {
        void *g = PlayerData_GetCurrent();
        Villager_GetNicknameFor(r6, unk_1990, _ZN10PlayerData11getPlayerIdEv(g));
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearCompliment() {
    using namespace n5; _ZN9MsgString5clearEv(unk_19ac); }
BOOL TalkWindowMsg::buildCompliment() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_19ac);
    if (r6 != 0) {
        void *g = PlayerData_GetCurrent();
        _ZN20VillagerDataItemView16getComplimentForEPvS0_(r6, unk_19ac, _ZN10PlayerData11getPlayerIdEv(g));
        r4 = TRUE;
    }
    return r4;
}
void TalkWindowMsg::clearGreeting() {
    using namespace n5; _ZN9MsgString5clearEv(unk_19d0); }
BOOL TalkWindowMsg::buildGreeting() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN9MsgString5clearEv(unk_19d0);
    if (r6 != 0) {
        void *g = PlayerData_GetCurrent();
        if (_ZN20VillagerDataItemView14getGreetingForEPvS0_(r6, unk_19d0, _ZN10PlayerData11getPlayerIdEv(g)) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}
void TalkAutoAdvance::stop() {
    using namespace n5;
    unk_10 = 0;
}
void TalkAutoAdvance::start(s32 v) {
    using namespace n5;
    unk_10 = v;
}
BOOL TalkAutoAdvance::tick() {
    using namespace n5;
    BOOL r = FALSE;
    if (unk_10 > 0) {
        unk_10--;
        if (unk_10 == 0) {
            r = TRUE;
        }
    }
    return r;
}
void TalkWindowMsg::applyFriendshipDelta(s32 idx) {
    using namespace n5;
    if (idx != 0) {
        void *r4 = OWNER->vfunc_68();
        void *g = PlayerData_GetCurrent();
        if (r4 != 0) {
            s32 r7 = Villager_FindMemoryIndex(r4, _ZN10PlayerData11getPlayerIdEv(g));
            void *r6 = Villager_GetMemory(r4, r7);
            if (r6 != 0) {
                _ZN14VillagerMemory13addFriendshipEi(r6, sTalkFriendshipDeltas[idx]);
                func_0207787c(r4, r7, _ZN14VillagerMemory13getFriendshipEv(r6));
            }
        }
    }
}
void TalkWindowMsg::createNameLabel() {
    using namespace n5;
    unk_588 = MsgTextLabel_CreateVram(0x89, 8, 2);
    if (unk_588 != 0) {
        unk_588->unk_50 = 2;
        unk_588->unk_39 = 0xe;
        Unk_02066978_Owner *o = _ZN14TalkMsgRequest13func_02065f10Ev(unk_13b0);
        TextLabel *t = unk_588;
        t->unk_10 = o->vfunc_0c();
        unk_588->alignCenter();
        unk_588->unk_38 = 2;
        unk_588->requestRedraw();
    }
}
void TalkWindowMsg::destroyNameLabel() {
    using namespace n5;
    if (unk_588 != 0) {
        MsgTextLabel_Destroy(unk_588);
        unk_588 = 0;
    }
}
void TalkWindowMsg::notifyMessageStart() {
    using namespace n5;
    if (unk_1a14 != 0) {
        OWNER->vfunc_10(BmgMsgAttr_GetByte06(unk_13b4));
        unk_1a14 = 0;
    }
}
void TalkWindowMsg::notifyMessageEnd() {
    using namespace n5;
    if (unk_1a15 != 0) {
        applyFriendshipDelta(BmgMsgAttr_GetByte05(unk_13b4));
        OWNER->vfunc_14(BmgMsgAttr_GetByte07(unk_13b4));
        unk_1a15 = 0;
    }
}
void TalkWindowMsg::notifyChoice() {
    using namespace n5;
    if (unk_1a16 != 0) {
        OWNER->vfunc_18(BmgMsgAttr_GetByte07(_ZN10ChoiceList13getResultAttrEv(unk_314)));
        unk_1a16 = 0;
    }
}
void TalkWindowMsg::playMessageSe() {
    using namespace n5;
    s32 r0 = BmgMsgAttr_GetByte09(unk_13b4);
    if (r0 < 2) {
        if (data_020cba10[r0] != 0) {
            Snd_PlaySe();
        }
    }
}
void TalkWindowMsg::startMessage() {
    using namespace n5;
    u8 loc;
    unk_1a15 = 1;
    unk_1a14 = 1;
    unk_1a16 = 0;
    _ZN11TalkTextBox11setCenteredEh(unk_58c, BmgMsgAttr_LookupUnkC(unk_13b4) == 1 ? 1 : 0);
    s32 r4 = BmgMsgAttr_LookupUnkB(unk_13b4);
    _ZN10TalkParser12setPrintModeEi(unk_12c0, r4);
    unk_16f8 = r4 == 1 ? 1 : 0;
    BmgMsgAttr_GetByte08(&loc, unk_13b4);
    _ZN15TalkWindowState14setNextMessageEPhPv(this, &loc, 0);
    notifyMessageStart();
    playMessageSe();
    _ZN9MsgRunner5resetEv(unk_13a4);
    _ZN9MsgRunner5startEPh(unk_13a4, M->getBuffer());
}
void TalkWindowMsg::scanMessageTags() {
    using namespace n5;
    Unk_02066978_Owner *o = _ZN10ChoiceList13getResultTextEv(unk_314);
    Unk_0206891c loc(this);
    loc.func_020688ac(o->vfunc_0c());
}
char *TalkWindowMsg::buildMessagePath(const char *a, const char *b) {
    using namespace n5;
    u32 r6 = (u32)b;
    if (r6 == 0) {
        r6 = OWNER->vfunc_0c();
    }
    const char *r5 = a ? a : (const char *)unk_13b0 + 4;
    const char *r7 = matchDirPrefix(r5);
    if (r7 != 0) {
        r5 += func_0212a438(r7) + 1;
        const char *r4 = matchSubdirPrefix(r5);
        if (r4 != 0) {
            const char *e = r5 + (func_0212a438(r4) + 1);
            func_020639e8(sTalkMessagePath, data_020ddd7c, r6, r7, r4, e);
        } else {
            func_020639e8(sTalkMessagePath, data_020ddd90, r6, r7, r5);
        }
    } else {
        func_020639e8(sTalkMessagePath, data_020ddda4, r6, r5);
    }
    return sTalkMessagePath;
}
const char *TalkWindowMsg::matchDirPrefix(const char *s) {
    using namespace n5;
    const char **p;
    const char *e;
    for (p = sTalkMessageDirs; (e = *p) != 0; p++) {
        u32 n = func_0212a438(e);
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
        u32 n = func_0212a438(e);
        if (strncmp(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}
void TalkWindowMsg::loadMessageAttr() {
    using namespace n5;
    _ZN13TalkMsgBuffer5clearEv(unk_a1c);
    if (M->open(buildMessagePath(0, 0))) {
        M->loadMessage((u8 *)unk_13b0 + 0x1e);
    }
    BmgMsgAttr_Copy(unk_13b4, Bmg_GetMsgAttr(unk_a1c));
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
#define unk_19f8 (*(s8 *)unk_19f8)
namespace n4 {
extern "C" { s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *p, u8 *a, void *b); }
extern "C" { s32 _ZN13TalkWindowMsg15loadMessageAttrEv(void *p); }
extern "C" { s32 _ZN13TalkWindowMsg12startMessageEv(void *p); }
extern "C" { s32 _ZN15TalkWindowState12captureClockEv(void *p); }

}
void TalkWindowState::loadNextMessage() {
    using namespace n4;
    unk_13b0->unk_1e = unk_19f7;
    if (unk_19f8 != 0) {
        unk_13b0->setFileName((const char *)&unk_19f8);
    }
    _ZN15TalkWindowState14setNextMessageEPhPv(this, &gTalkMsgIndexNone, 0);
    _ZN13TalkWindowMsg15loadMessageAttrEv(this);
    _ZN13TalkWindowMsg12startMessageEv(this);
    _ZN15TalkWindowState12captureClockEv(this);
}
#undef unk_19f8

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
extern "C" { s32 _ZN12Unk_0203575813func_02035bccEv(void *p); }
extern "C" { s32 _ZN12Unk_0203575813func_02035bd4Ev(void *p); }
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
extern "C" { s32 func_02038fd4(u32 a); }
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
extern "C" { extern Unk_020cbb18_Obj *gCommManager; }
typedef void (TalkWindowState::*Unk_020660f8_Fn)();

}
void TalkWindowState::reloadMessage() {
    using namespace n3;
    _ZN13TalkWindowMsg15loadMessageAttrEv(this);
    _ZN13TalkWindowMsg12startMessageEv(this);
    _ZN15TalkWindowState12captureClockEv(this);
}
void TalkWindowState::onChoiceDone() {
    using namespace n3;
    s32 a = _ZN10ChoiceList14getResultValueEv(unk_314);
    s32 b = _ZN10ChoiceList13getResultNameEv(unk_314);
    _ZN15TalkWindowState14setNextMessageEPhPv(this, a, b);
    _ZN15TalkWindowState17setAdvancePendingEv(this);
    unk_1a16 = 1;
    _ZN13TalkWindowMsg15scanMessageTagsEv(this);
    _ZN13TalkWindowMsg12notifyChoiceEv(this);
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
    if (unk_08 != 6) {
        unk_04 = unk_08;
        (this->*tbl[unk_08])();
        unk_08 = 6;
    }
}
namespace n0 {
extern "C" { s16 sTalkWindowOpenOffsets[6] = {0, -7, -14, -25, -50, -101}; }
extern "C" { extern const u16 data_020cba10[2]; const u16 data_020cba10[2] = {0x0, 0x27}; }
}
void TalkWindowState::enterIdle() {
    using namespace n3; TalkFrame_HideBg(unk_1c); }
void TalkWindowState::execIdle() {
    using namespace n3;}
void TalkWindowState::enterOpening() {
    using namespace n3;
    _ZN15TalkWindowState13loadInputModeEv(this);
    BOOL c = unk_14 != 4 ? TRUE : FALSE;
    if (c) _ZN15TalkWindowState15loadNextMessageEv(this);
    else reloadMessage();
    s32 r6 = BmgMsgAttr_LookupUnkA(unk_13b4);
    TalkMsgRequest *o = unk_13b0;
    u8 *p = o->func_02065f10()->vfunc_0c();
    u32 v8 = unk_13b0->getNameKind();
    BOOL r7 = unk_13b0->vfunc_68() == 0 ? TRUE : FALSE;
    u32 r2 = unk_13b0->isNoSpeakerName();
    if (r2 == 0 && r6 == 0 && *(s8 *)p == 0) r6 = 5;
    _ZN9TalkFrame4loadEijih(unk_1c, r6, r2, v8, r7);
    _ZN9TalkVoice10setMsgModeEi(unk_16dc, r6);
    TalkFrame_SetupBgControl(unk_1c);
    TalkFrame_UploadBg(unk_1c);
    TalkFrame_ShowBg(unk_1c);
    TalkFrame_FreeBuffers(unk_1c);
    unk_0c = 5;
    unk_9c = sTalkWindowOpenOffsets[unk_0c];
    _ZN13TalkFrameView10setScrollYEi(unk_1c, unk_9c);
    _ZN13TalkFrameView9hideArrowEv(unk_1c);
    _ZN13TalkWindowMsg15createNameLabelEv(this);
    _ZN11TalkTextBox12createLabelsEv(unk_58c);
    if (gCommManager) func_02038fd4(gCommManager->unk_64);
    if (unk_1a19 == 0) Snd_PlaySe(9);
    if (unk_1a18 == 0) {
        if (unk_14 != 1 && unk_14 != 2 && unk_14 != 3) _ZN12Unk_0203575813func_02035bd4Ev(data_021c1b3c + 0x1c4);
    }
    if (c) unk_14 = 4;
}
void TalkWindowState::execOpening() {
    using namespace n3;
    BOOL done = FALSE;
    if (unk_0c > 0) unk_0c = unk_0c - 1;
    else done = TRUE;
    unk_9c = sTalkWindowOpenOffsets[unk_0c];
    _ZN13TalkFrameView10setScrollYEi(unk_1c, unk_9c);
    if (done) {
        if (unk_1a18 == 0) _ZN9TalkVoice5beginEv(unk_16dc);
        unk_08 = 3;
    }
}
void TalkWindowState::enterWaitInput() {
    using namespace n3; _ZN13TalkFrameView9hideArrowEv(unk_1c); }
void TalkWindowState::execWaitInput() {
    using namespace n3;
    _ZN9MsgRunner7advanceEv(unk_13a4);
    s32 st = unk_12f0;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 3 ? TRUE : FALSE;
    BOOL c = st == 4 ? TRUE : FALSE;
    BOOL d = st == 5 ? TRUE : FALSE;
    if (_ZN10ChoiceMenu11justDecidedEv(unk_b4) != 0) onChoiceDone();
    if (a || b || c) {
        if (unk_1a13 == 0 && _ZN10ChoiceMenu6isIdleEv(unk_b4) != 0) {
            if (unk_1a12 != 0) {
                advance();
            } else if (_ZN13TalkFrameView13isArrowHiddenEv(unk_1c) != 0) {
                _ZN13TalkFrameView13showArrowWaitEv(unk_1c);
            } else if (_ZN13TalkFrameView14isArrowWaitingEv(unk_1c) != 0) {
                if (_ZN15TalkWindowState18isAdvanceTriggeredEv(this) != 0 || _ZN15TalkAutoAdvance4tickEv(this) != 0) {
                    _ZN13TalkFrameView13showArrowNextEv(unk_1c);
                    if (unk_1a1a == 0) Snd_PlaySe(0x10);
                    if (unk_18 != 0 || unk_1398 != 0) Snd_PlaySe(0x13);
                }
            } else if (_ZN13TalkFrameView15isArrowNextDoneEv(unk_1c) != 0) {
                _ZN13TalkFrameView12showArrowEndEv(unk_1c);
            } else if (_ZN13TalkFrameView14isArrowEndDoneEv(unk_1c) != 0) {
                advance();
            }
        } else {
            if (_ZN13TalkFrameView13isArrowHiddenEv(unk_1c) == 0) _ZN13TalkFrameView9hideArrowEv(unk_1c);
        }
    } else if (d) {
        if (_ZN10ChoiceMenu6isIdleEv(unk_b4) != 0) advance();
    }
}
void TalkWindowState::enterPrinting() {
    using namespace n3;
    _ZN13TalkFrameView9hideArrowEv(unk_1c);
    unk_0c = 1;
}
void TalkWindowState::execPrinting() {
    using namespace n3;
    if (_ZN15TalkWindowState10isSkipHeldEv(this) != 0) _ZN10TalkParser14setFastForwardEv(unk_12c0);
    _ZN9TalkVoice5resetEi(unk_16dc, 0);
    _ZN9MsgRunner7advanceEv(unk_13a4);
    _ZN11TalkTextBox11redrawLinesEv(unk_58c);
    if (unk_1a18 == 0) _ZN9TalkVoice6updateEv(unk_16dc);
    s32 st = unk_12f0;
    BOOL b3 = st == 3 ? TRUE : FALSE;
    BOOL b2 = st == 2 ? TRUE : FALSE;
    BOOL b4 = st == 4 ? TRUE : FALSE;
    BOOL b5 = st == 5 ? TRUE : FALSE;
    BOOL b0 = st == 0 ? TRUE : FALSE;
    BOOL z = unk_0c == 0 ? TRUE : FALSE;
    BOOL go = TRUE;
    if (!z && !b2 && !b4 && !b5 && !b0) go = FALSE;
    if (b3) unk_0c = 0;
    if (go) {
        if (z) _ZN13TalkWindowMsg16notifyMessageEndEv(this);
        unk_08 = 2;
        _ZN15TalkWindowState10resetVoiceEv(this);
    }
}
void TalkWindowState::enterClosing() {
    using namespace n3;
    _ZN13TalkFrameView9hideArrowEv(unk_1c);
    unk_0c = 4;
    unk_9c = sTalkWindowCloseOffsets[unk_0c];
    if (unk_1a18 == 0) {
        _ZN9TalkVoice3endEv(unk_16dc);
        if (unk_14 != 1 && unk_14 != 2 && unk_14 != 3) _ZN12Unk_0203575813func_02035bccEv(data_021c1b3c + 0x1c4);
    }
    if (unk_1a1a == 0) Snd_PlaySe(10);
    unk_13b0->vfunc_70();
}
void TalkWindowState::execClosing() {
    using namespace n3;
    BOOL done = FALSE;
    if (unk_0c > 0) unk_0c = unk_0c - 1;
    else done = TRUE;
    unk_9c = sTalkWindowCloseOffsets[unk_0c];
    _ZN13TalkFrameView10setScrollYEi(unk_1c, unk_9c);
    if (done) {
        _ZN13TalkWindowMsg16destroyNameLabelEv(this);
        _ZN11TalkTextBox13destroyLabelsEv(unk_58c);
        if (unk_14 != 4) {
            unk_08 = 5;
        } else {
            unk_1a18 = 0;
            unk_1a1a = 0;
            unk_08 = 0;
        }
    }
}
void TalkWindowState::enterClosed() {
    using namespace n3; TalkFrame_HideBg(unk_1c); }
void TalkWindowState::execClosed() {
    using namespace n3;}
// ---- state class ----
void TalkWindowState::advance() {
    using namespace n3;
    s32 st = unk_12f0;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 4 ? TRUE : FALSE;
    BOOL c = st == 5 ? TRUE : FALSE;
    s32 r7 = 6;
    s32 r6 = r7;
    s32 flag = 0;
    s32 act = 0;
    Unk_020660f8_Pad pad;
    if (unk_18 != 0) {
        unk_18 = 0;
        _ZN15TalkWindowState11openChoicesEi(this, 0);
    } else if (a || b || c) {
        r7 = 1;
        r6 = 3;
        if (c) act = r7;
        else if (b) act = 2;
        else act = r6;
    } else {
        u32 x = gTalkMsgIndexNone;
        u32 y = unk_19f7;
        if (y == gTalkMsgIndexEnd) {
            r7 = 0;
            r6 = 4;
            act = 6;
        } else if (unk_14 != 4) {
            r7 = 0;
            r6 = 4;
            act = 5;
        } else if (y != x) {
            flag = 1;
            act = 4;
        }
    }
    if (flag != 0) {
        _ZN15TalkWindowState15loadNextMessageEv(this);
        r7 = 1;
        r6 = 3;
    }
    if (r7 != 6) unk_12f0 = r7;
    if (r6 != 6) {
        unk_08 = r6;
        if (act == 1) _ZN15TalkWindowState10resetPrintEv(this);
        else if (act == 2) _ZN15TalkWindowState6finishEv(this);
        else if (act == 3) _ZN15TalkWindowState8stopTextEv(this);
        else if (act == 4) _ZN15TalkWindowState13resetTextVarsEv(this);
        else if (act == 5) _ZN13TalkWindowMsg9resetVarsEv(this);
        else if (act == 6) _ZN13TalkWindowMsg5resetEv(this);
    }
}
MsgString9::MsgString9() {
    using namespace n3; clear(); }
MsgString9::~MsgString9() {
    using namespace n3;}
u32 MsgString9::vfunc_08() {
    using namespace n3; return 9; }
// ---- MsgString9 ----
u8 *MsgString9::vfunc_0c() {
    using namespace n3; return (u8 *)this + 0x12; }
TalkMsgRequest::TalkMsgRequest() {
    using namespace n3;
    unk_3c = 0;
    unk_40 = 0;
}
TalkMsgRequest::~TalkMsgRequest() {
    using namespace n3;}
void TalkMsgRequest::vfunc_08() {
    using namespace n3;
    MsgRequest::vfunc_08();
    unk_20.clear();
    unk_3c = 0;
    unk_40 = 0;
}
void TalkMsgRequest::setSpeakerName(u8 *p, u32 v) {
    using namespace n3;
    unk_20.set(p);
    unk_2c = v;
    unk_40 = 0;
}
void TalkMsgRequest::setSpeakerNameStr(MsgString *p, u32 v) {
    using namespace n3;
    unk_20.copy(p);
    unk_2c = v;
    unk_40 = 0;
}
// ---- TalkMsgRequest ----
void TalkMsgRequest::setNoSpeakerName(u32 v) {
    using namespace n3;
    unk_20.clear();
    unk_2c = v;
    unk_40 = 1;
}

// ======== unk_02065f14.cpp ========
namespace n2 {

}
void TalkMsgRequest::changeSpeakerName(MsgString *p, u32 v) {
    using namespace n2;
    TalkWindowState *o = (TalkWindowState *)unk_3c;
    s32 t = o->unk_04;
    BOOL five = (t == 5);
    setSpeakerNameStr(p, v);
    if (t != 0 && !five) {
        ((TalkWindowState *)unk_3c)->refreshNameColor();
        ((TalkVoice *)(((TalkWindowState *)unk_3c)->unk_16dc))->refreshVoiceType();
    }
}

// ======== unk_020655e4.cpp ========
#define unk_04 ((u32 *)((u8 *)this + 4))
#define data_020ddd68 ((char *)"/script/ENG/message")
namespace n1 {

}
MsgString9 *TalkMsgRequest::func_02065f10() {
    using namespace n1; return &unk_20; }
u32 TalkMsgRequest::isNoSpeakerName() {
    using namespace n1; return unk_40; }
u32 TalkMsgRequest::getNameKind() {
    using namespace n1; return unk_04[(0x2c - 4) / 4]; }
const char *TalkMsgRequest::vfunc_0c() {
    using namespace n1; return data_020ddd68; }
void TalkMsgRequest::vfunc_10() {
    using namespace n1;}
void TalkMsgRequest::vfunc_14() {
    using namespace n1;}
void TalkMsgRequest::vfunc_18() {
    using namespace n1;}
void TalkMsgRequest::vfunc_1c() {
    using namespace n1;}
void TalkMsgRequest::vfunc_20() {
    using namespace n1;}
void TalkMsgRequest::vfunc_24() {
    using namespace n1;}
void TalkMsgRequest::vfunc_28() {
    using namespace n1;}
void TalkMsgRequest::vfunc_2c() {
    using namespace n1;}
void TalkMsgRequest::onActionTag4() {
    using namespace n1;}
void TalkMsgRequest::vfunc_34() {
    using namespace n1;}
void TalkMsgRequest::vfunc_38(u32 a) {
    using namespace n1;}
void TalkMsgRequest::vfunc_3c() {
    using namespace n1;}
void TalkMsgRequest::vfunc_40() {
    using namespace n1;}
void TalkMsgRequest::vfunc_44() {
    using namespace n1;}
void TalkMsgRequest::vfunc_48() {
    using namespace n1;}
void TalkMsgRequest::vfunc_4c() {
    using namespace n1;}
void TalkMsgRequest::vfunc_50() {
    using namespace n1;}
void TalkMsgRequest::vfunc_54() {
    using namespace n1;}
void TalkMsgRequest::vfunc_58() {
    using namespace n1;}
void TalkMsgRequest::vfunc_5c() {
    using namespace n1;}
void TalkMsgRequest::vfunc_60() {
    using namespace n1;}
void TalkMsgRequest::vfunc_64() {
    using namespace n1;}
u32 TalkMsgRequest::vfunc_68() {
    using namespace n1; return 0; }
s32 TalkMsgRequest::vfunc_6c() {
    using namespace n1; return 5; }
void TalkMsgRequest::vfunc_70() {
    using namespace n1;}
void TalkMsgRequest::vfunc_74() {
    using namespace n1;}
void TalkMsgRequest::attachWindow(u32 v) {
    using namespace n1; unk_3c = v; }
void TalkMsgRequest::detachWindow() {
    using namespace n1; unk_3c = 0; }
#undef unk_04
#undef data_020ddd68
