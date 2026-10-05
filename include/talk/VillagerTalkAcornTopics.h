#ifndef TALK_VILLAGERTALKACORNTOPICS_H
#define TALK_VILLAGERTALKACORNTOPICS_H

#include "types.h"
#include "talk/VillagerTalkKaraokeTopics.h"

// Villager talk topics of the acorn (ev_acorn) and snow festival events; a base of VillagerTalkHobbyTopics (ov069).
// Members defined in src/main/unk_0201c050.cpp.
struct TalkTopicMsg;

class VillagerTalkAcornTopics : public VillagerTalkKaraokeTopics {
public:
    void selectEvSnowfesTalk(u32 arg);
    void selectEvAcornMsg15(TalkTopicMsg *out);
    void giveAcornReward();
    void selectEvAcornMsg19(TalkTopicMsg *out);
    void rollAcornReward();
    void selectEvAcornMsg17(TalkTopicMsg *out);
    void continueAcornReceived();
    void onAcornPicked();
    void openAcornPicker();
    void openEvAcornGiveChoice();
    void selectEvAcornMsg13(TalkTopicMsg *out);
    void openSmallTalkChoiceAcorn();
    void selectEtcConnectAcorn();
    void continueEvAcornMsg7();
    void selectEvAcornMsg7(TalkTopicMsg *out);
    void selectEvAcornMsg10(TalkTopicMsg *out);
    void selectEvAcorn(TalkTopicMsg *out);
    void selectEvAcornTalk(u32 arg);
    void openSmallTalkChoiceGardeniing();
};

#endif
