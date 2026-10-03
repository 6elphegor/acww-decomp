// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef int BOOL;
#define NULL 0


extern u32 data_0213bcc0;
extern void MIi_CpuClear16(u16 data, void *dest, u32 size);
extern s32 func_02106300(void *dict, void *name);
extern s32 GetTexSRTAnmVectorVal_(u8 *base, u32 info, u32 offs, u32 frame);
extern u32 GetTexSRTAnmSinCosVal_(u8 *base, u32 info, u32 offs, u32 frame);


// NNS g3d (NNSi_G3dAnmCalcMatAnm-like): evaluate material SRT animation at a frame into the result (flag bits 1 scale==1, 2 rot==0, 4 trans==0)
void func_02107aa0(u8 *res, u32 idx, u32 frame, u32 *out)
{
    u8 *base = res + 8;
    u32 off = *(u16 *)(res + 14);
    u32 stride = *(u16 *)(base + off);
    u32 *p = (u32 *)(base + off + 4 + stride * idx);
    u32 flags = out[0];
    s32 a, b;
    u32 rot;
    a = GetTexSRTAnmVectorVal_(res, p[6], p[7], frame);
    b = GetTexSRTAnmVectorVal_(res, p[8], p[9], frame);
    if (a == 0 && b == 0) {
        flags |= 4;
    } else {
        out[9] = a;
        out[10] = b;
        flags &= ~4;
    }
    rot = GetTexSRTAnmSinCosVal_(res, p[4], p[5], frame);
    if (rot == 0x10000000) {
        flags |= 2;
    } else {
        *(u16 *)((u8 *)out + 32) = rot;
        *(u16 *)((u8 *)out + 34) = rot >> 16;
        flags &= ~2;
    }
    a = GetTexSRTAnmVectorVal_(res, p[0], p[1], frame);
    b = GetTexSRTAnmVectorVal_(res, p[2], p[3], frame);
    if (a == 0x1000 && b == 0x1000) {
        flags |= 1;
    } else {
        out[6] = a;
        out[7] = b;
        flags &= ~1;
    }
    out[0] = flags;
}

// NNS g3d (NNSi_G3dAnmObjInitMatAnm-like): bind a material animation block to the model, build the material -> animation index table
void func_021079e4(u8 *obj, u8 *res, u8 *blk)
{
    u8 *dict = blk + *(u32 *)(blk + 8);
    u32 i;
    volatile u16 zero;
    *(u32 *)(obj + 12) = data_0213bcc0;
    obj[25] = blk[24];
    zero = 0;
    MIi_CpuClear16(zero, obj + 26, obj[25] * 2);
    for (i = 0; i < res[9]; i++) {
        u8 *d = res + 8 + *(u16 *)(res + 14);
        s32 r = func_02106300(dict + 4, d + *(u16 *)(d + 2) + i * 16);
        if (r >= 0) {
            *(u16 *)(obj + 26 + r * 2) = i | 0x100;
        }
    }
}

// NNS g3d (material animation, NNSi_G3dAnmObj*): evaluate one material at a frame (calls func_02107aa0), mark result as valid
void func_02107994(u32 *obj, s32 *a, u32 frame)
{
    func_02107aa0((u8 *)a[2], (u16)frame, a[0] >> 12, obj);
    obj[4] &= ~0xc0000000;
    obj[4] |= 0x40000000;
    obj[0] |= 8;
}

