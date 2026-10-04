#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/Unk_02002804_Buf.h"
#include "gfx/Unk_02002848_Data.h"
#include "actor/Unk_02002cb0_Vec.h"
#include "actor/Unk_02002f14_S16Vec.h"
#include "actor/Unk_02002f14_S32Vec.h"
#include "actor/Unk_02002f14_Node.h"
#include "gfx/ViewFrustum.h"
#include "gfx/AbAllObjGfx.h"
#include "npc/VillagerId.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

// ---------------------------------------------------------------------------------------------------------------------
// Externs

extern "C" {
extern u16 sGfx3dClearColor;
}

extern "C" {
extern u32 sGfx3dClearDepth;
}

extern "C" {
extern u16 sDefaultToonTable[32];
}

extern "C" {
extern u8 gViewMtxInv[];
}

extern "C" {
extern u8 data_02135934[];
}

extern "C" {
extern u32 sAbAllObjCharPath[];
}

extern "C" {
extern u32 sAbAllObjPalettePath[];
}

extern "C" {
extern u32 sPersonalityFileNameFmt[];
}

extern "C" {
extern u32 sPersonalityPrefixes[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern u32 **gProfileTable;
}

extern "C" {
extern u32 gSaveTownId;
}

extern "C" {
extern u32 sPersonalityVoiceTypes[];
}

extern "C" {
extern void *gActorDefaultParent;
}

extern "C" {
extern u8 gViewFrustum[];
}

extern "C" {
void G3X_SetClearColor(u16 a, u32 b, u32 c, u32 d, u32 e);
}

extern "C" {
void DC_FlushRange(void *p, u32 n);
}

extern "C" {
void G3X_SetToonTable(void *p);
}

extern "C" {
void MTX_Inverse43(void *a, void *b);
}

extern "C" {
void G3X_Reset(void);
}

extern "C" {
void GX_SetBankForTex(u32 a);
}

extern "C" {
void GX_SetBankForTexPltt(u32 a);
}

extern "C" {
void func_02114b00(void);
}

extern "C" {
void G3X_Init(void);
}

extern "C" {
void G3X_InitTable(void);
}

extern "C" {
void G3X_InitMtxStack(void);
}

extern "C" {
void G3i_PerspectiveW_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
}

extern "C" {
void NNS_G3dInit(void);
}

extern "C" {
void GX_LoadOBJ(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadOBJ(void *p, u32 a, u32 b);
}

extern "C" {
void GX_LoadOBJPltt(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadOBJPltt(void *p, u32 a, u32 b);
}

extern "C" {
void Mem_Free(void *p);
}

extern "C" {
void *File_Load(void *p);
}

extern "C" {
void FS_InitFile(void *p);
}

extern "C" {
void func_020e79a0(void *list, void *node);
}

extern "C" {
void func_020e7968(void *list, void *node);
}

extern "C" {
void func_020e8388(void *m, s32 a, s32 b, s32 c);
}

extern "C" {
void func_020e8434(void *m, s32 a);
}

extern "C" {
void func_020e8404(void *m, s32 a);
}

extern "C" {
void func_020e7b98(s32 a, s32 b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void VEC_Add(void *a, void *b, void *c);
}

extern "C" {
void TownId_Assign(void *p, void *s);
}

extern "C" {
u32 TownId_IsValid(void *p);
}

extern "C" {
void TownId_Clear(void *p);
}

extern "C" {
u32 Villager_GetSpeciesName(u32 a, u32 b);
}

extern "C" {
void func_020639e8(void *buf, void *fmt, u32 a, u32 b);
}

extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}

extern "C" {
void *ProcList_FindByProfile(void *list, u32 id, void *p);
}

extern "C" {
void *ProcList_FindById(void *list, u32 id);
}

extern "C" {
void GameProc_CreateChild(void *a, void *b, void *c, u32 d);
}


extern "C" {
void func_020030b4_dummy(void);
}



extern Unk_02002848_Data gViewMtx;
extern Unk_02002848_Data data_02135934_;


extern AbAllObjGfx sAbAllObjGfx;





// list head (8 bytes, zeroed by an inline constructor: the unit's __sinit) and two pointers
struct Unk_0213c874 {
    u32 head;
    u32 tail;
    Unk_0213c874() {
        head = 0;
        tail = 0;
    }
};

Unk_0213c874 gActorList;
void *sActorSpawnPos;
void *sActorSpawnRot;

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 status);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 status);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 status);
    virtual BOOL preDraw();
    virtual BOOL postDraw(s32 status);
    virtual ~Actor() { func_020e79a0(&gActorList, &listNode); }

    void calcModelMatrix(void *out);
    void updatePosition(Unk_02002cb0_Vec *v);
    void calcVelocity();
    void applyVelocity(Unk_02002cb0_Vec *v);
    void setCullParams(s32 a, s32 b, s32 c);
    static void spawn(void *a, void *b, void *c, void *d, void *e);
    static void setSpawnTransform(void *a, void *b);
    static void *findByProfile(u32 id, Actor *o);
    static void *findById(u32 id);

    /* 0x50 */ Unk_02002f14_Node listNode;
    /* 0x5c */ s32 position;
    /* 0x60 */ s32 positionY;
    /* 0x64 */ s32 positionZ;
    /* 0x68 */ s32 prevPosition;
    /* 0x6c */ s32 prevPositionY;
    /* 0x70 */ s32 prevPositionZ;
    /* 0x74 */ u8 viewPos[0x18];
    /* 0x8c */ s16 rotX;
    /* 0x8e */ s16 rotY;
    /* 0x90 */ s16 rotZ;
    /* 0x92 */ s16 moveAngleX;
    /* 0x94 */ u16 moveAngleY;
    /* 0x96 */ s16 moveAngleZ;
    /* 0x98 */ s32 speed;
    /* 0x9c */ s32 gravity;
    /* 0xa0 */ s32 maxFallSpeed;
    /* 0xa4 */ s32 velocity;
    /* 0xa8 */ s32 velocityY;
    /* 0xac */ s32 velocityZ;
    /* 0xb0 */ u32 actorFlags;
    /* 0xb4 */ s32 cullHeight;
    /* 0xb8 */ s32 cullRadius;
    /* 0xbc */ s32 cullDepth;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ s32 drawPos;
    /* 0xc8 */ s32 drawPosY;
    /* 0xcc */ s32 drawPosZ;
    /* 0xd0 */ u16 drawTilt;
};


extern "C" u32 VillagerId_GetPersonality(VillagerId *o);
extern "C" u32 Villager_PersonalityToGender(u32 t);
extern "C" u32 VillagerId_IsValidSpecies(u32 id);
extern "C" u32 Villager_PersonalityToVoiceType(u32 t);
extern "C" void Villager_MakePersonalityFileName(void *buf, u32 size, u32 arg, u32 idx);

extern "C" void Gfx3d_InitEngine(void);
// prototypes (test harness)
extern "C" u32 VillagerId_GetVoiceType(VillagerId *o);
extern "C" u32 VillagerId_GetSpecies(VillagerId *o);
extern "C" u32 VillagerId_IsValidSpecies(u32 id);
extern "C" void Math_AngleXZ(s32 *a, s32 *b);

extern "C" u32 VillagerId_GetVoiceType(VillagerId *o) { return Villager_PersonalityToVoiceType(o->personality); }

extern "C" u32 VillagerId_GetSpecies(VillagerId *o) { return o->species; }

extern "C" u32 VillagerId_IsValidSpecies(u32 id) {
    if (id < 0x96) return TRUE;
    return FALSE;
}

u32 VillagerId::getName(u32 arg) {
    u32 r = 0;
    if (isValid() == 1) r = Villager_GetSpeciesName(arg, species);
    return r;
}

Actor::Actor() {
    listNode.prev = 0;
    listNode.next = 0;
    listNode.owner = this;
    func_020e7968(&gActorList, &listNode);
    Unk_02002f14_S32Vec *v = (Unk_02002f14_S32Vec *)sActorSpawnPos;
    if (v) {
        position = v->x;
        positionY = v->y;
        positionZ = v->z;
    }
    Unk_02002f14_S16Vec *w = (Unk_02002f14_S16Vec *)sActorSpawnRot;
    if (w) {
        rotX = w->x;
        rotY = w->y;
        rotZ = w->z;
        Unk_02002f14_S16Vec *x = (Unk_02002f14_S16Vec *)sActorSpawnRot;
        moveAngleX = x->x;
        moveAngleY = x->y;
        moveAngleZ = x->z;
    }
    u32 *e = gProfileTable[profile];
    actorFlags = e[2];
    setCullParams(e[3], e[4], e[5]);
}

BOOL Actor::vfunc_04() {
    if (ProcBase::vfunc_04()) return TRUE;
    return FALSE;
}

void Actor::postCreate(s32 status) {
    GameProc::postCreate(status);
    actorFlags |= 4;
}

BOOL Actor::preDelete() {
    if (ProcBase::preDelete()) return TRUE;
    return FALSE;
}

BOOL Actor::vfunc_14(s32 status) { return ProcBase::vfunc_14(status); }

BOOL Actor::preExecute() {
    s32 r4;
    if (!ProcBase::preExecute()) return FALSE;
    prevPosition = position;
    prevPositionY = positionY;
    prevPositionZ = positionZ;
    if (cullRadius) {
        s32 x = drawPosZ + func_01ffcb0c(cullHeight, data_02135f44[(drawTilt >> 4) * 2]);
        s32 z = drawPosY + func_01ffcb0c(cullHeight, data_02135f44[(drawTilt >> 4) * 2 + 1]);
        s32 v[3];
        v[0] = drawPos;
        v[1] = z;
        v[2] = x;
        r4 = ((ViewFrustum *)gViewFrustum)->testSphere(&gViewMtx, v, cullRadius, (s32 *)viewPos);
    }
    actorFlags &= ~4;
    if (actorFlags & 3) {
        if (r4 > cullDepth) {
            actorFlags |= 4;
            if (actorFlags & 1) return FALSE;
        }
    }
    return TRUE;
}

BOOL Actor::vfunc_20(u32 status) { return ProcBase::vfunc_20(status); }

BOOL Actor::preDraw() {
    if (!ProcBase::preDraw()) return FALSE;
    if ((actorFlags & 4) && (actorFlags & 2)) return FALSE;
    return TRUE;
}

BOOL Actor::postDraw(s32 status) { return ProcBase::postDraw(status); }

void *Actor::findById(u32 id) {
    void *r = ProcList_FindById(&gActorList, id);
    if (r) return ((Unk_02002f14_Node *)r)->owner;
    return 0;
}

void *Actor::findByProfile(u32 id, Actor *o) {
    void *r;
    if (o != 0) {
        r = ProcList_FindByProfile(&gActorList, id, &o->listNode);
    } else {
        r = ProcList_FindByProfile(&gActorList, id, 0);
    }
    if (r) return ((Unk_02002f14_Node *)r)->owner;
    return 0;
}

void Actor::setSpawnTransform(void *a, void *b) {
    sActorSpawnPos = a;
    sActorSpawnRot = b;
}

void Actor::spawn(void *a, void *b, void *c, void *d, void *e) {
    void *t = e;
    if (t == 0) t = gActorDefaultParent;
    setSpawnTransform(c, d);
    GameProc_CreateChild(a, t, b, 3);
}

void Actor::setCullParams(s32 a, s32 b, s32 c) {
    cullHeight = a;
    cullRadius = b;
    cullDepth = c;
}

void Actor::applyVelocity(Unk_02002cb0_Vec *v) {
    VEC_Add(&position, &velocity, &position);
    if (v) {
        position = position + v->pushX;
        positionZ = positionZ + v->pushZ;
    }
}

void Actor::calcVelocity() {
    if (speed == 0) {
        s32 v = maxFallSpeed;
        s32 w = velocityY + gravity;
        if (w >= v) v = w;
        velocity = 0;
        velocityY = v;
        velocityZ = 0;
    } else {
        s32 r = func_01ffcb0c(speed, data_02135f44[(moveAngleY >> 4) * 2 + 1]);
        s32 v = maxFallSpeed;
        s32 w = velocityY + gravity;
        if (w >= v) v = w;
        velocity = func_01ffcb0c(speed, data_02135f44[(moveAngleY >> 4) * 2]);
        velocityY = v;
        velocityZ = r;
    }
}

void Actor::updatePosition(Unk_02002cb0_Vec *v) {
    calcVelocity();
    applyVelocity(v);
}

extern "C" void Math_AngleXZ(s32 *a, s32 *b) {
    func_020e7b98(b[0] - a[0], b[2] - a[2]);
}

void Actor::calcModelMatrix(void *out) {
    u32 m[12];
    func_020e8388(m, drawPos, drawPosY, drawPosZ);
    func_020e8434(m, (s16)drawTilt);
    func_020e8404(m, rotY);
    if (rotX != 0) func_020e8434(m, rotX);
    *(Unk_02002848_Data *)out = *(Unk_02002848_Data *)m;
}

