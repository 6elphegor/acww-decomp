#ifndef TALK_VILLAGERTALKHOLIDAYTOPICS_H
#define TALK_VILLAGERTALKHOLIDAYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkHobbyTopics.h"

// Villager talk topic state functions: birthday / countdown / snow festival topics and the tsu (rumor) once-topics. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp (which keeps its own layout view of this class).
struct Unk_0201dc44_Ret;

class VillagerTalkHolidayTopics : public VillagerTalkHobbyTopics {
public:
    void updateEvBirthMove();
    void startEvBirthMove();
    void continueEvBirthMsg0();
    void selectEvBirthMsg0(Unk_0201dc44_Ret *out);
    void selectTsuFriendOnce(Unk_0201dc44_Ret *out);
    void selectTsuSpotOnce(Unk_0201dc44_Ret *out);
    void selectTsuAlwaysOnce(Unk_0201dc44_Ret *out);
    void openSmallTalkChoiceCountdown();
    void selectEtcConnectCountdown();
    void continueEvCountdownMsg18();
    void selectEvCountdownMsg18(Unk_0201dc44_Ret *out);
    void selectEvCountdownMsg16(Unk_0201dc44_Ret *out);
    void selectEvCountdownMsg14(Unk_0201dc44_Ret *out);
    void selectEvCountdownB(Unk_0201dc44_Ret *out);
    void selectEvCountdown(Unk_0201dc44_Ret *out);
    void openEvCountdownChoice();
    void selectEtcConnectCountdownB();
    void continueGreetingCountdown();
    void selectGreetingCountdown();
    void selectEvCountdownTalk(Unk_0201dc44_Ret *out);
    void openSmallTalkChoiceSnowfes();
    void selectEtcConnectSnowfes();
    void continueEvSnowfesC();
    void selectEvSnowfesC(Unk_0201dc44_Ret *out);
    void selectEvSnowfesB(Unk_0201dc44_Ret *out);
    void selectEvSnowfes(Unk_0201dc44_Ret *out);
};

#endif
