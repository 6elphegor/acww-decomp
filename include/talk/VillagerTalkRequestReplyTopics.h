#ifndef TALK_VILLAGERTALKREQUESTREPLYTOPICS_H
#define TALK_VILLAGERTALKREQUESTREPLYTOPICS_H

#include "types.h"
#include "talk/VillagerTalkHolidayTopics.h"

// Villager talk topic state functions: delivery request / Q-time replies and the connect menu. Views of the VillagerTalk object; base of the next topic class (ov069 chain).
// Members defined in src/main/unk_0201c050.cpp. The member-pointer fields are typed with VillagerTalkRequestItemTopics; that unit casts them to its per-class types.
struct TalkTopicMsg;

class VillagerTalkRequestReplyTopics : public VillagerTalkHolidayTopics {
public:
    void selectDeliveryLate(TalkTopicMsg *out);
    s32 getRequestKind();
    void acceptDeliveryRequest();
    void setDeliveryDeadline();
    void selectDeliveryAccepted(TalkTopicMsg *out);
    void continueQFull();
    void selectQFull(TalkTopicMsg *out);
    void cancelRequest();
    void selectQNoB(TalkTopicMsg *out);
    void openDeliveryAcceptChoice();
    void selectQTime(TalkTopicMsg *out);
    void gotoDeliveryTime();
    void pickDeliveryRecipient();
    void selectDeliveryRequest(TalkTopicMsg *out);
    void runChosenTopic(TalkTopicMsg *, u32 idx);
    void openConnectMenu();
    BOOL tryAddSickVillagerChoice(void *arg);
    BOOL tryOfferNewRequest(void *a, void *b);
};

#endif
