#ifndef GAME_INFOTABLESET_H
#define GAME_INFOTABLESET_H

#include "types.h"
#include "sys/RecordFile.h"

// 0x54-byte set of three record tables (always-loaded, indoor, DMA). Defined in main: the methods in unk_0206d5b8.cpp
// (0x0206d794..0x0206d828), the constructor / destructor in unk_02052b50.cpp (C1 0x020535c0, D1 0x02053598).
class InfoTableSet {
public:
    InfoTableSet();
    ~InfoTableSet();
    RecordFile *getDma();
    RecordFile *getIndoor();
    RecordFile *getAlways();
    BOOL freeIndoor();
    BOOL loadIndoor(s32 v);
    void close();
    BOOL open(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count);

    /* 0x00 */ RecordFile alwaysTable;
    /* 0x1c */ RecordFile indoorTable;
    /* 0x38 */ RecordFile dmaTable;
};

#endif
