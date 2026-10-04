#ifndef NET_UNK_OV065_02279C7C_H
#define NET_UNK_OV065_02279C7C_H

#include "types.h"

// GameSpy HTTP connection (GsHttp_*) with its post request / post part records
// (src/ov065/unk_ov065_0227931c.cpp namespaces Nc and Nm, src/ov065/unk_ov065_0227a284.cpp namespace Nm).

struct Unk_ov065_0227a4e8_Part {
    /* 0x00 */ s32 type;
    /* 0x04 */ char *partName;
    /* 0x08 */ char *data;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_ov065_0227a4e8_Slot {
    /* 0x0 */ Unk_ov065_0227a4e8_Part *part;
    /* 0x4 */ s32 pos;
    /* 0x8 */ u32 file;
    /* 0xc */ s32 fileLength;
};

// view of Unk_ov065_02279c7c::postParts / postPartIndex
struct Unk_ov065_0227a3f4_List {
    /* 0x0 */ void *postParts;
    /* 0x4 */ s32 postPartIndex;
};

struct Unk_ov065_0227a4e8_Req {
    /* 0x0 */ s32 unk_00;
    /* 0x4 */ s32 unk_04;
    /* 0x8 */ s32 unk_08;
    /* 0xc */ s32 isMultipart;
};

struct Unk_ov065_02279c7c;

typedef void (*Unk_ov065_02279588_Cb1)(u32, u32, u32, u32, u32, u32);
typedef void (*Unk_ov065_022795d4_Cb2)(u32, u32, u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_0227960c_Cb3)(u32, u32, u32, u32, u32);
typedef s32 (*Unk_ov065_022798f8_Cb4)(Unk_ov065_02279c7c *, void *, u8 *, s32 *, u8 *, s32 *);
typedef void (*Unk_ov065_02279a64_Cb5)(Unk_ov065_02279c7c *, void *);

struct Unk_ov065_02279c7c {
    /* 0x000 */ s32 inUse;
    /* 0x004 */ s32 requestId;
    /* 0x008 */ s32 serial;
    /* 0x00c */ s32 requestType;
    /* 0x010 */ s32 state;
    /* 0x014 */ void *url;
    /* 0x018 */ void *serverHost;
    /* 0x01c */ s32 serverIp;
    /* 0x020 */ u16 serverPort;
    /* 0x024 */ void *requestPath;
    /* 0x028 */ void *extraHeaders;
    /* 0x02c */ s32 unk_2c;
    /* 0x030 */ s32 isBlocking;
    /* 0x034 */ s32 keepAlive;
    /* 0x038 */ s32 result;
    /* 0x03c */ Unk_ov065_022795d4_Cb2 progressCallback;
    /* 0x040 */ Unk_ov065_0227960c_Cb3 completedCallback;
    /* 0x044 */ u32 callbackParam;
    /* 0x048 */ s32 socketHandle;
    /* 0x04c */ s32 socketError;
    /* 0x050 */ u32 sendBuf[3];
    /* 0x05c */ s32 sendBufLength;
    /* 0x060 */ s32 sendBufReadPos;
    /* 0x064 */ u32 unk_64[4];
    /* 0x074 */ u32 recvBuf;
    /* 0x078 */ u8 *recvBufData;
    /* 0x07c */ s32 recvBufCapacity;
    /* 0x080 */ s32 recvBufLength;
    /* 0x084 */ s32 recvBufReadPos;
    /* 0x088 */ s32 recvBufGrowBy;
    /* 0x08c */ u32 unk_8c[3];
    /* 0x098 */ u32 rawRecvBuf;
    /* 0x09c */ u8 *rawRecvBufData;
    /* 0x0a0 */ u32 unk_a0;
    /* 0x0a4 */ s32 rawRecvBufLength;
    /* 0x0a8 */ s32 rawRecvBufReadPos;
    /* 0x0ac */ u32 unk_ac[4];
    /* 0x0bc */ u32 bodyBuf;
    /* 0x0c0 */ u32 bodyBufData;
    /* 0x0c4 */ u32 unk_c4[5];
    /* 0x0d8 */ u32 bodyBufKeepData;
    /* 0x0dc */ u32 unk_dc;
    /* 0x0e0 */ s32 isUserBodyBuf;
    /* 0x0e4 */ s32 httpMajorVersion;
    /* 0x0e8 */ s32 httpMinorVersion;
    /* 0x0ec */ s32 statusCode;
    /* 0x0f0 */ s32 statusTextIndex;
    /* 0x0f4 */ s32 headersIndex;
    /* 0x0f8 */ s32 headersEnd;
    /* 0x0fc */ s32 completed;
    /* 0x100 */ u32 bodyBytesReceived;
    /* 0x104 */ u32 contentLength;
    /* 0x108 */ void *redirectUrl;
    /* 0x10c */ s32 redirectCount;
    /* 0x110 */ s32 isChunked;
    /* 0x114 */ u32 chunkHeader[6];
    /* 0x12c */ s32 isProcessing;
    /* 0x130 */ s32 connectionClosed;
    /* 0x134 */ u32 isThrottled;
    /* 0x138 */ u32 lastThrottleRecvTime;
    /* 0x13c */ Unk_ov065_0227a4e8_Req *post;
    /* 0x140 */ void *postParts;
    /* 0x144 */ s32 postPartIndex;
    /* 0x148 */ u32 postBytesSent;
    /* 0x14c */ u32 postTotalBytes;
    /* 0x150 */ Unk_ov065_02279588_Cb1 postCallback;
    /* 0x154 */ u32 postCallbackParam;
    /* 0x158 */ u32 recvTimeSliceMs;
    /* 0x15c */ void *proxyHost;
    /* 0x160 */ u16 proxyPort;
    /* 0x164 */ u32 encryptor;
    /* 0x168 */ u32 encryptEnabled;
    /* 0x16c */ u32 encryptInitialized;
    /* 0x170 */ u32 encryptSessionReady;
    /* 0x174 */ u32 encryptStartFn;
    /* 0x178 */ Unk_ov065_02279a64_Cb5 encryptCleanupFn;
    /* 0x17c */ u32 encryptFn;
    /* 0x180 */ Unk_ov065_022798f8_Cb4 decryptFn;
};

#endif
