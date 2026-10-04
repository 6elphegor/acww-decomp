// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_ov068_Vec.h"
#include "game/Unk_ov068_02268214_Flags.h"
#include "game/Unk_ov068_02268214.h"

#define GroundInfoBase_getHeight _ZN14GroundInfoBase9getHeightEi
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii
#define SnowmanRecords_add _ZN14SnowmanRecords3addEjjj

struct Unk_ov068_022678c4_Ent {
    u32 a, b, c, d;
};

struct Unk_ov068_022678c4_V {
    s32 x, y, z;
    Unk_ov068_022678c4_V(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov068_022678c4_Vv {
    s32 x, y, z;
};

struct Unk_ov068_022678c4_Src {
    u8 pad_00[0x268];
    s32 radius;
};

struct Unk_ov068_022678c4_Rec {
    u8 pad_00[0x8e];
    u16 rotY;
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
u32 func_020e7518(void *p);
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
void func_02003e70(void *, s32, s32, s32);
void FieldPos_ToUnit(s32 *, s32 *, void *);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
u16 Item_MakeSnowman(u32);
void BlockMap_SetItemAtUnit(void *m, u16 *v, s32 x, s32 y, s32 z);
void Snowball_DropDisplacedItem(void *);
s32 Snowball_Break(void *o, s32 a);
void GroundInfo_initAtPos(void *, void *, s32, s32);
s32 GroundInfo_Destruct(void *o);
void func_020e9960(void *, void *, void *);
void func_020e94f8(void *);
void func_020e9888(void *, s32);
s32 func_020e9650(void *, void *);
void func_020e7820(void *, s32, s32, s32);
s32 func_020e9688(void *);
Unk_ov068_022678c4_Rec *PlayerActor_GetActor(s32);
extern s32 data_020c7c1c;
void func_01ffd070(Unk_ov068_02268608_Vec *out, void *a, void *b);
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
s32 func_020e96a4(void *a, void *b);
s32 func_020e7b98(s32 x, s32 z);
s32 func_020e780c(s32 a, s32 b);
BOOL Item_IsMarker(u16 *p);
s32 Ground_GetDigKind(s32 x, s32 y);
s32 SnowmanRecords_add(void *tbl, s32 a, s32 b, s32 c);
void Snowman_SendPrizeLetter();
s32 GroundInfoBase_getHeight(void *o, s32 f);
u16 *BlockMap_GetItemPtrAtPos(void *grid, void *pos, u32 z);
extern u8 data_021ed2e6[];
s32 _ZN18Unk_ov068_0226821419spawnSnowballSplashEv(void *);
void _ZN18Unk_ov068_0226821418spawnSnowballBreakEv(void *);
void _ZN18Unk_ov068_0226821419applySnowballMotionEv(void *);
s32 Snowball_GetSizeRatioRank(s32 v);
}

class SnowballStateView1 {
public:
    void execSnowballCrumble2();
    BOOL enterSnowballCrumble2();
    void execSnowballCrumble();
    BOOL enterSnowballCrumble();
    void execSnowballSettle();
    BOOL enterSnowballSettle();
    void execSnowballStack();

    u8 pad_00[0x5c];
    s32 position;
    s32 positionY;
    s32 positionZ;
    u8 pad_68[0xa8 - 0x68];
    s32 velocityY;
    u8 pad_ac[0x268 - 0xac];
    s32 radius;
    s32 collisionRadius;
    u8 pad_270[0x304 - 0x270];
    s32 drawOffset;
    s32 drawOffsetY;
    s32 drawOffsetZ;
    s32 stepX;
    s32 stepZ;
    u8 pad_318[0x374 - 0x318];
    u16 snowballFlags;
    u16 pad_376;
    s32 targetPosX;
    s32 targetPosY;
    s32 targetPosZ;
    u8 pad_384[0x392 - 0x384];
    s16 wobblePhase;
    u8 crumbleTimer;
    u8 stepCount;
};

class SnowballStateView2 {
public:
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 param;
    /* 0x0c */ u8 pad_0c[0x50];
    /* 0x5c */ s32 position;
    /* 0x60 */ s32 positionY;
    /* 0x64 */ s32 positionZ;
    /* 0x68 */ s32 prevPosition;
    /* 0x6c */ u8 pad_6c[4];
    /* 0x70 */ s32 prevPositionZ;
    /* 0x74 */ u8 pad_74[0x34];
    /* 0xa8 */ s32 velocityY;
    /* 0xac */ u8 pad_ac[0x268 - 0xac];
    /* 0x268 */ s32 radius;
    /* 0x26c */ s32 collisionRadius;
    /* 0x270 */ s32 collisionState;
    /* 0x274 */ s32 collisionFlags;
    /* 0x278 */ u8 pad_278[0x2ec - 0x278];
    /* 0x2ec */ s32 rollVelX;
    /* 0x2f0 */ s32 rollVelZ;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u32 drawOffset;
    /* 0x308 */ s32 drawOffsetY;
    /* 0x30c */ u32 drawOffsetZ;
    /* 0x310 */ s32 stepX;
    /* 0x314 */ s32 stepZ;
    /* 0x318 */ u8 pad_318[0x324 - 0x318];
    /* 0x324 */ u8 seEmitter[0x364 - 0x324];
    /* 0x364 */ u8 fallFrames;
    /* 0x365 */ u8 pad_365[0x374 - 0x365];
    /* 0x374 */ u16 unk_374_lo : 2;
    u16 unk_374_b2 : 2;
    u16 unk_374_b4 : 1;
    u16 unk_374_b5 : 1;
    /* 0x376 */ u8 pad_376[2];
    /* 0x378 */ s32 targetPosX;
    /* 0x37c */ s32 targetPosY;
    /* 0x380 */ s32 targetPosZ;
    /* 0x384 */ s32 holePos[3];
    /* 0x390 */ u8 pad_390[2];
    /* 0x392 */ u16 wobblePhase;
    /* 0x394 */ u8 pad_394;
    /* 0x395 */ u8 stepCount;
    /* 0x396 */ u16 displacedItem;

    s32 enterSnowballStack();
    void execSnowballToSnowman();
    s32 enterSnowballToSnowman();
    void execSnowballSplash();
    s32 enterSnowballSplash();
    void execSnowball05();
    s32 enterSnowball05();
    void execSnowballHole();
    s32 enterSnowballHole();
    void execSnowballBreak();
    s32 enterSnowballBreak();
    void execSnowballSink();
    s32 enterSnowballSink();
    void execSnowballFall();
    s32 enterSnowballFall();
};

#define FX32_CONST(x) ((s32)((x) > 0 ? (x) * 4096.0f + 0.5f : (x) * 4096.0f - 0.5f))

static inline BOOL Unk_ov068_02268214_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0xfc && *p <= 0xfd) {
        r = TRUE;
    }
    return r;
}

void Unk_ov068_02268214::applySnowballMotion() {
    if ((collisionState & 1) != 0) {
        velocityY = 0;
    } else {
        velocityY = velocityY + 0x6d;
        if (velocityY > 0x200) {
            velocityY = 0x200;
        }
    }
    positionY = positionY - velocityY;
    if (fl_374.f6 == 0 && fl_374.f10 == 0) {
        position = position + rollVelX;
        positionZ = positionZ + rollVelZ;
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

void Unk_ov068_02268214::spawnSnowballBreak() {
    Unk_ov068_02268608_Vec v;
    u16 h;
    func_01ffd070(&v, &position, unk_304);
    v.y = v.y + (radius - 0x400);
    h = FX_Div(radius, 0x1000);
    Effect_Create(0x3e, &v, 0, &h);
    func_02003e70(seEmitter, 0x81f, 0x7f, 0);
}

void Unk_ov068_02268214::spawnSnowballSplash() {
    Unk_ov068_02268608_Vec v;
    u16 h;
    v.x = position;
    v.y = positionY;
    v.z = positionZ;
    v.y = data_020c7c1c + 0x100;
    h = FX_Div(radius, 0x1000);
    Effect_Create(0x3f, &v, 0, &h);
    func_02003e70(seEmitter, 0x821, 0x7f, 0);
    FieldFish_ScareAround(&position, 0x5000);
}

BOOL Unk_ov068_02268214::enterSnowballRoll() {
    snowballFlags |= 0x10;
    snowballFlags &= ~0x20;
    return TRUE;
}

void Unk_ov068_02268214::execSnowballRoll() {
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
    if (talkAct == 0 && snowballState == 0 && sum > 0 && radius >= 0xa00 && fl_374.f6 != 0) {
        u8 *o = (u8 *)Snowball_FindOtherInBallState(this);
        if (o != 0 && *(s32 *)(o + 0x268) >= 0xa00) {
            d = func_020e96a4(&position, o + 0x5c);
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
                        Unk_ov068_02268214_Flags &of = *(Unk_ov068_02268214_Flags *)(o + 0x374);
                        of.f0_1 = res;
                        fl_374.f0_1 = of.f0_1;
                        of.f2_3 = lv;
                        fl_374.f2_3 = of.f2_3;
                        of.f8 = 1;
                        fl_374.f8 = of.f8;
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
        if (c != 0 && Unk_ov068_02268214_InRange(c) != 0) {
            if (func_020e9650(objC, &position) < 0x1000) {
                u8 *o = (u8 *)Snowball_FindOtherInBallState(this);
                if (o != 0 && *(s32 *)(o + 0x39c) == 0 && *(s32 *)(o + 0x398) == 4) {
                    if (func_020e9650(o + 0x5c, &position) > *(s32 *)(o + 0x268) + radius) {
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
    unk_368 = rollVelX;
    unk_36c = positionZ - prevPositionZ;
    if (talkAct == 0 && snowballState == 0 && fl_374.f6 == 0) {
        s32 v36c = unk_36c;
        u32 n;
        s32 ang;
        u32 i;
        s32 m = func_01ffcb0c(unk_368, unk_368) + func_01ffcb0c(v36c, v36c);
        if (m >= FX_Div(0x12c000, 0x2710000)) {
            n = unk_280;
            if (n != 0) {
                ang = func_020e7b98(unk_368, unk_36c);
                for (i = 0; i < n; i++) {
                    if (func_020e780c((s16)(unk_27c[i] + 0x8000), ang) < 0x1000) {
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

s32 SnowballStateView2::enterSnowballFall() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    collisionRadius = 0;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    positionY = 0;
    velocityY = 0;
    rollVelX = func_01ffcb0c(rollVelX, 0x119a);
    rollVelZ = func_01ffcb0c(rollVelZ, 0x119a);
    fallFrames = 0;
    Unk_ov068_022678c4_V v(rollVelX, 0, rollVelZ);
    s32 d = func_020e9688(&v);
    if (d < 0x2b8) {
        if (d == 0) {
            Unk_ov068_022678c4_Rec *r = PlayerActor_GetActor(4);
            if (r) {
                s32 a = (r->rotY >> 4) * 2;
                rollVelX = func_01ffcb0c(0x2b8, data_02135f44[a]);
                rollVelZ = func_01ffcb0c(0x2b8, data_02135f44[a + 1]);
                position = prevPosition + rollVelX;
                positionZ = prevPositionZ + rollVelZ;
            }
        } else {
            s32 r = FX_Div(0x2b8, d);
            rollVelX = func_01ffcb0c(rollVelX, r);
            rollVelZ = func_01ffcb0c(rollVelZ, r);
        }
    }
    return 1;
}

void SnowballStateView2::execSnowballFall() {
    u32 buf[17];
    s32 lim;
    s32 t = radius;
    t = t + (t >> 1);
    func_020e7820(&collisionRadius, t, 0xcc, t);
    position += rollVelX;
    positionZ += rollVelZ;
    if (fallFrames < 0xc) {
        velocityY = velocityY + 1;
        positionY -= 0x100;
        fallFrames = fallFrames + 1;
    } else {
        velocityY = velocityY + (FX_Div(0, 0x2710000) + 0xe9);
        positionY = positionY - velocityY;
    }
    if (collisionFlags & 2) {
        GroundInfo_initAtPos(buf, &position, 0, 0);
        lim = (s32)buf[15] - radius - 0x200;
        if (positionY < lim) {
            _ZN18Unk_ov068_0226821419spawnSnowballSplashEv(this);
            positionY = lim;
            Snowball_ChangeState(this, 2);
        }
        GroundInfo_Destruct(buf);
    }
}

s32 SnowballStateView2::enterSnowballSink() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    wobblePhase = 0;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    u32 *g = gVec3Zero;
    drawOffset = g[0];
    drawOffsetY = g[1];
    drawOffsetZ = g[2];
    velocityY = 0;
    return 1;
}

void SnowballStateView2::execSnowballSink() {
    u32 buf[16];
    s32 t = radius;
    t = t + (t >> 1);
    func_020e7820(&collisionRadius, t, 0x200, t);
    GroundInfo_initAtPos(buf, &position, 0, 0);
    s32 *p = (s32 *)&buf[9];
    position += p[0] >> 5;
    positionZ += p[2] >> 5;
    radius = func_01ffcb0c(radius, 0xfd7);
    drawOffsetY = func_01ffcb0c(0x100, data_02135f44[(wobblePhase >> 4) * 2]);
    wobblePhase = (s16)wobblePhase + 0x400;
    if (radius < 0x80) {
        radius = 0;
        ProcBase_RequestDelete(this);
    }
    _ZN18Unk_ov068_0226821419applySnowballMotionEv(this);
    positionY = (s32)buf[15] - radius - 0x200;
    GroundInfo_Destruct(buf);
}

s32 SnowballStateView2::enterSnowballBreak() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    _ZN18Unk_ov068_0226821418spawnSnowballBreakEv(this);
    return 1;
}

void SnowballStateView2::execSnowballBreak() {
    collisionRadius = radius;
    ProcBase_RequestDelete(this);
}

s32 SnowballStateView2::enterSnowballHole() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    FieldPos_SnapToUnitCenter(holePos, &position);
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    return 1;
}

void SnowballStateView2::execSnowballHole() {
    collisionRadius = radius;
    s32 v[3];
    func_020e9960(v, holePos, &position);
    func_020e94f8(v);
    func_020e9888(v, 0x80);
    position += v[0];
    positionZ += v[2];
    _ZN18Unk_ov068_0226821419applySnowballMotionEv(this);
    s32 d = func_020e9650(&position, holePos);
    s32 lim = 0;
    if (d < 0x1000) {
        lim = -((0x1000 - d) / 5);
    }
    if (positionY < lim) {
        positionY = lim;
        if (d < 0x333) {
            Snowball_Break(this, 1);
        }
    }
}

s32 SnowballStateView2::enterSnowball05() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    targetPosX = position;
    targetPosY = positionY;
    targetPosZ = positionZ;
    return 1;
}

void SnowballStateView2::execSnowball05() {
    rollVelZ += FX_Div(0, 0x3e8000) + 0x158;
    position += rollVelX;
    positionZ += rollVelZ;
    s32 d = positionZ - targetPosZ;
    if (d < 0) {
        d = -d;
    }
    positionY = -func_01ffcb0c(d, 0x3d7);
    static s32 thr = FX_Div(0, 0x64000) + 0x3000;
    if (d >= thr) {
        Snowball_ChangeState(this, 6);
    }
}

s32 SnowballStateView2::enterSnowballSplash() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    wobblePhase = 0;
    rollVelZ >>= 1;
    _ZN18Unk_ov068_0226821419spawnSnowballSplashEv(this);
    return 1;
}

void SnowballStateView2::execSnowballSplash() {
    u32 buf[16];
    GroundInfo_initAtPos(buf, &position, 0, 0);
    s32 *p = (s32 *)&buf[9];
    position += p[0] >> 5;
    positionZ += p[2] >> 5;
    radius = func_01ffcb0c(radius, 0xf85);
    drawOffsetY = func_01ffcb0c(0x100, data_02135f44[(wobblePhase >> 4) * 2]);
    wobblePhase = (s16)wobblePhase + 0x400;
    if (radius < 0x100) {
        radius = 0;
        ProcBase_RequestDelete(this);
    }
    s32 lim = (s32)buf[15] - radius - 0x200;
    positionY -= 0x400;
    if (positionY < lim) {
        positionY = lim;
    }
    GroundInfo_Destruct(buf);
}

s32 SnowballStateView2::enterSnowballToSnowman() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    FieldPos_SnapToUnitCenter(&targetPosX, &position);
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    stepX = FX_Div(targetPosX - position, 0x10000);
    stepZ = FX_Div(targetPosZ - positionZ, 0x10000);
    stepCount = 0;
    return 1;
}

void SnowballStateView2::execSnowballToSnowman() {
    collisionRadius = radius;
    position += stepX;
    positionY = 0;
    positionZ += stepZ;
    if (stepCount++ >= 0x10) {
        position = targetPosX;
        positionY = targetPosY;
        positionZ = targetPosZ;
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
            u16 v = Item_MakeSnowman(unk_374_lo);
            BlockMap_SetItemAtUnit(g, &v, x, y, 0);
        }
        Snowball_DropDisplacedItem(&displacedItem);
        Snowball_ChangeState(this, 9);
    }
}

s32 SnowballStateView2::enterSnowballStack() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    Unk_ov068_022678c4_Src *o = (Unk_ov068_022678c4_Src *)Snowball_FindOtherInBallState(this);
    FieldPos_SnapToUnitCenter(&targetPosX, (u8 *)o + 0x5c);
    targetPosY += ((o->radius * 2 - (o->radius >> 3)) - (radius >> 3)) - 0x400;
    velocityY = -(FX_Div(0, 0x3e8000) + 0x8f2);
    u32 ei = param & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)LooseSnowballs_Get();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    stepX = FX_Div(targetPosX - position, 0x10000);
    stepZ = FX_Div(targetPosZ - positionZ, 0x10000);
    stepCount = 0;
    func_02003e70(seEmitter, 0x81e, 0x7f, 0);
    return 1;
}

void SnowballStateView1::execSnowballStack() {
    collisionRadius = radius;
    position += stepX;
    positionZ += stepZ;
    velocityY += FX_Div(0, 0x2710000) + 0xdf;
    positionY -= velocityY;
    if (velocityY >= 0) {
        s32 t = targetPosY - 0x200;
        if (positionY < t) {
            positionY = t;
            Snowball_ChangeState(this, 0xa);
        }
    }
    if (stepCount++ >= 0x10) {
        position = targetPosX;
        positionZ = targetPosZ;
    }
}

BOOL SnowballStateView1::enterSnowballSettle() {
    snowballFlags &= ~0x10;
    snowballFlags |= 0x20;
    wobblePhase = 0;
    velocityY = FX_Div(targetPosY - positionY, 0x1333);
    return TRUE;
}

void SnowballStateView1::execSnowballSettle() {
    collisionRadius = radius;
    position += stepX;
    positionZ += stepZ;
    positionY += velocityY;
    if (positionY > targetPosY) {
        positionY = targetPosY;
    }
    if (stepCount++ >= 0x10) {
        positionY = targetPosY;
        Snowball_ChangeState(this, 0xb);
    }
}

BOOL SnowballStateView1::enterSnowballCrumble() {
    snowballFlags &= ~0x10;
    snowballFlags |= 0x20;
    Snowball_ClearItemAt(&position);
    drawOffset = gVec3Zero[0];
    drawOffsetY = gVec3Zero[1];
    drawOffsetZ = gVec3Zero[2];
    wobblePhase = 0;
    crumbleTimer = 0xc;
    return TRUE;
}

void SnowballStateView1::execSnowballCrumble() {
    s32 a;
    collisionRadius = radius;
    a = data_02135f44[((u16)wobblePhase >> 4) * 2 + 1];
    drawOffset = -func_01ffcb0c(0x100, a);
    drawOffsetZ = func_01ffcb0c(0x100, a);
    wobblePhase = wobblePhase + 0x3800;
    if (crumbleTimer != 0) {
        crumbleTimer--;
    }
    if (crumbleTimer == 0) {
        _ZN18Unk_ov068_0226821418spawnSnowballBreakEv(this);
        ProcBase_RequestDelete(this);
    }
}

BOOL SnowballStateView1::enterSnowballCrumble2() {
    snowballFlags &= ~0x10;
    snowballFlags |= 0x20;
    drawOffset = gVec3Zero[0];
    drawOffsetY = gVec3Zero[1];
    drawOffsetZ = gVec3Zero[2];
    wobblePhase = 0;
    crumbleTimer = 0xc;
    return TRUE;
}

void SnowballStateView1::execSnowballCrumble2() {
    s32 a;
    collisionRadius = radius;
    a = data_02135f44[((u16)wobblePhase >> 4) * 2 + 1];
    drawOffset = func_01ffcb0c(0x100, a);
    drawOffsetZ = -func_01ffcb0c(0x100, a);
    wobblePhase = wobblePhase + 0x5000;
    if (crumbleTimer != 0) {
        crumbleTimer--;
    }
    if (crumbleTimer == 0) {
        _ZN18Unk_ov068_0226821418spawnSnowballBreakEv(this);
        ProcBase_RequestDelete(this);
    }
}

