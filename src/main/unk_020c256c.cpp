#include "types.h"

extern "C" {
u32 _ZN12Unk_020d77a414getPlayerActorEj(void *p, s32 n);
s32 _ZN12Unk_020d77a46isNearEPS_i(void *p, void *q, s32 n);
BOOL TalkRequest_EndTalkWith(void *p);
void _ZN12Unk_020d77a412setNpcHandleEPt(void *p, u16 *q);
u32 _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
void _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c(void *p, void *q);
extern u16 data_020c6cc8;
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
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

// ---- SpNpcTestTalk and its bases (vtable 0x020ddcf0 chain) ----
class TalkMsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14(void *a);
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

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

struct Unk_020c270c_Out {
    const void *vptr;
    u8 flag;
};

class ActorTalkRequest : public TalkMsgRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
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
    virtual void vfunc_78(Unk_020c270c_Out *out) = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void *func_02015aac();
    void func_02015ab0(u32 a);

    u32 pad_44[(0xac - 0x44) / 4];
};

class SpNpcTestTalk;
typedef void (SpNpcTestTalk::*Unk_020c2620_Fn)(void *);
typedef void (SpNpcTestTalk::*Unk_020c269c_Fn)(void *);

class SpNpcTestTalk : public ActorTalkRequest {
public:
    SpNpcTestTalk();
    virtual ~SpNpcTestTalk();
    virtual void vfunc_14(void *a);
    virtual void vfunc_78(Unk_020c270c_Out *out);

    void onMessageEndPhase00(void *a);
    void dispatchStart(Unk_020c270c_Out *out);
    void startPhase00(Unk_020c270c_Out *out);
    void setPhase(s32 v);
    void attachOwner(u32 v);

    s32 unk_ac;
    u32 unk_b0;
};

// ---- SpNpcTest and its bases (scene object derived from Unk_020d77a4) ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
    }
MEMBER(ThreeLayerAnimModel, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
MEMBER(Unk_020e0cf4, 0x514 - 0x4cc);
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); };
struct NpcActionCtrl {
    NpcActionCtrl();
    BOOL isActionDone();
    s32 getAction();
    void requestAction(u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
    u8 unk_00[0x618 - 0x564];
};
struct NpcTalkCtrl {
    BOOL isBusy();
    u8 unk_00[0x28];
};
struct Unk_02014254 : NpcTalkCtrl {
    Unk_02014254();
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
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
    virtual BOOL vfunc_48(void *p);
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
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_020e0cf4 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
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
    virtual const char *getTexturePath() = 0;
    virtual const char *getModelPath() = 0;
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
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
};

class SpNpcTest;
typedef BOOL (SpNpcTest::*Unk_020c28b0_Fn)();
struct Unk_020c28b0_Entry {
    Unk_020c28b0_Fn a;
    Unk_020c28b0_Fn b;
};

class SpNpcTest : public Unk_020d8bc8 {
public:
    SpNpcTest() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual ~SpNpcTest() {}
    virtual BOOL vfunc_48(void *p);
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual const char *getTexturePath();
    virtual const char *getModelPath();

    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcTestTalk unk_658;
    s16 unk_70c;
};

extern "C" {
extern const u8 sSpNpcTestMsgKey[8];
extern const char *const sSpNpcModelPaths[];
}

extern "C" SpNpcTest *func_020c29ec();
extern Unk_020c28b0_Entry sSpNpcTestActTable[4];
extern char data_020e6c5c[23];
extern char data_020e6c74[23];
extern char data_020e6c8c[23];
extern char data_020e6ca4[23];
extern char data_020e6cbc[23];
extern char data_020e6cd4[23];
extern char data_020e6cec[23];
extern char data_020e6d04[23];
extern char data_020e6d1c[23];
extern char data_020e6d34[23];
extern char data_020e6d4c[23];
extern char data_020e6d64[23];
extern char data_020e6d7c[23];
extern char data_020e6d94[23];
extern char data_020e6dac[23];
extern char data_020e6dc4[23];
extern char data_020e6ddc[23];
extern char data_020e6df4[23];
extern char data_020e6e0c[23];
extern char data_020e6e24[23];
extern char data_020e6e3c[23];
extern char data_020e6e54[23];
extern char data_020e6e6c[23];
extern char data_020e6e84[23];
extern char data_020e6e9c[23];
extern char data_020e6eb4[23];
extern char data_020e6ecc[23];
extern char data_020e6ee4[23];
extern char data_020e6efc[23];
extern char data_020e6f14[23];
extern char data_020e6f2c[23];
extern char data_020e6f44[23];
extern char data_020e6f5c[23];
extern char data_020e6f74[23];
extern char data_020e6f8c[23];
extern char data_020e6fa4[23];
extern char data_020e6fd4[27];
extern char data_020e6ff0[27];
extern char data_020e700c[27];
extern char data_020e7028[27];
extern char data_020e7044[27];
extern char data_020e7060[27];
extern char data_020e707c[27];
extern char data_020e7098[27];
extern char data_020e70b4[27];
extern char data_020e70d0[27];
extern char data_020e70ec[27];
extern char data_020e7108[27];
extern char data_020e7124[27];
extern char data_020e7140[27];
extern char data_020e715c[27];
extern char data_020e7178[27];
extern char data_020e7194[27];
extern char data_020e71b0[27];
extern char data_020e71cc[27];
extern char data_020e71e8[27];
extern char data_020e7204[27];
extern char data_020e7220[27];
extern char data_020e723c[27];
extern char data_020e7258[27];
extern char data_020e7274[27];
extern char data_020e7290[27];
extern char data_020e72ac[27];
extern char data_020e72c8[27];
extern char data_020e72e4[27];
extern char data_020e7300[27];
extern char data_020e731c[27];
extern char data_020e7338[27];
extern char data_020e7354[27];
extern char data_020e7370[27];
extern char data_020e738c[27];

char data_020e7124[] = "npc_sp/model/ows_tex.nsbtx";
char data_020e6cbc[] = "npc_sp/model/poo.nsbmd";
char data_020e7140[] = "npc_sp/model/tti_tex.nsbtx";
char data_020e6f14[] = "npc_sp/model/rcc.nsbmd";
char data_020e6f44[] = "npc_sp/model/pla.nsbmd";
char data_020e6ecc[] = "npc_sp/model/rcs.nsbmd";
char data_020e7338[] = "npc_sp/model/pge_tex.nsbtx";
char data_020e6efc[] = "npc_sp/model/grf.nsbmd";
char data_020e6f5c[] = "npc_sp/model/mka.nsbmd";
char data_020e71b0[] = "npc_sp/model/cml_tex.nsbtx";
char data_020e6e24[] = "npc_sp/model/rcn.nsbmd";
char data_020e6e3c[] = "npc_sp/model/hgh.nsbmd";
char data_020e6e6c[] = "npc_sp/model/ows.nsbmd";
char data_020e7204[] = "npc_sp/model/hgs_tex.nsbtx";
char data_020e7220[] = "npc_sp/model/pga_tex.nsbtx";
char data_020e7258[] = "npc_sp/model/pgb_tex.nsbtx";
char data_020e7274[] = "npc_sp/model/plb_tex.nsbtx";
struct Unk_020e6fbc_Rec {
    SpNpcTest *(*fn)();
    u32 w[5];
};
Unk_020e6fbc_Rec sSpNpcTestProfile = { func_020c29ec, { 0x0080007c, 2, 0x5000, 0x5000, 0x3e800 } };
char data_020e7290[] = "npc_sp/model/end_tex.nsbtx";
char data_020e6dac[] = "npc_sp/model/dnk.nsbmd";
char data_020e6eb4[] = "npc_sp/model/bpt.nsbmd";
char data_020e72c8[] = "npc_sp/model/bpt_tex.nsbtx";
char data_020e72e4[] = "npc_sp/model/dnk_tex.nsbtx";
char data_020e7300[] = "npc_sp/model/grf_tex.nsbtx";
char data_020e6d04[] = "npc_sp/model/seo.nsbmd";
char data_020e731c[] = "npc_sp/model/owl_tex.nsbtx";
char data_020e7354[] = "npc_sp/model/ott_tex.nsbtx";
char data_020e6fd4[] = "npc_sp/model/upa_tex.nsbtx";
char data_020e6cd4[] = "npc_sp/model/tti.nsbmd";
char data_020e6ff0[] = "npc_sp/model/mol_tex.nsbtx";
char data_020e6ca4[] = "npc_sp/model/xct.nsbmd";
char data_020e700c[] = "npc_sp/model/ttl_tex.nsbtx";
char data_020e6d94[] = "npc_sp/model/ttl.nsbmd";
char data_020e6c8c[] = "npc_sp/model/mum.nsbmd";
char data_020e7028[] = "npc_sp/model/los_tex.nsbtx";
const u8 sSpNpcTestMsgKey[8] = { 't', 'e', 's', 't' };
char data_020e7060[] = "npc_sp/model/wip_tex.nsbtx";
char data_020e6cec[] = "npc_sp/model/ott.nsbmd";
const char *const sSpNpcModelPaths[78] = {
    data_020e6df4,
    data_020e738c,
    data_020e6f44,
    data_020e715c,
    data_020e6dc4,
    data_020e7178,
    data_020e6e84,
    data_020e71b0,
    data_020e6e3c,
    data_020e71cc,
    data_020e6e54,
    data_020e7204,
    data_020e6fa4,
    data_020e7220,
    data_020e6e0c,
    data_020e7258,
    data_020e6e9c,
    data_020e7274,
    data_020e6e24,
    data_020e72ac,
    data_020e6eb4,
    data_020e72c8,
    data_020e6efc,
    data_020e7300,
    data_020e6f2c,
    data_020e731c,
    data_020e6cec,
    data_020e7354,
    data_020e6f74,
    data_020e7370,
    data_020e6d4c,
    data_020e707c,
    data_020e6d4c,
    data_020e707c,
    data_020e6d64,
    data_020e6ff0,
    data_020e6d94,
    data_020e700c,
    data_020e6c74,
    data_020e7044,
    data_020e6d34,
    data_020e7060,
    data_020e6d1c,
    data_020e70b4,
    data_020e6d04,
    data_020e70d0,
    data_020e6cbc,
    data_020e7108,
    data_020e6e6c,
    data_020e7124,
    data_020e6e24,
    data_020e72ac,
    data_020e6f14,
    data_020e7194,
    data_020e6ecc,
    data_020e71e8,
    data_020e6ee4,
    data_020e723c,
    data_020e6ddc,
    data_020e7290,
    data_020e6dac,
    data_020e72e4,
    data_020e6d7c,
    data_020e7338,
    data_020e6f5c,
    0,
    data_020e6f8c,
    data_020e6fd4,
    data_020e6c5c,
    data_020e7028,
    data_020e6c8c,
    data_020e7098,
    data_020e6ca4,
    data_020e70ec,
    data_020e6cd4,
    data_020e7140,
    0,
    0,
};
char data_020e6fa4[] = "npc_sp/model/pga.nsbmd";
char data_020e6d34[] = "npc_sp/model/wip.nsbmd";
char data_020e6f74[] = "npc_sp/model/fox.nsbmd";
char data_020e70b4[] = "npc_sp/model/seg_tex.nsbtx";
char data_020e70ec[] = "npc_sp/model/xct_tex.nsbtx";

extern "C" SpNpcTest *func_020c29ec() {
    return new SpNpcTest();
}

BOOL SpNpcTest::vfunc_04() {
    u16 v = 0xfff1;
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    v = 0xd000;
    _ZN12Unk_020d77a412setNpcHandleEPt(this, &v);
    _ZN12Unk_020d77a414setTalkRequestEP12Unk_0201bc1c(this, &unk_658);
    unk_658.attachOwner((u32)this);
    return TRUE;
}

BOOL SpNpcTest::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    unk_70c = unk_8e;
    return TRUE;
}

BOOL SpNpcTest::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c()) {
        return TRUE;
    }
    return FALSE;
}

const char *SpNpcTest::getTexturePath() {
    return sSpNpcModelPaths[1];
}

const char *SpNpcTest::getModelPath() {
    return sSpNpcModelPaths[0];
}

BOOL SpNpcTest::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTestActTable[unk_654].b != NULL) {
        result = (this->*sSpNpcTestActTable[unk_654].b)();
    }
    return result;
}

void SpNpcTest::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTestActTable[state].a != NULL) {
        ok = (this->*sSpNpcTestActTable[state].a)();
    }
    if (ok == 1) {
        unk_654 = state;
    }
}

BOOL SpNpcTest::setupAct00() {
    unk_564.requestAction(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTest::mainAct00() {
    return TRUE;
}

BOOL SpNpcTest::setupAct01() {
    u32 x;
    void *p = unk_658.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
    unk_658.setPhase(0);
    return TRUE;
}

BOOL SpNpcTest::mainAct01() {
    if (unk_618.isBusy() == 0) {
        TalkRequest_EndTalkWith(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTest::mainAct02() {
    return TRUE;
}

BOOL SpNpcTest::setupAct03() {
    unk_564.requestAction(3, 1, 0, 0, 0, unk_70c, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTest::mainAct03() {
    if (unk_564.getAction() == 3) {
        if (unk_564.isActionDone() == 1) {
            changeAct(0);
        }
    }
    return TRUE;
}

SpNpcTestTalk::SpNpcTestTalk() {}

SpNpcTestTalk::~SpNpcTestTalk() {}

void SpNpcTestTalk::attachOwner(u32 v) {
    vfunc_08();
    unk_b0 = v;
    unk_ac = 1;
}

void SpNpcTestTalk::setPhase(s32 v) {
    unk_ac = v;
}

void SpNpcTestTalk::startPhase00(Unk_020c270c_Out *out) {
    out->vptr = sSpNpcTestMsgKey;
    out->flag = 0;
}

void SpNpcTestTalk::dispatchStart(Unk_020c270c_Out *out) {
    static Unk_020c269c_Fn tbl[1] = { (Unk_020c269c_Fn)&SpNpcTestTalk::startPhase00 };
    if (unk_ac >= 0 && unk_ac < 1) {
        if (tbl[unk_ac]) {
            (this->*tbl[unk_ac])((void *)out);
        }
    }
}

void SpNpcTestTalk::vfunc_78(Unk_020c270c_Out *out) {
    dispatchStart(out);
}

void SpNpcTestTalk::onMessageEndPhase00(void *a) {}

char data_020e6ee4[] = "npc_sp/model/rcd.nsbmd";
char data_020e7178[] = "npc_sp/model/boa_tex.nsbtx";
char data_020e6dc4[] = "npc_sp/model/boa.nsbmd";
char data_020e6e54[] = "npc_sp/model/hgs.nsbmd";
char data_020e6e84[] = "npc_sp/model/cml.nsbmd";
char data_020e6e0c[] = "npc_sp/model/pgb.nsbmd";
char data_020e6e9c[] = "npc_sp/model/plb.nsbmd";

void SpNpcTestTalk::vfunc_14(void *a) {
    static Unk_020c2620_Fn tbl[1] = { &SpNpcTestTalk::onMessageEndPhase00 };
    if (unk_ac >= 0 && unk_ac < 1) {
        if (tbl[unk_ac]) {
            (this->*tbl[unk_ac])(a);
        }
    }
}

BOOL SpNpcTest::vfunc_48(void *p) {
    BOOL r = FALSE;
    if (_ZN12Unk_020d77a46isNearEPS_i(this, p, 0x2000) == 1) {
        r = TRUE;
    }
    return r;
}

void SpNpcTest::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(_ZN12Unk_020d77a414getPlayerActorEj(this, 4));
        changeAct(1);
        break;
    case 8:
        changeAct(3);
        break;
    }
}

Unk_020c28b0_Entry sSpNpcTestActTable[4] = {
    { &SpNpcTest::setupAct00, &SpNpcTest::mainAct00 },
    { &SpNpcTest::setupAct01, &SpNpcTest::mainAct01 },
    { 0, &SpNpcTest::mainAct02 },
    { &SpNpcTest::setupAct03, &SpNpcTest::mainAct03 },
};
char data_020e7098[] = "npc_sp/model/mum_tex.nsbtx";
char data_020e6d1c[] = "npc_sp/model/seg.nsbmd";
char data_020e7108[] = "npc_sp/model/poo_tex.nsbtx";
char data_020e715c[] = "npc_sp/model/pla_tex.nsbtx";
char data_020e7194[] = "npc_sp/model/rcc_tex.nsbtx";
char data_020e6ddc[] = "npc_sp/model/end.nsbmd";
char data_020e723c[] = "npc_sp/model/rcd_tex.nsbtx";
char data_020e6df4[] = "npc_sp/model/plc.nsbmd";
char data_020e6d64[] = "npc_sp/model/mol.nsbmd";
char data_020e6f2c[] = "npc_sp/model/owl.nsbmd";
char data_020e6c5c[] = "npc_sp/model/los.nsbmd";
char data_020e7044[] = "npc_sp/model/wrl_tex.nsbtx";
char data_020e707c[] = "npc_sp/model/lrc_tex.nsbtx";
char data_020e70d0[] = "npc_sp/model/seo_tex.nsbtx";
char data_020e6d7c[] = "npc_sp/model/pge.nsbmd";
char data_020e71cc[] = "npc_sp/model/hgh_tex.nsbtx";
char data_020e72ac[] = "npc_sp/model/rcn_tex.nsbtx";
char data_020e7370[] = "npc_sp/model/fox_tex.nsbtx";
char data_020e6c74[] = "npc_sp/model/wrl.nsbmd";
char data_020e6f8c[] = "npc_sp/model/upa.nsbmd";
char data_020e71e8[] = "npc_sp/model/rcs_tex.nsbtx";
char data_020e738c[] = "npc_sp/model/plc_tex.nsbtx";
char data_020e6d4c[] = "npc_sp/model/lrc.nsbmd";
