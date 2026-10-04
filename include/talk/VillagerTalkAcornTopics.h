#ifndef TALK_VILLAGERTALKACORNTOPICS_H
#define TALK_VILLAGERTALKACORNTOPICS_H

#include "types.h"
#include "talk/VillagerTalkKaraokeTopics.h"

// Villager talk topics of the acorn (ev_acorn) and snow festival events; a base of VillagerTalkHobbyTopics (ov069).
// Members defined in src/main/unk_0201c050.cpp.
struct AcornTopicMsg;

class VillagerTalkAcornTopics : public VillagerTalkKaraokeTopics {
public:
    void selectEvSnowfesTalk(u32 arg);
    void selectEvAcornMsg15(AcornTopicMsg *out);
    void giveAcornReward();
    void selectEvAcornMsg19(AcornTopicMsg *out);
    void rollAcornReward();
    void selectEvAcornMsg17(AcornTopicMsg *out);
    void continueAcornReceived();
    void onAcornPicked();
    void openAcornPicker();
    void openEvAcornGiveChoice();
    void selectEvAcornMsg13(AcornTopicMsg *out);
    void openSmallTalkChoiceAcorn();
    void selectEtcConnectAcorn();
    void continueEvAcornMsg7();
    void selectEvAcornMsg7(AcornTopicMsg *out);
    void selectEvAcornMsg10(AcornTopicMsg *out);
    void selectEvAcorn(AcornTopicMsg *out);
    void selectEvAcornTalk(u32 arg);
    void openSmallTalkChoiceGardeniing();
};

#endif
