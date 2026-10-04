#ifndef NET_GSHTTPCONNECTION_H
#define NET_GSHTTPCONNECTION_H

#include "types.h"
#include "net/GsHttpBuffer.h"

// GameSpy HTTP connection (GsHttp_*) with its post object and post part records
// (src/ov065/unk_ov065_0227931c.cpp, src/ov065/unk_ov065_0227a284.cpp, src/ov065/unk_ov065_022789fc.cpp).

struct GsArray;
struct GsHttpConnection;

typedef void (*GsHttpPostCallback)(u32, u32, u32, u32, u32, u32);
typedef void (*GsHttpProgressCallback)(u32, u32, u32, u32, u32, u32, u32);
typedef s32 (*GsHttpCompletedCallback)(u32, u32, u32, u32, u32);
typedef s32 (*GsHttpEncryptStartFn)(GsHttpConnection *, void *);
typedef s32 (*GsHttpEncryptFn)(GsHttpConnection *, void *, char *, s32 *, char *, s32 *);
typedef s32 (*GsHttpDecryptFn)(GsHttpConnection *, void *, u8 *, s32 *, u8 *, s32 *);
typedef void (*GsHttpEncryptCleanupFn)(GsHttpConnection *, void *);

// one part of a post (element of GsHttpPost::parts, 0x18 bytes); the rest depends on the type
struct GsHttpPostPart {
    /* 0x00 */ s32 type; // 0 string, 1 file on disk, 2 memory buffer
    /* 0x04 */ char *partName;
    union {
        struct {
            /* 0x08 */ char *value;
            /* 0x0c */ s32 length;
            /* 0x10 */ s32 needsEscaping;
            /* 0x14 */ s32 numEscapedChars;
        } string;
        struct {
            /* 0x08 */ char *fileName;
            /* 0x0c */ char *reportName;
            /* 0x10 */ char *contentType;
        } file;
        struct {
            /* 0x08 */ char *data;
            /* 0x0c */ s32 length;
            /* 0x10 */ char *reportName;
            /* 0x14 */ char *contentType;
        } buffer;
    };
};

// GsHttpPost_New (0x14 bytes)
struct GsHttpPost {
    /* 0x00 */ GsArray *parts;
    /* 0x04 */ GsHttpPostCallback postCallback;
    /* 0x08 */ u32 postCallbackParam;
    /* 0x0c */ s32 isMultipart;
    /* 0x10 */ s32 autoFree;
};

struct GsHttpPostPartState {
    /* 0x0 */ GsHttpPostPart *part;
    /* 0x4 */ s32 pos;
    /* 0x8 */ u32 file;
    /* 0xc */ s32 fileLength;
};

// view of GsHttpConnection::postParts / postPartIndex
struct Unk_ov065_0227a3f4_List {
    /* 0x0 */ void *postParts;
    /* 0x4 */ s32 postPartIndex;
};

struct GsHttpConnection {
    /* 0x000 */ s32 inUse;
    /* 0x004 */ s32 requestId;
    /* 0x008 */ s32 serial;
    /* 0x00c */ s32 requestType;
    /* 0x010 */ s32 state;
    /* 0x014 */ char *url;
    /* 0x018 */ char *serverHost;
    /* 0x01c */ s32 serverIp;
    /* 0x020 */ u16 serverPort;
    /* 0x024 */ char *requestPath;
    /* 0x028 */ char *extraHeaders;
    /* 0x02c */ s32 unk_2c;
    /* 0x030 */ s32 isBlocking;
    /* 0x034 */ s32 keepAlive;
    /* 0x038 */ s32 result;
    /* 0x03c */ GsHttpProgressCallback progressCallback;
    /* 0x040 */ GsHttpCompletedCallback completedCallback;
    /* 0x044 */ u32 callbackParam;
    /* 0x048 */ s32 socketHandle;
    /* 0x04c */ s32 socketError;
    /* 0x050 */ GsHttpBuffer sendBuf;
    /* 0x074 */ GsHttpBuffer recvBuf;
    /* 0x098 */ GsHttpBuffer rawRecvBuf;
    /* 0x0bc */ GsHttpBuffer bodyBuf;
    /* 0x0e0 */ s32 isUserBodyBuf;
    /* 0x0e4 */ s32 httpMajorVersion;
    /* 0x0e8 */ s32 httpMinorVersion;
    /* 0x0ec */ s32 statusCode;
    /* 0x0f0 */ s32 statusTextIndex;
    /* 0x0f4 */ s32 headersIndex;
    /* 0x0f8 */ s32 headersEnd;
    /* 0x0fc */ s32 completed;
    /* 0x100 */ s32 bodyBytesReceived;
    /* 0x104 */ s32 contentLength;
    /* 0x108 */ char *redirectUrl;
    /* 0x10c */ s32 redirectCount;
    /* 0x110 */ s32 isChunked;
    /* 0x114 */ char chunkHeader[12];
    /* 0x120 */ s32 chunkHeaderLength;
    /* 0x124 */ s32 chunkBytesLeft;
    /* 0x128 */ s32 chunkState;
    /* 0x12c */ s32 isProcessing;
    /* 0x130 */ s32 connectionClosed;
    /* 0x134 */ u32 isThrottled;
    /* 0x138 */ u32 lastThrottleRecvTime;
    /* 0x13c */ GsHttpPost *post;
    /* 0x140 */ GsArray *postParts;
    /* 0x144 */ s32 postPartIndex;
    /* 0x148 */ s32 postBytesSent;
    /* 0x14c */ s32 postTotalBytes;
    /* 0x150 */ GsHttpPostCallback postCallback;
    /* 0x154 */ u32 postCallbackParam;
    /* 0x158 */ u32 recvTimeSliceMs;
    /* 0x15c */ char *proxyHost;
    /* 0x160 */ u16 proxyPort;
    /* 0x164 */ u32 encryptor;
    /* 0x168 */ u32 encryptEnabled;
    /* 0x16c */ u32 encryptInitialized;
    /* 0x170 */ u32 encryptSessionReady;
    /* 0x174 */ GsHttpEncryptStartFn encryptStartFn;
    /* 0x178 */ GsHttpEncryptCleanupFn encryptCleanupFn;
    /* 0x17c */ GsHttpEncryptFn encryptFn;
    /* 0x180 */ GsHttpDecryptFn decryptFn;
};

#endif
