// mwcc-flags: -O4,p -str reuse
#include "types.h"
#include "net/SockCoreConfig.h"
#include "net/SockCoreSocket.h"
#include "net/IpStackConfig.h"

extern "C" {
extern SockCoreConfig *sSockCoreConfig;
extern u32 sSockYieldMode;
extern u32 sSockLastHostIp;
extern u32 sSockCoreState;
extern void *sSockDefaultSocket;
extern IpStackConfig sIpStackParams;

// other TUs of this overlay
extern u32 gOwnIp;
extern u32 sNetmask;
extern u32 sGateway;
extern u32 sDnsServers[2];
extern SockCreateParams sSockTcpParams;
extern SockCreateParams sSockSendOnlyParams;

// main module
void OSi_ReferSymbol(u32);
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
s32 SockCore_Create(SockCreateParams *);

BOOL SockCore_IsLinkUp(void);
void SockCore_OnDhcpAddressReady(void);
void SockCore_OnStaticAddressReady(void);
void SockCore_SetupStackConfig(void);
s32 SockCore_CreateMsgPoolAndDefaultSocket(void);
s32 SockCore_Startup(SockCoreConfig *);
}

extern "C" {
void *sSockDefaultSocket;
u32 sSockCoreState;
u32 sSockLastHostIp;
u32 sSockYieldMode;
SockCoreConfig *sSockCoreConfig;
IpStackConfig sIpStackParams;

s32 SockCore_Startup(SockCoreConfig *cfg)
{
    OSi_ReferSymbol(0x2000bd4);
    if (sSockCoreConfig != NULL) {
        return 0;
    }
    sSockCoreConfig = cfg;
    SockCore_SetupStackConfig();
    return SockCore_CreateMsgPoolAndDefaultSocket();
}

s32 SockCore_CreateMsgPoolAndDefaultSocket(void)
{
    s32 r = SockCore_CreateMsgPool(sSockCoreConfig->msgPoolSize);
    if (r >= 0) {
        sSockDefaultSocket = (void *)SockCore_Create(&sSockSendOnlyParams);
    }
    return r;
}

void SockCore_SetupStackConfig(void)
{
    IpStackConfig *g = &sIpStackParams;
    SockCoreConfig *c = sSockCoreConfig;
    s32 a;
    s32 b;
    MI_CpuFill8(g, 0, 0x30);
    g->allocFunc = c->alloc;
    g->freeFunc = c->free;
    g->linkCheckCallback = SockCore_IsLinkUp;
    g->randSeed = 0;
    g->randSeedHi = 0;
    g->yieldMode = sSockYieldMode;
    if (c->recvRingSize != 0) {
        g->recvRingSize = c->recvRingSize;
    } else {
        g->recvRingSize = 0x4000;
    }
    if (c->recvRingBuf != 0) {
        g->recvRingBuf = c->recvRingBuf;
    } else {
        g->recvRingBuf = (u32)sSockCoreConfig->alloc(g->recvRingSize);
    }
    a = c->mtu;
    if (a == 0) {
        a = 0x240;
    }
    b = c->recvWindow;
    if (b == 0) {
        b = 0x10c0;
    }
    g->mss = a - 0x28;
    sSockTcpParams.rxBufSize = b;
    sSockTcpParams.rxConsumeLimit = _s32_div_f(b, 2);
    gOwnIp = 0;
    if (c->useDhcp != 0) {
        sSockCoreState = 1;
        g->stackFlags = 0;
        g->addrReadyCallback = SockCore_OnDhcpAddressReady;
        g->requestedIp = sSockLastHostIp;
    } else {
        sSockCoreState = 0;
        g->stackFlags = 1;
        g->addrReadyCallback = SockCore_OnStaticAddressReady;
    }
    {
        s32 t = c->threadPriority;
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
    SockCoreConfig *c = sSockCoreConfig;
    gOwnIp = c->ownIp;
    sNetmask = c->netmask;
    sGateway = c->gateway;
    sDnsServers[0] = c->dns1;
    sDnsServers[1] = c->dns2;
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
