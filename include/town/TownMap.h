#ifndef TOWN_TOWNMAP_H
#define TOWN_TOWNMAP_H

#include "types.h"
#include "item/ItemId.h"
#include "gfx/VecFx32.h"

// The town map record of the save (SaveData::townMap): acre ids, the items lying on each of the 16 town acres and
// their buried-item masks. Defined in src/main/unk_0204cc1c.cpp (which still keeps its own copy of these classes:
// switch it to this header).

struct AcreItemGrid {
    ItemId e[0x100];
    AcreItemGrid();
    ~AcreItemGrid();
};

struct BuriedMask {
    u8 data[0x20];
    BuriedMask();
    ~BuriedMask();
};

class TownMap {
public:
    u8 acres[0x24];
    AcreItemGrid items[16];
    BuriedMask buried[16];
    u8 grassType : 2;
    u8 groundSeason : 6;

    TownMap();
    ~TownMap();

    void *buildBlockEntries(s32 heap);
    void updateGroundSeason();
    u32 getGrassType();
    BOOL toTownAcreIndex(Vec2 *out, Vec2 *in);
    BOOL isTownAcre(s32 x, s32 y);
    void *getAcreBuried(Vec2 *in);
    void *getAcreItems(Vec2 *in);
    void clear();
    BOOL placeStructure(u16 *a, s32 x, s32 y, u8 flag);
    BOOL putStructure(u16 *a, s32 x, s32 y);
    BOOL removeStructure(s32 x, s32 y, u16 *p);
    BOOL replaceStructure(u16 *a, u16 *b, u16 *c, s32 x, s32 y);
    BOOL replaceStructure(u16 *a, u16 *b, u16 *c, Vec2 pos);
};

#endif
