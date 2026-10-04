#ifndef NET_GSSRVBROWSER_H
#define NET_GSSRVBROWSER_H

#include "types.h"
#include "net/GsSrvListCryptState.h"
#include "net/GsSrvQueryEngine.h"

// GameSpy server browser (ov065, GsSrvBrowser_*/GsSrvList_*/GsServer_*): the master server list connection
// (%s.ms%d.gs.nintendowifi.net port 28910), the browser object that owns a query engine and a list, and small
// server key/value helpers; used by unk_ov065_02288c78.cpp and unk_ov065_02289444.cpp.

struct GsSrvSortStackPad {
    /* 0x00 */ s32 v[1];
    GsSrvSortStackPad() {}
    ~GsSrvSortStackPad() {}
};

struct Unk_ov065_0228909c_P {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
};

// Entry of a server's key/value hash table.
struct GsServerKeyValue {
    /* 0x00 */ s32 key;
    /* 0x04 */ s32 value;
};

// Copy of data_ov065_0228e928 {"queryid", "final"}: reply keys GsServer_IsKeyAllowed rejects.
struct GsServerIgnoredKeys {
    /* 0x00 */ char *v[2];
};

// Element of GsSrvList::keyList (key name interned in the string pool, key type).
struct GsSrvListKey {
    /* 0x00 */ void *keyName;
    /* 0x04 */ s32 keyType;
};

struct GsSrvList;

// List events: (list, event 0 server added .. 6 public ip known, arg, userData).
typedef void (*GsSrvListCallback)(GsSrvList *, s32, u32, u32);
// Map loop message (type 5): (list, server, change time, map count, map names, userData).
typedef void (*GsSrvListMaploopCallback)(GsSrvList *, void *, u32, s32, void *, u32);
// Player search message (type 6): (list, nick, server ip, server port, last seen, game name, userData).
typedef void (*GsSrvListPlayerSearchCallback)(GsSrvList *, void *, u32, u32, u32, void *, u32);

struct GsSrvList {
    /* 0x000 */ s32 state;
    /* 0x004 */ void *servers;
    /* 0x008 */ void *keyList;
    /* 0x00c */ char queryForGame[0x24];
    /* 0x030 */ char queryFromGame[0x24];
    /* 0x054 */ char secretKey[0x20];
    /* 0x074 */ char challenge[8];
    /* 0x07c */ u8 *inBuffer;
    /* 0x080 */ s32 inBufferLen;
    /* 0x084 */ u32 popularValues[0xff];
    /* 0x480 */ s32 numPopularValues;
    /* 0x484 */ s32 expectedCount;
    /* 0x488 */ GsSrvListCallback listCallback;
    /* 0x48c */ GsSrvListMaploopCallback maploopCallback;
    /* 0x490 */ GsSrvListPlayerSearchCallback playerSearchCallback;
    /* 0x494 */ u32 callbackParam;
    /* 0x498 */ char *sortKey;
    /* 0x49c */ s32 sortAscending;
    /* 0x4a0 */ s32 myPublicIp;
    /* 0x4a4 */ u32 altSourceIp;
    /* 0x4a8 */ u16 defaultPort;
    /* 0x4aa */ u16 pad_4aa;
    /* 0x4ac */ char *errorText;
    /* 0x4b0 */ s32 socket;
    /* 0x4b4 */ u32 lanStartTime;
    /* 0x4b8 */ s32 gameVersion;
    /* 0x4bc */ GsSrvListCryptState cryptState;
    /* 0x5c1 */ u8 pad_5c1[3];
    /* 0x5c4 */ u32 queryOptions;
    /* 0x5c8 */ s32 parseState;
    /* 0x5cc */ s32 unk_5cc;
    /* 0x5d0 */ void *deadServers;
};

struct GsSrvBrowser;

// Browser events: (browser, event, server, userData).
typedef void (*GsSrvBrowserCallback)(GsSrvBrowser *, s32, void *, void *);

struct GsSrvBrowser {
    /* 0x000 */ GsSrvQueryEngine engine;
    /* 0x04c */ GsSrvList list;
    /* 0x620 */ s32 disconnectOnComplete;
    /* 0x624 */ s32 noAutoQuery;
    /* 0x628 */ u32 waitServerIp;
    /* 0x62c */ u16 waitServerPort;
    /* 0x62e */ u8 pad_62e[2];
    /* 0x630 */ GsSrvBrowserCallback browserCallback;
    /* 0x634 */ void *userData;
};

#endif
