#ifndef TALK_TALKREQUESTENTRY_H
#define TALK_TALKREQUESTENTRY_H

#include "types.h"

// 0x1c-byte talk request list node (pool sTalkRequestPool[15]). Constructor in src/main/unk_0203eb78.cpp.
struct TalkRequestEntry {
    TalkRequestEntry();

    /* 0x00 */ s32 prev;
    /* 0x04 */ s32 next;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09[3];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 inUse;
    /* 0x15 */ u8 unk_15[7];
};

#endif
