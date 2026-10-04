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
// start-up (the NULL members are copied from __ptmf_null) and func_ov069_0225f1a0 copies them into main's tables.

struct TalkTopicMsg;
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
