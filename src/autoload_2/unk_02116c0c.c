// mwcc-flags: -nothumb -O4,p
// NitroSDK SND: the interface calls and snd_main.c (SND_Init, the SND mutex), autoload_2 0x02116c0c-0x02116d24, with
// autoload_3 .bss 0x021fcf6c-0x021fcf88. ARM code, mwcc 1.2/base, -O4,p.
// (The former unit 0x02116c0c-0x02117e8c, split into its files by their bss and rodata.)
#include "types.h"
#include "sys/OSThread.h"
#include "proto/autoload_2/unk_02114410.h"
#include "proto/autoload_2/unk_02116c0c.h"
#include "proto/autoload_2/unk_02116d24.h"
#include "proto/autoload_2/unk_02117518.h"

extern u32 data_021fcf6c;
extern OSMutex data_021fcf70;

// (unk_021163b0.c; the player parameter command is in the undecompiled code)
extern void PushCommand_impl(u32 cmd, uptr a, uptr b, uptr c, uptr d);
extern void SNDi_SetPlayerParam(u32 player, u32 offset, u32 data, u32 size);

// SND_Init
void SND_Init(void) {
    if (data_021fcf6c != 0) {
        return;
    }
    data_021fcf6c = 1;
    OS_InitMutex(&data_021fcf70);
    SND_CommandInit();
    SND_AlarmInit();
}

// SND lock
void SNDi_LockMutex(void) {
    OS_LockMutex(&data_021fcf70);
}

// SND unlock
void SNDi_UnlockMutex(void) {
    OS_UnlockMutex(&data_021fcf70);
}

void SND_StopSeq(u32 a) {
    PushCommand_impl(1, a, 0, 0, 0);
}

void SND_PrepareSeq(u32 a, uptr b, u32 c, uptr d) {  // b, d: the sequence data, the bank
    PushCommand_impl(2, a, b, c, d);
}

void SND_StartPreparedSeq(u32 a) {
    PushCommand_impl(3, a, 0, 0, 0);
}

void SND_SetPlayerTempoRatio(u32 a, u32 b) {
    SNDi_SetPlayerParam(a, 26, b, 2);
}

// ---- file-scope objects (autoload_3 .bss 0x021fcf6c-0x021fcf88)
u32 data_021fcf6c; // initialised flag
OSMutex data_021fcf70; // the SND mutex
