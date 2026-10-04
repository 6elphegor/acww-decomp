#ifndef TALK_SPNPCKATIETALK_H
#define TALK_SPNPCKATIETALK_H

#include "types.h"
#include "talk/SpNpcTalkRequest.h"
#include "talk/TalkStartMsg.h"

class SpNpcKatie;

// Katie's talk request (0xb4 bytes; member at 0x658 of SpNpcKatie): owner and current topic.
// Defined in src/main/unk_020c0324.cpp.
class SpNpcKatieTalk : public SpNpcTalkRequest {
public:
    SpNpcKatieTalk();
    virtual ~SpNpcKatieTalk();
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void onEventTag(u32 id);
    virtual void start(TalkStartMsg *out);

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(SpNpcKatie *owner);

    /* 0xac */ SpNpcKatie *katie;
    /* 0xb0 */ s32 topic;
};

#endif
