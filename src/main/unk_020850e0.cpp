#include "types.h"
#include "npc/VillagerId.h"
#include "save/Unk_02085810_Rec.h"
#include "save/ContestRecord.h"
#include "game/GroundInfo.h"





extern u8 gSaveVillagers[];
extern u8 gFieldSceneKind;
extern u8 gSceneBlockMap[];
extern u8 gSavePlayers[];
extern u8 gSaveData[];

// Neighbour offsets of the grid probes.
struct Unk_02085490_Pt {
    s32 x, y;
    Unk_02085490_Pt(s32 px, s32 py) { x = px; y = py; }
};

class TownSessionState {
public:
    u8 unk_00[0x34];
    TownSessionState();
    ~TownSessionState();
};

Unk_02085490_Pt sVillagerGardenOffsets[14] = {
    Unk_02085490_Pt(-3, -2), Unk_02085490_Pt(2, -2), Unk_02085490_Pt(-3, -1), Unk_02085490_Pt(2, -1),
    Unk_02085490_Pt(-3, 0), Unk_02085490_Pt(2, 0), Unk_02085490_Pt(-3, 1), Unk_02085490_Pt(2, 1),
    Unk_02085490_Pt(-3, 2), Unk_02085490_Pt(-2, 2), Unk_02085490_Pt(-1, 2), Unk_02085490_Pt(0, 2),
    Unk_02085490_Pt(1, 2), Unk_02085490_Pt(2, 2)
};
Unk_02085490_Pt sGardenNeighbourOffsets[8] = {
    Unk_02085490_Pt(0, 1), Unk_02085490_Pt(0, -1), Unk_02085490_Pt(-1, 0), Unk_02085490_Pt(1, 0),
    Unk_02085490_Pt(-1, -1), Unk_02085490_Pt(1, -1), Unk_02085490_Pt(-1, 1), Unk_02085490_Pt(1, 1)
};
TownSessionState gTownSessionState;

extern "C" {
void *_ZN13ContestRecord17getHolderVillagerEv(void *self);
void _ZN13ContestRecord15getHolderPlayerEv(void *self);
void _ZN13ContestRecord15setHolderPlayerEP17Unk_02085810_Base(void *self, void *src);
void _ZN13ContestRecord17setHolderVillagerEP10VillagerId(void *self, void *src);
void _ZN13ContestRecord10resetTodayEv(void *self);
void MI_CpuFill8(void *p, u32 v, u32 n);
s32 MI_CpuCopy8(void *, void *, s32);
void *SaveVillagers_Get(void *, s32);
void *_ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
u8 *_ZN20VillagerDataItemView11getHousePosEv(...);
void NetBuf_PackPair20(void *, s32, s32);
void CommRecord_PackSource(void *, s32, s32);
s32 VisitorSchedule_Clear(void *);
#define RoomFreeUnitMap_ctor _ZN15RoomFreeUnitMapC1Ev
void RoomFreeUnitMap_ctor(void *);
BOOL func_02072e88(void *, u32);
s32 Scene_GetCurrent();
s32 Scene_GetMaxSpNpcs();
void *TownBlockMap_Get();
void *MapBlock_GetItemPtr(void *, s32, s32, s32);
void MapBlock_SetItem(void *, u16 *, s32, s32, s32);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *);
s32 _ZN8PlayerId7isValidEv(void *);
s32 _ZN10PlayerData8testFlagEj(void *, s32);
s32 Catalog_HasAllFish();
s32 Catalog_HasAllInsects();
void Clock_GetDateTime(void *);
s32 Event_GetState(s32, void *, s32);
void _ZN15ShopClosingTime16clearClosingTimeEv(void *);
void _ZN17VisitorSpawnFlags5clearEv(void *);
void VisitorPos_Clear(void *);
void _ZN17VisitorSpawnFlags8destructEv(void *);
void _ZN16ResettiVisitFlag8destructEv(void *);
void _ZN13PeteFallState8destructEv(void *);
void _ZN15TownTravelState8destructEv(void *);
void _ZN15ShopClosingTime8destructEv(void *);
void _ZN15KatieVisitState8destructEv(void *);
void VisitorPos_Destruct(void *);
void VisitorPos_Construct(void *);
void _ZN15KatieVisitState9constructEv(void *);
void _ZN15ShopClosingTime9constructEv(void *);
void _ZN15TownTravelState9constructEv(void *);
void _ZN13PeteFallState9constructEv(void *);
void _ZN16ResettiVisitFlag9constructEv(void *);
void _ZN17VisitorSpawnFlags9constructEv(void *);
void VillagerId_Clear(...);
void _ZN8PlayerId5clearEv(...);
s32 Random_GlobalBelow(s32);
s32 Random_PickSetBit(u32, s32, s32);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldUnit_FromBlockUnit(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
void *BlockMap_GetItemPtr(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
s32 _s32_div_f(s32, s32);
s32 CountSetBits(u32 v);
s32 Contest_GetFlowerKind(u32 *out, u16 *p);
s32 Contest_IsNextToGroundAttr4(s32 *pos);
s32 ContestRecord_ScoreVillagerGarden(void *obj, void *grid);
s32 ContestRecord_ScorePlayerGarden(void *self, void *grid);
s32 Random_GlobalBelow2(s32);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 Item_GetFishBaseSize(u16 *);
s32 Item_GetInsectBaseSize(u16 *);
void Clock_GetDate(void *);
s32 Date_DaysBetween(void *, void *);
s32 Event_GetDaysSinceStart(s32);
void _ZN8SaveData9clearFlagEj(void *, s32);
void *PlayerData_GetResident(void *, s32);
s32 _ZN10PlayerData6isUsedEv(void *);
void *_ZN10PlayerData14getSpNpcRecordEv(void *);
void _ZN17PlayerSpNpcRecord15resetAcornCountEv(void *);
void _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(void *);
void _ZN10PlayerData9clearFlagEj(void *, s32);
void _ZN17PlayerSpNpcRecord24setEnteredFishingTourneyEi(void *, s32);
void _ZN17PlayerSpNpcRecord16setEnteredBugOffEi(void *, s32);
void TownSessionState_SetFlag(void *self, u32 bit);
}

struct ClockDateBytes {
    u8 b[4];
};

void ContestRecord::resetToday() {
    u8 d[8];
    clear();
    Clock_GetDate(d);
    dateYear = d[2];
    dateMonth = d[1];
    dateDay = d[0];
    kind = 0;
}

void ContestRecord::setKind(u32 v) { kind = v; }

void ContestRecord::setHolderPlayer(Unk_02085810_Base *src) { holderPlayer = *src; VillagerId_Clear(&holderVillager); }

void ContestRecord::getHolderPlayer() {}

void ContestRecord::setHolderVillager(VillagerId *src) { holderVillager = *src; _ZN8PlayerId5clearEv(this); }

VillagerId *ContestRecord::getHolderVillager() { return &holderVillager; }

void ContestRecord::clearVotedVillager() { VillagerId_Clear(&votedVillager); }

void ContestRecord::setVotedVillager(VillagerId *src) { votedVillager = *src; }

VillagerId *ContestRecord::getVotedVillager() { return &votedVillager; }

extern "C" void ContestRecord_SetItem(ContestRecord *o, u16 *in) { o->item = *in; }

extern "C" void ContestRecord_GetItem(u16 *out, ContestRecord *o) { *out = o->item; }

void ContestRecord::setSize(s32 v) { size = v; }

u32 ContestRecord::getSize() { return size; }

extern "C" void ContestRecord_BeginContestDay(u8 *self, u32 mode)
{
    ClockDateBytes t;
    s32 i;
    s32 z1 = 0;
    s32 z0 = 0;
    Clock_GetDate(&t);
    if (self[0x36] == t.b[2] && self[0x35] == t.b[1] && self[0x34] == t.b[0]) {
        return;
    }
    _ZN13ContestRecord10resetTodayEv(self);
    for (i = 0; i < 4; i++) {
        void *o = PlayerData_GetResident(gSavePlayers, i);
        if (o != NULL && _ZN10PlayerData6isUsedEv(o) != 0) {
            switch (mode) {
            case 1:
                _ZN17PlayerSpNpcRecord24setEnteredFishingTourneyEi(_ZN10PlayerData14getSpNpcRecordEv(o), z0);
                break;
            case 2:
                _ZN17PlayerSpNpcRecord16setEnteredBugOffEi(_ZN10PlayerData14getSpNpcRecordEv(o), z1);
                break;
            }
        }
    }
}

extern "C" void ContestRecord_BeginFestival(u8 *self, u32 mode)
{
    ClockDateBytes t;
    s32 v;
    s32 i;
    Clock_GetDate(&t);
    v = 0;
    switch (mode) {
    case 0:
        v = Event_GetDaysSinceStart(0xe);
        break;
    case 1:
        v = Event_GetDaysSinceStart(0x11);
        break;
    case 2:
        v = Event_GetDaysSinceStart(0x10);
        break;
    }
    s32 r = Date_DaysBetween(&t, self + 0x34);
    if (t.b[2] == self[0x36] && v != -1 && r <= 7 && r >= 0 && t.b[0] - v <= self[0x34]) {
        return;
    }
    switch (mode) {
    case 1:
        _ZN8SaveData9clearFlagEj(gSaveData, 0x11);
        break;
    case 0:
    case 2:
        for (i = 0; i < 4; i++) {
            void *o = PlayerData_GetResident(gSavePlayers, i);
            if (o != NULL && _ZN10PlayerData6isUsedEv(o) != 0) {
                if (mode == 2) {
                    _ZN17PlayerSpNpcRecord15resetAcornCountEv(_ZN10PlayerData14getSpNpcRecordEv(o));
                    _ZN10PlayerData9clearFlagEj(o, 0xf);
                } else {
                    _ZN17PlayerSpNpcRecord17clearFestivalGiftEv(_ZN10PlayerData14getSpNpcRecordEv(o));
                }
            }
        }
        break;
    }
    _ZN13ContestRecord10resetTodayEv(self);
}

extern "C" s32 Contest_GetCatchSize(u16 *p)
{
    s32 r = 0;
    s32 base = Random_GlobalBelow2(0x666) + 0xccd;
    BOOL in = r;
    u32 v = *p;
    if (v >= 0x12e8 && v <= 0x131f) {
        in = TRUE;
    }
    if (in) {
        r = FX_Div(func_01ffcb0c(Item_GetFishBaseSize(p) << 12, base), 0x28a4);
        if (r < 0x119a) {
            r = 0x119a;
        }
    } else if (v >= 0x12b0 && v <= 0x12e7) {
        r = func_01ffcb0c(Item_GetInsectBaseSize(p) << 12, base);
    }
    return r;
}

extern "C" s32 Contest_GetFlowerKind(u32 *out, u16 *p)
{
    BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 11) f2 = FALSE;
    }
    if (!f2) {
        if (v < 12 || v > 17) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 18 || v > 25) && v != 28) f4 = FALSE;
    }
    if (f4 || v == 26 || (u16)(v + 0xffe3) <= 1) {
        if (v > 27) {
            *out = v - 1;
        } else {
            *out = v;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 CountSetBits(u32 v)
{
    s32 n = 0;
    if (v != 0) {
        s32 i;
        for (i = 0; i < 32; i++) {
            if ((v >> i) & 1) {
                n++;
            }
        }
    }
    return n;
}

extern "C" s32 ContestRecord_ScoreVillagerGarden(void *obj, void *grid)
{
    void *k = _ZN12VillagerData13getVillagerIdEv(obj);
    s32 r = 0;
    s32 i, sx, sy, z1, z2, v;
    if (_ZN10VillagerId7isValidEv(k) != 0) {
        u32 mask = r;
        u8 *q = _ZN20VillagerDataItemView11getHousePosEv(obj);
        sx = q[0];
        sy = q[1];
        s32 *d = (s32 *)sVillagerGardenOffsets;
        s32 cnt = mask;
        v = cnt;
        i = cnt;
        z1 = cnt;
        z2 = cnt;
        for (i = 0; i < 14; i++) {
            s32 x = sx + d[0];
            s32 y = sy + d[1];
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            void *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), z1);
            v = z2;
            if (cell != NULL && Contest_GetFlowerKind((u32 *)&v, (u16 *)cell)) {
                if ((u32)v < 0x20) {
                    mask |= 1 << v;
                }
                cnt++;
            }
            d += 2;
        }
        r = CountSetBits(mask);
        r *= cnt;
    }
    return r;
}

extern "C" s32 Contest_IsNextToGroundAttr4(s32 *pos)
{
    s32 *p = (s32 *)sGardenNeighbourOffsets;
    s32 i;
    for (i = 0; i < 8; i++) {
        GroundInfo o;
        o.initAtUnit(pos[0] + p[0], pos[1] + p[1], 0, 0);
        if (o.attr == 4) {
            return TRUE;
        }
        p += 2;
    }
    return FALSE;
}

extern "C" s32 ContestRecord_ScorePlayerGarden(void *self, void *grid)
{
    s32 r = 0;
    s32 a, b, c, d;
    u16 lo, hi;
    s32 x, y, hy, hx, sx, sy;
    s32 cnt, sel;
    u32 mask;
    s32 pos[2];
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    lo = 0x5014;
    hi = 0x501a;
    if (BlockMap_FindItemAllAttr(grid, &a, &b, &c, &d, &lo, &hi, 1, 0)) {
        mask = 0;
        sx = 0;
        sy = 0;
        cnt = 0;
        sel = 0;
        FieldUnit_FromBlockUnit(&sx, &sy, a, b, c, d);
        y = sy - 1;
        goto test1;
    loop1:
        x = sx - 5;
        if (x < sx + 5) {
            goto test0;
        loop0:
            hx = x >> 4;
            hy = y >> 4;
            {
                void *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (cell != NULL) {
                    if (Contest_GetFlowerKind((u32 *)&sel, (u16 *)cell)) {
                        pos[0] = x;
                        pos[1] = y;
                        if (Contest_IsNextToGroundAttr4(pos)) {
                            if ((u32)sel < 0x20) {
                                mask |= 1 << sel;
                            }
                            cnt++;
                        }
                    }
                }
            }
            x++;
        test0:
            if (x < sx + 5) goto loop0;
        }
        y++;
    test1:
        if (y < sy + 9) goto loop1;
        s32 pc = CountSetBits(mask);
        r = _s32_div_f(pc * cnt + 2, 3);
    }
    return r;
}

extern "C" void ContestRecord_JudgeGardens(void *self)
{
    u32 mask;
    void *grid;
    s32 best, cnt, i;
    BOOL b = (gFieldSceneKind == 0);
    if (b) {
        grid = *(void **)gSceneBlockMap;
        _ZN13ContestRecord17getHolderVillagerEv(self);
        VillagerId_Clear();
        _ZN13ContestRecord15getHolderPlayerEv(self);
        _ZN8PlayerId5clearEv();
        if (grid != NULL) {
            mask = 0;
            best = -1;
            cnt = 0;
            for (i = 0; i < 8; i++) {
                void *o = SaveVillagers_Get(gSaveVillagers, i);
                if (o != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                    s32 v = ContestRecord_ScoreVillagerGarden(o, grid);
                    if (v > best) {
                        mask = (u8)(1 << i);
                        cnt = 1;
                        best = v;
                    } else if (v == best) {
                        mask = (u8)(mask | (1 << i));
                        cnt++;
                    }
                }
            }
            s32 w = ContestRecord_ScorePlayerGarden(self, grid);
            if (cnt == 0 || w > best || (w > 0 && w == best && Random_GlobalBelow(2) == 0)) {
                _ZN13ContestRecord15setHolderPlayerEP17Unk_02085810_Base(self, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
            } else {
                void *o = SaveVillagers_Get(gSaveVillagers, Random_PickSetBit(mask, cnt, 8));
                if (o != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(o)) != 0) {
                    _ZN13ContestRecord17setHolderVillagerEP10VillagerId(self, _ZN12VillagerData13getVillagerIdEv(o));
                }
            }
        }
    }
}

TownSessionState::TownSessionState()
{
    u8 *self = (u8 *)this;
    VisitorPos_Construct(self + 4);
    _ZN15KatieVisitState9constructEv(self + 0xc);
    _ZN15ShopClosingTime9constructEv(self + 0x18);
    _ZN15TownTravelState9constructEv(self + 0x20);
    _ZN13PeteFallState9constructEv(self + 0x24);
    _ZN16ResettiVisitFlag9constructEv(self + 0x30);
    _ZN17VisitorSpawnFlags9constructEv(self + 0x31);
}

TownSessionState::~TownSessionState()
{
    u8 *self = (u8 *)this;
    _ZN17VisitorSpawnFlags8destructEv(self + 0x31);
    _ZN16ResettiVisitFlag8destructEv(self + 0x30);
    _ZN13PeteFallState8destructEv(self + 0x24);
    _ZN15TownTravelState8destructEv(self + 0x20);
    _ZN15ShopClosingTime8destructEv(self + 0x18);
    _ZN15KatieVisitState8destructEv(self + 0xc);
    VisitorPos_Destruct(self + 4);
}

extern "C" void *TownSessionState_Reset(u8 *self)
{
    _ZN15ShopClosingTime16clearClosingTimeEv(self + 0x18);
    MI_CpuFill8(self, 0, 4);
    _ZN17VisitorSpawnFlags5clearEv(self + 0x31);
    VisitorPos_Clear(self + 4);
}

extern "C" BOOL TownSessionState_TestFlag(u32 *w, u32 bit)
{
    BOOL r;
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        r = TRUE;
        if (((r << b) & w[idx]) != 0) {
            goto done;
        }
    }
    r = FALSE;
done:
    return r;
}

extern "C" void TownSessionState_SetFlag(void *self, u32 bit)
{
    u32 *w = (u32 *)self;
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        w[idx] = *(volatile u32 *)&w[idx] | (1 << b);
    }
}

extern "C" void TownSessionState_ClearFlag(u32 *w, u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 0x1f;
    if (idx < 1) {
        w[idx] = ~(1 << b) & *(volatile u32 *)&w[idx];
    }
}

extern "C" void *TownSessionState_GetClosingTime(u8 *p) { return p + 0x18; }

extern "C" void *TownSessionState_GetTravelState(u8 *p) { return p + 0x20; }

extern "C" void *TownSessionState_GetResettiFlag(u8 *p) { return p + 0x30; }

extern "C" void *TownSessionState_GetKatieState(u8 *p) { return p + 0xc; }

extern "C" void *TownSessionState_GetPeteFall(u8 *p) { return p + 0x24; }

extern "C" void *TownSessionState_GetVisitorFlags(u8 *p) { return p + 0x31; }

extern "C" void *TownSessionState_GetVisitorPos(u8 *p) { return p + 4; }

extern "C" void TownSessionState_CheckTortimerReward(void *self)
{
    void *r5 = PlayerData_GetCurrent();
    if (r5 != NULL) {
        if (_ZN8PlayerId7isValidEv(_ZN10PlayerData11getPlayerIdEv(r5)) != 0) {
            if (_ZN10PlayerData8testFlagEj(r5, 1) == 0) {
                if ((_ZN10PlayerData8testFlagEj(r5, 0x21) == 0 && Catalog_HasAllFish() != 0) ||
                    (_ZN10PlayerData8testFlagEj(r5, 0x22) == 0 && Catalog_HasAllInsects() != 0)) {
                    s32 a[2];
                    s32 b[2];
                    a[0] = 0;
                    a[1] = 0;
                    Clock_GetDateTime(a);
                    MI_CpuCopy8(a, b, 8);
                    if (Event_GetState(8, b, 0) == 0) {
                        TownSessionState_SetFlag(self, 8);
                    }
                }
            }
        }
    }
}

extern "C" void *TownSessionState_Get()
{
    return &gTownSessionState;
}

