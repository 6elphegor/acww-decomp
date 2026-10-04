// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0226ab5c_Conn {
    u8 unk_0000[0xf00];
    u8 sendBuf[0x1244];
    u8 targetBssid[6];
    u16 targetSsidLength;
    u8 targetSsid[0x114];
    s32 phase;
    u8 unk_2264[7];
    u8 unk_226b;
};

struct Unk_ov065_0226aed4_Fc {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 allocMask;
    u8 state;
    u8 unk_0a;
    u8 anyApFound;
    u32 unk_0c;
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
    u8 unk_0a;
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

extern "C" {

Unk_ov065_0226b27c_F8 *sWifiApAllocator;
void *sWifiApSocketConfig;
void *sWifiApLinkWork;
u8 *sWifiApContext;
Unk_ov065_0226aed4_Fc *sWifiApControl;

u32 OS_DisableInterrupts();
void OS_RestoreInterrupts(u32);
void MIi_CpuClear32(u32, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
s32 strncmp(void *, void *, u32);
void func_020ff154(void *);
s32 DGT_Hash1GetDigest_R();
s32 DGT_Hash1SetSource();
s32 DGT_Hash1Reset();

Unk_ov065_0226ab5c_Conn *WifiLink_GetWork();
s32 WifiLink_Init(void *, u32);
s32 WifiAp_CleanupStep(u8 *);
s32 WifiAp_GetErrorCode2();
u8 WifiAp_StepFailedCleanup();
u8 WifiAp_ProcessConnect();
u8 WifiAp_StepRecoverLink();
u8 WifiAp_ProcessSearch();
u8 WifiAp_ProcessStartup();
u8 WifiAp_ProcessNetSetup();

u32 WifiLink_GetLinkLevel();

s32 WifiAp_GetLinkLevel();
BOOL WifiAp_MacEquals(u8 *a, u8 *b);
s32 WifiAp_HashGetDigest();
s32 WifiAp_HashSetSource();
s32 WifiAp_HashReset();
s32 WifiAp_GetConnectResultKind();
void WifiAp_FreeContext();
u32 WifiAp_FoldApIndex(u32 x);
void WifiAp_SetConnectedApType(u32 v);
u32 WifiAp_GetErrorCode();
void WifiAp_SetError(u32 v);
u8 WifiAp_GetState();
void WifiAp_SetState(u8 v);
void *WifiAp_GetBlock(u32 m);
void WifiAp_FreeAll();
void WifiAp_FreeBlock(u32 m, void *a, u32 b);
void *WifiAp_AllocBlock(u32 m, u32 a);
void WifiAp_SetApEntry(u32 idx, void *dst);
s32 WifiAp_RequestCleanup();
u32 WifiAp_GetConnectedApType();
s32 WifiAp_GetStatus();
s32 WifiAp_Process();
s32 WifiAp_Init(Unk_ov065_0226b27c_Cfg *cfg);

s32 WifiAp_Init(Unk_ov065_0226b27c_Cfg *cfg) {
    u8 *ec;
    Unk_ov065_0226b27c_F8 *f8;
    Unk_ov065_0226aed4_Fc *fc;
    s32 r;
    fc = (Unk_ov065_0226aed4_Fc *)cfg->unk_00(1, 0x18);
    sWifiApControl = fc;
    { volatile u32 z = 0; MIi_CpuClear32(z, sWifiApControl, 0x18); }
    fc = sWifiApControl;
    fc->unk_00 = cfg->unk_00;
    fc->unk_04 = cfg->unk_04;
    fc->state = 1;
    fc->furthestState = 1;
    fc->allocMask = 1;
    sWifiApContext = (u8 *)WifiAp_AllocBlock(0x10, 0xd18);
    sWifiApLinkWork = WifiAp_AllocBlock(2, 0x2300);
    sWifiApSocketConfig = WifiAp_AllocBlock(4, 0x58);
    sWifiApAllocator = (Unk_ov065_0226b27c_F8 *)WifiAp_AllocBlock(8, 0xc);
    { volatile u32 z = 0; MIi_CpuClear32(z, sWifiApContext, 0xd18); }
    { volatile u32 z = 0; MIi_CpuClear32(z, sWifiApLinkWork, 0x2300); }
    { volatile u32 z = 0; MIi_CpuClear32(z, sWifiApSocketConfig, 0x58); }
    { volatile u32 z = 0; MIi_CpuClear32(z, sWifiApAllocator, 0xc); }
    ec = sWifiApContext;
    ec[0xd0a] = cfg->dmaNo;
    ((Unk_ov065_0226b27c_B0b *)(ec + 0xd0b))->lo = cfg->powerMode;
    f8 = sWifiApAllocator;
    f8->unk_00 = cfg->unk_00;
    f8->unk_04 = cfg->unk_04;
    f8->unk_08 = 0;
    {
        Unk_ov065_0226b27c_B0c *b = (Unk_ov065_0226b27c_B0c *)(ec + 0xd0c);
        b->lo = cfg->unk_0a;
        b->mid = cfg->netCheckMode;
    }
    func_020ff154(ec);
    r = WifiLink_Init(sWifiApLinkWork, 0x2300);
    if (r == 1 || r >= 4) {
        WifiAp_FreeAll();
        return 0;
    }
    return 1;
}

s32 WifiAp_Process() {
    u8 st = WifiAp_GetState();
    u8 r = st;
    if (st == 1) {
        r = WifiAp_ProcessStartup();
    } else if (st < 7) {
        u32 irq = OS_DisableInterrupts();
        r = WifiAp_ProcessSearch();
        WifiAp_SetState(r);
        OS_RestoreInterrupts(irq);
    } else if (st < 9) {
        r = WifiAp_ProcessConnect();
    } else if (st < 10) {
        r = WifiAp_StepRecoverLink();
    } else if (st < 16) {
        r = WifiAp_ProcessNetSetup();
    } else if (st == 17) {
        r = WifiAp_StepFailedCleanup();
    }
    WifiAp_SetState(r);
    if (r == 16) {
        s32 t = WifiAp_GetConnectResultKind();
        WifiAp_FreeContext();
        return t;
    }
    if (r == 18) {
        WifiAp_FreeContext();
        return -1;
    }
    return 0;
}

s32 WifiAp_GetStatus() {
    u32 n = WifiAp_GetState();
    if (n <= 1) {
        return 0;
    }
    if (n < 7) {
        return 1;
    }
    if (n == 9) {
        return 4;
    }
    if (n < 10) {
        return 2;
    }
    if (n == 11) {
        return 4;
    }
    if (n < 16) {
        return 3;
    }
    if (n == 16) {
        return 5;
    }
    if (n == 17) {
        return 4;
    }
    return WifiAp_GetErrorCode2();
}

u32 WifiAp_GetConnectedApType() {
    u32 r = 0xff;
    u32 n = WifiAp_GetState();
    if (n >= 0xa && n <= 0x10) {
        r = sWifiApControl->connectedApType;
    }
    return r;
}

s32 WifiAp_RequestCleanup() {
    u8 st = WifiAp_GetState();
    if (st == 0 || st == 0x12) {
        WifiAp_FreeAll();
        return 1;
    }
    WifiAp_CleanupStep(&st);
    WifiAp_SetState(st);
    return 0;
}

void WifiAp_SetApEntry(u32 idx, void *dst) {
    u8 *p = (u8 *)WifiAp_GetBlock(0x10);
    MIi_CpuCopy32(dst, p + (idx << 8), 0xf0);
}

void *WifiAp_AllocBlock(u32 m, u32 a) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)WifiAp_GetBlock(1);
    if ((f->allocMask & m) == 0) {
        f->allocMask |= m;
        return f->unk_00(m, a);
    }
    return 0;
}

void WifiAp_FreeBlock(u32 m, void *a, u32 b) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)WifiAp_GetBlock(1);
    if ((f->allocMask & m) != 0) {
        f->allocMask &= ~m;
        f->unk_04(m, a, b);
    }
}

void WifiAp_FreeAll() {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)WifiAp_GetBlock(1);
    if ((f->allocMask & 0x10) != 0) {
        void *o = WifiAp_GetBlock(0x10);
        f->allocMask &= ~0x10;
        f->unk_04(0x10, o, 0xd18);
    }
    if ((f->allocMask & 8) != 0) {
        void *o = WifiAp_GetBlock(8);
        f->allocMask &= ~8;
        f->unk_04(8, o, 0xc);
    }
    if ((f->allocMask & 4) != 0) {
        void *o = WifiAp_GetBlock(4);
        f->allocMask &= ~4;
        f->unk_04(4, o, 0x58);
    }
    if ((f->allocMask & 2) != 0) {
        void *o = WifiAp_GetBlock(2);
        f->allocMask &= ~2;
        f->unk_04(2, o, 0x2300);
    }
    if ((f->allocMask & 1) != 0) {
        f->allocMask &= ~1;
        f->unk_04(1, f, 0x18);
    }
}

void *WifiAp_GetBlock(u32 m) {
    if ((m & 1) != 0) {
        return sWifiApControl;
    }
    if ((m & 2) != 0) {
        return sWifiApLinkWork;
    }
    if ((m & 4) != 0) {
        return sWifiApSocketConfig;
    }
    if ((m & 8) != 0) {
        return sWifiApAllocator;
    }
    if ((m & 0x10) != 0) {
        return sWifiApContext;
    }
    return 0;
}

void WifiAp_SetState(u8 v) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)WifiAp_GetBlock(1);
    u8 *e = (u8 *)WifiAp_GetBlock(0x10);
    f->state = v;
    if (v < 0x10 && v > f->furthestState) {
        f->furthestState = v;
        if (v > 7) {
            f->furthestApIndex = WifiAp_FoldApIndex(e[0xd0d]);
            f->furthestApStatus = (e + e[0xd13] * 4)[0x444];
        }
    }
}

u8 WifiAp_GetState() {
    return sWifiApControl->state;
}

void WifiAp_SetError(u32 v) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)WifiAp_GetBlock(1);
    f->unk_0c = v;
    f->unk_0a = WifiAp_GetState();
}

u32 WifiAp_GetErrorCode() {
    return sWifiApControl->unk_0c;
}

void WifiAp_SetConnectedApType(u32 v) {
    sWifiApControl->connectedApType = WifiAp_FoldApIndex(v);
}

u32 WifiAp_FoldApIndex(u32 x) {
    if (x > 2) {
        x = (u8)(x - 3);
    }
    return x;
}

void WifiAp_FreeContext() {
    WifiAp_FreeBlock(8, sWifiApAllocator, 0xc);
    WifiAp_FreeBlock(0x10, sWifiApContext, 0xd18);
}

s32 WifiAp_GetConnectResultKind() {
    u8 *e = sWifiApContext;
    u8 *cur = e + 0x474;
    u8 idx = e[0xd13];
    cur += idx * 0xc0;
    u32 i;
    u32 n;
    if (e[0xd0d] >= 6) {
        return 1;
    }
    i = 0;
    n = e[0xd12];
    for (; i < n; i = (u8)(i + 1)) {
        if (i != (u32)idx && (e + i * 4)[0x445] < 6) {
            if (strncmp(cur, e + 0x474 + i * 0xc0, *(u16 *)(e + i * 0xc0 + 0x47a)) == 0) {
                return 2;
            }
        }
    }
    return 1;
}

s32 WifiAp_HashReset() {
    return DGT_Hash1Reset();
}

s32 WifiAp_HashSetSource() {
    return DGT_Hash1SetSource();
}

s32 WifiAp_HashGetDigest() {
    return DGT_Hash1GetDigest_R();
}

BOOL WifiAp_MacEquals(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (a[i] != b[i]) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 WifiAp_GetLinkLevel() {
    u32 irq = OS_DisableInterrupts();
    Unk_ov065_0226ab5c_Conn *c = WifiLink_GetWork();
    s32 r = 0;
    if (c != 0 && c->phase == 9) {
        r = WifiLink_GetLinkLevel();
    }
    OS_RestoreInterrupts(irq);
    return r;
}

}
