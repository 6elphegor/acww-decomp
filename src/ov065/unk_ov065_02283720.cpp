// mwcc-flags: -O4,p -str reuse

#include "types.h"
#include "net/Unk_ov065_022786bc_Vec.h"

extern "C" u8 data_ov065_0228df8c[16];



namespace N02282f90 {
extern "C" {


// ov065_057: GameSpy-like TCP connect / parse helpers (0x02282f90..0x02283868)

struct Unk_ov065_02282f90_Ctx {
    char errorString[0x100];
    u8 pad_100[0x418 - 0x100];
    s32 errorCode;
};

struct Unk_ov065_02282f90_Handle {
    Unk_ov065_02282f90_Ctx *connection;
};

struct Unk_ov065_02282f90_Conn {
    s32 searchType;
    s32 sock;
    s32 inputBuffer;
    s32 inputBufferCapacity;
    s32 inputBufferLength;
    s32 inputBufferPos;
    char *outputBuffer;
    s32 outputBufferCapacity;
    s32 outputBufferLength;
    s32 outputBufferPos;
    char nick[0x1f];
    char uniqueNick[0x15];
    char email[0x33];
    char firstName[0x1f];
    char lastName[0x1f];
    u8 pad_cd[0x130 - 0xcd];
    s32 icqUin;
    s32 skip;
    s32 productId;
    s32 isProcessing;
    s32 isFinished;
};

struct Unk_ov065_022831c0_Sock {
    s32 searchType;
    s32 sock;
    char *inputBuffer;
    s32 inputBufferCapacity;
};

struct Unk_ov065_022831c0_Obj {
    s32 type;
    Unk_ov065_022831c0_Sock *data;
    s32 isBlocking;
    s32 callbackFunc;
    s32 callbackParam;
    s32 state;
    s32 id;
};

struct Unk_ov065_022831c0_Host {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 **addrList;
};

struct Unk_ov065_022831c0_Addr {
    u8 unk_00;
    u8 family;
    u16 port;
    u32 addr;
};

struct Unk_ov065_022833b4_Pair {
    s32 v[2];
};

struct Unk_ov065_022833b4_Src {
    u8 pad_00[0xc];
    Unk_ov065_022833b4_Pair callback;
};

struct Unk_ov065_022837bc_Ent {
    u32 requestType;
    s32 localId;
    s32 profileId;
    s32 unk_0c;
    s32 unk_10;
    s32 userData;
    void *callback;
};

struct Unk_ov065_02283744_Buf {
    u8 b[16];
};

extern char data_ov065_0228dd84[];
extern char data_ov065_0228db1c[];
extern char data_ov065_0228dd98[];
extern char data_ov065_0228ddc0[];
extern char data_ov065_0228dadc[];
extern char data_ov065_0228ddf4[];
extern char data_ov065_0228de24[];
extern char data_ov065_0228de4c[];
extern char data_ov065_0228de54[];
extern char data_ov065_0228de60[];
extern char data_ov065_0228de64[];
extern char data_ov065_0228de7c[];
extern char data_ov065_0228de84[];
extern char data_ov065_0228deb4[];
extern char data_ov065_0228dec4[];
extern char data_ov065_0228ded4[];
extern char data_ov065_0228dee8[];
extern char data_ov065_0228df20[];
extern char data_ov065_0228df38[];
extern char data_ov065_0228df50[];
extern char data_ov065_0228df58[];
extern char data_ov065_0228df60[];
extern char data_ov065_0228df6c[];
extern char *sGsPersistXorKey;
extern char data_ov065_0228df7c[];
extern char data_ov065_0228df8c[];
extern char data_ov065_0228df9c[];
extern void *sGsPersistRequests;

extern "C" {
void GsPersist_XorCrypt(char *, s32);
s32 GsPersist_DispatchReply(char *, s32);
s32 GsPersist_FindFinal(char *, s32);
void GsUtil_StrToLower(char *);
s32 GsGp_AddOperation(void *, s32, void *, void *, s32, s32, s32);
s32 GsGp_ProcessConnection(void *, s32);
void *GsUtil_Alloc(u32);
s32 GsSock_Socket(s32, s32, s32);
s32 GsSock_SetBlocking(s32, s32);
Unk_ov065_022831c0_Host *Sock_GetHostByName(const char *);
s32 GsSock_Connect(s32, void *, s32);
s32 GsSock_GetLastError(s32);
void GsGp_CallErrorCallback(void *, s32, s32);
s32 GsGpPeer_SendTransferHeader(void *, s32, s32, void *);
s32 GsGpPeer_SendString(void *, s32, char *);
s32 GsGpPeer_SendMessageBody(void *, s32, const char *, s32);
s32 GsGp_QueueCallback(void *, Unk_ov065_022833b4_Pair, void *, void *, s32);
void GsGp_RemoveOperation(void *, void *);
s32 GsSock_Select(s32, s32, s32 *, s32 *);
s32 GsArray_Count(void *);
void GsArray_Free(void *);
void *GsArray_At(void *, s32);
void GsArray_DeleteAt(void *, s32);
char *func_0212a2ec(char *dst, const char *src, u32 n);
char *func_02129f1c(const char *, const char *);
s32 STD_GetStringLength(const char *);
s32 strncmp(const char *, const char *, u32);
s32 OS_SPrintf(char *buf, const char *fmt, ...);
s32 func_02128ca4(const char *, const char *, ...);
s32 func_0212b770(const char *);
s32 func_0212899c(void *, s32, u32);

void GsGp_SetErrorString(void *, const char *);
void GsGp_SetError(void *, s32, const char *);
void GsGp_DebugLog(void *, const char *, ...);
void GsUtil_StrCopyN(char *, const char *, s32);
s32 GsGp_GetValue(const char *, const char *, char *, s32);
s32 GsGp_CheckServerError(void *, const char *, s32);
s32 GsGpSearch_NewData(void *, void *, s32);
s32 GsGpSearch_Start(void *, void *, s32, s32, s32);
s32 GsGpSearch_Connect(void *, void *);
s32 GsGpPeer_SendTransferReply(void *, s32 *, s32, s32, const char *);
s32 GsPersist_CompleteRequest(s32, s32, s32, void *, s32);
}

static inline BOOL Unk_ov065_02283684_B(char *p) {
    if (p != NULL) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {

















typedef void (*Unk_ov065_022837bc_Cb0)(s32, s32, s32, void *, s32);
typedef void (*Unk_ov065_022837bc_Cb1)(s32, s32, s32, s32, s32, s32, void *, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb2)(s32, s32, s32, s32, s32, s32, s32);
typedef void (*Unk_ov065_022837bc_Cb3)(s32, s32, s32, s32);



}

}
}

namespace N022838c4 {
extern "C" {


// ov065_058: GameSpy-style pauthr/getpidr/setpdr reply handling, string buffer helpers (0x022838c4..0x022841a4)


struct Unk_ov065_02284100_Buf {
    char *data;
    s32 size;
    s32 len;
};

struct Unk_ov065_0228412c_Obj {
    s32 sock;
    s32 localIp;
    s32 localPort;
    s32 connections;
    s32 closedConnections;
    s32 freePending;
    s32 hasError;
    s32 callbackLevel;
    s32 connectAttemptCallback;
    s32 unk_24;
    s32 (*unk_28)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    s32 (*unk_2c)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    s32 (*unk_30)(Unk_ov065_0228412c_Obj *, s32, s32, s32, s32);
};

extern "C" {
extern Unk_ov065_022786bc_Vec *sGsPersistRequests;
extern s32 sGsPersistSocket;
extern s32 data_ov065_022910f8;
extern char *data_ov065_022910f0;
extern s32 data_ov065_02291100;
extern s32 data_ov065_022910ec;
extern volatile s32 data_ov065_022910fc;
extern char data_ov065_02291304[];
extern char *sGsPersistXorKey;



s32 strncmp(const char *, const char *, u32);
s32 func_0212b770(const char *);
char *func_02129f1c(const char *, const char *);
u32 STD_GetStringLength(const char *);
void func_021277a4(char *, const char *);
void memmove(void *, void *, u32);
void memcpy(void *, const void *, s32);
s32 rand();
void srand(s32);
s32 abs(s32);

void *GsArray_At(Unk_ov065_022786bc_Vec *, s32);
s32 GsArray_Count(Unk_ov065_022786bc_Vec *);
void GsPersist_CompleteRequest(s32, s32, s32, char *, s32);
s32 GsPersist_ProcessReceived(char *, s32);
void GsPersist_FailAllRequests();
s32 GsSock_CanRead(s32);
s32 GsSock_Recv(s32, char *, s32, s32);
void GsSock_Shutdown(s32, s32);
void GsSock_Close(s32);
void GsUtil_Free(void *);
void *GsUtil_Realloc(void *, s32);
void *GsUtil_Alloc(s32);
s32 GsUtil_GetTimeMs(u8 *);
void GsTransport_FreeSocket(Unk_ov065_0228412c_Obj *);

void GsPersist_HandleAuthReply(char *, s32);
void GsPersist_HandleGetPidReply(char *, s32);
void GsPersist_HandleGetReply(char *, s32);
s32 GsPersist_HandleSetReply(char *, s32);
s32 GsPersist_FindRequest(s32, s32, s32);
char *GsPersist_GetValueOrEmpty(char *, char *);
char *GsPersist_GetValue(char *, char *);
s32 GsPersist_CanRead(s32);
void GsPersist_Disconnect();
s32 GsTransport_IsValidChallenge(u8 *);



























}

}
}

namespace N022838c4 { extern "C" {
char *GsUtil_MakeResponse32(char *out, char *in) {
    s32 ok;
    s32 klen;
    s32 i;
    s32 j;
    klen = STD_GetStringLength("3b8dd8995f7c40a9a5c5b7dd5b481341");
    ok = GsTransport_IsValidChallenge((u8 *)in);
    i = 0;
    j = 0;
    for (; i < 0x20; i++) {
        if (ok == 0 || i == 0 || i == 0xd) {
            out[i] = rand() % 0x5d + 0x21;
        } else {
            s8 c;
            s32 t;
            s32 x;
            if (i == 1 || i == 0xe) {
                c = in[i];
            } else {
                c = in[i - 1];
            }
            t = (u8)in[i];
            x = ("3b8dd8995f7c40a9a5c5b7dd5b481341"[(i + t) % klen] + i * t) % 0x20;
            out[i] = abs((u8)in[x] ^ "3b8dd8995f7c40a9a5c5b7dd5b481341"[(c * j) % klen]) % 0x5d + 0x21;
        }
        j += 0x4647;
    }
    return out;
}
} }

extern "C" char *sGsPersistXorKey = (char *)data_ov065_0228df8c; //@
extern "C" { s32 data_ov065_02291100; } //@
namespace N022838c4 { extern "C" {
BOOL GsUtil_CompareResponse32(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (i == 0 || i == 0xd) {
            continue;
        }
        if (a[i] != b[i]) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

extern "C" u8 data_ov065_0228df7c[16] = {0x13, 0x1d, 0x01, 0x04, 0x00, 0x00, 0x00, 0x28, 0x1f, 0x06, 0x45, 0x34, 0x3f, 0x01, 0x1b, 0x00}; //@
namespace N022838c4 { extern "C" {
void GsPersist_Disconnect() {
    if (sGsPersistSocket != -1) {
        GsSock_Shutdown(sGsPersistSocket, 2);
        GsSock_Close(sGsPersistSocket);
    }
    sGsPersistSocket = -1;
    GsPersist_FailAllRequests();
    if (data_ov065_022910f0 != 0) {
        GsUtil_Free(data_ov065_022910f0);
        data_ov065_022910f0 = 0;
        data_ov065_02291100 = 0;
        data_ov065_022910ec = 0;
    }
}
} }

extern "C" { u8 data_ov065_02291104[0x100]; } //@
namespace N022838c4 { extern "C" {
s32 GsPersist_Process() {
    s32 r;
    if (sGsPersistSocket == -1) {
        return 0;
    }
    if (data_ov065_022910f8 != 5) {
        return 0;
    }
    if (GsPersist_CanRead(sGsPersistSocket) != 0) {
        do {
            if (data_ov065_02291100 - data_ov065_022910ec < 0x80) {
                if (data_ov065_02291100 < 0x100) {
                    data_ov065_02291100 = 0x100;
                } else {
                    data_ov065_02291100 = data_ov065_02291100 * 2;
                }
                data_ov065_022910f0 = (char *)GsUtil_Realloc(data_ov065_022910f0, data_ov065_02291100 + 1);
                if (data_ov065_022910f0 == 0) {
                    return 0;
                }
            }
            r = GsSock_Recv(sGsPersistSocket, data_ov065_022910f0 + data_ov065_022910ec, data_ov065_02291100 - data_ov065_022910ec, 0);
            if (r <= 0) {
                GsPersist_Disconnect();
                return 0;
            }
            data_ov065_022910ec += r;
            data_ov065_022910f0[data_ov065_022910ec] = 0;
            r = GsPersist_ProcessReceived(data_ov065_022910f0, data_ov065_022910ec);
            if (r == data_ov065_022910ec) {
                data_ov065_022910ec = 0;
            } else {
                memmove(data_ov065_022910f0, data_ov065_022910f0 + r, data_ov065_022910ec - r);
                data_ov065_022910ec -= r;
            }
        } while (GsPersist_CanRead(sGsPersistSocket) != 0);
    }
    if (sGsPersistSocket == -1) {
        return 0;
    }
    return 1;
}
} }

extern "C" { s32 data_ov065_022910ec; } //@
namespace N022838c4 { extern "C" {
void GsPersist_XorCrypt(char *p, s32 n) {
    s32 i;
    char *k;
    k = sGsPersistXorKey;
    for (i = 0; i < n; i++) {
        p[i] ^= *k++;
        if (k[0] == 0) {
            k = sGsPersistXorKey;
        }
    }
}
} }

namespace N022838c4 { extern "C" {
char *GsPersist_GetValue(char *s, char *key) {
    char buf[256] = "\\";
    char *f;
    char *d;
    data_ov065_022910fc ^= 1;
    func_021277a4(buf, key);
    func_021277a4(buf, "\\");
    f = func_02129f1c(s, buf);
    if (f == 0) {
        return 0;
    }
    f += STD_GetStringLength(buf);
    {
        char *r = data_ov065_02291304 + (data_ov065_022910fc << 8);
        d = r;
        while (*f != 0 && *f != '\\') {
            *d++ = *f++;
        }
        *d = 0;
        return r;
    }
}
} }

extern "C" u8 data_ov065_0228df8c[16] = {0x00, 0x61, 0x6d, 0x65, 0x53, 0x70, 0x79, 0x33, 0x44, 0, 0, 0, 0, 0, 0, 0}; //@
namespace N022838c4 { extern "C" {
char *GsPersist_GetValueOrEmpty(char *s, char *key) {
    char *r = GsPersist_GetValue(s, key);
    if (r == 0) {
        r = "";
    }
    return r;
}
} }

namespace N022838c4 { extern "C" {
s32 GsPersist_CanRead(s32 a) {
    return GsSock_CanRead(a);
}
} }

namespace N022838c4 { extern "C" {
char *GsPersist_FindFinal(char *s, s32 len) {
    char *p = s;
    s32 n = len - 6;
    if (n > 0) {
        do {
            if (p[0] == '\\' && p[1] == 'f' && p[2] == 'i' && p[3] == 'n' && p[4] == 'a' && p[5] == 'l' && p[6] == '\\') {
                return p;
            }
            p++;
        } while (p - s < n);
    }
    return 0;
}
} }

namespace N022838c4 { extern "C" {
s32 GsPersist_FindRequest(s32 a, s32 b, s32 c) {
    s32 i;
    if (sGsPersistRequests == 0) {
        return -1;
    }
    i = 0;
    if (i < GsArray_Count(sGsPersistRequests)) {
        do {
            s32 *e = (s32 *)GsArray_At(sGsPersistRequests, i);
            if (e[0] == a && e[1] == b && e[2] == c) {
                return i;
            }
            i++;
        } while (i < GsArray_Count(sGsPersistRequests));
    }
    return -1;
}
} }

extern "C" u8 data_ov065_0228df9c[16] = {0x00, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x41, 0x70, 0x68, 0x65, 0x78, 0, 0, 0, 0}; //@
namespace N022838c4 { extern "C" {
void GsPersist_HandleAuthReply(char *s, s32 len) {
    s32 a = func_0212b770(GsPersist_GetValueOrEmpty(s, "pauthr"));
    s32 b = func_0212b770(GsPersist_GetValueOrEmpty(s, "lid"));
    char *m = GsPersist_GetValueOrEmpty(s, "errmsg");
    s32 i = GsPersist_FindRequest(0, b, 0);
    if (i != -1) {
        s32 *e = (s32 *)GsArray_At(sGsPersistRequests, i);
        e[2] = a;
        GsPersist_CompleteRequest(i, a > 0 ? 1 : 0, 0, m, 0);
    }
}
} }

namespace N022838c4 { extern "C" {
void GsPersist_HandleGetPidReply(char *s, s32 len) {
    s32 i;
    s32 a = func_0212b770(GsPersist_GetValueOrEmpty(s, "getpidr"));
    s32 b = func_0212b770(GsPersist_GetValueOrEmpty(s, "lid"));
    i = GsPersist_FindRequest(3, b, 0);
    if (i != -1) {
        s32 *e = (s32 *)GsArray_At(sGsPersistRequests, i);
        e[2] = a;
        GsPersist_CompleteRequest(i, a > 0 ? 1 : 0, 0, 0, 0);
    }
}
} }

extern "C" { s32 data_ov065_022910f8; } //@
namespace N022838c4 { extern "C" {
void GsPersist_HandleGetReply(char *s, s32 len) {
    s32 a = func_0212b770(GsPersist_GetValueOrEmpty(s, "getpdr"));
    s32 b = func_0212b770(GsPersist_GetValueOrEmpty(s, "lid"));
    s32 c = func_0212b770(GsPersist_GetValueOrEmpty(s, "pid"));
    s32 d = func_0212b770(GsPersist_GetValueOrEmpty(s, "mod"));
    s32 i = GsPersist_FindRequest(1, b, c);
    if (i != -1) {
        s32 e = func_0212b770(GsPersist_GetValueOrEmpty(s, "length"));
        char *p = func_02129f1c(s, "\\data\\");
        char *q;
        if (p == 0) {
            e = 0;
            q = "";
        } else {
            q = p + 6;
        }
        GsPersist_CompleteRequest(i, a, d, q, e);
    }
}
} }

namespace N022838c4 { extern "C" {
s32 GsPersist_HandleSetReply(char *s, s32 len) {
    s32 a = func_0212b770(GsPersist_GetValueOrEmpty(s, "setpdr"));
    s32 b = func_0212b770(GsPersist_GetValueOrEmpty(s, "pid"));
    s32 c = func_0212b770(GsPersist_GetValueOrEmpty(s, "lid"));
    s32 d = func_0212b770(GsPersist_GetValueOrEmpty(s, "mod"));
    s32 i = GsPersist_FindRequest(2, c, b);
    if (i != -1) {
        GsPersist_CompleteRequest(i, a, d, 0, 0);
    }
}
} }

extern "C" { char data_ov065_02291304[0x200]; } //@
namespace N022838c4 { extern "C" {
void GsPersist_DispatchReply(char *s, s32 len) {
    s[len] = 0;
    if (strncmp(s, "\\pauthr\\", 8) == 0) {
        GsPersist_HandleAuthReply(s, len);
    } else if (strncmp(s, "\\getpidr\\", 9) == 0) {
        GsPersist_HandleGetPidReply(s, len);
    } else if (strncmp(s, "\\getpidr\\", 9) == 0) {
        GsPersist_HandleGetPidReply(s, len);
    } else if (strncmp(s, "\\getpdr\\", 8) == 0) {
        GsPersist_HandleGetReply(s, len);
    } else if (strncmp(s, "\\setpdr\\", 8) == 0) {
        GsPersist_HandleSetReply(s, len);
    }
}
} }

extern "C" s32 sGsPersistSocket = -1; //@
namespace N02282f90 { extern "C" {
s32 GsPersist_ProcessReceived(char *p, s32 n) {
    s32 total = n;
    char *q = (char *)GsPersist_FindFinal(p, n);
    while (n > 0 && q != NULL) {
        s32 len;
        sGsPersistXorKey = data_ov065_0228df8c;
        len = q - p;
        GsPersist_XorCrypt(p, len);
        GsPersist_DispatchReply(p, len);
        n -= len + 7;
        p = q + 7;
        if (n > 0) {
            q = (char *)GsPersist_FindFinal(p, n);
        }
    }
    return total - n;
}
} }

namespace N02282f90 { extern "C" {
s32 GsPersist_CompleteRequest(s32 idx, s32 a, s32 b, void *p3, s32 p4) {
    if (idx >= 0 && idx < GsArray_Count(sGsPersistRequests)) {
        Unk_ov065_022837bc_Ent *e = (Unk_ov065_022837bc_Ent *)GsArray_At(sGsPersistRequests, idx);
        void *cb = e->callback;
        if (cb != NULL) {
            switch (e->requestType) {
            case 0:
                ((Unk_ov065_022837bc_Cb0)cb)(e->localId, e->profileId, a, p3, e->userData);
                break;
            case 1:
                ((Unk_ov065_022837bc_Cb1)cb)(e->localId, e->profileId, e->unk_0c, e->unk_10, a, b, p3, p4, e->userData);
                break;
            case 2:
                ((Unk_ov065_022837bc_Cb2)cb)(e->localId, e->profileId, e->unk_0c, e->unk_10, a, b, e->userData);
                break;
            case 3:
                ((Unk_ov065_022837bc_Cb3)cb)(e->localId, e->profileId, a, e->userData);
                break;
            }
        }
        GsArray_DeleteAt(sGsPersistRequests, idx);
    }
}
} }

extern "C" { volatile s32 data_ov065_022910fc; } //@
extern "C" { char *data_ov065_022910f0; } //@
namespace N02282f90 { extern "C" {
void GsPersist_FailAllRequests(void) {
    if (sGsPersistRequests != NULL) {
        s32 i = GsArray_Count(sGsPersistRequests) - 1;
        if (i >= 0) {
            do {
                Unk_ov065_02283744_Buf buf = *(Unk_ov065_02283744_Buf *)data_ov065_0228df7c;
                sGsPersistXorKey = data_ov065_0228df9c;
                GsPersist_XorCrypt((char *)&buf, 15);
                GsPersist_CompleteRequest(i, 0, 0, &buf, 0);
                i--;
            } while (i >= 0);
        }
        GsArray_Free(sGsPersistRequests);
        sGsPersistRequests = NULL;
    }
}
} }

namespace N02282f90 { extern "C" {
void GsUtil_StrCopyN(char *dst, const char *src, s32 n) {
    func_0212a2ec(dst, src, n);
    *(dst + n - 1) = 0;
}
} }

namespace N02282f90 { extern "C" {
void GsGp_DebugLog(void *h, const char *fmt, ...) {
}
} }

extern "C" { u8 data_ov065_02291204[0x100]; } //@

extern "C" { void *sGsPersistRequests; } //@
