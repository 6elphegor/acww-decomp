#include "types.h"
#include "gfx/HBlankTask.h"


// 0x021c6190: list head; this file's first .bss object (all five main users are functions of this file, plus itcm 0x01ffcc5c)
HBlankTask *sHBlankListHead;

HBlankTask *sHBlankListTail;

extern "C" void HBlank_Reset();

extern "C" void HBlank_Reset() {
    sHBlankListHead = NULL;
    sHBlankListTail = NULL;
}

extern "C" void HBlank_Init() {
    HBlank_Reset();
}

extern "C" void HBlank_RunFrame() {
    HBlankTask *t;
    for (t = sHBlankListHead; t != NULL; t = t->next) {
        if (t->taskState == 0) {
            t->taskState = 1;
            t->param = t->nextParam;
            if (t->unk_08 != NULL) t->unk_08();
        }
        if (t->unk_04 != NULL) t->unk_04();
        if (t->taskState == 2) {
            t->taskState = 1;
            t->param = t->nextParam;
            t->unk_08 = t->unk_14;
            if (t->unk_08 != NULL) t->unk_08();
        }
    }
}

extern "C" void HBlank_RunVBlank() {
    HBlankTask *t;
    for (t = sHBlankListHead; t != NULL; t = t->next) {
        if ((u8)(t->taskState + 0xff) <= 1 && t->unk_08 != NULL) t->unk_08();
    }
}

extern "C" BOOL HBlank_Add(HBlankTask *t, s32 a, void (*b)(), void (*c)()) {
    t->nextParam = a;
    t->param = 0;
    t->unk_08 = b;
    t->unk_04 = c;
    t->next = NULL;
    t->taskState = 0;
    if (sHBlankListTail != NULL) {
        sHBlankListTail->next = t;
        sHBlankListTail = t;
    } else {
        sHBlankListTail = t;
        sHBlankListHead = t;
    }
    return TRUE;
}

extern "C" BOOL HBlank_Remove(HBlankTask *t) {
    HBlankTask *p = sHBlankListHead;
    if (t == p) {
        sHBlankListHead = t->next;
        if (sHBlankListTail == t) sHBlankListTail = NULL;
        return TRUE;
    }
    for (; p != NULL; ) {
        HBlankTask *n = p->next;
        if (n == t) {
            p->next = n->next;
            if (sHBlankListTail == t) sHBlankListTail = p;
            return TRUE;
        }
        p = n;
    }
    return FALSE;
}
