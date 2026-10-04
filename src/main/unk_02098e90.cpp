#include "types.h"
#include "item/PocketMatches.h"
#include "item/ItemId.h"
#include "npc/VillagerId.h"
#include "sys/ClockDate.h"
#include "player/PlayerId.h"
#include "player/PlayerData.h"

// Entry of the const table at 0x020d0604 (8 bytes): name, random range
struct TopicWordList {
    char *fileName;
    u8 wordCount;
};
// Record (12 bytes): two words, u16 at +8, type byte at +0x0a, bits at +0x0b.
// The constructor/destructor are the unit's own functions 0x0209ada4 / 0x0209ada0 (aliases.txt).
struct ErrandRecord {
    u32 dateTime;
    u32 dateTimeHi;
    u16 item;
    u8 kind;
    u8 stepBits;

    ErrandRecord();
    ~ErrandRecord();
    void setItem(u16 *p);
    u16 *getItem();
    void setExtra(u8 v);
    u32 getExtra();
    void setStep(u8 v);
    u32 getStep();
    s32 getSubGroup();
    s32 getSlotIndex();
    s32 setTimeFromNow(s32 x);
    u32 getKind();
    BOOL getGroupIndex(s32 *out);
    s32 getGroup();
    BOOL getClassIndex(s32 *out);
    s32 getClass();
    void start(u8 a, u16 *p, u8 b);
    BOOL isActive();
    void clear();
    void func_0209ada0();
    void init();
};

// ======== types of unk_02098f90.cpp ========



class SickVillagerRecord {
public:
    u8 errand[0xc];
    VillagerId villagerId;
    PlayerId visitors[5];
    u8 startDate[4];
    u8 statusDate[4];
    u8 sickDay;
    PlayerId *getTopVisitor();
    BOOL isRecentlyRecovered(ClockDate *d);
    BOOL isRecovered();
    void setTodaysVisitor(PlayerId *e);
    BOOL hasTodaysVisitor();
    BOOL hasVisitor(PlayerId *e);
    PlayerId *getTodaysVisitor();
    PlayerId *getVisitor(u32 i);
    void startSickness(VillagerId *a, u8 *b);
    VillagerId *getVillagerId();
    SickVillagerRecord *destructRecord();
    SickVillagerRecord *constructRecord();
    void getErrand();
    void resetRecord();
    u8 *getParcelErrand();
};
// ======== types of unk_020998b8.cpp ========

// VillagerId (npc/VillagerId.h) with its constructors / destructor declared (VillagerId_Construct, _ConstructCopy, _Destruct)
class VillagerIdCtorDtor {
public:
    VillagerIdCtorDtor();
    VillagerIdCtorDtor(s32 v);
    ~VillagerIdCtorDtor();

    /* 0x00 */ u16 townId;
    /* 0x02 */ u8 townName[8];
    /* 0x0a */ u8 personality;
    /* 0x0b */ u8 species;
};

// Slot: Y record, two records, flag byte at +0x24 (0x28 bytes)
class PlayerErrandSlot : public ErrandRecord {
public:
    PlayerErrandSlot();
    ~PlayerErrandSlot();

    /* 0x0c */ VillagerIdCtorDtor villagers[2];
    /* 0x24 */ u8 presentReaction;
};

// Y record with an index byte and a flag byte (0x10 bytes)
class ParcelErrand : public ErrandRecord {
public:
    /* 0x0c */ u8 recipient;
    /* 0x0d */ u8 pendingRecipients;
};

class HouseVisitInvite : public VillagerIdCtorDtor {
public:
    HouseVisitInvite();
    ~HouseVisitInvite();

    /* 0x0c */ ErrandRecord errand;
    /* 0x18 */ u32 visitTime;
    /* 0x1c */ u32 visitTimeHi;
    /* 0x20 */ u8 unk_20[8];
};

class PlayerErrands {
public:
    PlayerErrands();
    ~PlayerErrands();

    /* 0x00 */ PlayerErrandSlot slots[2];
    /* 0x50 */ VillagerIdCtorDtor jobVillagers[3];
    /* 0x74 */ u8 onDuty;
    /* 0x78 */ ParcelErrand parcelErrand;
    /* 0x88 */ HouseVisitInvite houseVisitInvite;
};
// ======== types of unk_0209a208.cpp ========


struct PlanErrand {
    u8 errand[0xc];
    u8 player[0x22 - 0xc];
    u8 step;
    u8 pad_23;
    u16 shownItem;
    u8 count;
    u8 fossilGroup;
    u8 flags;
};
// ======== types of unk_0209ab54.cpp ========

struct Unk_0209abac_Bits { u8 lo : 5; u8 hi : 3; };

// ---------------------------------------------------------------- class 2

struct TrendScores {
    u8 values[8];

    TrendScores();
    ~TrendScores();
    u32 get(u32 i);
    void set(u8 i, u32 v);
    void add(u8 i, u32 v);
    void resetAndHalve(u32 i);
    u8 pickTop();
    void copy();
    void clear();
};


struct VillagerPlanFlags { u8 state2Flag : 1; u8 x : 7; };

struct VillagerPlan {
    u32 planTime;
    u32 planTimeHi;
    u32 stateTime;
    u32 stateTimeHi;
    u8 planState;
    TrendScores scores;
    TrendScores pendingScores;
    VillagerPlanFlags flags;
    u8 unk_22[2];

    VillagerPlan();
    ~VillagerPlan();
    void addTrendOf(VillagerPlan *other, s16 *p);
    void addPendingScore(u8 idx, s32 delta);
    BOOL addRandomScores(s16 *p);
    void applyPendingScores(s16 *p);
    s32 getTrendName(s32 x);
    s32 finishMovingIn(void *x);
    s32 leaveState0B(VillagerPlan *o);
    s32 finishTrendChange();
    s32 updateTopTrend();
    BOOL isTrendOlderThanWeek(void *o);
    BOOL isTrendOlderThan(void *o, u32 c);
    void enterState0B();
    void startTrendChange();
    BOOL hasState2Flag();
    s32 getStateGroup();
    void setState(u32 v);
    u32 getState();
    void rollTrend(s32 a, s32 flag);
    BOOL isValidState();
    BOOL hasTrend();
    void clear();
    void resetAndHalveScores(u8 i);
    u32 pickTopScore();
};
// ======== types of unk_0209b494.cpp ========

// ======== data ========
extern "C" {
BOOL ErrandSetup_WateringCan(void *p);
BOOL ErrandSetup_Carpet(void *p);
BOOL ErrandSetup_FurnitureParcel(void *p);
BOOL ErrandSetup_LetterBundle(void *p);
BOOL ErrandSetup_RandomShirt(void *p);
}

typedef BOOL (PlayerErrandSlot::*Unk_0209a4f4_Fn)();

// Entry of the slot-kind table (0x14 bytes): setup handler, second handler (always null), limit byte
struct ErrandKindSetup {
    Unk_0209a4f4_Fn setup;
    Unk_0209a4f4_Fn unk_08;
    u8 stepLimit;
};


// defined here, before Trend_GetToolItem, for the data order
extern void *data_020e2190[2];
extern const u8 sFossilGroups[10];
extern void *data_020e21a0[2];
extern char data_020e21c0[9];
extern char data_020e218c[1];
extern const char data_020d05bc[10];
void *data_020e2190[2] = {(void *)ErrandSetup_RandomShirt, 0};
const u8 sFossilGroups[10] = {0x16, 0x17, 0x0a, 0x0b, 0x0c, 0x0d, 0x0f, 0x10, 0x15, 0x14};
void *data_020e21a0[2] = {(void *)ErrandSetup_Carpet, 0};
char data_020e21c0[9] = "st_sweet";
#pragma explicit_zero_data on
char data_020e218c[1] = {0};
#pragma explicit_zero_data reset
const char data_020d05bc[10] = "re_normal";

// ======== unk_0209b494.cpp ========
namespace n6 {
extern "C" {
s32 Random_GlobalBelow(s32);
void *MI_CpuCopy8(void *, void *, s32);
void *MI_CpuFill8(void *, s32, s32);
extern const TopicWordList sTopicWordLists[];
}

extern "C" {
u8 _ZN11TrendScores3getEj(void *self, u8 i);
void _ZN11TrendScores3setEhj(void *self, u8 i, u32 v);
}

extern "C" void TrendScores_Copy(void *p, void *q);
extern "C" void TrendScores_Clear(void *p);
extern "C" void TrendScores_Destruct();
extern "C" void *TrendScores_Construct(void *p);
extern "C" u32 TopicWord_PickRandom(u32 *out, s32 idx);

extern "C" u32 TopicWord_PickRandom(u32 *out, s32 idx)
{
    *out = Random_GlobalBelow(sTopicWordLists[idx].wordCount);
    return (u32)sTopicWordLists[idx].fileName;
}

extern "C" void *TrendScores_Construct(void *p)
{
    TrendScores_Clear(p);
    return p;
}

extern "C" void TrendScores_Destruct() {}

extern "C" void TrendScores_Clear(void *p)
{
    MI_CpuFill8(p, 0, 8);
}

extern "C" void TrendScores_Copy(void *p, void *q)
{
    MI_CpuCopy8(q, p, 8);
}

}
u32 VillagerPlan::pickTopScore()
{
    using namespace n6;
    u8 res = 8;
    u16 mask = 0;
    s32 max = -1;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 8; i++) {
        s32 v = ((u8 *)this)[i];
        if (v > max) {
            max = v;
            mask = 1 << i;
            cnt = 1;
        } else if (max == v) {
            mask |= 1 << i;
            cnt++;
        }
    }
    if (cnt > 0) {
        s32 r = Random_GlobalBelow(cnt);
        for (i = 0; i < 8; i++) {
            if (((mask >> i) & 1) != 0) {
                if (r == 0) {
                    res = i;
                    break;
                }
                r--;
            }
        }
    }
    return res;
}


namespace n6 {
}
void VillagerPlan::resetAndHalveScores(u8 i)
{
    using namespace n6;
    _ZN11TrendScores3setEhj(this, i, 0);
    for (s32 j = 0; j < 8; j++) {
        u32 v = _ZN11TrendScores3getEj(this, (u8)j);
        _ZN11TrendScores3setEhj(this, (u8)j, (v << 23) >> 24);
    }
}
namespace n6 {
}

// ======== unk_0209ab54.cpp ========
namespace n5 {
extern "C" {
void _ZN8PlayerIdC1Ev(void *p);
void _ZN8PlayerIdC1EPv(void *p);
s32 Clock_GetDateTime(void *p);
s32 DateTime_AddMinutes(void *p, s32 x);
s32 DateTime_IsInvalid(void *p);
s32 DateTime_DiffMinutes(void *p, void *q);
s32 DateTime_Compare(void *p, void *q, s32 m);
s32 DateTime_DiffDays(void *p, void *q);
s32 Random_GlobalBelow(s32 x);
void MI_CpuCopy8(void *a, void *b, s32 n);
void MI_CpuFill8(void *a, s32 v, s32 n);
s32 _s32_div_f(s32 a, s32 b);
s32 String_Load(void *a, void *b, void *c);
void func_02135558(void *obj, void *dtor, void *reg);
extern u32 sErrandGroupStarts[];
extern u32 sErrandClassStarts[];
extern u8 sPlanStateGroupStarts[];
extern u8 sTrendWeights[];
s32 Errand_GetSubGroup(u32 x);
s32 Errand_GetSlotIndex(u32 x);
BOOL Errand_GetGroupIndex(s32 *out, s32 x);
s32 Errand_GetGroup(u32 x);
BOOL Errand_IsValidGroup(u32 x);
BOOL Errand_GetClassIndex(s32 *out, s32 x);
s32 Errand_GetClass(u32 x);
BOOL Errand_IsValidClass(u32 x);
BOOL Errand_IsValidKind(u32 x);
}


extern "C" BOOL Trend_IsValid(u32 x);
extern "C" s32 PlanState_GetGroup(u32 x);

extern "C" void *PlanErrand_Destruct(ErrandRecord *self);
extern "C" void *PlanErrand_Construct(ErrandRecord *self);
extern "C" s32 Errand_GetSubGroup(u32 x);
extern "C" s32 Errand_GetSlotIndex(u32 x);
extern "C" void ErrandRecord_GetTime();
extern "C" BOOL Errand_GetGroupIndex(s32 *out, s32 x);
extern "C" s32 Errand_GetGroup(u32 x);
extern "C" BOOL Errand_IsValidGroup(u32 x);
extern "C" BOOL Errand_GetClassIndex(s32 *out, s32 x);
extern "C" s32 Errand_GetClass(u32 x);
extern "C" BOOL Errand_IsValidClass(u32 x);
extern "C" BOOL Errand_IsValidKind(u32 x);
extern "C" void Trend_GetToolItem(u16 *out, s32 idx);
extern "C" void *VillagerPlan_GetStateDate(void *p);
extern "C" void VillagerPlan_GetPlanTime();
extern "C" s32 PlanState_GetGroupIndex(u8 *out, s32 x);
extern "C" s32 PlanState_GetGroup(u32 x);
extern "C" BOOL Trend_IsValid(u32 x);

}
void TrendScores::add(u8 i, u32 v) {
    using namespace n5;
    if (Trend_IsValid(i)) {
        s32 t = values[i];
        t += v;
        if (t >= 0xff) t = 0xff;
        values[i] = t;
    }
}


namespace n5 {
}
void TrendScores::set(u8 i, u32 v) {
    using namespace n5;
    if (Trend_IsValid(i)) values[i] = v;
}


namespace n5 {
}
u32 TrendScores::get(u32 i) {
    using namespace n5;
    u32 r = 0;
    if (Trend_IsValid(i)) r = values[i];
    return r;
}


namespace n5 {
}
VillagerPlan::VillagerPlan() : planTime(0), planTimeHi(0), stateTime(0), stateTimeHi(0) {
    using namespace n5; clear(); }


namespace n5 {
}
VillagerPlan::~VillagerPlan() {
    using namespace n5;}


namespace n5 {
}
void VillagerPlan::clear() {
    using namespace n5;
    MI_CpuFill8(this, 0, 0x24);
    planState = 7;
    scores.clear();
    pendingScores.clear();
    planTime = 0;
    planTimeHi = 0;
    stateTime = 0;
    stateTimeHi = 0;
}


namespace n5 {
extern "C" BOOL Trend_IsValid(u32 x) {
    if (x < 8) return TRUE;
    return FALSE;
}

}
BOOL VillagerPlan::hasTrend() {
    using namespace n5; return Trend_IsValid(planState); }


namespace n5 {
}
BOOL VillagerPlan::isValidState() {
    using namespace n5;
    if (planState < 0xc) return TRUE;
    return FALSE;
}


namespace n5 {
}
void VillagerPlan::rollTrend(s32 a, s32 flag) {
    using namespace n5;
    scores.copy();
    planState = scores.pickTop();
    if (flag != 0) {
        scores.resetAndHalve(planState);
    }
    Clock_GetDateTime(this);
    Clock_GetDateTime((u8 *)this + 8);
}


namespace n5 {
}
u32 VillagerPlan::getState() {
    using namespace n5; return planState; }


namespace n5 {
}
void VillagerPlan::setState(u32 v) {
    using namespace n5; planState = v; }


namespace n5 {
extern "C" s32 PlanState_GetGroup(u32 x) {
    s32 r = 3;
    if (x < 5) {
        r = 0;
    } else if (x < 8) {
        r = 1;
    } else if (x < 0xc) {
        r = 2;
    }
    return r;
}

}
s32 VillagerPlan::getStateGroup() {
    using namespace n5; return PlanState_GetGroup(planState); }


namespace n5 {
extern "C" s32 PlanState_GetGroupIndex(u8 *out, s32 x) {
    *out = PlanState_GetGroup(x);
    if (*out < 3) return x - sPlanStateGroupStarts[*out];
    return -1;
}

}
BOOL VillagerPlan::hasState2Flag() {
    using namespace n5;
    if (flags.state2Flag) return TRUE;
    return FALSE;
}


namespace n5 {
}
void VillagerPlan::startTrendChange() {
    using namespace n5;
    if (getState() == 2) {
        flags.state2Flag = 1;
    } else {
        flags.state2Flag = 0;
    }
    setState(8);
    Clock_GetDateTime(this);
    MI_CpuCopy8(this, (u8 *)this + 8, 8);
}


namespace n5 {
}
void VillagerPlan::enterState0B() {
    using namespace n5;
    if (getState() == 2 || hasState2Flag()) {
        flags.state2Flag = 1;
    } else {
        flags.state2Flag = 0;
    }
    setState(0xb);
    Clock_GetDateTime(this);
    MI_CpuCopy8(this, (u8 *)this + 8, 8);
}


namespace n5 {
}
BOOL VillagerPlan::isTrendOlderThan(void *o, u32 c) {
    using namespace n5;
    if (DateTime_IsInvalid(this) == 0 && hasTrend()) {
        s32 t = DateTime_DiffMinutes(this, o);
        if (t < 0) t = -t;
        if ((u32)_s32_div_f(t, 0x5a0) >= c) return TRUE;
        return FALSE;
    }
    return FALSE;
}


namespace n5 {
}
BOOL VillagerPlan::isTrendOlderThanWeek(void *o) {
    using namespace n5; return isTrendOlderThan(o, 7); }


namespace n5 {
}
s32 VillagerPlan::updateTopTrend() {
    using namespace n5;
    if (Trend_IsValid(planState)) {
        u32 i = scores.pickTop();
        if (Trend_IsValid(i)) {
            if (scores.get(i) == 0xff) {
                if (planState == i) {
                    scores.resetAndHalve(planState);
                    return planState;
                } else {
                    startTrendChange();
                    return 8;
                }
            }
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 VillagerPlan::finishTrendChange() {
    using namespace n5;
    if (planState == 8) {
        u32 i = scores.pickTop();
        if (Trend_IsValid(i)) {
            setState(i);
            scores.resetAndHalve(i);
            flags.state2Flag = 0;
            Clock_GetDateTime(this);
            MI_CpuCopy8(this, (u8 *)this + 8, 8);
            return i;
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 VillagerPlan::leaveState0B(VillagerPlan *o) {
    using namespace n5;
    if (planState == 0xb && *((u8 *)o + 3) != *((u8 *)this + 3)) {
        u32 i = scores.pickTop();
        if (Trend_IsValid(i)) {
            setState(i);
            scores.resetAndHalve(i);
            flags.state2Flag = 0;
            Clock_GetDateTime(this);
            MI_CpuCopy8(this, (u8 *)this + 8, 8);
            return i;
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 VillagerPlan::finishMovingIn(void *x) {
    using namespace n5;
    if (planState == 0xa) {
        if (x == 0 || (DateTime_Compare(x, this, 0x3f) == 1 && DateTime_DiffDays(this, x) >= 1)) {
            u32 i = scores.pickTop();
            if (Trend_IsValid(i)) {
                setState(i);
                scores.resetAndHalve(i);
                flags.state2Flag = 0;
                Clock_GetDateTime(this);
                MI_CpuCopy8(this, (u8 *)this + 8, 8);
                return i;
            }
        }
    }
    return 0xc;
}


namespace n5 {
}
s32 VillagerPlan::getTrendName(s32 x) {
    using namespace n5;
    if (!Trend_IsValid(x)) x = 7;
    u8 buf = x;
    return String_Load(this, &buf, (void *)"st_boom");
}


namespace n5 {
extern "C" void VillagerPlan_GetPlanTime() {}

extern "C" void *VillagerPlan_GetStateDate(void *p) { return (u8 *)p + 8; }

}
void VillagerPlan::applyPendingScores(s16 *p) {
    using namespace n5;
    const u8 *w = sTrendWeights;
    s32 i;
    for (i = 0; i < 8; p++, w++, i++) {
        s32 v = pendingScores.get((u8)i);
        s32 wt = *w;
        if (wt != 0 && v != 0) {
            s32 m = *p * wt;
            scores.add((u8)i, (u8)((v * m) >> 12));
        }
    }
    pendingScores.clear();
}


namespace n5 {
}
BOOL VillagerPlan::addRandomScores(s16 *p) {
    using namespace n5;
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 8; p++, i++) {
        if (scores.get((u8)i) < 0xff) {
            s32 t = Random_GlobalBelow(10);
            if (t > 0) {
                scores.add((u8)i, (u8)((*p * t) >> 12));
            }
            r = TRUE;
        }
    }
    return r;
}


namespace n5 {
}
void VillagerPlan::addPendingScore(u8 idx, s32 delta) {
    using namespace n5;
    if (Trend_IsValid(idx)) {
        s32 t = delta + pendingScores.get(idx);
        if (t < 0) {
            t = 0;
        } else if (t > 10) {
            t = 10;
        }
        pendingScores.set(idx, (u8)t);
    }
}


namespace n5 {
}
void VillagerPlan::addTrendOf(VillagerPlan *other, s16 *p) {
    using namespace n5;
    u8 i = other->scores.pickTop();
    if (Trend_IsValid(i)) {
        scores.add(i, (u8)((p[i] * 10) >> 12));
    }
}


namespace n5 {
extern "C" void Trend_GetToolItem(u16 *out, s32 idx) {
    static ItemId tbl[8] = {
        ItemId(0x1376), ItemId(0x1374), ItemId(0x1369), ItemId(0xfff1),
        ItemId(0xfff1), ItemId(0x1378), ItemId(0xfff1), ItemId(0xfff1)};
    if (Trend_IsValid(idx)) {
        *out = tbl[idx].id;
    } else {
        *out = 0xfff1;
    }
}

}
void ErrandRecord::init() {
    using namespace n5;
    dateTime = 0;
    dateTimeHi = 0;
    item = 0xfff1;
    kind = 0x16;
    item = 0xfff1;
}


namespace n5 {
}
void ErrandRecord::func_0209ada0() {
    using namespace n5;}


namespace n5 {
}
void ErrandRecord::clear() {
    using namespace n5;
    kind = 0x16;
    item = 0xfff1;
    stepBits = stepBits & ~0x1f;
    stepBits = stepBits & ~0xe0;
}


namespace n5 {
extern "C" BOOL Errand_IsValidKind(u32 x) {
    if (x < 0x16) return TRUE;
    return FALSE;
}

}
BOOL ErrandRecord::isActive() {
    using namespace n5; return Errand_IsValidKind(kind); }


namespace n5 {
}
void ErrandRecord::start(u8 a, u16 *p, u8 b) {
    using namespace n5;
    kind = a;
    item = *p;
    stepBits = (stepBits & ~0x1f) | (b & 0x1f);
}


namespace n5 {
extern "C" BOOL Errand_IsValidClass(u32 x) {
    if (x < 2) return TRUE;
    return FALSE;
}

extern "C" s32 Errand_GetClass(u32 x) {
    s32 r = 2;
    if (x < 5) {
        r = 0;
    } else if (x < 0x16) {
        r = 1;
    }
    return r;
}

}
s32 ErrandRecord::getClass() {
    using namespace n5; return Errand_GetClass(kind); }


namespace n5 {
extern "C" BOOL Errand_GetClassIndex(s32 *out, s32 x) {
    s32 k = Errand_GetClass(x);
    if (Errand_IsValidClass(k)) {
        *out = x - sErrandClassStarts[k];
        return TRUE;
    }
    return FALSE;
}

}
BOOL ErrandRecord::getClassIndex(s32 *out) {
    using namespace n5; return Errand_GetClassIndex(out, kind); }


namespace n5 {
extern "C" BOOL Errand_IsValidGroup(u32 x) {
    if (x < 4) return TRUE;
    return FALSE;
}

extern "C" s32 Errand_GetGroup(u32 x) {
    s32 r = 4;
    if (x < 0xa) {
        r = 0;
    } else if (x < 0x14) {
        r = 1;
    } else if (x < 0x15) {
        r = 2;
    } else if (x < 0x16) {
        r = 3;
    }
    return r;
}

}
s32 ErrandRecord::getGroup() {
    using namespace n5; return Errand_GetGroup(kind); }


namespace n5 {
extern "C" BOOL Errand_GetGroupIndex(s32 *out, s32 x) {
    s32 k = Errand_GetGroup(x);
    BOOL r = FALSE;
    if (Errand_IsValidGroup(k)) {
        *out = x - sErrandGroupStarts[k];
        r = TRUE;
    }
    return r;
}

}
BOOL ErrandRecord::getGroupIndex(s32 *out) {
    using namespace n5; return Errand_GetGroupIndex(out, kind); }


namespace n5 {
}
u32 ErrandRecord::getKind() {
    using namespace n5; return kind; }


namespace n5 {
}
s32 ErrandRecord::setTimeFromNow(s32 x) {
    using namespace n5;
    Clock_GetDateTime(this);
    return DateTime_AddMinutes(this, x);
}


namespace n5 {
extern "C" void ErrandRecord_GetTime() {}

extern "C" s32 Errand_GetSlotIndex(u32 x) {
    s32 r = 2;
    if (Errand_GetGroup(x) == 1) {
        if (x < 0x13) {
            r = 0;
        } else if (x < 0x14) {
            r = 1;
        }
    }
    return r;
}

}
s32 ErrandRecord::getSlotIndex() {
    using namespace n5; return Errand_GetSlotIndex(kind); }


namespace n5 {
extern "C" s32 Errand_GetSubGroup(u32 x) {
    s32 r = 4;
    if (Errand_GetGroup(x) == 1) {
        if (x < 0x13) {
            if (x < 0xb) {
                r = 0;
            } else {
                r = 1;
            }
        } else if (x < 0x14) {
            r = 2;
        } else if (x < 0x15) {
            r = 3;
        }
    }
    return r;
}

}
s32 ErrandRecord::getSubGroup() {
    using namespace n5; return Errand_GetSubGroup(kind); }


namespace n5 {
}
u32 ErrandRecord::getStep() {
    using namespace n5; return ((Unk_0209abac_Bits *)&stepBits)->lo; }


namespace n5 {
}
void ErrandRecord::setStep(u8 v) {
    using namespace n5; stepBits = (stepBits & ~0x1f) | (v & 0x1f); }


namespace n5 {
}
u32 ErrandRecord::getExtra() {
    using namespace n5; return ((Unk_0209abac_Bits *)&stepBits)->hi; }


namespace n5 {
}
void ErrandRecord::setExtra(u8 v) {
    using namespace n5; stepBits = (stepBits & ~0xe0) | ((v & 7) << 5); }


namespace n5 {
}
u16 *ErrandRecord::getItem() {
    using namespace n5; return &item; }


namespace n5 {
}
void ErrandRecord::setItem(u16 *p) {
    using namespace n5; item = *p; }


namespace n5 {
extern "C" void *PlanErrand_Construct(ErrandRecord *self) {
    self->init();
    _ZN8PlayerIdC1EPv((u8 *)self + 0xc);
    *(u16 *)((u8 *)self + 0x24) = 0xfff1;
    return self;
}

extern "C" void *PlanErrand_Destruct(ErrandRecord *self) {
    _ZN8PlayerIdC1Ev((u8 *)self + 0xc);
    self->func_0209ada0();
    return self;
}

}

// ======== unk_0209a208.cpp ========
namespace n4 {
extern "C" {
void *_ZN12ErrandRecord5clearEv(void *p);
void _ZN12ErrandRecord13func_0209ada0Ev(void *p);
void *_ZN12ErrandRecord4initEv(void *p);
s32 _ZN12ErrandRecord7setItemEPt(void *p, u16 *v);
s32 _ZN12ErrandRecord7getKindEv(void *p);
s32 _ZN12ErrandRecord13getGroupIndexEPi(void *p, s32 *out);
s32 Errand_GetGroupIndex(s32 *out, s32 kind);
s32 Errand_GetGroup(s32 kind);
s32 Errand_GetClassIndex(u32 *out, s32 x);
s32 _ZN12ErrandRecord8getClassEv(void *p);
s32 Errand_GetClass(s32 x);
s32 _ZN12ErrandRecord8isActiveEv(void *p);
s32 _ZN12ErrandRecord5startEhPth(void *p, s32 a, u16 *b, s32 c);
u32 _ZN12ErrandRecord7getStepEv(void *p);
void _ZN12ErrandRecord7setStepEh(void *p, s32 v);
s32 _ZN12ErrandRecord8setExtraEh(void *p, s32 v);
s32 ErrandRecord_GetTime(void *p);
s32 _ZN12VillagerPlan8getStateEv(void *p);
s32 _ZN12VillagerPlan9rollTrendEii(void *p);
s32 _ZN12VillagerPlan5clearEv(void *p);
s32 _ZN12VillagerPlanD1Ev(void *p);
s32 _ZN12VillagerPlanC1Ev(void *p);
s32 PlanErrand_Destruct(void *p);
s32 PlanErrand_Construct(void *p);
s32 PlanState_GetGroup(void *p);
s32 TopicWord_PickRandom(u32 *a, s32 i);
s32 Clock_GetDateTime(s32 x);
s32 _ZN10VillagerId7isValidEv(void *p);
void VillagerId_Copy(void *p, s32 v);
void VillagerId_Clear(void *p);
void VillagerId_Destruct(void *p);
void VillagerId_Construct(void *p);
void _ZN10VillagerId7getNameEj(void *a, void *b);
s32 _ZN10VillagerId12makeFileNameEPvjj(void *a, void *b, s32 c, const void *d);
void MailText_SetSlot(s32 a, void *b);
void _ZN11MsgString9BC1Ev(void *p);
void _ZN11MsgString9BD1Ev(void *p);
void _ZN8PlayerId5clearEv(void *p);
void _ZN8PlayerId6setRawEPv(void *p, s32 v);
void _ZN11MsgString33C1Ev(void *p);
void _ZN11MsgString33D1Ev(void *p);
void _ZN9MsgString5clearEv(void *p);
s32 String_LoadResolveAltText(void *a, u8 *b, s32 c);
s32 Random_GlobalBelow(s32 n);
void _ZN12ItemPickSpec3setEii(void *p, s32 a, s32 b);
void ItemPickSpec_Destruct(void *p);
void ItemPick_One(void *out, void *x, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 Letter_ComposeVillagerToVillagerZ(void *a, u8 *b, u8 *c, u8 *d, u8 *e, void *f, const void *g, void *h, void *i, s32 j);
s32 _ZN11CommManager8isOnlineEv(void *p);
s32 Item_GetFossilGroup(u16 *p);
s32 Item_IsFurniture(void *p);
void *Item_GetFurnitureIndex(void *p);
s32 Ftr_GetFlagPairB(void *p);
s32 FtrInfo_GetColor1(void *p);
s32 FtrInfo_GetColor2(void *p);
s32 Ftr_GetFlagPairA(void *p);
s32 Ftr_GetCollectionGroup(void *p);
s32 Ftr_GetSeries(void *p);
void MI_CpuFill8(void *p, u32 v, u32 n);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)(void *));
void __cxa_vec_ctor(void *p, u32 n, u32 sz, void (*c)(void *), void (*d)(void *));
extern void *gCommManager;
extern u8 sFurnitureGoalCounts[];
extern u8 sFossilGroups[];
extern u32 sPlanErrandStepCounts[];
extern u8 data_020d05bc[];
extern u8 data_020e218c[];
}


extern "C" ErrandKindSetup sErrandKindSetups[];extern "C" {
u8 ParcelErrand_CountPending(void *unused, s32 v);
u8 ParcelErrand_CountPendingRecipients(void *unused, s32 v);
void *PlanErrand_GetRecord(void *p);
u8 PlanErrand_GetStep(void *p);
void PlanErrand_SetStep(void *p, u8 v);
u8 PlanErrand_GetCount(void *p);
BOOL PlanErrand_IsFurnitureGoalMet(void *p);
u16 *PlanErrand_GetShownItem(PlanErrand *p);
void *PlanErrand_GetPlayer(PlanErrand *p);
s32 PlanErrand_GetStepCount(s32 x);
void PlanErrand_SetFossilGroup(PlanErrand *p, u32 v);
s32 PlanErrand_ResetProgress(void *p);
void PlanErrand_Begin(PlanErrand *p, s32 a, u16 *b);
void PlanErrand_SetKind(void *p, s32 a, u16 *b);
void PlanErrand_Clear(void *p);
void PlanErrand_ClearFlags(PlanErrand *p);
}


namespace Unk_0209a944 {
extern "C" s32 PlanErrand_SetStep(void *p, u8 v);
}


extern "C" u8 ParcelErrand_CountPendingRecipients(void *unused, s32 v);
extern "C" u8 ParcelErrand_CountPending(void *unused, s32 v);
extern "C" void ParcelErrand_Clear(u8 *p);
extern "C" BOOL ErrandSetup_WateringCan(void *p);
extern "C" BOOL ErrandSetup_Carpet(void *p);
extern "C" BOOL ErrandSetup_FurnitureParcel(void *p);
extern "C" void PlayerErrandSlot_ComposeLetter(PlayerErrandSlot *self, void *arg);
extern "C" BOOL ErrandSetup_LetterBundle(void *p);
extern "C" BOOL ErrandSetup_RandomShirt(void *p);
extern "C" u8 *PlayerErrandSlot_GetPresentReaction(u8 *p);
extern "C" void PlayerErrandSlot_SetPresentReaction(u8 *p, u32 v);
extern "C" s32 PlayerErrandSlot_IsStepDone(void *self);
extern "C" s32 PlayerErrandSlot_IsPastStepLimit(void *self, s32 kind);
extern "C" BOOL Errand_CanOfferInPlanState(s32 a, void *b);
extern "C" u8 *PlayerErrandSlot_GetVillager(PlayerErrandSlot *p, s32 i);
extern "C" void PlayerErrandSlot_GetRecord(void);
extern "C" BOOL PlayerErrandSlot_Start(PlayerErrandSlot *self, s32 kind, s32 r6, s32 r3);
extern "C" void PlayerErrandSlot_Clear(PlayerErrandSlot *self);
extern "C" PlayerErrandSlot *PlayerErrandSlot_Destruct(PlayerErrandSlot *self);
extern "C" PlayerErrandSlot *PlayerErrandSlot_Construct(PlayerErrandSlot *self);
extern "C" u8 *VillagerPlanBlock_GetErrand(u8 *p);
extern "C" void *VillagerPlanBlock_GetPlan(void *p);
extern "C" s32 VillagerPlanBlock_RollTrend(void *p);
extern "C" void VillagerPlanBlock_Clear(u8 *p);
extern "C" u8 *VillagerPlanBlock_Destruct(u8 *p);
extern "C" u8 *VillagerPlanBlock_Construct(u8 *p);
extern "C" BOOL PlanErrand_IsFurnitureGoalMet(void *self);
extern "C" u8 PlanErrand_AddCount(PlanErrand *p, s32 n);
extern "C" u8 PlanErrand_GetCount(void *p);
extern "C" s32 Furniture_ScoreAttribute(void *self, u32 kind, s32 val);
extern "C" void FossilGroup_GetItem(u16 *out, s32 a, s32 b);
extern "C" u8 FossilGroup_PickMissing(u16 *p, s32 n);
extern "C" s32 FossilGroup_ToIndex(u32 v);
extern "C" void PlanErrand_ClearFlags(PlanErrand *p);
extern "C" BOOL PlanErrand_TestFlag(PlanErrand *p, u32 i);
extern "C" void PlanErrand_SetFlag(PlanErrand *p, s32 i);
extern "C" void PlanErrand_SetFossilGroup(PlanErrand *p, u32 v);
extern "C" u8 PlanErrand_GetFossilGroup(PlanErrand *p);
extern "C" u16 *PlanErrand_GetShownItem(PlanErrand *p);
extern "C" s32 PlanErrand_GetTime(void *p);
extern "C" s32 PlanErrand_GetStepCount(s32 x);
extern "C" void *PlanErrand_GetPlayer(PlanErrand *p);
extern "C" void PlanErrand_SetStep(void *p, u8 v);
extern "C" u8 PlanErrand_GetStep(void *p);
extern "C" void *PlanErrand_GetRecord(void *p);
extern "C" void PlanErrand_AdvanceStep(PlanErrand *self);
extern "C" void PlanErrand_MarkReady(void *p);
extern "C" void PlanErrand_Assign(PlanErrand *self, s32 a1, u16 *p, void *obj, u8 flag);
extern "C" s32 PlanErrand_ResetProgress(void *pp);
extern "C" void PlanErrand_Begin(PlanErrand *self, s32 a, u16 *b);
extern "C" void PlanErrand_SetKind(void *p, s32 a, u16 *b);
extern "C" void PlanErrand_Clear(void *pp);

extern "C" void PlanErrand_Clear(void *pp) {
    PlanErrand *self = (PlanErrand *)pp;
    _ZN12ErrandRecord5clearEv(self);
    _ZN8PlayerId5clearEv(self->player);
    self->step = 7;
    self->shownItem = 0xfff1;
    self->count = 0;
    self->fossilGroup = 0x18;
    self->flags = 0;
}

extern "C" void PlanErrand_SetKind(void *p, s32 a, u16 *b) {
    _ZN12ErrandRecord5startEhPth(p, a, b, 0);
}

extern "C" void PlanErrand_Begin(PlanErrand *self, s32 a, u16 *b) {
    PlanErrand_Clear(self);
    PlanErrand_SetKind(self, a, b);
    self->step = 0;
}

extern "C" s32 PlanErrand_ResetProgress(void *pp) {
    PlanErrand *self = (PlanErrand *)pp;
    u16 v;
    _ZN12ErrandRecord7setStepEh(PlanErrand_GetRecord(self), 0);
    v = 0xfff1;
    _ZN12ErrandRecord7setItemEPt(PlanErrand_GetRecord(self), &v);
    _ZN8PlayerId5clearEv(PlanErrand_GetPlayer(self));
    *PlanErrand_GetShownItem(self) = 0xfff1;
}

extern "C" void PlanErrand_Assign(PlanErrand *self, s32 a1, u16 *p, void *obj, u8 flag) {
    if (flag) {
        PlanErrand_Begin(self, a1, p);
    } else {
        _ZN12ErrandRecord7setStepEh(PlanErrand_GetRecord(self), 0);
        _ZN12ErrandRecord7setItemEPt(PlanErrand_GetRecord(self), p);
        if (_ZN12ErrandRecord7getKindEv(PlanErrand_GetRecord(self)) == 2) {
            if (PlanErrand_GetStep(self) == 2) {
                BOOL r = FALSE;
                if (*p >= 0x450c && *p <= 0x45db) {
                    r = TRUE;
                }
                if (r) {
                    PlanErrand_SetFossilGroup(self, (u8)Item_GetFossilGroup(p));
                }
            }
        }
    }
    if (obj) {
        _ZN8PlayerId6setRawEPv(PlanErrand_GetPlayer(self), (s32)obj);
        Clock_GetDateTime(ErrandRecord_GetTime(PlanErrand_GetRecord(self)));
        _ZN12ErrandRecord8setExtraEh(PlanErrand_GetRecord(self), 0);
    } else {
        _ZN8PlayerId5clearEv(PlanErrand_GetPlayer(self));
    }
}

extern "C" void PlanErrand_MarkReady(void *p) {
    void *o = PlanErrand_GetRecord(p);
    if (_ZN12ErrandRecord8isActiveEv(o)) {
        if (_ZN12ErrandRecord8getClassEv(o) == 0) {
            if (_ZN12ErrandRecord7getStepEv(o) == 1) {
                _ZN12ErrandRecord7setStepEh(o, 2);
            }
        }
    }
}

extern "C" void PlanErrand_AdvanceStep(PlanErrand *self) {
    void *o = PlanErrand_GetRecord(self);
    s32 t;
    s32 a;
    s32 ok;
    if (_ZN12ErrandRecord8isActiveEv(o)) {
        if (_ZN12ErrandRecord8getClassEv(o) == 0) {
            t = PlanErrand_GetStepCount(_ZN12ErrandRecord7getKindEv(o));
            a = PlanErrand_GetStep(self);
            if (a < t - 1) {
                if (_ZN12ErrandRecord7getKindEv(o) == 4) {
                    ok = PlanErrand_IsFurnitureGoalMet(self);
                } else {
                    ok = 1;
                }
                PlanErrand_ResetProgress(self);
                if (ok ? TRUE : FALSE) {
                    Unk_0209a944::PlanErrand_SetStep(self, a + 1);
                }
            }
        }
    }
}

extern "C" void *PlanErrand_GetRecord(void *p) {
    return p;
}

extern "C" u8 PlanErrand_GetStep(void *p) {
    return ((u8 *)p)[0x22];
}

extern "C" void PlanErrand_SetStep(void *p, u8 v) {
    ((u8 *)p)[0x22] = v;
}

extern "C" void *PlanErrand_GetPlayer(PlanErrand *p) {
    return p->player;
}

extern "C" s32 PlanErrand_GetStepCount(s32 x) {
    u32 idx;
    if (Errand_GetClass(x) == 0) {
        idx = 0;
        if (Errand_GetClassIndex(&idx, x)) {
            return sPlanErrandStepCounts[idx];
        }
    }
    return 0;
}

extern "C" s32 PlanErrand_GetTime(void *p) {
    return ErrandRecord_GetTime(p);
}

extern "C" u16 *PlanErrand_GetShownItem(PlanErrand *p) {
    return &p->shownItem;
}

extern "C" u8 PlanErrand_GetFossilGroup(PlanErrand *p) {
    return p->fossilGroup;
}

extern "C" void PlanErrand_SetFossilGroup(PlanErrand *p, u32 v) {
    PlanErrand_ClearFlags(p);
    p->fossilGroup = v;
}

extern "C" void PlanErrand_SetFlag(PlanErrand *p, s32 i) {
    p->flags |= (1 << i);
}

extern "C" BOOL PlanErrand_TestFlag(PlanErrand *p, u32 i) {
    if (i < 3) {
        if ((p->flags >> i) & 1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void PlanErrand_ClearFlags(PlanErrand *p) {
    p->flags = 0;
}

extern "C" s32 FossilGroup_ToIndex(u32 v) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (v == sFossilGroups[i]) {
            return i;
        }
    }
    return -1;
}

extern "C" u8 FossilGroup_PickMissing(u16 *p, s32 n) {
    u8 f[10];
    s32 cnt = 10;
    s32 i;
    s32 j;
    s32 k;
    MI_CpuFill8(f, 0, cnt);
    for (i = 0; i < n; i++, p++) {
        BOOL in = FALSE;
        if (*p >= 0x450c && *p <= 0x45db) {
            in = TRUE;
        }
        if (in) {
            for (j = 0; j < 10; j++) {
                if (sFossilGroups[j] == Item_GetFossilGroup(p)) {
                    if (f[j] == 0) {
                        f[j] = 1;
                        cnt--;
                        break;
                    }
                }
            }
        }
    }
    k = Random_GlobalBelow(cnt);
    j = 0;
    while (k >= 0) {
        if (f[j] == 0) {
            if (k == 0) break;
            k--;
            j++;
        } else {
            j++;
        }
    }
    return sFossilGroups[j];
}

extern "C" void FossilGroup_GetItem(u16 *out, s32 a, s32 b) {
    u16 tmp;
    u32 i;
    *out = 0xfff1;
    tmp = 0xfff1;
    for (i = 0; i < 0x34; i++) {
        tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (a == Item_GetFossilGroup(&tmp)) {
            u32 k = i + b;
            *out = k < 0x34 ? 0x450c + k * 4 : 0x450c;
            break;
        }
    }
}

extern "C" s32 Furniture_ScoreAttribute(void *self, u32 kind, s32 val) {
    s32 r = 0;
    if (Item_IsFurniture(self)) {
        {
            switch (kind) {
            case 0:
                if (val == Ftr_GetFlagPairB(self)) r = 2;
                break;
            case 1:
                self = Item_GetFurnitureIndex(self);
                if (val == FtrInfo_GetColor1(self)) r = 1;
                if (val == FtrInfo_GetColor2(self)) r++;
                break;
            case 2:
                if (val == Ftr_GetFlagPairA(self)) r = 2;
                break;
            case 3:
                if (val == Ftr_GetCollectionGroup(self)) r = 2;
                break;
            case 4:
                if (val == Ftr_GetSeries(self)) r = 2;
                break;
            }
        }
    }
    return r;
}

extern "C" u8 PlanErrand_GetCount(void *p) {
    return ((u8 *)p)[0x26];
}

extern "C" u8 PlanErrand_AddCount(PlanErrand *p, s32 n) {
    s32 t = p->count + n;
    if (t > 14) {
        t = 14;
    }
    p->count = t;
    return p->count;
}

extern "C" BOOL PlanErrand_IsFurnitureGoalMet(void *self) {
    void *o = PlanErrand_GetRecord(self);
    s32 t;
    if (_ZN12ErrandRecord8isActiveEv(o)) {
        if (_ZN12ErrandRecord7getKindEv(o) == 4) {
            t = PlanErrand_GetStep(self);
            if (t < 6) {
                if (PlanErrand_GetCount(self) >= sFurnitureGoalCounts[t]) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

extern "C" u8 *VillagerPlanBlock_Construct(u8 *p) {
    _ZN12VillagerPlanC1Ev(p);
    PlanErrand_Construct(p + 0x24);
    return p;
}

extern "C" u8 *VillagerPlanBlock_Destruct(u8 *p) {
    PlanErrand_Destruct(p + 0x24);
    _ZN12VillagerPlanD1Ev(p);
    return p;
}

extern "C" void VillagerPlanBlock_Clear(u8 *p) {
    _ZN12VillagerPlan5clearEv(p);
    PlanErrand_Clear(p + 0x24);
}

extern "C" s32 VillagerPlanBlock_RollTrend(void *p) {
    _ZN12VillagerPlan9rollTrendEii(p);
    return _ZN12VillagerPlan8getStateEv(p);
}

extern "C" void *VillagerPlanBlock_GetPlan(void *p) {
    return p;
}

extern "C" u8 *VillagerPlanBlock_GetErrand(u8 *p) {
    return p + 0x24;
}

extern "C" PlayerErrandSlot *PlayerErrandSlot_Construct(PlayerErrandSlot *self) {
    _ZN12ErrandRecord4initEv(self);
    __cxa_vec_ctor(self->villagers, 2, 0xc, VillagerId_Construct, VillagerId_Destruct);
    return self;
}

extern "C" PlayerErrandSlot *PlayerErrandSlot_Destruct(PlayerErrandSlot *self) {
    __cxa_vec_cleanup(self->villagers, 2, 0xc, VillagerId_Destruct);
    _ZN12ErrandRecord13func_0209ada0Ev(self);
    return self;
}

extern "C" void PlayerErrandSlot_Clear(PlayerErrandSlot *self) {
    s32 i;
    _ZN12ErrandRecord5clearEv(self);
    for (i = 0; i < 2; i++) {
        VillagerId_Clear(&self->villagers[i]);
    }
    self->presentReaction = 0;
}

extern "C" BOOL PlayerErrandSlot_Start(PlayerErrandSlot *self, s32 kind, s32 r6, s32 r3) {
    BOOL r = FALSE;
    s32 idx = 0;
    u16 v;
    if (Errand_GetGroup(kind) == 1) {
        if (Errand_GetGroupIndex(&idx, kind)) {
            v = 0xfff1;
            _ZN12ErrandRecord5startEhPth(self, kind, &v, r);
            {
                ErrandKindSetup *e = &sErrandKindSetups[idx];
                if (e->setup) {
                    (self->*(e->setup))();
                }
            }
            if (r6) {
                VillagerId_Copy(&self->villagers[0], r6);
            }
            if (r3) {
                VillagerId_Copy(&self->villagers[1], r3);
            }
            r = TRUE;
        }
    }
    return r;
}

extern "C" void PlayerErrandSlot_GetRecord(void) {
}

extern "C" u8 *PlayerErrandSlot_GetVillager(PlayerErrandSlot *p, s32 i) {
    return (u8 *)&p->villagers[i];
}

extern "C" BOOL Errand_CanOfferInPlanState(s32 a, void *b) {
    s32 t;
    BOOL r;
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        return FALSE;
    }
    t = PlanState_GetGroup(b);
    r = FALSE;
    switch (a) {
    case 10:
        if (t == 1) r = TRUE;
        break;
    case 19:
        if (t == 1) r = TRUE;
        break;
    }
    return r;
}

extern "C" s32 PlayerErrandSlot_IsPastStepLimit(void *self, s32 kind) {
    BOOL r = FALSE;
    s32 idx;
    if (_ZN12ErrandRecord8isActiveEv(self)) {
        if (Errand_GetGroup(kind) == 1) {
            if (kind == _ZN12ErrandRecord7getKindEv(self)) {
                if (_ZN12ErrandRecord13getGroupIndexEPi(self, &idx)) {
                    if (_ZN12ErrandRecord7getStepEv(self) > sErrandKindSetups[idx].stepLimit) {
                        r = TRUE;
                    }
                }
            }
        }
    }
    return r;
}

extern "C" s32 PlayerErrandSlot_IsStepDone(void *self) {
    return PlayerErrandSlot_IsPastStepLimit(self, _ZN12ErrandRecord7getKindEv(self));
}

extern "C" void PlayerErrandSlot_SetPresentReaction(u8 *p, u32 v) {
    p[0x24] = v;
}

extern "C" u8 *PlayerErrandSlot_GetPresentReaction(u8 *p) {
    return p + 0x24;
}

extern "C" BOOL ErrandSetup_RandomShirt(void *p) {
    u32 x[2];
    u16 out;
    _ZN12ItemPickSpec3setEii(x, 2, 0);
    ItemPick_One(&out, x, 0, 0, 1, 1, 0);
    ItemPickSpec_Destruct(x);
    _ZN12ErrandRecord7setItemEPt(p, &out);
    return TRUE;
}

extern "C" BOOL ErrandSetup_LetterBundle(void *p) {
    u16 v = 0x1565;
    _ZN12ErrandRecord7setItemEPt(p, &v);
    return TRUE;
}

extern "C" void PlayerErrandSlot_ComposeLetter(PlayerErrandSlot *self, void *arg) {
    u8 b[5];
    u32 cnt;
    u8 buf[0x1e];
    u32 X[7];
    u32 Y[13];
    s32 i;
    s32 r;
    if (_ZN10VillagerId7isValidEv(&self->villagers[0]) && _ZN10VillagerId7isValidEv(&self->villagers[1])) {
        _ZN11MsgString9BC1Ev(X);
        _ZN11MsgString33C1Ev(Y);
        cnt = 0;
        _ZN10VillagerId7getNameEj(&self->villagers[1], X);
        MailText_SetSlot(0, X);
        _ZN9MsgString5clearEv(X);
        _ZN10VillagerId7getNameEj(&self->villagers[0], X);
        MailText_SetSlot(1, X);
        for (i = 0; i < 6; i++) {
            r = TopicWord_PickRandom(&cnt, i);
            _ZN9MsgString5clearEv(Y);
            b[0] = cnt;
            String_LoadResolveAltText(Y, b, r);
            MailText_SetSlot(i + 2, Y);
        }
        _ZN10VillagerId12makeFileNameEPvjj(&self->villagers[0], buf, 0x1e, data_020d05bc);
        b[1] = Random_GlobalBelow(10);
        b[2] = Random_GlobalBelow(10);
        b[3] = Random_GlobalBelow(10);
        b[4] = Random_GlobalBelow(10);
        Letter_ComposeVillagerToVillagerZ(arg, &b[1], &b[2], &b[3], &b[4], buf, data_020e218c, &self->villagers[0], &self->villagers[1], 1);
        _ZN11MsgString33D1Ev(Y);
        _ZN11MsgString9BD1Ev(X);
    }
}

extern "C" BOOL ErrandSetup_FurnitureParcel(void *p) {
    u16 v = 0x1563;
    _ZN12ErrandRecord7setItemEPt(p, &v);
    return TRUE;
}

extern "C" BOOL ErrandSetup_Carpet(void *p) {
    u16 v = 0x1561;
    _ZN12ErrandRecord7setItemEPt(p, &v);
    return TRUE;
}

extern "C" BOOL ErrandSetup_WateringCan(void *p) {
    u16 v = 0x1564;
    _ZN12ErrandRecord7setItemEPt(p, &v);
    return TRUE;
}

extern "C" void ParcelErrand_Clear(u8 *p) {
    _ZN12ErrandRecord5clearEv(p);
    p[0xc] = 5;
    p[0xd] = 0;
}

extern "C" u8 ParcelErrand_CountPending(void *unused, s32 v) {
    u8 n = 0;
    s32 i = 0;
    for (; i < 5; i++) {
        if ((v >> i) & 1) {
            n = n + 1;
        }
    }
    return n;
}

extern "C" u8 ParcelErrand_CountPendingRecipients(void *unused, s32 v) {
    u8 n = ParcelErrand_CountPending(unused, v);
    if ((v >> 2) & 1) {
        if ((v >> 3) & 1) {
            n = n - 1;
        }
    }
    return n;
}

}

// ======== unk_020998b8.cpp ========
namespace n3 {
extern "C" {
extern u8 gSaveVillagers[];
extern u16 sParcelRecipients[];
extern u16 sParcelItems[];
extern u8 data_021ed104[];
PlayerErrandSlot *PlayerErrands_GetSlot(PlayerErrands *m, s32 i);
BOOL PlayerErrands_IsJobActive(PlayerErrands *m);
void PlayerErrands_ClearJobVillagers(PlayerErrands *m);
void Arbeit_ClearOnDuty(PlayerErrands *m);
void HouseVisitInvite_Clear(HouseVisitInvite *x);
void Arbeit_OnLetterWritten(void *p);
void ParcelErrand_RemoveRecipient(ParcelErrand *z, s32 i);
s32 ParcelErrand_PickRecipient(ParcelErrand *z, s32 mask);
s32 ParcelErrand_CountPendingRecipients(ParcelErrand *z, s32 v);
s32 ParcelErrand_CountPending(ParcelErrand *z, u32 mask);
void ParcelErrand_Clear(ParcelErrand *z);
s32 PlayerErrandSlot_Clear(PlayerErrandSlot *e);
ErrandRecord *PlayerErrandSlot_GetRecord(PlayerErrandSlot *e);
VillagerIdCtorDtor *PlayerErrandSlot_GetVillager(PlayerErrandSlot *e, s32 i);
void PlayerErrandSlot_Start(PlayerErrandSlot *e, s32 a, s32 b, void *c);
void *ParcelErrand_GetRecord(ParcelErrand *z);
void *ParcelErrand_GetRecipientName(ParcelErrand *z, s32 v);
void _ZN12ErrandRecord7setItemEPt(ParcelErrand *z, u16 *v);
u16 *_ZN12ErrandRecord7getItemEv(ErrandRecord *y);
void _ZN12ErrandRecord7setStepEh(ErrandRecord *y, s32 v);
u32 _ZN12ErrandRecord7getStepEv(ErrandRecord *y);
u32 _ZN12ErrandRecord11getSubGroupEv(ErrandRecord *y);
void _ZN12ErrandRecord14setTimeFromNowEi(ErrandRecord *y, s32 v);
u32 _ZN12ErrandRecord7getKindEv(ErrandRecord *y);
void _ZN12ErrandRecord5startEhPth(ErrandRecord *y, s32 t, u16 *v, s32 k);
s32 _ZN12ErrandRecord8isActiveEv(ErrandRecord *y);
void _ZN12ErrandRecord5clearEv(ErrandRecord *y);
s32 _ZN10VillagerId7isValidEv(VillagerIdCtorDtor *r);
void VillagerId_Copy(VillagerIdCtorDtor *r, VillagerIdCtorDtor *o);
void VillagerId_Clear(VillagerIdCtorDtor *r);
VillagerIdCtorDtor *_ZN12VillagerData13getVillagerIdEv(void *p);
void *SaveVillagers_PickRandomTalkPartner(void *g, VillagerIdCtorDtor **a, s32 n);
s32 _ZN10LetterView8getStateEv(void *p);
s32 Letter_GetRecipientVillager(void *p);
s32 PlayerData_GetCurrent();
void *_ZN10PlayerData10getErrandsEv(void *p);
void func_02133ef8(void *p, s32 n);
s32 memcmp(void *a, void *b, u32 n);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void MI_CpuFill8(void *p, u32 v, u32 n);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
u32 Random_GlobalBelow(u32 n);
s32 Npc_GetName(void *p, u16 *v);
u32 _ZN10VillagerId7getNameEj(VillagerIdCtorDtor *r, u32 a);
s32 _ZN10PlayerData11getPlayerIdEv(s32 v);
s32 _ZN6TownId15getTownRelationEv(s32 v);
s32 NookShop_IsOpenHour();
s32 NookShop_IsClosedToday(void *p);
}


extern "C" BOOL Arbeit_IsLetterRecipient(PlayerErrands *m, VillagerIdCtorDtor *r);
extern "C" void Arbeit_Finish(PlayerErrands *m);
extern "C" void Arbeit_OnBbsPosted(PlayerErrands *m);
extern "C" void Arbeit_StartBbsTask(PlayerErrands *m);
extern "C" void Arbeit_StartWateringCanDelivery(PlayerErrands *m);
extern "C" void Arbeit_StartCarpetDelivery(PlayerErrands *m);
extern "C" BOOL Arbeit_OnLetterSent(PlayerErrands *m, void *p);
extern "C" void Arbeit_NotifyLetterWritten();
extern "C" void Arbeit_OnLetterWritten(void *p);
extern "C" void Arbeit_StartLetterTask(PlayerErrands *m);
extern "C" void Arbeit_StartFurnitureDelivery(PlayerErrands *m);
extern "C" void Arbeit_StartGreetings(PlayerErrands *m);
extern "C" void Arbeit_StartPlanting(PlayerErrands *m);
extern "C" BOOL Arbeit_IsOnDuty(PlayerErrands *m);
extern "C" void Arbeit_ClearOnDuty(PlayerErrands *m);
extern "C" void Arbeit_SetOnDuty(PlayerErrands *m);
extern "C" void Arbeit_Start(PlayerErrands *m);
extern "C" BOOL PlayerErrands_IsJobActive(PlayerErrands *m);
extern "C" void PlayerErrands_ClearJobVillagers(PlayerErrands *m);
extern "C" void *PlayerErrands_GetDeliveryRecipientName(PlayerErrands *m, s32 a, u16 *p);
extern "C" PlayerErrandSlot *PlayerErrandSlots_FindByVillager(PlayerErrandSlot *arr, VillagerIdCtorDtor *p, s32 idx);
extern "C" PlayerErrandSlot *PlayerErrands_GetSlot(PlayerErrands *m, s32 i);
extern "C" void PlayerErrands_Clear(PlayerErrands *m);
extern "C" void HouseVisitInvite_Set(HouseVisitInvite *x, VillagerIdCtorDtor *r, void *src);
extern "C" BOOL HouseVisitInvite_IsFrom(HouseVisitInvite *x, VillagerIdCtorDtor *p);
extern "C" void HouseVisitInvite_Clear(HouseVisitInvite *x);
extern "C" BOOL ParcelErrand_IsFor(ParcelErrand *z, u16 *p);
extern "C" BOOL ParcelErrand_NextRecipient(ParcelErrand *z);
extern "C" void *ParcelErrand_GetRecipientName(ParcelErrand *z, s32 v);
extern "C" void *ParcelErrand_GetRecord(ParcelErrand *z);
extern "C" void ParcelErrand_Start(ParcelErrand *z);
extern "C" void ParcelErrand_RemoveRecipient(ParcelErrand *z, s32 i);
extern "C" s32 ParcelErrand_PickRecipient(ParcelErrand *z, s32 m);

extern "C" s32 ParcelErrand_PickRecipient(ParcelErrand *z, s32 m) {
    if (NookShop_IsOpenHour() == 0) {
        m = (u8)(m & ~3);
    } else if (NookShop_IsClosedToday(data_021ed104)) {
        m = (u8)(m & ~1);
    }
    s32 n = ParcelErrand_CountPending(z, m);
    if (n > 0) {
        s32 r = Random_GlobalBelow(n);
        for (s32 i = 0; i < 5; i++) {
            if ((m >> i) & 1) {
                if (r == 0) {
                    return i;
                }
                r--;
            }
        }
    }
    return -1;
}

extern "C" void ParcelErrand_RemoveRecipient(ParcelErrand *z, s32 i) {
    if ((u32)(i - 2) <= 1) {
        z->pendingRecipients &= ~4;
        z->pendingRecipients &= ~8;
    } else {
        z->pendingRecipients &= ~(1 << i);
    }
}

extern "C" void ParcelErrand_Start(ParcelErrand *z) {
    u32 r = Random_GlobalBelow(10) & 1;
    ParcelErrand_Clear(z);
    u16 v = sParcelItems[r];
    _ZN12ErrandRecord5startEhPth(z, 0x14, &v, 0);
    for (s32 i = 0; i < 5; i++) {
        z->pendingRecipients |= 1 << i;
    }
    r = ParcelErrand_PickRecipient(z, z->pendingRecipients);
    if (r < 5) {
        ParcelErrand_RemoveRecipient(z, r);
        z->recipient = r;
    }
}

extern "C" void *ParcelErrand_GetRecord(ParcelErrand *z) {
    return z;
}

extern "C" void *ParcelErrand_GetRecipientName(ParcelErrand *z, s32 v) {
    if (z->recipient < 5) {
        u16 t = sParcelRecipients[z->recipient];
        return (void *)Npc_GetName((void *)v, &t);
    }
    return 0;
}

extern "C" BOOL ParcelErrand_NextRecipient(ParcelErrand *z) {
    if (z->pendingRecipients) {
        u32 r = ParcelErrand_PickRecipient(z, z->pendingRecipients);
        if (r < 5) {
            ParcelErrand_RemoveRecipient(z, r);
            z->recipient = r;
            _ZN12ErrandRecord7setStepEh(z, 0);
            u16 v = sParcelItems[Random_GlobalBelow(10) & 1];
            _ZN12ErrandRecord7setItemEPt(z, &v);
            r = ParcelErrand_CountPendingRecipients(z, z->pendingRecipients);
            if ((r == 2 && (Random_GlobalBelow(10) & 1)) || r == 1) {
                z->pendingRecipients = 0;
            }
            return TRUE;
        } else {
            z->pendingRecipients = 0;
        }
    }
    return FALSE;
}

extern "C" BOOL ParcelErrand_IsFor(ParcelErrand *z, u16 *p) {
    if (z->recipient < 5 && PlayerData_GetCurrent() && !_ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()))) {
        if (((s32)(*p & 0xf000) >> 12) == 0xd && _ZN12ErrandRecord8isActiveEv(z) && _ZN12ErrandRecord7getStepEv(z) == 0) {
            BOOL in = FALSE;
            if (*p >= 0xd019 && *p <= 0xd01c) {
                in = TRUE;
            }
            if (in) {
                if (z->recipient == 0) {
                    return TRUE;
                }
            } else {
                u16 v = sParcelRecipients[z->recipient];
                BOOL same;
                if (Item_IsFurniture(p)) {
                    u16 t = v;
                    if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                } else {
                    if (*p == v) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                }
                if (same) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

}
HouseVisitInvite::HouseVisitInvite() : visitTime(0), visitTimeHi(0) {
    using namespace n3;
    VillagerId_Clear(this);
    _ZN12ErrandRecord5clearEv(&errand);
    visitTime = 0;
    visitTimeHi = 0;
    MI_CpuFill8(unk_20, 0, 1);
}


namespace n3 {
}
HouseVisitInvite::~HouseVisitInvite() {
    using namespace n3;}


namespace n3 {
extern "C" void HouseVisitInvite_Clear(HouseVisitInvite *x) {
    _ZN12ErrandRecord5clearEv(&x->errand);
    VillagerId_Clear(x);
    x->visitTime = 0;
    x->visitTimeHi = 0;
    MI_CpuFill8(x->unk_20, 0, 1);
}

extern "C" BOOL HouseVisitInvite_IsFrom(HouseVisitInvite *x, VillagerIdCtorDtor *p) {
    if (_ZN12ErrandRecord8isActiveEv(&x->errand) && _ZN10VillagerId7isValidEv(p) && p->townId == x->townId &&
        memcmp(p->townName, x->townName, 8) == 0 && p->species == x->species) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void HouseVisitInvite_Set(HouseVisitInvite *x, VillagerIdCtorDtor *r, void *src) {
    HouseVisitInvite_Clear(x);
    u16 v = 0xfff1;
    _ZN12ErrandRecord5startEhPth(&x->errand, 0x15, &v, 0);
    _ZN12ErrandRecord14setTimeFromNowEi(&x->errand, 0);
    VillagerId_Copy(x, r);
    MI_CpuCopy8(src, &x->visitTime, 8);
}

}
PlayerErrands::PlayerErrands() {
    using namespace n3;}


namespace n3 {
}
PlayerErrands::~PlayerErrands() {
    using namespace n3;}


namespace n3 {
extern "C" void PlayerErrands_Clear(PlayerErrands *m) {
    for (s32 i = 0; i < 2; i++) {
        PlayerErrandSlot_Clear(&m->slots[i]);
    }
    PlayerErrands_ClearJobVillagers(m);
    ParcelErrand_Clear(&m->parcelErrand);
    HouseVisitInvite_Clear(&m->houseVisitInvite);
}

extern "C" PlayerErrandSlot *PlayerErrands_GetSlot(PlayerErrands *m, s32 i) {
    PlayerErrandSlot *r = 0;
    if (i >= 0 && i < 2) {
        r = &m->slots[i];
    }
    return r;
}

extern "C" PlayerErrandSlot *PlayerErrandSlots_FindByVillager(PlayerErrandSlot *arr, VillagerIdCtorDtor *p, s32 idx) {
    PlayerErrandSlot *ret = 0;
    if (_ZN10VillagerId7isValidEv(p)) {
        s32 i;
        for (i = 0; i < 2; i++) {
            PlayerErrandSlot *e = &arr[i];
            if (_ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(e))) {
                VillagerIdCtorDtor *q = PlayerErrandSlot_GetVillager(e, idx);
                if (q->townId == p->townId && memcmp(q->townName, p->townName, 8) == 0 && q->species == p->species) {
                    ret = e;
                    break;
                }
            }
        }
    }
    return ret;
}

extern "C" void *PlayerErrands_GetDeliveryRecipientName(PlayerErrands *m, s32 a, u16 *p) {
    void *ret = 0;
    BOOL in = FALSE;
    if (*p >= 0x155f && *p <= 0x1560) {
        in = TRUE;
    }
    if (in) {
        if (_ZN12ErrandRecord8isActiveEv((ErrandRecord *)ParcelErrand_GetRecord(&m->parcelErrand))) {
            ret = ParcelErrand_GetRecipientName(&m->parcelErrand, a);
            goto end;
        }
    }
    {
        s32 k = 0;
        BOOL in2 = FALSE;
        if (*p >= 0x1561 && *p <= 0x1564) {
            in2 = TRUE;
        }
        if (in2) {
            k = 0;
        }
        PlayerErrandSlot *e = PlayerErrands_GetSlot(m, k);
        if (e) {
            ErrandRecord *y = PlayerErrandSlot_GetRecord(e);
            if (_ZN12ErrandRecord8isActiveEv(y)) {
                u16 *q = _ZN12ErrandRecord7getItemEv(y);
                BOOL same;
                if (Item_IsFurniture(q)) {
                    if (Item_GetFurnitureIndex(q) == Item_GetFurnitureIndex(p)) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                } else {
                    if (*q == *p) {
                        same = TRUE;
                    } else {
                        same = FALSE;
                    }
                }
                if (same) {
                    ret = (void *)_ZN10VillagerId7getNameEj(PlayerErrandSlot_GetVillager(e, 1), a);
                }
            }
        }
    }
end:
    return ret;
}

extern "C" void PlayerErrands_ClearJobVillagers(PlayerErrands *m) {
    for (s32 i = 0; i < 3; i++) {
        VillagerId_Clear(&m->jobVillagers[i]);
    }
}

extern "C" BOOL PlayerErrands_IsJobActive(PlayerErrands *m) {
    ErrandRecord *y = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(m, 0));
    if (_ZN12ErrandRecord8isActiveEv(y) && _ZN12ErrandRecord11getSubGroupEv(y) == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void Arbeit_Start(PlayerErrands *m) {
    PlayerErrandSlot *e = PlayerErrands_GetSlot(m, 0);
    PlayerErrandSlot_Clear(e);
    PlayerErrandSlot_Start(e, 0xb, 0, 0);
    PlayerErrands_ClearJobVillagers(m);
    Arbeit_ClearOnDuty(m);
}

extern "C" void Arbeit_SetOnDuty(PlayerErrands *m) {
    m->onDuty = 1;
}

extern "C" void Arbeit_ClearOnDuty(PlayerErrands *m) {
    m->onDuty = 0;
}

extern "C" BOOL Arbeit_IsOnDuty(PlayerErrands *m) {
    if (m->onDuty == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void Arbeit_StartPlanting(PlayerErrands *m) {
    PlayerErrandSlot_Start(PlayerErrands_GetSlot(m, 0), 0xc, 0, 0);
}

extern "C" void Arbeit_StartGreetings(PlayerErrands *m) {
    PlayerErrandSlot_Start(PlayerErrands_GetSlot(m, 0), 0xd, 0, 0);
}

extern "C" void Arbeit_StartFurnitureDelivery(PlayerErrands *m) {
    PlayerErrandSlot *e = PlayerErrands_GetSlot(m, 0);
    void *t = SaveVillagers_PickRandomTalkPartner(gSaveVillagers, 0, 0);
    PlayerErrandSlot_Start(e, 0xe, 0, _ZN12VillagerData13getVillagerIdEv(t));
    VillagerId_Copy(&m->jobVillagers[0], _ZN12VillagerData13getVillagerIdEv(t));
}

extern "C" void Arbeit_StartLetterTask(PlayerErrands *m) {
    PlayerErrandSlot *e = PlayerErrands_GetSlot(m, 0);
    PlayerErrandSlot_GetRecord(e);
    VillagerIdCtorDtor *a[1];
    func_02133ef8(a, 4);
    s32 n = 0;
    if (_ZN10VillagerId7isValidEv(&m->jobVillagers[0])) {
        a[0] = &m->jobVillagers[0];
        n = 1;
    }
    void *t = SaveVillagers_PickRandomTalkPartner(gSaveVillagers, a, n);
    PlayerErrandSlot_Start(e, 0xf, 0, _ZN12VillagerData13getVillagerIdEv(t));
    VillagerId_Copy(&m->jobVillagers[1], _ZN12VillagerData13getVillagerIdEv(t));
}

extern "C" void Arbeit_OnLetterWritten(void *p) {
    ErrandRecord *y = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot((PlayerErrands *)p, 0));
    if (_ZN12ErrandRecord7getKindEv(y) == 0xf) {
        if (_ZN12ErrandRecord7getStepEv(y) == 0) {
            _ZN12ErrandRecord7setStepEh(y, 1);
        }
    }
}

extern "C" void Arbeit_NotifyLetterWritten() {
    void *r = (void *)PlayerData_GetCurrent();
    if (r) {
        Arbeit_OnLetterWritten(_ZN10PlayerData10getErrandsEv(r));
    }
}

extern "C" BOOL Arbeit_OnLetterSent(PlayerErrands *m, void *p) {
    if (p && _ZN10LetterView8getStateEv(p)) {
        PlayerErrandSlot *e = PlayerErrands_GetSlot(m, 0);
        ErrandRecord *y = PlayerErrandSlot_GetRecord(e);
        if (_ZN12ErrandRecord7getKindEv(y) == 0xf) {
            s32 v = Letter_GetRecipientVillager(p);
            if (v) {
                VillagerIdCtorDtor tmp(v);
                if (_ZN10VillagerId7isValidEv(&tmp)) {
                    VillagerIdCtorDtor *q = PlayerErrandSlot_GetVillager(e, 1);
                    if (q->townId == tmp.townId && memcmp(q->townName, tmp.townName, 8) == 0 && q->species == tmp.species) {
                        if (_ZN12ErrandRecord7getStepEv(y) < 2) {
                            _ZN12ErrandRecord7setStepEh(y, 2);
                            return TRUE;
                        }
                        goto out;
                    }
                }
                if (_ZN12ErrandRecord7getStepEv(y) == 0) {
                    _ZN12ErrandRecord7setStepEh(y, 1);
                    return TRUE;
                }
            out:;
            } else {
                if (_ZN12ErrandRecord7getStepEv(y) == 0) {
                    _ZN12ErrandRecord7setStepEh(y, 1);
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void Arbeit_StartCarpetDelivery(PlayerErrands *m) {
    PlayerErrandSlot *e = PlayerErrands_GetSlot(m, 0);
    VillagerIdCtorDtor *a[2];
    func_02133ef8(a, 8);
    s32 n = 0, i = n;
    for (; i < 2; i++) {
        VillagerIdCtorDtor *r = &m->jobVillagers[i];
        if (_ZN10VillagerId7isValidEv(r)) {
            a[n] = r;
            n++;
        }
    }
    void *t = SaveVillagers_PickRandomTalkPartner(gSaveVillagers, a, n);
    PlayerErrandSlot_Start(e, 0x10, 0, _ZN12VillagerData13getVillagerIdEv(t));
    VillagerId_Copy(&m->jobVillagers[2], _ZN12VillagerData13getVillagerIdEv(t));
}

extern "C" void Arbeit_StartWateringCanDelivery(PlayerErrands *m) {
    PlayerErrandSlot_Start(PlayerErrands_GetSlot(m, 0), 0x11, 0, &m->jobVillagers[1]);
}

extern "C" void Arbeit_StartBbsTask(PlayerErrands *m) {
    PlayerErrandSlot_Start(PlayerErrands_GetSlot(m, 0), 0x12, 0, 0);
}

extern "C" void Arbeit_OnBbsPosted(PlayerErrands *m) {
    ErrandRecord *r = PlayerErrandSlot_GetRecord(PlayerErrands_GetSlot(m, 0));
    if (_ZN12ErrandRecord8isActiveEv(r)) {
        if (_ZN12ErrandRecord7getKindEv(r) == 0x12) {
            if (_ZN12ErrandRecord7getStepEv(r) == 0) {
                _ZN12ErrandRecord7setStepEh(r, 1);
            }
        }
    }
}

extern "C" void Arbeit_Finish(PlayerErrands *m) {
    if (PlayerErrands_IsJobActive(m)) {
        PlayerErrandSlot_Clear(PlayerErrands_GetSlot(m, 0));
    }
}

extern "C" BOOL Arbeit_IsLetterRecipient(PlayerErrands *m, VillagerIdCtorDtor *r) {
    if (_ZN10VillagerId7isValidEv(r) && PlayerErrands_IsJobActive(m) && r->townId == m->jobVillagers[1].townId &&
        memcmp(r->townName, m->jobVillagers[1].townName, 8) == 0 && r->species == m->jobVillagers[1].species) {
        return TRUE;
    }
    return FALSE;
}

}

// ======== unk_02098f90.cpp ========
namespace n2 {
extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData12getInventoryEv(void *);
s32 _ZN15PlayerInventory15findEmptyPocketEv(void *);
s32 _ZN15PlayerInventory14getEmptyLetterEv(void *);
s32 _ZN15PlayerInventory15findEmptyLetterEv(void *);
BOOL _ZN15PlayerInventory18isPocketFlagsClearEi(void *, s32);
u16 *_ZN15PlayerInventory9getPocketEi(void *, s32);
BOOL Pocket_IsValidIndex(s32);
void _ZN15PlayerInventory9setPocketEPtij(void *, u16 *, s32, s32);
s32 Item_GetKind(u16 *);
void Item_FromPlacedForm(u16 *, u16 *);
void Catalog_SetItem(void *, u16 *, s32, s32);
void *_ZN10PlayerData10getCatalogEv(void *);
void _ZN12ItemPickSpec3setEii(void *, u32, u32);
void ItemPickSpec_Destruct(void *);
void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);
s32 func_01ffcb0c(s32, s32);
s32 FX_InvSqrt(s32);
void *MI_CpuFill8(void *, s32, u32);
s32 memcmp(void *, void *, u32);
s32 MI_CpuCopy8(void *, void *, u32);
s32 Random_GlobalBelow(u32);
BOOL _ZN8PlayerId7isValidEv(void *);
BOOL _ZN8PlayerId6equalsEPS_(void *, void *);
void _ZN8PlayerId5clearEv(void *);
s32 _ZN8PlayerId6setRawEPv(void *, void *);
void *_ZN8PlayerIdC1Ev(void *);
void *_ZN8PlayerIdC1EPv(void *);
s32 Date_DaysBetween(void *, void *);
s32 Clock_GetDate(void *);
void VillagerId_Copy(void *, void *);
void VillagerId_Clear(void *);
void *VillagerId_Destruct(void *);
void *VillagerId_Construct(void *);
void _ZN12ErrandRecord5startEhPth(void *, u32, u16 *, u32);
void _ZN12ErrandRecord5clearEv(void *);
void *_ZN12ErrandRecord13func_0209ada0Ev(void *);
void *_ZN12ErrandRecord4initEv(void *);
void *__cxa_vec_ctor(void *, s32, s32, void *(*)(void *), void *(*)(void *));
void __cxa_vec_cleanup(void *, s32, s32, void *(*)(void *));
s32 Threshold_FindIndex(u32, u8 *, s32);
extern u8 data_020d0598[];
extern u8 data_020d05a0[];
}


static inline BOOL Unk_02099124_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}extern "C" {
void PocketMatches_Init(PocketMatches *p);
s32 Pocket_FindEmpty();
s32 Pocket_SetItem(u16 *a, s32 b, s32 c);
s32 Pocket_SetFoundItem(u16 *a, s32 b);
u16 Item_PickRandomPresent();
void Quat_ToMtx33(s32 *a, s32 *m);
}


extern "C" s32 Pocket_CountKind(PocketMatches *self, s32 v);
extern "C" void PocketMatches_Init(PocketMatches *p);
extern "C" s32 Pocket_FindEmpty();
extern "C" BOOL Pocket_AddItem(u16 *a, s32 b);
extern "C" u16 Pocket_GetItem(s32 i);
extern "C" void Pocket_RemoveItem(s32 c);
extern "C" s32 Pocket_SetItem(u16 *a, s32 b, s32 c);
extern "C" BOOL Pocket_AddFoundItem(u16 *a);
extern "C" s32 Pocket_SetFoundItem(u16 *a, s32 b);
extern "C" u16 Item_PickRandomPresent();
extern "C" s32 Inventory_GetEmptyLetter();
extern "C" s32 Inventory_FindEmptyLetter();
extern "C" void Main_EmptyInitStub();
extern "C" void Quat_Mul(s32 *a, s32 *b, s32 *out);
extern "C" void Quat_ToMtx43(s32 *a, s32 *b);
extern "C" void Quat_ToMtx33(s32 *a, s32 *m);
extern "C" void Quat_Normalize(s32 *q);
extern "C" s32 FishSpawn_GetWeightClass(u32 v);
extern "C" s32 InsectSpawn_GetWeightClass(u32 v);
extern "C" s32 Threshold_FindIndex(u32 v, u8 *tbl, s32 n);

}
u8 *SickVillagerRecord::getParcelErrand() {
    using namespace n2;
    return (u8 *)this + 0x78;
}


namespace n2 {
}
SickVillagerRecord *SickVillagerRecord::constructRecord() {
    using namespace n2;
    _ZN12ErrandRecord4initEv(this);
    VillagerId_Construct(&villagerId);
    __cxa_vec_ctor(visitors, 5, 0x16, _ZN8PlayerIdC1EPv, _ZN8PlayerIdC1Ev);
    resetRecord();
    return this;
}


namespace n2 {
}
SickVillagerRecord *SickVillagerRecord::destructRecord() {
    using namespace n2;
    __cxa_vec_cleanup(visitors, 5, 0x16, _ZN8PlayerIdC1Ev);
    VillagerId_Destruct(&villagerId);
    _ZN12ErrandRecord13func_0209ada0Ev(this);
    return this;
}


namespace n2 {
}
void SickVillagerRecord::resetRecord() {
    using namespace n2;
    s32 i;
    _ZN12ErrandRecord5clearEv(this);
    VillagerId_Clear(&villagerId);
    for (i = 0; i < 5; i++) _ZN8PlayerId5clearEv(&visitors[i]);
    startDate[0] = 1;
    startDate[1] = 1;
    startDate[2] = 0;
    startDate[3] = 0;
    statusDate[0] = 1;
    statusDate[1] = 1;
    statusDate[2] = 0;
    statusDate[3] = 0;
    sickDay = 5;
}


namespace n2 {
}
void SickVillagerRecord::getErrand() {
    using namespace n2;
}


namespace n2 {
}
VillagerId *SickVillagerRecord::getVillagerId() {
    using namespace n2;
    return &villagerId;
}


namespace n2 {
}
void SickVillagerRecord::startSickness(VillagerId *a, u8 *b) {
    using namespace n2;
    u16 v;
    resetRecord();
    VillagerId_Copy(&villagerId, a);
    v = 0x155e;
    _ZN12ErrandRecord5startEhPth(this, 9, &v, 0);
    MI_CpuCopy8(b, startDate, 4);
    MI_CpuCopy8(b, statusDate, 4);
    statusDate[3] = 1;
    sickDay = Random_GlobalBelow(2) + 1;
}


namespace n2 {
}
PlayerId *SickVillagerRecord::getVisitor(u32 i) {
    using namespace n2;
    if (i < 5) return &visitors[i];
    return NULL;
}


namespace n2 {
}
PlayerId *SickVillagerRecord::getTodaysVisitor() {
    using namespace n2;
    return getVisitor(sickDay);
}


namespace n2 {
}
BOOL SickVillagerRecord::hasVisitor(PlayerId *e) {
    using namespace n2;
    if (_ZN8PlayerId7isValidEv(e)) {
        PlayerId *p = visitors;
        s32 i;
        for (i = 0; i < 5; i++) {
            if (e->townId == p->townId && memcmp(e->townName, p->townName, 8) == 0 && _ZN8PlayerId6equalsEPS_(e, p)) return TRUE;
        }
    }
    return FALSE;
}


namespace n2 {
}
BOOL SickVillagerRecord::hasTodaysVisitor() {
    using namespace n2;
    PlayerId *p = getTodaysVisitor();
    if (p && _ZN8PlayerId7isValidEv(p)) return TRUE;
    return FALSE;
}


namespace n2 {
}
void SickVillagerRecord::setTodaysVisitor(PlayerId *e) {
    using namespace n2;
    PlayerId *p = getTodaysVisitor();
    if (p) _ZN8PlayerId6setRawEPv(p, e);
}


namespace n2 {
}
BOOL SickVillagerRecord::isRecovered() {
    using namespace n2;
    if (sickDay == 5) return TRUE;
    return FALSE;
}


namespace n2 {
}
BOOL SickVillagerRecord::isRecentlyRecovered(ClockDate *d) {
    using namespace n2;
    ClockDate local;
    if (d == NULL) {
        Clock_GetDate(&local);
        d = &local;
    }
    if (isRecovered()) {
        s32 r = Date_DaysBetween(d, statusDate);
        if (r >= 0 && r < 3) return TRUE;
        return FALSE;
    }
    return FALSE;
}


namespace n2 {
}
PlayerId *SickVillagerRecord::getTopVisitor() {
    using namespace n2;
    u8 counts[5];
    s32 mask;
    s32 i, j, k;
    s32 grp, f1, f2;
    PlayerId *pi, *e;
    u8 *cnt;
    s32 off;
    if (!isRecovered()) goto ret0;
    mask = 0;
    MI_CpuFill8(counts, 0, 5);
    for (i = 0; i < 5; i++) {
        if ((mask >> i) & 1) continue;
        e = visitors + i;
        if (!_ZN8PlayerId7isValidEv(e)) continue;
        grp = 0;
        mask |= 1 << i;
        mask = (u8)mask;
        cnt = &counts[i];
        counts[i] = 1;
        j = i + 1;
        pi = (PlayerId *)((u8 *)this + i * 0x16);
        for (; j < 5; j++) {
            f1 = 0;
            f2 = 0;
            off = j;
            off = off * 0x16;
            if (*(u16 *)((u8 *)pi + 0x18) == *(u16 *)((u8 *)this + off + 0x18)) {
                if (memcmp(e->townName, ((PlayerId *)((u8 *)visitors + off))->townName, 8) == 0) f2 = 1;
            }
            if (f2 && _ZN8PlayerId6equalsEPS_(e, (PlayerId *)((u8 *)visitors + off))) f1 = 1;
            if (f1) {
                grp |= 1 << j;
                grp = (u8)grp;
                mask |= 1 << j;
                mask = (u8)mask;
                (*cnt)++;
            }
        }
        if (grp) {
            for (k = i + 1; k < 5; k++) {
                if ((grp >> k) & 1) counts[k] = *cnt;
            }
        }
    }
    if (mask) {
        u8 *cp = counts;
        s32 maxc = 0;
        s32 best = -1;
        for (i = 0; i < 5; cp++, i++) {
            s32 c = *cp;
            if (c > maxc) {
                maxc = c;
                best = i;
            } else if (c != 0) {
                if (c == maxc) best = i;
            }
        }
        if ((u32)best < 5) return &visitors[best];
    }
ret0:
    return NULL;
}


namespace n2 {
extern "C" s32 Threshold_FindIndex(u32 v, u8 *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (v >= *tbl) return i;
        tbl++;
    }
    return n;
}

extern "C" s32 InsectSpawn_GetWeightClass(u32 v) {
    return Threshold_FindIndex(v, data_020d05a0, 4);
}

extern "C" s32 FishSpawn_GetWeightClass(u32 v) {
    return Threshold_FindIndex(v, data_020d0598, 4);
}

#pragma thumb off
extern "C" void Quat_Normalize(s32 *q) {
    s64 sum = (s64)q[0] * q[0];
    sum += (s64)q[1] * q[1];
    sum += (s64)q[2] * q[2];
    sum += (s64)q[3] * q[3];
    s32 len = FX_InvSqrt((s32)(sum >> 12));
    q[0] = (s32)(((s64)len * q[0] + 0x800) >> 12);
    q[1] = (s32)(((s64)len * q[1] + 0x800) >> 12);
    q[2] = (s32)(((s64)len * q[2] + 0x800) >> 12);
    q[3] = (s32)(((s64)len * q[3] + 0x800) >> 12);
}
#pragma thumb reset

extern "C" void Quat_ToMtx33(s32 *a, s32 *m) {
    s32 xx = func_01ffcb0c(a[0], a[0]);
    s32 xy = func_01ffcb0c(a[0], a[1]);
    s32 xz = func_01ffcb0c(a[0], a[2]);
    s32 zz = func_01ffcb0c(a[2], a[2]);
    s32 zy = func_01ffcb0c(a[2], a[1]);
    s32 yy = func_01ffcb0c(a[1], a[1]);
    s32 wx = func_01ffcb0c(a[3], a[0]);
    s32 wy = func_01ffcb0c(a[3], a[1]);
    s32 wz = func_01ffcb0c(a[3], a[2]);
    m[0] = 0x1000 - 2 * (yy + zz);
    m[1] = 2 * (xy + wz);
    m[2] = 2 * (xz - wy);
    m[3] = 2 * (xy - wz);
    m[4] = 0x1000 - 2 * (xx + zz);
    m[5] = 2 * (zy + wx);
    m[6] = 2 * (wy + xz);
    m[7] = 2 * (zy - wx);
    m[8] = 0x1000 - 2 * (xx + yy);
}

extern "C" void Quat_ToMtx43(s32 *a, s32 *b) {
    Quat_ToMtx33(a, b);
    b[9] = 0;
    b[10] = 0;
    b[11] = 0;
}

extern "C" void Quat_Mul(s32 *a, s32 *b, s32 *out) {
    s32 o0, o1, o2, o3;
    o3 = func_01ffcb0c(a[3], b[3]) - func_01ffcb0c(a[0], b[0]) - func_01ffcb0c(a[1], b[1]) - func_01ffcb0c(a[2], b[2]);
    o0 = func_01ffcb0c(a[1], b[2]) + (func_01ffcb0c(a[3], b[0]) + func_01ffcb0c(a[0], b[3])) - func_01ffcb0c(a[2], b[1]);
    o1 = func_01ffcb0c(a[2], b[0]) + (func_01ffcb0c(a[3], b[1]) + func_01ffcb0c(a[1], b[3])) - func_01ffcb0c(a[0], b[2]);
    o2 = func_01ffcb0c(a[0], b[1]) + (func_01ffcb0c(a[3], b[2]) + func_01ffcb0c(a[2], b[3])) - func_01ffcb0c(a[1], b[0]);
    out[0] = o0;
    out[1] = o1;
    out[2] = o2;
    out[3] = o3;
}

extern "C" void Main_EmptyInitStub() {
}

extern "C" s32 Inventory_FindEmptyLetter() {
    return _ZN15PlayerInventory15findEmptyLetterEv(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()));
}

extern "C" s32 Inventory_GetEmptyLetter() {
    return _ZN15PlayerInventory14getEmptyLetterEv(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()));
}

extern "C" u16 Item_PickRandomPresent() {
    u16 out[2];
    u8 obj[0xc];
    _ZN12ItemPickSpec3setEii(obj, 0, 3);
    ItemPick_One(out, obj, 0, 0, 1, 1, 0);
    ItemPickSpec_Destruct(obj);
    return out[0];
}

extern "C" s32 Pocket_SetFoundItem(u16 *a, s32 b) {
    u16 v[2];
    BOOL r = FALSE;
    v[0] = 0xfff1;
    if (*a == 0x156b) {
        v[0] = Item_PickRandomPresent();
        r = TRUE;
    } else {
        Item_FromPlacedForm(&v[1], a);
        v[0] = v[1];
    }
    Pocket_SetItem(v, r, b);
}

extern "C" BOOL Pocket_AddFoundItem(u16 *a) {
    s32 r = Pocket_FindEmpty();
    if (r == -1) return FALSE;
    if (*a == 0xfff1) return TRUE;
    if (*a >= 0xa7 && *a <= 0xc6) return TRUE;
    Pocket_SetFoundItem(a, r);
    return TRUE;
}

extern "C" s32 Pocket_SetItem(u16 *a, s32 b, s32 c) {
    void *r6 = PlayerData_GetCurrent();
    if (Pocket_IsValidIndex(c)) {
        if (*a != 0xfff1 && b == 0) {
            Catalog_SetItem(_ZN10PlayerData10getCatalogEv(r6), a, 0, 1);
        }
        if (b == 0) {
            if (Unk_02099124_R(a, 0x151f, 0x151f)) {
                u16 t = 0x1033;
                Catalog_SetItem(_ZN10PlayerData10getCatalogEv(r6), &t, 0, 1);
            }
        }
        _ZN15PlayerInventory9setPocketEPtij(_ZN10PlayerData12getInventoryEv(r6), a, c, b);
    }
}

extern "C" void Pocket_RemoveItem(s32 c) {
    void *r4 = PlayerData_GetCurrent();
    if (Pocket_IsValidIndex(c)) {
        u16 t = 0xfff1;
        _ZN15PlayerInventory9setPocketEPtij(_ZN10PlayerData12getInventoryEv(r4), &t, c, 0);
    }
}

extern "C" u16 Pocket_GetItem(s32 i) {
    return *_ZN15PlayerInventory9getPocketEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), i);
}

extern "C" BOOL Pocket_AddItem(u16 *a, s32 b) {
    u16 t;
    s32 r = Pocket_FindEmpty();
    if (r != -1) {
        Item_FromPlacedForm(&t, a);
        Pocket_SetItem(&t, b, r);
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 Pocket_FindEmpty() {
    return _ZN15PlayerInventory15findEmptyPocketEv(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()));
}

extern "C" void PocketMatches_Init(PocketMatches *p) {
    p->count = 0;
    p->pocketMask = 0;
}

extern "C" s32 Pocket_CountKind(PocketMatches *self, s32 v) {
    void *r7 = PlayerData_GetCurrent();
    s32 i;
    PocketMatches_Init(self);
    u16 *tbl = _ZN15PlayerInventory9getPocketEi(_ZN10PlayerData12getInventoryEv(r7), 0);
    for (i = 0; i < 15; i++) {
        if (_ZN15PlayerInventory18isPocketFlagsClearEi(_ZN10PlayerData12getInventoryEv(r7), i)) {
            if (v == Item_GetKind(tbl + i)) {
                self->pocketMask |= (1 << i);
                self->count++;
            }
        }
    }
    return self->count;
}

}

// ======== unk_0209865c.cpp (0x02098e90..0x02098f90) ========
namespace n1 {
extern "C" {
PlayerData *PlayerData_GetCurrent();
s32 PlayerErrands_GetDeliveryRecipientName(void *, void *, void *);
u16 *_ZN15PlayerInventory9getPocketEi(void *, u32);
s32 _ZN15PlayerInventory18isPocketFlagsClearEi(void *, s32);
s32 Item_IsFurniture(void *);
s32 Item_GetFurnitureIndex(void *);
void PocketMatches_Init(void *);
}

extern "C" s32 Pocket_CountMatching(PocketMatches *out, s32 (*fn)(u16 *)) {
    PlayerData *o = PlayerData_GetCurrent();
    PocketMatches_Init(out);
    u16 *p = _ZN15PlayerInventory9getPocketEi(o->getInventory(), 0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (_ZN15PlayerInventory18isPocketFlagsClearEi(o->getInventory(), i)) {
            if (fn(p + i)) {
                out->pocketMask |= 1 << i;
                out->count++;
            }
        }
    }
    return out->count;
}

extern "C" s32 Pocket_FindItem(u16 *a) {
    PlayerData *o = PlayerData_GetCurrent();
    u16 *p = _ZN15PlayerInventory9getPocketEi(o->getInventory(), 0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (_ZN15PlayerInventory18isPocketFlagsClearEi(o->getInventory(), i)) {
            s32 off = i << 1;
            u16 *e = (u16 *)((u32)p + off);
            BOOL r;
            if (Item_IsFurniture(e)) {
                r = (Item_GetFurnitureIndex(e) == Item_GetFurnitureIndex(a)) ? TRUE : FALSE;
            } else {
                u32 x = *(u16 *)((u8 *)p + off);
                u32 y = *a;
                r = (x == y) ? TRUE : FALSE;
            }
            if (r) return i;
        }
    }
    return -1;
}

extern "C" s32 Player_GetDeliveryRecipientName(void *a, void *b) {
    PlayerData *o = PlayerData_GetCurrent();
    PlayerErrands_GetDeliveryRecipientName(o->getErrands(), a, b);
}
}

// ======== data (rest; this order gives the original layout) ========
extern const u32 sPlanErrandStepCounts[5];
extern void *data_020e21b8[2];
extern const u32 sErrandClassStarts[2];
extern char data_020e21f0[10];
extern char data_020e21d8[9];
extern const u32 sErrandGroupStarts[4];
extern char data_020e21e4[10];
extern const u8 sTrendWeights[8];
extern char data_020e21b0[8];
extern const u16 sParcelItems[2];
extern void *data_020e21a8[2];
extern const u16 sParcelRecipients[5];
extern char data_020e21cc[9];
extern const u8 sPlanStateGroupStarts[3];
extern const TopicWordList sTopicWordLists[6];
extern const u8 sFurnitureGoalCounts[6];
extern const u8 data_020d05a0[4];
extern void *data_020e2198[2];
extern const u8 data_020d0598[4];
extern ErrandKindSetup sErrandKindSetups[10];
const u32 sPlanErrandStepCounts[5] = {5, 5, 5, 7, 7};
void *data_020e21b8[2] = {(void *)ErrandSetup_WateringCan, 0};
const u32 sErrandClassStarts[2] = {0, 5};
char data_020e21f0[10] = "st_object";
char data_020e21d8[9] = "st_drink";
const u32 sErrandGroupStarts[4] = {0, 10, 0x14, 0x15};
char data_020e21e4[10] = "st_sports";
const u8 sTrendWeights[8] = {3, 3, 5, 5, 3, 3, 2, 1};
char data_020e21b0[8] = "st_food";
const u16 sParcelItems[2] = {0x155f, 0x1560};
void *data_020e21a8[2] = {(void *)ErrandSetup_LetterBundle, 0};
const u16 sParcelRecipients[5] = {0xd019, 0xd004, 0xd006, 0xd007, 0xd00c};
char data_020e21cc[9] = "st_music";
const u8 sPlanStateGroupStarts[3] = {0, 5, 8};
const TopicWordList sTopicWordLists[6] = {
    {data_020e21cc, 0x20}, {data_020e21e4, 0x20}, {data_020e21c0, 0x24},
    {data_020e21d8, 0x18}, {data_020e21f0, 0x28}, {data_020e21b0, 0x20},
};
const u8 sFurnitureGoalCounts[6] = {2, 4, 6, 8, 10, 13};
const u8 data_020d05a0[4] = {0x0f, 0x0a, 6, 3};
void *data_020e2198[2] = {(void *)ErrandSetup_FurnitureParcel, 0};
const u8 data_020d0598[4] = {0x11, 0x0b, 6, 3};
ErrandKindSetup sErrandKindSetups[10] = {
    {*(Unk_0209a4f4_Fn *)data_020e2190, 0, 0},
    {0, 0, 1},
    {0, 0, 1},
    {0, 0, 0},
    {*(Unk_0209a4f4_Fn *)data_020e2198, 0, 0},
    {0, 0, 1},
    {*(Unk_0209a4f4_Fn *)data_020e21a0, 0, 0},
    {*(Unk_0209a4f4_Fn *)data_020e21b8, 0, 0},
    {0, 0, 0},
    {*(Unk_0209a4f4_Fn *)data_020e21a8, 0, 0},
};
