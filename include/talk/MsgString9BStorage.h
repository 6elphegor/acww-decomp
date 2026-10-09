#ifndef TALK_MSGSTRING9BSTORAGE_H
#define TALK_MSGSTRING9BSTORAGE_H

#include "types.h"
#include "talk/MsgString9B.h"

// Raw MsgString9B storage that the code constructs and destroys by hand (_ZN11MsgString9BC1Ev / D1Ev); a real
// MsgString9B local would add implicit destructor calls. Sized and aligned for the object (0x1c bytes on the DS; it
// was 0x1c bytes on every host, 12 short of the object on 64-bit hosts, whose constructor wrote past it).
// Used by src/main/unk_0201c050.cpp and unk_02041e00.cpp.

struct MsgString9BStorage {
    alignas(MsgString9B) u8 v[sizeof(MsgString9B)];
};

#endif
