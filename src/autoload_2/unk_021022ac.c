// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d NNS_G2dCharCanvasInitForOBJ1D: autoload_2 0x021022ac-0x02102340. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

// NitroSDK math.h: MATH_CountLeadingZerosInline (ARM code) is a one-instruction inline asm; the SDK's MATH_ILog2 is
// built on it. Same helper as src/ov067/unk_ov067_0225f1a0.cpp (see docs/assembly.md).
static inline u32 MATH_CountLeadingZerosInline(u32 x)
{
    asm { clz x, x }
    return x;
}
static inline u32 MATH_ILog2(u32 x) { return 31 - MATH_CountLeadingZerosInline(x); }

// OBJ size (log2 of the width and height in characters) for an area of 2^hs x 2^ws characters
typedef struct ObjShift { u8 w; u8 h; } ObjShift;
extern ObjShift data_02135cb8[4][4];

// The canvas's 32-bit parameter: for the OBJ 1D canvas the OBJ size, for the BG canvas the area width
typedef union CharCanvasParam { u32 u; ObjShift objShift; } CharCanvasParam;

struct CharCanvas;
extern void DrawGlyph1D(void);
extern void ClearContinuous(void);
extern void ClearArea1D(void);
// NNSi_G2dCharCanvasInitCommon (src/autoload_2/unk_02102340.c)
extern void InitCharCanvas(struct CharCanvas *cc, u8 *charBase, s32 w, s32 h, s32 mode, void (*dg)(void),
                           void (*cl)(void), void (*ca)(void), CharCanvasParam param);

void NNS_G2dCharCanvasInitForOBJ1D(struct CharCanvas *cc, u8 *charBase, s32 w, s32 h, s32 mode)
{
    CharCanvasParam param;
    const s32 ws = (w >= 8) ? 3 : MATH_ILog2(w);
    const s32 hs = (h >= 8) ? 3 : MATH_ILog2(h);
    {
        const ObjShift *p = &data_02135cb8[hs][ws];
        param.objShift.w = p->w;
        param.objShift.h = p->h;
    }
    InitCharCanvas(cc, charBase, w, h, mode, DrawGlyph1D, ClearContinuous, ClearArea1D, param);
}
