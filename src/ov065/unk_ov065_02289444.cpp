// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {
char *data_ov065_0228e954 = "Query Error: ";
char *sGsSrvListMasterOverride;
void *sGsSrvListSortList;
u32 data_ov065_022918a8;
}

namespace F02288e2c {

// ov065_067: GameSpy-like key/value parsing, hash table wrappers, connection object (0x02288e2c..0x02289720)

struct Unk_ov065_02289258_Pad {
    s32 v[1];
    Unk_ov065_02289258_Pad() {}
    ~Unk_ov065_02289258_Pad() {}
};

struct Unk_ov065_02288ffc_W {
    char *v[2];
};

struct Unk_ov065_0228909c_P {
    u32 a;
    u32 b;
};

struct Unk_ov065_02289044_Hdr {
    u8 pad_00[4];
    u16 port;
    u8 pad_06[6];
    u16 port2;
    u8 pad_0e[7];
    u8 listFlags;
};

struct Unk_ov065_02289174_Ctx {
    u8 pad_00[0x18];
    void *keyValues;
};

struct Unk_ov065_0228911c_Ent {
    s32 key;
    s32 value;
};

struct Unk_ov065_02289174_KV {
    s32 key;
    s32 value;
};

struct Unk_ov065_0228903c_Obj {
    u8 pad_00[0x20];
    s32 next;
};

struct Unk_ov065_02289578_Pkt {
    u32 unk_00;
    u16 unk_04;
    u8 pad_06[8];
    u8 unk_0e[6];
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov065_02289720_Sub {
    s32 unk_00;
    u8 pad_04[0x484];
    void (*unk_488)(Unk_ov065_02289720_Sub *, s32, s32, void *);
    u8 pad_48c[8];
    void *unk_494;
    u8 pad_498[0x18];
    s32 unk_4b0;
    u32 unk_4b4;
};

struct Unk_ov065_02289460_Obj {
    u8 pad_00[0x10];
    s32 numActiveQueries;
    u8 pad_14[0x2c];
    s32 numQueryKeys;
    u8 pad_44[8];
    s32 serverList;
    u8 pad_50[0x49c];
    s32 myPublicIp;
    u8 pad_4f0[0x130];
    s32 disconnectOnComplete;
    s32 noAutoQuery;
    u32 waitServerIp;
    u16 waitServerPort;
    u8 pad_62e[2];
    void (*unk_630)(Unk_ov065_02289460_Obj *, s32, void *, void *);
    void *userData;
};

struct Unk_ov065_02289578_Sub {
    s32 unk_00;
    void *unk_04;
};

static inline u16 Unk_ov065_02289044_Htons(u16 x) {
    return (x >> 8 & 0xff) | ((x << 8) & 0xff00);
}

extern "C" {
extern char *data_ov065_0228e928[2];
extern char *gGsKeyNames[];
extern u16 data_0213a510[];
extern s32 sGsAvailStatus;
extern s32 data_ov065_022918a8;

s32 strcmp(const char *, const char *);
u32 STD_GetStringLength(const char *);
s32 OS_SPrintf(char *, const char *, ...);
s32 func_0212b770(char *);
s32 func_02130b04(char *, char *);

s32 GsUtil_Free(void *);
void *GsUtil_Alloc(s32);
s32 GsArray_Count(void *);
void *GsHash_Find(void *, void *);
s32 GsHash_Insert(void *, void *);
s32 GsHash_Count(void *);
s32 GsHash_Free(void *);
void *GsHash_NewEx(s32, s32, s32, void *, void *, void *);
s32 GsSock_InetAddr(s32);
s32 GsSock_RecvFrom(s32, void *, s32, s32, void *, void *);
s32 GsSock_Close(s32);
s32 GsSock_CanRead(s32);
s32 GsUtil_Sleep(s32);
u32 GsUtil_GetTimeMs();
s32 GsSrvQuery_Remove(void *, void *);
s32 GsSrvQuery_AddKey(void *, s32);
s32 GsSrvQuery_Think(void *);
s32 GsSrvQuery_Add(void *, void *, s32, s32);
s32 GsSrvQuery_Shutdown(void *);
s32 GsSrvQuery_Clear(void *);
s32 GsSrvQuery_SetPublicIp(void *, s32);
s32 GsSrvQuery_Init(void *, s32, s32, s32, void *, void *);
s32 GsServer_IsNull(void *);
s32 GsServer_SetListFlags(void *, s32);
void *GsServer_New(void *, u32, u32);
s32 GsServer_GetPing(void *);
s32 GsUtil_StrHashNoCase(void *);
s32 GsSrvList_Free(void *);
s32 GsSrvList_Disconnect(void *);
s32 GsSrvList_SendListRequest(void *, char *, s32, s32, s32);
s32 GsSrvList_Init(void *, s32, s32, s32, s32, s32, void *, void *);
s32 GsUtil_StrSizeInBuffer(char *, s32);
s32 GsStrPool_Add(s32, char *);
s32 GsSrvList_ClearServers(void *);
s32 GsSrvList_FreeDeadServers(void *);
s32 GsSrvList_GetServer(void *);
s32 GsSrvList_Count(void *);
s32 GsSrvList_RemoveServerAt(void *, s32);
s32 GsSrvList_FindServerByAddress(void *, u32, u32);
s32 GsSrvList_FindServer(void *);
s32 GsSrvList_AddServer(void *, void *);
s32 GsSrvList_Sort(void *);
s32 GsSrvList_Receive(void *);
s32 GsSrvList_SendNatNegCookie(void *, s32, s32, s32);
s32 GsSrvList_SendServerMessage(void *, s32, s32, s32, s32);

s32 GsServer_SetStringValue(Unk_ov065_02289174_Ctx *a, char *k, char *v);
char *GsUtil_StrTok(char *s, s32 ch);
s32 GsServer_IsKeyAllowed(char *s);
s32 GsServer_GetStringValue(void *a, char *k, s32 d);
s32 GsSrvBrowser_Halt(void *o);
s32 GsSrvBrowser_Think(void *o);
s32 GsSrvBrowser_UpdateListEx(void *o, s32 a, s32 b, u8 *data, s32 n, s32 c, s32 d, s32 e);
void GsSrvBrowser_OnQueryEvent(void *, s32, Unk_ov065_02289578_Pkt *, Unk_ov065_02289460_Obj *);
void GsSrvBrowser_OnListEvent(Unk_ov065_02289578_Sub *, s32, Unk_ov065_02289578_Pkt *, Unk_ov065_02289460_Obj *);
s32 GsSrvList_Think(void *);
s32 GsSrvList_ThinkLan(Unk_ov065_02289720_Sub *);
s32 GsStrPool_CompareCb(char **, char **);
s32 GsStrPool_FreeEntryCb(void **);
s32 GsStrPool_HashCb(void **);

}
}

namespace F02289808 {

// ov065_068: GameSpy-style client message parser (0x02289808..0x0228a20c)

struct Unk_ov065_02289808_Ctx;

typedef void (*Unk_ov065_02289808_Cb0)(Unk_ov065_02289808_Ctx *, s32, u32, u32);
typedef void (*Unk_ov065_02289808_Cb1)(Unk_ov065_02289808_Ctx *, void *, u32, s32, void *, u32);
typedef void (*Unk_ov065_02289808_Cb2)(Unk_ov065_02289808_Ctx *, void *, u32, u32, u32, void *, u32);

struct Unk_ov065_02289808_B2 {
    u8 b[2];
};

struct Unk_ov065_02289808_B4 {
    u8 b[4];
};

struct Unk_ov065_02289808_Ctx {
    s32 unk_00;
    u8 unk_04[4];
    void *unk_08;
    u8 unk_0c[0x70];
    u8 *unk_7c;
    s32 unk_80;
    u32 unk_84[0xff];
    s32 unk_480;
    s32 unk_484;
    Unk_ov065_02289808_Cb0 unk_488;
    Unk_ov065_02289808_Cb1 unk_48c;
    Unk_ov065_02289808_Cb2 unk_490;
    u32 unk_494;
    u8 unk_498[8];
    u8 unk_4a0[8];
    u16 unk_4a8;
    u16 unk_4aa;
    u32 unk_4ac;
    s32 unk_4b0;
    u8 unk_4b4[8];
    u8 unk_4bc[0x108];
    u32 unk_5c4;
    s32 unk_5c8;
};

struct Unk_ov065_02289808_Elem {
    void *unk_00;
    u32 unk_04;
};


extern "C" {
extern u32 data_ov065_022918a8;
s32 GsSrvList_SendListRequest(Unk_ov065_02289808_Ctx *, s32, s32, s32, s32);
s32 GsSrvList_SendToMaster(Unk_ov065_02289808_Ctx *, u8 *, s32);
s32 GsSock_Send(s32, void *, s32, s32);
s32 GsSock_Recv(s32, void *, s32, s32);
s32 GsSock_CanRead(s32);
void GsSrvList_ReportError(Unk_ov065_02289808_Ctx *);
void GsSrvListCrypt_Decrypt(void *, void *, s32);
void memmove(void *, void *, s32);
s32 GsSrvList_ReadServerAddress(Unk_ov065_02289808_Ctx *, u8 *, s32, u32 *, u16 *);
s32 GsSrvList_FindServerByAddress(Unk_ov065_02289808_Ctx *, u32, u32);
s32 GsServer_New(Unk_ov065_02289808_Ctx *, u32, u32);
s32 GsServer_IsNull();
s32 GsSrvList_GetServer(Unk_ov065_02289808_Ctx *, s32);
s32 GsSrvList_RemoveServerAt(Unk_ov065_02289808_Ctx *, s32);
s32 GsSrvList_ParseServer(Unk_ov065_02289808_Ctx *, s32, u8 *, s32, s32);
s32 GsSrvList_AddServer(Unk_ov065_02289808_Ctx *, s32);
s32 GsUtil_StrSizeInBuffer(u8 *, s32);
void *GsStrPool_Add(Unk_ov065_02289808_Ctx *, u8 *);
s32 GsSrvList_ReleaseKeyList(Unk_ov065_02289808_Ctx *);
void *GsArray_New(s32, s32, s32);
s32 GsArray_Append(void *, void *);
s32 GsArray_Count(void *);
s32 GsSrvList_InitCrypt(Unk_ov065_02289808_Ctx *, u8 *, s32);
s32 GsSrvList_SetErrorText(Unk_ov065_02289808_Ctx *, u8 *);
s32 GsSrvList_ParseListServer(Unk_ov065_02289808_Ctx *, u8 *, s32);

s32 GsSrvList_SendServerMessage(Unk_ov065_02289808_Ctx *c, u32 a1, u32 a2, u8 *data, s32 len);
s32 GsSrvList_ProcessMessages(Unk_ov065_02289808_Ctx *c);

s32 GsSrvList_HandleServerUpdate(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 GsSrvList_HandleServerDelete(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 GsSrvList_HandleMsg05(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 GsSrvList_HandleMsg06(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 GsSrvList_HandleKeyList(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n);
s32 GsSrvList_ParseListReply(Unk_ov065_02289808_Ctx *c);
}

static inline void Cpy2(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
}
static inline void Cpy4(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}
#define HTONS(x) ((u16)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))
static inline void Get16(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
}
static inline void Get16b(u16 *dd, u8 *s) {
    u8 *d = (u8 *)dd;
    d[0] = s[0];
    d[1] = s[1];
}
static inline u32 Swap32(u32 x) {
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}
#define HTONL(x) Swap32(x)

extern "C" {

}
}

namespace F0228a20c {

// ov065_069: GameSpy-like login/handshake packet builder & parser 0x0228a20c..0x0228ab0c

struct Unk_ov065_0228a218_Ent;
struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_0228a218_Rec {
    void *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0228a218_B4 {
    u8 b[4];
};

struct Unk_ov065_0228a218_B2 {
    u8 b[2];
};

struct Unk_ov065_0228a218_Ctx {
    s32 unk_00;
    void *unk_04;
    Unk_ov065_022786bc_Vec *unk_08;
    u8 unk_0c[0x24];
    u8 unk_30[0x24];
    s8 unk_54[0x20];
    s8 unk_74[8];
    void *unk_7c;
    void *unk_80;
    u32 unk_84[0xff];
    s32 unk_480;
    s32 unk_484;
    u8 pad_488[0x4a4 - 0x488];
    u32 unk_4a4;
    u16 unk_4a8;
    u16 pad_4aa;
    u32 unk_4ac;
    s32 unk_4b0;
    u32 unk_4b4;
    u32 unk_4b8;
    u8 unk_4bc[0x108];
    u32 unk_5c4;
    u32 unk_5c8;
};

extern "C" {

s32 STD_GetStringLength(const char *);
void memcpy(void *, const void *, s32);
s32 memcmp(void *, void *, u32);
s32 rand();
s32 func_02133150(s32, s32);

void *GsUtil_Alloc(u32);
void GsUtil_Free(void *);
void *GsArray_At(Unk_ov065_022786bc_Vec *, s32);
s32 GsArray_Count(Unk_ov065_022786bc_Vec *);
void GsArray_Free(Unk_ov065_022786bc_Vec *);
s32 GsSock_Send(s32, void *, s32, s32);
void GsSock_Close(s32);
void GsSrvListCrypt_Init(void *, void *, s32);
u32 GsServer_GetFlags(Unk_ov065_0228a218_Ent *);
void GsServer_SetFlags(Unk_ov065_0228a218_Ent *, u8);
void func_ov065_02288d34(Unk_ov065_0228a218_Ent *, u32);
void GsServer_SetPrivateAddress(Unk_ov065_0228a218_Ent *, u32, u32);
void GsServer_SetListFlags(Unk_ov065_0228a218_Ent *, u32);
Unk_ov065_0228a218_Ent *GsServer_New(Unk_ov065_0228a218_Ctx *, u32, u32);
s32 GsServer_IsNull(Unk_ov065_0228a218_Ent *);
void GsServer_SetIntValue(Unk_ov065_0228a218_Ent *, void *, u32);
void GsServer_SetStringValue(Unk_ov065_0228a218_Ent *, void *, void *);
void GsStrPool_FreeIfEmpty(Unk_ov065_0228a218_Ctx *);
void GsSrvList_AddServer(Unk_ov065_0228a218_Ctx *, Unk_ov065_0228a218_Ent *);
s32 GsSrvList_PutByte(u8 **, u32, s32 *);
void GsSrvList_PutString(u8 **, const char *, s32 *);
s32 GsSrvList_ConnectMaster(Unk_ov065_0228a218_Ctx *);
void GsSrvList_ReportError(Unk_ov065_0228a218_Ctx *);
s32 GsUtil_StrSizeInBuffer(void *, s32);
void GsStrPool_Release(Unk_ov065_0228a218_Ctx *, void *);
void GsSrvList_ClearServers(Unk_ov065_0228a218_Ctx *);

void GsSrvList_SetErrorText(Unk_ov065_0228a218_Ctx *ctx, u32 v);
s32 GsSrvList_ParseListServer(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n);
s32 GsSrvList_ParseServer(Unk_ov065_0228a218_Ctx *ctx, Unk_ov065_0228a218_Ent *ent, u8 *buf, s32 n, s32 flag);
void GsSrvList_ReadServerAddress(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n, u32 *ip, u16 *volatile port);
s32 GsSrvList_CheckKeyValues(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n);
s32 GsSrvList_CheckExtraPairs(u8 *buf, s32 n);
s32 GsSrvList_GetRecordHeaderSize(u32 flags);
void GsSrvList_InitCrypt(Unk_ov065_0228a218_Ctx *ctx, s8 *key, s32 n);
void GsSrvList_Free(Unk_ov065_0228a218_Ctx *ctx);
void GsSrvList_Disconnect(Unk_ov065_0228a218_Ctx *ctx);
void GsSrvList_ReleaseKeyList(Unk_ov065_0228a218_Ctx *ctx);
void GsSrvList_ReleasePopularValues(Unk_ov065_0228a218_Ctx *ctx);
s32 GsSrvList_SendListRequest(Unk_ov065_0228a218_Ctx *ctx, const char *user, const char *pass, u32 flags, u32 extra);
s32 GsSrvList_SendToMaster(Unk_ov065_0228a218_Ctx *ctx, void *buf, s32 n);
void GsSrvList_MakeChallenge(Unk_ov065_0228a218_Ctx *ctx);
void GsSrvList_PutBytes(u8 **cur, const void *src, s32 n, s32 *len);
void GsSrvList_PutU32(u8 **cur, u32 v, s32 *len);

}
}

namespace F0228ab3c {

// ov065_070: GameSpy-like server-browser context (0x0228ab3c..0x0228b258)

struct Unk_ov065_0228ad34_Ctx {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    char unk_0c[0x24];
    char unk_30[0x24];
    char unk_54[0x28];
    char *unk_7c;
    s32 unk_80;
    u8 pad_84[0x480 - 0x84];
    s32 unk_480;
    s32 unk_484;
    void (*unk_488)(Unk_ov065_0228ad34_Ctx *, s32, u32, u32);
    s32 unk_48c;
    u32 unk_490;
    u32 unk_494;
    char *unk_498;
    s32 unk_49c;
    s32 unk_4a0;
    s32 unk_4a4;
    u8 pad_4a8[0x4b0 - 0x4a8];
    s32 unk_4b0;
    u8 pad_4b4[0x4b8 - 0x4b4];
    s32 unk_4b8;
    u8 pad_4bc[0x5cc - 0x4bc];
    s32 unk_5cc;
    void *unk_5d0;
};

struct Unk_ov065_0228ae2c_Ent {
    char *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0228ab8c_Ip {
    u8 v[4];
};

struct Unk_ov065_0228ab8c_Sa {
    u8 unk_0;
    u8 unk_1;
    u16 unk_2;
    union {
        u32 w;
        Unk_ov065_0228ab8c_Ip ip;
    } unk_4;
};

struct Unk_ov065_0228ab8c_Host {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_ov065_0228ab8c_Ip **unk_0c;
};

typedef Unk_ov065_0228ad34_Ctx Ctx070;

static inline void Cp4(Unk_ov065_0228ab8c_Ip *d, Unk_ov065_0228ab8c_Ip *s) {
    *d = *s;
}


extern "C" {
extern char *sGsSrvListMasterOverride;
extern char *data_ov065_0228e954;
extern u32 data_ov065_022918a8;
extern s32 sGsAvailStatus;
extern Ctx070 *sGsSrvListSortList;
extern u8 data_0213a410[];
s32 STD_GetStringLength(const char *s);
void *memcpy(void *d, const void *s, u32 n);
char *func_02127838(char *d, const char *s);
s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 strncmp(const char *a, const char *b, u32 n);
s32 strcmp(const char *a, const char *b);
s32 func_02130b04(const char *a, const char *b);
void srand(u32 seed);

s32 GsSock_InetAddr(char *s);
Unk_ov065_0228ab8c_Host *Sock_GetHostByName(char *name);
s32 GsSock_Socket(s32 a, s32 b, s32 c);
s32 GsSock_Close(s32 fd);
s32 GsSock_Connect(s32 fd, void *sa, s32 len);
s32 GsSrvList_SetErrorText(Ctx070 *c, ...);
void GsSrvList_Disconnect(Ctx070 *c);
void *GsStrPool_Get(Ctx070 *c);
void *GsHash_Find(void *t, void *key);
void GsHash_Remove(void *t, void *key);
void GsHash_Insert(void *t, void *key);
char *GsUtil_StrDup(char *s);
void *GsArray_New(s32 a, s32 b, s32 c);
void *GsArray_At(void *v, s32 i);
s32 GsArray_Count(void *v);
void GsArray_Clear(void *v);
void GsArray_DeleteAt(void *v, s32 i);
void GsArray_Append(void *v, s32 *p);
void GsArray_Sort(void *v, void *cmp);
void *GsServer_GetNextFree(void *p);
void GsServer_Free(void *p);
void GsServer_SetNextFree(void *a, void *b);
u32 GsServer_GetPublicIp(void *e);
u32 GsServer_GetPortRaw(void *e);
char *GsServer_GetStringValue(void *rec, char *key, char *dflt);
double GsServer_GetFloatValue(void *rec, char *key, s32 a, s32 b);
s32 GsServer_GetIntValue(void *rec, char *key, s32 a);
u32 GsUtil_GetTimeMs();
void GsSock_StartupStub();

void GsSrvList_PutByte(char **p, u8 c, s32 *n);
void GsSrvList_PutString(char **p, char *s, s32 *n);
s32 GsSrvList_ConnectMaster(Ctx070 *c);
u32 GsSrvList_HashGameName(const char *s, u32 n);
void GsSrvList_ReportError(Ctx070 *c);
void GsSrvList_Init(Ctx070 *c, char *a, char *b, char *d, s32 e, s32 f, void *g, u32 h);
s32 GsUtil_StrSizeInBuffer(const char *s, s32 n);
void GsStrPool_Release(Ctx070 *c, s32 key);
u32 GsStrPool_Add(Ctx070 *c, s32 key);
void GsSrvList_InitServers(Ctx070 *c);
void GsSrvList_ClearServers(Ctx070 *c);
void GsSrvList_FreeDeadServers(Ctx070 *c);
u32 GsSrvList_GetServer(Ctx070 *c, s32 i);
s32 GsSrvList_Count(Ctx070 *c);
void GsSrvList_RemoveServerAt(Ctx070 *c, s32 i);
void GsSrvList_PushDeadServer(Ctx070 *c, void *x);
s32 GsSrvList_FindServerByAddress(Ctx070 *c, s32 a, s32 b);
s32 GsSrvList_FindServer(Ctx070 *c, u32 key);
void GsSrvList_AddServer(Ctx070 *c, s32 a, s32 b, s32 d);
void GsSrvList_Sort(Ctx070 *c, s32 a, char *b, u32 mode);
s32 GsSrvList_CompareStringNoCase(void **a, void **b);
s32 GsSrvList_CompareString(void **a, void **b);
s32 GsSrvList_CompareFloat(void **a, void **b);
s32 GsSrvList_CompareInt(void **a, void **b);

}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_CompareInt(void **a, void **b) {
    void *ra = *(void *volatile *)a;
    void *rb = *b;
    s32 r = GsServer_GetIntValue(ra, sGsSrvListSortList->unk_498, 0);
    r -= GsServer_GetIntValue(rb, sGsSrvListSortList->unk_498, 0);
    if (sGsSrvListSortList->unk_49c == 0) {
        r = -r;
    }
    return r;
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_CompareFloat(void **a, void **b) {
    void *ra = *(void *volatile *)a;
    void *rb = *b;
    double d1 = GsServer_GetFloatValue(ra, sGsSrvListSortList->unk_498, 0, 0);
    double d2 = GsServer_GetFloatValue(rb, sGsSrvListSortList->unk_498, 0, 0);
    double d = d1 - d2;
    if (sGsSrvListSortList->unk_49c == 0) {
        d = 0 - d;
    }
    if ((float)d > 0) {
        return 1;
    }
    return (float)d < 0 ? -1 : 0;
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_CompareString(void **a, void **b) {
    char *s1 = GsServer_GetStringValue(*a, sGsSrvListSortList->unk_498, "");
    char *s2 = GsServer_GetStringValue(*b, sGsSrvListSortList->unk_498, "");
    s32 r = strcmp(s1, s2);
    if (sGsSrvListSortList->unk_49c == 0) {
        r = -r;
    }
    return r;
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_CompareStringNoCase(void **a, void **b) {
    char *s1 = GsServer_GetStringValue(*a, sGsSrvListSortList->unk_498, "");
    char *s2 = GsServer_GetStringValue(*b, sGsSrvListSortList->unk_498, "");
    s32 r = func_02130b04(s1, s2);
    if (sGsSrvListSortList->unk_49c == 0) {
        r = -r;
    }
    return r;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_Sort(Ctx070 *c, s32 a, char *b, u32 mode) {
    void *cmp;
    switch (mode) {
    case 0:
        cmp = (void *)GsSrvList_CompareInt;
        break;
    case 1:
        cmp = (void *)GsSrvList_CompareFloat;
        break;
    case 2:
        cmp = (void *)GsSrvList_CompareString;
        break;
    case 3:
        cmp = (void *)GsSrvList_CompareStringNoCase;
        break;
    default:
        cmp = (void *)GsSrvList_CompareStringNoCase;
        break;
    }
    c->unk_498 = b;
    c->unk_49c = a;
    sGsSrvListSortList = c;
    GsArray_Sort(c->unk_04, cmp);
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_AddServer(Ctx070 *c, s32 a, s32 b, s32 d) {
    GsArray_Append(c->unk_04, &a);
    c->unk_488(c, 0, a, c->unk_494);
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_FindServer(Ctx070 *c, u32 key) {
    s32 n = GsArray_Count(c->unk_04);
    s32 i;
    for (i = 0; i < n; i++) {
        if (key == *(u32 *)GsArray_At(c->unk_04, i)) {
            return i;
        }
    }
    return -1;
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_FindServerByAddress(Ctx070 *c, s32 a, s32 b) {
    void *e;
    s32 i;
    s32 n = GsArray_Count(c->unk_04);
    for (i = 0; i < n; i++) {
        e = *(void **)GsArray_At(c->unk_04, i);
        if ((u32)a == GsServer_GetPublicIp(e) && (u32)b == GsServer_GetPortRaw(e)) {
            return i;
        }
    }
    return -1;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_PushDeadServer(Ctx070 *c, void *x) {
    void *t = c->unk_5d0;
    if (t == NULL) {
        GsServer_SetNextFree(x, NULL);
    } else {
        GsServer_SetNextFree(x, t);
    }
    c->unk_5d0 = x;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_RemoveServerAt(Ctx070 *c, s32 i) {
    u32 v = *(u32 *)GsArray_At(c->unk_04, i);
    c->unk_488(c, 2, v, c->unk_494);
    GsArray_DeleteAt(c->unk_04, i);
    GsSrvList_PushDeadServer(c, (void *)v);
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_Count(Ctx070 *c) {
    return GsArray_Count(c->unk_04);
}
}
}

namespace F0228ab3c {
extern "C" {
u32 GsSrvList_GetServer(Ctx070 *c, s32 i) {
    return *(u32 *)GsArray_At(c->unk_04, i);
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_FreeDeadServers(Ctx070 *c) {
    if (c->unk_5d0 != NULL) {
        void *cur = c->unk_5d0;
        while (cur != NULL) {
            void *next = GsServer_GetNextFree(cur);
            GsServer_Free(&cur);
            cur = next;
        }
        c->unk_5d0 = NULL;
    }
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_ClearServers(Ctx070 *c) {
    s32 n = GsArray_Count(c->unk_04);
    s32 i;
    for (i = 0; i < n; i++) {
        void *p = GsArray_At(c->unk_04, i);
        GsSrvList_PushDeadServer(c, *(void **)p);
    }
    GsArray_Clear(c->unk_04);
    GsSrvList_FreeDeadServers(c);
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_InitServers(Ctx070 *c) {
    c->unk_04 = GsArray_New(4, 0x64, 0);
    c->unk_5d0 = NULL;
}
}
}

namespace F0228ab3c {
extern "C" {
u32 GsStrPool_Add(Ctx070 *c, s32 key) {
    Unk_ov065_0228ae2c_Ent l;
    Unk_ov065_0228ae2c_Ent *e;
    l.unk_00 = (char *)key;
    e = (Unk_ov065_0228ae2c_Ent *)GsHash_Find(GsStrPool_Get(c), &l);
    if (e != NULL) {
        e->unk_04++;
        return (u32)e->unk_00;
    }
    l.unk_00 = GsUtil_StrDup((char *)key);
    l.unk_04 = 1;
    GsHash_Insert(GsStrPool_Get(c), &l);
    return (u32)l.unk_00;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsStrPool_Release(Ctx070 *c, s32 key) {
    s32 k = key;
    Unk_ov065_0228ae2c_Ent *e = (Unk_ov065_0228ae2c_Ent *)GsHash_Find(GsStrPool_Get(c), &k);
    if (e != NULL) {
        e->unk_04--;
        if (e->unk_04 == 0) {
            GsHash_Remove(GsStrPool_Get(c), &k);
        }
    }
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsUtil_StrSizeInBuffer(const char *s, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (s[i] == 0) {
            return i + 1;
        }
    }
    return -1;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_Init(Ctx070 *c, char *a, char *b, char *d, s32 e, s32 f, void *g, u32 h) {
    if (f != 0 || sGsAvailStatus == 1) {
        s32 neg = -1;
        c->unk_00 = 1;
        GsSrvList_InitServers(c);
        GsStrPool_Get(c);
        func_02127838(c->unk_0c, a);
        func_02127838(c->unk_30, b);
        func_02127838(c->unk_54, d);
        c->unk_488 = (void (*)(Ctx070 *, s32, u32, u32))g;
        c->unk_48c = 0;
        c->unk_494 = h;
        c->unk_498 = "";
        c->unk_4a0 = 0;
        c->unk_4b0 = neg;
        c->unk_7c = 0;
        c->unk_80 = 0;
        c->unk_08 = 0;
        c->unk_484 = neg;
        c->unk_480 = 0;
        c->unk_4a4 = 0;
        c->unk_4b8 = e;
        GsSrvList_SetErrorText(c, "");
        c->unk_5cc = 0;
        srand(GsUtil_GetTimeMs());
        GsSock_StartupStub();
    }
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_ReportError(Ctx070 *c) {
    if (c->unk_80 > 0 && (u32)c->unk_80 > (u32)STD_GetStringLength(data_ov065_0228e954)) {
        char *s = data_ov065_0228e954;
        s32 len = STD_GetStringLength(s);
        if (strncmp(c->unk_7c, s, len) == 0) {
            GsSrvList_SetErrorText(c, c->unk_7c + STD_GetStringLength(s));
            c->unk_488(c, 5, data_ov065_022918a8, c->unk_494);
        }
    }
    c->unk_488(c, 4, data_ov065_022918a8, c->unk_494);
    GsSrvList_Disconnect(c);
}
}
}

namespace F0228ab3c {
extern "C" {
u32 GsSrvList_HashGameName(const char *s, u32 n) {
    s32 ch;
    u32 h = 0;
    ch = *s;
    while (ch != 0) {
        if (ch >= 0 && ch < 0x80) {
            ch = data_0213a410[ch];
        }
        h = h * 0x9ccf9319;
        h += ch;
        s++;
        ch = *s;
    }
    return h % n;
}
}
}

namespace F0228ab3c {
extern "C" {
s32 GsSrvList_ConnectMaster(Ctx070 *c) {
    struct {
        Unk_ov065_0228ab8c_Sa sa;
        char host[0x80];
    } l;
    u32 h = GsSrvList_HashGameName(c->unk_0c, 0x14);
    if (sGsSrvListMasterOverride != NULL) {
        func_02127838(l.host, sGsSrvListMasterOverride);
    } else {
        OS_SPrintf(l.host, "%s.ms%d.gs.nintendowifi.net", c->unk_0c, h);
    }
    l.sa.unk_1 = 2;
    l.sa.unk_2 = 0xee70;
    l.sa.unk_4.w = GsSock_InetAddr(l.host);
    if (l.sa.unk_4.w == (u32)-1) {
        Unk_ov065_0228ab8c_Host *ent = Sock_GetHostByName(l.host);
        if (ent == NULL) {
            return 2;
        }
        u8 *d = &l.sa.unk_4.ip.v[0];
        u8 *s2 = (u8 *)*ent->unk_0c;
        d[0] = s2[0];
        d[1] = s2[1];
        d[2] = s2[2];
        d[3] = s2[3];
    }
    if (c->unk_4b0 == -1) {
        c->unk_4b0 = GsSock_Socket(2, 1, 0);
        if (c->unk_4b0 == -1) {
            return 1;
        }
    }
    if (GsSock_Connect(c->unk_4b0, &l.sa, 8) != 0) {
        GsSock_Close(c->unk_4b0);
        c->unk_4b0 = -1;
        return 3;
    }
    return 0;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_PutString(char **p, char *s, s32 *n) {
    s32 len;
    if (s == NULL) {
        s = "";
    }
    len = STD_GetStringLength(s) + 1;
    memcpy(*p, s, len);
    *n += len;
    *p += len;
}
}
}

namespace F0228ab3c {
extern "C" {
void GsSrvList_PutByte(char **p, u8 c, s32 *n) {
    **p = c;
    ++*n;
    ++*p;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_PutU32(u8 **cur, u32 v, s32 *len)
{
    u8 *d = *cur;
    u8 *sp = (u8 *)&v;
    d[0] = sp[0];
    d[1] = sp[1];
    d[2] = sp[2];
    d[3] = sp[3];
    *len += 4;
    *cur += 4;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_PutBytes(u8 **cur, const void *src, s32 n, s32 *len)
{
    memcpy(*cur, src, n);
    *len += n;
    *cur += n;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_MakeChallenge(Unk_ov065_0228a218_Ctx *ctx)
{
    // No volatiles: the eight stack slots are the loop's literal 0/1 constants, hoisted out of the
    // loop and spilled (no free register); the ninth slot is the spilled temp of (i ^ a) & 1.
    s32 acc, i;
    s32 b, a, ta, tb;

    ctx->unk_74[0] = (s8)(rand() % 0x5d + 0x21);
    acc = 0;
    i = 1;
    do {
        a = ctx->unk_74[i - 1];
        b = ctx->unk_74[0];
        ta = a < b;
        tb = b < 0x4f;
        b &= 1;
        acc ^= (i ^ a) & 1;
        b ^= acc;
        b ^= tb;
        acc = b;
        acc ^= ta;
        ctx->unk_74[i] = (s8)(rand() % 0x5d + 0x21);
        if ((acc != 0 && (ctx->unk_74[i] & 1) == 0) || (acc == 0 && (ctx->unk_74[i] & 1) == 1)) {
            ctx->unk_74[i]++;
        }
        i++;
    } while (i < 8);
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_SendToMaster(Unk_ov065_0228a218_Ctx *ctx, void *buf, s32 n)
{
    s32 tries = 1;
    s32 r;
    s32 res;

    do {
        tries--;
        r = GsSock_Send(ctx->unk_4b0, buf, n, 0);
        if (r > 0) {
            break;
        }
        if (tries < 0) {
            break;
        }
        GsSrvList_Disconnect(ctx);
        res = GsSrvList_SendListRequest(ctx, 0, 0, 2, 0);
        if (res != 0) {
            GsSrvList_ReportError(ctx);
            return res;
        }
    } while (tries >= 0);
    if (r <= 0) {
        return 3;
    }
    return 0;
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_SendListRequest(Unk_ov065_0228a218_Ctx *ctx, const char *user, const char *pass, u32 flags, u32 extra)
{
    u16 tmp;
    s32 len;
    u8 *cur;
    u8 buf[0x300];
    s32 r;
    u8 *d;
    u8 *sp;

    if (user == 0) {
        user = (const char *)"";
    }
    if (pass == 0) {
        pass = (const char *)"";
    }
    if (STD_GetStringLength(user) > 0x100) {
        return 6;
    }
    if (STD_GetStringLength(pass) > 0x100) {
        return 6;
    }
    r = GsSrvList_ConnectMaster(ctx);
    if (r != 0) {
        goto end;
    }
    ctx->unk_5c4 = flags;
    GsSrvList_MakeChallenge(ctx);
    len = 2;
    cur = &buf[2];
    GsSrvList_PutByte(&cur, 0, &len);
    GsSrvList_PutByte(&cur, 1, &len);
    GsSrvList_PutByte(&cur, 3, &len);
    GsSrvList_PutU32(&cur, ctx->unk_4b8, &len);
    GsSrvList_PutString(&cur, (const char *)ctx->unk_0c, &len);
    GsSrvList_PutString(&cur, (const char *)ctx->unk_30, &len);
    GsSrvList_PutBytes(&cur, ctx->unk_74, 8, &len);
    GsSrvList_PutString(&cur, pass, &len);
    GsSrvList_PutString(&cur, user, &len);
    GsSrvList_PutU32(&cur, ((flags >> 24) & 0xff) | ((flags >> 8) & 0xff00) | ((flags << 8) & 0xff0000) | ((flags << 24) & 0xff000000), &len);
    if (ctx->unk_5c4 & 8) {
        GsSrvList_PutU32(&cur, ctx->unk_4a4, &len);
    }
    if (ctx->unk_5c4 & 0x80) {
        GsSrvList_PutU32(&cur, extra, &len);
    }
    {
        u16 l = (u16)*(volatile s32 *)&len;
        tmp = (u16)(((l >> 8) & 0xff) | ((l << 8) & 0xff00));
    }
    u32 da = (u32)buf;
    sp = (u8 *)&tmp;
    *(u8 *)da = sp[0];
    *(u8 *)(da + 1) = sp[1];
    if (GsSock_Send(ctx->unk_4b0, (u8 *)da, len, 0) <= 0) {
        GsSrvList_Disconnect(ctx);
        return 3;
    }
    ctx->unk_00 = 3;
    ctx->unk_5c8 = 0;
    if (ctx->unk_7c == 0) {
        ctx->unk_7c = GsUtil_Alloc(0x1000);
        if (ctx->unk_7c == 0) {
            return 5;
        }
        ctx->unk_80 = 0;
    }
    r = 0;
end:
    return r;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_ReleasePopularValues(Unk_ov065_0228a218_Ctx *ctx)
{
    s32 i = 0;
    s32 *pn = &ctx->unk_480;
    u32 *p;

    if (*pn > 0) {
        p = (u32 *)ctx;
        do {
            GsStrPool_Release(ctx, (void *)p[0x84 / 4]);
            p++;
            i++;
        } while (i < *pn);
    }
    ctx->unk_480 = 0;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_ReleaseKeyList(Unk_ov065_0228a218_Ctx *ctx)
{
    s32 i;
    Unk_ov065_0228a218_Rec *rec;

    if (ctx->unk_08 != 0) {
        i = 0;
        if (GsArray_Count(ctx->unk_08) > 0) {
            do {
                rec = (Unk_ov065_0228a218_Rec *)GsArray_At(ctx->unk_08, i);
                GsStrPool_Release(ctx, rec->unk_00);
                i++;
            } while (i < GsArray_Count(ctx->unk_08));
        }
        GsArray_Free(ctx->unk_08);
        ctx->unk_08 = 0;
    }
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_Disconnect(Unk_ov065_0228a218_Ctx *ctx)
{
    if (ctx->unk_7c != 0) {
        GsUtil_Free(ctx->unk_7c);
    }
    ctx->unk_7c = 0;
    ctx->unk_80 = 0;
    if (ctx->unk_4b0 != -1) {
        GsSock_Close(ctx->unk_4b0);
    }
    ctx->unk_4b0 = -1;
    ctx->unk_00 = 1;
    GsSrvList_ReleaseKeyList(ctx);
    ctx->unk_484 = -1;
    GsSrvList_ReleasePopularValues(ctx);
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_Free(Unk_ov065_0228a218_Ctx *ctx)
{
    GsSrvList_Disconnect(ctx);
    GsSrvList_ClearServers(ctx);
    GsStrPool_FreeIfEmpty(ctx);
    if (ctx->unk_04 != 0) {
        GsArray_Free((Unk_ov065_022786bc_Vec *)ctx->unk_04);
    }
    ctx->unk_04 = 0;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_InitCrypt(Unk_ov065_0228a218_Ctx *ctx, s8 *key, s32 n)
{
    s32 len;
    s8 *pw;
    s32 i;
    s32 j;

    len = STD_GetStringLength((const char *)ctx->unk_54);
    pw = ctx->unk_54;
    for (i = 0; i < n; i++) {
        s32 c = pw[i % len];
        j = (i * c) % 8;
        ctx->unk_74[j] = (s8)(ctx->unk_74[j] ^ (s8)(ctx->unk_74[i % 8] ^ key[i]));
    }
    GsSrvListCrypt_Init(ctx->unk_4bc, ctx->unk_74, 8);
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_GetRecordHeaderSize(u32 flags)
{
    s32 sz = 5;
    if (flags & 2) {
        sz += 4;
    }
    if (flags & 8) {
        sz += 4;
    }
    if (flags & 0x10) {
        sz += 2;
    }
    if (flags & 0x20) {
        sz += 2;
    }
    return sz;
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_CheckExtraPairs(u8 *buf, s32 n)
{
    s32 l;
    s32 z = 0;

    while (n > 0 && ((s8 *)buf)[z] != 0) {
        l = GsUtil_StrSizeInBuffer(buf, n);
        if (l < 0) {
            return 0;
        }
        buf += l;
        n -= l;
        l = GsUtil_StrSizeInBuffer(buf, n);
        if (l < 0) {
            return 0;
        }
        buf += l;
        n -= l;
    }
    if (n == 0) {
        return 0;
    }
    if (*(s8 *)buf == 0) {
        return 1;
    }
    return 0;
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_CheckKeyValues(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n)
{
    s32 cnt;
    s32 i;
    Unk_ov065_0228a218_Rec *rec;
    u32 c;
    s32 l;

    cnt = GsArray_Count(ctx->unk_08);
    i = 0;
    if (cnt > 0) {
        do {
            rec = (Unk_ov065_0228a218_Rec *)GsArray_At(ctx->unk_08, i);
            switch (rec->unk_04) {
            case 1:
                buf += 1;
                n -= 1;
                break;
            case 2:
                buf += 2;
                n -= 2;
                break;
            case 0:
                if (n < 1) {
                    return 0;
                }
                c = *buf;
                buf++;
                n--;
                if (c == 0xff) {
                    l = GsUtil_StrSizeInBuffer(buf, n);
                    if (l == -1) {
                        return 0;
                    }
                    buf += l;
                    n -= l;
                }
                break;
            default:
                return 0;
            }
            if (n < 0) {
                return 0;
            }
            i++;
        } while (i < cnt);
    }
    return 1;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_ReadServerAddress(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n, u32 *ip, u16 *volatile port)
{
    u32 f;
    u8 *p;

    if (n < 5) {
        goto end;
    }
    f = buf[0];
    p = buf + 1;
    ((u8 *)ip)[0] = buf[1];
    ((u8 *)ip)[1] = p[1];
    ((u8 *)ip)[2] = p[2];
    ((u8 *)ip)[3] = p[3];
    if (f & 0x10) {
        if (n - 5 < 2) {
            goto end;
        }
        u8 *d = (u8 *)port;
        p = buf + 5;
        d[0] = *(p - 5 + 5);
        d[1] = p[1];
        return;
    }
    *port = ctx->unk_4a8;
end:;
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_ParseServer(Unk_ov065_0228a218_Ctx *ctx, Unk_ov065_0228a218_Ent *ent, u8 *buf, s32 n, s32 flag)
{
    s32 cnt;
    s32 orig;
    u32 flags;
    s32 i;
    u16 tmp;
    u16 port;
    u32 ip;
    u8 *d;
    Unk_ov065_0228a218_Rec *rec;

    orig = n;
    flags = buf[0];
    GsServer_SetListFlags(ent, flags);
    buf += 5;
    n -= 5;
    if (flags & 0x10) {
        buf += 2;
        n -= 2;
    }
    if (flags & 2) {
        d = (u8 *)&ip;
        d[0] = buf[0];
        d[1] = buf[1];
        d[2] = buf[2];
        d[3] = buf[3];
        buf += 4;
        n -= 4;
    } else {
        ip = 0;
    }
    if (flags & 0x20) {
        d = (u8 *)&port;
        d[0] = buf[0];
        d[1] = buf[1];
        buf += 2;
        n -= 2;
    } else {
        port = ctx->unk_4a8;
    }
    GsServer_SetPrivateAddress(ent, ip, port);
    if (flags & 8) {
        d = (u8 *)&ip;
        d[0] = buf[0];
        d[1] = buf[1];
        d[2] = buf[2];
        d[3] = buf[3];
        buf += 4;
        n -= 4;
        func_ov065_02288d34(ent, ip);
    }
    if (flags & 0x40) {
        cnt = GsArray_Count(ctx->unk_08);
        i = 0;
        if (cnt > 0) {
            do {
                rec = (Unk_ov065_0228a218_Rec *)GsArray_At(ctx->unk_08, i);
                switch (rec->unk_04) {
                case 1:
                    GsServer_SetIntValue(ent, rec->unk_00, *buf);
                    buf++;
                    n--;
                    break;
                case 2: {
                    u16 sw;
                    d = (u8 *)&tmp;
                    d[0] = buf[0];
                    d[1] = buf[1];
                    sw = (u16)(((tmp >> 8) & 0xff) | ((tmp << 8) & 0xff00));
                    GsServer_SetIntValue(ent, rec->unk_00, sw);
                    buf += 2;
                    n -= 2;
                    break;
                }
                case 0: {
                    u32 c;
                    if (flag != 0) {
                        c = *buf;
                        buf++;
                        n--;
                    } else {
                        c = 0xff;
                    }
                    if (c == 0xff) {
                        s32 l;
                        GsServer_SetStringValue(ent, rec->unk_00, buf);
                        l = STD_GetStringLength((const char *)buf) + 1;
                        buf += l;
                        n -= l;
                    } else {
                        GsServer_SetStringValue(ent, rec->unk_00, (void *)ctx->unk_84[c]);
                    }
                    break;
                }
                }
                i++;
            } while (i < cnt);
        }
        GsServer_SetFlags(ent, (u8)(GsServer_GetFlags(ent) | 1));
    }
    flags = flags & 0x80;
    if (flags) {
        goto test;
        while (1) {
            char *p;
            s32 l;
            p = (char *)buf;
            l = STD_GetStringLength((const char *)buf) + 1;
            buf += l;
            n -= l;
            GsServer_SetStringValue(ent, p, buf);
            l = STD_GetStringLength((const char *)buf) + 1;
            buf += l;
            n -= l;
        test:
            if (*(s8 *)buf == 0) {
                break;
            }
            if (n <= 0) {
                break;
            }
        }
        n--;
        GsServer_SetFlags(ent, (u8)(GsServer_GetFlags(ent) | 2));
    }
    return orig - n;
}
}
}

namespace F0228a20c {
extern "C" {
s32 GsSrvList_ParseListServer(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n)
{
    s32 off;
    u32 flags;
    u32 ip;
    u16 port;
    Unk_ov065_0228a218_Ent *ent;
    s32 r;

    if (n < 1) {
        return 0;
    }
    flags = buf[0];
    off = GsSrvList_GetRecordHeaderSize(flags);
    if (n < off) {
        return 0;
    }
    if (flags & 0x40) {
        if (GsSrvList_CheckKeyValues(ctx, buf + off, n - off) == 0) {
            return 0;
        }
    }
    flags = flags & 0x80;
    if (flags) {
        if (GsSrvList_CheckExtraPairs(buf + off, n - off) == 0) {
            return 0;
        }
    }
    if (memcmp(buf + 1, (void *)"\377\377\377\377", 4) == 0) {
        return -1;
    }
    GsSrvList_ReadServerAddress(ctx, buf, n, &ip, &port);
    ent = GsServer_New(ctx, ip, port);
    if (GsServer_IsNull(ent) != 0) {
        return -2;
    }
    r = GsSrvList_ParseServer(ctx, ent, buf, n, 1);
    GsSrvList_AddServer(ctx, ent);
    return r;
}
}
}

namespace F0228a20c {
extern "C" {
void GsSrvList_SetErrorText(Unk_ov065_0228a218_Ctx *ctx, u32 v)
{
    ctx->unk_4ac = v;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_ParseListReply(Unk_ov065_02289808_Ctx *c) {
    u8 *p = c->unk_7c;
    s32 n = c->unk_80;
    s32 a, b, l, r;
    u8 *dd;
    u8 *sp;
    Unk_ov065_02289808_Elem e;
    switch (c->unk_5c8) {
    case 0:
        if (n < 1) goto end;
        a = (p[0] ^ 0xec) + 2;
        if (n < a) goto end;
        l = p[a - 1] ^ 0xea;
        b = a + l;
        if (n < b) goto end;
        GsSrvList_InitCrypt(c, p + a, l);
        c->unk_5c8 = 1;
        p += b;
        n -= b;
        GsSrvListCrypt_Decrypt(c->unk_4bc, p, n);
    case 1:
        if (n < 6) goto end;
        dd = c->unk_4a0;
        dd[0] = p[0];
        dd[1] = p[1];
        dd[2] = p[2];
        dd[3] = p[3];
        c->unk_488(c, 6, data_ov065_022918a8, c->unk_494);
        dd = (u8 *)&c->unk_4a8;
        sp = p + 4;
        dd[0] = sp[0];
        sp++;
        dd[1] = sp[0];
        if (*(u16 *)dd == 0xffff) {
            if (GsUtil_StrSizeInBuffer(p + 6, n - 6) == -1) goto end;
            GsSrvList_SetErrorText(c, p + 6);
            c->unk_488(c, 5, data_ov065_022918a8, c->unk_494);
            if (c->unk_7c == 0) goto end;
        }
        p += 6;
        n -= 6;
        if ((c->unk_5c4 & 2) != 0 || c->unk_4a8 == 0xffff) {
            c->unk_5c8 = 5;
            c->unk_00 = 2;
            goto end;
        }
        c->unk_5c8 = 2;
        c->unk_484 = -1;
    case 2:
        if (c->unk_484 == -1) {
            if (n < 1) goto end;
            c->unk_484 = p[0];
            c->unk_08 = GsArray_New(8, c->unk_484, 0);
            if (c->unk_08 == 0) return 5;
            p++;
            n--;
        }
        while (c->unk_484 > GsArray_Count(c->unk_08)) {
            if (n < 2) break;
            l = GsUtil_StrSizeInBuffer(p + 1, n - 1);
            if (l == -1) break;
            e.unk_04 = p[0];
            e.unk_00 = GsStrPool_Add(c, p + 1);
            GsArray_Append(c->unk_08, &e);
            l = l + 1;
            p += l;
            n -= l;
        }
        if (c->unk_484 > GsArray_Count(c->unk_08)) goto end;
        c->unk_5c8 = 3;
        c->unk_484 = -1;
    case 3:
        if (c->unk_484 == -1) {
            if (n < 1) goto end;
            c->unk_484 = p[0];
            c->unk_480 = 0;
            p++;
            n--;
        }
        while (c->unk_484 > c->unk_480) {
            l = GsUtil_StrSizeInBuffer(p, n);
            if (l == -1) break;
            b = (s32)GsStrPool_Add(c, p);
            c->unk_84[c->unk_480++] = b;
            p += l;
            n -= l;
        }
        if (c->unk_484 > c->unk_480) goto end;
        c->unk_5c8 = 4;
    case 4:
        if (n < 5) goto end;
        r = 0;
        do {
            l = GsSrvList_ParseListServer(c, p, n);
            if (l == -2) return 5;
            if (l == -1) {
                n -= 5;
                p += 5;
                c->unk_5c8 = 5;
                c->unk_00 = 2;
                c->unk_488(c, 3, data_ov065_022918a8, c->unk_494);
                goto end;
            }
            p += l;
            n -= l;
            if (c->unk_7c == 0) l = 0;
        } while (l != 0);
        break;
    default:
        break;
    }
end:
    if (c->unk_7c == 0) {
        return 0;
    }
    if (n != 0) {
        memmove(c->unk_7c, p, n);
    }
    c->unk_80 = n;
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_HandleKeyList(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    s32 cnt;
    s32 i;
    s32 l;
    Unk_ov065_02289808_Elem e;
    cnt = p[0];
    p++;
    n--;
    if (c->unk_08 != 0) {
        GsSrvList_ReleaseKeyList(c);
    }
    c->unk_08 = GsArray_New(8, cnt, 0);
    if (c->unk_08 == 0) {
        return 5;
    }
    i = 0;
    if (cnt > 0) {
        do {
            if (n < 2) {
                return 4;
            }
            l = GsUtil_StrSizeInBuffer(p + 1, n - 1);
            if (l == -1) {
                return 4;
            }
            e.unk_04 = p[0];
            e.unk_00 = GsStrPool_Add(c, p + 1);
            GsArray_Append(c->unk_08, &e);
            l = l + 1;
            p += l;
            n -= l;
            i++;
        } while (i < cnt);
    }
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_HandleMsg06(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    s32 l;
    u32 flag;
    s32 i;
    s32 cnt;
    s32 l2;
    u8 *s1;
    u8 *dd;
    u8 *s;
    u16 y;
    u32 x;
    u32 z;
    if (n < 2) {
        return 4;
    }
    flag = p[0];
    cnt = p[1];
    p += 2;
    n -= 2;
    i = 0;
    if (cnt > 0) {
        do {
            s1 = p;
            l = GsUtil_StrSizeInBuffer(p, n);
            if (l == -1) {
                return 4;
            }
            p += l;
            n -= l;
            if (n < 11) {
                return 4;
            }
            dd = (u8 *)&x;
            dd[0] = p[0];
            dd[1] = p[1];
            dd[2] = p[2];
            dd[3] = p[3];
            dd = (u8 *)&y;
            s = p + 4;
            dd[0] = s[0];
            s++;
            dd[1] = s[0];
            dd = (u8 *)&z;
            s = p + 6;
            dd[0] = s[0];
            dd[1] = s[1];
            dd[2] = s[2];
            dd[3] = s[3];
            z = HTONL(z);
            p += 10;
            n -= 10;
            l2 = GsUtil_StrSizeInBuffer(p, n);
            if (l2 == -1) {
                return 4;
            }
            c->unk_490(c, s1, x, y, z, p, c->unk_494);
            p += l2;
            n -= l2;
            i++;
        } while (i < cnt);
    }
    if (flag != 0) {
        c->unk_490(c, 0, 0, 0, 0, 0, c->unk_494);
    }
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_HandleMsg05(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    u16 b;
    u32 d;
    u32 a;
    u8 *ptrs[16];
    u8 *dd;
    u8 *s;
    s32 r;
    s32 x;
    s32 cnt;
    s32 i;
    s32 l;
    if (n < 11) {
        return 4;
    }
    dd = (u8 *)&a;
    dd[0] = p[0];
    dd[1] = p[1];
    dd[2] = p[2];
    dd[3] = p[3];
    dd = (u8 *)&b;
    s = p + 4;
    dd[0] = s[0];
    s++;
    dd[1] = s[0];
    r = GsSrvList_FindServerByAddress(c, a, b);
    if (r == -1) {
        return 0;
    }
    x = GsSrvList_GetServer(c, r);
    dd = (u8 *)&d;
    s = p + 6;
    dd[0] = s[0];
    s++;
    dd[1] = s[0];
    dd[2] = s[1];
    dd[3] = s[2];
    d = HTONL(d);
    cnt = p[10];
    p += 11;
    n -= 11;
    i = 0;
    while (i < cnt && i < 16) {
        if (n < 1) {
            break;
        }
        l = GsUtil_StrSizeInBuffer(p, n);
        if (l == -1) {
            return 4;
        }
        ptrs[i] = p;
        p += l;
        n -= l;
        i++;
    }
    if (c->unk_48c == 0) {
        return 0;
    }
    c->unk_48c(c, (void *)x, d, i, ptrs, c->unk_494);
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_HandleServerDelete(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    u32 a;
    u16 b;
    u8 *d;
    u8 *s;
    s32 r;
    if (n < 6) {
        return 4;
    }
    d = (u8 *)&a;
    d[0] = p[0];
    d[1] = p[1];
    d[2] = p[2];
    d[3] = p[3];
    d = (u8 *)&b;
    s = p + 4;
    d[0] = s[0];
    s++;
    d[1] = s[0];
    r = GsSrvList_FindServerByAddress(c, a, b);
    if (r != -1) {
        GsSrvList_RemoveServerAt(c, r);
        return 0;
    }
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_HandleServerUpdate(Unk_ov065_02289808_Ctx *c, u8 *p, s32 n) {
    u32 a;
    u16 b;
    s32 r4;
    s32 r6;
    if (n < 5) {
        return 4;
    }
    GsSrvList_ReadServerAddress(c, p, n, &a, &b);
    r4 = GsSrvList_FindServerByAddress(c, a, b);
    if (r4 == -1) {
        r6 = GsServer_New(c, a, b);
        if (GsServer_IsNull() != 0) {
            return 5;
        }
    } else {
        r6 = GsSrvList_GetServer(c, r4);
    }
    if (GsSrvList_ParseServer(c, r6, p, n, 0) < 0) {
        return 4;
    }
    if (r4 == -1) {
        GsSrvList_AddServer(c, r6);
    }
    c->unk_488(c, 1, r6, c->unk_494);
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_ProcessMessages(Unk_ov065_02289808_Ctx *c) {
    u8 *d;
    s32 r = 0;
    u16 ml;
    u8 *p;
    while (c->unk_80 >= 3) {
        {
            d = (u8 *)&ml;
            Get16(d, c->unk_7c);
            ml = HTONS(ml);
            if (ml > 0x1000) {
                r = 4;
                break;
            }
            if (c->unk_80 < ml) {
                return 0;
            }
            p = c->unk_7c;
            switch ((s8)p[2]) {
            case 0:
                break;
            case 1:
                r = GsSrvList_HandleKeyList(c, p + 3, ml - 3);
                break;
            case 2:
                r = GsSrvList_HandleServerUpdate(c, p + 3, ml - 3);
                break;
            case 3:
                if (GsSock_Send(c->unk_4b0, p, ml, 0) <= 0) {
                    return 3;
                }
                break;
            case 4:
                r = GsSrvList_HandleServerDelete(c, p + 3, ml - 3);
                break;
            case 5:
                r = GsSrvList_HandleMsg05(c, p + 3, ml - 3);
                break;
            case 6:
                r = GsSrvList_HandleMsg06(c, p + 3, ml - 3);
                break;
            }
            c->unk_80 = c->unk_80 - ml;
            if (c->unk_80 != 0 && c->unk_7c != 0) {
                memmove(c->unk_7c, c->unk_7c + ml, c->unk_80);
            }
        }
        if (r != 0) break;
    }
    if (r != 0) {
        GsSrvList_ReportError(c);
    }
    return r;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_Receive(Unk_ov065_02289808_Ctx *c) {
    s32 old;
    s32 r;
    s32 res;
    if (GsSock_CanRead(c->unk_4b0) == 0) {
        return 0;
    }
    old = c->unk_80;
    r = GsSock_Recv(c->unk_4b0, c->unk_7c + old, 0x1000 - old, 0);
    if (r == 0 || r == -1) {
        GsSrvList_ReportError(c);
        return 3;
    }
    c->unk_80 = c->unk_80 + r;
    res = 0;
    if (c->unk_00 == 2 || c->unk_5c8 > 0) {
        GsSrvListCrypt_Decrypt(c->unk_4bc, c->unk_7c + old, c->unk_80 - old);
    }
    if (c->unk_00 == 3) {
        res = GsSrvList_ParseListReply(c);
    }
    if (res != 0) {
        return res;
    }
    if (c->unk_00 == 2 && c->unk_80 > 0) {
        return GsSrvList_ProcessMessages(c);
    }
    return 0;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_SendServerMessage(Unk_ov065_02289808_Ctx *c, u32 a1, u32 a2, u8 *data, s32 len) {
    struct {
        u16 t;
        u8 pkt[9];
        u8 pad[13];
    } l;
    u8 *d;
    u8 *sp;
    s32 r;
    if (c->unk_00 == 1) {
        GsSrvList_SendListRequest(c, 0, 0, 2, 0);
    }
    if (c->unk_00 == 1) {
        return 3;
    }
    l.t = HTONS((u16)(len + 9));
    d = l.pkt;
    sp = (u8 *)&l.t;
    d[0] = sp[0];
    d[1] = sp[1];
    l.pkt[2] = 2;
    d = &l.pkt[3];
    sp = (u8 *)&a1;
    d[0] = sp[0];
    d[1] = sp[1];
    d[2] = sp[2];
    d[3] = sp[3];
    d = &l.pkt[7];
    sp = (u8 *)&a2;
    d[0] = sp[0];
    d[1] = sp[1];
    r = GsSrvList_SendToMaster(c, l.pkt, 9);
    if (r == 0) {
        if (GsSock_Send(c->unk_4b0, data, len, 0) < 0) {
            return 3;
        }
        r = 0;
    }
    return r;
}
}
}

namespace F02289808 {
extern "C" {
s32 GsSrvList_SendNatNegCookie(Unk_ov065_02289808_Ctx *c, u32 a1, u32 a2, u32 ip) {
    u8 buf[10];
    u8 *d;
    u8 *s;
    buf[0] = 0xfd;
    buf[1] = 0xfc;
    buf[2] = 0x1e;
    buf[3] = 0x66;
    buf[4] = 0x6a;
    buf[5] = 0xb2;
    ip = HTONL(ip);
    d = &buf[6];
    s = (u8 *)&ip;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    return GsSrvList_SendServerMessage(c, a1, a2, buf, 10);
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvList_ThinkLan(Unk_ov065_02289720_Sub *s) {
    struct Unk_ov065_02289720_Addr {
        u16 fam;
        u16 port;
        u32 ip;
    } addr;
    s32 len;
    u8 buf[0x5dc];
    s32 r;
    void *e;
    len = 8;
    if (GsSock_CanRead(s->unk_4b0) != 0) {
        do {
            r = GsSock_RecvFrom(s->unk_4b0, buf, 0x5db, 0, &addr, &len);
            if (r != -1) {
                r = GsSrvList_FindServerByAddress(s, addr.ip, addr.port);
                if (r == -1) {
                    e = GsServer_New(s, addr.ip, addr.port);
                    if (GsServer_IsNull(e) != 0) {
                        return 5;
                    }
                    GsServer_SetListFlags(e, 0x11);
                    GsSrvList_AddServer(s, e);
                }
            }
        } while (GsSock_CanRead(s->unk_4b0) != 0);
    }
    if (GsUtil_GetTimeMs() - s->unk_4b4 > 2000) {
        GsSock_Close(s->unk_4b0);
        s->unk_4b0 = -1;
        s->unk_00 = 1;
        s->unk_488(s, 3, data_ov065_022918a8, s->unk_494);
    }
    return 0;
}
}
}

namespace F02288e2c {
extern "C" {
s32 GsSrvList_Think(void *sub) {
    GsSrvList_FreeDeadServers(sub);
    switch (*(s32 *)sub) {
    case 2:
    case 3:
        return GsSrvList_Receive(sub);
    case 0:
        return GsSrvList_ThinkLan((Unk_ov065_02289720_Sub *)sub);
    case 1:
        break;
    }
    return 0;
}
}
}

namespace F02288e2c {
extern "C" {
void GsSrvBrowser_OnListEvent(Unk_ov065_02289578_Sub *s, s32 code, Unk_ov065_02289578_Pkt *p, Unk_ov065_02289460_Obj *o) {
    switch (code) {
    case 0:
        o->unk_630(o, 0, p, o->userData);
        if ((p->unk_14 & 3) != 0) {
            if ((p->unk_14 & 0x40) != 0) {
                break;
            }
        }
        if ((p->unk_14 & 0x2c) != 0) {
            break;
        }
        if (o->noAutoQuery != 0) {
            break;
        }
        {
            s32 m;
            if ((p->unk_15 & 1) != 0) {
                if (o->serverList == 0 || o->numQueryKeys == 0) {
                    m = 1;
                } else {
                    m = 0;
                }
            } else {
                m = 2;
            }
            GsSrvQuery_Add(o, p, 0, m);
        }
        break;
    case 1:
        if ((p->unk_14 & 0x43) == 0) {
            o->unk_630(o, 2, p, o->userData);
        } else {
            o->unk_630(o, 1, p, o->userData);
        }
        break;
    case 2:
        if ((p->unk_14 & 0x2c) != 0) {
            GsSrvQuery_Remove(o, p);
        }
        o->unk_630(o, 3, p, o->userData);
        break;
    case 3:
        if (o->disconnectOnComplete != 0) {
            GsSrvList_Disconnect(s);
        }
        if (GsArray_Count(s->unk_04) == 0 || o->numActiveQueries == 0) {
            o->unk_630(o, 4, NULL, o->userData);
        }
        break;
    case 4:
        break;
    case 5:
        o->unk_630(o, 5, NULL, o->userData);
        break;
    case 6:
        GsSrvQuery_SetPublicIp(o, o->myPublicIp);
        break;
    }
    if (p != NULL) {
        if (p->unk_00 == o->waitServerIp && p->unk_04 == o->waitServerPort) {
            o->waitServerIp = 0;
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
void GsSrvBrowser_OnQueryEvent(void *a, s32 code, Unk_ov065_02289578_Pkt *p, Unk_ov065_02289460_Obj *o) {
    switch (code) {
    case 1:
        o->unk_630(o, 2, p, o->userData);
        break;
    case 0:
        o->unk_630(o, 1, p, o->userData);
        break;
    case 2:
        o->unk_630(o, 4, p, o->userData);
        break;
    }
    if (p != NULL) {
        if (p->unk_00 == o->waitServerIp && p->unk_04 == o->waitServerPort) {
            o->waitServerIp = 0;
        }
    }
}
}
}

namespace F02288e2c {
extern "C" {
Unk_ov065_02289460_Obj *GsSrvBrowser_New(s32 a, s32 b, s32 c, s32 d, s32 s5, s32 s6, s32 s7, void *s8, void *s9) {
    Unk_ov065_02289460_Obj *o;
    if (s7 == 0 && sGsAvailStatus != 1) {
        return NULL;
    }
    o = (Unk_ov065_02289460_Obj *)GsUtil_Alloc(0x638);
    if (o == NULL) {
        return NULL;
    }
    o->unk_630 = (void (*)(Unk_ov065_02289460_Obj *, s32, void *, void *))s8;
    o->userData = s9;
    o->noAutoQuery = 0;
    GsSrvList_Init(&o->serverList, a, b, c, d, s7, (void *)GsSrvBrowser_OnListEvent, o);
    GsSrvQuery_Init(o, s5, s6, s7, (void *)GsSrvBrowser_OnQueryEvent, o);
    return o;
}
}
}

namespace F02288e2c {
extern "C" {
void GsSrvBrowser_Free(Unk_ov065_02289460_Obj *o) {
    GsSrvList_Free(&o->serverList);
    GsSrvQuery_Shutdown(o);
    GsUtil_Free(o);
}
}
}
