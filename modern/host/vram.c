// Host build: DS VRAM banking. The nine banks (A-I) live in one memfd; VRAMCNT decides where the CPU sees each one
// (the LCDC window at 0x06800000, the engines' BG and OBJ windows), and every change remaps the windows with mmap.
// Banks used for textures, texture palettes, extended palettes or the ARM7 aren't visible to the CPU. The
// renderer (melon.cpp) reads the banks through host_vram_bank().

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#include "host.h"

static const u32 kSize[9] = {0x20000, 0x20000, 0x20000, 0x20000, 0x10000, 0x4000, 0x4000, 0x8000, 0x4000};
static const u32 kLcdc[9] = {0x06800000, 0x06820000, 0x06840000, 0x06860000, 0x06880000, 0x06890000, 0x06894000,
                             0x06898000, 0x068a0000};
static u32 sOffset[9];
static int sFd = -1;
static u8 *sBanks;
static u8 sCnt[9];

u8 *host_vram_bank(int i) { return sBanks + sOffset[i]; }
u32 host_vram_bank_size(int i) { return kSize[i]; }

static const struct { u32 base, size; } kWindows[] = {
    {0x06000000, 0x80000},  // engine A BG
    {0x06200000, 0x20000},  // engine B BG
    {0x06400000, 0x40000},  // engine A OBJ
    {0x06600000, 0x20000},  // engine B OBJ
    {0x06800000, 0xa4000},  // LCDC
};

// the CPU address of bank i under control value c, or 0
static u32 bank_address(int i, u8 c) {
    if (!(c & 0x80)) return 0;
    u32 mst = c & 7, ofs = c >> 3 & 3;
    switch (i) {
    case 0: case 1:
        if (mst == 0) return kLcdc[i];
        if (mst == 1) return 0x06000000 + 0x20000 * ofs;
        if (mst == 2) return 0x06400000 + 0x20000 * (ofs & 1);
        return 0;
    case 2: case 3:
        if (mst == 0) return kLcdc[i];
        if (mst == 1) return 0x06000000 + 0x20000 * ofs;
        if (mst == 4) return i == 2 ? 0x06200000 : 0x06600000;
        return 0;
    case 4:
        if (mst == 0) return kLcdc[i];
        if (mst == 1) return 0x06000000;
        if (mst == 2) return 0x06400000;
        return 0;
    case 5: case 6:
        if (mst == 0) return kLcdc[i];
        if (mst == 1) return 0x06000000 + 0x4000 * (ofs & 1) + 0x10000 * (ofs >> 1);
        if (mst == 2) return 0x06400000 + 0x4000 * (ofs & 1) + 0x10000 * (ofs >> 1);
        return 0;
    case 7:
        if (mst == 0) return kLcdc[i];
        if ((mst & 3) == 1) return 0x06200000;
        return 0;
    case 8:
        if (mst == 0) return kLcdc[i];
        if ((mst & 3) == 1) return 0x06208000;
        if ((mst & 3) == 2) return 0x06600000;
        return 0;
    }
    return 0;
}

static void remap(void) {
    for (unsigned w = 0; w < sizeof kWindows / sizeof kWindows[0]; w++)
        mmap((void *)(uintptr_t)kWindows[w].base, kWindows[w].size, PROT_READ | PROT_WRITE,
             MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0);
    for (int i = 0; i < 9; i++) {
        u32 a = bank_address(i, sCnt[i]);
        if (a && mmap((void *)(uintptr_t)a, kSize[i], PROT_READ | PROT_WRITE, MAP_SHARED | MAP_FIXED, sFd,
                      sOffset[i]) == MAP_FAILED)
            fprintf(stderr, "vram: can't map bank %c at %08x\n", 'A' + i, a);
    }
}

// VRAMCNT_A..I: 0x04000240-0x04000246, 0x04000248-0x04000249 (0x04000247 is WRAMCNT)
void host_vram_control(u32 addr, u8 value) {
    int i = addr == 0x04000248 ? 7 : addr == 0x04000249 ? 8 : (int)(addr - 0x04000240);
    if (i < 0 || i > 8 || addr == 0x04000247) return;
    if (sCnt[i] == value) return;
    sCnt[i] = value;
    remap();
}

void host_vram_init(void) {
    u32 total = 0;
    for (int i = 0; i < 9; i++) { sOffset[i] = total; total += kSize[i]; }
    sFd = memfd_create("dsvram", 0);
    if (sFd < 0 || ftruncate(sFd, total) < 0) host_fatal("vram memfd");
    sBanks = mmap(0, total, PROT_READ | PROT_WRITE, MAP_SHARED, sFd, 0);
    if (sBanks == MAP_FAILED) host_fatal("vram map");
    remap();
}
