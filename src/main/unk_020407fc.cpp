#include "types.h"

#include "Unk_020d8c7c.h"

class TalkMsgRequest {
public:
    TalkMsgRequest();
    ~TalkMsgRequest();
    u8 unk_00[0x44];
};

class Unk_020da258 : public GameProc {
public:
    Unk_020da258();
    virtual ~Unk_020da258();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    /* 0x50 */ u32 unk_50;
    /* 0x54 */ TalkMsgRequest unk_54;
};

struct Unk_02040754_Time { u8 b[4]; };
struct Unk_020407fc_Data { u8 b[0x64]; };

struct Unk_02040974_State {
    Unk_02040974_State() { unk_00 = 0; unk_04 = 0; unk_01 = 0; }
    ~Unk_02040974_State();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 pad_05[3];
    s32 unk_08;
};

struct Unk_02040974_Obj { u8 pad[0x64]; s32 unk_64; };
struct Unk_02040974_Rtc { s32 a; s32 b; };
struct Unk_02040cac_Rtc { u8 b0; u8 b1; u8 b2; u8 b3; s32 b; };
union Unk_02040cac_Rtc2 { s32 w[2]; Unk_02040cac_Rtc v; };
struct Unk_02040ad8_Member {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};
struct Unk_02040ad8_Owner {
    u8 pad[0x54];
    Unk_02040ad8_Member unk_54;
};
struct Unk_02040a84_Obj { s32 unk_00; s32 unk_04; s32 unk_08; };
static inline s32 Unk_02040a84_Get(Unk_02040a84_Obj *p)
{
    s32 v = p->unk_04;
    return v;
}
static inline BOOL Unk_02040ad8_IsTwo(u8 v)
{
    return v == 2 ? TRUE : FALSE;
}
struct Unk_02040d80_Obj {
    u8 pad[0xc];
    u16 unk_0c;
};

extern "C" {
s32 func_02063b8c(s32);
void DateTime_AddDays(s32, s32);
void MI_CpuCopy8(void *, void *, u32);
s32 EventSchedule_CollectAtNoon(void *, s32, void *);
void Clock_GetDate(void *);
s32 Date_DaysBetween(void *, void *);
void func_02040df0(void);
void func_02040864(u8 *);
void func_02040a60(s32);
void func_020402f8(void *, s32);
void Event_RefreshToday(s32);
void func_02040684(void *);
s32 Scene_GetCurrent(void);
s32 _ZN11CommManager8isOnlineEv(void *);
s32 TownSessionState_Get(void);
s32 TownSessionState_GetResettiFlag(void);
s32 _ZN16ResettiVisitFlag5isSetEv(void);
s32 _ZN11CommManager12isSlotActiveEi(void *, s32);
void Clock_GetDateTime(void *);
void *TalkWindow_Get(s32);
void _ZN15TalkWindowState13detachRequestEv(void *p);
s32 Scene_GetWarpRequest(void);
void SceneWarp_RequestExit(s32, s32);
void _ZN12BgmSceneFade13func_02035368Eii(void *, s32, s32);
void _ZN12BgmSceneFade13func_020353b0Eii(void *, s32, s32);
void _ZN10MsgRequest11setFileNameEPKc(void *, void *);
void _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(void *, void *);
s32 TalkRequestFlags_IsEventWarpStarted(void);
BOOL func_02040c10(void);
void func_02040c6c(s32);
void func_02040c50(s32);
void func_02040c38(s32);
void func_02040b48(s32);
void func_02040ad8(Unk_02040ad8_Owner *);
void func_02040a84(s32);
void func_02040c94(void);
void func_02040e14(void);
BOOL func_02040d80(void);
void func_02040cac(void);
s32 TalkRequest_AddEventWarp(void);
s32 TalkRequestFlags_IsEventWarpReady(void);
s32 Melody_IsBusy(void);
s32 TownBlockMap_Get(void);
s32 Town_FindGulliverShip(s32, void *);
s32 Town_FindTownHall(s32, void *, s32, s32);
void Scene_SavePlayerPos(s32, s32);
void SceneWarp_RequestAt(s32, s32, void *, s32, ...);
s32 NetArea_IsUnsharedScene(s32);
s32 Event_GetStateAt(s32, void *, s32);
s32 Event_GetState(s32, void *, s32);
s32 TalkRequestFlags_IsSceneHold(void);
s32 TalkRequestFlags_ClearSceneHold(void);
s32 TalkRequestFlags_SetSceneHold(void);
s32 Scene_InTownUnk31(void);
void Town_RefreshEventsOffline(void);
void Town_UpdateDay(s32);
s32 func_020b101c(void);
void MIi_CpuClear16(u32 v, u32 dst, u32 size);
u32 G2_GetBG2ScrPtr();
u32 G2_GetBG2CharPtr();
u32 G2S_GetBG2ScrPtr();
u32 G2S_GetBG2CharPtr();
void Gfx2d_ShowMainPlanes(u32);
void Gfx2d_ShowSubPlanes(u32);
void ScreenTransition_ShowCover();
BOOL func_02040908(void);
void func_02040974(s32 a, s32 b, s32 c);
}

extern Unk_02040974_Obj *gCommManager;
extern u8 gScreenTransition;
extern "C" Unk_020da258 *func_020410ec();
struct Unk_020da224_Rec { void *(*unk_00)(); s16 unk_04; s16 unk_06; };
extern Unk_02040d80_Obj *gActorDefaultParent;
extern u8 data_021ed170[];
extern u8 gSaveData[];
extern u8 *data_021c1b3c;

static inline u8 Unk_02040cac_B2(u8 *p)
{
    return p[2];
}

s32 data_021c3c98;
Unk_020da224_Rec data_020da224 = { (void *(*)())func_020410ec, 0xd6, 0xd1 };
const char *data_020da22c[2] = { "obj_ev_start", "obj_ev_end" };
s32 data_021c3c90;
s32 data_021c3c94;
s32 data_020da220 = 99;
s32 data_020da218 = 99;
s32 data_020da21c = 99;
extern const u8 data_020c9098[12];
const u8 data_020c9098[12] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0};
Unk_02040974_State data_021c3ca8;

static inline void Unk_02041104_Fill(u16 v, u32 dst, u32 size) {
    volatile u16 t = v;
    MIi_CpuClear16(t, dst, size);
}

extern "C" void ScreenTransition_ShowCover() {
    volatile u16 *r;
    r = (volatile u16 *)0x400000c;
    *r &= ~3;
    *r = (*r & 0x43) | 0x600;
    Unk_02041104_Fill(0, G2_GetBG2ScrPtr(), 0x800);
    Unk_02041104_Fill(0x1111, G2_GetBG2CharPtr(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000000, 4);
    Gfx2d_ShowMainPlanes(4);
    r = (volatile u16 *)0x400100c;
    *r &= ~3;
    *r = (*r & 0x43) | 0xe04;
    Unk_02041104_Fill(0, G2S_GetBG2ScrPtr(), 0x800);
    Unk_02041104_Fill(0x1111, G2S_GetBG2CharPtr(), 0x20);
    Unk_02041104_Fill(0x8000, 0x5000400, 4);
    Gfx2d_ShowSubPlanes(4);
}

extern "C" Unk_020da258 *func_020410ec() {
    return new Unk_020da258();
}

Unk_020da258::Unk_020da258() {}

Unk_020da258::~Unk_020da258() {}

BOOL Unk_020da258::vfunc_00()
{
    u8 *r5;
    Unk_02040974_Rtc t;
    u8 buf[8];
    s32 r;
    s32 v;
    if (func_02040908()) {
        return FALSE;
    }
    r5 = gSaveData;
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0 && Scene_GetCurrent() != 0xd) {
        if (data_021c3c90 != 0) {
            u32 k;
            t.a = 0;
            t.b = 0;
            Clock_GetDateTime(&t);
            func_02040e14();
            k = r5[0x15e29];
            MI_CpuCopy8(&t, buf, 8);
            r = Event_GetState(k, buf, 0);
            if (r != 0 && r != 3) {
                data_020da218 = k;
                data_020da220 = k;
                data_020da21c = k;
            }
        }
        r5[0x15e29] = 99;
        data_021c3c90 = 0;
        if (Scene_InTownUnk31() != 0 && data_021c3ca8.unk_03 == 0) {
            Town_RefreshEventsOffline();
        }
    } else {
        func_02040e14();
        v = r5[0x15e29];
        data_020da218 = v;
        data_020da220 = v;
        data_020da21c = v;
        data_021c3c90 = 1;
    }
    switch (data_021c3ca8.unk_00) {
    case 0:
        break;
    case 1:
        func_02040e14();
        break;
    case 2:
    case 3:
        break;
    default:
        if (Scene_InTownUnk31() == 0) {
            func_02040e14();
        } else {
            TalkRequestFlags_SetSceneHold();
            data_021c3ca8.unk_00 = 5;
            if (data_021c3ca8.unk_03 != 0) {
                Town_UpdateDay(0);
                data_021c3ca8.unk_03 = 0;
            }
            v = data_020da220;
            if (v != 99) {
                data_020da218 = v;
            }
            func_020b101c();
        }
        break;
    }
    return TRUE;
}

BOOL Unk_020da258::onExecute()
{
    s32 x = (s32)this;
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        func_02040c94();
        switch (data_021c3ca8.unk_00) {
        case 0:
            func_02040c6c(x);
            break;
        case 1:
            func_02040c50(x);
            break;
        case 2:
            func_02040c38(x);
            break;
        case 3:
            func_02040b48(x);
            break;
        case 4:
            func_02040c6c(x);
            break;
        case 5:
            func_02040ad8((Unk_02040ad8_Owner *)x);
            break;
        case 6:
            func_02040a84(x);
            break;
        }
    }
    return TRUE;
}

BOOL Unk_020da258::vfunc_0c()
{
    if (func_02040908()) {
        return TRUE;
    }
    if (TalkRequestFlags_IsSceneHold()) {
        TalkRequestFlags_ClearSceneHold();
        data_021c3c98 = 0;
        data_021c3ca8.unk_00 = 0;
        data_021c3ca8.unk_02 = 0;
    }
    switch (data_021c3ca8.unk_00) {
    case 0:
        if (data_020da21c == 99) {
            func_02040e14();
        }
        break;
    case 1:
        data_021c3ca8.unk_00 = 2;
        break;
    }
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        data_021ed170[9] = data_020da21c;
    }
    return TRUE;
}

extern "C" void func_02040e14(void)
{
    data_020da220 = 99;
    data_020da21c = 99;
    data_020da218 = 99;
    data_021c3ca8.unk_00 = 0;
    data_021c3ca8.unk_02 = 0;
    data_021c3ca8.unk_03 = 0;
}

extern "C" void func_02040df0(void)
{
    func_02040e14();
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        func_02040cac();
    }
}

extern "C" BOOL func_02040d80(void)
{
    if (!Unk_02040ad8_IsTwo(gScreenTransition)) {
        return FALSE;
    }
    if (Scene_GetCurrent() == 0x3f) {
        return FALSE;
    }
    if (Scene_GetCurrent() == 0x2c) {
        return FALSE;
    }
    if (Scene_GetCurrent() == 6) {
        return FALSE;
    }
    if (NetArea_IsUnsharedScene(Scene_GetCurrent()) != 0) {
        return FALSE;
    }
    if (gActorDefaultParent != 0 && gActorDefaultParent->unk_0c != 6) {
        return FALSE;
    }
    return TRUE;
}

extern "C" void func_02040cac(void)
{
    s32 zero;
    Unk_02040974_Rtc t;
    u8 buf[8];
    u8 buf2[8];
    s32 i;
    t.a = 0;
    t.b = 0;
    Clock_GetDateTime(&t);
    if (data_020da220 == 99) {
        zero = 0;
        for (i = 0; i < 11; i++) {
            u32 k;
            s32 r;
            MI_CpuCopy8(&t, buf, 8);
            k = data_020c9098[i];
            r = Event_GetStateAt(k, buf, 0);
            switch (r) {
            case 2:
                if (k == 0x13) {
                    data_020da220 = k;
                    data_020da21c = k;
                } else if (Unk_02040cac_B2((u8 *)&t) < 6) {
                    data_020da21c = k;
                } else {
                    func_02040974(k, k, zero);
                }
                break;
            case 3:
                if (k == 0x12) {
                    data_020da220 = 0x12;
                    data_020da21c = 0x12;
                    data_020da218 = 0x12;
                }
                break;
            }
        }
    }
    if (data_020da21c != 99) {
        MI_CpuCopy8(&t, buf2, 8);
        if (Event_GetStateAt(data_020da21c, buf2, 0) == 0) {
            if (data_020da21c == 0x13) {
                data_020da220 = 99;
                data_020da21c = 99;
            } else {
                func_02040974(data_020da21c, 99, 1);
            }
        }
    }
}

extern "C" void func_02040c94(void)
{
    if (func_02040d80()) {
        func_02040cac();
    }
}

extern "C" s32 func_02040c88(void)
{
    return data_021c3c98;
}

extern "C" s32 func_02040c7c(void)
{
    return data_020da218;
}

extern "C" s32 func_02040c70(void)
{
    return data_020da21c;
}

extern "C" void func_02040c6c(s32)
{
}

extern "C" void func_02040c50(s32)
{
    if (Melody_IsBusy() != 0) {
        data_021c3ca8.unk_00 = 2;
    }
}

extern "C" void func_02040c38(s32)
{
    if (Melody_IsBusy() == 0) {
        func_02040a60(3);
    }
}

extern "C" BOOL func_02040c10(void)
{
    BOOL r = FALSE;
    if (TalkRequest_AddEventWarp() == 0) {
        data_021c3ca8.unk_00 = r;
        data_021c3ca8.unk_02 = r;
    } else {
        r = TRUE;
        data_021c3ca8.unk_02 = r;
    }
    return r;
}

extern "C" void func_02040b48(s32)
{
    u8 buf[0x10];
    s32 r;
    if (TalkRequestFlags_IsEventWarpStarted() == 0) {
        if (TalkRequest_AddEventWarp() == 0) {
            data_021c3ca8.unk_00 = 0;
            data_021c3ca8.unk_02 = 0;
        }
    } else {
        s32 v = data_021c3ca8.unk_08;
        data_020da220 = v;
        data_020da21c = v;
        if (TalkRequestFlags_IsEventWarpReady() != 0 && Melody_IsBusy() == 0) {
            r = TownBlockMap_Get();
            if (r != 0) {
                if (data_021c3ca8.unk_04 == 14) {
                    r = Town_FindGulliverShip(r, buf);
                } else {
                    r = Town_FindTownHall(r, buf, 0, 0);
                }
                if (r != 0) {
                    Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
                    SceneWarp_RequestAt(Scene_GetWarpRequest(), 0x31, buf, 0x400000, 0, 2, 2);
                    _ZN12BgmSceneFade13func_020353b0Eii(data_021c1b3c + 0x2d0, data_021c3c94, data_021c3ca8.unk_04);
                    data_021c3ca8.unk_00 = 4;
                    data_021c3c98 = 1;
                }
            }
        }
    }
}

extern "C" void func_02040ad8(Unk_02040ad8_Owner *o)
{
    if (Unk_02040ad8_IsTwo(gScreenTransition)) {
        Unk_02040a84_Obj *p = (Unk_02040a84_Obj *)TalkWindow_Get(0);
        o->unk_54.vfunc_08();
        _ZN10MsgRequest11setFileNameEPKc(&o->unk_54, (void *)data_020da22c[data_021c3ca8.unk_01]);
        *((u8 *)o + 0x72) = data_021c3ca8.unk_04;
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(p, &o->unk_54);
        p->unk_08 = 1;
        data_021c3ca8.unk_00 = 6;
    }
}

extern "C" void func_02040a84(s32)
{
    Unk_02040a84_Obj *p = (Unk_02040a84_Obj *)TalkWindow_Get(0);
    if (p->unk_04 == 0) {
        _ZN15TalkWindowState13detachRequestEv(p);
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 20);
        _ZN12BgmSceneFade13func_02035368Eii(data_021c1b3c + 0x2d0, data_021c3c94, data_021c3ca8.unk_04);
        data_021c3c94 = 0;
        data_021c3ca8.unk_00 = 0;
        data_021c3ca8.unk_02 = 0;
    }
}

extern "C" void func_02040a60(s32 v)
{
    BOOL r;
    if (v == 3) {
        r = func_02040c10();
    } else {
        r = TRUE;
    }
    if (r) {
        data_021c3ca8.unk_00 = v;
    }
}

Unk_02040974_State::~Unk_02040974_State()
{
}

extern "C" void func_02040974(s32 a, s32 b, s32 c)
{
    s32 r4;
    s32 r6;
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        return;
    }
    if (Scene_GetCurrent() == 0) {
        TownSessionState_Get();
        TownSessionState_GetResettiFlag();
        if (_ZN16ResettiVisitFlag5isSetEv()) {
            if (!_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64)) {
                return;
            }
        }
    }
    if (data_021c3ca8.unk_02 != 0) {
        return;
    }
    r4 = -1;
    if (a >= 9 && a <= 0x12) {
        r4 = a;
        r4 -= 9;
        if (c == 0) {
            data_021c3c94 = 1;
        } else {
            data_021c3c94 = 2;
        }
        r6 = 2;
    } else if (a == 0x44) {
        if (data_021c3ca8.unk_00 == 0) {
            r4 = 14;
            data_021c3c94 = 0;
            r6 = 2;
        }
    } else if (a < 0) {
        switch (data_021c3ca8.unk_00) {
        case 0: {
            Unk_02040974_Rtc t;
            t.a = 0;
            t.b = 0;
            r4 = 15;
            data_021c3c94 = 0;
            data_021c3ca8.unk_03 = 1;
            Clock_GetDateTime(&t);
            if (((u8 *)&t)[1] == 0) {
                r6 = 1;
            } else {
                r6 = 3;
            }
            break;
        }
        case 2:
            data_021c3ca8.unk_03 = 1;
            break;
        }
    }
    if (r4 >= 0) {
        func_02040a60(r6);
        data_021c3ca8.unk_04 = r4;
        data_021c3ca8.unk_01 = c;
        data_021c3ca8.unk_08 = b;
    }
}

extern "C" BOOL func_02040908(void)
{
    switch (Scene_GetCurrent()) {
    case 6:
    case 12:
    case 13:
    case 14:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x32:
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02040900(u8 *p)
{
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
}

extern "C" void func_020408fc(void)
{
}

extern "C" void func_02040864(u8 *p)
{
    Unk_02040754_Time t;
    Clock_GetDate(&t);
    Unk_02040754_Time t1 = t;
    p[0] = t1.b[0];
    p[1] = t1.b[1];
    p[2] = t1.b[2];
    p[3] = t1.b[3];
    Unk_02040754_Time t2 = t;
    p[4] = t2.b[0];
    p[5] = t2.b[1];
    p[6] = t2.b[2];
    p[7] = t2.b[3];
    p[8] = 1;
    p[9] = 1;
    p[10] = 0;
    p[11] = 0;
    p[12] = 1;
    p[13] = 1;
    p[14] = 0;
    p[15] = 0;
    p[16] = func_02063b8c(5) + 1;
    p[17] = 99;
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
    func_02040684(p);
    func_020402f8(p, 1);
}

extern "C" void func_0204085c(u8 *p)
{
    func_02040864(p);
}

extern "C" void func_020407fc(u8 *p)
{
    Unk_02040754_Time a;
    Unk_02040754_Time b;
    Clock_GetDate(&a);
    if (Date_DaysBetween(&a, p + 8) >= 7) {
        p[8] = 1;
        p[9] = 1;
        p[10] = 0;
        p[11] = 0;
    }
    Clock_GetDate(&b);
    if (Date_DaysBetween(&b, p + 12) >= 7) {
        p[12] = 1;
        p[13] = 1;
        p[14] = 0;
        p[15] = 0;
    }
    func_020402f8(p, 0);
    Event_RefreshToday(1);
    func_02040df0();
}

