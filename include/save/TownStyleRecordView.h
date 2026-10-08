#ifndef SAVE_TOWNSTYLERECORDVIEW_H
#define SAVE_TOWNSTYLERECORDVIEW_H

#include "types.h"

// The town style record of the save data (gSaveTownFlag): the villagers' house styles and the town flag
// (getTownFlag: +4). Defined in src/main/unk_020b0e60.cpp, which still has its own copy of this declaration
// (to be replaced by this header).
class TownStyleRecordView {
public:
    u8 *getTownFlag();
    void *getHouseStyles();
};

#endif
