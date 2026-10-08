#ifndef FIELD_SNOWMANRECORDS_H
#define FIELD_SNOWMANRECORDS_H

#include "types.h"

// The town's snowmen (3 records in the save data, data_021ed2e6): ball sizes, rank and the day each was built.
// Methods in src/main/unk_020af514.cpp (which still declares these classes itself: switch it to this header).
class SnowmanRecord {
public:
    SnowmanRecord();
    ~SnowmanRecord();
    s32 getDaysSinceBuilt();
    u32 getRank();
    s32 getBodySize();
    s32 getHeadSize();
    void build(u32 a, u32 b, u32 c);
    BOOL isUsed();
    void clear();

    u16 a0 : 7;
    u16 a1 : 4;
    u16 a2 : 5;
    u16 b0 : 7;
    u16 b1 : 7;
    u16 b2 : 2;
    u8 c4;
    u8 c5;
};

class SnowmanRecords {
public:
    SnowmanRecords();
    ~SnowmanRecords();
    void markUnplaced(u32 idx);
    BOOL isFull();
    // a / b / c: the head size, the body size and the rank; d / e / f: the year, month and day it was built
    BOOL getInfo(u32 idx, u32 *a, u32 *b, u32 *c, u8 *d, u8 *e, u8 *f);
    s32 add(u32 a, u32 b, u32 c);
    BOOL remove(u32 idx);
    void clearAll();
    void updateDaily();

    SnowmanRecord e[3];
};

#endif
