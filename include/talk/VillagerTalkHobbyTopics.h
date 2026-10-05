#ifndef TALK_VILLAGERTALKHOBBYTOPICS_H
#define TALK_VILLAGERTALKHOBBYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkAcornTopics.h"

// Villager talk topic state functions: gardening / insect / fishing / admire topics. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp. The member-pointer fields are typed with VillagerTalkRequestItemTopics; that unit casts them to its per-class types.
struct TalkTopicMsg;

class VillagerTalkHobbyTopics : public VillagerTalkAcornTopics {
public:
    void selectEtcConnectGardeniing();
    void continueEvGardeniingMsg10();
    void selectEvGardeniingMsg10(TalkTopicMsg *out);
    void selectEvGardeniingMsg13(TalkTopicMsg *out);
    void selectEvGardeniing(TalkTopicMsg *out);
    void selectEvGardeniingTalk(void *arg);
    void endEvInsect();
    void selectEvInsect(TalkTopicMsg *out);
    void endEvFishing();
    void selectEvFishing(TalkTopicMsg *out);
    void openSmallTalkChoiceAdmire();
    void selectEtcConnectAdmire();
    void continueEvAdmireMsg4();
    void selectEvAdmireMsg4(TalkTopicMsg *out);
    void selectEvAdmireMsg10(TalkTopicMsg *out);
    void selectEvAdmireMsg14(TalkTopicMsg *out);
    void onEvAdmireWordEnteredB();
    void openEvAdmireWordEntryB();
    void selectEvAdmireMsg12(TalkTopicMsg *out);
};

#endif
