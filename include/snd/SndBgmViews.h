#ifndef SND_SNDBGMVIEWS_H
#define SND_SNDBGMVIEWS_H

// Views used by the BGM state machine / particle manager pair (src/autoload_2/unk_020f7a5c.cpp and its companion
// unk_020f8b44.cpp): Q = the record behind gSndMgr+0x2c, Rb = base object (vtable 0x0213bb90), view A.
#include "types.h"

struct Q {
    /* 0x00 */ u8 pad[0x16];
    /* 0x16 */ s16 s16v;
    /* 0x18 */ u8 p18[2];
    /* 0x1a */ s16 s1a;
};

struct Rb {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u16 h4;
    /* 0x06 */ u16 h6;
    /* 0x08 */ u8 c8;
    /* 0x09 */ s8 c9;
    /* 0x0a */ s8 c10;
    /* 0x0b */ s8 c11;
    /* 0x0c */ s8 c12;
    /* 0x0d */ s8 c13;
    /* 0x0e */ s8 c14;
    /* 0x0f */ u8 c15;
    /* 0x10 */ u8 c16;
};

#endif // SND_SNDBGMVIEWS_H
