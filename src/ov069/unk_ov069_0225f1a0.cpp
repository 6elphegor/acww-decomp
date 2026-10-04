// mwcc-version: 1.2/base
#include "types.h"
#include "talk/VillagerTalkRequestItemTopics.h"
#include "talk/VillagerTalkRequestStartTopics.h"
#include "talk/VillagerTalkKaraokeTopics.h"

// ov069: the state tables of the menu object (three pointers to member functions per entry). They are built at
// start-up (the NULL members are copied from __ptmf_null) and func_ov069_0225f1a0 copies them into main's tables.

struct Unk_0201d2d0_Out;
struct Unk_0201dc44_Ret;
struct Unk_0201e5a4_Out;
struct Unk_0201ef00_Out;
struct Unk_0201f7d0_Out;
struct Unk_020238b0_Out;
struct Unk_020254ec_Out;
struct Unk_02027a34_Out;
class VillagerTalkAcornTopics : public VillagerTalkKaraokeTopics {
public:
    void selectEvSnowfesTalk(u32);
    void selectEvAcornMsg15(Unk_0201e5a4_Out *);
    void giveAcornReward();
    void selectEvAcornMsg19(Unk_0201e5a4_Out *);
    void rollAcornReward();
    void selectEvAcornMsg17(Unk_0201e5a4_Out *);
    void openAcornPicker();
    void openEvAcornGiveChoice();
    void selectEvAcornMsg13(Unk_0201e5a4_Out *);
    void openSmallTalkChoiceAcorn();
    void selectEtcConnectAcorn();
    void continueEvAcornMsg7();
    void selectEvAcornMsg7(Unk_0201e5a4_Out *);
    void selectEvAcornMsg10(Unk_0201e5a4_Out *);
    void selectEvAcorn(Unk_0201e5a4_Out *);
    void selectEvAcornTalk(u32);
    void openSmallTalkChoiceGardeniing();
};
class VillagerTalkHobbyTopics : public VillagerTalkAcornTopics {
public:
    void selectEtcConnectGardeniing();
    void continueEvGardeniingMsg10();
    void selectEvGardeniingMsg10(Unk_0201ef00_Out *);
    void selectEvGardeniingMsg13(Unk_0201ef00_Out *);
    void selectEvGardeniing(Unk_0201ef00_Out *);
    void selectEvGardeniingTalk(void *);
    void selectEvInsect(Unk_0201ef00_Out *);
    void selectEvFishing(Unk_0201ef00_Out *);
    void openSmallTalkChoiceAdmire();
    void selectEtcConnectAdmire();
    void continueEvAdmireMsg4();
    void selectEvAdmireMsg4(Unk_0201ef00_Out *);
    void selectEvAdmireMsg10(Unk_0201ef00_Out *);
    void selectEvAdmireMsg14(Unk_0201ef00_Out *);
    void openEvAdmireWordEntryB();
    void selectEvAdmireMsg12(Unk_0201ef00_Out *);
};
class VillagerTalkHolidayTopics : public VillagerTalkHobbyTopics {
public:
    void continueEvBirthMsg0();
    void selectEvBirthMsg0(Unk_0201dc44_Ret *);
    void selectTsuFriendOnce(Unk_0201dc44_Ret *);
    void selectTsuSpotOnce(Unk_0201dc44_Ret *);
    void selectTsuAlwaysOnce(Unk_0201dc44_Ret *);
    void openSmallTalkChoiceCountdown();
    void selectEtcConnectCountdown();
    void continueEvCountdownMsg18();
    void selectEvCountdownMsg18(Unk_0201dc44_Ret *);
    void selectEvCountdownMsg16(Unk_0201dc44_Ret *);
    void selectEvCountdownMsg14(Unk_0201dc44_Ret *);
    void selectEvCountdownB(Unk_0201dc44_Ret *);
    void selectEvCountdown(Unk_0201dc44_Ret *);
    void openEvCountdownChoice();
    void selectEtcConnectCountdownB();
    void continueGreetingCountdown();
    void selectGreetingCountdown();
    void selectEvCountdownTalk(Unk_0201dc44_Ret *);
    void openSmallTalkChoiceSnowfes();
    void selectEtcConnectSnowfes();
    void continueEvSnowfesC();
    void selectEvSnowfesC(Unk_0201dc44_Ret *);
    void selectEvSnowfesB(Unk_0201dc44_Ret *);
    void selectEvSnowfes(Unk_0201dc44_Ret *);
};
class VillagerTalkRequestReplyTopics : public VillagerTalkHolidayTopics {
public:
    void selectDeliveryLate(Unk_02027a34_Out *);
    void getRequestKind();
    void acceptDeliveryRequest();
    void selectDeliveryAccepted(Unk_02027a34_Out *);
    void continueQFull();
    void selectQFull(Unk_02027a34_Out *);
    void selectQNoB(Unk_02027a34_Out *);
    void openDeliveryAcceptChoice();
    void selectQTime(Unk_02027a34_Out *);
    void gotoDeliveryTime();
    void pickDeliveryRecipient();
    void selectDeliveryRequest(Unk_02027a34_Out *);
    void openConnectMenu();
};
class VillagerTalkTopics : public VillagerTalkRequestReplyTopics {
public:
    void selectEtcPush(Unk_0201d2d0_Out *);
    void selectEtcHit(Unk_0201d2d0_Out *);
    void selectAiFall(Unk_0201d2d0_Out *);
    void selectEvBirthMsg4(Unk_0201d2d0_Out *);
    void selectEvBirthMsg3(Unk_0201d2d0_Out *);
    void openEvBirthChoice();
    void selectEvBirthMsg2(Unk_0201d2d0_Out *);
    void continueEvBirthMsg7();
    void selectEvBirthMsg7(Unk_0201d2d0_Out *);
    void continueEvBirthMsg6();
    void selectEvBirthMsg6(Unk_0201d2d0_Out *);
    void selectEvBirthMsg5(Unk_0201d2d0_Out *);
    void continueEvBirthFriends();
    void selectEvBirthMsg1(Unk_0201d2d0_Out *);
    void openEvKaraokeChoice();
    void selectEvKaraokeMsg3(Unk_0201d2d0_Out *);
    void selectEvKaraokeTalk(Unk_0201d2d0_Out *);
    void selectTsuAlwaysEntry(Unk_0201d2d0_Out *);
    void selectTsuMove2(Unk_0201d2d0_Out *);
    void selectTsuMove1Part1(Unk_0201d2d0_Out *);
    void selectTsuMove1B(Unk_0201d2d0_Out *);
    void openTsuMove1Choice();
    void selectTsuMove1(Unk_0201d2d0_Out *);
    void openEtcConnectChoice();
    void continueGreetingB();
    void startGreetingB();
    void selectTsuTopic(Unk_0201d2d0_Out *);
    void selectEtcCancel(Unk_0201d2d0_Out *);
    void selectQ10Leave(Unk_0201d2d0_Out *);
    void selectQ10Con(Unk_0201d2d0_Out *);
    void selectQ10Reserved(Unk_0201d2d0_Out *);
    void selectQError3(Unk_0201d2d0_Out *);
    void selectQError2(Unk_0201d2d0_Out *);
    void selectQError1(Unk_0201d2d0_Out *);
    void openReserveTimeEntry();
    void selectQ10Reserve(Unk_0201d2d0_Out *);
    void openQ10ReqChoice();
    void selectQ10Req(Unk_0201d2d0_Out *);
    void selectQ12FullPart2(Unk_0201d2d0_Out *);
    void recheckPocketsForQItem();
    void selectQ12FullPart1(Unk_0201d2d0_Out *);
    void selectQ12Full(Unk_0201d2d0_Out *);
    void selectQ12End(Unk_0201d2d0_Out *);
    void putQItemInPocket();
    void selectQItem(Unk_0201d2d0_Out *);
    void checkPocketsForQItem();
    void selectQ12Thanks(Unk_0201d2d0_Out *);
    void selectQ12Report(Unk_0201d2d0_Out *);
    void selectQ12Other(Unk_0201d2d0_Out *);
    void selectEvArbeitEnd(Unk_0201d2d0_Out *);
    void giveArbeitReward();
    void selectEvArbeitReceive(Unk_0201d2d0_Out *);
    void selectQPreitemB(Unk_0201d2d0_Out *);
    void takeRequestItem();
    void selectQThanks(Unk_0201d2d0_Out *);
    void selectQMissB(Unk_0201d2d0_Out *);
    void selectQMiss(Unk_0201d2d0_Out *);
    void openRequestItemPicker();
    void selectQRevenge(Unk_0201d2d0_Out *);
    void handOverRequestReward();
    void selectQPay(Unk_0201d2d0_Out *);
    void keepItemThenGotoQPay();
    void selectQNlose(Unk_0201d2d0_Out *);
    void selectQNwin(Unk_0201d2d0_Out *);
    void checkVillagerCatch();
    void selectQPdraw(Unk_0201d2d0_Out *);
    void selectQPlose(Unk_0201d2d0_Out *);
    void selectQPwin2(Unk_0201d2d0_Out *);
    void takePlayerCatch();
    void selectQPwin(Unk_0201d2d0_Out *);
    void openCatchPicker();
    void selectQ05Talk(Unk_0201d2d0_Out *);
    void selectCollectRequest(Unk_0201d2d0_Out *);
    void selectDeliveryEnd(Unk_0201d2d0_Out *);
    void gotoDeliveryEnd();
    void giveRewardItem();
    void selectQItemC(Unk_0201d2d0_Out *);
    void gotoRewardItem();
    void selectQPreitem(Unk_0201d2d0_Out *);
    void gotoRewardOrEnd();
    void selectQ06Bad(Unk_0201d2d0_Out *);
    void selectQ06Normal(Unk_0201d2d0_Out *);
    void selectQ06Good(Unk_0201d2d0_Out *);
    void continueDeliveryReport(void *);
    void selectDeliveryReport(Unk_0201d2d0_Out *);
    void selectDeliveryReminder(Unk_0201d2d0_Out *);
    void selectDeliveryFin(Unk_0201d2d0_Out *);
    void showLetter();
    void selectQ07Show(Unk_0201d2d0_Out *);
    void continueLetterRead();
    void selectQ07Read(Unk_0201d2d0_Out *);
    void selectQ07Open2(Unk_0201d2d0_Out *);
    void continuePresentAccepted();
    void selectQ06Open2(Unk_0201d2d0_Out *);
    void selectQ06Open3(Unk_0201d2d0_Out *);
    void continuePresentLiked();
    void selectQ06Open1(Unk_0201d2d0_Out *);
    void continueDeliveryReceived();
    void selectDeliveryReceived(Unk_0201d2d0_Out *);
    void selectQIcancel(Unk_0201d2d0_Out *);
    void openDeliveryItemPicker();
    void selectQTimeover(Unk_0201d2d0_Out *);
    void selectDeliveryOpened(Unk_0201d2d0_Out *);
    void finishLostDelivery();
    void selectDeliveryLost(Unk_0201d2d0_Out *);
    void finishLateDelivery();
    void selectDeliveryLateReply(Unk_0201d2d0_Out *);
    void continueDeliveryLate();
    void selectEtcConnect(Unk_0201d2d0_Out *);
    void selectApNicknRefused(Unk_0201d2d0_Out *);
    void selectApNicknAccepted(Unk_0201d2d0_Out *);
    void retryNicknameInput();
    void openNicknameConfirmChoice();
    void selectApNicknConfirm(Unk_0201d2d0_Out *);
    void openNicknameKeyboard(s32);
    void selectApNicknDisliked(Unk_0201d2d0_Out *);
    void openNicknameLikeChoice();
    void makeNickname();
    void selectApNicknProposal(Unk_0201d2d0_Out *);
    void openNicknameAcceptChoice();
    void selectApHabitDeclined(Unk_0201d2d0_Out *);
    void selectApHabitB(Unk_0201d2d0_Out *);
    void openHabitConfirmChoice();
    void selectApHabitConfirm(Unk_0201d2d0_Out *);
    void retryHabitInput();
    void openHabitKeyboard(s32);
    void selectApHabitPart1(Unk_0201d2d0_Out *);
    void openHabitAcceptChoice();
    void selectApTopic(Unk_0201d2d0_Out *);
    void select3pTalk(Unk_0201d2d0_Out *);
    void continueAfterGreeting();
    void ensureSpeakerMemory();
    void selectGreeting(Unk_0201d2d0_Out *);
};
class Unk_Menu : public VillagerTalkTopics {};

typedef void (Unk_Menu::*Unk_ov069_Fn)();
typedef void (VillagerTalkTopics::*Unk_ov069_FnB)();
struct Unk_ov069_EntB {
    Unk_ov069_FnB a;
    Unk_ov069_FnB b;
    Unk_ov069_FnB c;
};
struct Unk_ov069_Ent {
    Unk_ov069_Fn a;
    Unk_ov069_Fn b;
    Unk_ov069_Fn c;
};
extern "C" void memcpy(void *, const void *, s32);

extern Unk_ov069_Ent sHouseVisitTsuTopicTable[3];
extern Unk_ov069_Ent sTalkBeginTopics[17];
extern Unk_ov069_Ent sApSubTopics[13];
extern Unk_ov069_Ent sConnectTopic[1];
extern Unk_ov069_Ent sEtcCancelTopicTable[1];
extern Unk_ov069_Ent sSmallTalkTopicTable[2];
extern Unk_ov069_Ent sRequestTopicsA[26];
extern Unk_ov069_Ent sEtcConnectTopicTable[6];
extern Unk_ov069_Ent sEvKaraokeTopicTable[9];
extern Unk_ov069_Ent sEvAdmireTopicTable[8];
extern Unk_ov069_Ent sEvGardeniingTopicTable[4];
extern Unk_ov069_Ent sEvAcornTopicTable[9];
extern Unk_ov069_Ent sEvSnowfesTopicTable[4];
extern Unk_ov069_Ent sEvCountdownTopicTable[8];
extern Unk_ov069_Ent sEvBirthTopicTable[7];

Unk_ov069_Ent data_ov069_022613cc[17] = {
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectGreeting, (Unk_ov069_Fn)&VillagerTalkTopics::ensureSpeakerMemory, (Unk_ov069_Fn)&VillagerTalkTopics::continueAfterGreeting},
    {(Unk_ov069_Fn)&VillagerTalkTopics::select3pTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectApTopic, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEvKaraokeTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvFirework, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvAdmireTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvFishing, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvInsect, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniingTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvSnowfesTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownTalk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectGreeting, (Unk_ov069_Fn)&VillagerTalkTopics::startGreetingB, (Unk_ov069_Fn)&VillagerTalkTopics::continueGreetingB},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvBirthMsg0, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::continueEvBirthMsg0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectAiFall, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEtcHit, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEtcPush, 0, 0},
};
Unk_ov069_EntB data_ov069_02261294[13] = {
    {0, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openHabitAcceptChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApHabitPart1, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openHabitKeyboard},
    {(Unk_ov069_FnB)&VillagerTalkTopics::retryHabitInput, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApHabitConfirm, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openHabitConfirmChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApHabitB, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApHabitDeclined, 0, 0},
    {0, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openNicknameAcceptChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApNicknProposal, (Unk_ov069_FnB)&VillagerTalkTopics::makeNickname, (Unk_ov069_FnB)&VillagerTalkTopics::openNicknameLikeChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApNicknDisliked, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openNicknameKeyboard},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApNicknConfirm, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openNicknameConfirmChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::retryNicknameInput, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApNicknAccepted, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApNicknRefused, 0, 0},
};
Unk_ov069_Ent data_ov069_02260cc4[1] = {
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEtcConnect, 0, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::openConnectMenu},
};
Unk_ov069_EntB data_ov069_02260cdc[1] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEtcCancel, 0, 0},
};
Unk_ov069_EntB data_ov069_02260cf4[2] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuTopic, 0, 0},
};
Unk_ov069_Ent data_ov069_02261564[73] = {
    {0, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectDeliveryRequest, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::pickDeliveryRecipient, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::gotoDeliveryTime},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectQTime, 0, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::openDeliveryAcceptChoice},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectQNoB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectQFull, 0, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::continueQFull},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectDeliveryAccepted, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::acceptDeliveryRequest, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::getRequestKind},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectDeliveryLate, 0, (Unk_ov069_Fn)&VillagerTalkTopics::continueDeliveryLate},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryLateReply, (Unk_ov069_Fn)&VillagerTalkTopics::finishLateDelivery, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryLost, (Unk_ov069_Fn)&VillagerTalkTopics::finishLostDelivery, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryOpened, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQTimeover, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQIcancel, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryReceived, 0, (Unk_ov069_Fn)&VillagerTalkTopics::continueDeliveryReceived},
    {(Unk_ov069_Fn)&VillagerTalkTopics::openDeliveryItemPicker, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Open1, 0, (Unk_ov069_Fn)&VillagerTalkTopics::continuePresentLiked},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Open3, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Open2, 0, (Unk_ov069_Fn)&VillagerTalkTopics::continuePresentAccepted},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ07Open2, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ07Read, 0, (Unk_ov069_Fn)&VillagerTalkTopics::continueLetterRead},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ07Show, 0, (Unk_ov069_Fn)&VillagerTalkTopics::showLetter},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryFin, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryReminder, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryReport, 0, (Unk_ov069_Fn)&VillagerTalkTopics::continueDeliveryReport},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Good, 0, (Unk_ov069_Fn)&VillagerTalkTopics::gotoRewardOrEnd},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Normal, 0, (Unk_ov069_Fn)&VillagerTalkTopics::gotoRewardOrEnd},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Bad, 0, (Unk_ov069_Fn)&VillagerTalkTopics::gotoRewardOrEnd},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPreitem, 0, (Unk_ov069_Fn)&VillagerTalkTopics::gotoRewardItem},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQItemC, (Unk_ov069_Fn)&VillagerTalkTopics::giveRewardItem, (Unk_ov069_Fn)&VillagerTalkTopics::gotoDeliveryEnd},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectDeliveryEnd, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectCollectRequest, (Unk_ov069_Fn)&VillagerTalkRequestStartTopics::prepareRequestItem, (Unk_ov069_Fn)&VillagerTalkRequestStartTopics::openRequestChoice},
    {(Unk_ov069_Fn)&VillagerTalkRequestStartTopics::selectQStart, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestStartTopics::selectQNo, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestStartTopics::selectQCon, 0, (Unk_ov069_Fn)&VillagerTalkRequestStartTopics::gotoQ05Talk},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ05Talk, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::openCatchPicker, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPwin, 0, (Unk_ov069_Fn)&VillagerTalkTopics::takePlayerCatch},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPwin2, 0, (Unk_ov069_Fn)&VillagerTalkTopics::handOverRequestReward},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPlose, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPdraw, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::checkVillagerCatch, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQNwin, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQNlose, 0, (Unk_ov069_Fn)&VillagerTalkTopics::keepItemThenGotoQPay},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPay, 0, (Unk_ov069_Fn)&VillagerTalkTopics::handOverRequestReward},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQRevenge, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::openRequestItemPicker, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQMiss, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQMissB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQThanks, 0, (Unk_ov069_Fn)&VillagerTalkTopics::takeRequestItem},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPreitemB, 0, (Unk_ov069_Fn)&VillagerTalkRequestItemTopics::gotoQItemB},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::selectQItemB, 0, (Unk_ov069_Fn)&VillagerTalkRequestItemTopics::handOverQItemB},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::selectQClear, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::selectQEnd, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::selectQReturn, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::selectQComp, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::openArbeitItemPicker, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEvArbeitReceive, 0, (Unk_ov069_Fn)&VillagerTalkTopics::giveArbeitReward},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEvArbeitEnd, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Other, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Report, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Thanks, 0, (Unk_ov069_Fn)&VillagerTalkTopics::checkPocketsForQItem},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQItem, 0, (Unk_ov069_Fn)&VillagerTalkTopics::putQItemInPocket},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12End, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Full, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12FullPart1, 0, (Unk_ov069_Fn)&VillagerTalkTopics::recheckPocketsForQItem},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12FullPart2, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Req, 0, (Unk_ov069_Fn)&VillagerTalkTopics::openQ10ReqChoice},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Reserve, 0, (Unk_ov069_Fn)&VillagerTalkTopics::openReserveTimeEntry},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQError1, 0, (Unk_ov069_Fn)&VillagerTalkTopics::openReserveTimeEntry},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQError2, 0, (Unk_ov069_Fn)&VillagerTalkTopics::openReserveTimeEntry},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQError3, 0, (Unk_ov069_Fn)&VillagerTalkTopics::openReserveTimeEntry},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Reserved, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Con, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Leave, 0, 0},
};
Unk_ov069_Ent data_ov069_022611bc[9] = {
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEvKaraokeMsg3, 0, (Unk_ov069_Fn)&VillagerTalkTopics::openEvKaraokeChoice},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg20, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::continueEvKaraokeMsg20},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::startEvKaraokeAction, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg6, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::openEvKaraokeMsg6Choice},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg8, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg10, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg12, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg14, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg17, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::openSmallTalkChoice},
};
Unk_ov069_Ent data_ov069_02261024[8] = {
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvAdmire, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::openEvAdmireWordEntry},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvAdmireMsg2, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvAdmireMsg7, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::openEvAdmireChoice},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg12, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::openEvAdmireWordEntryB},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg14, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg10, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg4, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::continueEvAdmireMsg4},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEtcConnectAdmire, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::openSmallTalkChoiceAdmire},
};
Unk_ov069_Ent data_ov069_02260d6c[4] = {
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniing, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniingMsg13, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniingMsg10, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::continueEvGardeniingMsg10},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEtcConnectGardeniing, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::openSmallTalkChoiceGardeniing},
};
Unk_ov069_Ent data_ov069_022610e4[9] = {
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcorn, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg10, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg7, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::continueEvAcornMsg7},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEtcConnectAcorn, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::openSmallTalkChoiceAcorn},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg13, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::openEvAcornGiveChoice},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::openAcornPicker, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg17, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::rollAcornReward},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg19, (Unk_ov069_Fn)&VillagerTalkAcornTopics::giveAcornReward, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg15, 0, 0},
};
Unk_ov069_Ent data_ov069_02260dcc[4] = {
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvSnowfes, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvSnowfesB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvSnowfesC, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::continueEvSnowfesC},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEtcConnectSnowfes, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::openSmallTalkChoiceSnowfes},
};
Unk_ov069_Ent data_ov069_02260f64[8] = {
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectGreetingCountdown, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::continueGreetingCountdown},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEtcConnectCountdownB, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::openEvCountdownChoice},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdown, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownMsg14, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownMsg16, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownMsg18, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::continueEvCountdownMsg18},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEtcConnectCountdown, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::openSmallTalkChoiceCountdown},
};
Unk_ov069_EntB data_ov069_02260e2c[6] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEtcConnect, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openEtcConnectChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove1, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openTsuMove1Choice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove1B, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove1Part1, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove2, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuAlwaysEntry, 0, 0},
};
Unk_ov069_Ent data_ov069_02260d24[3] = {
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectTsuAlwaysOnce, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectTsuSpotOnce, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectTsuFriendOnce, 0, 0},
};
Unk_ov069_EntB data_ov069_02260ebc[7] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg1, 0, (Unk_ov069_FnB)&VillagerTalkTopics::continueEvBirthFriends},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg5, 0, (Unk_ov069_FnB)&VillagerTalkTopics::continueEvBirthFriends},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg6, 0, (Unk_ov069_FnB)&VillagerTalkTopics::continueEvBirthMsg6},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg7, 0, (Unk_ov069_FnB)&VillagerTalkTopics::continueEvBirthMsg7},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg2, 0, (Unk_ov069_FnB)&VillagerTalkTopics::openEvBirthChoice},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg3, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg4, 0, 0},
};
extern "C" void func_ov069_0225f1a0() {
    memcpy(sHouseVisitTsuTopicTable, data_ov069_02260d24, 72);
    memcpy(sTalkBeginTopics, data_ov069_022613cc, 408);
    memcpy(sApSubTopics, data_ov069_02261294, 312);
    memcpy(sConnectTopic, data_ov069_02260cc4, 24);
    memcpy(sEtcCancelTopicTable, data_ov069_02260cdc, 24);
    memcpy(sSmallTalkTopicTable, data_ov069_02260cf4, 48);
    memcpy(sRequestTopicsA, data_ov069_02261564, 1752);
    memcpy(sEtcConnectTopicTable, data_ov069_02260e2c, 144);
    memcpy(sEvKaraokeTopicTable, data_ov069_022611bc, 216);
    memcpy(sEvAdmireTopicTable, data_ov069_02261024, 192);
    memcpy(sEvGardeniingTopicTable, data_ov069_02260d6c, 96);
    memcpy(sEvAcornTopicTable, data_ov069_022610e4, 216);
    memcpy(sEvSnowfesTopicTable, data_ov069_02260dcc, 96);
    memcpy(sEvCountdownTopicTable, data_ov069_02260f64, 192);
    memcpy(sEvBirthTopicTable, data_ov069_02260ebc, 168);
}

// An empty object whose inline constructor runs the copy once all the tables are built (the call ends __sinit; the object
// itself is the one byte of .bss in front of the tables).
struct Unk_ov069_Init {
    Unk_ov069_Init() { func_ov069_0225f1a0(); }
};
Unk_ov069_Init data_ov069_02260cc0;  // named (symbols.txt) so that the link keeps it: nothing refers to it
