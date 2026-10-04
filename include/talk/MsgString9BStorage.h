#ifndef TALK_MSGSTRING9BSTORAGE_H
#define TALK_MSGSTRING9BSTORAGE_H

#include "types.h"

// 0x1c bytes of raw MsgString9B storage that the code constructs and destroys by hand
// (_ZN11MsgString9BC1Ev / D1Ev); a real MsgString9B local would add implicit destructor calls.
// Used by src/main/unk_0201c050.cpp and unk_02041e00.cpp.

struct MsgString9BStorage {
    /* 0x00 */ u8 v[0x1c];
};

#endif
