#ifndef SAVE_LOSTCHILDRECORD_H
#define SAVE_LOSTCHILDRECORD_H

// Lost-child (Kaitlin/Katie) record: a 10-byte TownId-shaped header plus a flag byte. Methods at 0x020872fc..
// (src/main/unk_02085940.cpp). getTownId() returns `this` (the town id at offset 0).
#include "types.h"

class LostChildRecord {
public:
    void clearEscorting();
    void setEscorting();
    BOOL isEscorting();
    void setKaitlinRole(u8 v);
    BOOL isKaitlinRole();
    void setDaysLeft(u8 v);
    u32 getDaysLeft();
    void setTownId();
    u16 *getTownId();
    void clear();

    /* 0x00 */ u32 unk_00[2];
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u8 daysLeft : 4;
    u8 kaitlinRole : 1;
    u8 escorting : 1;
};

#endif
