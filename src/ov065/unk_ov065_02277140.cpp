// mwcc-flags: -O4,p -str reuse
#include "types.h"

typedef long long s64;

// ov065_039: DWC-like send/receive channel table (0x0227702c..0x022778b0)

struct Unk_ov065_02277418_Rec {
    u8 *unk_00;
    u8 *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u16 unk_20;
    u16 unk_22;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02290f78 {
    Unk_ov065_02277418_Rec unk_000[32];
    void (*unk_600)(...);
    void (*unk_604)(...);
    void (*unk_608)(...);
    void (*unk_60c)(...);
    u16 unk_610;
    u16 unk_612;
};

struct Unk_ov065_022778b0_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_0227762c_Hdr {
    u32 unk_00;
    u16 unk_04;
    u8 unk_06[2];
};

extern "C" {
Unk_ov065_02290f78 *sDwcNetChannels;
Unk_ov065_022778b0_Rng sDwcNetRandState;

void *DwcNet_Alloc(s32, s32);
u64 DwcNet_GetTimeMs(void);
s32 DwcConn_GetAid(s32);
s32 DwcConn_FindConnectionByAid(s32);
void DwcCore_SetError(s32, s32);
s32 DwcCore_HasError(void);
s32 DwcConn_GetAidList(u8 **);
s32 DwcConn_GetMyAid(void);
s32 DwcConn_IsAidValid(s32);
s32 DwcConn_IsAidConnected(s32);
s32 GsTransport_GetSendFreeSpace(s32);
s32 GsTransport_GetState(s32);
s32 GsTransport_Ping(s32);
void GsTransport_Send(s32, void *, s32, s32);
void DwcMatch_OnSyncPacket(s32, s32, s32);
u64 OS_GetTick(void);
void MI_CpuCopy8(void *, void *, s32);
void MI_CpuFill8(void *, s32, s32);
s32 memcmp(void *, const void *, s32);
void func_0212a2ec(void *, const void *, s32);
void OS_GetMacAddress(void *);

s32 DwcNet_GetSendSpace(s32 id);
void DwcNet_RecvControlBody(s32 a, void *b, s32 c);
void DwcNet_RecvBodyChunk(s32 id, void *buf, s32 n);
void DwcNet_RecvHeader(s32 id, void *buf, s32 n);
void DwcNet_RecvUnreliable(s32 a, void *buf, s32 n);
void DwcNet_RecvReliable(s32 a, void *buf, s32 n);
void DwcNet_SendToAid(s32 id, void *buf, s32 n, s32 f);
u32 DwcNet_GetRecvState(s32 id);
u32 DwcNet_IsSending(s32 id);
Unk_ov065_02277418_Rec *DwcNet_GetChannel(s32 id);
void DwcNet_ClearChannelTable(void);
void DwcNet_ResetChannel(s32 id);
void DwcNet_ProcessSend(void);
void DwcNet_OnPing(s32 a, s32 b);
void DwcNet_OnReceive(s32 a, void *b, s32 c, s32 d);
void DwcNet_InitChannelTable(void *p);
s32 DwcNet_GetHeaderSize(s32 m);
u32 DwcNet_ParseHeader(void *src);
void DwcNet_BuildHeader(void *p, u32 a, u32 b);
void DwcNet_SetMaxChunkSize(u32 v);
void DwcNet_SetPingCallback(void *cb);
void DwcNet_SetRecvCallback(void *cb);
void DwcNet_SetSendDoneCallback(void *cb);
void DwcNet_PingAid(s32 id);
BOOL DwcNet_SetRecvBuffer(s32 id, u8 *buf, s32 n);
BOOL DwcNet_SendData(s32 m, s32 id, u8 *buf, s32 n);
BOOL DwcNet_SendReliable(s32 id, u8 *buf, s32 n);
BOOL DwcNet_CanSend(s32 id, s32 m);
BOOL DwcNet_CanSendReliable(s32 id);
u32 DwcNet_Rand32(u32 n);
}

u32 DwcNet_Rand32(u32 n) {
    u32 hi;
    u32 nn = n;
    if (sDwcNetRandState.unk_00 == 0 && sDwcNetRandState.unk_08 == 0 && sDwcNetRandState.unk_10 == 0) {
        u64 s;
        u64 t;
        OS_GetMacAddress(&s);
        t = OS_GetTick();
        s = ((s >> 24) & 0xffffff) | (t << 24);
        sDwcNetRandState.unk_00 = s;
        sDwcNetRandState.unk_08 = 0x5d588b656c078965ULL;
        sDwcNetRandState.unk_10 = 0x269ec3;
    }
    {
        sDwcNetRandState.unk_00 = (u64)((s64)sDwcNetRandState.unk_08 * (s64)sDwcNetRandState.unk_00) + sDwcNetRandState.unk_10;
        if (nn == 0) {
            return (u32)(sDwcNetRandState.unk_00 >> 32);
        } else {
            return (u32)(((u64)((s64)(sDwcNetRandState.unk_00 >> 32) * (s64)nn)) >> 32);
        }
    }
}

BOOL DwcNet_CanSendReliable(s32 id) {
    return DwcNet_CanSend(id, 1);
}

BOOL DwcNet_CanSend(s32 id, s32 m) {
    if ((m == 1 && DwcConn_IsAidValid(id) == 0) || DwcConn_IsAidConnected(id) == 0) {
        return FALSE;
    }
    if (DwcNet_IsSending(id) == 1) {
        return FALSE;
    }
    if (DwcNet_GetSendSpace(id) >= DwcNet_GetHeaderSize(m)) {
        return TRUE;
    }
    return FALSE;
}

BOOL DwcNet_SendReliable(s32 id, u8 *buf, s32 n) {
    return DwcNet_SendData(1, id, buf, n);
}

BOOL DwcNet_SendData(s32 m, s32 id, u8 *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = DwcNet_GetChannel(id);
    Unk_ov065_0227762c_Hdr h;
    s32 chunk;
    if (DwcCore_HasError() != 0) {
        return FALSE;
    }
    if (DwcNet_CanSend(id, m) == 0) {
        return FALSE;
    }
    r->unk_1c = 1;
    r->unk_00 = buf;
    r->unk_0c = 0;
    r->unk_14 = n;
    DwcNet_BuildHeader(&h, m, n);
    DwcNet_SendToAid(id, &h, 8, 1);
    chunk = sDwcNetChannels->unk_610;
    if (n <= chunk) {
        chunk = n;
    }
    if (chunk > DwcNet_GetSendSpace(id)) {
        return TRUE;
    }
    DwcNet_SendToAid(id, buf, chunk, 1);
    r->unk_0c = r->unk_0c + chunk;
    if (r->unk_0c == r->unk_14) {
        if (sDwcNetChannels->unk_600 != NULL && m == 1) {
            sDwcNetChannels->unk_600(r->unk_14, id);
        }
        r->unk_1c = 0;
        r->unk_00 = NULL;
        r->unk_0c = 0;
        r->unk_14 = 0;
    }
    return TRUE;
}

BOOL DwcNet_SetRecvBuffer(s32 id, u8 *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = DwcNet_GetChannel(id);
    if (DwcNet_GetRecvState(id) == 2) {
        return FALSE;
    }
    r->unk_04 = buf;
    r->unk_08 = n;
    r->unk_1d = 1;
    r->unk_10 = 0;
    r->unk_18 = 0;
    return TRUE;
}

void DwcNet_PingAid(s32 id) {
    s32 h = DwcConn_FindConnectionByAid(id);
    if (id != DwcConn_GetMyAid() && h != 0 && GsTransport_GetState(h) == 1 && DwcCore_HasError() == 0) {
        GsTransport_Ping(h);
    }
}

void DwcNet_SetSendDoneCallback(void *cb) {
    sDwcNetChannels->unk_600 = (void (*)(...))cb;
}

void DwcNet_SetRecvCallback(void *cb) {
    sDwcNetChannels->unk_604 = (void (*)(...))cb;
}

void DwcNet_SetPingCallback(void *cb) {
    sDwcNetChannels->unk_60c = (void (*)(...))cb;
}

void DwcNet_SetMaxChunkSize(u32 v) {
    if (v > 0x5b9) {
        v = 0x5b9;
    }
    sDwcNetChannels->unk_610 = v;
}

void DwcNet_BuildHeader(void *p, u32 a, u32 b) {
    Unk_ov065_0227762c_Hdr *h = (Unk_ov065_0227762c_Hdr *)p;
    func_0212a2ec(h->unk_06, "DT", 2);
    h->unk_04 = a;
    h->unk_00 = b;
}

u32 DwcNet_ParseHeader(void *src) {
    Unk_ov065_0227762c_Hdr h;
    MI_CpuCopy8(src, &h, 8);
    if (memcmp(h.unk_06, "DT", 2) == 0) {
        return h.unk_04;
    }
    return 0;
}

s32 DwcNet_GetHeaderSize(s32 m) {
    switch (m) {
    case 2:
    case 3:
    case 4:
        return 0xc;
    }
    return 8;
}

void DwcNet_InitChannelTable(void *p) {
    sDwcNetChannels = (Unk_ov065_02290f78 *)p;
    MI_CpuFill8(p, 0, 0x614);
    sDwcNetChannels->unk_610 = 0x5b9;
}

void DwcNet_OnReceive(s32 a, void *b, s32 c, s32 d) {
    Unk_ov065_02290f78 *g = sDwcNetChannels;
    if (g != NULL && b != NULL && c != 0) {
        if (d != 0) {
            DwcNet_RecvReliable(a, b, c);
        } else {
            DwcNet_RecvUnreliable(a, b, c);
        }
    }
}

void DwcNet_OnPing(s32 a, s32 b) {
    if (sDwcNetChannels->unk_60c != NULL) {
        sDwcNetChannels->unk_60c(b, DwcConn_GetAid(a));
    }
}

void DwcNet_ProcessSend(void) {
    if (sDwcNetChannels != NULL) {
        u8 *list;
        s32 n = DwcConn_GetAidList(&list);
        s32 i = 0;
        if (n > 0) {
            s32 z0 = 0;
            s32 z1 = 0;
            do {
                s32 id = list[i];
                Unk_ov065_02277418_Rec *r;
                if (id != DwcConn_GetMyAid()) {
                    if (DwcNet_IsSending(id) == 1) {
                        s32 rem;
                        s32 chunk;
                        r = DwcNet_GetChannel(id);
                        rem = r->unk_14 - r->unk_0c;
                        chunk = sDwcNetChannels->unk_610;
                        if (rem <= chunk) {
                            chunk = rem;
                        }
                        if (DwcNet_GetSendSpace(id) < chunk) {
                            goto next;
                        }
                        DwcNet_SendToAid(id, r->unk_00 + r->unk_0c, chunk, 1);
                        r->unk_0c = r->unk_0c + chunk;
                        if (r->unk_0c == r->unk_14) {
                            if (sDwcNetChannels->unk_600 != NULL) {
                                sDwcNetChannels->unk_600(r->unk_14, id);
                            }
                            r->unk_1c = z0;
                            r->unk_00 = (u8 *)z0;
                            r->unk_0c = z0;
                            r->unk_14 = z0;
                        }
                    }
                }
                if (DwcConn_IsAidValid(id) != 0) {
                    r = DwcNet_GetChannel(id);
                    if (sDwcNetChannels->unk_608 != NULL && r->unk_2c != 0) {
                        u64 t = OS_GetTick();
                        u64 d = (t - *(u64 *)&r->unk_24) << 6;
                        if ((u32)(d / 0x82ea) > r->unk_2c) {
                            sDwcNetChannels->unk_608(id);
                            *(u64 *)&r->unk_24 = t;
                        }
                    }
                }
            next:
                i++;
            } while (i < n);
        }
    }
}

void DwcNet_ResetChannel(s32 id) {
    if (sDwcNetChannels != NULL) {
        s32 z = 0;
        sDwcNetChannels->unk_000[id].unk_0c = z;
        sDwcNetChannels->unk_000[id].unk_10 = z;
        sDwcNetChannels->unk_000[id].unk_14 = z;
        sDwcNetChannels->unk_000[id].unk_18 = z;
        sDwcNetChannels->unk_000[id].unk_1c = z;
        sDwcNetChannels->unk_000[id].unk_22 = z;
    }
}

void DwcNet_ClearChannelTable(void) {
    sDwcNetChannels = NULL;
}

Unk_ov065_02277418_Rec *DwcNet_GetChannel(s32 id) {
    return &sDwcNetChannels->unk_000[id];
}

u32 DwcNet_IsSending(s32 id) {
    return sDwcNetChannels->unk_000[id].unk_1c;
}

u32 DwcNet_GetRecvState(s32 id) {
    return sDwcNetChannels->unk_000[id].unk_1d;
}

void DwcNet_SendToAid(s32 id, void *buf, s32 n, s32 f) {
    GsTransport_Send(DwcConn_FindConnectionByAid(id), buf, n, f);
}

void DwcNet_RecvReliable(s32 a, void *buf, s32 n) {
    s32 id = DwcConn_GetAid(a);
    switch (DwcNet_GetRecvState(id)) {
    case 0: {
        u32 t = DwcNet_ParseHeader(buf);
        if (t < 2 || t > 4) {
            return;
        }
        DwcNet_RecvHeader(id, buf, n);
        return;
    }
    case 1:
        DwcNet_RecvHeader(id, buf, n);
        return;
    case 2:
        DwcNet_RecvBodyChunk(id, buf, n);
        return;
    case 3:
        DwcNet_RecvControlBody(id, buf, n);
        return;
    case 4:
        sDwcNetChannels->unk_000[id].unk_1d = 1;
        sDwcNetChannels->unk_000[id].unk_10 = 0;
        sDwcNetChannels->unk_000[id].unk_18 = 0;
        return;
    default:
        DwcCore_SetError(6, -0x17d4a);
        return;
    }
}

void DwcNet_RecvUnreliable(s32 a, void *buf, s32 n) {
    s32 id = DwcConn_GetAid(a);
    Unk_ov065_02277418_Rec *r = &sDwcNetChannels->unk_000[id];
    if (r->unk_04 != NULL && r->unk_08 >= n) {
        MI_CpuCopy8(buf, r->unk_04, n);
        if (sDwcNetChannels->unk_604 != NULL) {
            sDwcNetChannels->unk_604(id, r->unk_04, n);
        }
        if (sDwcNetChannels->unk_608 != NULL && r->unk_2c != 0) {
            u64 t = OS_GetTick();
            r->unk_24 = (u32)t;
            r->unk_28 = (u32)(t >> 32);
        }
    }
}

void DwcNet_RecvHeader(s32 id, void *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = &sDwcNetChannels->unk_000[id];
    u32 t;
    Unk_ov065_0227762c_Hdr h;
    r->unk_1e = DwcNet_GetRecvState(id);
    t = DwcNet_ParseHeader(buf);
    switch (t) {
    case 0:
        break;
    case 1:
        if (n != 8) {
            return;
        }
        MI_CpuCopy8(buf, &h, 8);
        r->unk_18 = h.unk_00;
        r->unk_10 = 0;
        if (r->unk_04 != NULL && r->unk_08 >= r->unk_18) {
            r->unk_1d = 2;
        } else {
            r->unk_1d = 4;
        }
        break;
    case 2:
    case 3:
    case 4:
        r->unk_1d = 3;
        break;
    }
    r->unk_22 = t;
}

void DwcNet_RecvBodyChunk(s32 id, void *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = &sDwcNetChannels->unk_000[id];
    if (DwcNet_GetRecvState(id) == 2) {
        if (r->unk_10 + n > r->unk_08) {
            DwcCore_SetError(6, -0x17d54);
            return;
        }
        MI_CpuCopy8(buf, r->unk_04 + r->unk_10, n);
    }
    r->unk_10 = r->unk_10 + n;
    s32 sz = r->unk_18;
    if (r->unk_10 == sz) {
        r->unk_1d = 1;
        r->unk_10 = 0;
        r->unk_18 = 0;
        if (sDwcNetChannels->unk_604 != NULL) {
            sDwcNetChannels->unk_604(id, r->unk_04, sz);
        }
    }
    if (sDwcNetChannels->unk_608 != NULL && r->unk_2c != 0) {
        u64 t = OS_GetTick();
        r->unk_24 = (u32)t;
        r->unk_28 = (u32)(t >> 32);
    }
}

void DwcNet_RecvControlBody(s32 a, void *b, s32 c) {
    Unk_ov065_02277418_Rec *r = DwcNet_GetChannel(a);
    r->unk_1d = r->unk_1e;
    u32 t = r->unk_22;
    switch (t) {
    case 2:
    case 3:
    case 4:
        DwcMatch_OnSyncPacket(a, t, (s32)b);
        break;
    }
}

s32 DwcNet_GetSendSpace(s32 id) {
    s32 t = GsTransport_GetSendFreeSpace(DwcConn_FindConnectionByAid(id)) - 0x207;
    if (t <= 0) {
        t = 0;
    }
    return t;
}

