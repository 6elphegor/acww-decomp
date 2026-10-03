// mwcc-version: 1.2/sp2
// ov004 TU04: .text 0x022136d0-0x02213b90 (class RoomBoardSign)
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Actor : public GameProc {
public:
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();

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
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void setCharId(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct TalkWindowState {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    s32 setSlot(s32 idx, void *p);
};

// Secondary base of the 0x0224882c family (at +0xec). Its vtable 0x020ddcf0 is not overridden by the derived class.
// Slots 0c/18/24 are named vfunc_s0c/s18/s24 so the derived overrides of the primary chain do not also override them.
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_s0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_s18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_s24();
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
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

// ---------------------------------------------------------------- RoomBoardSign
struct Vec3;
// Unk_020b6a94 member: the original constructs it with the complete-object constructor (C1), which a member
// declaration cannot do, so it is raw storage plus explicit calls through the real symbol names.
struct Unk_020b6a94 {
    u8 pad[0x1c];
};

class Unk_020b6960;

extern "C" {
void _ZN12Unk_020b6a94C1Ev(Unk_020b6a94 *self);
void _ZN12Unk_020b6a94D1Ev(Unk_020b6a94 *self);
void _ZN9Character13func_0203e47cEi(void *self, TalkMsgRequest *sec);
void _ZN9Character13func_0203e488Ei(void *self, TalkMsgRequest *sec);
BOOL TalkRequest_SetTargetDone(void *p);
s32 func_020e9650(s32 *a, s32 *b);
s32 func_020e780c(s32 a, s32 b);
Unk_020b6960 *Scene_GetCollision();
BOOL _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih(Unk_020b6960 *self, Unk_020b6a94 *o, void *a, s32 b, s32 c, u8 d);
u32 Scene_GetCurrent();
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, void *d, void *e);
}

class RoomBoardSign : public Character, public TalkMsgRequest {
public:
    RoomBoardSign();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~RoomBoardSign();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void mainAct02();
    BOOL setupAct02();
    void mainAct01();
    BOOL setupAct01();
    void mainAct00();
    BOOL setupAct00();
    void execAct();
    BOOL changeAct(s32 m);
    BOOL unregisterSelf();
    BOOL registerSelf();

    /* 0x130 */ s32 unk_130;
    /* 0x134 */ Unk_020b6a94 unk_134;
    /* 0x150 */ u8 unk_150;
    /* 0x151 */ u8 pad_151;
    /* 0x152 */ s16 unk_152;
    /* 0x154 */ s32 unk_154;
};

typedef void (RoomBoardSign::*Unk_022137c4_Fn)();
typedef BOOL (RoomBoardSign::*Unk_02213840_Fn)();

extern "C" RoomBoardSign *RoomBoardSign_Create();
extern "C" void RoomBoardSign_ClearRegistry();

// ---------------------------------------------------------------- data
struct Unk_ov004_SceneEntry {
    RoomBoardSign *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

struct Unk_ov004_Quad {
    u8 a, b, c, d;
    Unk_ov004_Quad(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" s16 sRoomBoardSignSpawnMsg;
extern "C" u8 sRoomBoardSignCount;
extern "C" Unk_ov004_Quad data_ov004_02250174;
extern "C" Unk_ov004_Quad data_ov004_02250180;
extern "C" RoomBoardSign *RoomBoardSign_Create();
extern "C" Unk_ov004_Quad data_ov004_0225017c(0x1f, 0x14, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250184(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250188(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov004_Quad data_ov004_02250170(0x14, 0x1f, 0x14, 0x1f);
extern "C" {
void *sRoomBoardSigns[0x40];
}
extern "C" Unk_ov004_SceneEntry sRoomBoardSignProfile = { RoomBoardSign_Create, 0x17, 0x1c, 0, 0xc8000, 0x12c000, 0x258000 };
extern "C" {
s32 sRoomBoardSignSpawnRadius;
}

struct Unk_02213774_Pad {
    s32 v[2];
    Unk_02213774_Pad() {}
    ~Unk_02213774_Pad() {}
};

extern "C" RoomBoardSign *RoomBoardSign_Create() {
    return new RoomBoardSign;
}

RoomBoardSign::RoomBoardSign() {
    _ZN12Unk_020b6a94C1Ev(&unk_134);
}

RoomBoardSign::~RoomBoardSign() {
    _ZN12Unk_020b6a94D1Ev(&unk_134);
}

BOOL RoomBoardSign::vfunc_00() {
    RoomBoardSign_ClearRegistry();
    unk_152 = sRoomBoardSignSpawnMsg;
    unk_154 = sRoomBoardSignSpawnRadius;
    if (registerSelf()) {
        u32 t = Scene_GetCurrent();
        setCharId((u16)(unk_150 | (t << 8)));
        changeAct(0);
        return TRUE;
    }
    return FALSE;
}

BOOL RoomBoardSign::onExecute() {
    execAct();
    _ZN12Unk_020b696013func_020b68a8EP12Unk_020b6a94P4Vec3S3_ih(Scene_GetCollision(), &unk_134, unk_5c, unk_154, 0x10, unk_150);
    return TRUE;
}

BOOL RoomBoardSign::onDraw() {
    return TRUE;
}

BOOL RoomBoardSign::vfunc_0c() {
    unregisterSelf();
    return TRUE;
}

extern "C" void RoomBoardSign_ClearRegistry() {
    if (sRoomBoardSignCount == 0) {
        u32 i;
        for (i = 0; i < 0x40; i++) {
            sRoomBoardSigns[i] = 0;
        }
    }
}

BOOL RoomBoardSign::registerSelf() {
    unk_150 = sRoomBoardSignCount;
    u32 i = unk_150;
    if (i < 0x40) {
        sRoomBoardSigns[i] = this;
        sRoomBoardSignCount++;
        return TRUE;
    }
    return FALSE;
}

BOOL RoomBoardSign::unregisterSelf() {
    u32 i = unk_150;
    if (i < 0x40) {
        sRoomBoardSigns[i] = 0;
        sRoomBoardSignCount--;
        unk_150 = 0xff;
        return TRUE;
    }
    return FALSE;
}

BOOL RoomBoardSign::vfunc_48(void *a) {
    Character *o = (Character *)a;
    s32 lim = unk_154 + 0x2ccd;
    if (o) {
        if (func_020e9650(o->unk_5c, unk_5c) < lim) {
            if (func_020e780c((s16)(unk_8e + 0x8000), o->unk_8e) < 0x1300) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void RoomBoardSign::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

BOOL RoomBoardSign::changeAct(s32 m) {
    static Unk_02213840_Fn tbl[3] = { (Unk_02213840_Fn)&RoomBoardSign::setupAct00, (Unk_02213840_Fn)&RoomBoardSign::setupAct01, (Unk_02213840_Fn)&RoomBoardSign::setupAct02 };
    if (m < 3) {
        if ((this->*tbl[m])()) {
            unk_130 = m;
            return TRUE;
        }
    }
    return FALSE;
}

void RoomBoardSign::execAct() {
    static Unk_022137c4_Fn tbl[3] = { &RoomBoardSign::mainAct00, &RoomBoardSign::mainAct01, &RoomBoardSign::mainAct02 };
    if (unk_130 < 3) {
        (this->*tbl[unk_130])();
    }
}

extern "C" s16 sRoomBoardSignSpawnMsg = -1;
extern "C" Unk_ov004_Quad data_ov004_02250180(0x14, 0x1f, 0x1f, 0x1f);
extern "C" {
u8 sRoomBoardSignCount;
}
extern "C" Unk_ov004_Quad data_ov004_02250174(0x14, 0x18, 0x18, 0x1f);

BOOL RoomBoardSign::setupAct00() {
    return TRUE;
}

void RoomBoardSign::mainAct00() {}

BOOL RoomBoardSign::setupAct01() {
    Unk_02213774_Pad pad;
    _ZN9Character13func_0203e488Ei(this, this);
    setFileName("obj_etc_board");
    unk_1e = unk_152;
    unk_3c->unk_08 = 1;
    return TRUE;
}

void RoomBoardSign::mainAct01() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            changeAct(2);
        }
    }
}

BOOL RoomBoardSign::setupAct02() {
    return TRUE;
}

void RoomBoardSign::mainAct02() {
    if (unk_3c) {
        if (unk_3c->unk_04 == 0) {
            _ZN9Character13func_0203e47cEi(this, this);
            TalkRequest_SetTargetDone(this);
        }
    }
}

extern "C" void *RoomBoardSign_GetByIndex(s32 i) {
    if (i >= 0 && (u32)i < 0x40) {
        return sRoomBoardSigns[i];
    }
    return 0;
}

extern "C" void RoomBoardSign_Spawn(void *a, s32 b, s32 c, s32 d) {
    u16 loc[3];
    sRoomBoardSignSpawnMsg = d;
    sRoomBoardSignSpawnRadius = b;
    loc[0] = 0;
    loc[1] = c;
    loc[2] = 0;
    _ZN5Actor5spawnEPvS0_S0_S0_S0_(0x17, 0, a, loc, 0);
}

