#ifndef TOWN_TOWNACREGRID_H
#define TOWN_TOWNACREGRID_H

#include "types.h"
#include "town/TownAcreCell.h"
#include "sys/RecordFile.h"

// 6x6 town acre grid used while generating a new town map, plus the cached candidate-record file. Defined in main,
// unk_0209b5d4.cpp / unk_0209b63c.cpp / unk_0209bca8.cpp (0x0209b5d4..0x0209be24).
class TownAcreGrid {
public:
    void loadCandidate(s32 seed);           // 0x0209b5d4
    BOOL setBorder();                       // 0x0209b63c
    BOOL placeRiverVariant();               // 0x0209b830
    BOOL placeFacilities(u32 mode);         // 0x0209b9ac
    BOOL placeNextTo(s32 a, s32 b);         // 0x0209ba90
    BOOL placeOnRandomGrass(s32 val);       // 0x0209bbac
    TownAcreCell *getCell(s32 x, s32 y);    // 0x0209bc54
    BOOL hasPond();                         // 0x0209bca8
    BOOL assignAcreIds();                   // 0x0209bcf8

    /* 0x000 */ TownAcreCell cells[36];
    /* 0x120 */ RecordFile candidates;
};

// The town generator object (same layout as TownAcreGrid; its methods run the grid steps on `this`).
// Defined in main, unk_0209bca8.cpp (0x0209be24..0x0209c030).
class TownAcreGenerator {
public:
    TownAcreGenerator();                    // C1 0x0209c004
    ~TownAcreGenerator();                   // D1 0x0209bfdc

    void writeAcreIds(u8 *out);             // 0x0209be24
    u32 getTotalArchiveSize();              // 0x0209be58
    BOOL generate(s32 v);                   // 0x0209bee4
    void closeCandidates();                 // 0x0209bf94
    BOOL openCandidates();                  // 0x0209bfa4

    /* 0x000 */ TownAcreCell cells[0x24];
    /* 0x120 */ RecordFile candidates;
};

#endif
