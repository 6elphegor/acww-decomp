#ifndef TALK_TALKTOPICMSG_H
#define TALK_TALKTOPICMSG_H

#include "types.h"

// Message picked by a villager talk topic: message file name (the topic file buffer, as a word) + message index.
// Filled by the select* states of VillagerTalkTopics and its topic subclasses (src/main/unk_0201c050.cpp) and the ov004
// room NPC talk helpers; passed to TalkWindowState::setNextMessage(IfUnset). It is the same record as TalkStartMsg
// (VillagerTalk::start passes its TalkStartMsg * to the select* states; fileName = msgKey), kept separate only
// because the villager code stores the key as a word; folding it into TalkStartMsg is a FOLLOWUPS item.

struct TalkTopicMsg {
    /* 0x0 */ u32 fileName;
    /* 0x4 */ u8 msgIndex;
};

#endif // TALK_TALKTOPICMSG_H
