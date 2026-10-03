// mwcc-flags: -nothumb -O4,p
// RC_020e92f4 (companion of RC_020e8558): G002b without its first four functions (those belong to the heap file, now RC_020e8558).
// The (probable) vector helper file (0x020e92f4-0x020e9a08) and the start of the network file (0x020e9a08-0x020ea0b4).
// autoload_2 0x020e92f4-0x020ea0b4, 39 functions. mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL, code unchanged from G002b, all data extern.
#include "types.h"

typedef volatile u64 vu64;
struct VecFx32 {
    s32 x, y, z;
};

extern "C" {
void VEC_Normalize(VecFx32 *v); // VEC_Normalize
void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *out); // VEC_CrossProduct
s32 FX_Div(s32 a, s32 b); // FX_Div
s32 func_020e99b8(u64 x);
void func_020e99a4(void);
void func_020e954c(VecFx32 *out, VecFx32 *in);
extern const s16 data_02135f44[]; // FX_SinCosTable_
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

#define FX_SinIdx(a) data_02135f44[((a) >> 4) * 2]
#define FX_CosIdx(a) data_02135f44[((a) >> 4) * 2 + 1]

extern "C" {
void *Net_Alloc(u32 size, u32 align); // alloc via hook data_021f48f4
void Net_Free(void *p); // free via hook sFreeHook
void MI_CpuFill8(void *dst, u32 v, u32 n); // MI_CpuFill8
void MI_CpuCopy8(const void *src, void *dst, u32 n); // MI_CpuCopy8
void OS_SNPrintf(char *dst, u32 len, const char *fmt, ...); // OS_SPrintf

s32 func_ov067_02261148(void);
s32 func_ov067_022611fc(void *p);
s32 func_ov067_0226123c(void *p);
void func_ov067_02261350(void *p, void *cb, u32 n);
void func_ov067_022612c0(u32 a, u32 b, u32 c);
void func_ov067_02261048(void *h, void *cb, void *a, u32 b, u32 c, u32 d);
void func_ov065_0227702c(void);
s32 func_ov065_022721cc(void);
void func_ov065_02272164(void *p);
s32 func_ov065_0227089c(u32 a, void *b, u32 c, void *d, u32 e, void *f, u32 g);
void func_ov065_02277f70(void *a, void *b, void *c);
void func_020fff48(void *a, u32 b, void *c);
void func_020ebe94(void);
void func_020ebe80(void);
void Net_OnGameStatsChallenge(void);
void Net_OnWifiFriendDeleted(void);
void Net_OnWifiServersUpdated(void);
void Net_OnWifiFriendStatus(void);
void Net_OnHttpDownloadDone(void);
s64 func_020ea3c4(void *p);
s32 func_021000fc(void *p);
s32 func_021000f4(void *p);
s32 func_020ffad0(void *p, void *q);
s32 func_020ffd78(void *p);

extern u16 sWifiConnectStep;
extern u8 sNetMode;
extern u8 *sWifiFriendList;
extern u8 *sWifiUserData;
extern u32 data_021f48e8;
extern u32 data_021f48e0;
extern void *data_021f48c0;
extern void *data_021f48b8;
extern u32 data_021f489c;
extern u32 data_021f48cc;
extern s32 data_0213b06c;
extern s32 data_0213b068;
extern s32 data_0213b064;
extern u32 data_021f48dc;
extern u32 data_021f48a4;
extern u32 data_021f48b4;
extern u32 data_021f48c4;
extern u32 data_021f48ac;
extern u32 data_021f48a8;
extern u32 data_021f48e4;
extern char data_0213b098[];
}

extern "C" BOOL Net_IsUploadDone(s32 a) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b064 != 0) {
        if (data_021f48b4 != 0) {
            Net_Free((void *)data_021f48b4);
            Net_Free((void *)data_021f48c4);
            data_021f48b4 = 0;
            data_021f48c4 = 0;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_GameStatsDownload(u32 a, void *b, u32 c, u32 d) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b068 != 0) {
        data_021f48dc = (u32)Net_Alloc(0x100, 4);
        if (data_021f48dc == 0) return FALSE;
        data_021f48a4 = (u32)Net_Alloc(0x29, 4);
        if (data_021f48a4 == 0) {
            Net_Free((void *)data_021f48dc);
            data_021f48dc = 0;
            return FALSE;
        }
        data_0213b068 = 0;
        data_021f48e4 = a;
        data_021f48ac = c;
        data_021f48a8 = d;
        OS_SNPrintf((char *)data_021f48dc, 0x100, data_0213b098, data_021f48e4, func_020ea3c4(sWifiUserData + 0x10), d);
        func_ov065_02277f70((void *)data_021f48dc, (void *)Net_OnGameStatsChallenge, b);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Net_HttpDownload(void *a, void *b, u32 c, u32 d) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b068 == 0) return FALSE;
    data_021f48ac = c;
    data_0213b068 = 0;
    func_ov065_02277f70(a, (void *)Net_OnHttpDownloadDone, b);
    return TRUE;
}

extern "C" BOOL Net_IsDownloadDone(s32 a) {
    if (sWifiConnectStep < 4) return FALSE;
    if (data_0213b068 != 0) {
        if (data_021f48dc != 0) {
            Net_Free((void *)data_021f48dc);
            Net_Free((void *)data_021f48a4);
            data_021f48dc = 0;
            data_021f48a4 = 0;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_020e9d94(void *p) {
    return func_020ffd78(p);
}

extern "C" s32 func_020e9d88(void *p, void *q) {
    return func_020ffad0(p, q);
}

extern "C" BOOL func_020e9d7c(void *p) {
    return func_021000f4(p);
}

extern "C" s32 func_020e9d70(void *p) {
    return func_021000fc(p);
}

extern "C" s32 Net_WifiAddFriend(u32 a, void *b) {
    s32 r;
    u32 t;
    if (func_ov065_022721cc() == 0 || sWifiConnectStep < 5 || data_0213b06c != 0) return 0;
    MI_CpuCopy8(b, sWifiFriendList + a * 12, 12);
    t = a * 19;
    MI_CpuFill8(sWifiFriendList + 0x180 + t, 0, 19);
    (sWifiFriendList + t)[0x190] = 0;
    data_0213b06c = 1;
    r = func_ov065_0227089c(0, (void *)Net_OnWifiServersUpdated, 0, (void *)Net_OnWifiFriendStatus, 0, (void *)Net_OnWifiFriendDeleted, 0);
    if (r == 0) data_0213b06c = 0;
    return r;
}

extern "C" BOOL Net_WifiDeleteFriend(u32 a) {
    u32 t;
    u32 u;
    if (func_ov065_022721cc() == 0 || sWifiConnectStep < 5 || data_0213b06c != 0) return FALSE;
    u = a * 12;
    func_ov065_02272164(sWifiFriendList + u);
    MI_CpuFill8(sWifiFriendList + u, 0, 12);
    t = a * 19;
    MI_CpuFill8(sWifiFriendList + 0x180 + t, 0, 19);
    (sWifiFriendList + t)[0x190] = 0;
    return TRUE;
}

extern "C" BOOL Net_WifiHostKeepAlive(void) {
    if (sNetMode == 3) {
        data_021f48cc = 0;
        func_ov065_0227702c();
    }
    return TRUE;
}

extern "C" BOOL Net_GetBrid(u8 *out) {
    u8 buf[24];
    if (sWifiConnectStep < 4) return FALSE;
    func_020fff48(sWifiUserData + 0x20, data_021f489c, buf);
    MI_CpuCopy8(buf + 9, out, 12);
    return TRUE;
}

extern "C" void func_020e9a54(void *a, void *b, u32 n) {
    sNetMode = 5;
    data_021f48e0 = 0;
    data_021f48e8 = 0;
    data_021f48c0 = Net_Alloc(0xa000, 32);
    func_ov067_02261350(data_021f48c0, (void *)func_020ebe94, 2);
    func_ov067_022612c0(60, 60, 1);
    func_ov067_02261048(data_021f48b8, (void *)func_020ebe80, a, n, (u32)b, n);
}

extern "C" s32 func_020e9a48(void *p) {
    return func_ov067_0226123c(p);
}

extern "C" s32 func_020e9a3c(void *p) {
    return func_ov067_022611fc(p);
}

extern "C" BOOL func_020e9a18(void *p) {
    return func_ov067_02261148() == 2;
}

extern "C" u32 func_020e9a08(void *p) {
    return data_021f48e8;
}

extern "C" s32 func_020e99b8(u64 x) {
    *(vu16 *)0x040002b0 = 1;
    *(vu64 *)0x040002b8 = x << 2;
    while (*(vu16 *)0x040002b0 & 0x8000) {
    }
    return ((s32)*(vu32 *)0x040002b4 + 1) >> 1;
}

extern "C" void func_020e99a4(void) {
    *(vu16 *)0x040002b0 = 1;
}

extern "C" void func_020e9960(VecFx32 *out, VecFx32 *a, VecFx32 *b) {
    s32 ax = a->x;
    s32 bx = b->x;
    s32 az = a->z;
    s32 bz = b->z;
    s32 ay = a->y;
    s32 by = b->y;
    out->x = ax - bx;
    out->y = ay - by;
    out->z = az - bz;
}

extern "C" void func_020e98f4(VecFx32 *out, VecFx32 *in, s32 s) {
    s32 x = in->x;
    s32 y = in->y;
    s32 z = in->z;
    s32 rz = FX_Mul(z, s);
    s32 ry = FX_Mul(y, s);
    s32 rx = FX_Mul(x, s);
    out->x = rx;
    out->y = ry;
    out->z = rz;
}

extern "C" void func_020e9888(VecFx32 *v, s32 s) {
    v->x = FX_Mul(v->x, s);
    v->y = FX_Mul(v->y, s);
    v->z = FX_Mul(v->z, s);
}

extern "C" void func_020e97c8(VecFx32 *v, s32 d) {
    if (d == 0) {
        if (v->x > 0) v->x = 0x7fffffff;
        else if (v->x < 0) v->x = 0x80000000;
        if (v->y > 0) v->y = 0x7fffffff;
        else if (v->y < 0) v->y = 0x80000000;
        if (v->z > 0) v->z = 0x7fffffff;
        else if (v->z < 0) v->z = 0x80000000;
    } else {
        v->x = FX_Div(v->x, d);
        v->y = FX_Div(v->y, d);
        v->z = FX_Div(v->z, d);
    }
}

extern "C" void func_020e9790(VecFx32 *out, VecFx32 *in, s32 n) {
    s32 x = in->x;
    s32 y = in->y;
    s32 z = in->z;
    out->x = x >> n;
    out->y = y >> n;
    out->z = z >> n;
}

extern "C" void func_020e9768(VecFx32 *v, s32 n) {
    v->x >>= n;
    v->y >>= n;
    v->z >>= n;
}

extern "C" s32 func_020e972c(VecFx32 *a, VecFx32 *b) {
    if (a->x == b->x && a->y == b->y && a->z == b->z) return 1;
    return 0;
}

extern "C" s32 func_020e96ec(VecFx32 *a, VecFx32 *b) {
    if (a->x != b->x || a->y != b->y || a->z != b->z) return 1;
    return 0;
}

extern "C" s32 func_020e96a4(VecFx32 *a, VecFx32 *b) {
    s32 dx = a->x - b->x;
    s64 sq = (s64)dx * dx;
    s32 dy = a->y - b->y;
    sq += (s64)dy * dy;
    s32 dz = a->z - b->z;
    sq += (s64)dz * dz;
    return func_020e99b8(sq);
}

extern "C" s32 func_020e9688(VecFx32 *v) {
    s32 x = v->x;
    s32 z = v->z;
    s64 sq = (s64)x * x + (s64)z * z;
    return func_020e99b8(sq);
}

extern "C" s32 func_020e9650(VecFx32 *a, VecFx32 *b) {
    s32 dx = a->x - b->x;
    s32 dz = a->z - b->z;
    s64 sq = (s64)dx * dx + (s64)dz * dz;
    return func_020e99b8(sq);
}

extern "C" s64 func_020e9630(VecFx32 *v) {
    s32 x = v->x;
    s32 z = v->z;
    return ((s64)x * x + (s64)z * z) >> 12;
}

extern "C" s64 func_020e9600(VecFx32 *a, VecFx32 *b) {
    s32 dx = a->x - b->x;
    s32 dz = a->z - b->z;
    return ((s64)dx * dx + (s64)dz * dz) >> 12;
}

extern "C" s32 func_020e95cc(VecFx32 *a, VecFx32 *b) {
    return (s32)(((s64)a->x * b->x + (s64)a->z * b->z) >> 12);
}

extern "C" void func_020e9588(VecFx32 *out, VecFx32 *in, VecFx32 *a, VecFx32 *b) {
    VEC_CrossProduct(a, b, in);
    *out = *in;
}

extern "C" void func_020e954c(VecFx32 *out, VecFx32 *in) {
    VEC_Normalize(in);
    *out = *in;
}

extern "C" s32 func_020e94f8(VecFx32 *v) {
    VecFx32 t;
    if (v->x == 0 && v->y == 0 && v->z == 0) return 0;
    func_020e954c(&t, v);
    return 1;
}

extern "C" void func_020e944c(VecFx32 *v, s32 angle) {
    s32 s = FX_SinIdx((u16)angle);
    s32 c = FX_CosIdx((u16)angle);
    s32 y = v->y;
    s32 z = v->z;
    v->y = FX_Mul(c, y) - FX_Mul(s, z);
    v->z = FX_Mul(s, y) + FX_Mul(c, z);
}

extern "C" void func_020e93a0(VecFx32 *v, s32 angle) {
    s32 c = FX_CosIdx((u16)angle);
    s32 s = FX_SinIdx((u16)angle);
    s32 z = v->z;
    s32 x = v->x;
    v->x = FX_Mul(c, x) + FX_Mul(s, z);
    v->z = FX_Mul(c, z) - FX_Mul(s, x);
}

extern "C" void func_020e92f4(VecFx32 *v, s32 angle) {
    s32 s = FX_SinIdx((u16)angle);
    s32 c = FX_CosIdx((u16)angle);
    s32 x = v->x;
    s32 y = v->y;
    v->x = FX_Mul(c, x) - FX_Mul(s, y);
    v->y = FX_Mul(s, x) + FX_Mul(c, y);
}
