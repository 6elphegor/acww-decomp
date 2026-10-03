// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0225f1cc_Cfg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    void *(*unk_18)(u32);
    void (*unk_1c)(void *);
    s32 unk_20;
    u32 unk_24;
    u32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
};

struct Unk_ov065_0225f210_G {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    u32 unk_14;
    u32 unk_18;
    void *unk_1c;
    u32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_0225f634_Params {
    s8 unk_00;
    s8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[0x12];
};

extern "C" {
extern Unk_ov065_0225f1cc_Cfg *sSockCoreConfig;
extern u32 sSockYieldMode;
extern u32 sSockLastHostIp;
extern u32 sSockCoreState;
extern void *sSockDefaultSocket;
extern Unk_ov065_0225f210_G sIpStackParams;

// other TUs of this overlay
extern u32 gOwnIp;
extern u32 sNetmask;
extern u32 sGateway;
extern u32 sDnsServers[2];
extern Unk_ov065_0225f634_Params sSockTcpParams;
extern Unk_ov065_0225f634_Params sSockSendOnlyParams;

// main module
void func_02000b44(u32);
void *MI_CpuFill8(void *, s32, u32);
s32 _s32_div_f(s32, s32);

s32 WifiLink_GetConnectedBssid(void);
void IpStack_SetThreadPriority(s32);
void WifiLink_SetRecvCallback(void *);
void IpStack_SetIdleCallback(void *);
void IpStack_Init(void *);
void Eth_OnFrameReceived(void);
void SockCore_FreeClosedSockets(void);
s32 SockCore_CreateMsgPool(s32);
s32 SockCore_Create(Unk_ov065_0225f634_Params *);

BOOL SockCore_IsLinkUp(void);
void SockCore_OnDhcpAddressReady(void);
void SockCore_OnStaticAddressReady(void);
void SockCore_SetupStackConfig(void);
s32 SockCore_CreateMsgPoolAndDefaultSocket(void);
s32 SockCore_Startup(Unk_ov065_0225f1cc_Cfg *);
}

extern "C" {
void *sSockDefaultSocket;
u32 sSockCoreState;
u32 sSockLastHostIp;
u32 sSockYieldMode;
Unk_ov065_0225f1cc_Cfg *sSockCoreConfig;
Unk_ov065_0225f210_G sIpStackParams;

s32 SockCore_Startup(Unk_ov065_0225f1cc_Cfg *cfg)
{
    func_02000b44(0x2000bd4);
    if (sSockCoreConfig != NULL) {
        return 0;
    }
    sSockCoreConfig = cfg;
    SockCore_SetupStackConfig();
    return SockCore_CreateMsgPoolAndDefaultSocket();
}

s32 SockCore_CreateMsgPoolAndDefaultSocket(void)
{
    s32 r = SockCore_CreateMsgPool(sSockCoreConfig->unk_20);
    if (r >= 0) {
        sSockDefaultSocket = (void *)SockCore_Create(&sSockSendOnlyParams);
    }
    return r;
}

void SockCore_SetupStackConfig(void)
{
    Unk_ov065_0225f210_G *g = &sIpStackParams;
    Unk_ov065_0225f1cc_Cfg *c = sSockCoreConfig;
    s32 a;
    s32 b;
    MI_CpuFill8(g, 0, 0x30);
    g->unk_04 = (void *)c->unk_18;
    g->unk_08 = (void *)c->unk_1c;
    g->unk_10 = (void *)SockCore_IsLinkUp;
    g->unk_14 = 0;
    g->unk_18 = 0;
    g->unk_2c = sSockYieldMode;
    if (c->unk_24 != 0) {
        g->unk_20 = c->unk_24;
    } else {
        g->unk_20 = 0x4000;
    }
    if (c->unk_28 != 0) {
        g->unk_1c = (void *)c->unk_28;
    } else {
        g->unk_1c = sSockCoreConfig->unk_18(g->unk_20);
    }
    a = c->unk_30;
    if (a == 0) {
        a = 0x240;
    }
    b = c->unk_34;
    if (b == 0) {
        b = 0x10c0;
    }
    g->unk_24 = a - 0x28;
    sSockTcpParams.unk_02 = b;
    sSockTcpParams.unk_04 = _s32_div_f(b, 2);
    gOwnIp = 0;
    if (c->unk_00 != 0) {
        sSockCoreState = 1;
        g->unk_00 = 0;
        g->unk_0c = (void *)SockCore_OnDhcpAddressReady;
        g->unk_28 = sSockLastHostIp;
    } else {
        sSockCoreState = 0;
        g->unk_00 = 1;
        g->unk_0c = (void *)SockCore_OnStaticAddressReady;
    }
    {
        s32 t = c->unk_2c;
        if (t == 0) {
            t = 0xb;
        }
        IpStack_SetThreadPriority(t);
    }
    WifiLink_SetRecvCallback((void *)Eth_OnFrameReceived);
    IpStack_SetIdleCallback((void *)SockCore_FreeClosedSockets);
    IpStack_Init(g);
}

void SockCore_OnStaticAddressReady(void)
{
    Unk_ov065_0225f1cc_Cfg *c = sSockCoreConfig;
    gOwnIp = c->unk_04;
    sNetmask = c->unk_08;
    sGateway = c->unk_0c;
    sDnsServers[0] = c->unk_10;
    sDnsServers[1] = c->unk_14;
    sSockCoreState |= 2;
}

void SockCore_OnDhcpAddressReady(void)
{
    sSockCoreState |= 2;
}

BOOL SockCore_IsLinkUp(void)
{
    if (WifiLink_GetConnectedBssid()) {
        return TRUE;
    }
    return FALSE;
}
}
