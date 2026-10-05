#ifndef SND_SNDBGMHD_H
#define SND_SNDBGMHD_H

#include "types.h"

// BGM info header behind gSndBgmHandle (first word of the handle; gSndMgr +0x3c), read by the BGM-synchronised
// animation code (unk_020f7a5c, unk_020f8b44).
struct Hd {
    /* 0x00 */ u8 pad[0x38];
    /* 0x38 */ u16 id;
};

#endif
