#ifndef TOWN_TOWNBLOCKMAP_H
#define TOWN_TOWNBLOCKMAP_H

#include "types.h"
#include "town/BlockMap.h"

// The town's block map (gTownBlockMap: 6x6 acres built from the saved town map): a BlockMap with the town's own
// set-up and BG binding. Methods in main, unk_0204cc1c.cpp.
class TownBlockMap : public BlockMap {
public:
    void releaseBg();
    void bindBg();
    void updateAcreIds();
    void freeBlocks(void *heap);
    BOOL build(void *heap);
    void clear();
};

#endif
