// Host build: the DS memory map and the ARM9 I/O registers.
//
// The game's memory is mapped at the DS addresses, so hardcoded addresses keep working. The I/O pages
// (0x04000000, 0x04100000) are mapped twice from one memfd: the game's view has no access, the runtime's view is
// writable. An access to the game's view faults. The plain moves (nearly all accesses) are carried out by the
// handler, which decodes the instruction (emulate_access); for anything else it prepares the register for a
// read, opens the page, single-steps the instruction (trap flag) and, after it, handles the written value and
// closes the page again. Every write is seen, even of an unchanged value.
//
// Time is virtual: a cycle counter (ARM9 bus clock) that advances a little on every I/O read (so polling loops
// progress) and jumps to the next event when the game halts or waits.

#define _GNU_SOURCE
#include <execinfo.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <sys/ucontext.h>
#include <unistd.h>

#include "host.h"

// 3D command port writes since the last ACWW_STATS line (register writes and GX FIFO DMA)
static unsigned long long sGxWrites;
static u64 sIoCount;  // trapped and called register accesses

// the interrupted context's registers (signal handlers)
#if defined(__x86_64__)
#define R_PC REG_RIP
#define R_SP REG_RSP
#define R_BP REG_RBP
#define R_AX REG_RAX
#define R_DX REG_RDX
#else
#define R_PC REG_EIP
#define R_SP REG_ESP
#define R_BP REG_EBP
#define R_AX REG_EAX
#define R_DX REG_EDX
#endif

#define IO0 0x04000000u
#define IOB 0x04001000u  // engine B's display registers
#define IO1 0x04100000u
#define PAGE 0x1000u

static u8 *sIo0, *sIoB, *sIo1;  // the runtime's views
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
#include <errno.h>
#include <time.h>
static int sFast = -1;
static struct timespec sNextFrame;
static void host_pace_frame(void) {
    if (sFast < 0) sFast = getenv("ACWW_FAST") != 0;
    if (sFast) return;
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    if (sNextFrame.tv_sec == 0) sNextFrame = now;
    sNextFrame.tv_nsec += 16715000;  // 59.83 Hz
    if (sNextFrame.tv_nsec >= 1000000000) { sNextFrame.tv_nsec -= 1000000000; sNextFrame.tv_sec++; }
    if (now.tv_sec > sNextFrame.tv_sec + 1) sNextFrame = now;  // far behind: don't try to catch up
    while (clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &sNextFrame, 0) == EINTR) {}  // SIGALRM interrupts it
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
    if (sInEvents) return;  // a signal arrived while events were being handled
    sInEvents = 1;
    run_events_body();
    sInEvents = 0;
}
void snd7_run(u64 now);
static void run_events_body(void) {
    snd7_run(sCycles);
    pxi7_run_due();
    while (sCycles >= sNextVblank) {
        u16 st = R16(0x04000004);
        if (st & 8) host_irq_raise(1);    // VBlank
        if (st & 16) host_irq_raise(2);   // HBlank (once per frame: the per-line effects aren't emulated)
        dma_on_vblank();
        melon_frame();
        extern void frontend_frame(void);
        frontend_frame();
        extern void host_heap_check(void);
        host_heap_check();
        host_screenshot();
        {   // ACWW_EXIT_FRAME=<n>: end the run after frame n (sound file closed as on an interrupt) - test runs
            // stop once they have what they compare instead of running out a timeout
            static long exitAt = -2;
            if (exitAt == -2) exitAt = getenv("ACWW_EXIT_FRAME") ? strtol(getenv("ACWW_EXIT_FRAME"), 0, 10) : -1;
            if (exitAt >= 0 && (long)host_frame() >= exitAt) {
                extern void snd7_output_close(void);
                snd7_output_close();
                extern void frontend_shutdown(void);
                frontend_shutdown();
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
            static struct timespec last;
            struct timespec now;
            clock_gettime(CLOCK_MONOTONIC, &now);
            double dt = (double)(now.tv_sec - last.tv_sec) + (double)(now.tv_nsec - last.tv_nsec) * 1e-9;
            if (last.tv_sec) fprintf(stderr, "fps: frame %llu %.1f\n", (unsigned long long)host_frame(), 120 / dt);
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
void gx_fifo_write(u32 addr, u32 value);
static void dma_run(int ch) {
    u32 base = 0x040000b0 + ch * 12, cnt = R32(base + 8);
    u32 src = R32(base), dst = R32(base + 4), n = cnt & 0x1fffff, w = (cnt >> 26 & 1) ? 4 : 2;
    int dc = cnt >> 21 & 3, sc = cnt >> 23 & 3;
    if (n == 0) n = 0x200000;
    if (src < 0x01ff8000 || dst < 0x01ff8000) {
        fprintf(stderr, "host: DMA%d from %08x to %08x, control %08x: bad address\n", ch, src, dst, cnt);
        R32(base + 8) = cnt & ~0x80000000u;
        return;
    }
    for (u32 i = 0; i < n; i++) {
        u32 v;
        if (src == IO1 + 0x10) v = card_read_data();
        else if (is_io(src)) v = w == 4 ? R32(src) : R16(src);
        else v = w == 4 ? *(volatile u32 *)(uintptr_t)src : *(volatile u16 *)(uintptr_t)src;
        if (is_io(dst)) {
            // as a CPU write would be (the display registers go to the renderer)
            u32 old = R32(dst & ~3u);
            if (w == 4) R32(dst) = v; else R16(dst) = (u16)v;
            io_write(dst, old);
        } else if (w == 4) *(volatile u32 *)(uintptr_t)dst = v;
        else *(volatile u16 *)(uintptr_t)dst = (u16)v;
        if (sc == 0) src += w; else if (sc == 1) src -= w;
        if (dc == 0 || dc == 3) dst += w; else if (dc == 1) dst -= w;
    }
    if (dc != 3) R32(base + 4) = dst;
    R32(base) = src;
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

static void host_irq_inject(ucontext_t *uc);

// ---- the fault handler
static u32 sFaultAddr;
static int sFaultWrite;
static u32 sFaultOld;
static void *page_of(u32 a) { return (void *)(uintptr_t)(a & ~(PAGE - 1)); }

struct IoLog { u32 addr, eip, write; };
static struct IoLog sRing[16];
static u32 sRingPos;

// frame-pointer walk, staying within 1 MB above the stack pointer (host stacks are 512 KB, the main one is the
// process stack)
static void host_backtrace(uintptr_t *bp, uintptr_t sp) {
    for (int i = 0; i < 24; i++) {
        if ((uintptr_t)bp < sp || (uintptr_t)bp > sp + 0x100000 || ((uintptr_t)bp & (sizeof *bp - 1))) break;
        fprintf(stderr, "  from %08lx\n", (unsigned long)bp[1]);
        sp = (uintptr_t)bp;
        bp = (uintptr_t *)bp[0];
    }
}

// ---- data write-watch for debugging: ACWW_WATCH=addr:len protects the page and logs the writes in the range
static u32 sWatchLo, sWatchHi, sWatchPage, sWatchStep, sWatchEip;
static u8 sWatchOld[64];
static void watch_init(void) {
    const char *w = getenv("ACWW_WATCH");
    if (!w) return;
    unsigned a, n;
    if (sscanf(w, "%x:%x", &a, &n) != 2) return;
    sWatchLo = a; sWatchHi = a + (n > 64 ? 64 : n); sWatchPage = a & ~(PAGE - 1);
    mprotect((void *)(uintptr_t)sWatchPage, PAGE, PROT_READ);
}

static int sNoEmulate;  // ACWW_NOEMULATE: single-step every access (for comparisons)
static void host_irq_inject(ucontext_t *uc);

// ACWW_IOHIST: which registers are accessed how often, and from where (printed at exit)
static int sIoHist;
static struct { u32 addr, eip, write, n; } sHist[4096];
static void io_hist(u32 a, u32 eip, int write) {
    u32 h = (a * 2654435761u ^ eip * 40503u ^ (u32)write) & 4095;
    for (u32 i = 0; i < 4096; i++, h = (h + 1) & 4095) {
        if (sHist[h].n && (sHist[h].addr != a || sHist[h].eip != eip || sHist[h].write != (u32)write)) continue;
        sHist[h].addr = a; sHist[h].eip = eip; sHist[h].write = (u32)write; sHist[h].n++;
        return;
    }
}
static void io_hist_dump(void) {
    FILE *f = fopen("acww_iohist.txt", "w");
    if (!f) return;
    for (int i = 0; i < 4096; i++)
        if (sHist[i].n) fprintf(f, "%u %08x %08x %c\n", sHist[i].n, sHist[i].addr, sHist[i].eip, sHist[i].write ? 'w' : 'r');
    fclose(f);
}

// The common accesses are carried out here instead of single-stepped: the plain moves GCC emits for volatile
// register accesses (mov of 8/16/32 bits to or from a register, of an immediate, the moffs forms, movzx/movsx).
// The fault gives the address; the instruction gives the size, the direction and the register. Returns the
// instruction's length, or 0 for anything else (then: single step).
// ModRM + SIB + displacement of a memory operand (also RIP-relative on x86-64: the same length)
static u32 modrm_len(const u8 *p) {  // ModRM + SIB + displacement, for a memory operand
    u32 mod = p[0] >> 6, rm = p[0] & 7, n = 1;
    if (mod == 3) return 0;
    if (rm == 4) {
        n++;
        if (mod == 0 && (p[1] & 7) == 5) n += 4;
    } else if (mod == 0 && rm == 5) {
        n += 4;
    }
    return n + (mod == 1 ? 1 : mod == 2 ? 4 : 0);
}
#if defined(__i386__)
static const int kGreg[8] = {REG_EAX, REG_ECX, REG_EDX, REG_EBX, REG_ESP, REG_EBP, REG_ESI, REG_EDI};
static u32 get_reg(ucontext_t *uc, u32 r, u32 size) {
    if (size == 1) return (u32)uc->uc_mcontext.gregs[kGreg[r & 3]] >> (r & 4 ? 8 : 0) & 0xff;
    return (u32)uc->uc_mcontext.gregs[kGreg[r]] & (size == 2 ? 0xffffu : ~0u);
}
static void set_reg(ucontext_t *uc, u32 r, u32 size, u32 v) {
    greg_t *g = &uc->uc_mcontext.gregs[kGreg[size == 1 ? r & 3 : r]];
    if (size == 4) *g = (greg_t)v;
    else if (size == 2) *g = (greg_t)(((u32)*g & 0xffff0000u) | (v & 0xffff));
    else if (r & 4) *g = (greg_t)(((u32)*g & 0xffff00ffu) | (v & 0xff) << 8);
    else *g = (greg_t)(((u32)*g & 0xffffff00u) | (v & 0xff));
}
#endif
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
// the game's register accesses (include/nitro/io_access.h): as a trapped access would be handled, then the
// interrupts that became due are taken, as host_irq_inject does after a trapped access
int host_irq_ready(void);
static inline void io_access_done(void) {
    if (host_irq_ready()) host_deliver_irqs();
}
#define io_check_addr(a) io_check_addr_(a, __builtin_return_address(0))
static void io_check_addr_(u32 a, void *caller) {
    if (!is_io(a)) {
        fprintf(stderr, "host: register access to %08x (not an I/O register) from %p\n", a, caller);
        host_fatal("bad register address");
    }
}
unsigned long long HostIo_Read(unsigned int a, unsigned int size) {
    io_check_addr(a);
    sIoCount++;
    unsigned long long v = size == 8 ? io_load(a, 4) | (unsigned long long)io_load(a + 4, 4) << 32 : io_load(a, size);
    io_access_done();
    return v;
}
unsigned long long HostIo_Write(unsigned int a, unsigned int size, unsigned long long v) {
    io_check_addr(a);
    sIoCount++;
    if (size == 8) {
        io_store(a, 4, (u32)v);
        io_store(a + 4, 4, (u32)(v >> 32));
    } else {
        io_store(a, size, (u32)v);
    }
    io_access_done();
    return v;
}

#if defined(__i386__)
static u32 emulate_access(ucontext_t *uc, u32 a) {
    const u8 *p = (const u8 *)(uintptr_t)uc->uc_mcontext.gregs[R_PC], *start = p;
    u32 osize = 4, n;
    if (*p == 0x66) { osize = 2; p++; }
    switch (*p) {
    case 0x88: case 0x89: case 0x8a: case 0x8b: {  // mov m, r / mov r, m
        u32 size = *p & 1 ? osize : 1, r = p[1] >> 3 & 7;
        if (!(n = modrm_len(p + 1))) return 0;
        if (*p & 2) set_reg(uc, r, size, io_load(a, size));
        else io_store(a, size, get_reg(uc, r, size));
        return (u32)(p + 1 + n - start);
    }
    case 0xc6: case 0xc7: {  // mov m, imm
        u32 size = *p & 1 ? osize : 1;
        if ((p[1] >> 3 & 7) != 0 || !(n = modrm_len(p + 1))) return 0;
        const u8 *imm = p + 1 + n;
        io_store(a, size, size == 1 ? imm[0] : size == 2 ? *(const u16 *)imm : *(const u32 *)imm);
        return (u32)(imm + size - start);
    }
    case 0xa0: case 0xa1: case 0xa2: case 0xa3: {  // mov al/ax/eax <-> moffs
        u32 size = *p & 1 ? osize : 1;
        if (*p & 2) io_store(a, size, get_reg(uc, 0, size));
        else set_reg(uc, 0, size, io_load(a, size));
        return (u32)(p + 5 - start);
    }
    case 0x0f: {  // movzx / movsx r32, m8 / m16
        u8 op = p[1];
        if (osize != 4 || (op != 0xb6 && op != 0xb7 && op != 0xbe && op != 0xbf)) return 0;
        if (!(n = modrm_len(p + 2))) return 0;
        u32 size = op & 1 ? 2 : 1, v = io_load(a, size);
        if (op & 8) v = size == 1 ? (u32)(s32)(int8_t)v : (u32)(s32)(int16_t)v;
        set_reg(uc, p[2] >> 3 & 7, 4, v);
        return (u32)(p + 2 + n - start);
    }
    default:
        return 0;
    }
}
#else
// (the decoding above is for i386; elsewhere every missed access is single-stepped)
static u32 emulate_access(ucontext_t *uc, u32 a) { (void)uc; (void)a; return 0; }
#endif

static void on_segv(int sig, siginfo_t *si, void *ctx) {
    (void)sig;
    ucontext_t *uc = ctx;
    u32 a = (u32)(uintptr_t)si->si_addr;
    if (sWatchPage && (a & ~(PAGE - 1)) == sWatchPage) {
        memcpy(sWatchOld, (void *)(uintptr_t)sWatchLo, sWatchHi - sWatchLo);
        sWatchEip = (u32)uc->uc_mcontext.gregs[R_PC];
        sWatchStep = 1;
        mprotect((void *)(uintptr_t)sWatchPage, PAGE, PROT_READ | PROT_WRITE);
        uc->uc_mcontext.gregs[REG_EFL] |= 0x100;
        sigaddset(&uc->uc_sigmask, SIGALRM);
        return;
    }
    if (!is_io(a)) {
        fprintf(stderr, "host: segfault at %08x, eip %08x, ebp %08x\n", a, (u32)uc->uc_mcontext.gregs[R_PC],
                (u32)uc->uc_mcontext.gregs[R_BP]);
        fprintf(stderr, "  [sp] %08lx\n", (unsigned long)*(uintptr_t *)uc->uc_mcontext.gregs[R_SP]);
        host_backtrace((uintptr_t *)uc->uc_mcontext.gregs[R_BP], (uintptr_t)uc->uc_mcontext.gregs[R_SP]);
        extern void frontend_shutdown(void);
        frontend_shutdown();
        _exit(4);
        signal(SIGSEGV, SIG_DFL);
        return;
    }
    sFaultAddr = a;
    sFaultWrite = (uc->uc_mcontext.gregs[REG_ERR] & 2) != 0;
    sRing[sRingPos++ & 15] = (struct IoLog){a, (u32)uc->uc_mcontext.gregs[R_PC], sFaultWrite};
    sIoCount++;
    if (sIoHist) io_hist(a, (u32)uc->uc_mcontext.gregs[R_PC], sFaultWrite);
    if (!sNoEmulate) {
        u32 len = emulate_access(uc, a);
        if (len) {
            uc->uc_mcontext.gregs[R_PC] += len;
            host_irq_inject(uc);
            return;
        }
    }
    sFaultOld = R32(a & ~3u);
    if (!sFaultWrite) io_read(a);
    mprotect(page_of(a), PAGE, PROT_READ | PROT_WRITE);
    uc->uc_mcontext.gregs[REG_EFL] |= 0x100;  // trap after the instruction
    sigaddset(&uc->uc_sigmask, SIGALRM);      // no interrupt between the access and its handling
}

static void on_trap(int sig, siginfo_t *si, void *ctx) {
    (void)sig; (void)si;
    ucontext_t *uc = ctx;
    if (sWatchStep) {
        sWatchStep = 0;
        uc->uc_mcontext.gregs[REG_EFL] &= ~0x100;
        sigdelset(&uc->uc_sigmask, SIGALRM);
        if (memcmp(sWatchOld, (void *)(uintptr_t)sWatchLo, sWatchHi - sWatchLo)) {
            fprintf(stderr, "watch: frame %llu eip %08x:", (unsigned long long)host_frame(), sWatchEip);
            for (u32 i = 0; i < sWatchHi - sWatchLo; i += 4) fprintf(stderr, " %08x", *(u32 *)(uintptr_t)(sWatchLo + i));
            fprintf(stderr, "\n");
            host_backtrace((uintptr_t *)uc->uc_mcontext.gregs[R_BP], (uintptr_t)uc->uc_mcontext.gregs[R_SP]);
        }
        mprotect((void *)(uintptr_t)sWatchPage, PAGE, PROT_READ);
        return;
    }
    uc->uc_mcontext.gregs[REG_EFL] &= ~0x100;
    sigdelset(&uc->uc_sigmask, SIGALRM);
    mprotect(page_of(sFaultAddr), PAGE, PROT_NONE);
    if (sFaultWrite) io_write(sFaultAddr, sFaultOld);
    host_irq_inject(uc);
}

// ---- profiling: ACWW_PROFILE=1 samples the interrupted EIP (SIGPROF); the counts are printed on SIGINT
#define PROF_SLOTS 65536
static u32 sProfAddr[PROF_SLOTS], sProfCount[PROF_SLOTS];
static void on_prof(int sig, siginfo_t *si, void *ctx) {
    (void)sig; (void)si;
    u32 eip = (u32)((ucontext_t *)ctx)->uc_mcontext.gregs[R_PC];
    u32 h = (eip >> 2) * 2654435761u >> 16;
    for (int i = 0; i < 16; i++, h = (h + 1) & (PROF_SLOTS - 1)) {
        if (sProfAddr[h] == eip || !sProfAddr[h]) { sProfAddr[h] = eip; sProfCount[h]++; return; }
    }
}
static void prof_dump(void) {
    if (!getenv("ACWW_PROFILE")) return;
    FILE *f = fopen("acww_profile.txt", "w");
    if (!f) return;
    for (int i = 0; i < PROF_SLOTS; i++) if (sProfCount[i]) fprintf(f, "%u %08x\n", sProfCount[i], sProfAddr[i]);
    fclose(f);
    fprintf(stderr, "host: profile in acww_profile.txt\n");
}

// interrupt injection: an interrupted context inside the game's code with an interrupt due goes to
// host_irq_stub (irq_entry.S) first, like an IRQ exception. Not in the runtime's or the libraries' code.
extern char host_game_text_start[], host_game_text_end[];
void host_irq_stub(void);
int host_irq_ready(void);
static void host_irq_inject(ucontext_t *uc) {
    u32 eip = (u32)uc->uc_mcontext.gregs[R_PC];
    if (eip < (u32)(uintptr_t)host_game_text_start || eip >= (u32)(uintptr_t)host_game_text_end) return;
    if (uc->uc_mcontext.gregs[REG_EFL] & 0x100) return;  // single-stepping an I/O access
    if (!host_irq_ready()) return;
    uintptr_t *sp = (uintptr_t *)uc->uc_mcontext.gregs[R_SP];  // (x86-64: the game has no red zone)
    *--sp = (uintptr_t)uc->uc_mcontext.gregs[R_PC];
    uc->uc_mcontext.gregs[R_SP] = (greg_t)(uintptr_t)sp;
    uc->uc_mcontext.gregs[R_PC] = (greg_t)(uintptr_t)host_irq_stub;
}

int host_async_tick(void);
static u64 sTickCycles;
// where the game was found spinning (printed on SIGINT)
static u32 sSpinEip[256], sSpinN[256];
static void spin_log(u32 eip) {
    for (int i = 0; i < 256; i++) {
        if (sSpinEip[i] == eip || !sSpinEip[i]) { sSpinEip[i] = eip; sSpinN[i]++; return; }
    }
}
static void spin_dump(void) {
    for (int i = 0; i < 256 && sSpinEip[i]; i++) fprintf(stderr, "spin: %08x %u\n", sSpinEip[i], sSpinN[i]);
}

static void on_alarm(int sig, siginfo_t *si, void *ctx) {
    (void)sig; (void)si;
    ucontext_t *uc = ctx;
    u32 eip = (u32)uc->uc_mcontext.gregs[R_PC];
    int in_game = eip >= (u32)(uintptr_t)host_game_text_start && eip < (u32)(uintptr_t)host_game_text_end;
    // The game spinning on memory (waiting for an interrupt handler without touching a register, so virtual time
    // stands still): after 100 ms of that, let time pass and take the interrupts it raised. Only a hang guard:
    // the game reaches registers or waits far more often, and acting sooner would make runs depend on the real
    // clock. Each site is reported (it wants an explicit wait). Never in the runtime's or a library's code.
    static u32 still;
    still = sCycles == sTickCycles ? still + 1 : 0;
    sTickCycles = sCycles;
    if (still >= 50 && in_game) {
        still = 0;
        spin_log(eip);
        static u32 reported[16];
        int known = 0;
        for (int i = 0; i < 16; i++) known |= reported[i] == eip;
        for (int i = 0; !known && i < 16; i++) if (!reported[i]) { reported[i] = eip; break; }
        if (!known) fprintf(stderr, "host: the game spins without progress at %08x (frame %llu)\n", eip, (unsigned long long)host_frame());
        host_advance_to_next_event();
        host_irq_inject(uc);
    }
}

static void on_int(int sig, siginfo_t *si, void *ctx) {
    (void)sig; (void)si;
    ucontext_t *uc = ctx;
    fprintf(stderr, "host: %llu I/O accesses; last ones:\n", (unsigned long long)sIoCount);
    for (int i = 0; i < 16; i++) {
        struct IoLog *l = &sRing[(sRingPos + i) & 15];
        fprintf(stderr, "  %s %08x at %08x\n", l->write ? "write" : "read ", l->addr, l->eip);
    }
    prof_dump();
    spin_dump();
    if (sIoHist) io_hist_dump();
    extern void snd7_output_close(void);
    snd7_output_close();
    extern void frontend_shutdown(void);
    frontend_shutdown();
    fprintf(stderr, "host: interrupted at frame %llu, eip %08x\n", (unsigned long long)host_frame(),
            (u32)uc->uc_mcontext.gregs[R_PC]);
    host_backtrace((uintptr_t *)uc->uc_mcontext.gregs[R_BP], (uintptr_t)uc->uc_mcontext.gregs[R_SP]);
    extern void host_dump_threads(void (*)(uintptr_t *, uintptr_t));
    host_dump_threads(host_backtrace);
    void *bt[32];
    int n = backtrace(bt, 32);
    backtrace_symbols_fd(bt, n, 2);
    _exit(3);
}

// Integer division by zero: the DS has no divide instruction, the compiler's routine (_s32_div_f, _u32_div_f)
// returns the dividend as the quotient and 0 as the remainder; x86 traps. The game does divide by zero in places
// (e.g. spl_scl_in_out at the end of an animation), so the x86 div/idiv gets the DS's result. Each site is
// reported once.
static int emulate_div_by_zero(ucontext_t *uc) {
    const u8 *p = (const u8 *)(uintptr_t)uc->uc_mcontext.gregs[R_PC], *start = p;
    int o16 = 0, w64 = 0;
    if (*p == 0x66) { o16 = 1; p++; }
#if defined(__x86_64__)
    if ((*p & 0xf0) == 0x40) { w64 = *p & 8; p++; }  // REX
#endif
    if ((*p != 0xf7 && *p != 0xf6) || ((p[1] >> 3 & 7) != 6 && (p[1] >> 3 & 7) != 7)) return 0;
    u32 n = (p[1] >> 6) == 3 ? 1 : modrm_len(p + 1);
    if (!n) return 0;
    greg_t *eax = &uc->uc_mcontext.gregs[R_AX], *edx = &uc->uc_mcontext.gregs[R_DX];
    if (*p == 0xf6) *eax = (greg_t)(((uintptr_t)*eax & ~(uintptr_t)0xff00));           // AL = AL, AH = 0
    else if (o16) *edx = (greg_t)((uintptr_t)*edx & ~(uintptr_t)0xffff);               // AX = AX, DX = 0
    else if (w64) *edx = 0;                                                             // RAX = RAX, RDX = 0
    else { *eax = (greg_t)(u32)*eax; *edx = 0; }                                        // EAX = EAX, EDX = 0
    u32 eip = (u32)uc->uc_mcontext.gregs[R_PC];
    static u32 seen[64];
    static int nseen;
    int known = 0;
    for (int i = 0; i < nseen; i++) known |= seen[i] == eip;
    if (!known && nseen < 64) {
        seen[nseen++] = eip;
        fprintf(stderr, "host: division by zero at %08x (frame %llu): the DS's result\n", eip, (unsigned long long)host_frame());
    }
    uc->uc_mcontext.gregs[R_PC] += (greg_t)(p + 1 + n - start);
    return 1;
}

// a crash in the game (division by zero, ...): where
static void on_fatal_signal(int sig, siginfo_t *si, void *ctx) {
    ucontext_t *uc = ctx;
    if (sig == SIGFPE && si->si_code == FPE_INTDIV && emulate_div_by_zero(uc)) return;
    fprintf(stderr, "host: signal %d (%s) at frame %llu, eip %08x, address %p\n", sig, strsignal(sig),
            (unsigned long long)host_frame(), (u32)uc->uc_mcontext.gregs[R_PC], si->si_addr);
    host_backtrace((uintptr_t *)uc->uc_mcontext.gregs[R_BP], (uintptr_t)uc->uc_mcontext.gregs[R_SP]);
    extern void frontend_shutdown(void);
    frontend_shutdown();
    _exit(5);
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

static u8 *map_io(u32 a) {
    int fd = memfd_create("dsio", 0);
    if (fd < 0 || ftruncate(fd, PAGE) < 0) host_fatal("memfd");
    void *game = mmap((void *)(uintptr_t)a, PAGE, PROT_NONE, MAP_SHARED | MAP_FIXED_NOREPLACE, fd, 0);
    void *mine = mmap(0, PAGE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (game != (void *)(uintptr_t)a || mine == MAP_FAILED) host_fatal("can't map the I/O registers");
    return mine;
}

void host_map_memory(void) {
    map_fixed(0x01ff8000, 0x8000);    // ITCM
    map_main_ram();                   // main RAM, 4 MB at 0x02000000 and its mirrors (the game's data is in it)
    // DTCM (0x027e0000): the program's .dtcm section (the DTCM module's variables), mapped by the loader
    map_fixed(0x03000000, 0x10000);   // shared WRAM
    map_fixed(0x05000000, 0x800);     // palettes
    map_fixed(0x06000000, 0x900000);  // VRAM: vram.c maps the banks into it
    map_fixed(0x07000000, 0x800);     // OAM
    sIo0 = map_io(IO0);
    sIoB = map_io(IOB);
    sIo1 = map_io(IO1);
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_flags = SA_SIGINFO | SA_NODEFER;
    sigaddset(&sa.sa_mask, SIGALRM);
    sa.sa_sigaction = on_segv;
    sigaction(SIGSEGV, &sa, 0);
    sa.sa_sigaction = on_trap;
    sigaction(SIGTRAP, &sa, 0);
    sa.sa_sigaction = on_int;
    sigaction(SIGINT, &sa, 0);
    sa.sa_sigaction = on_fatal_signal;
    sigaction(SIGFPE, &sa, 0);
    sigaction(SIGILL, &sa, 0);
    sigaction(SIGBUS, &sa, 0);
    // SIGALRM is blocked while an I/O access is being single-stepped (the handlers' sa_mask) and inside itself
    struct sigaction al;
    memset(&al, 0, sizeof al);
    al.sa_flags = SA_SIGINFO;
    al.sa_sigaction = on_alarm;
    sigaction(SIGALRM, &al, 0);
    struct itimerval it = {{0, 2000}, {0, 2000}};
    setitimer(ITIMER_REAL, &it, 0);
    if (getenv("ACWW_PROFILE")) {
        sa.sa_sigaction = on_prof;
        sigaction(SIGPROF, &sa, 0);
        struct itimerval pt = {{0, 1000}, {0, 1000}};
        setitimer(ITIMER_PROF, &pt, 0);
    }
    R16(0x04000130) = 0x3ff;
    watch_init();
    if (getenv("ACWW_IOHIST")) { sIoHist = 1; atexit(io_hist_dump); }
    sNoEmulate = getenv("ACWW_NOEMULATE") != NULL;
}
