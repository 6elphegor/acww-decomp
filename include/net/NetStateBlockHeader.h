#ifndef NET_NETSTATEBLOCKHEADER_H
#define NET_NETSTATEBLOCKHEADER_H

#include "types.h"

// Header scratch of the NetArea state blocks in the CommManager aux buffers: total block length, then per chunk its
// length and reader/writer index (NetArea_Write/ParseState*, src/main/unk_020a647c.cpp, unk_020a6564.cpp, unk_020a65fc.cpp).

struct NetStateBlockHeader {
    /* 0x00 */ u16 total;
    /* 0x02 */ u16 len;
    /* 0x04 */ u8 id;
};

#endif // NET_NETSTATEBLOCKHEADER_H
