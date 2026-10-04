#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/Unk_02002804_Buf.h"
#include "gfx/Unk_02002848_Data.h"
#include "actor/Unk_02002cb0_Vec.h"
#include "actor/Unk_02002f14_S16Vec.h"
#include "actor/Unk_02002f14_S32Vec.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

// ---------------------------------------------------------------------------------------------------------------------
// Externs



extern "C" {
extern u16 sDefaultToonTable[32];
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
extern u8 gActorList[];
}

extern "C" {
extern void *sActorSpawnPos;
}

extern "C" {
extern void *sActorSpawnRot;
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
s32 func_02039eb8(void *a, void *b, void *c, void *d, void *e);
}

extern "C" {
void func_020030b4_dummy(void);
}



extern Unk_02002848_Data data_02135934_;

u16 sGfx3dClearColor;
u32 sGfx3dClearDepth;
u8 gViewMtxInv[0x30];
Unk_02002848_Data gViewMtx;

// Object with two heap pointers at +0x48 and +0x4c, first method func_020029e8
class AbAllObjGfx {
public:
    AbAllObjGfx();
    ~AbAllObjGfx();
    void uploadChars();
    void uploadPalette();
    void freeChars();
    void freePalette();
    BOOL loadChars();
    BOOL loadPalette();

    /* 0x00 */ u8 unk_00[0x48];
    /* 0x48 */ void *paletteBuf;
    /* 0x4c */ void *charBuf;
};

extern AbAllObjGfx sAbAllObjGfx;

struct Unk_02002f14_Node {
    /* 0x00 */ void *prev;
    /* 0x04 */ void *next;
    /* 0x08 */ void *owner;
};




class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

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

// Class with a type byte at +0x0a and an id byte at +0x0b (base class unknown, 0xc bytes in total)
class VillagerId {
public:
    u32 getName(u32 arg);
    void makeFileName(void *buf, u32 size, u32 arg);
    u32 getGender();
    void set(u32 id, u32 type, void *s);
    u32 isValid();

    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 personality;
    /* 0x0b */ u8 species;
};

extern "C" u32 VillagerId_GetPersonality(VillagerId *o);
extern "C" u32 Villager_PersonalityToGender(u32 t);
extern "C" u32 VillagerId_IsValidSpecies(u32 id);
extern "C" u32 Villager_PersonalityToVoiceType(u32 t);
extern "C" void Villager_MakePersonalityFileName(void *buf, u32 size, u32 arg, u32 idx);

extern "C" void Gfx3d_InitEngine(void);
extern "C" void Gfx3d_LoadDefaultToonTable(void);

extern "C" void Gfx3d_InitEngine(void) {
    G3X_Init();
    G3X_InitTable();
    G3X_InitMtxStack();
    *(vu16 *)0x4000060 &= 0xffffcffd;
    *(vu16 *)0x4000060 = (*(vu16 *)0x4000060 & 0xffffcfff) | 0x10;
    *(vu16 *)0x4000060 = (*(vu16 *)0x4000060 & 0xffffcfff) | 8;
    *(vu16 *)0x4000060 &= 0xcfdf;
    *(vu32 *)0x4000580 = 0xbfff0000;
    G3i_PerspectiveW_(0x579, 0xf09, 0x1555, 0x1000, 0x3e8000, 0x1000, 1, 0);
    *(vu32 *)0x400044c = 0;
    *(vu32 *)0x4000540 = 3;
    NNS_G3dInit();
    Gfx3d_LoadDefaultToonTable();
    G3X_SetClearColor(0, 0, 0x7fff, 0x3f, 1);
    sGfx3dClearColor = 0;
    sGfx3dClearDepth = 0x7fff;
}

extern "C" void Gfx3d_Init(void) {
    Gfx3d_InitEngine();
    GX_SetBankForTex(6);
    GX_SetBankForTexPltt(0x10);
    func_02114b00();
    *(vu16 *)0x4000060 = (*(vu16 *)0x4000060 & 0xffffcfff) | 4;
    *(vu16 *)0x4000340 = 0;
    *(vu16 *)0x4000060 = (*(vu16 *)0x4000060 & 0xffffcfff) | 8;
    G3X_SetClearColor(0, 0, 0x7fff, 0, 1);
    gViewMtx = *(Unk_02002848_Data *)data_02135934;
    MTX_Inverse43(&gViewMtx, gViewMtxInv);
}

extern "C" void Gfx3d_BeginFrame(void) {
    G3X_Reset();
    *(vu32 *)0x4000440 = 3;
    *(vu32 *)0x4000454 = 0;
    *(vu32 *)0x4000440 = 2;
}

extern "C" void Gfx3d_SetViewMatrix(Unk_02002848_Data *src) {
    gViewMtx = *src;
    MTX_Inverse43(&gViewMtx, gViewMtxInv);
}

extern "C" void Gfx3d_LoadDefaultToonTable(void) {
    Unk_02002804_Buf buf = *(Unk_02002804_Buf *)sDefaultToonTable;
    DC_FlushRange(&buf, 0x40);
    vu16 *reg = (vu16 *)0x4000060;
    *reg = *reg & 0xffffcffd;
    G3X_SetToonTable(&buf);
}

extern "C" void Gfx3d_SetClearDepth(u32 v) { sGfx3dClearDepth = v; }

extern "C" void Gfx3d_SetClearColor(u16 v) { sGfx3dClearColor = v; }

extern "C" void Gfx3d_ApplyClearColor(void) {
    G3X_SetClearColor(sGfx3dClearColor, 0, sGfx3dClearDepth, 0x3f, 1);
}

// mwcc 1.2 emits functions in reverse order, but symbol lookup doesn't care

extern "C" BOOL Gfx2d_IsMainScreenLayer(u32 x) {
    if (x <= 2 || x == 7) return TRUE;
    return FALSE;
}

