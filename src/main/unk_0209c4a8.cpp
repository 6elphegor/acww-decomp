#include "types.h"
#include "net/CommManager.h"
#include "room/Unk_0209c41c_Actor.h"

struct Unk_0209c82c_V {
    s32 x, y, z;
};
typedef Unk_0209c82c_V Unk_0209c614_Vec;


struct Unk_0209c7a4_T {
    u8 scene, unk_01, unk_02, unk_03;
};

// 0x24-byte state object at sRoomEntryRequest
class RoomEntryRequest {
public:
    RoomEntryRequest();
    ~RoomEntryRequest();

    /* 0x00 */ u8 scene;
    /* 0x04 */ Unk_0209c82c_V pos;
    /* 0x10 */ Unk_0209c82c_V retreatPos;
    /* 0x1c */ u16 angle;
    /* 0x1e */ u8 exitId;
    /* 0x1f */ u8 result;
    /* 0x20 */ u8 doorKind;
};

// one-byte bit set (4 bits), no constructor (also used as a stack copy)
struct Unk_0209c980_Raw {
    u8 occupantBits;
};

class SceneOccupants : public Unk_0209c980_Raw {
public:
    SceneOccupants();
    ~SceneOccupants();
};

extern "C" CommManager *gCommManager;

class Unk_0209c614_Actor {
public:
    u8 pad_00[0x5c];
    Unk_0209c614_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
};

extern "C" {
extern u8 gFieldSceneKind;
extern const u8 sExclusiveRoomScenes[4];
extern u8 gVec3Zero[];

void SceneExit_GetDoor(void *o, u32 id, u32 *p24, s16 *f);
void SceneExit_SnapPos(void *o, u32 id, Unk_0209c614_Vec *v34, Unk_0209c614_Vec *v40);
void FieldPos_SnapToUnitCenter(Unk_0209c614_Vec *a, Unk_0209c614_Vec *b);
void *Scene_GetWarpRequest();
s32 SceneExit_Resolve(void *o, u32 id, u8 *a, Unk_0209c614_Vec *v, u32 *p20, u16 *e, u8 *c, u8 *b, s32 z0, s32 z1);
s32 Scene_GetCurrent();
s32 Scene_GetPrevious();
Unk_0209c614_Actor *PlayerActor_GetActor(u32 n);

u32 RoomEntry_IsExclusiveScene(u32 v);
void RoomEntryRequest_SetRetreatPos(RoomEntryRequest *t, Unk_0209c82c_V *v);
void RoomEntryRequest_SetAngle(RoomEntryRequest *t, u32 v);
void RoomEntryRequest_SetPos(RoomEntryRequest *t, Unk_0209c82c_V *v);
void RoomEntryRequest_SetScene(RoomEntryRequest *t, u32 v);
void RoomEntryRequest_SetDoorKind(RoomEntryRequest *t, u32 v);
void RoomEntryRequest_SetExitId(RoomEntryRequest *t, u32 v);
void RoomEntryRequest_SetResult(RoomEntryRequest *t, u32 v);
void RoomEntryRequest_Init(RoomEntryRequest *t);
s32 SceneOccupantTable_CountWith(Unk_0209c980_Raw *t, u32 i, u32 b);
void SceneOccupantTable_Remove(Unk_0209c980_Raw *t, u32 i, u32 b);
void SceneOccupantTable_Add(Unk_0209c980_Raw *t, u32 i, u32 b);
void SceneOccupantTable_Clear(Unk_0209c980_Raw *t);
s32 SceneOccupants_CountWith(Unk_0209c980_Raw *t, u32 b);
s32 SceneOccupants_Count(Unk_0209c980_Raw *t);
u32 SceneOccupants_Has(Unk_0209c980_Raw *t, u32 i);
void SceneOccupants_Remove(Unk_0209c980_Raw *t, u32 i);
void SceneOccupants_Add(Unk_0209c980_Raw *t, u32 i);
void SceneOccupants_Clear(Unk_0209c980_Raw *t);
}

// the 0x33-entry array object at sSceneOccupantTable
class SceneOccupantTable {
public:
    SceneOccupantTable() { SceneOccupantTable_Clear(e); }
    ~SceneOccupantTable();

    SceneOccupants e[0x33];
};

// data (rodata)

extern const u8 sExclusiveRoomScenes[4];
const u8 sExclusiveRoomScenes[4] = {0x1f, 0x1d, 0x22, 0x20};

// data (bss), in the order __sinit constructs them

RoomEntryRequest sRoomEntryRequest;
SceneOccupantTable sSceneOccupantTable;

extern "C" void RoomEntry_Leave(u32 a, u32 b);

SceneOccupants::SceneOccupants() {
    SceneOccupants_Clear(this);
}

SceneOccupantTable::~SceneOccupantTable() {}

extern "C" void SceneOccupants_Clear(Unk_0209c980_Raw *t) {
    t->occupantBits = 0;
}

extern "C" void SceneOccupants_Add(Unk_0209c980_Raw *t, u32 i) {
    t->occupantBits |= 1 << (i & 3);
}

extern "C" void SceneOccupants_Remove(Unk_0209c980_Raw *t, u32 i) {
    t->occupantBits &= ~(1 << (i & 3));
}

extern "C" u32 SceneOccupants_Has(Unk_0209c980_Raw *t, u32 i) {
    return ((t->occupantBits >> (i & 3)) & 1) != 0 ? TRUE : FALSE;
}

extern "C" s32 SceneOccupants_Count(Unk_0209c980_Raw *t) {
    s32 n = 0;
    u32 i = n;
    for (; i < 4; i++) {
        if (SceneOccupants_Has(t, i)) {
            n++;
        }
    }
    return n;
}

SceneOccupants::~SceneOccupants() {}

extern "C" s32 SceneOccupants_CountWith(Unk_0209c980_Raw *t, u32 b) {
    Unk_0209c980_Raw c;
    c.occupantBits = t->occupantBits;
    SceneOccupants_Add(&c, b);
    return SceneOccupants_Count(&c);
}

extern "C" void SceneOccupantTable_Clear(Unk_0209c980_Raw *t) {
    u32 i;
    for (i = 0; i < 0x33; i++) {
        SceneOccupants_Clear(t + i);
    }
}

extern "C" void SceneOccupantTable_Add(Unk_0209c980_Raw *t, u32 i, u32 b) {
    if (i < 0x33) {
        SceneOccupants_Add(t + i, b);
    }
}

extern "C" void SceneOccupantTable_Remove(Unk_0209c980_Raw *t, u32 i, u32 b) {
    if (i < 0x33) {
        SceneOccupants_Remove(t + i, b);
    }
}

extern "C" s32 SceneOccupantTable_CountWith(Unk_0209c980_Raw *t, u32 i, u32 b) {
    if (i < 0x33) {
        return SceneOccupants_CountWith(t + i, b);
    }
    return 0;
}

RoomEntryRequest::RoomEntryRequest() {
    RoomEntryRequest_Init(this);
}

RoomEntryRequest::~RoomEntryRequest() {}

extern "C" void RoomEntryRequest_Init(RoomEntryRequest *t) {
    RoomEntryRequest_SetResult(t, 2);
    RoomEntryRequest_SetExitId(t, -1);
    RoomEntryRequest_SetDoorKind(t, 0);
    RoomEntryRequest_SetScene(t, 0);
    RoomEntryRequest_SetPos(t, (Unk_0209c82c_V *)gVec3Zero);
    RoomEntryRequest_SetAngle(t, 0);
    RoomEntryRequest_SetRetreatPos(t, (Unk_0209c82c_V *)gVec3Zero);
}

extern "C" u32 RoomEntryRequest_GetResult(RoomEntryRequest *t) {
    return t->result;
}

extern "C" u32 RoomEntryRequest_GetDoorKind(RoomEntryRequest *t) {
    return t->doorKind;
}

extern "C" void *RoomEntryRequest_GetPos(RoomEntryRequest *t) {
    return &t->pos;
}

extern "C" void *RoomEntryRequest_GetRetreatPos(RoomEntryRequest *t) {
    return &t->retreatPos;
}

extern "C" void RoomEntryRequest_SetResult(RoomEntryRequest *t, u32 v) {
    t->result = v;
}

extern "C" void RoomEntryRequest_SetExitId(RoomEntryRequest *t, u32 v) {
    t->exitId = v;
}

extern "C" void RoomEntryRequest_SetDoorKind(RoomEntryRequest *t, u32 v) {
    t->doorKind = v;
}

extern "C" void RoomEntryRequest_SetScene(RoomEntryRequest *t, u32 v) {
    t->scene = v;
}

extern "C" void RoomEntryRequest_SetPos(RoomEntryRequest *t, Unk_0209c82c_V *v) {
    t->pos.x = v->x;
    t->pos.y = v->y;
    t->pos.z = v->z;
}

extern "C" void RoomEntryRequest_SetAngle(RoomEntryRequest *t, u32 v) {
    t->angle = v;
}

extern "C" void RoomEntryRequest_SetRetreatPos(RoomEntryRequest *t, Unk_0209c82c_V *v) {
    t->retreatPos.x = v->x;
    t->retreatPos.y = v->y;
    t->retreatPos.z = v->z;
}

extern "C" void RoomEntry_Reset() {
    RoomEntryRequest_Init(&sRoomEntryRequest);
    SceneOccupantTable_Clear(sSceneOccupantTable.e);
}

extern "C" u32 RoomEntry_IsExclusiveScene(u32 v) {
    s32 i;
    for (i = 0; (u32)i < 2; i++) {
        if (v == sExclusiveRoomScenes[i * 2]) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 RoomEntry_IsExclusiveExit(void *p) {
    Unk_0209c7a4_T t;
    s32 b, a;
    u32 c[3];
    if (SceneExit_Resolve(Scene_GetWarpRequest(), (u32)p, (u8 *)&t, (Unk_0209c614_Vec *)c, (u32 *)&a, (u16 *)&b, &t.unk_02, &t.unk_01, 0, 0)) {
        return RoomEntry_IsExclusiveScene(t.scene);
    }
    return 0;
}

extern "C" BOOL RoomEntry_Request(u32 id) {
    Unk_0209c614_Actor *p = PlayerActor_GetActor(4);
    void *o = Scene_GetWarpRequest();
    Unk_0209c614_S s;
    u32 a20, a24;
    Unk_0209c614_Vec v28, v34, v40, v4c;
    s32 r = SceneExit_Resolve(o, id, &s.a, &v28, &a20, &s.e, &s.c, &s.b, 0, 0);
    RoomEntryRequest_SetResult(&sRoomEntryRequest, 0);
    if (r != 0 && p != 0) {
        Unk_0209c614_Vec *pv = &p->position;
        v40.x = pv->x;
        v40.y = pv->y;
        v40.z = pv->z;
        s32 h = p->rotY;
        SceneExit_GetDoor(Scene_GetWarpRequest(), id, &a24, &s.f);
        SceneExit_SnapPos(Scene_GetWarpRequest(), id, &v34, &v40);
        RoomEntryRequest_SetExitId(&sRoomEntryRequest, id);
        RoomEntryRequest_SetDoorKind(&sRoomEntryRequest, a24);
        RoomEntryRequest_SetScene(&sRoomEntryRequest, s.a);
        if (a24 != 0) {
            RoomEntryRequest_SetPos(&sRoomEntryRequest, &v34);
            RoomEntryRequest_SetAngle(&sRoomEntryRequest, s.f);
        } else {
            RoomEntryRequest_SetPos(&sRoomEntryRequest, &v40);
            RoomEntryRequest_SetAngle(&sRoomEntryRequest, h);
        }
        v4c.x = v40.x;
        v4c.y = v40.y;
        v4c.z = v40.z;
        v4c.z = v4c.z + 0x2000;
        FieldPos_SnapToUnitCenter(&v4c, &v4c);
        v4c.x = v40.x;
        RoomEntryRequest_SetRetreatPos(&sRoomEntryRequest, &v4c);
        if (RoomEntry_IsExclusiveScene(s.a)) {
            CommManager *g = gCommManager;
            if (!g->isOnline() || g->isMyAid(0) != 0) {
                if ((u32)SceneOccupantTable_CountWith(sSceneOccupantTable.e, s.a, 0) <= 1) {
                    SceneOccupantTable_Add(sSceneOccupantTable.e, s.a, 0);
                    RoomEntryRequest_SetResult(&sRoomEntryRequest, 2);
                } else {
                    RoomEntryRequest_SetResult(&sRoomEntryRequest, 1);
                }
            } else {
                s.d = s.a;
                g = gCommManager;
                g->beginRecord();
                g->writeRecord(&s.d, 1);
                g->endRecord(0x33, 0);
            }
        } else {
            RoomEntryRequest_SetResult(&sRoomEntryRequest, 2);
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void *RoomEntry_GetRequest() {
    return &sRoomEntryRequest;
}

extern "C" void RoomEntry_Leave(u32 a, u32 b) {
    CommManager *g = gCommManager;
    if (!g->isOnline() || g->isMyAid(0) != 0 || g->isMyAid(4) != 0) {
        SceneOccupantTable_Remove(sSceneOccupantTable.e, a, b);
    } else {
        u8 v = a;
        g = gCommManager;
        g->beginRecord();
        g->writeRecord(&v, 1);
        g->endRecord(0x35, 0);
    }
}

extern "C" void RoomEntry_OnSceneLoad() {
    RoomEntryRequest_Init(&sRoomEntryRequest);
    BOOL is1;
    if (gFieldSceneKind == 1) is1 = TRUE;
    else is1 = FALSE;
    if (is1) {
        u32 r6 = Scene_GetCurrent();
        u32 r5 = Scene_GetPrevious();
        u32 i = 0;
        u32 z = i;
        for (; i < 2; i++) {
            const u8 *e = &sExclusiveRoomScenes[i * 2];
            if (r6 == e[1] && r5 == e[0]) RoomEntry_Leave(r5, z);
        }
    }
}

extern "C" void RoomEntry_RecvEnterRequest(u8 *p, u32 x) {
    u32 b = *p;
    u8 flag;
    if ((u32)SceneOccupantTable_CountWith(sSceneOccupantTable.e, b, x) <= 1) {
        SceneOccupantTable_Add(sSceneOccupantTable.e, b, x);
        flag = 1;
    } else {
        flag = 0;
    }
    CommManager *g = gCommManager;
    g->beginRecord();
    g->writeRecord(&flag, 1);
    g->endRecord(0x34, x);
}

extern "C" void RoomEntry_RecvEnterReply(u8 *p) {
    if (*p) {
        RoomEntryRequest_SetResult(&sRoomEntryRequest, 2);
    } else {
        RoomEntryRequest_SetResult(&sRoomEntryRequest, 1);
    }
}

// code

extern "C" void RoomEntry_RecvLeave(u8 *p, u32 x) {
    SceneOccupantTable_Remove(sSceneOccupantTable.e, *p, x);
}

