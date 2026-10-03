#include "types.h"
#include "Unk_020d8c7c.h"

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    s32 unk_68;
};

struct Unk_02095774_Ent {
    u8 pad_00[0x5c];
    s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_0209579c_Rec {
    u8 pad_00[0xe];
    u8 unk_0e;
};

struct Unk_02095dcc_Grid {
    u8 pad_00[0xc];
    s32 unk_0c;
    s32 unk_10;
};

struct ItemPickSpec {
    void set(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};

struct Unk_0209579c_Pos {
    s32 x, y, z;
    Unk_0209579c_Pos() {}
};

struct Unk_0209579c_L {
    u8 a, b;
    s16 c;
    s16 r1[3];
    s16 pad;
    s32 v1, x1, y1;
    s16 r2[3];
    s16 r3[3];
    s32 v2, x2, y2;
};

inline BOOL Unk_0209579c_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

inline u16 Unk_02095f38_F(u32 v) {
    if (v < 5) return (u16)(v + 0x1518);
    return 0x1518;
}

extern CommManager *gCommManager;
extern u32 data_020d03d8[];
extern u32 data_020d03e8[];
extern u32 data_020d03f8[];
extern u8 sThrownBottleReturnOdds[];
extern u8 gPlayerSessionTable[];
extern u8 data_021e7f8c[];
extern u8 data_021eceac[];
extern u8 data_021edb68[];
extern u8 data_020e1d68[];
struct Unk_02095f38_G {
    u8 pad_00[0x58];
    u32 unk_58;
};
extern Unk_02095f38_G data_021ed150;

extern "C" {
BOOL func_020729bc(CommManager *p, s32 v);
}

extern "C" {
u32 func_02072970(CommManager *p, u32 v);
}

extern "C" {
u32 _ZN11CommManager12isSlotActiveEi(CommManager *p, s32 v);
}

extern "C" {
u32 _ZN11CommManager7isMyAidEj(CommManager *p, s32 v);
}

extern "C" {
BOOL func_02072e44(CommManager *p);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
void NetBuf_UnpackPair20(u32 a, s32 *x, s32 *y);
}

extern "C" {
void CommRecord_UnpackSource(u32 a, u8 *b, s32 c);
}

extern "C" {
void CommSyncVar_SetVar(s32 a, void *b, s32 c, s32 d);
}

extern "C" {
s32 func_02095478(void *p, s32 i);
}

extern "C" {
BOOL PlayerActor_GetSlotAction(s32 *out, s32 a, s32 idx);
}

extern "C" {
BOOL PlayerActor_GetSlotAngle(s16 *out, s32 a, s32 idx);
}

extern "C" {
u32 func_02095720(s32 idx);
}

extern "C" {
u32 func_02095758(s32 idx);
}

extern "C" {
Unk_02095774_Ent *PlayerActor_Get(s32 idx);
}

extern "C" {
BOOL PlayerActor_GetSlotPosXZ(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx);
}

extern "C" {
s32 func_020a03f0();
}

extern "C" {
s32 Net_GetJoiningAid();
}

extern "C" {
s32 NetSession_GetLastSyncSlot();
}

extern "C" {
Unk_0209579c_Rec *func_02002d3c(s32 a, s32 b);
}

extern "C" {
Unk_02095774_Ent *func_02095204(s32 idx);
}

extern "C" {
u32 PlayerSession_FindFreeGfxSlot();
}

extern "C" {
void PlayerSession_SetGfxSlot(s32 idx, u32 v);
}

extern "C" {
s32 func_02094348();
}

extern "C" {
void func_02094308(s32 idx, void *pos, void *rot, u32 flags);
}

extern "C" {
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
}

extern "C" {
u8 *func_020952b0(s32 idx);
}

extern "C" {
s32 *func_020952bc(s32 idx);
}

extern "C" {
s32 *func_020952a0(s32 idx);
}

extern "C" {
s16 *func_02095294(s32 idx);
}

extern "C" {
void ProcBase_RequestDelete(void *p);
}

extern "C" {
u8 NetArea_GetSlotScene(s32 idx);
}

extern "C" {
void func_02094360(s32 *idx, u8 *b, s32 *v, s32 *c, s32 *d, s32 *e);
}

extern "C" {
s32 func_0208f1c0(void *p);
}

extern "C" {
void *func_0208f158(void *p);
}

extern "C" {
s32 func_02065578(void *p);
}

extern "C" {
s32 func_0208f198(void *p);
}

extern "C" {
s32 func_0208f15c(void *p);
}

extern "C" {
s32 func_02063b8c(u32 n);
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void func_02065b28(void *p);
}

extern "C" {
void *func_02096f44(void *p);
}

extern "C" {
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_02065c94(void *p);
}

extern "C" {
s32 BottleLetter_IsBottleInTown();
}

extern "C" {
s32 BottleLetter_PlaceBottle();
}

extern "C" {
s32 BottleLetter_CreateGameLetter(u8 *p);
}

extern "C" {
s32 func_02096e78(void *p);
}

extern "C" {
void func_02096f10(void *p, s32 v);
}

extern "C" {
Unk_02095dcc_Grid *TownBlockMap_Get();
}

extern "C" {
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
void Town_GetUpdater();
}

extern "C" {
s32 Town_WashUpBottle();
}

extern "C" {
void func_02065640(void *a, void *b, void *c);
}

extern "C" {
void *func_020991e4();
}

extern "C" {
void *PlayerData_GetCurrent();
}

extern "C" {
void *func_020986c8(void *a);
}

extern "C" {
void func_0203c42c(void *a, u16 *b, s32 c, s32 d);
}

extern "C" {
void func_0206f604(s32 a, s32 b);
}

extern "C" {
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
void ItemPick_FromRange(u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}

extern "C" {
void func_02063388(ItemPickSpec *o);
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

class Unk_020e1c88 {
public:
    static GameProc *vfunc_48();
};

struct Unk_020e1cd0_Rec {
    GameProc *(*fn)();
    s16 a;
    s16 b;
};

class Unk_020e1ce0 : public GameProc {
public:
    Unk_020e1ce0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_020e1ce0();
};
static inline void Unk_0209579c_Set(s16 *d, s16 a, s16 b, s16 c) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

Unk_020e1cd0_Rec data_020e1cd0 = {&Unk_020e1c88::vfunc_48, 10, 14};

GameProc *Unk_020e1c88::vfunc_48() { return new Unk_020e1ce0(); }

Unk_020e1ce0::Unk_020e1ce0() {}

Unk_020e1ce0::~Unk_020e1ce0() {}

BOOL Unk_020e1ce0::vfunc_00() { return TRUE; }

BOOL Unk_020e1ce0::onExecute() {
    CommManager *g;
    s32 i, m1;
    s32 *p8;
    u8 *pc;
    s32 *r4;
    s16 *p10;
    s32 idx;
    u8 c;
    s16 s;
    s32 v, x, y;
    i = 3;
    g = gCommManager;
    m1 = -1;
    do {
        if (_ZN11CommManager12isSlotActiveEi(g, i) && !_ZN11CommManager7isMyAidEj(g, i)) {
            idx = i;
            c = NetArea_GetSlotScene(i);
            p8 = func_020952bc(idx);
            pc = func_020952b0(idx);
            r4 = func_020952a0(idx);
            p10 = func_02095294(idx);
            if (c != 0xc && c != 0xd && c != 0xe && c != 0x2f && c != 0x2e) {
                if (PlayerActor_GetSlotAction(&v, m1, idx)) {
                    if (PlayerActor_GetSlotPosXZ(&c, &x, &y, m1, idx)) {
                        if (PlayerActor_GetSlotAngle(&s, m1, idx)) {
                            func_02094360(&idx, &c, p8, &v, &x, &y);
                            *p8 = v;
                            *pc = c;
                            s32 yt = y;
                            r4[0] = x;
                            r4[1] = 0;
                            r4[2] = yt;
                            *p10 = s;
                        }
                    }
                }
            }
        }
        i--;
    } while (i >= 0);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64)) {
        Unk_02095774_Ent *o = func_02095204(4);
        if (o) {
            s32 n = g->unk_68;
            if (n < 4) {
                CommSyncVar_SetVar(n + 4, (u8 *)o + 0x8e, 0, 0);
                CommSyncVar_SetVar(n, o->unk_5c, 0, 0);
                CommSyncVar_SetVar(n + 8, 0, 0, 0);
            }
        }
    }
    return TRUE;
}

BOOL Unk_020e1ce0::onDraw() { return TRUE; }

BOOL Unk_020e1ce0::vfunc_0c() { return TRUE; }

