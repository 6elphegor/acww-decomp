// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: anm-object init by name, packed u8/u16 animation array readers.
// autoload_2 0x02107634-0x02107994. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef long long s64;
typedef int BOOL;
#define NULL 0

extern u32 data_0213bcc8;
extern void MIi_CpuClear16(u32, void *, u32);   // MI_CpuClear16 (data, dest, size)
extern s32 NNS_G3dGetResDictIdxByName(u8 *, u8 *);          // NNS_G3dGetResDictIdxByName (dict, name)

typedef struct TexObj {
    u32 pad0, pad4;
    u8 *res;         // 0x08
    u32 w0c;         // 0x0c
    u8 pad10[9];
    u8 cnt;          // 0x19
    u16 tbl[1];      // 0x1a
} TexObj;

// packed u16 (RGB555-aware) animation array reader (frame, const / 1:1 / 1:2 / 1:4 rate with interpolation)
u16 GetMatColAnmValue_(u8 *base, u32 info, u32 idx)
{
    u16 *d;
    u32 q;
    if (info & 0x20000000) {
        return info;
    }
    d = (u16 *)(base + (info & 0xffff));
    if ((info & 0xc0000000) == 0) {
        return d[idx];
    }
    {
        u32 lim = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (idx & 1) {
                if (idx > lim) {
                    return (d + (lim >> 1))[1];
                }
                q = idx >> 1;
                goto avg;
            }
            return d[(idx >> 1)];
        } else {
            u32 r = idx & 3;
            if (r != 0) {
                if (idx > lim) {
                    return (d + (lim >> 2))[r];
                }
                if (idx & 1) {
                    u32 ib;
                    if (idx & 2) {
                        ib = idx >> 2;
                        idx = ib + 1;
                    } else {
                        idx = idx >> 2;
                        ib = idx + 1;
                    }
                    {
                        u32 g, rb;
                        g = (((u32)d[idx] & 0x3e0) + ((u32)d[idx] & 0x3e0) + ((u32)d[idx] & 0x3e0) + ((u32)d[ib] & 0x3e0)) >> 2;
                        rb = ((((u32)d[idx] & 0x7c1f) + ((u32)d[idx] & 0x7c1f) + ((u32)d[idx] & 0x7c1f) + ((u32)d[ib] & 0x7c1f)) >> 2) & 0x7c1f;
                        return rb | (g & 0x3e0);
                    }
                }
                q = idx >> 2;
                goto avg;
            }
            return d[idx >> 2];
        }
    }
avg:
    {
        u16 *pp = d + q;
        u32 a = d[q], b = pp[1];
        u32 g = ((a & 0x3e0) + (b & 0x3e0)) >> 1;
        u32 rb = (((a & 0x7c1f) + (b & 0x7c1f)) >> 1) & 0x7c1f;
        return rb | (g & 0x3e0);
    }
}

// packed u8 animation array reader (frame, const / 1:1 / 1:2 / 1:4 rate with interpolation)
u16 GetMatColAnmuAlphaValue_(u8 *base, u32 info, u32 idx)
{
    u8 *d;
    u32 q;
    if (info & 0x20000000) {
        return info;
    }
    d = base + (info & 0xffff);
    if ((info & 0xc0000000) == 0) {
        return d[idx];
    }
    {
        u32 lim = (info & 0x1fff0000) >> 16;
        if (info & 0x40000000) {
            if (idx & 1) {
                if (idx > lim) {
                    return (d + (lim >> 1))[1];
                }
                return (d[idx >> 1] + (d + (idx >> 1))[1]) >> 1;
            }
            return d[idx >> 1];
        } else {
            u32 r = idx & 3;
            if (r != 0) {
                if (idx > lim) {
                    return (d + (lim >> 2))[r];
                }
                if (idx & 1) {
                    u32 ib;
                    if (idx & 2) {
                        ib = idx >> 2;
                        idx = ib + 1;
                    } else {
                        idx = idx >> 2;
                        ib = idx + 1;
                    }
                    return (d[idx] + d[idx] + d[idx] + d[ib]) >> 2;
                }
                return (d[idx >> 2] + (d + (idx >> 2))[1]) >> 1;
            }
            return d[idx >> 2];
        }
    }
}

// anm object init by name: for every animated entry find the model entry with the same name (NNS_G3dGetResDictIdxByName)
void NNSi_G3dAnmObjInitNsBma(TexObj *o, u8 *names, u8 *res)
{
    u8 *dict = res + *(u32 *)(res + 8);
    u32 i;
    o->w0c = data_0213bcc8;
    o->cnt = res[0x18];
    {
        volatile u16 zero = 0;
        MIi_CpuClear16(zero, o->tbl, o->cnt * 2);
    }
    for (i = 0; i < names[9]; i++) {
        u8 *blk = names + 8 + *(u16 *)(names + 14);
        s32 idx = NNS_G3dGetResDictIdxByName(dict + 4, blk + *(u16 *)(blk + 2) + i * 16);
        if (idx >= 0) {
            o->tbl[idx] = i | 0x100;
        }
    }
}
