#pragma opt_loop_invariants off
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "field/BottleThrow.h"
#include "field/Unk_ov003_02225238_Grid.h"
#include "actor/Character.h"

typedef VecFx32 V3;



static inline BOOL Unk_ov003_02224bc4_Bit(u32 f, u32 m)
{
    if ((f & m) != 0) return TRUE;
    return FALSE;
}




extern "C" {
extern BottleThrow sBottleThrows[4];
extern V3 data_ov003_02257d50;
extern CommManager *gCommManager;

Character *PlayerActor_GetCharacter(s32 n);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
s32 BottleThrow_IsOffscreen(BottleThrow *e);
void func_ov003_02221874(void *p);
void func_ov003_02221998(void *p);
void FieldPos_FromBlockUnitCenter(V3 *out, s32 a, s32 b, s32 c, s32 d);
void *TownBlockMap_Get();
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 Item_IsBuildingOrOccupied();
s32 Ground_GetWaterKind(s32 x, s32 y);
void *MI_CpuFill8(void *p, s32 v, u32 n);
extern u16 sInsectSpawnMaskLand[];
extern u16 sInsectSpawnMaskDry[];
void InsectSpawn_BuildMasks();
BOOL InsectSpawn_FindUnitInBlock(u16 *buf, s32 kind, s32 *px, s32 *py, Unk_ov003_02225238_Grid *grid, s32 mode);
u32 MapBlock_GetAttr();
s32 BlockMap_IsBuriedAtUnit(void *g, s32 x, s32 y);
s32 Ground_IsGrassUnit(s32 x, s32 y);
s32 Ground_IsPond(s32 x, s32 y);
s32 Ground_GetDigKind(s32 x, s32 y);
s32 Insect_LikesFlower(s32 kind, u16 *c);
u32 Random_GlobalBelow(u32 n);
void FieldPos_ToUnit(s32 *a, s32 *b, void *c);
void SpawnMask_MarkRect(u16 *buf, s32 x, s32 y, s32 rad, u8 a, u8 b);
extern u8 sFishCatches[];
extern u8 sFishShadows[];

V3 *BottleThrow_GetPos(s32 i);
s32 BottleThrow_Start(s32 i);
BOOL BottleThrow_IsActive(s32 i);
void BottleThrow_SetTarget(V3 *v, s32 i);
void *func_ov003_02224d80(void *p);
void func_ov003_02224dc4();
void func_ov003_02224dc8();
void FieldFishManager_Create();
void func_ov003_02224e04();
void func_ov003_02224e24();
void func_ov003_02224e44();
void SpawnMask_PickFreeUnit(u32 n0, u16 *tbl, s32 *px, s32 *py);
BOOL Field_IsGrownPalmTreeItem(u16 *p);
BOOL Field_IsGrownSpecialTreeItem(u16 *p);
BOOL Field_IsGrownTreeItem(u16 *p);
BottleThrow *func_ov003_02224d90(BottleThrow *p);
}

static inline u8 *Unk_ov003_02225238_Cell(Unk_ov003_02225238_Grid *g, u32 x, u32 y)
{
    if (x < g->w && y < g->h && g->cells != 0) {
        return g->cells + (y * g->w + x) * 0x28;
    }
    return 0;
}

static inline BOOL Unk_ov003_02225238_ChkA(u16 *p)
{
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (!f3) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (!f4) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

static inline BOOL Unk_ov003_02225238_ChkB(u16 *p)
{
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (!(v >= 6 && v <= 0xb)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0xc && v <= 0x11)) f3 = FALSE;
    }
    if (!f3) {
        if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) f4 = FALSE;
    }
    if (!f4) {
        if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) ||
              (v >= 0x9c && v <= 0xa3) || v == 0xa5))
            f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}

#define CHK_A(p, a1, a2, a3, a4, a5, a6, a7, a8, a9, res) { \
    a9 = TRUE; a8 = TRUE; a7 = TRUE; a6 = TRUE; a5 = TRUE; a4 = TRUE; a3 = TRUE; a2 = TRUE; a1 = FALSE; \
    u32 v = *(p); \
    if (v >= 0x26 && v <= 0x2a) a1 = TRUE; \
    if (!a1) { if (!(v >= 0x5d && v <= 0x61)) a2 = FALSE; } \
    if (!a2) { if (!(v >= 0x2f && v <= 0x56)) a3 = FALSE; } \
    if (!a3) { if (!(v >= 0x57 && v <= 0x5b)) a4 = FALSE; } \
    if (!a4) { if (!(v >= 0x66 && v <= 0x68)) a5 = FALSE; } \
    if (!a5) { if (v != 0x69) a6 = FALSE; } \
    if (!a6) { if (!(v >= 0x6a && v <= 0x6c)) a7 = FALSE; } \
    if (!a7) { if (v != 0x6d) a8 = FALSE; } \
    if (!a8) { if (!(v >= 0xc8 && v <= 0xcf)) a9 = FALSE; } \
    res = a9; }
#define CHK_B(p, a1, a2, a3, a4, a5, a6, a7, a8, res) { \
    a8 = TRUE; a7 = TRUE; a6 = TRUE; a5 = TRUE; a4 = TRUE; a3 = TRUE; a2 = TRUE; a1 = FALSE; \
    u32 v = *(p); \
    if (v <= 5) a1 = TRUE; \
    if (!a1) { if (!(v >= 6 && v <= 0xb)) a2 = FALSE; } \
    if (!a2) { if (!(v >= 0xc && v <= 0x11)) a3 = FALSE; } \
    if (!a3) { if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) a4 = FALSE; } \
    if (!a4) { if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) || (v >= 0x9c && v <= 0xa3) || v == 0xa5)) a5 = FALSE; } \
    if (!a5) { if (v != 0x1a) a6 = FALSE; } \
    if (!a6) { if (v != 0xa4) a7 = FALSE; } \
    if (!a7) { if (v != 0x1d) a8 = FALSE; } \
    res = a8; }
BOOL InsectSpawn_FindUnitInBlock(u16 *buf, s32 kind, s32 *px, s32 *py, Unk_ov003_02225238_Grid *grid, s32 mode)
{
    u16 *blk = buf + (*px + *py * 4) * 0x10;
    s32 cnt0 = 0;
    s32 cnt = 0;
    s32 found = 0;
    s32 f20 = 0;
    s32 z = 0;
    if (mode == 6) {
        u8 *cell = Unk_ov003_02225238_Cell(grid, *px + 1, *py + 1);
        if (cell == 0) {
            return FALSE;
        }
        if ((MapBlock_GetAttr() & 0x100) != 0) f20 = 1;
    }
    s32 xo = (*px + 1) << 4;
    s32 yo = (*py + 1) << 4;
    s32 ty = 0;
    BOOL A9,A8,A7,A6,A5,A4,A3,A2,A1,B8,B7,B6,B5,B4,B3,B2,B1,C8,C7,C6,C5,C4,C3,C2,C1, ra, rb, rc;
    u8 k = (s8)(kind - 2);
    for (; ty < 16; ty++) {
        s32 tx = z;
        u16 *row = blk + ty;
        s32 wy = yo + ty;
        {
        loop0:
            if (((*row >> tx) & 1) == 0) {
                s32 wx = xo + tx;
                cnt0 = cnt;
                s32 hx = wx >> 4;
                s32 hy = wy >> 4;
                u16 *c = BlockMap_GetItemPtr(grid, hx, hy, wx - (hx << 4), wy - (hy << 4), 0);
                if (c == 0) goto next0;
                switch (mode) {
                case 7:
                    if (kind == 0x33) {
                        BOOL fa = FALSE;
                        u32 v = *c;
                        if (v >= 0x154a && v <= 0x1553) fa = TRUE;
                        if (fa != 0 || (v >= 0x1320 && v <= 0x1322)) {
                            if (BlockMap_IsBuriedAtUnit(grid, wx, wy) == 0) {
                                found = 1;
                                cnt++;
                                break;
                            }
                        }
                        if (*c == 0xfff1) cnt++;
                    } else {
                        BOOL fb = FALSE;
                        u32 v = *c;
                        if (v >= 0x154a && v <= 0x1553) fb = TRUE;
                        if (fb != 0) {
                            if (BlockMap_IsBuriedAtUnit(grid, wx, wy) == 0) cnt++;
                        }
                    }
                    break;
                case 4:
                    if (Ground_IsGrassUnit(wx, wy) != 0) {
                        if (*c == 0xfff1) cnt++;
                    }
                    break;
                case 6:
                    if (Ground_IsPond(wx, wy) != 0) {
                        cnt++;
                    } else if (f20 != 0 && tx > 3 && ty > 3 && tx < 13 && ty < 13) {
                        if (Ground_GetWaterKind(wx, wy) == 2) cnt++;
                    }
                    break;
                case 1:
                    CHK_A(c, A1,A2,A3,A4,A5,A6,A7,A8,A9, ra)
                    if (!ra) {
                        if (found == 0) {
                            CHK_B(c, B1,B2,B3,B4,B5,B6,B7,B8, rb)
                            if (rb) {
                                if (k <= 1) {
                                    if (Insect_LikesFlower(kind, c) != 0) found = 1;
                                } else {
                                    found = 1;
                                }
                            }
                        }
                        cnt++;
                    }
                    break;
                case 2:
                    CHK_B(c, C1,C2,C3,C4,C5,C6,C7,C8, rc)
                    if (rc) {
                        if (kind == 0xf) {
                            if (Insect_LikesFlower(kind, c) != 0) cnt++;
                        } else {
                            cnt++;
                        }
                    }
                    break;
                case 9:
                    if (Ground_GetDigKind(wx, wy) == 0) {
                        if (*c == 0xfff1) cnt++;
                    }
                    break;
                case 8:
                    if (*c == 0x1b) {
                        found = 1;
                        cnt++;
                    } else if (*c == 0xfff1) {
                        cnt++;
                    }
                    break;
                case 0:
                    if (*c == 0xfff1) cnt++;
                    break;
                case 11:
                    if (((*row << tx) & 1) == 0) cnt++;
                    break;
                case 10: {
                    BOOL fc = FALSE;
                    u32 v = *c;
                    if (v >= 0xe3 && v <= 0xe7) fc = TRUE;
                    if (fc) cnt++;
                    break;
                }
                case 12:
                    if (Field_IsGrownTreeItem(c)) cnt++;
                    break;
                case 14:
                    if (Field_IsGrownTreeItem(c) || Field_IsGrownSpecialTreeItem(c)) cnt++;
                    break;
                case 15:
                    if (Field_IsGrownTreeItem(c) || Field_IsGrownSpecialTreeItem(c) || Field_IsGrownPalmTreeItem(c)) cnt++;
                    break;
                case 13:
                    if (Field_IsGrownPalmTreeItem(c)) cnt++;
                    break;
                case 5:
                    if (Ground_GetWaterKind(wx, wy) == 2) cnt++;
                    break;
                case 3:
                    break;
                }
            }
            if (cnt == cnt0) {
                *row |= 1 << tx;
            }
        next0:
            tx++;
            if (tx < 16) goto loop0;
        }
    }
    if (mode == 1 || mode == 8 || (mode == 7 && kind == 0x33)) {
        if (cnt > 0 && found != 0) {
            SpawnMask_PickFreeUnit(cnt, blk, px, py);
            return TRUE;
        }
    } else {
        if (cnt > 0) {
            SpawnMask_PickFreeUnit(cnt, blk, px, py);
            return TRUE;
        }
    }
    return FALSE;
}
