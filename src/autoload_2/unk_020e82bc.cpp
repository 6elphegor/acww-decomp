// mwcc-flags: -nothumb -O4,p
// G001a part 4: the 4x3 matrix helper file, autoload_2 .text 0x020e82bc-0x020e8558. mwcc 1.2/base, C++, ARM, -O4,p.
// Owns .rodata 0x02135934-0x02135964 (an identity matrix) and autoload_3 .bss 0x021f47e0-0x021f4810 (a work matrix); both
// are used only from main (Gfx3d_Init, the model code), both are MtxFx43 and both sit between the key-pad file's objects
// and the next file's.
#include "types.h"
#include "sys/TreeNode.h"
#include "gfx/VecFx32.h"
#include "sys/ListNode.h"

struct Tree {
    TreeNode *root;
};
struct MtxFx43 {
    s32 m[4][3];
};
struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
};
struct TPCalibrateParam {
    s16 x0, xDotSize, y0, yDotSize;
};
struct PadState {
    u16 cur;
    u16 trig;
    s16 dir;
};

extern "C" {
s32 func_02133150(s32, s32); // _s32_div_f (called by the compiler for the s16 division)
s32 FX_Div(s32, s32); // FX_Div
s32 VEC_Mag(const VecFx32 *v); // VEC_Mag
void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *dst); // VEC_Add
void MTX_RotZ43_(MtxFx43 *m, s32 sin, s32 cos); // MTX_RotZ43_ (Thumb)
void MTX_RotY43_(MtxFx43 *m, s32 sin, s32 cos); // MTX_RotY43_ (Thumb)
void MTX_RotX43_(MtxFx43 *m, s32 sin, s32 cos); // MTX_RotX43_ (Thumb)
void MTX_Scale43_(MtxFx43 *m, s32 x, s32 y, s32 z); // MTX_Scale43_ (Thumb)
void MTX_Concat43(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab); // MTX_Concat43
void Vec_Sub(VecFx32 *out, const VecFx32 *a, const VecFx32 *b); // out = a - b
s32 Vec_MagXZ(const VecFx32 *v); // length in the XZ plane
void Vec_Scale(VecFx32 *v, s32 s); // scale
u16 TP_GetLatestIndexInAuto(void); // TP_GetLatestIndexInAuto
void TP_GetCalibratedPoint(TPData *dst, const TPData *src); // TP_GetCalibratedPoint
void TP_Init(void); // TP_Init
BOOL TP_GetUserInfo(TPCalibrateParam *p); // TP_GetUserInfo
void TP_SetCalibrateParam(const TPCalibrateParam *p); // TP_SetCalibrateParam
void TP_RequestSetStabilityAsync(u32, u32);
void TP_WaitBusy(u32); // TP_WaitBusy
u32 TP_CheckError(u32); // TP_CheckError
void TP_RequestAutoSamplingStartAsync(u32, u32, TPData *, u32); // TP_RequestAutoSamplingStartAsync
void Fatal_Trap(void); // Thumb, in main: fatal stop

extern u16 data_0213a748[]; // atan table (.data of autoload_2)
extern const s16 kPadDirAngleTable[]; // direction (angle) by D-pad bits, const s16[16] at the start of .rodata
extern const s16 data_02135f44[]; // FX_SinCosTable_
extern s32 gFrameCounter;
extern s32 data_021f476c;
extern u8 gTouchHeld; // touch state of the previous frame
extern u8 gTouchChanged; // touch edge
extern u16 gTouchX; // touch x
extern u16 gTouchY; // touch y
extern TPData sTouchPoint;
extern TPData sTouchSampleBuf[9]; // auto-sampling buffer
extern u8 data_021f47d0;
extern u16 sPadPrevHeld; // keys of the previous frame
extern PadState gPad;

BOOL List_PushFront(List *list, ListNode *node);
void TreeNode_Init(TreeNode *n);
u32 Random_Next(u32 *seed);
void Mtx43_SetRotZ(MtxFx43 *m, s32 angle);
void Mtx43_SetRotY(MtxFx43 *m, s32 angle);
void Mtx43_SetRotX(MtxFx43 *m, s32 angle);
void Mtx43_SetTranslate(MtxFx43 *m, s32 x, s32 y, s32 z);
}

// FX_Mul of the SDK
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

// PAD_Read / PAD_DetectFold of the SDK (REG_KEYINPUT 0x04000130, shared work X/Y/fold word 0x027fffa8)
static inline u16 PAD_Read(void) {
    return (u16)(((*(vu16 *)0x04000130 | *(vu16 *)0x027fffa8) ^ 0x2fff) & 0x2fff);
}
static inline BOOL PAD_DetectFold(void) {
    return (*(vu16 *)0x027fffa8 & 0x8000) >> 15;
}

#define FX_SinIdx(a) data_02135f44[((a) >> 4) * 2]
#define FX_CosIdx(a) data_02135f44[((a) >> 4) * 2 + 1]
extern "C" void Mtx43_Translate(MtxFx43 *m, s32 x, s32 y, s32 z) {
    MtxFx43 t;
    Mtx43_SetTranslate(&t, x, y, z);
    MTX_Concat43(&t, m, m);
}

extern "C" void Mtx43_Scale(MtxFx43 *m, s32 x, s32 y, s32 z) {
    MtxFx43 t;
    MTX_Scale43_(&t, x, y, z);
    MTX_Concat43(&t, m, m);
}

extern "C" void Mtx43_RotateXYZ(MtxFx43 *m, s32 x, s32 y, s32 z) {
    MtxFx43 t;
    if (z != 0) {
        Mtx43_SetRotZ(&t, z);
        MTX_Concat43(&t, m, m);
    }
    if (y != 0) {
        Mtx43_SetRotY(&t, y);
        MTX_Concat43(&t, m, m);
    }
    if (x != 0) {
        Mtx43_SetRotX(&t, x);
        MTX_Concat43(&t, m, m);
    }
}

extern "C" void Mtx43_RotateX(MtxFx43 *m, s32 angle) {
    MtxFx43 t;
    Mtx43_SetRotX(&t, angle);
    MTX_Concat43(&t, m, m);
}

extern "C" void Mtx43_RotateY(MtxFx43 *m, s32 angle) {
    MtxFx43 t;
    Mtx43_SetRotY(&t, angle);
    MTX_Concat43(&t, m, m);
}

extern "C" void Mtx43_RotateZ(MtxFx43 *m, s32 angle) {
    MtxFx43 t;
    Mtx43_SetRotZ(&t, angle);
    MTX_Concat43(&t, m, m);
}

extern "C" void Mtx43_SetTranslate(MtxFx43 *m, s32 x, s32 y, s32 z) {
    m->m[0][0] = 0x1000;
    m->m[0][1] = 0;
    m->m[0][2] = 0;
    m->m[1][0] = 0;
    m->m[1][1] = 0x1000;
    m->m[1][2] = 0;
    m->m[2][0] = 0;
    m->m[2][1] = 0;
    m->m[2][2] = 0x1000;
    m->m[3][0] = x;
    m->m[3][1] = y;
    m->m[3][2] = z;
}

extern "C" void Mtx43_SetRotX(MtxFx43 *m, s32 angle) {
    MTX_RotX43_(m, FX_SinIdx((u16)angle), FX_CosIdx((u16)angle));
}

extern "C" void Mtx43_SetRotY(MtxFx43 *m, s32 angle) {
    MTX_RotY43_(m, FX_SinIdx((u16)angle), FX_CosIdx((u16)angle));
}

extern "C" void Mtx43_SetRotZ(MtxFx43 *m, s32 angle) {
    MTX_RotZ43_(m, FX_SinIdx((u16)angle), FX_CosIdx((u16)angle));
}

// ---- file-scope objects (defined after their users)
extern const MtxFx43 data_02135934;
const MtxFx43 data_02135934 = {{{0x1000, 0, 0}, {0, 0x1000, 0}, {0, 0, 0x1000}, {0, 0, 0}}}; // identity
MtxFx43 data_021f47e0; // work matrix of main's model code
