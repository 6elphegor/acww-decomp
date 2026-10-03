#include "types.h"

extern "C" void VillagerId_Clear(void *);
extern "C" void VillagerId_Destruct(void *);
extern "C" void VillagerId_Construct(void *);
extern "C" void VillagerId_Copy(void *, void *);
extern "C" void func_02063990(void *, void *);
extern "C" BOOL func_02063954(void *);
extern "C" void func_020639a0(void *);
extern "C" void func_020639b8(void *);
extern "C" void func_020639bc(void *);
extern "C" s32 func_02063b8c(s32);
extern "C" void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);

extern const u32 sForeignLetterPresentKinds[];
const u32 sForeignLetterPresentKinds[] = {0, 4, 3};

class VillagerId {
public:
    BOOL isValid();
};

struct ItemPickSpec {
    u32 unk_00;
    u32 unk_04;
    ItemPickSpec() {}
    ~ItemPickSpec();
    void set(s32 a, s32 b);
};

class ForeignVillagerRecord {
public:
    ForeignVillagerRecord();
    ~ForeignVillagerRecord();
    u8 unk_00[0xa];
    u8 unk_0a[0xc];
    u16 unk_16;
    s8 unk_18;

    BOOL offer(void *a1, s32 a2, void *a3);
    void set(void *a1, s32 a2, void *a3, u16 *p);
    BOOL isSet();
    void clear();
};

extern "C" void Comm_OnFriendDeletedNop() {}

ForeignVillagerRecord::ForeignVillagerRecord() {
    func_020639bc(this);
    VillagerId_Construct(&unk_0a);
    unk_16 = 0xfff1;
}

ForeignVillagerRecord::~ForeignVillagerRecord() {
    VillagerId_Destruct(&unk_0a);
    func_020639b8(this);
}

void ForeignVillagerRecord::clear() {
    func_020639a0(this);
    VillagerId_Clear(&unk_0a);
    unk_16 = 0xfff1;
    unk_18 = -0x80;
}

BOOL ForeignVillagerRecord::isSet() {
    if (func_02063954(this) && ((VillagerId *)&unk_0a)->isValid()) return TRUE;
    return FALSE;
}

void ForeignVillagerRecord::set(void *a1, s32 a2, void *a3, u16 *p) {
    func_02063990(this, a3);
    VillagerId_Copy(&unk_0a, a1);
    unk_16 = *p;
    unk_18 = a2;
}

BOOL ForeignVillagerRecord::offer(void *a1, s32 a2, void *a3) {
    if (((VillagerId *)a1)->isValid() && func_02063954(a3)) {
        u16 local = 0xfff1;
        u16 out;
        if (func_02063b8c(4) == 0) {
            ItemPickSpec t1;
            t1.set(sForeignLetterPresentKinds[func_02063b8c(3)], 0);
            ItemPickSpec t2(t1);
            ItemPick_One(&out, &t2, 0, 0, 1, 1, 0);
            local = out;
        }
        if (isSet()) {
            if (a2 >= unk_18) {
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

