#ifndef NET_GSPERSIST_H
#define NET_GSPERSIST_H

#include "types.h"

// GameSpy persistent-storage client (ov065, GsPersist_*): pending request entries of sGsPersistRequests, their
// completion callbacks (one per request type) and the decoded "Connection Lost" message; used by
// unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and unk_ov065_02283720.cpp.

// Request type 0: "\pauthr\" reply (localId, profileId, authenticated, errmsg, userData).
typedef void (*GsPersistAuthCallback)(s32, s32, s32, void *, s32);
// Request type 1: "\getpdr\" reply (localId, profileId, type, index, success, modified, data, len, userData).
typedef void (*GsPersistDataCallback)(s32, s32, s32, s32, s32, s32, void *, s32, s32);
// Request type 2: "\setpdr\" reply (localId, profileId, type, index, success, modified, userData).
typedef void (*GsPersistSaveCallback)(s32, s32, s32, s32, s32, s32, s32);
// Request type 3: "\getpidr\" reply (localId, profileId, success, userData).
typedef void (*GsPersistProfileCallback)(s32, s32, s32, s32);

struct GsPersistRequest {
    /* 0x00 */ u32 requestType;
    /* 0x04 */ s32 localId;
    /* 0x08 */ s32 profileId;
    /* 0x0c */ s32 persistType;
    /* 0x10 */ s32 dataIndex;
    /* 0x14 */ s32 userData;
    /* 0x18 */ void *callback;
};

// 16-byte copy of the XOR-encoded "Connection Lost" text (data_ov065_0228df7c), decoded in place by
// GsPersist_FailAllRequests and passed as the error message.
struct GsPersistErrorMsg {
    /* 0x00 */ u8 b[16];
};

#endif
