// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0228b31c_Tmpl {
    u32 unk_00[18];
    const char *hostName;
    u32 unk_4c;
    u32 unk_50[2];
};

extern "C" {

const char sWifiApSsidFreespot[8] = {'F', 'R', 'E', 'E', 'S', 'P', 'O', 'T'};
const char sWifiApSsidWayport[8] = {'W', 'a', 'y', 'p', 'o', 'r', 't', '2'};
const char sWifiApSsidNintendoWfc[12] = "NINTENDOWFC";
const u32 sWifiApScanChannelBits[13] = {0x8002, 0x8004, 0x8008, 0x8010, 0x8020, 0x8040, 0x8080, 0x8100, 0x8200, 0x8400, 0x8800, 0x9000, 0xa000};

char sWifiApSsidUsbConnector[12] = "NWCUSBAP";
char sWifiApHostName[12] = "NINTENDO-DS";

const Unk_ov065_0228b31c_Tmpl sWifiApSocketConfigTemplate = {
    {0x1000000, 0, 0, 1, 0, 0, 0, 0, 0, 0x1000, 0x1000, 0x2e4, 0, 0, 0, 0, 0, 0},
    sWifiApHostName,
    4,
    {0, 0},
};

}

namespace N_c750 {
extern "C" {

struct Unk_ov065_0226b488_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[0x2c - 0xc];
    u16 capaInfo;
    u8 pad2e[0x36 - 0x2e];
    u16 channel;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226b488_Entry {
    u8 lo : 4;
    u8 hi : 4;
    u8 apType;
    u8 channelIndex;
    u8 ssidLength;
    u8 ssid[0x20];
};

struct Unk_ov065_0226b488_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226b488_Entry searchEntries[9];
    u8 foundApInfo[0x2c];
    Unk_ov065_0226b488_Rec foundApBss[11];
    u32 stepStartTick;
    u32 stepStartTickHi;
    u8 wepSetting[0x52];
    u8 padd0a;
    u8 unk_d0b_lo : 2;
    u8 unk_d0b_hi : 2;
    u8 unk_d0b_pad : 4;
    u8 unk_d0c_st : 4;
    u8 unk_d0c_mid : 2;
    u8 unk_d0c_mode : 2;
    u8 apType;
    u8 resumeState;
    u8 searchIndex;
    u8 numSearchEntries;
    s8 scanChannel;
    u8 numFoundAps;
    u8 selectedAp;
    u8 connectFailKind;
    u8 stepCount;
    u16 foundChannelMask;
};

struct Unk_ov065_0226cfe4_Buf {
    u8 b[24];
};

extern u8 gWifiLinkAnyBssid[];
extern u8 gWifiLinkAnySsid[];
extern u8 sWifiApSocketConfigTemplate[];
extern u32 sSockYieldMode;
extern s8 *sWifiApUsbKey1Ptr;
extern s8 *sWifiApUsbKey2Ptr;
extern s8 *sWifiApNdwcshapKey1Ptr;
extern s8 *sWifiApNdwcshapKey2Ptr;
extern u8 sWifiApUsbKeyPermTable[];
extern u8 sWifiApUsbKeySBox[];
extern u8 sWifiApNdwcshapPermTable[];

extern "C" {
u8 *WifiAp_GetBlock(u32 id);
s32 WifiAp_GetState(void);
s32 WifiLink_GetPhase(void);
s32 WifiAp_FoldApIndex(u32 v);
void WifiAp_SetConnectedApType(u32 v);
s32 WifiAp_SetError(s32 v);
s32 WifiLink_StartupAsync(void *a, void *b);
s32 WifiAp_OnLinkNotify(void *a);
void WifiAp_BuildSearchList(void);
void WifiAp_StartScan(void *a, void *b, s32 c, u32 d);
s32 WifiAp_CheckSearchResult(void *ctx, s32 v);
s32 WifiAp_StepScanFoundChannels(void *ctx);
s32 WifiAp_StepScanSsids(void *ctx);
s32 WifiAp_StepScanAllChannels(void *ctx);
s32 WifiAp_BeginSearch(void *ctx);
void Sock_SetDnsServers(void *a, void *b);
s32 Sock_GetHostId(void);
s32 Sock_Startup(void *p);
s32 Sock_Cleanup(void);
s32 SockCore_TryShutdown(void);
s32 NetCheck_GetState(void);
u32 NetCheck_GetErrorCode(void);
s32 NetCheck_Abort(void);
s32 NetCheck_Destroy(void);
s32 NetCheck_Start(void);
s64 OS_GetTick(void);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void DGT_Hash1Reset(void *ctx);
void DGT_Hash1SetSource(void *ctx, void *p, u32 n);
void DGT_Hash1GetDigest_R(void *out, void *ctx);

s32 WifiAp_Base64Value(u32 c);
u32 WifiAp_PrefixToNetmask(s32 n);
u32 WifiAp_ReadAddress(u8 *p);
s32 WifiAp_Base64Decode(u8 *in, u8 *out, u32 len, u32 max);
s32 WifiAp_StepStopSockets(void);
s32 WifiAp_StepConnected(Unk_ov065_0226b488_Ctx *c);
s32 WifiAp_StepWaitNetCheck(Unk_ov065_0226b488_Ctx *c);
s32 WifiAp_StepStartNetCheck(void);
s32 WifiAp_StepWaitAddress(Unk_ov065_0226b488_Ctx *c);
s32 WifiAp_StepStartSockets(Unk_ov065_0226b488_Ctx *c);
void WifiAp_BuildSocketConfig(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c);
void WifiAp_ApplyStaticDns(Unk_ov065_0226b488_Ctx *c);






















void WifiAp_RescanForState(u32 r);
s32 WifiAp_GetNthFoundChannel(u32 n);
void WifiAp_AddFoundChannel(u32 v);
s32 WifiAp_ProcessSearch(void);
s32 WifiAp_ProcessStartup(void);
void WifiAp_ApplyStaticDns(Unk_ov065_0226b488_Ctx *c);
u32 WifiAp_PrefixToNetmask(s32 n);
u32 WifiAp_ReadAddress(u8 *p);
void WifiAp_BuildSocketConfig(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c);

void WifiAp_BuildSocketConfig(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c) {
    u32 *o = (u32 *)c;
    MI_CpuCopy8(sWifiApSocketConfigTemplate, c, 0x58);
    o[1] = ((u32 *)a)[0];
    o[2] = ((u32 *)a)[1];
    if (b->apType < 6) {
        u8 *q = (u8 *)b + (WifiAp_FoldApIndex(b->apType) << 8);
        if (q[0xc0] != 0) {
            o[3] = 0;
            o[4] = WifiAp_ReadAddress(q + 0xc0);
            o[5] = WifiAp_PrefixToNetmask(q[0xd0]);
            o[6] = WifiAp_ReadAddress(q + 0xc4);
            o[7] = WifiAp_ReadAddress(q + 0xc8);
            o[8] = WifiAp_ReadAddress(q + 0xcc);
        } else {
            o[3] = 1;
            o[4] = 0;
            o[5] = 0;
            o[6] = 0;
            o[7] = 0;
            o[8] = 0;
        }
    }
}

u32 WifiAp_ReadAddress(u8 *p) {
    u32 x = 0;
    x |= p[0] << 24;
    x |= p[1] << 16;
    x |= p[2] << 8;
    x |= p[3];
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

u32 WifiAp_PrefixToNetmask(s32 n) {
    n = 0x20 - n;
    s32 i = 0;
    u32 x = -1;
    for (; i < n; i++) {
        x <<= 1;
    }
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

void WifiAp_ApplyStaticDns(Unk_ov065_0226b488_Ctx *c) {
    u32 buf[2];
    if (c->apType < 6) {
        u8 *q = (u8 *)c + (WifiAp_FoldApIndex(c->apType) << 8);
        u32 sum = q[0xcb] + (q[0xca] + (q[0xc8] + q[0xc9]));
        if (q[0xc0] == 0 && sum != 0) {
            buf[0] = WifiAp_ReadAddress(q + 0xc8);
            buf[1] = WifiAp_ReadAddress(q + 0xcc);
            Sock_SetDnsServers(&buf[0], &buf[1]);
        }
    }
}

s32 WifiAp_ProcessStartup(void) {
    s32 a = WifiLink_GetPhase();
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    if (a == 1) {
        u32 buf[4];
        buf[0] = *((u8 *)c + 0xd0a);
        buf[1] = 0;
        buf[2] = 0;
        buf[3] = 0;
        WifiAp_BuildSearchList();
        s32 r = WifiLink_StartupAsync(buf, (void *)WifiAp_OnLinkNotify);
        if (r == 1 || r >= 4) {
            WifiAp_SetError(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}

s32 WifiAp_ProcessSearch(void) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    s32 a = WifiAp_GetState();
    s32 b = WifiLink_GetPhase();
    if (a == 2 && b == 3) {
        a = WifiAp_BeginSearch(c);
    } else if (a == 6) {
        a = WifiAp_CheckSearchResult(c, a);
    } else if (b == 3 || b == 6) {
        a = WifiAp_CheckSearchResult(c, a);
        if (a != 7) {
            if (a == 3) {
                a = WifiAp_StepScanAllChannels(c);
            } else if (a == 4) {
                a = WifiAp_StepScanSsids(c);
            } else if (a == 5) {
                a = WifiAp_StepScanFoundChannels(c);
            }
        }
    }
    return a;
}

void WifiAp_AddFoundChannel(u32 v) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    if (v > 0xd) {
        v = 0xd;
    }
    c->foundChannelMask |= 1 << (v - 1);
}

s32 WifiAp_GetNthFoundChannel(u32 n) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    u8 i;
    u8 cnt;
    u32 m;
    m = c->foundChannelMask;
    if (m == 0) {
        return -1;
    }
    i = 0;
    cnt = i;
    do {
        if (m & (1 << i)) {
            if (cnt == n) {
                return (s8)i;
            }
            cnt++;
        }
        i++;
    } while (i < 0xd);
    return -1;
}

void WifiAp_RescanForState(u32 r) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    u8 *cb = (u8 *)c;
    switch (r) {
    case 3: {
        s64 t = OS_GetTick();
        *(s64 *)&c->stepStartTick = t;
        WifiAp_StartScan(gWifiLinkAnyBssid, gWifiLinkAnySsid, c->scanChannel, 0x200000);
        break;
    }
    case 4: {
        s64 t = OS_GetTick();
        *(s64 *)&c->stepStartTick = t;
        u32 idx = c->searchIndex * 0x24;
        u8 *q = cb + idx;
        WifiAp_StartScan(gWifiLinkAnyBssid, cb + 0x304 + idx, q[0x302], 0x300000);
        break;
    }
    case 5: {
        s64 t = OS_GetTick();
        *(s64 *)&c->stepStartTick = t;
        u32 idx = c->searchIndex * 0x24;
        WifiAp_StartScan(gWifiLinkAnyBssid, cb + 0x304 + idx, c->scanChannel, 0x300000);
        break;
    }
    }
}

}
}
}  // namespace N_c750

namespace N_be44 {
extern "C" {

// ov065_021: connection-state machine helpers (0x0226be44..0x0226c700)

struct Unk_ov065_0226bf70_Ent {
    u8 lo : 4;
    u8 hi : 4;
    u8 apType;
    u8 channelIndex;
    u8 ssidLength;
    u8 ssid[0x20];
};

struct Unk_ov065_0226bf70_Rec {
    u8 pad00[0xc];
    u8 ssid[0x2a];
    u16 channel;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226bf70_B {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_ov065_0226bf70_C {
    u8 lo : 4;
    u8 mid : 2;
    u8 hi : 2;
};

struct Unk_ov065_0226bf70_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226bf70_Ent searchEntries[9];
    u8 foundApInfo[0x2c];
    u8 foundApBss[0xcb0 - 0x470];
    u64 stepStartTick;
    u8 padcb8[0xd0b - 0xcb8];
    Unk_ov065_0226bf70_B linkFlags;
    Unk_ov065_0226bf70_C searchConfig;
    u8 apType;
    u8 resumeState;
    u8 searchIndex;
    u8 numSearchEntries;
    s8 scanChannel;
    u8 numFoundAps;
    u8 selectedAp;
    u8 connectFailKind;
    u8 stepCount;
    u16 foundChannelMask;
};

typedef Unk_ov065_0226bf70_Ctx Unk_ov065_0226bf70_Ctx_T;

extern u8 sWifiApSsidUsbConnector[];
extern u8 sWifiApSsidWayport[];
extern u8 sWifiApSsidNintendoWfc[];
extern u8 sWifiApSsidFreespot[];
extern u8 gWifiLinkAnyBssid[];
extern u8 gWifiLinkAnySsid[];
extern u32 sWifiApScanChannelBits[];

extern "C" {
u8 *WifiAp_GetBlock(u32 id);
s32 WifiAp_GetErrorCode(void);
s32 WifiAp_GetErrorCodeForState(u8 *p);
s32 WifiAp_CleanupStep(u8 *p);
s32 WifiLink_GetPhase(void);
s32 WifiLink_EndSearchAsync(void);
s32 WifiLink_DisconnectAsync(void);
s32 WifiLink_TerminateAsync(void);
s32 WifiAp_SetError(s32 v);
s32 WifiLink_SearchAsync(void *a, void *b, u32 c);
s32 WifiAp_GetNthFoundChannel(u32 v);
s32 WifiAp_RescanForState(s32 v);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
void MIi_CpuClear32(u32 v, void *dst, u32 n);
s32 strncmp(const void *a, const void *b, u32 n);
s64 OS_GetTick(void);

s32 WifiAp_GetNoApErrorCode(u8 *p);
s32 WifiAp_GetWirelessOffError(void);
s32 WifiAp_MapStartupError(u32 r);
u8 WifiAp_BuildSearchFromSettings(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_BuildSearchWithFreespot(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_BuildSearchWithHotspots(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_BuildSearchList(s32 mode);
s32 WifiAp_RestartSearch(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_NextSearchPass(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_FinishSearchPass(Unk_ov065_0226bf70_Ctx *ctx, s32 s);
void WifiAp_StartScan(void *a, void *b, s32 n, u32 flags);






















s32 WifiAp_GetNoApErrorCode(u8 *p);
s32 WifiAp_GetWirelessOffError(void);
s32 WifiAp_MapStartupError(u32 r);
s32 WifiAp_GetErrorCode2(void);
s32 WifiAp_StepFailedCleanup(void);
u32 WifiAp_BuildSearchFromFound(s32 n, u8 *p, Unk_ov065_0226bf70_Ent *out, Unk_ov065_0226bf70_Rec *rec);
u8 WifiAp_BuildSearchFromSettings(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_BuildSearchWithHotspots(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_BuildSearchWithFreespot(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_IsFreespot(u8 *rec);
s32 WifiAp_BuildSearchList(s32 mode);
s32 WifiAp_StepRecoverLink(void);
void WifiAp_StartScan(void *a, void *b, s32 n, u32 flags);
s32 WifiAp_NextSearchPass(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_CheckSearchResult(Unk_ov065_0226bf70_Ctx *ctx, s32 s);
s32 WifiAp_FinishSearchPass(Unk_ov065_0226bf70_Ctx *ctx, s32 s);
s32 WifiAp_StepScanFoundChannels(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_StepScanSsids(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_RestartSearch(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_StepScanAllChannels(Unk_ov065_0226bf70_Ctx *ctx);
s32 WifiAp_BeginSearch(Unk_ov065_0226bf70_Ctx *ctx);

s32 WifiAp_BeginSearch(Unk_ov065_0226bf70_Ctx *ctx) {
    ctx->stepStartTick = OS_GetTick();
    ctx->scanChannel = 0;
    ctx->stepStartTick = OS_GetTick();
    WifiAp_StartScan(gWifiLinkAnyBssid, gWifiLinkAnySsid, ctx->scanChannel, 0x200000);
    return 3;
}

s32 WifiAp_StepScanAllChannels(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = OS_GetTick() - ctx->stepStartTick;
    if ((dt << 6) / 0x82ea >= 0x12c) {
        ctx->scanChannel = ctx->scanChannel + 2;
        if (ctx->scanChannel >= 0xd) {
            return WifiAp_FinishSearchPass(ctx, 3);
        }
        ctx->stepStartTick = OS_GetTick();
        WifiAp_StartScan(gWifiLinkAnyBssid, gWifiLinkAnySsid, ctx->scanChannel, 0x200000);
    }
    return 3;
}

s32 WifiAp_RestartSearch(Unk_ov065_0226bf70_Ctx *ctx) {
    ctx->stepCount = 0;
    ctx->linkFlags.hi = ctx->linkFlags.hi + 1;
    WifiAp_BuildSearchList(0);
    ctx->scanChannel = 1;
    return 3;
}

s32 WifiAp_StepScanSsids(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = OS_GetTick() - ctx->stepStartTick;
    if ((dt << 6) / 0x82ea >= 0x96 || ctx->searchEntries[ctx->searchIndex].lo == 1) {
        ctx->searchEntries[ctx->searchIndex].lo = 0;
        ctx->searchIndex++;
        if (ctx->numSearchEntries <= ctx->searchIndex) {
            ctx->searchIndex = 0;
            return WifiAp_FinishSearchPass(ctx, 4);
        }
        ctx->stepStartTick = OS_GetTick();
        WifiAp_StartScan(gWifiLinkAnyBssid, ctx->searchEntries[ctx->searchIndex].ssid, ctx->searchEntries[ctx->searchIndex].channelIndex, 0x300000);
    }
    return 4;
}

s32 WifiAp_StepScanFoundChannels(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = OS_GetTick() - ctx->stepStartTick;
    if ((dt << 6) / 0x82ea >= 0x96 || ctx->searchEntries[ctx->searchIndex].lo == 1) {
        ctx->searchEntries[ctx->searchIndex].lo = 0;
        ctx->searchIndex++;
        if (ctx->numSearchEntries == ctx->searchIndex) {
            ctx->stepCount++;
            ctx->searchIndex = 0;
            ctx->scanChannel = WifiAp_GetNthFoundChannel(ctx->stepCount);
        }
        if (ctx->scanChannel < 0) {
            ctx->stepCount = 0;
            return WifiAp_FinishSearchPass(ctx, 5);
        }
        ctx->stepStartTick = OS_GetTick();
        WifiAp_StartScan(gWifiLinkAnyBssid, ctx->searchEntries[ctx->searchIndex].ssid, ctx->scanChannel, 0x300000);
    }
    return 5;
}

s32 WifiAp_FinishSearchPass(Unk_ov065_0226bf70_Ctx *ctx, s32 s) {
    switch (s) {
    case 3:
        if (ctx->numFoundAps != 0 || ctx->foundChannelMask != 0) {
            if (WifiAp_BuildSearchList(1) != 0) {
                s = 4;
            } else {
                s = WifiAp_NextSearchPass(ctx);
            }
        } else if (ctx->linkFlags.hi < 1) {
            s = WifiAp_RestartSearch(ctx);
        } else {
            s = 6;
        }
        break;
    case 4:
        s = WifiAp_NextSearchPass(ctx);
        break;
    case 5:
        if (ctx->linkFlags.hi < 1) {
            s = WifiAp_RestartSearch(ctx);
        } else {
            s = 6;
        }
        break;
    }
    WifiAp_RescanForState(s);
    return s;
}

s32 WifiAp_CheckSearchResult(Unk_ov065_0226bf70_Ctx *ctx, s32 s) {
    u8 i;
    u8 n;
    if (s == 0x11) {
        return s;
    }
    i = 0;
    n = ctx->numFoundAps;
    for (; i < n; i++) {
        if (ctx->foundApInfo[i * 4] == 0) {
            break;
        }
    }
    if (s == 6) {
        if (n != i) {
            goto reset;
        }
        if (i == 0) {
            WifiAp_SetError(5);
        } else {
            WifiAp_SetError(6);
        }
        return 0x11;
    }
    if (n == 0) {
        return s;
    }
    if (n == i) {
        return s;
    }
    if (((u8 *)ctx + i * 4)[0x446] < 0x14) {
        return s;
    }
reset:
    ctx->selectedAp = i;
    if (WifiLink_EndSearchAsync() != 1) {
        ctx->resumeState = s;
        s = 7;
    }
    return s;
}

s32 WifiAp_NextSearchPass(Unk_ov065_0226bf70_Ctx *ctx) {
    if (ctx->foundChannelMask != 0 && WifiAp_BuildSearchList(2) != 0) {
        ctx->scanChannel = WifiAp_GetNthFoundChannel(0);
        return 5;
    }
    if (ctx->linkFlags.hi < 1) {
        return WifiAp_RestartSearch(ctx);
    }
    return 6;
}

void WifiAp_StartScan(void *a, void *b, s32 n, u32 flags) {
    if (n > 0xc) {
        n = 0xc;
    }
    WifiLink_SearchAsync(a, b, flags | sWifiApScanChannelBits[n]);
}

s32 WifiAp_StepRecoverLink(void) {
    Unk_ov065_0226bf70_Ctx *ctx = (Unk_ov065_0226bf70_Ctx *)WifiAp_GetBlock(0x10);
    u32 st = 9;
    switch (WifiLink_GetPhase()) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        st = ctx->resumeState;
        if (ctx->searchConfig.hi == 1) {
            ctx->foundApInfo[ctx->selectedAp * 4] = 0;
            st = 7;
        } else if (st >= 3 && st <= 5) {
            WifiAp_RescanForState(st);
        }
        break;
    case 4:
    case 5:
        break;
    case 6:
        WifiLink_EndSearchAsync();
        break;
    case 7:
    case 8:
        break;
    case 9:
        WifiLink_DisconnectAsync();
        break;
    case 10:
        break;
    case 12:
        WifiLink_TerminateAsync();
        WifiAp_SetError(4);
        st = 0x11;
        break;
    case 11:
        WifiAp_SetError(0);
        st = 0x11;
        break;
    }
    return st;
}

s32 WifiAp_BuildSearchList(s32 mode) {
    Unk_ov065_0226bf70_Ctx *ctx = (Unk_ov065_0226bf70_Ctx *)WifiAp_GetBlock(0x10);
    volatile s32 z = 0;
    MIi_CpuClear32(z, ctx->searchEntries, 0x144);
    switch (mode) {
    case 0:
        ctx->numSearchEntries = WifiAp_BuildSearchWithFreespot(ctx);
        break;
    case 1:
        ctx->numSearchEntries = WifiAp_BuildSearchFromFound(ctx->numFoundAps, ctx->foundApInfo, ctx->searchEntries, (Unk_ov065_0226bf70_Rec *)ctx->foundApBss);
        break;
    case 2:
        ctx->numSearchEntries = WifiAp_BuildSearchWithHotspots(ctx);
        break;
    }
    return ctx->numSearchEntries;
}

s32 WifiAp_IsFreespot(u8 *rec) {
    if (strncmp(rec + 0xc, sWifiApSsidFreespot, 8) == 0) {
        return 8;
    }
    return 0;
}

s32 WifiAp_BuildSearchWithFreespot(Unk_ov065_0226bf70_Ctx *ctx) {
    u8 n;
    Unk_ov065_0226bf70_Ent *out = ctx->searchEntries;
    n = WifiAp_BuildSearchFromSettings(ctx);
    out += n;
    if (ctx->searchConfig.lo == 0 || ctx->searchConfig.lo == 6) {
        MI_CpuCopy8(sWifiApSsidFreespot, out->ssid, 8);
        out->ssidLength = 8;
        out->apType = 8;
        n++;
    }
    return n;
}

s32 WifiAp_BuildSearchWithHotspots(Unk_ov065_0226bf70_Ctx *ctx) {
    u8 n;
    Unk_ov065_0226bf70_Ent *out = ctx->searchEntries;
    n = WifiAp_BuildSearchFromSettings(ctx);
    out += n;
    if (ctx->searchConfig.lo == 0 || ctx->searchConfig.lo == 4) {
        MI_CpuCopy8(sWifiApSsidUsbConnector, out->ssid, 8);
        out->ssidLength = 8;
        out->apType = 6;
        n++;
        out++;
    }
    if (ctx->searchConfig.lo == 0 || ctx->searchConfig.lo == 7) {
        MI_CpuCopy8(sWifiApSsidWayport, out->ssid, 8);
        out->ssidLength = 8;
        out->apType = 9;
        n++;
        out++;
    }
    if (ctx->searchConfig.lo == 0 || ctx->searchConfig.lo == 8) {
        MI_CpuCopy8(sWifiApSsidNintendoWfc, out->ssid, 0xb);
        out->ssidLength = 0xb;
        out->apType = 0xa;
        n++;
    }
    return n;
}

u8 WifiAp_BuildSearchFromSettings(Unk_ov065_0226bf70_Ctx *ctx) {
    s32 i;
    u8 cnt;
    u8 *q;
    Unk_ov065_0226bf70_Ent *out;
    cnt = 0;
    q = (u8 *)ctx;
    out = ctx->searchEntries;
    for (i = 0; i < 3; q += 0x100, i++) {
        u32 lo = ctx->searchConfig.lo;
        if (lo == 0 || lo == i + 1) {
            if (q[0xe7] != 0xff) {
                u8 k = 0;
                BOOL ok;
                do {
                    u8 c = (q + k)[0x40];
                    if (c == 0) {
                        break;
                    }
                    out->ssid[k] = c;
                    k++;
                } while (k < 0x20);
                if (k != 0) {
                    out->ssidLength = k;
                    out->apType = i;
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
                if (ok) {
                    cnt++;
                    out++;
                }
                if (q[0xe7] == 1) {
                    u8 k2 = 0;
                    BOOL ok2;
                    do {
                        u8 c = (q + k2)[0x60];
                        if (c == 0) {
                            break;
                        }
                        out->ssid[k2] = c;
                        k2++;
                    } while (k2 < 0x20);
                    if (k2 != 0) {
                        out->ssidLength = k2;
                        out->apType = i + 3;
                        ok2 = TRUE;
                    } else {
                        ok2 = FALSE;
                    }
                    if (ok2) {
                        cnt++;
                        out++;
                    }
                }
            }
        }
    }
    return cnt;
}

u32 WifiAp_BuildSearchFromFound(s32 n, u8 *p, Unk_ov065_0226bf70_Ent *out, Unk_ov065_0226bf70_Rec *rec) {
    u8 cnt = 0;
    u8 i = 0;
    if (n > 0) {
        do {
            if (i >= 9) {
                break;
            }
            if (p[0] == 0 && rec->channel != p[3]) {
                u8 k = 0;
                do {
                    u8 c = rec->ssid[k];
                    if (c == 0) {
                        break;
                    }
                    out->ssid[k] = c;
                    k++;
                } while (k < 0x20);
                out->ssidLength = k;
                out->channelIndex = rec->channel - 1;
                out++;
                cnt++;
            }
            p += 4;
            rec++;
            i++;
        } while (i < n);
    }
    return cnt;
}

s32 WifiAp_StepFailedCleanup(void) {
    if (WifiAp_CleanupStep(WifiAp_GetBlock(1) + 0xa) == 1) {
        return 0x12;
    }
    return 0x11;
}

s32 WifiAp_GetErrorCode2(void) {
    u8 *p = WifiAp_GetBlock(1);
    s32 n = WifiAp_GetErrorCode();
    if (n < 4) {
        return WifiAp_MapStartupError(n);
    }
    if (n < 5) {
        return WifiAp_GetWirelessOffError();
    }
    if (n == 5) {
        return WifiAp_GetNoApErrorCode(p);
    }
    return WifiAp_GetErrorCodeForState(p);
}

s32 WifiAp_MapStartupError(u32 r) {
    switch (r) {
    case 1:
        return -9;
    case 0:
        return -10;
    case 2:
        return -8;
    case 3:
        return -7;
    }
    return 0;
}

s32 WifiAp_GetWirelessOffError(void) {
    return -6;
}

s32 WifiAp_GetNoApErrorCode(u8 *p) {
    if (p[0xb] == 0) {
        return -0xc3b3;
    }
    return -0xc79b;
}

}
}
}  // namespace N_be44

namespace N_b488 {
extern "C" {

struct Unk_ov065_0226b488_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[0x2c - 0xc];
    u16 capaInfo;
    u8 pad2e[0x36 - 0x2e];
    u16 channel;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226b488_Entry {
    u8 lo : 4;
    u8 hi : 4;
    u8 apType;
    u8 channelIndex;
    u8 ssidLength;
    u8 ssid[0x20];
};

struct Unk_ov065_0226b488_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226b488_Entry searchEntries[9];
    u8 foundApInfo[0x2c];
    Unk_ov065_0226b488_Rec foundApBss[11];
    u32 stepStartTick;
    u32 stepStartTickHi;
    u8 wepSetting[0x52];
    u8 padd0a;
    u8 unk_d0b_lo : 2;
    u8 unk_d0b_hi : 2;
    u8 unk_d0b_pad : 4;
    u8 unk_d0c_st : 4;
    u8 unk_d0c_pad : 2;
    u8 unk_d0c_mode : 2;
    u8 apType;
    u8 resumeState;
    u8 searchIndex;
    u8 numSearchEntries;
    s8 scanChannel;
    u8 numFoundAps;
    u8 selectedAp;
    u8 connectFailKind;
    u8 stepCount;
};

struct Unk_ov065_0226b78c_Msg {
    s16 unk_00;
    s16 unk_02;
    u32 unk_04;
    u32 unk_08;
};

extern "C" {
u8 *WifiAp_GetBlock(u32 id);
s32 WifiAp_GetState(void);
s32 WifiAp_SortFoundAp(s32 a, void *ctx);
s32 WifiAp_AddFoundChannel(u32 v);
s32 WifiAp_IsFreespot(void *rec);
s32 WifiAp_IsUsbConnectorAp(void *p);
s32 WifiAp_IsNdwcshapAp(void *p);
s32 WifiAp_GetUsbApWepKey(void *a, void *b);
s32 WifiAp_GetNdwcshapWepKey(void *a, void *b);
s32 WifiLink_GetPhase(void);
s32 WifiLink_ConnectAsync(void *rec, void *buf, u32 v);
s32 WifiLink_Finish(void);
s32 WifiLink_CleanupAsync(void);
s32 WifiLink_EndSearchAsync(void);
s32 WifiLink_DisconnectAsync(void);
s32 WifiLink_TerminateAsync(void);
s32 WifiAp_SetError(s32 v);
s32 SockCore_TryShutdown(void);
s32 Sock_Cleanup(void);
s32 NetCheck_Abort(void);
s32 NetCheck_Destroy(void);
void MIi_CpuCopy32(void *src, void *dst, u32 n);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void MI_CpuFill8(void *dst, s32 v, u32 n);
s32 strncmp(void *a, void *b, u32 n);
s64 OS_GetTick(void);

s32 WifiAp_MatchSpecialSsid(Unk_ov065_0226b488_Rec *rec);
s32 WifiAp_MatchSearchEntry(Unk_ov065_0226b488_Rec *rec, s32 n, Unk_ov065_0226b488_Entry *e);
s32 WifiAp_AddFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
void WifiAp_OnApFound(Unk_ov065_0226b488_Rec *rec);
u32 WifiAp_GetAuthOption(Unk_ov065_0226b488_Ctx *ctx);
u32 WifiAp_GetPowerOption(Unk_ov065_0226b488_Ctx *ctx);
u32 WifiAp_SelectApType(Unk_ov065_0226b488_Ctx *ctx);
BOOL WifiAp_GetWepSetting(Unk_ov065_0226b488_Ctx *ctx, u32 idx, u8 *out);
s32 WifiAp_PrepareConnect(Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_StepConnect(Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_StepLinkShutdown(void);
s32 WifiAp_StopSocketLayer(void);

static inline u32 Unk_ov065_0226b488_Level(u16 f) {
    u32 v;
    if (f & 2) {
        v = ((u32)f << 22) >> 24;
    } else {
        v = (u8)(((s32)f >> 2) + 0x19);
    }
    return v;
}








struct Unk_ov065_0226b7f8_Bits {
    u8 v : 2;
};











struct Unk_ov065_0226bd74_Obj {
    u8 pad00[0x10];
    s32 netCheckError;
    u8 furthestApStatus;
    u8 furthestApIndex;
    u8 furthestState;
};


void WifiAp_UpdateFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
void WifiAp_StoreNewFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_AddFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_MatchSearchEntry(Unk_ov065_0226b488_Rec *rec, s32 n, Unk_ov065_0226b488_Entry *e);
s32 WifiAp_MatchSpecialSsid(Unk_ov065_0226b488_Rec *rec);
void WifiAp_OnApFound(Unk_ov065_0226b488_Rec *rec);
void WifiAp_OnLinkNotify(Unk_ov065_0226b78c_Msg *m);
BOOL WifiAp_GetWepSetting(Unk_ov065_0226b488_Ctx *ctx, u32 idx, u8 *out);
u32 WifiAp_GetAuthOption(Unk_ov065_0226b488_Ctx *ctx);
u32 WifiAp_GetPowerOption(Unk_ov065_0226b488_Ctx *ctx);
u32 WifiAp_SelectApType(Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_StepConnect(Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_PrepareConnect(Unk_ov065_0226b488_Ctx *ctx);
s32 WifiAp_ProcessConnect(void);
s32 WifiAp_StopSocketLayer(void);
s32 WifiAp_StepLinkShutdown(void);
s32 WifiAp_CleanupStep(u8 *p);
s32 WifiAp_GetErrorCodeForState(Unk_ov065_0226bd74_Obj *o);

s32 WifiAp_GetErrorCodeForState(Unk_ov065_0226bd74_Obj *o) {
    s32 r;
    if (o->furthestState < 10) {
        if (o->furthestApStatus == 3) {
            r = (s32)0xffff3864 - o->furthestApIndex;
        } else if (o->furthestApStatus == 4) {
            r = (s32)0xffff3800 - o->furthestApIndex;
        } else {
            r = (s32)0xffff379c - o->furthestApIndex;
        }
    } else if (o->furthestState < 13) {
        r = (s32)0xffff34e0 - o->furthestApIndex;
    } else {
        r = o->netCheckError;
        if (r == 0) {
            r = (s32)0xffff3cb0 - o->furthestApIndex;
        } else if (r == -1) {
            r = (s32)0xffff347c - o->furthestApIndex;
        } else if (r == -2) {
            r = (s32)0xffff3418 - o->furthestApIndex;
        } else if (r == -3) {
            r = (s32)0xffff33b4 - o->furthestApIndex;
        } else if (r == -4) {
            r = (s32)0xffff30f8 - o->furthestApIndex;
        } else if (r == -5) {
            r = (s32)0xffff3094 - o->furthestApIndex;
        } else if (r == -6) {
            r = (s32)0xffff3030 - o->furthestApIndex;
        }
    }
    return r;
}

s32 WifiAp_CleanupStep(u8 *p) {
    if (*p <= 10) {
        s32 r = WifiAp_StepLinkShutdown();
        if (r == 1) {
            *p = 0;
            return 1;
        }
        if (r == -1) {
            *p = 0x12;
            return 1;
        }
    } else if (*p == 0xe) {
        NetCheck_Abort();
        NetCheck_Destroy();
        *p = 0xc;
    } else if (*p < 0x12) {
        if (WifiAp_StopSocketLayer() == 1) {
            *p = 10;
        }
    }
    return 0;
}

s32 WifiAp_StepLinkShutdown(void) {
    switch (WifiLink_GetPhase()) {
    case 0:
        return 1;
    case 1:
        WifiLink_Finish();
        break;
    case 2:
        break;
    case 3:
        WifiLink_CleanupAsync();
        break;
    case 4:
    case 5:
        break;
    case 6:
        WifiLink_EndSearchAsync();
        break;
    case 7:
    case 8:
        break;
    case 9:
        WifiLink_DisconnectAsync();
        break;
    case 10:
        break;
    case 12:
        WifiLink_TerminateAsync();
        break;
    case 11:
        WifiAp_SetError(0);
        return -1;
    }
    return 0;
}

s32 WifiAp_StopSocketLayer(void) {
    if (SockCore_TryShutdown() != 0) {
        return 0;
    }
    s32 r = Sock_Cleanup();
    if (r == 0 || r == -0x27) {
        return 1;
    }
    return 0;
}

s32 WifiAp_ProcessConnect(void) {
    s32 r = WifiAp_GetState();
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    switch (r) {
    case 7:
        r = WifiAp_PrepareConnect(ctx);
        break;
    case 8:
        r = WifiAp_StepConnect(ctx);
        break;
    }
    return r;
}

s32 WifiAp_PrepareConnect(Unk_ov065_0226b488_Ctx *ctx) {
    Unk_ov065_0226b488_Rec *rec = ctx->foundApBss + ctx->selectedAp;
    ctx->apType = WifiAp_SelectApType(ctx);
    MI_CpuFill8(ctx->wepSetting, 0, 0x52);
    if (WifiAp_GetWepSetting(ctx, ctx->apType, ctx->wepSetting) != 0) {
        ctx->unk_d0b_hi = 1;
        if ((((s32)rec->capaInfo >> 4) & 1) == 0) {
            ctx->foundApInfo[ctx->selectedAp * 4] = 3;
            return 9;
        }
        if (ctx->apType == 6 && rec->ssid[9] == 0) {
            ctx->foundApInfo[ctx->selectedAp * 4] = 3;
            return 9;
        }
    } else {
        ctx->unk_d0b_hi = 0;
        if ((((s32)rec->capaInfo >> 4) & 1) == 1) {
            ctx->foundApInfo[ctx->selectedAp * 4] = 3;
            return 9;
        }
    }
    ctx->stepCount = 0;
    ctx->connectFailKind = 0;
    return 8;
}

s32 WifiAp_StepConnect(Unk_ov065_0226b488_Ctx *ctx) {
    s32 s = WifiLink_GetPhase();
    Unk_ov065_0226b488_Rec *rec = ctx->foundApBss + ctx->selectedAp;
    u32 r6;
    if (s == 3) {
        r6 = WifiAp_GetPowerOption(ctx);
        ctx->stepCount = ctx->stepCount + 1;
        if (ctx->stepCount > 3) {
            ctx->stepCount = 0;
            ctx->foundApInfo[ctx->selectedAp * 4] = 1;
            return 9;
        }
        if (ctx->stepCount != 1) {
            if (ctx->connectFailKind == 1) {
                ctx->unk_d0b_hi = 0;
            } else if (ctx->connectFailKind == 2) {
                ctx->stepCount = 0;
                ctx->foundApInfo[ctx->selectedAp * 4] = 3;
                return 9;
            } else if (ctx->connectFailKind == 3) {
                ctx->stepCount = 0;
                ctx->foundApInfo[ctx->selectedAp * 4] = 4;
                return 9;
            }
        }
        WifiLink_ConnectAsync(rec, ctx->wepSetting, r6 | WifiAp_GetAuthOption(ctx));
    } else if (s == 9) {
        s64 t;
        ctx->stepCount = 0;
        t = OS_GetTick();
        ctx->stepStartTick = (u32)t;
        ctx->stepStartTickHi = (u32)(t >> 32);
        return 10;
    }
    return 8;
}

u32 WifiAp_SelectApType(Unk_ov065_0226b488_Ctx *ctx) {
    struct {
        Unk_ov065_0226b488_Rec *rec;
        s32 result;
        s32 i;
        u8 *d;
    } l;
    l.rec = ctx->foundApBss + ctx->selectedAp;
    l.result = 0;
    if (ctx->unk_d0c_mode == 0) {
        u32 cnt = l.result;
        u32 proto = l.rec->ssidLength;
        if (proto == 0x20) {
            l.result = WifiAp_MatchSpecialSsid(l.rec);
            if (l.result > 0) {
                cnt++;
            } else {
                l.result = 0;
            }
        } else if (proto == 8) {
            l.result = WifiAp_IsFreespot(l.rec);
            if (l.result != 0) {
                cnt++;
            } else {
                l.result = 0;
            }
        }
        l.i = 0;
        s32 n = ctx->numSearchEntries;
        if (n > 0) {
            u8 *p = (u8 *)ctx;
            Unk_ov065_0226b488_Entry *e;
            l.d = (u8 *)ctx + 0x304;
            e = ctx->searchEntries;
            do {
                u32 pr = l.rec->ssidLength;
                if (pr == p[0x303] && strncmp(l.rec->ssid, l.d, pr) == 0) {
                    if (cnt == 0) {
                        l.result = p[0x301];
                    } else {
                        e->hi = 1;
                        ctx->unk_d0c_mode = 1;
                    }
                    cnt++;
                }
                p += 0x24;
                l.d += 0x24;
                e++;
                l.i++;
            } while (l.i < ctx->numSearchEntries);
        }
    } else {
        Unk_ov065_0226b488_Entry *e;
        u8 *p;
        s32 cnt;
        s32 i = l.result;
        cnt = i;
        if (i < ctx->numSearchEntries) {
            e = ctx->searchEntries;
            p = (u8 *)ctx;
            do {
                if (e->hi == 1) {
                    if (cnt == 0) {
                        e->hi = 0;
                        l.result = p[0x301];
                    }
                    cnt++;
                }
                e++;
                p += 0x24;
                i++;
            } while (i < ctx->numSearchEntries);
        }
        if (cnt == 1) {
            ctx->unk_d0c_mode = 0;
        }
    }
    return (u8)l.result;
}

u32 WifiAp_GetPowerOption(Unk_ov065_0226b488_Ctx *ctx) {
    if (ctx->unk_d0b_lo == 1) {
        return 0x30000;
    }
    return 0x20000;
}

u32 WifiAp_GetAuthOption(Unk_ov065_0226b488_Ctx *ctx) {
    if (ctx->unk_d0b_hi == 1) {
        return 0xc0000;
    }
    return 0x80000;
}

BOOL WifiAp_GetWepSetting(Unk_ov065_0226b488_Ctx *ctx, u32 idx, u8 *out) {
    u8 *c = (u8 *)ctx;
    switch (idx) {
    case 2:
        c += 0x100;
    case 1:
        c += 0x100;
    case 0:
        out[0] = ((Unk_ov065_0226b7f8_Bits *)(c + 0xe6))->v;
        MI_CpuCopy8(c + 0x80, out + 2, 0x50);
        break;
    case 5:
        c += 0x100;
    case 4:
        c += 0x100;
    case 3:
        out[0] = 1;
        MI_CpuCopy8(c + 0xd1, out + 2, 0x14);
        out[0x16] = 0;
        break;
    case 6:
        out[0] = 2;
        WifiAp_GetUsbApWepKey(ctx->foundApBss[ctx->selectedAp].ssid, out + 2);
        break;
    case 7:
        out[0] = 2;
        WifiAp_GetNdwcshapWepKey(ctx->foundApBss[ctx->selectedAp].ssid, out + 2);
        break;
    case 8:
    case 9:
        break;
    }
    if (out[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

void WifiAp_OnLinkNotify(Unk_ov065_0226b78c_Msg *m) {
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    if (m->unk_00 == 5) {
        if (m->unk_02 != 0) {
            switch (m->unk_08) {
            case 0xd:
                ctx->connectFailKind = 1;
                break;
            case 0xf:
                ctx->connectFailKind = 2;
                break;
            case 0x11:
                ctx->connectFailKind = 3;
                break;
            default:
                ctx->connectFailKind = 4;
                break;
            }
        }
    } else if (m->unk_00 == 7) {
        WifiAp_OnApFound((Unk_ov065_0226b488_Rec *)m->unk_04);
    }
}

void WifiAp_OnApFound(Unk_ov065_0226b488_Rec *rec) {
    s32 r6 = -1;
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    WifiAp_GetBlock(1)[0xb] = 1;
    switch (WifiAp_GetState()) {
    case 3: {
        u16 proto = rec->ssidLength;
        u8 c;
        if (proto == 0 || (c = rec->ssid[0]) == 0) {
            WifiAp_AddFoundChannel(rec->channel);
        } else if (proto == 1 || c == 0x20) {
            WifiAp_AddFoundChannel(rec->channel);
            r6 = WifiAp_MatchSearchEntry(rec, ctx->numSearchEntries, ctx->searchEntries);
        } else {
            r6 = WifiAp_MatchSearchEntry(rec, ctx->numSearchEntries, ctx->searchEntries);
        }
        break;
    }
    case 4:
    case 5:
        r6 = WifiAp_MatchSearchEntry(rec, 1, ctx->searchEntries + ctx->searchIndex);
        if (r6 >= 0) {
            ((Unk_ov065_0226b488_Entry *)((u8 *)ctx + 0x300) + ctx->searchIndex)->lo = 1;
        }
        break;
    default:
        return;
    }
    if (r6 >= 0) {
        WifiAp_SortFoundAp(WifiAp_AddFoundAp(r6, rec, ctx), ctx);
    }
}

s32 WifiAp_MatchSpecialSsid(Unk_ov065_0226b488_Rec *rec) {
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)WifiAp_GetBlock(0x10);
    if (ctx->unk_d0c_st == 0 || ctx->unk_d0c_st == 4) {
        if ((u8)(((s32)rec->capaInfo >> 4) & 1) == 1) {
            if (WifiAp_IsUsbConnectorAp(rec->ssid) == 1) {
                return 6;
            }
        }
    }
    if (ctx->unk_d0c_st == 0 || ctx->unk_d0c_st == 5) {
        if ((u8)(((s32)rec->capaInfo >> 4) & 1) == 1) {
            if (WifiAp_IsNdwcshapAp(rec->ssid) == 1) {
                return 7;
            }
        }
    }
    return -1;
}

s32 WifiAp_MatchSearchEntry(Unk_ov065_0226b488_Rec *rec, s32 n, Unk_ov065_0226b488_Entry *e) {
    s32 i;
    u16 proto;
    if (rec->ssidLength == 0x20) {
        s32 r = WifiAp_MatchSpecialSsid(rec);
        if (r > 0) {
            return r;
        }
    }
    i = 0;
    if (n > 0) {
        proto = rec->ssidLength;
        do {
            if ((u8)proto == e->ssidLength && strncmp(rec->ssid, e->ssid, proto) == 0) {
                return e->apType;
            }
            e++;
            i++;
        } while (i < n);
    }
    return -1;
}

s32 WifiAp_AddFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    s32 i = 0;
    s32 found = -1;
    u8 *e;
    u32 b0;
    s32 n;
    n = ctx->numFoundAps;
    if (n > 0) {
        e = ctx->foundApBss[0].bssid;
        b0 = rec->bssid[0];
        do {
            if (b0 == e[0] && rec->bssid[1] == e[1] && rec->bssid[2] == e[2] &&
                rec->bssid[3] == e[3] && rec->bssid[4] == e[4] && rec->bssid[5] == e[5]) {
                found = i;
                break;
            }
            e += 0xc0;
            i++;
        } while (i < n);
    }
    if (found == -1) {
        WifiAp_StoreNewFoundAp((u8)a, rec, ctx);
        if (ctx->numFoundAps < 10) {
            ctx->numFoundAps++;
        }
        found = 10;
    } else {
        WifiAp_UpdateFoundAp(found, rec, ctx);
    }
    return found;
}

void WifiAp_StoreNewFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    u8 *p = ctx->foundApInfo + 0x28;
    Unk_ov065_0226b488_Rec *q = ctx->foundApBss + 10;
    p[1] = a;
    u16 f = rec->rssi;
    p[2] = (u8)Unk_ov065_0226b488_Level(f);
    p[3] = ctx->scanChannel + 1;
    MIi_CpuCopy32(rec, q, 0xc0);
}

void WifiAp_UpdateFoundAp(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    u8 *p = ctx->foundApInfo + a * 4;
    Unk_ov065_0226b488_Rec *q = ctx->foundApBss + a;
    u16 f = rec->rssi;
    u8 w = (u8)Unk_ov065_0226b488_Level(f);
    if (w > p[2]) {
        p[2] = w;
        p[3] = ctx->scanChannel + 1;
    }
    MIi_CpuCopy32(rec, q, 0xc0);
}

}
}
}  // namespace N_b488

namespace N_ab40 {
extern "C" {

// ov065_019: network library, connection/event state (0x0226ab40..0x0226b3c4)

struct Unk_ov065_0226ab5c_Conn {
    u8 unk_0000[0xf00];
    u8 sendBuf[0x1244];
    u8 targetBssid[6];
    u16 targetSsidLength;
    u8 targetSsid[0x114];
    s32 phase;
    u8 unk_2264[7];
    u8 isResetting;
};

typedef void (*Unk_ov065_0226ac54_Cb)(void *, void *, void *, u32);

struct Unk_ov065_0226ab40_Glb {
    u8 initialized;
    u8 unk_01[3];
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    u32 sendResult;
    Unk_ov065_0226ac54_Cb recvCallback;
};

struct Unk_ov065_0226aed4_Fc {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 allocMask;
    u8 state;
    u8 errorState;
    u8 anyApFound;
    u32 errorCode;
    u8 unk_10[4];
    u8 furthestApStatus;
    u8 furthestApIndex;
    u8 furthestState;
    u8 connectedApType;
};

struct Unk_ov065_0226b27c_Cfg {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 dmaNo;
    u8 powerMode;
    u8 apFilter;
    u8 netCheckMode;
};

struct Unk_ov065_0226b27c_F8 {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226b27c_B0b {
    u8 lo : 2;
};

struct Unk_ov065_0226b27c_B0c {
    u8 lo : 4;
    u8 mid : 2;
};

struct Unk_ov065_0226b3c4_Key {
    u8 info[4];
};

struct Unk_ov065_0226b3c4_Rec {
    u8 unk_00[0xc0];
};

extern "C" {

extern Unk_ov065_0226ab40_Glb sWifiLinkSendState;
extern u8 sWifiLinkSendLock[];
extern volatile u8 sWifiRssiCount;
extern u8 sWifiRssiSamples[];
extern u8 *sWifiApContext;
extern void *sWifiApLinkWork;
extern void *sWifiApSocketConfig;
extern Unk_ov065_0226b27c_F8 *sWifiApAllocator;
extern Unk_ov065_0226aed4_Fc *sWifiApControl;

u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
s32 func_02133150(s32, s32);
void OS_InitMutex(void *);
s32 DGT_Hash1GetDigest_R();
s32 DGT_Hash1SetSource();
s32 DGT_Hash1Reset();
void MIi_CpuClear32(u32, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
s32 strncmp(void *, void *, u32);
s32 WM_SetDCFData(void *, void *, void *, u32);
void func_020ff154(void *);

Unk_ov065_0226ab5c_Conn *WifiLink_GetWork();
s32 WifiLink_Init(void *, u32);
s32 WifiLink_UnlockFromIrq(void *);
s32 WifiLink_TryLockFromIrq(void *);
void WifiLink_OnKeepAliveSent();
s32 WifiAp_CleanupStep(u8 *);
s32 WifiAp_GetErrorCode2();
u8 WifiAp_StepFailedCleanup();
u8 WifiAp_ProcessConnect();
u8 WifiAp_StepRecoverLink();
u8 WifiAp_ProcessSearch();
u8 WifiAp_ProcessStartup();
u8 WifiAp_ProcessNetSetup();

u8 WifiLink_GetAverageRssi();
















void WifiAp_FreeBlock(u32, void *, u32);



u8 WifiAp_GetState();
void *WifiAp_GetBlock(u32);


















void WifiAp_SortFoundAp(u32 n, u8 *base);

void WifiAp_SortFoundAp(u32 n, u8 *base) {
    Unk_ov065_0226b3c4_Key *keys = (Unk_ov065_0226b3c4_Key *)(base + 0x444);
    Unk_ov065_0226b3c4_Rec *recs = (Unk_ov065_0226b3c4_Rec *)(base + 0x470);
    s32 j = n - 1;
    if (j >= 0) {
        Unk_ov065_0226b3c4_Key *p4 = &keys[j];
        Unk_ov065_0226b3c4_Rec *p6 = &recs[j];
        do {
            Unk_ov065_0226b3c4_Key tk;
            Unk_ov065_0226b3c4_Rec tr;
            if (keys[n].info[2] < p4->info[2]) {
                break;
            }
            MIi_CpuCopy32(p4, &tk, 4);
            MIi_CpuCopy32(&keys[n], p4, 4);
            MIi_CpuCopy32(&tk, &keys[n], 4);
            MIi_CpuCopy32(p6, &tr, 0xc0);
            MIi_CpuCopy32(&recs[n], p6, 0xc0);
            MIi_CpuCopy32(&tr, &recs[n], 0xc0);
            n = j;
            p4--;
            p6--;
            j--;
        } while (j >= 0);
    }
    { volatile u32 z = 0; keys += 10; MIi_CpuClear32(z, keys, 4); }
    { volatile u32 z = 0; MIi_CpuClear32(z, recs + 10, 0xc0); }
}

}
}
}  // namespace N_ab40

