#ifndef NET_WIFIPINGSTATE_H
#define NET_WIFIPINGSTATE_H

// Entry of sWifiPingState[] (4 bytes), used by the WFC glue units src/autoload_2/unk_020ea34c.cpp and
// unk_020ea960.cpp (one unit split in two files; the array itself is defined elsewhere).
#include "types.h"

struct Ent {
    u16 a;
    u8 b;
    u8 c;
};

#endif
