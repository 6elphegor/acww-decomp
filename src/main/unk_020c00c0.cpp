#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020bfe30_Vec {
    s32 x, y, z;
};

static inline void Unk_020bfe30_Set(Unk_020bfe30_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

struct Unk_020bfe38_Ent {
    u8 unk_00[0x5c];
    s32 unk_5c;
    u8 unk_60[8];
    s32 unk_68;
};

struct Unk_020bfec0_Ent {
    u8 unk_00[0x54];
    s32 unk_54;
};

struct Unk_020bffc0_Mtx {
    s32 m[12];
};

struct CommManager {
    u8 unk_00[0x68];
    s32 unk_68;
    s32 isOnline();
};

class Unk_02097ff4 {
public:
    BOOL func_02098044(u32 a);
};

class SpNpcMissing1;

extern "C" {
void SkySprite_Release(void *p);
}

extern "C" {
void VEC_Add(Unk_020bfe30_Vec *a, Unk_020bfe30_Vec *b, Unk_020bfe30_Vec *c);
}

extern "C" {
Unk_020bfe38_Ent *func_02095204(s32 n);
}

extern "C" {
u32 func_02063b8c(u32 n);
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
s32 func_020b50e8(void);
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
void func_020850e0(void);
}

extern "C" {
void func_02085178(void);
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
void func_0202e1cc(s32 a, s32 b);
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
BOOL func_02094f2c(s32 a, s32 b);
}

extern "C" {
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
}

extern "C" {
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}

extern "C" {
BOOL func_020951b8(s32 a);
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
void SpNpcMissing2_ChangeAct04(void);
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
void SpNpcMissing2_ChangeAct06(void);
}

extern "C" {
BOOL func_020a03c4(void);
}

extern "C" {
void func_020b78c4(void);
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
s32 func_020b4934(void);
}

extern "C" {
void func_020b4bbc(s32 a, s32 b);
}

extern "C" {
extern u8 gScreenTransition;
}

extern "C" {
extern Unk_020bfe30_Vec data_020d1c8c;
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
s32 data_021f4574;
}

extern "C" {
extern SpNpcMissing1 *sSpNpcMissing1Instance;
}

// 0x020d1a28: first .rodata object of this file; read by the previous unit (0x020be9e4, src/main/unk_020b8d9c.cpp)
extern const u32 data_020d1a28;
const u32 data_020d1a28 = 0x20000000;

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
extern u32 sSpNpcMissing1MsgKey;
}

// ---------------------------------------------------------------------------------------------------------------------
static inline void Unk_020bfe38_Add(s32 *dst, s32 v) {
    *dst += v;
}

class Unk_020bfe30 {
public:
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[0x24];
    /* 0x34 */ Unk_020bfe30_Vec unk_34;
    /* 0x40 */ Unk_020bfe30_Vec unk_40;
    /* 0x4c */ u8 unk_4c[4];
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s16 unk_54;
    /* 0x56 */ u8 unk_56[2];
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c[4];
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ u8 unk_64[4];
    /* 0x68 */ s32 unk_68;

    void endRainDrop();
    void updateRainDrop();
    void initRainDrop(BOOL flag);
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable classes of the library (autoload_2)
class SndEnvChannel {
public:
    SndEnvChannel() {}
    virtual ~SndEnvChannel();
    u8 unk_04[0xc];
};

class Unk_0213b938 : public SndEnvChannel {
public:
    Unk_0213b938() {}
    virtual ~Unk_0213b938();
};

class SkyProc : public GameProc {
public:
    virtual void postCreate();

    /* 0x50 */ Unk_0213b938 unk_50;
};

struct WeatherRecord {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    s8 unk_06;
    u8 unk_07;
};

struct Unk_020c010c_Ent {
    u16 unk_00;
    u8 unk_02[10];
};
// prototypes
extern "C" void func_020c0320();
extern "C" void func_020c031c();
extern "C" void Weather_InitNew(WeatherRecord *self);
extern "C" void Weather_SetDateToday(void *p);
extern "C" void Weather_Apply(WeatherRecord *self);
extern "C" BOOL Weather_UpdateDaily(WeatherRecord *self, void *arg);
extern "C" u8 Weather_PickPattern(void *self, void *p);
extern "C" u8 Weather_GetPrevDayRain();


extern "C" void func_020c0320() {}

extern "C" void func_020c031c() {}

extern "C" void Weather_InitNew(WeatherRecord *self) {
    sWeatherPrevDayRain = 0;
    self->unk_07 = 0;
    self->unk_00 = 1;
    self->unk_01 = 1;
    self->unk_02 = 0;
    self->unk_03 = 0;
    self->unk_00 = 0;
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
    if (func_020b50e8() == 0x3f) {
        data_021f4574 = Weather_UpdateDaily(self, buf);
        if (data_021f4574 == 0) {
            sWeatherPrevDayRain = self->unk_07;
        }
    } else {
        if (data_021f4574 != 0) {
            u8 saved = sWeatherPrevDayRain;
            if (Weather_UpdateDaily(self, buf)) {
                sWeatherPrevDayRain = saved;
            }
        } else {
            Weather_UpdateDaily(self, buf);
        }
        data_021f4574 = 0;
    }
    self->unk_06 = buf[2] - 6;
    if (self->unk_06 < 0) {
        self->unk_06 += 0x18;
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
    if (self->unk_02 != c || self->unk_01 != a[4] || self->unk_00 != a[3]) {
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        result = TRUE;
        ((u32 *)b)[0] = 0;
        ((u32 *)b)[1] = 0;
        b[5] = self->unk_02;
        b[4] = self->unk_01;
        b[3] = self->unk_00;
        self->unk_02 = c;
        self->unk_01 = a[4];
        self->unk_00 = a[3];
        s32 d = DateTime_DiffMinutes(b, a);
        d = d / 0x5a0;
        if (d > 0) {
            if (d >= 2) {
                self->unk_04 = Weather_PickPattern(self, a);
                DateTime_AddDays(a, result);
                self->unk_05 = Weather_PickPattern(self, a);
            } else {
                self->unk_04 = self->unk_05;
                DateTime_AddDays(a, result);
                self->unk_05 = Weather_PickPattern(self, a);
            }
        } else if (d < 0) {
            if (d <= -result - 1) {
                self->unk_04 = Weather_PickPattern(self, a);
                DateTime_AddDays(a, result);
                self->unk_05 = Weather_PickPattern(self, a);
            } else {
                self->unk_05 = self->unk_04;
                self->unk_04 = Weather_PickPattern(self, a);
            }
        }
        sWeatherPrevDayRain = self->unk_07;
        self->unk_07 = 0;
    }
    if (func_020b50e8() != 0x3f) {
        if (GameStart_IsActive()) {
            self->unk_04 = 4;
        } else {
            s32 t = PlayerData_GetCurrent();
            if (t && ((Unk_02097ff4 *)t)->func_02098044(1)) {
                self->unk_04 = 4;
            } else {
                Unk_020c010c_Ent *e = (Unk_020c010c_Ent *)Event_GetTodayList();
                for (s32 i = 0; i < 7; i++) {
                    switch (e->unk_00) {
                    case 9:
                    case 10:
                        self->unk_04 = 4;
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
    s32 r = func_02063b8c(100);
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
struct Unk_020c0538_Out {
    u32 unk_00;
    u8 unk_04;
};

// Library base class; its ctor and dtor are out of line.
class SpNpcTalkRequest {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
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
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(void *p);
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
    virtual void vfunc_78(Unk_020c0538_Out *out);
};

struct Unk_020c0408_Obj {
    u8 unk_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[8];
    s32 unk_14;
};

// Sub-object at 0x658 of SpNpcMissing1
class SpNpcMissing1Talk : public SpNpcTalkRequest {
public:
    SpNpcMissing1Talk();
    virtual ~SpNpcMissing1Talk();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_38(void *p);
    virtual void vfunc_78(Unk_020c0538_Out *out);

    /* 0x04 */ u8 unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f[0x1d];
    /* 0x3c */ Unk_020c0408_Obj *unk_3c;
    /* 0x40 */ u8 unk_40[0x6c];
    /* 0xac */ SpNpcMissing1 *unk_ac;
    /* 0xb0 */ s32 unk_b0;

    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(SpNpcMissing1 *owner);
};

// Base of SpNpcMissing1; its dtor is out of line.
class Unk_0202e5a8 : public ProcBase {
public:
    virtual ~Unk_0202e5a8();

    /* 0x004 */ u8 unk_004[0x5c - 4];
    /* 0x05c */ u8 unk_05c[0x2a0 - 0x5c];
    /* 0x2a0 */ u8 unk_2a0[0xc];
    /* 0x2ac */ u8 unk_2ac[0x3b0 - 0x2ac];
    /* 0x3b0 */ u8 unk_3b0[0x564 - 0x3b0];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x654 - 0x618];
};

class SpNpcMissing1 : public Unk_0202e5a8 {
public:
    virtual ~SpNpcMissing1();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ SpNpcMissing1Talk unk_658;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 unk_70d;
    /* 0x70e */ u8 unk_70e[0x724 - 0x70e];
    /* 0x724 */ u8 unk_724;

    void changeAct(s32 state);
    BOOL mainAct08();
};

static inline BOOL Unk_020c06a0_IsMode2() {
    return gScreenTransition == 2;
}
