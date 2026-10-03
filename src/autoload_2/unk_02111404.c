// mwcc-flags: -nothumb -O4,p
// NitroSDK g3_util.c: G3i_PerspectiveW_, autoload_2 0x02111404-0x021115f4. ARM code, mwcc 1.2/base.
// The s64 division by 0x1000 is the compiler's _ll_sdiv (0x02132f50; see notes.txt about symbols.txt).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef int BOOL;

#define R32(a) (*(volatile u32 *)(a))

extern s32 FX_Div(s32 numer, s32 denom); // FX_Div
extern s32 FX_GetDivResult(void);                 // FX_GetDivResult
extern s64 FX_GetDivResultFx64c(void);                 // FX_GetDivResultFx64c

static inline s32 FX_Mul32x64c(s32 v32, s64 v64c) {
    s64 tmp = v64c * v32 + 0x80000000LL;
    return (s32)(tmp >> 32);
}

static inline s32 FX_Mul(s32 v1, s32 v2) {
    return (s32)(((s64)v1 * v2 + 0x800LL) >> 12);
}

// G3i_PerspectiveW_ (registers: 0x04000290 DIV_NUMER, 0x04000298 DIV_DENOM, 0x04000440 MTX_MODE, 0x04000458 MTX_LOAD_4x4)
void G3i_PerspectiveW_(s32 fovySin, s32 fovyCos, s32 aspect, s32 near, s32 far, s32 scale, BOOL load, s32 *mtx) {
    s32 cot, a, m22, m32, t;
    s64 inv;
    volatile u32 *fifo;
    cot = FX_Div(fovyCos, fovySin);
    if (scale != 0x1000) cot = cot * scale / 0x1000;
    *(volatile u64 *)0x04000290 = (u64)cot << 32;
    *(volatile u64 *)0x04000298 = (u32)aspect;
    if (load) {
        R32(0x04000440) = 0;
        fifo = (volatile u32 *)0x04000458;
    }
    if (mtx) {
        mtx[1] = 0;
        mtx[2] = 0;
        mtx[3] = 0;
        mtx[4] = 0;
        mtx[6] = 0;
        mtx[7] = 0;
        mtx[8] = 0;
        mtx[9] = 0;
        mtx[11] = -scale;
        mtx[12] = 0;
        mtx[13] = 0;
        mtx[15] = 0;
    }
    a = FX_GetDivResult();
    *(volatile u64 *)0x04000290 = (u64)0x1000 << 32;
    *(volatile u64 *)0x04000298 = (u32)(near - far);
    if (load) {
        *fifo = a;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = cot;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
    }
    if (mtx) {
        mtx[0] = a;
        mtx[5] = cot;
    }
    inv = FX_GetDivResultFx64c();
    if (scale != 0x1000) inv = inv * scale / 0x1000;
    m22 = FX_Mul32x64c(far + near, inv);
    m32 = FX_Mul32x64c(FX_Mul(near << 1, far), inv);
    if (load) {
        *fifo = m22;
        *fifo = -scale;
        *fifo = 0;
        *fifo = 0;
        *fifo = m32;
        *fifo = 0;
    }
    if (mtx) {
        mtx[10] = m22;
        mtx[14] = m32;
    }
}
