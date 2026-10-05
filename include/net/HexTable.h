#ifndef NET_HEXTABLE_H
#define NET_HEXTABLE_H

#include "types.h"

// Hex digit table ("0123456789abcdef" + NUL) and the two-character output pair used to hex-encode digests in the
// WFC / GameSpy glue units (unk_020ea0b4, unk_020ea34c, unk_020ea960).
struct HexTable {
    /* 0x00 */ u8 c[17];
};

struct HexPair {
    /* 0x0 */ u8 hi;
    /* 0x1 */ u8 lo;
};

#endif
