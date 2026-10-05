// Host build: the ARM7 side of the PXI (inter-processor) registers and FIFO. On the DS the ARM7 runs its own
// program (sound, touch screen, RTC, NVRAM, wireless...) and talks to the ARM9 through a 16-word FIFO of
// (tag:5, err:1, data:26) messages. Here each service is answered by the host; messages to a service the host
// doesn't implement yet are logged.

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "host.h"

#define FIFOCNT 0x04000184u
#define RECV 0x04100000u

static u32 sQueue[64];
static int sHead, sCount;
static u32 sArm7Sync;

void pxi7_send(u32 word) {
    if (sCount == 64) { fprintf(stderr, "pxi7: receive FIFO overflow\n"); return; }
    sQueue[(sHead + sCount++) % 64] = word;
    if (*(u16 *)host_io(FIFOCNT) & 0x400) host_irq_raise(1u << 18);  // receive FIFO not empty
}

void pxi7_prepare_read(u32 a) {
    if (a == 0x04000180) {
        u16 v = *(u16 *)host_io(a);
        *(u16 *)host_io(a) = (u16)((v & ~0xfu) | (sArm7Sync & 0xf));
    } else if (a == FIFOCNT) {
        u16 v = *(u16 *)host_io(a) & ~0x430bu;  // bit 14 error and bit 3 send-clear read as 0
        v |= 1;                                   // send FIFO empty: the host takes words at once
        if (sCount == 0) v |= 0x100;              // receive FIFO empty
        if (sCount >= 16) v |= 0x200;
        *(u16 *)host_io(a) = v;
    } else if (a == RECV) {
        u32 w = 0;
        if (sCount) { w = sQueue[sHead]; sHead = (sHead + 1) % 64; sCount--; }
        *(u32 *)host_io(a) = w;
        if (sCount && (*(u16 *)host_io(FIFOCNT) & 0x400)) host_irq_raise(1u << 18);
    }
}

void pxi7_sync_written(u32 value) {
    // the start-up handshake (PXI_InitFifo): the ARM7 answers each value with the next one
    sArm7Sync = ((value >> 8) + 1) & 0xf;
}

// ---- NVRAM (tag 4): the firmware flash. Messages: bit 25 start, bit 24 end, bits 16-23 index, bits 0-15 payload;
// the first carries the command in bits 8-15. The reply's low byte is the result (0: success).
static u8 sNvram[0x40000];
static u32 sNvramSize;
static u32 sNvWords[8];
static int sNvCount;
static u8 sNvStatus;  // bit 1: write enable latch

static void nvram_command(void) {
    u32 cmd = sNvWords[0] >> 8 & 0xff;
    u32 addr = (sNvWords[0] & 0xff) << 16 | (sNvWords[1] & 0xffff);
    u32 size = (sNvWords[2] & 0xffff) << 16 | (sNvWords[3] & 0xffff);
    u8 *ptr = (u8 *)(uintptr_t)((sNvWords[4] & 0xffff) << 16 | (sNvWords[5] & 0xffff));
    switch (cmd) {
    case 0x23: case 0x24:  // READ, FAST_READ
        for (u32 i = 0; i < size; i++) ptr[i] = sNvramSize ? sNvram[(addr + i) % sNvramSize] : 0xff;
        break;
    case 0x22: {           // RDSR: one byte at the pointer in words 0-2
        u8 *p = (u8 *)(uintptr_t)((sNvWords[0] & 0xff) << 24 | (sNvWords[1] & 0xffff) << 8 | (sNvWords[2] >> 8 & 0xff));
        *p = sNvStatus;
        break;
    }
    case 0x20: sNvStatus |= 2; break;   // WREN
    case 0x21: sNvStatus &= ~2; break;  // WRDI
    case 0x0a: case 0x25: {  // PW (page write; 16-bit size, pointer in words 3-4): kept in memory only
        u32 n = sNvWords[2] & 0xffff;
        const u8 *src = (const u8 *)(uintptr_t)((sNvWords[3] & 0xffff) << 16 | (sNvWords[4] & 0xffff));
        for (u32 i = 0; i < n && sNvramSize; i++) sNvram[(addr + i) % sNvramSize] = src[i];
        size = n; ptr = (u8 *)src;
        sNvStatus &= ~2;
        break;
    }
    default: break;        // WREN, WRDI, ...
    }
    if (gHostVerbose && cmd != 0x22) fprintf(stderr, "pxi7: NVRAM %02x addr %06x size %x -> %p\n", cmd, addr, size, (void *)ptr);
    pxi7_send(4 | (cmd << 8) << 6);
}

static void nvram_word(u32 data) {
    if (data & 0x02000000) sNvCount = 0;
    if (sNvCount < 8) sNvWords[sNvCount++] = data;
    if (data & 0x01000000) nvram_command();
}

// ---- services
static void service(u32 tag, u32 data, u32 err) {
    switch (tag) {
    case 4: nvram_word(data); break;
    case 15:  // WVR: VRAM C/D for the wireless reboot driver; the ARM7 acknowledges at once
        if (data >> 16 == 1) pxi7_send(15 | 0x10000u << 6);
        break;
    default:
        if (gHostVerbose) fprintf(stderr, "pxi7: tag %u data %07x%s (no service)\n", tag, data, err ? " err" : "");
        break;
    }
}

void pxi7_receive(u32 word) { service(word & 31, word >> 6, word >> 5 & 1); }

void pxi7_init(void) {
    const char *fw = getenv("ACWW_FIRMWARE");
    FILE *f = fw ? fopen(fw, "rb") : 0;
    if (f) { sNvramSize = (u32)fread(sNvram, 1, sizeof sNvram, f); fclose(f); }
    else fprintf(stderr, "pxi7: no firmware image (ACWW_FIRMWARE): NVRAM reads give 0xff\n");
    // ARM7 callbacks ready for every tag (OSSystemWork.pxiHandleChecker[1])
    *(volatile u32 *)0x027fff8c = 0xffffffff;
}
