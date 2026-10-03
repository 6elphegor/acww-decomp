
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0205f7f4_Mtx {
    s32 v[12];
};

struct Unk_0205f8d4_Vec {
    s32 x, y, z;
};

// Actor (see Character): virtual at 0x5c fills a position, position at +0x5c.
class Character : public GameProc {
public:
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c(Unk_0205f8d4_Vec *out);
    u8 pad_50[0xc];
    Unk_0205f8d4_Vec unk_5c;
};

// Local scratch object filled by _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii and cleaned by GroundInfo_Destruct.
struct Unk_0205f92c_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
};

class Unk_0205f8d4;
class Unk_0205fbc8;

typedef void (Unk_0205f8d4::*Unk_0205f8d4_Fn)();

class TexVramSlot {
public:
    TexVramSlot();
    virtual ~TexVramSlot();
    void clear(void);
    void alloc(void *a, void *b, void *c);
    void relocateTexture(void *p);
    u8 pad_04[0x10];
};

class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    BOOL release(void);
    void setFromFile(void *a);
    u8 pad_04[0x98];
};

class TexVramTask {
public:
    TexVramTask();
    virtual BOOL vfunc_00();
    void cancel(void);
    void clear(void);
    BOOL requestTexResource(u32 *a, u8 b);
    u8 pad_04[9];
    u8 unk_0d;
    u8 pad_0e[0x0e];
};

struct CommManager {
    u8 pad_00[0x6c];
    u8 unk_6c;
};
class GroundInfo {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    GroundInfo() {}
    GroundInfo *_ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_0205f8d4_Vec *v, s32 a, s32 b);
    ~GroundInfo();
};

class Unk_0205f6b4_Obj {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0205f6b4_Obj() {}
    Unk_0205f6b4_Obj *_ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_0205f8d4_Vec *v, s32 a, s32 b);
};
extern "C" {
extern u32 data_021c61b0;
extern CommManager *gCommManager;
extern u8 data_021e6e3c[];
extern u8 gSaveHouse[];

s32 Effect_End(s32 h);
s32 Effect_Create(u32 id, void *a, u32 b, u32 c);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_0205f92c_Buf *p, Unk_0205f8d4_Vec *v, s32 a, s32 b);
void GroundInfo_Destruct(Unk_0205f92c_Buf *p);
BOOL FishShadow_FleeFromPlayer(void *p);
void FishCatch_StartLift(void *p, s32 a);
void FishCatch_EndForShadow(void *p);
void FishCatch_IsLandedForShadow(void *p);
BOOL FishShadow_CheckReelResult(void *p);
BOOL FishShadow_TryHook(void *p);
void *NNS_G3dGetTex(void *p);
void File_LoadToBuffer(char *name, void *p, u32 size);
s32 func_020639e8(char *buf, char *fmt, ...);
s32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(s32 a);
u32 Scene_GetMaxCharacters(s32 a);
u32 func_02084fbc();
void func_020e885c();
void func_020e877c();
void *Heap_AllocAligned(u32 heap, u32 size, u32 align);
s32 func_0205ba88();
void func_0205baa4();
void *func_02060550(void *a, s32 b);
void func_020607c8(void *a, u16 *b);
u16 *func_020607d4(void *a);
u32 func_0205ffac();
u32 func_0205ffb0();
u32 func_0205ffb4();
u32 func_0205ffbc();
char *func_0205ffc4(u32 n);
void func_0206007c(u8 *bits, u32 i);
void func_020600d4(u8 *bits, u32 i);
BOOL func_02060130(u8 *bits, u32 i);
BOOL func_02060190(u16 *p);
BOOL func_020601a4(s32 a, u16 *p);
extern s16 data_02135f44[];

s32 func_0205bcb4();
s32 func_0205bcd0();
void NetBuf_WriteU16(void *p, s32 v);
void CommRecord_PackSource(void *p, s32 a, u8 b);
BOOL NetArea_IsLocalOwner();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL func_02072e44(void *p);
BOOL _ZN11CommManager7isMyAidEj(void *p, s32 h);
u16 NetBuf_ReadU16();
void CommRecord_UnpackSource(void *p, u8 *a, u8 *b);
BOOL SceneId_IsTown(u32 v);
void *TownBlockMap_Get();
void *HouseRoomMaps_GetForScene(u32 v);
void BlockMap_SetItemAtUnit(void *o, u16 *v, s32 a, s32 b, s32 c);
void BlockMap_SetBuriedAtUnit(void *o, s32 a, s32 b);
void BlockMap_ClearBuriedAtUnit(void *o, s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020e7870(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 Effect_SetPosition(s32 h, Unk_0205f8d4_Vec *v, void *a, s32 b);
void func_020e9790(Unk_0205f8d4_Vec *out, Unk_0205f8d4_Vec *in, s32 n);
void VEC_Add(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, Unk_0205f8d4_Vec *out);
void VEC_Subtract(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, Unk_0205f8d4_Vec *out);
s32 func_020e9650(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b);
void func_020e9768(Unk_0205f8d4_Vec *v, s32 n);
void func_020e8388(Unk_0205f7f4_Mtx *m, s32 x, s32 y, s32 z);
void FieldFish_StartCastSplash();
void WorldCurve_FromCurved(void *p, Unk_0205f8d4_Vec *v);
void WorldCurve_ToCurved(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b);
void _ZN5Model10drawScaledEPi(void *e, s32 a);
BOOL func_0205f1e8(Unk_0205f8d4_Vec *a, s32 k, Unk_0205f8d4_Vec *b, s32 *c, u8 flag);
void func_0205f284(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, s32 *c, s32 *d, u8 mode);
}

class Unk_0205f8d4 {
public:
    void func_0205f8d4();
    void func_0205f92c(s32 state);
    void func_0205fae8(Unk_0205f8d4_Vec *v);
    void func_0205faf8(Unk_0205f8d4_Vec *v);
    void func_0205fb08();
    void func_0205fb20();
    void func_0205fb34();
    void func_0205fb40();
    BOOL func_0205fb70();
    BOOL func_0205fb88();
    BOOL func_0205fba8();
    void *func_0205fbb8();
    void func_0205fbbc(void *p);
    void func_0205fbc0(s32 v);
    u8 func_0205fbc4();
    void func_0205fccc();
    void func_0205fd0c(u32 id, Character *actor, u32 n);
    void func_0205fd7c();
    void func_0205fd80();

    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    Unk_0205f8d4_Vec unk_08;
    s32 unk_14;
    s32 unk_18;
    Unk_0205f8d4_Vec unk_1c;
    Character *unk_28;
    void *unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
    u8 pad_39[3];
    s32 unk_3c;
};

class Unk_0205fbc8 {
public:
    Unk_0205fbc8();
    ~Unk_0205fbc8();
    Unk_0205f8d4 *func_0205fbc8(s32 idx);
    void func_0205fbec(s32 idx, Unk_0205f8d4 *p);
    BOOL func_0205fbfc(s32 idx);
    void func_0205fc48(s32 idx);
    void func_0205fc6c(s32 idx, u32 n);
    void func_0205fc98(s32 idx);
    CachedModel *func_0205fd94(s32 idx);
    TexVramTask *func_0205fda4(s32 idx);
    TexVramSlot *func_0205fdb0(s32 idx);
    void *func_0205fdbc(s32 idx);
    void func_0205fdc4();
    void func_0205fe14();

    void *unk_00[9];
    TexVramSlot unk_24[9];
    TexVramTask unk_d8[9];
    CachedModel unk_1d4[9];
    Unk_0205f8d4 *unk_750[9];
};

class Unk_0205f360 : public Unk_0205f8d4 {
public:
    void func_0205f2fc();
    void func_0205f360();
    void func_0205f388();
    void func_0205f3c4();
    void func_0205f400();
    void func_0205f4e4();
    void func_0205f52c();
    void func_0205f6b4();
    void func_0205f77c();
    void func_0205f7ec();
    void func_0205f7f0();
};

typedef void (Unk_0205f360::*Unk_0205f360_Fn)();

extern "C" void _ZN12Unk_0205f36013func_0205f360Ev(void);
extern "C" void _ZN12Unk_0205f36013func_0205f388Ev(void);
extern "C" void _ZN12Unk_0205f36013func_0205f3c4Ev(void);
extern "C" void _ZN12Unk_0205f36013func_0205f400Ev(void);
extern "C" void _ZN12Unk_0205f36013func_0205f52cEv(void);
extern "C" void _ZN12Unk_0205f36013func_0205f4e4Ev(void);
extern "C" void _ZN12Unk_0205f36013func_0205f6b4Ev(void);
extern "C" void _ZN12Unk_0205f36013func_0205f77cEv(void);
extern "C" void _ZN12Unk_0205f36013func_0205f7ecEv(void);
extern "C" void _ZN12Unk_0205f36013func_0205f7f0Ev(void);

Unk_0205fbc8 data_021c7468;
void *data_020dc4c4[2] = {(void *)_ZN12Unk_0205f36013func_0205f388Ev, 0};
void *data_020dc504[2] = {(void *)_ZN12Unk_0205f36013func_0205f7f0Ev, 0};
void *data_020dc4fc[2] = {(void *)_ZN12Unk_0205f36013func_0205f7ecEv, 0};
void *data_020dc4f4[2] = {(void *)_ZN12Unk_0205f36013func_0205f77cEv, 0};
void *data_020dc4ec[2] = {(void *)_ZN12Unk_0205f36013func_0205f6b4Ev, 0};
void *data_020dc4bc[2] = {(void *)_ZN12Unk_0205f36013func_0205f360Ev, 0};
void *data_020dc4e4[2] = {(void *)_ZN12Unk_0205f36013func_0205f4e4Ev, 0};
void *data_020dc4d4[2] = {(void *)_ZN12Unk_0205f36013func_0205f400Ev, 0};
void *data_020dc4cc[2] = {(void *)_ZN12Unk_0205f36013func_0205f3c4Ev, 0};
void *data_020dc4dc[2] = {(void *)_ZN12Unk_0205f36013func_0205f52cEv, 0};
Unk_0205f360_Fn data_021c7418[10] = {
    *(Unk_0205f360_Fn *)data_020dc504,
    *(Unk_0205f360_Fn *)data_020dc4fc,
    *(Unk_0205f360_Fn *)data_020dc4f4,
    *(Unk_0205f360_Fn *)data_020dc4ec,
    *(Unk_0205f360_Fn *)data_020dc4dc,
    *(Unk_0205f360_Fn *)data_020dc4e4,
    *(Unk_0205f360_Fn *)data_020dc4d4,
    *(Unk_0205f360_Fn *)data_020dc4cc,
    *(Unk_0205f360_Fn *)data_020dc4c4,
    *(Unk_0205f360_Fn *)data_020dc4bc
};
char data_021c7404[0x14];

static inline BOOL Unk_0205fbfc_Is2(u8 v) { return v == 2 ? TRUE : FALSE; }
static inline BOOL Unk_0205fbfc_Is1(u8 v) { return v == 1 ? TRUE : FALSE; }

extern "C" void func_0206000c()
{
    func_0205baa4();
    data_021c7468.func_0205fe14();
    if (data_021c61b0 != 0) {
        func_020e877c();
    }
}

extern "C" void func_0205fff4()
{
    data_021c7468.func_0205fdc4();
    func_0205ba88();
}

extern "C" Unk_0205f8d4 *func_0205ffe4(s32 idx)
{
    return data_021c7468.func_0205fbc8(idx);
}

extern "C" char *func_0205ffc4(u32 n)
{
    func_020639e8(data_021c7404, "/PItm/Uki0/%d.nsbmd", n);
    return data_021c7404;
}

extern "C" u32 func_0205ffbc() { return 0x4d8; }

extern "C" u32 func_0205ffb4() { return 0x200; }

extern "C" u32 func_0205ffb0() { return 0; }

extern "C" u32 func_0205ffac() { return 0x20; }

Unk_0205fbc8::Unk_0205fbc8()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_00[i] = 0;
        unk_750[i] = 0;
    }
}

Unk_0205fbc8::~Unk_0205fbc8()
{
}

void Unk_0205fbc8::func_0205fe14()
{
    u32 a = gCommManager->unk_6c;
    u32 n = Scene_GetMaxPlayers(Scene_GetCurrent());
    u32 i;
    u32 m;
    if (a < n) {
        n = a;
    }
    if (n != 0) {
        a = n;
    } else {
        a = 1;
    }
    m = Scene_GetMaxCharacters(Scene_GetCurrent()) + func_02084fbc() - a;
    for (i = 0; i < n; i++) {
        u32 x = func_0205ffb4();
        u32 y = func_0205ffb0();
        unk_24[i].alloc((void *)x, (void *)y, (void *)func_0205ffac());
    }
    for (i = 4; i < m + 4; i++) {
        u32 x = func_0205ffb4();
        u32 y = func_0205ffb0();
        unk_24[i].alloc((void *)x, (void *)y, (void *)func_0205ffac());
    }
    u32 heap = data_021c61b0;
    for (i = 0; i < n; i++) {
        unk_00[i] = Heap_AllocAligned(heap, func_0205ffbc(), 4);
    }
    u32 j = 4;
    a = 4;
    for (; j < m + 4; j++) {
        unk_00[j] = Heap_AllocAligned(heap, func_0205ffbc(), a);
    }
}

void Unk_0205fbc8::func_0205fdc4()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_24[i].clear();
    }
    for (i = 0; i < 9; i++) {
        unk_00[i] = 0;
        unk_750[i] = 0;
    }
    if (data_021c61b0 != 0) {
        func_020e885c();
    }
}

void *Unk_0205fbc8::func_0205fdbc(s32 idx)
{
    return unk_00[idx];
}

TexVramSlot *Unk_0205fbc8::func_0205fdb0(s32 idx)
{
    return &unk_24[idx];
}

TexVramTask *Unk_0205fbc8::func_0205fda4(s32 idx)
{
    return &unk_d8[idx];
}

CachedModel *Unk_0205fbc8::func_0205fd94(s32 idx)
{
    return &unk_1d4[idx];
}

void Unk_0205f8d4::func_0205fd80()
{
    unk_00 = 9;
    unk_28 = 0;
    unk_2c = 0;
    unk_34 = -1;
    unk_3c = -1;
}

void Unk_0205f8d4::func_0205fd7c()
{
}

void Unk_0205f8d4::func_0205fd0c(u32 id, Character *actor, u32 n)
{
    unk_00 = id;
    if (n < 3) {
        data_021c7468.func_0205fbec(id, this);
        data_021c7468.func_0205fc6c(id, n);
    } else {
        data_021c7468.func_0205fbec(id, 0);
        data_021c7468.func_0205fc6c(id, 0);
    }
    void *p = data_021c7468.func_0205fdbc(id);
    data_021c7468.func_0205fc48(id);
    data_021c7468.func_0205fd94(id)->setFromFile(p);
    if (actor) {
        unk_28 = actor;
    }
    unk_04 = 0;
}

void Unk_0205f8d4::func_0205fccc()
{
    data_021c7468.func_0205fd94(func_0205fbc4())->release();
    data_021c7468.func_0205fc98(func_0205fbc4());
    data_021c7468.func_0205fbec(func_0205fbc4(), 0);
    unk_00 = 9;
}

void Unk_0205fbc8::func_0205fc98(s32 idx)
{
    if (Unk_0205fbfc_Is1(unk_d8[idx].unk_0d)) {
        unk_d8[idx].cancel();
    } else {
        unk_d8[idx].clear();
    }
}

void Unk_0205fbc8::func_0205fc6c(s32 idx, u32 n)
{
    char *name = func_0205ffc4(n);
    void *p = func_0205fdbc(idx);
    File_LoadToBuffer(name, p, func_0205ffbc());
}

void Unk_0205fbc8::func_0205fc48(s32 idx)
{
    void *h = NNS_G3dGetTex(func_0205fdbc(idx));
    func_0205fdb0(idx)->relocateTexture(h);
}

BOOL Unk_0205fbc8::func_0205fbfc(s32 idx)
{
    TexVramTask *p = func_0205fda4(idx);
    u8 t = p->unk_0d;
    if (Unk_0205fbfc_Is2(t)) {
        return TRUE;
    }
    if (!Unk_0205fbfc_Is1(t)) {
        p->requestTexResource((u32 *)NNS_G3dGetTex(func_0205fdbc(idx)), 1);
    }
    return FALSE;
}

void Unk_0205fbc8::func_0205fbec(s32 idx, Unk_0205f8d4 *p)
{
    unk_750[idx] = p;
}

Unk_0205f8d4 *Unk_0205fbc8::func_0205fbc8(s32 idx)
{
    if (idx >= 4) {
        return 0;
    }
    Unk_0205f8d4 *p = unk_750[idx];
    if (p != 0 && p->unk_04 == 4) {
        return p;
    }
    return 0;
}

u8 Unk_0205f8d4::func_0205fbc4()
{
    return unk_00;
}

void Unk_0205f8d4::func_0205fbc0(s32 v)
{
    unk_3c = v;
}

void Unk_0205f8d4::func_0205fbbc(void *p)
{
    unk_2c = p;
}

void *Unk_0205f8d4::func_0205fbb8()
{
    return unk_2c;
}

BOOL Unk_0205f8d4::func_0205fba8()
{
    if ((u32)(unk_04 - 4) <= 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0205f8d4::func_0205fb88()
{
    if (unk_2c == 0) {
        func_0205f92c(7);
        return FALSE;
    }
    return FishShadow_TryHook(unk_2c);
}

BOOL Unk_0205f8d4::func_0205fb70()
{
    if (unk_2c == 0) {
        return TRUE;
    }
    return FishShadow_CheckReelResult(unk_2c);
}

void Unk_0205f8d4::func_0205fb40()
{
    Unk_0205f92c_Buf buf;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&buf, &unk_08, 1, 1);
    if (buf.unk_30 != 0) {
        unk_08.y = buf.unk_3c + 0xcd;
    }
    GroundInfo_Destruct(&buf);
}

void Unk_0205f8d4::func_0205fb34()
{
    FishCatch_IsLandedForShadow(unk_2c);
}

void Unk_0205f8d4::func_0205fb20()
{
    FishCatch_EndForShadow(unk_2c);
    unk_2c = 0;
}

void Unk_0205f8d4::func_0205fb08()
{
    FishCatch_StartLift((void *)unk_3c, 0);
    unk_2c = 0;
}

void Unk_0205f8d4::func_0205faf8(Unk_0205f8d4_Vec *v)
{
    unk_1c.x = v->x;
    unk_1c.y = v->y;
    unk_1c.z = v->z;
}

void Unk_0205f8d4::func_0205fae8(Unk_0205f8d4_Vec *v)
{
    unk_08.x = v->x;
    unk_08.y = v->y;
    unk_08.z = v->z;
}

void Unk_0205f8d4::func_0205f92c(s32 state)
{
    Unk_0205f8d4_Vec v;
    Unk_0205f92c_Buf buf;
    s32 old;

    if (unk_34 != -1) {
        Effect_End(unk_34);
        unk_34 = -1;
    }
    if (unk_28 == 0) {
        unk_04 = 0;
        return;
    }
    old = unk_04;
    unk_04 = state;
    unk_30 = 0;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&buf, &unk_08, 1, 1);
    switch (state) {
    case 1:
        if (unk_2c != 0) {
            if (FishShadow_FleeFromPlayer(unk_2c)) {
                unk_2c = 0;
            }
        }
        break;
    case 7: {
        Unk_0205f8d4_Vec a, b;
        if (!unk_28->vfunc_5c(&unk_1c)) {
            Unk_0205f8d4_Vec *pv = &unk_28->unk_5c;
            unk_1c.x = pv->x;
            unk_1c.y = pv->y;
            unk_1c.z = pv->z;
        }
        a.x = unk_1c.x;
        a.y = unk_1c.y;
        a.z = unk_1c.z;
        b.x = unk_08.x;
        b.y = unk_08.y;
        b.z = unk_08.z;
        func_0205f284(&a, &b, &unk_14, &unk_18, 1);
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            Effect_Create(0xd, &v, 0, 0);
        }
        break;
    }
    case 8: {
        Unk_0205f8d4_Vec c, d;
        if (!unk_28->vfunc_5c(&unk_1c)) {
            Unk_0205f8d4_Vec *pv = &unk_28->unk_5c;
            unk_1c.x = pv->x;
            unk_1c.y = pv->y;
            unk_1c.z = pv->z;
        }
        c.x = unk_1c.x;
        c.y = unk_1c.y;
        c.z = unk_1c.z;
        d.x = unk_08.x;
        d.y = unk_08.y;
        d.z = unk_08.z;
        func_0205f284(&c, &d, &unk_14, &unk_18, 2);
        break;
    }
    case 5:
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            Effect_Create(0x10, &v, 0, 0);
        }
        break;
    case 4:
        if (old == 6) {
            if (buf.unk_30 != 0) {
                v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = buf.unk_3c;
                Effect_Create(0xf, &v, 0, 0);
            }
        }
        break;
    case 6:
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            unk_34 = Effect_Create(0x11, &v, 0, 0);
        }
        break;
    case 0:
    case 2:
    case 3:
    default:
        break;
    }
    GroundInfo_Destruct(&buf);
}

void Unk_0205f8d4::func_0205f8d4()
{
    data_021c7468.func_0205fbfc(unk_00);
    unk_30++;
    unk_38 = 0;
    if (unk_04 >= 10) {
        func_0205f92c(0);
    }
    (((Unk_0205f360 *)this)->*data_021c7418[unk_04])();
}

extern "C" void func_0205f7f4(u8 *self, Unk_0205f7f4_Mtx *m, s32 arg)
{
    if (*(s32 *)(self + 4) != 0) {
        u8 *e = (u8 *)data_021c7468.func_0205fd94(*self);
        Unk_0205f7f4_Mtx mt = *m;
        Unk_0205f8d4_Vec v;
        if (*(s32 *)(self + 4) <= 1) {
            v.x = mt.v[9];
            v.y = mt.v[10];
            v.z = mt.v[11];
            WorldCurve_FromCurved(self + 8, &v);
        } else {
            v.x = *(s32 *)(self + 8);
            v.y = *(s32 *)(self + 12);
            v.z = *(s32 *)(self + 16);
            if (*(s32 *)(self + 4) == 6) {
                s32 r = (s32)((Unk_0205f8d4 *)self)->func_0205fbb8();
                if (r != 0) {
                    Unk_0205f8d4_Vec t;
                    Unk_0205f8d4_Vec *pv = (Unk_0205f8d4_Vec *)(r + 0x120);
                    t.x = pv->x;
                    t.y = pv->y;
                    t.z = pv->z;
                    VEC_Subtract(&t, &v, &t);
                    func_020e9768(&t, 3);
                    t.y = 0;
                    VEC_Add(&v, &t, &v);
                }
            }
            WorldCurve_ToCurved(&v, &v);
            Unk_0205f7f4_Mtx tmp;
            func_020e8388(&tmp, v.x, v.y, v.z);
            mt = tmp;
        }
        *(Unk_0205f7f4_Mtx *)(e + 0x64) = mt;
        _ZN5Model10drawScaledEPi(e, arg);
    }
}

void Unk_0205f360::func_0205f7f0()
{
}

void Unk_0205f360::func_0205f7ec()
{
}

void Unk_0205f360::func_0205f77c()
{
    if (unk_30 < 0xf) {
        func_0205f2fc();
    } else if (unk_30 >= 0x15) {
        func_0205f92c(1);
    } else {
        s16 ang = (s16)(*(s16 *)((u8 *)unk_28 + 0x8e) - 0x1838);
        u32 idx = (u16)ang >> 4;
        idx = idx * 2;
        unk_08.x += func_01ffcb0c(data_02135f44[idx], 0x640);
        unk_08.z += func_01ffcb0c(data_02135f44[idx + 1], 0x640);
    }
}

void Unk_0205f360::func_0205f6b4()
{
    Unk_0205f6b4_Obj o;
    Unk_0205f8d4_Vec v, a, b, c;
    if (unk_30 < 0xf) {
        func_0205f2fc();
        if (unk_30 == 0xe) {
            a.x = unk_1c.x;
            a.y = unk_1c.y;
            a.z = unk_1c.z;
            b.x = unk_08.x;
            b.y = unk_08.y;
            b.z = unk_08.z;
            func_0205f284(&a, &b, &unk_14, &unk_18, 0);
        }
    } else {
        c.x = unk_1c.x;
        c.y = unk_1c.y;
        c.z = unk_1c.z;
        func_0205f1e8(&c, unk_14, &unk_08, &unk_18, 0);
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
        if (o.unk_30 != 0) {
            s32 y = o.unk_3c;
            if (y >= unk_08.y) {
                func_0205f92c(4);
                unk_08.y = o.unk_3c - 0x333;
                v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = y;
                Effect_Create(0xc, &v, 0, 0);
                unk_38 = 1;
                FieldFish_StartCastSplash();
            }
        }
        GroundInfo_Destruct((Unk_0205f92c_Buf *)&o);
    }
}

void Unk_0205f360::func_0205f52c()
{
    u16 ang;
    Unk_0205f8d4_Vec base;
    GroundInfo o;
    Unk_0205f8d4_Vec v, w;
    Unk_0205f8d4_Vec *pb = (Unk_0205f8d4_Vec *)((u8 *)unk_28 + 0x5c);
    base.x = pb->x;
    base.y = pb->y;
    base.z = pb->z;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 0, 1);
    ang = 0;
    if (o.unk_30 != 0) {
                func_020e9790(&w, (Unk_0205f8d4_Vec *)&o.unk_24, 5);
        ang = func_020e7b98(w.x, w.z);
        VEC_Add(&unk_08, &w, &unk_08);
        s32 y = o.unk_3c;
        s32 c = unk_08.y;
        if (c < y + 0x333) {
            s32 lim = y + 0x19a;
            if (c < lim) {
                unk_08.y = c + 0x66;
                if (unk_08.y >= lim) {
                    v.x = unk_08.x;
                    v.y = unk_08.y;
                    v.z = unk_08.z;
                    v.y = y;
                    Effect_Create(0xf, &v, 0, 0);
                }
            } else {
                unk_08.y = c + 0x66;
            }
        } else {
            unk_08.y = y + 0x30a;
        }
    }
    s32 dist = func_020e9650(&base, &unk_08);
    if (dist >= 0x8000) {
        s32 dx = unk_08.x - base.x;
        s32 dz = unk_08.z - base.z;
        u32 idx = (u16)func_020e7b98(dx, dz) >> 4;
        idx = idx * 2;
        unk_08.x = base.x + func_01ffcb0c(0x7f33, data_02135f44[idx]);
        unk_08.z = base.z + func_01ffcb0c(0x7f33, data_02135f44[idx + 1]);
        if (o.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = Effect_Create(0xe, &v, (u32)&ang, 0);
            } else {
                Effect_SetPosition(unk_34, &v, &ang, 0);
            }
        }
    } else {
        if (unk_34 != -1) {
            if (dist < 0x7e66) {
                Effect_End(unk_34);
                unk_34 = -1;
            } else if (o.unk_30 != 0) {
                    v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = o.unk_3c;
                Effect_SetPosition(unk_34, &v, &ang, 0);
            }
        }
    }
}

void Unk_0205f360::func_0205f4e4()
{
    GroundInfo o;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
    if (o.unk_30 != 0) {
        s32 lim = o.unk_3c - 0x333;
        if (unk_08.y > lim) {
            unk_08.y -= 0x19a;
        } else {
            unk_08.y = lim;
        }
    }
}

void Unk_0205f360::func_0205f400()
{
    if (unk_2c == 0) {
        if (_ZN11CommManager7isMyAidEj((void *)gCommManager, unk_3c)) {
            func_0205f92c(4);
            return;
        }
        GroundInfo o;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
        if (o.unk_30 != 0) {
            Unk_0205f8d4_Vec v;
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = Effect_Create(0x11, &v, 0, 0);
            } else {
                Effect_SetPosition(unk_34, &v, 0, 0);
            }
        }
    } else {
        GroundInfo o;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
        if (o.unk_30 != 0) {
            s32 lim = o.unk_3c + 0x4cd;
            if (unk_08.y < lim) {
                unk_08.y += 0x19a;
            } else {
                unk_08.y = lim;
            }
            Unk_0205f8d4_Vec v;
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = Effect_Create(0x11, &v, 0, 0);
            } else {
                Effect_SetPosition(unk_34, &v, 0, 0);
            }
        }
    }
}

void Unk_0205f360::func_0205f3c4()
{
    Unk_0205f8d4_Vec v;
    v.x = unk_1c.x;
    v.y = unk_1c.y;
    v.z = unk_1c.z;
    if (func_0205f1e8(&v, unk_14, &unk_08, &unk_18, 1)) {
        func_0205f92c(1);
    }
}

void Unk_0205f360::func_0205f388()
{
    Unk_0205f8d4_Vec v;
    v.x = unk_1c.x;
    v.y = unk_1c.y;
    v.z = unk_1c.z;
    if (func_0205f1e8(&v, unk_14, &unk_08, &unk_18, 1)) {
        func_0205f92c(1);
    }
}

void Unk_0205f360::func_0205f360()
{
    unk_08.y += 0x1000;
    if (unk_08.y >= 0x28000) {
        func_0205f92c(0);
    }
}

void Unk_0205f360::func_0205f2fc()
{
    s32 d = _s32_div_f(unk_30 * unk_30 * 0x4800, 0xe1);
    s16 ang = (s16)(*(s16 *)((u8 *)unk_28 + 0x8e) - d);
    u32 idx = (u16)ang >> 4;
    idx = idx * 2;
    unk_08.x -= func_01ffcb0c(data_02135f44[idx], 0x2ee);
    unk_08.z -= func_01ffcb0c(data_02135f44[idx + 1], 0x2ee);
}

extern "C" void func_0205f284(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, s32 *c, s32 *d, u8 mode)
{
    s32 t;
    switch (mode) {
    case 0:
        *c = 0xa3;
        break;
    case 1:
    case 3:
        t = b->y - a->y;
        if (t < 0) t = -t;
        *c = _s32_div_f(t + 0x4000, 100);
        break;
    case 2:
        t = b->y - a->y;
        if (t < 0) t = -t;
        *c = _s32_div_f(t + 0x8000, 100);
        break;
    }
    *d = *c * 10;
}

