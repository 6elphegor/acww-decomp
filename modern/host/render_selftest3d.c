// Host build: the 3D engines' self-test (ACWW_RENDER_SELFTEST3D=<scenes>, render.c). Before the game starts, each
// scene sends both 3D engines (melonDS's and the own one, gpu3d/) the same commands: random polygons given directly
// in screen space (identity matrices, W = 1 or random W through a scaled position), random colours, random
// rendering registers as ACWW_RENDER_SELFTEST3D_MASK allows, a swap; then a frame is rendered by both and the 3D
// pictures are compared (render_compare_3d: the first differing pixel and the polygon that drew it). Then the run
// ends. ACWW_RENDER_SELFTEST3D_SEED picks another random sequence; ACWW_RENDER_SELFTEST3D_POLYS the polygons per scene
// (default 1); ACWW_RENDER_SELFTEST3D_MASK (default 0: flat, opaque, Z-buffered triangles): 1 quads and strips,
// 2 colours per vertex, 4 W varies, 8 W-buffering, 16 translucency, 32 textures, 64 anti-aliasing, 128 alpha test,
// 256 fog, 512 edge marking, 1024 shadow polygons, 2048 toon / highlight.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gpu3d/gpu3d.h"
#include "host_mem.h"
#include "render.h"

static u32 sRng = 0x1234567, sMask, sPolys = 1;
static u32 rnd(void) {
    sRng ^= sRng << 13;
    sRng ^= sRng >> 17;
    sRng ^= sRng << 5;
    return sRng;
}
static u32 rnd_below(u32 n) { return rnd() % n; }
enum { M_QUADS = 1, M_GOURAUD = 2, M_W = 4, M_WBUF = 8, M_TRANS = 16, M_TEX = 32, M_AA = 64, M_ATEST = 128, M_FOG = 256,
       M_EDGE = 512, M_SHADOW = 1024, M_TOON = 2048 };

static void cmd(u32 c, u32 p) { render_write32(0x04000400 + (c - 0x10) * 4 + 0x40, p); }

// a vertex at screen position (sx, sy) in 1/16 pixels... given as clip coordinates with W = w (4.12)
static void vertex_at(s32 sx, s32 sy, s32 w, s32 z) {
    // with identity matrices and a scale of w: clip x = vx * w / 4096 ... VTX_16 is 4.12 in [-8, 8)
    // x_screen = (x + w) * 256 / 2w  ->  x = (sx / 128 - 1) * w; we pass vx = sx / 128 - 1 in 4.12 and scale by w
    (void)w;
    s32 vx = sx * 8 - 4096, vy = 4096 - sy * 32 / 3;  // (sx, sy in quarter pixels)
    cmd(0x23, (u32)(u16)vx | (u32)(u16)vy << 16);
    cmd(0x23, (u32)(u16)z);
}

static void scene(void) {
    render_write16(0x04000304, 0x820f);
    u16 disp = 0;
    if (sMask & M_TRANS) disp |= 8;
    if (sMask & M_AA && rnd() & 1) disp |= 16;
    render_write16(0x04000060, disp);
    render_write16(0x04000350, (u16)(rnd() & 0x7fff));
    render_write16(0x04000352, (u16)(rnd_below(2) ? 0x001f : 0x0000) | (u16)(rnd_below(64) << 8));
    render_write16(0x04000354, 0x7fff);
    cmd(0x10, 0);
    cmd(0x15, 0);
    cmd(0x10, 2);
    cmd(0x15, 0);
    if (sMask & M_W) {  // a random W: scale x, y, z and w alike through the projection
        s32 s = 0x400 + (s32)rnd_below(0x7000);
        cmd(0x10, 0);
        u32 m[16] = {(u32)s, 0, 0, 0, 0, (u32)s, 0, 0, 0, 0, (u32)s, 0, 0, 0, 0, (u32)s};
        for (int i = 0; i < 16; i++) cmd(0x16, m[i]);
        cmd(0x10, 2);
    }
    cmd(0x60, 0xbfff0000);
    for (u32 n = 0; n < sPolys; n++) {
        u32 alpha = (sMask & M_TRANS) && rnd_below(2) ? 1 + rnd_below(30) : 31;
        cmd(0x29, 0x000000c0 | alpha << 16 | rnd_below(64) << 24);
        cmd(0x2a, 0);
        int quad = (sMask & M_QUADS) && rnd_below(2);
        cmd(0x40, quad ? 1 : 0);
        int nv = quad ? 4 : 3;
        s32 z = (s32)rnd_below(0x2000) - 0x1000;
        // random vertices, made convex for quads by sorting around the centre
        s32 xs[4], ys[4];
        if (quad) {
            s32 cx = (s32)rnd_below(256 * 4), cy = (s32)rnd_below(192 * 4);
            s32 rx = 8 + (s32)rnd_below(400), ry = 8 + (s32)rnd_below(300);
            static const int kx[4] = {-1, 1, 1, -1}, ky[4] = {-1, -1, 1, 1};
            for (int k = 0; k < 4; k++) {
                xs[k] = cx + kx[k] * (rx + (s32)rnd_below(60)) - (s32)rnd_below(30);
                ys[k] = cy + ky[k] * (ry + (s32)rnd_below(60)) - (s32)rnd_below(30);
            }
        } else {
            for (int k = 0; k < 3; k++) {
                xs[k] = (s32)rnd_below(256 * 4 + 200) - 100;
                ys[k] = (s32)rnd_below(192 * 4 + 200) - 100;
            }
        }
        for (int k = 0; k < nv; k++) {
            if (k == 0 || (sMask & M_GOURAUD)) cmd(0x20, rnd() & 0x7fff);
            vertex_at(xs[k], ys[k], 0, z + (s32)rnd_below(0x200));
        }
        cmd(0x41, 0);
    }
    cmd(0x50, (sMask & M_WBUF) ? 2 : 0);
}

int render_compare_3d(const char *kind, u64 label);
void render_selftest3d(long scenes) __attribute__((noreturn));
void render_selftest3d(long scenes) {
    if (getenv("ACWW_RENDER_SELFTEST3D_SEED")) sRng = (u32)strtoul(getenv("ACWW_RENDER_SELFTEST3D_SEED"), 0, 0) | 1;
    if (getenv("ACWW_RENDER_SELFTEST3D_MASK")) sMask = (u32)strtoul(getenv("ACWW_RENDER_SELFTEST3D_MASK"), 0, 0);
    if (getenv("ACWW_RENDER_SELFTEST3D_POLYS")) sPolys = (u32)strtoul(getenv("ACWW_RENDER_SELFTEST3D_POLYS"), 0, 0);
    long bad = 0;
    if (getenv("ACWW_RENDER_SELFTEST3D_LATENCY")) {  // (which frame's swap melonDS's 3D picture shows)
        void melon_3d_lines(u32 *out);
        static u32 l[256 * 192];
        for (int k = 1; k < 6; k++) {
            render_write16(0x04000304, 0x820f);
            render_write16(0x04000350, (u16)k);
            render_write16(0x04000352, 0x1f);
            cmd(0x50, 0);
            for (int f = 0; f < 2; f++) {
                melon_3d_lines(l);
                u32 before = l[0];
                render_frame();
                melon_3d_lines(l);
                fprintf(stderr, "latency: clear colour %d set and swapped; frame %d: before %08x after %08x\n", k, f, before, l[0]);
            }
        }
        exit(0);
    }
    scene();
    render_frame();
    for (long n = 0; n < scenes; n++) {
        scene();
        render_frame();
        bad += render_compare_3d("self-test scene", (u64)n);
    }
    fprintf(stderr, "render-selftest3d: %ld scenes, %ld differ\n", scenes, bad);
    render_exit_report();
    exit(bad ? 1 : 0);
}
