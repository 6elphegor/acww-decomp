// mwcc-flags: -nothumb -O4,p
// H7_0211b7e8: autoload_2 0x0211b7e8-0x0211ba58 (one function), NitroSDK TP (touch panel) TP_CalcCalibrateParam.
// C, mwcc 1.2/base, -nothumb -O4,p. Hardware divider accessed through the SDK CP_* inlines (volatile = registers only).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;

typedef struct {
    s16 x0, y0, xDotSize, yDotSize;
} TPCalibrateParam;

extern u32 func_01ffa2ec(void);               // OS_DisableInterrupts
extern void func_01ffa3d4(u32 e);             // OS_RestoreInterrupts

// REG_DIVCNT 0x04000280, REG_DIV_NUMER 0x04000290, REG_DIV_DENOM 0x04000298, REG_DIV_RESULT 0x040002a0
static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile u32 *)0x04000290 = numer;
    *(volatile unsigned long long *)0x04000298 = denom;
}
static inline void CP_WaitDiv(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
}
static inline s32 CP_GetDivResult32(void) {
    CP_WaitDiv();
    return *(volatile s32 *)0x040002a0;
}
// TP_CalcCalibrateParam(calibrate, raw_x1, raw_y1, dx1, dy1, raw_x2, raw_y2, dx2, dy2)
// returns 0 on success, 1 on a parameter error; the origin terms are (s16)(... >> 7) as in the SDK
u32 func_0211b7e8(void *param, u16 x1, u16 y1, u16 dx1, u16 dy1, u16 x2, u16 y2, u16 dx2, u16 dy2) {
    TPCalibrateParam *p = (TPCalibrateParam *)param;
    s32 rx_width, dx_width, ry_width, dy_width;
    s32 tmp32;
    u32 e;
    if (x1 >= 0x1000 || y1 >= 0x1000 || x2 >= 0x1000 || y2 >= 0x1000) {
        return 1;
    }
    if (dx1 >= 0x100 || dx2 >= 0x100 || dy1 >= 0xc0 || dy2 >= 0xc0) {
        return 1;
    }
    if (dx1 == dx2 || dy1 == dy2 || x1 == x2 || y1 == y2) {
        return 1;
    }
    rx_width = x1 - x2;
    dx_width = dx1 - dx2;
    e = func_01ffa2ec();
    CP_SetDiv32_32(((u32)rx_width) << 8, (u32)dx_width);
    ry_width = y1 - y2;
    dy_width = dy1 - dy2;
    tmp32 = CP_GetDivResult32();
    CP_SetDiv32_32(((u32)ry_width) << 8, (u32)dy_width);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        func_01ffa3d4(e);
        return 1;
    }
    p->xDotSize = (s16)tmp32;
    tmp32 = (s16)(((((s32)(x1 + x2)) << 8) - (dx1 + dx2) * p->xDotSize) >> 7);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        func_01ffa3d4(e);
        return 1;
    }
    p->x0 = (s16)tmp32;
    tmp32 = CP_GetDivResult32();
    func_01ffa3d4(e);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        return 1;
    }
    p->yDotSize = (s16)tmp32;
    tmp32 = (s16)(((((s32)(y1 + y2)) << 8) - (dy1 + dy2) * p->yDotSize) >> 7);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        return 1;
    }
    p->y0 = (s16)tmp32;
    return 0;
}
