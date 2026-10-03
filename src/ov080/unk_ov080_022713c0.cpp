// mwcc-flags: -str reuse
#define postCreate() postCreate(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define func_0201610c _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define func_02098a48 _ZN10PlayerData13func_02098a48Ev
#define func_02014ce4 _ZN12Unk_0201442013func_02014ce4EPtjjj
#define unk_618_func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define unk_618_func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define unk_564_func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt

class Unk_ov080_02271cac;
class Unk_ov080_02271c1c;

extern "C" {
void *PlayerData_GetCurrent();
u32 func_02063b8c(u32 n);
BOOL TalkRequest_EndTalkWith(void *p);
void func_0203d948();
BOOL func_0203c338();
BOOL func_0203c31c();
void ThreeLayerAnimModel_AssignJointsToLayer2(void *self, s32 a, s32 b);
void func_0201610c(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02014ce4(void *self, u16 *p, u32 a, u32 b, u32 c);
BOOL unk_618_func_02014220(void *self);
void unk_618_func_020141b4(void *self, u32 a, u32 b, u32 c);
void unk_564_func_020196b4(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
s32 ChoiceList_getResult();
s32 func_02098044(void *p, u32 a);
void func_0209801c(void *p, u32 a);
BOOL func_02099014(u16 *p, u32 a);
void func_02099064(s32 a);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc();
void *PlayerData_GetResident(void *tbl, s32 i);
BOOL func_02098a48(void *p);
extern u16 data_020c6cc8;
extern u8 data_021d735c[];
extern u8 data_ov080_02271bc8[];
extern u8 data_ov080_02271bf8[];
}

struct TalkWindowState {
    void setNextMessage(u8 *a, void *b);
};

struct Unk_ov080_02271648_Out;

// Chain for the vtable of Unk_ov080_02271c1c: slot owners are ActorTalkRequest (root, declares every slot),
// TalkMsgRequest and Unk_020d7710 (override by name; 7710's names are shifted by one slot in symbols.txt).
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
    virtual void vfunc_38(u32 a);
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
    virtual void vfunc_78(Unk_ov080_02271648_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_88();
    void *func_02015aac();
    void getChoiceList();
    void func_0201578c(u32 a, u32 b, u32 c);
    void func_02015ab0(u32 a);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
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
    virtual void vfunc_88();
    void func_02014e60(u16 *p, u32 a, u32 b, u32 c);
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

struct Unk_ov080_02271648_Out {
    u8 *a;
    u8 b;
};

class Unk_ov080_02271c1c : public SpNpcTalkRequest {
public:
    Unk_ov080_02271c1c();
    virtual ~Unk_ov080_02271c1c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov080_02271648_Out *out);

    void func_ov080_022717ac(Unk_ov080_02271cac *owner);

    Unk_ov080_02271cac *unk_ac;
    s32 unk_b0;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
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
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
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

struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;

class Actor : public ProcBase {
public:
    BOOL vfunc_14();
    BOOL vfunc_20();
    BOOL preDraw();
    BOOL postDraw();
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void postCreate(s32 a);
    BOOL onExecute();
    BOOL onDraw();
    BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
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
    virtual void vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    u32 getPlayerActor(u32 a);
    BOOL getAngleTo(Unk_020d77a4 *p);

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
    virtual void getName(u32 a);
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

class Unk_ov080_02271cac : public Unk_020d8bc8 {
public:
    Unk_ov080_02271cac() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov080_02271820();
    BOOL func_ov080_02271824();
    BOOL func_ov080_02271850();
    BOOL func_ov080_02271888();
    BOOL func_ov080_0227188c();
    void func_ov080_022718c0(s32 state);

    s32 unk_654;
    Unk_ov080_02271c1c unk_658;
};

struct Unk_ov080_022718c0_Ent {
    BOOL (Unk_ov080_02271cac::*enter)();
    BOOL (Unk_ov080_02271cac::*exit)();
};

Unk_ov080_022718c0_Ent data_ov080_02271da0[3] = {
    {&Unk_ov080_02271cac::func_ov080_0227188c, &Unk_ov080_02271cac::func_ov080_02271888},
    {&Unk_ov080_02271cac::func_ov080_02271850, &Unk_ov080_02271cac::func_ov080_02271824},
    {NULL, &Unk_ov080_02271cac::func_ov080_02271820},
};

struct Unk_ov080_SceneEntry {
    Unk_ov080_02271cac *(*factory)();
    u16 a;
    u16 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
};

extern "C" Unk_ov080_02271cac *func_ov080_02271a20();

extern "C" {
u8 data_ov080_02271bf8[27] = "npc_sp/model/ttl_tex.nsbtx";
u8 data_ov080_02271bc8[23] = "npc_sp/model/ttl.nsbmd";
Unk_ov080_SceneEntry data_ov080_02271be0 = {func_ov080_02271a20, 0x56, 0x5d, 2, 0x5000, 0x5000, 0x3e800};
}



struct Unk_ov080_02271648_Buf {
    u8 t[2];
    u16 v[8];
};

struct Unk_ov080_02271478_Buf {
    u8 t;
    u8 pad_01;
    u16 v;
};

extern "C" Unk_ov080_02271cac *func_ov080_02271a20() {
    return new Unk_ov080_02271cac();
}

BOOL Unk_ov080_02271cac::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov080_022717ac(this);
    return TRUE;
}

BOOL Unk_ov080_02271cac::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov080_022718c0(0);
    func_0201610c(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    if (func_02098044(PlayerData_GetCurrent(), 1) == 0) {
        func_0203d948();
    }
    return TRUE;
}

BOOL Unk_ov080_02271cac::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c()) {
        return TRUE;
    }
    return FALSE;
}

u8 *Unk_ov080_02271cac::getTexturePath() { return data_ov080_02271bf8; }

u8 *Unk_ov080_02271cac::getModelPath() { return data_ov080_02271bc8; }

BOOL Unk_ov080_02271cac::updateAct() {
    BOOL result = FALSE;
    if (data_ov080_02271da0[unk_654].exit != NULL) {
        result = (this->*data_ov080_02271da0[unk_654].exit)();
    }
    return result;
}

void Unk_ov080_02271cac::func_ov080_022718c0(s32 state) {
    BOOL ok = TRUE;
    if (data_ov080_02271da0[state].enter != NULL) {
        ok = (this->*data_ov080_02271da0[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov080_02271cac::func_ov080_0227188c() {
    unk_564_func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov080_02271cac::func_ov080_02271888() { return TRUE; }

BOOL Unk_ov080_02271cac::func_ov080_02271850() {
    void *p = unk_658.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = getAngleTo((Unk_020d77a4 *)p);
    }
    unk_618_func_020141b4(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov080_02271cac::func_ov080_02271824() {
    if (unk_618_func_02014220(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov080_022718c0(2);
    }
    return TRUE;
}

BOOL Unk_ov080_02271cac::func_ov080_02271820() { return TRUE; }

Unk_ov080_02271c1c::Unk_ov080_02271c1c() {}

Unk_ov080_02271c1c::~Unk_ov080_02271c1c() {}

void Unk_ov080_02271c1c::func_ov080_022717ac(Unk_ov080_02271cac *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

void Unk_ov080_02271c1c::vfunc_78(Unk_ov080_02271648_Out *out) {
    void *g = PlayerData_GetCurrent();
    if (func_02098044(g, 1)) {
        out->a = (u8 *)"sp_etc_sequence5_2";
        if (func_02098044(g, 0xd) == 0) {
            out->b = 0;
            func_0209801c(g, 0xd);
        } else {
            out->b = func_02063b8c(4) + 3;
        }
        func_0209801c(g, 0xa);
    } else {
        if (unk_b0 == -1) {
            u16 v = 0x37e0;
            unk_b0 = func_02098eb0(&v);
            if (unk_b0 >= 0) {
                out->a = (u8 *)"sp_npc_turtle";
                out->b = 0;
                return;
            }
        }
        out->a = (u8 *)"sp_npc_turtle7";
        if (func_02098044(g, 0x21) == 0 && func_0203c338()) {
            out->b = 0;
            if (func_02098ffc() < 0) {
                out->b = 9;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = PlayerData_GetResident(data_021d735c, i);
                    if (p != NULL && func_02098a48(p) && p != g && func_02098044(p, 0x21)) {
                        out->b = 2;
                        break;
                    }
                }
            }
        } else if (func_02098044(g, 0x22) == 0 && func_0203c31c()) {
            out->b = 3;
            if (func_02098ffc() < 0) {
                out->b = 0xa;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = PlayerData_GetResident(data_021d735c, i);
                    if (p != NULL && func_02098a48(p) && p != g && func_02098044(p, 0x22)) {
                        out->b = 5;
                        break;
                    }
                }
            }
        } else {
            out->b = func_02063b8c(3) + 6;
        }
    }
}

void Unk_ov080_02271c1c::vfunc_14() {
    Unk_ov080_02271648_Buf buf;
    u32 r = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            buf.v[0] = 0x1559;
            this->func_02014e60(&buf.v[0], 0, 5, 0);
            buf.v[1] = 0x1559;
            func_02099014(&buf.v[1], 0);
            buf.t[0] = 4;
            unk_3c->setNextMessage(&buf.t[0], (u8 *)"sp_npc_turtle");
        }
    } else {
        void *g = PlayerData_GetCurrent();
        u8 *str;
        if (func_02098044(g, 1)) {
            str = (u8 *)"sp_etc_sequence5_2";
        } else {
            str = (u8 *)"sp_npc_turtle7";
            switch (unk_1e) {
            case 0:
            case 2:
                buf.v[2] = 0x1375;
                if (func_02099014(&buf.v[2], 0)) {
                    buf.v[3] = 0x1375;
                    this->func_02014e60(&buf.v[3], 0, 5, 0);
                    func_0209801c(g, 0x21);
                    buf.v[4] = 0x1375;
                    this->func_0201578c((u32)&buf.v[4], 0, 7);
                    r = 1;
                }
                break;
            case 3:
            case 5:
                buf.v[5] = 0x1377;
                if (func_02099014(&buf.v[5], 0)) {
                    buf.v[6] = 0x1377;
                    this->func_02014e60(&buf.v[6], 0, 5, 0);
                    func_0209801c(g, 0x22);
                    buf.v[7] = 0x1377;
                    this->func_0201578c((u32)&buf.v[7], 0, 7);
                    r = 4;
                }
                break;
            }
        }
        if (r != 0xff) {
            buf.t[1] = r;
            unk_3c->setNextMessage(&buf.t[1], str);
        }
    }
}

void Unk_ov080_02271c1c::vfunc_18() {
    Unk_ov080_02271478_Buf buf;
    getChoiceList();
    s32 t = ChoiceList_getResult();
    void *g = PlayerData_GetCurrent();
    u8 r = 0xff;
    if (unk_b0 >= 0) {
        u8 *const str = (u8 *)"sp_npc_turtle";
        if (unk_1e == 0 && t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                buf.v = 0x37e0;
                func_02014ce4(this, &buf.v, 0, 5, 0);
            }
            r = 2;
        }
        if (r != 0xff) {
            buf.t = r;
            unk_3c->setNextMessage(&buf.t, str);
        }
    } else {
        func_02098044(g, 1);
    }
}

BOOL Unk_ov080_02271cac::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618_func_02014220(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov080_02271cac::vfunc_4c(u32 a, u32 b) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        func_ov080_022718c0(1);
        break;
    case 8:
        func_ov080_022718c0(0);
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------

