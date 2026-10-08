// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g3d: SBC length table lookup, NNS_G3dInit, matrix restore/read-back helpers, per-material setter loops.
// autoload_2 0x02105d50-0x02106020. ARM, mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef short s16;
typedef int s32;
#include "types64.h"
#include "nitro/io_access.h"
typedef int BOOL;
#define NULL 0


#include "nnsys/g3d_rt.h"
#include "proto/autoload_2/unk_021040ac.h"
#include "proto/autoload_2/unk_02105d50.h"
#include "proto/autoload_2/unk_02110c98.h"
#include "proto/itcm/unk_01ff8ad4.h"
typedef G3dRS RS;  // NNSG3dRS
extern void NNS_G3dGeBufferOP_N(u32, void *, u32);
extern const s8 data_02135d5c[256];
extern BOOL G3X_GetClipMtx(void *);
extern BOOL G3X_GetVectorMtx(void *);
extern void MTX_Copy44To43_(void *, void *);
// (src/autoload_2/unk_02106020.c)
extern void NNS_G3dMdlSetMdlAlpha(u8 *res, u32 i, u32 v);
extern void NNS_G3dMdlSetMdlPolygonID(u8 *res, u32 i, u32 v);
extern void NNS_G3dMdlSetMdlLightEnableFlag(u8 *res, u32 i, u32 v);
extern void NNS_G3dMdlSetMdlEmi(u8 *res, u32 i, u32 v);

// NNS_G3dMdl*All: apply a per-material setter to all materials of a model (count at +0x18)
void NNS_G3dMdlSetMdlEmiAll(u8 *m, u32 x)
{
    u32 i;
    for (i = 0; i < m[24]; i++) {
        NNS_G3dMdlSetMdlEmi(m, i, x);
    }
}

void NNS_G3dMdlSetMdlLightEnableFlagAll(u8 *m, u32 x)
{
    u32 i;
    for (i = 0; i < m[24]; i++) {
        NNS_G3dMdlSetMdlLightEnableFlag(m, i, x);
    }
}

void NNS_G3dMdlSetMdlPolygonIDAll(u8 *m, u32 x)
{
    u32 i;
    for (i = 0; i < m[24]; i++) {
        NNS_G3dMdlSetMdlPolygonID(m, i, x);
    }
}

void NNS_G3dMdlSetMdlAlphaAll(u8 *m, u32 x)
{
    u32 i;
    for (i = 0; i < m[24]; i++) {
        NNS_G3dMdlSetMdlAlpha(m, i, x);
    }
}

// NNS_G3dGetCurrentMtx(pos, nrm): reads the current position/normal matrices back from the geometry engine (projection matrix saved/cleared around it)
void NNS_G3dGetCurrentMtx(void *a, void *b)
{
    s32 buf[16];
    s32 *p;
    NNS_G3dGeFlushBuffer();
    IO_W((volatile u32 *)0x04000440, 0);
    IO_W((volatile u32 *)0x04000444, 0);
    IO_W((volatile u32 *)0x04000454, 0);
    if (a != NULL) {
        p = buf;
        while (G3X_GetClipMtx(p) != 0) {
        }
        MTX_Copy44To43_(buf, a);
    }
    if (b != NULL) {
        while (G3X_GetVectorMtx(b) != 0) {
        }
    }
    IO_W((volatile u32 *)0x04000448, 1);
    IO_W((volatile u32 *)0x04000440, 2);
}

// restores matrix stack slot of node entry idx (stack id 31 = none) and optionally reads back the current matrices
BOOL NNS_G3dGetResultMtx(G3dRenderObj *obj, void *a, void *b, u32 idx)
{
    u8 *base = (u8 *)obj->resMdl + 0x40;  // the model's node dictionary
    u8 *dict = base + *(u16 *)(base + 6);
    u8 *ent = dict + *(u16 *)dict * idx;
    u32 kind = (u32)(*(u16 *)(base + *(u32 *)(ent + 4)) & 0xf800) >> 11;
    if (kind != 31) {
        u32 id = kind;
        NNS_G3dGeBufferOP_N(0x14, &id, 1);
        if (a != NULL || b != NULL) {
            NNS_G3dGetCurrentMtx(a, b);
        }
        return 1;
    }
    return 0;
}


// NNS_G3dInit
void NNS_G3dInit(void)
{
    G3X_Init();
    NNS_G3dGlbInit();
    IO_W((volatile u32 *)0x04000600, (IO_R((volatile u32 *)0x04000600) & ~0xc0000000) | 0x80000000);
}

// byte length of an SBC command (table data_02135d5c, 0 = variable length for opcode 9, -1 = invalid)
// NNS_G3dSbcCmdLen-like: byte length of an SBC command, -1 if unknown
s32 NNS_G3dGetSbcCmdLen(u8 *c)
{
    u32 cmd = *c;
    s32 n = data_02135d5c[cmd];
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        if (cmd == 9) {
            return (c[2] + 1) * 3;
        }
        return -1;
    }
    return n;
}

// ---- file-scope objects (.rodata 0x02135d5c-0x02135e5c): byte length of each SBC command
const s8 data_02135d5c[256] = {
    1, 1, 3, 2, 2, 2, 4, 2, 2, 0, 9, 1, 3, 3, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 2, -1, 5, 3, 3, 0, -1, 1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 2, -1, 5, 3, 3, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 6, 4, 4, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
};
