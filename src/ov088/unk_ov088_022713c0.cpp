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

struct Unk_0201bc1c;
class Unk_ov088_022726ac;
class Unk_ov088_02272618;
struct Unk_020868cc;

struct Unk_ov088_Vec {
    s32 x, y, z;
};

struct ChoiceEntry {
    void loadText();
    void setBmgName(const void *p);
    void setMsgIndex(const u8 *p);
    u8 *getText();
};

struct ChoiceList {
    s32 getResult();
    void setCancelToLast();
    void setCount(s32 v);
    ChoiceEntry *getEntry(s32 i);
    void clear();
};

struct ChoiceString {
    u8 unk_00[0x34];
    ChoiceString();
    ~ChoiceString();
};

struct Unk_020e1c64 {
    u32 v[7];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct TalkWindowState {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xc];
    s32 unk_14;
    void setNextMessage(u8 *a, void *b);
    s32 setSlot(s32 idx, void *p);
    ChoiceList *getChoiceList();
    void openChoices(s32 v);
};

struct Unk_ov088_022717d8_Out {
    u32 a;
    u8 b;
};

extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *p);
void _ZN12Unk_020d771013func_02014f74Ev(void *p);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void func_0203ffa4(s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 Math_AngleXZ(void *p, void *q);
BOOL NpcActor_IsFrontAngle(s32 v);
u32 func_020e7518(void *p);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
u32 Random_Next(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 gCamera;
extern Unk_ov088_Vec gCameraLookAt;
extern s16 data_02135f44[];
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(Unk_ov088_Vec *a, Unk_ov088_Vec *b);
BOOL func_02077f40(Unk_ov088_Vec *a, s32 b);
BOOL func_0201a834(void *p);
void func_0201a900(void *out, Unk_ov088_Vec *a, Unk_ov088_Vec *b, s32 c);
void TalkRequest_EndTalkWith(void *p);
void *func_020850e0();
Unk_020868cc *func_0208516c(void *p);
extern u32 gRandom[];
extern Unk_ov088_Vec gVec3Zero;
void func_0203f094(s32 a, s32 b);
u32 func_0203f07c(s32 i);
s32 func_0203f0b4();
s32 func_0203f0c0();
void MI_CpuFill8(void *p, s32 v, u32 n);
void String_Load(void *a, u8 *b, const char *c);
void *Choice_GetBmgName(s32 v);
BOOL func_0202e360();
BOOL func_02040c88();
extern u32 __ptmf_null[];
void _ZN15TalkWindowState17setSlotFromStringEiii(void *self, s32 idx, u8 *p, void *s);
s32 _ZN19Unk_020133cc_Player13func_020133ccEv(void *self);
s32 _ZN19Unk_020133cc_Player13func_0201344cEv(void *self);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *self, u32 v);
void _ZN12Unk_02097ff413func_0209801cEj(void *self, u32 v);
void _ZN9MsgString4copyEPS_(void *self, void *o);
void _ZN12Unk_0201347413func_020135bcEv(void *self);
void _ZN12Unk_0201347413func_020135c4Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, u32 a, s32 b, s32 c, void *d, s32 e, s32 f, u32 g);
s32 _ZN12Unk_0201a33413func_0201a7e8Ev(void *self);
void _ZN12Unk_0201a8c413func_0201a8f0Ev(void *self);
BOOL _ZN12Unk_0201a8c413func_0201a968Ev(void *self);
Unk_ov088_Vec *_ZN12Unk_0201a8c413func_0201a978Ev(void *self);
void _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(void *self, void *v);
BOOL _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(void *self, void *owner, s32 v);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
}

struct Unk_020868cc {
    void func_020868dc(s32 a, s32 b);
    void func_020868e4();
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
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
    virtual void vfunc_78(Unk_ov088_022717d8_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    ChoiceList *getChoiceList();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class Unk_ov088_02272618 : public SpNpcTalkRequest {
public:
    Unk_ov088_02272618();
    virtual ~Unk_ov088_02272618();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov088_022717d8_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88(s32 v);

    void func_ov088_02271654(Unk_ov088_022726ac *owner);
    void func_ov088_022716e8();
    void func_ov088_02271714();
    void func_ov088_022717e8();
    void func_ov088_02271824();
    void func_ov088_022718cc(s32 state);
    s32 func_ov088_02271ac0(u8 *p, s32 n);
    s32 func_ov088_02271afc(u8 *p, s32 n);

    s32 unk_ac;
    u8 unk_b0;
    u8 pad_b1[3];
    Unk_ov088_022726ac *unk_b4;
    u8 unk_b8;
    u8 unk_b9[0x1e];
    u8 unk_d7[5];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    Unk_ov088_Vec *func_0201a978();
    BOOL func_0201a9a0(void *owner, s32 v);
    void func_0201a97c(Unk_ov088_Vec *v);
    BOOL func_0201a968();
    void func_0201a8f0();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); s32 func_0201a7e8(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
    s32 func_0201acfc();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
    void func_0201a6c0(s32 a, s32 b, s32 c, Unk_ov088_Vec *d, s32 e, s32 f, s32 g);
};
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
    void func_020135bc();
    void func_020135c4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
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
    virtual BOOL vfunc_48();
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
    virtual void getSpecies();
    virtual void setShirt();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual s32 vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

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
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov088_022726ac : public Unk_020d8bc8 {
public:
    Unk_ov088_022726ac() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 vfunc_a0();
    virtual s32 vfunc_a8();

    void func_ov088_02271414(s32 a, s32 b);
    BOOL func_ov088_02271b1c();
    BOOL func_ov088_02271b20();
    BOOL func_ov088_02271b5c();
    BOOL func_ov088_02271b78();
    BOOL func_ov088_02271bc8();
    BOOL func_ov088_02271e10();
    BOOL func_ov088_02271e34();
    BOOL func_ov088_02271f34(Unk_ov088_Vec *out, Unk_ov088_Vec *p);
    BOOL func_ov088_02271f70(s32 *a, s32 *b);
    BOOL func_ov088_02272000();
    BOOL func_ov088_02272038(Unk_ov088_Vec *a, Unk_ov088_Vec *b);
    BOOL func_ov088_02272090();
    BOOL func_ov088_02272110();
    BOOL func_ov088_02272114();
    BOOL func_ov088_02272140();
    void func_ov088_02272144(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov088_02272618 unk_658;
    u8 unk_734;
    u8 unk_735;
};

struct Unk_ov088_022725d4_Ent {
    void (Unk_ov088_02272618::*fn)();
    u8 flag;
};

struct Unk_ov088_02272144_Ent {
    BOOL (Unk_ov088_022726ac::*enter)();
    BOOL (Unk_ov088_022726ac::*exit)();
};

struct Unk_ov088_Rgba {
    u8 r, g, b, a;
    Unk_ov088_Rgba(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(u32 x_, u32 y_, u32 z_) : x(x_), y(y_), z(z_) {}
    ~FxVec3();
};

struct Unk_ov088_SceneEntry {
    Unk_ov088_022726ac *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov088_022726ac *func_ov088_0227226c();

typedef void (Unk_ov088_02272618::*Unk_ov088_02272618_Fn)();
typedef BOOL (Unk_ov088_022726ac::*Unk_ov088_022726ac_Fn)();

extern "C" {
void _ZN18Unk_ov088_022726ac19func_ov088_02272090Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02271bc8Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02271b78Ev();
void _ZN18Unk_ov088_0227261819func_ov088_02271824Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02272110Ev();
void _ZN18Unk_ov088_0227261819func_ov088_02271714Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02271b20Ev();
void _ZN18Unk_ov088_0227261819func_ov088_022716e8Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02271b1cEv();
void _ZN18Unk_ov088_022726ac19func_ov088_02272140Ev();
void _ZN18Unk_ov088_0227261819func_ov088_022717e8Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02272114Ev();
void _ZN18Unk_ov088_022726ac19func_ov088_02271b5cEv();
extern void *data_ov088_02272520[2];
extern void *data_ov088_02272528[2];
extern void *data_ov088_02272530[2];
extern void *data_ov088_02272538[2];
extern void *data_ov088_02272540[2];
extern void *data_ov088_02272548[2];
extern void *data_ov088_02272550[2];
extern void *data_ov088_02272558[2];
extern void *data_ov088_02272560[2];
extern void *data_ov088_02272568[2];
extern void *data_ov088_02272570[2];
extern void *data_ov088_02272578[2];
extern void *data_ov088_02272580[2];
extern Unk_ov088_022725d4_Ent data_ov088_022725d4[5];
extern Unk_ov088_02272144_Ent data_ov088_022727e8[5];
extern FxVec3 data_ov088_022727d0[2];
extern u8 data_ov088_02272588[];
extern u8 data_ov088_022725b8[];
}

// Definition order is the original creation order (see notes.txt).
extern "C" Unk_ov088_Rgba data_ov088_022727b4(31, 20, 20, 31);
extern "C" Unk_ov088_Rgba data_ov088_022727a8(20, 20, 31, 31);
extern "C" Unk_ov088_Rgba data_ov088_022727a4(31, 31, 20, 31);
extern "C" void *data_ov088_02272570[2] = {(void *)_ZN18Unk_ov088_0227261819func_ov088_022717e8Ev, 0};
extern "C" Unk_ov088_Rgba data_ov088_022727a0(20, 31, 20, 31);
extern "C" void *data_ov088_02272528[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02271bc8Ev, 0};
extern "C" void *data_ov088_02272580[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02271b5cEv, 0};
extern "C" void *data_ov088_02272550[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02271b20Ev, 0};
extern "C" u8 data_ov088_022725b8[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'u', 'p', 'a', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov088_02272540[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02272110Ev, 0};
extern "C" void *data_ov088_02272578[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02272114Ev, 0};
extern "C" u8 data_ov088_02272588[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'u', 'p', 'a', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" void *data_ov088_02272568[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02272140Ev, 0};
extern "C" Unk_ov088_Rgba data_ov088_022727b0(20, 31, 31, 31);
extern "C" Unk_ov088_SceneEntry data_ov088_022725a0 = {func_ov088_0227226c, 0x62, 0x69, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov088_02272520[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02272090Ev, 0};
extern "C" void *data_ov088_02272548[2] = {(void *)_ZN18Unk_ov088_0227261819func_ov088_02271714Ev, 0};
extern "C" Unk_ov088_Rgba data_ov088_022727ac(20, 24, 24, 31);
extern "C" void *data_ov088_02272538[2] = {(void *)_ZN18Unk_ov088_0227261819func_ov088_02271824Ev, 0};

Unk_ov088_022725d4_Ent data_ov088_022725d4[5] = {
    {NULL, 0},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272538, 1},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272570, 1},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272548, 1},
    {*(Unk_ov088_02272618_Fn *)data_ov088_02272558, 1},
};

extern "C" void *data_ov088_02272560[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02271b1cEv, 0};

Unk_ov088_02272144_Ent data_ov088_022727e8[5] = {
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272568, *(Unk_ov088_022726ac_Fn *)data_ov088_02272578},
    {NULL, *(Unk_ov088_022726ac_Fn *)data_ov088_02272540},
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272520, *(Unk_ov088_022726ac_Fn *)data_ov088_02272528},
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272530, *(Unk_ov088_022726ac_Fn *)data_ov088_02272580},
    {*(Unk_ov088_022726ac_Fn *)data_ov088_02272550, *(Unk_ov088_022726ac_Fn *)data_ov088_02272560},
};

extern "C" void *data_ov088_02272558[2] = {(void *)_ZN18Unk_ov088_0227261819func_ov088_022716e8Ev, 0};
extern "C" void *data_ov088_02272530[2] = {(void *)_ZN18Unk_ov088_022726ac19func_ov088_02271b78Ev, 0};
FxVec3 data_ov088_022727d0[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};

extern "C" Unk_ov088_022726ac *func_ov088_0227226c() {
    return new Unk_ov088_022726ac();
}

s32 Unk_ov088_022726ac::vfunc_a8() { return data_020c6cf0; }

BOOL Unk_ov088_022726ac::vfunc_04() {
    if (Unk_020d8bc8::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov088_02271654(this);
    return TRUE;
}

BOOL Unk_ov088_022726ac::vfunc_00() {
    if (Unk_020d8bc8::vfunc_00() == 0) {
        return FALSE;
    }
    func_ov088_02272144(3);
    return TRUE;
}

BOOL Unk_ov088_022726ac::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    if (func_02040c88() == 0) {
        func_0208516c(func_020850e0())->func_020868e4();
    }
    return TRUE;
}

u8 *Unk_ov088_022726ac::getTexturePath() { return data_ov088_022725b8; }

u8 *Unk_ov088_022726ac::getModelPath() { return data_ov088_02272588; }

BOOL Unk_ov088_022726ac::updateAct() {
    BOOL result = FALSE;
    if (data_ov088_022727e8[unk_654].exit != NULL) {
        result = (this->*data_ov088_022727e8[unk_654].exit)();
    }
    return result;
}

void Unk_ov088_022726ac::func_ov088_02272144(s32 state) {
    BOOL ok = TRUE;
    if (data_ov088_022727e8[state].enter != NULL) {
        ok = (this->*data_ov088_022727e8[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov088_022726ac::func_ov088_02272140() { return TRUE; }

BOOL Unk_ov088_022726ac::func_ov088_02272114() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov088_02272144(1);
    }
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02272110() { return TRUE; }

BOOL Unk_ov088_022726ac::func_ov088_02272090() {
    unk_734 = 0;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02272038(Unk_ov088_Vec *a, Unk_ov088_Vec *b) {
    BOOL r = FALSE;
    BOOL f1 = FALSE;
    BOOL f2 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz > az - 0x1a000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz < az + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov088_022726ac::func_ov088_02272000() {
    Unk_ov088_Vec *pos = (Unk_ov088_Vec *)&unk_5c;
    BOOL r = FALSE;
    if (gCamera != 0) {
        Unk_ov088_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = func_ov088_02272038(&v, pos);
    }
    return r;
}

BOOL Unk_ov088_022726ac::func_ov088_02271f70(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov088_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 g = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = g + unk_5c;
        g = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = g + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r)) {
            *a = v.x;
            *b = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov088_022726ac::func_ov088_02271f34(Unk_ov088_Vec *out, Unk_ov088_Vec *p) {
    BOOL r = FALSE;
    struct { s32 x, y, z, w; } t;
    func_0201a900(&t, (Unk_ov088_Vec *)&unk_5c, p, unk_94);
    if (func_0201a834(&t) != 1) {
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov088_022726ac::func_ov088_02271e34() {
    Unk_02019858 *p = &unk_564;
    Unk_0201accc *q = &unk_350;
    s32 r6 = _ZN12Unk_0201a33413func_0201a7e8Ev(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov088_Vec v;
    if (_ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(q, this, 1) == 0) {
        switch (r6) {
        case 3:
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (func_ov088_02271f34(&v, (Unk_ov088_Vec *)&data_ov088_022727d0[1])) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov088_02271f34(&v, (Unk_ov088_Vec *)&data_ov088_022727d0[0])) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (_ZN12Unk_0201a8c413func_0201a968Ev(q)) {
            _ZN12Unk_0201a8c413func_0201a8f0Ev(q);
        }
    }
    return r;
}

BOOL Unk_ov088_022726ac::func_ov088_02271e10() {
    if (unk_98 != 0) {
        if (func_ov088_02271e34()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271bc8() {
    Unk_02019858 *p = &unk_564;
    Unk_ov088_Vec v, w;
    s32 r6 = func_ov088_02272000();
    func_020e7518(&unk_734);
    if (r6 != 0) {
        if (func_ov088_02271e10() == 0) {
            if (p->func_02019790() != 0) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    v.x = gVec3Zero.x;
                    v.y = gVec3Zero.y;
                    v.z = gVec3Zero.z;
                    if (func_ov088_02271f70(&v.x, &v.z)) {
                        r6 = Math_AngleXZ(&unk_5c, &v);
                        if (NpcActor_IsFrontAngle((s16)(r6 - unk_8e))) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != unk_564.func_020197a8()) {
                                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, r6, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_734 = 0x64;
                            }
                        } else if (unk_564.func_020197a8() != 4) {
                            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_734 = 0x50;
                        }
                    } else {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (unk_564.func_020197a8() == 1 || unk_564.func_020197a8() == 2 || unk_564.func_020197a8() == 4) {
                    if (unk_734 == 0) {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov088_Vec *q = _ZN12Unk_0201a8c413func_0201a978Ev(&unk_350);
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&unk_5c, &w) - unk_8e)) == 0) {
                            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        func_ov088_02272144(3);
    }
    return FALSE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b78() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_734 = 0;
    _ZN12Unk_0201347413func_020135bcEv(&unk_558);
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b5c() {
    if (func_ov088_02272000()) {
        func_ov088_02272144(2);
    }
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b20() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov088_022726ac::func_ov088_02271b1c() { return TRUE; }

s32 Unk_ov088_02272618::func_ov088_02271afc(u8 *p, s32 n) {
    s32 c = 0;
    s32 i;
    for (i = 0; i < n; p++, i++) {
        if (*p == 0) {
            c++;
        }
    }
    return c;
}

s32 Unk_ov088_02272618::func_ov088_02271ac0(u8 *p, s32 n) {
    s32 r;
    s32 c = func_ov088_02271afc(p, n);
    r = 0;
    if (c <= 0) {
        return -1;
    }
    s32 k = func_02063b8c(c);
    s32 i;
    for (i = 0; i <= n; p++, i++) {
        if (*p == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

void Unk_ov088_02272618::vfunc_88(s32 mode) {
    ChoiceList *g;
    ChoiceEntry *slot;
    s32 z;
    u8 b[2];
    s32 i;
    u32 r6;
    PlayerData_GetCurrent();
    g = unk_3c->getChoiceList();
    b[0] = 0;
    Unk_020e1c64 o;
    b[1] = 5;
    ChoiceString str;
    g->clear();
    r6 = 1;
    unk_b9[0] = r6;
    for (i = 0; i < func_0203f0c0(); i++) {
        unk_b9[func_0203f07c(i)] = r6;
    }
    i = 0;
    z = 0;
    do {
        if (mode == 0) {
            r6 = func_ov088_02271ac0(&unk_b9[0], 0x1e);
            if (r6 != -1) {
                if (unk_b9[r6] == 0) {
                    unk_b9[r6] = 1;
                }
            } else {
                r6 = 1;
            }
            unk_d7[i] = r6;
        } else if (mode == 1) {
            r6 = unk_d7[i];
        } else {
            r6 = func_0203f07c(i);
        }
        slot = g->getEntry(i);
        b[1] = r6;
        if (mode != 2) {
            String_Load(&str, &b[1], "st_learn_talk");
        } else {
            String_Load(&str, &b[1], "st_learn");
        }
        _ZN9MsgString4copyEPS_(slot->getText(), &str);
        i++;
    } while (i < 4);
    if (mode == 2) {
        slot = g->getEntry(i);
        b[1] = 5;
        slot->setMsgIndex(&b[1]);
        slot->setBmgName(Choice_GetBmgName(1));
        slot->loadText();
        g->setCount(i + 1);
        g->setCancelToLast();
    } else {
        g->setCount(i);
    }
    unk_3c->openChoices(1);
}

void Unk_ov088_02272618::vfunc_80() {
    if (data_ov088_022725d4[unk_ac].flag != 0) {
        if (data_ov088_022725d4[unk_ac].fn != NULL) {
            (this->*data_ov088_022725d4[unk_ac].fn)();
        }
    }
}

void Unk_ov088_02272618::vfunc_84() {
    if (data_ov088_022725d4[unk_ac].flag == 0) {
        if (data_ov088_022725d4[unk_ac].fn != NULL) {
            (this->*data_ov088_022725d4[unk_ac].fn)();
            func_ov088_022718cc(0);
        }
    }
}

void Unk_ov088_02272618::func_ov088_022718cc(s32 state) {
    unk_ac = state;
    unk_b0 = 0;
}

void Unk_ov088_02272618::func_ov088_02271824() {
    TalkWindowState *r4 = unk_3c;
    if (r4->unk_04 == 5) {
        u8 b[2];
        unk_b4->unk_735 = 0x14;
        if (_ZN19Unk_020133cc_Player13func_0201344cEv(unk_b4) != -1) {
            b[1] = 0x17;
            _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &b[1], (void *)"st_learn");
            unk_b4->unk_735 = 0;
            unk_b4->unk_734 = 0x14;
            _ZN12Unk_02097ff413func_0209801cEj(PlayerData_GetCurrent(), 0x10);
            b[0] = 0xc;
            unk_b4->func_ov088_02271414(0, 0x17);
            r4->setNextMessage(&b[0], (void *)"sp_npc_reaction");
            func_0202e1cc(0xe, 1);
            func_ov088_022718cc(4);
        }
    }
}

void Unk_ov088_02272618::func_ov088_022717e8() {
    if (unk_b8 == 0x17) {
        vfunc_88(0);
    } else {
        vfunc_88(1);
    }
    unk_b8 = 0xff;
    func_ov088_022718cc(0);
}

void Unk_ov088_02272618::func_ov088_02271714() {
    TalkWindowState *r4 = unk_3c;
    if (r4->unk_04 == 5) {
        u8 b[2];
        if (unk_b4->unk_735 == 0) {
            unk_b4->unk_735 = 0x34;
        }
        if (_ZN19Unk_020133cc_Player13func_0201344cEv(unk_b4) == -1) {
            if (func_020e7518(&unk_b4->unk_735) > 2) {
                return;
            }
        }
        b[0] = 0x19;
        if (unk_b4->unk_735 <= 2) {
            b[0] = 0x18;
        } else {
            func_0202e1cc(0xe, 1);
            if (func_0203f0b4() == -1) {
                b[0] = 0x1a;
            }
        }
        b[1] = unk_b8;
        _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &b[1], (void *)"st_learn");
        unk_b4->unk_735 = 0;
        unk_b4->unk_734 = 0x14;
        r4->setNextMessage(&b[0], (void *)"sp_npc_reaction");
        func_ov088_022718cc(4);
    }
}

void Unk_ov088_02272618::func_ov088_022716e8() {
    if (func_020e7518(&unk_b4->unk_734) == 0) {
        func_ov088_022718cc(0);
        _ZN12Unk_020d771013func_02014f74Ev(this);
    }
}

Unk_ov088_02272618::Unk_ov088_02272618() {}

Unk_ov088_02272618::~Unk_ov088_02272618() {}

void Unk_ov088_02272618::func_ov088_02271654(Unk_ov088_022726ac *owner) {
    vfunc_08();
    unk_b4 = owner;
    unk_b4->unk_735 = 0;
    MI_CpuFill8(&unk_b9[0], 0, 0x1e);
    MI_CpuFill8(&unk_d7[0], 0xff, 5);
}

void Unk_ov088_02272618::vfunc_78(Unk_ov088_022717d8_Out *out) {
    out->a = (u32)"sp_npc_reaction";
    out->b = 1;
    if (_ZN12Unk_02097ff413func_02098044Ej(PlayerData_GetCurrent(), 0x10) == 1) {
        if (func_0202e1cc(0xe, 0) == 0) {
            out->b = func_02063b8c(2) + 0x13;
        } else if (func_0203f0c0() == 1) {
            out->b = func_02063b8c(3) + 0xd;
        } else {
            out->b = func_02063b8c(3) + 0x10;
        }
    }
}

void Unk_ov088_02272618::vfunc_14() {
    s32 t = unk_1e;
    if (t >= 0x1d && t <= 0x39) {
        unk_3c->unk_14 = 0;
        func_ov088_022718cc(3);
    }
    switch (unk_1e) {
    case 0xb:
        unk_3c->unk_14 = 0;
        func_ov088_022718cc(1);
        break;
    case 0x17:
    case 0x18:
        unk_b8 = unk_1e;
        func_ov088_022718cc(2);
        break;
    case 0x19: {
        s32 r = func_0203f0b4();
        if (r != -1) {
            unk_b4->func_ov088_02271414(r, unk_b8);
        }
        break;
    }
    case 0x1a:
        vfunc_88(2);
        break;
    }
}

void Unk_ov088_02272618::vfunc_18() {
    u8 b[3];
    u8 *s;
    s32 t = getChoiceList()->getResult();
    u32 msg;
    s = (u8 *)"sp_npc_reaction";
    msg = 0xff;
    switch (unk_1e) {
    case 0x17:
    case 0x18: {
        u8 v = *(u8 *)((u8 *)this + t + 0xd7);
        msg = (u8)(v + 0x1c);
        unk_b8 = v;
        break;
    }
    case 0x1a:
        if (t == 4) {
            msg = 0x1b;
        } else {
            b[0] = func_0203f07c(t);
            _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 1, &b[0], (void *)"st_learn");
            unk_b4->func_ov088_02271414(t, unk_b8);
            b[1] = unk_b8;
            _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, 0, &b[1], (void *)"st_learn");
            msg = 0x1c;
        }
        break;
    }
    if (msg != 0xff) {
        b[2] = msg;
        unk_3c->setNextMessage(&b[2], s);
    }
}

BOOL Unk_ov088_022726ac::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov088_022726ac::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        func_ov088_02272144(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov088_02272144(4);
        break;
    case 8:
        func_ov088_02272144(2);
        break;
    }
}

s32 Unk_ov088_022726ac::vfunc_a0() {
    if (unk_735 != 0) {
        return _ZN19Unk_020133cc_Player13func_020133ccEv(this);
    }
    return -1;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov088_022726ac::func_ov088_02271414(s32 a, s32 b) {
    func_0203f094(a, b);
    func_0203ffa4(0x43);
}

