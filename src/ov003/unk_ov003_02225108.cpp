#pragma opt_common_subs off
#pragma opt_loop_invariants off
#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "field/BottleThrow.h"
#include "field/Unk_ov003_02224ba4_V3.h"
#include "field/Unk_ov003_02225238_Grid.h"
#include "actor/Character.h"

typedef Unk_ov003_02224ba4_V3 V3;



static inline BOOL Unk_ov003_02224bc4_Bit(u32 f, u32 m)
{
    if ((f & m) != 0) return TRUE;
    return FALSE;
}




extern "C" {
extern BottleThrow sBottleThrows[4];
extern V3 data_ov003_02257d50;
extern CommManager *gCommManager;

Character *PlayerActor_GetCharacter();
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

void InsectSpawn_BuildMasks()
{
    u8 ty;
    void *g;
    s32 wy;
    u32 xo;
    u8 *pa;
    u8 *pb;
    u32 yo;
    u8 *qa;
    u8 *qb;
    s32 hy;
    u16 *rowa;
    u16 *rowb;
    s32 wx;
    s32 xs;
    s32 m;
    s32 hx;
    u16 *c;
    u8 o1;
    u8 o2;
    u8 tx;
    g = TownBlockMap_Get();
    if (g != 0) {
        MI_CpuFill8(sInsectSpawnMaskLand, 0, 0x200);
        MI_CpuFill8(sInsectSpawnMaskDry, 0, 0x200);
        o1 = 0;
    l1:
        xo = (u8)((o1 + 1) << 4);
        o2 = 0;
        pa = (u8 *)sInsectSpawnMaskLand + (o1 << 5);
        pb = (u8 *)sInsectSpawnMaskDry + (o1 << 5);
    l2:
        yo = (u8)((o2 + 1) << 4);
        ty = 0;
        qa = pa + (o2 << 7);
        qb = pb + (o2 << 7);
    l3:
        tx = 0;
        wy = yo + ty;
        hy = wy >> 4;
        rowa = (u16 *)qa + ty;
        rowb = (u16 *)qb + ty;
    l4:
        wx = xo + tx;
        hx = wx >> 4;
        c = BlockMap_GetItemPtr(g, hx, hy, wx - (hx << 4), wy - (hy << 4), 0);
        if (c != 0) {
            if (Item_IsBuildingOrOccupied() != 0 || (xs = xo + tx, Ground_GetWaterKind(xs, wy) == 1)) {
                m = 1 << tx;
                *rowa |= m;
                *rowb |= m;
            } else if (Ground_GetWaterKind(xs, wy) == 2) {
                m = 1 << tx;
                *rowb |= m;
            }
        }
        tx++;
        if (tx < 16) goto l4;
        ty++;
        if (ty < 16) goto l3;
        o2++;
        if (o2 < 4) goto l2;
        o1++;
        if (o1 < 4) goto l1;
    }
}
