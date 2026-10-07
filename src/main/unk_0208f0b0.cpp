#include "uptr.h"
#include "types.h"
#include "save/TownExchangeRecord.h"
#include "game/ConstellationRecord.h"
#include "item/Letter.h"

extern "C" {
s32 func_02065578();
void Letter_Clear(void *p);
void LostChildRecord_Destruct(void *p);
void LostChildRecord_Construct(void *p);
void VillagerTransfer_DestructVillager(void *p);
void VillagerTransfer_ConstructVillager(void *p);
void ConstellationRecord_Clear(void *p);
void MI_CpuFill8(void *p, s32 v, u32 n);
}

extern u8 data_021e7f8c[];

struct TownExchangeFlagBits {
    u8 b0 : 1;
};


class TownExchangeRemoteRecords {
public:
    TownExchangeRemoteRecords();
    ~TownExchangeRemoteRecords();
    TownExchangeRecord records[3];
};

TownExchangeRemoteRecords sTownExchangeRemoteRecords;

extern "C" void *TownExchange_GetForAid(s32 i);
extern "C" void *TownExchange_GetRemote(s32 i);

TownExchangeRecord::TownExchangeRecord() {
    new (this) Letter();
    new (HOST_AT(this, 0xf4, unk_0f4, 0)) ConstellationRecord();
    VillagerTransfer_ConstructVillager(HOST_AT(this, 0x13c, villager[0], 0));
    LostChildRecord_Construct(HOST_AT(this, 0x83e, lostChild[0], 0));
}

TownExchangeRecord::~TownExchangeRecord() {
    LostChildRecord_Destruct(HOST_AT(this, 0x83e, lostChild[0], 0));
    VillagerTransfer_DestructVillager(HOST_AT(this, 0x13c, villager[0], 0));
    ((ConstellationRecord *)(HOST_AT(this, 0xf4, unk_0f4, 0)))->~ConstellationRecord();
    ((Letter *)(this))->Letter::~Letter();
}

extern "C" void TownExchange_InitNop() {}

extern "C" void TownExchange_Clear(void *p) {
    MI_CpuFill8(p, 0, 0x84c);
    Letter_Clear(p);
    ConstellationRecord_Clear((u8 *)p + 0xf4);
}

void TownExchangeRecord::setChecksum(u32 v) { checksum = v; }

u32 TownExchangeRecord::getChecksum() { return checksum; }

s32 TownExchangeRecord::isValid() { return 1; }

void TownExchangeRecord::setUnkFlag(u32 v) { flags = (flags & ~1) | (v & 1); }

u32 TownExchangeRecord::getUnkFlag() { return ((TownExchangeFlagBits *)&flags)->b0; }

void *TownExchangeRecord::getLostChildRecord() { return lostChild; }

void TownExchangeRecord::incrementCounter() {
    s32 v = counter + 1;
    if (v > 5) {
        v = 5;
    }
    counter = v;
}

void TownExchangeRecord::resetCounter() { counter = 0; }

u32 TownExchangeRecord::getCounter() { return counter; }

extern "C" void *TownExchange_GetLetter(void *p) { return p; }

void *TownExchangeRecord::getConstellation() { return &unk_0f4; }

void *TownExchangeRecord::getVillager() { return villager; }

TownExchangeRemoteRecords::TownExchangeRemoteRecords() {}

TownExchangeRemoteRecords::~TownExchangeRemoteRecords() {}

extern "C" void *TownExchange_GetRemote(s32 i) { return &sTownExchangeRemoteRecords.records[i]; }

extern "C" void *TownExchange_GetForAid(s32 i) {
    switch (i) {
    case 1:
        return TownExchange_GetRemote(0);
    case 2:
        return TownExchange_GetRemote(1);
    case 3:
        return TownExchange_GetRemote(2);
    default:
        return data_021e7f8c;
    }
}

