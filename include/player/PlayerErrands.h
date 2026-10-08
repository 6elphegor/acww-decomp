#ifndef PLAYER_PLAYERERRANDS_H
#define PLAYER_PLAYERERRANDS_H

#include "types.h"
#include "npc/ErrandRecord.h"
#include "npc/VillagerId.h"

// A player's errands (PlayerData::errands, 0xac bytes): two villager errand slots, the job villagers, the parcel
// errand and the house visit invitation. Defined in src/main/unk_02098e90.cpp.

// A VillagerId with the constructors / destructor of its helpers (VillagerId_Construct, _ConstructCopy, _Destruct).
extern "C" VillagerId *VillagerId_ConstructCopy(VillagerId *p, VillagerId *other);
class VillagerIdCtorDtor : public VillagerId {
public:
    VillagerIdCtorDtor();
    explicit VillagerIdCtorDtor(VillagerId *src) { VillagerId_ConstructCopy(this, src); }
    ~VillagerIdCtorDtor();
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
    /* 0x20 */ u8 unk_20[4];  // (only the first byte is used)
};

class PlayerErrands {
public:
    PlayerErrands();
    ~PlayerErrands();
    ParcelErrand *getParcelErrand();

    /* 0x00 */ PlayerErrandSlot slots[2];
    /* 0x50 */ VillagerIdCtorDtor jobVillagers[3];
    /* 0x74 */ u8 onDuty;
    /* 0x78 */ ParcelErrand parcelErrand;
    /* 0x88 */ HouseVisitInvite houseVisitInvite;
};

static_assert(sizeof(PlayerErrands) == 0xac, "PlayerErrands: PlayerData::errands");

#endif
