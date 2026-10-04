// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d CharCanvas: character number of a pixel position on an OBJ (1D mapping) canvas.
// autoload_2 0x021030bc-0x021031c4. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

// NitroSDK math.h: MATH_CountLeadingZerosInline (ARM code) is a one-instruction inline asm; the SDK's MATH_ILog2 is
// built on it. Same helper as src/autoload_2/unk_02101de8.c (see docs/assembly.md).
static inline u32 MATH_CountLeadingZerosInline(u32 x)
{
    asm { clz x, x }
    return x;
}
static inline u32 MATH_ILog2(u32 x) { return 31 - MATH_CountLeadingZerosInline(x); }

// OBJ size (log2 of the width and height in characters) for an area of 2^hs x 2^ws characters
typedef struct ObjShift { u8 w; u8 h; } ObjShift;
extern ObjShift data_02135cb8[4][4];

// OBJ size NNS_G2dArrangeOBJ1D picks for an area of w x h characters. The original writes the shifts through
// pointers: the caller's shift parameters stay in their stack slots and are reloaded every round.
static inline void GetOBJShift(s32 *pw, s32 *ph, s32 w, s32 h)
{
    const int ws = (w >= 8) ? 3 : MATH_ILog2(w);
    const int hs = (h >= 8) ? 3 : MATH_ILog2(h);
    const ObjShift *p = &data_02135cb8[hs][ws];
    *pw = p->w;
    *ph = p->h;
}

static inline u32 LowBits(u32 v, u32 mask) { return v & ~mask; }

// Character (x, y) of an area of w x h characters laid out by NNS_G2dArrangeOBJ1D with OBJs of 2^sw x 2^sh
// characters: the full-OBJ block comes first, then the right, bottom and corner remainders, each laid out the same
// way with its own OBJ size.
u32 GetCharIndex1D(u32 x, u32 y, s32 w, s32 h, s32 sw, s32 sh)
{
    u32 base = 0;
    u32 bh;
    u32 bw;
    u32 wm;
    u32 hm;
    for (;;) {
        wm = ~0 << sw;
        hm = ~0 << sh;
        bw = w & wm;
        bh = h & hm;
        if (bh <= y) {
            base += w * bh;
            if (bw > x) {
                w = bw;
                y -= bh;
                h -= bh;
            } else {
                h -= bh;
                base += bw * h;
                x -= bw;
                y -= bh;
                w -= bw;
            }
        } else {
            u32 lm = ~hm;
            if (bw <= x) {
                base += bw * bh;
                h = bh;
                x -= bw;
                w -= bw;
            } else {
                base += bw * (y & hm);
                return base + ((x & wm) << sh) + ((y & lm) << sw) + LowBits(x, wm);
            }
        }
        GetOBJShift(&sw, &sh, w, h);
    }
}
