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

struct TalkStartMsg {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_0201bc1c;
class SpNpcRover;

struct TalkWindowState {
    void setNextMessage(u8 *a, void *b);
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
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    void *func_02015aac();
    void func_02015ab0(u32 p);
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
MEMBER(Unk_02019858, 0x618 - 0x564);
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

struct ItemId {
    u16 unk_00;
    ItemId();
    ~ItemId();
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
    virtual void vfunc_4c(s32 a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
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
    BOOL func_0201b9bc();
    s32 getPlayerActor(u32 v);
    s32 getAngleToPlayer(u32 v);
    s32 getDistanceToPlayer(u32 v);

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

struct Unk_0208f238 {
    u8 unk_00[0x84c];

    ~Unk_0208f238();
    void func_0208f174();
    void func_0208f1a8(u32 v);
};

extern "C" {
extern u8 gOverlayHandle[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_67_ID[];
extern u8 data_021ecfa8[];
extern u16 data_020c6cc8;
extern u16 gPad[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u8 gScreenTransition;
extern const void *sSpNpcRoverMsgKey;
extern u8 sSpNpcRoverModelPath[];
extern u8 sSpNpcRoverTexturePath[];
extern SpNpcRover *sSpNpcRoverInstance;

s32 _ZN12Unk_02013b1013func_02014220Ev(void *self);
void OverlayHandle_Unload(void *p);
void OverlayHandle_Load(void *p, u32 v);
Unk_0208f238 *func_0208f0b0(s32 i);
void func_0208f1dc(void *p);
void *MI_CpuCopy8(void *dst, void *src, u32 n);
void *MI_CpuFill8(void *p, s32 v, u32 n);
s32 func_020b013c();
s32 Save_WriteVillagerTransfer();
s32 func_020e9a08(void *p);
s32 func_020e9a18(void *p);
void func_020e9a3c(void *p);
void func_020e9a48(void *p);
void func_020e9a54(void *a, void *b, u32 n);
void Snd_PlaySe(s32 v);
void Comm_EndOv067Mode();
void Comm_StartOv067Mode();
void _ZN15TalkWindowState14setNextMessageEPhPv(void *self, void *m, const void *x);
void _ZN15TalkWindowState13unlockAdvanceEv(void *self);
void _ZN15TalkWindowState11lockAdvanceEv(void *self);
void *_ZN15TalkWindowState13getChoiceListEv(void *self);
s32 _ZN10ChoiceList9getResultEv(void *self);
void _ZN16ActorTalkRequest13func_02015ab0Ej(void *self, u32 v);
void func_0203d984();
void func_0203d990();
void *func_020b4934();
s32 func_020b4f58(void *a, s32 b, s32 c, s32 d);
void _ZN12Unk_02013b1013func_02014198Ehh(void *self, u8 a, u8 b);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_ov004_0223f894(void *p);
}
void *NetOverlay_AssertOv067();
class SpNpcRoverTalk;
typedef void (SpNpcRoverTalk::*Unk_ov055_02259904_Fn)();

class SpNpcRoverTalk : public SpNpcTalkRequest {
public:
    SpNpcRoverTalk();
    virtual ~SpNpcRoverTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void waitTagModeStop();
    void waitLidOpen();
    void runTagMode();
    void attachOwner(SpNpcRover *owner);
    void setScript(s32 v);

    /* 0xac */ SpNpcRover *unk_ac;
    /* 0xb0 */ s32 unk_b0;
};

struct Unk_ov055_02259234_Ent {
    Unk_ov055_02259904_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov055_02259234_Flag {
    u8 flag;
    u8 pad[11];
};

struct Unk_0208f0a0 {
    u8 unk_00[0xf8];
    u8 unk_f8;
    u8 pad_f9[3];

    ~Unk_0208f0a0();
};

extern "C" void _ZN12Unk_0208f238C1Ev(void *self);
extern "C" void _ZN12Unk_0208f0a0C1Ev(void *self);

class SpNpcRover;
typedef BOOL (SpNpcRover::*Unk_ov055_02259994_Fn)();

struct Unk_ov055_022594e0_Ent {
    Unk_ov055_02259994_Fn enter;
    Unk_ov055_02259994_Fn exit;
};

class SpNpcRover : public Unk_020d8bc8 {
public:
    SpNpcRover() {
        u8 *p = (u8 *)&unk_710;
        _ZN12Unk_0208f238C1Ev(p);
        _ZN12Unk_0208f0a0C1Ev(p + 0x84c);
        p = (u8 *)&unk_1058;
        _ZN12Unk_0208f238C1Ev(p);
        _ZN12Unk_0208f0a0C1Ev(p + 0x84c);
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    void restoreOv068();
    void loadTagModeOverlay();
    void saveTagData();
    void prepareTagData();
    void restoreOwnTransfer();
    void applyReceivedData();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcRoverTalk unk_658;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 unk_70d;
    /* 0x70e */ u8 pad_70e[2];
    /* 0x710 */ Unk_0208f238 unk_710;
    /* 0xf5c */ Unk_0208f0a0 unk_f5c;
    /* 0x1058 */ Unk_0208f238 unk_1058;
    /* 0x18a4 */ Unk_0208f0a0 unk_18a4;
};

struct Unk_ov055_SceneEntry {
    SpNpcRover *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
SpNpcRover *SpNpcRover_Create();
extern Unk_ov055_022594e0_Ent sSpNpcRoverActTable[3];
#define data_ov055_02259a4c ((Unk_ov055_022594e0_Ent *)((u8 *)sSpNpcRoverActTable + 8))
extern Unk_ov055_02259234_Ent sSpNpcRoverTalkScripts[4];
#define data_ov055_022598d4 ((Unk_ov055_02259234_Flag *)((u8 *)sSpNpcRoverTalkScripts + 8))
extern u8 sSpNpcRoverModelPath[];
extern u8 sSpNpcRoverTexturePath[];
extern Unk_ov055_SceneEntry sSpNpcRoverProfile;
void _ZN14SpNpcRoverTalk15waitTagModeStopEv();
void _ZN14SpNpcRoverTalk11waitLidOpenEv();
void _ZN14SpNpcRoverTalk10runTagModeEv();
void _ZN10SpNpcRover10setupAct01Ev();
void _ZN10SpNpcRover10setupAct00Ev();
void _ZN10SpNpcRover9mainAct02Ev();
void _ZN10SpNpcRover10setupAct02Ev();
void _ZN10SpNpcRover9mainAct00Ev();
void _ZN10SpNpcRover9mainAct01Ev();
}

extern "C" void *data_ov055_0225984c[2] = {(void *)_ZN10SpNpcRover10setupAct02Ev, 0};
extern "C" void *data_ov055_02259844[2] = {(void *)_ZN14SpNpcRoverTalk10runTagModeEv, 0};
extern "C" void *data_ov055_02259854[2] = {(void *)_ZN14SpNpcRoverTalk11waitLidOpenEv, 0};
extern "C" void *data_ov055_02259834[2] = {(void *)_ZN10SpNpcRover10setupAct00Ev, 0};
extern "C" void *data_ov055_02259824[2] = {(void *)_ZN14SpNpcRoverTalk15waitTagModeStopEv, 0};
extern "C" void *data_ov055_0225983c[2] = {(void *)_ZN10SpNpcRover9mainAct02Ev, 0};
extern "C" void *data_ov055_0225985c[2] = {(void *)_ZN10SpNpcRover9mainAct00Ev, 0};
extern "C" void *data_ov055_02259864[2] = {(void *)_ZN10SpNpcRover9mainAct01Ev, 0};
extern "C" void *data_ov055_0225982c[2] = {(void *)_ZN10SpNpcRover10setupAct01Ev, 0};
extern "C" char sSpNpcRoverKey[] = "sp_etc_sequence1";
extern "C" const void *sSpNpcRoverMsgKey = sSpNpcRoverKey;
extern "C" u8 sSpNpcRoverModelPath[] = "npc_sp/model/xct.nsbmd";
extern "C" u8 sSpNpcRoverTexturePath[] = "npc_sp/model/xct_tex.nsbtx";
extern "C" Unk_ov055_SceneEntry sSpNpcRoverProfile = {SpNpcRover_Create, 0x5e, 0x65, 2, 0x5000, 0x5000, 0x3e800};
extern "C" Unk_ov055_02259234_Ent sSpNpcRoverTalkScripts[4] = {
    {0, 0},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259844, 1},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259854, 1},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259824, 1},
};
extern "C" Unk_ov055_022594e0_Ent sSpNpcRoverActTable[3] = {
    {*(Unk_ov055_02259994_Fn *)data_ov055_02259834, *(Unk_ov055_02259994_Fn *)data_ov055_0225985c},
    {*(Unk_ov055_02259994_Fn *)data_ov055_0225982c, *(Unk_ov055_02259994_Fn *)data_ov055_02259864},
    {*(Unk_ov055_02259994_Fn *)data_ov055_0225984c, *(Unk_ov055_02259994_Fn *)data_ov055_0225983c},
};
extern "C" SpNpcRover *sSpNpcRoverInstance = 0;

static inline BOOL Unk_ov055_02259484_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

static inline BOOL Unk_ov055_0225915c_Both() {
    return (gTouchHeld != 0 && gTouchChanged != 0) ? TRUE : FALSE;
}

extern "C" SpNpcRover *SpNpcRover_Create() { return new SpNpcRover; }

BOOL SpNpcRover::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    return TRUE;
}

BOOL SpNpcRover::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    sSpNpcRoverInstance = this;
    loadTagModeOverlay();
    changeAct(0);
    func_ov004_0223f894(&unk_5c);
    func_0203d990();
    prepareTagData();
    return TRUE;
}

BOOL SpNpcRover::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    sSpNpcRoverInstance = 0;
    restoreOv068();
    func_0203d984();
    saveTagData();
    return TRUE;
}

u8 *SpNpcRover::getTexturePath() { return sSpNpcRoverTexturePath; }

u8 *SpNpcRover::getModelPath() { return sSpNpcRoverModelPath; }

BOOL SpNpcRover::updateAct() {
    BOOL r = FALSE;
    if (data_ov055_02259a4c[unk_654].enter) {
        r = (this->*sSpNpcRoverActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcRover::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcRoverActTable[state].enter) {
        ok = (this->*sSpNpcRoverActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcRover::setupAct00() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcRover::mainAct00() {
    if (Unk_ov055_02259484_IsTwo(gScreenTransition)) {
        changeAct(1);
    }
    return TRUE;
}

BOOL SpNpcRover::setupAct01() {
    _ZN12Unk_02013b1013func_02014198Ehh(&unk_618, 0, 1);
    return TRUE;
}

BOOL SpNpcRover::mainAct01() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcRover::setupAct02() { return TRUE; }

BOOL SpNpcRover::mainAct02() { return TRUE; }

SpNpcRoverTalk::SpNpcRoverTalk() {}

SpNpcRoverTalk::~SpNpcRoverTalk() {}

void SpNpcRoverTalk::attachOwner(SpNpcRover *owner) {
    vfunc_08();
    unk_ac = owner;
}

void SpNpcRoverTalk::vfunc_78(TalkStartMsg *out) {
    out->unk_00 = sSpNpcRoverMsgKey;
    out->unk_04 = 0x38;
}

void SpNpcRoverTalk::vfunc_14() {
    u8 m[4];
    void *r6 = unk_3c;
    switch (unk_1e) {
    case 0x39:
        if (func_020e9a18(NetOverlay_AssertOv067()) == 0) {
            if (unk_ac->unk_70c != 0) {
                m[0] = 0x36;
                _ZN15TalkWindowState14setNextMessageEPhPv(r6, &m[0], sSpNpcRoverMsgKey);
                break;
            }
            Comm_StartOv067Mode();
            MI_CpuFill8(&unk_ac->unk_1058, 0, 0x948);
            SpNpcRover *r4 = unk_ac;
            NetOverlay_AssertOv067();
            func_020e9a54(&r4->unk_710, &r4->unk_1058, 0x948);
            func_020e9a48(NetOverlay_AssertOv067());
        }
        func_020e9a48(NetOverlay_AssertOv067());
        _ZN15TalkWindowState11lockAdvanceEv(r6);
        setScript(1);
        break;
    case 0x3c:
        unk_ac->applyReceivedData();
        break;
    case 0x3b:
        unk_ac->restoreOwnTransfer();
        break;
    }
}

void SpNpcRoverTalk::vfunc_18() {
    s32 t = _ZN10ChoiceList9getResultEv(_ZN15TalkWindowState13getChoiceListEv(unk_3c));
    if (unk_1e == 0x3a && t == 1) {
        Comm_EndOv067Mode();
    }
}

void SpNpcRoverTalk::vfunc_80() {
    u32 i = unk_b0;
    if (data_ov055_022598d4[i].flag != 0) {
        if (sSpNpcRoverTalkScripts[i].fn) {
            (this->*sSpNpcRoverTalkScripts[i].fn)();
        }
    }
}

void SpNpcRoverTalk::vfunc_84() {
    u32 i = unk_b0;
    if (data_ov055_022598d4[i].flag == 0) {
        if (sSpNpcRoverTalkScripts[i].fn) {
            (this->*sSpNpcRoverTalkScripts[i].fn)();
            setScript(0);
        }
    }
}

void SpNpcRoverTalk::setScript(s32 v) { unk_b0 = v; }

void SpNpcRoverTalk::runTagMode() {
    u8 m[2];
    BOOL k;
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) != 0) {
        k = TRUE;
    } else {
        k = FALSE;
    }
    BOOL r5 = FALSE;
    SpNpcRover *own = unk_ac;
    if (own->unk_70d == 1 && k == 0) {
        r5 = TRUE;
    }
    own->unk_70d = k;
    if (func_020e9a08(NetOverlay_AssertOv067())) {
        Comm_EndOv067Mode();
        m[0] = 0x3c;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m[0], sSpNpcRoverMsgKey);
        setScript(2);
    } else {
        if ((gPad[1] & 1) == 0 && !Unk_ov055_0225915c_Both() && r5 == 0) {
            return;
        }
        func_020e9a3c(NetOverlay_AssertOv067());
        m[1] = 0x3a;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m[1], sSpNpcRoverMsgKey);
        setScript(3);
    }
}

void SpNpcRoverTalk::waitLidOpen() {
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        Snd_PlaySe(0x69);
        _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
        setScript(0);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcRoverTalk

void SpNpcRoverTalk::waitTagModeStop() {
    void *r4 = unk_3c;
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        if (func_020e9a08(NetOverlay_AssertOv067())) {
            Snd_PlaySe(0x69);
            Comm_EndOv067Mode();
            u8 m = 0x3c;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m, sSpNpcRoverMsgKey);
        } else {
            if (func_020e9a18(NetOverlay_AssertOv067()) != 1) {
                func_020e9a3c(NetOverlay_AssertOv067());
                return;
            }
        }
        _ZN15TalkWindowState13unlockAdvanceEv(r4);
        setScript(0);
    }
}

void SpNpcRover::applyReceivedData() {
    Unk_0208f238 *r4 = func_0208f0b0(4);
    u32 st = unk_18a4.unk_f8;
    if (st == 2) {
        MI_CpuCopy8(&unk_18a4, data_021ecfa8, 0xf8);
        restoreOwnTransfer();
    } else if (st == 1) {
        MI_CpuCopy8(&unk_1058, r4, 0x84c);
        r4->func_0208f174();
        r4->func_0208f1a8(1);
    }
}

void SpNpcRover::restoreOwnTransfer() {
    MI_CpuCopy8(&unk_710, func_0208f0b0(4), 0x84c);
}

BOOL SpNpcRover::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcRover::vfunc_58() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcRover::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        _ZN16ActorTalkRequest13func_02015ab0Ej(&unk_658, getPlayerActor(4));
        changeAct(1);
        break;
    case 1:
        unk_658.vfunc_08();
        _ZN16ActorTalkRequest13func_02015ab0Ej(&unk_658, getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

void SpNpcRover::prepareTagData() {
    func_020b013c();
    Unk_0208f238 *r4 = func_0208f0b0(4);
    MI_CpuCopy8(r4, &unk_710, 0x84c);
    unk_f5c.unk_f8 = 1;
    func_0208f1dc(r4);
    if (unk_70c == 0) {
        s32 r = Save_WriteVillagerTransfer();
        if (r == 1 || r == 4) {
            unk_70c = 1;
        }
    }
}

void SpNpcRover::saveTagData() {
    if (unk_70c == 0) {
        func_0208f0b0(4);
        s32 r = Save_WriteVillagerTransfer();
        if (r == 1 || r == 4) {
            unk_70c = 1;
        }
    }
}

void SpNpcRover::loadTagModeOverlay() {
    OverlayHandle_Unload(gOverlayHandle);
    OverlayHandle_Load(gOverlayHandle, (u32)OVERLAY_67_ID);
}

void SpNpcRover::restoreOv068() {
    OverlayHandle_Unload(gOverlayHandle);
    OverlayHandle_Load(gOverlayHandle, (u32)OVERLAY_68_ID);
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcRover


