#ifndef SAVE_BLANCAFACERECORD_H
#define SAVE_BLANCAFACERECORD_H

// Blanca's face pattern record in the save (0x22c bytes). Methods at 0x02087224.. (src/main/unk_02085940.cpp);
// the constructor/destructor are aliases of construct()/destruct().
#include "types.h"

class BlancaFaceRecord {
public:
    BlancaFaceRecord();
    ~BlancaFaceRecord();
    u16 func_02087224();
    void func_02087230(u32 v);
    BOOL isBlancaDue();
    u8 getConcept();
    void setConcept(u32 v);
    u8 getState();
    void setState(u32 v);
    void *getPattern();
    void resetPattern();
    void init();
    void reset();
    BlancaFaceRecord *destruct();
    BlancaFaceRecord *construct();

    /* 0x000 */ u32 pattern[0x228 / 4];
    /* 0x228 */ u16 unk_228;
    /* 0x22a */ u8 visitState;
    /* 0x22b */ u8 concept;
};

#endif
