#ifndef TALK_VILLAGERTALKACORNTOPICS_H
#define TALK_VILLAGERTALKACORNTOPICS_H

#include "types.h"
#include "talk/VillagerTalkKaraokeTopics.h"

// Villager talk topics of the acorn (ev_acorn) and snow festival events; a base of VillagerTalkHobbyTopics (ov069).
// Members defined in src/main/unk_0201c050.cpp.
struct Unk_0201e5a4_Out;

class VillagerTalkAcornTopics : public VillagerTalkKaraokeTopics {
public:
    void selectEvSnowfesTalk(u32 arg);
    void selectEvAcornMsg15(Unk_0201e5a4_Out *out);
    void giveAcornReward();
    void selectEvAcornMsg19(Unk_0201e5a4_Out *out);
    void rollAcornReward();
    void selectEvAcornMsg17(Unk_0201e5a4_Out *out);
    void continueAcornReceived();
    void onAcornPicked();
    void openAcornPicker();
    void openEvAcornGiveChoice();
    void selectEvAcornMsg13(Unk_0201e5a4_Out *out);
    void openSmallTalkChoiceAcorn();
    void selectEtcConnectAcorn();
    void continueEvAcornMsg7();
    void selectEvAcornMsg7(Unk_0201e5a4_Out *out);
    void selectEvAcornMsg10(Unk_0201e5a4_Out *out);
    void selectEvAcorn(Unk_0201e5a4_Out *out);
    void selectEvAcornTalk(u32 arg);
    void openSmallTalkChoiceGardeniing();
};

#endif
