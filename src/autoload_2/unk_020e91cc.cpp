// mwcc-flags: -nothumb -O4,p
// G002b: heap file tail (0x020e91cc-0x020e92f4: init + per-thread heap switch), then the (probable) vector helper file
// (0x020e92f4-0x020e9a08) and the start of the network file (0x020e9a08-0x020ea0b4). autoload_2 0x020e91cc-0x020ea0b4,
// 43 functions. mwcc 1.2/base, C++, ARM, -O4,p. No data defined; all data is extern. Not the whole of any file:
// the heap file continues below (G001b, G002a, func_020e914c) and the (probable) network file above (func_020ea0b4, G002c, ...).
#include "types.h"

class Unk_020e8b94 {
public:
    virtual ~Unk_020e8b94(); // 0x00 / 0x04
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void *vfunc_18(u32 size, s32 align) = 0; // alloc
    virtual void vfunc_1c(void *p) = 0; // free
    virtual void vfunc_20() = 0; // free all
    virtual BOOL vfunc_24() = 0;
    virtual void vfunc_28() = 0;
    virtual s32 vfunc_2c(void *p, u32 size) = 0; // resize
    virtual u32 vfunc_30(void *p) = 0; // block size
    virtual u32 vfunc_34() = 0;
    virtual u32 vfunc_38() = 0;
    virtual u32 vfunc_3c(s32 align) = 0; // largest allocatable size
    virtual u32 vfunc_40() = 0;
    virtual void *vfunc_44() = 0;
    virtual void *vfunc_48() = 0;
    virtual void *vfunc_4c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ Unk_020e8b94 *unk_0c; // parent heap
    /* 0x10 */ u32 unk_10; // flags: 0x400 call alloc hook, 0x800 call free hook, 0x2000 allow outside system mode, 0x4000 stop when out of memory
    /* 0x14 */ void *unk_14; // NNS_Fnd heap handle
};

typedef volatile u64 vu64;
struct VecFx32 {
    s32 x, y, z;
};

extern "C" {
void func_01ffc714(VecFx32 *v); // VEC_Normalize
void func_01ffc928(const VecFx32 *a, const VecFx32 *b, VecFx32 *out); // VEC_CrossProduct
s32 func_01ffc5a4(s32 a, s32 b); // FX_Div
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

struct OSThreadInfo_View {
    u16 isNeedRescheduling;
    u16 irqDepth;
    void *current;
};

extern "C" {
u32 func_01ffa2ec(void); // OS_DisableInterrupts
u32 func_01ffa3d4(u32); // OS_RestoreInterrupts
typedef void (*ThreadHook)(void *, void *);
ThreadHook func_0211328c(ThreadHook);
void func_0211320c(void *thread, void *v);
void *func_02113204(void *thread);
Unk_020e8b94 *func_020e86c8(Unk_020e8b94 *heap);
Unk_020e8b94 *func_020e8f58(Unk_020e8b94 *p, u32 n);
Unk_020e8b94 *func_020e91cc(void *p, u32 n);
void func_020e9210(void);
void func_020e9284(void *a, void *b);

extern Unk_020e8b94 *data_021f482c;
extern Unk_020e8b94 *data_021f4824;
extern u8 data_021f4810;
extern ThreadHook data_021f4820;
extern OSThreadInfo_View data_021fcc2c;
}

extern "C" {
void *func_020ec808(u32 size, u32 align); // alloc via hook data_021f48f4
void func_020ec7e4(void *p); // free via hook data_021f48f0
void func_02115fb4(void *dst, u32 v, u32 n); // MI_CpuFill8
void func_02116048(const void *src, void *dst, u32 n); // MI_CpuCopy8
void func_02113088(char *dst, u32 len, const char *fmt, ...); // OS_SPrintf

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
void func_020ebeac(void);
void func_020ec158(void);
void func_020ec258(void);
void func_020ec1e4(void);
void func_020ec038(void);
s64 func_020ea3c4(void *p);
s32 func_021000fc(void *p);
s32 func_021000f4(void *p);
s32 func_020ffad0(void *p, void *q);
s32 func_020ffd78(void *p);

extern u16 data_021f4894;
extern u8 data_021f4890;
extern u8 *data_021f48d4;
extern u8 *data_021f48d8;
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

extern "C" BOOL func_020ea01c(s32 a) {
    if (data_021f4894 < 4) return FALSE;
    if (data_0213b064 != 0) {
        if (data_021f48b4 != 0) {
            func_020ec7e4((void *)data_021f48b4);
            func_020ec7e4((void *)data_021f48c4);
            data_021f48b4 = 0;
            data_021f48c4 = 0;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020e9eb8(u32 a, void *b, u32 c, u32 d) {
    if (data_021f4894 < 4) return FALSE;
    if (data_0213b068 != 0) {
        data_021f48dc = (u32)func_020ec808(0x100, 4);
        if (data_021f48dc == 0) return FALSE;
        data_021f48a4 = (u32)func_020ec808(0x29, 4);
        if (data_021f48a4 == 0) {
            func_020ec7e4((void *)data_021f48dc);
            data_021f48dc = 0;
            return FALSE;
        }
        data_0213b068 = 0;
        data_021f48e4 = a;
        data_021f48ac = c;
        data_021f48a8 = d;
        func_02113088((char *)data_021f48dc, 0x100, data_0213b098, data_021f48e4, func_020ea3c4(data_021f48d8 + 0x10), d);
        func_ov065_02277f70((void *)data_021f48dc, (void *)func_020ebeac, b);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020e9e38(void *a, void *b, u32 c, u32 d) {
    if (data_021f4894 < 4) return FALSE;
    if (data_0213b068 == 0) return FALSE;
    data_021f48ac = c;
    data_0213b068 = 0;
    func_ov065_02277f70(a, (void *)func_020ec038, b);
    return TRUE;
}

extern "C" BOOL func_020e9da0(s32 a) {
    if (data_021f4894 < 4) return FALSE;
    if (data_0213b068 != 0) {
        if (data_021f48dc != 0) {
            func_020ec7e4((void *)data_021f48dc);
            func_020ec7e4((void *)data_021f48a4);
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

extern "C" s32 func_020e9c78(u32 a, void *b) {
    s32 r;
    u32 t;
    if (func_ov065_022721cc() == 0 || data_021f4894 < 5 || data_0213b06c != 0) return 0;
    func_02116048(b, data_021f48d4 + a * 12, 12);
    t = a * 19;
    func_02115fb4(data_021f48d4 + 0x180 + t, 0, 19);
    (data_021f48d4 + t)[0x190] = 0;
    data_0213b06c = 1;
    r = func_ov065_0227089c(0, (void *)func_020ec258, 0, (void *)func_020ec1e4, 0, (void *)func_020ec158, 0);
    if (r == 0) data_0213b06c = 0;
    return r;
}

extern "C" BOOL func_020e9bb0(u32 a) {
    u32 t;
    u32 u;
    if (func_ov065_022721cc() == 0 || data_021f4894 < 5 || data_0213b06c != 0) return FALSE;
    u = a * 12;
    func_ov065_02272164(data_021f48d4 + u);
    func_02115fb4(data_021f48d4 + u, 0, 12);
    t = a * 19;
    func_02115fb4(data_021f48d4 + 0x180 + t, 0, 19);
    (data_021f48d4 + t)[0x190] = 0;
    return TRUE;
}

extern "C" BOOL func_020e9b70(void) {
    if (data_021f4890 == 3) {
        data_021f48cc = 0;
        func_ov065_0227702c();
    }
    return TRUE;
}

extern "C" BOOL func_020e9b00(u8 *out) {
    u8 buf[24];
    if (data_021f4894 < 4) return FALSE;
    func_020fff48(data_021f48d8 + 0x20, data_021f489c, buf);
    func_02116048(buf + 9, out, 12);
    return TRUE;
}

extern "C" void func_020e9a54(void *a, void *b, u32 n) {
    data_021f4890 = 5;
    data_021f48e0 = 0;
    data_021f48e8 = 0;
    data_021f48c0 = func_020ec808(0xa000, 32);
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
        v->x = func_01ffc5a4(v->x, d);
        v->y = func_01ffc5a4(v->y, d);
        v->z = func_01ffc5a4(v->z, d);
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
    func_01ffc928(a, b, in);
    *out = *in;
}

extern "C" void func_020e954c(VecFx32 *out, VecFx32 *in) {
    func_01ffc714(in);
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

extern "C" void func_020e9284(void *a, void *b) {
    func_0211320c(a, data_021f482c);
    data_021f482c = (Unk_020e8b94 *)func_02113204(b);
    func_0211320c(b, NULL);
    if (data_021f4820 != NULL) data_021f4820(a, b);
}

extern "C" Unk_020e8b94 *func_020e9244(void *thread, Unk_020e8b94 *heap) {
    if (thread == data_021fcc2c.current) return func_020e86c8(heap);
    func_0211320c(thread, heap);
}

extern "C" void func_020e9210(void) {
    u32 e = func_01ffa2ec();
    data_021f4820 = func_0211328c(func_020e9284);
    func_01ffa3d4(e);
}

extern "C" Unk_020e8b94 *func_020e91cc(void *p, u32 n) {
    Unk_020e8b94 *h = func_020e8f58((Unk_020e8b94 *)p, n);
    if (h != NULL) {
        data_021f4824 = h;
        data_021f482c = h;
    }
    data_021f4810 = 1;
    return h;
}

