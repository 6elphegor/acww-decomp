// mwcc-version: 1.2/base
#include "types.h"

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
class VillagerTalkRequestItemTopics {
public:
    void func_020238b0();
    void func_02023928(Unk_020238b0_Out *);
    void func_020239c8(Unk_020238b0_Out *);
    void func_02023ab4(Unk_020238b0_Out *);
    void func_02023b50(Unk_020238b0_Out *);
    void func_02023c80();
    void selectQItemB(Unk_020238b0_Out *);
    void func_020241a0();
};
class VillagerTalkRequestStartTopics : public VillagerTalkRequestItemTopics {
public:
    void func_020254ec();
    void func_02025540(Unk_020254ec_Out *);
    void selectQNo(Unk_020254ec_Out *);
    void selectQStart(Unk_020254ec_Out *);
    void func_020257f0();
    void func_0202585c();
};
class VillagerTalkKaraokeTopics : public VillagerTalkRequestStartTopics {
public:
    void func_0201f7d0();
    void func_0201f83c(Unk_0201f7d0_Out *);
    void func_0201f89c(Unk_0201f7d0_Out *);
    void func_0201f9c0();
    void func_0201f9f8(Unk_0201f7d0_Out *);
    void func_0201fa58(Unk_0201f7d0_Out *);
    void selectEvFirework(Unk_0201f7d0_Out *);
    void func_0201fc48();
    void selectEvKaraokeMsg17(Unk_0201f7d0_Out *);
    void selectEvKaraokeMsg14(Unk_0201f7d0_Out *);
    void selectEvKaraokeMsg12(Unk_0201f7d0_Out *);
    void selectEvKaraokeMsg10(Unk_0201f7d0_Out *);
    void selectEvKaraokeMsg8(Unk_0201f7d0_Out *);
    void func_0201fed0();
    void selectEvKaraokeMsg6(Unk_0201f7d0_Out *);
    void func_02020010();
    void func_02020030();
    void selectEvKaraokeMsg20(Unk_0201f7d0_Out *);
};
class VillagerTalkAcornTopics : public VillagerTalkKaraokeTopics {
public:
    void func_0201e5a4(u32);
    void selectEvAcornMsg15(Unk_0201e5a4_Out *);
    void func_0201e710();
    void selectEvAcornMsg19(Unk_0201e5a4_Out *);
    void func_0201e87c();
    void selectEvAcornMsg17(Unk_0201e5a4_Out *);
    void func_0201ea8c();
    void func_0201eabc();
    void selectEvAcornMsg13(Unk_0201e5a4_Out *);
    void func_0201eb8c();
    void func_0201eb94();
    void func_0201eb9c();
    void selectEvAcornMsg7(Unk_0201e5a4_Out *);
    void selectEvAcornMsg10(Unk_0201e5a4_Out *);
    void selectEvAcorn(Unk_0201e5a4_Out *);
    void func_0201ed3c(u32);
    void func_0201ee9c();
};
class VillagerTalkHobbyTopics : public VillagerTalkAcornTopics {
public:
    void func_0201eea4();
    void func_0201eeac();
    void selectEvGardeniingMsg10(Unk_0201ef00_Out *);
    void selectEvGardeniingMsg13(Unk_0201ef00_Out *);
    void selectEvGardeniing(Unk_0201ef00_Out *);
    void func_0201f058(void *);
    void selectEvInsect(Unk_0201ef00_Out *);
    void selectEvFishing(Unk_0201ef00_Out *);
    void func_0201f55c();
    void func_0201f564();
    void func_0201f56c();
    void selectEvAdmireMsg4(Unk_0201ef00_Out *);
    void selectEvAdmireMsg10(Unk_0201ef00_Out *);
    void selectEvAdmireMsg14(Unk_0201ef00_Out *);
    void func_0201f738();
    void selectEvAdmireMsg12(Unk_0201ef00_Out *);
};
class VillagerTalkHolidayTopics : public VillagerTalkHobbyTopics {
public:
    void func_0201dd1c();
    void func_0201dd3c(Unk_0201dc44_Ret *);
    void func_0201ddd4(Unk_0201dc44_Ret *);
    void func_0201de08(Unk_0201dc44_Ret *);
    void func_0201de3c(Unk_0201dc44_Ret *);
    void func_0201de70();
    void func_0201de78();
    void func_0201de80();
    void selectEvCountdownMsg18(Unk_0201dc44_Ret *);
    void selectEvCountdownMsg16(Unk_0201dc44_Ret *);
    void selectEvCountdownMsg14(Unk_0201dc44_Ret *);
    void selectEvCountdownB(Unk_0201dc44_Ret *);
    void selectEvCountdown(Unk_0201dc44_Ret *);
    void func_0201e110();
    void func_0201e18c();
    void func_0201e194();
    void func_0201e1e8();
    void func_0201e1f0(Unk_0201dc44_Ret *);
    void func_0201e334();
    void func_0201e33c();
    void func_0201e344();
    void selectEvSnowfesC(Unk_0201dc44_Ret *);
    void selectEvSnowfesB(Unk_0201dc44_Ret *);
    void selectEvSnowfes(Unk_0201dc44_Ret *);
};
class VillagerTalkRequestReplyTopics : public VillagerTalkHolidayTopics {
public:
    void func_02027a34(Unk_02027a34_Out *);
    void func_02027b08();
    void func_02027b1c();
    void func_02027c6c(Unk_02027a34_Out *);
    void func_02027cf8();
    void selectQFull(Unk_02027a34_Out *);
    void selectQNoB(Unk_02027a34_Out *);
    void func_02027dec();
    void selectQTime(Unk_02027a34_Out *);
    void func_02027f34();
    void func_02027f88();
    void func_02027fd8(Unk_02027a34_Out *);
    void func_020280c0();
};
class VillagerTalkTopics : public VillagerTalkRequestReplyTopics {
public:
    void selectEtcPush(Unk_0201d2d0_Out *);
    void selectEtcHit(Unk_0201d2d0_Out *);
    void selectAiFall(Unk_0201d2d0_Out *);
    void selectEvBirthMsg4(Unk_0201d2d0_Out *);
    void selectEvBirthMsg3(Unk_0201d2d0_Out *);
    void func_0201d568();
    void selectEvBirthMsg2(Unk_0201d2d0_Out *);
    void func_0201d634();
    void selectEvBirthMsg7(Unk_0201d2d0_Out *);
    void func_0201d6c8();
    void selectEvBirthMsg6(Unk_0201d2d0_Out *);
    void selectEvBirthMsg5(Unk_0201d2d0_Out *);
    void func_0201d90c();
    void selectEvBirthMsg1(Unk_0201d2d0_Out *);
    void func_020200e4();
    void func_02020150(Unk_0201d2d0_Out *);
    void func_020201b0(Unk_0201d2d0_Out *);
    void func_020204b4(Unk_0201d2d0_Out *);
    void selectTsuMove2(Unk_0201d2d0_Out *);
    void selectTsuMove1Part1(Unk_0201d2d0_Out *);
    void selectTsuMove1B(Unk_0201d2d0_Out *);
    void func_02020654();
    void selectTsuMove1(Unk_0201d2d0_Out *);
    void func_0202071c();
    void func_020207c8();
    void func_0202081c();
    void func_02020850(Unk_0201d2d0_Out *);
    void selectEtcCancel(Unk_0201d2d0_Out *);
    void selectQ10Leave(Unk_0201d2d0_Out *);
    void selectQ10Con(Unk_0201d2d0_Out *);
    void selectQ10Reserved(Unk_0201d2d0_Out *);
    void selectQError3(Unk_0201d2d0_Out *);
    void selectQError2(Unk_0201d2d0_Out *);
    void selectQError1(Unk_0201d2d0_Out *);
    void func_02022e8c();
    void selectQ10Reserve(Unk_0201d2d0_Out *);
    void func_02022f14();
    void selectQ10Req(Unk_0201d2d0_Out *);
    void selectQ12FullPart2(Unk_0201d2d0_Out *);
    void func_02023044();
    void selectQ12FullPart1(Unk_0201d2d0_Out *);
    void selectQ12Full(Unk_0201d2d0_Out *);
    void selectQ12End(Unk_0201d2d0_Out *);
    void func_0202329c();
    void selectQItem(Unk_0201d2d0_Out *);
    void func_020233b8();
    void selectQ12Thanks(Unk_0201d2d0_Out *);
    void selectQ12Report(Unk_0201d2d0_Out *);
    void selectQ12Other(Unk_0201d2d0_Out *);
    void func_02023548(Unk_0201d2d0_Out *);
    void func_02023614();
    void func_0202368c(Unk_0201d2d0_Out *);
    void selectQPreitemB(Unk_0201d2d0_Out *);
    void func_020242d8();
    void func_02024370(Unk_0201d2d0_Out *);
    void func_02024418(Unk_0201d2d0_Out *);
    void func_020244b8(Unk_0201d2d0_Out *);
    void func_02024800();
    void func_02024964(Unk_0201d2d0_Out *);
    void func_020249ec();
    void func_02024a90(Unk_0201d2d0_Out *);
    void func_02024bbc();
    void func_02024bd8(Unk_0201d2d0_Out *);
    void func_02024c4c(Unk_0201d2d0_Out *);
    void func_02024df4();
    void func_02024f54(Unk_0201d2d0_Out *);
    void func_02025008(Unk_0201d2d0_Out *);
    void func_02025090(Unk_0201d2d0_Out *);
    void func_020251c0();
    void func_020251fc(Unk_0201d2d0_Out *);
    void func_02025410();
    void func_02025460(Unk_0201d2d0_Out *);
    void func_02026000(Unk_0201d2d0_Out *);
    void func_02026128(Unk_0201d2d0_Out *);
    void func_020261c0();
    void func_02026214();
    void func_020262ac(Unk_0201d2d0_Out *);
    void func_0202635c();
    void selectQPreitem(Unk_0201d2d0_Out *);
    void func_02026410();
    void selectQ06Bad(Unk_0201d2d0_Out *);
    void selectQ06Normal(Unk_0201d2d0_Out *);
    void selectQ06Good(Unk_0201d2d0_Out *);
    void func_02026834(void *);
    void func_02026998(Unk_0201d2d0_Out *);
    void func_02026a24(Unk_0201d2d0_Out *);
    void func_02026ab0(Unk_0201d2d0_Out *);
    void func_02026b98();
    void selectQ07Show(Unk_0201d2d0_Out *);
    void func_02026c4c();
    void selectQ07Read(Unk_0201d2d0_Out *);
    void selectQ07Open2(Unk_0201d2d0_Out *);
    void func_02026e64();
    void selectQ06Open2(Unk_0201d2d0_Out *);
    void selectQ06Open3(Unk_0201d2d0_Out *);
    void func_02026fe0();
    void selectQ06Open1(Unk_0201d2d0_Out *);
    void func_020271c8();
    void func_020272a4(Unk_0201d2d0_Out *);
    void selectQIcancel(Unk_0201d2d0_Out *);
    void func_02027490();
    void selectQTimeover(Unk_0201d2d0_Out *);
    void func_0202760c(Unk_0201d2d0_Out *);
    void func_020276e8();
    void func_02027730(Unk_0201d2d0_Out *);
    void func_020277b0();
    void func_020277fc(Unk_0201d2d0_Out *);
    void func_0202787c();
    void selectEtcConnect(Unk_0201d2d0_Out *);
    void func_02029de4(Unk_0201d2d0_Out *);
    void func_02029e38(Unk_0201d2d0_Out *);
    void func_02029e8c();
    void func_02029e98();
    void func_02029f04(Unk_0201d2d0_Out *);
    void func_0202a030(s32);
    void func_0202a074(Unk_0201d2d0_Out *);
    void func_0202a0c8();
    void func_0202a18c();
    void func_0202a2b8(Unk_0201d2d0_Out *);
    void func_0202a30c();
    void func_0202a378(Unk_0201d2d0_Out *);
    void selectApHabitB(Unk_0201d2d0_Out *);
    void func_0202a468();
    void func_0202a4d4(Unk_0201d2d0_Out *);
    void func_0202a540();
    void func_0202a618(s32);
    void selectApHabitPart1(Unk_0201d2d0_Out *);
    void func_0202a6e0();
    void func_0202a750(Unk_0201d2d0_Out *);
    void func_0202b0b4(Unk_0201d2d0_Out *);
    void func_0202b208();
    void func_0202b410();
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

extern Unk_ov069_Ent data_021be7e0[3];
extern Unk_ov069_Ent data_021bf10c[17];
extern Unk_ov069_Ent data_021befd4[13];
extern Unk_ov069_Ent data_021be650[1];
extern Unk_ov069_Ent data_021be668[1];
extern Unk_ov069_Ent data_021be730[2];
extern Unk_ov069_Ent data_021bf2a4[26];
extern Unk_ov069_Ent data_021bea78[6];
extern Unk_ov069_Ent data_021bed30[9];
extern Unk_ov069_Ent data_021bebb0[8];
extern Unk_ov069_Ent data_021be8c0[4];
extern Unk_ov069_Ent data_021bee08[9];
extern Unk_ov069_Ent data_021be920[4];
extern Unk_ov069_Ent data_021bec70[8];
extern Unk_ov069_Ent data_021beb08[7];

Unk_ov069_Ent data_ov069_022613cc[17] = {
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectGreeting, (Unk_ov069_Fn)&VillagerTalkTopics::func_0202b410, (Unk_ov069_Fn)&VillagerTalkTopics::func_0202b208},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_0202b0b4, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_0202a750, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_020201b0, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvFirework, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201fa58, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvFishing, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvInsect, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201f058, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201ed3c, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201e5a4, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e1f0, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectGreeting, (Unk_ov069_Fn)&VillagerTalkTopics::func_0202081c, (Unk_ov069_Fn)&VillagerTalkTopics::func_020207c8},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201dd3c, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201dd1c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectAiFall, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEtcHit, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEtcPush, 0, 0},
};
Unk_ov069_EntB data_ov069_02261294[13] = {
    {0, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a6e0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApHabitPart1, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a618},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_0202a540, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_0202a4d4, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a468},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectApHabitB, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_0202a378, 0, 0},
    {0, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a30c},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_0202a2b8, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a18c, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a0c8},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_0202a074, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202a030},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_02029f04, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_02029e98},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_02029e8c, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_02029e38, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_02029de4, 0, 0},
};
Unk_ov069_Ent data_ov069_02260cc4[1] = {
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectEtcConnect, 0, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_020280c0},
};
Unk_ov069_EntB data_ov069_02260cdc[1] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEtcCancel, 0, 0},
};
Unk_ov069_EntB data_ov069_02260cf4[2] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_02020850, 0, 0},
};
Unk_ov069_Ent data_ov069_02261564[73] = {
    {0, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027fd8, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027f88, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027f34},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectQTime, 0, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027dec},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectQNoB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::selectQFull, 0, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027cf8},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027c6c, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027b1c, (Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027b08},
    {(Unk_ov069_Fn)&VillagerTalkRequestReplyTopics::func_02027a34, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_0202787c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_020277fc, (Unk_ov069_Fn)&VillagerTalkTopics::func_020277b0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02027730, (Unk_ov069_Fn)&VillagerTalkTopics::func_020276e8, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_0202760c, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQTimeover, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQIcancel, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_020272a4, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020271c8},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02027490, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Open1, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026fe0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Open3, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Open2, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026e64},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ07Open2, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ07Read, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026c4c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ07Show, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026b98},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02026ab0, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02026a24, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02026998, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026834},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Good, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026410},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Normal, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026410},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ06Bad, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026410},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPreitem, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_0202635c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_020262ac, (Unk_ov069_Fn)&VillagerTalkTopics::func_02026214, (Unk_ov069_Fn)&VillagerTalkTopics::func_020261c0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02026128, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02026000, (Unk_ov069_Fn)&VillagerTalkRequestStartTopics::func_0202585c, (Unk_ov069_Fn)&VillagerTalkRequestStartTopics::func_020257f0},
    {(Unk_ov069_Fn)&VillagerTalkRequestStartTopics::selectQStart, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestStartTopics::selectQNo, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestStartTopics::func_02025540, 0, (Unk_ov069_Fn)&VillagerTalkRequestStartTopics::func_020254ec},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02025460, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02025410, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_020251fc, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020251c0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02025090, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020249ec},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02025008, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024f54, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024df4, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024c4c, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024bd8, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02024bbc},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024a90, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020249ec},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024964, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024800, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_020244b8, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024418, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02024370, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020242d8},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQPreitemB, 0, (Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_020241a0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::selectQItemB, 0, (Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_02023c80},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_02023b50, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_02023ab4, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_020239c8, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_02023928, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkRequestItemTopics::func_020238b0, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_0202368c, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02023614},
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02023548, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Other, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Report, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Thanks, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020233b8},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQItem, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_0202329c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12End, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12Full, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12FullPart1, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02023044},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ12FullPart2, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Req, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02022f14},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Reserve, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02022e8c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQError1, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02022e8c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQError2, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02022e8c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQError3, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_02022e8c},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Reserved, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Con, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkTopics::selectQ10Leave, 0, 0},
};
Unk_ov069_Ent data_ov069_022611bc[9] = {
    {(Unk_ov069_Fn)&VillagerTalkTopics::func_02020150, 0, (Unk_ov069_Fn)&VillagerTalkTopics::func_020200e4},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg20, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_02020030},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_02020010, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg6, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201fed0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg8, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg10, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg12, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg14, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::selectEvKaraokeMsg17, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201fc48},
};
Unk_ov069_Ent data_ov069_02261024[8] = {
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201f9f8, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201f9c0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201f89c, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201f83c, 0, (Unk_ov069_Fn)&VillagerTalkKaraokeTopics::func_0201f7d0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg12, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201f738},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg14, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg10, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvAdmireMsg4, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201f56c},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201f564, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201f55c},
};
Unk_ov069_Ent data_ov069_02260d6c[4] = {
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniing, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniingMsg13, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::selectEvGardeniingMsg10, 0, (Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201eeac},
    {(Unk_ov069_Fn)&VillagerTalkHobbyTopics::func_0201eea4, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201ee9c},
};
Unk_ov069_Ent data_ov069_022610e4[9] = {
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcorn, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg10, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg7, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201eb9c},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201eb94, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201eb8c},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg13, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201eabc},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201ea8c, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg17, 0, (Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201e87c},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg19, (Unk_ov069_Fn)&VillagerTalkAcornTopics::func_0201e710, 0},
    {(Unk_ov069_Fn)&VillagerTalkAcornTopics::selectEvAcornMsg15, 0, 0},
};
Unk_ov069_Ent data_ov069_02260dcc[4] = {
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvSnowfes, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvSnowfesB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvSnowfesC, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e344},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e33c, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e334},
};
Unk_ov069_Ent data_ov069_02260f64[8] = {
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e1e8, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e194},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e18c, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201e110},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdown, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownB, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownMsg14, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownMsg16, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::selectEvCountdownMsg18, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201de80},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201de78, 0, (Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201de70},
};
Unk_ov069_EntB data_ov069_02260e2c[6] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEtcConnect, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0202071c},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove1, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_02020654},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove1B, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove1Part1, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectTsuMove2, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::func_020204b4, 0, 0},
};
Unk_ov069_Ent data_ov069_02260d24[3] = {
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201de3c, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201de08, 0, 0},
    {(Unk_ov069_Fn)&VillagerTalkHolidayTopics::func_0201ddd4, 0, 0},
};
Unk_ov069_EntB data_ov069_02260ebc[7] = {
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg1, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0201d90c},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg5, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0201d90c},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg6, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0201d6c8},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg7, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0201d634},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg2, 0, (Unk_ov069_FnB)&VillagerTalkTopics::func_0201d568},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg3, 0, 0},
    {(Unk_ov069_FnB)&VillagerTalkTopics::selectEvBirthMsg4, 0, 0},
};
extern "C" void func_ov069_0225f1a0() {
    memcpy(data_021be7e0, data_ov069_02260d24, 72);
    memcpy(data_021bf10c, data_ov069_022613cc, 408);
    memcpy(data_021befd4, data_ov069_02261294, 312);
    memcpy(data_021be650, data_ov069_02260cc4, 24);
    memcpy(data_021be668, data_ov069_02260cdc, 24);
    memcpy(data_021be730, data_ov069_02260cf4, 48);
    memcpy(data_021bf2a4, data_ov069_02261564, 1752);
    memcpy(data_021bea78, data_ov069_02260e2c, 144);
    memcpy(data_021bed30, data_ov069_022611bc, 216);
    memcpy(data_021bebb0, data_ov069_02261024, 192);
    memcpy(data_021be8c0, data_ov069_02260d6c, 96);
    memcpy(data_021bee08, data_ov069_022610e4, 216);
    memcpy(data_021be920, data_ov069_02260dcc, 96);
    memcpy(data_021bec70, data_ov069_02260f64, 192);
    memcpy(data_021beb08, data_ov069_02260ebc, 168);
}

// An empty object whose inline constructor runs the copy once all the tables are built (the call ends __sinit; the object
// itself is the one byte of .bss in front of the tables).
struct Unk_ov069_Init {
    Unk_ov069_Init() { func_ov069_0225f1a0(); }
};
Unk_ov069_Init data_ov069_02260cc0;  // named (symbols.txt) so that the link keeps it: nothing refers to it
