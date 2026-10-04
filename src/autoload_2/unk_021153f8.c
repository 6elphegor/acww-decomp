// mwcc-flags: -nothumb -O4,p
// NitroSDK OS V-count alarm (os_valarm.c), autoload_2 0x021153f8-0x02115468 (the former unit 0x02114ef4-0x0211565c split into its files by
// their bss). ARM code, mwcc 1.2/base.
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

u32 OS_DisableInterrupts(void);           // OS_DisableInterrupts_IrqAndFiq
void OS_RestoreInterrupts(u32 state);     // OS_RestoreInterrupts_IrqAndFiq
u64 OS_GetTick(void);           // OS_GetTick
void OS_DisableIrqMask(u32 mask);      // OS_DisableIrqMask
void OS_EnableIrqMask(u32 mask);      // OS_EnableIrqMask
void OS_SetIrqMask(u32 mask);
void OS_ResetRequestIrqMask(u32 mask);
void OSi_DoResetSystem(void);
void Fatal_Trap(void);          // OS_Terminate
void OSi_EnterTimerCallback(s32 n, void *callback, void *arg);
void OSi_SetTimerReserved(s32 n);         // OSi_SetTimerReserved
void OSi_AlarmHandler(void);
u32 OS_GetLockID(void);
void CARD_LockRom(u32 id);
void MI_StopDma(s32 dmaNo);
void PXI_Init(void);          // PXI_Init
s32 PXI_SendWordByFifo(u32 tag, u32 data, s32 err);  // PXI_SendWordByFifo
s32 PXI_IsCallbackReady(u32 tag, u32 proc);           // PXI_IsCallbackReady
void PXI_SetFifoRecvCallback(u32 tag, void *callback);    // PXI_SetFifoRecvCallback
void MIi_CpuCopy16(const void *src, void *dest, u32 size); // MI_CpuCopy16
void MI_CpuCopy8(const void *src, void *dest, u32 size); // MI_CpuCopy8
void OSi_SetTimer(OSAlarm *alarm);
void OSi_InsertAlarm(OSAlarm *alarm, u64 fire);
void OS_CancelAlarm(OSAlarm *alarm);
void OSi_CommonCallback(u32 tag, u32 data, s32 err);
void OSi_SendToPxi(u32 data);

#define reg_OS_TM1CNT_L (*(volatile u16 *)0x04000104)
#define reg_OS_TM1CNT_H (*(volatile u16 *)0x04000106)
// OS_InitVAlarm
void OS_InitVAlarm(void) {
    if (data_021fcf38) return;
    data_021fcf38 = 1;
    data_021fcf44[0] = 0;
    data_021fcf44[1] = 0;
    OS_DisableIrqMask(4);
    data_021fcf40 = 0;
    data_021fcf3c = 0;
}

// ---- file-scope objects (autoload_3 .bss 0x021fcf38-0x021fcf4c; this definition order gives the original order after mwcc's size
// sort)
u16 data_021fcf38;          // OSi_VAlarmInitialized
u32 data_021fcf40;
u32 data_021fcf3c;
u32 data_021fcf44[2];       // OSi_VAlarmQueue
