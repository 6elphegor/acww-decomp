#ifndef NET_GSBYTES_H
#define NET_GSBYTES_H

#include "types.h"

// Four bytes copied as a unit: byte-wise copies of unaligned 32-bit values (instance keys, IPv4 addresses, ping
// timestamps) in the GameSpy code of ov065 (unk_ov065_02283f34.cpp, unk_ov065_02287390.cpp,
// unk_ov065_02289444.cpp).

struct GsBytes4 {
    /* 0x00 */ u8 b[4];
};

#endif
