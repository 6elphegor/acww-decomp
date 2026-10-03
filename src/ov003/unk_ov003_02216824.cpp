// mwcc-version: 1.2/sp2
#include "types.h"

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

struct Unk_ov003_Vec {
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
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ u8 unk_c4[0xc];
    /* 0xd0 */ u16 unk_d0;
    /* 0xd2 */ u8 pad_d2[2];
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14 (vfunc_88).
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
    // Slot 0x14 has the name of BuildingActor::vfunc_88, which overrides it: the vtable then names the shared
    // thunk _ZThn236_N13BuildingActor8vfunc_88Ev (0x0221445c).  The compiler also emits a link-once copy of the
    // thunk in this unit; the linker keeps the first one (unk_ov003_022141bc.cpp) and drops this one.
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
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov009_0225bc88_Blk {
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
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual s32 vfunc_78();
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
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8(void *a);

    void *getBtaAnim(u32 a);
    void makeCurvedMatrix(Unk_ov009_0225bc88_Blk *out);
    void updateMatrix();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec unk_2a4;
    /* 0x2b0 */
};

// ---- main-module helper classes ----
class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    void step();
    BOOL isFinished();
    BOOL hasPassedFrame(s32 a);

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void addToRenderObj(u32 a);
    void init(s32 a, s32 b, s32 c, u16 d);
    BOOL allocMatAnm(u32 a, void *c);

    s32 *unk_18;
    u32 unk_1c;
};

class Model {
public:
    void *getRenderObj();
};

// Member at +0x2d4: the original constructs it with the base-object constructor (C1 here; the member is built with the complete-object ctor at 0x020b6a94), which a member declaration
// cannot do, so it is raw storage plus explicit calls through the real symbol names.
struct TouchPickSphere {
    u8 pad[0x1c];
};

class BuildingSeEmitter {
public:
    void playSe(u32 a);
};

struct Unk_ov003_02231e4c_Color {
    u8 a, b, c, d;
    Unk_ov003_02231e4c_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
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

struct Unk_ov003_02216824_Rec {
    u32 pad_00;
    u16 unk_04;
};

class PlayerMailbox {
public:
    BOOL getLetter(s32 i);
};

extern "C" {
extern void *data_021c6204;
extern void *gCommManager;
extern u8 data_021f47e0[];

BOOL func_020b1454(void *o, s32 v);
BOOL func_020b1d3c(u32 a, s32 b);
BOOL TalkRequest_SetTargetDone(void *p);
void _ZN14BlendAnimModel8initAnimEiiitt(void *self, void *a, s32 b, s32 c, u16 d, u16 e);
void _ZN9AnimModel8stepAnimEv(void *self);
void _ZN9ModelAnim7replaceEiiiit(void *self, void *a, void *b, s32 c, s32 d, u16 e);
BOOL MenuCtrl_IsFinished();
BOOL PlayerActor_LocalRequestAct6BOr6C(s32 a);
BOOL MenuCtrl_OpenLauncher(u32 a);
s32 Ground_GetDefaultY(s32 a);
BOOL PlayerActor_LocalRequestAct6A(void *p);
u32 WorldCurve_ToCurved(void *out, void *in);
void func_020e8528(void *m, s32 a, s32 b, s32 c);
void *PlayerData_GetCurrent();
PlayerMailbox *func_020979d8(void *p);
BOOL _ZN12Unk_0206555413func_02065578Ev();
s32 func_020e9650(void *a, void *b);
s32 func_020e780c(s32 a, s32 b);
void *Scene_GetTouchPicker();
void _ZN11TouchPicker10pushSphereEP15TouchPickSphere(void *self, void *o);
BOOL _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(void *self, void *o, void *a, s32 b, s32 c, u8 d);
u32 BuildingList_IndexOf(void *p);
BOOL Scene_InTown();
BOOL _ZN11CommManager8isOnlineEv(void *self);
BOOL _ZN11CommManager7isMyAidEj(void *self, u32 a);
u32 func_020b1d80(u32 a);
void Mailbox_Create();
void _ZN15TouchPickSphereC1Ev(TouchPickSphere *self);
void _ZN15TouchPickSphereD1Ev(TouchPickSphere *self);
void _ZN9Character18clearTalkStartModeEv(void *self, void *a);
}

// ============================================================ class Mailbox
class Mailbox : public BuildingActor {
public:
    Mailbox();
    virtual ~Mailbox();

    virtual BOOL onExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void vfunc_74();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b8(void *a);

    // state methods (old file 022164d0)
    void execMailGone();
    BOOL enterMailGone();
    void execLidClose();
    BOOL enterLidClose();
    void execLidOpened();
    BOOL enterLidOpened();
    void execLidOpen();
    BOOL enterLidOpen();
    void execHasMail();
    BOOL enterHasMail();
    void execMailArrive();
    BOOL enterMailArrive();
    void execNoMail();
    BOOL enterNoMail();
    s32 execUseClose();

    // old file 02216df0
    s32 enterUseClose();
    s32 execUseMenuWait();
    s32 enterUseMenuWait();
    s32 execUseMenu();
    s32 enterUseMenu();
    s32 execUseOpen();
    s32 enterUseOpen();
    s32 execUseIdle();
    s32 enterUseIdle();
    void updateUseState();
    s32 setUseState(s32 idx);
    u32 isUsable();
    s32 countLetters();

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ ModelAnim unk_2b4;
    /* 0x2d4 */ TouchPickSphere unk_2d4;
    /* 0x2f0 */ u8 unk_2f0;
    /* 0x2f1 */ u8 pad_2f1[3];
};

typedef void (Mailbox::*Unk_ov003_02216c20_Fn)();
typedef BOOL (Mailbox::*Unk_ov003_02216cf8_Fn)();
typedef s32 (Mailbox::*Unk_ov003_02231e4c_Fn)();

// colour constants (sinit store order = definition order), then the registration entry
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235380(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_0223537c(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235390(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235394(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_0223538c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_02231e4c_Color data_ov003_02235388(0x14, 0x18, 0x18, 0x1f);
extern "C" Unk_ov003_SceneEntry sMailboxProfile = {(void *(*)())Mailbox_Create, 0x24, 0x2a, 0, 0xc8000, 0x12c000, 0x258000};

extern "C" void Mailbox_Create() {
    new Mailbox;
}

Mailbox::Mailbox() {
    _ZN15TouchPickSphereC1Ev(&unk_2d4);
}

Mailbox::~Mailbox() {
    _ZN15TouchPickSphereD1Ev(&unk_2d4);
}

BOOL Mailbox::vfunc_70() {
    if (getBtaAnim(0)) {
        if (unk_2b4.allocMatAnm((u32)unk_194, data_021c6204)) {
            unk_2b4.init((s32)getBtaAnim(0), 1, 0x1000, 0);
            unk_2b4.addToRenderObj((u32)((Model *)unk_138)->getRenderObj());
        }
    }
    u8 b = (u8)BuildingList_IndexOf(this);
    struct {
        s32 x, y, z;
    } v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    v.y = v.y + 0x1000;
    _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(Scene_GetTouchPicker(), &unk_2d4, &v, 0x1000, 7, b);
    unk_2f0 = 1;
    if (!Scene_InTown()) {
        unk_2f0 = 0;
    } else {
        void *g = gCommManager;
        if (_ZN11CommManager8isOnlineEv(g)) {
            if (!_ZN11CommManager7isMyAidEj(g, 0)) {
                unk_2f0 = 0;
            }
        }
    }
    setUseState(0);
    if (isUsable()) {
        vfunc_6c(0);
    } else {
        vfunc_6c(func_020b1d80(unk_132));
    }
    return TRUE;
}

BOOL Mailbox::onExecute() {
    updateUseState();
    _ZN11TouchPicker10pushSphereEP15TouchPickSphere(Scene_GetTouchPicker(), &unk_2d4);
    return TRUE;
}

BOOL Mailbox::vfunc_b0() {
    return FALSE;
}

BOOL Mailbox::vfunc_48(void *a) {
    _ZN9Character18clearTalkStartModeEv(this, a);
    if (!isUsable()) {
        return FALSE;
    }
    if (unk_130 == 2 && a) {
        if (func_020e9650((u8 *)a + 0x5c, unk_5c) < 0x2333) {
            if (func_020e780c((s16)(unk_8e + 0x8000), *(s16 *)((u8 *)a + 0x8e)) < 0x1200) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Mailbox::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        setUseState(1);
        break;
    case 8:
        setUseState(0);
        break;
    }
}

s32 Mailbox::countLetters() {
    if (isUsable()) {
        PlayerMailbox *p = func_020979d8(PlayerData_GetCurrent());
        if (p) {
            s32 n = 0;
            u32 i;
            for (i = n; i < 10; i++) {
                if (p->getLetter(i)) {
                    if (_ZN12Unk_0206555413func_02065578Ev()) {
                        n++;
                    }
                }
            }
            return n;
        }
    }
    return 0;
}

u32 Mailbox::isUsable() {
    return unk_2f0;
}

BOOL Mailbox::vfunc_b8(void *a) {
    struct {
        s32 a, b, c;
    } v;
    s32 z = unk_5c[2] - 0x1000;
    v.a = unk_5c[0] + 0x2000;
    v.b = 0;
    v.c = z;
    unk_d0 = WorldCurve_ToCurved(unk_c4, &v);
    makeCurvedMatrix((Unk_ov009_0225bc88_Blk *)a);
    *(Unk_ov009_0225bc88_Blk *)data_021f47e0 = *(Unk_ov009_0225bc88_Blk *)a;
    func_020e8528(data_021f47e0, (s32)0xffffe000, 0, 0x1000);
    *(Unk_ov009_0225bc88_Blk *)a = *(Unk_ov009_0225bc88_Blk *)data_021f47e0;
    return TRUE;
}

s32 Mailbox::setUseState(s32 idx) {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Mailbox::enterUseIdle,
        &Mailbox::enterUseOpen,
        &Mailbox::enterUseMenu,
        &Mailbox::enterUseMenuWait,
        &Mailbox::enterUseClose,
    };
    if (idx < 5) {
        if ((this->*tbl[idx])()) {
            unk_2b0 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Mailbox::updateUseState() {
    static Unk_ov003_02231e4c_Fn tbl[5] = {
        &Mailbox::execUseIdle,
        &Mailbox::execUseOpen,
        &Mailbox::execUseMenu,
        &Mailbox::execUseMenuWait,
        &Mailbox::execUseClose,
    };
    if (unk_2b0 < 5) {
        (this->*tbl[unk_2b0])();
    }
}

s32 Mailbox::enterUseIdle() {
    return TRUE;
}

s32 Mailbox::execUseIdle() {
}

s32 Mailbox::enterUseOpen() {
    struct {
        s32 a, b, c;
    } v;
    v.a = unk_5c[0];
    v.b = Ground_GetDefaultY(0);
    v.c = unk_5c[2] + 0x2000;
    if (PlayerActor_LocalRequestAct6A(&v)) {
        func_020b1454(this, 3);
    }
    return TRUE;
}

s32 Mailbox::execUseOpen() {
    if (unk_130 == 4) {
        setUseState(2);
    }
}

s32 Mailbox::enterUseMenu() {
    if (MenuCtrl_OpenLauncher(0x27)) {
        return TRUE;
    }
    return FALSE;
}

s32 Mailbox::execUseMenu() {
    return setUseState(3);
}

s32 Mailbox::enterUseMenuWait() {
    return TRUE;
}

s32 Mailbox::execUseMenuWait() {
    if (MenuCtrl_IsFinished()) {
        if (PlayerActor_LocalRequestAct6BOr6C(2)) {
            setUseState(4);
        }
    }
}

// ---- old file 02216df0
s32 Mailbox::enterUseClose() {
    func_020b1454(this, 5);
    return TRUE;
}

s32 Mailbox::execUseClose() {
    u8 s = unk_130;
    if (s == 0 || s == 2) {
        TalkRequest_SetTargetDone(this);
    }
}

s32 Mailbox::vfunc_6c(s32 idx) {
    static Unk_ov003_02216cf8_Fn tbl[7] = {
        &Mailbox::enterNoMail, &Mailbox::enterMailArrive,
        &Mailbox::enterHasMail, &Mailbox::enterLidOpen,
        &Mailbox::enterLidOpened, &Mailbox::enterLidClose,
        &Mailbox::enterMailGone};
    if ((u32)idx < 7) {
        if ((this->*tbl[idx])() && func_020b1d3c(unk_132, idx)) {
            unk_130 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Mailbox::vfunc_74() {
    static Unk_ov003_02216c20_Fn tbl[7] = {
        &Mailbox::execNoMail, &Mailbox::execMailArrive,
        &Mailbox::execHasMail, &Mailbox::execLidOpen,
        &Mailbox::execLidOpened, &Mailbox::execLidClose,
        &Mailbox::execMailGone};
    if (unk_130 < 7) {
        (this->*tbl[unk_130])();
    }
    if (unk_2b4.hasPassedFrame(0x12)) {
        ((BuildingSeEmitter *)unk_234)->playSe(0x7de);
    }
}

BOOL Mailbox::enterNoMail() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, 0, 0);
    void *r4 = ((Model *)unk_138)->getRenderObj();
    void *r2 = getBtaAnim(0);
    _ZN9ModelAnim7replaceEiiiit(&unk_2b4, r4, r2, 1, 0x1000, 0);
    return TRUE;
}

void Mailbox::execNoMail() {
    if (countLetters()) {
        func_020b1454(this, 1);
    }
}

BOOL Mailbox::enterMailArrive() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, 0, 0);
    return TRUE;
}

void Mailbox::execMailArrive() {
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        func_020b1454(this, 2);
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
}

BOOL Mailbox::enterHasMail() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_64();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, a->unk_04 - 1, 0);
    void *r5 = ((Model *)unk_138)->getRenderObj();
    void *r2 = getBtaAnim(0);
    _ZN9ModelAnim7replaceEiiiit(&unk_2b4, r5, r2, 0, 0x1000, 0);
    return TRUE;
}

void Mailbox::execHasMail() {
    unk_2b4.step();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

BOOL Mailbox::enterLidOpen() {
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, 0, 0);
    ((BuildingSeEmitter *)unk_234)->playSe(0x819);
    return TRUE;
}

void Mailbox::execLidOpen() {
    _ZN9AnimModel8stepAnimEv(unk_138);
    unk_2b4.step();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        func_020b1454(this, 4);
    }
}

BOOL Mailbox::enterLidOpened() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_68();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 1, 0x1000, a->unk_04 - 1, 0);
    return TRUE;
}

void Mailbox::execLidOpened() {
    unk_2b4.step();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

BOOL Mailbox::enterLidClose() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_68();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_68();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 3, 0x1000, a->unk_04 - 1, 0);
    ((BuildingSeEmitter *)unk_234)->playSe(0x81a);
    return TRUE;
}

void Mailbox::execLidClose() {
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        if (countLetters() == 0) {
            func_020b1454(this, 6);
        } else {
            func_020b1454(this, 2);
        }
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
    unk_2b4.step();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

BOOL Mailbox::enterMailGone() {
    Unk_ov003_02216824_Rec *a = (Unk_ov003_02216824_Rec *)vfunc_64();
    Unk_ov003_02216824_Rec *b = (Unk_ov003_02216824_Rec *)vfunc_64();
    _ZN14BlendAnimModel8initAnimEiiitt(unk_138, b, 3, 0x1000, a->unk_04 - 1, 0);
    ((BuildingSeEmitter *)unk_234)->playSe(0x81b);
    return TRUE;
}

// ---- state methods
void Mailbox::execMailGone() {
    if (isUsable() && ((AnimFrameCtrl *)unk_1d4)->isFinished()) {
        func_020b1454(this, 0);
    } else {
        _ZN9AnimModel8stepAnimEv(unk_138);
    }
    unk_2b4.step();
    *unk_2b4.unk_18 = unk_2b4.unk_08;
}

