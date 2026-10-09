// Host build: the display interface (render.h) and the choice of renderer.
//
// melonDS (melon.cpp, GPL-3.0, temporary) renders the 3D engine and, by default, the 2D engines; the project's own
// 2D renderer (gpu2d/) replaces its 2D part (docs/portability.md 5.1):
//   ACWW_RENDERER=melon (default) | own   whose 2D pictures the screens show; with `own` melonDS still runs the 3D
//                                         engine, and its 3D picture becomes BG0 of the own renderer's engine A
//   ACWW_RENDER_COMPARE=1                 render with both every frame and report the frames where they differ: the
//                                         first differing pixel of each screen and what the own renderer put there
//                                         (layers, effect); ACWW_RENDER_COMPARE_MAX lines at most (default 200), then
//                                         only the counts, which are printed at exit
//   ACWW_RENDER_SELFTEST=<n>              before the game starts: n random scenes rendered by both, compared as above,
//                                         then exit (render_selftest.c; ACWW_RENDER_SELFTEST_SEED)
//   ACWW_GPU2D_FEATURES=1                 at exit, the 2D features the frames used (own renderer or comparison)
// Both renderers get the same register writes, VRAM banks, palettes and OAM.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gpu2d/gpu2d.h"
#include "host_mem.h"
#include "render.h"

// melon.cpp
void melon_init(void);
void melon_write8(u32 addr, u8 v);
void melon_write16(u32 addr, u16 v);
void melon_write32(u32 addr, u32 v);
u32 melon_read32(u32 addr);
void melon_frame(void);
const u32 *melon_screen(int screen);
int melon_gx_fifo_irq_level(void);
void melon_debug(void);
void melon_3d_lines(u32 *out);
// vram.c
u8 *host_vram_bank(int i);
void host_vram_flush(void);

static int sOwn;          // the own renderer's pictures on the screens
static int sGpu2d;        // the own renderer runs (sOwn or sCompare)
static int sCompare;
static int sSelftest;      // ACWW_RENDER_SELFTEST (render_selftest.c compares itself)
static long sCompareMax = 200, sCompareLines;
static u64 sCompared, sDiffering, sFirstDiffering = ~0ull;
static u32 s3d[256 * 192];

void render_init(void) {
    const char *r = getenv("ACWW_RENDERER");
    if (r && strcmp(r, "own") == 0) sOwn = 1;
    else if (r && strcmp(r, "melon") != 0) fprintf(stderr, "render: ACWW_RENDERER=%s unknown (own, melon): melon\n", r);
    sCompare = getenv("ACWW_RENDER_COMPARE") && atoi(getenv("ACWW_RENDER_COMPARE"));
    if (getenv("ACWW_RENDER_COMPARE_MAX")) sCompareMax = strtol(getenv("ACWW_RENDER_COMPARE_MAX"), 0, 10);
    sGpu2d = sOwn || sCompare;
    melon_init();
    gpu2d_reset();
    gpu2d_set_diagnostics(sCompare || getenv("ACWW_RENDER_SELFTEST"));
    if (getenv("ACWW_RENDER_SELFTEST")) {  // (render_selftest.c)
        sGpu2d = sCompare = sSelftest = 1;
        render_selftest(strtol(getenv("ACWW_RENDER_SELFTEST"), 0, 10));
    }
}

void render_write8(u32 addr, u8 v) { melon_write8(addr, v); gpu2d_write8(addr, v); }
void render_write16(u32 addr, u16 v) { melon_write16(addr, v); gpu2d_write16(addr, v); }
void render_write32(u32 addr, u32 v) {
    melon_write32(addr, v);
    if (addr < 0x04000400 || addr > 0x04000600) gpu2d_write32(addr, v);  // (not the 3D command ports)
}
u32 render_read32(u32 addr) { return melon_read32(addr); }
int render_gx_fifo_irq_level(void) { return melon_gx_fifo_irq_level(); }
void render_debug(void) { melon_debug(); }

// the first pixel where the two renderers' pictures differ, per screen (`label`: the frame, or the self-test's
// scene); 1 if they differ
int render_compare(const char *kind, u64 label) {
    sCompared++;
    int differs = 0;
    for (int s = 0; s < 2; s++) {
        const u32 *m = melon_screen(s), *o = gpu2d_screen(s);
        int first = -1, count = 0;
        for (int i = 0; i < 256 * 192; i++)
            if ((m[i] ^ o[i]) & 0xffffff) { if (first < 0) first = i; count++; }
        if (first < 0) continue;
        differs = 1;
        if (sCompareLines < sCompareMax) {
            char what[256];
            gpu2d_describe_pixel(s, first % 256, first / 256, what, sizeof what);
            fprintf(stderr, "render-compare: %s %llu %s screen: %d pixels differ, first (%d, %d) own %06x melon %06x: %s\n",
                    kind, (unsigned long long)label, s ? "bottom" : "top", count, first % 256, first / 256,
                    o[first] & 0xffffff, m[first] & 0xffffff, what);
            if (++sCompareLines == sCompareMax) fprintf(stderr, "render-compare: (no more lines: ACWW_RENDER_COMPARE_MAX)\n");
        }
    }
    if (differs) {
        if (sFirstDiffering == ~0ull) sFirstDiffering = label;
        sDiffering++;
    }
    return differs;
}

void render_frame(void) {
    if (sGpu2d) melon_3d_lines(s3d);  // (the 3D picture this frame shows: melonDS renders the next one in the frame)
    melon_frame();
    if (sGpu2d) {
        host_vram_flush();
        Gpu2dFrameInput in;
        for (int i = 0; i < 9; i++) in.bank[i] = host_vram_bank(i);
        in.palette = gHostPltt;
        in.oam = gHostOam;
        in.lines3d = s3d;
        gpu2d_render_frame(&in);
    }
    if (sCompare && !sSelftest) render_compare("frame", host_frame());
}

const u32 *render_screen(int screen) { return sOwn ? gpu2d_screen(screen) : melon_screen(screen); }

void render_exit_report(void) {
    if (sCompare) {
        fprintf(stderr, "render-compare: %llu frames compared, %llu differ", (unsigned long long)sCompared,
                (unsigned long long)sDiffering);
        if (sDiffering) fprintf(stderr, " (the first: %llu)", (unsigned long long)sFirstDiffering);
        fprintf(stderr, "\n");
    }
    if (sGpu2d && getenv("ACWW_GPU2D_FEATURES")) gpu2d_print_features();
}
