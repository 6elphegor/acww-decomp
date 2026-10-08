#ifndef PLAYER_PLAYERERRANDS_H
#define PLAYER_PLAYERERRANDS_H

#include "types.h"
#include "npc/ErrandRecord.h"

// A player's errands (PlayerData::errands, 0xac bytes): two villager errand slots, the job villagers, the parcel
// errand and the house visit invitation. Defined in src/main/unk_02098e90.cpp (which still keeps its own copy of
// these classes: switch it to this header).

class VillagerIdCtorDtor {
public:
    VillagerIdCtorDtor();
    VillagerIdCtorDtor(s32 v);
    ~VillagerIdCtorDtor();

    /* 0x00 */ u16 townId;
    /* 0x02 */ u8 townName[8];
    /* 0x0a */ u8 personality;
    /* 0x0b */ u8 species;
};

class PlayerErrandSlot : public ErrandRecord {
public:
    PlayerErrandSlot();
    ~PlayerErrandSlot();

    /* 0x0c */ VillagerIdCtorDtor villagers[2];
    /* 0x24 */ u8 presentReaction;
};

class ParcelErrand : public ErrandRecord {
public:
    /* 0x0c */ u8 recipient;
    /* 0x0d */ u8 pendingRecipients;
};

class HouseVisitInvite : public VillagerIdCtorDtor {
public:
    HouseVisitInvite();
    ~HouseVisitInvite();

    /* 0x0c */ ErrandRecord errand;
    /* 0x18 */ u32 visitTime;
    /* 0x1c */ u32 visitTimeHi;
    /* 0x20 */ u8 unk_20[4];  // (only the first byte is used; the copy in unk_02098e90.cpp has 8: 4 past the DS size)
};

class PlayerErrands {
public:
    PlayerErrands();
    ~PlayerErrands();

    /* 0x00 */ PlayerErrandSlot slots[2];
    /* 0x50 */ VillagerIdCtorDtor jobVillagers[3];
    /* 0x74 */ u8 onDuty;
    /* 0x78 */ ParcelErrand parcelErrand;
    /* 0x88 */ HouseVisitInvite houseVisitInvite;
};

static_assert(sizeof(HouseVisitInvite) == 0x24, "HouseVisitInvite: PlayerErrands::houseVisitInvite");
static_assert(sizeof(PlayerErrands) == 0xac, "PlayerErrands: PlayerData::errands");

#endif
