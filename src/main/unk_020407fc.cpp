#include "types.h"

#include "Unk_020d8c7c.h"

class TalkMsgRequest {
public:
    TalkMsgRequest();
    ~TalkMsgRequest();
    u8 unk_00[0x44];
};

class EventAnnouncer : public GameProc {
public:
    EventAnnouncer();
    virtual ~EventAnnouncer();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    /* 0x50 */ u32 unk_50;
    /* 0x54 */ TalkMsgRequest unk_54;
};

struct Unk_02040754_Time { u8 b[4]; };
struct Unk_020407fc_Data { u8 b[0x64]; };

struct EventAnnounceState {
    EventAnnounceState() { unk_00 = 0; unk_04 = 0; unk_01 = 0; }
    ~EventAnnounceState();
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
void EventAnnounce_Restart(void);
void EventWeekSlots_InitNew(u8 *);
void EventAnnounce_SetState(s32);
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
BOOL EventAnnounce_RequestWarp(void);
void EventAnnounce_RunIdle(s32);
void EventAnnounce_RunWaitChimeStart(s32);
void EventAnnounce_RunWaitChimeEnd(s32);
void EventAnnounce_RunWarp(s32);
void EventAnnounce_RunShowMessage(Unk_02040ad8_Owner *);
void EventAnnounce_RunWaitMessageEnd(s32);
void EventAnnounce_Update(void);
void EventAnnounce_Reset(void);
BOOL EventAnnounce_CanCheck(void);
void EventAnnounce_CheckEvents(void);
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
s32 HouseVisitor_ClearPresent(void);
void MIi_CpuClear16(u32 v, u32 dst, u32 size);
u32 G2_GetBG2ScrPtr();
u32 G2_GetBG2CharPtr();
u32 G2S_GetBG2ScrPtr();
u32 G2S_GetBG2CharPtr();
void Gfx2d_ShowMainPlanes(u32);
void Gfx2d_ShowSubPlanes(u32);
void ScreenTransition_ShowCover();
BOOL EventAnnounce_IsBlockedScene(void);
void EventAnnounce_Request(s32 a, s32 b, s32 c);
}

extern Unk_02040974_Obj *gCommManager;
extern u8 gScreenTransition;
extern "C" EventAnnouncer *EventAnnouncer_Create();
struct Unk_020da224_Rec { void *(*unk_00)(); s16 unk_04; s16 unk_06; };
extern Unk_02040d80_Obj *gActorDefaultParent;
extern u8 data_021ed170[];
extern u8 gSaveData[];
extern u8 *data_021c1b3c;

static inline u8 Unk_02040cac_B2(u8 *p)
{
    return p[2];
}

s32 sEventAnnounceBusy;
Unk_020da224_Rec sEventAnnouncerProfile = { (void *(*)())EventAnnouncer_Create, 0xd6, 0xd1 };
const char *sEventAnnounceMsgFiles[2] = { "obj_ev_start", "obj_ev_end" };
s32 sEventAnnounceWasOnline;
s32 sEventAnnounceBgmCode;
s32 sEventAnnouncePendingEvent = 99;
s32 sEventAnnounceActiveEvent = 99;
s32 sEventAnnounceCurEvent = 99;
extern const u8 sAnnouncedEventIds[12];
const u8 sAnnouncedEventIds[12] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0};
EventAnnounceState sEventAnnounceState;

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

extern "C" EventAnnouncer *EventAnnouncer_Create() {
    return new EventAnnouncer();
}

EventAnnouncer::EventAnnouncer() {}

EventAnnouncer::~EventAnnouncer() {}

BOOL EventAnnouncer::vfunc_00()
{
    u8 *r5;
    Unk_02040974_Rtc t;
    u8 buf[8];
    s32 r;
    s32 v;
    if (EventAnnounce_IsBlockedScene()) {
        return FALSE;
    }
    r5 = gSaveData;
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0 && Scene_GetCurrent() != 0xd) {
        if (sEventAnnounceWasOnline != 0) {
            u32 k;
            t.a = 0;
            t.b = 0;
            Clock_GetDateTime(&t);
            EventAnnounce_Reset();
            k = r5[0x15e29];
            MI_CpuCopy8(&t, buf, 8);
            r = Event_GetState(k, buf, 0);
            if (r != 0 && r != 3) {
                sEventAnnounceActiveEvent = k;
                sEventAnnouncePendingEvent = k;
                sEventAnnounceCurEvent = k;
            }
        }
        r5[0x15e29] = 99;
        sEventAnnounceWasOnline = 0;
        if (Scene_InTownUnk31() != 0 && sEventAnnounceState.unk_03 == 0) {
            Town_RefreshEventsOffline();
        }
    } else {
        EventAnnounce_Reset();
        v = r5[0x15e29];
        sEventAnnounceActiveEvent = v;
        sEventAnnouncePendingEvent = v;
        sEventAnnounceCurEvent = v;
        sEventAnnounceWasOnline = 1;
    }
    switch (sEventAnnounceState.unk_00) {
    case 0:
        break;
    case 1:
        EventAnnounce_Reset();
        break;
    case 2:
    case 3:
        break;
    default:
        if (Scene_InTownUnk31() == 0) {
            EventAnnounce_Reset();
        } else {
            TalkRequestFlags_SetSceneHold();
            sEventAnnounceState.unk_00 = 5;
            if (sEventAnnounceState.unk_03 != 0) {
                Town_UpdateDay(0);
                sEventAnnounceState.unk_03 = 0;
            }
            v = sEventAnnouncePendingEvent;
            if (v != 99) {
                sEventAnnounceActiveEvent = v;
            }
            HouseVisitor_ClearPresent();
        }
        break;
    }
    return TRUE;
}

BOOL EventAnnouncer::onExecute()
{
    s32 x = (s32)this;
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        EventAnnounce_Update();
        switch (sEventAnnounceState.unk_00) {
        case 0:
            EventAnnounce_RunIdle(x);
            break;
        case 1:
            EventAnnounce_RunWaitChimeStart(x);
            break;
        case 2:
            EventAnnounce_RunWaitChimeEnd(x);
            break;
        case 3:
            EventAnnounce_RunWarp(x);
            break;
        case 4:
            EventAnnounce_RunIdle(x);
            break;
        case 5:
            EventAnnounce_RunShowMessage((Unk_02040ad8_Owner *)x);
            break;
        case 6:
            EventAnnounce_RunWaitMessageEnd(x);
            break;
        }
    }
    return TRUE;
}

BOOL EventAnnouncer::vfunc_0c()
{
    if (EventAnnounce_IsBlockedScene()) {
        return TRUE;
    }
    if (TalkRequestFlags_IsSceneHold()) {
        TalkRequestFlags_ClearSceneHold();
        sEventAnnounceBusy = 0;
        sEventAnnounceState.unk_00 = 0;
        sEventAnnounceState.unk_02 = 0;
    }
    switch (sEventAnnounceState.unk_00) {
    case 0:
        if (sEventAnnounceCurEvent == 99) {
            EventAnnounce_Reset();
        }
        break;
    case 1:
        sEventAnnounceState.unk_00 = 2;
        break;
    }
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        data_021ed170[9] = sEventAnnounceCurEvent;
    }
    return TRUE;
}

extern "C" void EventAnnounce_Reset(void)
{
    sEventAnnouncePendingEvent = 99;
    sEventAnnounceCurEvent = 99;
    sEventAnnounceActiveEvent = 99;
    sEventAnnounceState.unk_00 = 0;
    sEventAnnounceState.unk_02 = 0;
    sEventAnnounceState.unk_03 = 0;
}

extern "C" void EventAnnounce_Restart(void)
{
    EventAnnounce_Reset();
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        EventAnnounce_CheckEvents();
    }
}

extern "C" BOOL EventAnnounce_CanCheck(void)
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

extern "C" void EventAnnounce_CheckEvents(void)
{
    s32 zero;
    Unk_02040974_Rtc t;
    u8 buf[8];
    u8 buf2[8];
    s32 i;
    t.a = 0;
    t.b = 0;
    Clock_GetDateTime(&t);
    if (sEventAnnouncePendingEvent == 99) {
        zero = 0;
        for (i = 0; i < 11; i++) {
            u32 k;
            s32 r;
            MI_CpuCopy8(&t, buf, 8);
            k = sAnnouncedEventIds[i];
            r = Event_GetStateAt(k, buf, 0);
            switch (r) {
            case 2:
                if (k == 0x13) {
                    sEventAnnouncePendingEvent = k;
                    sEventAnnounceCurEvent = k;
                } else if (Unk_02040cac_B2((u8 *)&t) < 6) {
                    sEventAnnounceCurEvent = k;
                } else {
                    EventAnnounce_Request(k, k, zero);
                }
                break;
            case 3:
                if (k == 0x12) {
                    sEventAnnouncePendingEvent = 0x12;
                    sEventAnnounceCurEvent = 0x12;
                    sEventAnnounceActiveEvent = 0x12;
                }
                break;
            }
        }
    }
    if (sEventAnnounceCurEvent != 99) {
        MI_CpuCopy8(&t, buf2, 8);
        if (Event_GetStateAt(sEventAnnounceCurEvent, buf2, 0) == 0) {
            if (sEventAnnounceCurEvent == 0x13) {
                sEventAnnouncePendingEvent = 99;
                sEventAnnounceCurEvent = 99;
            } else {
                EventAnnounce_Request(sEventAnnounceCurEvent, 99, 1);
            }
        }
    }
}

extern "C" void EventAnnounce_Update(void)
{
    if (EventAnnounce_CanCheck()) {
        EventAnnounce_CheckEvents();
    }
}

extern "C" s32 EventAnnounce_IsBusy(void)
{
    return sEventAnnounceBusy;
}

extern "C" s32 EventAnnounce_GetActiveEvent(void)
{
    return sEventAnnounceActiveEvent;
}

extern "C" s32 EventAnnounce_GetCurrentEvent(void)
{
    return sEventAnnounceCurEvent;
}

extern "C" void EventAnnounce_RunIdle(s32)
{
}

extern "C" void EventAnnounce_RunWaitChimeStart(s32)
{
    if (Melody_IsBusy() != 0) {
        sEventAnnounceState.unk_00 = 2;
    }
}

extern "C" void EventAnnounce_RunWaitChimeEnd(s32)
{
    if (Melody_IsBusy() == 0) {
        EventAnnounce_SetState(3);
    }
}

extern "C" BOOL EventAnnounce_RequestWarp(void)
{
    BOOL r = FALSE;
    if (TalkRequest_AddEventWarp() == 0) {
        sEventAnnounceState.unk_00 = r;
        sEventAnnounceState.unk_02 = r;
    } else {
        r = TRUE;
        sEventAnnounceState.unk_02 = r;
    }
    return r;
}

extern "C" void EventAnnounce_RunWarp(s32)
{
    u8 buf[0x10];
    s32 r;
    if (TalkRequestFlags_IsEventWarpStarted() == 0) {
        if (TalkRequest_AddEventWarp() == 0) {
            sEventAnnounceState.unk_00 = 0;
            sEventAnnounceState.unk_02 = 0;
        }
    } else {
        s32 v = sEventAnnounceState.unk_08;
        sEventAnnouncePendingEvent = v;
        sEventAnnounceCurEvent = v;
        if (TalkRequestFlags_IsEventWarpReady() != 0 && Melody_IsBusy() == 0) {
            r = TownBlockMap_Get();
            if (r != 0) {
                if (sEventAnnounceState.unk_04 == 14) {
                    r = Town_FindGulliverShip(r, buf);
                } else {
                    r = Town_FindTownHall(r, buf, 0, 0);
                }
                if (r != 0) {
                    Scene_SavePlayerPos(Scene_GetWarpRequest(), 0);
                    SceneWarp_RequestAt(Scene_GetWarpRequest(), 0x31, buf, 0x400000, 0, 2, 2);
                    _ZN12BgmSceneFade13func_020353b0Eii(data_021c1b3c + 0x2d0, sEventAnnounceBgmCode, sEventAnnounceState.unk_04);
                    sEventAnnounceState.unk_00 = 4;
                    sEventAnnounceBusy = 1;
                }
            }
        }
    }
}

extern "C" void EventAnnounce_RunShowMessage(Unk_02040ad8_Owner *o)
{
    if (Unk_02040ad8_IsTwo(gScreenTransition)) {
        Unk_02040a84_Obj *p = (Unk_02040a84_Obj *)TalkWindow_Get(0);
        o->unk_54.vfunc_08();
        _ZN10MsgRequest11setFileNameEPKc(&o->unk_54, (void *)sEventAnnounceMsgFiles[sEventAnnounceState.unk_01]);
        *((u8 *)o + 0x72) = sEventAnnounceState.unk_04;
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(p, &o->unk_54);
        p->unk_08 = 1;
        sEventAnnounceState.unk_00 = 6;
    }
}

extern "C" void EventAnnounce_RunWaitMessageEnd(s32)
{
    Unk_02040a84_Obj *p = (Unk_02040a84_Obj *)TalkWindow_Get(0);
    if (p->unk_04 == 0) {
        _ZN15TalkWindowState13detachRequestEv(p);
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 20);
        _ZN12BgmSceneFade13func_02035368Eii(data_021c1b3c + 0x2d0, sEventAnnounceBgmCode, sEventAnnounceState.unk_04);
        sEventAnnounceBgmCode = 0;
        sEventAnnounceState.unk_00 = 0;
        sEventAnnounceState.unk_02 = 0;
    }
}

extern "C" void EventAnnounce_SetState(s32 v)
{
    BOOL r;
    if (v == 3) {
        r = EventAnnounce_RequestWarp();
    } else {
        r = TRUE;
    }
    if (r) {
        sEventAnnounceState.unk_00 = v;
    }
}

EventAnnounceState::~EventAnnounceState()
{
}

extern "C" void EventAnnounce_Request(s32 a, s32 b, s32 c)
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
    if (sEventAnnounceState.unk_02 != 0) {
        return;
    }
    r4 = -1;
    if (a >= 9 && a <= 0x12) {
        r4 = a;
        r4 -= 9;
        if (c == 0) {
            sEventAnnounceBgmCode = 1;
        } else {
            sEventAnnounceBgmCode = 2;
        }
        r6 = 2;
    } else if (a == 0x44) {
        if (sEventAnnounceState.unk_00 == 0) {
            r4 = 14;
            sEventAnnounceBgmCode = 0;
            r6 = 2;
        }
    } else if (a < 0) {
        switch (sEventAnnounceState.unk_00) {
        case 0: {
            Unk_02040974_Rtc t;
            t.a = 0;
            t.b = 0;
            r4 = 15;
            sEventAnnounceBgmCode = 0;
            sEventAnnounceState.unk_03 = 1;
            Clock_GetDateTime(&t);
            if (((u8 *)&t)[1] == 0) {
                r6 = 1;
            } else {
                r6 = 3;
            }
            break;
        }
        case 2:
            sEventAnnounceState.unk_03 = 1;
            break;
        }
    }
    if (r4 >= 0) {
        EventAnnounce_SetState(r6);
        sEventAnnounceState.unk_04 = r4;
        sEventAnnounceState.unk_01 = c;
        sEventAnnounceState.unk_08 = b;
    }
}

extern "C" BOOL EventAnnounce_IsBlockedScene(void)
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

extern "C" void EventWeekSlots_Construct(u8 *p)
{
    *(s32 *)(p + 0x34) = 0;
    *(s32 *)(p + 0x38) = 0;
}

extern "C" void EventWeekSlots_Destruct(void)
{
}

extern "C" void EventWeekSlots_InitNew(u8 *p)
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

extern "C" void EventWeekSlots_Reset(u8 *p)
{
    EventWeekSlots_InitNew(p);
}

extern "C" void EventWeekSlots_OnLoad(u8 *p)
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
    EventAnnounce_Restart();
}

