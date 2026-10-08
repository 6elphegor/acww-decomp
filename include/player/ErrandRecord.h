#ifndef PLAYER_ERRANDRECORD_H
#define PLAYER_ERRANDRECORD_H

#include "types.h"

// An errand / plan record (12 bytes): date and time, item, kind, step bits. Methods in src/main/unk_02098e90.cpp
// (which still has its own copy of this definition: it should include this header instead).
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

#endif
