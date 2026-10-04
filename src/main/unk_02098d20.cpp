#include "types.h"

extern "C" void VillagerId_Clear(void *);
extern "C" void VillagerId_Destruct(void *);
extern "C" void VillagerId_Construct(void *);
extern "C" void VillagerId_Copy(void *, void *);
extern "C" void TownId_Assign(void *, void *);
extern "C" BOOL TownId_IsValid(void *);
extern "C" void TownId_Clear(void *);
extern "C" void TownId_Destruct(void *);
extern "C" void TownId_Construct(void *);
extern "C" s32 Random_GlobalBelow(s32);
extern "C" void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);

extern const u32 sForeignLetterPresentKinds[];
const u32 sForeignLetterPresentKinds[] = {0, 4, 3};

class VillagerId {
public:
    BOOL isValid();
};

struct ItemPickSpec {
    u32 listIndex;
    u32 itemClass;
    ItemPickSpec() {}
    ~ItemPickSpec();
    void set(s32 a, s32 b);
};

class ForeignVillagerRecord {
public:
    ForeignVillagerRecord();
    ~ForeignVillagerRecord();
    u8 town[0xa];
    u8 villager[0xc];
    u16 present;
    s8 friendship;

    BOOL offer(void *a1, s32 a2, void *a3);
    void set(void *a1, s32 a2, void *a3, u16 *p);
    BOOL isSet();
    void clear();
};

extern "C" void Comm_OnFriendDeletedNop() {}

ForeignVillagerRecord::ForeignVillagerRecord() {
    TownId_Construct(this);
    VillagerId_Construct(&villager);
    present = 0xfff1;
}

ForeignVillagerRecord::~ForeignVillagerRecord() {
    VillagerId_Destruct(&villager);
    TownId_Destruct(this);
}

void ForeignVillagerRecord::clear() {
    TownId_Clear(this);
    VillagerId_Clear(&villager);
    present = 0xfff1;
    friendship = -0x80;
}

BOOL ForeignVillagerRecord::isSet() {
    if (TownId_IsValid(this) && ((VillagerId *)&villager)->isValid()) return TRUE;
    return FALSE;
}

void ForeignVillagerRecord::set(void *a1, s32 a2, void *a3, u16 *p) {
    TownId_Assign(this, a3);
    VillagerId_Copy(&villager, a1);
    present = *p;
    friendship = a2;
}

BOOL ForeignVillagerRecord::offer(void *a1, s32 a2, void *a3) {
    if (((VillagerId *)a1)->isValid() && TownId_IsValid(a3)) {
        u16 local = 0xfff1;
        u16 out;
        if (Random_GlobalBelow(4) == 0) {
            ItemPickSpec t1;
            t1.set(sForeignLetterPresentKinds[Random_GlobalBelow(3)], 0);
            ItemPickSpec t2(t1);
            ItemPick_One(&out, &t2, 0, 0, 1, 1, 0);
            local = out;
        }
        if (isSet()) {
            if (a2 >= friendship) {
                set(a1, a2, a3, &local);
                return TRUE;
            }
        } else {
            set(a1, a2, a3, &local);
            return TRUE;
        }
    }
    return FALSE;
}

