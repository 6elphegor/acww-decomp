// mwcc-version: 1.2/sp2
// mwcc-flags: -O4,s -str reuse
#include "types.h"
struct Unk_ov003_Color {
    u8 a, b, c, d;
    Unk_ov003_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

struct Unk_ov003_SceneEntry {
    void *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

extern "C" void ReddTent_Create();
extern "C" Unk_ov003_Color data_ov003_02235144(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_Color data_ov003_02235160(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_Color data_ov003_0223514c(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_Color data_ov003_02235158(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_Color data_ov003_0223515c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_Color data_ov003_02235148(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov003_SceneEntry sReddTentProfile = {(void *(*)())ReddTent_Create, 0x1b, 0x21, 0, 0xc8000, 0x12c000, 0x258000};
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
    virtual void vfunc_20(u32 a);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void clearTalkStartMode();
    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct TalkWindowState {
    u8 pad_00[0x14];
    s32 unk_14;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void onActionTag4();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual BOOL vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    void setNoSpeakerName(u32 a);
    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov003_Blk {
    s64 v[6];
};

struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual void vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getEntranceType();
    s32 getInteriorScene();
    BOOL getDoorPos(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
    /* 0x2b0 */
};

struct Unk_ov003_022141bc_Target {u8 pad_00[4]; u32 unk_04; u32 unk_08;};
struct Unk_ov003_0221475c_Pad {s32 v[2]; Unk_ov003_0221475c_Pad() {} ~Unk_ov003_0221475c_Pad() {}};
struct Unk_ov003_02214890_Buf {s32 w0,w1;};
class ReddPassword {public: u32 getPromptText(void *w);};


extern "C" {
BOOL MenuCtrl_IsFinished();
BOOL TalkRequest_SetTargetDone(void *p);
BOOL TalkRequest_AddPlayerTalk6(void *p, u32 a);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
BOOL PlayerActor_IsStowFinished();
BOOL PlayerActor_IsEnteringDoor();
void PlayerActor_RequestStowThenAct10(u32 a);
void *Scene_GetWarpRequest();
BOOL SceneWarp_RequestExit(void *o, s32 a);
s32 Scene_GetCurrent();
void Scene_SetTownReturnPos(void *o, s32 a, Unk_ov009_0225b880_Vec3 *v, u32 b, s32 c, u32 d, u32 e);
s32 Ground_GetDefaultY(u32 a);
BOOL PlayerActor_LocalRequestDoorEnter(u32 a, s32 *b, s32 *c, s32 d);
BOOL MenuCtrl_IsResultOk();
s32 ReddPassword_LearnCurrentPlayer();
s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *o, u8 *p, char *s);
void BuildingOccupancy_Leave(u32 a, u32 b);
extern u8 data_021ed2c0[];
ReddPassword *_ZN8ReddShop11getPasswordEv(void *p);
s32 _ZN12ReddPassword14getAnswerIndexEv();
void MenuCtrl_OpenLauncherWithIndex(u32 a, s32 b);
s32 ReddPassword_CurrentPlayerKnows();
u32 BuildingOccupancy_GetAnswer(u32 a);
void BuildingOccupancy_RequestEnter(u32 a);
}

extern "C" {
extern u8 data_021ed2c0[];
void _ZN18ReddPasswordStringC1Ev(void *);
void _ZN18ReddPasswordStringD1Ev(void *);
ReddPassword *_ZN8ReddShop11getPasswordEv(void *);
void _ZN15TalkWindowState7setSlotEiPv(void *, s32, void *);
void Clock_GetDateTime(void *);
s32 Scene_GetCurrent();
}

class ReddTent : public BuildingActor {
public:
    ReddTent();
    virtual ~ReddTent();
    virtual BOOL onExecute();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_s10();
    virtual void vfunc_s18();
    virtual BOOL vfunc_s6c();

    void execTentIdle();
    void execTentCheck();
    void execTentTalkOpen();
    void execTentTalk();
    void execTentMenuWait();
    void execTentMenu();
    void execTentGoIn();
    void execTentEntry07();
    void execTentWalkIn();
    void execTentWarp();
    BOOL enterTentIdle();
    BOOL enterTentCheck();
    BOOL enterTentTalkOpen();
    BOOL enterTentTalk();
    BOOL enterTentMenuWait();
    BOOL enterTentMenu();
    BOOL enterTentGoIn();
    BOOL enterTentEntry07();
    BOOL enterTentWalkIn();
    BOOL enterTentWarp();
    void updateTentState();
    BOOL setTentState(s32 i);

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ u16 unk_2b4; u8 unk_2b6;
    /* 0x2b7 */ u8 unk_2b7;
};

extern "C" void ReddTent_Create() {
    new ReddTent;
}


ReddTent::ReddTent() {
}


ReddTent::~ReddTent() {
}


BOOL ReddTent::vfunc_70() {
    Unk_ov003_02214890_Buf l;
    l.w0 = 0;
    l.w1 = 0;
    Clock_GetDateTime(&l);
    unk_2b7 = ((u8 *)&l)[2];
    return TRUE;
}


BOOL ReddTent::onExecute() {
    updateTentState();
    return TRUE;
}


BOOL ReddTent::vfunc_8c() {
    Unk_ov003_02214890_Buf l;
    l.w0 = 0;
    l.w1 = 0;
    Clock_GetDateTime(&l);
    if (((u8 *)&l)[2] < 6) {
        goto no;
    }
    if (unk_2b7 >= 6) {
        goto yes;
    }
    return FALSE;
yes:
    return TRUE;
no:
    return FALSE;
}


void ReddTent::vfunc_s10() {
    if (unk_1e == 2) {
        u32 obj[0x38 / 4];
        _ZN18ReddPasswordStringC1Ev(obj);
        if (_ZN8ReddShop11getPasswordEv(data_021ed2c0)->getPromptText(obj)) {
            _ZN15TalkWindowState7setSlotEiPv(unk_3c, 0, obj);
        }
        _ZN18ReddPasswordStringD1Ev(obj);
    }
}


void ReddTent::vfunc_88() {
    switch (unk_1e) {
    case 2:
        unk_3c->unk_14 = 1;
        setTentState(4);
        break;
    case 3:
    case 0x32:
        setTentState(6);
        break;
    }
}


void ReddTent::vfunc_s18() {
}


BOOL ReddTent::vfunc_s6c() {
    return FALSE;
}


BOOL ReddTent::setTentState(s32 i) {
    static BOOL (ReddTent::*tbl[10])() = {
        &ReddTent::enterTentIdle, &ReddTent::enterTentCheck,
        &ReddTent::enterTentTalkOpen, &ReddTent::enterTentTalk,
        &ReddTent::enterTentMenuWait, &ReddTent::enterTentMenu,
        &ReddTent::enterTentGoIn, &ReddTent::enterTentEntry07,
        &ReddTent::enterTentWalkIn, &ReddTent::enterTentWarp,
    };
    if (i < 10) {
        if ((this->*tbl[i])()) {
            unk_2b0 = i;
            return TRUE;
        }
    }
    return FALSE;
}


void ReddTent::updateTentState() {
    static void (ReddTent::*tbl[10])() = {
        &ReddTent::execTentIdle, &ReddTent::execTentCheck,
        &ReddTent::execTentTalkOpen, &ReddTent::execTentTalk,
        &ReddTent::execTentMenuWait, &ReddTent::execTentMenu,
        &ReddTent::execTentGoIn, &ReddTent::execTentEntry07,
        &ReddTent::execTentWalkIn, &ReddTent::execTentWarp,
    };
    s32 i = unk_2b0;
    if (i < 10) {
        (this->*tbl[i])();
    }
}


BOOL ReddTent::enterTentIdle() {
    return TRUE;
}


void ReddTent::execTentIdle() {
    if (unk_231 & 4) {
        TalkRequest_AddPlayerTalk6(this, 0);
    }
}


BOOL ReddTent::enterTentCheck() {
    BuildingOccupancy_RequestEnter(unk_132);
    unk_232.f1 = 0;
    return TRUE;
}


void ReddTent::execTentCheck() {
    u32 r = BuildingOccupancy_GetAnswer(unk_132);
    if (r != 0) {
        u8 s;
        if (r == 2) {
            s = 1;
        } else {
            s = 0;
        }
        unk_232.f1 = s;
        setTentState(2);
    }
}


BOOL ReddTent::enterTentTalkOpen() {
    Unk_ov003_0221475c_Pad pad;
    _ZN9Character17attachTalkRequestEi(this, this);
    setFileName("sp_npc_fox");
    if (vfunc_8c() == 0) {
        unk_1e = 0x34;
        if (unk_232.f1 == 0) {
            BuildingOccupancy_Leave(unk_132, 0);
        }
    } else {
        if (unk_232.f1) {
            unk_1e = 0x31;
        } else if (ReddPassword_CurrentPlayerKnows()) {
            unk_1e = 0x32;
        } else {
            unk_1e = 0;
        }
    }
    ((Unk_ov003_022141bc_Target *)unk_3c)->unk_08 = 1;
    setNoSpeakerName(0);
    return TRUE;
}


void ReddTent::execTentTalkOpen() {
    Unk_ov003_022141bc_Target *t = (Unk_ov003_022141bc_Target *)unk_3c;
    if (t) {
        if (t->unk_04 != 0) {
            setTentState(3);
        }
    }
}


BOOL ReddTent::enterTentTalk() {
    return TRUE;
}


void ReddTent::execTentTalk() {
    Unk_ov003_022141bc_Target *t = (Unk_ov003_022141bc_Target *)unk_3c;
    if (t) {
        if (t->unk_04 == 0) {
            _ZN9Character17detachTalkRequestEi(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}


BOOL ReddTent::enterTentMenuWait() {
    return TRUE;
}


void ReddTent::execTentMenuWait() {
    if (((Unk_ov003_022141bc_Target *)unk_3c)->unk_04 == 5) {
        _ZN8ReddShop11getPasswordEv(data_021ed2c0);
        MenuCtrl_OpenLauncherWithIndex(0xe, _ZN12ReddPassword14getAnswerIndexEv());
        setTentState(5);
    }
}


BOOL ReddTent::enterTentMenu() {
    return TRUE;
}


void ReddTent::execTentMenu() {
    if (MenuCtrl_IsFinished()) {
        u8 r[2];
        if (MenuCtrl_IsResultOk()) {
            ReddPassword_LearnCurrentPlayer();
            r[0] = 3;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &r[0], "sp_npc_fox");
            ((Unk_ov003_022141bc_Target *)unk_3c)->unk_08 = 1;
            setTentState(3);
        } else {
            r[1] = 4;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &r[1], "sp_npc_fox");
            ((Unk_ov003_022141bc_Target *)unk_3c)->unk_08 = 1;
            setTentState(3);
            BuildingOccupancy_Leave(unk_132, 0);
        }
    }
}


BOOL ReddTent::enterTentGoIn() {
    return TRUE;
}


void ReddTent::execTentGoIn() {
    Unk_ov003_022141bc_Target *t = (Unk_ov003_022141bc_Target *)unk_3c;
    if (t) {
        if (t->unk_04 == 0) {
            setTentState(7);
        }
    }
}


BOOL ReddTent::enterTentEntry07() {
    PlayerActor_RequestStowThenAct10(0);
    return TRUE;
}


void ReddTent::execTentEntry07() {
    if (PlayerActor_IsStowFinished()) {
        if (setTentState(8)) {
            _ZN9Character17detachTalkRequestEi(this, this);
        }
    }
}


BOOL ReddTent::enterTentWalkIn() {
    unk_2b6 = 0;
    return TRUE;
}


void ReddTent::execTentWalkIn() {
    if (PlayerActor_IsEnteringDoor()) {
        setTentState(9);
    } else if (unk_2b6 == 0) {
        s16 ang;
        Unk_ov009_0225b880_Vec3 v;
        if (getDoorPos(&v, &ang)) {
            if (PlayerActor_LocalRequestDoorEnter(2, &v.x, &v.z, ang)) {
                unk_2b6 = 1;
            }
        }
    }
}


BOOL ReddTent::enterTentWarp() {
    unk_2b4 = 0;
    return TRUE;
}


// ================================================================
// class ReddTent (state functions)
void ReddTent::execTentWarp() {
    if (PlayerActor_IsStowFinished()) {
        unk_2b4++;
    }
    u32 lim;
    if (getEntranceType() == 2) {
        lim = 0x14;
    } else {
        lim = 0xf;
    }
    if (getEntranceType() == 1) {
        lim += 0xc;
    }
    if (unk_2b4 >= lim) {
        s32 t = getInteriorScene();
        s16 ang;
        Unk_ov009_0225b880_Vec3 v;
        if (getDoorPos(&v, &ang)) {
            if (SceneWarp_RequestExit(Scene_GetWarpRequest(), t)) {
                v.y = Ground_GetDefaultY(0);
                v.z = v.z + 0x1000;
                void *o = Scene_GetWarpRequest();
                s32 r = Scene_GetCurrent();
                Scene_SetTownReturnPos(o, r, &v, 0xf000000, (s16)(ang + 0x8000), unk_228, unk_22c);
                unk_232.f0 = 1;
            }
        }
    }
}