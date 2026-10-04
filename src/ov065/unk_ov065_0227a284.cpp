// mwcc-flags: -O4,p -str reuse
#include "types.h"

// ov065 TU38: ghttp (2): request post / process / response handlers (0x0227a284..0x0227bd20)


extern "C" {
char data_ov065_0228ca58[4] = "%00";
volatile s32 data_ov065_022910e4;
volatile s32 data_ov065_022910e0;
volatile s32 data_ov065_022910dc;
volatile s32 data_ov065_022910e8;
}

namespace Nm {
struct Unk_ov065_0227a4e8_Part {
    s32 type;
    char *partName;
    char *data;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227a4e8_Slot {
    Unk_ov065_0227a4e8_Part *part;
    s32 pos;
    u32 file;
    s32 fileLength;
};

struct Unk_ov065_0227a3f4_List {
    void *postParts;
    s32 postPartIndex;
};

struct Unk_ov065_0227a4e8_Req {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 isMultipart;
};

struct Unk_ov065_02279c7c {
    s32 inUse;
    s32 requestId;
    s32 serial;
    s32 requestType;
    s32 state;
    void *url;
    void *serverHost;
    s32 serverIp;
    u16 serverPort;
    void *requestPath;
    void *extraHeaders;
    s32 unk_2c;
    s32 isBlocking;
    s32 keepAlive;
    s32 result;
    void *progressCallback;
    void *completedCallback;
    u32 callbackParam;
    s32 socketHandle;
    s32 socketError;
    u32 sendBuf[3];
    s32 sendBufLength;
    s32 sendBufReadPos;
    u32 unk_64[4];
    u32 recvBuf;
    u8 *recvBufData;
    s32 recvBufCapacity;
    s32 recvBufLength;
    s32 recvBufReadPos;
    s32 recvBufGrowBy;
    u32 unk_8c[3];
    u32 rawRecvBuf;
    u8 *rawRecvBufData;
    u32 unk_a0;
    s32 rawRecvBufLength;
    s32 rawRecvBufReadPos;
    u32 unk_ac[4];
    u32 bodyBuf;
    u32 bodyBufData;
    u32 unk_c4[5];
    u32 bodyBufKeepData;
    u32 unk_dc;
    s32 isUserBodyBuf;
    s32 httpMajorVersion;
    s32 httpMinorVersion;
    s32 statusCode;
    s32 statusTextIndex;
    s32 headersIndex;
    s32 headersEnd;
    s32 completed;
    u32 bodyBytesReceived;
    u32 contentLength;
    void *redirectUrl;
    s32 redirectCount;
    s32 isChunked;
    u32 chunkHeader[6];
    s32 isProcessing;
    s32 connectionClosed;
    u32 isThrottled;
    u32 lastThrottleRecvTime;
    Unk_ov065_0227a4e8_Req *post;
    void *postParts;
    s32 postPartIndex;
    u32 postBytesSent;
};

extern "C" {
extern s32 sGsHttpStartupCount;
extern void *sGsHttpProxyHost;
extern u32 sGsHttpThrottleDelay;
extern s32 sGsHttpThrottleBytes;
extern char data_ov065_0228ca58[4];

s32 GsHttpPost_AddStringPart(void *, const char *, const char *);
s32 GsHttpPost_New();
void GsHttp_ForEachConnection(s32 (*)(Unk_ov065_02279c7c *));
char *GsUtil_StrDup(const char *);
Unk_ov065_02279c7c *GsHttp_NewConnection();
BOOL GsHttp_FreeConnection(Unk_ov065_02279c7c *);
BOOL GsHttp_InitPostState(Unk_ov065_02279c7c *);
void GsUtil_Sleep(s32);
void GsHttp_StepHostLookup(Unk_ov065_02279c7c *);
void GsHttp_StepConnect(Unk_ov065_02279c7c *);
void GsHttp_StepEncryption(Unk_ov065_02279c7c *);
void GsHttp_StepSendRequest(Unk_ov065_02279c7c *);
void GsHttp_StepSendPost(Unk_ov065_02279c7c *);
void GsHttp_StepWaitReply(Unk_ov065_02279c7c *);
void GsHttp_StepRecvStatus(Unk_ov065_02279c7c *);
void GsHttp_StepRecvHeaders(Unk_ov065_02279c7c *);
void GsHttp_StepRecvBody(Unk_ov065_02279c7c *);
void GsHttp_ResetForRedirect(Unk_ov065_02279c7c *);
void GsHttp_CallCompletedCallback(Unk_ov065_02279c7c *);
void GsHttp_LeaveCritical();
void GsHttp_EnterCritical();
void GsHttp_FreeCritical();
void GsHttp_InitCritical();
void GsHttp_FreeAllConnections();
void GsUtil_Free(void *);
s32 GsArray_Count(void *);
Unk_ov065_0227a4e8_Slot *GsArray_At(void *, s32);
s32 GsHttp_FlushSendBuffer(Unk_ov065_02279c7c *);
void GsHttpBuf_Reset(void *);
s32 GsHttp_SendOrQueue(Unk_ov065_02279c7c *, const void *, s32);
s32 GsHttp_SocketSend(Unk_ov065_02279c7c *, const void *, s32);
BOOL GsHttpBuf_InitUser(Unk_ov065_02279c7c *, void *, void *, s32);
BOOL GsHttpBuf_Init(Unk_ov065_02279c7c *, void *, s32, s32);
void GsHttpBuf_AppendChar(void *, s32);
BOOL GsHttpBuf_Append(void *, const void *, s32);
s32 OS_SPrintf(char *, const char *, ...);
s32 STD_GetStringLength(const char *);
s32 func_0212a120(const char *, s32);
s32 func_02128030(void *, s32, s32, u32);

s32 GsHttp_Step(Unk_ov065_02279c7c *);
void GsHttp_SetResultFromStatus(Unk_ov065_02279c7c *);
s32 GsHttp_SendPostPart(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *, s32);
s32 GsHttp_SendPostPartBuffer(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 GsHttp_SendPostPartFile(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
s32 GsHttp_SendPostPartString(Unk_ov065_0227a4e8_Slot *, Unk_ov065_02279c7c *);
void GsHttp_Startup();
}
extern "C" {
s32 GsHttp_Step(Unk_ov065_02279c7c *c);
void GsHttp_SetResultFromStatus(Unk_ov065_02279c7c *c);
s32 GsHttp_SendPostData(Unk_ov065_02279c7c *c);
s32 GsHttp_SendPostPart(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c, s32 first);
s32 GsHttp_SendPostPartBuffer(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c);
s32 GsHttp_SendPostPartFile(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c);
s32 GsHttp_SendPostPartString(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c);
}
}

namespace Na {
typedef void (*Unk_ov065_02278740_Dtor)(void *);

struct Unk_ov065_022786bc_Vec {
    s32 count;
    s32 capacity;
    s32 elemSize;
    s32 growBy;
    Unk_ov065_02278740_Dtor freeElemFn;
    u8 *elems;
};

struct Unk_ov065_0227a884_Rec {
    s32 type;
    char *partName;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
};

struct Unk_ov065_0227a8ec_Item {
    Unk_ov065_0227a884_Rec *part;
    s32 pos;
    s32 file;
    s32 fileLength;

};

struct Unk_ov065_0227acfc_Task {
    Unk_ov065_022786bc_Vec *parts;
    s32 postCallback;
    s32 postCallbackParam;
    s32 isMultipart;
    s32 autoFree;
};

struct Unk_ov065_0227a884_Obj {
    u8 unk_00[0xc];
    s32 requestType;
    s32 state;
    u8 unk_14[4];
    char *serverHost;
    u8 unk_1c[4];
    u16 serverPort;
    u8 unk_22[0x38 - 0x22];
    s32 result;
    u8 unk_3c[0x48 - 0x3c];
    s32 socketHandle;
    s32 socketError;
    u8 unk_50[0x74 - 0x50];
    s32 recvBuf;
    u8 *recvBufData;
    u8 unk_7c[4];
    s32 recvBufLength;
    s32 recvBufReadPos;
    u8 unk_88[0xec - 0x88];
    s32 statusCode;
    u8 unk_f0[4];
    s32 headersIndex;
    s32 headersEnd;
    s32 completed;
    s32 bodyBytesReceived;
    s32 contentLength;
    char *redirectUrl;
    s32 redirectCount;
    s32 isChunked;
    u8 chunkHeader;
    u8 unk_115[0x120 - 0x115];
    s32 chunkHeaderLength;
    s32 chunkBytesLeft;
    s32 chunkState;
    u8 unk_12c[0x13c - 0x12c];
    Unk_ov065_0227acfc_Task *post;
    Unk_ov065_022786bc_Vec *postParts;
    s32 postPartIndex;
    s32 postBytesSent;
    s32 postTotalBytes;
    s32 postCallback;
    s32 postCallbackParam;
    u32 recvTimeSliceMs;
};

struct Unk_ov065_0227ae94_Blk {
    char b[11];
};

extern "C" {
extern volatile s32 data_ov065_022910e8;
extern volatile s32 data_ov065_022910e4;
extern volatile s32 data_ov065_022910e0;
extern volatile s32 data_ov065_022910dc;
extern u16 data_0213a510[];

s32 GsArray_Count(Unk_ov065_022786bc_Vec *);
void *GsArray_At(Unk_ov065_022786bc_Vec *, s32);
void GsArray_Free(Unk_ov065_022786bc_Vec *);
void GsArray_Append(Unk_ov065_022786bc_Vec *, void *);
Unk_ov065_022786bc_Vec *GsArray_New(s32, s32, Unk_ov065_02278740_Dtor);
void *GsUtil_Alloc(s32);
void GsUtil_Free(void *);
char *GsUtil_StrDup(const char *);
s32 GsUtil_GetTimeMs(void);
s32 GsHttp_SocketRecv(void *, u8 *, s32 *);
s32 GsHttpBuf_Append(void *, u8 *, s32);
void GsHttpBuf_Reset(void *);
void GsHttp_CallProgressCallback(void *, u32, u32);
s32 GsSock_GetLastError(s32);
s32 GsHttp_ProcessBodyData(void *, u8 *, s32);
u32 STD_GetStringLength(const char *);
void func_02128250(s32);
s32 func_02128318(s32, s32, s32);
s32 func_02128650(s32);
void rewind(s32);
void memmove(void *, void *, s32);
char *func_02129f1c(char *, char *);
u32 func_0212a060(char *, char *);
char *func_0212a120(char *, s32);
s32 strncmp(char *, char *, s32);
s32 func_0212b770(char *);
s32 OS_SPrintf(char *, char *, ...);

s32 GsHttp_GetPostLength(Unk_ov065_0227a884_Obj *self);
void GsHttp_ClosePostPart(Unk_ov065_0227a8ec_Item *it);
s32 GsHttp_OpenPostPart(Unk_ov065_0227a8ec_Item *it);
s32 GsHttp_GetMultipartLength(Unk_ov065_0227a884_Obj *self);
s32 GsHttp_GetUrlEncodedLength(Unk_ov065_0227a884_Obj *self);
void GsHttpPost_Free(Unk_ov065_0227acfc_Task *t);
void GsHttpPost_FreePart(Unk_ov065_0227a884_Rec *r);
}


extern "C" {
struct Unk_ov065_0227ac34_Item {
    s32 type;
    char *partName;
    char *value;
    s32 length;
    s32 needsEscaping;
    s32 numEscapedChars;
};
}

extern "C" {
#pragma enumsalwaysint off
enum Unk_ov065_0227acfc_Z { Unk_ov065_0227acfc_Z_0 = 0, Unk_ov065_0227acfc_Z_FF = 0xff };
#pragma enumsalwaysint reset
}
extern "C" {
void GsHttp_FreePostState(Unk_ov065_0227a884_Obj *self);
s32 GsHttp_InitPostState(Unk_ov065_0227a884_Obj *self);
void GsHttp_ClosePostPart(Unk_ov065_0227a8ec_Item *it);
s32 GsHttp_OpenPostPart(Unk_ov065_0227a8ec_Item *it);
s32 GsHttp_GetPostLength(Unk_ov065_0227a884_Obj *self);
s32 GsHttp_GetMultipartLength(Unk_ov065_0227a884_Obj *self);
s32 GsHttp_GetUrlEncodedLength(Unk_ov065_0227a884_Obj *self);
char *GsHttp_GetContentType(Unk_ov065_0227a884_Obj *self);
s32 GsHttpPost_AddStringPart(Unk_ov065_0227acfc_Task *self, char *a, char *b);
void GsHttpPost_Free(Unk_ov065_0227acfc_Task *t);
s32 GsHttpPost_GetAutoFree(Unk_ov065_0227acfc_Task *t);
Unk_ov065_0227acfc_Task *GsHttpPost_New(void);
void GsHttpPost_FreePart(Unk_ov065_0227a884_Rec *r);
void GsHttp_StepRecvBody(Unk_ov065_0227a884_Obj *self);
void GsHttp_StepRecvHeaders(Unk_ov065_0227a884_Obj *self);
}
}

namespace Nb {
struct Unk_ov065_0227b2a8_Obj;

struct Unk_ov065_0227b2a8_Buf {
    Unk_ov065_0227b2a8_Obj *unk_00;
    char *data;
    s32 unk_08;
    s32 length;
    s32 readPos;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
};

struct Unk_ov065_0227b2a8_Obj {
    u8 pad_00[0x0c];
    s32 requestType;
    s32 state;
    char *url;
    char *serverHost;
    s32 serverIp;
    u16 serverPort;
    char *requestPath;
    char *extraHeaders;
    u8 pad_2c[8];
    s32 keepAlive;
    s32 result;
    u8 pad_3c[0x0c];
    s32 socketHandle;
    s32 socketError;
    Unk_ov065_0227b2a8_Buf sendBuf;
    Unk_ov065_0227b2a8_Buf recvBuf;
    Unk_ov065_0227b2a8_Buf unk_98;
    Unk_ov065_0227b2a8_Buf bodyBuf;
    u8 pad_e0[4];
    s32 httpMajorVersion;
    s32 httpMinorVersion;
    s32 statusCode;
    s32 statusTextIndex;
    u8 pad_f4[4];
    s32 headersEnd;
    s32 completed;
    s32 bodyBytesReceived;
    s32 contentLength;
    u8 pad_108[8];
    s32 isChunked;
    char chunkHeader[12];
    s32 chunkHeaderLength;
    s32 chunkBytesLeft;
    s32 chunkState;
    u8 pad_12c[4];
    s32 connectionClosed;
    s32 isThrottled;
    u8 pad_138[4];
    s32 post;
    u8 pad_140[8];
    s32 postBytesSent;
    s32 postTotalBytes;
    u8 pad_150[12];
    char *proxyHost;
    u16 proxyPort;
    s32 encryptor;
    s32 encryptEnabled;
    s32 encryptInitialized;
    s32 encryptSessionReady;
    s32 (*unk_174)(Unk_ov065_0227b2a8_Obj *, void *);
};

struct Unk_ov065_0227b9c4_Addr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_02261408_Hostent {
    u8 pad_00[0x0c];
    u32 **addrList;
};

extern "C" {
extern s32 sGsHttpThrottleBytes;
extern char *sGsHttpProxyHost;
extern u16 sGsHttpProxyPort;
extern u16 data_0213a510[];

char *func_0212a120(const char *, s32);
void memcpy(void *, const void *, s32);
s32 func_02128ca4(const char *, const char *, ...);
char *func_02129f1c(const char *hay, const char *needle);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);

s32 GsSock_GetLastError(s32);
s32 GsSock_InetAddr(char *);
s32 GsSock_Connect(s32 a, void *src, u32 len);
s32 GsSock_Socket(s32 a, s32 b, s32 c);
s32 GsSock_Select(s32 sock, s32 *rd, s32 *wr, s32 *ex);
s32 GsSock_SetRecvBufSize(s32 sock, s32 val);
s32 GsSock_SetBlocking(s32 sock, s32 flag);
s32 GsSock_StartupStub();
s32 GsHttp_FlushSendBuffer(Unk_ov065_0227b2a8_Obj *);
s32 GsHttpBuf_Reset(void *);
s32 GsHttpBuf_AppendInt(Unk_ov065_0227b2a8_Buf *, s32);
s32 GsHttpBuf_AppendChar(Unk_ov065_0227b2a8_Buf *, s32);
s32 GsHttpBuf_AppendHeader(Unk_ov065_0227b2a8_Buf *, const char *, const char *);
s32 GsHttpBuf_Append(void *, const char *, s32);
s32 GsHttp_CallPostCallback(Unk_ov065_0227b2a8_Obj *);
s32 GsHttp_CallProgressCallback(Unk_ov065_0227b2a8_Obj *, s32, s32);
s32 GsHttp_SocketRecv(Unk_ov065_0227b2a8_Obj *, char *, s32 *);
s32 GsHttp_SendPostData(Unk_ov065_0227b2a8_Obj *);
s32 GsHttp_FreePostState(Unk_ov065_0227b2a8_Obj *);
char *GsHttp_GetContentType(Unk_ov065_0227b2a8_Obj *);
Unk_ov065_02261408_Hostent *Sock_GetHostByName(char *);
s32 GsHttp_ParseUrl(Unk_ov065_0227b2a8_Obj *);

void GsHttp_AppendChunkSizeText(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 GsHttp_ParseChunkSize(Unk_ov065_0227b2a8_Obj *self);
s32 GsHttp_DeliverBodyData(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 GsHttp_ParseStatusLine(Unk_ov065_0227b2a8_Obj *self);
}

#define HTONS(x) ((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00))

static inline s32 Unk_ov065_0227b5d4_Chk(char *s, s32 i) {
    BOOL bad = TRUE;
    s32 v;
    s32 ch = s[i];
    if (ch >= 0 && ch < 0x80) {
        bad = FALSE;
    }
    if (bad) {
        v = 0;
    } else {
        v = data_0213a510[ch] & 0x100;
    }
    return v;
}
extern "C" {
s32 GsHttp_ProcessBodyData(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
void GsHttp_AppendChunkSizeText(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
s32 GsHttp_ParseChunkSize(Unk_ov065_0227b2a8_Obj *self);
s32 GsHttp_DeliverBodyData(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n);
void GsHttp_StepRecvStatus(Unk_ov065_0227b2a8_Obj *self);
s32 GsHttp_ParseStatusLine(Unk_ov065_0227b2a8_Obj *self);
void GsHttp_StepWaitReply(Unk_ov065_0227b2a8_Obj *self);
void GsHttp_StepSendPost(Unk_ov065_0227b2a8_Obj *self);
void GsHttp_StepSendRequest(Unk_ov065_0227b2a8_Obj *self);
void GsHttp_StepEncryption(Unk_ov065_0227b2a8_Obj *self);
void GsHttp_StepConnect(Unk_ov065_0227b2a8_Obj *self);
void GsHttp_StepHostLookup(Unk_ov065_0227b2a8_Obj *self);
}
}

namespace Nh {
struct Unk_ov065_0227bd20_Ctx {
    u8 pad_000[0x100];
    s32 infoCaching;
    u8 pad_104[4];
    s32 simulation;
    u8 pad_10c[0x198 - 0x10c];
    s32 sessKey;
    u8 pad_19c[0x1d8 - 0x19c];
    s32 connectState;
    u8 pad_1dc[0x1f4 - 0x1dc];
    char outputBuffer[0x14];
    s32 unk_208;
    s32 unk_20c;
    s32 unk_210;
    s32 lastStatus;
    char lastStatusString[0x100];
    char lastLocationString[0x100];
    u8 pad_418[0x430 - 0x418];
    s32 numBuddies;
};

struct Unk_ov065_0227bd20_Handle {
    Unk_ov065_0227bd20_Ctx *connection;
};

struct Unk_ov065_0227bbf4_Url {
    u8 pad_00[0x14];
    char *url;
    char *serverHost;
    u16 unk_1c;
    u16 unk_1e;
    u16 serverPort;
    u16 unk_22;
    char *requestPath;
};

struct Unk_ov065_0227c05c_Src {
    s32 unk_00;
    s32 status;
    char *statusString;
    char *locationString;
    s32 ip;
    s32 port;
};

struct Unk_ov065_0227c05c_Ent {
    s32 profileId;
    s32 unk_04;
    Unk_ov065_0227c05c_Src *buddyStatus;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_0227c05c_Out {
    s32 profileId;
    s32 status;
    char statusString[0x100];
    char locationString[0x100];
    s32 ip;
    s32 port;
};

struct Unk_ov065_0227c400_Buf {
    u32 v[0x81];
};

typedef void (*Unk_ov065_0227c400_Cb)(void *, void *, void *);


extern "C" {
s32 strcmp(const char *, const char *);
s32 strncmp(const char *, const char *, s32);
s32 strspn(const char *, const char *);
char *func_0212a120(const char *, s32);
s32 func_0212b770(const char *);
void *func_0212899c(void *, s32, s32);
char *GsUtil_StrDup(const char *);
void GsGp_SetErrorString(void *, const char *);
void GsUtil_StrCopyN(char *, const char *, s32);
s32 GsGp_SendBuddyMessageEx(void *, s32, s32, s32);
s32 GsGp_SendDeleteBuddy(void *, s32);
s32 GsGp_AuthorizeBuddy(void *, s32);
s32 GsGp_SetInfoString(void *, s32, s32);
s32 GsGp_RequestProfileInfo(void *, s32, s32, s32, s32, s32);
s32 GsGpSearch_ProfileSearch(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 GsGpBuf_AppendString(void *, char *, const char *);
s32 GsGpBuf_AppendInt(void *, char *, s32);
s32 GsGpProfile_Find(void *, s32, void *);
s32 GsGpProfile_FindByBuddyIndex(void *, s32);
s32 GsGpProfile_IsUnused(void *);
s32 GsGpProfile_Remove(void *, void *);
void GsUtil_Free(void *);

}

extern "C" {
struct Unk_ov065_0227c4b0_Args {
    s32 v[4];
};
}
extern "C" {
BOOL GsHttp_ParseUrl(Unk_ov065_0227bbf4_Url *u);
}
}

namespace Nh {
extern "C" {
BOOL GsHttp_ParseUrl(Unk_ov065_0227bbf4_Url *u) {
    char *p;
    char *e;
    BOOL https;
    char saved;
    s32 n;
    char *q;
    if (u == NULL) {
        return FALSE;
    }
    p = u->url;
    if (p == NULL) {
        return FALSE;
    }
    if (strncmp(p, "http://", 7) == 0) {
        https = FALSE;
        p += 7;
    } else if (strncmp(p, "https://", 8) == 0) {
        https = TRUE;
        p += 8;
    } else {
        return FALSE;
    }
    n = strspn(p, ":/");
    e = p + n;
    saved = p[n];
    p[n] = 0;
    u->serverHost = GsUtil_StrDup(p);
    if (u->serverHost == NULL) {
        return FALSE;
    }
    *e = saved;
    p += n;
    if (*p == ':') {
        p++;
        u->serverPort = func_0212b770(p);
        if (u->serverPort == 0) {
            return FALSE;
        }
        do {
            p++;
        } while (*p != 0 && *p != '/');
    } else if (https) {
        u->serverPort = 0x1bb;
    } else {
        u->serverPort = 0x50;
    }
    if (*p == 0) {
        p = "/";
    }
    u->requestPath = GsUtil_StrDup(p);
    p = u->requestPath;
    q = func_0212a120(p, 0x20);
    while (q != NULL) {
        *q = '+';
        p = u->requestPath;
        q = func_0212a120(p, 0x20);
    }
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepHostLookup(Unk_ov065_0227b2a8_Obj *self) {
    char *h;
    GsHttp_CallProgressCallback(self, 0, 0);
    GsSock_StartupStub();
    if (GsHttp_ParseUrl(self) == 0) {
        self->completed = 1;
        self->result = 3;
        return;
    }
    h = self->proxyHost;
    if (h == 0) {
        h = sGsHttpProxyHost;
        if (h == 0) {
            h = self->serverHost;
        }
    }
    self->serverIp = GsSock_InetAddr(h);
    if (self->serverIp == -1) {
        Unk_ov065_02261408_Hostent *he = Sock_GetHostByName(h);
        if (he == 0) {
            self->completed = 1;
            self->result = 4;
            return;
        }
        self->serverIp = **he->addrList;
    }
    self->state = 1;
    GsHttp_CallProgressCallback(self, 0, 0);
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepConnect(Unk_ov065_0227b2a8_Obj *self) {
    Unk_ov065_0227b9c4_Addr sa;
    s32 r;
    s32 w[2];
    if (self->socketHandle == -1) {
        self->socketHandle = GsSock_Socket(2, 1, 0);
        if (self->socketHandle == -1) {
            self->completed = 1;
            self->result = 5;
            self->socketError = GsSock_GetLastError(self->socketHandle);
            return;
        }
        if (GsSock_SetBlocking(self->socketHandle, 0) == 0) {
            self->completed = 1;
            self->result = 5;
            self->socketError = GsSock_GetLastError(self->socketHandle);
            return;
        }
        if (self->isThrottled != 0) {
            GsSock_SetRecvBufSize(self->socketHandle, sGsHttpThrottleBytes);
        }
        u32 *z = (u32 *)&sa;
        z[0] = 0;
        z[1] = 0;
        sa.family = 2;
        if (self->proxyHost != 0) {
            sa.port = HTONS(self->proxyPort);
        } else if (sGsHttpProxyHost != 0) {
            sa.port = HTONS(sGsHttpProxyPort);
        } else {
            sa.port = HTONS(self->serverPort);
        }
        sa.addr = self->serverIp;
        r = GsSock_Connect(self->socketHandle, &sa, 8);
        if (r == -1) {
            s32 e = GsSock_GetLastError(self->socketHandle);
            if (e != -6 && e != -26 && e != -76) {
                self->completed = 1;
                self->result = 6;
                self->socketError = e;
                return;
            }
        }
    }
    r = GsSock_Select(self->socketHandle, 0, &w[0], &w[1]) > 0 ? 1 : 0;
    if (r == -1 || w[1] != 0) {
        self->completed = 1;
        self->result = 6;
        if (r == 0) {
            self->socketError = GsSock_GetLastError(self->socketHandle);
        }
        return;
    }
    if (w[0] != 0) {
        self->state = 2;
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepEncryption(Unk_ov065_0227b2a8_Obj *self) {
    s32 len;
    char buf[0x400];
    if (self->encryptEnabled == 0) {
        if (strncmp(self->url, "https://", 8) == 0) {
            self->completed = 1;
            self->result = 0x11;
            return;
        }
        self->state = 3;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (self->encryptSessionReady != 0) {
        self->state = 3;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (self->encryptInitialized == 0) {
        if (self->unk_174(self, &self->encryptor) == 3) {
            return;
        }
    }
    if (self->sendBuf.readPos < self->sendBuf.length) {
        if (GsHttp_FlushSendBuffer(self) == 0) {
            return;
        }
        if (self->sendBuf.readPos < self->sendBuf.length) {
            return;
        }
        GsHttpBuf_Reset(&self->sendBuf);
    }
    len = 0x400;
    GsHttp_SocketRecv(self, buf, &len);
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepSendRequest(Unk_ov065_0227b2a8_Obj *self) {
    Unk_ov065_0227b2a8_Buf *b;
    char tmp[0x14];
    if (self->sendBuf.length == 0) {
        b = &self->sendBuf;
        const char *m;
        if (self->post != 0) {
            m = "POST ";
        } else if (self->requestType == 3) {
            m = "HEAD ";
        } else {
            m = "GET ";
        }
        GsHttpBuf_Append(b, m, 0);
        if (self->proxyHost != 0 || sGsHttpProxyHost != 0) {
            GsHttpBuf_Append(b, self->url, 0);
        } else {
            GsHttpBuf_Append(b, self->requestPath, 0);
        }
        GsHttpBuf_Append(b, " HTTP/1.1\r\n", 0);
        if (self->serverPort == 0x50) {
            GsHttpBuf_AppendHeader(b, "Host", self->serverHost);
        } else {
            GsHttpBuf_Append(b, "Host: ", 0);
            GsHttpBuf_Append(b, self->serverHost, 0);
            GsHttpBuf_AppendChar(b, 0x3a);
            GsHttpBuf_AppendInt(b, self->serverPort);
            GsHttpBuf_Append(b, "\r\n", 2);
        }
        if (self->extraHeaders == 0 || func_02129f1c(self->extraHeaders, "User-Agent") == 0) {
            GsHttpBuf_AppendHeader(b, "User-Agent", "GameSpyHTTP/1.0");
        }
        if (self->keepAlive != 0) {
            GsHttpBuf_AppendHeader(b, "Connection", "Keep-Alive");
        } else {
            GsHttpBuf_AppendHeader(b, "Connection", "close");
        }
        if (self->post != 0) {
            OS_SPrintf(tmp, "%d", self->postTotalBytes);
            GsHttpBuf_AppendHeader(b, "Content-Length", tmp);
            GsHttpBuf_AppendHeader(b, "Content-Type", GsHttp_GetContentType(self));
        }
        if (self->extraHeaders != 0) {
            GsHttpBuf_Append(b, self->extraHeaders, 0);
        }
        GsHttpBuf_Append(b, "\r\n", 2);
        if (b != &self->sendBuf) {
            GsHttpBuf_Append(&self->sendBuf, b->data, b->length);
        }
    }
    if (GsHttp_FlushSendBuffer(self) != 0 && self->sendBuf.readPos >= self->sendBuf.length) {
        GsHttpBuf_Reset(&self->sendBuf);
        if (self->post != 0) {
            self->state = 4;
        } else {
            self->state = 5;
        }
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepSendPost(Unk_ov065_0227b2a8_Obj *self) {
    s32 old = self->postBytesSent;
    s32 r = GsHttp_SendPostData(self);
    if (r == 0) {
        GsHttp_FreePostState(self);
        return;
    }
    if (old != self->postBytesSent) {
        GsHttp_CallPostCallback(self);
    }
    if (r == 1) {
        GsHttp_FreePostState(self);
        self->state = 5;
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepWaitReply(Unk_ov065_0227b2a8_Obj *self) {
    s32 v[2];
    if (GsSock_Select(self->socketHandle, v, 0, 0) == -1) {
        self->completed = 1;
        self->result = 5;
        self->socketError = GsSock_GetLastError(self->socketHandle);
        return;
    }
    if (v[0] != 0) {
        self->state = 6;
        GsHttp_CallProgressCallback(self, 0, 0);
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_ParseStatusLine(Unk_ov065_0227b2a8_Obj *self) {
    s32 a, b, c, d;
    s32 r;
    r = func_02128ca4(self->recvBuf.data, "HTTP/%d.%d %d%n", &a, &b, &c, &d);
    while (self->recvBuf.data[d] != 0 && Unk_ov065_0227b5d4_Chk(self->recvBuf.data, d) != 0) {
        d++;
    }
    if (r != 3 || a < 1 || c < 100 || c >= 0x258) {
        self->completed = 1;
        self->result = 7;
        return 0;
    }
    self->httpMajorVersion = a;
    self->httpMinorVersion = b;
    self->statusCode = c;
    self->statusTextIndex = d;
    return 1;
}
}
}

namespace Nb {
extern "C" {
void GsHttp_StepRecvStatus(Unk_ov065_0227b2a8_Obj *self) {
    s32 len;
    char buf[0x400];
    s32 r;
    len = 0x400;
    r = GsHttp_SocketRecv(self, buf, &len);
    if (r == 3) {
        return;
    }
    if (r == 1) {
        if (self->recvBuf.readPos == self->recvBuf.length) {
            return;
        }
    }
    if (r == 0) {
        if (GsHttpBuf_Append(&self->recvBuf, buf, len) == 0) {
            return;
        }
    }
    char *e = func_02129f1c(self->recvBuf.data, "\r\n");
    if (e != 0) {
        s32 d;
        *e = 0;
        d = e - self->recvBuf.data;
        self->headersEnd = d + 1;
        if (GsHttp_ParseStatusLine(self) == 0) {
            return;
        }
        self->recvBuf.readPos = d + 2;
        self->state = 7;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (r == 2) {
        self->completed = 1;
        self->result = 7;
        self->socketError = GsSock_GetLastError(self->socketHandle);
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_DeliverBodyData(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    char *a = 0;
    s32 b = 0;
    self->bodyBytesReceived += n;
    if (self->bodyBytesReceived == self->contentLength || self->connectionClosed != 0) {
        self->completed = 1;
    }
    if (self->requestType == 0) {
        if (GsHttpBuf_Append(&self->bodyBuf, p, n) == 0) {
            return 0;
        }
        a = self->bodyBuf.data;
        b = self->bodyBuf.length;
    } else if (self->requestType == 1) {
        if (n != 0) {
            self->completed = 1;
            self->result = 13;
            return 0;
        }
        a = p;
        b = n;
    } else if (self->requestType == 2) {
        a = p;
        b = n;
    }
    GsHttp_CallProgressCallback(self, (s32)a, b);
    return 1;
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_ParseChunkSize(Unk_ov065_0227b2a8_Obj *self) {
    s32 v;
    if (func_02128ca4(self->chunkHeader, "%x", &v) != 1) {
        return -1;
    }
    return v;
}
}
}

namespace Nb {
extern "C" {
void GsHttp_AppendChunkSizeText(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    if (n != 0 && self->chunkHeaderLength < 10) {
        s32 l = 10 - self->chunkHeaderLength;
        if (l >= n) {
            l = n;
        }
        memcpy(self->chunkHeader + self->chunkHeaderLength, p, l);
        self->chunkHeaderLength += l;
        self->chunkHeader[self->chunkHeaderLength] = 0;
    }
}
}
}

namespace Nb {
extern "C" {
s32 GsHttp_ProcessBodyData(Unk_ov065_0227b2a8_Obj *self, char *p, s32 n) {
    if (self->isChunked != 0) {
        while (n > 0) {
            if (self->chunkState == 0) {
                char *nl = func_0212a120(p, 10);
                if (nl != 0) {
                    GsHttp_AppendChunkSizeText(self, p, nl - p);
                    s32 k = nl + 1 - p;
                    n -= k;
                    p = nl + 1;
                    self->chunkBytesLeft = GsHttp_ParseChunkSize(self);
                    s32 t = self->chunkBytesLeft;
                    if (t == -1) {
                        self->completed = 1;
                        self->result = 7;
                        return 0;
                    }
                    if (t == 0) {
                        self->chunkState = 3;
                    } else {
                        self->chunkState = 1;
                    }
                } else {
                    GsHttp_AppendChunkSizeText(self, p, n);
                    return 1;
                }
            } else if (self->chunkState == 1) {
                s32 c = self->chunkBytesLeft;
                if (c >= n) {
                    c = n;
                }
                if (GsHttp_DeliverBodyData(self, p, c) == 0) {
                    return 0;
                }
                p += c;
                n -= c;
                self->chunkBytesLeft = self->chunkBytesLeft - c;
                if (self->chunkBytesLeft == 0) {
                    self->chunkState = 2;
                }
            } else if (self->chunkState == 2) {
                char *nl = func_0212a120(p, 10);
                if (nl == 0) {
                    return 1;
                }
                nl = nl + 1;
                n -= nl - p;
                p = nl;
                self->chunkHeader[0] = 0;
                self->chunkHeaderLength = 0;
                self->chunkBytesLeft = 0;
                self->chunkState = 0;
            } else if (self->chunkState == 3) {
                self->completed = 1;
                return 1;
            } else {
                return 0;
            }
        }
        return 1;
    }
    return GsHttp_DeliverBodyData(self, p, n);
}
}
}

namespace Na {
extern "C" {
void GsHttp_StepRecvHeaders(Unk_ov065_0227a884_Obj *self) {
    s32 len;
    u8 buf[0x1000];
    s32 r4;
    s32 off;
    u8 *p;
    u8 *rest;
    s32 rem;
    char *q;
    char *digits;
    s32 st;
    char *e;
    len = 0x1000;
    r4 = GsHttp_SocketRecv(self, buf, &len);
    if (r4 == 3) {
        return;
    }
    if (r4 == 1 && self->recvBufReadPos == self->recvBufLength) {
        return;
    }
    if (r4 == 0 && GsHttpBuf_Append(&self->recvBuf, buf, len) == 0) {
        return;
    }
    off = self->recvBufReadPos;
    p = self->recvBufData + off;
    self->headersIndex = off;
    q = func_02129f1c((char *)p, "\r\n\r\n");
    if (q == NULL) {
        q = func_02129f1c((char *)p, "\n\n");
    }
    if (q == NULL) {
        goto nomatch;
    }
    q[2] = 0;
    rest = (u8 *)q + 4;
    rem = self->recvBufLength - (rest - self->recvBufData);
    self->recvBufLength = (u8 *)(q + 2) - self->recvBufData;
    self->headersEnd = (u8 *)(q + 2) - self->recvBufData;
    self->recvBufReadPos = self->headersEnd;
    st = self->statusCode / 100;
    if (st == 1) {
        if (rem != 0) {
            memmove(self->recvBufData, rest, rem + 1);
            self->recvBufLength = rem;
            self->recvBufReadPos = 0;
        } else {
            GsHttpBuf_Reset(&self->recvBuf);
        }
        self->state = 6;
        GsHttp_CallProgressCallback(self, 0, 0);
        return;
    }
    if (st == 3) {
        if (self->redirectCount > 10) {
            self->completed = 1;
            self->result = 0xb;
            return;
        }
        q = func_02129f1c((char *)p, "Location:");
        if (q != NULL) {
            char *d = q + 9;
            s32 c;
            s32 v;
            goto t1;
        l1:
            d++;
        t1:
            c = *d;
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v != 0) {
                goto l1;
            }
            e = d;
            goto t2;
        l2:
            e++;
        t2:
            c = *e;
            if (c == 0) {
                goto d2;
            }
            if (c < 0 || c >= 0x80) {
                v = 0;
            } else {
                v = data_0213a510[c] & 0x100;
            }
            if (v == 0) {
                goto l2;
            }
        d2:
            *e = 0;
            if (*d == '/') {
                s32 l = STD_GetStringLength(self->serverHost);
                s32 m = STD_GetStringLength(d);
                self->redirectUrl = (char *)GsUtil_Alloc(l + 0xe + m);
                if (self->redirectUrl == NULL) {
                    self->completed = 1;
                    self->result = 1;
                }
                OS_SPrintf(self->redirectUrl, "http://%s:%d%s", self->serverHost, self->serverPort, d);
                return;
            }
            self->redirectUrl = GsUtil_StrDup(d);
            if (self->redirectUrl != NULL) {
                return;
            }
            self->completed = 1;
            self->result = 1;
            return;
        }
    }
    q = func_02129f1c((char *)p, "Content-Length:");
    if (q != NULL) {
        s32 n;
        char *d0;
        s32 dl;
        char *t;
        Unk_ov065_0227ae94_Blk hb = *(Unk_ov065_0227ae94_Blk *)"2147483647";
        char *hdr = hb.b;
        e = q + 0x10;
        t = e;
        n = STD_GetStringLength(hdr);
        while (t != NULL && *t != 0 && *t != 10 && *t != 13 && *t != 0x20) {
            t++;
        }
        dl = t - e;
        if (dl > n) {
            self->completed = 1;
            self->result = 0x10;
            return;
        }
        if (n == dl) {
            if (strncmp(e, hdr, dl) >= 0) {
                self->completed = 1;
                self->result = 0x10;
                return;
            }
        }
        self->contentLength = func_0212b770(e);
    }
    self->isChunked = func_02129f1c((char *)p, "Transfer-Encoding: chunked") != NULL ? 1 : 0;
    if (self->isChunked != 0) {
        self->chunkHeader = 0;
        self->chunkHeaderLength = 0;
        self->chunkBytesLeft = 0;
        self->chunkState = 0;
    }
    if ((u32)(self->requestType - 3) <= 1) {
        self->completed = 1;
        return;
    }
    self->state = 8;
    if (q != NULL) {
        if (self->contentLength == 0) {
            self->completed = 1;
            return;
        }
    }
    if (rem > 0) {
        GsHttp_ProcessBodyData(self, rest, rem);
    }
    return;
nomatch:
    if (r4 == 2) {
        self->completed = 1;
        self->result = 7;
        self->socketError = GsSock_GetLastError(self->socketHandle);
    }
}
}
}

namespace Na {
extern "C" {
// Not in the original binary: unreferenced weak function compiled right after GsHttp_StepRecvHeaders, so that the literal
// "2147483647" is pooled where the original has it; removed by the dead-stripping link (see notes.txt).
__declspec(weak) void Unk_ov065_0227ae94_pool_order(void) {
    STD_GetStringLength("2147483647");
}
}
}

namespace Na {
extern "C" {
void GsHttp_StepRecvBody(Unk_ov065_0227a884_Obj *self) {
    s32 len;
    u8 buf[0x2000];
    s32 start = GsUtil_GetTimeMs();
    u32 elapsed = 0;
    s32 r;
    while (self->completed == 0 && elapsed < self->recvTimeSliceMs) {
        len = 0x2000;
        r = GsHttp_SocketRecv(self, buf, &len);
        if (r == 3 || r == 1) {
            break;
        }
        if (r == 2) {
            self->completed = 1;
            if (self->contentLength > 0 && self->bodyBytesReceived < self->contentLength) {
                self->result = 0xf;
                return;
            }
            break;
        }
        if (GsHttp_ProcessBodyData(self, buf, len) == 0) {
            break;
        }
        elapsed = GsUtil_GetTimeMs() - start;
    }
}
}
}

namespace Na {
extern "C" {
void GsHttpPost_FreePart(Unk_ov065_0227a884_Rec *r) {
    GsUtil_Free(r->partName);
    if (r->type == 0) {
        GsUtil_Free(r->unk_08);
    } else if (r->type == 1) {
        GsUtil_Free(r->unk_08);
        GsUtil_Free(r->unk_0c);
        GsUtil_Free(r->unk_10);
    } else if (r->type == 2) {
        GsUtil_Free(r->unk_10);
        GsUtil_Free(r->unk_14);
    }
}
}
}

namespace Na {
extern "C" {
Unk_ov065_0227acfc_Task *GsHttpPost_New(void) {
    Unk_ov065_0227acfc_Task *t = (Unk_ov065_0227acfc_Task *)GsUtil_Alloc(0x14);
    u8 *p;
    u32 i;
    u8 *q;
    u8 *k;
    Unk_ov065_0227acfc_Z z;
    if (t == NULL) {
        return NULL;
    }
    q = (u8 *)t;
    k = (u8 *)0x14;
    z = Unk_ov065_0227acfc_Z_0;
    do {
        *q++ = z;
        k--;
    } while (k != NULL);
    t->autoFree = 1;
    t->parts = GsArray_New(0x18, 0, (Unk_ov065_02278740_Dtor)GsHttpPost_FreePart);
    if (t->parts == NULL) {
        GsUtil_Free(t);
        return NULL;
    }
    return t;
}
}
}

namespace Na {
extern "C" {
s32 GsHttpPost_GetAutoFree(Unk_ov065_0227acfc_Task *t) {
    return t->autoFree;
}
}
}

namespace Na {
extern "C" {
void GsHttpPost_Free(Unk_ov065_0227acfc_Task *t) {
    GsArray_Free(t->parts);
    GsUtil_Free(t);
}
}
}

namespace Na {
extern "C" {
s32 GsHttpPost_AddStringPart(Unk_ov065_0227acfc_Task *self, char *a, char *b) {
    s32 len;
    s32 cnt;
    s32 i;
    s32 c;
    a = GsUtil_StrDup(a);
    b = GsUtil_StrDup(b);
    if (a == NULL || b == NULL) {
        GsUtil_Free(a);
        GsUtil_Free(b);
        return 0;
    }
    Unk_ov065_0227ac34_Item item = {0, 0, 0, 0, 0, 0};
    item.type = 0;
    item.partName = a;
    item.value = b;
    len = STD_GetStringLength(b);
    item.length = len;
    item.needsEscaping = 0;
    c = func_0212a060(b, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*");
    if (c != len) {
        cnt = 0;
        item.needsEscaping = 1;
        for (i = 0; b[i] != 0; i++) {
            c = b[i];
            if (func_0212a120("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", c) == NULL && c != 0x20) {
                cnt++;
            }
        }
        item.numEscapedChars = cnt;
    }
    GsArray_Append(self->parts, &item);
    return 1;
}
}
}

namespace Na {
extern "C" {
char *GsHttp_GetContentType(Unk_ov065_0227a884_Obj *self) {
    if (self->post == NULL) {
        return "";
    }
    if (self->post->isMultipart != 0) {
        return "multipart/form-data; boundary=Qr4G823s23d---<<><><<<>--7d118e0536";
    }
    return "application/x-www-form-urlencoded";
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_GetUrlEncodedLength(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227acfc_Task *t = self->post;
    s32 sum = 0;
    s32 n;
    s32 i;
    n = GsArray_Count(t->parts);
    if (n == 0) {
        return sum;
    }
    i = sum;
    if (i < n) {
        do {
            Unk_ov065_0227a884_Rec *r = (Unk_ov065_0227a884_Rec *)GsArray_At(t->parts, i);
            s32 l = STD_GetStringLength(r->partName);
            s32 t = sum + l;
            s32 u = t + (s32)r->unk_0c;
            sum = u + (s32)r->unk_14 * 2 + 1;
            i++;
        } while (i < n);
    }
    return sum + (n - 1);
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_GetMultipartLength(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227acfc_Task *t = self->post;
    s32 sum = 0;
    s32 n;
    s32 i;
    if (data_ov065_022910e8 == 0) {
        s32 l = STD_GetStringLength("--Qr4G823s23d---<<><><<<>--7d118e0536");
        data_ov065_022910e8 = l;
        data_ov065_022910e4 = l + 0x2f;
        data_ov065_022910e0 = l + 0x4c;
        data_ov065_022910dc = l + 4;
    }
    n = GsArray_Count(t->parts);
    for (i = 0; i < n; i++) {
        Unk_ov065_0227a884_Rec *r = (Unk_ov065_0227a884_Rec *)GsArray_At(t->parts, i);
        if (r->type == 0) {
            sum += data_ov065_022910e4;
            sum += STD_GetStringLength(r->partName);
            sum += (s32)r->unk_0c;
        } else if (r->type == 1) {
            sum += data_ov065_022910e0;
            sum += STD_GetStringLength(r->partName);
            sum += STD_GetStringLength(r->unk_0c);
            sum += STD_GetStringLength(r->unk_10);
            sum += (s32)((Unk_ov065_0227a884_Rec *)GsArray_At(self->postParts, i))->unk_0c;
        } else if (r->type == 2) {
            sum += data_ov065_022910e0;
            sum += STD_GetStringLength(r->partName);
            sum += STD_GetStringLength(r->unk_10);
            sum += STD_GetStringLength(r->unk_14);
            sum += (s32)r->unk_0c;
        } else {
            return 0;
        }
    }
    return sum + data_ov065_022910dc;
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_GetPostLength(Unk_ov065_0227a884_Obj *self) {
    if (self->post == NULL) {
        return 0;
    }
    if (self->post->isMultipart != 0) {
        return GsHttp_GetMultipartLength(self);
    }
    return GsHttp_GetUrlEncodedLength(self);
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_OpenPostPart(Unk_ov065_0227a8ec_Item *it) {
    s32 t = it->part->type;
    s32 z = 0;
    it->pos = -1;
    if (t == 0) {
    } else if (t == 1) {
        if (it->file == 0) {
            return z;
        }
        if (func_02128318(it->file, z, 2) != 0) {
            return 0;
        }
        it->fileLength = func_02128650(it->file);
        if (it->fileLength == -1) {
            return 0;
        }
        rewind(it->file);
    } else if (t == 2) {
    } else {
        return z;
    }
    return 1;
}
}
}

namespace Na {
extern "C" {
void GsHttp_ClosePostPart(Unk_ov065_0227a8ec_Item *it) {
    switch (it->part->type) {
    case 0:
        break;
    case 1:
        if (it->file != 0) {
            func_02128250(it->file);
        }
        it->file = 0;
        break;
    }
}
}
}

namespace Na {
extern "C" {
s32 GsHttp_InitPostState(Unk_ov065_0227a884_Obj *self) {
    Unk_ov065_0227a8ec_Item item;
    s32 n;
    s32 i;
    if (self->post == NULL) {
        return 0;
    }
    self->postPartIndex = 0;
    self->postBytesSent = 0;
    self->postTotalBytes = 0;
    self->postCallback = self->post->postCallback;
    self->postCallbackParam = self->post->postCallbackParam;
    n = GsArray_Count(self->post->parts);
    self->postParts = GsArray_New(0x10, n, NULL);
    if (self->postParts == NULL) {
        return 0;
    }
    i = 0;
    if (i < n) {
        Unk_ov065_0227a8ec_Item *pi = &item;
        volatile s32 z = 0;
        do {
            Unk_ov065_0227a884_Rec *rec = (Unk_ov065_0227a884_Rec *)GsArray_At(self->post->parts, i);
            s32 t = z;
            pi->part = (Unk_ov065_0227a884_Rec *)t;
            pi->pos = t;
            pi->file = t;
            pi->fileLength = t;
            item.part = rec;
            if (GsHttp_OpenPostPart(pi) == 0) {
                for (i--; i >= 0; i--) {
                    GsHttp_ClosePostPart((Unk_ov065_0227a8ec_Item *)GsArray_At(self->postParts, i));
                }
                GsArray_Free(self->postParts);
                self->postParts = NULL;
                return 0;
            }
            GsArray_Append(self->postParts, pi);
            i++;
        } while (i < n);
    }
    self->postTotalBytes = GsHttp_GetPostLength(self);
    return 1;
}
}
}

namespace Na {
extern "C" {
void GsHttp_FreePostState(Unk_ov065_0227a884_Obj *self) {
    if (self->postParts != NULL) {
        s32 n = GsArray_Count(self->postParts);
        s32 i = 0;
        if (i < n) {
            do {
                GsHttp_ClosePostPart((Unk_ov065_0227a8ec_Item *)GsArray_At(self->postParts, i));
                i++;
            } while (i < n);
        }
        GsArray_Free(self->postParts);
        self->postParts = NULL;
    }
    if (self->post != NULL) {
        if (self->post->autoFree != 0) {
            GsHttpPost_Free(self->post);
            self->post = NULL;
        }
    }
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPartString(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a4e8_Part *q = st->part;
    if (q->unk_0c == 0) {
        return 1;
    }
    if (c->post->isMultipart == 0 && q->unk_10 != 0) {
        char *s = q->data;
        struct T4 {
            char b[4];
        };
        T4 tmp = *(T4 *)data_ov065_0228ca58;
        s32 i = 0;
        char ch = s[i];
        if (ch != 0) {
            do {
                if (func_0212a120("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_@-.*", ch) != 0) {
                    GsHttpBuf_AppendChar(&c->sendBuf, ch);
                } else if (ch == 0x20) {
                    GsHttpBuf_AppendChar(&c->sendBuf, 0x2b);
                } else {
                    tmp.b[1] = "0123456789ABCDEF"[ch / 16];
                    tmp.b[2] = "0123456789ABCDEF"[ch % 16];
                    GsHttpBuf_Append(&c->sendBuf, &tmp, 3);
                }
                i++;
                ch = s[i];
            } while (ch != 0);
        }
        return 1;
    }
    s32 n = q->unk_0c - st->pos;
    s32 r = GsHttp_SocketSend(c, q->data, n);
    if (r == -1) {
        return 0;
    }
    st->pos = st->pos + r;
    if (r == n) {
        return 1;
    }
    return 2;
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPartFile(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    char buf[0x1000];
    s32 r;
    do {
        s32 n = func_02128030(buf, 1, 0x1000, st->file);
        if (n <= 0) {
            c->completed = 1;
            c->result = 14;
            return 0;
        }
        st->pos = st->pos + n;
        if (st->pos > st->fileLength) {
            c->completed = 1;
            c->result = 14;
            return 0;
        }
        r = GsHttp_SendOrQueue(c, buf, n);
        if (r == 0) {
            return 0;
        }
        if (st->pos == st->fileLength) {
            return 1;
        }
    } while (r == 1);
    return 2;
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPartBuffer(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a4e8_Part *p = st->part;
    s32 len = p->unk_0c;
    if (len == 0) {
        return 1;
    }
    do {
        s32 n = len - st->pos;
        if (n >= 0x8000) {
            n = 0x8000;
        }
        s32 r = GsHttp_SocketSend(c, p->data + st->pos, n);
        if (r == -1) {
            return 0;
        }
        st->pos = st->pos + r;
        p = st->part;
        len = p->unk_0c;
        if (len == st->pos) {
            return 1;
        }
        if (r == 0) {
            return 2;
        }
    } while (1);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostPart(Unk_ov065_0227a4e8_Slot *st, Unk_ov065_02279c7c *c, s32 first) {
    char buf[2048];
    if (st->pos == -1) {
        st->pos = 0;
        if (c->post->isMultipart == 0) {
            if (first != 0) {
                OS_SPrintf(buf, "%s=", st->part->partName);
            } else {
                OS_SPrintf(buf, "&%s=", st->part->partName);
            }
        } else {
            Unk_ov065_0227a4e8_Part *p = st->part;
            if (p->type == 0) {
                OS_SPrintf(buf, "%sContent-Disposition: form-data; name=\"%s\"\r\n\r\n", first != 0 ? "--Qr4G823s23d---<<><><<<>--7d118e0536\r\n" : "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536\r\n", p->partName);
            } else if (p->type == 1 || p->type == 2) {
                s32 a, b;
                if (p->type == 1) {
                    a = p->unk_0c;
                    b = p->unk_10;
                } else {
                    a = p->unk_10;
                    b = p->unk_14;
                }
                OS_SPrintf(buf, "%sContent-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\nContent-Type: %s\r\n\r\n", first != 0 ? "--Qr4G823s23d---<<><><<<>--7d118e0536\r\n" : "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536\r\n", p->partName, a, b);
            }
        }
        s32 r = GsHttp_SendOrQueue(c, buf, STD_GetStringLength(buf));
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (st->part->type == 0) {
        return GsHttp_SendPostPartString(st, c);
    }
    if (st->part->type == 1) {
        return GsHttp_SendPostPartFile(st, c);
    }
    return GsHttp_SendPostPartBuffer(st, c);
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_SendPostData(Unk_ov065_02279c7c *c) {
    Unk_ov065_0227a3f4_List *l = (Unk_ov065_0227a3f4_List *)&c->postParts;
    s32 cnt = GsArray_Count(l->postParts);
    if (c->sendBufLength != 0) {
        if (GsHttp_FlushSendBuffer(c) == 0) {
            return 0;
        }
        if (c->sendBufReadPos < c->sendBufLength) {
            return 2;
        }
        GsHttpBuf_Reset(&c->sendBuf);
        if (c->postPartIndex == cnt) {
            return 1;
        }
    }
    for (; l->postPartIndex < cnt; l->postPartIndex++) {
        Unk_ov065_0227a4e8_Slot *s = GsArray_At(l->postParts, l->postPartIndex);
        s32 r = GsHttp_SendPostPart(s, c, l->postPartIndex == 0 ? 1 : 0);
        if (r == 0) {
            return 0;
        }
        if (r == 2) {
            return 2;
        }
    }
    if (c->post->isMultipart != 0) {
        s32 n = STD_GetStringLength("\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n");
        if (GsHttp_SendOrQueue(c, "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n", n) == 0) {
            return 0;
        }
    }
    if (c->sendBufLength != 0) {
        return 2;
    }
    return 1;
}
}
}

namespace Nm {
extern "C" {
void GsHttp_SetResultFromStatus(Unk_ov065_02279c7c *c) {
    s32 code = c->statusCode;
    switch (code / 100) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        return;
    case 4:
        switch (code) {
        case 401:
            c->result = 9;
            return;
        case 402:
        case 405:
        case 406:
        case 407:
        case 408:
        case 409:
            break;
        case 403:
            c->result = 10;
            return;
        case 404:
        case 410:
            c->result = 11;
            return;
        }
        c->result = 8;
        return;
    case 5:
        c->result = 12;
        break;
    }
}
}
}

namespace Nm {
extern "C" {
s32 GsHttp_Step(Unk_ov065_02279c7c *c) {
    s32 r;
    if (c->isProcessing != 0) {
        return 0;
    }
    c->isProcessing = 1;
    if (c->state == 0) {
        GsHttp_StepHostLookup(c);
    }
    if (c->state == 1) {
        GsHttp_StepConnect(c);
    }
    if (c->state == 2) {
        GsHttp_StepEncryption(c);
    }
    if (c->state == 3) {
        GsHttp_StepSendRequest(c);
    }
    if (c->state == 4) {
        GsHttp_StepSendPost(c);
    }
    if (c->state == 5) {
        GsHttp_StepWaitReply(c);
    }
    if (c->state == 6) {
        GsHttp_StepRecvStatus(c);
    }
    if (c->state == 7) {
        GsHttp_StepRecvHeaders(c);
    }
    if (c->state == 8) {
        GsHttp_StepRecvBody(c);
    }
    if (c->redirectUrl != 0) {
        GsHttp_ResetForRedirect(c);
    }
    r = c->completed;
    if (r != 0) {
        GsHttp_SetResultFromStatus(c);
        GsHttp_CallCompletedCallback(c);
        GsHttp_FreeConnection(c);
    } else {
        c->isProcessing = 0;
    }
    return r;
}
}
}
