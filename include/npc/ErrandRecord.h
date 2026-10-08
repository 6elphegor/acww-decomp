#ifndef NPC_ERRANDRECORD_H
#define NPC_ERRANDRECORD_H

#include "types.h"
#include "player/PlayerId.h"
#include "sys/ClockDateTime.h"

// A villager's errand (12 bytes: VillagerState::errand, the plan / sick-villager records): date, item, kind and
// step bits. Defined in src/main/unk_02098e90.cpp. The constructor / destructor are init() / func_0209ada0()
// (aliases.txt).
class ErrandRecord {
public:
    ClockDateTimeWords dateTime;  // when the errand was given (ErrandRecord_GetTime)
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
    void setTimeFromNow(s32 x);
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

// A villager's planned errand for a player (0x29 bytes in the villager's plan block, VillagerPlanBlock_GetErrand):
// the errand, the player, the step and the shown item. Defined in src/main/unk_02098e90.cpp (PlanErrand_Construct /
// _Destruct).
class PlanErrand {
public:
    ErrandRecord errand;
    PlayerId player;
    u8 step;
    u8 pad_23;
    u16 shownItem;
    u8 count;
    u8 fossilGroup;
    u8 flags;
};

#endif
