// mwcc-flags: -nothumb -O4,p
// NitroSDK OS alarm / reset / owner info (os_alarm.c, os_reset.c, os_system.c): autoload_2 0x02114ef4-0x0211565c. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef long long s64;
typedef int s32;

typedef struct OSAlarm OSAlarm;
struct OSAlarm {
    void (*handler)(void *);
    void *arg;
    u32 tag;
    u64 fire;
    OSAlarm *prev;
    OSAlarm *next;
    u64 period;
    u64 start;
};

typedef struct {
    OSAlarm *head;
    OSAlarm *tail;
} OSAlarmQueue;

typedef struct {
    u8 favoriteColor;
    u8 birthMonth;
    u8 birthDay;
    u8 unk3;
    u16 nickName[10];
    u16 nickNameLength;
    u16 comment[26];
    u16 commentLength;
} OSOwnerInfo;

// user data block in the shared area (0x027ffc80)
typedef struct {
    u8 pad0[2];
    u8 birthMonth : 4;
    u8 pad2 : 4;
    u8 birthDay;
    u8 unk4;
    u8 pad5;
    u16 nickName[10];
    u8 nickNameLength;
    u8 pad1b;
    u16 comment[26];
    u8 commentLength;
    u8 pad51[0x13];
    u16 favoriteColor : 3;
} OSSharedUserInfo;

extern OSAlarmQueue data_021fcf30; // OSi_AlarmQueue
extern u16 data_021fcf2c;          // OSi_AlarmInitialized
extern u16 data_021fcf38;          // OSi_VAlarmInitialized
extern u32 data_021fcf3c, data_021fcf40;
extern u32 data_021fcf44[2];       // OSi_VAlarmQueue
extern u16 data_021fcf4c;          // OSi_ResetCallbackInitialized
extern u16 data_021fcf50;          // OSi_ResetFlag

u32 func_01ffa2ec(void);           // OS_DisableInterrupts_IrqAndFiq
void func_01ffa3d4(u32 state);     // OS_RestoreInterrupts_IrqAndFiq
u64 func_01ffa6b4(void);           // OS_GetTick
void func_01ff80e0(u32 mask);      // OS_DisableIrqMask
void func_01ff8128(u32 mask);      // OS_EnableIrqMask
void func_01ff8228(u32 mask);
void func_01ff81a8(u32 mask);
void func_01ffd994(void);
void func_0206d49c(void);          // OS_Terminate
void func_02112360(s32 n, void *callback, void *arg);
void func_02114d84(s32 n);         // OSi_SetTimerReserved
void func_02114ee4(void);
u32 func_021123d0(void);
void func_0211d6c0(u32 id);
void func_021159a8(s32 dmaNo);
void func_02117dcc(void);          // PXI_Init
s32 func_02117dd8(u32 tag, u32 data, s32 err);  // PXI_SendWordByFifo
s32 func_02117e8c(u32 tag, u32 proc);           // PXI_IsCallbackReady
void func_02117eb4(u32 tag, void *callback);    // PXI_SetFifoRecvCallback
void func_02115e48(const void *src, void *dest, u32 size); // MI_CpuCopy16
void func_02116048(const void *src, void *dest, u32 size); // MI_CpuCopy8
void func_0211535c(OSAlarm *alarm);
void func_021151a4(OSAlarm *alarm, u64 fire);
void func_02115094(OSAlarm *alarm);
void func_02115518(u32 tag, u32 data, s32 err);
void func_021154e8(u32 data);

#define reg_OS_TM1CNT_L (*(volatile u16 *)0x04000104)
#define reg_OS_TM1CNT_H (*(volatile u16 *)0x04000106)

// OS_GetMacAddress
void func_02115640(u8 *macAddr) {
    func_02116048((void *)0x027ffcf4, macAddr, 6);
}

// OS_GetOwnerInfo
void func_021155c4(OSOwnerInfo *info) {
    OSSharedUserInfo *src = (OSSharedUserInfo *)0x027ffc80;
    info->favoriteColor = src->favoriteColor;
    info->birthMonth = src->birthMonth;
    info->birthDay = src->birthDay;
    info->unk3 = src->unk4;
    info->nickNameLength = src->nickNameLength;
    info->commentLength = src->commentLength;
    func_02115e48(src->nickName, info->nickName, 20);
    func_02115e48(src->comment, info->comment, 52);
}

// OS_InitReset
void func_0211555c(void) {
    if (data_021fcf4c) return;
    data_021fcf4c = 1;
    func_02117dcc();
    while (!func_02117e8c(12, 1)) {
    }
    func_02117eb4(12, func_02115518);
}

// OSi_CommonCallback
void func_02115518(u32 tag, u32 data, s32 err) {
    u16 command = (u16)((data & 0x7f00) >> 8);
    if (command == 0x10) {
        data_021fcf50 = 1;
        return;
    }
    func_0206d49c();
}

// OSi_SendToPxi
void func_021154e8(u32 data) {
    while (func_02117dd8(12, data << 8, 0) != 0) {
    }
}

// OS_ResetSystem
void func_02115468(u32 parameter) {
    if (*(volatile u16 *)0x027ffc40 == 2) func_0206d49c();
    func_0211d6c0((u16)func_021123d0());
    func_021159a8(0);
    func_021159a8(1);
    func_021159a8(2);
    func_021159a8(3);
    func_01ff8228(0x40000);
    func_01ff81a8(0xffffffff);
    *(volatile u32 *)0x027ffc20 = parameter;
    func_021154e8(0x10);
    func_01ffd994();
}

// OS_InitVAlarm
void func_021153f8(void) {
    if (data_021fcf38) return;
    data_021fcf38 = 1;
    data_021fcf44[0] = 0;
    data_021fcf44[1] = 0;
    func_01ff80e0(4);
    data_021fcf40 = 0;
    data_021fcf3c = 0;
}

// OSi_SetTimer
void func_0211535c(OSAlarm *alarm) {
    s64 delta;
    u16 cnt;
    u64 tick = func_01ffa6b4();
    reg_OS_TM1CNT_H = 0;
    delta = (s64)(alarm->fire - tick);
    func_02112360(1, func_02114ee4, 0);
    cnt = 0;
    if (delta < 0) {
        cnt = 0xfffe;
    } else if (delta < 0x10000) {
        cnt = (u16)~delta;
    }
    reg_OS_TM1CNT_L = cnt;
    reg_OS_TM1CNT_H = 0xc1;
    func_01ff8128(0x10);
}

// OS_InitAlarm
void func_02115304(void) {
    if (data_021fcf2c) return;
    data_021fcf2c = 1;
    func_02114d84(1);
    data_021fcf30.head = 0;
    data_021fcf30.tail = 0;
    func_01ff80e0(0x10);
}

// OS_IsAlarmAvailable
u16 func_021152f4(void) {
    return data_021fcf2c;
}

// OS_CreateAlarm
void func_021152e4(OSAlarm *alarm) {
    alarm->handler = 0;
    alarm->tag = 0;
}

// OSi_InsertAlarm
void func_021151a4(OSAlarm *alarm, u64 fire) {
    OSAlarm *next;
    OSAlarm *prev;
    u64 tick;
    u64 delta;
    if (alarm->period) {
        tick = func_01ffa6b4();
        fire = alarm->start;
        if (fire < tick) {
            delta = tick - fire;
            fire += alarm->period * (1 + delta / alarm->period);
        }
    }
    alarm->fire = fire;
    for (next = data_021fcf30.head; next; next = next->next) {
        if ((s64)(fire - next->fire) < 0) {
            alarm->prev = next->prev;
            next->prev = alarm;
            alarm->next = next;
            if (alarm->prev) {
                alarm->prev->next = alarm;
                return;
            }
            data_021fcf30.head = alarm;
            func_0211535c(alarm);
            return;
        }
    }
    alarm->next = 0;
    prev = data_021fcf30.tail;
    data_021fcf30.tail = alarm;
    alarm->prev = prev;
    if (prev) {
        prev->next = alarm;
        return;
    }
    data_021fcf30.tail = alarm;
    data_021fcf30.head = alarm;
    func_0211535c(alarm);
}

// OS_SetAlarm
void func_0211512c(OSAlarm *alarm, u64 tick, void (*handler)(void *), void *arg) {
    u32 enabled;
    if (alarm == 0 || alarm->handler != 0) func_0206d49c();
    enabled = func_01ffa2ec();
    alarm->period = 0;
    alarm->handler = handler;
    alarm->arg = arg;
    func_021151a4(alarm, tick + func_01ffa6b4());
    func_01ffa3d4(enabled);
}

// OS_CancelAlarm
void func_02115094(OSAlarm *alarm) {
    u32 enabled = func_01ffa2ec();
    OSAlarm *next;
    if (alarm->handler == 0) {
        func_01ffa3d4(enabled);
        return;
    }
    next = alarm->next;
    if (next == 0) {
        data_021fcf30.tail = alarm->prev;
    } else {
        next->prev = alarm->prev;
    }
    if (alarm->prev) {
        alarm->prev->next = next;
    } else {
        data_021fcf30.head = next;
        if (next) func_0211535c(next);
    }
    alarm->handler = 0;
    alarm->period = 0;
    func_01ffa3d4(enabled);
}

// OSi_AlarmHandler
void func_02114f7c(void) {
    OSAlarm *alarm;
    void (*handler)(void *);
    u64 tick;
    OSAlarm *next;
    u32 *dtcm = (u32 *)0x027e0000;
    reg_OS_TM1CNT_H = 0;
    func_01ff80e0(0x10);
    dtcm[0x3ff8 / 4] |= 0x10;
    tick = func_01ffa6b4();
    alarm = data_021fcf30.head;
    if (alarm == 0) return;
    if (tick < alarm->fire) {
        func_0211535c(alarm);
        return;
    }
    next = alarm->next;
    data_021fcf30.head = next;
    if (next == 0) {
        data_021fcf30.tail = 0;
    } else {
        next->prev = 0;
    }
    handler = alarm->handler;
    if (alarm->period == 0) alarm->handler = 0;
    if (handler) handler(alarm->arg);
    if (alarm->period != 0) {
        alarm->handler = handler;
        func_021151a4(alarm, 0);
    }
    if (data_021fcf30.head) func_0211535c(data_021fcf30.head);
}

// OS_SetAlarmTag
void func_02114f74(OSAlarm *alarm, u32 tag) {
    alarm->tag = tag;
}

// OS_CancelAlarms
void func_02114ef4(u32 tag) {
    u32 enabled;
    OSAlarm *alarm;
    OSAlarm *next;
    if (tag == 0) return;
    enabled = func_01ffa2ec();
    for (alarm = data_021fcf30.head, next = alarm ? alarm->next : 0; alarm; alarm = next, next = alarm ? alarm->next : 0) {
        if (alarm->tag == tag) func_02115094(alarm);
    }
    func_01ffa3d4(enabled);
}
