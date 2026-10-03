// mwcc-version: 1.2/base
#include "types.h"
// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
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

class Unk_ov004_0224c38c;

#define VillagerId_isValid _ZN10VillagerId7isValidEv
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_02015e48 _ZN12Unk_02015b8c13func_02015e48Ej
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201b9bc _ZN12Unk_020d77a413func_0201b9bcEv
#define func_0201b9e8 _ZN12Unk_020d77a413func_0201b9e8Eii
#define func_0201b9fc _ZN12Unk_020d77a413func_0201b9fcEjjjz
#define func_0201ba88 _ZN12Unk_020d77a413func_0201ba88Ev
#define Unk_020d77a4_setTalkRequest _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getAngleToPlayer _ZN12Unk_020d77a416getAngleToPlayerEj
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_
#define VillagerMood_update _ZN12VillagerMood6updateEP12VillagerTalk
#define VillagerMood_requestApply _ZN12VillagerMood12requestApplyEv
#define func_0201c784 _ZN12VillagerTalk13func_0201c784Ev
#define func_0202bcdc _ZN18VillagerTalkTopics13func_0202bcdcEPhPvj
#define VillagerTalk_begin _ZN12VillagerTalk5beginEP13VillagerActorj
#define VillagerClothModel_getItem _ZN18VillagerClothModel7getItemEv
#define VillagerClothModel_change _ZN18VillagerClothModel6changeEP13VillagerActorPt
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define VillagerDataProfileView_getShirt _ZN23VillagerDataProfileView8getShirtEv
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
class Unk_ov004_02216ff4;

typedef BOOL (Unk_ov004_02216ff4::*Unk_ov004_02216ff4_Fn)(Unk_ov004_0224c38c *);
typedef void (Unk_ov004_02216ff4::*Unk_ov004_02216ff4_VFn)(Unk_ov004_0224c38c *);

struct Unk_ov004_0221745c_Dir {
    s32 dx;
    s32 dy;
    Unk_ov004_0221745c_Dir(s32 a, s32 b) : dx(a), dy(b) {}
};

struct Unk_ov004_02216ff4_Entry {
    Unk_ov004_02216ff4_Fn enter;
    Unk_ov004_02216ff4_Fn update;
};

struct Unk_ov004_022170e0_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" {
extern Unk_ov004_0221745c_Dir data_ov004_02250658[4];
extern Unk_ov004_02216ff4_Entry data_ov004_02250678[];
extern Unk_ov004_022170e0_Global *data_020cbb18;
extern u16 data_020c6cc8;
extern const u8 data_ov004_02240090[4];
extern const u8 data_ov004_02240094[5];

s32 func_0201b9fc(void *, u32, u32, u32);
s32 func_0201ba88(void *);
s32 func_0201b9e8(void *, s32 *, s32 *);
s32 func_0201b9bc(void *);
s32 func_0201c784(void *);
s32 Villager_GetResidentStatus(void *);
s32 Unk_020d77a4_getPlayerActor(void *, u32);
void VillagerTalk_begin(void *, void *, s32);
void func_02015ab0(void *, s32);
s32 func_020a62a0();
s32 func_02014220(void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_02019614(void *, u32, u32);
s32 Unk_020d77a4_getAngleToPlayer(void *, u32);
void func_020196b4(void *, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
void VillagerMood_requestApply(void *);
void TalkRequest_EndTalkWith(void *);
void *func_02015aac(void *);
s32 Unk_020d77a4_getAngleTo(void *, void *);
void func_020141b4(void *, u32, s32, u32);
s32 func_02063b8c(u32);
void func_0204ee10(s32 *, s32 *, void *);
void func_0204ed8c(s32 *, s32, s32);
s32 func_02083eb4(void *, s32, s32);
s32 func_02083ed4(void *, s32, s32);

u32 func_02072e44(void *g);
s32 func_02072e88(void *g, u32 v);
void *VillagerDataProfileView_getShirt(void *o);
u16 *VillagerClothModel_getItem(void *o);
s32 Item_IsFurniture(void *p);
u32 Item_GetFurnitureIndex(void *p);
void VillagerMood_update(void *o, void *owner);
void func_0202bcdc(void *o, const void *a, const void *b, u32 c);
void TalkRequest_AddPlayerTalk6(void *o, u32 a);
void func_02083f44(void *o);
void func_020135c4(void *o);
void *func_0207e310(void *o);
u32 func_020785ec(void *o);
void func_020785e8(void *o, u32 a);
void *VillagerData_getVillagerId(void *o);
u32 VillagerId_isValid(void *o);
void *func_020784f4(void *o);
void func_020784e0(void *o);
void Unk_020d77a4_setTalkRequest(void *self, void *p);
void VillagerClothModel_change(void *self, void *owner, u16 *p);
u32 func_02015e48(void *o, u32 v);
}

// Members of the scene object, named after their constructors.
struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
    u32 pad[0x1b4 / 4];
};
struct Unk_0201ad3c { Unk_0201ad3c(); ~Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); ~Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); ~Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); ~Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); ~Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); ~Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); ~Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); ~Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[8]; u8 unk_08; u8 pad_09[2]; u8 unk_0b; };
struct Unk_02019858 { Unk_02019858(); ~Unk_02019858(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class SndSeEmitter {
public:
    SndSeEmitter();
    virtual ~SndSeEmitter();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public SndSeEmitter {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
};

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    u32 pad[0x34 / 4];
};
class Unk_0202d5e8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    u32 pad[(0x1a0 - 4) / 4];
    u8 unk_1a0;
    u8 pad_1a1[3];
};
struct Unk_02082088 { Unk_02082088(); ~Unk_02082088(); u32 pad[2]; };
struct VillagerMood { VillagerMood(); ~VillagerMood(); u32 pad[0x5c / 4]; };

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();

    u16 pad_e0[5];
    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class VillagerActor : public Unk_020d77a4 {
public:
    VillagerActor();
    virtual ~VillagerActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void *vfunc_64();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void addMood(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_02082088 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ VillagerMood unk_838;
};

// Member at +0x89c (state machine). Methods are named after Unk_ov004_02216ff4, its constructor after
// Unk_ov004_022175bc (symbol _ZN18Unk_ov004_022175bcC1Ev).
class Unk_ov004_02216ff4 {
public:
    BOOL func_ov004_02216ff4(Unk_ov004_0224c38c *o);
    void func_ov004_02217240(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022172b4(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02216f84(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02217188(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02216ff8(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022170dc(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022170e0(Unk_ov004_0224c38c *o);
    void func_ov004_02217244(Unk_ov004_0224c38c *o);
    BOOL func_ov004_022171d4(Unk_ov004_0224c38c *o);
    BOOL func_ov004_0221727c(Unk_ov004_0224c38c *o);
    void func_ov004_02217144(Unk_ov004_0224c38c *o);
    BOOL func_ov004_02217404(Unk_ov004_0224c38c *o);
    BOOL func_ov004_0221745c(s32 *o1, s32 *o2, Unk_ov004_0224c38c *o);
    BOOL func_ov004_02217508(Unk_ov004_0224c38c *o);
    void func_ov004_02217528();
    void func_ov004_02217530(Unk_ov004_0224c38c *o, s32 idx);
    void func_ov004_0221757c(Unk_ov004_0224c38c *o);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ Unk_ov004_02216ff4_Entry *unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 pad_0d[3];
    /* 0x10 */ s32 unk_10;
};

class Unk_ov004_022175bc : public Unk_ov004_02216ff4 {
public:
    Unk_ov004_022175bc();
    ~Unk_ov004_022175bc();
};

class Unk_02084038 {
public:
    Unk_02084038();
    ~Unk_02084038();
    u32 pad[0x20 / 4];
};

class Unk_ov004_0224c38c : public VillagerActor {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL updateAct();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    BOOL func_ov004_02217708();

    typedef BOOL (Unk_ov004_0224c38c::*Fn)();
    /* 0x894 */ Fn unk_894;
    /* 0x89c */ Unk_ov004_022175bc unk_89c;
    /* 0x8b0 */ Unk_02084038 unk_8b0;
    /* 0x8d0 */ u8 unk_8d0;
    /* 0x8d4 */ s32 unk_8d4;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" Unk_ov004_0224c38c *func_ov004_0221785c();
extern "C" Unk_ov004_SceneEntry data_ov004_0224c36c = {(void *(*)())func_ov004_0221785c, 0x85, 0x89, 2, 0x5000, 0x5000, 0x3e800};
extern "C" const u8 data_ov004_02240090[4] = {0x28, 0x1e, 0x14, 0x0a};
#define data_ov004_0225065c ((Unk_ov004_0221745c_Dir *)((u8 *)data_ov004_02250658 + 4))

extern "C" Unk_ov004_0224c38c *func_ov004_0221785c() {
    return new Unk_ov004_0224c38c;
}

BOOL Unk_ov004_0224c38c::vfunc_04() {
    if (!VillagerActor::vfunc_04()) {
        return FALSE;
    }
    Unk_020d77a4_setTalkRequest(this, &unk_680);
    unk_680.vfunc_08();
    func_02083f44(&unk_8b0);
    unk_8d4 = 0;
    unk_8d0 = 0;
    void *p = vfunc_64();
    if (p) {
        if (VillagerId_isValid(VillagerData_getVillagerId(p))) {
            void *t = func_0207e310(p);
            if (t) {
                func_020784e0(func_020784f4(t));
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c38c::vfunc_00() {
    if (!VillagerActor::vfunc_00()) {
        return FALSE;
    }
    unk_894 = &Unk_ov004_0224c38c::func_ov004_02217708;
    func_020135c4(&unk_558);
    if (func_0201ba88(this)) {
        unk_89c.func_ov004_02217530(this, 0);
        func_0202bcdc(this, data_ov004_02240094, data_ov004_02240090, 0);
    } else {
        unk_89c.func_ov004_02217530(this, 3);
    }
    u32 *g = (u32 *)data_020cbb18;
    if (!func_02072e88(g, g[0x64 / 4])) {
        if (vfunc_64()) {
            if (func_020785ec(func_0207e310(vfunc_64())) == 1) {
                func_020785e8(func_0207e310(vfunc_64()), 0);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c38c::func_ov004_02217708() {
    if (Unk_020d77a4::onDraw()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c38c::onDraw() {
    BOOL r = TRUE;
    if (unk_894) {
        r = (this->*unk_894)();
    }
    return r;
}

BOOL Unk_ov004_0224c38c::vfunc_7c() {
    if (unk_8d0 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c38c::vfunc_80() { unk_8d0 = 1; }

BOOL Unk_ov004_0224c38c::updateAct() {
    unk_89c.func_ov004_0221757c(this);
    if (func_02072e44(data_020cbb18)) {
        if (func_02015e48(&unk_334, 0) != 6) {
            if (vfunc_64()) {
                u16 *p = (u16 *)VillagerDataProfileView_getShirt(vfunc_64());
                u16 *q = VillagerClothModel_getItem(&unk_64c);
                BOOL eq;
                if (Item_IsFurniture(q)) {
                    eq = Item_GetFurnitureIndex(q) == Item_GetFurnitureIndex(p) ? TRUE : FALSE;
                } else {
                    eq = *q == *p ? TRUE : FALSE;
                }
                if (!eq) {
                    u16 *w = (u16 *)VillagerDataProfileView_getShirt(vfunc_64());
                    BOOL in = FALSE;
                    u16 v = *w;
                    if (v >= 0x11a8 && v <= 0x12a7) {
                        in = TRUE;
                    }
                    if (in) {
                        VillagerClothModel_change(&unk_64c, this, (u16 *)VillagerDataProfileView_getShirt(vfunc_64()));
                    }
                }
            }
        }
    }
    VillagerMood_update(&unk_838, this);
    return TRUE;
}

Unk_ov004_022175bc::Unk_ov004_022175bc() {
    unk_08 = 5;
    unk_10 = 0;
}

Unk_ov004_022175bc::~Unk_ov004_022175bc() {}

void Unk_ov004_02216ff4::func_ov004_0221757c(Unk_ov004_0224c38c *o) {
    if (unk_04 != 0) {
        (this->*unk_04->update)(o);
    }
    if (unk_10 > 0) {
        unk_10--;
    }
}

void Unk_ov004_02216ff4::func_ov004_02217530(Unk_ov004_0224c38c *o, s32 idx) {
    if (idx >= 0 && idx < 5) {
        unk_00 = idx;
        unk_04 = &data_ov004_02250678[unk_00];
        unk_0c = 0;
        Unk_ov004_02216ff4_Entry *e = unk_04;
        if (e != 0 && e->enter != 0) {
            (this->*e->enter)(o);
        }
    }
}

void Unk_ov004_02216ff4::func_ov004_02217528() {
    unk_08 = 5;
}

BOOL Unk_ov004_02216ff4::func_ov004_02217508(Unk_ov004_0224c38c *o) {
    BOOL r = FALSE;
    if (unk_08 < 5) {
        func_ov004_02217530(o, unk_08);
        func_ov004_02217528();
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_02216ff4::func_ov004_0221745c(s32 *o1, s32 *o2, Unk_ov004_0224c38c *o) {
    s32 x, y;
    s32 v[3];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    x = 0;
    y = 0;
    u8 dir = (o->unk_8e >> 14) & 3;
    func_0204ee10(&x, &y, (u8 *)o + 0x5c);
    s32 px = x;
    s32 py = y;
    px += data_ov004_02250658[dir].dx;
    py += data_ov004_0225065c[dir].dx;
    if ((u32) * (volatile s32 *)&y < 0xe) {
        if (func_02083eb4(&o->unk_8b0, px, py) != 0) {
            func_0204ed8c(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    } else {
        if (func_02083ed4(&o->unk_8b0, px, py) != 0) {
            func_0204ed8c(v, px, py);
            *o1 = v[0];
            *o2 = v[2];
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" const u8 data_ov004_02240094[5] = {0x00, 0x0a, 0x32, 0x0f, 0x14};
extern "C" Unk_ov004_02216ff4_Entry data_ov004_02250678[5] = {
    {&Unk_ov004_02216ff4::func_ov004_02217404, &Unk_ov004_02216ff4::func_ov004_022172b4},
    {&Unk_ov004_02216ff4::func_ov004_0221727c, &Unk_ov004_02216ff4::func_ov004_022171d4},
    {&Unk_ov004_02216ff4::func_ov004_02217188, &Unk_ov004_02216ff4::func_ov004_022170e0},
    {&Unk_ov004_02216ff4::func_ov004_022170dc, &Unk_ov004_02216ff4::func_ov004_02216ff8},
    {&Unk_ov004_02216ff4::func_ov004_02216ff4, &Unk_ov004_02216ff4::func_ov004_02216f84}};
extern "C" Unk_ov004_0221745c_Dir data_ov004_02250658[4] = {
    Unk_ov004_0221745c_Dir(0, 1), Unk_ov004_0221745c_Dir(1, 0), Unk_ov004_0221745c_Dir(0, -1), Unk_ov004_0221745c_Dir(-1, 0)};

BOOL Unk_ov004_02216ff4::func_ov004_02217404(Unk_ov004_0224c38c *o) {
    o->unk_894 = &Unk_ov004_0224c38c::func_ov004_02217708;
    func_020196b4(&o->unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_10 = 0;
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_022172b4(Unk_ov004_0224c38c *o) {
    u8 *sub = (u8 *)&o->unk_564;
    s32 a, b;
    if (func_02019790(sub) != 0) {
        a = 0;
        b = 0;
        if (func_02063b8c(7) == 0) {
            if ((o->unk_8e & 0x3fff) != 0) {
                s32 v = (s32)(func_02063b8c(4) << 30) >> 16;
                if (v == o->unk_8e) {
                    v = (s16)(v + 0x4000);
                }
                func_020196b4(sub, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            } else {
                if (func_02063b8c(3) != 0 && func_ov004_0221745c(&a, &b, o) != 0) {
                    func_020196b4(sub, 1, 1, a, b, 0, 0, 0, 0, data_020c6cc8, 0);
                    unk_10 = 0x3c;
                } else {
                    s32 v = (s32)(func_02063b8c(4) << 30) >> 16;
                    if (v == o->unk_8e) {
                        v = (s16)(v + 0x4000);
                    }
                    func_020196b4(sub, 3, 1, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
                }
            }
        } else {
            func_020196b4(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (unk_10 == 0 && func_020197a8(sub) == 1) {
            func_020196b4(sub, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_0221727c(Unk_ov004_0224c38c *o) {
    void *t = func_02015aac(&o->unk_680);
    s32 r = 0;
    if (t != 0) {
        r = Unk_020d77a4_getAngleTo(o, t);
    }
    func_020141b4(&o->unk_618, 0, r, 0);
    return TRUE;
}

void Unk_ov004_02216ff4::func_ov004_02217244(Unk_ov004_0224c38c *o) {
    if (func_02014220(&o->unk_618) == 0) {
        VillagerMood_requestApply(&o->unk_838);
        TalkRequest_EndTalkWith(o);
        unk_0c = 1;
    }
}

void Unk_ov004_02216ff4::func_ov004_02217240(Unk_ov004_0224c38c *o) {}

BOOL Unk_ov004_02216ff4::func_ov004_022171d4(Unk_ov004_0224c38c *o) {
    static Unk_ov004_02216ff4_VFn tbl[2] = {&Unk_ov004_02216ff4::func_ov004_02217244, &Unk_ov004_02216ff4::func_ov004_02217240};
    if (unk_0c < 2) {
        (this->*tbl[unk_0c])(o);
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02217188(Unk_ov004_0224c38c *o) {
    s32 t = Unk_020d77a4_getAngleToPlayer(o, o->unk_558.unk_08);
    func_020196b4(&o->unk_564, 3, 2, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
    unk_0c = 0;
    return TRUE;
}

void Unk_ov004_02216ff4::func_ov004_02217144(Unk_ov004_0224c38c *o) {
    if (func_020197a8(&o->unk_564) == 3) {
        if (func_02019790(&o->unk_564) != 0) {
            func_02019614(&o->unk_564, 2, data_020c6cc8);
            unk_0c = 1;
        }
    }
}

BOOL Unk_ov004_02216ff4::func_ov004_022170e0(Unk_ov004_0224c38c *o) {
    static Unk_ov004_02216ff4_VFn tbl[1] = {&Unk_ov004_02216ff4::func_ov004_02217144};
    if (unk_0c < 1) {
        (this->*tbl[unk_0c])(o);
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_022170dc(Unk_ov004_0224c38c *o) {
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02216ff8(Unk_ov004_0224c38c *o) {
    if (func_0201ba88(o) != 0) {
        s32 a = 4;
        s32 b = 4;
        s32 la;
        void *w = o->unk_82c;
        s32 g;
        if (func_0201b9e8(o, &a, &b) != 0 && ((la = a), la == (g = data_020cbb18->unk_64)) && la == b) {
            func_0201b9fc(o, 1, g, g);
            if (w != 0 && Villager_GetResidentStatus(w) != 3) {
                o->unk_8d4 = 12;
            } else {
                o->unk_8d4 = 0;
            }
            VillagerTalk_begin(&o->unk_680, o, o->unk_8d4);
            func_02015ab0(&o->unk_680, Unk_020d77a4_getPlayerActor(o, 4));
            o->unk_89c.func_ov004_02217530(o, 1);
        } else {
            if (func_020a62a0() != 0 && b == 4) {
                func_0201b9fc(o, 1, data_020cbb18->unk_64, 4);
                if (o->unk_89c.func_ov004_02217508(o) == 0) {
                    o->unk_89c.func_ov004_02217530(o, 0);
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02216ff4(Unk_ov004_0224c38c *o) {
    return TRUE;
}

BOOL Unk_ov004_02216ff4::func_ov004_02216f84(Unk_ov004_0224c38c *o) {
    if (func_0201ba88(o) != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(o, &a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(o, 1, data_020cbb18->unk_64, 4);
                    if (o->unk_89c.func_ov004_02217508(o) == 0) {
                        o->unk_89c.func_ov004_02217530(o, 0);
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224c38c::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224c38c::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_558.unk_08 = v;
        if (v != 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, v);
            unk_89c.func_ov004_02217530(this, 2);
        } else {
            if (func_0201ba88(this) == 0) {
                return;
            }
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(this, 1, g, g);
            if (unk_82c != 0 && Villager_GetResidentStatus(unk_82c) != 3) {
                unk_8d4 = 12;
            } else {
                switch (func_0201c784(this)) {
                case 1:
                    unk_8d4 = 3;
                    break;
                case 0:
                    unk_8d4 = 5;
                    break;
                case 8:
                case 9:
                    unk_8d4 = 11;
                    break;
                default:
                    unk_8d4 = 0;
                    break;
                }
            }
            unk_89c.func_ov004_02217530(this, 2);
        }
        break;
    case 0:
        unk_558.unk_08 = v;
        if (v != 4 && v != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, v, v);
            unk_89c.func_ov004_02217530(this, 4);
        } else {
            if (func_0201ba88(this) != 0) {
                s32 g = data_020cbb18->unk_64;
                func_0201b9fc(this, 1, g, g);
                VillagerTalk_begin(&unk_680, this, unk_8d4);
                func_02015ab0(&unk_680, Unk_020d77a4_getPlayerActor(this, 4));
                unk_89c.func_ov004_02217530(this, 1);
                unk_8d4 = 0;
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (func_020a62a0() != 0) {
                func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                if (unk_89c.func_ov004_02217508(this) == 0) {
                    unk_89c.func_ov004_02217530(this, 0);
                }
            } else {
                func_0201b9fc(this, 1, 4, data_020cbb18->unk_64);
                unk_89c.func_ov004_02217530(this, 3);
            }
        }
        break;
    case 4:
        if (func_0201b9bc(this) != 0) {
            if (func_0201ba88(this) != 0) {
                s32 a = 4;
                s32 b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if (v == 4) {
                        goto chk;
                    }
                    if (v == b) {
                        goto body;
                    }
                chk:
                    if (v != 4) {
                        break;
                    }
                body:
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    if (unk_89c.func_ov004_02217508(this) == 0) {
                        unk_89c.func_ov004_02217530(this, 0);
                    }
                }
            }
        }
        break;
    }
}

