// mwcc-flags: -nothumb -O4,p
// G015b: autoload_2 0x020fe5c0-0x020fe848 (1 function). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ name, nothing defined but the function.
// WVR_StartUpAsync: acquire VRAM banks C/D (0x04000242/0x04000243 VRAMCNT) for the ARM7 under a lock id, with a completion callback (func_020fe4b4 is the PXI receive callback).
#include "types.h"
#include "gfx/SplPtclTypes.h"
#include "gfx/SplParticleViews.h"
#include "gfx/VecFx32.h"
#include "gfx/SplTex.h"
#include "gfx/MagF.h"
#include "gfx/P.h"
#include "nitro/mtx.h"

struct P;







struct Res {
    Hdr *hdr;
    u8 p4[4];
    Tex *p8;
    u8 pc[4];
    Tab *p10;
};

struct E {
    u8 p0[8];
    PList list;
    u8 p10[8];
    Res *res;
    u8 p1c[4];
    VecFx32 pos;
    u8 p2c[14];
    s16 phase;
    VecFx16 dir;
    u8 p42[2];
    s32 radius;
    s32 len;
    s32 w4c;
    s32 w50;
    s32 w54;
    u16 h58;
    u8 p5a[2];
    s32 w5c;
    u8 p60[8];
    u8 b68;
    u8 b69;
    u8 p6a[2];
    VecFx16 ax1;
    VecFx16 ax2;
};








extern "C" {
extern u32 data_021f5c3c;
extern const s16 data_02135f44[];
extern VecFx16 data_0213bba4;
extern u16 data_021f5c40;
extern u16 data_021f5c44;
extern u32 data_021f5c48;
extern void (*data_021f5c4c)(u32, u32);

void VEC_Fx16CrossProduct(const VecFx16 *a, const VecFx16 *b, VecFx16 *out);
s32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
void VEC_Fx16Normalize(const VecFx16 *src, VecFx16 *dst);
s32 VEC_Fx16DotProduct(const VecFx16 *a, const VecFx16 *b);
void VEC_Normalize(const VecFx32 *src, VecFx32 *dst);
void MTX_RotX33_(MtxFx33 *m, s32 s, s32 c);
void MTX_RotY33_(MtxFx33 *m, s32 s, s32 c);
void MTX_RotZ33_(MtxFx33 *m, s32 s, s32 c);
void MTX_MultVec33(const VecFx32 *v, const MtxFx33 *m, VecFx32 *dst);
u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32 old);
void OSi_UnlockVram(u32 a, u32 b);
s32 OSi_TryLockVram(u32 a, u32 b);
void PXI_Init(void);
s32 PXI_IsCallbackReady(u32 a, u32 b);
void PXI_SetFifoRecvCallback(u32 a, void *b);
s32 PXI_SendWordByFifo(u32 a, u32 b, u32 c);
s32 OS_GetLockID(void);
void func_020fe4b0(u32 a, u32 b);
void func_020fe4b4(u32 a, u32 b);
void spl_rndm_get_arb_vec_xyz(VecFx32 *v);
void spl_rndm_get_arb_vec_xy(VecFx32 *v);
void spl_push_front(PList *l, P *n);
P *spl_pop_front(PList *l);
void spl_set_cross_to_axis(E *e);
void spl_set_circle_axis(VecFx32 *out, const VecFx32 *in, E *e);
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

#define SIN_IDX(i) (data_02135f44[((i) >> 4) * 2])
#define COS_IDX(i) (data_02135f44[((i) >> 4) * 2 + 1])

extern "C" s32 WVR_StartUpAsync(u32 cmd, void (*cb)(u32, u32), u32 arg) {
    PXI_Init();
    if (PXI_IsCallbackReady(15, 1) == 0) {
        return 2;
    }
    while (data_021f5c40 == 0) {
        s32 id = OS_GetLockID();
        if (id == -3) {
            return 7;
        }
        data_021f5c40 = id;
    }
    u32 old = OS_DisableInterrupts();
    if (data_021f5c4c != 0) {
        OS_RestoreInterrupts(old);
        return 5;
    }
    if (data_021f5c44 != 0) {
        OS_RestoreInterrupts(old);
        return 5;
    }
    switch (cmd) {
    case 4:
        if (OSi_TryLockVram(4, data_021f5c40) == 0) {
            OS_RestoreInterrupts(old);
            return 6;
        }
        data_021f5c44 = 4;
        *(volatile u8 *)0x04000242 = 0x82;
        break;
    case 8:
        if (OSi_TryLockVram(8, data_021f5c40) == 0) {
            OS_RestoreInterrupts(old);
            return 6;
        }
        data_021f5c44 = 8;
        *(volatile u8 *)0x04000243 = 0x82;
        break;
    case 12:
        if (OSi_TryLockVram(12, data_021f5c40) == 0) {
            OS_RestoreInterrupts(old);
            return 6;
        }
        data_021f5c44 = 12;
        *(volatile u8 *)0x04000242 = 0x82;
        *(volatile u8 *)0x04000243 = 0x8a;
        break;
    default:
        OS_RestoreInterrupts(old);
        return 3;
    }
    if (PXI_IsCallbackReady(15, 0) == 0) {
        PXI_SetFifoRecvCallback(15, (void *)func_020fe4b4);
    }
    if (cb == 0) {
        data_021f5c4c = func_020fe4b0;
    } else {
        data_021f5c4c = cb;
    }
    data_021f5c48 = arg;
    if (PXI_SendWordByFifo(15, 0x10000, 0) < 0) {
        OSi_UnlockVram(data_021f5c44, data_021f5c40);
        data_021f5c44 = 0;
        data_021f5c4c = 0;
        OS_RestoreInterrupts(old);
        return 4;
    }
    OS_RestoreInterrupts(old);
    return 1;
}

#define LCG() (data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173)

