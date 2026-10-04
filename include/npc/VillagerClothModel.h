#ifndef NPC_VILLAGERCLOTHMODEL_H
#define NPC_VILLAGERCLOTHMODEL_H

#include "types.h"

class VillagerActor;

// 0x34-byte villager shirt texture: a MatTexVramTask (0x28) plus the shirt item and its NpcClothTexHandle;
// VillagerActor::clothModel (+0x64c). Defined in main, src/main/unk_0201c050.cpp (0x0202d648..0x0202d814): the C1 / D1
// symbols are labels of construct (0x0202d7f4) / destruct (0x0202d7e0).
class VillagerClothModel {
public:
    VillagerClothModel();
    ~VillagerClothModel();

    u16 *getItem();
    void release();
    BOOL change(VillagerActor *parent, u16 *id);
    void *buildTexture(VillagerActor *parent, u16 *id);
    BOOL init(VillagerActor *parent, u16 *id);
    VillagerClothModel *destruct();
    VillagerClothModel *construct();

    /* 0x00 */ u32 matTexTask[0x28 / 4]; // MatTexVramTask (constructed explicitly in construct())
    /* 0x28 */ u16 clothItem;
    /* 0x2a */ u8 pad_2a[2];
    /* 0x2c */ u8 texPatBuf[8];
};

#endif
