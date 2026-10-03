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
    virtual void vfunc_20();
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
    virtual void vfunc_20();
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
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *getInteractionPos();
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

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX, except 0x14 (main symbol _ZN14TalkMsgRequest8vfunc_14Ev).
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();

    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class MsgString9B {
public:
    MsgString9B();
    virtual ~MsgString9B();
    u8 pad_04[0x18];
};

class TalkWindowState {
public:
    s32 setSlot(s32 idx, void *p);
    u8 pad_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_14();
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

    void setSpeakerName(u8 *a, u32 b);

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_02204930_Pad {
    s32 v;
    Unk_02204930_Pad() {}
    ~Unk_02204930_Pad() {}
};

class VillagerId {
public:
    u32 getName(u32 p);
};

// member at +0x134: the original constructs it with C2 (base-object constructor), so it is raw storage plus explicit calls
struct TouchPickSphere {
    u8 pad[0x1c];
};

struct TouchPicker;

struct Unk_ov003_022309d0_Color {
    u8 a, b, c, d;
    Unk_ov003_022309d0_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
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

extern "C" {
extern u8 gSaveVillagers[];
u8 *SaveVillagers_Get(u8 *p, s32 i);
VillagerId *_ZN12VillagerData13getVillagerIdEv(u8 *p);
void _ZN9Character17detachTalkRequestEi(void *self, TalkMsgRequest *sec);
void _ZN9Character17attachTalkRequestEi(void *self, TalkMsgRequest *sec);
BOOL _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(TouchPicker *self, TouchPickSphere *o, s32 *a, s32 b, s32 c, u8 d);
BOOL TalkRequest_SetTargetDone(void *p);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
TouchPicker *Scene_GetTouchPicker();
void _ZN15TouchPickSphereC1Ev(TouchPickSphere *self);
void _ZN15TouchPickSphereD1Ev(TouchPickSphere *self);
void VillagerBoard_ResetTable();
}

class VillagerBoard;

// ---------------------------------------------------------------- VillagerBoard
class VillagerBoard : public Character, public TalkMsgRequest {
public:
    VillagerBoard();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~VillagerBoard();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void mainReadEnd();
    BOOL setupReadEnd();
    void mainRead();
    BOOL setupRead();
    void mainIdle();
    BOOL setupIdle();
    void runAct();
    BOOL changeAct(s32 m);

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ TouchPickSphere unk_134;
};

typedef void (VillagerBoard::*Unk_022049a8_Fn)();
typedef BOOL (VillagerBoard::*Unk_02204a24_Fn)();

extern "C" VillagerBoard *VillagerBoard_Create();

extern "C" VillagerBoard *sVillagerBoards[8];

extern "C" Unk_ov003_022309d0_Color data_ov003_02234f80(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f64(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f68(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f70(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f6c(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov003_022309d0_Color data_ov003_02234f74(0x14, 0x18, 0x18, 0x1f);
extern "C" {
u8 sVillagerBoardCount;
}

extern "C" VillagerBoard *VillagerBoard_Create() {
    return new VillagerBoard;
}

VillagerBoard::VillagerBoard() {
    _ZN15TouchPickSphereC1Ev(&unk_134);
}

VillagerBoard::~VillagerBoard() {
    _ZN15TouchPickSphereD1Ev(&unk_134);
}

BOOL VillagerBoard::vfunc_00() {
    VillagerBoard_ResetTable();
    setCharId((u16) * (s32 *)((u8 *)this + 8));
    changeAct(0);
    sVillagerBoards[*(s32 *)((u8 *)this + 8)] = this;
    sVillagerBoardCount++;
    return TRUE;
}

BOOL VillagerBoard::onExecute() {
    runAct();
    _ZN11TouchPicker9addSphereEP15TouchPickSphereP4Vec3S3_ih(Scene_GetTouchPicker(), &unk_134, unk_5c, 0xc00, 9, *(s32 *)((u8 *)this + 8));
    return TRUE;
}

BOOL VillagerBoard::onDraw() {
    return TRUE;
}

BOOL VillagerBoard::vfunc_0c() {
    sVillagerBoards[*(s32 *)((u8 *)this + 8)] = 0;
    sVillagerBoardCount--;
    return TRUE;
}

extern "C" void VillagerBoard_ResetTable() {
    if (sVillagerBoardCount == 0) {
        u32 i;
        for (i = 0; i < 8; i++) {
            sVillagerBoards[i] = 0;
        }
    }
}

BOOL VillagerBoard::vfunc_48(void *a) {
    clearTalkStartMode();
    Character *o = (Character *)a;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < 0x2333) {
            if (func_020e780c(-0x8000, o->unk_8e) <= 0x1100) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void VillagerBoard::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL VillagerBoard::changeAct(s32 m) {
    static Unk_02204a24_Fn tbl[3] = { (Unk_02204a24_Fn)&VillagerBoard::setupIdle, (Unk_02204a24_Fn)&VillagerBoard::setupRead, (Unk_02204a24_Fn)&VillagerBoard::setupReadEnd };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void VillagerBoard::runAct() {
    static Unk_022049a8_Fn tbl[3] = { &VillagerBoard::mainIdle, &VillagerBoard::mainRead, &VillagerBoard::mainReadEnd };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

extern "C" Unk_ov003_SceneEntry sVillagerBoardProfile = {(void *(*)())VillagerBoard_Create, 0x18, 0x1d, 0, 0xc8000, 0x12c000, 0x258000};
extern "C" {
VillagerBoard *sVillagerBoards[8];
}

BOOL VillagerBoard::setupIdle() {
    return TRUE;
}

void VillagerBoard::mainIdle() {}

BOOL VillagerBoard::setupRead() {
    Unk_02204930_Pad pad;
    _ZN9Character17attachTalkRequestEi(this, this);
    setFileName("obj_etc_board");
    unk_1e = 0;
    ((TalkWindowState *)unk_3c)->unk_08 = 1;
    MsgString9B buf;
    _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, *(s32 *)((u8 *)this + 8)))->getName((u32)&buf);
    ((TalkWindowState *)unk_3c)->setSlot(0, &buf);
    return TRUE;
}

void VillagerBoard::mainRead() {
    if (unk_3c) {
        if (((TalkWindowState *)unk_3c)->unk_04) {
            changeAct(2);
        }
    }
}

BOOL VillagerBoard::setupReadEnd() {
    return TRUE;
}

void VillagerBoard::mainReadEnd() {
    if (unk_3c) {
        if (((TalkWindowState *)unk_3c)->unk_04 == 0) {
            _ZN9Character17detachTalkRequestEi(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

// ================================================================
extern "C" VillagerBoard *VillagerBoard_Get(s32 i) {
    if (i >= 0 && i < 8) {
        return sVillagerBoards[i];
    }
    return 0;
}

