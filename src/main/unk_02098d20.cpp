#include "types.h"

extern "C" void func_020030e8(void *);
extern "C" void func_02003100(void *);
extern "C" void func_02003130(void *);
extern "C" void func_020030d8(void *, void *);
extern "C" void func_02063990(void *, void *);
extern "C" BOOL func_02063954(void *);
extern "C" void func_020639a0(void *);
extern "C" void func_020639b8(void *);
extern "C" void func_020639bc(void *);
extern "C" s32 func_02063b8c(s32);
extern "C" void ItemPick_One(u16 *, void *, u32, u32, u32, u32, u32);

extern const u32 data_020d0538[];
const u32 data_020d0538[] = {0, 4, 3};

class Unk_02002fc8 {
public:
    BOOL func_020030b4();
};

struct ItemPickSpec {
    u32 unk_00;
    u32 unk_04;
    ItemPickSpec() {}
    ~ItemPickSpec();
    void set(s32 a, s32 b);
};

class Unk_02098d20 {
public:
    Unk_02098d20();
    ~Unk_02098d20();
    u8 unk_00[0xa];
    u8 unk_0a[0xc];
    u16 unk_16;
    s8 unk_18;

    BOOL func_02098d20(void *a1, s32 a2, void *a3);
    void func_02098de4(void *a1, s32 a2, void *a3, u16 *p);
    BOOL func_02098e0c();
    void func_02098e30();
};

extern "C" void func_02098e8c() {}

Unk_02098d20::Unk_02098d20() {
    func_020639bc(this);
    func_02003130(&unk_0a);
    unk_16 = 0xfff1;
}

Unk_02098d20::~Unk_02098d20() {
    func_02003100(&unk_0a);
    func_020639b8(this);
}

void Unk_02098d20::func_02098e30() {
    func_020639a0(this);
    func_020030e8(&unk_0a);
    unk_16 = 0xfff1;
    unk_18 = -0x80;
}

BOOL Unk_02098d20::func_02098e0c() {
    if (func_02063954(this) && ((Unk_02002fc8 *)&unk_0a)->func_020030b4()) return TRUE;
    return FALSE;
}

void Unk_02098d20::func_02098de4(void *a1, s32 a2, void *a3, u16 *p) {
    func_02063990(this, a3);
    func_020030d8(&unk_0a, a1);
    unk_16 = *p;
    unk_18 = a2;
}

BOOL Unk_02098d20::func_02098d20(void *a1, s32 a2, void *a3) {
    if (((Unk_02002fc8 *)a1)->func_020030b4() && func_02063954(a3)) {
        u16 local = 0xfff1;
        u16 out;
        if (func_02063b8c(4) == 0) {
            ItemPickSpec t1;
            t1.set(data_020d0538[func_02063b8c(3)], 0);
            ItemPickSpec t2(t1);
            ItemPick_One(&out, &t2, 0, 0, 1, 1, 0);
            local = out;
        }
        if (func_02098e0c()) {
            if (a2 >= unk_18) {
                func_02098de4(a1, a2, a3, &local);
                return TRUE;
            }
        } else {
            func_02098de4(a1, a2, a3, &local);
            return TRUE;
        }
    }
    return FALSE;
}

