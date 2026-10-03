// mwcc-flags: -nothumb -O4,p
// NitroSDK TP (touch panel) / PM (power management) / RTC, ARM9 side: autoload_2 0x0211bcdc-0x0211c870. mwcc 1.2/base.
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

// PMi_ReadRegister? (sync wrapper of PMi_ReadRegisterAsync)
u32 func_0211c834(u32 type, u16 *out) {
    u32 result;
    u32 r = PMi_ReadRegisterAsync(type, out, func_0211cb60, &result);
    if (r != 0) {
        return r;
    }
    func_0211cb68();
    return result;
}

// PM utility command 1..3 (async)
u32 PMi_SetLEDAsync(u32 a, PMCallback cb, void *arg) {
    u32 cmd;
    switch (a) {
    case 1:
        cmd = 1;
        break;
    case 3:
        cmd = 2;
        break;
    case 2:
        cmd = 3;
        break;
    default:
        cmd = 0;
        break;
    }
    if (cmd == 0) {
        return 0xffff;
    }
    return PM_SendUtilityCommandAsync(cmd, cb, arg);
}

// synchronous wrapper of PMi_SetLEDAsync
u32 func_0211c790(u32 a) {
    u32 result;
    u32 r = PMi_SetLEDAsync(a, func_0211cb60, &result);
    if (r != 0) {
        return r;
    }
    func_0211cb68();
    return result;
}

// PM_SetBackLightAsync? (target 0..2, sw 0/1 -> utility command 4..9)
u32 PM_SetBackLightAsync(u32 a, u32 b, PMCallback cb, void *arg) {
    u32 cmd = 0;
    if (a == 0) {
        if (b == 1) {
            cmd = 6;
        }
        if (b == 0) {
            cmd = 7;
        }
    } else if (a == 1) {
        if (b == 1) {
            cmd = 4;
        }
        if (b == 0) {
            cmd = 5;
        }
    } else if (a == 2) {
        if (b == 1) {
            cmd = 8;
        }
        if (b == 0) {
            cmd = 9;
        }
    }
    if (cmd == 0) {
        return 0xffff;
    }
    return PM_SendUtilityCommandAsync(cmd, cb, arg);
}

// PM_SetBackLight? (sync wrapper of PM_SetBackLightAsync)
u32 func_0211c6c4(u32 a, u32 b) {
    u32 result;
    u32 r = PM_SetBackLightAsync(a, b, func_0211cb60, &result);
    if (r != 0) {
        return r;
    }
    func_0211cb68();
    return result;
}

// PM utility command 14 (async)
u32 func_0211c6ac(PMCallback cb, void *arg) {
    return PM_SendUtilityCommandAsync(14, cb, arg);
}

// synchronous wrapper of func_0211c6ac
u32 func_0211c670(void) {
    u32 result;
    u32 r = func_0211c6ac(func_0211cb60, &result);
    if (r != 0) {
        return r;
    }
    func_0211cb68();
    return result;
}

// PM_GetBattery? (PMIC register 1 bit 0)
u32 func_0211c618(u32 *p) {
    u16 v;
    u32 r = func_0211c834(1, &v);
    if (r != 0) {
        return r;
    }
    if (p != 0) {
        *p = (v & 1) ? 1 : 0;
    }
    return r;
}

// PM_GetBackLight? (PMIC register 0 via func_0211c834: bit 3 / bit 2)
u32 PM_GetBackLight(u32 *p1, u32 *p2) {
    u16 v;
    u32 r = func_0211c834(0, &v);
    if (r != 0) {
        return r;
    }
    if (p1 != 0) {
        *p1 = (v & 8) ? 1 : 0;
    }
    if (p2 != 0) {
        *p2 = (v & 4) ? 1 : 0;
    }
    return r;
}

// PMi_SendWord?: PXI_SendWordByFifo(8 = PM tag, data, 0) until it is accepted
void PMi_SendPxiData(u32 data) {
    while (PXI_SendWordByFifo(8, data, 0) != 0) {
    }
}

// PMi_SetLCDPower? toggles REG_POWCNT1 bit 0 (0x04000304); LCD on needs >= 8 vblanks (0x027ffc3c) after off
u32 PMi_SetLCDPower(u32 mode, u32 target, u32 noWait, u32 sync) {
    switch (mode) {
    case 1:
        if (noWait == 0) {
            if (*(volatile u32 *)0x027ffc3c - data_021feb3c <= 7) {
                return 0;
            }
        }
        if (target != 0) {
            if (sync != 0) {
                func_0211c790(target);
            } else {
                PMi_SetLEDAsync(target, 0, 0);
            }
        }
        *(volatile u16 *)0x04000304 |= 1;
        break;
    case 0:
        *(volatile u16 *)0x04000304 &= ~1;
        data_021feb3c = *(volatile u32 *)0x027ffc3c;
        if (target != 0) {
            if (sync != 0) {
                func_0211c790(target);
            } else {
                PMi_SetLEDAsync(target, 0, 0);
            }
        }
        break;
    }
    return 1;
}

// PM_SetLCDPower?
u32 PM_SetLCDPower(u32 a) {
    if (a != 1) {
        a = 0;
    }
    return PMi_SetLCDPower(a, 0, 0, 1);
}

// PM_GetLCDPower? (REG_POWCNT1 bit 0)
BOOL PM_GetLCDPower(void) {
    return (*(volatile u16 *)0x04000304 & 1) != 0;
}

// PM command 0x66 | (u8)a (async)
u32 PMi_SendLEDPatternCommandAsync(u32 a, PMCallback cb, void *arg) {
    if (!PMi_Lock()) {
        return 1;
    }
    data_021feb44.callback = cb;
    data_021feb44.arg = arg;
    PMi_SendPxiData(0x03006600 | (u8)a);
    return 0;
}

// synchronous wrapper of PMi_SendLEDPatternCommandAsync
u32 func_0211c3b4(u32 a) {
    u32 result;
    u32 r = PMi_SendLEDPatternCommandAsync(a, func_0211cb60, &result);
    if (r != 0) {
        return r;
    }
    func_0211cb68();
    return result;
}

// PM command 0x67 (async)
u32 PM_GetLEDPatternAsync(u32 *out, PMCallback cb, void *arg) {
    if (!PMi_Lock()) {
        return 1;
    }
    data_021feb44.callback = cb;
    data_021feb44.arg = arg;
    data_021feb44.out = out;
    PMi_SendPxiData(0x03006700);
    return 0;
}

// synchronous wrapper of PM_GetLEDPatternAsync (PM command 0x67, result through out)
u32 func_0211c328(u32 *out) {
    u32 result;
    u32 r = PM_GetLEDPatternAsync(out, func_0211cb60, &result);
    if (r != 0) {
        return r;
    }
    func_0211cb68();
    return result;
}

// PMi_PrependList?
void PMi_PrependList(PMCbInfo **head, PMCbInfo *info) {
    if (head != 0) {
        info->next = *head;
        *head = info;
    }
}

// PMi_AppendList?
void PMi_AppendList(PMCbInfo **head, PMCbInfo *info) {
    PMCbInfo *cur;
    if (head == 0) {
        return;
    }
    cur = *head;
    if (cur == 0) {
        info->next = 0;
        *head = info;
        return;
    }
    while (cur->next != 0) {
        cur = cur->next;
    }
    info->next = cur->next;
    cur->next = info;
}

// PMi_DeleteList? (singly linked list, next at +8)
void PMi_DeleteList(PMCbInfo **head, PMCbInfo *info) {
    PMCbInfo *cur;
    PMCbInfo *prev;
    if (head == 0) {
        return;
    }
    cur = *head;
    prev = cur;
    for (; cur != 0; prev = cur, cur = cur->next) {
        if (cur == info) {
            if (cur == prev) {
                *head = cur->next;
            } else {
                prev->next = cur->next;
            }
            return;
        }
    }
}

// PM_PrependPostSleepCallback? (PM callback list data_021feb38)
void func_0211c268(PMCbInfo *info) {
    PMi_PrependList(&data_021feb38, info);
}

// PM_AppendPreSleepCallback? (PM callback list data_021feb40)
void func_0211c250(PMCbInfo *info) {
    PMi_AppendList(&data_021feb40, info);
}

// PM_DeletePostSleepCallback? (PM callback list data_021feb38)
void func_0211c238(PMCbInfo *info) {
    PMi_DeleteList(&data_021feb38, info);
}

// PM_DeletePreSleepCallback? (PM callback list data_021feb40)
void func_0211c220(PMCbInfo *info) {
    PMi_DeleteList(&data_021feb40, info);
}

// TPi_TpCallback (PXI tag 6 receive callback); sample data comes from 0x027fffaa/ac
void func_0211bf60(u32 tag, u32 data, u32 err) {
    u16 d = (u16)data;
    u16 type = (u16)((d & 0x7f00) >> 8);
    if (err) {
        data_021feaf4.pending |= 1 << type;
        if (data_021feaf4.callback) {
            data_021feaf4.callback(type, 4, 0);
        }
        return;
    }
    if (type == 16) {
        TPRaw tp;
        TPData *e;
        data_021feaf4.index++;
        if (data_021feaf4.index >= data_021feaf4.bufSize) {
            data_021feaf4.index = 0;
        }
        e = &((TPData *)data_021feaf4.buf)[data_021feaf4.index];
        tp.half[0] = *(volatile u16 *)0x027fffaa;
        tp.half[1] = *(volatile u16 *)0x027fffac;
        e->x = tp.b.x;
        e->y = tp.b.y;
        e->touch = (u8)tp.b.touch;
        e->validity = (u8)tp.b.validity;
        if (data_021feaf4.callback) {
            data_021feaf4.callback(type, 0, (u8)data_021feaf4.index);
        }
        return;
    }
    if (!(data & 0x1000000)) {
        return;
    }
    {
        u32 ev;
        switch ((u8)d) {
        case 0:
            switch (type) {
            case 0: {
                TPRaw tp;
                tp.half[0] = *(volatile u16 *)0x027fffaa;
                tp.half[1] = *(volatile u16 *)0x027fffac;
                data_021feaf4.state = 0;
                data_021feaf4.x = tp.b.x;
                data_021feaf4.y = tp.b.y;
                data_021feaf4.touch = (u8)tp.b.touch;
                data_021feaf4.validity = (u8)tp.b.validity;
                break;
            }
            case 1:
                data_021feaf4.state = 2;
                break;
            case 2:
                data_021feaf4.state = 0;
                break;
            }
            data_021feaf4.busy &= ~(1 << type);
            if (data_021feaf4.callback) {
                data_021feaf4.callback(type, 0, 0);
            }
            return;
        case 4:
            ev = 3;
            goto done;
        case 2:
            ev = 1;
            goto done;
        case 3:
            ev = 2;
        done:
            data_021feaf4.pending |= 1 << type;
            data_021feaf4.busy &= ~(1 << type);
            if (data_021feaf4.callback) {
                data_021feaf4.callback(type, (u8)ev, 0);
            }
            return;
        }
        func_0206d49c();
    }
}

// TP_Init: registers the PXI callback for tag 6 (touch panel)
void TP_Init(void) {
    if (data_021feaf0 != 0) {
        return;
    }
    data_021feaf0 = 1;
    func_02117dcc();
    data_021feaf4.state = 0;
    data_021feaf4.busy = 0;
    data_021feaf4.index = 0;
    data_021feaf4.callback = 0;
    data_021feaf4.buf = 0;
    data_021feaf4.calibrated = 0;
    data_021feaf4.pending = 0;
    while (!PXI_IsCallbackReady(6, 1)) {
    }
    PXI_SetFifoRecvCallback(6, func_0211bf60);
}

// TP_GetUserInfo: reads the touch calibration from the NVRAM user info copy (0x027ffc80 + 0x58)
BOOL TP_GetUserInfo(TPCalibrateParam *p) {
    // the declaration order of the locals decides the register allocation; the goto gives the second
    // `return 1` block the original has after the zeroing code
    u8 *nv = (u8 *)0x027ffc80;
    u8 dy2;
    u16 x2;
    u16 y2;
    u16 x1;
    u16 y1;
    u8 dy1;
    u8 dx2;
    u8 dx1;
    x1 = *(u16 *)(nv + 0x58);
    y1 = *(u16 *)(nv + 0x5a);
    dx1 = nv[0x5c];
    dy1 = nv[0x5d];
    x2 = *(u16 *)(nv + 0x5e);
    y2 = *(u16 *)(nv + 0x60);
    dx2 = nv[0x62];
    dy2 = nv[0x63];
    if (x1 != 0 || x2 != 0 || y1 != 0 || y2 != 0) {
        if (TP_CalcCalibrateParam(p, x1, y1, dx1, dy1, x2, y2, dx2, dy2) == 0) {
            goto ret;
        }
    }
    p->x0 = 0;
    p->y0 = 0;
    p->xDotSize = 0;
    p->yDotSize = 0;
    return 1;
ret:
    return 1;
}

// TP_SetCalibrateParam: x/y scale = 0x1000 0000 / dotSize via the hardware divider (REG_DIVCNT 0x04000280)
void TP_SetCalibrateParam(TPCalibrateParam *p) {
    u32 e;
    s32 dot;
    if (p == 0) {
        data_021feaf4.calibrated = 0;
        return;
    }
    e = OS_DisableInterrupts();
    dot = p->xDotSize;
    if (dot != 0) {
        *(volatile u16 *)0x04000280 = 0;
        *(volatile u32 *)0x04000290 = 0x10000000;
        *(volatile u64 *)0x04000298 = (u64)(u32)dot;
        data_021feaf4.x0 = p->x0;
        data_021feaf4.xDot = p->xDotSize;
        while (*(volatile u16 *)0x04000280 & 0x8000) {
        }
        data_021feaf4.xRatio = *(volatile u32 *)0x040002a0;
    } else {
        data_021feaf4.x0 = 0;
        data_021feaf4.xDot = 0;
        data_021feaf4.xRatio = 0;
    }
    dot = p->yDotSize;
    if (dot != 0) {
        *(volatile u16 *)0x04000280 = 0;
        *(volatile u32 *)0x04000290 = 0x10000000;
        *(volatile u64 *)0x04000298 = (u64)(u32)dot;
        data_021feaf4.y0 = p->y0;
        data_021feaf4.yDot = p->yDotSize;
        while (*(volatile u16 *)0x04000280 & 0x8000) {
        }
        data_021feaf4.yRatio = *(volatile u32 *)0x040002a0;
    } else {
        data_021feaf4.y0 = 0;
        data_021feaf4.yDot = 0;
        data_021feaf4.yRatio = 0;
    }
    OS_RestoreInterrupts(e);
    data_021feaf4.calibrated = 1;
}
