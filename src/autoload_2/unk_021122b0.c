// mwcc-flags: -nothumb -O4,p
// NitroSDK os_irqHandler.c: OS_SetIrqStackChecker / OS_GetIrqStackStatus, autoload_2 0x021122b0-0x02112360.
// ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern u8 data_027e0000[];      // SDK_AUTOLOAD_DTCM_START (HW_DTCM)
extern u8 SDK_IRQ_STACKSIZE[];  // absolute linker symbol, 0x1000
extern u32 data_021fcc0c;       // OSi_IrqStackWarningOffset

#define HW_DTCM ((u32)data_027e0000)
#define OSi_IRQ_STACK_BOTTOM (HW_DTCM + 0x3f80)                                 // HW_SVC_STACK_END
#define OSi_IRQ_STACK_TOP (OSi_IRQ_STACK_BOTTOM - (s32)SDK_IRQ_STACKSIZE)

// OS_SetIrqStackChecker
void OS_SetIrqStackChecker(void) {
    *(u32 *)(HW_DTCM + 0x3f7c) = 0xfddb597d;
    *(u32 *)(OSi_IRQ_STACK_TOP) = 0x7bf9dd5b;
}

// OS_GetIrqStackStatus: 0 ok, 1 overflow, 2 about to overflow, 3 underflow
s32 func_021122b0(void) {
    if (*(u32 *)(OSi_IRQ_STACK_TOP) != 0x7bf9dd5b) {
        return 1;
    }
    if (data_021fcc0c != 0 && *(u32 *)(OSi_IRQ_STACK_TOP + data_021fcc0c) != 0x597dfbd9) {
        return 2;
    }
    if (*(u32 *)(HW_DTCM + 0x3f7c) != 0xfddb597d) {
        return 3;
    }
    return 0;
}

// ---- file-scope objects (autoload_3 .bss 0x021fcc0c-0x021fcc10)
u32 data_021fcc0c;       // OSi_IrqStackWarningOffset
