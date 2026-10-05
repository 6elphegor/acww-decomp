// Host build: the DS memory map and the ARM9 I/O registers.
//
// The game's memory is mapped at the DS addresses, so hardcoded addresses keep working. The I/O pages
// (0x04000000, 0x04100000) are mapped twice from one memfd: the game's view has no access, the runtime's view is
// writable. An access to the game's view faults; the handler prepares the register for a read, opens the page,
// single-steps the instruction (trap flag) and, after it, handles the written value and closes the page again. No
// instruction decoding is needed, and every write is seen, even of an unchanged value.
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
static void run_events_body(void) {
    pxi7_run_due();
    while (sCycles >= sNextVblank) {
        u16 st = R16(0x04000004);
        if (st & 8) host_irq_raise(1);    // VBlank
        if (st & 16) host_irq_raise(2);   // HBlank (once per frame: the per-line effects aren't emulated)
        dma_on_vblank();
        melon_frame();
        extern void frontend_frame(void);
        frontend_frame();
        host_screenshot();
        if (getenv("ACWW_STATS") && host_frame() % 300 == 0) {
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
            fprintf(stderr, " vramcnt %08x %08x ime %x ie %08x if %08x cpu %x\n", R32(0x04000240), R32(0x04000244), R32(0x04000208), R32(0x04000210), sIF, host_irq_state());
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
void gx_fifo_write(u32 addr, u32 value) { melon_write32(addr, value); }

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
    if ((w >= 0x04000400 && w < 0x04000600) || w == 0x04000600) { melon_write32(w, v); return; }
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
static u64 sIoCount;

// frame-pointer walk, staying within 1 MB above the stack pointer (host stacks are 512 KB, the main one is the
// process stack)
static void host_backtrace(u32 *bp, u32 sp) {
    for (int i = 0; i < 24; i++) {
        if ((u32)(uintptr_t)bp < sp || (u32)(uintptr_t)bp > sp + 0x100000 || ((uintptr_t)bp & 3)) break;
        fprintf(stderr, "  from %08x\n", bp[1]);
        sp = (u32)(uintptr_t)bp;
        bp = (u32 *)(uintptr_t)bp[0];
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

static void on_segv(int sig, siginfo_t *si, void *ctx) {
    (void)sig;
    ucontext_t *uc = ctx;
    u32 a = (u32)(uintptr_t)si->si_addr;
    if (sWatchPage && (a & ~(PAGE - 1)) == sWatchPage) {
        memcpy(sWatchOld, (void *)(uintptr_t)sWatchLo, sWatchHi - sWatchLo);
        sWatchEip = (u32)uc->uc_mcontext.gregs[REG_EIP];
        sWatchStep = 1;
        mprotect((void *)(uintptr_t)sWatchPage, PAGE, PROT_READ | PROT_WRITE);
        uc->uc_mcontext.gregs[REG_EFL] |= 0x100;
        sigaddset(&uc->uc_sigmask, SIGALRM);
        return;
    }
    if (!is_io(a)) {
        fprintf(stderr, "host: segfault at %08x, eip %08x, ebp %08x\n", a, (u32)uc->uc_mcontext.gregs[REG_EIP],
                (u32)uc->uc_mcontext.gregs[REG_EBP]);
        fprintf(stderr, "  [esp] %08x\n", *(u32 *)uc->uc_mcontext.gregs[REG_ESP]);
        host_backtrace((u32 *)uc->uc_mcontext.gregs[REG_EBP], (u32)uc->uc_mcontext.gregs[REG_ESP]);
        extern void frontend_shutdown(void);
        frontend_shutdown();
        _exit(4);
        signal(SIGSEGV, SIG_DFL);
        return;
    }
    sFaultAddr = a;
    sFaultWrite = (uc->uc_mcontext.gregs[REG_ERR] & 2) != 0;
    sRing[sRingPos++ & 15] = (struct IoLog){a, (u32)uc->uc_mcontext.gregs[REG_EIP], sFaultWrite};
    sIoCount++;
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
            host_backtrace((u32 *)uc->uc_mcontext.gregs[REG_EBP], (u32)uc->uc_mcontext.gregs[REG_ESP]);
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
    u32 eip = (u32)((ucontext_t *)ctx)->uc_mcontext.gregs[REG_EIP];
    u32 h = (eip >> 2) * 2654435761u >> 16;
    for (int i = 0; i < 16; i++, h = (h + 1) & (PROF_SLOTS - 1)) {
        if (sProfAddr[h] == eip || !sProfAddr[h]) { sProfAddr[h] = eip; sProfCount[h]++; return; }
    }
}
static void prof_dump(void) {
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
    u32 eip = (u32)uc->uc_mcontext.gregs[REG_EIP];
    if (eip < (u32)(uintptr_t)host_game_text_start || eip >= (u32)(uintptr_t)host_game_text_end) return;
    if (uc->uc_mcontext.gregs[REG_EFL] & 0x100) return;  // single-stepping an I/O access
    if (!host_irq_ready()) return;
    u32 *sp = (u32 *)uc->uc_mcontext.gregs[REG_ESP];
    *--sp = eip;
    uc->uc_mcontext.gregs[REG_ESP] = (greg_t)(uintptr_t)sp;
    uc->uc_mcontext.gregs[REG_EIP] = (greg_t)(uintptr_t)host_irq_stub;
}

int host_async_tick(void);
static u64 sTickCycles;
static void on_alarm(int sig, siginfo_t *si, void *ctx) {
    (void)sig; (void)si;
    ucontext_t *uc = ctx;
    u32 eip = (u32)uc->uc_mcontext.gregs[REG_EIP];
    int in_game = eip >= (u32)(uintptr_t)host_game_text_start && eip < (u32)(uintptr_t)host_game_text_end;
    if (sCycles == sTickCycles && in_game) {
        // the game spinning on memory: let time pass, then take the interrupts it raised. (Never in the runtime's
        // or a library's code: the renderer may be in the middle of a frame there.)
        host_advance_to_next_event();
        host_irq_inject(uc);
    }
    sTickCycles = sCycles;
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
    extern void frontend_shutdown(void);
    frontend_shutdown();
    fprintf(stderr, "host: interrupted at frame %llu, eip %08x\n", (unsigned long long)host_frame(),
            (u32)uc->uc_mcontext.gregs[REG_EIP]);
    host_backtrace((u32 *)uc->uc_mcontext.gregs[REG_EBP], (u32)uc->uc_mcontext.gregs[REG_ESP]);
    void *bt[32];
    int n = backtrace(bt, 32);
    backtrace_symbols_fd(bt, n, 2);
    _exit(3);
}

// ---- the memory map
static void map_fixed(u32 a, u32 n) {
    void *p = mmap((void *)(uintptr_t)a, n, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
    if (p != (void *)(uintptr_t)a) { fprintf(stderr, "host: can't map %08x\n", a); exit(1); }
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
    map_fixed(0x02000000, 0x400000);  // main RAM (the shared work area at its end, 0x027ff000, is a mirror on the DS)
    // DTCM (0x027e0000): the program's .dtcm section (the DTCM module's variables), mapped by the loader
    map_fixed(0x027ff000, 0x1000);    // shared work area (OS_GetSystemWork)
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
}
