#include "types.h"

struct Unk_02081974_Obj {
    Unk_02081974_Obj();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
    u8 pad_04[0x58];
    u32 unk_5c;
};

extern "C" {
s32 SaveVillagers_IsValidIndex(s32);
s32 Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 FieldPos_ToUnit(s32 *, s32 *, u32 *);
s32 func_02063b8c(s32);
s32 NpcRegistry_GetSlotCount();
s32 NpcRegistry_FindSpNpcByHandle(void *a);
s32 NpcRegistry_FindVillagerByHandle(void *a);
}

struct NpcRegistrySpNpcSlot {
    Unk_02081974_Obj *unk_00;
    u16 unk_04;
    ~NpcRegistrySpNpcSlot();
    NpcRegistrySpNpcSlot();
};

struct NpcRegistryVillagerSlot {
    Unk_02081974_Obj *unk_00;
    u16 unk_04;
    ~NpcRegistryVillagerSlot();
    NpcRegistryVillagerSlot();
};

struct NpcActorRegistry {
    NpcRegistryVillagerSlot unk_00[8];
    NpcRegistrySpNpcSlot unk_40[4];

    void clear();
    ~NpcActorRegistry();
    BOOL isSpNpcSlotUsed(NpcRegistrySpNpcSlot *s);
    BOOL isVillagerSlotUsed(NpcRegistryVillagerSlot *s);
    void clearSpNpcSlots(NpcRegistrySpNpcSlot *s, s32 n);
    void clearVillagerSlots(NpcRegistryVillagerSlot *s, s32 n);
    s32 findSpNpcSlot(u16 *p);
    s32 findVillagerSlot(u16 *p);
    Unk_02081974_Obj *getSpNpc(s32 i);
    Unk_02081974_Obj *findSpNpcByHandle(u16 *p);
    Unk_02081974_Obj *findSpNpcAt(s32 a, s32 b);
    Unk_02081974_Obj *findSpNpcByIndex(u32 v);
    BOOL removeSpNpc(u16 *p);
    BOOL addSpNpc(Unk_02081974_Obj *o, u16 *p);
    Unk_02081974_Obj *pickRandomVillager(s32 *idx);
    Unk_02081974_Obj *getVillager(s32 i);
    Unk_02081974_Obj *findVillagerByHandle(u16 *p);
    Unk_02081974_Obj *findVillagerAt(s32 a, s32 b);
    Unk_02081974_Obj *findVillagerByIndex(u32 v);
    BOOL removeVillager(u16 *p);
    BOOL addVillager(Unk_02081974_Obj *o, u16 *p);
};

NpcActorRegistry gNpcActorRegistry;

extern "C" s32 NpcRegistry_FindVillager(void *a);
extern "C" s32 NpcRegistry_FindSpNpc(void *a);

NpcRegistryVillagerSlot::NpcRegistryVillagerSlot() { unk_04 = 0xfff1; }

NpcRegistryVillagerSlot::~NpcRegistryVillagerSlot() {}

NpcRegistrySpNpcSlot::NpcRegistrySpNpcSlot() { unk_04 = 0xfff1; }

NpcRegistrySpNpcSlot::~NpcRegistrySpNpcSlot() {}

NpcActorRegistry::~NpcActorRegistry() {}

void NpcActorRegistry::clear() {
    clearVillagerSlots(unk_00, 8);
    clearSpNpcSlots(unk_40, 4);
}

void NpcActorRegistry::clearVillagerSlots(NpcRegistryVillagerSlot *s, s32 n) {
    s32 i = 0;
    for (; i < n; i++) {
        s->unk_00 = 0;
        s->unk_04 = 0xfff1;
        s++;
    }
}

BOOL NpcActorRegistry::isVillagerSlotUsed(NpcRegistryVillagerSlot *s) {
    if (s->unk_00 != 0 && ((s->unk_04 & 0xf000) >> 12) == 0xe) {
        return TRUE;
    }
    return FALSE;
}

s32 NpcActorRegistry::findVillagerSlot(u16 *p) {
    s32 i = 0;
    s32 found = -1;
    BOOL z1 = FALSE;
    BOOL z2 = FALSE;
    for (; i < 8; i++) {
        NpcRegistryVillagerSlot *s = &unk_00[i];
        BOOL r;
        if (Item_IsFurniture(&s->unk_04)) {
            r = (Item_GetFurnitureIndex(&s->unk_04) == Item_GetFurnitureIndex(p)) ? TRUE : z1;
        } else {
            r = (s->unk_04 == *p) ? TRUE : z2;
        }
        if (r) {
            found = i;
            break;
        }
    }
    return found;
}

BOOL NpcActorRegistry::addVillager(Unk_02081974_Obj *o, u16 *p) {
    BOOL r = FALSE;
    if (findVillagerSlot(p) == -1) {
        u16 t = 0xfff1;
        s32 i = findVillagerSlot(&t);
        if (i >= 0 && i < 8) {
            unk_00[i].unk_00 = o;
            unk_00[i].unk_04 = *p;
            r = TRUE;
        }
    }
    return r;
}

BOOL NpcActorRegistry::removeVillager(u16 *p) {
    s32 i = findVillagerSlot(p);
    BOOL r = FALSE;
    if (i >= 0 && i < 8) {
        unk_00[i].unk_00 = 0;
        unk_00[i].unk_04 = 0xfff1;
        r = TRUE;
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::findVillagerByIndex(u32 v) {
    Unk_02081974_Obj *r;
    u16 t = 0xfff1;
    r = 0;
    t = (v & 0xfff) | 0xe000;
    s32 i = findVillagerSlot(&t);
    if (i >= 0 && i < 8) {
        r = unk_00[i].unk_00;
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::findVillagerAt(s32 a, s32 b) {
    Unk_02081974_Obj *r = 0;
    NpcRegistryVillagerSlot *s = unk_00;
    s32 x = 0;
    s32 y = 0;
    s32 i;
    for (i = 0; i < 8; s++, i++) {
        if (isVillagerSlotUsed(s)) {
            FieldPos_ToUnit(&x, &y, &s->unk_00->unk_5c);
            if (x == a && y == b) {
                r = s->unk_00;
                break;
            }
        }
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::findVillagerByHandle(u16 *p) {
    Unk_02081974_Obj *r = 0;
    if (((*p & 0xf000) >> 12) == 0xe) {
        s32 i = findVillagerSlot(p);
        if (i >= 0 && i < 8) {
            r = unk_00[i].unk_00;
        }
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::getVillager(s32 i) {
    Unk_02081974_Obj *r = 0;
    if (SaveVillagers_IsValidIndex(i)) {
        NpcRegistryVillagerSlot *s = &unk_00[i];
        if (isVillagerSlotUsed(s)) {
            r = s->unk_00;
        }
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::pickRandomVillager(s32 *idx) {
    s32 cnt = 0;
    Unk_02081974_Obj *r = 0;
    s32 i = cnt;
    for (; i < 8; i++) {
        NpcRegistryVillagerSlot *s = &unk_00[i];
        if (isVillagerSlotUsed(s) && s->unk_00->vfunc_a8()) {
            cnt++;
        }
    }
    if (cnt > 0) {
        s32 n = func_02063b8c(cnt);
        for (i = 0; i < 8; i++) {
            NpcRegistryVillagerSlot *s = &unk_00[i];
            if (isVillagerSlotUsed(s) && s->unk_00->vfunc_a8()) {
                if (n == 0) {
                    r = s->unk_00;
                    if (idx) {
                        *idx = i;
                    }
                    break;
                }
                n--;
            }
        }
    }
    return r;
}

void NpcActorRegistry::clearSpNpcSlots(NpcRegistrySpNpcSlot *s, s32 n) {
    s32 i = 0;
    for (; i < n; i++) {
        s[i].unk_00 = 0;
        s[i].unk_04 = 0xfff1;
    }
}

BOOL NpcActorRegistry::isSpNpcSlotUsed(NpcRegistrySpNpcSlot *s) {
    if (s->unk_00 != 0 && ((s->unk_04 & 0xf000) >> 12) == 0xd) {
        return TRUE;
    }
    return FALSE;
}

s32 NpcActorRegistry::findSpNpcSlot(u16 *p) {
    s32 i = 0;
    s32 found = -1;
    BOOL z1 = FALSE;
    BOOL z2 = FALSE;
    for (; i < 4; i++) {
        BOOL r;
        if (Item_IsFurniture(&unk_40[i].unk_04)) {
            r = (Item_GetFurnitureIndex(&unk_40[i].unk_04) == Item_GetFurnitureIndex(p)) ? TRUE : z1;
        } else {
            u32 a = unk_40[i].unk_04;
            u32 b = *p;
            r = (a == b) ? TRUE : z2;
        }
        if (r) {
            found = i;
            break;
        }
    }
    return found;
}

BOOL NpcActorRegistry::addSpNpc(Unk_02081974_Obj *o, u16 *p) {
    if (findSpNpcSlot(p) == -1) {
        u16 t = 0xfff1;
        s32 i = findSpNpcSlot(&t);
        if (i >= 0 && i < 4) {
            unk_40[i].unk_00 = o;
            unk_40[i].unk_04 = *p;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL NpcActorRegistry::removeSpNpc(u16 *p) {
    s32 i = findSpNpcSlot(p);
    BOOL r = FALSE;
    if (i >= 0 && i < 4) {
        unk_40[i].unk_00 = 0;
        unk_40[i].unk_04 = 0xfff1;
        r = TRUE;
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::findSpNpcByIndex(u32 v) {
    Unk_02081974_Obj *r;
    u16 t = 0xfff1;
    r = 0;
    t = (v & 0xfff) | 0xd000;
    s32 i = findSpNpcSlot(&t);
    if (i >= 0 && i < 4) {
        r = unk_40[i].unk_00;
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::findSpNpcAt(s32 a, s32 b) {
    Unk_02081974_Obj *r = 0;
    NpcRegistrySpNpcSlot *s = unk_40;
    s32 x = 0;
    s32 y = 0;
    s32 i;
    for (i = 0; i < 4; s++, i++) {
        if (isSpNpcSlotUsed(s)) {
            FieldPos_ToUnit(&x, &y, &s->unk_00->unk_5c);
            if (x == a && y == b) {
                r = s->unk_00;
                break;
            }
        }
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::findSpNpcByHandle(u16 *p) {
    Unk_02081974_Obj *r = 0;
    if (((*p & 0xf000) >> 12) == 0xd) {
        s32 i = findSpNpcSlot(p);
        if (i >= 0 && i < 4) {
            r = unk_40[i].unk_00;
        }
    }
    return r;
}

Unk_02081974_Obj *NpcActorRegistry::getSpNpc(s32 i) {
    Unk_02081974_Obj *r = 0;
    if (i >= 0 && i < 4) {
        NpcRegistrySpNpcSlot *s = &unk_40[i];
        if (isSpNpcSlotUsed(s)) {
            r = s->unk_00;
        }
    }
    return r;
}

extern "C" void NpcRegistry_Clear() { gNpcActorRegistry.clear(); }

extern "C" s32 NpcRegistry_GetSlotCount() { return 12; }

extern "C" Unk_02081974_Obj *NpcRegistry_GetVillager(s32 i) {
    if (SaveVillagers_IsValidIndex(i)) {
        return gNpcActorRegistry.getVillager(i);
    }
    return 0;
}

extern "C" s32 NpcRegistry_GetBySlot(s32 n) {
    s32 r = 0;
    if (n >= 0) {
        if (SaveVillagers_IsValidIndex(n)) {
            r = (s32)gNpcActorRegistry.getVillager(n);
        } else if (n < NpcRegistry_GetSlotCount()) {
            r = (s32)gNpcActorRegistry.getSpNpc(n - 8);
        }
    }
    return r;
}

extern "C" s32 NpcRegistry_FindVillager(void *a) {
    return (s32)gNpcActorRegistry.findVillagerByIndex((u32)a);
}

extern "C" s32 NpcRegistry_FindSpNpc(void *a) {
    return (s32)gNpcActorRegistry.findSpNpcByIndex((u32)a);
}

extern "C" s32 NpcRegistry_FindByKind(s32 kind, void *x) {
    s32 r = 0;
    switch (kind) {
    case 2:
        r = NpcRegistry_FindVillager(x);
        break;
    case 3:
        r = NpcRegistry_FindSpNpc(x);
        break;
    }
    return r;
}

extern "C" s32 NpcRegistry_FindByHandle(u16 *p) {
    s32 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) r = NpcRegistry_FindVillagerByHandle(p);
    } else {
        r = NpcRegistry_FindSpNpcByHandle(p);
    }
    return r;
}

extern "C" s32 NpcRegistry_FindVillagerByHandle(void *a) {
    return (s32)gNpcActorRegistry.findVillagerByHandle((u16 *)a);
}

extern "C" s32 NpcRegistry_FindSpNpcByHandle(void *a) {
    return (s32)gNpcActorRegistry.findSpNpcByHandle((u16 *)a);
}

extern "C" void NpcRegistry_FindAt(void *a, void *b) {
    if (gNpcActorRegistry.findVillagerAt((s32)a, (s32)b) == 0) gNpcActorRegistry.findSpNpcAt((s32)a, (s32)b);
}

extern "C" s32 NpcRegistry_PickRandomVillager(void *a) {
    return (s32)gNpcActorRegistry.pickRandomVillager((s32 *)a);
}

extern "C" s32 NpcRegistry_AddVillager(void *a, void *b) {
    return gNpcActorRegistry.addVillager((Unk_02081974_Obj *)a, (u16 *)b);
}

extern "C" s32 NpcRegistry_RemoveVillager(void *a) {
    return gNpcActorRegistry.removeVillager((u16 *)a);
}

extern "C" s32 NpcRegistry_AddSpNpc(void *a, void *b) {
    return gNpcActorRegistry.addSpNpc((Unk_02081974_Obj *)a, (u16 *)b);
}

extern "C" s32 NpcRegistry_RemoveSpNpc(void *a) {
    return gNpcActorRegistry.removeSpNpc((u16 *)a);
}

