#ifndef NET_DWCHTTP_H
#define NET_DWCHTTP_H

#include "types.h"
#include "net/IpSocket.h"
#include "net/SslConnection.h"

// DWC HTTP client (DwcHttp_*, src/ov065/unk_ov065_0226de0c.cpp): request parameters, the 0x1a60-byte work it runs on
// (its own thread, stack at the end) and the key/value field lists of parsed responses / NAS forms.
// Also used by NasAuth (src/ov065/unk_ov065_0226d128.cpp) and NetCheck (src/ov065/unk_ov065_0226ec94.cpp).

// Allocator callbacks shared by DwcHttp, NasAuth and NetCheck: (tag string, size) / (tag string, ptr, size).
typedef void *(*DwcAllocFunc)(const char *, u32);
typedef void (*DwcFreeFunc)(const char *, void *, u32);

struct DwcHttpBuffer {
    /* 0x0 */ u8 *base;
    /* 0x4 */ u8 *cur;
    /* 0x8 */ u8 *limit;
    /* 0xc */ s32 capacity;
};

// DwcHttp_Init parameters (copied to DwcHttp+0x04); sNasHttpParams, sNetCheckHttpParams.
struct DwcHttpParams {
    /* 0x00 */ char *url;
    /* 0x04 */ s32 method; // 0 = POST (form), 1 = GET
    /* 0x08 */ u8 *userRecvBuffer;
    /* 0x0c */ s32 rxBufSize;
    /* 0x10 */ DwcAllocFunc allocFunc;
    /* 0x14 */ DwcFreeFunc freeFunc;
    /* 0x18 */ s32 useTestServer;
    /* 0x1c */ s32 timeoutMs;
};

struct DwcHttp {
    /* 0x000 */ u8 initFlag;
    /* 0x001 */ u8 unk_01[3];
    /* 0x004 */ char *url;
    /* 0x008 */ s32 method;
    /* 0x00c */ u8 *userRecvBuffer;
    /* 0x010 */ s32 rxBufSize;
    /* 0x014 */ DwcAllocFunc allocFunc;
    /* 0x018 */ DwcFreeFunc freeFunc;
    /* 0x01c */ s32 useTestServer;
    /* 0x020 */ s32 timeoutMs;
    /* 0x024 */ s32 result; // 8 = response complete
    /* 0x028 */ char urlBuffer[0xa8 - 0x28];
    /* 0x0a8 */ char *hostName;
    /* 0x0ac */ char *path;
    /* 0x0b0 */ s32 isHttps;
    /* 0x0b4 */ IpSocket ipSocket;
    /* 0x118 */ SslConnection sslCtx;
    /* 0x91c */ void *lowRecvBuf;
    /* 0x920 */ void *lowSendBuf;
    /* 0x924 */ s32 numFormParams;
    /* 0x928 */ DwcHttpBuffer requestBuffer;
    /* 0x938 */ DwcHttpBuffer responseBuffer;
    /* 0x948 */ u8 responseMutex[0x960 - 0x948];
    /* 0x960 */ s32 contentLength;
    /* 0x964 */ char *bodyStart;
    /* 0x968 */ u8 thread[0x9d4 - 0x968];
    /* 0x9d4 */ s32 threadId;
    /* 0x9d8 */ u8 unk_9d8[0xa28 - 0x9d8];
    /* 0xa28 */ u8 abortMutex[0xa40 - 0xa28];
    /* 0xa40 */ s32 isAbortRequested;
    /* 0xa44 */ u8 unk_a44[0x1a60 - 0xa44];
};

struct DwcHttpField {
    /* 0x0 */ const char *key;
    /* 0x4 */ char *value;
};

struct DwcHttpFieldList {
    /* 0x0 */ DwcHttpField *entries;
    /* 0x4 */ s32 capacity;
    /* 0x8 */ s32 count;
};

#endif
