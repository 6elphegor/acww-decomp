// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef int BOOL;
#define NULL 0

typedef struct GeBuf {
    u32 cmd;
    s32 w[14];
} GeBuf;
typedef struct View { u8 pad[26]; u16 anm[1]; } View;

extern u32 data_0213bcb8;
extern u32 data_0213bcc4;
extern void func_02115e30(u16 data, void *dest, u32 size);
extern s32 func_02106300(void *dict, void *name);
extern u8 *func_021066e8(u8 *, u32, u32);
extern u32 func_02106778(u8 *, u32);
extern u32 func_02106768(u8 *);
extern u32 *func_02106460(void *);
extern s32 func_01ffc5a4(s32, s32);
extern void func_01ff8bd0(u32 cmd, void *args, u32 n);


static inline s32 FxMul(s32 a, s32 b)
{
    return (s32)(((long long)a * b) >> 12);
}

// NNS g3d: build the texture matrix (MTX_MODE texture, LOAD/MULT_4x3) from a material SRT result
void func_02108184(u32 *a)
{
    GeBuf s;
    if (a[0] & 8) {
        s.cmd = 0x00101710;
    } else {
        s.cmd = 0x00101910;
    }
    s.w[0] = 3;
    s.w[12] = 0;
    s.w[13] = 2;
    s.w[9] = 0;
    s.w[8] = 0;
    s.w[7] = 0;
    s.w[6] = 0;
    s.w[4] = 0;
    s.w[3] = 0;
    s.w[2] = 0;
    if (a[0] & 4) {
        s.w[10] = 0;
        s.w[11] = 0;
        if (a[0] & 1) {
            s.w[1] = 0x1000;
            s.w[5] = 0x1000;
        } else {
            s.w[1] = a[6];
            s.w[5] = a[7];
        }
    } else if (a[0] & 1) {
        s.w[10] = -(s32)(a[9] << 4) * *(u16 *)((u8 *)a + 0x2c);
        s.w[11] = -(s32)(a[10] << 4) * *(u16 *)((u8 *)a + 0x2e);
        s.w[1] = 0x1000;
        s.w[5] = 0x1000;
    } else {
        s32 x = (s32)(((long long)(s32)a[6] * (s32)a[9]) >> 8);
        s32 y;
        s.w[10] = *(u16 *)((u8 *)a + 0x2c) * -x;
        y = (s32)(((long long)(s32)a[7] * (s32)a[10]) >> 8);
        s.w[11] = *(u16 *)((u8 *)a + 0x2e) * -y;
        s.w[1] = a[6];
        s.w[5] = a[7];
    }
    if (a[12] != 0x1000) {
        s.w[1] = FxMul(a[12], s.w[1]);
        s.w[10] = FxMul(a[12], s.w[10]);
    }
    if (a[13] != 0x1000) {
        s.w[5] = FxMul(a[13], s.w[5]);
        s.w[11] = FxMul(a[13], s.w[11]);
    }
    func_01ff8bd0(s.cmd, (u32 *)&s + 1, 14);
}

// NNS g3d: send joint SRT result to the geometry engine (NNS_G3dGeBufferOP_N: MTX_MULT_4x3 0x19, MTX_MULT_3x3 0x1a, MTX_SCALE 0x1b, MTX_TRANS 0x1c)
void func_02108100(u32 *r)
{
    if ((r[0] & 4) == 0) {
        if ((r[0] & 2) == 0) {
            func_01ff8bd0(0x19, r + 10, 12);
        } else {
            func_01ff8bd0(0x1c, r + 19, 3);
        }
    } else if ((r[0] & 2) == 0) {
        func_01ff8bd0(0x1a, r + 10, 9);
    }
    if ((r[0] & 1) == 0) {
        func_01ff8bd0(0x1b, r + 1, 3);
    }
}

// NNS g3d scene-graph helper (SBC node state): copy/flag update
void func_021080c4(u32 *obj, s32 *src, u8 *info, u32 flags)
{
    if (flags & 4) {
        obj[0] |= 1;
    } else {
        obj[1] = src[0];
        obj[2] = src[1];
        obj[3] = src[2];
    }
    obj[0] |= 0x18;
}

// NNS g3d (NNSi_G3dAnmObjInitVisAnm-like): bind a visibility animation block to the model
void func_02108078(u8 *out, u32 res, u8 *blk)
{
    u32 i = 0;
    *(u32 *)(out + 12) = data_0213bcb8;
    out[25] = blk[23];
    *(u32 *)(out + 8) = res;
    for (; i < out[25]; i++) {
        ((View *)out)->anm[i] = i | 0x100;
    }
}

// NNS g3d (visibility animation, NNSi_G3dAnmCalcVis-like): look up the visibility bit for a joint at a frame
void func_02108034(u32 *out, u32 *a, u32 frame)
{
    u8 *t = (u8 *)a[2];
    s32 k = (s32)a[0] >> 12;
    u32 idx = k * *(u16 *)(t + 6) + frame;
    *out = ((u32 *)(t + 12))[idx >> 5] & (1 << (idx & 31));
}

// NNS g3d (NNSi_G3dAnmObjInitTexPatAnm-like): bind a texture pattern animation block to the model
void func_02107f74(u8 *obj, u8 *res, u8 *blk)
{
    u8 *dict = blk + *(u32 *)(blk + 8);
    u32 i;
    volatile u16 zero;
    *(u32 *)(obj + 12) = data_0213bcc4;
    obj[25] = blk[24];
    *(u8 **)(obj + 8) = res;
    zero = 0;
    func_02115e30(zero, obj + 26, obj[25] * 2);
    for (i = 0; i < res[13]; i++) {
        u8 *d = res + 12 + *(u16 *)(res + 18);
        s32 r = func_02106300(dict + 4, d + *(u16 *)(d + 2) + i * 16);
        if (r >= 0) {
            *(u16 *)(obj + 26 + r * 2) = i | 0x100;
        }
    }
}

// NNS g3d (texture animation): texture index + tex scale result for the current frame
s32 func_02107e88(u8 *A, u32 x, u8 *out)
{
    u32 *p = func_02106460(A + 60);
    u32 m;
    u32 w, h;
    s32 r;
    if ((p[0] & 0x1c000000) != 0x14000000) {
        m = *(u32 *)(A + 8) & 0xffff;
    } else {
        m = *(u32 *)(A + 24) & 0xffff;
    }
    *(u32 *)(out + 16) &= 0xc00f0000;
    *(u32 *)(out + 16) |= p[0] + m;
    *(u16 *)(out + 44) = p[1] & 0x7ff;
    *(u16 *)(out + 46) = (p[1] & 0x3ff800) >> 11;
    w = p[1] & 0x7ff;
    h = 0x7ff & (p[1] >> 11);
    if (w == *(u16 *)(out + 44)) {
        r = 0x1000;
    } else {
        r = func_01ffc5a4(w << 12, *(u16 *)(out + 44) << 12);
    }
    *(s32 *)(out + 48) = r;
    if (h == *(u16 *)(out + 46)) {
        r = 0x1000;
    } else {
        r = func_01ffc5a4(h << 12, *(u16 *)(out + 46) << 12);
    }
    *(s32 *)(out + 52) = r;
    return r;
}

// NNS g3d (texture animation): palette index result for the current frame
u32 func_02107e30(u8 *A, u32 x, u8 *out)
{
    u16 *p = (u16 *)func_02106460(A + *(u16 *)(A + 52));
    u16 w = *(u32 *)(A + 44);
    u16 v;
    u16 f = p[1];
    v = p[0];
    if ((f & 1) == 0) {
        v = v >> 1;
        w = w >> 1;
    }
    *(u32 *)(out + 20) = v + w;
    return v + w;
}

// NNS g3d (texture/palette animation): per-material calc, texture index then palette index
u32 func_02107da8(u8 *obj, u32 *a, u32 frame)
{
    u8 *res = (u8 *)a[2];
    u8 *e = func_021066e8(res, (u16)frame, (u16)(a[0] >> 12));
    u32 r = func_02107e88((u8 *)a[5], func_02106778(res, e[2]), obj);
    if (e[3] == 0xff) {
        return r;
    }
    return func_02107e30((u8 *)a[5], func_02106768(res), obj);
}

// NNS g3d animation key fetch for fx32 values (value stored as fx32 or fx16; constant / full / step-2 / step-4 interpolated)
s32 func_02107cac(u8 *base, u32 info, u32 offs, u32 frame)
{
    s16 *d;
    u32 last;
    s32 a, b;
    u32 ia, ib;
    if (info & 0x20000000) {
        return offs;
    }
    d = (s16 *)(base + offs);
    if ((info & 0xc0000000) == 0) {
        goto direct;
    }
    last = info & 0xffff;
    if (info & 0x40000000) {
        if (frame & 1) {
            if (frame > last) {
                frame = (last >> 1) + 1;
                goto direct;
            }
            frame = frame >> 1;
            goto avg;
        }
        frame = frame >> 1;
        goto direct;
    } else {
        u32 r = frame & 3;
        if (r != 0) {
            if (frame > last) {
                frame = r + (last >> 2);
                goto direct;
            }
            if (frame & 1) {
                if (frame & 2) {
                    ib = frame >> 2;
                    ia = ib + 1;
                } else {
                    ia = frame >> 2;
                    ib = ia + 1;
                }
                if (info & 0x10000000) {
                    a = d[ia];
                    b = d[ib];
                } else {
                    a = ((s32 *)d)[ia];
                    b = ((s32 *)d)[ib];
                }
                return (a * 3 + b) >> 2;
            }
            frame = frame >> 2;
            goto avg;
        }
        frame = frame >> 2;
        goto direct;
    }
direct:
    if (info & 0x10000000) {
        return d[frame];
    }
    return ((s32 *)d)[frame];
avg:
    if (info & 0x10000000) {
        a = d[frame];
        b = (d + frame)[1];
    } else {
        a = ((s32 *)d)[frame];
        b = ((s32 *)d + frame)[1];
    }
    return (a + b) >> 1;
}

