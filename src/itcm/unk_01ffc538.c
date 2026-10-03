// mwcc-flags: -nothumb -O4,p
// I003e: itcm 0x01ffc538-0x01ffcb2c, NitroSDK FX (FX_Sqrt, FX_Inv, FX_Div, VEC_Fx16Normalize, VEC_Normalize, VEC_Mag, VEC_Fx16CrossProduct, VEC_CrossProduct, VEC_Fx16DotProduct, VEC_DotProduct, VEC_Subtract, VEC_Add, FX_Modf, FX_Mul, empty function), 15 functions. ARM, mwcc 1.2/base, -O4,p.
// NitroSDK types: s32/u32 are long (this matters: int and long operands are not folded together)
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define NULL 0

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef s64 fx64c;

#define FX32_SHIFT 12
#define FX32_ONE ((fx32)0x00001000L)
#define FX64C_SHIFT 20

typedef struct VecFx32 { fx32 x, y, z; } VecFx32;
typedef struct VecFx16 { fx16 x, y, z; } VecFx16;
typedef struct MtxFx33 {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
} MtxFx33;
typedef struct MtxFx43 {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;
typedef struct MtxFx44 {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;

#define reg_CP_DIVCNT      (*(vu16 *)0x04000280)
#define reg_CP_DIV_NUMER   (*(vu64 *)0x04000290)
#define reg_CP_DIV_NUMER_L (*(vu32 *)0x04000290)
#define reg_CP_DIV_DENOM   (*(vu64 *)0x04000298)
#define reg_CP_DIV_RESULT  (*(vu64 *)0x040002a0)
#define reg_CP_DIV_RESULT_L (*(vu32 *)0x040002a0)
#define reg_CP_DIVREM_RESULT_L (*(vu32 *)0x040002a8)
#define reg_CP_SQRTCNT     (*(vu16 *)0x040002b0)
#define reg_CP_SQRT_RESULT (*(vu32 *)0x040002b4)
#define reg_CP_SQRT_PARAM  (*(vu64 *)0x040002b8)

#define CP_DIV_32_32_MODE 0
#define CP_DIV_64_32_MODE 1
#define CP_DIV_64_64_MODE 2
#define CP_DIV_BUSY       0x8000
#define CP_SQRT_32_MODE   0
#define CP_SQRT_64_MODE   1
#define CP_SQRT_BUSY      0x8000

static inline fx32 FX_Mul(fx32 v1, fx32 v2) {
    return (fx32)(((fx64)v1 * v2 + 0x800LL) >> FX32_SHIFT);
}

static inline fx32 FX_Mul32x64c(fx64c v64c, fx32 v32) {
    return (fx32)(((fx64c)v32 * v64c + 0x80000LL) >> FX64C_SHIFT);
}

static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    reg_CP_DIVCNT = CP_DIV_32_32_MODE;
    reg_CP_DIV_NUMER_L = numer;
    reg_CP_DIV_DENOM = (u64)denom;
}

static inline void CP_SetDiv64_32(u64 numer, u32 denom) {
    reg_CP_DIVCNT = CP_DIV_64_32_MODE;
    reg_CP_DIV_NUMER = numer;
    reg_CP_DIV_DENOM = (u64)denom;
}

static inline void CP_SetDiv64_64(u64 numer, u64 denom) {
    reg_CP_DIVCNT = CP_DIV_64_64_MODE;
    reg_CP_DIV_NUMER = numer;
    reg_CP_DIV_DENOM = denom;
}

static inline void CP_WaitDiv(void) {
    while (reg_CP_DIVCNT & CP_DIV_BUSY) {
    }
}

static inline u32 CP_GetDivResult32(void) {
    CP_WaitDiv();
    return (u32)reg_CP_DIV_RESULT_L;
}

static inline u32 CP_GetDivRemResult32(void) {
    CP_WaitDiv();
    return (u32)reg_CP_DIVREM_RESULT_L;
}

static inline u64 CP_GetDivResult64(void) {
    CP_WaitDiv();
    return reg_CP_DIV_RESULT;
}

static inline void CP_SetSqrt64(u64 param) {
    reg_CP_SQRTCNT = CP_SQRT_64_MODE;
    reg_CP_SQRT_PARAM = param;
}

static inline void CP_WaitSqrt(void) {
    while (reg_CP_SQRTCNT & CP_SQRT_BUSY) {
    }
}

static inline u32 CP_GetSqrtResult32(void) {
    CP_WaitSqrt();
    return reg_CP_SQRT_RESULT;
}

extern fx32 FX_GetSqrtResult(void); // FX_GetSqrtResult (I003d)
extern void FX_DivAsync(fx32 numer, fx32 denom); // FX_DivAsync (I003d)
extern void FX_InvAsync(fx32 x); // FX_InvAsync (I003d)
extern fx32 FX_GetDivResult(void); // FX_GetDivResult (I003d)
/* PROTOS */
void func_01ffcb28(void);
fx32 func_01ffcb0c(fx32 v1, fx32 v2);
fx32 FX_Modf(fx32 x, fx32 *iPtr);
void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
fx32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
fx32 VEC_Fx16DotProduct(const VecFx16 *a, const VecFx16 *b);
void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
void VEC_Fx16CrossProduct(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb);
fx32 VEC_Mag(const VecFx32 *pSrc);
void VEC_Normalize(const VecFx32 *pSrc, VecFx32 *pDst);
void VEC_Fx16Normalize(const VecFx16 *pSrc, VecFx16 *pDst);
fx32 func_01ffc5a4(fx32 numer, fx32 denom);
fx32 func_01ffc588(fx32 x);
fx32 FX_Sqrt(fx32 x);

/* END PROTOS */

// empty function
void func_01ffcb28(void) {
}

// FX_Mul
fx32 func_01ffcb0c(fx32 v1, fx32 v2) {
    return FX_Mul(v1, v2);
}

// FX_Modf
fx32 FX_Modf(fx32 x, fx32 *iPtr) {
    if (x >= 0) {
        *iPtr = x & 0x7ffff000;
        return x & 0x00000fff;
    } else {
        fx32 n = -x;
        *iPtr = -(n & 0x7ffff000);
        return -(n & 0x00000fff);
    }
}

// VEC_Add
void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab) {
    ab->x = a->x + b->x;
    ab->y = a->y + b->y;
    ab->z = a->z + b->z;
}

// VEC_Subtract
void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab) {
    ab->x = a->x - b->x;
    ab->y = a->y - b->y;
    ab->z = a->z - b->z;
}

// VEC_DotProduct
fx32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b) {
    return (fx32)(((fx64)a->x * b->x + (fx64)a->y * b->y + (fx64)a->z * b->z + 0x800) >> FX32_SHIFT);
}

// VEC_Fx16DotProduct
fx32 VEC_Fx16DotProduct(const VecFx16 *a, const VecFx16 *b) {
    fx64 d;
    d = a->x * b->x + a->y * b->y;
    d += a->z * b->z + 0x800;
    return (fx32)(d >> FX32_SHIFT);
}

// VEC_CrossProduct
void VEC_CrossProduct(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb) {
    fx32 x = (fx32)(((fx64)a->y * b->z - (fx64)a->z * b->y + 0x800) >> FX32_SHIFT);
    fx32 y = (fx32)(((fx64)a->z * b->x - (fx64)a->x * b->z + 0x800) >> FX32_SHIFT);
    fx32 z = (fx32)(((fx64)a->x * b->y - (fx64)a->y * b->x + 0x800) >> FX32_SHIFT);
    axb->x = x;
    axb->y = y;
    axb->z = z;
}

// VEC_Fx16CrossProduct
void VEC_Fx16CrossProduct(const VecFx16 *a, const VecFx16 *b, VecFx16 *axb) {
    fx32 x = (a->y * b->z - a->z * b->y + 0x800) >> FX32_SHIFT;
    fx32 y = (a->z * b->x - a->x * b->z + 0x800) >> FX32_SHIFT;
    fx32 z = (a->x * b->y - a->y * b->x + 0x800) >> FX32_SHIFT;
    axb->x = (fx16)x;
    axb->y = (fx16)y;
    axb->z = (fx16)z;
}

// VEC_Mag
fx32 VEC_Mag(const VecFx32 *pSrc) {
    fx64 d;
    d = (fx64)pSrc->x * pSrc->x;
    d += (fx64)pSrc->y * pSrc->y;
    d += (fx64)pSrc->z * pSrc->z;
    CP_SetSqrt64((u64)d << 2);
    return (fx32)(((s32)CP_GetSqrtResult32() + 1) >> 1);
}

// VEC_Normalize
void VEC_Normalize(const VecFx32 *pSrc, VecFx32 *pDst) {
    fx64 d;
    fx64 inv;
    s32 sq;
    d = (fx64)pSrc->x * pSrc->x;
    d += (fx64)pSrc->y * pSrc->y;
    d += (fx64)pSrc->z * pSrc->z;
    CP_SetDiv64_64(1ULL << 56, d);
    CP_SetSqrt64((u64)d << 2);
    sq = CP_GetSqrtResult32();
    inv = CP_GetDivResult64();
    inv *= sq;
    pDst->x = (fx32)((inv * pSrc->x + (1LL << 44)) >> 45);
    pDst->y = (fx32)((inv * pSrc->y + (1LL << 44)) >> 45);
    pDst->z = (fx32)((inv * pSrc->z + (1LL << 44)) >> 45);
}

// VEC_Fx16Normalize
void VEC_Fx16Normalize(const VecFx16 *pSrc, VecFx16 *pDst) {
    fx64 d;
    fx64 inv;
    s32 sq;
    d = pSrc->x * pSrc->x;
    d += pSrc->y * pSrc->y;
    d += pSrc->z * pSrc->z;
    CP_SetDiv64_64(1ULL << 56, d);
    CP_SetSqrt64((u64)d << 2);
    sq = CP_GetSqrtResult32();
    inv = CP_GetDivResult64();
    inv *= sq;
    pDst->x = (fx16)((inv * pSrc->x + (1LL << 44)) >> 45);
    pDst->y = (fx16)((inv * pSrc->y + (1LL << 44)) >> 45);
    pDst->z = (fx16)((inv * pSrc->z + (1LL << 44)) >> 45);
}

// FX_Div
fx32 func_01ffc5a4(fx32 numer, fx32 denom) {
    FX_DivAsync(numer, denom);
    return FX_GetDivResult();
}

// FX_Inv
fx32 func_01ffc588(fx32 x) {
    FX_InvAsync(x);
    return FX_GetDivResult();
}

// FX_Sqrt
fx32 FX_Sqrt(fx32 x) {
    if (x > 0) {
        CP_SetSqrt64((u64)x << 32);
        return FX_GetSqrtResult();
    }
    return 0;
}

