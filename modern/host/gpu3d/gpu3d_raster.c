// The own 3D engine's rasteriser (gpu3d.h): the polygon list handed over at the last swap, drawn into a 256x192
// colour buffer with depth, attribute and fog buffers; then the frame-end passes (edge marking, fog, anti-aliasing).
// Written from the hardware's documented behaviour (GBATEK "DS 3D Rendering").

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gpu3d_internal.h"

enum { W = 256, H = 192 };
static u32 sFrameBuf[2][W * H];
static int sShown;
static int sDiag;

// the buffers of the frame being drawn
static u32 sColor[W * H];     // r6 | g6 << 8 | b6 << 16 | a5 << 24
static u32 sDepth[W * H];     // 24 bits
static u8 sOpaqueId[W * H];   // the polygon id of the opaque polygon there (edge marking)
static u8 sTransId[W * H];    // the polygon id of the last translucent polygon there, 0xff none
static u8 sFlags[W * H];      // 1 fog, 2 edge, 4 translucent written
static s16 sPoly[W * H];      // (diagnostics: the polygon that wrote the pixel last, -1 none)

// ---- interpolation (perspective-correct, from the normalised W of the two ends)
typedef struct { s32 num, den; int shift; s64 factor; int linear; } Interp;
static void interp_setup(Interp *ip, s32 x, s32 x0, s32 x1, s32 w0, s32 w1, int shift) {
    ip->shift = shift;
    s32 span = x1 - x0, pos = x - x0;
    if (span <= 0) { ip->factor = 0; return; }
    if (w0 == w1) {  // linear
        ip->factor = ((s64)pos << shift) / span;
    } else {
        s64 a = (s64)pos * w0, b = (s64)(x1 - x) * w1;
        ip->factor = (a << shift) / (a + b);
    }
}
static s32 interp(const Interp *ip, s32 a0, s32 a1) {
    return a0 + (s32)(((s64)(a1 - a0) * ip->factor) >> ip->shift);
}
// W: the same interpolation gives the perspective-correct W
static s32 interp_z_linear(s32 x, s32 x0, s32 x1, s32 z0, s32 z1) {
    if (x1 <= x0) return z0;
    return z0 + (s32)(((s64)(z1 - z0) * (x - x0)) / (x1 - x0));
}

// ---- an edge between two vertices, stepped per scanline: x in 18 fractional bits
typedef struct {
    int v0, v1;          // vertex indices
    s32 x0, y0, x1, y1;
    s32 step;            // per line, 18 fractional bits
    int xmajor, negative;
} Edge;
static void edge_setup(Edge *e, const G3Polygon *p, int a, int b) {
    e->v0 = a;
    e->v1 = b;
    e->x0 = p->v[a]->x;
    e->y0 = p->v[a]->y;
    e->x1 = p->v[b]->x;
    e->y1 = p->v[b]->y;
    s32 dx = e->x1 - e->x0, dy = e->y1 - e->y0;
    e->negative = dx < 0;
    if (dy > 0) e->step = (s32)(((s64)(dx < 0 ? -dx : dx) << 18) / dy);
    else e->step = (dx < 0 ? -dx : dx) << 18;
    e->xmajor = e->step > (1 << 18);
}
// the pixels the edge covers on line y: [*xmin, *xmax]
static void edge_span(const Edge *e, s32 y, s32 *xmin, s32 *xmax) {
    s32 dy = y - e->y0;
    s64 xs = (s64)e->x0 << 18;
    if (!e->xmajor) {
        s64 x = xs + (e->negative ? -(s64)e->step * dy : (s64)e->step * dy);
        if (e->negative) x -= 1;  // (towards the left)
        *xmin = *xmax = (s32)(x >> 18);
        if (e->negative) { *xmin = *xmax = (s32)((x + (1 << 18)) >> 18); }
        return;
    }
    // an x-major edge covers a run of pixels on each line, from where it enters the line to where it leaves
    s64 a = xs + (s64)e->step * dy + (e->step >> 1) - (1 << 17);
    s64 b = a + e->step;
    if (!e->negative) {
        *xmin = (s32)(a >> 18);
        *xmax = (s32)((b >> 18) - 1);
    } else {
        s64 na = ((s64)e->x0 << 18) - (s64)e->step * dy - (e->step >> 1) + (1 << 17);
        s64 nb = na - e->step;
        *xmax = (s32)(na >> 18) - 0;
        *xmin = (s32)(nb >> 18) + 1;
    }
    if (*xmin > *xmax) *xmin = *xmax;
    if (y == e->y0 && !e->negative && *xmin < e->x0) *xmin = e->x0;
}

// ---- the rendering state of one polygon
static const G3RenderState *sR;

static u32 rgb5_to_6(u32 c) { return c ? c * 2 + 1 : 0; }

static void put_pixel(const G3Polygon *p, int x, int y, s32 z, s32 r, s32 g, s32 b, int idx) {
    int i = y * W + x;
    if (z >= (s32)sDepth[i]) return;  // (depth test: less)
    u32 a = p->attr >> 16 & 31;
    if (a == 0) a = 31;  // (wireframe: drawn opaque at the edges; to do)
    sColor[i] = (u32)(r >> 3) | (u32)(g >> 3) << 8 | (u32)(b >> 3) << 16 | a << 24;
    sDepth[i] = (u32)z;
    sPoly[i] = (s16)idx;
}

static void draw_polygon(const G3Polygon *p, int idx) {
    int n = p->nv;
    if (n < 3) return;
    s32 ytop = p->ytop, ybot = p->ybottom;
    if (ytop >= ybot) return;  // (to do: one-line polygons)
    // the two chains from the top vertex: one each way round
    int vt = p->vtop;
    int la = vt, lb = (vt + n - 1) % n;  // one way
    int ra = vt, rb = (vt + 1) % n;      // the other
    // skip horizontal edges at the top
    while (p->v[lb]->y <= p->v[la]->y && lb != vt) { la = lb; lb = (lb + n - 1) % n; if (p->v[la]->y > ytop) break; }
    while (p->v[rb]->y <= p->v[ra]->y && rb != vt) { ra = rb; rb = (rb + 1) % n; if (p->v[ra]->y > ytop) break; }
    Edge L, R;
    edge_setup(&L, p, la, lb);
    edge_setup(&R, p, ra, rb);
    for (s32 y = ytop; y < ybot; y++) {
        while (y >= p->v[lb]->y && lb != p->vbottom) { la = lb; lb = (lb + n - 1) % n; edge_setup(&L, p, la, lb); }
        while (y >= p->v[rb]->y && rb != p->vbottom) { ra = rb; rb = (rb + 1) % n; edge_setup(&R, p, ra, rb); }
        if (y < 0 || y >= H) continue;
        s32 lmin, lmax, rmin, rmax;
        edge_span(&L, y, &lmin, &lmax);
        edge_span(&R, y, &rmin, &rmax);
        const Edge *el = &L, *er = &R;
        if (lmin > rmin || (lmin == rmin && lmax > rmax)) {  // (the chains the other way round)
            s32 t;
            t = lmin; lmin = rmin; rmin = t;
            t = lmax; lmax = rmax; rmax = t;
            el = &R; er = &L;
        }
        // the attributes at the two ends of the span, interpolated along the edges
        s32 ends[2][6];  // z, w, r, g, b (s, t later)
        const Edge *es[2] = {el, er};
        for (int k = 0; k < 2; k++) {
            const Edge *e = es[k];
            Interp ip;
            interp_setup(&ip, y, e->y0, e->y1, p->w[e->v0], p->w[e->v1], 9);
            const G3Vertex *a = p->v[e->v0], *b = p->v[e->v1];
            ends[k][0] = p->wbuffer ? interp(&ip, p->z[e->v0], p->z[e->v1])
                                    : interp_z_linear(y, e->y0, e->y1, p->z[e->v0], p->z[e->v1]);
            ends[k][1] = interp(&ip, p->w[e->v0], p->w[e->v1]);
            for (int c = 0; c < 3; c++) ends[k][2 + c] = interp(&ip, a->color[c], b->color[c]);
        }
        s32 xl = lmin, xr = rmax;
        for (s32 x = xl; x <= xr; x++) {
            if (x < 0 || x >= W) continue;
            if (x == xr && !er->xmajor && er->x0 != er->x1) {}  // (right edge rule: to do)
            Interp ip;
            interp_setup(&ip, x, xl, xr, ends[0][1], ends[1][1], 8);
            s32 z = p->wbuffer ? interp(&ip, ends[0][0], ends[1][0]) : interp_z_linear(x, xl, xr, ends[0][0], ends[1][0]);
            s32 r = interp(&ip, ends[0][2], ends[1][2]);
            s32 g = interp(&ip, ends[0][3], ends[1][3]);
            s32 b = interp(&ip, ends[0][4], ends[1][4]);
            put_pixel(p, x, y, z, r, g, b, idx);
        }
    }
}

static void clear_buffers(void) {
    const G3RenderState *r = sR;
    u32 c = r->clearColor;
    u32 col = rgb5_to_6(c & 31) | rgb5_to_6(c >> 5 & 31) << 8 | rgb5_to_6(c >> 10 & 31) << 16 |
              (u32)(r->clearAttrHi & 31) << 24;
    u32 depth = (u32)(r->clearDepth & 0x7fff) * 0x200 + ((r->clearDepth & 0x7fff) == 0x7fff ? 0x1ff : 0);
    for (int i = 0; i < W * H; i++) {
        sColor[i] = col;
        sDepth[i] = depth;
        sOpaqueId[i] = (u8)(r->clearAttrHi >> 8 & 63);
        sTransId[i] = 0xff;
        sFlags[i] = c & 0x8000 ? 1 : 0;
        sPoly[i] = -1;
    }
}

void g3_render(void) {
    sR = &gG3Render;
    clear_buffers();
    for (int i = 0; i < sR->npoly; i++) draw_polygon(sR->poly[i], i);
    sShown ^= 1;
    memcpy(sFrameBuf[sShown], sColor, sizeof sColor);
}

const u32 *g3_frame_lines(void) { return sFrameBuf[sShown]; }
int g3_raster_pixel_polygon(int x, int y) { return sPoly[y * W + x]; }
void g3_raster_diagnostics(int on) { sDiag = on; }
int gpu3d_pixel_polygon(int x, int y, Gpu3dPolyInfo *info) {
    int i = sPoly[y * W + x];
    if (i < 0 || i >= gG3Render.npoly) return 0;
    const G3Polygon *p = gG3Render.poly[i];
    info->index = i;
    info->attr = p->attr;
    info->texparam = p->texparam;
    info->texpal = p->texpal;
    info->nverts = p->nv;
    for (int k = 0; k < p->nv; k++) {
        info->x[k] = p->v[k]->x;
        info->y[k] = p->v[k]->y;
        info->z[k] = p->z[k];
        info->w[k] = p->w[k];
    }
    info->translucent = p->translucent;
    return 1;
}
void gpu3d_set_diagnostics(int on) { sDiag = on; }
