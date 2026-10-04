#ifndef NET_GPERSIST_H
#define NET_GPERSIST_H

#include "types.h"

// GameSpy persistent storage (gstats SDK gpersist.h callback types, gstats.c serverreq_t): pending request entries of
// serverreqs, their completion callbacks (one per reqtype) and the decoded "Connection Lost" message; used by
// unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and unk_ov065_02283720.cpp.

// Request type 0: "\pauthr\" reply (localid, profileid, authenticated, errmsg, instance).
typedef void (*PersAuthCallbackFn)(s32, s32, s32, void *, s32);
// Request type 1: "\getpdr\" reply (localid, profileid, type, index, success, modified, data, len, instance).
typedef void (*PersDataCallbackFn)(s32, s32, s32, s32, s32, s32, void *, s32, s32);
// Request type 2: "\setpdr\" reply (localid, profileid, type, index, success, modified, instance).
typedef void (*PersDataSaveCallbackFn)(s32, s32, s32, s32, s32, s32, s32);
// Request type 3: "\getpidr\" reply (localid, profileid, success, instance).
typedef void (*ProfileCallbackFn)(s32, s32, s32, s32);

struct serverreq_t {
    /* 0x00 */ u32 reqtype;
    /* 0x04 */ s32 localid;
    /* 0x08 */ s32 profileid;
    /* 0x0c */ s32 pdtype;
    /* 0x10 */ s32 pdindex;
    /* 0x14 */ s32 instance;
    /* 0x18 */ void *callback;
};

// 16-byte copy of the XOR-encoded "Connection Lost" text (data_ov065_0228df7c), decoded in place by
// ClosePendingCallbacks and passed as the error message.
struct GsPersistErrorMsg {
    /* 0x00 */ u8 b[16];
};

#endif
