#ifndef NET_GSSRVQUERYENGINE_H
#define NET_GSSRVQUERYENGINE_H

#include "types.h"

// GameSpy server browser query engine (ov065, GsSrvQuery_*/GsSrvQueue_*): server objects, their queues, the engine
// and its event callback, and the QR1 query strings; used by unk_ov065_02288510.cpp, unk_ov065_02288c78.cpp and
// (through GsSrvBrowser.h) unk_ov065_02289444.cpp.

struct Unk_ov065_02288b60_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

struct GsServer {
    /* 0x00 */ u32 addr;
    /* 0x04 */ u16 port;
    /* 0x06 */ u16 pad_06;
    /* 0x08 */ u32 addr2;
    /* 0x0c */ u16 port2;
    /* 0x0e */ u16 pad_0e;
    /* 0x10 */ s32 altAddr;
    /* 0x14 */ u8 stateFlags;
    /* 0x15 */ u8 listFlags;
    /* 0x16 */ u16 pad_16;
    /* 0x18 */ void *keyValues;
    /* 0x1c */ u32 ping;
    /* 0x20 */ GsServer *next;
};

struct GsSrvQueue {
    /* 0x00 */ GsServer *head;
    /* 0x04 */ GsServer *tail;
    /* 0x08 */ s32 count;
};

struct GsSrvQueryEngine;
typedef void (*GsSrvQueryEngineCallback)(GsSrvQueryEngine *m, s32 code, void *arg, void *user);

struct GsSrvQueryEngine {
    /* 0x00 */ s32 mode;
    /* 0x04 */ s32 max;
    /* 0x08 */ GsSrvQueue active;
    /* 0x14 */ GsSrvQueue pending;
    /* 0x20 */ s32 sock;
    /* 0x24 */ s32 sock2;
    /* 0x28 */ u32 publicIp;
    /* 0x2c */ u8 key[0x14];
    /* 0x40 */ s32 keycount;
    /* 0x44 */ GsSrvQueryEngineCallback cb;
    /* 0x48 */ void *user;
};

struct GsSrvQueryBasicInfoStr {
    /* 0x00 */ u8 b[13];
};

struct GsSrvQueryStatusStr {
    /* 0x00 */ u8 b[8];
};

#endif
