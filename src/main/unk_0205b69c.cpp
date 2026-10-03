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

// 0x021c6190: list head; this file's first .bss object (all five main users are functions of this file, plus itcm 0x01ffcc5c)
Unk_0205b6e4 *sHBlankListHead;

Unk_0205b6e4 *sHBlankListTail;

extern "C" void HBlank_Reset();

extern "C" void HBlank_Reset() {
    sHBlankListHead = NULL;
    sHBlankListTail = NULL;
}

extern "C" void HBlank_Init() {
    HBlank_Reset();
}

extern "C" void HBlank_RunFrame() {
    Unk_0205b6e4 *t;
    for (t = sHBlankListHead; t != NULL; t = t->unk_18) {
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

extern "C" void HBlank_RunVBlank() {
    Unk_0205b6e4 *t;
    for (t = sHBlankListHead; t != NULL; t = t->unk_18) {
        if ((u8)(t->unk_00 + 0xff) <= 1 && t->unk_08 != NULL) t->unk_08();
    }
}

extern "C" BOOL HBlank_Add(Unk_0205b6e4 *t, s32 a, void (*b)(), void (*c)()) {
    t->unk_10 = a;
    t->unk_0c = 0;
    t->unk_08 = b;
    t->unk_04 = c;
    t->unk_18 = NULL;
    t->unk_00 = 0;
    if (sHBlankListTail != NULL) {
        sHBlankListTail->unk_18 = t;
        sHBlankListTail = t;
    } else {
        sHBlankListTail = t;
        sHBlankListHead = t;
    }
    return TRUE;
}

extern "C" BOOL HBlank_Remove(Unk_0205b6e4 *t) {
    Unk_0205b6e4 *p = sHBlankListHead;
    if (t == p) {
        sHBlankListHead = t->unk_18;
        if (sHBlankListTail == t) sHBlankListTail = NULL;
        return TRUE;
    }
    for (; p != NULL; ) {
        Unk_0205b6e4 *n = p->unk_18;
        if (n == t) {
            p->unk_18 = n->unk_18;
            if (sHBlankListTail == t) sHBlankListTail = p;
            return TRUE;
        }
        p = n;
    }
    return FALSE;
}
