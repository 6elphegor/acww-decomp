#ifndef GAME_GULLIVERQUEST_H
#define GAME_GULLIVERQUEST_H

#include "types.h"

// Gulliver's UFO parts quest (SaveData::gulliverQuest, one byte). Defined in src/main/unk_02085940.cpp.
struct GulliverQuest {
    u8 cnt : 3;
    u8 flag : 1;
    void start();
    BOOL isStarted();
    void addPart();
    s32 getPartCount();
};

#endif
