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

// replies that take time on the DS (the card's SPI transfers): sent when virtual time reaches `due`. The SDK's
// asynchronous calls rely on not completing before the caller looks at their status.
static struct { u64 due; u32 word; } sLater[64];
static int sLaterCount;
void pxi7_send_after(u32 word, u32 cycles) {
    if (sLaterCount < 64) sLater[sLaterCount++] = (typeof(sLater[0])){host_cycles() + cycles, word};
}
u64 pxi7_next_due(void) {
    u64 d = ~0ull;
    for (int i = 0; i < sLaterCount; i++) if (sLater[i].due < d) d = sLater[i].due;
    return d;
}
void pxi7_run_due(void) {
    for (int i = 0; i < sLaterCount;) {
        if (sLater[i].due <= host_cycles()) { u32 w = sLater[i].word; sLater[i] = sLater[--sLaterCount]; pxi7_send(w); }
        else i++;
    }
}

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

// A pointer sent in a 26-bit message: DS main RAM (0x02000000-0x023fffff) fits; the host's own data (the program
// image at 0x08000000, well under 32 MB) loses its top bits and gets them back here.
static void *ptr26(u32 d) {
    if (d >= 0x2000000 && d < 0x2400000) return (void *)(uintptr_t)d;
    return (void *)(uintptr_t)(d | 0x08000000);
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

// ---- RTC (tag 5): command in bits 8-14; the ARM7 writes the raw BCD date and time to the system work area. The
// clock is fixed (2026-04-01 12:00:00, a Wednesday), as in the test emulator: runs are reproducible.
static void rtc_command(u32 data) {
    u32 cmd = (data & 0x7f00) >> 8;
    volatile u32 *raw = (volatile u32 *)0x027ffde8;
    if (cmd == 0x10 || cmd == 0x11) raw[0] = 0x26 | 0x04 << 8 | 0x01 << 16 | 3u << 24;
    if (cmd == 0x10 || cmd == 0x12) raw[1] = 0x12 | 0x40 | 0x00 << 8 | 0x00 << 16;
    pxi7_send(5 | (cmd << 8) << 6);
}

// ---- card backup (tag 11, messages with the error bit): the save memory. CARDi_Request sends a request id; the
// first request (0) is followed by the address of the shared command block: result 0x00, source 0x0c,
// destination 0x10, length 0x14, total size 0x18. The reply is a message with the error bit; the result (0 = OK)
// is in the block. The save memory is a file (ACWW_SAVE, default <rom>.sav), written back on every change.
static u32 *sCardBlock;
static int sCardWantBlock;
static u8 *sSave;
static u32 sSaveSize;
static char sSavePath[1024];

static void save_load(u32 size) {
    if (sSave && size <= sSaveSize) return;
    sSave = realloc(sSave, size);
    memset(sSave + sSaveSize, 0xff, size - sSaveSize);
    sSaveSize = size;
    FILE *f = fopen(sSavePath, "rb");
    if (f) { fread(sSave, 1, size, f); fclose(f); }
}
static void save_store(void) {
    FILE *f = fopen(sSavePath, "wb");
    if (f) { fwrite(sSave, 1, sSaveSize, f); fclose(f); }
}

static void card_request(u32 data) {
    if (sCardWantBlock) { sCardBlock = ptr26(data); sCardWantBlock = 0; pxi7_send_after(11 | 1u << 5, 20000); return; }
    u32 *b = sCardBlock;
    if (data == 0) { sCardWantBlock = 1; return; }
    if (!b) { pxi7_send_after(11 | 1u << 5, 20000); return; }
    u32 result = 0;
    if (b[6]) save_load(b[6]);
    u32 src = b[3], dst = b[4], len = b[5];
    switch (data) {
    case 6:  // read
        for (u32 i = 0; i < len; i++) ((u8 *)(uintptr_t)dst)[i] = src + i < sSaveSize ? sSave[src + i] : 0xff;
        break;
    case 7: case 8:  // write, program
        for (u32 i = 0; i < len && dst + i < sSaveSize; i++) sSave[dst + i] = ((u8 *)(uintptr_t)src)[i];
        save_store();
        break;
    case 9:  // verify
        for (u32 i = 0; i < len && dst + i < sSaveSize; i++) if (sSave[dst + i] != ((u8 *)(uintptr_t)src)[i]) result = 5;
        break;
    case 10: case 11:  // erase page/sector
        for (u32 i = 0; i < len && dst + i < sSaveSize; i++) sSave[dst + i] = 0xff;
        save_store();
        break;
    default: break;  // identify, read id, ...
    }
    b[0] = result;
    if (gHostVerbose) fprintf(stderr, "pxi7: card %u src %x dst %x len %x -> %u\n", data, src, dst, len, result);
    pxi7_send_after(11 | 1u << 5, 20000);
}

// ---- touch panel (tag 6): request type in bits 8-14 (0 one sample, 1 start auto sampling, 2 stop, 3 stability);
// the reply has the type, result 0 and bit 24. Samples (x:12, y:12, touch:1, validity:2) go to 0x027fffaa as raw
// ADC values, from screen coordinates through the firmware's calibration points. During auto sampling one sample
// (type 16) is sent per frame. Touches come from ACWW_TOUCH="frame:frames:x,y;..." for now.
static int sTpAuto;
static struct { u32 frame, len, x, y; } sTouch[64];
static int sTouchCount;

int frontend_touch(int *x, int *y);
// a screen position as the raw ADC sample, through the firmware's calibration points
static u32 tp_raw(s32 sx, s32 sy) {
    const u8 *u = sNvram + (sNvramSize ? (sNvram[0x20] | sNvram[0x21] << 8) * 8 : 0) + 0x58;
    s32 ax1 = u[0] | u[1] << 8, ay1 = u[2] | u[3] << 8, sx1 = u[4], sy1 = u[5];
    s32 ax2 = u[6] | u[7] << 8, ay2 = u[8] | u[9] << 8, sx2 = u[10], sy2 = u[11];
    s32 x = sx2 != sx1 ? ax1 + (sx - sx1) * (ax2 - ax1) / (sx2 - sx1) : 0;
    s32 y = sy2 != sy1 ? ay1 + (sy - sy1) * (ay2 - ay1) / (sy2 - sy1) : 0;
    return (u32)(x & 0xfff) | (u32)(y & 0xfff) << 12 | 1u << 24;
}

static void tp_sample(void) {
    u32 f = (u32)host_frame(), raw = 0;
    int lx, ly;
    if (frontend_touch(&lx, &ly)) raw = tp_raw(lx, ly);  // the viewer's mouse
    for (int i = 0; i < sTouchCount; i++)                // ACWW_TOUCH
        if (f >= sTouch[i].frame && f < sTouch[i].frame + sTouch[i].len) raw = tp_raw((s32)sTouch[i].x, (s32)sTouch[i].y);
    *(volatile u16 *)0x027fffaa = (u16)raw;
    *(volatile u16 *)0x027fffac = (u16)(raw >> 16);
}

static void tp_command(u32 data) {
    u32 type = (data & 0x7f00) >> 8;
    if (type == 0) tp_sample();
    if (type == 1) sTpAuto = 1;
    if (type == 2) sTpAuto = 0;
    pxi7_send(6 | ((type << 8) | 0x1000000) << 6);
}

void pxi7_vblank(void) {
    if (sTpAuto && sCount == 0) { tp_sample(); pxi7_send(6 | (16u << 8) << 6); }
}

// ---- sound (tag 7): the native sound driver (snd7/): a command list's address, or 0 = process now
void snd7_receive(u32 data);

// ---- services
static void service(u32 tag, u32 data, u32 err) {
    switch (tag) {
    case 4: nvram_word(data); break;
    case 5: rtc_command(data); break;
    case 6: tp_command(data); break;
    case 7: snd7_receive(data ? (u32)(uintptr_t)ptr26(data) : 0); break;
    case 11: card_request(data); break;
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
    const char *t = getenv("ACWW_TOUCH");
    while (t && *t && sTouchCount < 64) {
        unsigned fr, n, x, y;
        if (sscanf(t, "%u:%u:%u,%u", &fr, &n, &x, &y) == 4) sTouch[sTouchCount++] = (typeof(sTouch[0])){fr, n, x, y};
        t = strchr(t, ';');
        if (t) t++;
    }
    const char *sv = getenv("ACWW_SAVE");
    snprintf(sSavePath, sizeof sSavePath, "%s%s", sv ? sv : gHostRomPath, sv ? "" : ".sav");
    const char *fw = getenv("ACWW_FIRMWARE");
    FILE *f = fw ? fopen(fw, "rb") : 0;
    if (f) { sNvramSize = (u32)fread(sNvram, 1, sizeof sNvram, f); fclose(f); }
    else fprintf(stderr, "pxi7: no firmware image (ACWW_FIRMWARE): NVRAM reads give 0xff\n");
    // ARM7 callbacks ready for every tag (OSSystemWork.pxiHandleChecker[1])
    *(volatile u32 *)0x027fff8c = 0xffffffff;
}
