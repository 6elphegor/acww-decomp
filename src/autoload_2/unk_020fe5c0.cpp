// mwcc-flags: -nothumb -O4,p
// G015b: autoload_2 0x020fe5c0-0x020fe848 (1 function). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ name, nothing defined but the function.
// func_020fe5c0: acquire VRAM banks C/D (0x04000242/0x04000243 VRAMCNT) for the ARM7 under a lock id, with a completion callback (func_020fe4b4 is the PXI receive callback).
#include "types.h"

struct VecFx32 { s32 x, y, z; };
struct VecFx16 { s16 x, y, z; };
struct V3Arr { s32 v[3]; };
struct MtxFx33 { s32 m[9]; };

struct P;
struct PList {
    P *head;
    s32 count;
};

struct Fl2e {
    u16 col : 5;
    u16 alpha : 5;
    u16 rest : 6;
};

struct P {
    P *next;
    P *prev;
    VecFx32 pos;
    VecFx32 vel;
    u16 rot0;
    u16 rot1;
    u16 life;
    u16 age;
    u16 h28;
    u16 h2a;
    u8 b2c;
    u8 b2d;
    Fl2e fl;
    s32 w30;
    s16 s34;
    u16 col;
    VecFx32 epos;
};

struct HF {
    u32 type : 4;
    u32 a : 2;
    u32 axis : 2;
    u32 c : 1;
    u32 f9 : 1;
    u32 b10 : 1;
    u32 f11 : 1;
    u32 f12 : 1;
    u32 f13 : 1;
    u32 b14 : 6;
    u32 f20 : 1;
    u32 rest : 11;
};

struct Hdr {
    HF f;
    u8 p4[12];
    s32 rate;
    u8 p14[14];
    u16 col;
    u8 p24[16];
    s16 s34;
    s16 s36;
    u8 p38[4];
    u8 b3c;
    u8 b3d;
    u8 b3e;
    u8 p3f[4];
    u8 b43;
    u8 b44;
};

struct Tex {
    u16 c0;
    u16 c1;
    u8 p4[4];
    u16 b0 : 1;
    u16 rest : 15;
};

struct TabBF {
    u32 n : 8;
    u32 step : 8;
    u32 f16 : 1;
    u32 rest : 15;
};
struct TabB {
    u8 n;
    u8 step;
};
union TabU {
    TabBF bf;
    TabB b;
};
struct Tab {
    u8 v[8];
    TabU x;
};

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

struct AnimRec {
    s16 s0, s2, s4;
    u8 t1, t2;
};

struct ColRec {
    u16 c0;
    u16 c2;
    u8 b4, b5, b6, b7;
    u16 f0 : 1;
    u16 f1 : 1;
    u16 f2 : 1;
    u16 frest : 13;
};

struct Col5 {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

struct AlphaRec {
    Col5 c;
    u8 b2;
    u8 p3;
    u8 t1, t2;
};

struct SclRec {
    u8 p0[4];
    s16 sc;
};

struct Ctx {
    Hdr *hdr;
    AnimRec *rec4;
    ColRec *rec8;
    AlphaRec *recc;
    Tab *rec10;
    SclRec *rec14;
};

struct GravF { s16 x, y, z; };
struct RandF { s16 x, y, z; u16 intv; };
struct MagF { s32 x, y, z; s16 force; };
struct SpinF { u16 angle; u16 axis; };
struct CollF { s32 y; s16 coef; u16 type : 2; u16 rest : 14; };
struct ConvF { s32 x, y, z; s16 coef; };

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
void func_02117dcc(void);
s32 PXI_IsCallbackReady(u32 a, u32 b);
void PXI_SetFifoRecvCallback(u32 a, void *b);
s32 PXI_SendWordByFifo(u32 a, u32 b, u32 c);
s32 OS_GetLockID(void);
void func_020fe4b0(u32 a, u32 b);
void func_020fe4b4(u32 a, u32 b);
void spl_rndm_get_arb_vec_xyz(VecFx32 *v);
void spl_rndm_get_arb_vec_xy(VecFx32 *v);
void func_020fe3a0(PList *l, P *n);
P *func_020fe35c(PList *l);
void func_020fd820(E *e);
void func_020fd6c0(VecFx32 *out, const VecFx32 *in, E *e);
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

#define SIN_IDX(i) (data_02135f44[((i) >> 4) * 2])
#define COS_IDX(i) (data_02135f44[((i) >> 4) * 2 + 1])

extern "C" s32 func_020fe5c0(u32 cmd, void (*cb)(u32, u32), u32 arg) {
    func_02117dcc();
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

