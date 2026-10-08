#ifndef TOWN_ROOMBLOCKMAP_H
#define TOWN_ROOMBLOCKMAP_H

#include "types.h"
#include "town/BlockMap.h"

// The block map of a room (the player house's rooms gHouseRoomMaps[5], a villager's room gVillagerRoomMap): a BlockMap
// with its item grid. Functions in main, unk_0204cc1c.cpp (HouseRoomMap_*, VillagerRoomMap_*).
struct RoomBlockMap : BlockMap {
    u16 *itemGrid;
};

#endif
