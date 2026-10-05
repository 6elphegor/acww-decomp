#ifndef TALK_TALKSTARTMSG_H
#define TALK_TALKSTARTMSG_H

// Message a special NPC's talk starts with: message file key + message index. Filled by the SpNpc*Talk::start
// overrides (ov046..ov088).
#include "types.h"

struct TalkStartMsg {
    /* 0x0 */ const char *msgKey;
    /* 0x4 */ u8 msgIndex;
};

#endif
