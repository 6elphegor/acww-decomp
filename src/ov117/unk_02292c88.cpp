#include "types.h"

struct Unk_ov117_02292c88_Entry {
    s16 unk_00;
    s16 unk_02;
    u8 unk_04;
    u8 unk_05;
};

struct Unk_ov117_02292c88 {
    Unk_ov117_02292c88_Entry entries[17];
};

extern "C" {

void func_ov117_02292c88(Unk_ov117_02292c88 *self) {
    u32 i;
    for (i = 0; i < 17; i++) {
        self->entries[i].unk_00 = -1;
        self->entries[i].unk_02 = -1;
        self->entries[i].unk_04 = 0;
    }
}

void func_ov117_02292cac() {}

Unk_ov117_02292c88 *func_ov117_02292cb0(Unk_ov117_02292c88 *self) {
    Unk_ov117_02292c88_Entry *e = self->entries;
    do {
        e->unk_00 = 0;
        e->unk_02 = 0;
        e++;
    } while (e != self->entries + 17);
    func_ov117_02292c88(self);
    return self;
}

}
