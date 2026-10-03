// mwcc-flags: -nothumb -O4,p
// NitroSDK MI (mi_dma.c): autoload_2 0x021158e4-0x02115ad4.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef void (*MIDmaCallback)(void *arg);

extern void func_0206d49c(void); // OS_Terminate
extern u32 OS_DisableInterrupts(void); // OS_DisableInterrupts
extern void OS_RestoreInterrupts(u32 mode); // OS_RestoreInterrupts
extern void func_01ffa0f0(u32 dmaNo, u32 src, u32 size, u32 flags); // MIi_CheckDma0SourceAddress
extern void MI_WaitDma(u32 dmaNo); // MI_WaitDma
extern void OSi_EnterDmaCallback(u32 dmaNo, MIDmaCallback cb, void *arg); // MIi_SetDmaCallback
extern void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 cnt); // MIi_DmaSetParams
extern void MIi_DmaSetParams_wait_noInt(u32 dmaNo, u32 src, u32 dest, u32 cnt);
extern void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 cnt);
extern void MIi_DmaSetParams_wait(u32 dmaNo, u32 src, u32 dest, u32 cnt);

typedef struct {
    u32 busy;
    u32 dmaNo;
    u32 pad8;
    u32 padC;
    MIDmaCallback callback;
    void *arg;
} MIiGxDmaState;

extern MIiGxDmaState data_027e0414;

void func_021158f4(u32 dmaNo, u32 mode);
void MIi_DMAFastCallback(void);

// MI_DmaCopy32Async
void MI_DmaCopy32Async(u32 dmaNo, u32 src, u32 dest, u32 size, MIDmaCallback callback, void *arg) {
    func_01ffa0f0(dmaNo, src, size, 0);
    if (size == 0) {
        if (callback) callback(arg);
        return;
    }
    MI_WaitDma(dmaNo);
    if (callback) {
        OSi_EnterDmaCallback(dmaNo, callback, arg);
        MIi_DmaSetParams(dmaNo, src, dest, (size >> 2) | 0xc4000000);
    } else {
        MIi_DmaSetParams(dmaNo, src, dest, (size >> 2) | 0x84000000);
    }
}

// MI_StopDma
void MI_StopDma(u32 dmaNo) {
    vu16 *dmaCntp;
    u32 e = OS_DisableInterrupts();
    u32 tmp;
    dmaCntp = &((vu16 *)0x040000b0)[dmaNo * 6 + 5];
    *dmaCntp &= ~0x3a00;
    *dmaCntp &= ~0x8000;
    tmp = *dmaCntp;
    tmp = *dmaCntp;
    if (dmaNo == 0) {
        vu32 *p;
        p = (vu32 *)(0x040000b0 + dmaNo * 12);
        ((vu32 *)(0x04000000 + dmaNo * 12))[0xb0 / 4] = 0;
        p[1] = 0;
        p[2] = 0x81400001;
    }
    OS_RestoreInterrupts(e);
}

// MIi_CheckAnotherAutoDMA
void func_021158f4(u32 dmaNo, u32 mode) {
    int i;
    vu32 *p = (vu32 *)0x040000b8;
    for (i = 0; i < 3; i++, p += 3) {
        u32 cnt;
        u32 cur;
        if (i == dmaNo) continue;
        cnt = *p;
        if (!(cnt & 0x80000000)) continue;
        cur = cnt & 0x38000000;
        if (cur == mode) continue;
        if (cur == 0x08000000 && mode == 0x10000000) continue;
        if (cur == 0x10000000 && mode == 0x08000000) continue;
        if (cur == 0x18000000 || cur == 0x20000000 || cur == 0x28000000 || cur == 0x30000000 || cur == 0x38000000 ||
            cur == 0x08000000 || cur == 0x10000000) {
            func_0206d49c();
        }
    }
}

// MI_SetWramBank (WRAMCNT, REG 0x04000247)
void MI_SetWramBank(u32 v) {
    *(vu8 *)0x04000247 = (u8)v;
}
