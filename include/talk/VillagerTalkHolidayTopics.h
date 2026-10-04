#ifndef TALK_VILLAGERTALKHOLIDAYTOPICS_H
#define TALK_VILLAGERTALKHOLIDAYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkHobbyTopics.h"

// Villager talk topic state functions: birthday / countdown / snow festival topics and the tsu (rumor) once-topics. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp. The member-pointer fields are typed with VillagerTalkRequestItemTopics; that unit casts them to its per-class types.
struct HolidayTopicMsg;

class VillagerTalkHolidayTopics : public VillagerTalkHobbyTopics {
public:
    void updateEvBirthMove();
    void startEvBirthMove();
    void continueEvBirthMsg0();
    void selectEvBirthMsg0(HolidayTopicMsg *out);
    void selectTsuFriendOnce(HolidayTopicMsg *out);
    void selectTsuSpotOnce(HolidayTopicMsg *out);
    void selectTsuAlwaysOnce(HolidayTopicMsg *out);
    void openSmallTalkChoiceCountdown();
    void selectEtcConnectCountdown();
    void continueEvCountdownMsg18();
    void selectEvCountdownMsg18(HolidayTopicMsg *out);
    void selectEvCountdownMsg16(HolidayTopicMsg *out);
    void selectEvCountdownMsg14(HolidayTopicMsg *out);
    void selectEvCountdownB(HolidayTopicMsg *out);
    void selectEvCountdown(HolidayTopicMsg *out);
    void openEvCountdownChoice();
    void selectEtcConnectCountdownB();
    void continueGreetingCountdown();
    void selectGreetingCountdown();
    void selectEvCountdownTalk(HolidayTopicMsg *out);
    void openSmallTalkChoiceSnowfes();
    void selectEtcConnectSnowfes();
    void continueEvSnowfesC();
    void selectEvSnowfesC(HolidayTopicMsg *out);
    void selectEvSnowfesB(HolidayTopicMsg *out);
    void selectEvSnowfes(HolidayTopicMsg *out);
};

#endif
