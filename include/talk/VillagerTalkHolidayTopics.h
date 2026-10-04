#ifndef TALK_VILLAGERTALKHOLIDAYTOPICS_H
#define TALK_VILLAGERTALKHOLIDAYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkHobbyTopics.h"

// Villager talk topic state functions: birthday / countdown / snow festival topics and the tsu (rumor) once-topics. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp. The member-pointer fields are typed with VillagerTalkRequestItemTopics; that unit casts them to its per-class types.
struct TalkTopicMsg;

class VillagerTalkHolidayTopics : public VillagerTalkHobbyTopics {
public:
    void updateEvBirthMove();
    void startEvBirthMove();
    void continueEvBirthMsg0();
    void selectEvBirthMsg0(TalkTopicMsg *out);
    void selectTsuFriendOnce(TalkTopicMsg *out);
    void selectTsuSpotOnce(TalkTopicMsg *out);
    void selectTsuAlwaysOnce(TalkTopicMsg *out);
    void openSmallTalkChoiceCountdown();
    void selectEtcConnectCountdown();
    void continueEvCountdownMsg18();
    void selectEvCountdownMsg18(TalkTopicMsg *out);
    void selectEvCountdownMsg16(TalkTopicMsg *out);
    void selectEvCountdownMsg14(TalkTopicMsg *out);
    void selectEvCountdownB(TalkTopicMsg *out);
    void selectEvCountdown(TalkTopicMsg *out);
    void openEvCountdownChoice();
    void selectEtcConnectCountdownB();
    void continueGreetingCountdown();
    void selectGreetingCountdown();
    void selectEvCountdownTalk(TalkTopicMsg *out);
    void openSmallTalkChoiceSnowfes();
    void selectEtcConnectSnowfes();
    void continueEvSnowfesC();
    void selectEvSnowfesC(TalkTopicMsg *out);
    void selectEvSnowfesB(TalkTopicMsg *out);
    void selectEvSnowfes(TalkTopicMsg *out);
};

#endif
