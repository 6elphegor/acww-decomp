// mwcc-flags: -str reuse
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

class Unk_ov051_0225a2dc;
class Unk_ov051_0225a1a4;
struct Unk_0201bc1c;

struct Unk_ov051_02258e50_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov051_02258e68_Rec {
    u8 a;
    u8 b;
    u16 c;
};

struct Unk_ov051_0225a1a4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_02067918 {
    u32 unk_00;
    s32 unk_04;
};

struct ChoiceList {
    s32 getResult();
};

extern "C" {
void _ZN12Unk_020d771013func_02015170Ejj(void *self, u32 a, u32 b);
void _ZN12Unk_020d771013func_020151d0Ei(void *self, s32 a);
void _ZN16ActorTalkRequest13func_02015958Eijiii(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
void _ZN12Unk_02015b8c13func_02015e48Ej(void *self, s32 a);
u32 _ZN8PlayerId9getGenderEv(void *self);
void _ZN8PlayerId13func_02094124Eh(void *self, s32 a);
void *_ZN10PlayerData11getPlayerIdEv(void *self);
void _ZN10PlayerData11setFaceTypeEh(void *self, u32 a);
void _ZN10PlayerData12setHairColorEh(void *self, u32 a);
void _ZN10PlayerData12setHairStyleEh(void *self, u32 a);
void _ZN10PlayerData8setShirtEPt(void *self, u16 *p);
void _ZN8SaveData9clearFlagEj(void *self, s32 a);
void _ZN12Unk_02013b1013func_02014198Ehh(void *self, u32 a, u32 b);
void _ZN12Unk_0201985813func_020195c8Eiijtt(void *self, s32 a, s32 b, s32 c, u32 d, s32 e);
void _ZN12Unk_0201ad2013func_0201ad34Ei(void *self, s32 a);
void _ZN15TalkWindowState17setSlotFromStringEiii(void *self, s32 a, void *p, void *q);
void *PlayerData_GetCurrent();
Unk_02067918 *TalkWindow_Get(s32 a);
BOOL func_020a0318();
BOOL func_020a02dc();
BOOL func_020a02f0();
BOOL func_020a0304();
BOOL func_0206ed04();
void Clock_GetDateTime(void *p);
void Town_SetGenGateMode(u32 a);
void func_0206e8cc(void *p);
void SaveData_Setup(void *p, s32 a);
void SaveData_Apply(void *p);
s32 TownBlockMap_Get();
void Town_FindTownHallFront(s32 a, void *p, s32 b, s32 c);
s32 func_020b4934();
void func_020b4f18(s32 a, s32 b, void *p, u32 c, u32 d, u32 e, u32 f);
s32 func_020e7500(void *p);
s32 func_020e7518(void *p);
void func_0203d984();
void func_0203d990();
s32 func_02063b8c(s32 a);
void func_0203a318();
void ScreenTransition_StartFadeOut(s32 a, s32 b);
void Snd_FadeOutScene();
void ScreenTransition_StartFadeIn(s32 a, s32 b, s32 c);
void func_020b0f24();
s32 TaxiInterior_StopRain();
void TaxiInterior_StartDriverAnim();
extern u16 data_020c6cc8;
extern u8 gScreenTransition;
extern u8 gSaveData[];
extern u8 data_020d0544[];
extern u8 gTalkMsgIndexEnd[];
extern u32 __ptmf_null[];
}

struct TalkWindowState {
    s32 setNextMessage(u8 *a, void *b);
    ChoiceList *getChoiceList();
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
    virtual void vfunc_1c(s32 a);
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov051_0225a1a4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class ActorTalkRequest : public TalkMsgRequest {
public:
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_6c();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    ChoiceList *getChoiceList();
};

class Unk_020d7710 : public ActorTalkRequest {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    Unk_ov051_02258e50_Bits unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

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
    virtual BOOL vfunc_48(void *p);
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual u32 getSpecies();
    virtual void setShirt();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual s32 vfunc_9c();
    virtual void vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);

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
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual u32 getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov051_0225a1a4 : public Unk_020d7710 {
public:
    typedef void (Unk_ov051_0225a1a4::*Fn)();
    typedef void (Unk_ov051_0225a1a4::*FnU)(u32);

    Unk_ov051_0225a1a4();
    virtual ~Unk_ov051_0225a1a4();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 a);
    virtual void vfunc_78(Unk_ov051_0225a1a4_Out *out);
    virtual void vfunc_84();

    u8 func_ov051_02258fa8(u32 v);
    void func_ov051_02258fc8(u32 sel);
    void func_ov051_02259040(u32 sel);
    void func_ov051_02259088(u32 sel);
    void func_ov051_022590ec(u32 sel);
    void func_ov051_0225912c(u32 sel);
    void func_ov051_0225915c(u32 sel);
    void func_ov051_022591e8(u32 sel);
    void func_ov051_02259274(u32 sel);
    void func_ov051_02259520();
    void func_ov051_022595dc();
    void func_ov051_02259604();
    void func_ov051_02259654();
    void func_ov051_02259698();
    void func_ov051_022596dc();
    void func_ov051_02259704();
    void func_ov051_02259754();
    void func_ov051_02259780();
    void func_ov051_022597a4();
    void func_ov051_022597c8();
    void func_ov051_02259858();
    void func_ov051_02259878();
    void func_ov051_022598bc();
    void func_ov051_022598e4(s32 idx);
    void func_ov051_022599d4(Unk_ov051_0225a2dc *owner);

    Unk_ov051_0225a2dc *unk_ac;
    Fn unk_b0;
    s32 unk_b8;
};

struct Unk_ov051_02259be4_Ent {
    BOOL (Unk_ov051_0225a2dc::*enter)();
    BOOL (Unk_ov051_0225a2dc::*exit)();
};

class Unk_ov051_0225a2dc : public Unk_020d8bc8 {
public:
    Unk_ov051_0225a2dc() : unk_658() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual u32 getSpecies();
    virtual s32 vfunc_9c();

    BOOL func_ov051_02259a40();
    BOOL func_ov051_02259a88();
    BOOL func_ov051_02259a8c();
    BOOL func_ov051_02259b6c();
    BOOL func_ov051_02259b70();
    BOOL func_ov051_02259b74();
    BOOL func_ov051_02259b78();
    BOOL func_ov051_02259b7c();
    BOOL func_ov051_02259b98();
    BOOL func_ov051_02259bd4();
    void func_ov051_02259be4(s32 state);

    s32 unk_654;
    Unk_ov051_0225a1a4 unk_658;
    u16 unk_714;
    u8 unk_716;
    u8 pad_717;
};

extern "C" {
extern const u8 data_ov051_02259e74[];
extern const u8 data_ov051_02259e78[];
extern const u8 data_ov051_02259e7c[];
extern const u8 data_ov051_02259e80[];
extern const u32 data_ov051_02259e84[];
extern char *data_ov051_02259f60;
extern u8 data_ov051_0225a150[];
extern u8 data_ov051_0225a180[];
extern Unk_ov051_02259be4_Ent data_ov051_0225a548[];
extern Unk_ov051_0225a2dc *data_ov051_0225a520;
}

struct Unk_ov051_SceneEntry {
    Unk_ov051_0225a2dc *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov051_0225a2dc *func_ov051_02259d5c();


extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02258fc8Ej();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259040Ej();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259088Ej();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022590ecEj();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_0225912cEj();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_0225915cEj();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022591e8Ej();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259274Ej();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259520Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259604Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259654Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259698Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022596dcEv();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259704Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259754Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259780Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022597a4Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022597c8Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259858Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_02259878Ev();
extern "C" void _ZN18Unk_ov051_0225a1a419func_ov051_022598bcEv();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259a40Ev();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259a88Ev();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259a8cEv();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259b6cEv();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259b70Ev();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259b74Ev();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259b78Ev();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259b7cEv();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259b98Ev();
extern "C" void _ZN18Unk_ov051_0225a2dc19func_ov051_02259bd4Ev();
extern "C" void *data_ov051_02259f64[2];
extern "C" void *data_ov051_02259f6c[2];
extern "C" void *data_ov051_02259f74[2];
extern "C" void *data_ov051_02259f7c[2];
extern "C" void *data_ov051_02259f84[2];
extern "C" void *data_ov051_02259f8c[2];
extern "C" void *data_ov051_02259f94[2];
extern "C" void *data_ov051_02259f9c[2];
extern "C" void *data_ov051_02259fa4[2];
extern "C" void *data_ov051_02259fac[2];
extern "C" void *data_ov051_02259fb4[2];
extern "C" void *data_ov051_02259fbc[2];
extern "C" void *data_ov051_02259fc4[2];
extern "C" void *data_ov051_02259fcc[2];
extern "C" void *data_ov051_02259fd4[2];
extern "C" void *data_ov051_02259fdc[2];
extern "C" void *data_ov051_02259fe4[2];
extern "C" void *data_ov051_02259fec[2];
extern "C" void *data_ov051_02259ff4[2];
extern "C" void *data_ov051_02259ffc[2];
extern "C" void *data_ov051_0225a004[2];
extern "C" void *data_ov051_0225a00c[2];
extern "C" void *data_ov051_0225a014[2];
extern "C" void *data_ov051_0225a01c[2];
extern "C" void *data_ov051_0225a024[2];
extern "C" void *data_ov051_0225a02c[2];
extern "C" void *data_ov051_0225a034[2];
extern "C" void *data_ov051_0225a03c[2];
extern "C" void *data_ov051_0225a044[2];
extern "C" void *data_ov051_0225a04c[2];
extern "C" void *data_ov051_0225a054[2];
extern "C" void *data_ov051_0225a05c[2];
extern "C" void *data_ov051_0225a064[2];
extern "C" void *data_ov051_0225a06c[2];
extern "C" void *data_ov051_0225a074[2];
extern "C" void *data_ov051_0225a07c[2];
extern "C" void *data_ov051_0225a084[2];
extern "C" void *data_ov051_0225a08c[2];
extern "C" void *data_ov051_0225a094[2];
extern "C" void *data_ov051_0225a09c[2];
extern "C" void *data_ov051_0225a0a4[2];
extern "C" void *data_ov051_0225a0ac[2];
extern "C" void *data_ov051_0225a0b4[2];
extern "C" void *data_ov051_0225a0bc[2];
extern "C" void *data_ov051_0225a0c4[2];
extern "C" void *data_ov051_0225a0cc[2];
extern "C" void *data_ov051_0225a0d4[2];
extern "C" void *data_ov051_0225a0dc[2];
extern "C" void *data_ov051_0225a0e4[2];
extern "C" void *data_ov051_0225a0ec[2];
extern "C" void *data_ov051_0225a0f4[2];
extern "C" void *data_ov051_0225a0fc[2];
extern "C" void *data_ov051_0225a104[2];
extern "C" void *data_ov051_0225a10c[2];
extern "C" void *data_ov051_0225a114[2];
extern "C" void *data_ov051_0225a11c[2];
extern "C" void *data_ov051_0225a124[2];
extern "C" void *data_ov051_0225a12c[2];
extern "C" void *data_ov051_0225a134[2];
extern "C" u8 data_ov051_0225a13c[];
static inline BOOL Unk_ov051_02259a8c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_ov051_02259b98_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

struct Unk_ov051_02258e68_Ent {
    u32 id;
    void (Unk_ov051_0225a1a4::*fn)(u32);
};

struct Unk_ov051_022592e8_Ent {
    u32 id;
    void (Unk_ov051_0225a1a4::*fn)();
};

extern "C" Unk_ov051_0225a2dc *func_ov051_02259d5c() { return new Unk_ov051_0225a2dc; }

BOOL Unk_ov051_0225a2dc::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov051_022599d4(this);
    _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0xfb);
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    data_ov051_0225a520 = this;
    func_ov051_02259be4(0);
    unk_4cc.unk_1c |= 2;
    func_0203d990();
    unk_714 = 0x29;
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    func_0203d984();
    return TRUE;
}

u8 *Unk_ov051_0225a2dc::getTexturePath() { return data_ov051_0225a180; }

u8 *Unk_ov051_0225a2dc::getModelPath() { return data_ov051_0225a150; }

BOOL Unk_ov051_0225a2dc::updateAct() {
    BOOL r = FALSE;
    if (data_ov051_0225a548[unk_654].exit) {
        r = (this->*data_ov051_0225a548[unk_654].exit)();
    }
    if (func_020e7518(&unk_716) == 1) {
        _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x8f, 1, data_020c6cc8, 0);
    }
    return r;
}

void Unk_ov051_0225a2dc::func_ov051_02259be4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov051_0225a548[state].enter) {
        ok = (this->*data_ov051_0225a548[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

u32 Unk_ov051_0225a2dc::getSpecies() { return 0xffff; }

s32 Unk_ov051_0225a2dc::vfunc_9c() { return 10; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259bd4() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259b98() {
    if (Unk_ov051_02259b98_IsTwo(gScreenTransition)) {
        if (func_020e7500(&unk_714) == 0) {
            func_ov051_02259be4(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259b7c() {
    _ZN12Unk_02013b1013func_02014198Ehh(&unk_618, 1, 0);
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259b78() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259b74() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259b70() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259b6c() { return TRUE; }

BOOL Unk_ov051_0225a2dc::func_ov051_02259a8c() {
    struct {
        u32 w[2];
        u32 v[3];
    } l;
    if (Unk_ov051_02259a8c_IsZero(gScreenTransition)) {
        ScreenTransition_StartFadeIn(3, 0, 1);
        func_020b0f24();
        if (func_020a02f0() || func_020a0318()) {
            l.w[0] = 0;
            l.w[1] = 0;
            Clock_GetDateTime(&l.w);
            func_0206e8cc(&l.w);
        }
        if (func_020a0318()) {
            SaveData_Setup(gSaveData, 0);
            SaveData_Apply(gSaveData);
        } else if (func_020a02f0()) {
            SaveData_Setup(gSaveData, 6);
            SaveData_Apply(gSaveData);
        } else if (func_020a0304()) {
            SaveData_Setup(gSaveData, 1);
            SaveData_Apply(gSaveData);
        }
        _ZN8SaveData9clearFlagEj(gSaveData, 0x12);
        Town_FindTownHallFront(TownBlockMap_Get(), &l.v, 0, 0);
        func_020b4f18(func_020b4934(), 0, &l.v, 0x400000, 0xffff8000, 3, 2);
        func_ov051_02259be4(2);
    }
    return TRUE;
}

BOOL Unk_ov051_0225a2dc::func_ov051_02259a88() { return TRUE; }

// ---------------------------------------------------------------------------------------------------------------------
// Owner Unk_ov051_0225a2dc
BOOL Unk_ov051_0225a2dc::func_ov051_02259a40() {
    if (TalkWindow_Get(0)->unk_04 == 0) {
        if (func_02063b8c(4) == 0) {
            TaxiInterior_StartDriverAnim();
            func_0203a318();
            unk_716 = 10;
        }
        ScreenTransition_StartFadeOut(0, 0xf);
        Snd_FadeOutScene();
        func_ov051_02259be4(3);
    }
    return TRUE;
}

Unk_ov051_0225a1a4::Unk_ov051_0225a1a4() {}

Unk_ov051_0225a1a4::~Unk_ov051_0225a1a4() {}

void Unk_ov051_0225a1a4::func_ov051_022599d4(Unk_ov051_0225a2dc *owner) {
    vfunc_08();
    unk_ac = owner;
}

void Unk_ov051_0225a1a4::vfunc_1c(s32 a) {
    if (a == 0) {
        TaxiInterior_StopRain();
    }
}

void Unk_ov051_0225a1a4::vfunc_78(Unk_ov051_0225a1a4_Out *out) {
    out->unk_00 = (u32)data_ov051_02259f60;
    if (func_020a0318() || func_020a02f0()) {
        out->unk_04 = 0;
    } else {
        out->unk_04 = 0x28;
    }
}

void Unk_ov051_0225a1a4::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        unk_b0 = *(Fn *)__ptmf_null;
    }
}



void Unk_ov051_0225a1a4::func_ov051_022598e4(s32 idx) {
    static Fn tbl[3] = {
        *(Fn *)data_ov051_0225a0fc,
        *(Fn *)data_ov051_0225a0f4,
        *(Fn *)data_ov051_0225a0ec,
    };
    unk_b0 = tbl[idx];
}

void Unk_ov051_0225a1a4::func_ov051_022598bc() {
    u8 m[1];
    m[0] = func_ov051_02258fa8(0x11);
    unk_3c->setNextMessage(m, data_ov051_02259f60);
}

void Unk_ov051_0225a1a4::func_ov051_02259878() {
    u8 m[2];
    if (func_0206ed04()) {
        m[0] = 0x29;
        unk_3c->setNextMessage(m, data_ov051_02259f60);
    } else {
        m[1] = 9;
        unk_3c->setNextMessage(&m[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259858() {
    u8 m[1];
    m[0] = 2;
    unk_3c->setNextMessage(m, data_ov051_02259f60);
}

void Unk_ov051_0225a1a4::vfunc_10() {
    struct {
        u8 msg;
        u8 pad[3];
        u32 w[2];
    } l;
    if (unk_1e == 0 || unk_1e == 2) {
        void *h = TalkWindow_Get(0);
        s32 r4 = 0x19;
        l.w[0] = 0;
        l.w[1] = 0;
        Clock_GetDateTime(&l.w);
        if (((u8 *)l.w)[2] >= 0xc) {
            r4 = 0x1a;
        }
        l.msg = r4;
        _ZN15TalkWindowState17setSlotFromStringEiii(h, 0, &l.msg, (void *)"st_general");
        u32 t = ((u8 *)l.w)[2];
        if (t >= 0xc) {
            t -= 0xc;
        }
        if (t == 0) {
            t = 0xc;
        }
        _ZN16ActorTalkRequest13func_02015958Eijiii(this, t, 1, 2, 0, 0);
    }
}

void Unk_ov051_0225a1a4::func_ov051_022597c8() {
    _ZN12Unk_020d771013func_02015170Ejj(this, 0x30, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 2);
    func_ov051_022598e4(2);
}

void Unk_ov051_0225a1a4::func_ov051_022597a4() {
    _ZN12Unk_020d771013func_02015170Ejj(this, 0xf, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 2);
    func_ov051_022598e4(1);
}

void Unk_ov051_0225a1a4::func_ov051_02259780() {
    _ZN12Unk_020d771013func_02015170Ejj(this, 0x10, 0);
    _ZN12Unk_020d771013func_020151d0Ei(this, 2);
    func_ov051_022598e4(0);
}

void Unk_ov051_0225a1a4::func_ov051_02259754() {
    u8 m[2];
    if (func_020a02dc()) {
        m[0] = 0x30;
        unk_3c->setNextMessage(m, data_ov051_02259f60);
    }
}

// Dialog class Unk_ov051_0225a1a4
void Unk_ov051_0225a1a4::func_ov051_02259704() {
    u8 m[2];
    if (func_020a0318()) {
        m[0] = func_ov051_02258fa8(0x15);
        unk_3c->setNextMessage(m, data_ov051_02259f60);
    } else {
        m[1] = func_ov051_02258fa8(0x1f);
        unk_3c->setNextMessage(&m[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_022596dc() {
    u8 msg;
    msg = func_ov051_02258fa8(0xf);
    unk_3c->setNextMessage(&msg, data_ov051_02259f60);
}

void Unk_ov051_0225a1a4::func_ov051_02259698() {
    u8 msg[2];
    if (func_020a0304()) {
        msg[0] = 0x19;
        unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
    } else {
        msg[1] = 0xf;
        unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259654() {
    u8 msg[2];
    if (func_020a0304()) {
        msg[0] = 0x1a;
        unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
    } else {
        msg[1] = 0x10;
        unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259604() {
    u8 msg[2];
    if (func_020a02f0()) {
        msg[0] = func_ov051_02258fa8(0x25);
        unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
    } else {
        msg[1] = func_ov051_02258fa8(0x1f);
        unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
    }
}

void Unk_ov051_0225a1a4::func_ov051_022595dc() {
    u8 msg;
    msg = func_ov051_02258fa8(0x25);
    unk_3c->setNextMessage(&msg, data_ov051_02259f60);
}

void Unk_ov051_0225a1a4::func_ov051_02259520() {
    if (func_020a0304() || func_020a0318()) {
        void *h = PlayerData_GetCurrent();
        u32 res = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(h));
        u32 off4;
        u32 v;
        u32 r1;
        if (res == 0) {
            off4 = res << 2;
            v = *(u32 *)(off4 + ((u32)data_ov051_02259e84 + (u32)(unk_ac->unk_658.unk_b8 << 3)));
            r1 = (u8)v;
        } else {
            off4 = res << 2;
            v = *(u32 *)(off4 + ((u32)data_ov051_02259e84 + (u32)(unk_ac->unk_658.unk_b8 << 3)));
            r1 = (u8)(v + 8);
        }
        u8 *base = data_020d0544 + (v << 3);
        Unk_ov051_02258e68_Rec *e = (Unk_ov051_02258e68_Rec *)(base + off4);
        u16 c;
        _ZN10PlayerData11setFaceTypeEh(h, r1);
        _ZN10PlayerData12setHairColorEh(h, e->b);
        _ZN10PlayerData12setHairStyleEh(h, base[off4]);
        c = e->c;
        _ZN10PlayerData8setShirtEPt(h, &c);
    }
    unk_3c->setNextMessage(gTalkMsgIndexEnd, 0);
    unk_ac->func_ov051_02259be4(4);
}

extern "C" void *data_ov051_0225a014[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259bd4Ev, 0};
extern "C" void *data_ov051_02259f7c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022591e8Ej, 0};
extern "C" void *data_ov051_0225a034[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259b7cEv, 0};
extern "C" void *data_ov051_02259f64[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259b74Ev, 0};
extern "C" void *data_ov051_0225a114[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259b6cEv, 0};
extern "C" void *data_ov051_0225a12c[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259a88Ev, 0};
extern "C" void *data_ov051_02259f8c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259274Ej, 0};
extern "C" void *data_ov051_02259f94[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259b70Ev, 0};
extern "C" void *data_ov051_0225a134[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259a8cEv, 0};
extern "C" void *data_ov051_0225a07c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259088Ej, 0};
extern "C" void *data_ov051_0225a124[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259a40Ev, 0};
extern "C" void *data_ov051_0225a11c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259604Ev, 0};

void Unk_ov051_0225a1a4::vfunc_14() {
    static Unk_ov051_022592e8_Ent tbl[32] = {
        {0x01, *(Fn *)data_ov051_02259fec},
        {0x04, *(Fn *)data_ov051_0225a0c4},
        {0x08, *(Fn *)data_ov051_0225a0bc},
        {0x0a, *(Fn *)data_ov051_0225a0b4},
        {0x29, *(Fn *)data_ov051_0225a0ac},
        {0x0f, *(Fn *)data_ov051_0225a0a4},
        {0x10, *(Fn *)data_ov051_0225a09c},
        {0x13, *(Fn *)data_ov051_0225a094},
        {0x14, *(Fn *)data_ov051_02259fcc},
        {0x25, *(Fn *)data_ov051_0225a084},
        {0x26, *(Fn *)data_ov051_02259fc4},
        {0x06, *(Fn *)data_ov051_0225a074},
        {0x07, *(Fn *)data_ov051_02259fbc},
        {0x1b, *(Fn *)data_ov051_0225a064},
        {0x1c, *(Fn *)data_ov051_02259fa4},
        {0x1d, *(Fn *)data_ov051_0225a054},
        {0x1e, *(Fn *)data_ov051_02259fac},
        {0x2b, *(Fn *)data_ov051_0225a0dc},
        {0x2c, *(Fn *)data_ov051_0225a03c},
        {0x2d, *(Fn *)data_ov051_0225a01c},
        {0x2e, *(Fn *)data_ov051_0225a024},
        {0x0d, *(Fn *)data_ov051_0225a04c},
        {0x0e, *(Fn *)data_ov051_0225a05c},
        {0x17, *(Fn *)data_ov051_0225a11c},
        {0x18, *(Fn *)data_ov051_0225a08c},
        {0x21, *(Fn *)data_ov051_0225a104},
        {0x22, *(Fn *)data_ov051_02259ffc},
        {0x23, *(Fn *)data_ov051_0225a0e4},
        {0x24, *(Fn *)data_ov051_0225a0d4},
        {0x2f, *(Fn *)data_ov051_02259fe4},
        {0x31, *(Fn *)data_ov051_02259fdc},
        {0x32, *(Fn *)data_ov051_02259fd4},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov051_022592e8_Ent *)((u32)tbl + i * 12))->fn)();
    }
    i++;
test0:
    if (i < 0x20) goto loop0;
}

void Unk_ov051_0225a1a4::func_ov051_02259274(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        if (func_020a02f0()) {
            msg[0] = func_ov051_02258fa8(0x15);
            unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
        } else {
            msg[1] = func_ov051_02258fa8(0x19);
            unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
        }
        break;
    case 1:
        msg[2] = func_ov051_02258fa8(0x13);
        unk_3c->setNextMessage(&msg[2], data_ov051_02259f60);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_022591e8(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 0);
        if (func_020a0304()) {
            msg[0] = func_ov051_02258fa8(0x19);
            unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
        } else {
            msg[1] = func_ov051_02258fa8(0xf);
            unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
        }
        break;
    case 1:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 1);
        msg[2] = 0xe;
        unk_3c->setNextMessage(&msg[2], data_ov051_02259f60);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_0225915c(u32 sel) {
    u8 msg[3];
    switch (sel) {
    case 0:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 1);
        if (func_020a0304()) {
            msg[0] = func_ov051_02258fa8(0x19);
            unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
        } else {
            msg[1] = func_ov051_02258fa8(0xf);
            unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
        }
        break;
    case 1:
        _ZN8PlayerId13func_02094124Eh(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 0);
        msg[2] = 0xd;
        unk_3c->setNextMessage(&msg[2], data_ov051_02259f60);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_0225912c(u32 sel) {
    u8 msg;
    msg = func_ov051_02258fa8(0x17);
    unk_3c->setNextMessage(&msg, data_ov051_02259f60);
    Town_SetGenGateMode(sel);
}

void Unk_ov051_0225a1a4::func_ov051_022590ec(u32 sel) {
    u8 msg[2];
    switch (sel) {
    case 0:
        msg[0] = 0x31;
        unk_3c->setNextMessage(&msg[0], data_ov051_02259f60);
        break;
    case 1:
        msg[1] = 0x32;
        unk_3c->setNextMessage(&msg[1], data_ov051_02259f60);
        break;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259088(u32 sel) {
    u8 msg;
    u32 v;
    if (func_020a02f0()) {
        v = *(u8 *)(_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) + ((u32)data_ov051_02259e80 + sel * 2));
    } else {
        v = data_ov051_02259e7c[sel];
    }
    msg = v;
    unk_3c->setNextMessage(&msg, data_ov051_02259f60);
    if (sel == 1) {
        unk_ac->unk_658.unk_b8 += 4;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02259040(u32 sel) {
    u8 msg;
    msg = func_ov051_02258fa8(data_ov051_02259e78[sel]);
    unk_3c->setNextMessage(&msg, data_ov051_02259f60);
    if (sel == 1) {
        unk_ac->unk_658.unk_b8 += 2;
    }
}

void Unk_ov051_0225a1a4::func_ov051_02258fc8(u32 sel) {
    u8 msg;
    u32 v;
    if (func_020a0318()) {
        v = func_ov051_02258fa8(data_ov051_02259e74[sel]);
    } else if (sel == 0) {
        if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0) {
            v = 0x21;
        } else {
            v = 0x2f;
        }
    } else {
        v = func_ov051_02258fa8(0x23);
    }
    msg = v;
    unk_3c->setNextMessage(&msg, data_ov051_02259f60);
    if (sel == 1) {
        unk_ac->unk_658.unk_b8++;
    }
}

u8 Unk_ov051_0225a1a4::func_ov051_02258fa8(u32 v) {
    u8 r = (u8)_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    return (u8)(v + r);
}

extern "C" void *data_ov051_0225a104[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
extern "C" void *data_ov051_0225a0fc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022598bcEv, 0};
extern "C" u8 data_ov051_0225a180[] = "npc_sp/model/wip_tex.nsbtx";
extern "C" void *data_ov051_0225a0ec[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259858Ev, 0};
extern "C" void *data_ov051_0225a0e4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
Unk_ov051_02259be4_Ent data_ov051_0225a548[5] = {
    {*(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a014, *(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_02259f84},
    {*(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a034, *(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a10c},
    {*(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_02259f64, *(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_02259f94},
    {*(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a114, *(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a134},
    {*(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a12c, *(BOOL (Unk_ov051_0225a2dc::**)())data_ov051_0225a124},
};
extern "C" u8 data_ov051_0225a150[] = "npc_sp/model/wip.nsbmd";
extern "C" const u8 data_ov051_02259e7c[4] = {6, 7, 0, 0};
extern "C" void *data_ov051_0225a0c4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022597c8Ev, 0};
extern "C" const u8 data_ov051_02259e80[4] = {0x2b, 0x2c, 0x2d, 0x2e};
extern "C" void *data_ov051_0225a0b4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022597a4Ev, 0};
extern "C" void *data_ov051_0225a0ac[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022597a4Ev, 0};
extern "C" void *data_ov051_0225a0a4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259780Ev, 0};
extern "C" void *data_ov051_0225a09c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259780Ev, 0};
extern "C" u8 data_ov051_0225a13c[] = "sp_etc_sequence3";
extern "C" void *data_ov051_0225a08c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259604Ev, 0};
extern "C" void *data_ov051_0225a084[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259520Ev, 0};
extern "C" void *data_ov051_02259fc4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259520Ev, 0};
extern "C" void *data_ov051_0225a074[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259754Ev, 0};
extern "C" void *data_ov051_0225a06c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259088Ej, 0};
extern "C" void *data_ov051_0225a064[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259704Ev, 0};
Unk_ov051_0225a2dc *data_ov051_0225a520;
extern "C" void *data_ov051_0225a054[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259704Ev, 0};
extern "C" void *data_ov051_0225a04c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259698Ev, 0};
extern "C" void *data_ov051_0225a10c[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259b78Ev, 0};
extern "C" void *data_ov051_0225a03c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022596dcEv, 0};
extern "C" void *data_ov051_0225a01c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022596dcEv, 0};
extern "C" Unk_ov051_SceneEntry data_ov051_0225a168 = {func_ov051_02259d5c, 0x7b, 0x7f, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov051_0225a05c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259654Ev, 0};
extern "C" void *data_ov051_0225a0bc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022597a4Ev, 0};
extern "C" void *data_ov051_0225a0cc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02258fc8Ej, 0};
extern "C" void *data_ov051_0225a0d4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
extern "C" void *data_ov051_0225a004[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_0225915cEj, 0};
extern "C" void *data_ov051_0225a0f4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259878Ev, 0};
extern "C" void *data_ov051_02259ff4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259274Ej, 0};
extern "C" void *data_ov051_02259fec[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022597c8Ev, 0};
extern "C" void *data_ov051_02259fe4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
extern "C" void *data_ov051_02259fdc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
extern "C" void *data_ov051_02259fd4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
extern "C" void *data_ov051_0225a094[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259780Ev, 0};
extern "C" const u8 data_ov051_02259e78[4] = {0x1d, 0x1b, 0, 0};
extern "C" void *data_ov051_02259fbc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259754Ev, 0};
extern "C" void *data_ov051_02259fa4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259704Ev, 0};
extern "C" void *data_ov051_02259fac[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259704Ev, 0};
extern "C" void *data_ov051_0225a044[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02258fc8Ej, 0};
extern "C" void *data_ov051_0225a024[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022596dcEv, 0};
extern "C" char *data_ov051_02259f60 = (char *)data_ov051_0225a13c;
extern "C" void *data_ov051_0225a0dc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022596dcEv, 0};
extern "C" void *data_ov051_02259ffc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022595dcEv, 0};
extern "C" const u8 data_ov051_02259e74[4] = {0x21, 0x23, 0, 0};
extern "C" void *data_ov051_02259f6c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_0225912cEj, 0};
extern "C" void *data_ov051_02259fcc[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259780Ev, 0};
extern "C" void *data_ov051_02259f9c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259040Ej, 0};
extern "C" void *data_ov051_02259fb4[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259040Ej, 0};
extern "C" void *data_ov051_0225a02c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_02259088Ej, 0};

void Unk_ov051_0225a1a4::vfunc_18() {
    static Unk_ov051_02258e68_Ent tbl[14] = {
        {0x05, *(FnU *)data_ov051_0225a02c},
        {0x03, *(FnU *)data_ov051_0225a06c},
        {0x28, *(FnU *)data_ov051_0225a07c},
        {0x0b, *(FnU *)data_ov051_0225a004},
        {0x0c, *(FnU *)data_ov051_02259f7c},
        {0x15, *(FnU *)data_ov051_02259f6c},
        {0x16, *(FnU *)data_ov051_02259f74},
        {0x19, *(FnU *)data_ov051_02259f9c},
        {0x1a, *(FnU *)data_ov051_02259fb4},
        {0x1f, *(FnU *)data_ov051_0225a044},
        {0x20, *(FnU *)data_ov051_0225a0cc},
        {0x11, *(FnU *)data_ov051_02259ff4},
        {0x12, *(FnU *)data_ov051_02259f8c},
        {0x30, *(FnU *)data_ov051_0225a00c},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 off = i * 12;
    u32 id = *(u32 *)((u8 *)tbl + off);
    if (id == *idp) {
        u32 arg = unk_3c->getChoiceList()->getResult();
        (this->*((Unk_ov051_02258e68_Ent *)((u32)tbl + off))->fn)(arg);
    }
    i++;
test0:
    if (i < 0xe) goto loop0;
}

extern "C" u32 func_ov051_02258e50() {
    return data_ov051_0225a520->unk_ec.unk_a4.mid;
}

// ---------------------------------------------------------------------------------------------------------------------

extern "C" void func_ov051_02258e34() {
    _ZN12Unk_02015b8c13func_02015e48Ej(&data_ov051_0225a520->unk_334, 0);
}

extern "C" void *data_ov051_02259f74[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_0225912cEj, 0};
extern "C" void *data_ov051_0225a00c[2] = {(void *)_ZN18Unk_ov051_0225a1a419func_ov051_022590ecEj, 0};
extern "C" const u32 data_ov051_02259e84[16] = {4, 6, 5, 5, 1, 0, 0, 1, 6, 4, 3, 2, 2, 7, 7, 3};
extern "C" void *data_ov051_02259f84[2] = {(void *)_ZN18Unk_ov051_0225a2dc19func_ov051_02259b98Ev, 0};

