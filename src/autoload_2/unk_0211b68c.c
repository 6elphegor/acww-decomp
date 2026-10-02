// mwcc-flags: -nothumb -O4,p
// NitroSDK TP (touch panel) library, autoload_2 0x0211b68c-0x0211b7e8. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef long long s64;

typedef void (*TPCallback)(u32 command, u32 result, u32 arg);

typedef struct {
    u16 x, y, touch, validity;
} TPData;

typedef struct {
    TPCallback callback;      // 0x00
    u32 pad04;
    u32 pad08;
    u16 sampling;             // 0x0c
    u16 range;                // 0x0e
    TPData *buf;              // 0x10
    u16 bufSize;              // 0x14
    u8 pad16[0x30 - 0x16];
    u16 calibrateOn;          // 0x30
    u16 pad32;
    volatile u16 state;       // 0x34
    volatile u16 ack;         // 0x36
} TPWork;

typedef struct {
    s16 x0, y0, xDotSize, yDotSize;
} TPCalibrateParam;

typedef struct {
    s32 x0, pad04, xScale, y0, pad10, yScale;
} TPCalibInternal;

extern TPWork data_021feaf4;
extern TPCalibInternal data_021feb0c;

extern u32 func_01ffa2ec(void);               // OS_DisableInterrupts
extern void func_01ffa3d4(u32 e);             // OS_RestoreInterrupts
extern s32 func_02117dd8(u32 tag, u32 data, u32 err); // PXI_SendWordByFifo

#define reg_DIVCNT (*(volatile u16 *)0x04000280)
#define reg_DIV_NUMER (*(volatile u32 *)0x04000290)
#define reg_DIV_DENOM (*(volatile u32 *)0x04000298)
#define reg_DIV_DENOM_HI (*(volatile u32 *)0x0400029c)
#define reg_DIV_RESULT (*(volatile s32 *)0x040002a0)

void func_0211b6b8(TPData *disp, const TPData *raw) {
    TPCalibInternal *p;
    if (data_021feaf4.calibrateOn == 0) {
        *disp = *raw;
        return;
    }
    disp->touch = raw->touch;
    disp->validity = raw->validity;
    p = &data_021feb0c;
    if (raw->touch == 0) {
        disp->x = 0;
        disp->y = 0;
        return;
    }
    disp->x = (((s64)(raw->x << 2) - p->x0) * p->xScale) >> 22;
    if ((s16)disp->x < 0) {
        disp->x = 0;
    } else if ((s16)disp->x > 255) {
        disp->x = 255;
    }
    disp->y = (((s64)(raw->y << 2) - p->y0) * p->yScale) >> 22;
    if ((s16)disp->y < 0) {
        disp->y = 0;
        return;
    }
    if ((s16)disp->y > 191) {
        disp->y = 191;
    }
}

void func_0211b6a0(u32 mask) {
    while (data_021feaf4.ack & mask)
        ;
}

u32 func_0211b68c(u32 mask) {
    return data_021feaf4.state & mask;
}
