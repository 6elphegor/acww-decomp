#include "types.h"

struct Unk_020bfe30_Vec {
    s32 x, y, z;
};
typedef Unk_020bfe30_Vec Unk_020c0acc_Vec;

struct Unk_020cbb18 {
    u8 unk_00[0x68];
    s32 unk_68;
};

class SpNpcMissing1;

extern "C" {
void _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c(void *a, void *b);
void _ZN12Unk_0201a8c413func_0201a8d0Eiiii(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_020b50e8(void);
s32 func_020b50dc(void);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d0, s32 d1, s32 d2, s32 d3, s32 d4, s32 d5, s32 d6);
void _ZN12Unk_0201985813func_020195c8Eiijtt(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 _ZN12Unk_0201985813func_02019790Ev(void *self);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *self);
s32 _ZN12Unk_0201a33413func_0201a7e8Ev(void *self);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *a, s32 b, s32 c, s32 d, u8 *e, s32 f, s32 g, s32 h);
void _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN12Unk_0201ad2013func_0201ad34Ei(void *a, s32 b);
void _ZN12Unk_0201ad2013func_0201ad30Ei(void *a, s32 b);
s32 _ZN12Unk_020d77a419getDistanceToPlayerEj(void *a, s32 b);
u32 _ZN12Unk_020d77a414getPlayerActorEj(void *p, s32 n);
s32 _ZN12Unk_020d77a410getAngleToEPS_(void *a, s32 b);
s32 _ZN16ActorTalkRequest13func_02015aacEv(void *a);
void _ZN16ActorTalkRequest13func_02015ab0Ej(void *a, s32 b);
s32 _ZN16ActorTalkRequest8vfunc_38Ej(void *p, void *q);
void _ZN16ActorTalkRequest13func_02015a80EP18Unk_02015b8c_Scene(void *p, s32 a);
void _ZN16ActorTalkRequest13func_02015818Ejj(void *self, s32 a, s32 b);
BOOL _ZN12Unk_0201635013func_0201622cEiPv(void *a, s32 b, void *c);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_020902d4(s32 a, void *b, void *c, s32 d);
void func_020902f8(s32 a);
void _ZN12Unk_02086f8413func_02086f98Ev(void *a);
void _ZN12Unk_02086f8413func_02086fa0Ev(void *a);
s32 _ZN12Unk_02086f8413func_02086fa8Ev(void *a);
void _ZN12Unk_02086f8413func_02086fb8EP17Unk_02086ec4_Vec3(void *a, void *b);
void _ZN12Unk_02086f8413func_02086fc4EP17Unk_02086ec4_Vec3(void *a, void *b);
void func_02003e70(void *a, s32 b, s32 c, s32 d);
void *PlayerData_GetCurrent(void);
void *func_020850e0(void);
void *func_02085178(void *a);
void *func_020947f0(s32 a);
void *func_0204da0c(void);
void func_0204d684(void *a, Unk_020c0acc_Vec *b, s32 c, s32 d);
void func_0204edd8(Unk_020c0acc_Vec *a, Unk_020c0acc_Vec *b);
void func_0204ed8c(Unk_020c0acc_Vec *a, s32 b, s32 c);
s32 _ZN10PlayerData13func_020986a4Ev(void *a);
BOOL _ZN12Unk_020872fc13func_02087314Ev(s32 a);
BOOL _ZN12Unk_02097ff413func_02098044Ej(void *a, s32 b);
s32 _ZN12Unk_02097ff413func_0209801cEj(void *a, s32 b);
BOOL func_0202e1cc(s32 a, s32 b);
void TalkRequest_EndTalkWith(void *a);
void func_0203d984(void);
void func_0203d990(void);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *a);
void _ZN12Unk_02013b1013func_020141b4Essh(void *a, s32 b, s32 c, s32 d);
BOOL func_02077e7c(Unk_020c0acc_Vec *a, s32 b, s32 c, s32 d);
void func_02077f40(Unk_020c0acc_Vec *a, s32 b);
s32 func_020e9650(void *a, void *b);
BOOL func_020e7500(void *a);
s32 _ZN12Unk_02019dd813func_02019d8cEv(void *p);
s32 _ZN15TalkWindowState13getChoiceListEv(void *p);
s32 _ZN10ChoiceList9getResultEv(void);
void _ZN15TalkWindowState14setNextMessageEPhPv(void *a, void *b, u32 c);
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
s32 Math_AngleXZ(void *a, void *b);
void PlayerActor_RequestAct70(s32 a, s32 b);
void PlayerActor_RequestAct6F(void *v, s32 a, s32 b);
BOOL func_02094f2c(s32 a, s32 b);
BOOL func_020951b8(s32 a);
s32 func_020a0414(void);
s32 PlayerData_GetBySessionSlot(s32 a);
BOOL func_020a03c4(void);
void func_020b78c4(void);
BOOL _ZN12Unk_020cbb1813func_020729ccEj(Unk_020cbb18 *p, s32 a);
s32 _ZN12Unk_020872fc13func_0208733cEv(void);
void _ZN12Unk_020872fc13func_02087368Ev(s32 a);
void _ZN12Unk_0208721013func_02087210Ev(void *a);
s32 func_020b4934(void);
void func_020b4bbc(s32 a, s32 b);
s32 NpcRegistry_FindSpNpc(s32 a);
void Camera_SetMode19(void);
void _ZN12Unk_02013b1013func_02014198Ehh(void *p, s32 a, s32 b);
s32 _ZN12Unk_020872fc13func_02087364Ev(void *p);
s32 func_02063b8c(u32 n);
extern u8 data_021c3cc0;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern Unk_020cbb18 *data_020cbb18;
}
void SpNpcMissing2_ChangeAct04(void);
void SpNpcMissing2_ChangeAct06(void);
static inline BOOL Unk_020c06a0_IsMode2() {
    return data_021c3cc0 == 2;
}

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

// ---- SpNpcMissing1Talk and its bases (vtable 0x020ddcf0 chain) ----
struct Unk_020c0408_Obj {
    u8 unk_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[8];
    s32 unk_14;
};

struct Unk_020c0538_Out {
    u32 unk_00;
    u8 unk_04;
};

class TalkMsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(void *a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x04 */ u8 unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f[0x1d];
    /* 0x3c */ Unk_020c0408_Obj *unk_3c;
    /* 0x40 */ u8 unk_40;
};

class ActorTalkRequest : public TalkMsgRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(void *a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual s32 vfunc_6c();
    virtual void vfunc_78(Unk_020c0538_Out *out) = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u32 pad_44[(0xac - 0x44) / 4];
};

class SpNpcTalkRequest : public ActorTalkRequest {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class SpNpcMissing1Talk : public SpNpcTalkRequest {
public:
    SpNpcMissing1Talk();
    virtual ~SpNpcMissing1Talk();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_38(void *p);
    virtual void vfunc_78(Unk_020c0538_Out *out);

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(SpNpcMissing1 *owner);

    SpNpcMissing1 *unk_ac;
    s32 unk_b0;
};

// ---- SpNpcMissing1 and its bases (scene object derived from Unk_020d77a4) ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
    }
struct Unk_020dbd74 {
    u8 unk_00[0xa4];
    u32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
struct Unk_0201a13c {
    u8 unk_00[0x58];
    u8 unk_58[0x7c - 0x58];
    Unk_0201a13c();
};
MEMBER(Unk_02032238, 0x30);
struct Unk_020e0cf4 {
    u8 unk_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 pad_45[3];
    Unk_020e0cf4();
};
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); };
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
};

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Character : Actor {
    u8 pad_04[0x58];
    Unk_020c0acc_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
    Character();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual ~Character();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(int a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
};

struct Unk_020d77a4 : Character {
    u16 unk_ea;
    Unk_020dbd74 unk_ec;
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
    Unk_020d77a4() : unk_ea(0xfff1) {}
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
    virtual BOOL updateAct() = 0;
    virtual void *getTexturePath() = 0;
    virtual void *getModelPath() = 0;
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
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
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

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
    u8 unk_651;
};

typedef BOOL (SpNpcMissing1::*Unk_020c11b8_Fn)();
struct Unk_020c11b8_Ent {
    Unk_020c11b8_Fn a;
    Unk_020c11b8_Fn b;
};

class SpNpcMissing1 : public Unk_020d8bc8 {
public:
    SpNpcMissing1() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual ~SpNpcMissing1() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual void *getTexturePath();
    virtual void *getModelPath();

    BOOL mainAct08();
    BOOL setupAct08();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcMissing1Talk unk_658;
    u8 unk_70c;
    u8 unk_70d;
    u16 unk_70e;
    u16 unk_710;
    Unk_020c0acc_Vec unk_714;
    s32 unk_720;
    u8 unk_724;
};

extern Unk_020c11b8_Ent sSpNpcMissing1ActTable[9];
extern SpNpcMissing1 *sSpNpcMissing1Instance;
extern char sSpNpcMissing1Key[16];
extern char data_020e6840[23];
extern char data_020e6870[27];
extern char *sSpNpcMissing1MsgKey;
extern const Unk_020bfe30_Vec data_020d1c8c;
extern "C" SpNpcMissing1 *func_020c1620(void);

extern "C" SpNpcMissing1 *func_020c1620(void) {
    return new SpNpcMissing1();
}

BOOL SpNpcMissing1::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c(this, &unk_658);
    unk_658.attachOwner(this);
    _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 2, 0x333, 0xcc, 0x133);
    _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 1, 0x1b3, 0xcc, 0x133);
    if (func_020b50e8() == 0xb) {
        unk_8e = -0x8000;
        unk_94 = -0x8000;
    }
    if (func_020b50e8() == 0xc) {
        unk_8e = -0x8000;
        unk_94 = -0x8000;
    }
    if (func_020b50e8() == 0x2f) {
        unk_8e = 0;
        unk_94 = 0;
        unk_5c.x = 0xe000;
        unk_5c.z = 0x4000;
        _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 1, 0x280, 0xcc, 0x133);
    }
    unk_558.unk_0b = 1;
    return TRUE;
}

BOOL SpNpcMissing1::vfunc_00() {
    void *p;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    sSpNpcMissing1Instance = this;
    unk_720 = -1;
    p = PlayerData_GetCurrent();
    if (func_020b50e8() == 0) {
        func_0204edd8(&unk_5c, &unk_5c);
        if (func_02077e7c(&unk_5c, 1, 0, 0)) {
            func_02077f40(&unk_5c, 0);
            unk_5c.x += 0x2000;
            unk_5c.z += 0x2000;
        }
        if (_ZN12Unk_02086f8413func_02086fa8Ev(func_02085178(func_020850e0())) != 0) {
            if (func_020b50dc() == 0xb) {
                func_0204d684(func_0204da0c(), &unk_5c, 0, 0);
                unk_5c.z -= 0x2000;
                unk_658.setTopic(3);
                changeAct(5);
                unk_4cc.unk_44 = 0;
            } else {
                unk_658.setTopic(5);
                changeAct(1);
            }
        } else if (_ZN12Unk_02097ff413func_02098044Ej(p, 0x33) == 0) {
            if (_ZN12Unk_02097ff413func_02098044Ej(p, 0x31) == 0) {
                unk_658.setTopic(0);
            } else {
                unk_658.setTopic(1);
            }
            changeAct(1);
        } else {
            if (func_0202e1cc(0x29, 0) == 0) {
                unk_658.setTopic(2);
            } else {
                unk_658.setTopic(3);
            }
            changeAct(1);
        }
    } else if (func_020b50e8() == 0xb) {
        unk_658.setTopic(3);
        changeAct(5);
        unk_4cc.unk_44 = 0;
    } else if (func_020b50e8() == 0xc) {
        _ZN12Unk_02086f8413func_02086fb8EP17Unk_02086ec4_Vec3(func_02085178(func_020850e0()), &unk_5c);
        unk_658.setTopic(3);
        changeAct(5);
    } else if (func_020b50e8() == 0x2f) {
        unk_4cc.unk_44 = 0;
        func_0203d990();
        changeAct(8);
    }
    return TRUE;
}

BOOL SpNpcMissing1::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    sSpNpcMissing1Instance = NULL;
    if (func_020b50e8() == 0x2f) {
        func_0203d984();
    }
    return TRUE;
}

void *SpNpcMissing1::getTexturePath() {
    return data_020e6870;
}

void *SpNpcMissing1::getModelPath() {
    return data_020e6840;
}

BOOL SpNpcMissing1::updateAct() {
    s32 r = 0;
    if (sSpNpcMissing1ActTable[unk_654].b != 0) {
        r = (this->*(sSpNpcMissing1ActTable[unk_654].b))();
    }
    if (func_020b50e8() == 0) {
        _ZN12Unk_02086f8413func_02086fc4EP17Unk_02086ec4_Vec3(func_02085178(func_020850e0()), &unk_5c);
    }
    if (func_020b50e8() == 0xb) {
        if (_ZN12Unk_020872fc13func_02087314Ev(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent()))) {
            _ZN12Unk_02086f8413func_02086fc4EP17Unk_02086ec4_Vec3(func_02085178(func_020850e0()), &unk_5c);
        }
    }
    return r;
}

BOOL SpNpcMissing1::vfunc_48() {
    return _ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0;
}

void SpNpcMissing1::vfunc_4c(s32 state) {
    switch (state) {
    case 0:
    case 1:
        unk_658.vfunc_08();
        _ZN16ActorTalkRequest13func_02015ab0Ej(&unk_658, _ZN12Unk_020d77a414getPlayerActorEj(this, 4));
        if (unk_658.getTopic() != 6) {
            changeAct(3);
        }
        break;
    case 8:
        unk_658.setTopic(3);
        if (_ZN12Unk_02086f8413func_02086fa8Ev(func_02085178(func_020850e0())) != 0) {
            changeAct(5);
        } else if (unk_70d != 0) {
            changeAct(2);
        } else {
            changeAct(0);
        }
        break;
    }
}

void SpNpcMissing1::changeAct(s32 state) {
    BOOL result = TRUE;
    Unk_020c11b8_Ent *e = &sSpNpcMissing1ActTable[state];
    if (e->a != 0) {
        result = (this->*(e->a))();
    }
    if (result) {
        if (state != 1 && unk_720 != -1) {
            func_020902f8(unk_720);
            unk_720 = -1;
        }
        unk_654 = state;
    }
}

BOOL SpNpcMissing1::setupAct00() {
    unk_4cc.unk_1c |= 2;
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMissing1::mainAct00() {
    return TRUE;
}

BOOL SpNpcMissing1::setupAct01() {
    Unk_020c0acc_Vec a, b;
    unk_4cc.unk_1c |= 2;
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x53, 1, data_020c6cc8, 0);
    func_0204d684(func_0204da0c(), &a, 0, 0);
    func_0204edd8(&b, &unk_5c);
    if (b.z < a.z) {
        if (b.x >= a.x - 0x4000 && b.x <= a.x + 0x4000) {
            unk_5c.z = a.z + 0x1000;
        }
    }
    unk_4cc.unk_44 = 1;
    return TRUE;
}

BOOL SpNpcMissing1::mainAct01() {
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0x53, &unk_2a0) && _ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0x54);
        _ZN12Unk_0201ad2013func_0201ad30Ei(&unk_2a0, 0x54);
    }
    if (unk_720 == -1) {
        unk_720 = func_02090330(0x54, unk_420.unk_58, &unk_8e, 0);
    }
    if (unk_720 != -1) {
        func_020902d4(unk_720, unk_420.unk_58, &unk_8e, 0);
    }
    return TRUE;
}

BOOL SpNpcMissing1::setupAct02() {
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0xab, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcMissing1::mainAct02() {
    unk_4cc.unk_1c |= 2;
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0xab, &unk_2a0) && _ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0xac);
        _ZN12Unk_0201ad2013func_0201ad30Ei(&unk_2a0, 0xac);
    }
    return TRUE;
}

BOOL SpNpcMissing1::setupAct03() {
    s32 p, r4;
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    p = _ZN16ActorTalkRequest13func_02015aacEv(&unk_658);
    r4 = 0;
    if (p != 0) {
        r4 = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0xac);
    _ZN12Unk_0201ad2013func_0201ad30Ei(&unk_2a0, 0xac);
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r4, 0);
    return TRUE;
}

BOOL SpNpcMissing1::mainAct03() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        changeAct(7);
    }
    return TRUE;
}

BOOL SpNpcMissing1::setupAct07() {
    return TRUE;
}

BOOL SpNpcMissing1::mainAct07() {
    return TRUE;
}

BOOL SpNpcMissing1::setupAct04() {
    unk_4cc.unk_1c &= ~2;
    unk_710 = 0x28;
    return TRUE;
}

BOOL SpNpcMissing1::mainAct04() {
    if (func_020e7500(&unk_710) == 0) {
        changeAct(5);
    }
    return TRUE;
}

BOOL SpNpcMissing1::setupAct05() {
    unk_4cc.unk_1c &= ~2;
    unk_70e = 0x28;
    unk_714 = unk_5c;
    return TRUE;
}

BOOL SpNpcMissing1::mainAct05() {
    Unk_020c0acc_Vec a, b, c, d;
    void *p = PlayerData_GetCurrent();
    void *q;
    s32 t;
    if (p == NULL) {
        return TRUE;
    }
    if (unk_4cc.unk_44 == 0 && func_020b50e8() == 0) {
        func_0204d684(func_0204da0c(), &a, 0, 0);
        func_0204edd8(&b, &unk_5c);
        if (b.z > a.z) {
            unk_4cc.unk_44 = 1;
        }
    }
    if (unk_4cc.unk_44 == 0 && func_020b50e8() == 0xb) {
        func_0204edd8(&d, &unk_5c);
        func_0204ed8c(&c, 6, 15);
        if (d.z < c.z) {
            unk_4cc.unk_44 = 1;
        }
    }
    q = func_020947f0(4);
    if (q == NULL) {
        return TRUE;
    }
    t = _ZN12Unk_020d77a419getDistanceToPlayerEj(this, 4);
    if ((func_020b50e8() == 0 || (func_020b50e8() == 0xc && _ZN12Unk_020872fc13func_02087314Ev(_ZN10PlayerData13func_020986a4Ev(p)) == 0)) && _ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2) {
        s32 v, d2;
        if (t > 0x6000) {
            changeAct(6);
            return TRUE;
        }
        v = _ZN12Unk_0201a33413func_0201a7e8Ev(&unk_3a8);
        d2 = func_020e9650(&unk_714, &unk_5c);
        unk_714 = unk_5c;
        if (d2 <= 0x29 || v != 0) {
            if (func_020e7500(&unk_70e) == 0) {
                changeAct(1);
                return TRUE;
            }
        } else {
            unk_70e = 0x28;
        }
    }
    if (t > 0x2800) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) != 2) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 2, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
        _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, q);
    } else if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) != 0) {
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    return TRUE;
}

BOOL SpNpcMissing1::setupAct06() {
    if (func_020b50e8() == 0) {
        _ZN12Unk_02086f8413func_02086f98Ev(func_02085178(func_020850e0()));
    }
    _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x122, 1, data_020c6cc8, 0);
    unk_658.setTopic(4);
    func_02003e70(&unk_514, 0x7db, 0x7f, 0);
    return TRUE;
}

BOOL SpNpcMissing1::mainAct06() {
    Unk_020c0acc_Vec v;
    s16 a;
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0x122, &unk_2a0)) {
        a = unk_8e;
        Unk_020c0acc_Vec *src = &unk_5c;
        v = *src;
        if (((unk_ec.unk_a4 << 4) >> 16) == 7) {
            func_02090330(0x39, &v, &a, 0);
        }
        if (((unk_ec.unk_a4 << 4) >> 16) == 9) {
            func_02090330(0x38, &v, &a, 0);
        }
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x123, 1, data_020c6cc8, 0);
        }
    }
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0x123, &unk_2a0)) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcMissing1::setupAct08() {
    unk_724 = 0;
    return TRUE;
}

BOOL SpNpcMissing1::mainAct08() {
    u8 buf;
    Unk_020bfe30_Vec vec24;
    Unk_020bfe30_Vec vec30;
    s32 r5 = func_020a0414();
    Unk_020cbb18 *r7 = data_020cbb18;
    s32 r6 = r7->unk_68;
    s32 s = PlayerData_GetBySessionSlot(r5);
    switch (unk_724) {
    case 0:
        if (Unk_020c06a0_IsMode2()) {
            if (func_02094f2c(1, r5)) {
                unk_724 = 1;
            }
        }
        break;
    case 1:
        vec30 = data_020d1c8c;
        PlayerActor_RequestAct6F(&vec30, 0x35c, r5);
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0xe000, 0x10800, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_724 = 2;
        break;
    case 2:
        if (func_020951b8(r5)) {
            break;
        }
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            unk_724 = 3;
            unk_658.setTopic(6);
            _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            _ZN12Unk_02013b1013func_02014198Ehh(&unk_618, 0, 1);
        }
        break;
    case 3:
        if (unk_658.unk_3c->unk_04 == 5) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_658.unk_3c);
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 2, 2, 0xea00, 0x12e00, 0, 0, 0, 0, data_020c6cc8, 0);
            SpNpcMissing2_ChangeAct04();
            Camera_SetMode19();
            unk_724 = 4;
        }
        break;
    case 4:
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
            s32 t = NpcRegistry_FindSpNpc(0x23);
            if (t) {
                _ZN16ActorTalkRequest13func_02015a80EP18Unk_02015b8c_Scene(&unk_658, t);
            }
            buf = 10;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_658.unk_3c, &buf, (u32)sSpNpcMissing1MsgKey);
            unk_658.unk_3c->unk_08 = 1;
            _ZN15TalkWindowState13unlockAdvanceEv(unk_658.unk_3c);
            unk_724 = 5;
        }
        break;
    case 5:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            vec24.x = 0xde00;
            vec24.y = 0;
            vec24.z = 0x13a00;
            s32 t = Math_AngleXZ(&unk_5c, &vec24);
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
            unk_724 = 6;
        }
        break;
    case 6:
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0xde00, 0x13a00, 0, 0, 0, 0, data_020c6cc8, 0);
            PlayerActor_RequestAct70(0, r5);
            SpNpcMissing2_ChangeAct06();
            unk_724 = 7;
        }
        break;
    case 7:
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_724 = 8;
        }
        break;
    case 8:
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0xf000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_724 = 9;
        }
        break;
    case 9:
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            if (r5 != r6 && !func_020a03c4()) {
                func_020b78c4();
                break;
            }
            unk_724 = 10;
        }
        break;
    case 10:
        if (_ZN12Unk_020cbb1813func_020729ccEj(r7, 0)) {
            s32 x = _ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent());
            if (_ZN12Unk_020872fc13func_0208733cEv() == 1) {
                _ZN12Unk_020872fc13func_02087368Ev(x);
            }
            _ZN12Unk_02097ff413func_0209801cEj(PlayerData_GetCurrent(), 0x39);
            _ZN12Unk_020872fc13func_02087368Ev(_ZN10PlayerData13func_020986a4Ev((void *)s));
            _ZN12Unk_0208721013func_02087210Ev(func_02085178(func_020850e0()));
            func_020b4bbc(func_020b4934(), 1);
        }
        if (r5 == r6) {
            _ZN12Unk_020872fc13func_02087368Ev(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent()));
            _ZN12Unk_0208721013func_02087210Ev(func_02085178(func_020850e0()));
            _ZN12Unk_02097ff413func_0209801cEj(PlayerData_GetCurrent(), 0x31);
            func_020b4bbc(func_020b4934(), 0);
        } else {
            func_020b4bbc(func_020b4934(), 1);
        }
        unk_724 = 11;
        break;
    }
    return TRUE;
}

SpNpcMissing1Talk::SpNpcMissing1Talk() {}

SpNpcMissing1Talk::~SpNpcMissing1Talk() {}

void SpNpcMissing1Talk::attachOwner(SpNpcMissing1 *owner) {
    vfunc_08();
    unk_ac = owner;
}

void SpNpcMissing1Talk::setTopic(s32 v) {
    unk_b0 = v;
}

s32 SpNpcMissing1Talk::getTopic() {
    return unk_b0;
}

void SpNpcMissing1Talk::vfunc_38(void *p) {
    _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_ac->unk_2a0, 0);
    _ZN12Unk_0201ad2013func_0201ad30Ei(&unk_ac->unk_2a0, 1);
    _ZN16ActorTalkRequest8vfunc_38Ej(this, p);
}

void SpNpcMissing1Talk::vfunc_78(Unk_020c0538_Out *out) {
    void *t = PlayerData_GetCurrent();
    out->unk_00 = (u32)sSpNpcMissing1MsgKey;
    switch (getTopic()) {
    case 0:
        _ZN12Unk_02097ff413func_0209801cEj(t, 0x33);
        out->unk_04 = 0;
        break;
    case 1:
        _ZN12Unk_02097ff413func_0209801cEj(t, 0x33);
        out->unk_04 = func_02063b8c(3) + 1;
        break;
    case 2:
        out->unk_04 = func_02063b8c(3) + 4;
        func_0202e1cc(0x29, 1);
        break;
    case 3:
        out->unk_04 = func_02063b8c(3) + 7;
        break;
    case 4:
        out->unk_04 = func_02063b8c(3) + 0x19;
        break;
    case 5:
        out->unk_04 = func_02063b8c(3) + 0x22;
        break;
    case 6:
        out->unk_04 = 0x14;
        break;
    }
    unk_ac->unk_70d = 0;
}

void SpNpcMissing1Talk::vfunc_10() {
    s32 a = _ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent());
    _ZN16ActorTalkRequest13func_02015818Ejj(this, _ZN12Unk_020872fc13func_02087364Ev((void *)a), 0);
    _ZN16ActorTalkRequest13func_02015818Ejj(this, _ZN12Unk_020872fc13func_02087364Ev((void *)a), 1);
}

void SpNpcMissing1Talk::vfunc_14() {
    if (unk_1e == 0x14) {
        unk_3c->unk_14 = 0;
    }
}

void SpNpcMissing1Talk::vfunc_18() {
    switch (unk_1e) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
    case 25: case 26: case 27:
    case 34: case 35: case 36: {
        u8 v[2];
        _ZN15TalkWindowState13getChoiceListEv(unk_3c);
        switch (_ZN10ChoiceList9getResultEv()) {
        case 0:
            v[0] = func_02063b8c(3) + 0x1c;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v[0], (u32)sSpNpcMissing1MsgKey);
            _ZN12Unk_02086f8413func_02086fa0Ev(func_02085178(func_020850e0()));
            break;
        case 1:
            v[1] = func_02063b8c(3) + 0x1f;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v[1], (u32)sSpNpcMissing1MsgKey);
            if (func_020b50e8() == 0) {
                _ZN12Unk_02086f8413func_02086f98Ev(func_02085178(func_020850e0()));
            }
            unk_ac->unk_70d = 1;
            break;
        }
        break;
    }
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21:
    case 22: case 23: case 24: case 28: case 29: case 30: case 31: case 32: case 33:
        break;
    }
}

extern "C" BOOL SpNpcMissing1_IsIdle() {
    SpNpcMissing1 *p = sSpNpcMissing1Instance;
    if (p) {
        if (_ZN12Unk_02019dd813func_02019d8cEv(&p->unk_2ac) == 0xba && sSpNpcMissing1Instance->unk_654 == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

extern "C" void SpNpcMissing1_ResetAct() {
    SpNpcMissing1 *p = sSpNpcMissing1Instance;
    if (p) {
        if (p->unk_654 != 0) {
            p->changeAct(0);
        }
    }
}

extern "C" void SpNpcMissing1_ChangeAct05() {
    SpNpcMissing1 *p = sSpNpcMissing1Instance;
    if (p) {
        if (p->unk_654 != 5) {
            p->changeAct(5);
        }
    }
}

struct Unk_021f458c_Color {
    u8 v[4];
    Unk_021f458c_Color(u8 a, u8 b, u8 c, u8 d) {
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;
    }
};
Unk_021f458c_Color data_021f458c(31, 20, 20, 31);
Unk_021f458c_Color data_021f4580(20, 20, 31, 31);
Unk_021f458c_Color data_021f4584(31, 31, 20, 31);
Unk_021f458c_Color data_021f457c(20, 31, 20, 31);
Unk_021f458c_Color data_021f4590(20, 31, 31, 31);
Unk_021f458c_Color data_021f4588(20, 24, 24, 31);
const Unk_020bfe30_Vec data_020d1c8c = { 0x10000, 0, 0x11800 };
Unk_020c11b8_Ent sSpNpcMissing1ActTable[9] = {
    { &SpNpcMissing1::setupAct00, &SpNpcMissing1::mainAct00 },
    { &SpNpcMissing1::setupAct01, &SpNpcMissing1::mainAct01 },
    { &SpNpcMissing1::setupAct02, &SpNpcMissing1::mainAct02 },
    { &SpNpcMissing1::setupAct03, &SpNpcMissing1::mainAct03 },
    { &SpNpcMissing1::setupAct04, &SpNpcMissing1::mainAct04 },
    { &SpNpcMissing1::setupAct05, &SpNpcMissing1::mainAct05 },
    { &SpNpcMissing1::setupAct06, &SpNpcMissing1::mainAct06 },
    { &SpNpcMissing1::setupAct07, &SpNpcMissing1::mainAct07 },
    { &SpNpcMissing1::setupAct08, &SpNpcMissing1::mainAct08 },
};
SpNpcMissing1 *sSpNpcMissing1Instance;
char sSpNpcMissing1Key[] = "sp_npc_missing1";
char *sSpNpcMissing1MsgKey = sSpNpcMissing1Key;
char data_020e6870[] = "npc_sp/model/los_tex.nsbtx";
char data_020e6840[] = "npc_sp/model/los.nsbmd";
struct Unk_020e6858_Rec {
    SpNpcMissing1 *(*fn)();
    u32 w[5];
};
Unk_020e6858_Rec sSpNpcMissing1Profile = { func_020c1620, { 0x0082007e, 2, 0x5000, 0x5000, 0x3e800 } };
