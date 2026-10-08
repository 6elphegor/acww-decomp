// Host build: entry point. Maps the DS memory, puts what the DS boot leaves in memory (ROM header, system work
// area) in place and calls the game's NitroMain. See docs/host.md.

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#include "coro.h"
#include "host.h"

int gHostVerbose;
const char *gHostRomPath;

void host_fatal(const char *msg) {
    fprintf(stderr, "host: fatal: %s (frame %llu)\n", msg, (unsigned long long)host_frame());
    extern void frontend_shutdown(void);
    frontend_shutdown();
    exit(2);
}

void host_log_proc(u32 profile, void *create, void *obj) {
    static int on = -1;
    if (on < 0) on = getenv("ACWW_PROCLOG") != 0;
    if (on) fprintf(stderr, "proc: frame %llu profile %u create %p -> %p\n", (unsigned long long)host_frame(), profile, create, obj);
}

void host_bad_object(u32 profile, void *create, void *obj) {
    fprintf(stderr, "host: profile %u: create %p returned %p without a vtable\n", profile, create, obj);
}

// Fatal_PanicV (HOST): the game's panic message; args points at the format's arguments on the stack
void host_panic(const char *file, u32 line, const char *fmt, void *args) {
    char buf[512];
    vsnprintf(buf, sizeof buf, fmt, *(va_list *)&args);
    fprintf(stderr, "host: game panic: %s (%s:%u)\n", buf, file ? file : "", line);
    host_fatal("panic");
}

// Fatal_Panic (HOST): the arguments as a va_list
void host_panic_v(const char *file, u32 line, const char *fmt, va_list *args) {
    char buf[512];
    vsnprintf(buf, sizeof buf, fmt, *args);
    fprintf(stderr, "host: game panic: %s (%s:%u)\n", buf, file ? file : "", line);
    host_fatal("panic");
}

void host_unimplemented(const char *what) {
    fprintf(stderr, "host: unimplemented: %s\n", what);
}

const u8 *host_rom(u32 *size);
void NitroMain(void);
void NitroStartUp(void);

// before the game's static constructors (which may touch DS memory): map it first
void host_vram_init(void);
void melon_init(void);
__attribute__((constructor(101))) static void early_init(void) { host_map_memory(); host_vram_init(); }

static void game_main(void *arg) {
    (void)arg;
    NitroStartUp();  // crt0 calls it before the static initialisers; they ran already (host .init_array)
    NitroMain();
    host_fatal("NitroMain returned");
}

int main(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-v")) gHostVerbose = 1;
        else gHostRomPath = argv[i];
    }
    if (!gHostRomPath) { fprintf(stderr, "usage: %s [-v] <rom.nds>\n", argv[0]); return 1; }
    card_init(gHostRomPath);
    u32 size;
    const u8 *rom = host_rom(&size);
    memcpy((void *)0x027ffe00, rom, 0x170);              // ROM header (HW_ROM_HEADER_BUF)
    *(volatile u32 *)0x027ffc00 = *(const u32 *)(rom + 0x0c);   // card id stand-in
    *(volatile u16 *)0x027ffc40 = 1;                     // boot type: ROM
    pxi7_init();
    melon_init();
    extern void frontend_init(const char *argv0);
    extern void frontend_shutdown(void);
    frontend_init(argv[0]);
    atexit(frontend_shutdown);
    // the game's main thread on a stack of its own (os.c: below 4 GB on 64-bit Linux)
    static void *host_sp;
    enum { MAIN_STACK = 1024 * 1024 };
    void *stack = host_stack_alloc(MAIN_STACK);
    if (!stack) host_fatal("no memory for the main thread's stack");
    host_coro_switch(&host_sp, host_coro_prepare(stack, MAIN_STACK, game_main, 0));
    host_fatal("the game's main thread returned");
}

// ACWW_HEAPCHECK=1: walk every NNS expanded heap in DS RAM each frame (hw.c) and report the first broken block
void host_heap_check(void) {
    static int on = -1, reported;
    if (on < 0) on = getenv("ACWW_HEAPCHECK") != 0;
    if (!on || reported) return;
    int heaps = 0;
    for (u32 a = 0x02000000; a < 0x02400000; a += 4) {
        u32 *h = (u32 *)(uintptr_t)a;
        if (h[0] != 0x45585048 || h[6] < 0x02000000 || h[6] >= h[7] || h[7] > 0x02400000) continue;  // 'EXPH', start, end
        heaps++;
        u32 lists[2] = {h[9], h[11]};  // freeHead, usedHead
        for (int l = 0; l < 2; l++) {
            u32 prev = 0, n = 0;
            for (u32 b = lists[l]; b && n < 100000; n++) {
                u32 *m = (u32 *)(uintptr_t)b;
                u16 sig = (u16)m[0];
                if (b < h[6] || b >= h[7] || sig != (l ? 0x5544 : 0x4652) || m[2] != prev) {
                    fprintf(stderr, "heapcheck: frame %llu heap %08x %s block %08x bad (sig %04x prev %08x want %08x)\n",
                            (unsigned long long)host_frame(), a, l ? "used" : "free", b, sig, m[2], prev);
                    reported = 1;
                    return;
                }
                prev = b;
                b = m[3];
            }
        }
    }
    if (host_frame() % 600 == 0) fprintf(stderr, "heapcheck: frame %llu: %d heaps fine\n", (unsigned long long)host_frame(), heaps);
}

// The root heap's memory on 64-bit hosts (Heap_InitSystem): the game's objects are larger there (pointers), so the
// DS's main RAM arena (about 1.4 MB for the root heap) runs out; the heap gets a larger block of its own instead.
// Below 4 GB: the game keeps heap addresses in 32-bit words.
static uintptr_t sRootHeapLo, sRootHeapHi;

// ::operator delete (newdelete.cpp): is p a block of the game's heaps? They are in DS memory (main RAM and its
// mirrors, ITCM, DTCM, shared WRAM) or, on 64-bit hosts, the root heap's block
int host_is_game_heap(const void *p) {
    uintptr_t a = (uintptr_t)p;
    return (a >= 0x01ff8000 && a < 0x03810000) || (a >= sRootHeapLo && a < sRootHeapHi);
}

void *host_root_heap_region(unsigned int *size) {
    const unsigned int kSize = 8u << 20;
    void *want = (void *)(uintptr_t)0x50000000;
    void *p = mmap(want, kSize, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (p == MAP_FAILED) return 0;
    if ((uintptr_t)p + kSize > 0xffffffffu) {
        munmap(p, kSize);
        return 0;
    }
    *size = kSize;
    sRootHeapLo = (uintptr_t)p;
    sRootHeapHi = (uintptr_t)p + kSize;
    return p;
}
