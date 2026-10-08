#ifndef NPC_VILLAGERDATA_H
#define NPC_VILLAGERDATA_H

#include "types.h"
#include "npc/VillagerMemory.h"

// A villager's save data (0x700 bytes, SaveData::villagers): memories of the players, pattern, letter, plan block,
// furniture, id, house position, clothes and room. Defined in src/main/unk_02077ac4.cpp (which still keeps its own
// copy of the struct: switch it to this header).
struct VillagerData {
    VillagerMemory memories[8];
    u32 pattern[0x228 / 4];
    u32 letter[0xf4 / 4];
    u32 planBlock[0x50 / 4];
    u16 furniture[10];
    u32 villagerId[3];
    u16 receivedItems[4];
    u8 movedFromTown[0xa];
    u8 catchphrase[0xa];
    u32 housePos;
    u16 shirt;
    u8 wallpaper;
    u8 carpet;
    u8 moveInKind;
    u8 furnitureTasteIndex;
    u8 roomLayout;
    u8 pad_6f3;
    u8 umbrella;
    u8 pad_6f5;
    u8 letterTown[0xa];

    s32 receiveLetterFrom(u32 id);
    void *getLetter();
    void *getPattern();
    void *getVillagerId();
    void setup(u32 id, u32 a, u32 b, u8 c);
    void copyFrom(void *src);
    void clear();
    ~VillagerData();
    VillagerData();
};

#endif
