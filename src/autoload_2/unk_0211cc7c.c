// mwcc-flags: -nothumb -O4,p
// NitroSDK TP (touch panel) / PM (power management) / RTC, ARM9 side: autoload_2 0x0211bcdc-0x0211d20c. mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;

typedef struct {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;

typedef struct {
    u8 pad[0x58];
    u16 x1;
    u16 y1;
    u8 dx1;
    u8 dy1;
    u16 x2;
    u16 y2;
    u8 dx2;
    u8 dy2;
} TPUserInfo;

typedef void (*TPCallback)(u32 type, u32 result, u32 arg);

typedef struct {
    TPCallback callback; // 0x00
    u16 x;               // 0x04
    u16 y;               // 0x06
    u16 touch;           // 0x08
    u16 validity;        // 0x0a
    u16 index;           // 0x0c
    u16 pad0e;
    void *buf;           // 0x10
    u16 bufSize;         // 0x14
    u16 pad16;
    s32 x0;              // 0x18
    s32 xDot;            // 0x1c
    s32 xRatio;          // 0x20
    s32 y0;              // 0x24
    s32 yDot;            // 0x28
    s32 yRatio;          // 0x2c
    u16 calibrated;      // 0x30
    volatile u16 state;  // 0x32 (state/pending/busy are volatile: it changes the instruction scheduling to the original's)
    volatile u16 pending; // 0x34
    volatile u16 busy;    // 0x36
} TPWork;

typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;

typedef union {
    u32 raw;
    u16 half[2];
    struct {
        u32 x : 12;
        u32 y : 12;
        u32 touch : 1;
        u32 validity : 2;
        u32 pad : 5;
    } b;
} TPRaw;

typedef struct {
    volatile u16 flag;
    u16 pad;
    u32 pad2;
} PMFlag;
typedef struct {
    u16 *ptr;
    u32 pad;
} PMDest;

typedef struct PMCbInfo PMCbInfo;
struct PMCbInfo {
    u32 a;
    u32 b;
    PMCbInfo *next;
};

typedef void (*PMCallback)(u32 result, void *arg);

typedef struct {
    u32 lock;            // 0x00
    PMCallback volatile callback;
    void *arg;           // 0x08
    u32 *out;            // 0x0c
} PMWork;

typedef struct {
    u32 lock;                  // 0x00
    PMCallback callback;       // 0x04
    u32 *dst1;                 // 0x08
    u32 *dst2;                 // 0x0c
    void *arg;                 // 0x10
    u32 command;               // 0x14
    u32 busy;                  // 0x18
    void (*intCallback)(void); // 0x1c
    u32 cb20;                  // 0x20
} RTCWork;

typedef struct {
    u32 pad0;
    PMCallback callback;
    u32 pad1[2];
    void *arg;
} RTCCb;

typedef struct {
    u32 year : 8;
    u32 month : 5;
    u32 pad0 : 3;
    u32 day : 6;
    u32 pad1 : 2;
    u32 week : 3;
    u32 pad2 : 5;
} RTCRawDate;

typedef struct {
    u32 hour : 6;
    u32 pad0 : 2;
    u32 minute : 7;
    u32 pad1 : 1;
    u32 second : 7;
    u32 pad2 : 9;
} RTCRawTime;

typedef struct {
    u32 week : 3;
    u32 pad0 : 4;
    u32 weekOn : 1;
    u32 hour : 6;
    u32 pad1 : 1;
    u32 hourOn : 1;
    u32 minute : 7;
    u32 minuteOn : 1;
    u32 pad2 : 8;
} RTCRawAlarm;

typedef struct {
    u16 mode : 4;
    u16 pad0 : 2;
    u16 flag : 1;
    u16 pad1 : 9;
} RTCRawStatus;

extern TPWork data_021feaf4;
extern u16 data_021feaf0;

extern PMWork data_021feb44;
extern u16 data_021feb2c;
extern u32 data_021feb30;
extern u32 data_021feb34;
extern PMCbInfo *data_021feb38;
extern u32 data_021feb3c;
extern PMCbInfo *data_021feb40;
extern u8 data_021feb54[];
extern PMFlag data_021feb6c[4];
extern PMDest data_021feb70[4];
extern RTCWork data_021feb90;

extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern u32 TP_CalcCalibrateParam(TPCalibrateParam *p, u16 x1, u16 y1, u8 dx1, u8 dy1, u16 x2, u16 y2, u8 dx2, u8 dy2);
extern void func_02117dcc(void);
extern BOOL PXI_IsCallbackReady(u32 tag, u32 proc);
extern void PXI_SetFifoRecvCallback(u32 tag, void *cb);
extern s32 PXI_SendWordByFifo(u32 tag, u32 data, u32 err);
extern void func_0206d49c(void);
extern void OS_InitMutex(void *p);
extern BOOL func_0211d518(void);

void PMi_DeleteList(PMCbInfo **head, PMCbInfo *info);
void PMi_AppendList(PMCbInfo **head, PMCbInfo *info);
void PMi_PrependList(PMCbInfo **head, PMCbInfo *info);
u32 PM_GetLEDPatternAsync(u32 *out, PMCallback cb, void *arg);
void func_0211cb60(u32 result, void *arg);
void func_0211cb68(void);
BOOL PMi_Lock(void);
void PMi_SendPxiData(u32 data);
u32 PMi_SendLEDPatternCommandAsync(u32 a, PMCallback cb, void *arg);
u32 func_0211c790(u32 a);
u32 PMi_SetLEDAsync(u32 a, PMCallback cb, void *arg);
u32 func_0211c834(u32 type, u16 *out);
u32 PMi_ReadRegisterAsync(u32 type, u16 *out, PMCallback cb, void *arg);
u32 PM_SendUtilityCommandAsync(u32 cmd, PMCallback cb, void *arg);
u32 func_0211c6ac(PMCallback cb, void *arg);
u32 PM_SetBackLightAsync(u32 a, u32 b, PMCallback cb, void *arg);
void PMi_CallCallbackAndUnlock(u32 result);
u32 RtcBCD2HEX(u32 bcd);
void func_0211bf60(u32 tag, u32 data, u32 err);
void func_0211c95c(u32 tag, u32 data, u32 err);
u32 PMi_SetLCDPower(u32 mode, u32 target, u32 noWait, u32 sync);

void func_0211cc7c(u32 tag, u32 data, u32 err) {
    u32 result;
    u32 *p;
    u32 *q;
    u8 cmd;
    u8 code;
    if (err) {
        if (data_021feb90.busy != 0) {
            data_021feb90.busy = 0;
        }
        if (data_021feb90.lock != 0) {
            data_021feb90.lock = 0;
        }
        if (data_021feb90.callback) {
            PMCallback cb = data_021feb90.callback;
            data_021feb90.callback = 0;
            cb(6, data_021feb90.arg);
        }
        return;
    }
    cmd = (data & 0x7f00) >> 8;
    code = (u8)data;
    if (cmd == 0x30) {
        if (data_021feb90.intCallback != 0) {
            data_021feb90.intCallback();
        }
        return;
    }
    if (code == 0) {
        result = 0;
        switch (data_021feb90.command) {
        case 0:
            p = data_021feb90.dst1;
            p[0] = RtcBCD2HEX((*(volatile u8 *)0x027ffde8));
            p[1] = RtcBCD2HEX((((*(volatile u32 *)0x027ffde8) << 19) >> 27));
            p[2] = RtcBCD2HEX((((*(volatile u32 *)0x027ffde8) << 10) >> 26));
            p[3] = (((*(volatile u32 *)0x027ffde8) << 5) >> 29);
            break;
        case 1:
            p = data_021feb90.dst1;
            p[0] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 26) >> 26));
            p[1] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 17) >> 25));
            p[2] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 9) >> 25));
            break;
        case 2:
            p = data_021feb90.dst1;
            p[0] = RtcBCD2HEX(((*(volatile u32 *)0x027ffde8) & 0xff));
            p[1] = RtcBCD2HEX((((*(volatile u32 *)0x027ffde8) << 19) >> 27));
            p[2] = RtcBCD2HEX((((*(volatile u32 *)0x027ffde8) << 10) >> 26));
            p[3] = (((*(volatile u32 *)0x027ffde8) << 5) >> 29);
            q = data_021feb90.dst2;
            q[0] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 26) >> 26));
            q[1] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 17) >> 25));
            q[2] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 9) >> 25));
            break;
        case 3:
        case 4:
        case 5:
            break;
        case 6:
            p = data_021feb90.dst1;
            switch (((volatile RTCRawStatus *)0x027ffdea)->mode) {
            case 4:
                *p = 1;
                break;
            default:
                *p = 0;
                break;
            }
            break;
        case 7:
            p = data_021feb90.dst1;
            if (((volatile RTCRawStatus *)0x027ffdea)->flag) {
                *p = 1;
            } else {
                *p = 0;
            }
            break;
        case 8:
            p = data_021feb90.dst1;
            p[0] = (((*(volatile u32 *)0x027ffdec) << 29) >> 29);
            p[1] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 18) >> 26));
            p[2] = RtcBCD2HEX((((*(volatile u32 *)0x027ffdec) << 9) >> 25));
            p[3] = 0;
            if ((((*(volatile u32 *)0x027ffdec) << 24) >> 31)) {
                p[3] += 1;
            }
            if (((*(volatile u32 *)0x027ffdec) << 16) >> 31) {
                p[3] += 2;
            }
            if (((*(volatile u32 *)0x027ffdec) << 8) >> 31) {
                p[3] += 4;
            }
            break;
        case 9:
            if (data_021feb90.busy == 0) {
                if (*data_021feb90.dst1 == 1) {
                    if (((volatile RTCRawStatus *)0x027ffdea)->mode != 4) {
                        data_021feb90.busy++;
                        ((volatile RTCRawStatus *)0x027ffdea)->mode = 4;
                        if (!func_0211d518()) {
                            data_021feb90.busy = 0;
                            result = 3;
                        }
                    }
                } else {
                    if (((volatile RTCRawStatus *)0x027ffdea)->mode != 0) {
                        data_021feb90.busy++;
                        ((volatile RTCRawStatus *)0x027ffdea)->mode = 0;
                        if (!func_0211d518()) {
                            data_021feb90.busy = 0;
                            result = 3;
                        }
                    }
                }
            } else {
                data_021feb90.busy = 0;
            }
            break;
        case 10:
            if (data_021feb90.busy == 0) {
                if (*data_021feb90.dst1 == 1) {
                    if (!((volatile RTCRawStatus *)0x027ffdea)->flag) {
                        data_021feb90.busy++;
                        ((volatile RTCRawStatus *)0x027ffdea)->flag = 1;
                        if (!func_0211d518()) {
                            data_021feb90.busy = 0;
                            result = 3;
                        }
                    }
                } else {
                    if (((volatile RTCRawStatus *)0x027ffdea)->flag) {
                        data_021feb90.busy++;
                        ((volatile RTCRawStatus *)0x027ffdea)->flag = 0;
                        if (!func_0211d518()) {
                            data_021feb90.busy = 0;
                            result = 3;
                        }
                    }
                }
            } else {
                data_021feb90.busy = 0;
            }
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        default:
            data_021feb90.busy = 0;
            result = 4;
            break;
        }
    } else {
        data_021feb90.busy = 0;
        switch (code) {
        case 1:
            result = 4;
            break;
        case 2:
            result = 5;
            break;
        case 3:
            result = 1;
            break;
        case 0:
        case 4:
        default:
            result = 6;
            break;
        }
    }
    if (data_021feb90.busy != 0) {
        return;
    }
    if (data_021feb90.lock != 0) {
        data_021feb90.lock = 0;
    }
    if (data_021feb90.callback) {
        PMCallback cb = data_021feb90.callback;
        data_021feb90.callback = 0;
        cb(result, data_021feb90.arg);
    }
}
