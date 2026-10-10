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
typedef struct { int shift; s64 factor; } Interp;
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

// ---- an edge between two vertices (y0 < y1), stepped per scanline: x in 18 fractional bits. The increment is
// |dx| times the reciprocal of dy (18 bits; exactly one pixel for a diagonal). An edge is y-major (at most one pixel
// per line) when |dx| <= dy.
typedef struct {
    int v0, v1;          // vertex indices
    s32 x0, y0, x1, y1;
    s64 step;
    int xmajor, sign;    // sign: +1 right, -1 left, 0 vertical
    int bottom;          // it ends at the polygon's bottom
} Edge;
static void edge_setup(Edge *e, const G3Polygon *p, int a, int b) {
    e->v0 = a;
    e->v1 = b;
    e->x0 = p->v[a]->x;
    e->y0 = p->v[a]->y;
    e->x1 = p->v[b]->x;
    e->y1 = p->v[b]->y;
    s32 dx = e->x1 - e->x0, dy = e->y1 - e->y0, adx = dx < 0 ? -dx : dx;
    e->sign = dx > 0 ? 1 : dx < 0 ? -1 : 0;
    e->step = dy <= 0 ? 0 : adx == dy ? 1 << 18 : (s64)adx * ((1 << 18) / dy);
    e->xmajor = adx > dy;
}
// x at line y + k (k = 0 or 1), 18 fractional bits; edges going left are one unit further left
static s64 edge_x(const Edge *e, s32 y, int k) {
    s64 x = ((s64)e->x0 << 18) + e->sign * e->step * (y - e->y0 + k);
    return e->sign < 0 ? x - 1 : x;
}
// the first pixel of a span with this edge on its left, and the last one with it on its right
static s32 edge_left(const Edge *e, s32 y) {
    if (!e->sign) return e->x0;
    if (!e->xmajor) return (s32)(edge_x(e, y, 0) >> 18);
    // (x-major: where the edge leaves the line; going right on its last line, where it enters)
    return (s32)((edge_x(e, y, e->sign > 0 && y + 1 == e->y1 && e->bottom ? 0 : 1) + (1 << 17)) >> 18);
}
static s32 edge_right(const Edge *e, s32 y) {
    if (!e->sign) return e->x0 - 1;
    s32 dy = e->y1 - e->y0, adx = e->x1 > e->x0 ? e->x1 - e->x0 : e->x0 - e->x1;
    if (!e->xmajor) return (s32)(edge_x(e, y, 0) >> 18) - 1;
    return (s32)((edge_x(e, y, e->sign < 0 && y + 1 == e->y1 && e->bottom ? 0 : 1) + (1 << 17)) >> 18) - 1;
}

// ---- colours (fitted to melonDS with equal W; ACWW_RENDER_SELFTEST3D_MASK=2): along an edge at the line where the
// edge is furthest out (y + 1 for a left edge going left or a right edge going right, else y), exact and rounded down;
// along the span between the two edges' x at that line, not between the first and last pixel drawn
// exact only between equal W with its low 7 bits clear; otherwise a factor (9 bits along edges, 8 along spans)
static int exact_ok(s32 w0, s32 w1) { return w0 == w1 && !(w0 & 0x7f); }
static s32 lerp_floor(s32 a0, s32 a1, s32 pos, s32 span) {
    if (span <= 0) return a0;
    s64 d = (s64)(a1 - a0) * pos;
    return a0 + (s32)(d >= 0 ? d / span : -((-d + span - 1) / span));
}
// side 0 left, 1 right: returns the line offset (0 or 1) and sets *x: an x-major edge (45 degrees included) rounded at
// that line; a y-major one at line y, rounded down on the left and up on the right
static int span_end(const Edge *e, int side, s32 y, s32 *x) {
    s32 dx = e->x1 - e->x0, dy = e->y1 - e->y0;
    int out = side ? dx > 0 : dx < 0;
    if ((dx < 0 ? -dx : dx) >= dy && dx) {
        *x = (s32)((edge_x(e, y, out) + (1 << 17)) >> 18);
        return out;
    }
    s64 v = edge_x(e, y, 0);
    *x = (s32)(side ? -((-v) >> 18) : v >> 18);
    return 0;
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

// the polygon's two edges that cross line y (the left one first); 0 if fewer than two do
static int edges_at(const G3Polygon *p, s32 y, Edge *l, Edge *r) {
    int n = p->nv, found = 0, flatbottom = 0;
    s32 bx = -1;  // (a horizontal bottom edge: two bottom vertices at different x)
    for (int i = 0; i < n; i++)
        if (p->v[i]->y == p->ybottom) {
            if (bx >= 0 && p->v[i]->x != bx) flatbottom = 1;
            bx = p->v[i]->x;
        }
    // the winding on the screen decides which of the two chains down from the top vertex is the left one (the
    // edges can cross near a vertex)
    s64 area = 0;
    for (int i = 0; i < n; i++) {
        const G3Vertex *a = p->v[i], *b = p->v[(i + 1) % n];
        area += (s64)a->x * b->y - (s64)b->x * a->y;
    }
    Edge e[2];
    double mid[2];
    int down[2];
    for (int i = 0; i < n && found < 2; i++) {
        int a = i, b = (i + 1) % n;
        s32 ya = p->v[a]->y, yb = p->v[b]->y;
        if (ya == yb) continue;
        down[found] = ya < yb;  // (going down in the vertex order)
        if (ya > yb) { int t = a; a = b; b = t; s32 u = ya; ya = yb; yb = u; }
        if (y < ya || y >= yb) continue;
        edge_setup(&e[found], p, a, b);
        e[found].bottom = yb == p->ybottom && flatbottom;
        s32 dx = p->v[b]->x - p->v[a]->x, dy = yb - ya;
        mid[found] = p->v[a]->x + (double)dx * (2.0 * (y - ya) + 1) / (2.0 * dy);
        found++;
    }
    if (found < 2) return 0;
    // clockwise (area > 0, y down): the chain in the vertex order is the right one
    int s = area == 0 || down[0] == down[1] ? mid[1] < mid[0] : (down[0] == (area > 0));
    *l = e[s];
    *r = e[!s];
    return 1;
}

static void draw_polygon(const G3Polygon *p, int idx) {
    int n = p->nv;
    if (n < 3) return;
    s32 ytop = p->ytop, ybot = p->ybottom;
    if (ytop >= ybot) return;  // (to do: one-line polygons)
    for (s32 y = ytop; y < ybot; y++) {
        if (y < 0 || y >= H) continue;
        Edge L, R;
        if (!edges_at(p, y, &L, &R)) continue;
        s32 a = edge_left(&L, y), b = edge_right(&R, y);
        // the left edge's own pixels are drawn even where the right edge is already left of them
        if (!L.xmajor) {
            if (b < a) b = a;
        } else if (L.sign < 0) {
            s32 run = (s32)((edge_x(&L, y, 0) + (1 << 17)) >> 18) - 1;
            if (b < run) b = run;
            if (b < a) b = a;
        }
        if (b < a) continue;
        s32 lmin = a, rmax = b;
        const Edge *el = &L, *er = &R;
        // the attributes at the two ends of the span, interpolated along the edges
        s32 ends[2][6];  // z, w, r, g, b (s, t later)
        s32 cx[2];       // the x the colours are interpolated between (span_end)
        const Edge *es[2] = {el, er};
        for (int k = 0; k < 2; k++) {
            const Edge *e = es[k];
            Interp ip;
            interp_setup(&ip, y, e->y0, e->y1, p->w[e->v0], p->w[e->v1], 9);
            const G3Vertex *a = p->v[e->v0], *b = p->v[e->v1];
            ends[k][0] = p->wbuffer ? interp(&ip, p->z[e->v0], p->z[e->v1])
                                    : interp_z_linear(y, e->y0, e->y1, p->z[e->v0], p->z[e->v1]);
            ends[k][1] = interp(&ip, p->w[e->v0], p->w[e->v1]);
            s32 yc = y + span_end(e, k, y, &cx[k]);
            s32 w0 = p->w[e->v0], w1 = p->w[e->v1];
            Interp ic;
            if (!exact_ok(w0, w1)) interp_setup(&ic, yc, e->y0, e->y1, w0, w1, 9);
            for (int c = 0; c < 3; c++)
                ends[k][2 + c] = exact_ok(w0, w1) ? lerp_floor(a->color[c], b->color[c], yc - e->y0, e->y1 - e->y0)
                                                  : interp(&ic, a->color[c], b->color[c]);
        }
        s32 xl = lmin, xr = rmax;
        for (s32 x = xl; x <= xr; x++) {
            if (x < 0 || x >= W) continue;
            Interp ip;
            interp_setup(&ip, x, xl, xr + 1, ends[0][1], ends[1][1], 8);
            s32 z = p->wbuffer ? interp(&ip, ends[0][0], ends[1][0]) : interp_z_linear(x, xl, xr, ends[0][0], ends[1][0]);
            s32 col[3];
            int ex = exact_ok(ends[0][1], ends[1][1]);
            Interp ic;
            if (!ex) interp_setup(&ic, x, cx[0], cx[1], ends[0][1], ends[1][1], 8);
            for (int c = 0; c < 3; c++)
                col[c] = cx[1] == cx[0] ? ends[0][2 + c]
                         : ex           ? lerp_floor(ends[0][2 + c], ends[1][2 + c], x - cx[0], cx[1] - cx[0])
                                        : interp(&ic, ends[0][2 + c], ends[1][2 + c]);
            s32 r = col[0], g = col[1], b = col[2];
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
