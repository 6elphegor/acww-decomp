// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: global state (NNS_G3dGlb*: camera/light/projection matrices, fog/edge tables in DTCM),
// render-state callbacks. autoload_2 0x021040ac-0x021045e4. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;
#define NULL 0

typedef struct V3 { s32 x, y, z; } V3;
typedef union Glb {
    u32 w[0x99 + 1];
    struct {
    u32 w0, w4;
    u8 pad8[0x90];
    u32 ctl98;
    u8 pad9c[0x44];
    V3 e0;
    V3 scale;
    u32 pad_f8;
    u32 flag;
    } n;
} Glb;
extern Glb data_027e00c8;
extern u8 data_027e0228[], data_027e01f8[], data_027e01c8[], data_027e0184[], data_027e0114[];
extern u32 data_027e0170[], data_027e0148[];
extern void MTX_Concat43(void *, void *, void *);
extern void MTX_ScaleApply43(void *, void *, s32, s32, s32);
extern void MTX_Inverse43(void *, void *);
extern void NNS_G3dGeBufferOP_N(u32, void *, u32);

extern void MTX_Identity43_(void *);
extern void MTX_Identity44_(void *);
extern void MTX_Identity33_(void *);
extern u8 data_027e00d0[];


typedef struct Cb {
    u8 pad0[0xc];
    void (*fn)(void *, struct Cb *, u32);   // 0x0c
    struct Cb *next;                        // 0x10
    u8 pad14[6];
    u16 tbl[1];                             // 0x1a
} Cb;


BOOL NNSi_G3dAnmBlendMat(void *p, Cb *n, u32 k)
{
    BOOL ret = 0;
    do {
        u16 v = n->tbl[k];
        if (v & 0x100) {
            n->fn(p, n, v & 0xff);
            ret = 1;
        }
        n = n->next;
    } while (n != NULL);
    return ret;
}

void blendScaleVec_(s32 *a, s32 *b, s32 c, BOOL flag)
{
    if (flag) {
        a[0] += c;
        a[1] += c;
        a[2] += c;
    } else {
        a[0] += (c * b[0]) >> 12;
        a[1] += (c * b[1]) >> 12;
        a[2] += (c * b[2]) >> 12;
    }
}

BOOL func_021044a4(u32 *out, Cb *n, u32 k)
{
    u32 tmp[2];
    BOOL ret = 0;
    *out = 0;
    do {
        u16 v = n->tbl[k];
        if (v & 0x100) {
            n->fn(tmp, n, v & 0xff);
            *out |= tmp[0];
            ret = 1;
        }
        n = n->next;
    } while (n != NULL);
    return ret;
}
void NNS_G3dGlbInit(void)
{
    data_027e00c8.w[0] = 0x17101610;
    data_027e00c8.w[1] = 0;
    data_027e00c8.w[0x48 / 4] = 2;
    data_027e00c8.w[0x7c / 4] = 0x32323232;
    data_027e00c8.w[0x90 / 4] = 0x60293130;
    data_027e00c8.w[0xa4 / 4] = 0x33333333;
    data_027e00c8.w[0xb8 / 4] = 0x002a1b19;
    MTX_Identity43_(data_027e0114);
    MTX_Identity44_(data_027e00d0);
    data_027e00c8.w[0x80 / 4] = 0x2d8b62d8;
    data_027e00c8.w[0x84 / 4] = 0x40000200;
    data_027e00c8.w[0x88 / 4] = 0x800001ff;
    data_027e00c8.w[0x8c / 4] = 0xc0080000;
    data_027e00c8.w[0x94 / 4] = 0x4210c210;
    data_027e00c8.w[0x98 / 4] = 0x4210c210;
    data_027e00c8.w[0x9c / 4] = 0x001f008f;
    data_027e00c8.w[0xa0 / 4] = 0xbfff0000;
    data_027e00c8.w[0xa8 / 4] = 0x00007fff;
    data_027e00c8.w[0xac / 4] = 0x4000001f;
    data_027e00c8.w[0xb0 / 4] = 0x800003e0;
    data_027e00c8.w[0xb4 / 4] = 0xc0007c00;
    data_027e00c8.w[0xe0 / 4] = 0;
    data_027e00c8.w[0xe4 / 4] = 0;
    data_027e00c8.w[0xe8 / 4] = 0;
    MTX_Identity33_(data_027e0184);
    data_027e00c8.w[0xec / 4] = 0x1000;
    data_027e00c8.w[0xf0 / 4] = 0x1000;
    data_027e00c8.w[0xf4 / 4] = 0x1000;
    data_027e00c8.w[0xf8 / 4] = 0;
    data_027e00c8.w[0xfc / 4] = 0;
    data_027e00c8.w[0x248 / 4] = 0;
    data_027e00c8.w[0x244 / 4] = 0;
    data_027e00c8.w[0x240 / 4] = 0;
    data_027e00c8.w[0x254 / 4] = 0;
    data_027e00c8.w[0x24c / 4] = 0;
    data_027e00c8.w[0x250 / 4] = 0x1000;
    data_027e00c8.w[0x25c / 4] = 0;
    data_027e00c8.w[0x258 / 4] = 0;
    data_027e00c8.w[0x260 / 4] = -0x1000;
}

// geometry command flush + clear dirty flags
void NNS_G3dGlbFlushP(void)
{
    u32 *p = (u32 *)&data_027e00c8;
    NNS_G3dGeBufferOP_N(*p++, p, 0x3e);
    data_027e00c8.n.flag &= ~1;
    data_027e00c8.n.flag &= ~2;
}

void NNS_G3dGlbSetBaseTrans(V3 *v)
{
    data_027e00c8.n.e0 = *v;
    data_027e00c8.n.flag &= ~0xa4;
}

void NNS_G3dGlbSetBaseScale(V3 *v)
{
    data_027e00c8.n.scale = *v;
    data_027e00c8.n.flag &= ~0xa4;
}

void NNS_G3dGlbLightVector(u32 id, s32 a, s32 b, s32 c)
{
    data_027e0148[id] = ((a >> 3) & 0x3ff) | (((b >> 3) & 0x3ff) << 10) | (((c >> 3) & 0x3ff) << 20) | (id << 30);
}

void NNS_G3dGlbLightColor(u32 id, u32 v)
{
    data_027e0170[id] = v | (id << 30);
}

void func_02104238(u32 a, u32 b, BOOL c)
{
    data_027e00c8.n.ctl98 = a | (b << 16) | ((c != 0) << 15);
}

u8 *NNS_G3dGlbGetInvV(void)
{
    if ((data_027e00c8.n.flag & 8) == 0) {
        MTX_Inverse43(data_027e0114, data_027e01c8);
        data_027e00c8.n.flag |= 8;
    }
    return data_027e01c8;
}

void calcSrtCameraMtx_(void)
{
    MTX_Concat43(data_027e0184, data_027e0114, data_027e01f8);
    MTX_ScaleApply43(data_027e01f8, data_027e01f8, data_027e00c8.n.scale.x, data_027e00c8.n.scale.y, data_027e00c8.n.scale.z);
    MTX_Inverse43(data_027e01f8, data_027e0228);
}

u8 *NNS_G3dGlbGetWV(void)
{
    if ((data_027e00c8.n.flag & 0x80) == 0) {
        calcSrtCameraMtx_();
        data_027e00c8.n.flag |= 0x80;
    }
    return data_027e01f8;
}

u8 *NNS_G3dGlbGetInvWV(void)
{
    if ((data_027e00c8.n.flag & 0x80) == 0) {
        calcSrtCameraMtx_();
        data_027e00c8.n.flag |= 0x80;
    }
    return data_027e0228;
}

u32 NNS_G3dAnmObjCalcSizeRequired(u8 *a, u8 *b)
{
    switch (*a) {
    case 'M':
        return (b[0x18] * 2 + 0x1c) & ~3;
    case 'J':
    case 'V':
        return (b[0x17] * 2 + 0x1c) & ~3;
    }
    return 0;
}
