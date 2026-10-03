// mwcc-flags: -O4,p -str reuse

#include "types.h"

extern "C" { u8 data_ov065_0228e14c[4] = {0xfe, 0xfe, 0, 0}; }



namespace N022838c4 {
extern "C" {


// ov065_058: GameSpy-style pauthr/getpidr/setpdr reply handling, string buffer helpers (0x022838c4..0x022841a4)

struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_02284100_Buf {
    char *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_0228412c_Obj {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
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
extern char data_ov065_0228e128[];
extern char data_ov065_0228e108[];

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

namespace N02284240 {
extern "C" {


// ov065_059: GT2-like connection callbacks / state (0x02284240..0x02284a80)

struct Unk_ov065_02284240_Sock {
    u8 pad_00[8];
    u16 unk_08;
    u8 pad_0a[2];
    void *unk_0c;
    void *unk_10;
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    s32 (*unk_20)(Unk_ov065_02284240_Sock *, void *, s32, s32, s32, s32, s32);
    s32 (*unk_24)(Unk_ov065_02284240_Sock *);
};

struct Unk_ov065_02284240_Conn;

typedef s32 (*Unk_ov065_02284240_Filter)(Unk_ov065_02284240_Conn *, s32, u32, u32, u32);

struct Unk_ov065_02284240_Blob {
    s32 v[4];
};

struct Unk_ov065_02284240_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02284240_Sock *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s32 unk_24;
    s32 (*unk_28)(Unk_ov065_02284240_Conn *, s32, s32, s32);
    s32 (*unk_2c)(Unk_ov065_02284240_Conn *, s32, s32, s32);
    s32 (*unk_30)(Unk_ov065_02284240_Conn *, s32);
    s32 (*unk_34)(Unk_ov065_02284240_Conn *, s32);
    void *unk_38;
    s32 unk_3c;
    s32 unk_40;
    void *unk_44;
    u8 pad_48[8];
    void *unk_50;
    s32 unk_54;
    s32 unk_58;
    void *unk_5c;
    void *unk_60;
    u8 pad_64[0x88 - 0x64];
    u32 unk_88;
    u8 pad_8c[4];
    s32 unk_90;
    u32 unk_94;
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov065_02284908_Buf {
    u32 v[9];
};

namespace Unk_ov065_02284a80_Ns {
extern "C" s32 GsTransport_NewOutgoing(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port);
}

extern "C" {
extern void *GsArray_At(void *, s32);
extern s32 GsArray_Count(void *);
extern void GsArray_Free(void *);
extern void GsUtil_Free(void *);
extern void *GsUtil_Alloc(s32);
extern s32 GsHash_Remove(void *, void *);
extern s32 GsArray_Append(void *, void *);
extern s32 GsHash_ForEach(s32, void *, s32);
extern s32 GsUtil_GetTimeMs();
extern void GsUtil_Sleep(s32);
extern void memcpy(void *, const void *, s32);

extern s32 GsTransport_FreeSocket(void *);
extern s32 GsTransport_SendTo(void *, s32, u32, u32, u32);
extern s32 GsTransport_Release(void *);
extern s32 GsTransport_NewConnection(void *, void *, u32, u32);
extern void GsTransport_FixMessage(void *, void *);
extern s32 GsTransport_ParseAddress(u32, u32 *, u16 *);

extern void GsTransport_MakeChallenge(void *);
extern void GsUtil_MakeResponse32(void *, void *);
extern void GsTransport_SendClientChallenge(void *, void *);
extern s32 GsTransport_Think(void *);
extern s32 GsTransport_SendMessage(void *, s32, s32, s32);
extern s32 GsTransport_ResendMessage(void *, void *);
extern void GsTransport_SendClosed(void *);
extern s32 GsTransport_SendPing(Unk_ov065_02284240_Conn *);
extern s32 GsTransport_SendAck(void *);
extern s32 GsTransport_SendKeepAlive(void *);
extern void GsTransport_SendClose(void *);
extern void GsTransport_SendReject(void *, s32, s32);
extern void GsTransport_SendAccept(void *);

s32 GsTransport_CallRecvFilter(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel);
s32 GsTransport_CallSendFilter(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel);
s32 GsTransport_CallClosedCb(Unk_ov065_02284240_Conn *c, s32 a);
s32 GsTransport_CallConnectedCb(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d);
void GsTransport_MarkClosed(Unk_ov065_02284240_Conn *c, ...);
void GsTransport_CloseConnection(Unk_ov065_02284240_Conn *c, s32 x);
s32 GsTransport_CheckKeepAlive(Unk_ov065_02284240_Conn *c, u32 t);
s32 GsTransport_CheckAck(Unk_ov065_02284240_Conn *c, u32 t);
s32 GsTransport_ResendUnacked(Unk_ov065_02284240_Conn *c, u32 t);
s32 GsTransport_CheckConnectTimeout(Unk_ov065_02284240_Conn *c, u32 t);
s32 GsTransport_SendRaw(Unk_ov065_02284240_Conn *c, u32 a, u32 b);
s32 GsTransport_StartConnect(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, Unk_ov065_02284240_Blob *x);
s32 GsTransport_NewOutgoing(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port);
void GsTransport_CloseAllCb(Unk_ov065_02284240_Conn **p);
void GsTransport_CloseHard(Unk_ov065_02284240_Conn *c);



































}

}
}

namespace N02284b8c {
extern "C" {


// ov065_060: GameSpy-style (SOCKS5-like) connection handshake builders and UDP receive path (0x02284b8c..0x02285440)

struct Unk_ov065_02284c0c_Vec;

struct Unk_ov065_02284c0c_Buf {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_02285398_Sock;
typedef Unk_ov065_02285398_Sock Sock;

struct Unk_ov065_02284c0c_Conn {
    s32 unk_00;
    u16 unk_04;
    u16 unk_06;
    Sock *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
    u32 unk_38[6];
    Unk_ov065_02284c0c_Buf unk_50;
    s32 unk_5c;
    Unk_ov065_02284c0c_Vec *unk_60;
    u16 unk_64;
    u16 unk_66;
    u32 unk_68[8];
    s32 unk_88;
    s32 unk_8c;
    s32 unk_90;
};

struct Unk_ov065_02285398_Sock {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2c;
};

typedef Unk_ov065_02284c0c_Conn Conn;
typedef Unk_ov065_02284c0c_Buf Buf;

extern "C" {
extern u8 data_ov065_0228e14c[];


s32 memcmp(const void *, const void *, s32);

s32 GsTransport_DoReject(Conn *, s32, s32);
s32 GsTransport_DoAccept(Conn *, void *);
s32 GsTransport_SetConnectAttemptCallback(void *);
s32 GsTransport_ThinkAll(Sock *);
s32 GsTransport_FreeClosed(Sock *);
s32 GsTransport_OnSocketError(Sock *);
s32 GsTransport_CloseAll(Conn *);
s32 GsTransport_FreeSocket(Conn *);
s32 GsTransport_CreateSocketImpl(s32, s32, s32, s32, s32);
s32 GsTransport_WriteU16(u8 *, s32, s32);
s32 GsTransport_SendRaw(Conn *, u8 *, s32);
s32 GsUtil_GetTimeMs();
s32 GsTransport_SendTo(Sock *, s32, s32, u8 *, s32);
s32 GsTransport_BufAppend(Buf *, const u8 *, s32);
s32 GsTransport_BufAppendU16(Buf *, s32);
s32 GsTransport_BufAppendU8(Buf *, s32);
s32 GsTransport_BufFreeSpace(Buf *);
s32 GsTransport_BufRemove(Buf *, s32, s32);
s32 GsArray_Count(Unk_ov065_02284c0c_Vec *);
void *GsArray_At(Unk_ov065_02284c0c_Vec *, s32);
void GsArray_Append(Unk_ov065_02284c0c_Vec *, void *);
s32 GsTransport_AbortConnection(Conn *);
s32 GsSock_CanRead(s32);
s32 GsSock_RecvFrom(s32, u8 *, s32, s32, void *, s32 *);
s32 GsSock_GetLastError(s32);
Conn *GsTransport_FindConnection(Sock *, s32, s32);
s32 GsTransport_CallDumpCb(Sock *, Conn *, s32, s32, s32, s32, s32, s32);
s32 GsTransport_CallUnknownSenderCb(Sock *, s32, s32, u8 *, s32, s32 *);
s32 GsTransport_NewIncoming(Sock *, Conn **, s32, s32);
s32 GsTransport_ConnectionClosed(Conn *, s32, s32);
s32 GsTransport_HandleUnreliableData(Conn *, u8 *, s32);
s32 GsTransport_ProtocolError(Conn *);
s32 GsTransport_HandleReliable(Conn *, s32, u8 *, s32);
s32 GsTransport_HandleControl(Conn *, s32, u8 *, s32);

s32 GsTransport_SendClosedTo(Sock *, s32, s32);
s32 GsTransport_SendClosed(Conn *);
s32 GsTransport_BeginReliable(Conn *, u32, s32, s32 *);
s32 GsTransport_SendLastRecord(Conn *);
s32 GsTransport_AddOutRecord(Conn *, u32, s32);
s32 GsTransport_ReceiveAll(Sock *);
s32 GsTransport_OnConnectionReset(Sock *, s32, u32);
s32 GsTransport_HandlePacket(Sock *, u8 *, s32, s32, s32);
s32 GsTransport_SendReliable(Conn *, u8 *, s32);
s32 GsTransport_SendUnreliable(Conn *, u8 *, s32);
s32 GsTransport_SendReject(Conn *, u8 *, s32);


























struct Unk_ov065_02285264_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};


struct Unk_ov065_022852b8_Addr {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
};

static inline u16 Swap16(u16 p) {
    return ((p >> 8) & 0xff) | ((p << 8) & 0xff00);
}



}

}
}

namespace N02285630 {
extern "C" {


// ov065_061: SSL/TLS-like handshake state machine (0x02285630..0x02285eb8)

struct Unk_ov065_02285630_Item {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
};

struct Unk_ov065_02285630_Item8 {
    u8 pad_00[8];
    u16 unk_08;
};

struct Unk_ov065_02285630_Peer {
    u8 pad_00[0x20];
    s32 unk_20;
};

struct Unk_ov065_02285630_Buf {
    u8 *unk_00;
    s32 unk_04;
};

struct Unk_ov065_02285630_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02285630_Peer *unk_08;
    s32 unk_0c;
    u8 pad_10[0x24];
    s32 unk_34;
    void *unk_38;
    s32 unk_3c;
    u8 pad_40[4];
    Unk_ov065_02285630_Buf unk_44;
    s32 unk_4c;
    u8 pad_50[0xc];
    void *unk_5c;
    void *unk_60;
    u8 pad_64[2];
    u16 unk_66;
    u8 unk_68[0x24];
    s32 unk_8c;
    s32 unk_90;
    s32 unk_94;
};

struct Unk_ov065_022856f8_B4 { u8 a, b, c, d; };

typedef Unk_ov065_02285630_Conn Cn;
typedef Unk_ov065_02285630_Item It;

extern "C" {

s32 memcmp(void *, const void *, u32);
s32 GsUtil_Free(void *);
s32 GsArray_At(void *, s32);
s32 GsArray_Count(void *);
s32 GsArray_DeleteAt(void *, s32);
s32 GsArray_InsertSorted(void *, void *, void *);
s32 GsUtil_GetTimeMs();
s32 GsUtil_CompareResponse32(void *, void *);
s32 GsUtil_MakeResponse32(void *, void *);
s32 GsTransport_MakeChallenge(void *);
s32 GsTransport_BufRemove(void *, s32, s32);
s32 GsTransport_BufAppend(void *, void *, s32);
s32 GsTransport_BufFreeSpace(void *);
s32 GsTransport_CallPingCb(Cn *, s32);
s32 GsTransport_CallConnectedCb(Cn *, s32, void *, s32);
s32 GsTransport_CallConnectAttemptCb(void *, Cn *, s32, s32, s32, void *, s32);
s32 GsTransport_MarkClosed(Cn *);
s32 GsTransport_ResendMessage(Cn *, void *);
s32 GsTransport_SendClosed(Cn *);
s32 GsTransport_SendPong(Cn *, void *, s32);
s32 GsTransport_SendNack(Cn *, u16, u16);
s32 GsTransport_SendClientResponse(Cn *, void *, void *, s32);
s32 GsTransport_SendServerChallenge(Cn *, void *, void *);
s32 GsTransport_AbortConnection(Cn *);
s32 GsTransport_ProtocolError(Cn *);
s32 GsTransport_ConnectionClosed(Cn *, s32, s32);
s32 GsTransport_SeqDiff(u32, u32);
s32 GsTransport_ReadU16(void *, s32);
s32 GsTransport_ProcessAck(Cn *, s32);

s32 GsTransport_HandleAck(Cn *c, void *p, s32 n);
s32 GsTransport_HandleNack(Cn *c, void *p, s32 n);
s32 GsTransport_HandlePing(Cn *c, void *p, s32 n);
s32 GsTransport_HandlePong(Cn *c, void *p, s32 n);
s32 GsTransport_HandleClosed(Cn *c);
void GsTransport_ScheduleAck(Cn *c);
s32 GsTransport_DeliverQueued(Cn *c);
void GsTransport_RemoveInRecord(Cn *c, It *e, s32 i);
s32 GsTransport_StoreOutOfOrder(Cn *c, s32 a, u32 seq, void *p, s32 n, s32 *out);
s32 GsTransport_CompareInRecord(It *a, It *b);
s32 GsTransport_DispatchReliable(Cn *c, s32 mode, void *p, s32 n);
s32 GsTransport_HandleRemoteClose(Cn *c);
s32 GsTransport_HandleRejected(Cn *c, void *p, s32 n);
s32 GsTransport_HandleAccepted(Cn *c);
s32 GsTransport_HandleClientResponse(Cn *c, void *p, s32 n);
s32 GsTransport_HandleServerChallenge(Cn *c, void *p, s32 n);
s32 GsTransport_HandleClientChallenge(Cn *c, void *p, s32 n);
s32 GsTransport_HandleReliableData(Cn *c, void *p, s32 n);



















}

}
}

namespace N02285630 { extern "C" {
BOOL GsTransport_HandlePong(Cn *c, void *p, s32 n)
{
    Unk_ov065_022856f8_B4 t;
    s32 now;
    if (c->unk_34 == 0) return TRUE;
    if (n != 8) return TRUE;
    if (memcmp(p, (u8 *)"time", 4) != 0) return TRUE;
    u32 a = (u32)&t;
    Unk_ov065_022856f8_B4 *q = (Unk_ov065_022856f8_B4 *)((u8 *)p + 4);
    ((Unk_ov065_022856f8_B4 *)a)->a = q->a;
    ((Unk_ov065_022856f8_B4 *)a)->b = q->b;
    ((Unk_ov065_022856f8_B4 *)a)->c = q->c;
    ((Unk_ov065_022856f8_B4 *)a)->d = q->d;
    now = ((s32 (*)(void *))GsUtil_GetTimeMs)((void *)a);
    if (GsTransport_CallPingCb(c, now - *(s32 *)&t) != 0) return TRUE;
    return FALSE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleClosed(Cn *c)
{
    if (c->unk_0c == 7) return TRUE;
    s32 f;
    switch (c->unk_0c) { case 6: f = 0; break; default: f = 1; break; }
    if (GsTransport_ConnectionClosed(c, 2, f) == 0) return FALSE;
    return TRUE;
}
} }

namespace N02285630 { extern "C" {
BOOL GsTransport_HandleControl(Cn *c, s32 t, s32 a, s32 b)
{
    s32 x = a + 3;
    s32 y = b - 3;
    if (t == 100) {
        if (GsTransport_HandleAck(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 101) {
        if (GsTransport_HandleNack(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 102) {
        if (GsTransport_HandlePing(c, (void *)a, b) == 0) return FALSE;
    } else if (t == 103) {
        if (GsTransport_HandlePong(c, (void *)x, y) == 0) return FALSE;
    } else if (t == 104) {
        if (GsTransport_HandleClosed(c) == 0) return FALSE;
    }
    return TRUE;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_HandlePacket(Sock *s, u8 *data, s32 n, s32 addr, s32 port) {
    Conn *c = GsTransport_FindConnection(s, addr, port);
    s32 flag;
    s32 out;
    if (s->unk_2c != 0) {
        if (GsTransport_CallDumpCb(s, c, addr, port, 0, (s32)data, n, 0) == 0) {
            return 0;
        }
    }
    if (n > 2 && memcmp(data, data_ov065_0228e14c, 2) == 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (c == 0) {
        if (GsTransport_CallUnknownSenderCb(s, addr, port, data, n, &out) == 0) {
            return 0;
        }
        if (out != 0) {
            return 1;
        }
        if (!(flag != 0 && data[2] == 1)) {
            if (flag == 0 || data[2] != 0x68) {
                if (GsTransport_SendClosedTo(s, addr, port) == 0) {
                    return 0;
                }
            }
            return 1;
        } else {
            if (s->unk_20 == 0) {
                return 1;
            }
            s32 r = GsTransport_NewIncoming(s, &c, addr, port);
            if (r != 0) {
                if (r != 5) {
                    if (GsTransport_SendClosedTo(s, addr, port) == 0) {
                        return 0;
                    }
                }
                return 1;
            }
        }
    }
    Conn *k = c;
    if (k->unk_0c == 7) {
        if (flag == 0 || data[2] != 0x68) {
            if (GsTransport_SendClosed(k) == 0) {
                return 0;
            }
        }
        return 1;
    }
    if (flag != 0 && n >= 4 && memcmp(data + 2, data_ov065_0228e14c, 2) == 0) {
        data += 2;
        n -= 2;
        flag = 0;
    }
    if (flag == 0) {
        if (GsTransport_HandleUnreliableData(k, data, n) != 0) {
            return 1;
        }
        return 0;
    }
    s32 t = data[2];
    if (t < 0) {
        if (GsTransport_ProtocolError(k) != 0) {
            return 1;
        }
        return 0;
    }
    if (t < 8) {
        if (GsTransport_HandleReliable(k, t, data, n) != 0) {
            return 1;
        }
        return 0;
    }
    if (GsTransport_HandleControl(k, t, data, n) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_OnConnectionReset(Sock *s, s32 addr, u32 port) {
    Conn *c = GsTransport_FindConnection(s, addr, port);
    if (s->unk_2c != 0) {
        if (GsTransport_CallDumpCb(s, c, addr, port, 1, 0, 0, 0) == 0) {
            return 0;
        }
    }
    if (c == 0) {
        return 1;
    }
    if (c->unk_0c == 0) {
        if (c->unk_20 == 0 || (u32)(GsUtil_GetTimeMs() - c->unk_1c) < c->unk_20) {
            return 1;
        }
        if (GsTransport_ConnectionClosed(c, 6, 1) == 0) {
            return 0;
        }
    } else {
        if (GsTransport_ConnectionClosed(c, 2, 1) == 0) {
            return 0;
        }
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_ReceiveAll(Sock *s) {
    Unk_ov065_022852b8_Addr a;
    s32 len;
    u8 buf[0x5dc];
    if (GsSock_CanRead(s->unk_00) != 0) {
        do {
            len = 8;
            s32 n = GsSock_RecvFrom(s->unk_00, buf, 0x5dc, 0, &a, &len);
            s32 m = -1;
            if (n == m) {
                s32 e = GsSock_GetLastError(s->unk_00);
                if (e == -15) {
                    if (GsTransport_OnConnectionReset(s, a.unk_04, Swap16(a.unk_02)) == 0) {
                        return 0;
                    }
                } else if (e != -35) {
                    GsTransport_OnSocketError(s);
                    return 0;
                }
            } else {
                if (GsTransport_HandlePacket(s, buf, n, a.unk_04, Swap16(a.unk_02)) == 0) {
                    return 0;
                }
            }
        } while (GsSock_CanRead(s->unk_00) != 0);
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_AddOutRecord(Conn *o, u32 seq, s32 need) {
    Unk_ov065_02285264_Rec r = {0, 0, 0, 0};
    r.unk_00 = o->unk_50.unk_08;
    r.unk_04 = need;
    *(u16 *)&r.unk_08 = seq;
    r.unk_0c = GsUtil_GetTimeMs();
    s32 c = GsArray_Count(o->unk_60);
    GsArray_Append(o->unk_60, &r);
    if (c + 1 == GsArray_Count(o->unk_60)) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_BeginReliable(Conn *o, u32 type, s32 need, s32 *out) {
    if (GsTransport_BufFreeSpace(&o->unk_50) < need) {
        if (GsTransport_AbortConnection(o) == 0) {
            return 0;
        }
        *out = 1;
        return 1;
    }
    if (GsTransport_AddOutRecord(o, o->unk_64, need) == 0) {
        if (GsTransport_AbortConnection(o) == 0) {
            return 0;
        }
        *out = 1;
        return 1;
    }
    GsTransport_BufAppend(&o->unk_50, data_ov065_0228e14c, 2);
    GsTransport_BufAppendU8(&o->unk_50, (u8)type);
    s32 seq = o->unk_64;
    o->unk_64 = *(volatile u16 *)&o->unk_64 + 1;
    GsTransport_BufAppendU16(&o->unk_50, seq);
    GsTransport_BufAppendU16(&o->unk_50, o->unk_66);
    *out = 0;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendLastRecord(Conn *o) {
    s32 c = GsArray_Count(o->unk_60);
    s32 *it = (s32 *)GsArray_At(o->unk_60, c - 1);
    if (GsTransport_SendRaw(o, o->unk_50.unk_00 + it[0], it[1]) == 0) {
        return 0;
    }
    o->unk_90 = 0;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendReliable(Conn *o, u8 *a, s32 n) {
    s32 r;
    if (GsTransport_BeginReliable(o, 0, n + 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    GsTransport_BufAppend(&o->unk_50, a, n);
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendClientChallenge(Conn *o, u8 *a) {
    s32 r;
    if (GsTransport_BeginReliable(o, 1, 0x27, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    GsTransport_BufAppend(&o->unk_50, a, 0x20);
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendServerChallenge(Conn *o, u8 *a, u8 *b) {
    s32 r;
    if (GsTransport_BeginReliable(o, 2, 0x47, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    GsTransport_BufAppend(&o->unk_50, a, 0x20);
    GsTransport_BufAppend(&o->unk_50, b, 0x20);
    if (GsTransport_SendLastRecord(o) == 0) {
        return 0;
    }
    o->unk_8c = o->unk_88;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendClientResponse(Conn *o, u8 *a, u8 *b, s32 n) {
    s32 r;
    if (GsTransport_BeginReliable(o, 3, n + 0x27, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    GsTransport_BufAppend(&o->unk_50, a, 0x20);
    GsTransport_BufAppend(&o->unk_50, b, n);
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendAccept(Conn *o) {
    s32 r;
    if (GsTransport_BeginReliable(o, 4, 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendReject(Conn *o, u8 *a, s32 n) {
    s32 r;
    if (GsTransport_BeginReliable(o, 5, n + 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    GsTransport_BufAppend(&o->unk_50, a, n);
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendClose(Conn *o) {
    s32 r;
    if (GsTransport_BeginReliable(o, 6, 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendKeepAlive(Conn *o) {
    s32 r;
    if (GsTransport_BeginReliable(o, 7, 7, &r) == 0) {
        return 0;
    }
    if (r != 0) {
        return 1;
    }
    if (GsTransport_SendLastRecord(o) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendUnreliable(Conn *o, u8 *data, s32 n) {
    s32 t;
    s32 total;
    if (n < 2 || memcmp(data, data_ov065_0228e14c, 2) != 0) {
        if (GsTransport_SendRaw(o, data, n) == 0) {
            return 0;
        }
        return 1;
    }
    total = n + 2;
    if (GsTransport_BufFreeSpace(&o->unk_50) < total) {
        return 1;
    }
    t = (s32)o->unk_50.unk_00 + o->unk_50.unk_08;
    GsTransport_BufAppend(&o->unk_50, data_ov065_0228e14c, 2);
    GsTransport_BufAppend(&o->unk_50, data, n);
    if (GsTransport_SendRaw(o, (u8 *)t, total) == 0) {
        return 0;
    }
    GsTransport_BufRemove(&o->unk_50, -1, total);
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendAck(Conn *o) {
    u8 buf[5];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x64;
    GsTransport_WriteU16(buf, 3, o->unk_66);
    if (GsTransport_SendRaw(o, buf, 5) == 0) {
        return 0;
    }
    o->unk_90 = 0;
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendNack(Conn *o, s32 a, s32 b) {
    u8 buf[8];
    s32 n = 0;
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x65;
    GsTransport_WriteU16(buf, 3, a);
    n += 5;
    if (a != b) {
        GsTransport_WriteU16(buf, n, b);
        n += 2;
    }
    if (GsTransport_SendRaw(o, buf, n) == 0) {
        return 0;
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendPing(Conn *o) {
    u32 t;
    u8 buf[11];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x66;
    u8 *const q = buf + 3;
    const u8 *const r = (u8 *)"time";
    q[0] = r[0];
    q[1] = r[1];
    q[2] = r[2];
    q[3] = r[3];
    t = GsUtil_GetTimeMs();
    u8 *const x = buf + 7;
    const u8 *const y = (u8 *)&t;
    x[0] = y[0];
    x[1] = y[1];
    x[2] = y[2];
    x[3] = y[3];
    if (GsTransport_SendRaw(o, buf, 11) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendPong(Conn *o, u8 *b, s32 n) {
    b[2] = 0x67;
    return GsTransport_SendRaw(o, b, n);
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendClosed(Conn *o) {
    return GsTransport_SendClosedTo(o->unk_08, o->unk_00, o->unk_04);
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_SendClosedTo(Sock *a, s32 b, s32 c) {
    u8 buf[3];
    u8 *const p = buf;
    const u8 *const s = data_ov065_0228e14c;
    p[0] = s[0];
    p[1] = s[1];
    buf[2] = 0x68;
    if (GsTransport_SendTo(a, b, c, buf, 3) != 0) {
        return 1;
    }
    return 0;
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_ResendMessage(Conn *o, s32 *m) {
    GsTransport_WriteU16(o->unk_50.unk_00, m[0] + 5, o->unk_66);
    if (GsTransport_SendRaw(o, o->unk_50.unk_00 + m[0], m[1]) == 0) {
        return 0;
    }
    m[3] = o->unk_88;
    if (o->unk_50.unk_00[m[0] + 2] == 2) {
        o->unk_8c = o->unk_88;
    }
    return 1;
}
} }

namespace N02284b8c { extern "C" {
void GsTransport_SendMessage(Conn *o, u8 *a, s32 b, s32 mode) {
    if (mode != 0) {
        GsTransport_SendReliable(o, a, b);
    } else {
        GsTransport_SendUnreliable(o, a, b);
    }
}
} }

namespace N02284b8c { extern "C" {
void GsTransport_CreateSocket(s32 a, s32 b, s32 c, s32 d, s32 e) {
    GsTransport_CreateSocketImpl(a, b, c, d, e);
}
} }

namespace N02284b8c { extern "C" {
void GsTransport_CloseSocket(Conn *o) {
    GsTransport_CloseAll(o);
    GsTransport_FreeSocket(o);
}
} }

namespace N02284b8c { extern "C" {
void GsTransport_Think(Sock *s) {
    if (GsTransport_ReceiveAll(s) != 0) {
        if (GsTransport_ThinkAll(s) != 0) {
            GsTransport_FreeClosed(s);
        }
    }
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_Listen(void *p) {
    return GsTransport_SetConnectAttemptCallback(p);
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_Accept(Conn *o, void *x) {
    return GsTransport_DoAccept(o, x);
}
} }

namespace N02284b8c { extern "C" {
s32 GsTransport_Reject(Conn *o, s32 a, s32 b) {
    return GsTransport_DoReject(o, a, b);
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_Connect(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **out, u32 host, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7)
{
    u32 port;
    u16 port16;
    Unk_ov065_02284240_Conn *conn;
    u32 ip;
    s32 r;

    if (GsTransport_ParseAddress(host, &ip, &port16) == 0 || ip == 0 || (port = port16) == 0) {
        return 4;
    }
    u32 sw = ((ip << 24) & 0xff000000) | (((ip << 8) & 0xff0000) | (((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00)));
    if ((sw & 0xe0000000) == 0xe0000000) {
        return 4;
    }
    r = GsTransport_NewOutgoing(s, &conn, ip, port);
    if (r != 0) {
        return r;
    }
    conn->unk_20 = p5;
    r = GsTransport_StartConnect(conn, p3, p4, (Unk_ov065_02284240_Blob *)p6);
    if (r != 0) {
        GsTransport_Release(conn);
        return r;
    }
    if (p7 == 0) {
        if (out != NULL) {
            *out = conn;
        }
        return 0;
    }
    conn->unk_24++;
    BOOL one = TRUE;
    BOOL done;
    do {
        GsTransport_Think(s);
        if (conn->unk_0c >= 5) {
            done = one;
        } else {
            done = FALSE;
        }
        if (done == 0) {
            GsUtil_Sleep(one);
        }
    } while (done == 0);
    conn->unk_24--;
    if (conn->unk_0c == 5) {
        *out = conn;
    }
    return conn->unk_18;
}
} }

namespace N02284240 { extern "C" {
void GsTransport_Send(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, s32 p3)
{
    if (c->unk_0c == 5) {
        GsTransport_FixMessage(&msg, &len);
        if (GsArray_Count(c->unk_98) != 0) {
            GsTransport_CallSendFilter(c, 0, msg, len, p3);
        } else {
            GsTransport_SendMessage(c, msg, len, p3);
        }
    }
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_Ping(Unk_ov065_02284240_Conn *c)
{
    return GsTransport_SendPing(c);
}
} }

namespace N02284240 { extern "C" {
void GsTransport_CloseHard(Unk_ov065_02284240_Conn *c)
{
    GsTransport_CloseConnection(c, 1);
}
} }

namespace N02284240 { extern "C" {
void GsTransport_CloseAllCb(Unk_ov065_02284240_Conn **p)
{
    GsTransport_CloseHard(*p);
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CloseAll(Unk_ov065_02284240_Sock *s)
{
    return GsHash_ForEach((s32)s->unk_0c, (void *)GsTransport_CloseAllCb, 0);
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_GetState(Unk_ov065_02284240_Conn *c)
{
    s32 s = c->unk_0c;
    if (s < 5) {
        return 0;
    }
    if (s == 5) {
        return 1;
    }
    if (s == 6) {
        return 2;
    }
    return 3;
}
} }

namespace N02284240 { extern "C" {
u32 GsTransport_GetLocalPort(Unk_ov065_02284240_Sock *c)
{
    return c->unk_08;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_GetSendFreeSpace(Unk_ov065_02284240_Conn *c)
{
    return c->unk_54 - c->unk_58;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_GetRemoteIp(Unk_ov065_02284240_Conn *c)
{
    return c->unk_00;
}
} }

namespace N02284240 { extern "C" {
void GsTransport_SetUnknownSenderCallback(Unk_ov065_02284240_Conn *c, s32 v)
{
    *(s32 *)&c->unk_30 = v;
}
} }

namespace N02284240 { extern "C" {
void GsTransport_SetUserData(Unk_ov065_02284240_Conn *c, s32 v)
{
    c->unk_40 = v;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_GetUserData(Unk_ov065_02284240_Conn *c)
{
    return c->unk_40;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_NewOutgoing(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port)
{
    s32 r = GsTransport_NewConnection(s, pc, ip, port);
    if (r != 0) {
        return r;
    }
    (*pc)->unk_0c = 0;
    (*pc)->unk_10 = 1;
    return 0;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_NewIncoming(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port)
{
    s32 r = GsTransport_NewConnection(s, pc, ip, port);
    if (r != 0) {
        return r;
    }
    (*pc)->unk_0c = 2;
    (*pc)->unk_10 = 0;
    return 0;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_StartConnect(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, Unk_ov065_02284240_Blob *x)
{
    Unk_ov065_02284908_Buf buf;
    GsTransport_FixMessage(&msg, &len);
    if (len > 0) {
        c->unk_38 = GsUtil_Alloc(len);
        if (c->unk_38 == NULL) {
            return TRUE;
        }
        memcpy(c->unk_38, (void *)msg, len);
        c->unk_3c = len;
    }
    if (x != NULL) {
        *(Unk_ov065_02284240_Blob *)&c->unk_28 = *x;
    }
    GsTransport_MakeChallenge(&buf);
    GsUtil_MakeResponse32((u8 *)c + 0x68, &buf);
    GsTransport_SendClientChallenge(c, &buf);
    c->unk_0c = 0;
    return FALSE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_DoAccept(Unk_ov065_02284240_Conn *c, Unk_ov065_02284240_Blob *x)
{
    if (c->unk_14 != 0) {
        c->unk_14 = 0;
        return FALSE;
    }
    s32 z = 0;
    c->unk_14 = z;
    if (c->unk_0c != 4) {
        return z;
    }
    GsTransport_SendAccept(c);
    c->unk_0c = 5;
    if (x != NULL) {
        *(Unk_ov065_02284240_Blob *)&c->unk_28 = *x;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
void GsTransport_DoReject(Unk_ov065_02284240_Conn *c, s32 msg, s32 len)
{
    c->unk_14 = 0;
    if (c->unk_0c == 4) {
        GsTransport_FixMessage(&msg, &len);
        GsTransport_SendReject(c, msg, len);
        c->unk_0c = 6;
    }
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_SendRaw(Unk_ov065_02284240_Conn *c, u32 a, u32 b)
{
    if (GsTransport_SendTo(c->unk_08, c->unk_00, c->unk_04, a, b) == 0) {
        return FALSE;
    }
    c->unk_88 = GsUtil_GetTimeMs();
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CheckConnectTimeout(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (c->unk_0c < 5) {
        BOOL r = FALSE;
        if (c->unk_10 != 0) {
            u32 to = c->unk_20;
            if (to != 0) {
                if (t - c->unk_1c > to) {
                    r = TRUE;
                }
            }
        } else if (c->unk_0c < 4) {
            if (t - c->unk_1c > 60000) {
                r = TRUE;
            }
        }
        if (r != 0) {
            GsTransport_SendClosed(c);
            GsTransport_MarkClosed(c);
            if (GsTransport_CallConnectedCb(c, 6, 0, 0) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_ResendUnacked(Unk_ov065_02284240_Conn *c, u32 t)
{
    s32 n = GsArray_Count(c->unk_60);
    s32 i;
    for (i = 0; i < n; i++) {
        s32 *e = (s32 *)GsArray_At(c->unk_60, i);
        u32 d = t - e[3];
        if (d > 1000) {
            if (GsTransport_ResendMessage(c, e) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CheckAck(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (c->unk_90 == 0) {
        return TRUE;
    }
    u32 d = t - c->unk_94;
    if (d > 100) {
        if (GsTransport_SendAck(c) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CheckKeepAlive(Unk_ov065_02284240_Conn *c, u32 t)
{
    u32 d = t - c->unk_88;
    if (d > 30000) {
        if (GsTransport_SendKeepAlive(c) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_ThinkConnection(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (GsTransport_CheckConnectTimeout(c, t) == 0) {
        return FALSE;
    }
    if (GsTransport_CheckKeepAlive(c, t) == 0) {
        return FALSE;
    }
    if (GsTransport_ResendUnacked(c, t) == 0) {
        return FALSE;
    }
    if (GsTransport_CheckAck(c, t) != 0) {
        return TRUE;
    }
    return FALSE;
}
} }

namespace N02284240 { extern "C" {
void GsTransport_CloseConnection(Unk_ov065_02284240_Conn *c, s32 x)
{
    if (x != 0) {
        if (c->unk_0c < 7) {
            GsTransport_MarkClosed(c);
            GsTransport_SendClosed(c);
            GsTransport_CallClosedCb(c, 0);
            GsTransport_Release(c);
        }
    } else {
        c->unk_0c = 6;
        GsTransport_SendClose(c);
    }
}
} }

namespace N02284240 { extern "C" {
void GsTransport_MarkClosed(Unk_ov065_02284240_Conn *c, ...)
{
    if (c->unk_0c != 7) {
        c->unk_0c = 7;
        GsHash_Remove(c->unk_08->unk_0c, &c);
        GsArray_Append(c->unk_08->unk_10, &c);
    }
}
} }

namespace N02284240 { extern "C" {
void GsTransport_FreeConnection(Unk_ov065_02284240_Conn *c)
{
    if (c->unk_38 != NULL) {
        GsUtil_Free(c->unk_38);
    }
    if (c->unk_44 != NULL) {
        GsUtil_Free(c->unk_44);
    }
    if (c->unk_50 != NULL) {
        GsUtil_Free(c->unk_50);
    }
    if (c->unk_5c != NULL) {
        GsArray_Free(c->unk_5c);
    }
    if (c->unk_60 != NULL) {
        GsArray_Free(c->unk_60);
    }
    if (c->unk_98 != NULL) {
        GsArray_Free(c->unk_98);
    }
    if (c->unk_9c != NULL) {
        GsArray_Free(c->unk_9c);
    }
    GsUtil_Free(c);
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallSocketErrorCb(Unk_ov065_02284240_Sock *s)
{
    if (s == NULL) {
        return TRUE;
    }
    if (s->unk_24 == NULL) {
        return TRUE;
    }
    s->unk_1c++;
    s->unk_24(s);
    s->unk_1c--;
    if (s->unk_14 != 0 && s->unk_1c == 0) {
        GsTransport_FreeSocket(s);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallConnectAttemptCb(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 p4, s32 p5, s32 p6)
{
    if (s == NULL || c == NULL) {
        return TRUE;
    }
    if (s->unk_20 == NULL) {
        return TRUE;
    }
    if (p6 == 0 || p5 == 0) {
        p5 = 0;
        p6 = 0;
    }
    s->unk_1c++;
    c->unk_24++;
    s->unk_20(s, c, a, b, p4, p5, p6);
    s->unk_1c--;
    c->unk_24--;
    if (s->unk_14 != 0 && s->unk_1c == 0) {
        GsTransport_FreeSocket(s);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallConnectedCb(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d)
{
    if (c == NULL) {
        return TRUE;
    }
    c->unk_18 = a;
    if (c->unk_28 == NULL) {
        return TRUE;
    }
    if (d == 0 || b == 0) {
        b = 0;
        d = b;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_28(c, a, b, d);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        GsTransport_FreeSocket(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallReceivedCb(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_2c == NULL) {
        return TRUE;
    }
    if (b == 0 || a == 0) {
        a = 0;
        b = a;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_2c(c, a, b, d);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        GsTransport_FreeSocket(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallClosedCb(Unk_ov065_02284240_Conn *c, s32 a)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_30 == NULL) {
        return TRUE;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_30(c, a);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        GsTransport_FreeSocket(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallPingCb(Unk_ov065_02284240_Conn *c, s32 a)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_34 == NULL) {
        return TRUE;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_34(c, a);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        GsTransport_FreeSocket(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallSendFilter(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel)
{
    Unk_ov065_02284240_Filter *f;
    if (c == NULL) {
        return TRUE;
    }
    f = (Unk_ov065_02284240_Filter *)GsArray_At(c->unk_98, a);
    if (f == NULL) {
        return TRUE;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = msg;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    (*f)(c, a, msg, len, rel);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        GsTransport_FreeSocket(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N02284240 { extern "C" {
s32 GsTransport_CallRecvFilter(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel)
{
    Unk_ov065_02284240_Filter *f;
    if (c == NULL) {
        return TRUE;
    }
    f = (Unk_ov065_02284240_Filter *)GsArray_At(c->unk_9c, a);
    if (f == NULL) {
        return TRUE;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = msg;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    (*f)(c, a, msg, len, rel);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        GsTransport_FreeSocket(c->unk_08);
        return FALSE;
    }
    return TRUE;
}
} }

namespace N022838c4 { extern "C" {
s32 GsTransport_CallDumpCb(Unk_ov065_0228412c_Obj *o, Unk_ov065_0228412c_Obj *x, s32 u2, s32 u3, s32 s4, s32 s5, s32 s6, s32 s7) {
    s32 (*f)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    if (o == 0) {
        return 1;
    }
    if (s7 != 0) {
        f = o->unk_28;
    } else {
        f = o->unk_2c;
    }
    if (f == 0) {
        return 1;
    }
    if (s6 == 0 || s5 == 0) {
        s5 = 0;
        s6 = 0;
    }
    o->unk_1c++;
    if (x != 0) {
        x->unk_24++;
    }
    f(o, x, u2, u3, s4, s5, s6);
    o->unk_1c--;
    if (x != 0) {
        x->unk_24--;
    }
    if (o->unk_14 != 0 && o->unk_1c == 0) {
        GsTransport_FreeSocket(o);
        return 0;
    }
    return 1;
}
} }

namespace N022838c4 { extern "C" {
s32 GsTransport_CallUnknownSenderCb(Unk_ov065_0228412c_Obj *o, s32 a1, s32 a2, s32 a3, s32 a4, s32 *out) {
    *out = 0;
    if (o == 0) {
        return 1;
    }
    if (o->unk_30 == 0) {
        return 1;
    }
    if (a4 == 0 || a3 == 0) {
        a3 = 0;
        a4 = 0;
    }
    o->unk_1c++;
    *out = o->unk_30(o, a1, a2, a3, a4);
    o->unk_1c--;
    if (o->unk_14 != 0 && o->unk_1c == 0) {
        GsTransport_FreeSocket(o);
        return 0;
    }
    return 1;
}
} }

namespace N022838c4 { extern "C" {
s32 GsTransport_BufAlloc(Unk_ov065_02284100_Buf *b, s32 size) {
    b->unk_00 = (char *)GsUtil_Alloc(size);
    if (b->unk_00 == 0) {
        return 0;
    }
    b->unk_04 = size;
    return 1;
}
} }

namespace N022838c4 { extern "C" {
s32 GsTransport_BufFreeSpace(Unk_ov065_02284100_Buf *b) {
    return b->unk_04 - b->unk_08;
}
} }

namespace N022838c4 { extern "C" {
void GsTransport_BufAppendU8(Unk_ov065_02284100_Buf *b, s32 v) {
    b->unk_00[b->unk_08++] = v;
}
} }

namespace N022838c4 { extern "C" {
void GsTransport_BufAppendU16(Unk_ov065_02284100_Buf *b, s32 v) {
    b->unk_00[b->unk_08++] = v >> 8;
    b->unk_00[b->unk_08++] = v;
}
} }

namespace N022838c4 { extern "C" {
void GsTransport_BufAppend(Unk_ov065_02284100_Buf *b, char *s, s32 n) {
    if (s != 0 && n != 0) {
        if (n == -1) {
            n = STD_GetStringLength(s);
        }
        memcpy(b->unk_00 + b->unk_08, s, n);
        b->unk_08 += n;
    }
}
} }

namespace N022838c4 { extern "C" {
void GsTransport_BufRemove(Unk_ov065_02284100_Buf *b, s32 pos, s32 n) {
    if (pos == -1) {
        pos = b->unk_08 - n;
    }
    memmove(b->unk_00 + pos, b->unk_00 + pos + n, b->unk_08 - pos - n);
    b->unk_08 -= n;
}
} }

namespace N022838c4 { extern "C" {
BOOL GsTransport_IsValidChallenge(u8 *p) {
    u32 t2;
    u32 t1;
    u32 v[8];
    u32 acc;
    s32 i;
    u32 c;
    u32 b;
    u32 x;
    acc = 0;
    i = 1;
    c = p[0];
    v[0] = c;
    v[0] &= i;
    v[2] = 0;
    v[1] = 1;
    v[4] = 0;
    v[3] = 1;
    v[6] = 1;
    v[5] = 1;
    v[7] = 1;
    for (; i < 0x20; i++) {
        b = p[i - 1];
        if (b < c) {
            t1 = v[1];
        } else {
            t1 = v[2];
        }
        if (c < 0x4f) {
            t2 = v[3];
        } else {
            t2 = v[4];
        }
        x = i;
        x ^= b;
        x &= v[5];
        acc ^= x;
        b = v[0];
        b ^= acc;
        b ^= t2;
        acc = b;
        acc ^= t1;
        if ((acc != 0 && (p[i] & v[6]) == 0) || (acc == 0 && (p[i] & v[7]) == 1)) {
            return FALSE;
        }
    }
    return TRUE;
}
} }

namespace N022838c4 { extern "C" {
char *GsTransport_MakeChallenge(u8 *out) {
    u32 t2;
    u32 b;
    u8 *p;
    u32 c;
    s32 i;
    u32 t1;
    u32 v[9];
    u32 acc;
    srand(GsUtil_GetTimeMs(out));
    out[0] = rand() % 0x5d + 0x21;
    acc = 0;
    i = 1;
    v[1] = 0;
    v[0] = 1;
    v[3] = 0;
    v[2] = 1;
    v[5] = 1;
    v[4] = 1;
    v[6] = 1;
    v[7] = 1;
    for (; i < 0x20; i++) {
        b = out[i - 1];
        c = out[0];
        if (b < c) {
            t1 = v[0];
        } else {
            t1 = v[1];
        }
        if (c < 0x4f) {
            t2 = v[2];
        } else {
            t2 = v[3];
        }
        c &= v[5];
        v[8] = i;
        v[8] = v[8] ^ b;
        v[8] = v[8] & v[4];
        acc ^= v[8];
        c ^= acc;
        c ^= t2;
        acc = c;
        acc ^= t1;
        p = out + i;
        out[i] = rand() % 0x5d + 0x21;
        if ((acc != 0 && (*p & v[6]) == 0) || (acc == 0 && (*p & v[7]) == 1)) {
            (*p)++;
        }
    }
    return (char *)out;
}
} }
