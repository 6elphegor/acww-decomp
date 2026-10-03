// mwcc-flags: -nothumb -O4,p
// NitroSDK types: s32/u32 are long (this matters: int and long operands are not folded together)
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;

typedef s32 fx32;
typedef s64 fx64;

#define FX32_SHIFT 12
#define FX32_ONE ((fx32)0x00001000L)

typedef struct MtxFx43 {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;

void func_02115f64(void *src, void *dst);   // MTX_Copy43 (autoload_2, 48-byte ldm/stm copy)
void func_01ffc428(fx32 x);                 // FX_InvAsync
fx32 func_01ffc464(void);                   // FX_GetDivResult

// MTX_Inverse43 (NitroSDK fx_mtx43.c)
int func_01ffbb6c(const MtxFx43 *pSrc, MtxFx43 *pDst) {
    MtxFx43 tmp;
    MtxFx43 *p;
    fx32 det0, det1, det2, det;
    fx32 var0, var1, var2, var3;
    fx64 inv;
    if (pSrc == pDst) {
        p = &tmp;
    } else {
        p = pDst;
    }
    // cofactors and determinant (rounded)
    det0 = (fx32)(((fx64)pSrc->_11 * pSrc->_22 - (fx64)pSrc->_12 * pSrc->_21 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    det1 = (fx32)(((fx64)pSrc->_10 * pSrc->_22 - (fx64)pSrc->_12 * pSrc->_20 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    det2 = (fx32)(((fx64)pSrc->_10 * pSrc->_21 - (fx64)pSrc->_11 * pSrc->_20 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    det = (fx32)(((fx64)pSrc->_00 * det0 - (fx64)pSrc->_01 * det1 + (fx64)pSrc->_02 * det2 + (fx64)(FX32_ONE >> 1)) >> FX32_SHIFT);
    if (det == 0) {
        return -1; // not invertible
    }
    func_01ffc428(det);
    var0 = (fx32)(((fx64)pSrc->_01 * pSrc->_22 - (fx64)pSrc->_21 * pSrc->_02) >> FX32_SHIFT);
    var1 = (fx32)(((fx64)pSrc->_01 * pSrc->_12 - (fx64)pSrc->_11 * pSrc->_02) >> FX32_SHIFT);
    var2 = (fx32)(((fx64)pSrc->_00 * pSrc->_22 - (fx64)pSrc->_20 * pSrc->_02) >> FX32_SHIFT);
    var3 = (fx32)(((fx64)pSrc->_00 * pSrc->_12 - (fx64)pSrc->_10 * pSrc->_02) >> FX32_SHIFT);
    inv = func_01ffc464();
    p->_00 = (fx32)((inv * det0) >> FX32_SHIFT);
    p->_01 = -(fx32)((inv * var0) >> FX32_SHIFT);
    p->_02 = (fx32)((inv * var1) >> FX32_SHIFT);
    p->_10 = -(fx32)((inv * det1) >> FX32_SHIFT);
    p->_11 = (fx32)((inv * var2) >> FX32_SHIFT);
    p->_12 = -(fx32)((inv * var3) >> FX32_SHIFT);
    p->_20 = (fx32)((inv * det2) >> FX32_SHIFT);
    p->_21 = -(fx32)((inv * (fx32)(((fx64)pSrc->_00 * pSrc->_21 - (fx64)pSrc->_20 * pSrc->_01) >> FX32_SHIFT)) >> FX32_SHIFT);
    p->_22 = (fx32)((inv * (fx32)(((fx64)pSrc->_00 * pSrc->_11 - (fx64)pSrc->_10 * pSrc->_01) >> FX32_SHIFT)) >> FX32_SHIFT);
    // translation row
    p->_30 = -(fx32)(((fx64)p->_00 * pSrc->_30 + (fx64)p->_10 * pSrc->_31 + (fx64)p->_20 * pSrc->_32) >> FX32_SHIFT);
    p->_31 = -(fx32)(((fx64)p->_01 * pSrc->_30 + (fx64)p->_11 * pSrc->_31 + (fx64)p->_21 * pSrc->_32) >> FX32_SHIFT);
    p->_32 = -(fx32)(((fx64)p->_02 * pSrc->_30 + (fx64)p->_12 * pSrc->_31 + (fx64)p->_22 * pSrc->_32) >> FX32_SHIFT);
    if (p == &tmp) {
        func_02115f64(&tmp, pDst);
    }
    return 0;
}
