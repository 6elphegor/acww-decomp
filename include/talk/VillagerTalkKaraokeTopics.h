#ifndef TALK_VILLAGERTALKKARAOKETOPICS_H
#define TALK_VILLAGERTALKKARAOKETOPICS_H

#include "types.h"
#include "talk/VillagerTalkRequestStartTopics.h"

// Villager talk topics of the admire / firework / karaoke events; a base of VillagerTalkAcornTopics (ov069).
// Members defined in src/main/unk_0201c050.cpp.
struct Unk_0201f7d0_Out;

class VillagerTalkKaraokeTopics : public VillagerTalkRequestStartTopics {
public:
    void openEvAdmireChoice();
    void selectEvAdmireMsg7(Unk_0201f7d0_Out *out);
    void selectEvAdmireMsg2(Unk_0201f7d0_Out *out);
    void onEvAdmireWordEntered();
    void saveEnteredCompliment();
    void openEvAdmireWordEntry();
    void selectEvAdmire(Unk_0201f7d0_Out *out);
    void selectEvAdmireTalk(Unk_0201f7d0_Out *out);
    void endEvFirework();
    void selectEvFirework(Unk_0201f7d0_Out *out);
    void openSmallTalkChoice();
    void selectEvKaraokeMsg17(Unk_0201f7d0_Out *out);
    void selectEvKaraokeMsg14(Unk_0201f7d0_Out *out);
    void selectEvKaraokeMsg12(Unk_0201f7d0_Out *out);
    void selectEvKaraokeMsg10(Unk_0201f7d0_Out *out);
    void endEvKaraokeMsg8();
    void selectEvKaraokeMsg8(Unk_0201f7d0_Out *out);
    void openEvKaraokeMsg6Choice();
    void selectEvKaraokeMsg6(Unk_0201f7d0_Out *out);
    void continueEvKaraokeAction();
    void waitEvKaraokeAction();
    void startEvKaraokeAction();
    void continueEvKaraokeMsg20();
    void selectEvKaraokeMsg20(Unk_0201f7d0_Out *out);
};

#endif
