#ifndef NET_NETCHECK_H
#define NET_NETCHECK_H

#include "types.h"
#include "net/DwcHttp.h"
#include "sys/OSThread.h"

// Connection test (conntest.nintendowifi.net, hotspot login through NAS): NetCheck_Start parameters and the
// "DWCnetcheck" work sNetCheck (0x1200 bytes incl. the 0x1000 thread stack), src/ov065/unk_ov065_0226ec94.cpp;
// also declared by src/ov065/unk_ov065_0226fc18.cpp.

typedef struct NetCheckParams NetCheckParams;
struct NetCheckParams {
    /* 0x0 */ DwcAllocFunc allocFunc;
    /* 0x4 */ DwcFreeFunc freeFunc;
    /* 0x8 */ u32 unk_08;
};

typedef struct NetCheckWork NetCheckWork;
struct NetCheckWork {
    /* 0x000 */ s32 state;
    /* 0x004 */ s32 errorCode;
    /* 0x008 */ DwcHttpField responseFields[0x20];
    /* 0x108 */ DwcAllocFunc allocFunc; // NetCheckParams copy (NetCheck_Start)
    /* 0x10c */ DwcFreeFunc freeFunc;
    /* 0x110 */ u32 pad110;
    /* 0x114 */ char *body302;
    /* 0x118 */ char *bodyWayport;
    /* 0x11c */ OSThread thread;
    /* 0x1dc */ OSMutex mutex;
    /* 0x1f4 */ u8 unk_1f4[0xc];
    /* 0x200 */ u8 stack[0x1000]; // the thread's
};

#endif
