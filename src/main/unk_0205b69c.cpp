#include "types.h"

struct Unk_0205b6e4 {
    u8 unk_00;
    u8 pad_01[3];
    void (*unk_04)();
    void (*unk_08)();
    s32 unk_0c;
    s32 unk_10;
    void (*unk_14)();
    Unk_0205b6e4 *unk_18;
};

extern "C" {
extern Unk_0205b6e4 *data_021c6190;
}

Unk_0205b6e4 *data_021c6194;

extern "C" void func_0205b79c();

extern "C" void func_0205b79c() {
    data_021c6190 = NULL;
    data_021c6194 = NULL;
}

extern "C" void func_0205b794() {
    func_0205b79c();
}

extern "C" void func_0205b740() {
    Unk_0205b6e4 *t;
    for (t = data_021c6190; t != NULL; t = t->unk_18) {
        if (t->unk_00 == 0) {
            t->unk_00 = 1;
            t->unk_0c = t->unk_10;
            if (t->unk_08 != NULL) t->unk_08();
        }
        if (t->unk_04 != NULL) t->unk_04();
        if (t->unk_00 == 2) {
            t->unk_00 = 1;
            t->unk_0c = t->unk_10;
            t->unk_08 = t->unk_14;
            if (t->unk_08 != NULL) t->unk_08();
        }
    }
}

extern "C" void func_0205b714() {
    Unk_0205b6e4 *t;
    for (t = data_021c6190; t != NULL; t = t->unk_18) {
        if ((u8)(t->unk_00 + 0xff) <= 1 && t->unk_08 != NULL) t->unk_08();
    }
}

extern "C" BOOL func_0205b6e4(Unk_0205b6e4 *t, s32 a, void (*b)(), void (*c)()) {
    t->unk_10 = a;
    t->unk_0c = 0;
    t->unk_08 = b;
    t->unk_04 = c;
    t->unk_18 = NULL;
    t->unk_00 = 0;
    if (data_021c6194 != NULL) {
        data_021c6194->unk_18 = t;
        data_021c6194 = t;
    } else {
        data_021c6194 = t;
        data_021c6190 = t;
    }
    return TRUE;
}

extern "C" BOOL func_0205b69c(Unk_0205b6e4 *t) {
    Unk_0205b6e4 *p = data_021c6190;
    if (t == p) {
        data_021c6190 = t->unk_18;
        if (data_021c6194 == t) data_021c6194 = NULL;
        return TRUE;
    }
    for (; p != NULL; ) {
        Unk_0205b6e4 *n = p->unk_18;
        if (n == t) {
            p->unk_18 = n->unk_18;
            if (data_021c6194 == t) data_021c6194 = p;
            return TRUE;
        }
        p = n;
    }
    return FALSE;
}
