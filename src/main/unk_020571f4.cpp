#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020dc034_V {
    s32 x, y, z;
};

struct Unk_02058ddc_V {
    s32 x, y, z;
    Unk_02058ddc_V(const Unk_02058ddc_V &o) : x(o.x), y(o.y), z(o.z) {}
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

struct Unk_02059384_Rec {
    u8 pad_00[0xc];
    u8 unk_0c[0xc];
};

struct Unk_020593e8_Obj {
    u8 pad_00[8];
    u32 unk_08;
    u16 unk_0c;
};

struct Unk_02057328_Obj {
    u8 unk_00[0x5c];
    Unk_020dc034_V unk_5c;
};

class Unk_020dc034_Owner_Base {
public:
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
    virtual void vfunc_5c(Unk_020dc034_V *out);
    u8 pad_04[0x5c - 4];
    Unk_020dc034_V unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

class HandOverItem;
typedef void (HandOverItem::*Unk_020dc034_Fn)();

struct Unk_020dc034_Entry {
    Unk_020dc034_Fn a;
    Unk_020dc034_Fn b;
};

class Unk_020dc034_Dtor {
public:
    ~Unk_020dc034_Dtor();
    u8 unk_00[0x40];
};

extern "C" {
void func_020f440c(void *p);
}

class HandOverItem : public GameProc {
public:
    HandOverItem() { unk_50 = 0xfff1; func_020f440c(&unk_dc); }

    /* 0x50 */ u16 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ Unk_020dc034_V unk_60;
    /* 0x6c */ Unk_020dc034_V unk_6c;
    /* 0x78 */ Unk_020dc034_V unk_78;
    /* 0x84 */ Unk_020dc034_V unk_84;
    /* 0x90 */ Unk_020dc034_V unk_90;
    /* 0x9c */ Unk_020dc034_V unk_9c;
    /* 0xa8 */ Unk_020dc034_V unk_a8;
    /* 0xb4 */ s16 unk_b4[3];
    u8 pad_ba[2];
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ u8 unk_c8;
    u8 pad_c9[3];
    /* 0xcc */ Unk_020dc034_Owner_Base *unk_cc[2];
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 unk_d5;
    /* 0xd6 */ volatile u16 unk_d6;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    /* 0xda */ u8 unk_da;
    u8 pad_db;
    /* 0xdc */ Unk_020dc034_Dtor unk_dc;

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    void updateAct09V1(void);
    void act09V1Phase2(void);
    void act09V1Phase1(void);
    void act09V1Phase0(void);
    void startAct09V1(void);
    void updateAct07V1(void);
    void startAct07V1(void);
    void updateAct05V1(void);

    void startAct05V1();
    void updateAct04V1();
    void startAct04V1();
    void updateAct03V1();
    void startAct03V1();
    void updateAct02V1();
    void startAct02V1();
    void updateAct01V1();
    void act01V1Phase2();
    void act01V1Phase1();
    void act01V1Phase0();
    void startAct01V1();
    void updateAct0B();
    void act0BPhase1();
    void act0BPhase0();

    void startAct0B();
    void updateAct08();
    void startAct08();
    void updateAct07();
    void startAct07();
    void updateAct06();
    void startAct06();
    void updateAct05();
    void startAct05();
    void updateAct0A();
    void startAct0A();
    void updateAct04();
    void startAct04();
    void updateAct03();
    void startAct03();
    void startAct02();
    void updateAct01();
    void act01Phase1();
    void act01Phase0();
    void startAct01();

    Unk_020dc034_V getHoldOffset(u32 idx);
    void localToWorld(Unk_020dc034_V *out, Unk_020dc034_V *in, u32 idx);
    BOOL setNextModeBy(u8 v, void *p);
    void setBusy(u32 v);
    void getMasterHoldPos(Unk_020dc034_V *out);
    void drawItem();
    BOOL isAwaitingTake();
    BOOL requestModeBy(u8 v, void *p);
    void setModeRequest(u8 v);
    void clearModeRequest();
    BOOL switchMaster(void *p);
    BOOL isCharAt(void *p, u32 idx);
    BOOL begin(u16 *id, s32 a, u8 b, s32 c, Unk_020dc034_Owner_Base *o0, Unk_020dc034_Owner_Base *o1);
    void resetState();
};

static inline s32 Unk_020574cc_Abs(s32 v) {
    return v < 0 ? -v : v;
}

static inline BOOL Unk_020586bc_Range(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02058ddc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

struct Unk_02063388 {
    u32 v[2];
    Unk_02063388(s32 a, s32 b);
    Unk_02063388(const Unk_02063388 &o) { v[0] = o.v[0]; v[1] = o.v[1]; }
    ~Unk_02063388();
};

// ---- externals ----
extern "C" {
extern u8 gFieldSceneKind[];
extern u8 gSaveVillagers[];

void func_0204f3b4(s32 a);
s32 func_020e9650(void *a, void *b);
void func_020e761c(s32 *p, s32 target, s32 step);
void func_020e93a0(Unk_020dc034_V *v, s32 angle);
void VEC_Add(Unk_020dc034_V *a, Unk_020dc034_V *b, Unk_020dc034_V *out);
void FieldPos_SnapToUnitCenter(Unk_020dc034_V *a, Unk_020dc034_V *b);
s32 Scene_GetCurrent();
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
void func_020e9960(Unk_020dc034_V *out, Unk_020dc034_V *a, Unk_020dc034_V *b);
void func_020e759c(s32 *p, s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_0204f334(s32 a);
s32 Effect_PlayById(s32 a, Unk_020dc034_V *v, void *b, void *c);
void Field_DrawIconModel(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void RoomItemIcons_DrawIcon(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void Field_DrawItemIcon(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
void RoomItemIcons_DrawItem(u32 id, Unk_02058ddc_V *a, Unk_02058ddc_V *b, s16 x, s16 y, s16 z);
s32 func_0204f3e4(s32 c4, s32 idx, Unk_020dc034_V *p, Unk_020dc034_V *q, s32 a0, s32 a1, s32 a2, s32 z0, s32 z1, s32 k);
s32 _ZN9Character9getCharIdEv(void *p);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 func_0204f49c();
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *p, Unk_020dc034_V *v);
void func_020e7518(void *p);
void SaveVillagers_Get(void *p, u32 v);
u32 Villager_GetAnimalKind();

// ---- own data (defined below / after the functions) ----
extern const u8 sHandOverTakeTimeout[4];
extern const u8 data_020ca67c[4];
extern const u8 data_020ca680[4];
extern const u8 data_020ca684[4];
extern const s32 sHandOverReachFar;
extern const s32 sHandOverReach;
extern const u8 data_020ca690[4];
extern const Unk_020dc034_V sHoldOffsetDefault;
extern const Unk_020dc034_V data_020ca6a0;
extern const Unk_020dc034_V data_020ca6ac;
extern const Unk_020dc034_V data_020ca6b8;
extern const s32 data_020ca6c4[4];
extern const u32 sHandOverFishScale[8];
extern const s32 data_020ca6f4[0x30];
extern const s32 data_020ca7b4[0x30];
extern const s32 data_020ca874[0x30];
extern const s32 data_020ca934[0x30];
extern const s32 data_020ca9f4[0x30];
extern const s32 data_020caab4[0x30];

struct Unk_020dbeb4_Entry {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
};

extern "C" HandOverItem *HandOverItem_Create();
extern Unk_02059384_Rec *sFishHoldOffsetSets[6];

HandOverItem *sHandOverItem;
Unk_020dc034_Entry sHandOverItemActs[12][2] = {
    { { NULL, NULL }, { NULL, NULL } },
    { { &HandOverItem::startAct01, &HandOverItem::updateAct01 }, { &HandOverItem::startAct01V1, &HandOverItem::updateAct01V1 } },
    { { &HandOverItem::startAct02, NULL }, { &HandOverItem::startAct02V1, &HandOverItem::updateAct02V1 } },
    { { &HandOverItem::startAct03, &HandOverItem::updateAct03 }, { &HandOverItem::startAct03V1, &HandOverItem::updateAct03V1 } },
    { { &HandOverItem::startAct04, &HandOverItem::updateAct04 }, { &HandOverItem::startAct04V1, &HandOverItem::updateAct04V1 } },
    { { &HandOverItem::startAct05, &HandOverItem::updateAct05 }, { &HandOverItem::startAct05V1, &HandOverItem::updateAct05V1 } },
    { { &HandOverItem::startAct06, &HandOverItem::updateAct06 }, { NULL, NULL } },
    { { &HandOverItem::startAct07, &HandOverItem::updateAct07 }, { &HandOverItem::startAct07V1, &HandOverItem::updateAct07V1 } },
    { { &HandOverItem::startAct08, &HandOverItem::updateAct08 }, { NULL, NULL } },
    { { NULL, NULL }, { &HandOverItem::startAct09V1, &HandOverItem::updateAct09V1 } },
    { { &HandOverItem::startAct0A, &HandOverItem::updateAct0A }, { NULL, NULL } },
    { { &HandOverItem::startAct0B, &HandOverItem::updateAct0B }, { NULL, NULL } },
};

u8 data_021c5a30[4] = { data_020ca690[1] - data_020ca690[0], data_020ca690[2] - data_020ca690[1], data_020ca690[3] - data_020ca690[2] };
FxVec3 sPutDownOffset(-0x400, -0x300, 0x1100);
u8 data_021c5a2c[4] = { data_020ca680[1] - data_020ca680[0], data_020ca680[2] - data_020ca680[1] };
u8 data_021c5a28[4] = { data_020ca684[1] - data_020ca684[0], data_020ca684[2] - data_020ca684[1] };
u8 data_021c5a24[4] = { data_020ca67c[1] - data_020ca67c[0] };
FxVec3 data_021c5acc(0, 0, 0xd00);
s32 data_021c5ae8[4] = { 0, Unk_020574cc_Abs(data_020ca6c4[1] / data_021c5a30[0]), Unk_020574cc_Abs(data_020ca6c4[2] / data_021c5a30[1]), Unk_020574cc_Abs(data_020ca6c4[3] / data_021c5a30[2]) };
FxVec3 data_021c5a84(0, 0, 0x1300);

// ---- own functions (declared for forward references) ----
s32 HandOverItem_IsMaster(s32 a);
s32 HandOverItem_IsModeActive(u32 v);
u32 HandOverItem_GetFishHoldOffsetSet(Unk_020593e8_Obj *o);
Unk_020dc034_V *HandOverItem_GetFishHoldOffset(Unk_020593e8_Obj *t, u32 i);
Unk_020dc034_V *HandOverItem_GetFishHoldOffset2(Unk_020593e8_Obj *t, u32 i);
u32 HandOverItem_GetFishScale(u32 a);
void HandOverItem_DrawIcon(void *unused, u32 id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang);
void _ZN12HandOverItem13getHoldOffsetEj(Unk_020dc034_V *out, HandOverItem *self, s32 idx);
void HandOverItem_DrawItem(HandOverItem *self, u16 *id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang);
}

extern "C" u32 HandOverItem_GetFishScale(u32 i)
{
    return sHandOverFishScale[i];
}

extern "C" u32 HandOverItem_GetFishHoldOffsetSet(Unk_020593e8_Obj *o)
{
    u32 r = 3;
    volatile u16 h = 0xfff1;
    h = o->unk_08;
    s32 a = h;
    u32 b = h;
    s32 t = (s32)(b & 0xf000) >> 12;
    if (t != 0xd) {
      if (t == 0xe) {
        SaveVillagers_Get(gSaveVillagers, b & 0xfff);
        switch (Villager_GetAnimalKind()) {
        case 0: case 5: case 6: case 10: case 12: case 15: case 16: case 21: case 25: case 31: case 32:
            r = 4; break;
        case 1: case 2: case 4: case 7: case 9: case 13: case 14: case 17: case 19: case 20: case 22: case 23: case 26: case 27: case 29:
            r = 5; break;
        }
      }
    } else {
        switch (a) {
        case 0xd00c: r = 0; break;
        case 0xd013: r = 1; break;
        case 0xd012:
        case 0xd025: r = 2; break;
        }
    }
    return r;
}

extern "C" Unk_020dc034_V *HandOverItem_GetFishHoldOffset(Unk_020593e8_Obj *o, u32 idx)
{
    if (o->unk_0c == 9) {
        return (Unk_020dc034_V *)&sFishHoldOffsetSets[3][idx];
    }
    return (Unk_020dc034_V *)&sFishHoldOffsetSets[HandOverItem_GetFishHoldOffsetSet(o)][idx];
}

extern "C" Unk_020dc034_V *HandOverItem_GetFishHoldOffset2(Unk_020593e8_Obj *o, u32 idx)
{
    if (o->unk_0c == 9) {
        return (Unk_020dc034_V *)sFishHoldOffsetSets[3][idx].unk_0c;
    }
    return (Unk_020dc034_V *)sFishHoldOffsetSets[HandOverItem_GetFishHoldOffsetSet(o)][idx].unk_0c;
}

extern "C" HandOverItem *HandOverItem_Create()
{
    return new HandOverItem;
}

BOOL HandOverItem::vfunc_00()
{
    resetState();
    _ZN12Unk_02003c3013func_02003eccEv(&unk_dc);
    sHandOverItem = this;
    return TRUE;
}

BOOL HandOverItem::vfunc_0c()
{
    _ZN12Unk_02003c3013func_02003e50Ev(&sHandOverItem->unk_dc);
    sHandOverItem = NULL;
    return TRUE;
}

BOOL HandOverItem::onExecute()
{
    if (unk_5c >= 0 && unk_5c < 2) {
        if (unk_da < 0xc) {
            unk_c8 = unk_da;
            unk_d6 = 0;
            Unk_020dc034_Entry *e = &sHandOverItemActs[unk_c8][unk_5c];
            if (e->a != 0) {
                (this->*(e->a))();
            }
            clearModeRequest();
        }
        if (unk_c8 < 0xc) {
            if (sHandOverItemActs[unk_c8][unk_5c].b != 0) {
                (this->*(sHandOverItemActs[unk_c8][unk_5c].b))();
                Unk_020dc034_V v;
                v.x = unk_60.x;
                v.y = unk_60.y;
                v.z = unk_60.z;
                _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(&unk_dc, &v);
            }
        }
        if (isAwaitingTake()) {
            func_020e7518(&unk_d5);
        }
    }
    return TRUE;
}

BOOL HandOverItem::onDraw()
{
    drawItem();
    return TRUE;
}

void HandOverItem::resetState()
{
    unk_c8 = 0;
    for (s32 i = 0; i < 2; i++) unk_cc[i] = NULL;
    unk_50 = 0xfff1;
    unk_58 = 0xc;
    unk_d6 = 0;
    unk_d4 = 0;
    clearModeRequest();
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 0;
    setBusy(0);
    unk_bc = sHandOverReach;
    unk_c4 = -1;
}

BOOL HandOverItem::begin(u16 *id, s32 a, u8 b, s32 c, Unk_020dc034_Owner_Base *o0, Unk_020dc034_Owner_Base *o1)
{
    if (unk_c8 == 0 && o0 != NULL) {
        unk_50 = *id;
        unk_54 = a;
        unk_58 = b;
        unk_5c = c;
        unk_cc[0] = o0;
        unk_cc[1] = o1;
        BOOL x;
        if (Item_IsFurniture(&unk_50)) {
            u16 tmp = 0x1565;
            x = Item_GetFurnitureIndex(&unk_50) == Item_GetFurnitureIndex(&tmp);
        } else {
            x = unk_50 == 0x1565;
        }
        BOOL rr;
        if (x && unk_54 == 0) {
            goto near;
        }
        rr = FALSE;
        if (unk_50 >= 0x1492 && unk_50 <= 0x14fd) rr = TRUE;
        if (rr == 1 && unk_54 == 2) {
        near:
            if (Scene_GetCurrent() == 9 || Scene_GetCurrent() == 0x10) {
                unk_bc = sHandOverReachFar;
            } else {
                unk_bc = sHandOverReach;
            }
        } else {
            unk_bc = sHandOverReach;
        }
        BOOL r2 = FALSE;
        if (unk_50 >= 0x12e8 && unk_50 <= 0x131f) r2 = TRUE;
        if (r2) {
            unk_c4 = func_0204f49c();
        }
    }
    return FALSE;
}

BOOL HandOverItem::isCharAt(void *p, u32 idx)
{
    if (idx < 2 && unk_cc[idx] != NULL) {
        if (_ZN9Character9getCharIdEv(p) == _ZN9Character9getCharIdEv(*(Unk_020dc034_Owner_Base **)((u8 *)this + idx * 4 + 0xcc))) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL HandOverItem::switchMaster(void *p)
{
    BOOL r = FALSE;
    if (isCharAt(p, 1) == 1) {
        unk_cc[1] = unk_cc[0];
        unk_cc[0] = (Unk_020dc034_Owner_Base *)p;
        r = TRUE;
    } else if (isCharAt(p, 0) == 1) {
        r = TRUE;
    }
    return r;
}

void HandOverItem::clearModeRequest()
{
    setModeRequest(0xc);
}

void HandOverItem::setModeRequest(u8 v)
{
    unk_da = v;
    if (v == 1 || v == 7) {
        unk_d5 = sHandOverTakeTimeout[0];
    }
}

BOOL HandOverItem::requestModeBy(u8 v, void *p)
{
    BOOL r = FALSE;
    if (isCharAt(p, 0) == 1) {
        setModeRequest(v);
        r = TRUE;
    }
    return r;
}

BOOL HandOverItem::isAwaitingTake()
{
    BOOL r5 = TRUE;
    BOOL r4 = TRUE;
    if (unk_c8 != 2) {
        if (unk_c8 != 1 || HandOverItem_IsModeActive(1) != 0) r4 = FALSE;
    }
    if (!r4) {
        if (unk_c8 != 7 || HandOverItem_IsModeActive(7) != 0) r5 = FALSE;
    }
    return r5;
}

void HandOverItem_DrawItem(HandOverItem *self, u16 *id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang)
{
    BOOL r = FALSE;
    if (*id >= 0x12e8 && *id <= 0x131f) r = TRUE;
    if (r) {
        s32 c4 = self->unk_c4;
        if (c4 != -1) {
            s32 idx;
            if (*id >= 0x12e8 && *id <= 0x131f) idx = *id - 0x12e8; else idx = -1;
            func_0204f3e4(c4, idx, p, q, ang[0], ang[1], ang[2], 0, 0, 0x1f);
            return;
        }
    }
    if (Unk_02058ddc_IsZero(*gFieldSceneKind) == 1) {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        Field_DrawItemIcon(*id, &a, &b, ang[0], ang[1], ang[2]);
    } else {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        RoomItemIcons_DrawItem(*id, &a, &b, ang[0], ang[1], ang[2]);
    }
}

void HandOverItem_DrawIcon(void *unused, u32 id, Unk_020dc034_V *p, Unk_020dc034_V *q, s16 *ang)
{
    if (Unk_02058ddc_IsZero(*gFieldSceneKind) == 1) {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        Field_DrawIconModel(id, &a, &b, ang[0], ang[1], ang[2]);
    } else {
        Unk_02058ddc_V a(*(Unk_02058ddc_V *)p);
        Unk_02058ddc_V b(*(Unk_02058ddc_V *)q);
        RoomItemIcons_DrawIcon(id, &a, &b, ang[0], ang[1], ang[2]);
    }
}

void HandOverItem::drawItem()
{
    if (unk_c8 < 0xc && unk_50 != 0xfff1 && unk_d8 == 1) {
        if (unk_54 == 2 && !(unk_50 >= 0x1561 && unk_50 <= 0x1564) && !(unk_50 >= 0x155f && unk_50 <= 0x1560)) {
            HandOverItem_DrawIcon(this, 0x27, &unk_60, (Unk_020dc034_V *)&unk_a8, unk_b4);
        } else {
            HandOverItem_DrawItem(this, &unk_50, &unk_60, (Unk_020dc034_V *)&unk_a8, unk_b4);
        }
    }
}

void HandOverItem::getMasterHoldPos(Unk_020dc034_V *out)
{
    if (unk_cc[0] != NULL) {
        unk_cc[0]->vfunc_5c(out);
    }
}

void HandOverItem::setBusy(u32 v)
{
    unk_d9 = v;
}

BOOL HandOverItem::setNextModeBy(u8 v, void *p)
{
    BOOL r = FALSE;
    if (unk_c8 != 0 && unk_d9 != 1 && isCharAt(p, 0) == 1) {
        unk_58 = v;
        r = TRUE;
    }
    return r;
}

void HandOverItem::localToWorld(Unk_020dc034_V *out, Unk_020dc034_V *in, u32 idx)
{
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    if (idx < 2) {
        if (unk_cc[idx] != NULL) {
            func_020e93a0(out, ((Unk_020dc034_Owner_Base *)unk_cc[idx])->unk_8e);
            VEC_Add(out, &unk_cc[idx]->unk_5c, out);
        }
    }
}

Unk_020dc034_V HandOverItem::getHoldOffset(u32 idx)
{
    u32 t = 0xd8;
    Unk_020dc034_Owner_Base *o = unk_cc[idx];
    if (o != NULL) {
        t = *(u16 *)((u8 *)o + 0xc);
    }
    if (t == 0x6b) {
        return data_020ca6a0;
    } else if (t == 0x6a) {
        return data_020ca6ac;
    } else if (t == 0x76) {
        return data_020ca6b8;
    } else {
        return sHoldOffsetDefault;
    }
}

void HandOverItem::startAct01()
{
    Unk_020dc034_V pos, off;
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = *(Unk_020dc034_V *)&data_021c5acc;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        VEC_Add(&pos, HandOverItem_GetFishHoldOffset((Unk_020593e8_Obj *)unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    ::_ZN12HandOverItem13getHoldOffsetEj(&off, this, 0);
    VEC_Add(&pos, &off, &pos);
    localToWorld(&unk_9c, &pos, 0);
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 1;
    unk_d4 = 0;
    setBusy(1);
}

void HandOverItem::act01Phase0()
{
    getMasterHoldPos(&unk_60);
    unk_d6 = unk_d6 + 1;
    if ((s32)unk_d6 >= data_020ca690[(*(volatile u8 *)&unk_d4)]) {
        s32 n, t;
        (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        n = data_021c5a30[0];
        t = (unk_9c.x - unk_60.x) / n;
        if (t < 0) t = -t;
        unk_90.x = t;
        t = unk_9c.y / n;
        if (t < 0) t = -t;
        unk_90.y = t;
        t = (unk_9c.z - unk_60.z) / n;
        if (t < 0) t = -t;
        unk_90.z = t;
    }
}

void HandOverItem::act01Phase1()
{
    Unk_020dc034_V cur;
    s32 v = unk_a8.x;
    s32 a = data_020ca6c4[unk_d4];
    s32 b = data_021c5ae8[unk_d4];
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        s32 k = HandOverItem_GetFishScale(func_0204f334(unk_50 - 0x12e8));
        a = func_01ffcb0c(a, k);
        b = func_01ffcb0c(b, k);
    }
    func_020e759c(&v, a, b);
    s32 u = v;
    unk_a8.x = u;
    unk_a8.y = u;
    unk_a8.z = u;
    getMasterHoldPos(&cur);
    func_020e761c(&unk_60.x, unk_9c.x, unk_90.x);
    func_020e761c(&unk_60.y, cur.y + unk_9c.y, unk_90.y);
    func_020e761c(&unk_60.z, unk_9c.z, unk_90.z);
    unk_d6 = unk_d6 + 1;
    if ((s32)unk_d6 >= data_020ca690[(*(volatile u8 *)&unk_d4)]) {
        (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        if ((*(volatile u8 *)&unk_d4) >= 4) {
            setBusy(0);
        }
    }
}

void HandOverItem::updateAct01()
{
    static void (HandOverItem::*const tbl[4])() = {
        &HandOverItem::act01Phase0,
        &HandOverItem::act01Phase1,
        &HandOverItem::act01Phase1,
        &HandOverItem::act01Phase1,
    };
    if (unk_d4 < 4) {
        (this->*tbl[unk_d4])();
    }
}

void HandOverItem::startAct02()
{
    setBusy(1);
}

void HandOverItem::startAct03()
{
    Unk_020dc034_V cur, pos, off;
    s32 a, b, c;
    getMasterHoldPos(&cur);
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = *(Unk_020dc034_V *)&data_021c5a84;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        VEC_Add(&pos, HandOverItem_GetFishHoldOffset2((Unk_020593e8_Obj *)unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    ::_ZN12HandOverItem13getHoldOffsetEj(&off, this, 0);
    VEC_Add(&pos, &off, &pos);
    localToWorld(&unk_9c, &pos, 0);
    unk_6c.x = unk_9c.x;
    unk_6c.y = cur.y + unk_9c.y;
    unk_6c.z = unk_9c.z;
    c = (unk_6c.z - unk_60.z) / 2;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 2;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 2;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    setBusy(1);
}

void HandOverItem::updateAct03()
{
    if ((s32)unk_d6 < 2) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 2) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct04()
{
    Unk_020dc034_V cur, pos, off;
    s32 a, b;
    getMasterHoldPos(&cur);
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
    pos = *(Unk_020dc034_V *)&data_021c5acc;
    if (Unk_020586bc_Range(&unk_50, 0x12e8, 0x131f)) {
        VEC_Add(&pos, HandOverItem_GetFishHoldOffset((Unk_020593e8_Obj *)unk_cc[0], func_0204f334(unk_50 - 0x12e8)), &pos);
    }
    ::_ZN12HandOverItem13getHoldOffsetEj(&off, this, 0);
    VEC_Add(&pos, &off, &pos);
    localToWorld(&unk_9c, &pos, 0);
    unk_6c.x = unk_9c.x;
    unk_6c.y = unk_9c.y;
    unk_6c.z = unk_9c.z;
    a = (unk_6c.z - unk_60.z) / 2;
    if (a < 0) a = -a;
    b = (unk_6c.x - unk_60.x) / 2;
    if (b < 0) b = -b;
    unk_90.x = b;
    unk_90.y = 0;
    unk_90.z = a;
    unk_d6 = 0;
    setBusy(1);
}

void HandOverItem::updateAct04()
{
    Unk_020dc034_V cur, t;
    s32 n = unk_d6;
    if (n < 9) {
        getMasterHoldPos(&cur);
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        unk_60.y = cur.y + unk_6c.y;
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 9) {
            func_020e9960(&t, &unk_60, &cur);
            unk_84.x = t.x;
            unk_84.y = t.y;
            unk_84.z = t.z;
            setBusy(0);
        }
    } else if (n == 9) {
        getMasterHoldPos(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
    }
}

void HandOverItem::startAct0A()
{
    Unk_020dc034_V cur, t;
    setBusy(0);
    getMasterHoldPos(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    unk_d6 = 0;
}

void HandOverItem::updateAct0A()
{
    getMasterHoldPos(&unk_60);
    VEC_Add(&unk_60, &unk_84, &unk_60);
}

void HandOverItem::startAct05()
{
    Unk_020dc034_V cur, t;
    unk_6c.x = 0;
    unk_6c.y = 0;
    unk_6c.z = 0;
    getMasterHoldPos(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    if (unk_cc[0] != NULL) {
        func_020e93a0(&unk_84, (s16)-unk_cc[0]->unk_8e);
    }
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    s32 a, b, c;
    c = unk_84.z / 8;
    if (c < 0) c = -c;
    b = unk_84.y / 8;
    if (b < 0) b = -b;
    a = unk_84.x / 8;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    a = unk_a8.x / 8;
    if (a < 0) a = -a;
    unk_c0 = a;
    setBusy(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void HandOverItem::updateAct05()
{
    s32 v = unk_a8.x;
    if ((s32)unk_d6 < 8) {
        getMasterHoldPos(&unk_60);
        func_020e761c(&v, 0, unk_c0);
        s32 u = v;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_84.x, 0, unk_90.x);
        func_020e761c(&unk_84.y, 0, unk_90.y);
        func_020e761c(&unk_84.z, 0, unk_90.z);
        if (unk_cc[0] != NULL) {
            unk_78.x = unk_84.x;
            unk_78.y = unk_84.y;
            unk_78.z = unk_84.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 8) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct06() {}

void HandOverItem::updateAct06() {}

void HandOverItem::startAct07()
{
    Unk_020dc034_V cur, t;
    getMasterHoldPos(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    setBusy(1);
    unk_d6 = 0;
}

void HandOverItem::updateAct07()
{
    if ((s32)unk_d6 < 9) {
        getMasterHoldPos(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 9) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct08()
{
    setBusy(1);
    unk_d6 = 0;
    if (unk_54 == 2) {
        unk_54 = 0;
    }
    Effect_PlayById(0x93, &unk_60, 0, 0);
}

void HandOverItem::updateAct08()
{
    if ((s32)unk_d6 < 10) {
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 10) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct0B()
{
    Unk_020dc034_V cur, t;
    setBusy(1);
    getMasterHoldPos(&cur);
    func_020e9960(&t, &unk_60, &cur);
    unk_84.x = t.x;
    unk_84.y = t.y;
    unk_84.z = t.z;
    unk_d6 = 0;
    unk_d4 = 0;
}

void HandOverItem::act0BPhase0()
{
    if ((s32)unk_d6 < data_020ca67c[unk_d4]) {
        getMasterHoldPos(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= data_020ca67c[unk_d4]) {
            s32 a, b, c;
    c = unk_a8.x / data_021c5a24[unk_d4];
            if (c < 0) c = -c;
            unk_c0 = c;
            unk_d4 = unk_d4 + 1;
        }
    }
}

void HandOverItem::act0BPhase1()
{
    if ((s32)unk_d6 < data_020ca67c[(*(volatile u8 *)&unk_d4)]) {
        s32 t = unk_a8.x;
        func_020e761c(&t, 0, unk_c0);
        s32 u = t;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        getMasterHoldPos(&unk_60);
        VEC_Add(&unk_60, &unk_84, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= data_020ca67c[(*(volatile u8 *)&unk_d4)]) {
            (*(volatile u8 *)&unk_d4) = (*(volatile u8 *)&unk_d4) + 1;
        }
    }
}

void HandOverItem::updateAct0B()
{
    static Unk_020dc034_Fn tbl[2] = { &HandOverItem::act0BPhase0, &HandOverItem::act0BPhase1 };
    u32 i = unk_d4;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

void HandOverItem::startAct01V1()
{
    unk_84.x = 0;
    unk_84.y = 0;
    unk_84.z = 0;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    unk_a8.x = 0;
    unk_a8.y = 0;
    unk_a8.z = 0;
    unk_d8 = 1;
    unk_d4 = 0;
    unk_d6 = 0;
    setBusy(1);
}

void HandOverItem::act01V1Phase0()
{
    s32 n = data_020ca680[0];
    if ((s32)unk_d6 < n) {
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            unk_84.x = 0;
            unk_84.y = 0;
            unk_84.z = 0;
            unk_78.x = 0;
            unk_78.y = 0;
            unk_78.z = 0;
            unk_6c.x = sPutDownOffset.x;
            unk_6c.y = sPutDownOffset.y;
            unk_6c.z = sPutDownOffset.z;
            s32 a, b, c;
    c = unk_6c.z / 12;
            if (c < 0) c = -c;
            b = unk_6c.y / 12;
            if (b < 0) b = -b;
            a = unk_6c.x / 12;
            if (a < 0) a = -a;
            unk_90.x = a;
            unk_90.y = b;
            unk_90.z = c;
            unk_d4 = 1;
        }
    }
}

void HandOverItem::act01V1Phase1()
{
    s32 n = data_020ca680[1];
    if ((s32)unk_d6 < n) {
        s32 t = unk_a8.x;
        getMasterHoldPos(&unk_60);
        func_020e761c(&t, 0x1000, 0x200);
        s32 u = t;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_84.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_84.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_84.z, unk_6c.z, unk_90.z);
        if (unk_cc[0] != NULL) {
            unk_78.x = unk_84.x;
            unk_78.y = unk_84.y;
            unk_78.z = unk_84.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            static FxVec3 s(0x10000, 0, 0x17000);
            Unk_020dc034_V t2;
            t2.x = 0;
            t2.y = 0;
            t2.z = 0x2000;
            if (Scene_GetCurrent() == 0x10) {
                unk_6c.x = s.x;
                unk_6c.y = s.y;
                unk_6c.z = s.z;
            } else {
                func_020e93a0(&t2, unk_cc[0]->unk_8e);
                VEC_Add(&t2, &unk_cc[0]->unk_5c, &t2);
                FieldPos_SnapToUnitCenter(&unk_6c, &t2);
            }
            unk_6c.y = unk_6c.y + 0x1000;
            s32 m = data_021c5a2c[1];
            s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / m;
            if (c < 0) c = -c;
            b = (unk_6c.y - unk_60.y) / m;
            if (b < 0) b = -b;
            a = (unk_6c.x - unk_60.x) / m;
            if (a < 0) a = -a;
            unk_90.x = a;
            unk_90.y = b;
            unk_90.z = c;
            unk_d4 = 2;
        }
    }
}

void HandOverItem::act01V1Phase2()
{
    s32 n = data_020ca680[2];
    if ((s32)unk_d6 < n) {
        s32 t = unk_a8.x;
        func_020e761c(&t, 0x1000, 0x200);
        s32 u = t;
        unk_a8.x = u;
        unk_a8.y = u;
        unk_a8.z = u;
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= n) {
            BOOL r = FALSE;
            if (unk_50 >= 0x1492 && unk_50 <= 0x14fd) r = TRUE;
            if (r) {
                func_02003e70(&unk_dc, 0x70, 0x7f, 0);
            }
            unk_d4 = 3;
            setBusy(0);
        }
    }
}

void HandOverItem::updateAct01V1()
{
    static Unk_020dc034_Fn tbl[3] = { &HandOverItem::act01V1Phase0, &HandOverItem::act01V1Phase1, &HandOverItem::act01V1Phase2 };
    u32 i = unk_d4;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

void HandOverItem::startAct02V1()
{
    static FxVec3 s(0x10000, 0, 0x17000);
    Unk_020dc034_V t;
    t.x = 0;
    t.y = 0;
    t.z = 0x2000;
    if (Scene_GetCurrent() == 0x10) {
        unk_6c.x = s.x;
        unk_6c.y = s.y;
        unk_6c.z = s.z;
    } else {
        func_020e93a0(&t, unk_cc[0]->unk_8e);
        VEC_Add(&t, &unk_cc[0]->unk_5c, &t);
        FieldPos_SnapToUnitCenter(&unk_6c, &t);
    }
    unk_6c.y = unk_6c.y + 0x1000;
    s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / 4;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 4;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 4;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    setBusy(1);
}

void HandOverItem::updateAct02V1()
{
    if ((s32)unk_d6 < 4) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 4) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct03V1()
{
    getMasterHoldPos(&unk_6c);
    if (unk_cc[0] != NULL) {
        unk_78.x = sPutDownOffset.x;
        unk_78.y = sPutDownOffset.y;
        unk_78.z = sPutDownOffset.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_6c, &unk_78, &unk_6c);
    s32 a, b, c;
    c = (unk_6c.z - unk_60.z) / 2;
    if (c < 0) c = -c;
    b = (unk_6c.y - unk_60.y) / 2;
    if (b < 0) b = -b;
    a = (unk_6c.x - unk_60.x) / 2;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    unk_d6 = 0;
    setBusy(1);
}

void HandOverItem::updateAct03V1()
{
    if ((s32)unk_d6 < 2) {
        func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
        func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
        func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 2) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct04V1()
{
    setBusy(1);
    unk_d6 = 0;
}

void HandOverItem::updateAct04V1()
{
    if ((s32)unk_d6 < 10) {
        getMasterHoldPos(&unk_60);
        if (unk_cc[0] != NULL) {
            unk_78.x = sPutDownOffset.x;
            unk_78.y = sPutDownOffset.y;
            unk_78.z = sPutDownOffset.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_60, &unk_78, &unk_60);
        unk_d6 = unk_d6 + 1;
        if ((s32)unk_d6 >= 10) {
            setBusy(0);
        }
    }
}

void HandOverItem::startAct05V1()
{
    unk_6c.x = 0;
    unk_6c.y = 0;
    unk_6c.z = 0;
    unk_84.x = sPutDownOffset.x;
    unk_84.y = sPutDownOffset.y;
    unk_84.z = sPutDownOffset.z;
    unk_78.x = 0;
    unk_78.y = 0;
    unk_78.z = 0;
    s32 a, b, c;
    c = unk_84.z / 8;
    if (c < 0) c = -c;
    b = unk_84.y / 8;
    if (b < 0) b = -b;
    a = unk_84.x / 8;
    if (a < 0) a = -a;
    unk_90.x = a;
    unk_90.y = b;
    unk_90.z = c;
    setBusy(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void HandOverItem::updateAct05V1(void) {
    static s32 step = Unk_020574cc_Abs(0x1000 / 8);
    s32 tmp = unk_a8.x;
    if ((s32)unk_d6 >= 8) {
        return;
    }
    getMasterHoldPos(&unk_60);
    func_020e761c(&tmp, 0, step);
    s32 t2 = tmp;
    unk_a8.x = t2;
    unk_a8.y = t2;
    unk_a8.z = t2;
    func_020e761c(&unk_84.x, 0, unk_90.x);
    func_020e761c(&unk_84.y, 0, unk_90.y);
    func_020e761c(&unk_84.z, 0, unk_90.z);
    if (unk_cc[0]) {
        unk_78.x = unk_84.x;
        unk_78.y = unk_84.y;
        unk_78.z = unk_84.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_60, &unk_78, &unk_60);
    unk_d6++;
    if ((s32)unk_d6 >= 8) {
        setBusy(0);
    }
}

void HandOverItem::startAct07V1(void) {
    setBusy(1);
    unk_d6 = 0;
}

void HandOverItem::updateAct07V1(void) {
    updateAct04();
}

void HandOverItem::startAct09V1(void) {
    setBusy(1);
    unk_d6 = 0;
    unk_d4 = 0;
}

void HandOverItem::act09V1Phase0(void) {
    s32 c, b, a;
    s32 n = data_020ca684[0];
    if (unk_d6 >= n) {
        return;
    }
    unk_d6++;
    if (unk_d6 >= n) {
        getMasterHoldPos(&unk_6c);
        if (unk_cc[0]) {
            unk_78.x = sPutDownOffset.x;
            unk_78.y = sPutDownOffset.y;
            unk_78.z = sPutDownOffset.z;
            func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
        }
        VEC_Add(&unk_6c, &unk_78, &unk_6c);
        u32 d = data_021c5a28[0];
        a = Unk_020574cc_Abs((unk_6c.z - unk_60.z) / (s32)d);
        b = Unk_020574cc_Abs((unk_6c.y - unk_60.y) / (s32)d);
        c = Unk_020574cc_Abs((unk_6c.x - unk_60.x) / (s32)d);
        unk_90.x = c;
        unk_90.y = b;
        unk_90.z = a;
        unk_d4 = 1;
    }
}

void HandOverItem::act09V1Phase1(void) {
    s32 c, b, a;
    s32 n = data_020ca684[1];
    if (unk_d6 >= n) {
        return;
    }
    getMasterHoldPos(&unk_6c);
    if (unk_cc[0]) {
        unk_78.x = sPutDownOffset.x;
        unk_78.y = sPutDownOffset.y;
        unk_78.z = sPutDownOffset.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_6c, &unk_78, &unk_6c);
    func_020e761c(&unk_60.x, unk_6c.x, unk_90.x);
    func_020e761c(&unk_60.y, unk_6c.y, unk_90.y);
    func_020e761c(&unk_60.z, unk_6c.z, unk_90.z);
    unk_d6++;
    if (unk_d6 >= n) {
        unk_6c.x = 0;
        unk_6c.y = 0;
        unk_6c.z = 0;
        unk_84.x = sPutDownOffset.x;
        unk_84.y = sPutDownOffset.y;
        unk_84.z = sPutDownOffset.z;
        unk_78.x = 0;
        unk_78.y = 0;
        unk_78.z = 0;
        a = Unk_020574cc_Abs(unk_84.z / 8);
        b = Unk_020574cc_Abs(unk_84.y / 8);
        c = Unk_020574cc_Abs(unk_84.x / 8);
        unk_90.x = c;
        unk_90.y = b;
        unk_90.z = a;
        unk_d4 = 2;
    }
}

void HandOverItem::act09V1Phase2(void) {
    static s32 step = Unk_020574cc_Abs(0x1000 / data_021c5a28[1]);
    s32 tmp = unk_a8.x;
    s32 n = data_020ca684[2];
    if (unk_d6 >= n) {
        return;
    }
    getMasterHoldPos(&unk_60);
    func_020e761c(&tmp, 0, step);
    s32 t2 = tmp;
    unk_a8.x = t2;
    unk_a8.y = t2;
    unk_a8.z = t2;
    func_020e761c(&unk_84.x, 0, unk_90.x);
    func_020e761c(&unk_84.y, 0, unk_90.y);
    func_020e761c(&unk_84.z, 0, unk_90.z);
    if (unk_cc[0]) {
        unk_78.x = unk_84.x;
        unk_78.y = unk_84.y;
        unk_78.z = unk_84.z;
        func_020e93a0(&unk_78, unk_cc[0]->unk_8e);
    }
    VEC_Add(&unk_60, &unk_78, &unk_60);
    unk_d6++;
    if (unk_d6 >= n) {
        unk_d4 = 3;
        setBusy(0);
    }
}

void HandOverItem::updateAct09V1(void) {
    static void (HandOverItem::*tbl[3])(void) = {
        &HandOverItem::act09V1Phase0,
        &HandOverItem::act09V1Phase1,
        &HandOverItem::act09V1Phase2,
    };
    u32 state = unk_d4;
    if (state < 3) {
        (this->*tbl[state])();
    }
}

extern "C" s32 HandOverItem_Begin(s32 a, s32 b, u8 c, s32 d, s32 e, s32 f) {
    s32 r = 0;
    if (sHandOverItem) {
        r = sHandOverItem->begin((u16 *)a, b, c, d, (Unk_020dc034_Owner_Base *)e, (Unk_020dc034_Owner_Base *)f);
    }
    return r;
}

extern "C" s32 HandOverItem_IsMaster(s32 a) {
    s32 r = 0;
    if (sHandOverItem) {
        r = sHandOverItem->isCharAt((void *)a, 0);
    }
    return r;
}

extern "C" s32 HandOverItem_RequestMode(u8 a, s32 b) {
    s32 r = 0;
    if (sHandOverItem) {
        r = sHandOverItem->requestModeBy(a, (void *)b);
    }
    return r;
}

extern "C" u8 HandOverItem_GetNextMode(void) {
    if (sHandOverItem) {
        return sHandOverItem->unk_58;
    }
    return 0xc;
}

extern "C" void HandOverItem_End(s32 a) {
    if (sHandOverItem) {
        if (HandOverItem_IsMaster(a) == 1) {
            if (sHandOverItem->unk_c4 != -1) {
                func_0204f3b4(sHandOverItem->unk_c4);
            }
            sHandOverItem->resetState();
        }
    }
}

extern "C" BOOL HandOverItem_CanTake(Unk_02057328_Obj *p) {
    BOOL r = FALSE;
    if (p) {
        HandOverItem *g = sHandOverItem;
        if (g) {
            if (func_020e9650(&p->unk_5c, &g->unk_60) <= g->unk_bc) {
                r = TRUE;
            } else if (g->isAwaitingTake()) {
                if (sHandOverItem->unk_d5 == 0) {
                    r = TRUE;
                }
            }
        }
    }
    return r;
}

extern "C" BOOL HandOverItem_GetPos(Unk_020dc034_V *out) {
    BOOL r = FALSE;
    HandOverItem *g = sHandOverItem;
    if (g) {
        Unk_020dc034_V *pv = &g->unk_60;
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
        r = TRUE;
    }
    return r;
}

extern "C" s32 HandOverItem_SwitchMaster(s32 a) {
    s32 r = 0;
    if (sHandOverItem) {
        r = sHandOverItem->switchMaster((void *)a);
    }
    return r;
}

extern "C" BOOL HandOverItem_IsModeActive(u32 a) {
    BOOL r = FALSE;
    HandOverItem *g = sHandOverItem;
    if (g) {
        if ((g->unk_c8 == a && g->unk_d9 == 1) || g->unk_da == a) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL HandOverItem_IsActive(void) {
    BOOL r = FALSE;
    if (sHandOverItem) {
        if (sHandOverItem->unk_c8 != 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void HandOverItem_GetItem(u16 *out) {
    *out = 0xfff1;
    if (sHandOverItem) {
        *out = sHandOverItem->unk_50;
    }
}

// ======== FUNCTIONS ========

extern "C" s32 HandOverItem_SetNextMode(u8 a, s32 b) {
    s32 r = 0;
    if (sHandOverItem) {
        r = sHandOverItem->setNextModeBy(a, (void *)b);
    }
    return r;
}

Unk_020dbeb4_Entry sHandOverItemProfile = { (void *)HandOverItem_Create, 0xd1, 0xcd };
Unk_02059384_Rec *sFishHoldOffsetSets[6] = { (Unk_02059384_Rec *)data_020caab4, (Unk_02059384_Rec *)data_020ca6f4, (Unk_02059384_Rec *)data_020ca7b4, (Unk_02059384_Rec *)data_020ca874, (Unk_02059384_Rec *)data_020ca934, (Unk_02059384_Rec *)data_020ca9f4 };

const u8 sHandOverTakeTimeout[4] = { 0x28, 0x0, 0x0, 0x0 };
const u8 data_020ca67c[4] = { 0xa, 0x16, 0x0, 0x0 };
const u8 data_020ca680[4] = { 0xb, 0x11, 0x15, 0x0 };
const u8 data_020ca684[4] = { 0x6, 0x9, 0x15, 0x0 };
const u8 data_020ca690[4] = { 0xb, 0x14, 0x16, 0x18 };
const s32 sHandOverReachFar = 0x4000;
const s32 sHandOverReach = 0x1500;
const Unk_020dc034_V sHoldOffsetDefault = { 0x0, -0x600, 0x0 };
const Unk_020dc034_V data_020ca6a0 = { 0x0, -0x1000, 0x0 };
const Unk_020dc034_V data_020ca6ac = { 0x0, -0x1000, 0x200 };
const Unk_020dc034_V data_020ca6b8 = { 0x0, -0x900, 0x300 };
const s32 data_020ca6c4[4] = { 0x0, 0x1100, 0xf80, 0x1000 };
const u32 sHandOverFishScale[8] = { 0x1666, 0x14cd, 0x1333, 0x10cd, 0x1000, 0x1000, 0x1000, 0xe66 };
const s32 data_020ca6f4[0x30] = {
    0x0, 0xb00, 0x200, 0x0, 0xb00, 0x0,
    0x0, 0xa00, 0x200, 0x0, 0xa00, 0x0,
    0x0, 0x900, 0x200, 0x0, 0x900, 0x0,
    0x0, 0x800, 0x200, 0x0, 0x800, 0x0,
    0x0, 0x700, 0x200, 0x0, 0x700, 0x0,
    0x0, 0x700, 0x200, 0x0, 0x700, 0x0,
    0x0, 0x600, 0x400, 0x0, 0x600, 0x0,
    0x0, 0x700, 0x200, 0x0, 0x700, 0x0
};
const s32 data_020ca7b4[0x30] = {
    0x0, -0x200, 0x300, 0x0, -0x200, 0x0,
    0x0, -0x200, 0x400, 0x0, -0x200, 0x0,
    0x0, -0x300, 0x400, 0x0, -0x300, 0x0,
    0xa00, 0x400, 0x300, 0x0, 0x400, 0x0,
    0xa00, 0x400, 0x300, 0x0, 0x400, 0x0,
    0xa00, 0x400, 0x300, 0x0, 0x400, 0x0,
    0xa00, 0x200, 0x400, 0x0, 0x200, 0x0,
    0x800, 0x200, 0x300, 0x0, 0x200, 0x0
};
const s32 data_020ca874[0x30] = {
    0x0, 0x500, 0x0, 0x0, 0x500, -0x500,
    0x0, 0x400, 0x0, 0x0, 0x400, -0x500,
    0x0, 0x300, 0x100, 0x0, 0x300, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x200, 0x0, 0x200, -0x500,
    0x0, 0x200, 0x100, 0x0, 0x200, -0x500
};
const s32 data_020ca934[0x30] = {
    0x0, 0x800, 0x0, 0x0, 0x800, -0x500,
    0x0, 0x700, 0x100, 0x0, 0x700, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x200, 0x0, 0x600, -0x500,
    0x0, 0x600, 0x100, 0x0, 0x600, -0x500
};
const s32 data_020ca9f4[0x30] = {
    0x0, 0x100, 0x0, 0x0, 0x100, -0x500,
    0x0, 0x100, 0x0, 0x0, 0x100, -0x500,
    0x0, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x100, 0x0, 0x100, -0x500,
    0x700, 0x100, 0x200, 0x0, 0x100, -0x500,
    0x800, 0x100, 0x100, 0x0, 0x100, -0x500
};
const s32 data_020caab4[0x30] = {
    0x0, 0x500, 0x0, 0x0, 0x500, -0x500,
    0x0, 0x400, 0x0, 0x0, 0x400, -0x500,
    0x0, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x100, 0x0, 0x300, -0x500,
    -0x600, 0x300, 0x200, 0x0, 0x300, -0x500,
    -0x800, 0x300, 0x100, 0x0, 0x300, -0x500
};
