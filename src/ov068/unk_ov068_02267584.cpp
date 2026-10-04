// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "actor/Actor.h"
#include "field/Snowball.h"

#define GroundInfoBase_getHeight _ZN14GroundInfoBase9getHeightEi
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP7VecFx32ii
#define SnowmanRecords_add _ZN14SnowmanRecords3addEjjj

struct Unk_ov068_022678c4_Ent {
    u32 a, b, c, d;
};

extern "C" {
void *PlayerData_GetCurrent();
void TalkRequest_SetTargetDone(void *p);
BOOL TalkRequest_AddPlayerTalk6(void *p, s32 a);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_0201bc28(void *p, void *q);
void func_0201bda8(void *p, u16 *q);
u32 NookShop_GetLevel(void *p);
u32 Math_CountDownU8(void *p);
void ProcBase_RequestDelete(void *p);
void Bgm_ReleasePriority(u32 a);
void Bgm_Release(u32 a);
void Bgm_RequestSilence(u32 a, u32 b, u32 c);
void Camera_SetModeDefault();
BOOL PlayerActor_IsScriptedWalking(s32 a);
void *PlayerActor_GetBodyPos(s32 a);
void PlayerActor_RequestWalkTo(void *v, u32 a, u32 b);
void PlayerActor_SetNoFaceTalkTarget(s32 a, s32 b);
void GameStart_Clear();
BOOL GameStart_IsNewResident();
BOOL GameStart_IsNewTown();
void func_02097ff4(void *p, s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void Snowball_ClearItemAt(void *p);
s32 Snowball_ChangeState(void *o, s32 st);
extern u16 data_020c6cc8;
extern u32 data_021ed104;
extern u32 gVec3Zero[];
extern const char *sNookModelPaths[];
extern const char *sNookTexPaths[];
extern u8 *gSceneBlockMap;
extern s16 data_02135f44[];
void *Snowball_FindOtherInBallState(void *self);
u8 *LooseSnowballs_Get();
void FieldPos_SnapToUnitCenter(void *, void *);
void Snd_SeEmitterPlayOneShot(void *, s32, s32, s32);
void FieldPos_ToUnit(s32 *, s32 *, void *);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
u16 Item_MakeSnowman(u32);
void BlockMap_SetItemAtUnit(void *m, u16 *v, s32 x, s32 y, s32 z);
void Snowball_DropDisplacedItem(void *);
s32 Snowball_Break(void *o, s32 a);
void GroundInfo_initAtPos(void *, void *, s32, s32);
s32 GroundInfo_Destruct(void *o);
void Vec_Sub(void *, void *, void *);
void Vec_SafeNormalize(void *);
void Vec_Scale(void *, s32);
s32 Vec_DistXZ(void *, void *);
void Math_ApproachS32Max(void *, s32, s32, s32);
s32 Vec_MagXZ(void *);
Actor *PlayerActor_GetActor(s32);
extern s32 data_020c7c1c;
void Vec_Add(VecFx32 *out, void *a, void *b);
void Effect_Create(s32 a, void *v, s32 b, void *h);
void FieldFish_ScareAround(void *a, s32 b);
void *func_0209c0ac(void *);
void NNS_G3dMdlSetMdlAlpha(void *, s32, s32);
s32 Math_AngleXZ(void *, void *);
s32 Random_GlobalBelow(s32);
s32 func_02133150(s32 a, s32 b);
void Insect_GetDirVec(void *v, s32 a);
s32 Field_IsRafflesiaNear(void *a, void *b);
s32 Field_FindFlowerNear(void *a, void *b, s32 c);
s32 Insect_GetFlowerSpeciesMask(s32 a);
s32 Insect_LikesFlower(s32 a, void *b);
s32 Flower_GetSpecies(void *cell);
s32 Vec_Distance(void *a, void *b);
s32 Math_Atan2(s32 x, s32 z);
s32 Math_AngleDiffAbs(s32 a, s32 b);
BOOL Item_IsMarker(u16 *p);
s32 Ground_GetDigKind(s32 x, s32 y);
s32 SnowmanRecords_add(void *tbl, s32 a, s32 b, s32 c);
void Snowman_SendPrizeLetter();
s32 GroundInfoBase_getHeight(void *o, s32 f);
u16 *BlockMap_GetItemPtrAtPos(void *grid, void *pos, u32 z);
extern u8 data_021ed2e6[];
s32 Snowball_GetSizeRatioRank(s32 v);
}



#define FX32_CONST(x) ((s32)((x) > 0 ? (x) * 4096.0f + 0.5f : (x) * 4096.0f - 0.5f))

static inline BOOL Snowball_IsHoleItem(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0xfc && *p <= 0xfd) {
        r = TRUE;
    }
    return r;
}

void Snowball::applySnowballMotion() {
    if ((collisionState.prevFlags & 1) != 0) {
        velocity.y = 0;
    } else {
        velocity.y = velocity.y + 0x6d;
        if (velocity.y > 0x200) {
            velocity.y = 0x200;
        }
    }
    position.y = position.y - velocity.y;
    if (snowballFlags.e == 0 && snowballFlags.i == 0) {
        position.x = position.x + rollVelX;
        position.z = position.z + rollVelZ;
    }
}

extern "C" s32 Snowball_GetSizeRatioRank(s32 v) {
    if (v < 0x99a) {
        return 3;
    }
    if (v < 0xb33) {
        return 2;
    }
    if (v < 0xccd) {
        return 1;
    }
    if (v < 0xe66) {
        return 0;
    }
    if (v < 0x1000) {
        return 1;
    }
    if (v < 0x119a) {
        return 2;
    }
    return 3;
}

void Snowball::spawnSnowballBreak() {
    VecFx32 v;
    u16 h;
    Vec_Add(&v, &position, &drawOffset);
    v.y = v.y + (radius - 0x400);
    h = FX_Div(radius, 0x1000);
    Effect_Create(0x3e, &v, 0, &h);
    Snd_SeEmitterPlayOneShot(seEmitter, 0x81f, 0x7f, 0);
}

void Snowball::spawnSnowballSplash() {
    VecFx32 v;
    u16 h;
    v.x = position.x;
    v.y = position.y;
    v.z = position.z;
    v.y = data_020c7c1c + 0x100;
    h = FX_Div(radius, 0x1000);
    Effect_Create(0x3f, &v, 0, &h);
    Snd_SeEmitterPlayOneShot(seEmitter, 0x821, 0x7f, 0);
    FieldFish_ScareAround(&position, 0x5000);
}

BOOL Snowball::enterSnowballRoll() {
    snowballFlagBits |= 0x10;
    snowballFlagBits &= ~0x20;
    return TRUE;
}

void Snowball::execSnowballRoll() {
    u8 *grid = gSceneBlockMap;
    s32 sx, sy;
    u16 cell;
    u32 objA[16];
    u32 objB[16];
    u32 objC[4];
    s32 d, t;
    collisionRadius = radius;
    s32 a = rollVelZ;
    s32 sum = func_01ffcb0c(rollVelX, rollVelX) + func_01ffcb0c(a, a);
    if (talkAct == 0 && snowballState == 0 && sum > 0 && radius >= 0xa00 && snowballFlags.e != 0) {
        u8 *o = (u8 *)Snowball_FindOtherInBallState(this);
        if (o != 0 && *(s32 *)(o + 0x268) >= 0xa00) {
            d = Vec_Distance(&position, o + 0x5c);
            t = FX_Div(0, 0x64000) + 0x400;
            FieldPos_ToUnit(&sx, &sy, o + 0x5c);
            cell = 0xfff1;
            if (grid != 0) {
                u32 x = sx;
                u32 y = sy;
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *c = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (c != 0) {
                    cell = *c;
                }
            }
            if (Item_IsMarker(&cell) == 0 && o != 0 && d < t + (radius + *(s32 *)(o + 0x268)) &&
                *(s32 *)(o + 0x39c) == 0 && *(s32 *)(o + 0x398) == 0) {
                s32 r = Ground_GetDigKind(sx, sy);
                switch (r) {
                case 0:
                case 1:
                    s32 lv;
                    lv = Snowball_GetSizeRatioRank(FX_Div(radius, *(s32 *)(o + 0x268)));
                    s32 res = SnowmanRecords_add(data_021ed2e6, radius, *(s32 *)(o + 0x268), lv);
                    if (res != -1) {
                        SnowballFlags &of = *(SnowballFlags *)(o + 0x374);
                        of.a = res;
                        snowballFlags.a = of.a;
                        of.b = lv;
                        snowballFlags.b = of.b;
                        of.g = 1;
                        snowballFlags.g = of.g;
                        Snowball_ChangeState(this, 8);
                        Snowball_ChangeState(o, 7);
                        if (lv == 0) {
                            Snowman_SendPrizeLetter();
                        }
                        return;
                    }
                }
            }
        }
    }
    applySnowballMotion();
    GroundInfo_initAtPos(objA, &position, 0, 0);
    if (GroundInfoBase_getHeight(objA, 0) < 0) {
        Snowball_ChangeState(this, 1);
        GroundInfo_Destruct(objA);
        return;
    }
    GroundInfo_initAtPos(objB, &position, 1, 0);
    if (objB[12] == 1) {
        switch (objB[13]) {
        case 0x16:
        case 0x17:
            Snowball_ChangeState(this, 5);
            GroundInfo_Destruct(objB);
            GroundInfo_Destruct(objA);
            return;
        }
    }
    GroundInfo_Destruct(objB);
    if (grid != 0) {
        FieldPos_SnapToUnitCenter(objC, &position);
        u16 *c = BlockMap_GetItemPtrAtPos(grid, &position, 0);
        if (c != 0 && Snowball_IsHoleItem(c) != 0) {
            if (Vec_DistXZ(objC, &position) < 0x1000) {
                u8 *o = (u8 *)Snowball_FindOtherInBallState(this);
                if (o != 0 && *(s32 *)(o + 0x39c) == 0 && *(s32 *)(o + 0x398) == 4) {
                    if (Vec_DistXZ(o + 0x5c, &position) > *(s32 *)(o + 0x268) + radius) {
                        if (Snowball_ChangeState(this, 4) != 0) {
                            GroundInfo_Destruct(objA);
                            return;
                        }
                    }
                } else {
                    if (Snowball_ChangeState(this, 4) != 0) {
                        GroundInfo_Destruct(objA);
                        return;
                    }
                }
            }
        }
    }
    moveVelX = rollVelX;
    moveVelZ = position.z - prevPosition.z;
    if (talkAct == 0 && snowballState == 0 && snowballFlags.e == 0) {
        s32 v36c = moveVelZ;
        u32 n;
        s32 ang;
        u32 i;
        s32 m = func_01ffcb0c(moveVelX, moveVelX) + func_01ffcb0c(v36c, v36c);
        if (m >= FX_Div(0x12c000, 0x2710000)) {
            n = collisionState.contacts.numContacts;
            if (n != 0) {
                ang = Math_Atan2(moveVelX, moveVelZ);
                for (i = 0; i < n; i++) {
                    if (Math_AngleDiffAbs((s16)(collisionState.contacts.angles[i] + 0x8000), ang) < 0x1000) {
                        if (Snowball_Break(this, 1) != 0) {
                            GroundInfo_Destruct(objA);
                            return;
                        }
                    }
                }
            }
        }
    }
    GroundInfo_Destruct(objA);
}

s32 Snowball::enterSnowballFall() {
    snowballFlags.c = 1;
    snowballFlags.d = 0;
    collisionRadius = 0;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    position.y = 0;
    velocity.y = 0;
    rollVelX = func_01ffcb0c(rollVelX, 0x119a);
    rollVelZ = func_01ffcb0c(rollVelZ, 0x119a);
    fallFrames = 0;
    VecFx32Ctor v(rollVelX, 0, rollVelZ);
    s32 d = Vec_MagXZ(&v);
    if (d < 0x2b8) {
        if (d == 0) {
            Actor *r = PlayerActor_GetActor(4);
            if (r) {
                s32 a = ((u16)r->rotY >> 4) * 2;
                rollVelX = func_01ffcb0c(0x2b8, data_02135f44[a]);
                rollVelZ = func_01ffcb0c(0x2b8, data_02135f44[a + 1]);
                position.x = prevPosition.x + rollVelX;
                position.z = prevPosition.z + rollVelZ;
            }
        } else {
            s32 r = FX_Div(0x2b8, d);
            rollVelX = func_01ffcb0c(rollVelX, r);
            rollVelZ = func_01ffcb0c(rollVelZ, r);
        }
    }
    return 1;
}

void Snowball::execSnowballFall() {
    u32 buf[17];
    s32 lim;
    s32 t = radius;
    t = t + (t >> 1);
    Math_ApproachS32Max(&collisionRadius, t, 0xcc, t);
    position.x += rollVelX;
    position.z += rollVelZ;
    if (fallFrames < 0xc) {
        velocity.y = velocity.y + 1;
        position.y -= 0x100;
        fallFrames = fallFrames + 1;
    } else {
        velocity.y = velocity.y + (FX_Div(0, 0x2710000) + 0xe9);
        position.y = position.y - velocity.y;
    }
    if (collisionState.flags & 2) {
        GroundInfo_initAtPos(buf, &position, 0, 0);
        lim = (s32)buf[15] - radius - 0x200;
        if (position.y < lim) {
            spawnSnowballSplash();
            position.y = lim;
            Snowball_ChangeState(this, 2);
        }
        GroundInfo_Destruct(buf);
    }
}

s32 Snowball::enterSnowballSink() {
    snowballFlags.c = 1;
    snowballFlags.d = 0;
    wobblePhase = 0;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    u32 *g = gVec3Zero;
    drawOffset.x = g[0];
    drawOffset.y = g[1];
    drawOffset.z = g[2];
    velocity.y = 0;
    return 1;
}

void Snowball::execSnowballSink() {
    u32 buf[16];
    s32 t = radius;
    t = t + (t >> 1);
    Math_ApproachS32Max(&collisionRadius, t, 0x200, t);
    GroundInfo_initAtPos(buf, &position, 0, 0);
    s32 *p = (s32 *)&buf[9];
    position.x += p[0] >> 5;
    position.z += p[2] >> 5;
    radius = func_01ffcb0c(radius, 0xfd7);
    drawOffset.y = func_01ffcb0c(0x100, data_02135f44[((u16)wobblePhase >> 4) * 2]);
    wobblePhase = (s16)wobblePhase + 0x400;
    if (radius < 0x80) {
        radius = 0;
        ProcBase_RequestDelete(this);
    }
    applySnowballMotion();
    position.y = (s32)buf[15] - radius - 0x200;
    GroundInfo_Destruct(buf);
}

s32 Snowball::enterSnowballBreak() {
    snowballFlags.c = 1;
    snowballFlags.d = 0;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    spawnSnowballBreak();
    return 1;
}

void Snowball::execSnowballBreak() {
    collisionRadius = radius;
    ProcBase_RequestDelete(this);
}

s32 Snowball::enterSnowballHole() {
    snowballFlags.c = 0;
    snowballFlags.d = 1;
    FieldPos_SnapToUnitCenter(&holePos, &position);
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    return 1;
}

void Snowball::execSnowballHole() {
    collisionRadius = radius;
    s32 v[3];
    Vec_Sub(v, &holePos, &position);
    Vec_SafeNormalize(v);
    Vec_Scale(v, 0x80);
    position.x += v[0];
    position.z += v[2];
    applySnowballMotion();
    s32 d = Vec_DistXZ(&position, &holePos);
    s32 lim = 0;
    if (d < 0x1000) {
        lim = -((0x1000 - d) / 5);
    }
    if (position.y < lim) {
        position.y = lim;
        if (d < 0x333) {
            Snowball_Break(this, 1);
        }
    }
}

s32 Snowball::enterSnowball05() {
    snowballFlags.c = 0;
    snowballFlags.d = 1;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    targetPos.x = position.x;
    targetPos.y = position.y;
    targetPos.z = position.z;
    return 1;
}

void Snowball::execSnowball05() {
    rollVelZ += FX_Div(0, 0x3e8000) + 0x158;
    position.x += rollVelX;
    position.z += rollVelZ;
    s32 d = position.z - targetPos.z;
    if (d < 0) {
        d = -d;
    }
    position.y = -func_01ffcb0c(d, 0x3d7);
    static s32 thr = FX_Div(0, 0x64000) + 0x3000;
    if (d >= thr) {
        Snowball_ChangeState(this, 6);
    }
}

s32 Snowball::enterSnowballSplash() {
    snowballFlags.c = 0;
    snowballFlags.d = 1;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    wobblePhase = 0;
    rollVelZ >>= 1;
    spawnSnowballSplash();
    return 1;
}

void Snowball::execSnowballSplash() {
    u32 buf[16];
    GroundInfo_initAtPos(buf, &position, 0, 0);
    s32 *p = (s32 *)&buf[9];
    position.x += p[0] >> 5;
    position.z += p[2] >> 5;
    radius = func_01ffcb0c(radius, 0xf85);
    drawOffset.y = func_01ffcb0c(0x100, data_02135f44[((u16)wobblePhase >> 4) * 2]);
    wobblePhase = (s16)wobblePhase + 0x400;
    if (radius < 0x100) {
        radius = 0;
        ProcBase_RequestDelete(this);
    }
    s32 lim = (s32)buf[15] - radius - 0x200;
    position.y -= 0x400;
    if (position.y < lim) {
        position.y = lim;
    }
    GroundInfo_Destruct(buf);
}

s32 Snowball::enterSnowballToSnowman() {
    snowballFlags.c = 0;
    snowballFlags.d = 1;
    FieldPos_SnapToUnitCenter(&targetPos, &position);
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    stepX = FX_Div(targetPos.x - position.x, 0x10000);
    stepZ = FX_Div(targetPos.z - position.z, 0x10000);
    stepCount = 0;
    return 1;
}

void Snowball::execSnowballToSnowman() {
    collisionRadius = radius;
    position.x += stepX;
    position.y = 0;
    position.z += stepZ;
    if (stepCount++ >= 0x10) {
        position.x = targetPos.x;
        position.y = targetPos.y;
        position.z = targetPos.z;
        void *g = gSceneBlockMap;
        if (g) {
            s32 x, y;
            FieldPos_ToUnit(&x, &y, &position);
            s32 tx = *(volatile s32 *)&x;
            s32 ty = *(volatile s32 *)&y;
            s32 hx = tx >> 4;
            s32 hy = ty >> 4;
            u16 *c = (u16 *)BlockMap_GetItemPtr(g, hx, hy, tx - (hx << 4), ty - (hy << 4), 0);
            if (c) {
                displacedItem = *c;
            }
            u16 v = Item_MakeSnowman(snowballFlags.a);
            BlockMap_SetItemAtUnit(g, &v, x, y, 0);
        }
        Snowball_DropDisplacedItem(&displacedItem);
        Snowball_ChangeState(this, 9);
    }
}

s32 Snowball::enterSnowballStack() {
    snowballFlags.c = 0;
    snowballFlags.d = 1;
    Snowball *o = (Snowball *)Snowball_FindOtherInBallState(this);
    FieldPos_SnapToUnitCenter(&targetPos, (u8 *)o + 0x5c);
    targetPos.y += ((o->radius * 2 - (o->radius >> 3)) - (radius >> 3)) - 0x400;
    velocity.y = -(FX_Div(0, 0x3e8000) + 0x8f2);
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    stepX = FX_Div(targetPos.x - position.x, 0x10000);
    stepZ = FX_Div(targetPos.z - position.z, 0x10000);
    stepCount = 0;
    Snd_SeEmitterPlayOneShot(seEmitter, 0x81e, 0x7f, 0);
    return 1;
}

void Snowball::execSnowballStack() {
    collisionRadius = radius;
    position.x += stepX;
    position.z += stepZ;
    velocity.y += FX_Div(0, 0x2710000) + 0xdf;
    position.y -= velocity.y;
    if (velocity.y >= 0) {
        s32 t = targetPos.y - 0x200;
        if (position.y < t) {
            position.y = t;
            Snowball_ChangeState(this, 0xa);
        }
    }
    if (stepCount++ >= 0x10) {
        position.x = targetPos.x;
        position.z = targetPos.z;
    }
}

BOOL Snowball::enterSnowballSettle() {
    snowballFlagBits &= ~0x10;
    snowballFlagBits |= 0x20;
    wobblePhase = 0;
    velocity.y = FX_Div(targetPos.y - position.y, 0x1333);
    return TRUE;
}

void Snowball::execSnowballSettle() {
    collisionRadius = radius;
    position.x += stepX;
    position.z += stepZ;
    position.y += velocity.y;
    if (position.y > targetPos.y) {
        position.y = targetPos.y;
    }
    if (stepCount++ >= 0x10) {
        position.y = targetPos.y;
        Snowball_ChangeState(this, 0xb);
    }
}

BOOL Snowball::enterSnowballCrumble() {
    snowballFlagBits &= ~0x10;
    snowballFlagBits |= 0x20;
    Snowball_ClearItemAt(&position);
    drawOffset.x = gVec3Zero[0];
    drawOffset.y = gVec3Zero[1];
    drawOffset.z = gVec3Zero[2];
    wobblePhase = 0;
    crumbleTimer = 0xc;
    return TRUE;
}

void Snowball::execSnowballCrumble() {
    s32 a;
    collisionRadius = radius;
    a = data_02135f44[((u16)wobblePhase >> 4) * 2 + 1];
    drawOffset.x = -func_01ffcb0c(0x100, a);
    drawOffset.z = func_01ffcb0c(0x100, a);
    wobblePhase = wobblePhase + 0x3800;
    if (crumbleTimer != 0) {
        crumbleTimer--;
    }
    if (crumbleTimer == 0) {
        spawnSnowballBreak();
        ProcBase_RequestDelete(this);
    }
}

BOOL Snowball::enterSnowballCrumble2() {
    snowballFlagBits &= ~0x10;
    snowballFlagBits |= 0x20;
    drawOffset.x = gVec3Zero[0];
    drawOffset.y = gVec3Zero[1];
    drawOffset.z = gVec3Zero[2];
    wobblePhase = 0;
    crumbleTimer = 0xc;
    return TRUE;
}

void Snowball::execSnowballCrumble2() {
    s32 a;
    collisionRadius = radius;
    a = data_02135f44[((u16)wobblePhase >> 4) * 2 + 1];
    drawOffset.x = func_01ffcb0c(0x100, a);
    drawOffset.z = -func_01ffcb0c(0x100, a);
    wobblePhase = wobblePhase + 0x5000;
    if (crumbleTimer != 0) {
        crumbleTimer--;
    }
    if (crumbleTimer == 0) {
        spawnSnowballBreak();
        ProcBase_RequestDelete(this);
    }
}

