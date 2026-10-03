#include "types.h"

extern "C" {
s32 func_02065578();
void Letter_Clear(void *p);
void _ZN6LetterD1Ev(void *p);
void _ZN6LetterC1Ev(void *p);
void LostChildRecord_Destruct(void *p);
void LostChildRecord_Construct(void *p);
void VillagerTransfer_DestructVillager(void *p);
void VillagerTransfer_ConstructVillager(void *p);
void ConstellationRecord_Clear(void *p);
void _ZN19ConstellationRecordD1Ev(void *p);
void _ZN19ConstellationRecordC1Ev(void *p);
void MI_CpuFill8(void *p, s32 v, u32 n);
}

extern u8 data_021e7f8c[];

struct Unk_0208f238_Bits {
    u8 b0 : 1;
};

// Player-slot style record, 0x84c bytes (ctor 0x0208f238, dtor 0x0208f204)
class TownExchangeRecord {
public:
    TownExchangeRecord();
    ~TownExchangeRecord();
    void *getVillager();
    void *getConstellation();
    u32 getCounter();
    void resetCounter();
    void incrementCounter();
    void *getLostChildRecord();
    u32 getUnkFlag();
    void setUnkFlag(u32 v);
    s32 isValid();
    u32 getChecksum();
    void setChecksum(u32 v);

    /* 0x000 */ u8 unk_000[0xf4];
    /* 0x0f4 */ u8 unk_0f4;
    /* 0x0f5 */ u8 unk_0f5[0x47];
    /* 0x13c */ u8 unk_13c[0x700];
    /* 0x83c */ u8 unk_83c;
    /* 0x83d */ u8 unk_83d;
    /* 0x83e */ u8 unk_83e[0xc];
    /* 0x84a */ u16 unk_84a;
};

class TownExchangeRemoteRecords {
public:
    TownExchangeRemoteRecords();
    ~TownExchangeRemoteRecords();
    TownExchangeRecord unk_00[3];
};

TownExchangeRemoteRecords sTownExchangeRemoteRecords;

extern "C" void *TownExchange_GetForAid(s32 i);
extern "C" void *TownExchange_GetRemote(s32 i);

TownExchangeRecord::TownExchangeRecord() {
    _ZN6LetterC1Ev(this);
    _ZN19ConstellationRecordC1Ev((u8 *)this + 0xf4);
    VillagerTransfer_ConstructVillager((u8 *)this + 0x13c);
    LostChildRecord_Construct((u8 *)this + 0x83e);
}

TownExchangeRecord::~TownExchangeRecord() {
    LostChildRecord_Destruct((u8 *)this + 0x83e);
    VillagerTransfer_DestructVillager((u8 *)this + 0x13c);
    _ZN19ConstellationRecordD1Ev((u8 *)this + 0xf4);
    _ZN6LetterD1Ev(this);
}

extern "C" void TownExchange_InitNop() {}

extern "C" void TownExchange_Clear(void *p) {
    MI_CpuFill8(p, 0, 0x84c);
    Letter_Clear(p);
    ConstellationRecord_Clear((u8 *)p + 0xf4);
}

void TownExchangeRecord::setChecksum(u32 v) { unk_84a = v; }

u32 TownExchangeRecord::getChecksum() { return unk_84a; }

s32 TownExchangeRecord::isValid() { return 1; }

void TownExchangeRecord::setUnkFlag(u32 v) { unk_83d = (unk_83d & ~1) | (v & 1); }

u32 TownExchangeRecord::getUnkFlag() { return ((Unk_0208f238_Bits *)&unk_83d)->b0; }

void *TownExchangeRecord::getLostChildRecord() { return unk_83e; }

void TownExchangeRecord::incrementCounter() {
    s32 v = unk_83c + 1;
    if (v > 5) {
        v = 5;
    }
    unk_83c = v;
}

void TownExchangeRecord::resetCounter() { unk_83c = 0; }

u32 TownExchangeRecord::getCounter() { return unk_83c; }

extern "C" void TownExchange_GetLetter() {}

void *TownExchangeRecord::getConstellation() { return &unk_0f4; }

void *TownExchangeRecord::getVillager() { return unk_13c; }

TownExchangeRemoteRecords::TownExchangeRemoteRecords() {}

TownExchangeRemoteRecords::~TownExchangeRemoteRecords() {}

extern "C" void *TownExchange_GetRemote(s32 i) { return &sTownExchangeRemoteRecords.unk_00[i]; }

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

