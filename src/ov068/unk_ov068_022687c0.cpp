// mwcc-version: 1.2/base
#include "types.h"

#pragma opt_loop_invariants off

struct BVec {
    s32 x, y, z;
};

struct BS50 {
    u8 pad_00[0x9c];
    u32 unk_9c;
    u32 unk_a0;
    u32 unk_a4;
    u8 pad_a8[0x8];
};

// Actor owned by overlay 3 (fields used by the ov068 helpers).
struct BObj {
    /* 0x000 */ u8 pad_00[0x50];
    /* 0x050 */ BS50 unk_50;
    /* 0x100 */ u8 pad_100[0x30];
    /* 0x130 */ u8 unk_130[4];
    /* 0x134 */ u8 pad_134[0x1c8 - 0x134];
    /* 0x1c8 */ BVec unk_1c8;
    /* 0x1d4 */ BVec unk_1d4;
    /* 0x1e0 */ u8 pad_1e0[0x204 - 0x1e0];
    /* 0x204 */ BVec unk_204;
    /* 0x210 */ BVec unk_210;
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[6];
    /* 0x232 */ s16 unk_232;
    /* 0x234 */ u8 pad_234[6];
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[2];
    /* 0x23e */ s16 unk_23e;
    /* 0x240 */ u8 pad_240[2];
    /* 0x242 */ s16 unk_242;
    /* 0x244 */ u16 unk_244;
    /* 0x246 */ u8 pad_246;
    /* 0x247 */ u8 unk_247;
    /* 0x248 */ u8 pad_248;
    /* 0x249 */ u8 unk_249;
    /* 0x24a */ u8 pad_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253;
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
};


struct DVec {
    s32 x, y, z;
};

// Actor owned by overlay 3 (fields used by the ov068 helpers).
struct DObj {
    /* 0x000 */ u8 pad_00[0x1b0];
    /* 0x1b0 */ DVec unk_1b0;
    /* 0x1bc */ DVec unk_1bc;
    /* 0x1c8 */ u8 pad_1c8[0x1e0 - 0x1c8];
    /* 0x1e0 */ DVec unk_1e0;
    /* 0x1ec */ u8 pad_1ec[0x204 - 0x1ec];
    /* 0x204 */ DVec unk_204;
    /* 0x210 */ u8 pad_210[0x21c - 0x210];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ u8 pad_228[0x232 - 0x228];
    /* 0x232 */ s16 unk_232;
    /* 0x234 */ u8 pad_234[4];
    /* 0x238 */ s16 unk_238;
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[4];
    /* 0x240 */ s16 unk_240;
    /* 0x242 */ u8 pad_242[8];
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 pad_252[2];
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 pad_255[2];
    /* 0x257 */ u8 unk_257;
};

struct Unk_ov068_02269e54_Pad {
    s32 v[3];
    Unk_ov068_02269e54_Pad() {}
    ~Unk_ov068_02269e54_Pad() {}
};

struct Unk_ov068_0226a004_Save {
    s32 x, y;
    volatile s32 z;
};


struct Unk_ov068_02268214_Flags {
    u16 f0_1 : 2;
    u16 f2_3 : 2;
    u16 f4_5 : 2;
    u16 f6 : 1;
    u16 f7 : 1;
    u16 f8 : 1;
    u16 f9 : 1;
    u16 f10 : 1;
    u16 f11_15 : 5;
};


class Unk_ov068_02268214 {
public:
    /* 0x000 */ u8 pad_000[0x5c];
    /* 0x05c */ s32 unk_5c;
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u8 pad_068[8];
    /* 0x070 */ s32 unk_70;
    /* 0x074 */ u8 pad_074[0x34];
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 pad_0ac[0xf4 - 0xac];
    /* 0x0f4 */ s32 unk_f4;
    /* 0x0f8 */ u8 pad_0f8[0x130 - 0xf8];
    /* 0x130 */ u8 unk_130[0x204 - 0x130];
    /* 0x204 */ s32 unk_204[3];
    /* 0x210 */ s32 unk_210[3];
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ s32 unk_220;
    /* 0x224 */ u8 pad_224[4];
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[6];
    /* 0x232 */ s16 unk_232;
    /* 0x234 */ u8 pad_234[6];
    /* 0x23a */ s16 unk_23a;
    /* 0x23c */ u8 pad_23c[4];
    /* 0x240 */ u16 unk_240;
    /* 0x242 */ u16 unk_242;
    /* 0x244 */ u16 unk_244;
    /* 0x246 */ u8 pad_246[4];
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 pad_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253;
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 unk_257;
    /* 0x258 */ u8 pad_258[0x268 - 0x258];
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ u8 pad_274[8];
    /* 0x27c */ s16 unk_27c[2];
    /* 0x280 */ u8 unk_280;
    /* 0x281 */ u8 pad_281[0x2ec - 0x281];
    /* 0x2ec */ s32 unk_2ec;
    /* 0x2f0 */ s32 unk_2f0;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u8 unk_304[0x324 - 0x304];
    /* 0x324 */ u8 unk_324[0x368 - 0x324];
    /* 0x368 */ s32 unk_368;
    /* 0x36c */ s32 unk_36c;
    /* 0x370 */ u8 pad_370[4];
    /* 0x374 */ union {
        u16 unk_374;
        Unk_ov068_02268214_Flags fl_374;
    };
    /* 0x376 */ u8 pad_376[0x398 - 0x376];
    /* 0x398 */ s32 unk_398;
    /* 0x39c */ s32 unk_39c;

    void func_ov068_022687c0();
    void func_ov068_022687e8(s32 *p);
    BOOL func_ov068_02268a30(s16 *out, s32 *dist, s32 *pos);
    void func_ov068_02268864(s16 *p, s32 a, s32 b, u8 thr, s32 sc);
    void func_ov068_022694c0();
    void func_ov068_02269714();
    void func_ov068_022697b8();
    void func_ov068_02269840(s16 *p);
    BOOL func_ov068_02269a28();
    BOOL func_ov068_02269aa4();
    void func_ov068_02269b20();
    void func_ov068_02269d18();
    void func_ov068_02269d58();
};

struct Unk_ov068_02268608_Vec {
    s32 x, y, z;
};


extern "C" {
extern s32 data_020c7c1c;
extern u8 *gSceneBlockMap;
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffd070(Unk_ov068_02268608_Vec *out, void *a, void *b);
void Effect_Create(s32 a, void *v, s32 b, void *h);
void func_02003e70(void *a, s32 b, s32 c, s32 d);
void FieldFish_ScareAround(void *a, s32 b);
void *_ZN11PooledModel8getModelEv(void *);
void NNS_G3dMdlSetMdlAlpha(void *, s32, s32);
s16 Math_AngleXZ(void *, void *);
s32 func_02063b8c(s32);
s32 _s32_div_f(s32 a, s32 b);
void Insect_GetDirVec(void *, s32);
s32 Field_IsRafflesiaNear(void *a, void *b);
s32 Field_FindFlowerNear(void *a, void *b, s32 c);
s32 Insect_GetFlowerSpeciesMask(s32 a);
s32 Insect_LikesFlower(s32 a, void *b);
void FieldPos_ToUnit(s32 *x, s32 *y, void *pos);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
s32 Flower_GetSpecies(void *cell);
s32 func_020e9650(void *a, void *b);
void func_ov068_022689c8(s32 code, s32 *v);
void *Snowball_FindOtherInBallState(void *self);
s32 Snowball_ChangeState(void *o, s32 st);
s32 Snowball_Break(void *o, s32 a);
s32 func_020e96a4(void *a, void *b);
s32 func_020e7b98(s32 x, s32 z);
s32 func_020e780c(s32 a, s32 b);
BOOL Item_IsMarker(u16 *p);
s32 Ground_GetDigKind(s32 x, s32 y);
s32 func_020af608(void *tbl, s32 a, s32 b, s32 c);
void func_020af3fc();
void func_020339bc(void *o, void *pos, s32 a, s32 b);
s32 func_02033914(void *o, s32 f);
void GroundInfo_Destruct(void *o);
void FieldPos_SnapToUnitCenter(void *out, void *in);
u16 *BlockMap_GetItemPtrAtPos(void *grid, void *pos, u32 z);
extern u8 data_021ed2e6[];
s32 Insect_TickTimer(BObj *);
s32 Insect_SetWanderBox(BObj *);
s32 VEC_Subtract(void *, void *, void *);
s32 VEC_Add(void *, void *, void *);
s32 Insect_ClampStepXZ(void *, void *, s32);
s32 func_02106020(s32, s32);
s32 PlayerActor_LocalFaint(s32);
s32 _ZN13AnimFrameCtrl5setupEihit(void *, s32, s32, s32, s32);
s32 Insect_PlaySe(void *, s32, s32);
s32 Insect_FadeOut(BObj *, s32);
s32 Insect_Despawn(BObj *);
void func_020e7530(s16 *, s32, s32);
void *PlayerActor_GetActor(s32);
s32 Insect_UpdateAlarm(BObj *, BVec *);
s32 func_ov068_02268ce8(BObj *, u32, u32, s16 *);
s32 func_ov068_02268e8c(BObj *, u32, u32);
s32 Insect_GroundWalk(void *);
s32 Insect_IsOverWater(void *);
s32 PlayerActor_LocalBeeSting();
void Town_ClearBeesReleased();
void func_ov068_02269424(BVec *, BS50 *, s32);
void func_ov068_022696e4(s32 *, s32);
s32 MenuCtrl_IsMenuOpen(void);
s32 func_020e7870(s32 *, s32, s32, s32, s32);
void Insect_FlapWings(void *);
s32 Insect_CheckAlarm(void *);
void Insect_FlutterBob(void *, s32, s32, s32);
s32 PlayerActor_IsLocalAct67HitAt(void *);
void *Snowball_GetLooseBall(s32);
s32 Snowball_GetRadius(void *);
s32 Snowball_TrySetPos(void *, void *);
s32 Snowball_GetMaxRadius(void);
s32 Snowball_GetMinRadius(void);
s32 Insect_RandomTurn(s32, s32);
s32 PlayerActor_RequestAct79(void);
void Bgm_ReleasePriority(s32);
void Bgm_Request(s32, s32, s32, s32);
void PlayerActor_SetSlotFlag(s32, s32);
void Bgm_RequestSilence(s32, s32, s32);
void _ZN9AnimModel8setFrameEi(void *, s32);
s32 func_ov068_02268b70(BObj *, s16 *);
void FieldPos_FromUnitCenter(void *, u32, u32);
u16 Item_MakeBuilding(u32);
void *StrBSize_Get(u16 *);
u32 _ZN12StrBSizeData17getLightUnitCountEv(void *);
s32 _ZN12StrBSizeData12getLightUnitEPiS0_j(void *, s32 *, s32 *, u32);
void *BuildingList_FindByItem(u32);
s32 _ZN13BuildingActor9callIsLitEv(void *);
s32 _ZN13BuildingActor8getGridXEv(void *);
s32 _ZN13BuildingActor8getGridZEv(void *);
void func_020e9960(void *, void *, void *);
void func_020e93a0(void *, s32);
void Insect_SetAnimSpeed(void *, s32);
s32 Ground_GetWaterKind(s32, s32);
void Effect_PlayById2(s32, void *, void *, s32);
s32 Insect_CheckObstacle(void *, s32, s32);
void *NpcRegistry_GetBySlot(u32);
s32 NpcRegistry_GetSlotCount();
void func_ov068_0226a6ac(DObj *o, u8 *fp, DVec *out);
void func_ov068_0226a618(DObj *o, u8 *flag, s32 a, s32 b);
s32 func_ov068_0226a4f0(DObj *o);
void func_ov068_0226a3d4(DObj *o, s16 *p);
void func_ov068_0226a320(DObj *o, u16 *p);
void func_ov068_0226a2dc(DObj *o, u16 *p);
void func_ov068_0226a1a0(DObj *o);
void func_ov068_0226a004(DObj *o);
s32 func_ov068_02269f60(DObj *o, u16 *p, DVec *out);
s32 func_ov068_02269e54(DObj *o, DVec *out);
void func_ov068_02269250(BObj *o);
void func_ov068_02269110(BObj *o, s16 *p, u32 mode);
s32 func_ov068_02269040(BObj *o, s16 *p);
}

#define FX32_CONST(x) ((s32)((x) > 0 ? (x) * 4096.0f + 0.5f : (x) * 4096.0f - 0.5f))


void func_ov068_0226a6ac(DObj *o, u8 *fp, DVec *out) {
    s32 best;
    s32 d;
    DVec *me;
    s32 zero;
    u8 flag;
    u8 i;
    void *p;

    best = 0xfffffff;
    flag = 1;
    p = PlayerActor_GetActor(4);
    me = &o->unk_204;
    if (p != 0) {
        DVec *q = (DVec *)((u8 *)p + 0x5c);
        out->x = q->x;
        out->y = q->y;
        out->z = q->z;
        best = func_020e9650(out, me);
        func_ov068_0226a618(o, &flag, *(s32 *)((u8 *)p + 0x98), best);
        *fp = (*fp & flag) ? 1 : 0;
    }
    zero = 0;
    i = zero;
    for (; i < NpcRegistry_GetSlotCount(); i++) {
        void *e = NpcRegistry_GetBySlot(i);
        if (e != 0) {
            DVec *q = (DVec *)((u8 *)e + 0x5c);
            DVec t;
            t.x = q->x;
            t.y = q->y;
            t.z = q->z;
            d = func_020e9650(&t, me);
            func_ov068_0226a618(o, &flag, *(s32 *)((u8 *)e + 0x98), d);
            *fp = (*fp & flag) ? 1 : zero;
            if (best > d) {
                best = d;
                out->x = t.x;
                out->y = t.y;
                out->z = t.z;
            }
        }
    }
}


void func_ov068_0226a618(DObj *o, u8 *flag, s32 a, s32 b) {
    s16 t = o->unk_254;
    s32 lim = o->unk_224;
    *flag = 0;
    if (b < 0x2000) {
        t = t + 0x19;
    } else if (b > lim || a == 0) {
        *flag = 1;
    } else if (a <= 0x3e8) {
        t = t + 1;
    } else if (a <= 0x44c) {
        t = t + 3;
    } else if (a <= 0x490) {
        t = t + 5;
    } else if (a == 0x491) {
        t = t + 8;
    } else {
        t = t + 0xf;
    }
    if (t > 0xfe) {
        t = 0xfe;
    }
    o->unk_254 = t;
}


s32 func_ov068_0226a4f0(DObj *o) {
    DVec *v1e0 = &o->unk_1e0;
    s32 t;
    u8 zlo, xhi, zhi;
    DVec *pos;
    void *grid;
    s32 x, z;
    u8 xlo;
    u8 i, j;
    s32 lo;
    s32 hx, hz;
    u16 *cell;

    pos = &o->unk_204;
    t = 0;
    x = 0;
    z = 0;
    grid = gSceneBlockMap;
    FieldPos_ToUnit(&x, &z, pos);
    lo = x - 1;
    if (lo < 0x10) {
        lo = 0x10;
    }
    xlo = lo;
    lo = z - 1;
    if (lo < 0x10) {
        lo = 0x10;
    }
    zlo = lo;
    lo = x + 1;
    if (lo > 0x50) {
        lo = 0x50;
    }
    xhi = lo;
    lo = z + 1;
    if (lo > 0x50) {
        lo = 0x50;
    }
    zhi = lo;
    for (i = xlo; i <= xhi; i++) {
        j = zlo;
        goto test0;
    loop0:
        hx = i >> 4;
        hz = j >> 4;
        cell = BlockMap_GetItemPtr(grid, hx, hz, i - (hx << 4), j - (hz << 4), 0);
        if (cell != 0) {
            u32 v = *cell;
            if (v == 0x500a) {
                t = 1;
            } else if (v >= 0xe3 && v <= 0xe7) {
                t = 2;
            }
            if (t != 0) {
                FieldPos_FromUnitCenter(v1e0, i, j);
                if (t == 1) {
                    v1e0->z = v1e0->z + 0x59a;
                }
                o->unk_21c = o->unk_21c + 0x10;
                {
                    s32 old = o->unk_23a;
                    s32 rr = Math_AngleXZ(pos, v1e0);
                    o->unk_240 = rr + old;
                }
                o->unk_251 = 0xe;
                return 1;
            }
        }
        j++;
    test0:
        if (j <= zhi) goto loop0;
    }
    return 0;
}


void func_ov068_0226a3d4(DObj *o, s16 *p) {
    DVec *b2;
    s32 x;
    s32 z;
    DVec w;
    volatile DVec sv[1];
    DVec *pos;
    DVec *b1;
    s32 r;

    pos = &o->unk_204;
    sv[0].x = pos->x;
    sv[0].y = pos->y;
    sv[0].z = pos->z;
    b2 = &o->unk_1bc;
    b1 = &o->unk_1b0;
    x = 0;
    z = 0;
    w.x = 0;
    w.y = 0;
    w.z = 0x29;
    func_020e93a0(&w, o->unk_23a);
    o->unk_204.x = o->unk_204.x + func_01ffcb0c((*p * o->unk_257) << 12, w.x);
    pos->z = pos->z + func_01ffcb0c((*p * o->unk_257) << 12, w.z);
    *p = *p - 1;
    FieldPos_ToUnit(&x, &z, pos);
    r = Ground_GetWaterKind(x, z);
    if (r != 2 || pos->x < b1->x || pos->x > b2->x || pos->z > b1->z || pos->z < b2->z) {
        s32 base = -0x8000;
        pos->x = sv[0].x;
        pos->y = sv[0].y;
        pos->z = sv[0].z;
        base += Insect_RandomTurn(0xc, 1);
        o->unk_240 = base;
        o->unk_251 = 0xf;
        *p = 0;
    } else if (*p <= 0) {
        o->unk_251 = 0x13;
        o->unk_232 = func_02063b8c(0x14) * 3;
    }
}


void func_ov068_0226a320(DObj *o, u16 *p) {
    s16 a;
    s16 r;
    u8 k;
    DVec v;

    s16 a0 = o->unk_23a;
    a = a0;
    r = 0;
    if (o->unk_251 == 0xf) {
        r = a0 + o->unk_240;
    } else {
        k = 0;
        for (; k < func_02063b8c(5); k++) {
            r = r + 0xaaa;
        }
        if (func_02063b8c(100) > 0x32) {
            r = -r;
        }
        r += a;
    }
    o->unk_251 = 4;
    o->unk_23a = r;
    *p = func_02063b8c(8) + 8;
    DVec *pv = &o->unk_204;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    v.y = v.y + 0x100;
    Effect_PlayById2(0x1f, &v, &a, 0);
}


void func_ov068_0226a2dc(DObj *o, u16 *p) {
    if (Insect_CheckObstacle(o, 0xa0, 0xe38) != 0) {
        s32 base = -0x8000;
        base += Insect_RandomTurn(0xc, 1);
        o->unk_240 = base;
        o->unk_251 = 0xf;
        *p = 0;
    }
}


void func_ov068_0226a1a0(DObj *o) {
    s32 d;
    DVec *pos = &o->unk_204;
    DVec *v1e0 = &o->unk_1e0;
    void *grid = gSceneBlockMap;
    s32 wx;
    s32 ang;
    s32 t;
    s32 x, z;
    s32 hx, hz;
    u8 cnt;
    u16 *cell;
    DVec dv;

    t = 0;
    x = 0;
    z = 0;
    d = func_020e9650(pos, v1e0);
    cnt = 0;
    FieldPos_ToUnit(&x, &z, v1e0);
    wx = *(volatile s32 *)&x;
    s32 bz = *(volatile s32 *)&z;
    hx = wx >> 4;
    hz = bz >> 4;
    cell = BlockMap_GetItemPtr(grid, hx, hz, wx - (hx << 4), bz - (hz << 4), 0);
    if (cell != 0) {
        u32 v = *cell;
        if (v == 0x500a) {
            t = 0x27ae;
        } else if (v >= 0xe3 && v <= 0xe7) {
            t = 0x191f;
        }
    }
    if (t > 0 && o->unk_24a == 0) {
        if (d > 0x266) {
            ang = Math_AngleXZ(pos, v1e0);
            Insect_GetDirVec(&dv, ang);
            o->unk_23a = ang;
            pos->x = pos->x + func_01ffcb0c(dv.x, 0xa000);
            pos->z = pos->z + func_01ffcb0c(dv.z, 0xa000);
        } else {
            cnt++;
        }
        if (t < pos->y - 0x19a) {
            pos->y = pos->y - 0xcd;
        } else {
            cnt++;
        }
        if (cnt >= 2) {
            o->unk_251 = 0x13;
        }
    } else {
        o->unk_21c = o->unk_21c & 0xff0f;
        o->unk_251 = 0x13;
    }
}


void func_ov068_0226a004(DObj *o) {
    u32 rnd;
    u32 k24b, k24c;
    DVec *pos;
    DVec *v1e0;
    Unk_ov068_0226a004_Save save;
    s32 cnt;

    k24b = o->unk_24b;
    rnd = (u8)func_02063b8c(100);
    pos = &o->unk_204;
    v1e0 = &o->unk_1e0;
    k24c = o->unk_24c;
    save.x = pos->x;
    save.y = pos->y;
    save.z = pos->z;
    Insect_CheckAlarm(o);
    if (o->unk_24a != 0) {
        DVec *q = (DVec *)PlayerActor_GetActor(4);
        if (q != 0) {
            q = (DVec *)((u8 *)q + 0x5c);
            if (o->unk_238 == 1 && o->unk_24d == 8) {
                s32 v;
                if (pos->x > q->x) {
                    v = 0x2aaa;
                } else {
                    v = -0x2aaa;
                }
                o->unk_238 = 0;
                o->unk_23a = v;
                Insect_SetAnimSpeed(o, 0x119a);
            }
        }
    } else {
        cnt = o->unk_24f;
        if (cnt % 10 == 0 && rnd > 0x1e) {
            o->unk_24c = k24c == 0 ? 1 : 0;
        } else if (cnt % 5 == 0 && rnd > 0x1e) {
            o->unk_24b = k24b == 0 ? 1 : 0;
        }
        if (k24b != 0) {
            pos->x = pos->x + o->unk_257 * 0x30;
        } else {
            pos->x = pos->x - o->unk_257 * 0x30;
        }
        if (k24c != 0) {
            pos->y = pos->y + o->unk_257 * 0x30;
        } else {
            pos->y = pos->y - o->unk_257 * 0x30;
        }
        if (func_ov068_02269e54(o, v1e0) != 0) {
            o->unk_24b = k24b == 0 ? 1 : 0;
            pos->x = save.x;
        }
        if (FX_Div(0x15000, 0x10000) > pos->y || FX_Div(0x32000, 0x10000) < pos->y) {
            o->unk_24c = k24c == 0 ? 1 : 0;
            pos->y = save.y;
        }
    }
}


s32 func_ov068_02269f60(DObj *o, u16 *p, DVec *out) {
    DVec a;
    DVec *pos;
    s32 r;
    a.x = 0;
    a.y = 0;
    a.z = 0;
    pos = &o->unk_204;
    r = func_ov068_02269e54(o, &a);
    if (r == 0) {
        o->unk_23a = -0x8000;
        o->unk_238 = 1;
        o->unk_251 = 0;
        Insect_SetAnimSpeed(o, 0x1000);
    } else if (r > 0 && r < 5) {
        DVec t;
        func_020e9960(&t, pos, &a);
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        out->y = 0;
        Insect_ClampStepXZ(out, out, 2);
        VEC_Subtract(pos, out, pos);
        return 1;
    } else {
        o->unk_251 = 9;
        *p = 0;
    }
    return 0;
}

s32 func_ov068_02269e54(DObj *o, DVec *out) {
    s32 best;
    DVec bv;
    DVec cur;
    s32 bx, bz;
    s32 x, z;
    u32 i;
    s32 zj = 0, zt = 0, zp = 0;

    bx = 0;
    best = -1;
    x = 0;
    z = 0;
    bz = 0;
    bv.x = best;
    bv.y = 0;
    bv.z = best;
    cur.x = 0;
    cur.y = 0;
    cur.z = 0;
    FieldPos_ToUnit(&x, &z, &o->unk_204);
    cur.x = x;
    cur.y = 0;
    cur.z = z;
    for (i = 0; i < 0x22; i++) {
        u16 id = Item_MakeBuilding(i);
        void *obj = StrBSize_Get(&id);
        if (obj != 0) {
            u32 cnt = _ZN12StrBSizeData17getLightUnitCountEv(obj);
            s32 px = zp, pz = zp;
            if (cnt != 0) {
                void *q = BuildingList_FindByItem(id);
                if (q != 0) {
                    u32 j;
                    for (j = zj; j < cnt; j++) {
                        if (_ZN12StrBSizeData12getLightUnitEPiS0_j(obj, &px, &pz, j) != 0 && _ZN13BuildingActor9callIsLitEv(q) == 1) {
                            DVec t;
                            Unk_ov068_02269e54_Pad pad;
                            s32 d;
                            s32 tx = px + _ZN13BuildingActor8getGridXEv(q);
                            s32 tz = pz + _ZN13BuildingActor8getGridZEv(q);
                            t.x = tx;
                            t.y = zt;
                            t.z = tz;
                            d = func_020e9650(&cur, &t);
                            if ((cur.z <= tz && best < 0) || d < best) {
                                best = d;
                                bx = tx;
                                bz = tz;
                            }
                        }
                    }
                }
            }
        }
    }
    if (best >= 0) {
        FieldPos_FromUnitCenter(&bv, bx, bz);
        out->x = bx;
        out->z = bz;
    }
    return best;
}


void Unk_ov068_02268214::func_ov068_02269d58() {
    s16 h = unk_23a;
    s32 t = unk_232;
    Insect_FlapWings(this);
    if (Insect_CheckAlarm(this) == 2) {
        unk_24a = 0;
    }
    Insect_PlaySe(this, 0, 1);
    if (unk_24a == 0 && func_ov068_02268b70((BObj *)this, &h) == 0 && unk_24d == 10) {
        unk_242 = 0;
        unk_251 = 9;
        return;
    }
    func_ov068_02268864(&h, 0xaaa, 0x1e, 0x46, unk_257 << 12);
    if (unk_24d == 10) {
        s32 x = FX_Div(0x12000, 0x10000);
        Insect_FlutterBob(this, t, x, (func_02063b8c(8) + 10) << 12);
        unk_232 = t + 0xaaa;
    } else {
        Insect_FlutterBob(this, t, 0x19a, (func_02063b8c(8) + 0x12) << 12);
        unk_232 = t + 0x1554;
    }
}


void Unk_ov068_02268214::func_ov068_02269d18() {
    s32 t = unk_232;
    if (Insect_GroundWalk(this) != 0) {
        if (t <= 0) {
            unk_251 = 9;
            unk_242 = 0;
        } else {
            unk_232 = t - 1;
        }
    }
}


namespace B20 { extern "C" s16 Math_AngleXZ(void *, void *); }
void Unk_ov068_02268214::func_ov068_02269b20() {
    u8 *a = (u8 *)Snowball_GetLooseBall(unk_21c);
    s32 *pos = unk_204;
    s32 w2[3];
    s32 w[3];
    s16 ang;
    u8 *volatile q;
    volatile s32 c;
    volatile s32 tmp;
    if (a != 0) {
        s32 rot, r6;
        q = a;
        q = a + 0x5c;
        r6 = Snowball_GetRadius(a);
        ang = B20::Math_AngleXZ(q, pos);
        rot = ang;
        w[0] = *(s32 *)(a + 0x5c);
        w[1] = *(s32 *)(q + 4);
        w[2] = *(s32 *)(q + 8);
        static s32 base = (tmp = Snowball_GetMaxRadius(), tmp - Snowball_GetMinRadius());
        r6 -= func_01ffcb0c(0x4cd, FX_Div(r6 - Snowball_GetMinRadius(), base));
        if (unk_24f % 0x14 == 0) {
            s32 t = (s32)(Insect_RandomTurn(6, 1) << 17) >> 16;
            ang += t;
            unk_232 = t;
        } else {
            s32 u = *(volatile s16 *)&unk_232;
            ang += u;
        }
        s32 cv = unk_24f;
        c = cv;
        if (cv % 4 == 0) {
            rot = (s16)(rot + 0x38e);
        } else if (c % 2 == 0) {
            rot = (s16)(rot - 0x38e);
        }
        unk_23a = rot;
        Insect_GetDirVec(w2, ang);
        w[0] = w[0] - func_01ffcb0c(w2[0], 0x2666);
        w[2] = w[2] - func_01ffcb0c(w2[2], 0x2666);
        s32 d = func_020e9650(w, pos);
        if (d < r6) {
            pos[0] = pos[0] - w2[0];
            pos[2] = pos[2] - w2[2];
        } else if (d > r6 + 0x333) {
            pos[0] = pos[0] - func_01ffcb0c(w2[0], 0x3000);
            pos[2] = pos[2] - func_01ffcb0c(w2[2], 0x3000);
        } else {
            pos[0] = pos[0] - func_01ffcb0c(w2[0], 0x2666);
            pos[2] = pos[2] - func_01ffcb0c(w2[2], 0x2666);
        }
        if (Snowball_TrySetPos(a, w) == 0) {
            unk_251 = 5;
            _ZN9AnimModel8setFrameEi((u8 *)this + 0x50, 0);
            unk_232 = func_02063b8c(0x14) + 0x28;
        }
    } else {
        unk_251 = 5;
        _ZN9AnimModel8setFrameEi((u8 *)this + 0x50, 0);
        unk_232 = func_02063b8c(0x14) + 0x28;
    }
}


BOOL Unk_ov068_02268214::func_ov068_02269aa4() {
    s32 *v = unk_204;
    if (PlayerActor_IsLocalAct67HitAt(v) != 0) {
        u8 *p = (u8 *)PlayerActor_GetActor(4);
        if (p != 0) {
            if (v[0] < *(s32 *)(p + 0x5c)) {
                v[0] = v[0] - FX_Div(0x14000, 0x10000);
            } else {
                v[0] = v[0] + FX_Div(0x14000, 0x10000);
            }
            if (func_02063b8c(0x64) > 0x32) {
                unk_24c = 0;
            } else {
                unk_24c = 1;
            }
            return TRUE;
        }
    }
    return FALSE;
}


BOOL Unk_ov068_02268214::func_ov068_02269a28() {
    s16 a = unk_23a;
    s32 b = (s16)(unk_232 - 1);
    if (b < 0) {
        return TRUE;
    }
    if (unk_24c != 0) {
        if (a > 0xaaa) {
            unk_24c = 0;
        }
    } else {
        if (a < -0xaaa) {
            unk_24c = 1;
        }
    }
    if (unk_24c != 0) {
        a += 0x222;
    } else {
        a -= 0x222;
    }
    unk_23a = a;
    unk_232 = b;
    return FALSE;
}


void Unk_ov068_02268214::func_ov068_02269840(s16 *p) {
    s32 dist;
    u32 rnd;
    u8 *tp = (u8 *)PlayerActor_GetActor(4);
    s32 *pos = unk_204;
    s32 ang = 0;
    s32 v[3];
    v[0] = ang;
    v[1] = ang;
    v[2] = ang;
    *p = *p + 0xaaa;
    Insect_PlaySe(this, 0, 1);
    Insect_FlapWings(this);
    if (tp != 0) {
        u8 *pp = tp + 0x5c;
        dist = func_020e9650(pp, pos);
        rnd = (u8)func_02063b8c(0x64);
        s32 c = unk_254;
        s32 h = unk_23a;
        ang = (s16)(Math_AngleXZ(pos, pp) - h);
        if (unk_24a != 0) {
            if (c < 0xfe) {
                c = (s16)(c + 1);
                unk_254 = c;
            }
            if (c >= 0x3c) {
                if (dist < FX_Div(0x1000, 0x10000)) {
                    if (PlayerActor_RequestAct79() != 0) {
                        unk_24a = 0;
                        *p = 0;
                        unk_251 = 9;
                    }
                }
            }
        }
        if (dist < 0x2000) {
            if (dist < FX_Div(0x1000, 0x4000) && unk_24a == 0) {
                unk_24a = 1;
                unk_254 = 0;
            }
            if (ang < -0x555 || ang > 0x555) {
                if (ang > 0 && rnd > 0xf) {
                    ang = 0x555;
                } else if (ang < 0 && rnd > 0xf) {
                    ang = -0x555;
                } else {
                    ang = 0;
                }
            }
        } else {
            if (dist > FX_Div(0x1000, 0x2000) && unk_24a != 0 && c < 0x3c) {
                unk_24a = 0;
                unk_254 = 0;
            }
            s32 lim = (s16)FX_Div(0x555, 0x4000);
            s32 nlim = -lim;
            if (ang < (s16)nlim || ang > lim) {
                if (ang > 0 && rnd > 0x14) {
                    ang = lim;
                } else if (ang < 0 && rnd > 0x14) {
                    ang = (s16)nlim;
                } else {
                    ang = 0;
                }
            }
        }
    }
    s16 na = ang + unk_23a;
    unk_23a = na;
    Insect_GetDirVec(v, na);
    pos[0] += func_01ffcb0c(v[0], 0x8000);
    pos[2] += func_01ffcb0c(v[2], 0x8000);
    s32 r = func_02063b8c(8);
    Insect_FlutterBob(this, *p, 0x2800, (r + 0x12) << 12);
}


void Unk_ov068_02268214::func_ov068_022697b8() {
    u8 *tp = (u8 *)PlayerActor_GetActor(4);
    s32 *v = unk_210;
    if (tp != 0) {
        unk_23a = Math_AngleXZ(unk_204, tp + 0x5c);
    }
    NNS_G3dMdlSetMdlAlpha(_ZN11PooledModel8getModelEv(unk_130), 0, 0x1f);
    unk_251 = 2;
    v[0] = 1;
    v[1] = 1;
    v[2] = 1;
    unk_232 = 0x28;
    unk_f4 = 0x2d000;
    unk_21c = 0xf0;
    Bgm_RequestSilence(0x19, 0, 0);
}


void Unk_ov068_02268214::func_ov068_02269714() {
    s32 *pos = unk_204;
    s32 *v = unk_210;
    s32 t = v[0];
    BOOL flag = FALSE;
    if (func_020e7870(&t, 0x1000, 0x200, 0x1000, 0x19a) == 0) {
        flag = TRUE;
    }
    v[0] = t;
    v[1] = t;
    v[2] = t;
    if (func_020e7870((s32 *)((u8 *)pos + 4), 0x2800, 0x199, 0x1000, 0x400) == 0 && flag) {
        unk_251 = 0;
        v[0] = 0x1000;
        v[1] = 0x1000;
        v[2] = 0x1000;
        Bgm_ReleasePriority(0x19);
        Bgm_Request(0x1a, 0x3f, 0x7f, 0);
        PlayerActor_SetSlotFlag(0x1a, 4);
    }
}


extern "C" void func_ov068_022696e4(s32 *v, s32 up) {
    if (up == 0) {
        v[2] = v[2] - 0x52;
    } else {
        v[2] = v[2] + 0x52;
    }
    s32 t = v[2];
    if (t < 0x1000) {
        v[2] = 0x1000;
        return;
    }
    if (t > 0x2000) {
        v[2] = 0x2000;
    }
}

void Unk_ov068_02268214::func_ov068_022694c0() {
    u8 *tp = (u8 *)PlayerActor_GetActor(4);
    s32 ang, dist;
    s32 *pos = unk_204;
    s32 cur = unk_23a;
    s16 h = cur;
    s32 v[3];
    s32 w[3];
    s32 t = unk_232;
    u8 *cnt = &unk_256;
    if (t > 0) {
        unk_232 = t - 1;
    } else if (MenuCtrl_IsMenuOpen() != 0) {
        h = h + 0x1554;
        unk_23a = h;
        Insect_GetDirVec(v, h);
        pos[0] += func_01ffcb0c(0x23000, v[0]);
        pos[2] += func_01ffcb0c(0x23000, v[2]);
        func_ov068_02269424((BVec *)unk_210, (BS50 *)((u8 *)this + 0x50), cur - h);
        *cnt = 9;
        return;
    }
    if (tp == 0) {
        return;
    }
    u8 *pp = tp + 0x5c;
    ang = Math_AngleXZ(pos, pp);
    s32 r6 = unk_257 + unk_21c;
    dist = func_020e9650(pos, pp);
    if (dist < 0x1000) {
        unk_251 = 3;
        unk_242 = 0;
        return;
    }
    if (*cnt != 0) {
        *cnt = *cnt - 1;
        func_020e7530(&h, ang, 0xe38);
    } else if (r6 < 0xfa) {
        func_020e7530(&h, ang, 0x93e);
    } else if (r6 < 0x104) {
        func_020e7530(&h, ang, 0x7d2);
    } else {
        func_020e7530(&h, ang, 0x666);
    }
    s32 hh = h;
    s32 diff = _s32_div_f(ang - hh, 0xb6);
    if (diff < 0) {
        diff = -diff;
    }
    if ((u8)diff > 0xf && r6 > 0xb4) {
        r6 -= 2;
        unk_21c = r6;
    } else if (r6 < 0x122) {
        r6 += 7;
        unk_21c = r6;
    }
    unk_23a = hh;
    Insect_GetDirVec(w, h);
    if (dist > 0xe000) {
        r6 <<= 12;
        pos[0] += FX_Div(func_01ffcb0c(r6, w[0]), 0x3800);
        pos[2] += FX_Div(func_01ffcb0c(r6, w[2]), 0x3800);
    } else {
        r6 <<= 12;
        pos[0] += FX_Div(func_01ffcb0c(r6, w[0]), 0x5000);
        pos[2] += FX_Div(func_01ffcb0c(r6, w[2]), 0x5000);
    }
    func_ov068_02269424((BVec *)unk_210, (BS50 *)((u8 *)this + 0x50), (cur - h) * 5);
}


void func_ov068_02269424(BVec *a, BS50 *b, s32 d) {
    s32 ang = (s16)((u32)(b->unk_a4 << 4) >> 16);
    s32 t = d;
    if (d < 0) t = -d;
    if (t > 0x38e) {
        func_ov068_022696e4((s32 *)a, 0);
        if (d > 0) {
            _ZN13AnimFrameCtrl5setupEihit(&b->unk_9c, 0, 3, 0x4000, (u16)ang);
        } else {
            _ZN13AnimFrameCtrl5setupEihit(&b->unk_9c, 0x5a, 1, 0x4000, (u16)ang);
        }
    } else {
        func_ov068_022696e4((s32 *)a, 1);
        if (ang > 0x2d) {
            _ZN13AnimFrameCtrl5setupEihit(&b->unk_9c, 0x2e, 3, 0x4000, (u16)ang);
        } else {
            _ZN13AnimFrameCtrl5setupEihit(&b->unk_9c, 0x2e, 1, 0x4000, (u16)ang);
        }
    }
}


void func_ov068_02269250(BObj *o) {
    s16 *r7 = &o->unk_242;
    BVec *r4 = &o->unk_210;
    BVec *r6 = &o->unk_204;
    u32 st = o->unk_251;
    if (st == 3) {
        void *q = PlayerActor_GetActor(4);
        if (q) {
            s16 c = o->unk_23a;
            s16 buf = c;
            BVec vec;
            func_020e7530(&buf, Math_AngleXZ(r6, (u8 *)q + 0x5c), 0x1554);
            o->unk_23a = buf;
            Insect_GetDirVec(&vec, buf);
            r6->x = r6->x + func_01ffcb0c(0x23000, vec.x);
            r6->z = r6->z + func_01ffcb0c(0x23000, vec.z);
            func_ov068_02269424(&o->unk_210, &o->unk_50, c - buf);
        }
        if (*r7 == 0) {
            if (PlayerActor_LocalBeeSting()) {
                Insect_PlaySe(o, 1, 0);
                *r7 = *r7 + 1;
            } else {
                Insect_PlaySe(o, 0, 1);
            }
        } else {
            *r7 = *r7 + 1;
            if (*r7 > 0x42) {
                o->unk_251 = 7;
                *r7 = 0;
            }
        }
    } else {
        BVec vec;
        Insect_GetDirVec(&vec, o->unk_23a);
        if (st == 7) {
            r6->x = r6->x + func_01ffcb0c(vec.x, 0x64000);
            r6->z = r6->z + func_01ffcb0c(vec.z, 0x64000);
            r4->x = r4->x + 0x266;
            r4->y = r4->y + 0x266;
            r4->z = r4->z + 0x266;
            func_ov068_02269424(r4, &o->unk_50, 0);
        } else {
            r6->x = r6->x + FX_Div(func_01ffcb0c(vec.x, o->unk_21c << 12), 0x5000);
            r6->z = r6->z + FX_Div(func_01ffcb0c(vec.z, o->unk_21c << 12), 0x5000);
            r4->x = r4->x + 0x333;
            r4->y = r4->y + 0x333;
            r4->z = r4->z + 0x333;
        }
        if (Insect_FadeOut(o, 4)) {
            BVec *z;
            o->unk_251 = 0x13;
            o->unk_249 = 0;
            z = &o->unk_204;
            z->x = 0;
            z->y = 0;
            z->z = 0;
            o->unk_21c = 0;
            Town_ClearBeesReleased();
            NNS_G3dMdlSetMdlAlpha((void *)_ZN11PooledModel8getModelEv(o->unk_130), 0, 0);
        }
    }
}


void func_ov068_02269110(BObj *o, s16 *p, u32 mode) {
    Insect_GroundWalk(o);
    if (o->unk_251 == 4) {
        Insect_PlaySe(o, 0, 1);
        if (Insect_TickTimer(o)) {
            o->unk_251 = 0x13;
            o->unk_244 = (func_02063b8c(9) + 2) * 0x14;
        }
    } else if (o->unk_251 == 5) {
        if (o->unk_24d == 0x36 &&
            (*p > 0 || (o->unk_24f % 10 == 0 && func_02063b8c(100) > 0x4b))) {
            s32 t = *p;
            o->unk_204.y = o->unk_204.y + (func_01ffcb0c(FX_Div(0x1000, 0x12000), t << 12) + t * t * -10);
            if (*p == 0) {
                void *q = PlayerActor_GetActor(4);
                if (q) {
                    o->unk_23a = Math_AngleXZ(&o->unk_204, (u8 *)q + 0x5c);
                    Insect_PlaySe(o, 1, 0);
                }
            }
            *p = *p + 3;
            if (*p > 3) {
                if (Insect_IsOverWater(&o->unk_204) == 0 && o->unk_204.y <= 0) {
                    *p = 0;
                }
            }
        } else {
            Insect_PlaySe(o, 0, 1);
        }
        if (o->unk_24d == 0x37 || *p == 0) {
            if (mode != 2) {
                o->unk_251 = 0x13;
                *p = 0;
            }
        }
    }
}


s32 func_ov068_02269040(BObj *o, s16 *p) {
    s32 r = 0;
    void *q = PlayerActor_GetActor(4);
    if (q) {
        u32 qq = (u32)q + 0x5c;
        BVec vec;
        s32 st = (s8)Insect_UpdateAlarm(o, &vec);
        s16 c = o->unk_254;
        if (c > 0) {
            s32 lim = o->unk_224;
            if (func_020e9650(&vec, &o->unk_204) > lim) {
                c = c - 3;
                o->unk_254 = c > 0 ? c : 0;
            }
        }
        if (c >= 0x14 || o->unk_232 > 0) {
            if (o->unk_247) {
                r = func_ov068_02268e8c(o, (u8)st, qq);
            } else {
                st = 1;
            }
        }
        if (c >= 0x14 && o->unk_247 == 0) goto call;
        if (c >= o->unk_255) goto call;
        if (*p <= 0) goto done;
    call:
        r = func_ov068_02268ce8(o, (u8)st, qq, p);
    }
done:
    return r;
}


s32 func_ov068_02268e8c(BObj *o, u32 mode, u32 q) {
    BVec *v = &o->unk_204;
    s32 c232 = o->unk_232;
    s16 t23a = o->unk_23a;
    s16 *r6 = &o->unk_23e;
    BS50 *s = &o->unk_50;
    if (*r6 == 0 || o->unk_24d == 0x37) {
        if (func_02106020((s32)_ZN11PooledModel8getModelEv(o->unk_130), 0) == 0x1f) {
            if (mode == 1) {
                if (*r6 == 0) {
                    Insect_PlaySe(o, 1, 0);
                    t23a = Math_AngleXZ(v, (void *)q);
                }
                *r6 = *r6 + 1;
            }
            if (c232 > 0) {
                o->unk_232 = c232 - 1;
            } else if (mode == 0) {
                o->unk_232 = 0x3c;
                if (o->unk_24d == 0x37) {
                    if ((u32)(s->unk_a4 << 4) >> 16 < 4 && (u32)(s->unk_a0 << 4) >> 16 < 0xb) {
                        Insect_PlaySe(o, 1, 0);
                    }
                }
            }
            if (o->unk_24b) {
                if (func_020e9650(v, (void *)q) < 0x2000) {
                    func_020e7530(&t23a, Math_AngleXZ(v, (void *)q), 0xe38);
                } else {
                    func_020e7530(&t23a, Math_AngleXZ(v, (void *)q), 0x71c);
                }
                o->unk_23a = t23a;
            }
        }
    }
    if (o->unk_24d == 0x37) {
        s32 a = (s32)s->unk_a0 >> 12;
        if ((u16)a == 0xe && (u32)(s->unk_a4 << 4) >> 16 == 0xd) {
            s->unk_a4 = 0xa000;
        } else {
            s32 b = (s32)s->unk_a4 >> 12;
            if ((u16)b < 4 && (u16)a < 0xb) {
                _ZN13AnimFrameCtrl5setupEihit(&s->unk_9c, 0xb, 1, 0x1000, 4);
            } else if ((u16)a == 0xb && (u16)b == 0xa) {
                _ZN13AnimFrameCtrl5setupEihit(&s->unk_9c, 0xe, 0, 0x1000, 10);
            }
        }
    }
    return 1;
}


s32 func_ov068_02268ce8(BObj *o, u32 mode, u32 q, s16 *p) {
    BVec *v = &o->unk_204;
    if (o->unk_247 != 0 && (*p == 0 || *p > 0x1f) && func_02106020((s32)_ZN11PooledModel8getModelEv(o->unk_130), 0) == 0x1f) {
        if (mode == 3 || mode == 1) {
            if (func_020e9650((void *)q, v) < 0x1000) {
                s16 *pp = &o->unk_23e;
                if (PlayerActor_LocalFaint(o->unk_24d == 0x37 ? 1 : 0)) {
                    o->unk_251 = 0x13;
                    o->unk_24c = 1;
                    _ZN13AnimFrameCtrl5setupEihit(&o->unk_50.unk_9c, 0, 2, 0x1000, (u32)(o->unk_50.unk_a4 << 4) >> 16);
                } else {
                    s32 t = *pp;
                    if (t > 0 && o->unk_24d == 0x36) {
                        v->y = v->y + (func_01ffcb0c(FX_Div(0x1000, 0x12000), t << 12) + t * t * -10);
                        *pp = *pp + 3;
                        if (v->y <= 0) {
                            *pp = 0;
                        }
                    }
                }
                return 1;
            }
            o->unk_251 = 5;
            return 2;
        }
        if (o->unk_251 == 7) {
            o->unk_251 = 4;
            *p = 0;
        }
    } else {
    if ((mode == 1 || mode == 3) && *p == 0) {
        *p = 0x12c;
    } else {
        if (*p < 0x1f) {
            if (Insect_FadeOut(o, 1)) {
                Insect_Despawn(o);
            }
        } else if (o->unk_24b) {
            s16 t = o->unk_23a;
            Insect_PlaySe(o, 0, 1);
            func_020e7530(&t, Math_AngleXZ((void *)q, v), 0x666);
            o->unk_23a = t;
            o->unk_251 = 7;
        }
    }
    *p = *p - 1;
    }
    return 0;
}

s32 func_ov068_02268b70(BObj *o, s16 *p) {
    s32 inside = Insect_TickTimer(o);
    BVec *v = &o->unk_204;
    s16 a;
    s32 b;
    BVec c;
    if (((Unk_ov068_02268214 *)o)->func_ov068_02268a30(&a, &b, (s32 *)&c) != 0) {
        if (inside != 0) {
            if (b <= FX_Div(0x1000, 0x4000) && v->y <= c.y + FX_Div(0x1000, 0x8000) &&
                v->y >= c.y - FX_Div(0x1000, 0x8000)) {
                o->unk_251 = 6;
                o->unk_244 = (func_02063b8c(5) + 0x10) * 0x14;
                o->unk_242 = 0;
                if (o->unk_24d == 0x33) {
                    if (o->unk_21c != 1) {
                        o->unk_251 = 0;
                    } else {
                        Insect_SetWanderBox(o);
                    }
                }
            } else {
                u32 t = o->unk_252;
                if (func_02063b8c(100) > (s32)(t - 0x14)) {
                    BVec *d = &o->unk_1d4;
                    if (d->x != *(volatile s32 *)&c.x || d->z != *(volatile s32 *)&c.z) {
                        BVec *d2 = &o->unk_1d4;
                        BVec *e2;
                        d2->x = c.x;
                        d2->y = c.y;
                        d2->z = c.z;
                        e2 = &o->unk_1c8;
                        e2->x = v->x;
                        e2->y = v->y;
                        e2->z = v->z;
                    }
                    if (b <= 0x3000) {
                        o->unk_220 = c.y;
                    } else {
                        o->unk_220 = o->unk_228;
                    }
                    *p = *p + a;
                    VEC_Subtract(&c, v, &c);
                    Insect_ClampStepXZ(&c, &c, 1);
                    VEC_Add(v, &c, v);
                }
            }
        } else {
            o->unk_220 = o->unk_228;
        }
        return 1;
    }
    o->unk_220 = o->unk_228;
    return 0;
}


BOOL Unk_ov068_02268214::func_ov068_02268a30(s16 *out, s32 *dist, s32 *pos) {
    u32 x;
    void *p = unk_204;
    u32 t = *(u8 *)&unk_24d;
    BOOL ok;
    if (t == 0x33) {
        if (Field_IsRafflesiaNear(pos, p) != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (Field_FindFlowerNear(pos, p, Insect_GetFlowerSpeciesMask((s8)t)) != 0) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    if (ok != 0) {
    s32 gx = 0;
    s32 gy = 0;
    FieldPos_ToUnit(&gx, &gy, pos);
    x = gx;
    u32 y = gy;
    s32 hx = (s32)x >> 4;
    s32 hy = (s32)y >> 4;
    u16 *cell = BlockMap_GetItemPtr(gSceneBlockMap, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    if ((u8)(t + 0xfe) <= 1) {
        if (Insect_LikesFlower((s8)t, cell) == 0) {
            return FALSE;
        }
    }
    if (t != 0x33) {
        func_ov068_022689c8((s8)Flower_GetSpecies(cell), pos);
    } else {
        pos[0] += 0x1000;
        pos[1] = FX_Div(0xb000, 0x10000);
        pos[2] += 0x1000;
    }
    *out = Math_AngleXZ(p, pos);
    *out = *out - unk_23a;
    if (*out > 0x38e) {
        *out = 0x38e;
    } else if (*out < -0x38e) {
        *out = -0x38e;
    }
    *dist = func_020e9650(pos, p);
    return TRUE;
    }
    return FALSE;
}


extern "C" void func_ov068_022689c8(s32 code, s32 *v) {
    if (code == 1 || code == 4) {
        v[0] += FX_Div(-0x1000, 0x10000);
        v[1] = FX_Div(0x10000, 0x10000);
        v[2] += FX_Div(-0x4000, 0x10000);
    } else {
        v[1] = FX_Div(0x9000, 0x10000);
        v[2] += FX_Div(0x3000, 0x10000);
    }
}


void Unk_ov068_02268214::func_ov068_02268864(s16 *p, s32 a, s32 b, u8 thr, s32 sc) {
    u32 flag = unk_24b;
    u32 rnd = (u8)func_02063b8c(100);
    s32 *d = unk_204;
    s32 vec[3];
    if (unk_24f % b == 0 && rnd > thr) {
        if (flag == 0) {
            flag = 1;
        } else {
            flag = 0;
        }
        unk_24b = flag;
    }
    if (rnd > unk_252) {
        if (flag != 0) {
            *p = *p + a;
        } else {
            *p = *p - a;
        }
    }
    Insect_GetDirVec(vec, *p);
    unk_23a = *p;
    if (unk_24a != 0) {
        float f = 1.25f;
        if (unk_24d == 10 || unk_24d == 0x33) {
            f = 1.5f;
        }
        d[0] += func_01ffcb0c(func_01ffcb0c(FX32_CONST(f), sc), vec[0]);
        d[2] += func_01ffcb0c(func_01ffcb0c(FX32_CONST(f), sc), vec[2]);
    } else {
        d[0] += func_01ffcb0c(sc, vec[0]);
        d[2] += func_01ffcb0c(sc, vec[2]);
    }
}


void Unk_ov068_02268214::func_ov068_022687e8(s32 *p) {
    if (*p > 0 && unk_24a == 0 && unk_254 >= unk_255) {
        unk_240 = Math_AngleXZ(p, unk_204);
        unk_244 = (func_02063b8c(4) + 7) * 20;
        unk_251 = 7;
        unk_24a = 1;
        unk_220 = unk_228;
    }
}

void Unk_ov068_02268214::func_ov068_022687c0() {
    NNS_G3dMdlSetMdlAlpha(_ZN11PooledModel8getModelEv(unk_130), 0, 0x1f);
    unk_251 = 0x12;
}
