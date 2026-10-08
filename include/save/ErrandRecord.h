#ifndef SAVE_ERRANDRECORD_H
#define SAVE_ERRANDRECORD_H

#include "types.h"

// Errand record (12 bytes): two words, u16 item at +8, kind byte at +0x0a, step bits at +0x0b. Methods defined in
// src/main/unk_02098e90.cpp (which still has its own copy of these types: to be replaced by this header).
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

// The parcel errand: an errand record plus the recipient (ParcelErrand_* in src/main/unk_02098e90.cpp).
class ParcelErrand : public ErrandRecord {
public:
    /* 0x0c */ u8 recipient;
    /* 0x0d */ u8 pendingRecipients;
};

#endif
