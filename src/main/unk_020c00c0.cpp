#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "gfx/Unk_020bfe30_Vec.h"
#include "game/Unk_020c010c_Ent.h"
#include "npc/Unk_020c0538_Out.h"
#include "player/Unk_02097ff4.h"
#include "snd/SndEnvChannel.h"
#include "game/WeatherRecord.h"
#include "gfx/Unk_020bfe30.h"
#include "snd/Unk_0213b938.h"


static inline void Unk_020bfe30_Set(Unk_020bfe30_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}






class SpNpcKatie;

extern "C" {
void SkySprite_Release(void *p);
}

extern "C" {
void VEC_Add(Unk_020bfe30_Vec *a, Unk_020bfe30_Vec *b, Unk_020bfe30_Vec *c);
}

extern "C" {
Unk_020bfe38_Ent *PlayerActor_GetActor(s32 n);
}

extern "C" {
u32 Random_GlobalBelow(u32 n);
}

extern "C" {
Unk_020bffc0_Mtx *Camera_GetViewMatrix(void);
}

extern "C" {
void WorldCurve_Apply(void *out, void *in);
}

extern "C" {
void MTX_MultVec43(void *a, void *b, void *c);
}

extern "C" {
s32 func_0203bc3c(s32 a);
}

extern "C" {
s32 FX_Div(s32 a, s32 b);
}

extern "C" {
void func_020e9888(void *a, s32 b);
}

extern "C" {
s32 func_021355f0(void *p, u32 n, u32 sz, void (*dtor)(void *));
}

extern "C" {
void func_02000c8c(void *p);
}

extern "C" {
void func_020bd054(void *p);
}

extern "C" {
void func_020bd058(void *p);
}

extern "C" {
s32 DateTime_GetWeatherPeriod(void *p);
}

extern "C" {
void MI_CpuCopy8(void *a, void *b, s32 n);
}

extern "C" {
void DateTime_SubHours(void *p, s32 n);
}

extern "C" {
s32 DateTime_DiffMinutes(void *a, void *b);
}

extern "C" {
void DateTime_AddDays(void *p, s32 n);
}

extern "C" {
s32 Scene_GetCurrent(void);
}

extern "C" {
BOOL GameStart_IsActive(void);
}

extern "C" {
s32 PlayerData_GetCurrent(void);
}

extern "C" {
u16 *Event_GetTodayList(void);
}

extern "C" {
void Clock_GetDateTime(void *p);
}

extern "C" {
void Clock_GetDate(void *p);
}

extern "C" {
void func_0202e5a8(void *p);
}

extern "C" {
s32 func_02019d8c(void *p);
}

extern "C" {
s32 func_020679b4(void *p);
}

extern "C" {
s32 func_020aa514(void);
}

extern "C" {
void func_02067a84(void *a, void *b, u32 c);
}

extern "C" {
void TownSessionState_Get(void);
}

extern "C" {
void TownSessionState_GetKatieState(void);
}

extern "C" {
void func_02086fa0(void);
}

extern "C" {
void func_02086f98(void);
}

extern "C" {
s32 func_020986a4(s32 a);
}

extern "C" {
s32 func_02087364(s32 a);
}

extern "C" {
s32 func_02015818(void *p, s32 a, s32 b);
}

extern "C" {
s32 func_0209801c(s32 a, s32 b);
}

extern "C" {
void Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
}

extern "C" {
s32 func_0201ad34(void *p, s32 a);
}

extern "C" {
s32 func_0201ad30(void *p, s32 a);
}

extern "C" {
s32 func_020159bc(void *p, void *q);
}

extern "C" {
void func_0202e26c(void *p);
}

extern "C" {
void func_0202e2bc(void *p);
}

extern "C" {
void func_020c11b8(void *p, s32 n);
}

extern "C" {
s32 Net_GetJoiningAid(void);
}

extern "C" {
s32 PlayerData_GetBySessionSlot(s32 a);
}

extern "C" {
BOOL PlayerActor_SetNetFollowPaused(s32 a, s32 b);
}

extern "C" {
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
}

extern "C" {
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}

extern "C" {
BOOL PlayerActor_IsScriptedWalking(s32 a);
}

extern "C" {
BOOL func_02019790(void *p);
}

extern "C" {
void func_0201a6c0(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
}

extern "C" {
void func_02014198(void *p, s32 a, s32 b);
}

extern "C" {
void func_02067a78(void *p);
}

extern "C" {
void SpNpcKaitlin_ChangeAct04(void);
}

extern "C" {
void Camera_SetMode19(void);
}

extern "C" {
s32 NpcRegistry_FindSpNpc(s32 a);
}

extern "C" {
void func_02015a80(void *p, s32 a);
}

extern "C" {
void func_02067a6c(void *p);
}

extern "C" {
s32 func_02014220(void *p);
}

extern "C" {
s32 Math_AngleXZ(void *a, void *b);
}

extern "C" {
void PlayerActor_RequestTurnTo(s32 a, s32 b);
}

extern "C" {
void SpNpcKaitlin_ChangeAct06(void);
}

extern "C" {
BOOL func_020a03c4(void);
}

extern "C" {
void FieldInfoBalloon_ShowPleaseWait(void);
}

extern "C" {
BOOL func_020729cc(CommManager *p, s32 a);
}

extern "C" {
s32 func_0208733c(void);
}

extern "C" {
void func_02087368(s32 a);
}

extern "C" {
void func_02087210(void);
}

extern "C" {
s32 Scene_GetWarpRequest(void);
}

extern "C" {
void SceneWarp_RequestExit(s32 a, s32 b);
}

extern "C" {
extern u8 gScreenTransition;
}

extern "C" {
extern Unk_020bfe30_Vec sSpNpcKatieReunionWalkPos;
}

extern "C" {
extern u16 data_020c6cc8;
}

extern "C" {
extern u32 data_020c6d1c;
}

extern "C" {
extern u8 gVec3Zero[];
}

extern "C" {
extern s32 sRainParallax[];
}

extern "C" {
extern s32 sRainSideToggle;
}

extern "C" {
extern Unk_020bfec0_Ent data_021f43e0;
}

extern "C" {
extern s16 data_021f1448[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern Unk_020bffc0_Mtx data_021f47e0;
}

extern "C" {
extern s32 gCamera;
}

extern "C" {
u8 sWeatherPrevDayRain;
}

extern "C" {
s32 sWeatherRolledAtLoad;
}

extern "C" {
extern SpNpcKatie *sSpNpcKatieInstance;
}

// 0x020d1a28: first .rodata object of this file; read by the previous unit (0x020be9e4, src/main/unk_020b8d9c.cpp)
extern const u32 kFireworkBurstFlag29;
const u32 kFireworkBurstFlag29 = 0x20000000;

extern const u8 sWeatherPatternWeights[0x260];

const u8 sWeatherPatternWeights[0x260] = {
    0x04, 0x14, 0x14, 0x14, 0x14, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x04, 0x04, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x0c, 0x0c, 0x0c, 0x0c, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x14, 0x14, 0x14, 0x14, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x08, 0x08, 0x08, 0x0a, 0x0a, 0x0a, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x02, 0x0c, 0x0c, 0x0c, 0x0c, 0x05, 0x05, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x0c, 0x0c, 0x0c, 0x0c, 0x06, 0x06, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x08, 0x08, 0x05, 0x05, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x03, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0f, 0x0f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x03, 0x0c, 0x0c, 0x0c, 0x0c, 0x06, 0x06, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02,
    0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x04, 0x04, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x02, 0x0f, 0x0f, 0x0f, 0x0f, 0x08, 0x08, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x0f, 0x0f, 0x0f, 0x0f, 0x0a, 0x0a, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x0c, 0x0c, 0x0c, 0x0c, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x0a, 0x0a, 0x0a, 0x0a, 0x08, 0x08, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x28, 0x1e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x03, 0x03, 0x03, 0x05, 0x05, 0x05, 0x03, 0x03, 0x03,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
    0x04, 0x14, 0x14, 0x14, 0x14, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

extern "C" {
extern CommManager *gCommManager;
}

extern "C" {
extern u32 sSpNpcKatieMsgKey;
}

// ---------------------------------------------------------------------------------------------------------------------
static inline void Unk_020bfe38_Add(s32 *dst, s32 v) {
    *dst += v;
}


// ---------------------------------------------------------------------------------------------------------------------


class SkyProc : public GameProc {
public:
    virtual void postCreate(s32 status);

    /* 0x50 */ Unk_0213b938 envSndChannel;
};


// prototypes
extern "C" void Weather_Construct();
extern "C" void Weather_Destruct();
extern "C" void Weather_InitNew(WeatherRecord *self);
extern "C" void Weather_SetDateToday(void *p);
extern "C" void Weather_Apply(WeatherRecord *self);
extern "C" BOOL Weather_UpdateDaily(WeatherRecord *self, void *arg);
extern "C" u8 Weather_PickPattern(void *self, void *p);
extern "C" u8 Weather_GetPrevDayRain();


extern "C" void Weather_Construct() {}

extern "C" void Weather_Destruct() {}

extern "C" void Weather_InitNew(WeatherRecord *self) {
    sWeatherPrevDayRain = 0;
    self->rained = 0;
    self->day = 1;
    self->month = 1;
    self->year = 0;
    self->unk_03 = 0;
    self->day = 0;
    Weather_Apply(self);
}

extern "C" void Weather_SetDateToday(void *p) {
    Clock_GetDate(p);
}

extern "C" void Weather_Apply(WeatherRecord *self) {
    u8 buf[12];
    ((u32 *)buf)[0] = 0;
    ((u32 *)buf)[1] = 0;
    Clock_GetDateTime(buf);
    if (Scene_GetCurrent() == 0x3f) {
        sWeatherRolledAtLoad = Weather_UpdateDaily(self, buf);
        if (sWeatherRolledAtLoad == 0) {
            sWeatherPrevDayRain = self->rained;
        }
    } else {
        if (sWeatherRolledAtLoad != 0) {
            u8 saved = sWeatherPrevDayRain;
            if (Weather_UpdateDaily(self, buf)) {
                sWeatherPrevDayRain = saved;
            }
        } else {
            Weather_UpdateDaily(self, buf);
        }
        sWeatherRolledAtLoad = 0;
    }
    self->hourBase = buf[2] - 6;
    if (self->hourBase < 0) {
        self->hourBase += 0x18;
    }
}

extern "C" BOOL Weather_UpdateDaily(WeatherRecord *self, void *arg) {
    BOOL result = FALSE;
    if (gCommManager->isOnline()) {
        return FALSE;
    }
    u8 a[8];
    u8 b[8];
    ((u32 *)a)[0] = 0;
    ((u32 *)a)[1] = 0;
    MI_CpuCopy8(arg, a, 8);
    DateTime_SubHours(a, 6);
    a[2] = 0;
    a[1] = 0;
    u8 c = a[5];
    if (self->year != c || self->month != a[4] || self->day != a[3]) {
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        result = TRUE;
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        b[5] = self->year;
        b[4] = self->month;
        b[3] = self->day;
        self->year = c;
        self->month = a[4];
        self->day = a[3];
        s32 d = DateTime_DiffMinutes(b, a);
        d = d / 0x5a0;
        if (d > 0) {
            if (d >= 2) {
                self->todayPattern = Weather_PickPattern(self, a);
                DateTime_AddDays(a, result);
                self->tomorrowPattern = Weather_PickPattern(self, a);
            } else {
                self->todayPattern = self->tomorrowPattern;
                DateTime_AddDays(a, result);
                self->tomorrowPattern = Weather_PickPattern(self, a);
            }
        } else if (d < 0) {
            if (d <= -result - 1) {
                self->todayPattern = Weather_PickPattern(self, a);
                DateTime_AddDays(a, result);
                self->tomorrowPattern = Weather_PickPattern(self, a);
            } else {
                self->tomorrowPattern = self->todayPattern;
                self->todayPattern = Weather_PickPattern(self, a);
            }
        }
        sWeatherPrevDayRain = self->rained;
        self->rained = 0;
    }
    if (Scene_GetCurrent() != 0x3f) {
        if (GameStart_IsActive()) {
            self->todayPattern = 4;
        } else {
            s32 t = PlayerData_GetCurrent();
            if (t && ((Unk_02097ff4 *)t)->testFlag(1)) {
                self->todayPattern = 4;
            } else {
                Unk_020c010c_Ent *e = (Unk_020c010c_Ent *)Event_GetTodayList();
                for (s32 i = 0; i < 7; i++) {
                    switch (e->eventId) {
                    case 9:
                    case 10:
                        self->todayPattern = 4;
                        break;
                    }
                    e++;
                }
            }
        }
    }
    return result;
}

extern "C" u8 Weather_PickPattern(void *self, void *p) {
    u8 result = 0;
    s32 idx = DateTime_GetWeatherPeriod(p);
    s32 r = Random_GlobalBelow(100);
    s32 i = result;
    const u8 *tab = sWeatherPatternWeights + idx * 0x20;
    for (; i < 0x20; i++) {
        r -= tab[i];
        if (r < 0) {
            result = i;
            break;
        }
    }
    return result;
}

extern "C" u8 Weather_GetPrevDayRain() {
    return sWeatherPrevDayRain;
}

// ---------------------------------------------------------------------------------------------------------------------

// Library base class; its ctor and dtor are out of line.
class SpNpcTalkRequest {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(void *p);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(Unk_020c0538_Out *out);
};


// Sub-object at 0x658 of SpNpcKatie
class SpNpcKatieTalk : public SpNpcTalkRequest {
public:
    SpNpcKatieTalk();
    virtual ~SpNpcKatieTalk();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onEventTag(void *p);
    virtual void start(Unk_020c0538_Out *out);

    /* 0x04 */ u8 fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
    /* 0x1f */ u8 unk_1f[0x1d];
    /* 0x3c */ Unk_020c0408_Obj *unk_3c;
    /* 0x40 */ u8 unk_40[0x6c];
    /* 0xac */ SpNpcKatie *katie;
    /* 0xb0 */ s32 topic;

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(SpNpcKatie *owner);
};

// Base of SpNpcKatie; its dtor is out of line.
class SpNpcActor : public ProcBase {
public:
    virtual ~SpNpcActor();

    /* 0x004 */ u8 unk_050[0x5c - 0x50];
    /* 0x05c */ u8 position[0x2a0 - 0x5c];
    /* 0x2a0 */ u8 unk_2a0[0xc];
    /* 0x2ac */ u8 unk_2ac[0x3b0 - 0x2ac];
    /* 0x3b0 */ u8 unk_3b0[0x564 - 0x3b0];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x654 - 0x618];
};

class SpNpcKatie : public SpNpcActor {
public:
    virtual ~SpNpcKatie();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcKatieTalk talk;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 escortDeclined;
    /* 0x70e */ u8 unk_70e[0x724 - 0x70e];
    /* 0x724 */ u8 reunionStep;

    void changeAct(s32 state);
    BOOL mainAct08();
};

static inline BOOL Unk_020c06a0_IsMode2() {
    return gScreenTransition == 2;
}
