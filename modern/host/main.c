// Host build: entry point. Maps the DS memory, puts what the DS boot leaves in memory (ROM header, system work
// area) in place and calls the game's NitroMain. See docs/host.md.

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void host_unimplemented(const char *what) {
    fprintf(stderr, "host: unimplemented: %s\n", what);
}

const u8 *host_rom(u32 *size);
void NitroMain(void);
void NitroStartUp(void);

// linker symbols the DS build defines in its linker script
#define ABS(name, value) __asm__(".globl " #name "\n.set " #name ", " #value)
ABS(SDK_MAIN_ARENA_LO, 0x0229bdc0);  // past the overlay area (Startup_FillOverlayArea)
ABS(SDK_SECTION_ARENA_ITCM_START, 0x01ff8000);
ABS(SDK_SECTION_ARENA_DTCM_START, 0x027e0000);
ABS(__exception_table_start__, 0);
ABS(__exception_table_end__, 0);
ABS(SDK_SYS_STACKSIZE, 0x2000);
ABS(SDK_IRQ_STACKSIZE, 0x1000);
ABS(SDK_SECTION_ARENA_EX_START, 0x02400000);
#define OV(n) ABS(OVERLAY_##n##_ID, n)
OV(0); OV(1); OV(2); OV(65); OV(66); OV(67); OV(68); OV(69); OV(93); OV(127);

// before the game's static constructors (which may touch DS memory): map it first
void host_vram_init(void);
void melon_init(void);
__attribute__((constructor(101))) static void early_init(void) { host_map_memory(); host_vram_init(); }

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
    NitroStartUp();  // crt0 calls it before the static initialisers; they ran already (host .init_array)
    NitroMain();
    host_fatal("NitroMain returned");
}
