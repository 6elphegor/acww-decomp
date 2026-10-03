#include "types.h"
#include "Unk_020d8c7c.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

// ---------------------------------------------------------------------------------------------------------------------
// Externs

extern "C" {
extern u16 data_0213c7a8;
}

extern "C" {
extern u32 data_0213c7ac;
}

extern "C" {
extern u16 data_020d47e4[32];
}

extern "C" {
extern u8 gViewMtxInv[];
}

extern "C" {
extern u8 data_02135934[];
}

extern "C" {
extern u32 data_020d5dfc[];
}

extern "C" {
extern u32 data_020d5de4[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern u32 **gProfileTable;
}

extern "C" {
extern u32 data_021d7352;
}

extern "C" {
extern u32 data_020c6140[];
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
void func_02063990(void *p, void *s);
}

extern "C" {
u32 func_02063954(void *p);
}

extern "C" {
void func_020639a0(void *p);
}

extern "C" {
u32 func_02081550(u32 a, u32 b);
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

struct Unk_02002804_Buf {
    u16 unk_00[32];
};

// 0x30-byte record copied around by Gfx3d_SetViewMatrix and func_02002898
struct Unk_02002848_Data {
    u32 unk_00[12];
};

extern Unk_02002848_Data gViewMtx;
extern Unk_02002848_Data data_02135934_;

// Object with two heap pointers at +0x48 and +0x4c, first method func_020029e8
class Unk_020029e8 {
public:
    Unk_020029e8();
    ~Unk_020029e8();
    void func_020029e8();
    void func_02002a14();
    void func_02002a3c();
    void func_02002a54();
    BOOL func_02002a6c();
    BOOL func_02002a8c();

    /* 0x00 */ u8 unk_00[0x48];
    /* 0x48 */ void *unk_48;
    /* 0x4c */ void *unk_4c;
};

Unk_020029e8 data_0213c81c;

struct Unk_02002f14_Node {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ void *unk_08;
};

struct Unk_02002cb0_Vec {
    /* 0x00 */ u8 unk_00[0x10];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02002f14_S16Vec {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
};

struct Unk_02002f14_S32Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
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

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 unk_74[0x18];
    /* 0x8c */ s16 unk_8c;
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ s16 unk_90;
    /* 0x92 */ s16 unk_92;
    /* 0x94 */ u16 unk_94;
    /* 0x96 */ s16 unk_96;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ u16 unk_d0;
};

// Class with a type byte at +0x0a and an id byte at +0x0b (base class unknown, 0xc bytes in total)
class Unk_02002fc8 {
public:
    u32 func_02002fc8(u32 arg);
    void func_0200301c(void *buf, u32 size, u32 arg);
    u32 func_02003070();
    void func_0200309c(u32 id, u32 type, void *s);
    u32 func_020030b4();

    /* 0x00 */ u8 unk_00[0xa];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" u32 func_02003098(Unk_02002fc8 *o);
extern "C" u32 func_02003084(u32 t);
extern "C" u32 func_02002fec(u32 id);
extern "C" u32 func_02003008(u32 t);
extern "C" void func_0200303c(void *buf, u32 size, u32 arg, u32 idx);

extern "C" void func_02002918(void);
extern "C" void func_02002ab0(void *p);

Unk_020029e8::Unk_020029e8() : unk_48(0), unk_4c(0) {}

Unk_020029e8::~Unk_020029e8() {
    func_02002a54();
    func_02002a3c();
}

extern "C" void func_02002ab8(void) {
    Unk_020029e8 *p = &data_0213c81c;
    func_02002ab0(p);
    BOOL a = p->func_02002a8c();
    BOOL b = p->func_02002a6c();
    if (a) p->func_02002a14();
    if (b) p->func_020029e8();
    p->func_02002a54();
    p->func_02002a3c();
}

extern "C" void func_02002ab0(void *p) { FS_InitFile(p); }

BOOL Unk_020029e8::func_02002a8c() {
    unk_48 = File_Load((void *)"/ab_all/ab_all_obj_ncl.bin");
    if (unk_48) return TRUE;
    return FALSE;
}

BOOL Unk_020029e8::func_02002a6c() {
    void *p = File_Load((void *)"/ab_all/ab_all_obj_ncg.bin");
    unk_4c = p;
    if (p) return TRUE;
    return FALSE;
}

void Unk_020029e8::func_02002a54() {
    if (unk_48) {
        Mem_Free(unk_48);
        unk_48 = 0;
    }
}

void Unk_020029e8::func_02002a3c() {
    if (unk_4c) {
        Mem_Free(unk_4c);
        unk_4c = 0;
    }
}

void Unk_020029e8::func_02002a14() {
    DC_FlushRange(unk_48, 0x80);
    GX_LoadOBJPltt(unk_48, 0, 0x80);
    GXS_LoadOBJPltt(unk_48, 0, 0x80);
}

void Unk_020029e8::func_020029e8() {
    DC_FlushRange(unk_4c, 0x1000);
    GX_LoadOBJ(unk_4c, 0, 0x1000);
    GXS_LoadOBJ(unk_4c, 0, 0x1000);
}

