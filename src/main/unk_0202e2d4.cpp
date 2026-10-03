#include "types.h"

// Library base class (ARM code in autoload_2 / ITCM). vfunc_08 takes a flag here: the slot is shared with
// Unk_020d77a4::postCreate(int).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(int a);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

extern "C" {
extern u32 data_020d6f54[];
extern u32 gCommManager;
extern u32 gVec3Zero;
extern const s32 data_020c6cf0;
extern u8 data_020e416c;
}

s32 data_021bf97c = data_020c6cf0 - 0x8000;

extern "C" {
void Proc_CreateRoot();
s32 Proc_CreateChild(u32 a, void *b, u32 c, u32 d);
s32 func_0211c618(s32 *out);
void ProcBase_RequestDelete();
void _ZN17Unk_020d8c7c_Base10postCreateEi(void *self, int a);
s32 SpNpc_GetInfoByte0(u16 *p);
void Npc_GetName(u32 a, u16 *p);
}

// ---- Unk_020d8bc8 (scene object derived from Unk_020d77a4) ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
MEMBER(ThreeLayerAnimModel, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
MEMBER(Unk_020e0cf4, 0x514 - 0x4cc);
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); ~Unk_020135e4(); };
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); ~Unk_020e06dc(); };

extern "C" void func_020f43c8(void *p);

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080() {
        *(u32 *)this = (u32)data_020d6f54;
        func_020f43c8(this);
    }
};

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};
typedef Unk_020d77a4_Vec3 Unk_0203e7a4_Vec;

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Character : Actor {
    u8 pad_04[0x58];
    Unk_0203e7a4_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xe6 - 0x92];
    Character();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual ~Character();
    virtual void vfunc_48(void *p);
    virtual void vfunc_4c(int a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
};

struct Unk_020d77a4 : Character {
    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_020e0cf4 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
    Unk_020d77a4();
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(int a);
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(int a);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void updateAct();
    virtual void getTexturePath() = 0;
    virtual void getModelPath() = 0;
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void addMood();
    virtual BOOL vfunc_a8();
    u16 getNpcIndex();
};

extern "C" {
void NpcRegistry_RemoveSpNpc(void *p);
BOOL _ZN11CommManager8isOnlineEv(u32 v);
BOOL NetArea_IsLocalOwner();
BOOL func_020e96ec(void *a, void *b);
void *_ZN12Unk_020e074013func_02081fb8Ev(void *p);
BOOL _ZN12Unk_020e071813func_02082140Ev(void *p);
void _ZN12Unk_020e071813func_0208211cEv(void *p);
BOOL _ZN12Unk_02019dd813func_02019cacEP18Unk_02019cac_Owner(void *p, void *q);
BOOL _ZN12Unk_0201635013func_020162c4EP16Unk_02015fe0_Obji(void *p, void *q, s32 r);
void _ZN12Unk_0201985813func_020197acEPhiiiisii(void *p, void *q, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN12Unk_020e0cf413func_02088c98EPviijjjhi(void *p, void *q, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f, s32 g);
BOOL NpcRegistry_AddSpNpc(void *p, void *q);
void _ZN12Unk_0201347413func_020135c4Ev(void *p);
s32 _ZN12Unk_020d77a413func_0201b888EPiPh(void *self, void *a, void *b);
s32 func_02077ac4(void *p);
BOOL _ZN11CachedModel16allocJointRecordEPv(void *p, s32 v);
BOOL _ZN19ThreeLayerAnimModel16allocLayer3AnimsEj(void *p, s32 v);
}

static inline BOOL Unk_0202e318_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8();
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual BOOL vfunc_a8();

    BOOL loadAnimSet();
    void func_0202e548(s32 a, s32 b);

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

Unk_020d8bc8::~Unk_020d8bc8() {}

BOOL Unk_020d8bc8::loadAnimSet() {
    void *p = _ZN12Unk_020e074013func_02081fb8Ev(&unk_640);
    if (!_ZN11CachedModel16allocJointRecordEPv(&unk_ec, func_02077ac4(p))) {
        return FALSE;
    }
    if (_ZN19ThreeLayerAnimModel16allocLayer3AnimsEj(&unk_ec, func_02077ac4(p))) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020d8bc8::func_0202e548(s32 a, s32 b) {
    unk_648 = a;
    unk_64c = b;
}

BOOL Unk_020d8bc8::vfunc_04() {
    if (!Unk_020d77a4::vfunc_04()) {
        return FALSE;
    }
    func_0202e548(0x1000, 0x2000);
    unk_650 = 0;
    return TRUE;
}

BOOL Unk_020d8bc8::vfunc_00() {
    if (!Unk_020d77a4::vfunc_00()) {
        return FALSE;
    }
    if (!NetArea_IsLocalOwner() && _ZN11CommManager8isOnlineEv(gCommManager) && !unk_558.unk_0b) {
        Unk_0203e7a4_Vec v;
        s16 s;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        s = 0;
        if (_ZN12Unk_020d77a413func_0201b888EPiPh(this, &v, &s) && func_020e96ec(&v, &gVec3Zero)) {
            Unk_0203e7a4_Vec *p = &unk_5c;
            p->x = v.x;
            p->y = v.y;
            p->z = v.z;
            unk_8e = s;
            unk_94 = s;
        }
    }
    if (!_ZN12Unk_020e074013func_02081fb8Ev(&unk_640)) {
        if (!_ZN12Unk_020e071813func_02082140Ev(&unk_640)) {
            return FALSE;
        }
        if (!loadAnimSet()) {
            return FALSE;
        }
    }
    if (!_ZN12Unk_02019dd813func_02019cacEP18Unk_02019cac_Owner(&unk_2ac, this)) {
        return FALSE;
    }
    if (!_ZN12Unk_0201635013func_020162c4EP16Unk_02015fe0_Obji(&unk_334, this, vfunc_a8())) {
        return FALSE;
    }
    _ZN12Unk_0201985813func_020197acEPhiiiisii(&unk_564, this, 0, 1, 0, 0, 0, 0, 0);
    _ZN12Unk_020e0cf413func_02088c98EPviijjjhi(&unk_4cc, this, unk_648, unk_64c, 8, 0x2fc, 3, (u8)getNpcIndex(), 0x1000);
    if (!NpcRegistry_AddSpNpc(this, &unk_ea)) {
        return FALSE;
    }
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    return TRUE;
}

BOOL Unk_020d8bc8::preDelete() {
    if (!Unk_020d77a4::preDelete()) {
        return FALSE;
    }
    NpcRegistry_RemoveSpNpc(&unk_ea);
    return TRUE;
}

BOOL Unk_020d8bc8::vfunc_0c() {
    if (!Unk_020d77a4::vfunc_0c()) {
        return FALSE;
    }
    _ZN12Unk_020e071813func_0208211cEv(&unk_640);
    return TRUE;
}

void Unk_020d8bc8::getName(u32 a) { Npc_GetName(a, &unk_ea); }

u32 Unk_020d8bc8::getGender() { return SpNpc_GetInfoByte0(&unk_ea); }

BOOL Unk_020d8bc8::vfunc_7c() {
    if (!Unk_0202e318_IsOne(data_020e416c) || unk_650 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020d8bc8::vfunc_80() { unk_650 = 1; }

u16 Unk_020d8bc8::getSpecies() {
    u16 v = unk_ea;
    if (((v & 0xf000) >> 12) == 0xd) {
        return (v & 0xfff) + 0xc8;
    }
    return 0xffff;
}

BOOL Unk_020d8bc8::vfunc_a8() { return data_021bf97c; }

