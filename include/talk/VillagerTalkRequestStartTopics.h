#ifndef TALK_VILLAGERTALKREQUESTSTARTTOPICS_H
#define TALK_VILLAGERTALKREQUESTSTARTTOPICS_H

#include "types.h"
#include "talk/VillagerTalkRequestItemTopics.h"

// Villager talk topics that start an item request / errand (Q-start, accept, decline, defer); base of the ov069
// topic classes. Members defined in src/main/unk_0201c050.cpp.
struct Unk_020254ec_Out;

class VillagerTalkRequestStartTopics : public VillagerTalkRequestItemTopics {
public:
    void gotoQ05Talk();
    void selectQCon(Unk_020254ec_Out *out);
    void registerRequestDeclined();
    void selectQNo(Unk_020254ec_Out *out);
    void registerRequestAccepted();
    void selectQStart(Unk_020254ec_Out *out);
    void registerRequestDeferred();
    void openRequestChoice();
    void prepareRequestItem();
};

#endif
