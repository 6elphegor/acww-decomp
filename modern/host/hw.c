// Host build: the DS memory map and the ARM9 I/O registers.
//
// The game's memory is mapped at the DS addresses, so hardcoded addresses keep working. The I/O registers are
// plain host arrays (host_io). The game reaches them only through HostIo_Read / HostIo_Write
// (include/nitro/io_access.h), which carry out the access and its side effects. Nothing is mapped at the DS's I/O
// addresses: a stray access there crashes (debug_posix.c reports where).
//
// Time is virtual: a cycle counter (ARM9 bus clock) that advances a little on every I/O read (so polling loops
// progress) and jumps to the next event when the game halts or waits. Interrupts are taken only at safe points:
// after a register access, and when the game enables interrupts, halts or waits (os.c).

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>

#include "host.h"
#include "plat.h"
#include "guards.h"

// 3D command port writes since the last ACWW_STATS line (register writes and GX FIFO DMA)
static unsigned long long sGxWrites;
static u64 sIoCount;  // register accesses

#define IO0 0x04000000u
#define IOB 0x04001000u  // engine B's display registers
#define IO1 0x04100000u
#define PAGE 0x1000u

// the register pages: 0x04000000 (engine A's display registers and the rest), 0x04001000 (engine B's display
// registers), 0x04100000 (the IPC receive FIFO, card data)
static u8 sIo0[PAGE] __attribute__((aligned(8)));
static u8 sIoB[PAGE] __attribute__((aligned(8)));
static u8 sIo1[PAGE] __attribute__((aligned(8)));
u8 *host_io(u32 a) { return a >= IO1 ? sIo1 + (a - IO1) : a >= IOB ? sIoB + (a - IOB) : sIo0 + (a - IO0); }
static int is_io(u32 a) { return (a >= IO0 && a < IOB + PAGE) || (a >= IO1 && a < IO1 + PAGE); }

// melon.cpp
void melon_write8(u32 addr, u8 v);
void melon_write16(u32 addr, u16 v);
void melon_write32(u32 addr, u32 v);
u32 melon_read32(u32 addr);
void melon_frame(void);
const u32 *melon_screen(int screen);
// vram.c
void host_vram_control(u32 addr, u8 value);
#define R16(a) (*(u16 *)host_io(a))
#define R32(a) (*(u32 *)host_io(a))

// ---- time
#define LINE_CYCLES 2130u
#define FRAME_LINES 263u
#define FRAME_CYCLES (LINE_CYCLES * FRAME_LINES)
static u64 sCycles;
u64 host_frame(void) { return sCycles / FRAME_CYCLES; }
u64 host_cycles(void) { return sCycles; }
u64 pxi7_next_due(void);
void pxi7_run_due(void);

// ---- interrupts
static u32 sIF;
void host_irq_raise(u32 m) { sIF |= m; }
void host_irq_ack(u32 m) { sIF &= ~m; }
int melon_gx_fifo_irq_level(void);
u32 host_irq_pending(void) {
    u32 lines = sIF | (melon_gx_fifo_irq_level() ? 1u << 21 : 0);  // the GX FIFO line is level-triggered
    return (R32(0x04000208) & 1) ? (R32(0x04000210) & lines) : 0;
}

// ---- timers (0x04000100 + 4n: counter/reload u16, control u16)
typedef struct { u64 start; u16 reload; int shift; int on; int irq; int cascade; } Timer;
static Timer sTm[4];
static const int kTmShift[4] = {0, 6, 8, 10};
static u32 tm_period(Timer *t) { return (0x10000u - t->reload) << t->shift; }
static u16 tm_counter(Timer *t) {
    if (!t->on) return t->reload;
    u64 ticks = (sCycles - t->start) >> t->shift;
    return (u16)(t->reload + ticks % (0x10000u - t->reload));
}
static u64 tm_next_overflow(Timer *t) {
    u64 p = tm_period(t), done = (sCycles - t->start) / p;
    return t->start + (done + 1) * p;
}

// ---- real time: one frame per 1/60 s unless ACWW_FAST is set
static int sFast = -1;
static u64 sNextFrame;  // host_plat_time_ns
static void host_pace_frame(void) {
    if (sFast < 0) sFast = getenv("ACWW_FAST") != 0;
    if (sFast) return;
    u64 now = host_plat_time_ns();
    if (sNextFrame == 0) sNextFrame = now;
    sNextFrame += 16715000;                                  // 59.83 Hz
    if (now > sNextFrame + 1000000000u) sNextFrame = now;  // far behind: don't try to catch up
    host_plat_sleep_until_ns(sNextFrame);
}

// ---- watchdog: a background thread that reports (only reports) when virtual time stops moving. The game waiting
// for an interrupt handler by spinning on memory, without a register access, a halt or a wait, would hang here (on
// the DS the interrupt arrives anyway). No such loop is known; a reported one wants an explicit wait at the site
// (OS_Halt, or a call that advances time and takes the interrupts). Nothing is done to the game's thread.
// ACWW_WATCHDOG=<ms>: the threshold in real time (default 2000), 0 turns it off.
static u32 sHeartbeat, sHeartbeatFrame;  // the low word of the cycle counter and the frame (relaxed atomics)
static void watchdog(void *arg) {
    u32 limit = (u32)(uintptr_t)arg, still = 0, last = 0;
    int reported = 0;
    for (;;) {
        host_plat_sleep_ms(100);
        u32 hb = __atomic_load_n(&sHeartbeat, __ATOMIC_RELAXED);
        if (hb != last) { last = hb; still = 0; reported = 0; continue; }
        still += 100;
        if (still >= limit && !reported) {
            reported = 1;
            fprintf(stderr, "host: watchdog: virtual time hasn't moved for %u ms (frame %u): the game spins without a "
                    "register access or a wait (break in with a debugger; SIGINT lists the threads)\n", still,
                    __atomic_load_n(&sHeartbeatFrame, __ATOMIC_RELAXED));
        }
    }
}
static void watchdog_start(void) {
    const char *e = getenv("ACWW_WATCHDOG");
    long ms = e ? strtol(e, 0, 10) : 2000;
    if (ms <= 0) return;
    if (!host_plat_thread_start(watchdog, (void *)(uintptr_t)ms)) fprintf(stderr, "host: no watchdog thread\n");
}

// ---- screenshots: ACWW_SHOT="frame:path.ppm;..." (both screens, 256x384)
static void host_screenshot(void) {
    static const char *spec;
    if (!spec) spec = getenv("ACWW_SHOT") ? getenv("ACWW_SHOT") : "";
    u32 f = (u32)host_frame();
    for (const char *p = spec; *p;) {
        unsigned fr; char path[512];
        if (sscanf(p, "%u:%511[^;]", &fr, path) == 2 && fr == f) {
            FILE *o = fopen(path, "wb");
            if (o) {
                fprintf(o, "P6\n256 384\n255\n");
                for (int s = 0; s < 2; s++) {
                    const u32 *px = melon_screen(s);
                    for (int i = 0; i < 256 * 192; i++) { u8 rgb[3] = {px[i] >> 16, px[i] >> 8, px[i]}; fwrite(rgb, 1, 3, o); }
                }
                fclose(o);
            }
        }
        p = strchr(p, ';');
        if (!p) break;
        p++;
    }
}

u32 host_irq_state(void);
// ---- events
static u64 sNextVblank = 192u * LINE_CYCLES;
static void run_events(void);
void host_advance_to_next_event(void) {
    u64 next = sNextVblank;
    if (pxi7_next_due() < next) next = pxi7_next_due();
    extern u64 snd7_next_due(void);
    if (snd7_next_due() < next) next = snd7_next_due();
    for (int i = 0; i < 4; i++) {
        if (sTm[i].on && sTm[i].irq && !sTm[i].cascade) {
            u64 o = tm_next_overflow(&sTm[i]);
            if (o < next) next = o;
        }
    }
    if (next > sCycles) sCycles = next;
    run_events();
}
static u64 sLastTimerCheck[4];
static void dma_on_vblank(void);
static int sInEvents;
static void run_events_body(void);
static void run_events(void) {
    if (sInEvents) return;  // (a register access from inside the event handling)
    sInEvents = 1;
    run_events_body();
    __atomic_store_n(&sHeartbeat, (u32)sCycles, __ATOMIC_RELAXED);
    sInEvents = 0;
}
void snd7_run(u64 now);
static void run_events_body(void) {
    snd7_run(sCycles);
    pxi7_run_due();
    while (sCycles >= sNextVblank) {
        static int watchdogOn;
        if (!watchdogOn) { watchdogOn = 1; watchdog_start(); }
        __atomic_store_n(&sHeartbeatFrame, (u32)host_frame(), __ATOMIC_RELAXED);
        u16 st = R16(0x04000004);
        if (st & 8) host_irq_raise(1);    // VBlank
        if (st & 16) host_irq_raise(2);   // HBlank (once per frame: the per-line effects aren't emulated)
        dma_on_vblank();
        melon_frame();
        extern void frontend_frame(void);
        frontend_frame();
        extern void host_heap_check(void);
        host_heap_check();
        host_guards_frame();  // ACWW_GUARDS (the guard variant)
        host_screenshot();
        {   // ACWW_POSLOG=<n>: the local player's position (fx32 x y z, in units of 1/4096) every n frames - for
            // writing input scripts that walk somewhere
            static long every = -2;
            if (every == -2) every = getenv("ACWW_POSLOG") ? strtol(getenv("ACWW_POSLOG"), 0, 10) : 0;
            if (every > 0 && host_frame() % (u64)every == 0) {
                extern struct VecFx32 *PlayerActor_GetBodyPos(u32 idx);
                const s32 *p = (const s32 *)PlayerActor_GetBodyPos(4);
                if (p) fprintf(stderr, "pos %llu %.2f %.2f %.2f\n", (unsigned long long)host_frame(), p[0] / 4096.0,
                               p[1] / 4096.0, p[2] / 4096.0);
            }
        }
        {   // ACWW_EXIT_FRAME=<n>: end the run after frame n (sound file closed as on an interrupt) - test runs
            // stop once they have what they compare instead of running out a timeout
            static long exitAt = -2;
            if (exitAt == -2) exitAt = getenv("ACWW_EXIT_FRAME") ? strtol(getenv("ACWW_EXIT_FRAME"), 0, 10) : -1;
            if (exitAt >= 0 && (long)host_frame() >= exitAt) {
                extern void snd7_output_close(void);
                snd7_output_close();
                extern void frontend_shutdown(void);
                frontend_shutdown();
                host_exit_dumps();  // (_exit runs no atexit handlers)
                fprintf(stderr, "host: exit at frame %llu (ACWW_EXIT_FRAME)\n", (unsigned long long)host_frame());
                _exit(0);
            }
        }
        {   // ACWW_RAMHASH=<file>: "frame hash" of main RAM (0x02000000, 4 MB: the game's data and heaps on 32-bit
            // hosts) every frame - two runs' first differing frame; ACWW_RAMDUMP=<frame>:<file>: main RAM at a frame
            // (ACWW_RAMDUMP="f1,f2,...:prefix": prefix-<frame>.bin at each frame)
            static FILE *hf; static int hinit; static const char *ramList, *ramTo;
            if (!hinit) {
                hinit = 1;
                if (getenv("ACWW_RAMHASH")) hf = fopen(getenv("ACWW_RAMHASH"), "w");
                ramList = getenv("ACWW_RAMDUMP");
                ramTo = ramList && strchr(ramList, ':') ? strchr(ramList, ':') + 1 : 0;
            }
            if (hf) {
                const u64 *p = (const u64 *)0x02000000;
                u64 h = 0x9e3779b97f4a7c15ull;
                for (u32 i = 0; i < 0x400000 / 8; i++) h = (h ^ p[i]) * 0x100000001b3ull;
                fprintf(hf, "%llu %016llx\n", (unsigned long long)host_frame(), (unsigned long long)h);
                fflush(hf);
            }
            if (ramTo) {
                for (const char *q = ramList; q && q < ramTo; ) {
                    char *end;
                    long at = strtol(q, &end, 10);
                    if (end == q) break;
                    if ((long)host_frame() == at) {
                        char name[512];
                        snprintf(name, sizeof name, "%s-%ld.bin", ramTo, at);
                        FILE *df = fopen(name, "wb");
                        if (df) { fwrite((u8 *)0x02000000, 1, 0x400000, df); fclose(df); }
                    }
                    q = end + (*end == ',');
                }
            }
        }
        {   // ACWW_VRAMDUMP=<frame>:<file>: the 9 VRAM banks, palettes (0x800), OAM (0x800), I/O 0x04000000-0x04001100
            static long dumpAt = -2; static const char *dumpTo;
            if (dumpAt == -2) {
                const char *e = getenv("ACWW_VRAMDUMP");
                dumpAt = e ? strtol(e, 0, 10) : -1;
                dumpTo = e && strchr(e, ':') ? strchr(e, ':') + 1 : 0;
            }
            if (dumpAt >= 0 && dumpTo && (long)host_frame() == dumpAt) {
                extern u8 *host_vram_bank(int i);
                extern u32 host_vram_bank_size(int i);
                FILE *df = fopen(dumpTo, "wb");
                if (df) {
                    for (int b = 0; b < 9; b++) fwrite(host_vram_bank(b), 1, host_vram_bank_size(b), df);
                    fwrite((u8 *)0x05000000, 1, 0x800, df);
                    fwrite((u8 *)0x07000000, 1, 0x800, df);
                    for (u32 w = 0x04000000; w < 0x04001100; w += 4) { u32 v = R32(w); fwrite(&v, 4, 1, df); }  // display I/O
                    fclose(df);
                }
            }
        }
        static int statsEvery = -1;  // ACWW_STATS=<frames> (1: every 300)
        if (statsEvery < 0) statsEvery = getenv("ACWW_STATS") ? (atoi(getenv("ACWW_STATS")) > 1 ? atoi(getenv("ACWW_STATS")) : 300) : 0;
        if (statsEvery && host_frame() % statsEvery == 0) {
            extern u8 *host_vram_bank(int i);
            extern u32 host_vram_bank_size(int i);
            int pal = 0; for (int i = 0; i < 0x800; i++) pal += ((u8 *)0x05000000)[i] != 0;
            fprintf(stderr, "stats: frame %llu dispcnt %08x/%08x bright %04x/%04x pal %d banks", (unsigned long long)host_frame(),
                    R32(0x04000000), R32(0x04001000), R16(0x0400006c), R16(0x0400106c), pal);
            for (int b = 0; b < 9; b++) { int nz = 0; u8 *p = host_vram_bank(b); for (u32 i = 0; i < host_vram_bank_size(b); i++) nz += p[i] != 0; fprintf(stderr, " %d", nz); }
            fprintf(stderr, " game bld %08x %08x/%08x %08x bg %08x %08x", R32(0x04000050), R32(0x04000054), R32(0x04001050), R32(0x04001054), R32(0x04000008), R32(0x0400000c));
            extern u32 gScreenTransition[];
            fprintf(stderr, " transition");
            for (int i = 0; i < 12; i++) fprintf(stderr, " %x", gScreenTransition[i]);
            extern void melon_debug(void);
            melon_debug();
            fprintf(stderr, " gx %llu", sGxWrites);
            sGxWrites = 0;
            { static unsigned long long lastIo; fprintf(stderr, " io %llu", (unsigned long long)sIoCount - lastIo); lastIo = sIoCount; }
            fprintf(stderr, " vramcnt %08x %08x ime %x ie %08x if %08x cpu %x\n", R32(0x04000240), R32(0x04000244), R32(0x04000208), R32(0x04000210), sIF, host_irq_state());
        }
        if (getenv("ACWW_FPS") && host_frame() % 120 == 0) {  // frames per second of real time, over the last 120
            static u64 last;
            u64 now = host_plat_time_ns();
            if (last) fprintf(stderr, "fps: frame %llu %.1f\n", (unsigned long long)host_frame(), 120 / ((double)(now - last) * 1e-9));
            last = now;
        }
        host_pace_frame();
        extern void pxi7_vblank(void);
        pxi7_vblank();
        sNextVblank += FRAME_CYCLES;
    }
    for (int i = 0; i < 4; i++) {
        Timer *t = &sTm[i];
        if (!t->on || t->cascade) continue;
        u64 p = tm_period(t);
        u64 before = (sLastTimerCheck[i] > t->start ? sLastTimerCheck[i] - t->start : 0) / p;
        u64 now = (sCycles - t->start) / p;
        if (now > before && t->irq) host_irq_raise(1u << (3 + i));
        sLastTimerCheck[i] = sCycles;
    }
}

// ---- display status
static void update_display(void) {
    u32 line = (u32)(sCycles % FRAME_CYCLES) / LINE_CYCLES, dot = (u32)(sCycles % LINE_CYCLES);
    u16 st = R16(0x04000004) & ~7u;
    if (line >= 192) st |= 1;
    if (dot >= 1606) st |= 2;
    if (line == ((R16(0x04000004) >> 8) | ((R16(0x04000004) & 0x80) << 1))) st |= 4;
    R16(0x04000004) = st;
    R16(0x04000006) = (u16)line;
}

// ---- divider and square root
static void divide(void) {
    u16 cnt = R16(0x04000280);
    int64_t n = (cnt & 3) == 0 ? (int32_t)R32(0x04000290) : *(int64_t *)host_io(0x04000290);
    int64_t d = (cnt & 3) == 2 ? *(int64_t *)host_io(0x04000298) : (int32_t)R32(0x04000298);
    int64_t q, r;
    if (d == 0) { q = n < 0 ? 1 : -1; r = n; R16(0x04000280) = cnt | 0x4000; }
    else { q = n / d; r = n % d; R16(0x04000280) = cnt & ~0x4000; }
    *(int64_t *)host_io(0x040002a0) = q;
    *(int64_t *)host_io(0x040002a8) = r;
}
static void square_root(void) {
    u64 v = (R16(0x040002b0) & 1) ? *(u64 *)host_io(0x040002b8) : R32(0x040002b8);
    u64 r = 0, bit = 1ull << 62;
    while (bit > v) bit >>= 2;
    while (bit) { if (v >= r + bit) { v -= r + bit; r = (r >> 1) + bit; } else r >>= 1; bit >>= 2; }
    R32(0x040002b4) = (u32)r;
}

static void io_write(u32 a, u32 old);

// ---- DMA (0x040000b0 + 12n: source, destination, control)
// The registers are 32 bits; the functions that set them (MIi_DmaSetParams ...: include/nitro/dma_host.h) give the
// whole addresses first. They are used while the registers hold their low words (a register written otherwise - a
// register address, a DS constant - is taken as it is).
static uintptr_t sDmaSrc[4], sDmaDst[4];
void HostDma_Addresses(unsigned int ch, uintptr_t src, uintptr_t dst) {
    if (ch < 4) { sDmaSrc[ch] = src; sDmaDst[ch] = dst; }
}
static uintptr_t dma_address(u32 reg, uintptr_t full) { return (u32)full == reg ? full : reg; }
static int dma_is_io(uintptr_t a) { return a <= 0xffffffffu && is_io((u32)a); }
void gx_fifo_write(u32 addr, u32 value);
static void dma_run(int ch) {
    u32 base = 0x040000b0 + ch * 12, cnt = R32(base + 8);
    uintptr_t src = dma_address(R32(base), sDmaSrc[ch]), dst = dma_address(R32(base + 4), sDmaDst[ch]);
    u32 n = cnt & 0x1fffff, w = (cnt >> 26 & 1) ? 4 : 2;
    int dc = cnt >> 21 & 3, sc = cnt >> 23 & 3;
    if (n == 0) n = 0x200000;
    if (src < 0x01ff8000 || dst < 0x01ff8000) {
        fprintf(stderr, "host: DMA%d from %08lx to %08lx, control %08x: bad address\n", ch, (unsigned long)src,
                (unsigned long)dst, cnt);
        R32(base + 8) = cnt & ~0x80000000u;
        return;
    }
    for (u32 i = 0; i < n; i++) {
        u32 v;
        if (src == IO1 + 0x10) v = card_read_data();
        else if (dma_is_io(src)) v = w == 4 ? R32((u32)src) : R16((u32)src);
        else v = w == 4 ? *(volatile u32 *)src : *(volatile u16 *)src;
        if (dma_is_io(dst)) {
            // as a CPU write would be (the display registers go to the renderer)
            u32 old = R32((u32)dst & ~3u);
            if (w == 4) R32((u32)dst) = v; else R16((u32)dst) = (u16)v;
            io_write((u32)dst, old);
        } else if (w == 4) *(volatile u32 *)dst = v;
        else *(volatile u16 *)dst = (u16)v;
        if (sc == 0) src += w; else if (sc == 1) src -= w;
        if (dc == 0 || dc == 3) dst += w; else if (dc == 1) dst -= w;
    }
    if (dc != 3) { R32(base + 4) = (u32)dst; sDmaDst[ch] = dst; }
    R32(base) = (u32)src;
    sDmaSrc[ch] = src;
    if (!(cnt >> 25 & 1) || ((cnt >> 27 & 7) == 0)) R32(base + 8) = cnt & ~0x80000000u;
    if (cnt >> 30 & 1) host_irq_raise(1u << (8 + ch));
}
static void dma_control_written(int ch) {
    u32 cnt = R32(0x040000b0 + ch * 12 + 8);
    if (!(cnt >> 31)) return;
    u32 mode = cnt >> 27 & 7;
    if (mode == 0 || mode == 7) dma_run(ch);  // immediate; GX FIFO: the FIFO never fills here
}
static void dma_on_vblank(void) {
    for (int ch = 0; ch < 4; ch++) {
        u32 cnt = R32(0x040000b0 + ch * 12 + 8);
        if (cnt >> 31 && ((cnt >> 27 & 7) == 1 || (cnt >> 27 & 7) == 2)) dma_run(ch);
    }
}
void host_card_dma(void) {
    for (int ch = 0; ch < 4; ch++) {
        u32 cnt = R32(0x040000b0 + ch * 12 + 8);
        if (cnt >> 31 && (cnt >> 27 & 7) == 5) dma_run(ch);
    }
}

// ---- the 3D engine: for now a sink; GXSTAT says idle with an empty FIFO
void gx_fifo_write(u32 addr, u32 value) { sGxWrites++; melon_write32(addr, value); }

// ---- register reads and writes
static void io_read(u32 a) {
    // a register read again and again is a polling loop: let time pass faster there (each read costs a trap)
    static u32 last, repeat;
    repeat = a == last ? repeat + 1 : 0;
    last = a;
    sCycles += repeat > 4 ? 4096 : 64;
    run_events();
    u32 w = a & ~3u;
    if (w == 0x04000004) update_display();
    else if (w >= 0x04000100 && w < 0x04000110) {
        int i = (w - 0x04000100) / 4;
        R16(w) = tm_counter(&sTm[i]);
    } else if (w == 0x04000214) R32(w) = sIF;
    else if ((w >= 0x04000600 && w < 0x040006a4) || w == 0x04000320) R32(w) = melon_read32(w);  // 3D status, results
    else if (w == 0x04000184 || w == 0x04000180 || w == IO1) {
        extern void pxi7_prepare_read(u32 a);
        pxi7_prepare_read(w);
    } else if (w == 0x040001a4) {
        // ROMCTRL: the transfer state is kept up to date by card.c
    } else if (w == IO1 + 0x10) R32(w) = card_read_data();
}

// display registers for the renderer: the 3D command ports in full on every write, the others as changed halves
static void forward_display(u32 w, u32 old) {
    u32 v = R32(w);
    if ((w >= 0x04000400 && w < 0x04000600) || w == 0x04000600) { sGxWrites++; melon_write32(w, v); return; }
    if (w >= 0x04000240 && w < 0x0400024c) {
        for (int i = 0; i < 4; i++) {
            u8 b = v >> (8 * i), o = old >> (8 * i);
            if (b != o) { host_vram_control(w + i, b); melon_write8(w + i, b); }
        }
        return;
    }
    for (int h = 0; h < 2; h++) {
        u16 n = v >> (16 * h), o = old >> (16 * h);
        if (n != o) melon_write16(w + 2 * h, n);
    }
}
static int is_display(u32 w) {
    return (w < 0x04000070 && w != 0x04000004) || (w >= IOB && w < IOB + 0x70) || (w >= 0x04000240 && w < 0x0400024c) ||
           w == 0x04000304 || (w >= 0x04000320 && w < 0x040006a4);
}

static void io_write(u32 a, u32 old) {
    u32 w = a & ~3u;
    static long logw = -2;
    if (logw == -2) logw = getenv("ACWW_IOLOG") ? strtol(getenv("ACWW_IOLOG"), 0, 16) : -1;
    if ((long)w == logw) fprintf(stderr, "io: frame %llu [%08x] %08x -> %08x\n", (unsigned long long)host_frame(), w, old, R32(w));
    if (is_display(w)) { forward_display(w, old); return; }
    switch (w) {
    case 0x04000214: { u32 v = R32(w); sIF &= ~v; R32(w) = sIF; break; }
    case 0x040000b8: dma_control_written(0); break;
    case 0x040000c4: dma_control_written(1); break;
    case 0x040000d0: dma_control_written(2); break;
    case 0x040000dc: dma_control_written(3); break;
    case 0x04000100: case 0x04000104: case 0x04000108: case 0x0400010c: {
        // low half: reload value (reads give the counter); high half: control
        Timer *tm = &sTm[(w - 0x04000100) / 4];
        int i = (int)(tm - sTm);
        if ((a & 3) < 2) tm->reload = R16(w);
        u16 c = R16(w + 2);
        int on = c >> 7 & 1;
        if (on && !tm->on) { tm->start = sCycles; sLastTimerCheck[i] = sCycles; }
        tm->on = on; tm->irq = c >> 6 & 1; tm->shift = kTmShift[c & 3]; tm->cascade = i && (c >> 2 & 1);
        break;
    }
    case 0x04000180: pxi7_sync_written(R32(w)); break;
    case 0x04000184: break;  // FIFO control: pxi7.c reads it
    case 0x04000188: pxi7_receive(R32(w)); break;
    case 0x040001a4: card_control_written(R32(w)); break;
    case 0x04000280: case 0x04000290: case 0x04000294: case 0x04000298: case 0x0400029c: divide(); break;
    case 0x040002b0: case 0x040002b8: case 0x040002bc: square_root(); break;
    default: break;
    }
}

// ---- the game's register accesses (include/nitro/io_access.h)
// ACWW_IOHIST: which registers are accessed how often, and from where (acww_iohist.txt, written at exit, on SIGINT
// and at ACWW_EXIT_FRAME). The last 16 accesses are listed on SIGINT.
static int sIoHist = -1;
static struct { u32 addr, write, n; uintptr_t pc; } sHist[4096];
struct IoLog { u32 addr, write; uintptr_t pc; };
static struct IoLog sRing[16];
static u32 sRingPos;
static void io_hist(u32 a, uintptr_t pc, int write) {
    u32 h = (a * 2654435761u ^ (u32)pc * 40503u ^ (u32)(pc >> 16 >> 16) ^ (u32)write) & 4095;
    for (u32 i = 0; i < 4096; i++, h = (h + 1) & 4095) {
        if (sHist[h].n && (sHist[h].addr != a || sHist[h].pc != pc || sHist[h].write != (u32)write)) continue;
        sHist[h].addr = a; sHist[h].pc = pc; sHist[h].write = (u32)write; sHist[h].n++;
        return;
    }
}
static void io_hist_dump(void) {
    static int done;
    if (sIoHist <= 0 || done) return;
    done = 1;
    FILE *f = fopen("acww_iohist.txt", "w");
    if (!f) return;
    for (int i = 0; i < 4096; i++)
        if (sHist[i].n) fprintf(f, "%u %08x %08lx %c\n", sHist[i].n, sHist[i].addr, (unsigned long)sHist[i].pc, sHist[i].write ? 'w' : 'r');
    fclose(f);
}
void host_io_ring_dump(void) {
    fprintf(stderr, "host: %llu I/O accesses; last ones:\n", (unsigned long long)sIoCount);
    for (int i = 0; i < 16; i++) {
        struct IoLog *l = &sRing[(sRingPos + i) & 15];
        fprintf(stderr, "  %s %08x from %08lx\n", l->write ? "write" : "read ", l->addr, (unsigned long)l->pc);
    }
}
// the reports written at exit: atexit, ACWW_EXIT_FRAME (_exit), SIGINT (debug_posix.c)
void host_exit_dumps(void) {
    io_hist_dump();
    host_guards_exit();
    host_debug_exit_dumps();
}

static u32 io_load(u32 a, u32 size) {
    io_read(a);
    return size == 1 ? *host_io(a) : size == 2 ? *(u16 *)host_io(a) : *(u32 *)host_io(a);
}
static void io_store(u32 a, u32 size, u32 v) {
    u32 old = R32(a & ~3u);
    if (size == 1) *host_io(a) = (u8)v;
    else if (size == 2) *(u16 *)host_io(a) = (u16)v;
    else *(u32 *)host_io(a) = v;
    io_write(a, old);
}
// after each access: the interrupts that became due are taken
int host_irq_ready(void);
static inline void io_access_done(void) {
    if (host_irq_ready()) host_deliver_irqs();
}
// (the whole pointer-sized address: a host pointer above 4 GB whose low word looks like a register isn't one)
static void io_note(uintptr_t a, int write, void *caller) {
    if (a > 0xffffffffu || !is_io((u32)a)) {
        fprintf(stderr, "host: register access to %08lx (not an I/O register) from %p\n", (unsigned long)a, caller);
        host_fatal("bad register address");
    }
    sIoCount++;
    sRing[sRingPos++ & 15] = (struct IoLog){(u32)a, (u32)write, (uintptr_t)caller};
    if (sIoHist < 0) sIoHist = getenv("ACWW_IOHIST") != NULL;
    if (sIoHist) io_hist((u32)a, (uintptr_t)caller, write);
}
unsigned long long HostIo_Read(uintptr_t addr, unsigned int size) {
    io_note(addr, 0, __builtin_return_address(0));
    u32 a = (u32)addr;
    unsigned long long v = size == 8 ? io_load(a, 4) | (unsigned long long)io_load(a + 4, 4) << 32 : io_load(a, size);
    io_access_done();
    return v;
}
unsigned long long HostIo_Write(uintptr_t addr, unsigned int size, unsigned long long v) {
    io_note(addr, 1, __builtin_return_address(0));
    u32 a = (u32)addr;
    if (size == 8) {
        io_store(a, 4, (u32)v);
        io_store(a + 4, 4, (u32)(v >> 32));
    } else {
        io_store(a, size, (u32)v);
    }
    io_access_done();
    return v;
}

// ---- the memory map
static void map_fixed(u32 a, u32 n) {
    void *p = mmap((void *)(uintptr_t)a, n, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
    if (p != (void *)(uintptr_t)a) { fprintf(stderr, "host: can't map %08x\n", a); exit(1); }
}
// main RAM: a memfd mapped at 0x02000000 and mirrored up to 0x02ffffff, as on the DS (the system work area at
// 0x027ff000 is main RAM's last pages). The program's .gdata/.gbss (the game's variables) were placed at
// 0x02000000 by the loader: they are copied into the memfd before it replaces them.
extern char __stop_gdata[], __start_gbss[], __stop_gbss[];
static u8 *sMainRam;
u8 *host_main_ram(void) { return sMainRam; }
static void map_main_ram(void) {
    int fd = memfd_create("dsram", 0);
    if (fd < 0 || ftruncate(fd, 0x400000) < 0) host_fatal("main RAM memfd");
    sMainRam = mmap(0, 0x400000, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (sMainRam == MAP_FAILED) host_fatal("main RAM map");
    // the loaded pages: the one with the ELF headers and gdata from 0x02000000, gbss from 0x02040000
    u32 gdata_end = ((u32)(uintptr_t)__stop_gdata + 0xfff) & ~0xfffu;
    memcpy(sMainRam, (void *)0x02000000, gdata_end - 0x02000000);
    memcpy(sMainRam + ((u32)(uintptr_t)__start_gbss - 0x02000000), __start_gbss, __stop_gbss - __start_gbss);
    // DTCM (0x027e0000-0x027e3fff, the program's .dtcm) takes precedence over the mirror there, as on the DS
    static const struct { u32 at, n, off; } kMaps[] = {
        {0x02000000, 0x400000, 0}, {0x02400000, 0x3e0000, 0}, {0x027e4000, 0x1c000, 0x3e4000},
        {0x02800000, 0x400000, 0}, {0x02c00000, 0x400000, 0},
    };
    for (unsigned i = 0; i < sizeof kMaps / sizeof kMaps[0]; i++)
        if (mmap((void *)(uintptr_t)kMaps[i].at, kMaps[i].n, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_FIXED, fd,
                 kMaps[i].off) == MAP_FAILED)
            host_fatal("main RAM mirror");
}

// ---- ACWW_HIGHMEM=1 (x86-64 Linux): the low-4 GB poisoning harness (docs/portability.md 3.0). The root heap and
// the game's thread stacks go above 4 GB (main.c, os.c: at addresses whose low word is in poisoned space), and
// every range below 4 GB that isn't mapped when the game starts is reserved without access (as macOS's
// __PAGEZERO): only the DS mappings still in use (ITCM, main RAM and its mirrors, DTCM, WRAM, palette, VRAM, OAM),
// the program image and what the C library mapped before (its first brk heap) remain. A pointer cut to 32 bits
// then faults at a low address (or, sign-extended, at a non-canonical one), and the crash report (debug_posix.c)
// says where. A heap that would grow by brk can't: malloc falls back to mmap, above 4 GB.
int host_highmem(void) {
    static int on = -1;
    if (on < 0) {
#if defined(__x86_64__) && defined(__linux__)
        const char *e = getenv("ACWW_HIGHMEM");
        on = e && *e && strcmp(e, "0");
#else
        on = 0;
#endif
    }
    return on;
}

// an anonymous mapping of n bytes above 4 GB, from `hint` on (successive calls with the same hint walk upwards;
// MAP_FIXED_NOREPLACE: never over an existing mapping)
void *host_highmem_alloc(uintptr_t *hint, size_t n) {
    n = (n + 0xfff) & ~(size_t)0xfff;
    for (int i = 0; i < 4096; i++) {
        uintptr_t at = *hint;
        void *p = mmap((void *)at, n, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
        *hint += ((n + 0xfffff) & ~(size_t)0xfffff) + 0x100000;  // the next one further up, with a gap between
        if (p == (void *)at) return p;
        if (p != MAP_FAILED) munmap(p, n);
    }
    return 0;
}

static void highmem_poison(void) {
#if defined(__x86_64__) && defined(__linux__)
    static char maps[1 << 16];
    int fd = open("/proc/self/maps", O_RDONLY);
    if (fd < 0) host_fatal("ACWW_HIGHMEM: /proc/self/maps");
    size_t len = 0;
    for (ssize_t r; len < sizeof maps - 1 && (r = read(fd, maps + len, sizeof maps - 1 - len)) > 0;) len += (size_t)r;
    close(fd);
    maps[len] = 0;
    // the mappings in address order (the file lists them so); reserve every gap below 4 GB
    uintptr_t at = 0x10000;  // (vm.mmap_min_addr: nothing can be mapped lower anyway)
    const uintptr_t top = 0x100000000ull;
    u64 reserved = 0;
    int ranges = 0;
    for (char *l = maps; at < top;) {
        unsigned long lo, hi;
        uintptr_t end = top;
        int last = sscanf(l, "%lx-%lx", &lo, &hi) != 2;
        if (!last) end = lo < top ? lo : top;
        if (end > at) {
            if (mmap((void *)at, end - at, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE | MAP_FIXED_NOREPLACE,
                     -1, 0) != (void *)at)
                fprintf(stderr, "host: ACWW_HIGHMEM: can't reserve %08lx-%08lx\n", (unsigned long)at, (unsigned long)end);
            else { reserved += end - at; ranges++; }
        }
        if (last) break;
        if (hi > at) at = hi;
        char *nl = strchr(l, '\n');
        l = nl ? nl + 1 : l + strlen(l);
    }
    fprintf(stderr, "host: ACWW_HIGHMEM: %d ranges below 4 GB reserved (%llu MB of %llu MB)\n", ranges,
            (unsigned long long)(reserved >> 20), (unsigned long long)((top - 0x10000) >> 20));
#endif
}

// after every fixed mapping is in place (main.c's early_init: the DS memory and the VRAM windows)
void host_highmem_init(void) {
    if (host_highmem()) highmem_poison();
}

void host_map_memory(void) {
    map_fixed(0x01ff8000, 0x8000);    // ITCM
    map_main_ram();                   // main RAM, 4 MB at 0x02000000 and its mirrors (the game's data is in it)
    // DTCM (0x027e0000): the program's .dtcm section (the DTCM module's variables), mapped by the loader
    map_fixed(0x03000000, 0x10000);   // shared WRAM
    map_fixed(0x05000000, 0x800);     // palettes
    map_fixed(0x06000000, 0x900000);  // VRAM: vram.c maps the banks into it
    map_fixed(0x07000000, 0x800);     // OAM
    host_debug_init();
    R16(0x04000130) = 0x3ff;
    if (getenv("ACWW_IOHIST")) atexit(io_hist_dump);
}
