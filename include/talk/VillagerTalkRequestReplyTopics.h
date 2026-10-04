#ifndef TALK_VILLAGERTALKREQUESTREPLYTOPICS_H
#define TALK_VILLAGERTALKREQUESTREPLYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkHolidayTopics.h"

// Villager talk topic state functions: delivery request / Q-time replies and the connect menu. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp (which keeps its own layout view of this class).
struct Unk_02027a34_Out;

class VillagerTalkRequestReplyTopics : public VillagerTalkHolidayTopics {
public:
    void selectDeliveryLate(Unk_02027a34_Out *out);
    s32 getRequestKind();
    void acceptDeliveryRequest();
    void setDeliveryDeadline();
    void selectDeliveryAccepted(Unk_02027a34_Out *out);
    void continueQFull();
    void selectQFull(Unk_02027a34_Out *out);
    void cancelRequest();
    void selectQNoB(Unk_02027a34_Out *out);
    void openDeliveryAcceptChoice();
    void selectQTime(Unk_02027a34_Out *out);
    void gotoDeliveryTime();
    void pickDeliveryRecipient();
    void selectDeliveryRequest(Unk_02027a34_Out *out);
    void runChosenTopic(Unk_02027a34_Out *, u32 idx);
    void openConnectMenu();
    BOOL tryAddSickVillagerChoice(void *arg);
    BOOL tryOfferNewRequest(void *a, void *b);
};

#endif
