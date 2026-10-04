#ifndef NET_GSGPSEARCH_H
#define NET_GSGPSEARCH_H

#include "types.h"

// GP search-manager request (cf. GameSpy GP SDK gpiSearch.h GPISearchData, older version without namespaceIDs/partnerID; the two
// GPIBuffers are spelled out as fields) (src/ov065/unk_ov065_02281a5c.cpp gpiSearch.c, "gpsp.gs.nintendowifi.net").

struct GsGpSearch {
    /* 0x000 */ s32 searchType;
    /* 0x004 */ s32 sock;
    /* 0x008 */ char *inputBuffer;
    /* 0x00c */ s32 inputBufferCapacity;
    /* 0x010 */ s32 inputBufferLength;
    /* 0x014 */ s32 inputBufferPos;
    /* 0x018 */ char *outputBuffer;
    /* 0x01c */ s32 outputBufferCapacity;
    /* 0x020 */ s32 outputBufferLength;
    /* 0x024 */ s32 outputBufferPos;
    /* 0x028 */ char nick[0x1f];
    /* 0x047 */ char uniqueNick[0x15];
    /* 0x05c */ char email[0x33];
    /* 0x08f */ char firstName[0x1f];
    /* 0x0ae */ char lastName[0x1f];
    /* 0x0cd */ char password[0x1f];
    /* 0x0ec */ char cdKey[0x130 - 0xec];
    /* 0x130 */ s32 icqUin;
    /* 0x134 */ s32 skip;
    /* 0x138 */ s32 productId;
    /* 0x13c */ s32 isProcessing;
    /* 0x140 */ s32 isFinished;
};

#endif
