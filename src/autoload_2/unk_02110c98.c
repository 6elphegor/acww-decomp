// mwcc-flags: -nothumb -O4,p
// NitroSDK graphics (G2/G3/GX), autoload_2 0x02110c98-0x02111404. ARM code, mwcc 1.2/base with -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;

#define R8(a) (*(volatile u8 *)(a))
#define R16(a) (*(volatile u16 *)(a))
#define R32(a) (*(volatile u32 *)(a))

typedef struct { s32 x, y, z; } VecFx32;
typedef struct { s32 m[4][3]; } MtxFx43;

extern u32 data_0213bfec; // sDmaNo (-1 = use the CPU)
extern void MI_DmaFill32Async(u32 dmaNo, void *dst, u32 data, u32 size, void *cb, void *arg);
extern void MI_DmaFill32(u32 dmaNo, void *dst, u32 data, u32 size);
extern void func_02115e64(u32 data, void *dst, u32 size);
extern void MIi_CpuCopy16(const void *src, void *dst, u32 size);
extern void MI_Copy32B(const void *src, void *dst);
extern void MI_Copy36B(const void *src, void *dst);
extern void MI_Copy64B(const void *src, void *dst);
extern void VEC_Normalize(const VecFx32 *src, VecFx32 *dst);
extern void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *dst);
extern s32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern void GXi_NopClearFifo128_(void *dst); // GXi_NopClearFifo128_ (assembly, outside this unit)
extern s32 G3X_GetMtxStackLevelPJ(u32 *p);
extern s32 G3X_GetMtxStackLevelPV(u32 *p);
extern void func_02110d00(void);
extern void G3X_ResetMtxStack(void);
extern void G3X_InitMtxStack(void);
extern void G3X_ClearFifo(void);

// G3i_LookAt_
void G3i_LookAt_(const VecFx32 *pos, const VecFx32 *up, const VecFx32 *target, BOOL send, MtxFx43 *mtx) {
    VecFx32 vLook, vRight, vUp;
    s32 tx, ty, tz;
    volatile u32 *fifo;
    vLook.x = pos->x - target->x;
    vLook.y = pos->y - target->y;
    vLook.z = pos->z - target->z;
    VEC_Normalize(&vLook, &vLook);
    VEC_CrossProduct(up, &vLook, &vRight);
    VEC_Normalize(&vRight, &vRight);
    VEC_CrossProduct(&vLook, &vRight, &vUp);
    if (send) {
        R32(0x04000440) = 2;
        fifo = (volatile u32 *)0x0400045c;
        *fifo = vRight.x;
        *fifo = vUp.x;
        *fifo = vLook.x;
        *fifo = vRight.y;
        *fifo = vUp.y;
        *fifo = vLook.y;
        *fifo = vRight.z;
        *fifo = vUp.z;
        *fifo = vLook.z;
    }
    tx = -VEC_DotProduct(pos, &vRight);
    ty = -VEC_DotProduct(pos, &vUp);
    tz = -VEC_DotProduct(pos, &vLook);
    if (send) {
        *fifo = tx;
        *fifo = ty;
        *fifo = tz;
    }
    if (mtx) {
        mtx->m[0][0] = vRight.x;
        mtx->m[0][1] = vUp.x;
        mtx->m[0][2] = vLook.x;
        mtx->m[1][0] = vRight.y;
        mtx->m[1][1] = vUp.y;
        mtx->m[1][2] = vLook.y;
        mtx->m[2][0] = vRight.z;
        mtx->m[2][1] = vUp.z;
        mtx->m[2][2] = vLook.z;
        mtx->m[3][0] = tx;
        mtx->m[3][1] = ty;
        mtx->m[3][2] = tz;
    }
}
// G3X_Init
void G3X_Init(void) {
    G3X_ClearFifo();
    R32(0x04000504) = 0;
    while (R32(0x04000600) & 0x08000000) {
    }
    R16(0x04000060) = 0;
    R32(0x04000600) = 0;
    R32(0x04000010) = 0;
    R16(0x04000060) |= 0x2000;
    R16(0x04000060) |= 0x1000;
    R16(0x04000060) &= ~0x3002;
    R16(0x04000060) = (R16(0x04000060) & ~0x3000) | 0x10;
    R16(0x04000060) &= 0xcffb;
    R32(0x04000600) |= 0x8000;
    R32(0x04000600) = (R32(0x04000600) & ~0xc0000000) | 0x80000000;
    G3X_InitMtxStack();
    R32(0x04000350) = 0;
    R16(0x04000354) = 0x7fff;
    R16(0x04000356) = 0;
    R32(0x04000358) = 0;
    R16(0x0400035c) = 0;
    R16(0x04000008) &= ~3;
    func_02110d00();
    R32(0x040004a4) = 0x1f0080;
    R32(0x040004a8) = 0;
    R32(0x040004ac) = 0;
}
// G3X_InitMtxStack-style helper (waits for GXSTAT busy, clears the error flags, resets the stacks, default polygon attr)
void G3X_Reset(void) {
    while (R32(0x04000600) & 0x08000000) {
    }
    R32(0x04000600) |= 0x8000;
    R16(0x04000060) |= 0x2000;
    R16(0x04000060) |= 0x1000;
    G3X_ResetMtxStack();
    R32(0x040004a4) = 0x1f0080;
    R32(0x040004a8) = 0;
    R32(0x040004ac) = 0;
}
// G3X_ClearFifo-style (GXi_NopClearFifo128_ then wait for the geometry engine)
void G3X_ClearFifo(void) {
    GXi_NopClearFifo128_((void *)0x04000400);
    while (R32(0x04000600) & 0x08000000) {
    }
}
// G3X_ResetMtxStack-style helper (variant with an extra identity load)
void G3X_InitMtxStack(void) {
    u32 a, b;
    R32(0x04000600) |= 0x8000;
    while (G3X_GetMtxStackLevelPV(&a) != 0) {
    }
    while (G3X_GetMtxStackLevelPJ(&b) != 0) {
    }
    R32(0x04000440) = 3;
    R32(0x04000454) = 0;
    R32(0x04000440) = 0;
    if (b != 0) R32(0x04000448) = b;
    R32(0x04000454) = 0;
    R32(0x04000440) = 2;
    R32(0x04000448) = a;
    R32(0x04000454) = 0;
}
// G3X_ResetMtxStack-style helper (pops the position/vector and projection stacks)
void G3X_ResetMtxStack(void) {
    u32 a, b;
    R32(0x04000600) |= 0x8000;
    while (G3X_GetMtxStackLevelPV(&a) != 0) {
    }
    while (G3X_GetMtxStackLevelPJ(&b) != 0) {
    }
    R32(0x04000440) = 3;
    R32(0x04000454) = 0;
    R32(0x04000440) = 0;
    if (b != 0) R32(0x04000448) = b;
    R32(0x04000440) = 2;
    R32(0x04000448) = a;
    R32(0x04000454) = 0;
}
// G3X_SetFog
void G3X_SetFog(s32 enable, s32 mode, s32 shift, s32 offset) {
    if (enable != 0) {
        R16(0x0400035c) = offset;
        R16(0x04000060) = (u16)((R16(0x04000060) & ~0x3f40) | ((shift << 8) | (mode << 6) | 0x80));
    } else {
        R16(0x04000060) &= 0xcf7f;
    }
}
// G3X_GetClipMtx
s32 G3X_GetClipMtx(void *dst) {
    if (R32(0x04000600) & 0x08000000) return -1;
    MI_Copy64B((void *)0x04000640, dst);
    return 0;
}
// G3X_GetVectorMtx
s32 G3X_GetVectorMtx(void *dst) {
    if (R32(0x04000600) & 0x08000000) return -1;
    MI_Copy36B((void *)0x04000680, dst);
    return 0;
}
// G3X_SetFogTable
void func_02110e00(const void *t) {
    MI_Copy32B(t, (void *)0x04000360);
}
// G3X_SetToonTable
void func_02110de8(const void *t) {
    MIi_CpuCopy16(t, (void *)0x04000380, 0x40);
}
// G3X_SetClearColor
void G3X_SetClearColor(u32 rgb, u32 alpha, u32 depth, u32 polyId, u32 fog) {
    u32 c = rgb | (alpha << 16) | (polyId << 24);
    if (fog) c |= 0x8000;
    R32(0x04000350) = c;
    R16(0x04000354) = depth;
}
// G3X_InitTable
void func_02110d00(void) {
    s32 i;
    if (data_0213bfec != -1) {
        MI_DmaFill32Async(data_0213bfec, (void *)0x04000330, 0, 16, 0, 0);
        MI_DmaFill32(data_0213bfec, (void *)0x04000360, 0, 96);
    } else {
        {
            volatile u32 z = 0;
            func_02115e64(z, (void *)0x04000330, 16);
        }
        {
            volatile u32 z = 0;
            func_02115e64(z, (void *)0x04000360, 96);
        }
    }
    for (i = 0; i < 32; i++) R32(0x040004d0) = 0;
}
// G3X_GetMtxStackLevelPV
s32 G3X_GetMtxStackLevelPV(u32 *p) {
    if (R32(0x04000600) & 0x4000) return -1;
    *p = (R32(0x04000600) & 0x1f00) >> 8;
    return 0;
}
// G3X_GetMtxStackLevelPJ
s32 G3X_GetMtxStackLevelPJ(u32 *p) {
    if (R32(0x04000600) & 0x4000) return -1;
    *p = (R32(0x04000600) & 0x2000) >> 13;
    return 0;
}
// writes REG_BG0OFS (0x04000010)
void func_02110c98(u32 v) {
    R32(0x04000010) = v;
}
