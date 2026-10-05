// mwcc-version: 1.2/base
#include "types.h"
#include "talk/VillagerTalkRequestItemTopics.h"
#include "talk/VillagerTalkRequestStartTopics.h"
#include "talk/VillagerTalkKaraokeTopics.h"
#include "talk/VillagerTalkAcornTopics.h"
#include "talk/VillagerTalkHobbyTopics.h"
#include "talk/VillagerTalkHolidayTopics.h"
#include "talk/VillagerTalkRequestReplyTopics.h"
#include "talk/VillagerTalkTopics.h"

// ov069: the state tables of the menu object (three pointers to member functions per entry). They are built at
// start-up (the NULL members are copied from __ptmf_null) and VillagerTalkTopics_CopyTables copies them into main's tables.

struct TalkTopicMsg;
// Field-less subclass: the table entries' member pointers are of this type (converting them to it, not to
// VillagerTalkTopics::*, is what the original __sinit code does; folding it into VillagerTalkTopics does not match).
class VillagerTalkTopicsSub : public VillagerTalkTopics {};

typedef void (VillagerTalkTopicsSub::*VillagerTalkTopicsSubFn)();
typedef void (VillagerTalkTopics::*VillagerTalkTopicsFn)();
// VillagerTalkTopicFns (main's topic table entry, three state functions) typed for the topics classes.
struct VillagerTalkTopicsFns {
    VillagerTalkTopicsFn a;
    VillagerTalkTopicsFn b;
    VillagerTalkTopicsFn c;
};
struct VillagerTalkTopicsSubFns {
    VillagerTalkTopicsSubFn a;
    VillagerTalkTopicsSubFn b;
    VillagerTalkTopicsSubFn c;
};
extern "C" void memcpy(void *, const void *, s32);

extern VillagerTalkTopicsSubFns sHouseVisitTsuTopicTable[3];
extern VillagerTalkTopicsSubFns sTalkBeginTopics[17];
extern VillagerTalkTopicsSubFns sApSubTopics[13];
extern VillagerTalkTopicsSubFns sConnectTopic[1];
extern VillagerTalkTopicsSubFns sEtcCancelTopicTable[1];
extern VillagerTalkTopicsSubFns sSmallTalkTopicTable[2];
extern VillagerTalkTopicsSubFns sRequestTopicsA[26];
extern VillagerTalkTopicsSubFns sEtcConnectTopicTable[6];
extern VillagerTalkTopicsSubFns sEvKaraokeTopicTable[9];
extern VillagerTalkTopicsSubFns sEvAdmireTopicTable[8];
extern VillagerTalkTopicsSubFns sEvGardeniingTopicTable[4];
extern VillagerTalkTopicsSubFns sEvAcornTopicTable[9];
extern VillagerTalkTopicsSubFns sEvSnowfesTopicTable[4];
extern VillagerTalkTopicsSubFns sEvCountdownTopicTable[8];
extern VillagerTalkTopicsSubFns sEvBirthTopicTable[7];

VillagerTalkTopicsSubFns data_ov069_022613cc[17] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectGreeting, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::ensureSpeakerMemory, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continueAfterGreeting},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::select3pTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectApTopic, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEvKaraokeTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvFirework, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvAdmireTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvFishing, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvInsect, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvGardeniingTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvSnowfesTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvCountdownTalk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectGreeting, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::startGreetingB, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continueGreetingB},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvBirthMsg0, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::continueEvBirthMsg0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectAiFall, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEtcHit, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEtcPush, 0, 0},
};
VillagerTalkTopicsFns data_ov069_02261294[13] = {
    {0, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openHabitAcceptChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApHabitPart1, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openHabitKeyboard},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::retryHabitInput, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApHabitConfirm, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openHabitConfirmChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApHabitB, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApHabitDeclined, 0, 0},
    {0, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openNicknameAcceptChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApNicknProposal, (VillagerTalkTopicsFn)&VillagerTalkTopics::makeNickname, (VillagerTalkTopicsFn)&VillagerTalkTopics::openNicknameLikeChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApNicknDisliked, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openNicknameKeyboard},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApNicknConfirm, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openNicknameConfirmChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::retryNicknameInput, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApNicknAccepted, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectApNicknRefused, 0, 0},
};
VillagerTalkTopicsSubFns data_ov069_02260cc4[1] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEtcConnect, 0, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::openConnectMenu},
};
VillagerTalkTopicsFns data_ov069_02260cdc[1] = {
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEtcCancel, 0, 0},
};
VillagerTalkTopicsFns data_ov069_02260cf4[2] = {
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectTsuTopic, 0, 0},
};
VillagerTalkTopicsSubFns data_ov069_02261564[73] = {
    {0, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::selectDeliveryRequest, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::pickDeliveryRecipient, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::gotoDeliveryTime},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::selectQTime, 0, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::openDeliveryAcceptChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::selectQNoB, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::selectQFull, 0, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::continueQFull},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::selectDeliveryAccepted, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::acceptDeliveryRequest, (VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::getRequestKind},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestReplyTopics::selectDeliveryLate, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continueDeliveryLate},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryLateReply, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::finishLateDelivery, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryLost, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::finishLostDelivery, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryOpened, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQTimeover, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQIcancel, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryReceived, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continueDeliveryReceived},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::openDeliveryItemPicker, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ06Open1, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continuePresentLiked},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ06Open3, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ06Open2, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continuePresentAccepted},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ07Open2, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ07Read, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continueLetterRead},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ07Show, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::showLetter},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryFin, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryReminder, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryReport, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::continueDeliveryReport},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ06Good, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::gotoRewardOrEnd},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ06Normal, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::gotoRewardOrEnd},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ06Bad, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::gotoRewardOrEnd},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPreitem, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::gotoRewardItem},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQItemC, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::giveRewardItem, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::gotoDeliveryEnd},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectDeliveryEnd, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectCollectRequest, (VillagerTalkTopicsSubFn)&VillagerTalkRequestStartTopics::prepareRequestItem, (VillagerTalkTopicsSubFn)&VillagerTalkRequestStartTopics::openRequestChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestStartTopics::selectQStart, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestStartTopics::selectQNo, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestStartTopics::selectQCon, 0, (VillagerTalkTopicsSubFn)&VillagerTalkRequestStartTopics::gotoQ05Talk},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ05Talk, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::openCatchPicker, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPwin, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::takePlayerCatch},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPwin2, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::handOverRequestReward},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPlose, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPdraw, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::checkVillagerCatch, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQNwin, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQNlose, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::keepItemThenGotoQPay},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPay, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::handOverRequestReward},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQRevenge, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::openRequestItemPicker, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQMiss, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQMissB, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQThanks, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::takeRequestItem},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQPreitemB, 0, (VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::gotoQItemB},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::selectQItemB, 0, (VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::handOverQItemB},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::selectQClear, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::selectQEnd, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::selectQReturn, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::selectQComp, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkRequestItemTopics::openArbeitItemPicker, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEvArbeitReceive, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::giveArbeitReward},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEvArbeitEnd, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12Other, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12Report, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12Thanks, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::checkPocketsForQItem},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQItem, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::putQItemInPocket},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12End, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12Full, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12FullPart1, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::recheckPocketsForQItem},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ12FullPart2, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ10Req, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::openQ10ReqChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ10Reserve, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::openReserveTimeEntry},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQError1, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::openReserveTimeEntry},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQError2, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::openReserveTimeEntry},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQError3, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::openReserveTimeEntry},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ10Reserved, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ10Con, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectQ10Leave, 0, 0},
};
VillagerTalkTopicsSubFns data_ov069_022611bc[9] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkTopics::selectEvKaraokeMsg3, 0, (VillagerTalkTopicsSubFn)&VillagerTalkTopics::openEvKaraokeChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg20, 0, (VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::continueEvKaraokeMsg20},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::startEvKaraokeAction, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg6, 0, (VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::openEvKaraokeMsg6Choice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg8, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg10, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg12, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg14, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg17, 0, (VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::openSmallTalkChoice},
};
VillagerTalkTopicsSubFns data_ov069_02261024[8] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvAdmire, 0, (VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::openEvAdmireWordEntry},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvAdmireMsg2, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::selectEvAdmireMsg7, 0, (VillagerTalkTopicsSubFn)&VillagerTalkKaraokeTopics::openEvAdmireChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvAdmireMsg12, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::openEvAdmireWordEntryB},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvAdmireMsg14, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvAdmireMsg10, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvAdmireMsg4, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::continueEvAdmireMsg4},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEtcConnectAdmire, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::openSmallTalkChoiceAdmire},
};
VillagerTalkTopicsSubFns data_ov069_02260d6c[4] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvGardeniing, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvGardeniingMsg13, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEvGardeniingMsg10, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::continueEvGardeniingMsg10},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHobbyTopics::selectEtcConnectGardeniing, 0, (VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::openSmallTalkChoiceGardeniing},
};
VillagerTalkTopicsSubFns data_ov069_022610e4[9] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcorn, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornMsg10, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornMsg7, 0, (VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::continueEvAcornMsg7},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEtcConnectAcorn, 0, (VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::openSmallTalkChoiceAcorn},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornMsg13, 0, (VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::openEvAcornGiveChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::openAcornPicker, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornMsg17, 0, (VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::rollAcornReward},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornMsg19, (VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::giveAcornReward, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkAcornTopics::selectEvAcornMsg15, 0, 0},
};
VillagerTalkTopicsSubFns data_ov069_02260dcc[4] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvSnowfes, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvSnowfesB, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvSnowfesC, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::continueEvSnowfesC},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEtcConnectSnowfes, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::openSmallTalkChoiceSnowfes},
};
VillagerTalkTopicsSubFns data_ov069_02260f64[8] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectGreetingCountdown, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::continueGreetingCountdown},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEtcConnectCountdownB, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::openEvCountdownChoice},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvCountdown, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvCountdownB, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvCountdownMsg14, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvCountdownMsg16, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEvCountdownMsg18, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::continueEvCountdownMsg18},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectEtcConnectCountdown, 0, (VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::openSmallTalkChoiceCountdown},
};
VillagerTalkTopicsFns data_ov069_02260e2c[6] = {
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEtcConnect, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openEtcConnectChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectTsuMove1, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openTsuMove1Choice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectTsuMove1B, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectTsuMove1Part1, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectTsuMove2, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectTsuAlwaysEntry, 0, 0},
};
VillagerTalkTopicsSubFns data_ov069_02260d24[3] = {
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectTsuAlwaysOnce, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectTsuSpotOnce, 0, 0},
    {(VillagerTalkTopicsSubFn)&VillagerTalkHolidayTopics::selectTsuFriendOnce, 0, 0},
};
VillagerTalkTopicsFns data_ov069_02260ebc[7] = {
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg1, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::continueEvBirthFriends},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg5, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::continueEvBirthFriends},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg6, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::continueEvBirthMsg6},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg7, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::continueEvBirthMsg7},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg2, 0, (VillagerTalkTopicsFn)&VillagerTalkTopics::openEvBirthChoice},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg3, 0, 0},
    {(VillagerTalkTopicsFn)&VillagerTalkTopics::selectEvBirthMsg4, 0, 0},
};
extern "C" void VillagerTalkTopics_CopyTables() {
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
struct VillagerTalkTopicsTableInit {
    VillagerTalkTopicsTableInit() { VillagerTalkTopics_CopyTables(); }
};
VillagerTalkTopicsTableInit data_ov069_02260cc0;  // named (symbols.txt) so that the link keeps it: nothing refers to it
