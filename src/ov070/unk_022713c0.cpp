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
class SpNpcGracie;
class SpNpcGracieTalk;

struct TalkStartMsg {
    u32 a;
    u8 b;
};

struct Unk_ov070_02271478_Save {
    u8 pad_00[0x720];
    u8 unk_720[0x14];
    u8 unk_734;
};

struct ItemPickSpec {
    void set(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};

struct MsgString25 {
    MsgString25();
    ~MsgString25();
    u32 pad[0x28 / 4];
};

struct Unk_ov070_02271524_Out {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
};

struct Unk_02098f30_Out {
    u16 flags;
    u8 count;
};

struct Unk_ov070_022717f0_Ent {
    u16 unk_00[3];
    u8 unk_06[3];
    u8 unk_09;
    u8 pad_0a[2];
    s32 unk_0c;
};

struct Unk_ov070_Name {
    const u8 *a;
    u8 b_byte;
    u8 b_pad[3];
};

class PlayerData {
public:
    void *func_0209868c();
    u16 *getHat();
    u16 *getFaceItem();
    u16 *getShirt();
    void setFaceItem(u16 *v);
    void setHat(u16 *v);
    void setShirt(u16 *v);
    void *getPlayerId();
    void *getCatalog();
};

class Unk_02087ad8 {
public:
    u32 func_02087bdc();
    void func_02087bc8(u32 v);
};

class PlayerId {
public:
    s32 getGender();
};

struct ItemId {
    u16 unk_00;
    ItemId();
    ~ItemId();
};

struct TalkWindowState {
    void setNextMessage(u8 *a, void *b);
};

struct Unk_ov070_Color {
    u8 a, b, c, d;
    Unk_ov070_Color(u8 a, u8 b, u8 c, u8 d) : a(a), b(b), c(c), d(d) {}
};

struct Unk_ov070_SceneEntry {
    SpNpcGracie *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct ChoiceList {
    s32 getResult();
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
    virtual void vfunc_64(u32 v);
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(TalkStartMsg *out);
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
    virtual void vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

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
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

typedef void (SpNpcGracieTalk::*Unk_ov070_0227277c_Fn)();

class SpNpcGracieTalk : public SpNpcTalkRequest {
public:
    SpNpcGracieTalk();
    virtual ~SpNpcGracieTalk();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_64(u32 a);
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_84();

    void attachOwner(SpNpcGracie *owner);
    void onFeeEntered();
    void setResultHandler(s32 idx);
    BOOL dressUpPlayer();
    BOOL hasPocketRoomForOutfit();
    void scoreOutfit();

    s32 unk_ac;
    SpNpcGracie *unk_b0;
    Unk_ov070_0227277c_Fn unk_b4;
    s32 unk_bc;
    ItemId unk_c0[3];
    u8 pad_c6[2];
    u8 unk_c8[0x14];
    u8 unk_dc;
    u8 pad_dd[3];
};

class SpNpcGracie : public Unk_020d8bc8 {
public:
    SpNpcGracie() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcGracieTalk unk_658;
};

struct Unk_ov070_02272334_Ent {
    BOOL (SpNpcGracie::*enter)();
    BOOL (SpNpcGracie::*exit)();
};

extern "C" {
extern u8 sSpNpcGracieKey[];
extern u8 sSpNpcGracieModelPath[];
extern u8 sSpNpcGracieTexturePath[];
extern const Unk_ov070_Name sSpNpcGracieTopicMsgs[];
extern const Unk_ov070_022717f0_Ent sSpNpcGracieOutfitTiers[];
extern u16 data_020c6cc8;

PlayerData *PlayerData_GetCurrent();
void *MI_CpuFill8(void *, s32, u32);
BOOL func_0202e1cc(s32 a, s32 b);
s32 func_020991fc();
void *func_020991e4();
void func_020b4154(void *p);
s32 _s32_div_f(s32, s32);
s32 String_FormatNumber(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void MailText_SetSlot(s32 i, void *x);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, void *f);
u16 Item_MakePaper(u32 a, s32 b);
void func_0203c41c(void *a, u16 *p, s32 c);
void _ZN12Unk_0206555413func_02065588Etj(void *a, u32 b, s32 c);
s32 func_020626cc(u16 *p, s32 mode);
u32 func_02063b8c(u32 a);
void Hud_Hide();
void Hud_Show();
void EventWeekSlots_MarkPlayer(u32 id);
void PlayerActor_RequestWearHatAlt(u16 *p);
void PlayerActor_RequestWearFaceItemAlt(u16 *p);
void PlayerActor_RequestWearShirtAlt(u16 *p);
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063388(ItemPickSpec *o);
void func_02099014(u16 *, s32);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 Item_GetPrice(u16 *);
s32 func_02098f30(Unk_02098f30_Out *out, s32 (*fn)(u16 *));
void *func_020850e0();
BOOL func_020851bc(void *p, s32 v);
void func_020851a4(void *p, s32 v);
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetAmount();
BOOL TalkRequest_EndTalkWith(void *p);
void NpcActor_ChargePlayer(void *p, s32 v);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771013func_02015170Ejj(void *self, u32 a, u32 b);
void _ZN12Unk_020d771013func_020151d0Ei(void *self, s32 a);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov070_Color data_ov070_022728c8;
extern "C" u8 sSpNpcGracieTexturePath[];
extern "C" Unk_ov070_SceneEntry sSpNpcGracieProfile;
extern "C" u8 sSpNpcGracieModelPath[];
extern "C" u32 data_ov070_022726e4[1];
extern "C" u32 data_ov070_022726e0[1];
extern "C" Unk_ov070_Color data_ov070_022728d4;
extern "C" const Unk_ov070_022717f0_Ent sSpNpcGracieOutfitTiers[7];
extern "C" Unk_ov070_02272334_Ent sSpNpcGracieActTable[3];
extern "C" Unk_ov070_Color data_ov070_022728c4;
extern "C" Unk_ov070_Color data_ov070_022728c0;
extern "C" Unk_ov070_Color data_ov070_022728d8;
extern "C" u8 sSpNpcGracieKey[];
extern "C" const Unk_ov070_Name sSpNpcGracieTopicMsgs[7];
extern "C" Unk_ov070_Color data_ov070_022728cc;
extern "C" SpNpcGracie *SpNpcGracie_Create();

static inline BOOL Unk_ov070_IsNone(u16 *p) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 v = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

static inline u32 Unk_ov070_02271bf8_Sh(u32 x) {
    return (x << 25) >> 24;
}

static inline BOOL Unk_ov070_IsNone2(u16 *p) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 v = 0xfff1;
        ok = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) ? TRUE : FALSE;
    } else {
        ok = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return ok;
}

extern "C" s32 SpNpcGracie_CountUnaskedQuestions(void *unused, u8 *p, s32 n);

extern "C" SpNpcGracie *SpNpcGracie_Create() {
    return new SpNpcGracie();
}

BOOL SpNpcGracie::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    MI_CpuFill8(unk_658.unk_c8, 0, 0x14);
    return TRUE;
}

BOOL SpNpcGracie::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    unk_4cc.unk_1c |= 2;
    unk_658.unk_dc = 0;
    return TRUE;
}

u8 *SpNpcGracie::getTexturePath() { return sSpNpcGracieTexturePath; }

u8 *SpNpcGracie::getModelPath() { return sSpNpcGracieModelPath; }

BOOL SpNpcGracie::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcGracieActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcGracieActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcGracie::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcGracieActTable[state].enter != NULL) {
        ok = (this->*sSpNpcGracieActTable[state].enter)();
    }
    if (ok == 1) {
        unk_654 = state;
    }
}

BOOL SpNpcGracie::setupAct00() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcGracie::mainAct00() { return TRUE; }

BOOL SpNpcGracie::setupAct01() {
    void *p = unk_658.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL SpNpcGracie::mainAct01() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcGracie::mainAct02() { return TRUE; }

void SpNpcGracieTalk::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    unk_b4 = NULL;
}

void SpNpcGracieTalk::vfunc_84() {
    if (unk_b4 != NULL) {
        (this->*unk_b4)();
        unk_b4 = NULL;
    }
}





void SpNpcGracieTalk::setResultHandler(s32 idx) {
    static Unk_ov070_0227277c_Fn tbl[1] = {&SpNpcGracieTalk::onFeeEntered};
    unk_b4 = tbl[idx];
}

extern "C" Unk_ov070_Color data_ov070_022728c0 = Unk_ov070_Color(0x1f, 0x14, 0x14, 0x1f);

extern "C" Unk_ov070_Color data_ov070_022728c8 = Unk_ov070_Color(0x14, 0x14, 0x1f, 0x1f);

extern "C" Unk_ov070_Color data_ov070_022728d8 = Unk_ov070_Color(0x1f, 0x1f, 0x14, 0x1f);

extern "C" const Unk_ov070_Name sSpNpcGracieTopicMsgs[7] = {
    {sSpNpcGracieKey, 0x00}, {sSpNpcGracieKey, 0x09}, {sSpNpcGracieKey, 0x4c}, {sSpNpcGracieKey, 0x29},
    {sSpNpcGracieKey, 0x28}, {sSpNpcGracieKey, 0x31}, {sSpNpcGracieKey, 0x27},
};

extern "C" u32 data_ov070_022726e4[1] = {0x10};

extern "C" Unk_ov070_Color data_ov070_022728d4 = Unk_ov070_Color(0x14, 0x1f, 0x14, 0x1f);

extern "C" const Unk_ov070_022717f0_Ent sSpNpcGracieOutfitTiers[7] = {
    {{0x144c, 0x13b7, 0x1452}, {1, 0, 1}, 0x05, {0, 0}, 200},
    {{0x1456, 0x13b0, 0x1450}, {1, 0, 1}, 0x0a, {0, 0}, 1000},
    {{0x144e, 0x13b8, 0x13f2}, {1, 0, 0}, 0x23, {0, 0}, 2000},
    {{0x13d2, 0x13d0, 0x143c}, {0, 0, 1}, 0x3c, {0, 0}, 3000},
    {{0x1441, 0x1431, 0x13e0}, {1, 1, 0}, 0x46, {0, 0}, 4000},
    {{0x1440, 0x13b4, 0x13d9}, {1, 0, 0}, 0x4b, {0, 0}, 5000},
    {{0x13fd, 0x13d8, 0x13b7}, {0, 0, 0}, 0x50, {0, 0}, 10000},
};

extern "C" u8 sSpNpcGracieTexturePath[] = "npc_sp/model/grf_tex.nsbtx";

extern "C" u32 data_ov070_022726e0[1] = {5};

extern "C" Unk_ov070_Color data_ov070_022728cc = Unk_ov070_Color(0x14, 0x1f, 0x1f, 0x1f);

extern "C" Unk_ov070_Color data_ov070_022728c4 = Unk_ov070_Color(0x14, 0x18, 0x18, 0x1f);

extern "C" u8 sSpNpcGracieModelPath[] = "npc_sp/model/grf.nsbmd";

extern "C" Unk_ov070_SceneEntry sSpNpcGracieProfile = {SpNpcGracie_Create, 0x6c, 0x72, 2, 0x5000, 0x5000, 0x3e800};

extern "C" Unk_ov070_02272334_Ent sSpNpcGracieActTable[3] = {
    {&SpNpcGracie::setupAct00, &SpNpcGracie::mainAct00},
    {&SpNpcGracie::setupAct01, &SpNpcGracie::mainAct01},
    {NULL, &SpNpcGracie::mainAct02},
};

extern "C" u8 sSpNpcGracieKey[] = "sp_npc_giraffe";



void SpNpcGracieTalk::onFeeEntered() {
    TalkWindowState *m = unk_3c;
    u8 v = 0x4b;
    unk_bc = 0;
    if (MenuCtrl_IsResultOk()) {
        unk_bc = MenuCtrl_GetAmount();
        v = 0x2d;
        if (unk_bc > 1000 && unk_bc <= 2000) {
            v = 0x2e;
        } else if (unk_bc > 2000 && unk_bc <= 4000) {
            v = 0x2f;
        } else if (unk_bc > 4000) {
            v = 0x30;
        }
        NpcActor_ChargePlayer(unk_b0, unk_bc);
    } else {
        Hud_Show();
        func_020851a4(func_020850e0(), 10);
    }
    m->setNextMessage(&v, sSpNpcGracieKey);
}

extern "C" s32 SpNpcGracie_CountUnaskedQuestions(void *unused, u8 *p, s32 n) {
    s32 cnt = 0;
    s32 i = 0;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            cnt++;
        }
    }
    return cnt;
}

extern "C" s32 SpNpcGracie_PickUnaskedQuestion(void *unused, u8 *p, s32 n) {
    s32 z = SpNpcGracie_CountUnaskedQuestions(unused, p, n);
    s32 pos = 0;
    s32 r = func_02063b8c(z);
    s32 i = pos;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            if (r == 0) {
                pos = i;
                break;
            }
            r--;
        }
    }
    return pos;
}

SpNpcGracieTalk::SpNpcGracieTalk() {}

SpNpcGracieTalk::~SpNpcGracieTalk() {}

void SpNpcGracieTalk::attachOwner(SpNpcGracie *owner) {
    vfunc_08();
    unk_b0 = owner;
    for (s32 i = 0; i < 3; i++) {
        unk_c0[i].unk_00 = 0xfff1;
    }
    unk_ac = 0;
}

void SpNpcGracieTalk::vfunc_78(TalkStartMsg *out) {
    void *g = PlayerData_GetCurrent()->func_0209868c();
    if (!func_0202e1cc(7, 1)) {
        unk_ac = 0;
    } else if (func_0202e1cc(8, 0)) {
        if (func_0202e1cc(9, 0)) {
            unk_ac = 6;
        } else if (unk_b0->unk_658.unk_dc < 3) {
            unk_ac = 2;
        } else if (((Unk_02087ad8 *)g)->func_02087bdc() >= 0x3d) {
            unk_ac = 3;
        } else {
            unk_ac = 4;
        }
    } else {
        unk_ac = 1;
    }
    if (func_020851bc(func_020850e0(), 10)) {
        if ((u32)(unk_ac - 2) <= 2) {
            unk_ac = 5;
        }
    }
    if (unk_ac >= 0 && unk_ac < 7) {
        out->b = (&sSpNpcGracieTopicMsgs[0].b_byte)[unk_ac * 8];
        if (unk_ac == 2) {
            out->b = unk_b0->unk_658.unk_dc + 0x4c;
            unk_b0->unk_658.unk_dc++;
        }
        out->a = *(u32 *)((u8 *)sSpNpcGracieTopicMsgs + unk_ac * 8);
    }
}

void SpNpcGracieTalk::vfunc_64(u32 a) {
    ((Unk_02087ad8 *)PlayerData_GetCurrent()->func_0209868c())->func_02087bc8(a);
}

// ---- unit 2 ----
extern "C" u8 SpNpcGracie_ScoreByPrice(void *unused, s32 a, s32 kind) {
    u8 r = 0;
    switch (kind) {
    case 0:
        if (a == 0) {
            r = func_02063b8c(3) + 1;
        } else if (a < 200) {
            r = func_02063b8c(3) + 3;
        } else if (a < 1000) {
            r = func_02063b8c(3) + 5;
        } else {
            r = func_02063b8c(4) + 7;
        }
        break;
    case 1:
        if (a == 0) {
            r = func_02063b8c(3) + 1;
        } else if (a < 160) {
            r = func_02063b8c(3) + 3;
        } else if (a < 600) {
            r = func_02063b8c(3) + 5;
        } else {
            r = func_02063b8c(4) + 7;
        }
        break;
    case 2:
        if (a < 350) {
            r = func_02063b8c(3) + 1;
        } else if (a < 400) {
            r = func_02063b8c(3) + 4;
        } else {
            r = func_02063b8c(4) + 7;
        }
        break;
    }
    return r;
}

void SpNpcGracieTalk::scoreOutfit() {
    s32 t;
    PlayerData *r6 = PlayerData_GetCurrent();
    Unk_02087ad8 *r4 = (Unk_02087ad8 *)r6->func_0209868c();
    unk_c0[0].unk_00 = *r6->getHat();
    if (!Unk_ov070_IsNone(&unk_c0[0].unk_00)) {
        BOOL r = FALSE;
        if (unk_c0[0].unk_00 >= 0x1429 && unk_c0[0].unk_00 <= 0x1430) {
            r = TRUE;
        }
        if (!r) {
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(SpNpcGracie_ScoreByPrice(this, Item_GetPrice(&unk_c0[0].unk_00), 0)));
        } else {
            t = func_02063b8c(10);
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(t + 1));
        }
    } else {
        t = func_02063b8c(3);
        r4->func_02087bc8(Unk_ov070_02271bf8_Sh((u8)(t + 1)));
    }
    unk_c0[1].unk_00 = *r6->getFaceItem();
    if (!Unk_ov070_IsNone(&unk_c0[1].unk_00)) {
        r4->func_02087bc8(Unk_ov070_02271bf8_Sh(SpNpcGracie_ScoreByPrice(this, Item_GetPrice(&unk_c0[1].unk_00), 1)));
    } else {
        t = func_02063b8c(3);
        r4->func_02087bc8(Unk_ov070_02271bf8_Sh((u8)(t + 1)));
    }
    unk_c0[2].unk_00 = *r6->getShirt();
    if (!Unk_ov070_IsNone(&unk_c0[2].unk_00)) {
        BOOL r = FALSE;
        if (unk_c0[0].unk_00 >= 0x12a8 && unk_c0[0].unk_00 <= 0x12af) {
            r = TRUE;
        }
        if (!r) {
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(SpNpcGracie_ScoreByPrice(this, Item_GetPrice(&unk_c0[2].unk_00), 2)));
        } else {
            t = func_02063b8c(10);
            r4->func_02087bc8(Unk_ov070_02271bf8_Sh(t + 1));
        }
    }
}

extern "C" BOOL SpNpcGracie_IsEmptyItem(u16 *p) {
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcGracieTalk::hasPocketRoomForOutfit() {
    Unk_02098f30_Out o;
    u8 n;
    func_02098f30(&o, SpNpcGracie_IsEmptyItem);
    n = 0;
    scoreOutfit();
    if (!Unk_ov070_IsNone(&unk_c0[0].unk_00)) {
        BOOL r = FALSE;
        if (unk_c0[0].unk_00 >= 0x1429 && unk_c0[0].unk_00 <= 0x1430) {
            r = TRUE;
        }
        if (!r) {
            n++;
        }
    }
    if (!Unk_ov070_IsNone(&unk_c0[1].unk_00)) {
        n++;
    }
    if (!Unk_ov070_IsNone(&unk_c0[2].unk_00)) {
        BOOL r = FALSE;
        if (unk_c0[2].unk_00 >= 0x12a8 && unk_c0[2].unk_00 <= 0x12af) {
            r = TRUE;
        }
        if (!r) {
            n++;
        }
    }
    if (o.count >= n) {
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcGracieTalk::dressUpPlayer() {
    u8 t4 = func_02063b8c(4);
    u8 idx = 6;
    u16 a = 0xfff1;
    BOOL res;
    scoreOutfit();
    s32 i;
    for (i = 0; i < 7; i++) {
        if (sSpNpcGracieOutfitTiers[i].unk_0c >= unk_bc) {
            idx = i;
            break;
        }
    }
    PlayerData *r7 = PlayerData_GetCurrent();
    if (t4 < 3) {
        u16 b = 0xfff1;
        r7->setFaceItem(&b);
        const u8 *p6 = &sSpNpcGracieOutfitTiers[0].unk_06[0] + idx * 16;
        if (p6[t4] == 0) {
            u16 val = ((const u16 *)((const u8 *)sSpNpcGracieOutfitTiers + idx * 16))[t4];
            u16 g = val;
            PlayerActor_RequestWearHatAlt(&g);
            u16 h = val;
            r7->setHat(&h);
            u16 ii = 0xfff1;
            PlayerActor_RequestWearFaceItemAlt(&ii);
            u16 j = 0xfff1;
            r7->setFaceItem(&j);
        } else {
            u16 val = ((const u16 *)((const u8 *)sSpNpcGracieOutfitTiers + idx * 16))[t4];
            u16 k = val;
            PlayerActor_RequestWearFaceItemAlt(&k);
            u16 l = val;
            r7->setFaceItem(&l);
            u16 m = 0xfff1;
            PlayerActor_RequestWearHatAlt(&m);
            u16 n = 0xfff1;
            r7->setHat(&n);
        }
    } else {
        u16 c = 0xfff1;
        r7->setFaceItem(&c);
        u16 d = 0xfff1;
        r7->setHat(&d);
        u16 e = 0xfff1;
        PlayerActor_RequestWearFaceItemAlt(&e);
        u16 f = 0xfff1;
        PlayerActor_RequestWearHatAlt(&f);
    }
    u16 o;
    u16 pp;
    if ((&sSpNpcGracieOutfitTiers[0].unk_09)[idx * 16] >= (u8)func_02063b8c(0x65)) {
        ItemPickSpec o1;
        o1.set(2, 0x22);
        ItemPick_One(&o, &o1, 0, 0, 1, 1, 0);
        a = o;
        func_02063388(&o1);
        res = TRUE;
    } else {
        ItemPickSpec o2;
        o2.set(2, 0);
        ItemPick_One(&pp, &o2, 0, 0, 1, 1, 0);
        a = pp;
        func_02063388(&o2);
        res = FALSE;
    }
    if (!Unk_ov070_IsNone(&a)) {
        u16 q = a;
        PlayerActor_RequestWearShirtAlt(&q);
        r7->setShirt(&a);
        _ZN16ActorTalkRequest13func_0201578cEjjj(this, &a, 0, 7);
    }
    for (i = 0; i < 3; i++) {
        if (!Unk_ov070_IsNone2(&unk_c0[i].unk_00)) {
            BOOL k = FALSE;
            u16 v = unk_c0[i].unk_00;
            if (v >= 0x1429 && v <= 0x1430) {
                k = TRUE;
            }
            if (!k) {
                if (v >= 0x12a8 && v <= 0x12af) {
                } else {
                    func_02099014(&unk_c0[i].unk_00, 0);
                }
            }
        }
    }
    return res;
}

void SpNpcGracieTalk::vfunc_14() {
    Unk_ov070_02271524_Out s;
    u8 code = 0xff;
    PlayerData *r7 = PlayerData_GetCurrent();
    s32 c = unk_1e;
    if (c >= 0xf && c <= 0x22) {
        u8 n = unk_b0->unk_658.unk_dc;
        if (n < 5) {
            code = n + 0x46;
        }
    }
    if (c == 0xe || (c >= 0x47 && c <= 0x4a)) {
        s32 i = SpNpcGracie_PickUnaskedQuestion(unk_b0, unk_b0->unk_658.unk_c8, 0x14);
        u8 *arr = unk_b0->unk_658.unk_c8;
        if (arr[i] == 0) {
            arr[i] = 1;
        }
        code = i + 0xf;
        unk_b0->unk_658.unk_dc++;
    }
    if (unk_1e == 0x24) {
        if (func_020991fc() != -1) {
            void *obj = func_020991e4();
            if (obj != NULL) {
                Unk_02087ad8 *p = (Unk_02087ad8 *)r7->func_0209868c();
                MsgString25 str;
                u32 lvl = 0;
                s.unk_00 = 0;
                scoreOutfit();
                if (p->func_02087bdc() > 0x15) {
                    lvl = (u8)_s32_div_f((u8)(p->func_02087bdc() - 0x15), 10);
                }
                if (lvl > 7) {
                    lvl = 7;
                }
                s.unk_00 = lvl;
                s.unk_02 = 0x1565;
                _ZN12Unk_020d771013func_02014e60EPtjjj(this, &s.unk_02, 0, 5, 0);
                String_FormatNumber(&str, p->func_02087bdc(), 10, 0, 0, 0);
                MailText_SetSlot(0, &str);
                func_020656dc(obj, &s, sSpNpcGracieKey, data_ov070_022726e0, data_ov070_022726e4, r7->getPlayerId());
                if (r7 != NULL) {
                    s.unk_04 = Item_MakePaper(0x10, 4);
                    func_0203c41c(r7->getCatalog(), &s.unk_04, 0);
                }
                if (lvl <= 2) {
                    _ZN12Unk_0206555413func_02065588Etj(obj, 0x12a7, 1);
                } else if (lvl <= 4) {
                    _ZN12Unk_0206555413func_02065588Etj(obj, 0x1248, 1);
                }
            }
        }
    }
    c = unk_1e;
    switch (c) {
    case 0:
        if (func_020626cc(r7->getShirt(), 0) == 0x22) {
            if (((PlayerId *)r7->getPlayerId())->getGender() == 0) {
                code = func_02063b8c(2) + 1;
            } else {
                code = func_02063b8c(2) + 3;
            }
        } else {
            if (((PlayerId *)r7->getPlayerId())->getGender() == 0) {
                code = func_02063b8c(2) + 5;
            } else {
                code = func_02063b8c(2) + 7;
            }
        }
        break;
    case 0x25:
        code = func_02063b8c(10) + 0x3a;
        unk_b0->unk_658.unk_dc = 0;
        break;
    case 0x28:
    case 0x2b:
        if (hasPocketRoomForOutfit()) {
            code = 0x2c;
            Hud_Hide();
        } else {
            code = 0x39;
        }
        break;
    case 0x2c:
    case 0x31:
        if (hasPocketRoomForOutfit()) {
            _ZN12Unk_020d771013func_02015170Ejj(this, 0x39, 0);
            _ZN12Unk_020d771013func_020151d0Ei(this, 2);
            setResultHandler(0);
        } else {
            code = 0x39;
        }
        break;
    case 0x36:
        Hud_Show();
        if (dressUpPlayer() == 0) {
            code = 0x37;
        } else {
            code = 0x34;
        }
        func_0202e1cc(9, 1);
        break;
    case 0x38:
        EventWeekSlots_MarkPlayer(0x40);
        break;
    }
    if (code != 0xff) {
        s.unk_01 = code;
        unk_3c->setNextMessage(&s.unk_01, sSpNpcGracieKey);
    }
}

void SpNpcGracieTalk::vfunc_18() {
    s32 r4 = getChoiceList()->getResult();
    u8 *r6 = sSpNpcGracieKey;
    u8 code = 0xff;
    s32 c = unk_1e;
    if (c >= 0xf && c < 0x23) {
        if (unk_b0->unk_658.unk_dc < 5) {
            s32 i = SpNpcGracie_PickUnaskedQuestion(unk_b0, unk_b0->unk_658.unk_c8, 0x14);
            u8 *arr = unk_b0->unk_658.unk_c8;
            if (arr[i] == 0) {
                arr[i] = 1;
            }
            code = i + 0xf;
        } else {
            MI_CpuFill8(unk_b0->unk_658.unk_c8, 0, 0x14);
            func_0202e1cc(8, 1);
            code = 0x23;
        }
    }
    if (unk_1e == 9 && r4 == 0) {
        if (func_020991fc() != -1) {
            code = 0xb;
        } else {
            code = 0xc;
        }
    }
    if (code != 0xff) {
        u8 buf = code;
        unk_3c->setNextMessage(&buf, r6);
    }
}

BOOL SpNpcGracie::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcGracie::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}
