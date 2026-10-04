#ifndef TALK_VILLAGERTALKHOBBYTOPICS_H
#define TALK_VILLAGERTALKHOBBYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkAcornTopics.h"

// Villager talk topic state functions: gardening / insect / fishing / admire topics. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp. The member-pointer fields are typed with VillagerTalkRequestItemTopics; that unit casts them to its per-class types.
struct Unk_0201ef00_Out;

class VillagerTalkHobbyTopics : public VillagerTalkAcornTopics {
public:
    void selectEtcConnectGardeniing();
    void continueEvGardeniingMsg10();
    void selectEvGardeniingMsg10(Unk_0201ef00_Out *out);
    void selectEvGardeniingMsg13(Unk_0201ef00_Out *out);
    void selectEvGardeniing(Unk_0201ef00_Out *out);
    void selectEvGardeniingTalk(void *arg);
    void endEvInsect();
    void selectEvInsect(Unk_0201ef00_Out *out);
    void endEvFishing();
    void selectEvFishing(Unk_0201ef00_Out *out);
    void openSmallTalkChoiceAdmire();
    void selectEtcConnectAdmire();
    void continueEvAdmireMsg4();
    void selectEvAdmireMsg4(Unk_0201ef00_Out *out);
    void selectEvAdmireMsg10(Unk_0201ef00_Out *out);
    void selectEvAdmireMsg14(Unk_0201ef00_Out *out);
    void onEvAdmireWordEnteredB();
    void openEvAdmireWordEntryB();
    void selectEvAdmireMsg12(Unk_0201ef00_Out *out);
};

#endif
