// mwcc-flags: -nothumb -O4,p
// NitroSDK pxi_fifo.c: PXI_InitFifo, PXI_SetFifoRecvCallback, PXI_IsCallbackReady,
// autoload_2 0x02117e8c-0x0211802c. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;

typedef void (*PXIFifoCallback)(u32 tag, u32 data, BOOL err);

// The system work area at the end of main RAM. 0x027ffc00 is a plain number, NOT a linker symbol: each function
// takes it into a local pointer first (`OSSystemWork *p = OS_GetSystemWork();`, as the SDK source does). The
// compiler then keeps the base in the literal pool and adds the member offset (ldr rX,=0x027ffc00;
// ldr rY,[rX,#0x388]); written as `OS_GetSystemWork()->member` directly it folds the offset into the address.
typedef struct {
    u8 pad_000[0x388];
    u32 pxiHandleChecker[2]; // 0x388: per processor, bit n = a callback is set for tag n
} OSSystemWork;
#define OS_GetSystemWork() ((OSSystemWork *)0x027ffc00)

extern u16 data_021fea64;                 // FifoCtrlInit
extern PXIFifoCallback data_027e0394[32]; // FifoRecvCallbackTable (dtcm)

#define REG_PXI_SUBPINTF (*(volatile u16 *)0x04000180)
#define REG_PXI_FIFO_CNT (*(volatile u16 *)0x04000184)

u32 func_01ffa2ec(void);         // OS_DisableInterrupts
void func_01ffa3d4(u32 state);   // OS_RestoreInterrupts
void func_01ff81a8(u32 mask);    // OS_ResetRequestIrqMask
void func_01ffa404(u32 mask, void (*handler)(void)); // OS_SetIrqFunction
void func_01ff8128(u32 mask);    // OS_EnableIrqMask
void func_01ffa500(void);        // PXIi_HandlerRecvFifoNotEmpty

// PXI_InitFifo
void func_02117f20(void) {
    OSSystemWork *p = OS_GetSystemWork();
    u32 enabled = func_01ffa2ec();
    s32 i;
    if (data_021fea64 == 0) {
        data_021fea64 = 1;
        p->pxiHandleChecker[0] = 0;
        for (i = 0; i < 32; i++) {
            data_027e0394[i] = 0;
        }
        REG_PXI_FIFO_CNT = 0xc408;
        func_01ff81a8(0x40000);
        func_01ffa404(0x40000, func_01ffa500);
        func_01ff8128(0x40000);
        for (i = 0;; i++) {
            s32 timeout;
            s32 status;
            status = REG_PXI_SUBPINTF & 0xf;
            REG_PXI_SUBPINTF = (u16)(status << 8);
            if (status == 0 && i > 4) {
                break;
            }
            for (timeout = 1000; (REG_PXI_SUBPINTF & 0xf) == status; timeout--) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
            }
        }
    }
    func_01ffa3d4(enabled);
}

// PXI_SetFifoRecvCallback
void func_02117eb4(s32 tag, PXIFifoCallback callback) {
    OSSystemWork *p = OS_GetSystemWork();
    u32 enabled = func_01ffa2ec();
    data_027e0394[tag] = callback;
    if (callback) {
        p->pxiHandleChecker[0] |= 1 << tag;
    } else {
        p->pxiHandleChecker[0] &= ~(1 << tag);
    }
    func_01ffa3d4(enabled);
}

// PXI_IsCallbackReady
BOOL func_02117e8c(s32 tag, s32 proc) {
    OSSystemWork *p = OS_GetSystemWork();
    return (p->pxiHandleChecker[proc] & (1 << tag)) ? 1 : 0;
}
